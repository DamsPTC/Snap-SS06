/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c8ef80; end: 109c8f0ab;  */

long * FUN_109c8ef80(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c8f0ac; end: 109c8f0f3;  */

long FUN_109c8f0ac(long param_1)

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



/* Entry: 109c8f0f4; end: 109c8f11f;  */

void FUN_109c8f0f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c8f120; end: 109c8f13b;  */

undefined ** FUN_109c8f120(void)

{
  return &PTR_DAT_110b35fe0;
}



/* Entry: 109c8f13c; end: 109c8f267;  */

long * FUN_109c8f13c(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c8f268; end: 109c8f2af;  */

long FUN_109c8f268(long param_1)

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



/* Entry: 109c8f2b0; end: 109c8f307;  */

long FUN_109c8f2b0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c8f308; end: 109c8f327;  */

undefined ** FUN_109c8f308(void)

{
  return &PTR_DAT_110b36030;
}



/* Entry: 109c8f328; end: 109c8f553;  */

byte * FUN_109c8f328(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
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
      uVar3 = *(ulong *)(param_1 + 0x10);
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
  uVar3 = *(ulong *)(param_1 + 0x18);
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
      uVar3 = *(ulong *)(param_1 + 0x18);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 0x10;
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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar8 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar5;
          _memcpy(param_2,lVar8,(long)iVar9);
          uVar2 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar9;
          pbVar5 = (byte *)*param_3;
          pbVar7 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = (byte *)((long)plVar1 + (long)((int)pbVar7 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar7;
          } while (pbVar5 <= pbVar7);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar8,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar8,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar2;
    }
  }
  return param_2;
}



/* Entry: 109c8f554; end: 109c8f5eb;  */

ulong FUN_109c8f554(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
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



/* Entry: 109c8f5ec; end: 109c8f61f;  */

long FUN_109c8f5ec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109cb7098(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c8f620; end: 109c8f623;  */

long FUN_109c8f620(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109cb7098(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c8f624; end: 109c8f637;  */

void FUN_109c8f624(void)

{
  FUN_109c8f5ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c8f638; end: 109c8f643;  */

undefined ** FUN_109c8f638(void)

{
  return &PTR_DAT_110b36080;
}



/* Entry: 109c8f644; end: 109c8f68b;  */

void FUN_109c8f644(long param_1)

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



/* Entry: 109c8f68c; end: 109c8f8a7;  */

long * FUN_109c8f68c(long param_1,long *param_2,long *param_3)

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
      param_2 = (long *)0xa;
      func_0x000107c303cc(10,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar6,param_3);
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



/* Entry: 109c8f8a8; end: 109c8f8ab;  */

void FUN_109c8f8a8(long param_1,long param_2)

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



/* Entry: 109c8f8ac; end: 109c8f93b;  */

void FUN_109c8f8ac(long param_1,long param_2)

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



/* Entry: 109c8f93c; end: 109c8f93f;  */

long FUN_109c8f93c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109c8f5ec();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c8f940; end: 109c8f953;  */

void FUN_109c8f940(void)

{
  func_0x000109c8f900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c8f954; end: 109c8f95f;  */

undefined ** FUN_109c8f954(void)

{
  return &PTR_DAT_110b360c8;
}



/* Entry: 109c8f960; end: 109c8f9a7;  */

void FUN_109c8f960(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109c8f644(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 109c8f9a8; end: 109c8faf3;  */

long * FUN_109c8f9a8(long param_1,long *param_2,long *param_3)

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
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x28),param_2,param_3);
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



/* Entry: 109c8faf4; end: 109c8fb67;  */

void FUN_109c8faf4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x000109c8f800();
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



/* Entry: 109c8fb68; end: 109c8fb6b;  */

void FUN_109c8fb68(long param_1,long param_2)

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
      func_0x000109cc2330(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109c8f8ac(*(long *)(param_1 + 0x18));
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



/* Entry: 109c8fb6c; end: 109c8fc03;  */

void FUN_109c8fb6c(long param_1,long param_2)

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
      func_0x000109cc2330(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109c8f8ac(*(long *)(param_1 + 0x18));
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



/* Entry: 109c8fc04; end: 109c8fc5b;  */

long FUN_109c8fc04(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c8fc5c; end: 109c8fc7b;  */

undefined ** FUN_109c8fc5c(void)

{
  return &PTR_DAT_110b36110;
}



/* Entry: 109c8fc7c; end: 109c8fe2b;  */

byte * FUN_109c8fc7c(long param_1,byte *param_2,long *param_3)

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



/* Entry: 109c8fe2c; end: 109c8fe9f;  */

long FUN_109c8fe2c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 109c8fea0; end: 109c8fef7;  */

long FUN_109c8fea0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c8fef8; end: 109c8ff17;  */

undefined ** FUN_109c8fef8(void)

{
  return &PTR_DAT_110b36158;
}



/* Entry: 109c8ff18; end: 109c900c7;  */

byte * FUN_109c8ff18(long param_1,byte *param_2,long *param_3)

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



/* Entry: 109c900c8; end: 109c9013b;  */

long FUN_109c900c8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 109c9013c; end: 109c90193;  */

long FUN_109c9013c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c90194; end: 109c901b3;  */

undefined ** FUN_109c90194(void)

{
  return &PTR_DAT_110b361a0;
}



/* Entry: 109c901b4; end: 109c90363;  */

byte * FUN_109c901b4(long param_1,byte *param_2,long *param_3)

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



/* Entry: 109c90364; end: 109c903d7;  */

long FUN_109c90364(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 109c903d8; end: 109c90447;  */

long FUN_109c903d8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000109c90c08();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c90448; end: 109c9044b;  */

long FUN_109c90448(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000109c90c08();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c9044c; end: 109c9045f;  */

void FUN_109c9044c(void)

{
  FUN_109c903d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c90460; end: 109c9046b;  */

undefined ** FUN_109c90460(void)

{
  return &PTR_DAT_110b361e8;
}



/* Entry: 109c9046c; end: 109c904a7;  */

void FUN_109c9046c(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_109c90b7c();
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



/* Entry: 109c904a8; end: 109c908bf;  */

byte * FUN_109c904a8(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar15 = *(int *)(param_1 + 0x18);
  if (0 < iVar15) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar1 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
      iVar15 = *(int *)(param_1 + 0x18);
    }
    uVar12 = iVar15 * 4;
    uVar13 = (ulong)uVar12;
    pbVar6 = param_2 + 1;
    *param_2 = 10;
    uVar4 = uVar13;
    uVar9 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar6;
        uVar8 = (uint)uVar4;
        pbVar6 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar9 = (uint)uVar4;
      } while (uVar8 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar6 = (byte)uVar9;
    lVar14 = *(long *)(param_1 + 0x20);
    uVar16 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*(long *)param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar6 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10), uVar4 = uVar16,
       (int)pbVar6 < (int)uVar12)) {
      pbVar1 = param_3 + 0x10;
      do {
        iVar15 = (int)pbVar6;
        _memcpy(param_2,lVar14,(long)iVar15);
        uVar12 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar15;
        pbVar2 = param_2 + iVar15;
        pbVar7 = *(byte **)param_3;
        do {
          param_2 = pbVar1;
          pbVar6 = pbVar7;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar10 = pbVar1;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c907a4:
            param_3[0x38] = 1;
LAB_109c90784:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar17 = *(undefined8 *)pbVar7;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar7 + 8);
              *(undefined8 *)pbVar1 = uVar17;
              *(byte **)(param_3 + 8) = pbVar7;
              goto LAB_109c90784;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar1,(long)pbVar7 - (long)pbVar1);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109c907a4;
            } while (uStack_64 == 0);
            puVar11 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar11;
              *(undefined8 *)(param_3 + 0x18) = puVar11[1];
              *(undefined8 *)pbVar1 = uVar17;
              *(byte **)param_3 = pbVar1 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar1 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar11;
              *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
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
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar10 = pbStack_70;
            }
          }
          pbVar2 = pbVar10 + ((int)pbVar2 - (int)pbVar7);
          pbVar7 = pbVar6;
          param_2 = pbVar2;
        } while (pbVar6 <= pbVar2);
        pbVar6 = pbVar6 + (0x10 - (long)param_2);
      } while ((int)pbVar6 < (int)uVar12);
      uVar16 = (ulong)(int)uVar12;
      uVar4 = uVar16;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar16;
  }
  uVar4 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar14 = (long)*(char *)(uVar4 + 0x17);
  if (lVar14 < 0) {
    lVar14 = *(long *)(uVar4 + 8);
  }
  pbVar6 = param_2;
  if (lVar14 != 0) {
    pbVar6 = param_3;
    func_0x000107c280a0(param_3,2,uVar4,param_2);
  }
  uVar4 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar14 = (long)*(char *)(uVar4 + 0x17);
  if (lVar14 < 0) {
    lVar14 = *(long *)(uVar4 + 8);
  }
  pbVar1 = pbVar6;
  if (lVar14 != 0) {
    pbVar1 = param_3;
    func_0x000107c280a0(param_3,0x1e,uVar4,pbVar6);
  }
  uVar4 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar14 = (long)*(char *)(uVar4 + 0x17);
  if (lVar14 < 0) {
    lVar14 = *(long *)(uVar4 + 8);
  }
  pbVar6 = pbVar1;
  if (lVar14 != 0) {
    pbVar6 = param_3;
    func_0x000107c280a0(param_3,0x1f,uVar4,pbVar1);
  }
  pbVar1 = pbVar6;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar1 = (byte *)0x28;
    func_0x000107c303cc(0x28,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x20),pbVar6,param_3);
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    pbVar6 = *(byte **)param_3;
    if (pbVar1 < pbVar6) {
      bVar5 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar1 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar1 = pbVar2 + ((int)pbVar1 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar1);
      bVar5 = *(byte *)(param_1 + 0x48);
    }
    pbVar1[0] = 0x90;
    pbVar1[1] = 3;
    pbVar1[2] = bVar5;
    pbVar1 = pbVar1 + 3;
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
    if (*(long *)param_3 - (long)pbVar1 < (long)(int)uVar12) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar6 < (int)uVar12) {
        do {
          iVar15 = (int)pbVar6;
          _memcpy(pbVar1,lVar14,(long)iVar15);
          uVar12 = (int)uVar13 - iVar15;
          uVar13 = (ulong)uVar12;
          lVar14 = lVar14 + iVar15;
          pbVar6 = *(byte **)param_3;
          pbVar2 = pbVar1 + iVar15;
          do {
            pbVar1 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar2 = pbVar1 + ((int)pbVar2 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            pbVar1 = pbVar2;
          } while (pbVar6 <= pbVar2);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar1);
        } while ((int)pbVar6 < (int)uVar12);
      }
      _memcpy(pbVar1,lVar14,(long)(int)uVar12);
      pbVar1 = pbVar1 + (int)uVar12;
    }
    else {
      _memcpy(pbVar1,lVar14,uVar13 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar12;
    }
  }
  return pbVar1;
}



/* Entry: 109c908c0; end: 109c90a4f;  */

void FUN_109c908c0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar6 = 0;
  if (uVar1 != 0) {
    iVar6 = ((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                          ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  lVar3 = lVar5;
  if (lVar5 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  iVar6 = iVar6 + uVar1 * 4;
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar4 + 8);
    if (-1 < *(char *)(uVar4 + 0x17)) {
      lVar3 = lVar5;
    }
    iVar6 = iVar6 + (int)lVar3 + ((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  lVar3 = lVar5;
  if (lVar5 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar4 + 8);
    if (-1 < *(char *)(uVar4 + 0x17)) {
      lVar3 = lVar5;
    }
    iVar6 = iVar6 + (int)lVar3 + ((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
  }
  uVar4 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  lVar3 = lVar5;
  if (lVar5 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar4 + 8);
    if (-1 < *(char *)(uVar4 + 0x17)) {
      lVar3 = lVar5;
    }
    iVar6 = iVar6 + (int)lVar3 + ((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x40);
    FUN_109c90e54();
    iVar6 = iVar6 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 2;
  }
  iVar2 = iVar6 + 3;
  if (*(char *)(param_1 + 0x48) == '\0') {
    iVar2 = iVar6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 109c90a50; end: 109c90a53;  */

void FUN_109c90a50(long param_1,long param_2)

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



/* Entry: 109c90a54; end: 109c90b7b;  */

void FUN_109c90a54(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_109c90b34;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c90b7c(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 == 0x66) {
    if (iVar3 == 0x66) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 0x66) {
        ppuVar1 = &PTR_PTR_1132fb250;
      }
      func_0x000109c91008(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109c90b34;
    }
    func_0x000109cc2530(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar2 != 0x65) goto LAB_109c90b34;
    if (iVar3 == 0x65) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 0x65) {
        ppuVar1 = &PTR_PTR_1132fb760;
      }
      FUN_109c90f04(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109c90b34;
    }
    func_0x000109cc2474(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_1 + 0x18) = uVar4;
LAB_109c90b34:
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



/* Entry: 109c90b7c; end: 109c90c43;  */

void FUN_109c90b7c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0x66) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_109c90bd8;
    FUN_109c916b8();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0x65) goto LAB_109c90bd8;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_109c90bd8;
    FUN_109c910b0();
  }
  __ZdlPv();
LAB_109c90bd8:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 109c90c44; end: 109c90c47;  */

long FUN_109c90c44(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_109c90b7c(param_1);
  }
  return param_1;
}



/* Entry: 109c90c48; end: 109c90c5b;  */

void FUN_109c90c48(void)

{
  func_0x000109c90c08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c90c5c; end: 109c90c6f;  */

long FUN_109c90c5c(long param_1)

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



/* Entry: 109c90c70; end: 109c90e53;  */

byte * FUN_109c90c70(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar3 = *(ulong *)(param_1 + 0x10);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = uVar3;
    pbVar6 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar3 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar3;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x24);
  pbVar6 = (byte *)(ulong)uVar2;
  if (uVar2 == 0x65) {
    lVar4 = 0x30;
  }
  else {
    if (uVar2 != 0x66) goto LAB_109c90cf8;
    lVar4 = 0x20;
  }
  func_0x000107c303cc(pbVar6,*(long *)(param_1 + 0x18),
                      *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar4),param_2,param_3);
  param_2 = pbVar6;
LAB_109c90cf8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar4 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar4 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      pbVar6 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar6 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar6;
          _memcpy(param_2,lVar4,(long)iVar9);
          uVar2 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar2;
          lVar4 = lVar4 + iVar9;
          pbVar6 = (byte *)*param_3;
          pbVar8 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar6 <= pbVar8);
          pbVar6 = pbVar6 + (0x10 - (long)param_2);
        } while ((int)pbVar6 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar4,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar4,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar2;
    }
  }
  return param_2;
}



/* Entry: 109c90e54; end: 109c90eff;  */

ulong FUN_109c90e54(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x24) == 0x66) {
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_109c91a40();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0x65) goto LAB_109c90ecc;
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_109c9163c();
  }
  uVar3 = uVar3 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 2;
