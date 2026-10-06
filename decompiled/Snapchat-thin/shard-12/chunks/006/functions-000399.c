/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109316760; end: 10931684f;  */

void FUN_109316760(long param_1,long param_2)

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
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
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



/* Entry: 109316850; end: 10931689b;  */

long FUN_109316850(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10931689c; end: 10931689f;  */

long FUN_10931689c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093168a0; end: 1093168b3;  */

void FUN_1093168a0(void)

{
  FUN_109316850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093168b4; end: 1093168bf;  */

undefined ** FUN_1093168b4(void)

{
  return &PTR_DAT_110aed600;
}



/* Entry: 1093168c0; end: 109316927;  */

void FUN_1093168c0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 109316928; end: 109316b3b;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_109316928(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 2 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
    param_2 = pbVar4;
  }
  if ((uVar2 & 1) != 0) {
    pbVar4 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = pbVar4;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pbVar4 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
    param_2 = pbVar4;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= param_2);
    }
    uVar2 = *(uint *)(param_1 + 0x2c);
    uVar3 = (ulong)(int)uVar2;
    pbVar7 = param_2 + 1;
    *param_2 = 0x20;
    uVar5 = uVar3;
    pbVar4 = pbVar7;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar4 + 1;
        *pbVar4 = (byte)uVar5 | 0x80;
        uVar3 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        uVar5 = uVar3;
        pbVar4 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar3;
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
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar2) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(param_2,lVar8,(long)iVar9);
          uVar2 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar9;
          pbVar4 = *(byte **)param_3;
          pbVar7 = param_2 + iVar9;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar1 + ((int)pbVar7 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            param_2 = pbVar7;
          } while (pbVar4 <= pbVar7);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar2);
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



/* Entry: 109316b3c; end: 109316c3b;  */

long FUN_109316b3c(long param_1)

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
      FUN_1093134a4();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 109316c3c; end: 109316c3f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109316c3c(long param_1,long param_2)

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
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093135dc();
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



/* Entry: 109316c40; end: 109316d3f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109316c40(long param_1,long param_2)

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
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093135dc();
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



/* Entry: 109316d40; end: 109316de3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109316d40(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
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
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
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



/* Entry: 109316de4; end: 109316e3b;  */

long FUN_109316de4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109316e3c; end: 109316e73;  */

undefined ** FUN_109316e3c(void)

{
  return &PTR_DAT_110aed640;
}



/* Entry: 109316e74; end: 10931722f;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_109316e74(long param_1,byte *param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  if ((uVar10 & 1) != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *param_2 = 0xd;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar10 >> 1 & 1) != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *param_2 = 0x15;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar10 >> 2 & 1) != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *param_2 = 0x1d;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar10 >> 3 & 1) != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    *param_2 = 0x25;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar10 >> 4 & 1) != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *param_2 = 0x2d;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar10 >> 5 & 1) != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x2c);
    uVar11 = (ulong)(int)uVar3;
    pbVar8 = param_2 + 1;
    *param_2 = 0x30;
    uVar5 = uVar11;
    pbVar6 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar11 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar11;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar11;
  }
  if ((uVar10 >> 6 & 1) != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x30);
    *param_2 = 0x38;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar11 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar11 < 0) {
      lVar9 = *(long *)(uVar5 + 8);
      uVar11 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar9 = uVar5 + 8;
    }
    uVar10 = (uint)uVar11;
    if (*param_3 - (long)param_2 < (long)(int)uVar10) {
      pbVar6 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar6 < (int)uVar10) {
        do {
          iVar12 = (int)pbVar6;
          _memcpy(param_2,lVar9,(long)iVar12);
          uVar10 = (int)uVar11 - iVar12;
          uVar11 = (ulong)uVar10;
          lVar9 = lVar9 + iVar12;
          pbVar6 = (byte *)*param_3;
          pbVar8 = param_2 + iVar12;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar4 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar4 + (long)((int)pbVar8 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar6 <= pbVar8);
          pbVar6 = pbVar6 + (0x10 - (long)param_2);
        } while ((int)pbVar6 < (int)uVar10);
      }
      _memcpy(param_2,lVar9,(long)(int)uVar10);
      param_2 = param_2 + (int)uVar10;
    }
    else {
      _memcpy(param_2,lVar9,uVar11 & 0xffffffff);
      param_2 = param_2 + (int)uVar10;
    }
  }
  return param_2;
}



/* Entry: 109317230; end: 109317353;  */

