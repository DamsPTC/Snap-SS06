/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c7bc18; end: 109c7bc2b;  */

void FUN_109c7bc18(void)

{
  func_0x000109c7bbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c7bc2c; end: 109c7bcaf;  */

long FUN_109c7bc2c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7bcb0; end: 109c7bcbb;  */

undefined ** FUN_109c7bcb0(void)

{
  return &PTR_DAT_110b313e0;
}



/* Entry: 109c7bcbc; end: 109c7c04b;  */

long * FUN_109c7bcbc(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  ulong uStack_48;
  long lVar10;
  
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x28),param_2);
  }
  iVar9 = *(int *)(param_1 + 0x18);
  if (iVar9 != 0) {
    iVar8 = 0;
    plVar3 = plVar2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar8 * 8 + 7);
      }
      plVar2 = (long *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar3,param_3);
      iVar8 = iVar8 + 1;
      plVar3 = plVar2;
    } while (iVar9 != iVar8);
  }
  uVar4 = *(uint *)(param_1 + 0x44);
  plVar3 = (long *)(ulong)uVar4;
  if (uVar4 == 100) {
    lVar6 = 0x10;
  }
  else {
    if (uVar4 != 0x6e) goto LAB_109c7bd7c;
    lVar6 = 0x14;
  }
  func_0x000107c303cc(plVar3,*(long *)(param_1 + 0x30),
                      *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar6),plVar2,param_3);
  plVar2 = plVar3;
LAB_109c7bd7c:
  plVar3 = plVar2;
  if (*(int *)(param_1 + 0x48) == 200) {
    plVar3 = (long *)0xc8;
    func_0x000107c303cc(200,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10),plVar2,param_3);
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
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)plVar3 < (long)(int)uVar4) {
      lVar10 = (*param_3 - (long)plVar3) + 0x10;
      if ((int)lVar10 < (int)uVar4) {
        do {
          iVar9 = (int)lVar10;
          _memcpy(plVar3,lVar6,(long)iVar9);
          uVar4 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar4;
          lVar6 = lVar6 + iVar9;
          plVar7 = (long *)*param_3;
          plVar2 = (long *)((long)plVar3 + (long)iVar9);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar3 + (long)((int)plVar2 - (int)plVar7));
            plVar7 = (long *)*param_3;
            plVar3 = plVar2;
          } while (plVar7 <= plVar2);
          lVar10 = (long)plVar7 + (0x10 - (long)plVar3);
        } while ((int)lVar10 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(plVar3,lVar6,(long)(int)(uint)uStack_48);
      plVar3 = (long *)((long)plVar3 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar3,lVar6,uStack_48 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar4);
    }
  }
  return plVar3;
}



/* Entry: 109c7c04c; end: 109c7c04f;  */

/* WARNING: Possible PIC construction at 0x000109c7ba10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c7ba14) */

void FUN_109c7c04c(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *unaff_x19;
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
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  iVar3 = *(int *)(param_2 + 0x44);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x44);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_109c7bae8(param_1);
      }
      *(int *)(param_1 + 0x44) = iVar3;
    }
    uVar5 = uVar9;
    if (iVar3 == 0x6e) {
      if (iVar4 == 0x6e) {
        lVar7 = *(long *)(param_1 + 0x30);
        ppuVar2 = *(undefined ***)(param_2 + 0x30);
        if (*(int *)(param_2 + 0x44) != 0x6e) {
          ppuVar2 = &PTR_PTR_1132f1640;
        }
        if (*(int *)(ppuVar2 + 2) != 0) {
          *(int *)(lVar7 + 0x10) = *(int *)(ppuVar2 + 2);
        }
        if (((ulong)ppuVar2[1] & 1) != 0) {
LAB_109c7ba10:
          unaff_x30 = 0x109c7ba14;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          puVar6 = (ulong *)(lVar7 + 8);
          unaff_x19 = puVar8;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
      }
      else {
        FUN_109c7cec0(uVar9,*(undefined8 *)(param_2 + 0x30));
LAB_109c7ba34:
        *(ulong *)(param_1 + 0x30) = uVar5;
      }
    }
    else if (iVar3 == 100) {
      if (iVar4 != 100) {
        FUN_109c7ce28(uVar9,*(undefined8 *)(param_2 + 0x30));
        goto LAB_109c7ba34;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x44) != 100) {
        ppuVar2 = &PTR_PTR_1132f1658;
      }
      if (((ulong)ppuVar2[1] & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x30);
        goto LAB_109c7ba10;
      }
    }
  }
  iVar3 = *(int *)(param_2 + 0x48);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x48) == iVar3) {
      if ((iVar3 == 200) && (uVar9 = *(ulong *)(*(long *)(param_2 + 0x38) + 8), (uVar9 & 1) != 0)) {
        func_0x00010b4d197c(*(long *)(param_1 + 0x38) + 8,(uVar9 & 0xfffffffffffffffe) + 8);
      }
    }
    else {
      if (*(int *)(param_1 + 0x48) != 0) {
        func_0x000109c7bb58(param_1);
      }
      *(int *)(param_1 + 0x48) = iVar3;
      if (iVar3 == 200) {
        FUN_109c7cf60(uVar9,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar9;
      }
    }
  }
  puVar6 = puVar8;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar6 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109c7c050; end: 109c7c07b;  */

