/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c6cab8; end: 109c6cb13;  */

void FUN_109c6cab8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109c6c18c(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109c6c18c(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 109c6cb14; end: 109c6cc7f;  */

long * FUN_109c6cb14(long param_1,long *param_2,long *param_3)

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
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),param_2,param_3);
  }
  plVar2 = plVar1;
  if ((uVar3 >> 1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),plVar1,param_3);
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



/* Entry: 109c6cc80; end: 109c6cd3f;  */

long FUN_109c6cc80(long param_1)

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
      FUN_109c6c364();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109c6c364();
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



/* Entry: 109c6cd40; end: 109c6cd43;  */

void FUN_109c6cd40(long param_1,long param_2)

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
        FUN_109c6fe9c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x000109c6c0f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_109c6fe9c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x000109c6c0f4();
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



/* Entry: 109c6cd44; end: 109c6ce17;  */

void FUN_109c6cd44(long param_1,long param_2)

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
        FUN_109c6fe9c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x000109c6c0f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_109c6fe9c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x000109c6c0f4();
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



/* Entry: 109c6ce18; end: 109c6cedf;  */

void FUN_109c6ce18(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x34) == 0x1f) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_109c6ce74;
    func_0x000109c6ca28();
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0x15) goto LAB_109c6ce74;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_109c6ce74;
    FUN_109c6c708();
  }
  __ZdlPv();
LAB_109c6ce74:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 109c6cee0; end: 109c6cee3;  */

long FUN_109c6cee0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_109c6ce18(param_1);
  }
  return param_1;
}



/* Entry: 109c6cee4; end: 109c6cef7;  */

void FUN_109c6cee4(void)

{
  func_0x000109c6cea4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6cef8; end: 109c6cf03;  */

undefined ** FUN_109c6cef8(void)

{
  return &PTR_DAT_110b2fe20;
}



/* Entry: 109c6cf04; end: 109c6cf43;  */

void FUN_109c6cf04(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_109c6ce18();
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



/* Entry: 109c6cf44; end: 109c6d15b;  */

byte * FUN_109c6cf44(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  pbVar3 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    pbVar3 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  pbVar8 = pbVar3;
  if (*(long *)(param_1 + 0x18) != 0) {
    pbVar8 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x18),pbVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar7 + ((int)pbVar8 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar8);
      uVar1 = *(uint *)(param_1 + 0x20);
    }
    pbVar7 = pbVar8 + 1;
    *pbVar8 = 0x18;
    uVar4 = (ulong)(int)uVar1;
    uVar5 = uVar4;
    pbVar3 = pbVar7;
    if (0x7f < uVar1) {
      do {
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar3 = pbVar7;
      } while (uVar6 != 0);
    }
    pbVar8 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  uVar1 = *(uint *)(param_1 + 0x34);
  pbVar3 = (byte *)(ulong)uVar1;
  if (uVar1 == 0x15) {
    lVar2 = 0x28;
  }
  else {
    if (uVar1 != 0x1f) goto LAB_109c6d000;
    lVar2 = 0x14;
  }
  func_0x000107c303cc(pbVar3,*(long *)(param_1 + 0x28),
                      *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar2),pbVar8,param_3);
  pbVar8 = pbVar3;
LAB_109c6d000:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar2 = uVar5 + 8;
    }
    uVar1 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar8 < (long)(int)uVar1) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar3 < (int)uVar1) {
        do {
          iVar9 = (int)pbVar3;
          _memcpy(pbVar8,lVar2,(long)iVar9);
          uVar1 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar1;
          lVar2 = lVar2 + iVar9;
          pbVar3 = *(byte **)param_3;
          pbVar7 = pbVar8 + iVar9;
          do {
            pbVar8 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar8 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar8 + ((int)pbVar7 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar8 = pbVar7;
          } while (pbVar3 <= pbVar7);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar8);
        } while ((int)pbVar3 < (int)uVar1);
      }
      uStack_48._0_4_ = uVar1;
      _memcpy(pbVar8,lVar2,(long)(int)(uint)uStack_48);
      pbVar8 = pbVar8 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar8,lVar2,uStack_48 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar1;
    }
  }
  return pbVar8;
}



/* Entry: 109c6d15c; end: 109c6d247;  */

ulong FUN_109c6d15c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar3;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x34) == 0x1f) {
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_109c6cc80();
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0x15) goto LAB_109c6d214;
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x000109c6c928();
  }
  uVar3 = uVar3 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 2;
LAB_109c6d214:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    uVar3 = lVar1 + uVar3;
  }
  *(int *)(param_1 + 0x30) = (int)uVar3;
  return uVar3;
}



/* Entry: 109c6d248; end: 109c6d24b;  */

void FUN_109c6d248(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  iVar2 = *(int *)(param_2 + 0x34);
  if (iVar2 == 0) goto LAB_109c6d344;
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c6ce18(param_1);
    }
    *(int *)(param_1 + 0x34) = iVar2;
  }
  if (iVar2 == 0x1f) {
    if (iVar3 == 0x1f) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x34) != 0x1f) {
        ppuVar1 = &PTR_PTR_1132ef678;
      }
      FUN_109c6cd44(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109c6d344;
    }
    func_0x000109c6ffb8(uVar4,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar2 != 0x15) goto LAB_109c6d344;
    if (iVar3 == 0x15) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x34) != 0x15) {
        ppuVar1 = &PTR_PTR_1132ef6d0;
      }
      FUN_109c6c9d4(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109c6d344;
    }
    FUN_109c6ff28(uVar4,*(undefined8 *)(param_2 + 0x28));
  }
  *(ulong *)(param_1 + 0x28) = uVar4;
LAB_109c6d344:
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



/* Entry: 109c6d24c; end: 109c6d38b;  */