long FUN_109317230(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) == 0) {
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
    if ((uVar1 & 0x10) != 0) {
      lVar2 = lVar2 + 5;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x280U >> 6) + 1;
    }
    lVar2 = lVar2 + ((ulong)(uVar1 >> 5) & 2);
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



/* Entry: 109317354; end: 1093173ab;  */

long FUN_109317354(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1093173ac; end: 1093173e3;  */

undefined ** FUN_1093173ac(void)

{
  return &PTR_DAT_110aed680;
}



/* Entry: 1093173e4; end: 1093175e7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1093173e4(long param_1,long *param_2,long *param_3)

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
    plVar3 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
    param_2 = plVar3;
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
    *(undefined1 *)param_2 = 0x15;
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
    *(undefined1 *)param_2 = 0x1d;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  plVar3 = param_2;
  if ((uVar7 >> 3 & 1) != 0) {
    plVar3 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
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



/* Entry: 1093175e8; end: 109317683;  */

ulong FUN_1093175e8(long param_1)

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
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 + 5;
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar2 + 5;
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



/* Entry: 109317684; end: 1093176cf;  */

long FUN_109317684(long param_1)

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
  return param_1;
}



/* Entry: 1093176d0; end: 1093176d3;  */

long FUN_1093176d0(long param_1)

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
  return param_1;
}



/* Entry: 1093176d4; end: 1093176e7;  */

void FUN_1093176d4(void)

{
  FUN_109317684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093176e8; end: 1093176f3;  */

undefined ** FUN_1093176e8(void)

{
  return &PTR_DAT_110aed6b8;
}



/* Entry: 1093176f4; end: 109317747;  */

void FUN_1093176f4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x00010933ba34(*(undefined8 *)(param_1 + 0x18));
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
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



/* Entry: 109317748; end: 109317953;  */

long * FUN_109317748(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uStack_48;
  undefined1 *puVar9;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = plVar4;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
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
    }
    uVar1 = *(undefined4 *)(param_1 + 0x20);
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
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)param_2 = 0x1d;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar7 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar7 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      puVar9 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar9 < (int)uVar3) {
        do {
          iVar8 = (int)puVar9;
          _memcpy(param_2,lVar7,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lVar7 = lVar7 + iVar8;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar2 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar4;
          } while (plVar5 <= plVar4);
          puVar9 = (undefined1 *)((long)plVar5 + (0x10 - (long)param_2));
        } while ((int)puVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar7,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar7,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 109317954; end: 1093179ef;  */

void FUN_109317954(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_10933bbb4();
      iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 & 2) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar1 & 4) != 0) {
      iVar2 = iVar2 + 5;
    }
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



/* Entry: 1093179f0; end: 109317ab7;  */