void FUN_109c7c050(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c7c07c; end: 109c7c097;  */

undefined ** FUN_109c7c07c(void)

{
  return &PTR_DAT_110b31430;
}



/* Entry: 109c7c098; end: 109c7c1c3;  */

long * FUN_109c7c098(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c7c1c4; end: 109c7c20b;  */

long FUN_109c7c1c4(long param_1)

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



/* Entry: 109c7c20c; end: 109c7c237;  */

void FUN_109c7c20c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c7c238; end: 109c7c253;  */

undefined ** FUN_109c7c238(void)

{
  return &PTR_DAT_110b31478;
}



/* Entry: 109c7c254; end: 109c7c37f;  */

long * FUN_109c7c254(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c7c380; end: 109c7c3c7;  */

long FUN_109c7c380(long param_1)

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



/* Entry: 109c7c3c8; end: 109c7c3f3;  */

void FUN_109c7c3c8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c7c3f4; end: 109c7c40f;  */

undefined ** FUN_109c7c3f4(void)

{
  return &PTR_DAT_110b314c8;
}



/* Entry: 109c7c410; end: 109c7c53b;  */

long * FUN_109c7c410(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c7c53c; end: 109c7c583;  */

long FUN_109c7c53c(long param_1)

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



/* Entry: 109c7c584; end: 109c7c5af;  */

void FUN_109c7c584(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c7c5b0; end: 109c7c5cf;  */

undefined ** FUN_109c7c5b0(void)

{
  return &PTR_DAT_110b31510;
}



/* Entry: 109c7c5d0; end: 109c7c70f;  */

long * FUN_109c7c5d0(long param_1,long *param_2,long *param_3)

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
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
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



/* Entry: 109c7c710; end: 109c7c783;  */

ulong FUN_109c7c710(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 109c7c784; end: 109c7c7af;  */

void FUN_109c7c784(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c7c7b0; end: 109c7c7cb;  */

undefined ** FUN_109c7c7b0(void)

{
  return &PTR_DAT_110b31558;
}



/* Entry: 109c7c7cc; end: 109c7c8f7;  */

long * FUN_109c7c7cc(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c7c8f8; end: 109c7c977;  */

long FUN_109c7c8f8(long param_1)

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



/* Entry: 109c7c978; end: 109c7c9ab;  */

long * FUN_109c7c978(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c7c9ac; end: 109c7cbbf;  */

void FUN_109c7c9ac(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b31168;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 109c7cbc0; end: 109c7ccb3;  */

undefined8 * FUN_109c7cbc0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x50);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110b312f8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(puVar2 + 2,param_2 + 0x10);
  }
  *(undefined4 *)(puVar2 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x44);
  *(int *)((long)puVar2 + 0x44) = iVar1;
  iVar4 = *(int *)(param_2 + 0x48);
  *(int *)(puVar2 + 9) = iVar4;
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28);
  puVar3 = param_1;
  if (iVar1 == 0x6e) {
    FUN_109c7cec0(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  else {
    if (iVar1 != 100) goto LAB_109c7cc88;
    FUN_109c7ce28(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = puVar3;
  iVar4 = *(int *)(puVar2 + 9);
LAB_109c7cc88:
  if (iVar4 == 200) {
    FUN_109c7cf60(param_1,*(undefined8 *)(param_2 + 0x38));
    puVar2[7] = param_1;
  }
  return puVar2;
}



/* Entry: 109c7ccb4; end: 109c7ccf7;  */

undefined8 * FUN_109c7ccb4(undefined8 *param_1,long param_2)

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
  *puVar2 = &PTR_DAT_110b3aa50;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 4) = 0;
  iVar1 = *(int *)(param_2 + 0x24);
  *(int *)((long)puVar2 + 0x24) = iVar1;
  puVar2[2] = *(undefined8 *)(param_2 + 0x10);
  if (iVar1 == 0xb) {
    func_0x000109cc6084(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar1 != 10) {
      return puVar2;
    }
    func_0x000109cc6040(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  return puVar2;
}



/* Entry: 109c7ccf8; end: 109c7cd8f;  */

undefined8 * FUN_109c7ccf8(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110b31168;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109c7cd90; end: 109c7ce27;  */

undefined8 * FUN_109c7cd90(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110b312a8;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109c7ce28; end: 109c7cebf;  */

undefined8 * FUN_109c7ce28(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110b31258;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109c7cec0; end: 109c7cf5f;  */

undefined8 * FUN_109c7cec0(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110b31208;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109c7cf60; end: 109c7cff7;  */

undefined8 * FUN_109c7cf60(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110b311b8;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109c7cff8; end: 109c7d0cf;  */

undefined8 * FUN_109c7cff8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b35490;
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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_109cbb00c(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = param_2;
  param_1[10] = *(undefined8 *)(param_3 + 0x50);
  return param_1;
}



/* Entry: 109c7d0d0; end: 109c7d11b;  */

long FUN_109c7d0d0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109cb49c0();
    __ZdlPv();
  }
  FUN_109cb7030(param_1 + 0x30);
  FUN_109cb6ffc(param_1 + 0x18);
  return param_1;
}



/* Entry: 109c7d11c; end: 109c7d11f;  */

long FUN_109c7d11c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109cb49c0();
    __ZdlPv();
  }
  FUN_109cb7030(param_1 + 0x30);
  FUN_109cb6ffc(param_1 + 0x18);
  return param_1;
}



/* Entry: 109c7d120; end: 109c7d133;  */

void FUN_109c7d120(void)

{
  FUN_109c7d0d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c7d134; end: 109c7d13f;  */

undefined ** FUN_109c7d134(void)

{
  return &PTR_DAT_110b355c0;
}



/* Entry: 109c7d140; end: 109c7d24b;  */

void FUN_109c7d140(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c7d1b4(*(undefined8 *)(param_1 + 0x48));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = 0;
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



/* Entry: 109c7d24c; end: 109c7d69b;  */

byte * FUN_109c7d24c(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uStack_48;
  
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 != 0) {
    iVar11 = 0;
    pbVar5 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar11 * 8 + 7);
      }
      param_2 = (byte *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x88),pbVar5,param_3);
      iVar11 = iVar11 + 1;
      pbVar5 = param_2;
    } while (iVar12 != iVar11);
  }
  iVar12 = *(int *)(param_1 + 0x38);
  if (iVar12 != 0) {
    iVar11 = 0;
    pbVar5 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar11 * 8 + 7);
      }
      param_2 = (byte *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar5,param_3);
      iVar11 = iVar11 + 1;
      pbVar5 = param_2;
    } while (iVar12 != iVar11);
  }
  uVar3 = *(uint *)(param_1 + 0x50);
  if (uVar3 != 0) {
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
      uVar3 = *(uint *)(param_1 + 0x50);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x28;
    uVar6 = (ulong)(int)uVar3;
    uVar4 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  uVar3 = *(uint *)(param_1 + 0x54);
  if (uVar3 != 0) {
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
      uVar3 = *(uint *)(param_1 + 0x54);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x30;
    uVar6 = (ulong)(int)uVar3;
    uVar4 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  pbVar5 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar5 = (byte *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14),param_2,param_3);
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
    if (*param_3 - (long)pbVar5 < (long)(int)uVar3) {
      pbVar8 = (byte *)((*param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar8 < (int)uVar3) {
        do {
          iVar12 = (int)pbVar8;
          _memcpy(pbVar5,lVar10,(long)iVar12);
          uVar3 = (int)uStack_48 - iVar12;
          uStack_48 = (ulong)uVar3;
          lVar10 = lVar10 + iVar12;
          pbVar8 = (byte *)*param_3;
          pbVar9 = pbVar5 + iVar12;
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
        } while ((int)pbVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar5,lVar10,(long)(int)(uint)uStack_48);
      pbVar5 = pbVar5 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar5,lVar10,uStack_48 & 0xffffffff);
      pbVar5 = pbVar5 + (int)uVar3;
    }
  }
  return pbVar5;
}



/* Entry: 109c7d69c; end: 109c7d69f;  */

void FUN_109c7d69c(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      FUN_109cbb00c(uVar2,*(undefined8 *)(param_2 + 0x48));
      *(ulong *)(param_1 + 0x48) = uVar2;
    }
    else {
      func_0x000109c7d784();
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
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



/* Entry: 109c7d6a0; end: 109c7d8eb;  */

void FUN_109c7d6a0(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      FUN_109cbb00c(uVar2,*(undefined8 *)(param_2 + 0x48));
      *(ulong *)(param_1 + 0x48) = uVar2;
    }
    else {
      func_0x000109c7d784();
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
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



/* Entry: 109c7d8ec; end: 109c7d957;  */

void FUN_109c7d8ec(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 109c7d958; end: 109c7d9af;  */

long FUN_109c7d958(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7d9b0; end: 109c7d9d3;  */

undefined ** FUN_109c7d9b0(void)

{
  return &PTR_DAT_110b35608;
}



/* Entry: 109c7d9d4; end: 109c7dcf3;  */

long * FUN_109c7d9d4(long param_1,long *param_2,long *param_3)

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
    *(undefined1 *)param_2 = 0x55;
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
    *(undefined2 *)param_2 = 0x1a5;
    *(int *)((long)param_2 + 2) = iVar8;
    param_2 = (long *)((long)param_2 + 6);
  }
  iVar8 = *(int *)(param_1 + 0x18);
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
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(undefined2 *)param_2 = 0x1ad;
    *(int *)((long)param_2 + 2) = iVar8;
    param_2 = (long *)((long)param_2 + 6);
  }
  iVar8 = *(int *)(param_1 + 0x1c);
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
      iVar8 = *(int *)(param_1 + 0x1c);
    }
    *(undefined2 *)param_2 = 0x1b5;
    *(int *)((long)param_2 + 2) = iVar8;
    param_2 = (long *)((long)param_2 + 6);
  }
  iVar8 = *(int *)(param_1 + 0x20);
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
      iVar8 = *(int *)(param_1 + 0x20);
    }
    *(undefined2 *)param_2 = 0x1f5;
    *(int *)((long)param_2 + 2) = iVar8;
    param_2 = (long *)((long)param_2 + 6);
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



/* Entry: 109c7dcf4; end: 109c7dd6b;  */

long FUN_109c7dcf4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 6;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 6;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + 6;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x24) = (int)lVar1;
  return lVar1;
}



/* Entry: 109c7dd6c; end: 109c7ddb3;  */

long FUN_109c7dd6c(long param_1)

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



/* Entry: 109c7ddb4; end: 109c7ddb7;  */

long FUN_109c7ddb4(long param_1)

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



/* Entry: 109c7ddb8; end: 109c7ddcb;  */

void FUN_109c7ddb8(void)

{
  FUN_109c7dd6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c7ddcc; end: 109c7ddeb;  */

undefined ** FUN_109c7ddcc(void)

{
  return &PTR_DAT_110b35658;
}



/* Entry: 109c7ddec; end: 109c7e0f7;  */

byte * FUN_109c7ddec(long param_1,byte *param_2,long *param_3)

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
LAB_109c7dfe4:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c7dfc4:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar12 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109c7dfc4;
            }
            _memcpy(param_3[1],pbVar12,(long)pbVar4 - (long)pbVar12);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109c7dfe4;
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



/* Entry: 109c7e0f8; end: 109c7e153;  */

long FUN_109c7e0f8(long param_1)

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



/* Entry: 109c7e154; end: 109c7e1fb;  */

void FUN_109c7e154(long param_1,long param_2)

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



/* Entry: 109c7e1fc; end: 109c7e2df;  */

void FUN_109c7e1fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x24) == 0xb) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x18), lVar2 == 0)) goto LAB_109c7e26c;
    FUN_109c7dd6c(lVar2);
  }
  else {
    if (*(int *)(param_1 + 0x24) != 10) goto LAB_109c7e26c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x18), lVar2 == 0)) goto LAB_109c7e26c;
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
  }
  __ZdlPv(lVar2);