void FUN_109c6d24c(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  iVar2 = *(int *)(param_2 + 0x34);
  if (iVar2 == 0) goto LAB_109c6d344;
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c6ce18(param_1);
    }
    *(int *)(param_1 + 0x34) = iVar2;
  }
  if (iVar2 == 0x1f) {
    if (iVar3 == 0x1f) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x34) != 0x1f) {
        ppuVar1 = &PTR_PTR_1132ef678;
      }
      FUN_109c6cd44(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109c6d344;
    }
    func_0x000109c6ffb8(uVar4,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar2 != 0x15) goto LAB_109c6d344;
    if (iVar3 == 0x15) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x34) != 0x15) {
        ppuVar1 = &PTR_PTR_1132ef6d0;
      }
      FUN_109c6c9d4(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109c6d344;
    }
    FUN_109c6ff28(uVar4,*(undefined8 *)(param_2 + 0x28));
  }
  *(ulong *)(param_1 + 0x28) = uVar4;
LAB_109c6d344:
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



/* Entry: 109c6d38c; end: 109c6d3d3;  */

long FUN_109c6d38c(long param_1)

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



/* Entry: 109c6d3d4; end: 109c6d3d7;  */

long FUN_109c6d3d4(long param_1)

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



/* Entry: 109c6d3d8; end: 109c6d3eb;  */

void FUN_109c6d3d8(void)

{
  FUN_109c6d38c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6d3ec; end: 109c6d40b;  */

undefined ** FUN_109c6d3ec(void)

{
  return &PTR_DAT_110b2fe68;
}



/* Entry: 109c6d40c; end: 109c6d6db;  */

byte * FUN_109c6d40c(long param_1,byte *param_2,long *param_3)

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
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
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
    puVar13 = *(ulong **)(param_1 + 0x18);
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
LAB_109c6d4cc:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c6d564:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109c6d564;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c6d4cc;
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
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
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



/* Entry: 109c6d6dc; end: 109c6d77f;  */

long FUN_109c6d6dc(long param_1)

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



/* Entry: 109c6d780; end: 109c6d827;  */

void FUN_109c6d780(long param_1,long param_2)

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



/* Entry: 109c6d828; end: 109c6d867;  */

long FUN_109c6d828(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109c6d868; end: 109c6d86b;  */

long FUN_109c6d868(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109c6d86c; end: 109c6d87f;  */

void FUN_109c6d86c(void)

{
  FUN_109c6d828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6d880; end: 109c6d88b;  */

undefined ** FUN_109c6d880(void)

{
  return &PTR_DAT_110b2feb8;
}



/* Entry: 109c6d88c; end: 109c6d8d3;  */

void FUN_109c6d88c(long param_1)

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



/* Entry: 109c6d8d4; end: 109c6daef;  */

long * FUN_109c6d8d4(long param_1,long *param_2,long *param_3)

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
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x24),plVar6,param_3);
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



/* Entry: 109c6daf0; end: 109c6daf3;  */

void FUN_109c6daf0(long param_1,long param_2)

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



/* Entry: 109c6daf4; end: 109c6db47;  */

void FUN_109c6daf4(long param_1,long param_2)

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



/* Entry: 109c6db48; end: 109c6db87;  */

long FUN_109c6db48(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109c6db88; end: 109c6db8b;  */

long FUN_109c6db88(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109c6db8c; end: 109c6db9f;  */

void FUN_109c6db8c(void)

{
  FUN_109c6db48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6dba0; end: 109c6dbab;  */

undefined ** FUN_109c6dba0(void)

{
  return &PTR_DAT_110b2ff10;
}



/* Entry: 109c6dbac; end: 109c6dbf3;  */

void FUN_109c6dbac(long param_1)

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



/* Entry: 109c6dbf4; end: 109c6de0f;  */

long * FUN_109c6dbf4(long param_1,long *param_2,long *param_3)

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
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar6,param_3);
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



/* Entry: 109c6de10; end: 109c6de13;  */

void FUN_109c6de10(long param_1,long param_2)

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



/* Entry: 109c6de14; end: 109c6df57;  */

void FUN_109c6de14(long param_1,long param_2)

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



/* Entry: 109c6df58; end: 109c6df5b;  */

long FUN_109c6df58(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x000109c6de68(param_1);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c6df5c; end: 109c6df6f;  */

void FUN_109c6df5c(void)

{
  func_0x000109c6def4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6df70; end: 109c6df7b;  */

undefined ** FUN_109c6df70(void)

{
  return &PTR_DAT_110b2ff68;
}



/* Entry: 109c6df7c; end: 109c6dfbf;  */

void FUN_109c6df7c(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  func_0x000109c6de68();
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
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



/* Entry: 109c6dfc0; end: 109c6e4b7;  */

byte * FUN_109c6dfc0(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  int iVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar14 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar14) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar14) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar14 | 0x80;
        uVar1 = uVar14 >> 0xe;
        uVar14 = uVar14 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar14;
    puVar15 = *(ulong **)(param_1 + 0x18);
    iVar18 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar16 = puVar15;
    do {
      pbVar12 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar12 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c6e080:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c6e118:
            *param_3 = (long)(param_3 + 4);
            pbVar8 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar7 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar4 = uVar7;
              param_3[1] = (long)pbVar11;
              goto LAB_109c6e118;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar11 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c6e080;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar7 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar7;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar8 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar7 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar7;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar12 = pbStack_70;
              pbVar8 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar12 + ((int)param_2 - (int)pbVar11);
          pbVar12 = param_2;
          pbVar11 = pbVar8;
        } while (pbVar8 <= param_2);
      }
      puVar17 = puVar16 + 1;
      uVar5 = *puVar16;
      uVar6 = uVar5;
      pbVar11 = pbVar12;
      if (0x7f < uVar5) {
        do {
          pbVar12 = pbVar11 + 1;
          *pbVar11 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar10 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar11 = pbVar12;
        } while (uVar10 != 0);
      }
      param_2 = pbVar12 + 1;
      *pbVar12 = (byte)uVar5;
      puVar16 = puVar17;
    } while (puVar17 < puVar15 + iVar18);
  }
  uVar14 = *(uint *)(param_1 + 0x24);
  if (uVar14 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar14 = *(uint *)(param_1 + 0x24);
    }
    pbVar12 = param_2 + 1;
    *param_2 = 0x10;
    uVar5 = (ulong)(int)uVar14;
    uVar6 = uVar5;
    pbVar4 = pbVar12;
    if (0x7f < uVar14) {
      do {
        pbVar12 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar10 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar12;
      } while (uVar10 != 0);
    }
    param_2 = pbVar12 + 1;
    *pbVar12 = (byte)uVar5;
  }
  uVar14 = *(uint *)(param_1 + 0x3c);
  pbVar4 = (byte *)(ulong)uVar14;
  if (uVar14 == 0x1f || uVar14 == 0x15) {
    func_0x000107c303cc(pbVar4,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x28),param_2,param_3);
    param_2 = pbVar4;
  }
  iVar18 = *(int *)(param_1 + 0x40);
  if (iVar18 != 0x3d) {
    if (iVar18 != 0x33) {
      if (iVar18 != 0x29) goto LAB_109c6e228;
      pbVar4 = (byte *)*param_3;
      if (param_2 < pbVar4) {
LAB_109c6e1c4:
        uVar14 = *(uint *)(param_1 + 0x30);
        uVar6 = (ulong)(int)uVar14;
        pbVar4 = param_2 + 2;
        param_2[0] = 200;
        param_2[1] = 2;
        uVar5 = uVar6;
        pbVar12 = pbVar4;
        if (0x7f < uVar14) {
          do {
            pbVar4 = pbVar12 + 1;
            *pbVar12 = (byte)uVar5 | 0x80;
            uVar6 = uVar5 >> 7;
            uVar10 = uVar5 >> 0xe;
            uVar5 = uVar6;
            pbVar12 = pbVar4;
          } while (uVar10 != 0);
        }
      }
      else {
        do {
          if ((char)param_3[7] == '\x01') {
            param_2 = (byte *)(param_3 + 2);
            break;
          }
          plVar2 = param_3;
          func_0x000107c303dc();
          param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
          pbVar4 = (byte *)*param_3;
        } while (pbVar4 <= param_2);
        if (*(int *)(param_1 + 0x40) == 0x29) goto LAB_109c6e1c4;
        uVar6 = 0;
        pbVar4 = param_2 + 2;
        param_2[0] = 200;
        param_2[1] = 2;
      }
      param_2 = pbVar4 + 1;
      *pbVar4 = (byte)uVar6;
      goto LAB_109c6e228;
    }
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
LAB_109c6e1f0:
      uVar3 = *(undefined4 *)(param_1 + 0x30);
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      if (*(int *)(param_1 + 0x40) == 0x33) goto LAB_109c6e1f0;
      uVar3 = 0;
    }
    param_2[0] = 0x9d;
    param_2[1] = 3;
    *(undefined4 *)(param_2 + 2) = uVar3;
    param_2 = param_2 + 6;
    goto LAB_109c6e228;
  }
  pbVar4 = (byte *)*param_3;
  if (param_2 < pbVar4) {
LAB_109c6e214:
    uVar7 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    do {
      if ((char)param_3[7] == '\x01') {
        param_2 = (byte *)(param_3 + 2);
        break;
      }
      plVar2 = param_3;
      func_0x000107c303dc();
      param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
      pbVar4 = (byte *)*param_3;
    } while (pbVar4 <= param_2);
    if (*(int *)(param_1 + 0x40) == 0x3d) goto LAB_109c6e214;
    uVar7 = 0;
  }
  param_2[0] = 0xe9;
  param_2[1] = 3;
  *(undefined8 *)(param_2 + 2) = uVar7;
  param_2 = param_2 + 10;