LAB_109c90ecc:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    uVar3 = lVar1 + uVar3;
  }
  *(int *)(param_1 + 0x20) = (int)uVar3;
  return uVar3;
}



/* Entry: 109c90f00; end: 109c90f03;  */

void FUN_109c90f00(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_109c90b34;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c90b7c(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 == 0x66) {
    if (iVar3 == 0x66) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 0x66) {
        ppuVar1 = &PTR_PTR_1132fb250;
      }
      func_0x000109c91008(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109c90b34;
    }
    func_0x000109cc2530(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar2 != 0x65) goto LAB_109c90b34;
    if (iVar3 == 0x65) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 0x65) {
        ppuVar1 = &PTR_PTR_1132fb760;
      }
      FUN_109c90f04(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109c90b34;
    }
    func_0x000109cc2474(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_1 + 0x18) = uVar4;
LAB_109c90b34:
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



/* Entry: 109c90f04; end: 109c910af;  */

void FUN_109c90f04(long param_1,long param_2)

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



/* Entry: 109c910b0; end: 109c91113;  */

long FUN_109c910b0(long param_1)

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



/* Entry: 109c91114; end: 109c91127;  */

void FUN_109c91114(void)

{
  FUN_109c910b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c91128; end: 109c9114b;  */

undefined ** FUN_109c91128(void)

{
  return &PTR_DAT_110b36278;
}



/* Entry: 109c9114c; end: 109c9163b;  */

byte * FUN_109c9114c(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
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
    uVar11 = iVar14 * 4;
    uVar12 = (ulong)uVar11;
    pbVar2 = param_2 + 1;
    *param_2 = 10;
    uVar3 = uVar12;
    uVar5 = uVar11;
    if (0x7f < uVar11) {
      do {
        param_2 = pbVar2;
        uVar6 = (uint)uVar3;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar5 = (uint)uVar3;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar5;
    lVar13 = *(long *)(param_1 + 0x18);
    uVar15 = (ulong)(int)uVar11;
    uVar3 = uVar12;
    if ((*param_3 - (long)param_2 < (long)(int)uVar11) &&
       (pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar15,
       (int)pbVar2 < (int)uVar11)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar14 = (int)pbVar2;
        _memcpy(param_2,lVar13,(long)iVar14);
        uVar11 = (int)uVar12 - iVar14;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar14;
        pbVar9 = param_2 + iVar14;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar2 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar7 = pbVar10;
          if (param_3[6] == 0) {
LAB_109c913f8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c913d8:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109c913d8;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109c913f8;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar10 = uVar16;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar2 = pbVar10 + (int)uStack_64;
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
          pbVar9 = pbVar7 + ((int)pbVar9 - (int)pbVar4);
          pbVar4 = pbVar2;
          param_2 = pbVar9;
        } while (pbVar2 <= pbVar9);
        pbVar2 = pbVar2 + (0x10 - (long)param_2);
      } while ((int)pbVar2 < (int)uVar11);
      uVar15 = (ulong)(int)uVar11;
      uVar3 = uVar15;
    }
    _memcpy(param_2,lVar13,uVar3);
    param_2 = param_2 + uVar15;
  }
  iVar14 = *(int *)(param_1 + 0x20);
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
      iVar14 = *(int *)(param_1 + 0x20);
    }
    uVar11 = iVar14 * 4;
    uVar12 = (ulong)uVar11;
    pbVar2 = param_2 + 1;
    *param_2 = 0x12;
    uVar3 = uVar12;
    uVar5 = uVar11;
    if (0x7f < uVar11) {
      do {
        param_2 = pbVar2;
        uVar6 = (uint)uVar3;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar5 = (uint)uVar3;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar5;
    lVar13 = *(long *)(param_1 + 0x28);
    uVar15 = (ulong)(int)uVar11;
    uVar3 = uVar12;
    if ((*param_3 - (long)param_2 < (long)(int)uVar11) &&
       (pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar15,
       (int)pbVar2 < (int)uVar11)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar14 = (int)pbVar2;
        _memcpy(param_2,lVar13,(long)iVar14);
        uVar11 = (int)uVar12 - iVar14;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar14;
        pbVar9 = param_2 + iVar14;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar2 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar7 = pbVar10;
          if (param_3[6] == 0) {
LAB_109c9150c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c914ec:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109c914ec;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109c9150c;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar10 = uVar16;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar2 = pbVar10 + (int)uStack_64;
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
          pbVar9 = pbVar7 + ((int)pbVar9 - (int)pbVar4);
          pbVar4 = pbVar2;
          param_2 = pbVar9;
        } while (pbVar2 <= pbVar9);
        pbVar2 = pbVar2 + (0x10 - (long)param_2);
      } while ((int)pbVar2 < (int)uVar11);
      uVar15 = (ulong)(int)uVar11;
      uVar3 = uVar15;
    }
    _memcpy(param_2,lVar13,uVar3);
    param_2 = param_2 + uVar15;
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
    if (*param_3 - (long)param_2 < (long)(int)uVar11) {
      pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar2 < (int)uVar11) {
        do {
          iVar14 = (int)pbVar2;
          _memcpy(param_2,lVar13,(long)iVar14);
          uVar11 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar11;
          lVar13 = lVar13 + iVar14;
          pbVar2 = (byte *)*param_3;
          pbVar10 = param_2 + iVar14;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar1 + (long)((int)pbVar10 - (int)pbVar2));
            pbVar2 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar2 <= pbVar10);
          pbVar2 = pbVar2 + (0x10 - (long)param_2);
        } while ((int)pbVar2 < (int)uVar11);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar11);
      param_2 = param_2 + (int)uVar11;
    }
    else {
      _memcpy(param_2,lVar13,uVar12 & 0xffffffff);
      param_2 = param_2 + (int)uVar11;
    }
  }
  return param_2;
}