LAB_109c7e26c:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 109c7e2e0; end: 109c7e2e3;  */

long FUN_109c7e2e0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_109c7e1fc(param_1);
  }
  return param_1;
}



/* Entry: 109c7e2e4; end: 109c7e2f7;  */

void FUN_109c7e2e4(void)

{
  func_0x000109c7e29c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c7e2f8; end: 109c7e303;  */

undefined ** FUN_109c7e2f8(void)

{
  return &PTR_DAT_110b356a8;
}



/* Entry: 109c7e304; end: 109c7e36f;  */

void FUN_109c7e304(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if ((*(ulong *)(param_1 + 0x10) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  FUN_109c7e1fc(param_1);
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



/* Entry: 109c7e370; end: 109c7e517;  */

long * FUN_109c7e370(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lStack_48;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)*puVar8;
      goto LAB_109c7e3bc;
    }
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_109c7e3bc:
      func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f5a6a0b);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,1,puVar8,param_2);
      param_2 = plVar2;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x24);
  plVar2 = (long *)(ulong)uVar7;
  if (uVar7 == 10) {
    lVar4 = 0x24;
  }
  else {
    if (uVar7 != 0xb) goto LAB_109c7e41c;
    lVar4 = 0x20;
  }
  func_0x000107c303cc(plVar2,*(long *)(param_1 + 0x18),
                      *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar4),param_2,param_3);
  param_2 = plVar2;