LAB_109c6e228:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar13 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar13 = uVar6 + 8;
    }
    uVar14 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar14) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar14) {
        do {
          iVar18 = (int)pbVar4;
          _memcpy(param_2,lVar13,(long)iVar18);
          uVar14 = (int)uVar5 - iVar18;
          uVar5 = (ulong)uVar14;
          lVar13 = lVar13 + iVar18;
          pbVar4 = (byte *)*param_3;
          pbVar12 = param_2 + iVar18;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar12 = (byte *)((long)plVar2 + (long)((int)pbVar12 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar12;
          } while (pbVar4 <= pbVar12);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar14);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar14);
      param_2 = param_2 + (int)uVar14;
    }
    else {
      _memcpy(param_2,lVar13,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar14;
    }
  }
  return param_2;
}



/* Entry: 109c6e4b8; end: 109c6e62b;  */

long FUN_109c6e4b8(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar3 = 0;
    lVar5 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar3 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar3 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar3;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar3;
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar5 = lVar5 + lVar3;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x3c) == 0x1f) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x000109c6dd68();
  }
  else {
    if (*(int *)(param_1 + 0x3c) != 0x15) goto LAB_109c6e5ac;
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x000109c6da48();
  }
  lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
LAB_109c6e5ac:
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0x3d) {
    lVar5 = lVar5 + 10;
  }
  else if (iVar2 == 0x33) {
    lVar5 = lVar5 + 6;
  }
  else if (iVar2 == 0x29) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar6 + 0x10);
    }
    lVar5 = lVar3 + lVar5;
  }
  *(int *)(param_1 + 0x38) = (int)lVar5;
  return lVar5;
}



/* Entry: 109c6e62c; end: 109c6e62f;  */