/* Entry: 109c9163c; end: 109c916b7;  */

long FUN_109c9163c(long param_1)

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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 109c916b8; end: 109c916ff;  */

long FUN_109c916b8(long param_1)

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



/* Entry: 109c91700; end: 109c91713;  */

void FUN_109c91700(void)

{
  FUN_109c916b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c91714; end: 109c91733;  */

undefined ** FUN_109c91714(void)

{
  return &PTR_DAT_110b362c8;
}



/* Entry: 109c91734; end: 109c91a3f;  */

byte * FUN_109c91734(long param_1,byte *param_2,long *param_3)

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
LAB_109c9192c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c9190c:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar12 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109c9190c;
            }
            _memcpy(param_3[1],pbVar12,(long)pbVar4 - (long)pbVar12);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109c9192c;
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



/* Entry: 109c91a40; end: 109c91a9b;  */

long FUN_109c91a40(long param_1)

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



/* Entry: 109c91a9c; end: 109c91c07;  */

void FUN_109c91a9c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xb0) == 0x33) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0xa8), lVar2 == 0)) goto LAB_109c91b0c;
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
  }
  else {
    if (*(int *)(param_1 + 0xb0) != 0x32) goto LAB_109c91b0c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0xa8), lVar2 == 0)) goto LAB_109c91b0c;
    func_0x000109c8f900(lVar2);
  }
  __ZdlPv(lVar2);
LAB_109c91b0c:
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 109c91c08; end: 109c91c1b;  */

void FUN_109c91c08(void)

{
  func_0x000109c91b3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c91c1c; end: 109c91c27;  */

undefined ** FUN_109c91c1c(void)

{
  return &PTR_DAT_110b36320;
}



/* Entry: 109c91c28; end: 109c91ca7;  */

void FUN_109c91c28(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x80));
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_109c91a9c(param_1);
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



/* Entry: 109c91ca8; end: 109c92733;  */