LAB_109c7e41c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lStack_48 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_48 = uVar5 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      lVar4 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar4 < (int)uVar7) {
        do {
          iVar10 = (int)lVar4;
          _memcpy(param_2,lStack_48,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lStack_48 = lStack_48 + iVar10;
          plVar6 = (long *)*param_3;
          plVar2 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar3 + (long)((int)plVar2 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar2;
          } while (plVar6 <= plVar2);
          lVar4 = (long)plVar6 + (0x10 - (long)param_2);
        } while ((int)lVar4 < (int)uVar7);
      }
      _memcpy(param_2,lStack_48,(long)(int)uVar7);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
    else {
      _memcpy(param_2,lStack_48,uVar9 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
  }
  return param_2;
}



/* Entry: 109c7e518; end: 109c7e5ef;  */

long FUN_109c7e518(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_109c7e570;
LAB_109c7e53c:
    lVar1 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar1 = lVar3;
    }
    lVar3 = lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
  }
  else {
    if (lVar3 != 0) goto LAB_109c7e53c;
LAB_109c7e570:
    lVar3 = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0xb) {
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_109c7e0f8();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 10) goto LAB_109c7e5bc;
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_109c7dcf4();
  }
  lVar3 = lVar3 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
LAB_109c7e5bc:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 109c7e5f0; end: 109c7e73f;  */