void FUN_109c6e62c(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
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
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar4 = iVar3 + iVar2;
    if (*(int *)(param_1 + 0x14) < iVar4) {
      func_0x00010598df1c(param_1 + 0x10);
      iVar3 = *(int *)(param_1 + 0x10);
      iVar4 = iVar3 + iVar2;
    }
    *(int *)(param_1 + 0x10) = iVar4;
    if (0 < iVar2) {
      uVar7 = iVar2 + 1;
      puVar5 = *(undefined8 **)(param_2 + 0x18);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar3 * 8);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  iVar2 = *(int *)(param_2 + 0x3c);
  if (iVar2 == 0) goto LAB_109c6e758;
  iVar4 = *(int *)(param_1 + 0x3c);
  if (iVar4 != iVar2) {
    if (iVar4 != 0) {
      func_0x000109c6de68(param_1);
    }
    *(int *)(param_1 + 0x3c) = iVar2;
  }
  if (iVar2 == 0x1f) {
    if (iVar4 == 0x1f) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x3c) != 0x1f) {
        ppuVar1 = &PTR_PTR_1132ef700;
      }
      func_0x000109c6de14(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109c6e758;
    }
    func_0x000109c700f8(uVar8,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar2 != 0x15) goto LAB_109c6e758;
    if (iVar4 == 0x15) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x3c) != 0x15) {
        ppuVar1 = &PTR_PTR_1132ef730;
      }
      FUN_109c6daf4(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109c6e758;
    }
    func_0x000109c70068(uVar8,*(undefined8 *)(param_2 + 0x28));
  }
  *(ulong *)(param_1 + 0x28) = uVar8;
LAB_109c6e758:
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x40) != iVar2) {
      *(int *)(param_1 + 0x40) = iVar2;
    }
    if (iVar2 == 0x3d) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    else if (iVar2 == 0x33) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    else if (iVar2 == 0x29) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
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



/* Entry: 109c6e630; end: 109c6e803;  */

void FUN_109c6e630(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
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
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar4 = iVar3 + iVar2;
    if (*(int *)(param_1 + 0x14) < iVar4) {
      func_0x00010598df1c(param_1 + 0x10);
      iVar3 = *(int *)(param_1 + 0x10);
      iVar4 = iVar3 + iVar2;
    }
    *(int *)(param_1 + 0x10) = iVar4;
    if (0 < iVar2) {
      uVar7 = iVar2 + 1;
      puVar5 = *(undefined8 **)(param_2 + 0x18);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar3 * 8);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  iVar2 = *(int *)(param_2 + 0x3c);
  if (iVar2 == 0) goto LAB_109c6e758;
  iVar4 = *(int *)(param_1 + 0x3c);
  if (iVar4 != iVar2) {
    if (iVar4 != 0) {
      func_0x000109c6de68(param_1);
    }
    *(int *)(param_1 + 0x3c) = iVar2;
  }
  if (iVar2 == 0x1f) {
    if (iVar4 == 0x1f) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x3c) != 0x1f) {
        ppuVar1 = &PTR_PTR_1132ef700;
      }
      func_0x000109c6de14(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109c6e758;
    }
    func_0x000109c700f8(uVar8,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar2 != 0x15) goto LAB_109c6e758;
    if (iVar4 == 0x15) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x3c) != 0x15) {
        ppuVar1 = &PTR_PTR_1132ef730;
      }
      FUN_109c6daf4(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109c6e758;
    }
    func_0x000109c70068(uVar8,*(undefined8 *)(param_2 + 0x28));
  }
  *(ulong *)(param_1 + 0x28) = uVar8;
LAB_109c6e758:
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x40) != iVar2) {
      *(int *)(param_1 + 0x40) = iVar2;
    }
    if (iVar2 == 0x3d) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    else if (iVar2 == 0x33) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    else if (iVar2 == 0x29) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
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



/* Entry: 109c6e804; end: 109c6e8af;  */

void FUN_109c6e804(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x1c) == 2) || (*(int *)(param_1 + 0x1c) == 1)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 == 0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        func_0x0001053936ac();
      }
      __ZdlPv(lVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 109c6e8b0; end: 109c6e8b3;  */

long FUN_109c6e8b0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109c6e804(param_1);
  }
  return param_1;
}



/* Entry: 109c6e8b4; end: 109c6e8c7;  */

void FUN_109c6e8b4(void)

{
  func_0x000109c6e874();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6e8c8; end: 109c6e8d3;  */

undefined ** FUN_109c6e8c8(void)

{
  return &PTR_DAT_110b2ffb0;
}



/* Entry: 109c6e8d4; end: 109c6e90b;  */

void FUN_109c6e8d4(long param_1)

{
  ulong *puVar1;
  
  FUN_109c6e804();
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



/* Entry: 109c6e90c; end: 109c6ea5b;  */

long * FUN_109c6e90c(long param_1,long *param_2,long *param_3)

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
  if (*(uint *)(param_1 + 0x1c) - 1 < 2) {
    func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x10),
                        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10),param_2,param_3);
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



/* Entry: 109c6ea5c; end: 109c6eaeb;  */

long FUN_109c6ea5c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)(param_1 + 0x1c) == 2) || (*(int *)(param_1 + 0x1c) == 1)) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
    if ((uVar1 & 1) == 0) {
      lVar2 = 0;
    }
    else {
      uVar1 = uVar1 & 0xfffffffffffffffe;
      lVar2 = (long)*(char *)(uVar1 + 0x1f);
      if (lVar2 < 0) {
        lVar2 = *(long *)(uVar1 + 0x10);
      }
    }
    *(int *)(*(long *)(param_1 + 0x10) + 0x10) = (int)lVar2;
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  else {
    lVar2 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return lVar2;
}



/* Entry: 109c6eaec; end: 109c6ec0f;  */

/* WARNING: Possible PIC construction at 0x000109c6eba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c6eba4) */