void FUN_1093179f0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        func_0x0001093131b0(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10933b928(*(long *)(param_1 + 0x18));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
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



/* Entry: 109317ab8; end: 109317b1b;  */

long FUN_109317ab8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
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



/* Entry: 109317b1c; end: 109317b1f;  */

long FUN_109317b1c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
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



/* Entry: 109317b20; end: 109317b33;  */

void FUN_109317b20(void)

{
  FUN_109317ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109317b34; end: 109317b6b;  */

undefined ** FUN_109317b34(void)

{
  return &PTR_DAT_110aed710;
}



/* Entry: 109317b6c; end: 109318093;  */

byte * FUN_109317b6c(long param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  undefined8 uVar20;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x10);
  pbVar10 = param_2;
  if ((uVar13 & 1) != 0) {
    pbVar10 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x40),param_2);
  }
  if ((uVar13 >> 1 & 1) != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    *pbVar10 = 0x15;
    *(undefined4 *)(pbVar10 + 1) = uVar1;
    pbVar10 = pbVar10 + 5;
  }
  uVar13 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar13) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
    }
    pbVar3 = pbVar10 + 1;
    *pbVar10 = 0x1a;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar3;
        pbVar3 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        uVar8 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar8 != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar3 = (byte)uVar13;
    puVar14 = *(uint **)(param_1 + 0x20);
    iVar18 = *(int *)(param_1 + 0x18);
    pbVar3 = param_3 + 0x10;
    puVar15 = puVar14;
    do {
      pbVar11 = pbVar10;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar10) {
        do {
          pbVar11 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109317c6c:
            param_3[0x38] = 1;
LAB_109317d04:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar20 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar3 = uVar20;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_109317d04;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar12 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109317c6c;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar20 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar3 = uVar20;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar20 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar20;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar11 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar12);
          pbVar11 = pbVar10;
          pbVar12 = pbVar6;
        } while (pbVar6 <= pbVar10);
      }
      puVar16 = puVar15 + 1;
      uVar4 = (ulong)(int)*puVar15;
      uVar5 = uVar4;
      pbVar10 = pbVar11;
      if (0x7f < *puVar15) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar19 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar11;
        } while (uVar19 != 0);
      }
      pbVar10 = pbVar11 + 1;
      *pbVar11 = (byte)uVar4;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar18);
  }
  iVar18 = *(int *)(param_1 + 0x30);
  if (0 < iVar18) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
      iVar18 = *(int *)(param_1 + 0x30);
    }
    uVar13 = iVar18 * 4;
    uVar4 = (ulong)uVar13;
    pbVar3 = pbVar10 + 1;
    *pbVar10 = 0x22;
    uVar5 = uVar4;
    uVar8 = uVar13;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar3;
        uVar7 = (uint)uVar5;
        pbVar3 = pbVar10 + 1;
        *pbVar10 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar8 = (uint)uVar5;
      } while (uVar7 >> 0xe != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar3 = (byte)uVar8;
    lVar17 = *(long *)(param_1 + 0x38);
    uVar19 = (ulong)(int)uVar13;
    uVar5 = uVar4;
    if ((*(long *)param_3 - (long)pbVar10 < (long)(int)uVar13) &&
       (pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar10) + 0x10), uVar5 = uVar19,
       (int)pbVar3 < (int)uVar13)) {
      pbVar11 = param_3 + 0x10;
      do {
        iVar18 = (int)pbVar3;
        _memcpy(pbVar10,lVar17,(long)iVar18);
        uVar13 = (int)uVar4 - iVar18;
        uVar4 = (ulong)uVar13;
        lVar17 = lVar17 + iVar18;
        pbVar12 = pbVar10 + iVar18;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar10 = pbVar11;
          pbVar3 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109317f70:
            param_3[0x38] = 1;
LAB_109317f50:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar3 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar20 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar11 = uVar20;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_109317f50;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar11,(long)pbVar6 - (long)pbVar11);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109317f70;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar20 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar11 = uVar20;
              *(byte **)param_3 = pbVar11 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar20 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar20;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar10 = pbStack_70;
            }
          }
          pbVar12 = pbVar10 + ((int)pbVar12 - (int)pbVar6);
          pbVar6 = pbVar3;
          pbVar10 = pbVar12;
        } while (pbVar3 <= pbVar12);
        pbVar3 = pbVar3 + (0x10 - (long)pbVar10);
      } while ((int)pbVar3 < (int)uVar13);
      uVar19 = (ulong)(int)uVar13;
      uVar5 = uVar19;
    }
    _memcpy(pbVar10,lVar17,uVar5);
    pbVar10 = pbVar10 + uVar19;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar17 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar17 = uVar5 + 8;
    }
    uVar13 = (uint)uVar4;
    if (*(long *)param_3 - (long)pbVar10 < (long)(int)uVar13) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar10) + 0x10);
      if ((int)pbVar3 < (int)uVar13) {
        do {
          iVar18 = (int)pbVar3;
          _memcpy(pbVar10,lVar17,(long)iVar18);
          uVar13 = (int)uVar4 - iVar18;
          uVar4 = (ulong)uVar13;
          lVar17 = lVar17 + iVar18;
          pbVar3 = *(byte **)param_3;
          pbVar11 = pbVar10 + iVar18;
          do {
            pbVar10 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar10 = param_3;
            func_0x000107c303dc();
            pbVar11 = pbVar10 + ((int)pbVar11 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar10 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar10);
        } while ((int)pbVar3 < (int)uVar13);
      }
      _memcpy(pbVar10,lVar17,(long)(int)uVar13);
      pbVar10 = pbVar10 + (int)uVar13;
    }
    else {
      _memcpy(pbVar10,lVar17,uVar4 & 0xffffffff);
      pbVar10 = pbVar10 + (int)uVar13;
    }
  }
  return pbVar10;
}



/* Entry: 109318094; end: 10931819f;  */

long FUN_109318094(long param_1)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar3 = *(int **)(param_1 + 0x20);
    do {
      lVar2 = (ulong)((int)LZCOUNT((long)*piVar3) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      piVar3 = piVar3 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = lVar4 + lVar2 + lVar6 + (ulong)uVar1 * 4;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 & 2) != 0) {
      lVar4 = lVar4 + 5;
    }
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



/* Entry: 1093181a0; end: 1093182d3;  */