byte * FUN_109c91ca8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  int iVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar4 = *(ulong *)(param_1 + 0x88);
  if (uVar4 != 0) {
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
      uVar4 = *(ulong *)(param_1 + 0x88);
    }
    pbVar12 = param_2 + 1;
    *param_2 = 8;
    uVar5 = uVar4;
    pbVar6 = pbVar12;
    if (0x7f < uVar4) {
      do {
        pbVar12 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar9 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar12;
      } while (uVar9 != 0);
    }
    param_2 = pbVar12 + 1;
    *pbVar12 = (byte)uVar4;
  }
  uVar4 = *(ulong *)(param_1 + 0x90);
  if (uVar4 != 0) {
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
      uVar4 = *(ulong *)(param_1 + 0x90);
    }
    pbVar12 = param_2 + 1;
    *param_2 = 0x10;
    uVar5 = uVar4;
    pbVar6 = pbVar12;
    if (0x7f < uVar4) {
      do {
        pbVar12 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar9 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar12;
      } while (uVar9 != 0);
    }
    param_2 = pbVar12 + 1;
    *pbVar12 = (byte)uVar4;
  }
  uVar4 = *(ulong *)(param_1 + 0x98);
  if (uVar4 != 0) {
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
      uVar4 = *(ulong *)(param_1 + 0x98);
    }
    pbVar12 = param_2 + 1;
    *param_2 = 0x50;
    uVar5 = uVar4;
    pbVar6 = pbVar12;
    if (0x7f < uVar4) {
      do {
        pbVar12 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar9 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar12;
      } while (uVar9 != 0);
    }
    param_2 = pbVar12 + 1;
    *pbVar12 = (byte)uVar4;
  }
  uVar14 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar14) {
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
    pbVar6 = param_2 + 2;
    param_2[0] = 0xa2;
    param_2[1] = 1;
    if (uVar14 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      do {
        param_2 = pbVar6;
        pbVar6 = param_2 + 1;
        *param_2 = (byte)uVar14 | 0x80;
        uVar1 = uVar14 >> 0xe;
        uVar14 = uVar14 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar6 = (byte)uVar14;
    puVar15 = *(ulong **)(param_1 + 0x20);
    iVar18 = *(int *)(param_1 + 0x18);
    pbVar6 = (byte *)(param_3 + 2);
    puVar17 = puVar15;
    do {
      pbVar12 = param_2;
      pbVar13 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar12 = pbVar6;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c91df0:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c91e88:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar13;
              param_3[3] = *(long *)(pbVar13 + 8);
              *(undefined8 *)pbVar6 = uVar19;
              param_3[1] = (long)pbVar13;
              goto LAB_109c91e88;
            }
            _memcpy(param_3[1],pbVar6,(long)pbVar13 - (long)pbVar6);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c91df0;
            } while (uStack_64 == 0);
            puVar10 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar10;
              param_3[3] = puVar10[1];
              *(undefined8 *)pbVar6 = uVar19;
              *param_3 = (long)(pbVar6 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar6 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar12 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar12 + ((int)param_2 - (int)pbVar13);
          pbVar12 = param_2;
          pbVar13 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar17 + 1;
      uVar5 = *puVar17;
      uVar4 = uVar5;
      pbVar13 = pbVar12;
      if (0x7f < uVar5) {
        do {
          pbVar12 = pbVar13 + 1;
          *pbVar13 = (byte)uVar4 | 0x80;
          uVar5 = uVar4 >> 7;
          uVar9 = uVar4 >> 0xe;
          uVar4 = uVar5;
          pbVar13 = pbVar12;
        } while (uVar9 != 0);
      }
      param_2 = pbVar12 + 1;
      *pbVar12 = (byte)uVar5;
      puVar17 = puVar16;
    } while (puVar16 < puVar15 + iVar18);
  }
  uVar14 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar14) {
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
    pbVar6 = param_2 + 2;
    param_2[0] = 0xf2;
    param_2[1] = 1;
    if (uVar14 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      do {
        param_2 = pbVar6;
        pbVar6 = param_2 + 1;
        *param_2 = (byte)uVar14 | 0x80;
        uVar1 = uVar14 >> 0xe;
        uVar14 = uVar14 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar6 = (byte)uVar14;
    puVar15 = *(ulong **)(param_1 + 0x38);
    iVar18 = *(int *)(param_1 + 0x30);
    pbVar6 = (byte *)(param_3 + 2);
    puVar17 = puVar15;
    do {
      pbVar12 = param_2;
      pbVar13 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar12 = pbVar6;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c91f4c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c91fe4:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar13;
              param_3[3] = *(long *)(pbVar13 + 8);
              *(undefined8 *)pbVar6 = uVar19;
              param_3[1] = (long)pbVar13;
              goto LAB_109c91fe4;
            }
            _memcpy(param_3[1],pbVar6,(long)pbVar13 - (long)pbVar6);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c91f4c;
            } while (uStack_64 == 0);
            puVar10 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar10;
              param_3[3] = puVar10[1];
              *(undefined8 *)pbVar6 = uVar19;
              *param_3 = (long)(pbVar6 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar6 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar12 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar12 + ((int)param_2 - (int)pbVar13);
          pbVar12 = param_2;
          pbVar13 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar17 + 1;
      uVar5 = *puVar17;
      uVar4 = uVar5;
      pbVar13 = pbVar12;
      if (0x7f < uVar5) {
        do {
          pbVar12 = pbVar13 + 1;
          *pbVar13 = (byte)uVar4 | 0x80;
          uVar5 = uVar4 >> 7;
          uVar9 = uVar4 >> 0xe;
          uVar4 = uVar5;
          pbVar13 = pbVar12;
        } while (uVar9 != 0);
      }
      param_2 = pbVar12 + 1;
      *pbVar12 = (byte)uVar5;
      puVar17 = puVar16;
    } while (puVar16 < puVar15 + iVar18);
  }
  uVar14 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar14) {
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
    pbVar6 = param_2 + 2;
    param_2[0] = 0xc2;
    param_2[1] = 2;
    if (uVar14 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      do {
        param_2 = pbVar6;
        pbVar6 = param_2 + 1;
        *param_2 = (byte)uVar14 | 0x80;
        uVar1 = uVar14 >> 0xe;
        uVar14 = uVar14 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar6 = (byte)uVar14;
    puVar15 = *(ulong **)(param_1 + 0x50);
    iVar18 = *(int *)(param_1 + 0x48);
    pbVar6 = (byte *)(param_3 + 2);
    puVar17 = puVar15;
    do {
      pbVar12 = param_2;
      pbVar13 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar12 = pbVar6;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c920a8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c92140:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar13;
              param_3[3] = *(long *)(pbVar13 + 8);
              *(undefined8 *)pbVar6 = uVar19;
              param_3[1] = (long)pbVar13;
              goto LAB_109c92140;
            }
            _memcpy(param_3[1],pbVar6,(long)pbVar13 - (long)pbVar6);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c920a8;
            } while (uStack_64 == 0);
            puVar10 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar10;
              param_3[3] = puVar10[1];
              *(undefined8 *)pbVar6 = uVar19;
              *param_3 = (long)(pbVar6 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar6 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar12 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar12 + ((int)param_2 - (int)pbVar13);
          pbVar12 = param_2;
          pbVar13 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar17 + 1;
      uVar5 = *puVar17;
      uVar4 = uVar5;
      pbVar13 = pbVar12;
      if (0x7f < uVar5) {
        do {
          pbVar12 = pbVar13 + 1;
          *pbVar13 = (byte)uVar4 | 0x80;
          uVar5 = uVar4 >> 7;
          uVar9 = uVar4 >> 0xe;
          uVar4 = uVar5;
          pbVar13 = pbVar12;
        } while (uVar9 != 0);
      }
      param_2 = pbVar12 + 1;
      *pbVar12 = (byte)uVar5;
      puVar17 = puVar16;
    } while (puVar16 < puVar15 + iVar18);
  }
  pbVar6 = (byte *)(ulong)*(uint *)(param_1 + 0xb0);
  if ((*(uint *)(param_1 + 0xb0) & 0xfffffffe) == 0x32) {
    func_0x000107c303cc(pbVar6,*(long *)(param_1 + 0xa8),
                        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x14),param_2,param_3);
    param_2 = pbVar6;
  }
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    pbVar6 = (byte *)*param_3;
    if (param_2 < pbVar6) {
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
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      bVar3 = *(byte *)(param_1 + 0xa0);
    }
    param_2[0] = 0xe0;
    param_2[1] = 3;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    pbVar6 = (byte *)*param_3;
    if (param_2 < pbVar6) {
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
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      bVar3 = *(byte *)(param_1 + 0xa1);
    }
    param_2[0] = 0xb0;
    param_2[1] = 4;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  uVar14 = *(uint *)(param_1 + 0x10);
  pbVar6 = param_2;
  if ((uVar14 & 1) != 0) {
    pbVar6 = (byte *)0x5a;
    func_0x000107c303cc(0x5a,*(long *)(param_1 + 0x78),
                        *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x14),param_2,param_3);
  }
  pbVar12 = pbVar6;
  if ((uVar14 >> 1 & 1) != 0) {
    pbVar12 = (byte *)0x5b;
    func_0x000107c303cc(0x5b,*(long *)(param_1 + 0x80),
                        *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x14),pbVar6,param_3);
  }
  uVar14 = *(uint *)(param_1 + 0x70);
  if (0 < (int)uVar14) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= pbVar12) {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar12 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        pbVar12 = (byte *)((long)plVar2 + (long)((int)pbVar12 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= pbVar12);
    }
    pbVar6 = pbVar12 + 2;
    pbVar12[0] = 0xa2;
    pbVar12[1] = 6;
    if (uVar14 < 0x80) {
      pbVar12 = pbVar12 + 1;
    }
    else {
      do {
        pbVar12 = pbVar6;
        pbVar6 = pbVar12 + 1;
        *pbVar12 = (byte)uVar14 | 0x80;
        uVar1 = uVar14 >> 0xe;
        uVar14 = uVar14 >> 7;
      } while (uVar1 != 0);
    }
    pbVar12 = pbVar12 + 2;
    *pbVar6 = (byte)uVar14;
    puVar15 = *(ulong **)(param_1 + 0x68);
    iVar18 = *(int *)(param_1 + 0x60);
    pbVar6 = (byte *)(param_3 + 2);
    puVar17 = puVar15;
    do {
      pbVar13 = pbVar12;
      pbVar7 = (byte *)*param_3;
      if ((byte *)*param_3 <= pbVar12) {
        do {
          pbVar13 = pbVar6;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c922c8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c92360:
            *param_3 = (long)(param_3 + 4);
            pbVar8 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar7;
              param_3[3] = *(long *)(pbVar7 + 8);
              *(undefined8 *)pbVar6 = uVar19;
              param_3[1] = (long)pbVar7;
              goto LAB_109c92360;
            }
            _memcpy(param_3[1],pbVar6,(long)pbVar7 - (long)pbVar6);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c922c8;
            } while (uStack_64 == 0);
            puVar10 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar10;
              param_3[3] = puVar10[1];
              *(undefined8 *)pbVar6 = uVar19;
              *param_3 = (long)(pbVar6 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar8 = pbVar6 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar13 = pbStack_70;
              pbVar8 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar12 = pbVar13 + ((int)pbVar12 - (int)pbVar7);
          pbVar13 = pbVar12;
          pbVar7 = pbVar8;
        } while (pbVar8 <= pbVar12);
      }
      puVar16 = puVar17 + 1;
      uVar5 = *puVar17;
      uVar4 = uVar5;
      pbVar12 = pbVar13;
      if (0x7f < uVar5) {
        do {
          pbVar13 = pbVar12 + 1;
          *pbVar12 = (byte)uVar4 | 0x80;
          uVar5 = uVar4 >> 7;
          uVar9 = uVar4 >> 0xe;
          uVar4 = uVar5;
          pbVar12 = pbVar13;
        } while (uVar9 != 0);
      }
      pbVar12 = pbVar13 + 1;
      *pbVar13 = (byte)uVar5;
      puVar17 = puVar16;
    } while (puVar16 < puVar15 + iVar18);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar11 = *(long *)(uVar4 + 8);
      uVar5 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar11 = uVar4 + 8;
    }
    uVar14 = (uint)uVar5;
    if (*param_3 - (long)pbVar12 < (long)(int)uVar14) {
      pbVar6 = (byte *)((*param_3 - (long)pbVar12) + 0x10);
      if ((int)pbVar6 < (int)uVar14) {
        do {
          iVar18 = (int)pbVar6;
          _memcpy(pbVar12,lVar11,(long)iVar18);
          uVar14 = (int)uVar5 - iVar18;
          uVar5 = (ulong)uVar14;
          lVar11 = lVar11 + iVar18;
          pbVar6 = (byte *)*param_3;
          pbVar13 = pbVar12 + iVar18;
          do {
            pbVar12 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar13 = (byte *)((long)plVar2 + (long)((int)pbVar13 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            pbVar12 = pbVar13;
          } while (pbVar6 <= pbVar13);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar12);
        } while ((int)pbVar6 < (int)uVar14);
      }
      _memcpy(pbVar12,lVar11,(long)(int)uVar14);
      pbVar12 = pbVar12 + (int)uVar14;
    }
    else {
      _memcpy(pbVar12,lVar11,uVar5 & 0xffffffff);
      pbVar12 = pbVar12 + (int)uVar14;
    }
  }
  return pbVar12;
}