void FUN_109c6eaec(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
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
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_109c6e804(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    if (iVar2 == 2) {
      if (iVar3 == 2) {
        ppuVar6 = *(undefined ***)(param_2 + 0x10);
        ppuVar7 = &PTR_PTR_1132ef610;
        bVar4 = *(int *)(param_2 + 0x1c) == 2;
        goto LAB_109c6eb84;
      }
      FUN_109c70220(uVar9,*(undefined8 *)(param_2 + 0x10));
LAB_109c6ebc4:
      *(ulong *)(param_1 + 0x10) = uVar9;
    }
    else if (iVar2 == 1) {
      if (iVar3 != 1) {
        FUN_109c70188(uVar9,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109c6ebc4;
      }
      ppuVar6 = *(undefined ***)(param_2 + 0x10);
      ppuVar7 = &PTR_PTR_1132ef628;
      bVar4 = *(int *)(param_2 + 0x1c) == 1;
LAB_109c6eb84:
      if (!bVar4) {
        ppuVar6 = ppuVar7;
      }
      if (((ulong)ppuVar6[1] & 1) != 0) {
        unaff_x30 = 0x109c6eba4;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar5 = (ulong *)(*(long *)(param_1 + 0x10) + 8);
        unaff_x19 = puVar8;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  puVar5 = puVar8;
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



/* Entry: 109c6ec10; end: 109c6ecdb;  */

void FUN_109c6ec10(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x28) == 3) || (*(int *)(param_1 + 0x28) == 1)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 == 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        func_0x0001053936ac();
      }
      __ZdlPv(lVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 109c6ecdc; end: 109c6ecdf;  */

long FUN_109c6ecdc(long param_1)

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
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_109c6ec10(param_1);
  }
  return param_1;
}



/* Entry: 109c6ece0; end: 109c6ecf3;  */

void FUN_109c6ece0(void)

{
  func_0x000109c6ec80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6ecf4; end: 109c6ecff;  */

undefined ** FUN_109c6ecf4(void)

{
  return &PTR_DAT_110b30000;
}



/* Entry: 109c6ed00; end: 109c6ed4f;  */

void FUN_109c6ed00(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c6c18c(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_109c6ec10(param_1);
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



/* Entry: 109c6ed50; end: 109c6eec3;  */

long * FUN_109c6ed50(long param_1,long *param_2,long *param_3)

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
  
  plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x28) | 2) == 3) {
    func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,param_3);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x65;
    func_0x000107c303cc(0x65,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),param_2,param_3);
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



/* Entry: 109c6eec4; end: 109c6ef93;  */

void FUN_109c6eec4(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_109c6c364();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 2;
  }
  if ((*(int *)(param_1 + 0x28) == 3) || (*(int *)(param_1 + 0x28) == 1)) {
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    if ((uVar3 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar3 = uVar3 & 0xfffffffffffffffe;
      lVar4 = (long)*(char *)(uVar3 + 0x1f);
      if (lVar4 < 0) {
        lVar4 = *(long *)(uVar3 + 0x10);
      }
    }
    iVar2 = (int)lVar4;
    *(int *)(*(long *)(param_1 + 0x20) + 0x10) = iVar2;
    iVar1 = iVar1 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar4 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 109c6ef94; end: 109c6ef97;  */

/* WARNING: Possible PIC construction at 0x000109c6f080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c6f084) */

void FUN_109c6ef94(long param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong *unaff_x19;
  ulong *puVar10;
  long unaff_x20;
  ulong uVar11;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar10 = (ulong *)(param_1 + 8);
  uVar11 = *puVar10;
  if ((uVar11 & 1) != 0) {
    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar6 = uVar11;
      FUN_109c6fe9c(uVar11,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar6;
    }
    else {
      func_0x000109c6c0f4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_109c6ec10(param_1);
      }
      *(int *)(param_1 + 0x28) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 == 3) {
        ppuVar8 = *(undefined ***)(param_2 + 0x20);
        ppuVar9 = &PTR_PTR_1132ef610;
        bVar5 = *(int *)(param_2 + 0x28) == 3;
        goto LAB_109c6f064;
      }
      FUN_109c70220(uVar11,*(undefined8 *)(param_2 + 0x20));
LAB_109c6f0a4:
      *(ulong *)(param_1 + 0x20) = uVar11;
    }
    else if (iVar3 == 1) {
      if (iVar4 != 1) {
        FUN_109c70188(uVar11,*(undefined8 *)(param_2 + 0x20));
        goto LAB_109c6f0a4;
      }
      ppuVar8 = *(undefined ***)(param_2 + 0x20);
      ppuVar9 = &PTR_PTR_1132ef628;
      bVar5 = *(int *)(param_2 + 0x28) == 1;
LAB_109c6f064:
      if (!bVar5) {
        ppuVar8 = ppuVar9;
      }
      if (((ulong)ppuVar8[1] & 1) != 0) {
        unaff_x30 = 0x109c6f084;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar7 = (ulong *)(*(long *)(param_1 + 0x20) + 8);
        unaff_x19 = puVar10;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  puVar7 = puVar10;
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



/* Entry: 109c6ef98; end: 109c6f0ef;  */

/* WARNING: Possible PIC construction at 0x000109c6f080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c6f084) */

void FUN_109c6ef98(long param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong *unaff_x19;
  ulong *puVar10;
  long unaff_x20;
  ulong uVar11;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar10 = (ulong *)(param_1 + 8);
  uVar11 = *puVar10;
  if ((uVar11 & 1) != 0) {
    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar6 = uVar11;
      FUN_109c6fe9c(uVar11,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar6;
    }
    else {
      func_0x000109c6c0f4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_109c6ec10(param_1);
      }
      *(int *)(param_1 + 0x28) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 == 3) {
        ppuVar8 = *(undefined ***)(param_2 + 0x20);
        ppuVar9 = &PTR_PTR_1132ef610;
        bVar5 = *(int *)(param_2 + 0x28) == 3;
        goto LAB_109c6f064;
      }
      FUN_109c70220(uVar11,*(undefined8 *)(param_2 + 0x20));
LAB_109c6f0a4:
      *(ulong *)(param_1 + 0x20) = uVar11;
    }
    else if (iVar3 == 1) {
      if (iVar4 != 1) {
        FUN_109c70188(uVar11,*(undefined8 *)(param_2 + 0x20));
        goto LAB_109c6f0a4;
      }
      ppuVar8 = *(undefined ***)(param_2 + 0x20);
      ppuVar9 = &PTR_PTR_1132ef628;
      bVar5 = *(int *)(param_2 + 0x28) == 1;
LAB_109c6f064:
      if (!bVar5) {
        ppuVar8 = ppuVar9;
      }
      if (((ulong)ppuVar8[1] & 1) != 0) {
        unaff_x30 = 0x109c6f084;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar7 = (ulong *)(*(long *)(param_1 + 0x20) + 8);
        unaff_x19 = puVar10;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  puVar7 = puVar10;
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



/* Entry: 109c6f0f0; end: 109c6f257;  */

void FUN_109c6f0f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 < 4) {
    if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) goto LAB_109c6f1f8;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) goto LAB_109c6f1f8;
    if ((*(byte *)(lVar3 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) goto LAB_109c6f1f8;
      func_0x000109c6cea4(lVar3);
    }
    else {
      if (iVar1 != 5) goto LAB_109c6f1f8;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) goto LAB_109c6f1f8;
      func_0x000109c6def4(lVar3);
    }
  }
  else if (iVar1 == 6) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) goto LAB_109c6f1f8;
    func_0x000109c6e874(lVar3);
  }
  else {
    if (iVar1 != 7) goto LAB_109c6f1f8;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) goto LAB_109c6f1f8;
    func_0x000109c6ec80(lVar3);
  }
  __ZdlPv(lVar3);
LAB_109c6f1f8:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 109c6f258; end: 109c6f377;  */

undefined8 * FUN_109c6f258(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2fbc0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 0x10);
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      FUN_109c70188(param_2,*(undefined8 *)(param_3 + 0x18));
    }
    else if (iVar1 == 2) {
      FUN_109c702b8(param_2,*(undefined8 *)(param_3 + 0x18));
    }
    else {
      if (iVar1 != 3) {
        return param_1;
      }
      FUN_109c70220(param_2,*(undefined8 *)(param_3 + 0x18));
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      func_0x000109c70350(param_2,*(undefined8 *)(param_3 + 0x18));
    }
    else {
      if (iVar1 != 5) {
        return param_1;
      }
      func_0x000109c7040c(param_2,*(undefined8 *)(param_3 + 0x18));
    }
  }
  else if (iVar1 == 6) {
    func_0x000109c70518(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  else {
    if (iVar1 != 7) {
      return param_1;
    }
    func_0x000109c705c4(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 109c6f378; end: 109c6f3b3;  */

long FUN_109c6f378(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_109c6f0f0(param_1);
  }
  return param_1;
}



/* Entry: 109c6f3b4; end: 109c6f3b7;  */

long FUN_109c6f3b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_109c6f0f0(param_1);
  }
  return param_1;
}



/* Entry: 109c6f3b8; end: 109c6f3cb;  */

void FUN_109c6f3b8(void)

{
  FUN_109c6f378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6f3cc; end: 109c6f3d7;  */

undefined ** FUN_109c6f3cc(void)

{
  return &PTR_DAT_110b30050;
}



/* Entry: 109c6f3d8; end: 109c6f413;  */

void FUN_109c6f3d8(long param_1)

{
  ulong *puVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_109c6f0f0();
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



/* Entry: 109c6f414; end: 109c6f5d7;  */

long * FUN_109c6f414(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  ulong uStack_48;
  long lVar9;
  
  plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x24);
  uVar5 = *(uint *)(param_1 + 0x24) - 1;
  if (uVar5 < 7) {
    func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x18) + *(long *)(&UNK_10e03b210 + (ulong)uVar5 * 8)),
                        param_2,param_3);
    param_2 = plVar1;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = (long *)*param_3;
    if (param_2 < plVar1) {
      uVar4 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar1));
        plVar1 = (long *)*param_3;
      } while (plVar1 <= param_2);
      uVar4 = *(undefined1 *)(param_1 + 0x10);
    }
    *(undefined2 *)param_2 = 0x3ec0;
    *(undefined1 *)((long)param_2 + 2) = uVar4;
    param_2 = (long *)((long)param_2 + 3);
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
    uVar5 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      lVar9 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar9 < (int)uVar5) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(param_2,lVar3,(long)iVar8);
          uVar5 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar5;
          lVar3 = lVar3 + iVar8;
          plVar6 = (long *)*param_3;
          plVar1 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar1;
          } while (plVar6 <= plVar1);
          lVar9 = (long)plVar6 + (0x10 - (long)param_2);
        } while ((int)lVar9 < (int)uVar5);
      }
      uStack_48._0_4_ = uVar5;
      _memcpy(param_2,lVar3,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar3,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar5);
    }
  }
  return param_2;
}