void FUN_1093181a0(long param_1,long param_2)

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
      func_0x000107c282d8(param_1 + 0x18);
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
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x34) < iVar3) {
      FUN_109311970(param_1 + 0x30);
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
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 3) != 0) {
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
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



/* Entry: 1093182d4; end: 109318317;  */

long FUN_1093182d4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x48);
  FUN_10932e268(param_1 + 0x30);
  FUN_10932e29c(param_1 + 0x18);
  return param_1;
}



/* Entry: 109318318; end: 10931831b;  */

long FUN_109318318(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x48);
  FUN_10932e268(param_1 + 0x30);
  FUN_10932e29c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931831c; end: 10931832f;  */

void FUN_10931831c(void)

{
  FUN_1093182d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109318330; end: 10931833b;  */

undefined ** FUN_109318330(void)

{
  return &PTR_DAT_110aed770;
}



/* Entry: 10931833c; end: 1093183c3;  */

void FUN_10931833c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x00010598fd84(param_1 + 0x48);
  }
  if ((*(byte *)(param_1 + 0x10) & 0x3f) != 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
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



/* Entry: 1093183c4; end: 10931874f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1093183c4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar14;
  undefined1 *puVar13;
  
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar6 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar6,param_3);
      iVar11 = iVar11 + 1;
      plVar6 = param_2;
    } while (iVar12 != iVar11);
  }
  iVar12 = *(int *)(param_1 + 0x38);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar6 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar6,param_3);
      iVar11 = iVar11 + 1;
      plVar6 = param_2;
    } while (iVar12 != iVar11);
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 & 1) != 0) {
    plVar6 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x60),param_2);
    param_2 = plVar6;
  }
  if ((uVar9 >> 1 & 1) != 0) {
    plVar6 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 100),param_2);
    param_2 = plVar6;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    plVar6 = (long *)*param_3;
    if (plVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar6));
        plVar6 = (long *)*param_3;
      } while (plVar6 <= param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x68);
    *(undefined1 *)param_2 = 0x28;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar9 >> 3 & 1) != 0) {
    plVar6 = param_3;
    func_0x0001089f53c8(param_3,*(undefined4 *)(param_1 + 0x6c),param_2);
    param_2 = plVar6;
  }
  if ((uVar9 >> 4 & 1) != 0) {
    plVar6 = (long *)*param_3;
    if (plVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar6));
        plVar6 = (long *)*param_3;
      } while (plVar6 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    *(undefined1 *)param_2 = 0x3d;
    *(undefined4 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 5);
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    lVar14 = 8;
    plVar6 = param_2;
    do {
      uVar7 = *(ulong *)(param_1 + 0x48);
      puVar1 = (ulong *)(param_1 + 0x48);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + lVar14 + -1);
      }
      plVar4 = (long *)*puVar1;
      lVar10 = (long)*(char *)((long)plVar4 + 0x17);
      if (((lVar10 < 0) && (lVar10 = plVar4[1], 0x7f < lVar10)) ||
         ((*param_3 - (long)plVar6) + 0xe < lVar10)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,8,plVar4,plVar6);
      }
      else {
        *(undefined1 *)plVar6 = 0x42;
        *(char *)((long)plVar6 + 1) = (char)lVar10;
        if (*(char *)((long)plVar4 + 0x17) < '\0') {
          plVar4 = (long *)*plVar4;
        }
        _memcpy((long)plVar6 + 2,plVar4,lVar10);
        param_2 = (long *)((long)plVar6 + 2 + lVar10);
      }
      lVar14 = lVar14 + 8;
      uVar5 = uVar5 - 1;
      plVar6 = param_2;
    } while (uVar5 != 0);
  }
  plVar6 = param_2;
  if ((uVar9 >> 5 & 1) != 0) {
    plVar6 = param_3;
    func_0x000108b3207c(param_3,*(undefined4 *)(param_1 + 0x74),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar14 = *(long *)(uVar5 + 8);
      uVar7 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar14 = uVar5 + 8;
    }
    uVar9 = (uint)uVar7;
    if (*param_3 - (long)plVar6 < (long)(int)uVar9) {
      puVar13 = (undefined1 *)((*param_3 - (long)plVar6) + 0x10);
      if ((int)puVar13 < (int)uVar9) {
        do {
          iVar12 = (int)puVar13;
          _memcpy(plVar6,lVar14,(long)iVar12);
          uVar9 = (int)uVar7 - iVar12;
          uVar7 = (ulong)uVar9;
          lVar14 = lVar14 + iVar12;
          plVar8 = (long *)*param_3;
          plVar4 = (long *)((long)plVar6 + (long)iVar12);
          do {
            plVar6 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar6 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar6 + (long)((int)plVar4 - (int)plVar8));
            plVar8 = (long *)*param_3;
            plVar6 = plVar4;
          } while (plVar8 <= plVar4);
          puVar13 = (undefined1 *)((long)plVar8 + (0x10 - (long)plVar6));
        } while ((int)puVar13 < (int)uVar9);
      }
      _memcpy(plVar6,lVar14,(long)(int)uVar9);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar9);
    }
    else {
      _memcpy(plVar6,lVar14,uVar7 & 0xffffffff);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar9);
    }
  }
  return plVar6;
}



/* Entry: 109318750; end: 10931893f;  */

void FUN_109318750(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  lVar9 = (long)*(int *)(param_1 + 0x20);
  puVar8 = (ulong *)(param_1 + 0x18);
  if ((uVar6 & 1) != 0) {
    puVar8 = (ulong *)(uVar6 + 7);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar9 = 0;
  }
  else {
    lVar10 = lVar9 << 3;
    do {
      uVar6 = *puVar8;
      FUN_109317954();
      lVar9 = uVar6 + lVar9 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar10 = lVar10 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar10 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x38);
  lVar9 = lVar9 + iVar5;
  puVar8 = (ulong *)(param_1 + 0x30);
  if ((uVar6 & 1) != 0) {
    puVar8 = (ulong *)(uVar6 + 7);
  }
  if (iVar5 != 0) {
    lVar10 = (long)iVar5 << 3;
    do {
      uVar6 = *puVar8;
      FUN_109318094();
      lVar9 = uVar6 + lVar9 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar10 = lVar10 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar10 != 0);
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x50);
  lVar9 = lVar9 + uVar6;
  iVar5 = (int)lVar9;
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    uVar7 = *(ulong *)(param_1 + 0x48);
    puVar8 = (ulong *)(uVar7 + 7);
    do {
      puVar1 = (ulong *)(param_1 + 0x48);
      if ((uVar7 & 1) != 0) {
        puVar1 = puVar8;
      }
      bVar4 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      lVar9 = uVar2 + lVar9 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      iVar5 = (int)lVar9;
      puVar8 = puVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 0x3f) != 0) {
    if ((uVar3 & 1) != 0) {
      iVar5 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x60)) * -9 + 0x2c0U >> 6) + iVar5;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      iVar5 = ((int)LZCOUNT((long)*(int *)(param_1 + 100)) * -9 + 0x2c0U >> 6) + iVar5;
    }
    iVar5 = iVar5 + (uVar3 >> 1 & 2);
    if ((uVar3 >> 3 & 1) != 0) {
      iVar5 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x6c)) * -9 + 0x2c0U >> 6) + iVar5;
    }
    if ((uVar3 & 0x10) != 0) {
      iVar5 = iVar5 + 5;
    }
    if ((uVar3 >> 5 & 1) != 0) {
      iVar5 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x74)) * -9 + 0x2c0U >> 6) + iVar5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar9 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar6 + 0x10);
    }
    iVar5 = (int)lVar9 + iVar5;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return;
}