/* Entry: 109c92734; end: 109c92a7f;  */

long FUN_109c92734(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    lVar5 = 0;
  }
  else {
    lVar3 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    do {
      lVar3 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar3;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar3;
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3;
    }
    lVar5 = 0;
    if (lVar3 != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 2;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((int)uVar1 < 1) {
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    do {
      lVar7 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar7;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x40) = (int)lVar7;
    lVar3 = 0;
    if (lVar7 != 0) {
      lVar3 = lVar7;
    }
    lVar8 = 0;
    if (lVar7 != 0) {
      lVar8 = (ulong)((int)LZCOUNT((long)(int)lVar7) * -9 + 0x280U >> 6) + 2;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  if ((int)uVar1 < 1) {
    lVar7 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    lVar10 = 0;
  }
  else {
    lVar9 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    do {
      lVar9 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar9;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x58) = (int)lVar9;
    lVar7 = 0;
    if (lVar9 != 0) {
      lVar7 = lVar9;
    }
    lVar10 = 0;
    if (lVar9 != 0) {
      lVar10 = (ulong)((int)LZCOUNT((long)(int)lVar9) * -9 + 0x280U >> 6) + 2;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((int)uVar1 < 1) {
    lVar11 = 0;
    lVar9 = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    lVar11 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x68);
    do {
      lVar11 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar11;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x70) = (int)lVar11;
    if (lVar11 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (ulong)((int)LZCOUNT((long)(int)lVar11) * -9 + 0x280U >> 6) + 2;
    }
  }
  lVar9 = lVar5 + lVar2 + lVar3 + lVar8 + lVar7 + lVar10 + lVar11 + lVar9;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x78);
      FUN_109c908c0();
      lVar9 = lVar9 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x80);
      FUN_109c908c0();
      lVar9 = lVar9 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    lVar9 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x88)) * -9 + 0x2c0U >> 6) + lVar9;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar9 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x90)) * -9 + 0x2c0U >> 6) + lVar9;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar9 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x98)) * -9 + 0x2c0U >> 6) + lVar9;
  }
  lVar2 = lVar9 + 3;
  if (*(char *)(param_1 + 0xa0) == '\0') {
    lVar2 = lVar9;
  }
  lVar5 = lVar2 + 3;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    lVar5 = lVar2;
  }
  if (*(int *)(param_1 + 0xb0) == 0x33) {
    lVar2 = *(long *)(param_1 + 0xa8);
    FUN_109c8fe2c();
  }
  else {
    if (*(int *)(param_1 + 0xb0) != 0x32) goto LAB_109c92a48;
    lVar2 = *(long *)(param_1 + 0xa8);
    FUN_109c8faf4();
  }
  lVar5 = lVar5 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