/* Entry: 109c6f5d8; end: 109c6f707;  */

long FUN_109c6f5d8(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar4 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 < 4) {
    if (((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) goto LAB_109c6f6c0;
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x18) + 8);
    if ((uVar3 & 1) == 0) {
      lVar1 = 0;
    }
    else {
      uVar3 = uVar3 & 0xfffffffffffffffe;
      lVar1 = (long)*(char *)(uVar3 + 0x1f);
      if (lVar1 < 0) {
        lVar1 = *(long *)(uVar3 + 0x10);
      }
    }
    *(int *)(*(long *)(param_1 + 0x18) + 0x10) = (int)lVar1;
    iVar2 = (int)LZCOUNT((int)lVar1);
  }
  else {
    if (iVar2 < 6) {
      if (iVar2 == 4) {
        lVar1 = *(long *)(param_1 + 0x18);
        FUN_109c6d15c();
      }
      else {
        if (iVar2 != 5) goto LAB_109c6f6c0;
        lVar1 = *(long *)(param_1 + 0x18);
        FUN_109c6e4b8();
      }
    }
    else if (iVar2 == 6) {
      lVar1 = *(long *)(param_1 + 0x18);
      FUN_109c6ea5c();
    }
    else {
      if (iVar2 != 7) goto LAB_109c6f6c0;
      lVar1 = *(long *)(param_1 + 0x18);
      FUN_109c6eec4();
    }
    iVar2 = (int)LZCOUNT((int)lVar1);
  }
  lVar4 = lVar4 + lVar1 + (ulong)(iVar2 * -9 + 0x160U >> 6) + 1;
LAB_109c6f6c0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar1 + lVar4;
  }
  *(int *)(param_1 + 0x20) = (int)lVar4;
  return lVar4;
}



/* Entry: 109c6f708; end: 109c6f70b;  */

/* WARNING: Possible PIC construction at 0x000109c6f8d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c6f8dc) */