/* Entry: 109318940; end: 109318943;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109318940(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303bc(param_1 + 0x48,param_2 + 0x48);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
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



/* Entry: 109318944; end: 109318abb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109318944(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303bc(param_1 + 0x48,param_2 + 0x48);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
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



/* Entry: 109318abc; end: 109318abf;  */

long FUN_109318abc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
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



/* Entry: 109318ac0; end: 109318ad3;  */

void FUN_109318ac0(void)

{
  func_0x000109318a38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109318ad4; end: 109318adf;  */

undefined ** FUN_109318ad4(void)

{
  return &PTR_DAT_110aed7c0;
}



/* Entry: 109318ae0; end: 109318b47;  */

void FUN_109318ae0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
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



/* Entry: 109318b48; end: 10931909f;  */

byte * FUN_109318b48(long param_1,byte *param_2,byte *param_3)

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
  if ((uVar11 >> 2 & 1) != 0) {
    pbVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x48),param_2);
    param_2 = pbVar1;
  }
  if ((uVar11 & 1) != 0) {
    pbVar1 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),param_2,param_3);
    param_2 = pbVar1;
  }
  pbVar1 = param_2;
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar1 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),param_2,param_3);
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
    *pbVar1 = 0x22;
    uVar5 = uVar12;
    uVar7 = uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar1 = pbVar4;
        uVar8 = (uint)uVar5;
        pbVar4 = pbVar1 + 1;
        *pbVar1 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar7 = (uint)uVar5;
      } while (uVar8 >> 0xe != 0);
    }
    pbVar1 = pbVar1 + 2;
    *pbVar4 = (byte)uVar7;
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
LAB_109318e5c:
            param_3[0x38] = 1;