LAB_109c92a48:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar6 + 0x10);
    }
    lVar5 = lVar2 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 109c92a80; end: 109c92a83;  */

/* WARNING: Possible PIC construction at 0x000109c88d40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c88d44) */

void FUN_109c92a80(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *unaff_x19;
  long unaff_x20;
  ulong uVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar12 = (ulong *)(param_1 + 8);
  uVar13 = *puVar12;
  if ((uVar13 & 1) != 0) {
    uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar3 != 0) {
    iVar6 = *(int *)(param_1 + 0x18);
    iVar7 = iVar6 + iVar3;
    if (*(int *)(param_1 + 0x1c) < iVar7) {
      func_0x0001087675dc(param_1 + 0x18);
      iVar6 = *(int *)(param_1 + 0x18);
      iVar7 = iVar6 + iVar3;
    }
    *(int *)(param_1 + 0x18) = iVar7;
    if (0 < iVar3) {
      uVar11 = iVar3 + 1;
      puVar8 = *(undefined8 **)(param_2 + 0x20);
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 8);
      do {
        *puVar10 = *puVar8;
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (1 < uVar11);
    }
  }
  iVar3 = *(int *)(param_2 + 0x30);
  if (iVar3 != 0) {
    iVar6 = *(int *)(param_1 + 0x30);
    iVar7 = iVar6 + iVar3;
    if (*(int *)(param_1 + 0x34) < iVar7) {
      func_0x0001087675dc(param_1 + 0x30);
      iVar6 = *(int *)(param_1 + 0x30);
      iVar7 = iVar6 + iVar3;
    }
    *(int *)(param_1 + 0x30) = iVar7;
    if (0 < iVar3) {
      uVar11 = iVar3 + 1;
      puVar8 = *(undefined8 **)(param_2 + 0x38);
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar6 * 8);
      do {
        *puVar10 = *puVar8;
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (1 < uVar11);
    }
  }
  iVar3 = *(int *)(param_2 + 0x48);
  if (iVar3 != 0) {
    iVar6 = *(int *)(param_1 + 0x48);
    iVar7 = iVar6 + iVar3;
    if (*(int *)(param_1 + 0x4c) < iVar7) {
      func_0x0001087675dc(param_1 + 0x48);
      iVar6 = *(int *)(param_1 + 0x48);
      iVar7 = iVar6 + iVar3;
    }
    *(int *)(param_1 + 0x48) = iVar7;
    if (0 < iVar3) {
      uVar11 = iVar3 + 1;
      puVar8 = *(undefined8 **)(param_2 + 0x50);
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar6 * 8);
      do {
        *puVar10 = *puVar8;
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (1 < uVar11);
    }
  }
  iVar3 = *(int *)(param_2 + 0x60);
  if (iVar3 != 0) {
    iVar6 = *(int *)(param_1 + 0x60);
    iVar7 = iVar6 + iVar3;
    if (*(int *)(param_1 + 100) < iVar7) {
      func_0x0001087675dc(param_1 + 0x60);
      iVar6 = *(int *)(param_1 + 0x60);
      iVar7 = iVar6 + iVar3;
    }
    *(int *)(param_1 + 0x60) = iVar7;
    if (0 < iVar3) {
      uVar11 = iVar3 + 1;
      puVar8 = *(undefined8 **)(param_2 + 0x68);
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x68) + (long)iVar6 * 8);
      do {
        *puVar10 = *puVar8;
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (1 < uVar11);
    }
  }
  uVar11 = *(uint *)(param_2 + 0x10);
  if ((uVar11 & 3) != 0) {
    if ((uVar11 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar4 = uVar13;
        FUN_109cbb22c(uVar13,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar4;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar11 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar4 = uVar13;
        FUN_109cbb22c(uVar13,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar4;
      }
      else {
        FUN_109c7fc24();
      }
    }
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_2 + 0x90);
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_2 + 0x98);
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  if (*(char *)(param_2 + 0xa1) == '\x01') {
    *(undefined1 *)(param_1 + 0xa1) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar11;
  iVar3 = *(int *)(param_2 + 0xb0);
  if (iVar3 != 0) {
    iVar7 = *(int *)(param_1 + 0xb0);
    if (iVar7 != iVar3) {
      if (iVar7 != 0) {
        FUN_109c91a9c(param_1);
      }
      *(int *)(param_1 + 0xb0) = iVar3;
    }
    if (iVar3 == 0x33) {
      if (iVar7 == 0x33) {
        lVar9 = *(long *)(param_1 + 0xa8);
        ppuVar2 = *(undefined ***)(param_2 + 0xa8);
        if (*(int *)(param_2 + 0xb0) != 0x33) {
          ppuVar2 = &PTR_PTR_1132fa538;
        }
        if (*(int *)(ppuVar2 + 2) != 0) {
          *(int *)(lVar9 + 0x10) = *(int *)(ppuVar2 + 2);
        }
        if (((ulong)ppuVar2[1] & 1) != 0) {
          unaff_x30 = 0x109c88d44;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          puVar5 = (ulong *)(lVar9 + 8);
          unaff_x19 = puVar12;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
      }
      else {
        func_0x000109cc2648(uVar13,*(undefined8 *)(param_2 + 0xa8));
LAB_109c88d64:
        *(ulong *)(param_1 + 0xa8) = uVar13;
      }
    }
    else if (iVar3 == 0x32) {
      if (iVar7 != 0x32) {
        func_0x000109cc25b4(uVar13,*(undefined8 *)(param_2 + 0xa8));
        goto LAB_109c88d64;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0xa8);
      if (*(int *)(param_2 + 0xb0) != 0x32) {
        ppuVar2 = &PTR_PTR_1132faed0;
      }
      FUN_109c8fb6c(*(undefined8 *)(param_1 + 0xa8),ppuVar2);
    }
  }
  puVar5 = puVar12;
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



/* Entry: 109c92a84; end: 109c92aeb;  */

long FUN_109c92a84(long param_1)

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



/* Entry: 109c92aec; end: 109c92aff;  */

void FUN_109c92aec(void)

{
  FUN_109c92a84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c92b00; end: 109c92b0b;  */

undefined ** FUN_109c92b00(void)

{
  return &PTR_DAT_110b36370;
}



/* Entry: 109c92b0c; end: 109c92b83;  */

void FUN_109c92b0c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
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



/* Entry: 109c92b84; end: 109c937eb;  */

byte * FUN_109c92b84(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar11 = param_2;
  if (*(int *)(param_1 + 0x40) != 0) {
    pbVar11 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x40),param_2);
  }
  pbVar5 = pbVar11;
  if (*(int *)(param_1 + 0x44) != 0) {
    pbVar5 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x44),pbVar11);
  }
  pbVar11 = pbVar5;
  if (*(int *)(param_1 + 0x48) != 0) {
    pbVar11 = param_3;
    func_0x0001089f53f0(param_3,*(int *)(param_1 + 0x48),pbVar5);
  }
  uVar13 = *(uint *)(param_1 + 0x4c);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x4c);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0xa0;
    pbVar11[1] = 1;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x50);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x50);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0xa8;
    pbVar11[1] = 1;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x54);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x54);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0xb0;
    pbVar11[1] = 1;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x58);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x58);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0xf8;
    pbVar11[1] = 1;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x5c);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x5c);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0x80;
    pbVar11[1] = 2;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x60);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x60);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0x88;
    pbVar11[1] = 2;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 100);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 100);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0xc0;
    pbVar11[1] = 2;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x68);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x68);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 200;
    pbVar11[1] = 2;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x6c);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x6c);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0xd0;
    pbVar11[1] = 2;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    pbVar5 = *(byte **)param_3;
    if (pbVar11 < pbVar5) {
      bVar3 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      bVar3 = *(byte *)(param_1 + 0x70);
    }
    pbVar11[0] = 0x90;
    pbVar11[1] = 3;
    pbVar11[2] = bVar3;
    pbVar11 = pbVar11 + 3;
  }
  uVar13 = *(uint *)(param_1 + 0x10);
  pbVar5 = pbVar11;
  if ((uVar13 & 1) != 0) {
    pbVar5 = (byte *)0x3c;
    func_0x000107c303cc(0x3c,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),pbVar11,param_3);
  }
  pbVar11 = pbVar5;
  if ((uVar13 >> 1 & 1) != 0) {
    pbVar11 = (byte *)0x3d;
    func_0x000107c303cc(0x3d,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),pbVar5,param_3);
  }
  uVar13 = *(uint *)(param_1 + 0x74);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x74);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0xb0;
    pbVar11[1] = 4;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x78);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x78);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0x80;
    pbVar11[1] = 5;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x7c);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x7c);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0x88;
    pbVar11[1] = 5;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x80);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x80);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0x90;
    pbVar11[1] = 5;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x84);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x84);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0x98;
    pbVar11[1] = 5;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x88);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x88);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0xa0;
    pbVar11[1] = 5;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x8c);
  if (uVar13 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      uVar13 = *(uint *)(param_1 + 0x8c);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0xa8;
    pbVar11[1] = 5;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar11 = pbVar5;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar11 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar11 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  if (*(char *)(param_1 + 0x71) == '\x01') {
    pbVar5 = *(byte **)param_3;
    if (pbVar11 < pbVar5) {
      bVar3 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
      bVar3 = *(byte *)(param_1 + 0x71);
    }
    pbVar11[0] = 0xb0;
    pbVar11[1] = 5;
    pbVar11[2] = bVar3;
    pbVar11 = pbVar11 + 3;
  }
  uVar13 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar13) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar11) {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar11);
    }
    pbVar5 = pbVar11 + 2;
    pbVar11[0] = 0xba;
    pbVar11[1] = 5;
    if (uVar13 < 0x80) {
      pbVar11 = pbVar11 + 1;
    }
    else {
      do {
        pbVar11 = pbVar5;
        pbVar5 = pbVar11 + 1;
        *pbVar11 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    pbVar11 = pbVar11 + 2;
    *pbVar5 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x20);
    iVar17 = *(int *)(param_1 + 0x18);
    pbVar5 = param_3 + 0x10;
    puVar15 = puVar14;
    do {
      pbVar12 = pbVar11;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar11) {
        do {
          pbVar12 = pbVar5;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c9302c:
            param_3[0x38] = 1;
LAB_109c930c4:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar7 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar19 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar5 = uVar19;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c930c4;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar5,(long)pbVar18 - (long)pbVar5);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c9302c;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar5 = uVar19;
              *(byte **)param_3 = pbVar5 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar7 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
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
              pbVar12 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar11 = pbVar12 + ((int)pbVar11 - (int)pbVar18);
          pbVar12 = pbVar11;
          pbVar18 = pbVar7;
        } while (pbVar7 <= pbVar11);
      }
      puVar16 = puVar15 + 1;
      uVar6 = *puVar15;
      uVar4 = uVar6;
      pbVar11 = pbVar12;
      if (0x7f < uVar6) {
        do {
          pbVar12 = pbVar11 + 1;
          *pbVar11 = (byte)uVar4 | 0x80;
          uVar6 = uVar4 >> 7;
          uVar8 = uVar4 >> 0xe;
          uVar4 = uVar6;
          pbVar11 = pbVar12;
        } while (uVar8 != 0);
      }
      pbVar11 = pbVar12 + 1;
      *pbVar12 = (byte)uVar6;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar10 = *(long *)(uVar4 + 8);
      uVar6 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar10 = uVar4 + 8;
    }
    uVar13 = (uint)uVar6;
    if (*(long *)param_3 - (long)pbVar11 < (long)(int)uVar13) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar11) + 0x10);
      if ((int)pbVar5 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar5;
          _memcpy(pbVar11,lVar10,(long)iVar17);
          uVar13 = (int)uVar6 - iVar17;
          uVar6 = (ulong)uVar13;
          lVar10 = lVar10 + iVar17;
          pbVar5 = *(byte **)param_3;
          pbVar12 = pbVar11 + iVar17;
          do {
            pbVar11 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar11 = param_3;
            func_0x000107c303dc();
            pbVar12 = pbVar11 + ((int)pbVar12 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar11 = pbVar12;
          } while (pbVar5 <= pbVar12);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar11);
        } while ((int)pbVar5 < (int)uVar13);
      }
      _memcpy(pbVar11,lVar10,(long)(int)uVar13);
      pbVar11 = pbVar11 + (int)uVar13;
    }
    else {
      _memcpy(pbVar11,lVar10,uVar6 & 0xffffffff);
      pbVar11 = pbVar11 + (int)uVar13;
    }
  }
  return pbVar11;
}