void FUN_109c6f708(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
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
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_109c6f950;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c6f0f0(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 < 4) {
    if (iVar2 == 1) {
      if (iVar3 == 1) {
        ppuVar6 = *(undefined ***)(param_2 + 0x18);
        ppuVar7 = &PTR_PTR_1132ef628;
        bVar4 = *(int *)(param_2 + 0x24) == 1;
LAB_109c6f8bc:
        if (!bVar4) {
          ppuVar6 = ppuVar7;
        }
        if (((ulong)ppuVar6[1] & 1) != 0) {
          unaff_x30 = 0x109c6f8dc;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          puVar5 = (ulong *)(*(long *)(param_1 + 0x18) + 8);
          unaff_x19 = puVar8;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
        goto LAB_109c6f950;
      }
      FUN_109c70188(uVar9,*(undefined8 *)(param_2 + 0x18));
    }
    else if (iVar2 == 2) {
      if (iVar3 == 2) {
        ppuVar6 = *(undefined ***)(param_2 + 0x18);
        ppuVar7 = &PTR_PTR_1132ef640;
        bVar4 = *(int *)(param_2 + 0x24) == 2;
        goto LAB_109c6f8bc;
      }
      FUN_109c702b8(uVar9,*(undefined8 *)(param_2 + 0x18));
    }
    else {
      if (iVar2 != 3) goto LAB_109c6f950;
      if (iVar3 == 3) {
        ppuVar6 = *(undefined ***)(param_2 + 0x18);
        ppuVar7 = &PTR_PTR_1132ef610;
        bVar4 = *(int *)(param_2 + 0x24) == 3;
        goto LAB_109c6f8bc;
      }
      FUN_109c70220(uVar9,*(undefined8 *)(param_2 + 0x18));
    }
LAB_109c6f94c:
    *(ulong *)(param_1 + 0x18) = uVar9;
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      if (iVar3 != 4) {
        func_0x000109c70350(uVar9,*(undefined8 *)(param_2 + 0x18));
        goto LAB_109c6f94c;
      }
      ppuVar7 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 4) {
        ppuVar7 = &PTR_PTR_1132ef760;
      }
      FUN_109c6d24c(*(undefined8 *)(param_1 + 0x18),ppuVar7);
    }
    else if (iVar2 == 5) {
      if (iVar3 != 5) {
        func_0x000109c7040c(uVar9,*(undefined8 *)(param_2 + 0x18));
        goto LAB_109c6f94c;
      }
      ppuVar7 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 5) {
        ppuVar7 = &PTR_PTR_1132eedd8;
      }
      FUN_109c6e630(*(undefined8 *)(param_1 + 0x18),ppuVar7);
    }
  }
  else if (iVar2 == 6) {
    if (iVar3 != 6) {
      func_0x000109c70518(uVar9,*(undefined8 *)(param_2 + 0x18));
      goto LAB_109c6f94c;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x24) != 6) {
      ppuVar7 = &PTR_PTR_1132ef658;
    }
    FUN_109c6eaec(*(undefined8 *)(param_1 + 0x18),ppuVar7);
  }
  else if (iVar2 == 7) {
    if (iVar3 != 7) {
      func_0x000109c705c4(uVar9,*(undefined8 *)(param_2 + 0x18));
      goto LAB_109c6f94c;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x24) != 7) {
      ppuVar7 = &PTR_PTR_1132ef6a0;
    }
    FUN_109c6ef98(*(undefined8 *)(param_1 + 0x18),ppuVar7);
  }
LAB_109c6f950:
  puVar5 = puVar8;
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



/* Entry: 109c6f70c; end: 109c6f997;  */

/* WARNING: Possible PIC construction at 0x000109c6f8d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c6f8dc) */

void FUN_109c6f70c(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
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
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_109c6f950;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c6f0f0(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 < 4) {
    if (iVar2 == 1) {
      if (iVar3 == 1) {
        ppuVar6 = *(undefined ***)(param_2 + 0x18);
        ppuVar7 = &PTR_PTR_1132ef628;
        bVar4 = *(int *)(param_2 + 0x24) == 1;
LAB_109c6f8bc:
        if (!bVar4) {
          ppuVar6 = ppuVar7;
        }
        if (((ulong)ppuVar6[1] & 1) != 0) {
          unaff_x30 = 0x109c6f8dc;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          puVar5 = (ulong *)(*(long *)(param_1 + 0x18) + 8);
          unaff_x19 = puVar8;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
        goto LAB_109c6f950;
      }
      FUN_109c70188(uVar9,*(undefined8 *)(param_2 + 0x18));
    }
    else if (iVar2 == 2) {
      if (iVar3 == 2) {
        ppuVar6 = *(undefined ***)(param_2 + 0x18);
        ppuVar7 = &PTR_PTR_1132ef640;
        bVar4 = *(int *)(param_2 + 0x24) == 2;
        goto LAB_109c6f8bc;
      }
      FUN_109c702b8(uVar9,*(undefined8 *)(param_2 + 0x18));
    }
    else {
      if (iVar2 != 3) goto LAB_109c6f950;
      if (iVar3 == 3) {
        ppuVar6 = *(undefined ***)(param_2 + 0x18);
        ppuVar7 = &PTR_PTR_1132ef610;
        bVar4 = *(int *)(param_2 + 0x24) == 3;
        goto LAB_109c6f8bc;
      }
      FUN_109c70220(uVar9,*(undefined8 *)(param_2 + 0x18));
    }
LAB_109c6f94c:
    *(ulong *)(param_1 + 0x18) = uVar9;
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      if (iVar3 != 4) {
        func_0x000109c70350(uVar9,*(undefined8 *)(param_2 + 0x18));
        goto LAB_109c6f94c;
      }
      ppuVar7 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 4) {
        ppuVar7 = &PTR_PTR_1132ef760;
      }
      FUN_109c6d24c(*(undefined8 *)(param_1 + 0x18),ppuVar7);
    }
    else if (iVar2 == 5) {
      if (iVar3 != 5) {
        func_0x000109c7040c(uVar9,*(undefined8 *)(param_2 + 0x18));
        goto LAB_109c6f94c;
      }
      ppuVar7 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 5) {
        ppuVar7 = &PTR_PTR_1132eedd8;
      }
      FUN_109c6e630(*(undefined8 *)(param_1 + 0x18),ppuVar7);
    }
  }
  else if (iVar2 == 6) {
    if (iVar3 != 6) {
      func_0x000109c70518(uVar9,*(undefined8 *)(param_2 + 0x18));
      goto LAB_109c6f94c;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x24) != 6) {
      ppuVar7 = &PTR_PTR_1132ef658;
    }
    FUN_109c6eaec(*(undefined8 *)(param_1 + 0x18),ppuVar7);
  }
  else if (iVar2 == 7) {
    if (iVar3 != 7) {
      func_0x000109c705c4(uVar9,*(undefined8 *)(param_2 + 0x18));
      goto LAB_109c6f94c;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x24) != 7) {
      ppuVar7 = &PTR_PTR_1132ef6a0;
    }
    FUN_109c6ef98(*(undefined8 *)(param_1 + 0x18),ppuVar7);
  }