void FUN_109c7e5f0(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 8);
  uVar4 = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar5 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar5,uVar6);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_109c7e6ec;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c7e1fc(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 == 0xb) {
    if (iVar3 == 0xb) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 0xb) {
        ppuVar1 = &PTR_PTR_1132fb1b0;
      }
      FUN_109c7e154(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109c7e6ec;
    }
    FUN_109cbb1a8(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar2 != 10) goto LAB_109c7e6ec;
    if (iVar3 == 10) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 10) {
        ppuVar1 = &PTR_PTR_1132fb1d8;
      }
      FUN_109c7d8ec(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109c7e6ec;
    }
    FUN_109cbb11c(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_1 + 0x18) = uVar4;
LAB_109c7e6ec:
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



/* Entry: 109c7e740; end: 109c7e797;  */

long FUN_109c7e740(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7e798; end: 109c7e7b3;  */

undefined ** FUN_109c7e798(void)

{
  return &PTR_DAT_110b356f8;
}



/* Entry: 109c7e7b4; end: 109c7e8df;  */

long * FUN_109c7e7b4(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c7e8e0; end: 109c7e927;  */

long FUN_109c7e8e0(long param_1)

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



/* Entry: 109c7e928; end: 109c7e97f;  */

long FUN_109c7e928(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7e980; end: 109c7e99f;  */

undefined ** FUN_109c7e980(void)

{
  return &PTR_DAT_110b35740;
}



/* Entry: 109c7e9a0; end: 109c7eb2b;  */

long * FUN_109c7e9a0(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c7eb2c; end: 109c7eb93;  */

long FUN_109c7eb2c(long param_1)

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



/* Entry: 109c7eb94; end: 109c7ebeb;  */

long FUN_109c7eb94(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7ebec; end: 109c7ec07;  */

undefined ** FUN_109c7ebec(void)

{
  return &PTR_DAT_110b35790;
}



/* Entry: 109c7ec08; end: 109c7ed33;  */

long * FUN_109c7ec08(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c7ed34; end: 109c7edb7;  */

long FUN_109c7ed34(long param_1)

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



/* Entry: 109c7edb8; end: 109c7ee0f;  */

long FUN_109c7edb8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7ee10; end: 109c7ee2f;  */

undefined ** FUN_109c7ee10(void)

{
  return &PTR_DAT_110b357d8;
}



/* Entry: 109c7ee30; end: 109c7f023;  */

long * FUN_109c7ee30(long param_1,long *param_2,long *param_3)

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
    *(undefined1 *)param_2 = 0xd;
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
    *(undefined1 *)param_2 = 0x15;
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



/* Entry: 109c7f024; end: 109c7f06f;  */

long FUN_109c7f024(long param_1)

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



/* Entry: 109c7f070; end: 109c7f0c7;  */

long FUN_109c7f070(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7f0c8; end: 109c7f0e3;  */

undefined ** FUN_109c7f0c8(void)

{
  return &PTR_DAT_110b35828;
}



/* Entry: 109c7f0e4; end: 109c7f20f;  */

long * FUN_109c7f0e4(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c7f210; end: 109c7f293;  */

long FUN_109c7f210(long param_1)

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



/* Entry: 109c7f294; end: 109c7f2eb;  */

long FUN_109c7f294(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7f2ec; end: 109c7f30b;  */

undefined ** FUN_109c7f2ec(void)

{
  return &PTR_DAT_110b35870;
}



/* Entry: 109c7f30c; end: 109c7f4ff;  */

long * FUN_109c7f30c(long param_1,long *param_2,long *param_3)

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
    *(undefined1 *)param_2 = 0xd;
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
    *(undefined1 *)param_2 = 0x15;
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



/* Entry: 109c7f500; end: 109c7f587;  */

long FUN_109c7f500(long param_1)

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



/* Entry: 109c7f588; end: 109c7f5df;  */

long FUN_109c7f588(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7f5e0; end: 109c7f5ff;  */

undefined ** FUN_109c7f5e0(void)

{
  return &PTR_DAT_110b358b8;
}



/* Entry: 109c7f600; end: 109c7f7f3;  */

long * FUN_109c7f600(long param_1,long *param_2,long *param_3)

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
    *(undefined1 *)param_2 = 0xd;
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
    *(undefined1 *)param_2 = 0x15;
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



/* Entry: 109c7f7f4; end: 109c7f83f;  */

long FUN_109c7f7f4(long param_1)

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



/* Entry: 109c7f840; end: 109c7f87b;  */

long FUN_109c7f840(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c7f87c; end: 109c7f87f;  */

long FUN_109c7f87c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c7f880; end: 109c7f893;  */

void FUN_109c7f880(void)

{
  FUN_109c7f840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c7f894; end: 109c7f89f;  */

undefined ** FUN_109c7f894(void)

{
  return &PTR_DAT_110b35908;
}



/* Entry: 109c7f8a0; end: 109c7f9c7;  */

void FUN_109c7f8a0(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 109c7f9c8; end: 109c7fb13;  */

long * FUN_109c7f9c8(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c7fb14; end: 109c7fb87;  */

void FUN_109c7fb14(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_109c908c0();
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



/* Entry: 109c7fb88; end: 109c7fb8b;  */

void FUN_109c7fb88(long param_1,long param_2)

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
      FUN_109cbb22c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109c7fc24(*(long *)(param_1 + 0x18));
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



/* Entry: 109c7fb8c; end: 109c7fc23;  */

void FUN_109c7fb8c(long param_1,long param_2)

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
      FUN_109cbb22c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109c7fc24(*(long *)(param_1 + 0x18));
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