/* Entry: 109c937ec; end: 109c93b83;  */

void FUN_109c937ec(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar4 = 0;
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar4 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    do {
      lVar4 = (ulong)((int)LZCOUNT(*puVar5) * -9 + 0x280U >> 6) + lVar4;
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar4;
    if (lVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = ((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 2;
    }
  }
  iVar3 = iVar3 + (int)lVar4;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
      FUN_109c908c0();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x38);
      FUN_109c908c0();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x44)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x4c)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x50)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x54)) * -9 + 0x280U >> 6) + 2;
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
  if (*(int *)(param_1 + 100) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 100)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x68)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x6c)) * -9 + 0x280U >> 6) + 2;
  }
  iVar2 = iVar3 + 3;
  if (*(char *)(param_1 + 0x70) == '\0') {
    iVar2 = iVar3;
  }
  iVar3 = iVar2 + 3;
  if (*(char *)(param_1 + 0x71) == '\0') {
    iVar3 = iVar2;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x74)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x78)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x7c)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x80)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x84)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x88)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x8c)) * -9 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar6 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 109c93b84; end: 109c93b87;  */

void FUN_109c93b84(long param_1,long param_2)

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
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar4) {
      func_0x0001087675dc(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x18);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined8 **)(param_2 + 0x20);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 8);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 3) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar8;
        FUN_109cbb22c(uVar8,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_109cbb22c(uVar8,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar8;
      }
      else {
        FUN_109c7fc24();
      }
    }
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
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
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
  if (*(int *)(param_2 + 0x6c) != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_2 + 0x6c);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  if (*(int *)(param_2 + 0x84) != 0) {
    *(int *)(param_1 + 0x84) = *(int *)(param_2 + 0x84);
  }
  if (*(int *)(param_2 + 0x88) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_2 + 0x88);
  }
  if (*(int *)(param_2 + 0x8c) != 0) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_2 + 0x8c);
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



/* Entry: 109c93b88; end: 109c93bd3;  */

long FUN_109c93b88(long param_1)

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



/* Entry: 109c93bd4; end: 109c93be7;  */

void FUN_109c93bd4(void)