LAB_109c6f950:
  puVar5 = puVar8;
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



/* Entry: 109c6f998; end: 109c6fa0f;  */

void FUN_109c6f998(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b2f760;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 109c6fa10; end: 109c6fe9b;  */

void FUN_109c6fa10(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b2f760;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 109c6fe9c; end: 109c6ff27;  */

undefined8 * FUN_109c6fe9c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b2f7b0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x000109c6c0f4();
  return puVar1;
}



/* Entry: 109c6ff28; end: 109c70187;  */

undefined8 * FUN_109c6ff28(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110b2f9e0;
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



/* Entry: 109c70188; end: 109c7021f;  */

undefined8 * FUN_109c70188(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110b2f800;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109c70220; end: 109c702b7;  */

undefined8 * FUN_109c70220(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110b2f760;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109c702b8; end: 109c7034f;  */

undefined8 * FUN_109c702b8(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110b2f8a0;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109c70350; end: 109c70693;  */

undefined8 * FUN_109c70350(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110b2fb20;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 6) = 0;
  iVar1 = *(int *)(param_2 + 0x34);
  *(int *)((long)puVar2 + 0x34) = iVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20);
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  if (iVar1 == 0x1f) {
    func_0x000109c6ffb8(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar1 != 0x15) {
      return puVar2;
    }
    FUN_109c6ff28(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar2[5] = param_1;
  return puVar2;
}



/* Entry: 109c70694; end: 109c706c7;  */

long FUN_109c70694(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c706c8; end: 109c706cb;  */

long FUN_109c706c8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c706cc; end: 109c706df;  */

void FUN_109c706cc(void)

{
  FUN_109c70694();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c706e0; end: 109c7072f;  */

undefined ** FUN_109c706e0(void)

{
  return &PTR_DAT_110b302a0;
}



/* Entry: 109c70730; end: 109c7090f;  */

byte * FUN_109c70730(long param_1,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar9[1];
    if (lVar3 == 0) goto LAB_109c707a0;
    puVar1 = (undefined8 *)*puVar9;
  }
  else {
    puVar1 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_109c707a0;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f5a6512);
  pbVar5 = param_3;
  func_0x000107c280a0(param_3,1,puVar9,param_2);
  param_2 = pbVar5;
LAB_109c707a0:
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (uVar4 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x18);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 0x10;
    uVar10 = uVar4;
    pbVar5 = pbVar7;
    if (0x7f < uVar4) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar10 | 0x80;
        uVar4 = uVar10 >> 7;
        uVar6 = uVar10 >> 0xe;
        uVar10 = uVar4;
        pbVar5 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar10 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar8 = (uint)uVar10;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar8) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar8) {
        do {
          iVar11 = (int)pbVar5;
          _memcpy(param_2,lVar3,(long)iVar11);
          uVar8 = (int)uVar10 - iVar11;
          uVar10 = (ulong)uVar8;
          lVar3 = lVar3 + iVar11;
          pbVar5 = *(byte **)param_3;
          pbVar7 = param_2 + iVar11;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar2 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar2 + ((int)pbVar7 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            param_2 = pbVar7;
          } while (pbVar5 <= pbVar7);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar8);
      }
      _memcpy(param_2,lVar3,(long)(int)uVar8);
      param_2 = param_2 + (int)uVar8;
    }
    else {
      _memcpy(param_2,lVar3,uVar10 & 0xffffffff);
      param_2 = param_2 + (int)uVar8;
    }
  }
  return param_2;
}



/* Entry: 109c70910; end: 109c709a7;  */

long FUN_109c70910(long param_1)

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
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar2;
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



/* Entry: 109c709a8; end: 109c70a27;  */

void FUN_109c709a8(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
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



/* Entry: 109c70a28; end: 109c70a9b;  */

undefined8 * FUN_109c70a28(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b30260;
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



/* Entry: 109c70a9c; end: 109c70acf;  */

long FUN_109c70a9c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c70dc0(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c70ad0; end: 109c70ad3;  */

long FUN_109c70ad0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c70dc0(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c70ad4; end: 109c70ae7;  */

void FUN_109c70ad4(void)

{
  FUN_109c70a9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c70ae8; end: 109c70af3;  */

undefined ** FUN_109c70ae8(void)

{
  return &PTR_DAT_110b302f8;
}



/* Entry: 109c70af4; end: 109c70b3b;  */

void FUN_109c70af4(long param_1)

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



/* Entry: 109c70b3c; end: 109c70d57;  */

long * FUN_109c70b3c(long param_1,long *param_2,long *param_3)

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
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar6,param_3);
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



/* Entry: 109c70d58; end: 109c70d5b;  */

void FUN_109c70d58(long param_1,long param_2)

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



/* Entry: 109c70d5c; end: 109c70daf;  */

void FUN_109c70d5c(long param_1,long param_2)

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



/* Entry: 109c70db0; end: 109c70dbf;  */

void FUN_109c70db0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b30210;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 109c70dc0; end: 109c70df3;  */

long * FUN_109c70dc0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c70df4; end: 109c70edf;  */

void FUN_109c70df4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b30210;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}