LAB_109318e3c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_109318e3c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar6 - (long)pbVar2);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109318e5c;
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
  iVar14 = *(int *)(param_1 + 0x28);
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
      iVar14 = *(int *)(param_1 + 0x28);
    }
    uVar11 = iVar14 * 4;
    uVar12 = (ulong)uVar11;
    pbVar4 = pbVar1 + 1;
    *pbVar1 = 0x2a;
    uVar5 = uVar12;
    uVar7 = uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar1 = pbVar4;
        uVar8 = (uint)uVar5;
        pbVar4 = pbVar1 + 1;
        *pbVar1 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar7 = (uint)uVar5;
      } while (uVar8 >> 0xe != 0);
    }
    pbVar1 = pbVar1 + 2;
    *pbVar4 = (byte)uVar7;
    lVar13 = *(long *)(param_1 + 0x30);
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
LAB_109318f70:
            param_3[0x38] = 1;
LAB_109318f50:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_109318f50;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar6 - (long)pbVar2);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109318f70;
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



/* Entry: 1093190a0; end: 1093191c3;  */

long FUN_1093190a0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar3 = 0;
  if (uVar1 != 0) {
    lVar3 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  lVar5 = 0;
  if (uVar2 != 0) {
    lVar5 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar2 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar5 = lVar3 + ((ulong)uVar2 + (ulong)uVar1) * 4 + lVar5;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      FUN_1093134a4();
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x40);
      FUN_1093134a4();
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + lVar5;
    }
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



/* Entry: 1093191c4; end: 1093191c7;  */