{
  FUN_109c93b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c93be8; end: 109c93bf3;  */

undefined ** FUN_109c93be8(void)

{
  return &PTR_DAT_110b363c0;
}



/* Entry: 109c93bf4; end: 109c93c57;  */

void FUN_109c93bf4(long param_1)

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
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
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



/* Entry: 109c93c58; end: 109c93f8f;  */

byte * FUN_109c93c58(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  ulong uStack_48;
  
  uVar4 = *(ulong *)(param_1 + 0x28);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x28);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = uVar4;
    pbVar6 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x30);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    uVar5 = uVar4;
    pbVar6 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    pbVar6 = (byte *)*param_3;
    if (param_2 < pbVar6) {
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
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      bVar2 = *(byte *)(param_1 + 0x38);
    }
    *param_2 = 0x50;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  pbVar6 = param_2;
  if ((uVar3 & 1) != 0) {
    pbVar6 = (byte *)0x14;
    func_0x000107c303cc(0x14,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  pbVar8 = pbVar6;
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar8 = (byte *)0x15;
    func_0x000107c303cc(0x15,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),pbVar6,param_3);
  }
  if (*(char *)(param_1 + 0x39) == '\x01') {
    pbVar6 = (byte *)*param_3;
    if (pbVar8 < pbVar6) {
      bVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar8 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= pbVar8);
      bVar2 = *(byte *)(param_1 + 0x39);
    }
    pbVar8[0] = 0xb0;
    pbVar8[1] = 1;
    pbVar8[2] = bVar2;
    pbVar8 = pbVar8 + 3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar10 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar10 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)pbVar8 < (long)(int)uVar3) {
      pbVar6 = (byte *)((*param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar6 < (int)uVar3) {
        do {
          iVar11 = (int)pbVar6;
          _memcpy(pbVar8,lVar10,(long)iVar11);
          uVar3 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar3;
          lVar10 = lVar10 + iVar11;
          pbVar6 = (byte *)*param_3;
          pbVar9 = pbVar8 + iVar11;
          do {
            pbVar8 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar1 + (long)((int)pbVar9 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            pbVar8 = pbVar9;
          } while (pbVar6 <= pbVar9);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar8);
        } while ((int)pbVar6 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar8,lVar10,(long)(int)(uint)uStack_48);
      pbVar8 = pbVar8 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar8,lVar10,uStack_48 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar3;
    }
  }
  return pbVar8;
}



/* Entry: 109c93f90; end: 109c9409f;  */

void FUN_109c93f90(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    iVar5 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_109c908c0();
      iVar5 = iVar5 + ((int)LZCOUNT(iVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_109c908c0();
      iVar5 = iVar5 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar5 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar5;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar5 = ((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + iVar5;
  }
  iVar5 = iVar5 + (uint)*(byte *)(param_1 + 0x38) * 2;
  iVar2 = iVar5 + 3;
  if (*(char *)(param_1 + 0x39) == '\0') {
    iVar2 = iVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 109c940a0; end: 109c940a3;  */

void FUN_109c940a0(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *(undefined1 *)(param_1 + 0x39) = 1;
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



/* Entry: 109c940a4; end: 109c940ef;  */

long FUN_109c940a4(long param_1)

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



/* Entry: 109c940f0; end: 109c94103;  */

void FUN_109c940f0(void)

{
  FUN_109c940a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c94104; end: 109c9410f;  */

undefined ** FUN_109c94104(void)

{
  return &PTR_DAT_110b36410;
}



/* Entry: 109c94110; end: 109c94173;  */

void FUN_109c94110(long param_1)

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
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
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



/* Entry: 109c94174; end: 109c94447;  */

byte * FUN_109c94174(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  ulong uStack_48;
  
  uVar4 = *(ulong *)(param_1 + 0x28);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x28);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = uVar4;
    pbVar6 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x30);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    uVar5 = uVar4;
    pbVar6 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    pbVar6 = (byte *)*param_3;
    if (param_2 < pbVar6) {
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
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      bVar2 = *(byte *)(param_1 + 0x38);
    }
    *param_2 = 0x50;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  pbVar6 = param_2;
  if ((uVar3 & 1) != 0) {
    pbVar6 = (byte *)0x14;
    func_0x000107c303cc(0x14,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  pbVar8 = pbVar6;
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar8 = (byte *)0x15;
    func_0x000107c303cc(0x15,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),pbVar6,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar10 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar10 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)pbVar8 < (long)(int)uVar3) {
      pbVar6 = (byte *)((*param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar6 < (int)uVar3) {
        do {
          iVar11 = (int)pbVar6;
          _memcpy(pbVar8,lVar10,(long)iVar11);
          uVar3 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar3;
          lVar10 = lVar10 + iVar11;
          pbVar6 = (byte *)*param_3;
          pbVar9 = pbVar8 + iVar11;
          do {
            pbVar8 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar1 + (long)((int)pbVar9 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            pbVar8 = pbVar9;
          } while (pbVar6 <= pbVar9);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar8);
        } while ((int)pbVar6 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar8,lVar10,(long)(int)(uint)uStack_48);
      pbVar8 = pbVar8 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar8,lVar10,uStack_48 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar3;
    }
  }
  return pbVar8;
}



/* Entry: 109c94448; end: 109c94547;  */

void FUN_109c94448(long param_1)

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
      FUN_109c908c0();
      iVar3 = iVar3 + ((int)LZCOUNT(iVar3) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_109c908c0();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x38) * 2;
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



/* Entry: 109c94548; end: 109c9454b;  */

void FUN_109c94548(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
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



/* Entry: 109c9454c; end: 109c94597;  */

long FUN_109c9454c(long param_1)

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



/* Entry: 109c94598; end: 109c945ab;  */

void FUN_109c94598(void)

{
  FUN_109c9454c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c945ac; end: 109c945b7;  */

undefined ** FUN_109c945ac(void)

{
  return &PTR_DAT_110b36460;
}



/* Entry: 109c945b8; end: 109c9461b;  */

void FUN_109c945b8(long param_1)

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
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
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



/* Entry: 109c9461c; end: 109c948ef;  */

byte * FUN_109c9461c(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  ulong uStack_48;
  
  uVar4 = *(ulong *)(param_1 + 0x28);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x28);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = uVar4;
    pbVar6 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x30);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    uVar5 = uVar4;
    pbVar6 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    pbVar6 = (byte *)*param_3;
    if (param_2 < pbVar6) {
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
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      bVar2 = *(byte *)(param_1 + 0x38);
    }
    *param_2 = 0x18;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  pbVar6 = param_2;
  if ((uVar3 & 1) != 0) {
    pbVar6 = (byte *)0x14;
    func_0x000107c303cc(0x14,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  pbVar8 = pbVar6;
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar8 = (byte *)0x15;
    func_0x000107c303cc(0x15,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),pbVar6,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar10 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar10 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)pbVar8 < (long)(int)uVar3) {
      pbVar6 = (byte *)((*param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar6 < (int)uVar3) {
        do {
          iVar11 = (int)pbVar6;
          _memcpy(pbVar8,lVar10,(long)iVar11);
          uVar3 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar3;
          lVar10 = lVar10 + iVar11;
          pbVar6 = (byte *)*param_3;
          pbVar9 = pbVar8 + iVar11;
          do {
            pbVar8 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar1 + (long)((int)pbVar9 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            pbVar8 = pbVar9;
          } while (pbVar6 <= pbVar9);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar8);
        } while ((int)pbVar6 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar8,lVar10,(long)(int)(uint)uStack_48);
      pbVar8 = pbVar8 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar8,lVar10,uStack_48 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar3;
    }
  }
  return pbVar8;
}



/* Entry: 109c948f0; end: 109c949ef;  */

void FUN_109c948f0(long param_1)

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
      FUN_109c908c0();
      iVar3 = iVar3 + ((int)LZCOUNT(iVar3) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_109c908c0();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x38) * 2;
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



/* Entry: 109c949f0; end: 109c949f3;  */

void FUN_109c949f0(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
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