void FUN_1093191c4(long param_1,long param_2)

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
      FUN_109311970(param_1 + 0x18);
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
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      FUN_109311970(param_1 + 0x28);
      iVar3 = *(int *)(param_1 + 0x28);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x30);
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar3 * 4);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 7) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar8;
        FUN_10932fce4(uVar8,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_10932fce4(uVar8,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar8;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
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



/* Entry: 1093191c8; end: 10931936f;  */

void FUN_1093191c8(long param_1,long param_2)

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
      FUN_109311970(param_1 + 0x18);
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
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      FUN_109311970(param_1 + 0x28);
      iVar3 = *(int *)(param_1 + 0x28);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x30);
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar3 * 4);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 7) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar8;
        FUN_10932fce4(uVar8,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_10932fce4(uVar8,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar8;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
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



/* Entry: 109319370; end: 1093193ab;  */

long FUN_109319370(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093193ac; end: 1093193af;  */

long FUN_1093193ac(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093193b0; end: 1093193c3;  */

void FUN_1093193b0(void)

{
  FUN_109319370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093193c4; end: 1093193cf;  */

undefined ** FUN_1093193c4(void)

{
  return &PTR_DAT_110aed800;
}



/* Entry: 1093193d0; end: 10931941b;  */

void FUN_1093193d0(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109313260(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 10931941c; end: 10931957f;  */

long * FUN_10931941c(long param_1,long *param_2,long *param_3)

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
  if ((uVar3 >> 1 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
  }
  plVar2 = plVar1;
  if ((uVar3 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),plVar1,param_3);
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



/* Entry: 109319580; end: 109319627;  */

void FUN_109319580(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_1093134a4();
      iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar2;
    }
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



/* Entry: 109319628; end: 10931962b;  */

void FUN_109319628(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_10932fce4(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093135dc(*(long *)(param_1 + 0x18));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
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



/* Entry: 10931962c; end: 1093196db;  */

void FUN_10931962c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_10932fce4(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093135dc(*(long *)(param_1 + 0x18));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
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



/* Entry: 1093196dc; end: 109319743;  */

long FUN_1093196dc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109333c90();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109319744; end: 109319747;  */

long FUN_109319744(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109333c90();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109319748; end: 10931975b;  */

void FUN_109319748(void)

{
  FUN_1093196dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931975c; end: 109319767;  */

undefined ** FUN_10931975c(void)

{
  return &PTR_DAT_110aed848;
}



/* Entry: 109319768; end: 1093197cb;  */

void FUN_109319768(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109333cfc(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
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



/* Entry: 1093197cc; end: 109319a93;  */

byte * FUN_1093197cc(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x10);
  pbVar3 = param_2;
  if ((uVar13 & 1) != 0) {
    pbVar3 = (byte *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
  }
  pbVar4 = pbVar3;
  if ((uVar13 >> 1 & 1) != 0) {
    pbVar4 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),pbVar3,param_3);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar1) {
    uVar16 = 0;
    pbVar3 = param_3 + 0x10;
    do {
      pbVar7 = pbVar4;
      pbVar11 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar4) {
        do {
          pbVar7 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093198b4:
            param_3[0x38] = 1;
LAB_109319954:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar8 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar17 = *(undefined8 *)pbVar11;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar11 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              *(byte **)(param_3 + 8) = pbVar11;
              goto LAB_109319954;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar11 - (long)pbVar3);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_1093198b4;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar3 = uVar17;
              pbVar8 = pbVar3 + (int)uStack_64;
              *(byte **)param_3 = pbVar8;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar17 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar17;
              pbVar8 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar8;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar7 = pbStack_70;
            }
          }
          pbVar4 = pbVar7 + ((int)pbVar4 - (int)pbVar11);
          pbVar7 = pbVar4;
          pbVar11 = pbVar8;
        } while (pbVar8 <= pbVar4);
      }
      uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + uVar16 * 4);
      uVar6 = (ulong)(int)uVar2;
      pbVar11 = pbVar7 + 1;
      *pbVar7 = 0x18;
      uVar14 = uVar6;
      pbVar4 = pbVar11;
      if (0x7f < uVar2) {
        do {
          pbVar11 = pbVar4 + 1;
          *pbVar4 = (byte)uVar14 | 0x80;
          uVar6 = uVar14 >> 7;
          uVar9 = uVar14 >> 0xe;
          uVar14 = uVar6;
          pbVar4 = pbVar11;
        } while (uVar9 != 0);
      }
      pbVar4 = pbVar11 + 1;
      *pbVar11 = (byte)uVar6;
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar1);
  }
  pbVar3 = pbVar4;
  if ((uVar13 >> 2 & 1) != 0) {
    pbVar3 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 0x38),pbVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar14 = (ulong)*(char *)(uVar16 + 0x1f);
    if ((long)uVar14 < 0) {
      lVar12 = *(long *)(uVar16 + 8);
      uVar14 = (ulong)*(uint *)(uVar16 + 0x10);
    }
    else {
      lVar12 = uVar16 + 8;
    }
    uVar13 = (uint)uVar14;
    if (*(long *)param_3 - (long)pbVar3 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar15 = (int)pbVar4;
          _memcpy(pbVar3,lVar12,(long)iVar15);
          uVar13 = (int)uVar14 - iVar15;
          uVar14 = (ulong)uVar13;
          lVar12 = lVar12 + iVar15;
          pbVar4 = *(byte **)param_3;
          pbVar7 = pbVar3 + iVar15;
          do {
            pbVar3 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar3 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar3 + ((int)pbVar7 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar3 = pbVar7;
          } while (pbVar4 <= pbVar7);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar3);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(pbVar3,lVar12,(long)(int)uVar13);
      pbVar3 = pbVar3 + (int)uVar13;
    }
    else {
      _memcpy(pbVar3,lVar12,uVar14 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar13;
    }
  }
  return pbVar3;
}



/* Entry: 109319a94; end: 109319bb7;  */

long FUN_109319a94(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  
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
  lVar3 = lVar3 + (ulong)uVar1;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      FUN_1093134a4();
      lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      FUN_109334040();
      lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 109319bb8; end: 109319bbb;  */

void FUN_109319bb8(long param_1,long param_2)

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
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 7) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar8;
        FUN_10932fce4(uVar8,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_10932fda4(uVar8,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar8;
      }
      else {
        FUN_1093340c4();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
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



/* Entry: 109319bbc; end: 109319d07;  */

void FUN_109319bbc(long param_1,long param_2)

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
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 7) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar8;
        FUN_10932fce4(uVar8,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_10932fda4(uVar8,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar8;
      }
      else {
        FUN_1093340c4();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
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



/* Entry: 109319d08; end: 109319d43;  */

long FUN_109319d08(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109319d44; end: 109319d47;  */

long FUN_109319d44(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109319d48; end: 109319d5b;  */

void FUN_109319d48(void)

{
  FUN_109319d08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109319d5c; end: 109319d67;  */

undefined ** FUN_109319d5c(void)

{
  return &PTR_DAT_110aed898;
}



/* Entry: 109319d68; end: 109319daf;  */

void FUN_109319d68(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109313260(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 109319db0; end: 109319efb;  */

long * FUN_109319db0(long param_1,long *param_2,long *param_3)

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
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
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



/* Entry: 109319efc; end: 109319f6f;  */

void FUN_109319efc(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_1093134a4();
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



/* Entry: 109319f70; end: 109319f73;  */

void FUN_109319f70(long param_1,long param_2)

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
      FUN_10932fce4(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1093135dc(*(long *)(param_1 + 0x18));
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



/* Entry: 109319f74; end: 10931a00b;  */

void FUN_109319f74(long param_1,long param_2)

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
      FUN_10932fce4(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1093135dc(*(long *)(param_1 + 0x18));
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



/* Entry: 10931a00c; end: 10931a043;  */

void FUN_10931a00c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
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



/* Entry: 10931a044; end: 10931a09b;  */

long FUN_10931a044(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10931a09c; end: 10931a0bf;  */

undefined ** FUN_10931a09c(void)

{
  return &PTR_DAT_110aed8e8;
}



/* Entry: 10931a0c0; end: 10931a243;  */

long * FUN_10931a0c0(long param_1,long *param_2,long *param_3)

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
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
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
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)param_2 = 0xd;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
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
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar2 + (long)((int)plVar4 - (int)plVar5));
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



/* Entry: 10931a244; end: 10931a283;  */

long FUN_10931a244(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
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



/* Entry: 10931a284; end: 10931a2bf;  */

long FUN_10931a284(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 10931a2c0; end: 10931a2c3;  */

long FUN_10931a2c0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 10931a2c4; end: 10931a2d7;  */

void FUN_10931a2c4(void)

{
  FUN_10931a284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931a2d8; end: 10931a363;  */

undefined ** FUN_10931a2d8(void)

{
  return &PTR_DAT_110aed938;
}



/* Entry: 10931a364; end: 10931a4f3;  */

long * FUN_10931a364(long param_1,long *param_2,long *param_3)

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
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c280a0(param_3,2,*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc,param_2);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
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



/* Entry: 10931a4f4; end: 10931a5df;  */

long FUN_10931a4f4(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = lVar3 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10931a5e0; end: 10931a6c3;  */

void FUN_10931a5e0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x18,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x20,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
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



/* Entry: 10931a6c4; end: 10931a737;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931a6c4(long param_1,long param_2)

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



/* Entry: 10931a738; end: 10931a78f;  */

long FUN_10931a738(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10931a790; end: 10931a7c3;  */

undefined ** FUN_10931a790(void)

{
  return &PTR_DAT_110aed970;
}



/* Entry: 10931a7c4; end: 10931a9cb;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10931a7c4(long param_1,long *param_2,long *param_3)

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
    plVar4 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
    param_2 = plVar4;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    plVar4 = param_3;
    func_0x0001088b96ec(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
    param_2 = plVar4;
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
    *(undefined1 *)param_2 = 0x35;
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
    *(undefined1 *)param_2 = 0x3d;
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



/* Entry: 10931a9cc; end: 10931ab0b;  */

ulong FUN_10931a9cc(long param_1)

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
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 + 5;
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar2 + 5;
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



/* Entry: 10931ab0c; end: 10931ab63;  */

long FUN_10931ab0c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10931ab64; end: 10931ab9b;  */

undefined ** FUN_10931ab64(void)

{
  return &PTR_DAT_110aed9a8;
}



/* Entry: 10931ab9c; end: 10931aef3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10931ab9c(long param_1,long *param_2,long *param_3)

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
  if ((uVar8 >> 6 & 1) != 0) {
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
    *(undefined1 *)param_2 = 0xd;
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
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)param_2 = 0x15;
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
    *(undefined1 *)param_2 = 0x1d;
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
    uVar2 = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)param_2 = 0x20;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
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
    uVar2 = *(undefined1 *)(param_1 + 0x21);
    *(undefined1 *)param_2 = 0x28;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 4 & 1) != 0) {
    plVar4 = param_3;
    func_0x0001089f53c8(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
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
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)param_2 = 0x3d;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
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



/* Entry: 10931aef4; end: 10931af9f;  */

long FUN_10931aef4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) == 0) {
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
    lVar2 = lVar2 + (ulong)((uVar1 >> 2 & 2) + (uVar1 >> 1 & 2));
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + lVar2;
    }
    if ((uVar1 & 0x20) != 0) {
      lVar2 = lVar2 + 5;
    }
    if ((uVar1 & 0x40) != 0) {
      lVar2 = lVar2 + 5;
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



/* Entry: 10931afa0; end: 10931b07b;  */

long FUN_10931afa0(long param_1)

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


