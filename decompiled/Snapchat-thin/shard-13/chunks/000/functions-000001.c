/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109cc3de8; end: 109cc40b3;  */

long FUN_109cc3de8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    if (*(long *)(uVar1 + 8) != 0) goto LAB_109cc3e0c;
LAB_109cc3e40:
    lVar3 = 0;
  }
  else {
    if (lVar3 == 0) goto LAB_109cc3e40;
LAB_109cc3e0c:
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar3 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar4;
  if (lVar4 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar4;
    }
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar4;
  if (lVar4 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar4;
    }
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  uVar1 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar4;
  if (lVar4 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar4;
    }
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  uVar1 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar4;
  if (lVar4 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar4;
    }
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  uVar1 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar4;
  if (lVar4 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar4;
    }
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar3 = lVar3 + 10;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar3 = lVar3 + 10;
  }
  if (*(int *)(param_1 + 100) == 1) {
    lVar4 = *(long *)(param_1 + 0x50);
    lVar2 = (ulong)*(byte *)(lVar4 + 0x10) * 2;
    if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(lVar4 + 8) & 0xfffffffffffffffe;
      lVar5 = (long)*(char *)(uVar1 + 0x1f);
      if (lVar5 < 0) {
        lVar5 = *(long *)(uVar1 + 0x10);
      }
      lVar2 = lVar5 + lVar2;
    }
    *(int *)(lVar4 + 0x14) = (int)lVar2;
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x68) == 0x65) {
    lVar2 = *(long *)(param_1 + 0x58);
    func_0x000109c68808();
  }
  else {
    if (*(int *)(param_1 + 0x68) != 100) goto LAB_109cc4068;
    lVar2 = *(long *)(param_1 + 0x58);
    func_0x000109c68360();
  }
  lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
LAB_109cc4068:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x60) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cc40b4; end: 109cc40b7;  */

/* WARNING: Possible PIC construction at 0x000109cc4238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109cc423c) */

void FUN_109cc40b4(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong *unaff_x19;
  ulong *puVar11;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar11 = (ulong *)(param_1 + 8);
  uVar8 = *puVar11;
  uVar5 = uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  uVar7 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar7 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar7 + 8);
  }
  if (lVar9 != 0) {
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar7,uVar8);
  }
  uVar8 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar8,uVar7);
  }
  uVar8 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar8,uVar7);
  }
  uVar8 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar8,uVar7);
  }
  uVar8 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar8,uVar7);
  }
  uVar8 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar8,uVar7);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  iVar3 = *(int *)(param_2 + 100);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 100) == iVar3) {
      if (iVar3 == 1) {
        lVar9 = *(long *)(param_1 + 0x50);
        lVar10 = *(long *)(param_2 + 0x50);
        if (*(char *)(lVar10 + 0x10) == '\x01') {
          *(undefined1 *)(lVar9 + 0x10) = 1;
        }
        if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
          unaff_x30 = 0x109cc423c;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          puVar6 = (ulong *)(lVar9 + 8);
          unaff_x19 = puVar11;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 100) != 0) {
        func_0x000109cc3558(param_1);
      }
      *(int *)(param_1 + 100) = iVar3;
      if (iVar3 == 1) {
        uVar8 = uVar5;
        FUN_109cc4464(uVar5,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar8;
      }
    }
  }
  iVar3 = *(int *)(param_2 + 0x68);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        func_0x000109cc35c0(param_1);
      }
      *(int *)(param_1 + 0x68) = iVar3;
    }
    if (iVar3 == 0x65) {
      if (iVar4 == 0x65) {
        ppuVar2 = *(undefined ***)(param_2 + 0x58);
        if (*(int *)(param_2 + 0x68) != 0x65) {
          ppuVar2 = &PTR_PTR_1132ee5c8;
        }
        func_0x000109c688b0(*(undefined8 *)(param_1 + 0x58),ppuVar2);
      }
      else {
        func_0x000109c6baf8(uVar5,*(undefined8 *)(param_2 + 0x58));
LAB_109cc4310:
        *(ulong *)(param_1 + 0x58) = uVar5;
      }
    }
    else if (iVar3 == 100) {
      if (iVar4 != 100) {
        func_0x000109c6bab4(uVar5,*(undefined8 *)(param_2 + 0x58));
        goto LAB_109cc4310;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x58);
      if (*(int *)(param_2 + 0x68) != 100) {
        ppuVar2 = &PTR_PTR_1132ee598;
      }
      func_0x000109c683fc(*(undefined8 *)(param_1 + 0x58),ppuVar2);
    }
  }
  puVar6 = puVar11;
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



/* Entry: 109cc40b8; end: 109cc43a3;  */

/* WARNING: Possible PIC construction at 0x000109cc4238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109cc423c) */

void FUN_109cc40b8(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong *unaff_x19;
  ulong *puVar11;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar11 = (ulong *)(param_1 + 8);
  uVar8 = *puVar11;
  uVar5 = uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  uVar7 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar7 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar7 + 8);
  }
  if (lVar9 != 0) {
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar7,uVar8);
  }
  uVar8 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar8,uVar7);
  }
  uVar8 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar8,uVar7);
  }
  uVar8 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar8,uVar7);
  }
  uVar8 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar8,uVar7);
  }
  uVar8 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar8,uVar7);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  iVar3 = *(int *)(param_2 + 100);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 100) == iVar3) {
      if (iVar3 == 1) {
        lVar9 = *(long *)(param_1 + 0x50);
        lVar10 = *(long *)(param_2 + 0x50);
        if (*(char *)(lVar10 + 0x10) == '\x01') {
          *(undefined1 *)(lVar9 + 0x10) = 1;
        }
        if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
          unaff_x30 = 0x109cc423c;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          puVar6 = (ulong *)(lVar9 + 8);
          unaff_x19 = puVar11;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 100) != 0) {
        func_0x000109cc3558(param_1);
      }
      *(int *)(param_1 + 100) = iVar3;
      if (iVar3 == 1) {
        uVar8 = uVar5;
        FUN_109cc4464(uVar5,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar8;
      }
    }
  }
  iVar3 = *(int *)(param_2 + 0x68);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        func_0x000109cc35c0(param_1);
      }
      *(int *)(param_1 + 0x68) = iVar3;
    }
    if (iVar3 == 0x65) {
      if (iVar4 == 0x65) {
        ppuVar2 = *(undefined ***)(param_2 + 0x58);
        if (*(int *)(param_2 + 0x68) != 0x65) {
          ppuVar2 = &PTR_PTR_1132ee5c8;
        }
        func_0x000109c688b0(*(undefined8 *)(param_1 + 0x58),ppuVar2);
      }
      else {
        func_0x000109c6baf8(uVar5,*(undefined8 *)(param_2 + 0x58));
LAB_109cc4310:
        *(ulong *)(param_1 + 0x58) = uVar5;
      }
    }
    else if (iVar3 == 100) {
      if (iVar4 != 100) {
        func_0x000109c6bab4(uVar5,*(undefined8 *)(param_2 + 0x58));
        goto LAB_109cc4310;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x58);
      if (*(int *)(param_2 + 0x68) != 100) {
        ppuVar2 = &PTR_PTR_1132ee598;
      }
      func_0x000109c683fc(*(undefined8 *)(param_1 + 0x58),ppuVar2);
    }
  }
  puVar6 = puVar11;
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



/* Entry: 109cc43a4; end: 109cc43b3;  */

void FUN_109cc43a4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_DAT_110b3a6e0;
  puVar1[1] = param_2;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 109cc43b4; end: 109cc4463;  */

void FUN_109cc43b4(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110b3a6e0;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 109cc4464; end: 109cc4507;  */

undefined8 * FUN_109cc4464(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110b3a6e0;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109cc4508; end: 109cc452f;  */

void FUN_109cc4508(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 109cc4530; end: 109cc45a3;  */

undefined8 * FUN_109cc4530(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3a858;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  return param_1;
}



/* Entry: 109cc45a4; end: 109cc45fb;  */

long FUN_109cc45a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109cc45fc; end: 109cc461b;  */

undefined ** FUN_109cc45fc(void)

{
  return &PTR_DAT_110b3a898;
}



/* Entry: 109cc461c; end: 109cc47cb;  */

byte * FUN_109cc461c(long param_1,byte *param_2,long *param_3)

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



/* Entry: 109cc47cc; end: 109cc4847;  */

long FUN_109cc47cc(long param_1)

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



/* Entry: 109cc4848; end: 109cc491b;  */

void FUN_109cc4848(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b3a858;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 109cc491c; end: 109cc49b3;  */

undefined8 * FUN_109cc491c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3a900;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  if (iVar1 == 2) {
    func_0x000109c6baf8(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  else {
    if (iVar1 != 1) {
      return param_1;
    }
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 109cc49b4; end: 109cc49ef;  */

long FUN_109cc49b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x000109cc4890(param_1);
  }
  return param_1;
}



/* Entry: 109cc49f0; end: 109cc49f3;  */

long FUN_109cc49f0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x000109cc4890(param_1);
  }
  return param_1;
}



/* Entry: 109cc49f4; end: 109cc4a07;  */

void FUN_109cc49f4(void)

{
  FUN_109cc49b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc4a08; end: 109cc4a13;  */

undefined ** FUN_109cc4a08(void)

{
  return &PTR_DAT_110b3a940;
}



/* Entry: 109cc4a14; end: 109cc4a4f;  */

void FUN_109cc4a14(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x000109cc4890();
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



/* Entry: 109cc4a50; end: 109cc4c9b;  */

byte * FUN_109cc4a50(long param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  ulong uStack_48;
  
  uVar4 = *(uint *)(param_1 + 0x24);
  pbVar1 = (byte *)(ulong)uVar4;
  if (uVar4 == 1) {
    lVar5 = 0x28;
  }
  else {
    if (uVar4 != 2) goto LAB_109cc4aac;
    lVar5 = 0x24;
  }
  func_0x000107c303cc(pbVar1,*(long *)(param_1 + 0x18),
                      *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar5),param_2,param_3);
  param_2 = pbVar1;
LAB_109cc4aac:
  if (*(char *)(param_1 + 0x10) == '\x01') {
    pbVar1 = (byte *)*param_3;
    if (param_2 < pbVar1) {
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
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar1));
        pbVar1 = (byte *)*param_3;
      } while (pbVar1 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x10);
    }
    *param_2 = 0x50;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  uVar4 = *(uint *)(param_1 + 0x14);
  if (uVar4 != 0) {
    pbVar1 = (byte *)*param_3;
    if (pbVar1 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar1));
        pbVar1 = (byte *)*param_3;
      } while (pbVar1 <= param_2);
      uVar4 = *(uint *)(param_1 + 0x14);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x58;
    uVar6 = (ulong)(int)uVar4;
    uVar7 = uVar6;
    pbVar1 = pbVar9;
    if (0x7f < uVar4) {
      do {
        pbVar9 = pbVar1 + 1;
        *pbVar1 = (byte)uVar7 | 0x80;
        uVar6 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar6;
        pbVar1 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar6;
  }
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
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar1 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar1 < (int)uVar4) {
        do {
          iVar10 = (int)pbVar1;
          _memcpy(param_2,lVar5,(long)iVar10);
          uVar4 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar4;
          lVar5 = lVar5 + iVar10;
          pbVar1 = (byte *)*param_3;
          pbVar9 = param_2 + iVar10;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar1));
            pbVar1 = (byte *)*param_3;
            param_2 = pbVar9;
          } while (pbVar1 <= pbVar9);
          pbVar1 = pbVar1 + (0x10 - (long)param_2);
        } while ((int)pbVar1 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(param_2,lVar5,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar5,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar4;
    }
  }
  return param_2;
}



/* Entry: 109cc4c9c; end: 109cc4d53;  */

long FUN_109cc4c9c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x24) == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x000109c68808();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 1) goto LAB_109cc4d20;
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x000109c68360();
  }
  lVar2 = lVar2 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
LAB_109cc4d20:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 109cc4d54; end: 109cc4d57;  */

void FUN_109cc4d54(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_109cc4e48;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      func_0x000109cc4890(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 2) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      func_0x000109c688b0(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109cc4e48;
    }
    func_0x000109c6baf8(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar2 != 1) goto LAB_109cc4e48;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 1) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      func_0x000109c683fc(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109cc4e48;
    }
    func_0x000109c6bab4(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_1 + 0x18) = uVar4;
LAB_109cc4e48:
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



/* Entry: 109cc4d58; end: 109cc4e8f;  */

void FUN_109cc4d58(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_109cc4e48;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      func_0x000109cc4890(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 2) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      func_0x000109c688b0(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109cc4e48;
    }
    func_0x000109c6baf8(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar2 != 1) goto LAB_109cc4e48;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 1) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      func_0x000109c683fc(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109cc4e48;
    }
    func_0x000109c6bab4(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_1 + 0x18) = uVar4;
LAB_109cc4e48:
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



/* Entry: 109cc4e90; end: 109cc4e97;  */

void FUN_109cc4e90(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b3a900;
  puVar1[1] = param_2;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 109cc4e98; end: 109cc4f83;  */

void FUN_109cc4e98(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b3a900;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 109cc4f84; end: 109cc501b;  */

undefined8 * FUN_109cc4f84(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3aa50;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  if (iVar1 == 0xb) {
    func_0x000109cc6084(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  else {
    if (iVar1 != 10) {
      return param_1;
    }
    func_0x000109cc6040(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 109cc501c; end: 109cc5057;  */

long FUN_109cc501c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x000109cc4ee4(param_1);
  }
  return param_1;
}



/* Entry: 109cc5058; end: 109cc505b;  */

long FUN_109cc5058(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x000109cc4ee4(param_1);
  }
  return param_1;
}



/* Entry: 109cc505c; end: 109cc506f;  */

void FUN_109cc505c(void)

{
  FUN_109cc501c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc5070; end: 109cc507b;  */

undefined ** FUN_109cc5070(void)

{
  return &PTR_DAT_110b3aae0;
}



/* Entry: 109cc507c; end: 109cc50b7;  */

void FUN_109cc507c(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x000109cc4ee4();
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



/* Entry: 109cc50b8; end: 109cc522f;  */

long * FUN_109cc50b8(long param_1,long *param_2,long *param_3)

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
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  uVar3 = *(uint *)(param_1 + 0x24);
  plVar2 = (long *)(ulong)uVar3;
  if (uVar3 == 10) {
    lVar4 = 0x20;
  }
  else {
    if (uVar3 != 0xb) goto LAB_109cc512c;
    lVar4 = 0x24;
  }
  func_0x000107c303cc(plVar2,*(long *)(param_1 + 0x18),
                      *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar4),plVar1,param_3);
  plVar1 = plVar2;
LAB_109cc512c:
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
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      lVar4 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar4 < (int)uVar3) {
        do {
          iVar7 = (int)lVar4;
          _memcpy(plVar1,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar2 = (long *)((long)plVar1 + (long)iVar7);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar1 + (long)((int)plVar2 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar1 = plVar2;
          } while (plVar5 <= plVar2);
          lVar4 = (long)plVar5 + (0x10 - (long)plVar1);
        } while ((int)lVar4 < (int)uVar3);
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



/* Entry: 109cc5230; end: 109cc52db;  */

ulong FUN_109cc5230(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x24) == 0xb) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x000109c69960();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 10) goto LAB_109cc52a8;
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x000109c69540();
  }
  uVar3 = uVar3 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
LAB_109cc52a8:
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



/* Entry: 109cc52dc; end: 109cc52df;  */

void FUN_109cc52dc(long param_1,long param_2)

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
  if (iVar2 == 0) goto LAB_109cc53c0;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      func_0x000109cc4ee4(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 == 0xb) {
    if (iVar3 == 0xb) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 0xb) {
        ppuVar1 = &PTR_PTR_1132ee5f0;
      }
      func_0x000109c69a08(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109cc53c0;
    }
    func_0x000109cc6084(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar2 != 10) goto LAB_109cc53c0;
    if (iVar3 == 10) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 10) {
        ppuVar1 = &PTR_PTR_1132ee618;
      }
      func_0x000109c692dc(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109cc53c0;
    }
    func_0x000109cc6040(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_1 + 0x18) = uVar4;
LAB_109cc53c0:
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



/* Entry: 109cc52e0; end: 109cc5407;  */

void FUN_109cc52e0(long param_1,long param_2)

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
  if (iVar2 == 0) goto LAB_109cc53c0;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      func_0x000109cc4ee4(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 == 0xb) {
    if (iVar3 == 0xb) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 0xb) {
        ppuVar1 = &PTR_PTR_1132ee5f0;
      }
      func_0x000109c69a08(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109cc53c0;
    }
    func_0x000109cc6084(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar2 != 10) goto LAB_109cc53c0;
    if (iVar3 == 10) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 10) {
        ppuVar1 = &PTR_PTR_1132ee618;
      }
      func_0x000109c692dc(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109cc53c0;
    }
    func_0x000109cc6040(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_1 + 0x18) = uVar4;
LAB_109cc53c0:
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



/* Entry: 109cc5408; end: 109cc546f;  */

void FUN_109cc5408(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x24) == 10) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 == 0) && (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        func_0x0001053936ac();
      }
      __ZdlPv(lVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 109cc5470; end: 109cc54ef;  */

undefined8 * FUN_109cc5470(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3aaa0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  if (iVar1 == 10) {
    func_0x000109cc60c8(param_2,*(undefined8 *)(param_3 + 0x18));
    param_1[3] = param_2;
  }
  return param_1;
}



/* Entry: 109cc54f0; end: 109cc552b;  */

long FUN_109cc54f0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_109cc5408(param_1);
  }
  return param_1;
}



/* Entry: 109cc552c; end: 109cc552f;  */

long FUN_109cc552c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_109cc5408(param_1);
  }
  return param_1;
}



/* Entry: 109cc5530; end: 109cc5543;  */

void FUN_109cc5530(void)

{
  FUN_109cc54f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc5544; end: 109cc554f;  */

undefined ** FUN_109cc5544(void)

{
  return &PTR_DAT_110b3ab28;
}



/* Entry: 109cc5550; end: 109cc558b;  */

void FUN_109cc5550(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_109cc5408();
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



/* Entry: 109cc558c; end: 109cc573f;  */

long * FUN_109cc558c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puVar7;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar1 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 9;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  plVar3 = param_2;
  if (*(int *)(param_1 + 0x24) == 10) {
    plVar3 = (long *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),param_2,param_3);
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
    if (*param_3 - (long)plVar3 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar3) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(plVar3,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar3 + (long)iVar6);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar3 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar3 = plVar1;
          } while (plVar4 <= plVar1);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar3));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar3,lStack_50,(long)(int)(uint)uStack_48);
      plVar3 = (long *)((long)plVar3 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar3,lStack_50,uStack_48 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar2);
    }
  }
  return plVar3;
}



/* Entry: 109cc5740; end: 109cc57c7;  */

long FUN_109cc5740(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = 9;
  }
  if (*(int *)(param_1 + 0x24) == 10) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x000109c69db8();
    lVar3 = lVar3 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
  }
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



/* Entry: 109cc57c8; end: 109cc57cb;  */

void FUN_109cc57c8(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x24) == iVar1) {
      if (iVar1 == 10) {
        func_0x000109c69ab0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
      }
    }
    else {
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_109cc5408(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar1;
      if (iVar1 == 10) {
        func_0x000109cc60c8(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
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



/* Entry: 109cc57cc; end: 109cc589f;  */

void FUN_109cc57cc(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x24) == iVar1) {
      if (iVar1 == 10) {
        func_0x000109c69ab0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
      }
    }
    else {
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_109cc5408(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar1;
      if (iVar1 == 10) {
        func_0x000109cc60c8(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
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



/* Entry: 109cc58a0; end: 109cc5913;  */

undefined8 * FUN_109cc58a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3a9b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar2 = (ulong *)(param_3 + 0x10);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[2] = puVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 109cc5914; end: 109cc5947;  */

long FUN_109cc5914(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109cc5948; end: 109cc594b;  */

long FUN_109cc5948(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109cc594c; end: 109cc595f;  */

void FUN_109cc594c(void)

{
  FUN_109cc5914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc5960; end: 109cc59ab;  */

undefined ** FUN_109cc5960(void)

{
  return &PTR_DAT_110b3ab70;
}



/* Entry: 109cc59ac; end: 109cc5b1b;  */

long * FUN_109cc59ac(long param_1,long *param_2,long *param_3)

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
    if (lVar4 == 0) goto LAB_109cc5a20;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109cc5a20;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f5a6ee4);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_109cc5a20:
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



/* Entry: 109cc5b1c; end: 109cc5b97;  */

long FUN_109cc5b1c(long param_1)

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



/* Entry: 109cc5b98; end: 109cc5c0b;  */

void FUN_109cc5b98(long param_1,long param_2)

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



/* Entry: 109cc5c0c; end: 109cc5c83;  */

undefined8 * FUN_109cc5c0c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3aa00;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 0x10);
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  return param_1;
}



/* Entry: 109cc5c84; end: 109cc5cdb;  */

long FUN_109cc5c84(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109cc5cdc; end: 109cc5cfb;  */

undefined ** FUN_109cc5cdc(void)

{
  return &PTR_DAT_110b3abb8;
}



/* Entry: 109cc5cfc; end: 109cc5e87;  */

long * FUN_109cc5cfc(long param_1,long *param_2,long *param_3)

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



/* Entry: 109cc5e88; end: 109cc5f07;  */

long FUN_109cc5e88(long param_1)

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



/* Entry: 109cc5f08; end: 109cc6163;  */

void FUN_109cc5f08(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b3a9b0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 109cc6164; end: 109cc617f;  */

undefined ** FUN_109cc6164(void)

{
  return &PTR_DAT_110b3b070;
}



/* Entry: 109cc6180; end: 109cc62ab;  */

long * FUN_109cc6180(long param_1,long *param_2,long *param_3)

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



/* Entry: 109cc62ac; end: 109cc62f3;  */

long FUN_109cc62ac(long param_1)

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



/* Entry: 109cc62f4; end: 109cc634b;  */

long FUN_109cc62f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109cc634c; end: 109cc636b;  */

undefined ** FUN_109cc634c(void)

{
  return &PTR_DAT_110b3b0b8;
}



/* Entry: 109cc636c; end: 109cc64f7;  */

long * FUN_109cc636c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puVar7;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
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
      lVar8 = *(long *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 9;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
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
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar6);
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



/* Entry: 109cc64f8; end: 109cc65a3;  */

long FUN_109cc64f8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
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



/* Entry: 109cc65a4; end: 109cc65fb;  */

long FUN_109cc65a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109cc65fc; end: 109cc661f;  */

undefined ** FUN_109cc65fc(void)

{
  return &PTR_DAT_110b3b0f8;
}



/* Entry: 109cc6620; end: 109cc682b;  */

long * FUN_109cc6620(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  ulong uStack_48;
  undefined1 *puVar7;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x20),param_2);
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
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
      lVar8 = *(long *)(param_1 + 0x10);
    }
    *(undefined1 *)plVar1 = 0x11;
    *(long *)((long)plVar1 + 1) = lVar8;
    plVar1 = (long *)((long)plVar1 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
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
      lVar8 = *(long *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x19;
    *(long *)((long)plVar1 + 1) = lVar8;
    plVar1 = (long *)((long)plVar1 + 9);
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
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(plVar1,lVar8,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar6;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar6);
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
      _memcpy(plVar1,lVar8,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar8,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109cc682c; end: 109cc68d7;  */

long FUN_109cc682c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar1;
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



/* Entry: 109cc68d8; end: 109cc692f;  */

long FUN_109cc68d8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109cc6930; end: 109cc694f;  */

undefined ** FUN_109cc6930(void)

{
  return &PTR_DAT_110b3b138;
}



/* Entry: 109cc6950; end: 109cc6b43;  */

long * FUN_109cc6950(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  ulong uStack_48;
  undefined1 *puVar7;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
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
      lVar8 = *(long *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 9;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
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
      lVar8 = *(long *)(param_1 + 0x18);
    }
    *(undefined1 *)param_2 = 0x11;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
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
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(param_2,lVar8,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar6;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar6);
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
      _memcpy(param_2,lVar8,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar8,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109cc6b44; end: 109cc6b8f;  */

long FUN_109cc6b44(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cc6b90; end: 109cc6c57;  */

void FUN_109cc6b90(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 3) {
    if ((iVar1 != 1) && (iVar1 != 2)) goto LAB_109cc6bfc;
  }
  else if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_109cc6bfc;
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if ((uVar2 == 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
    if ((*(byte *)(lVar3 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar3);
  }
LAB_109cc6bfc:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 109cc6c58; end: 109cc6c5b;  */

long FUN_109cc6c58(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109cc6b90(param_1);
  }
  return param_1;
}



/* Entry: 109cc6c5c; end: 109cc6c6f;  */

void FUN_109cc6c5c(void)

{
  func_0x000109cc6c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc6c70; end: 109cc6c7b;  */

undefined ** FUN_109cc6c70(void)

{
  return &PTR_DAT_110b3b180;
}



/* Entry: 109cc6c7c; end: 109cc6cb3;  */

void FUN_109cc6c7c(long param_1)

{
  ulong *puVar1;
  
  FUN_109cc6b90();
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



/* Entry: 109cc6cb4; end: 109cc6e0f;  */

long * FUN_109cc6cb4(long param_1,long *param_2,long *param_3)

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
  uVar3 = *(uint *)(param_1 + 0x1c) - 1;
  if (uVar3 < 4) {
    func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x10),
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x10) + *(long *)(&UNK_10e03e110 + (ulong)uVar3 * 8)),
                        param_2,param_3);
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



/* Entry: 109cc6e10; end: 109cc6f2b;  */

void FUN_109cc6e10(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 3) {
    if (iVar1 == 1) {
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
      if (iVar1 != 2) goto LAB_109cc6ed0;
      lVar3 = *(long *)(param_1 + 0x10);
      iVar2 = 0;
      if (*(long *)(lVar3 + 0x10) != 0) {
        iVar2 = 9;
      }
      if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
        uVar4 = *(ulong *)(lVar3 + 8) & 0xfffffffffffffffe;
        lVar5 = (long)*(char *)(uVar4 + 0x1f);
        if (lVar5 < 0) {
          lVar5 = *(long *)(uVar4 + 0x10);
        }
        iVar2 = (int)lVar5 + iVar2;
      }
      *(int *)(lVar3 + 0x18) = iVar2;
    }
    iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6);
  }
  else {
    if (iVar1 == 3) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_109cc682c();
    }
    else {
      if (iVar1 != 4) goto LAB_109cc6ed0;
      iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_109cc6b44();
    }
    iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6);
  }
  iVar2 = iVar2 + 1;
LAB_109cc6ed0:
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



/* Entry: 109cc6f2c; end: 109cc6f2f;  */

/* WARNING: Possible PIC construction at 0x000109cc7054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109cc7058) */

void FUN_109cc6f2c(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  ulong *unaff_x19;
  ulong *puVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar7 = (ulong *)(param_1 + 8);
  uVar8 = *puVar7;
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_109cc6b90(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    if (iVar3 < 3) {
      if (iVar3 == 1) {
        if (iVar4 == 1) {
          ppuVar2 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x1c) != 1) {
            ppuVar2 = &PTR_PTR_1132fd210;
          }
          if (((ulong)ppuVar2[1] & 1) != 0) {
            lVar6 = *(long *)(param_1 + 0x10);
LAB_109cc7054:
            unaff_x30 = 0x109cc7058;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
            puVar5 = (ulong *)(lVar6 + 8);
            unaff_x19 = puVar7;
            unaff_x20 = param_2;
            unaff_x29 = puVar1;
            goto code_r0x00010b4d197c;
          }
        }
        else {
          FUN_109cca5d4(uVar8,*(undefined8 *)(param_2 + 0x10));
LAB_109cc70c4:
          *(ulong *)(param_1 + 0x10) = uVar8;
        }
      }
      else if (iVar3 == 2) {
        if (iVar4 != 2) {
          FUN_109cca66c(uVar8,*(undefined8 *)(param_2 + 0x10));
          goto LAB_109cc70c4;
        }
        lVar6 = *(long *)(param_1 + 0x10);
        ppuVar2 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 2) {
          ppuVar2 = &PTR_PTR_1132fd228;
        }
        if (ppuVar2[2] != (undefined *)0x0) {
          *(undefined **)(lVar6 + 0x10) = ppuVar2[2];
        }
        if (((ulong)ppuVar2[1] & 1) != 0) goto LAB_109cc7054;
      }
    }
    else if (iVar3 == 3) {
      if (iVar4 != 3) {
        FUN_109cca720(uVar8,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109cc70c4;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 3) {
        ppuVar2 = &PTR_PTR_1132fd270;
      }
      func_0x000109cc655c(*(undefined8 *)(param_1 + 0x10),ppuVar2);
    }
    else if (iVar3 == 4) {
      if (iVar4 != 4) {
        FUN_109cca7ac(uVar8,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109cc70c4;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 4) {
        ppuVar2 = &PTR_PTR_1132fd248;
      }
      func_0x000109cc689c(*(undefined8 *)(param_1 + 0x10),ppuVar2);
    }
  }
  puVar5 = puVar7;
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



/* Entry: 109cc6f30; end: 109cc710f;  */

/* WARNING: Possible PIC construction at 0x000109cc7054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109cc7058) */

void FUN_109cc6f30(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  ulong *unaff_x19;
  ulong *puVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar7 = (ulong *)(param_1 + 8);
  uVar8 = *puVar7;
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_109cc6b90(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    if (iVar3 < 3) {
      if (iVar3 == 1) {
        if (iVar4 == 1) {
          ppuVar2 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x1c) != 1) {
            ppuVar2 = &PTR_PTR_1132fd210;
          }
          if (((ulong)ppuVar2[1] & 1) != 0) {
            lVar6 = *(long *)(param_1 + 0x10);
LAB_109cc7054:
            unaff_x30 = 0x109cc7058;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
            puVar5 = (ulong *)(lVar6 + 8);
            unaff_x19 = puVar7;
            unaff_x20 = param_2;
            unaff_x29 = puVar1;
            goto code_r0x00010b4d197c;
          }
        }
        else {
          FUN_109cca5d4(uVar8,*(undefined8 *)(param_2 + 0x10));
LAB_109cc70c4:
          *(ulong *)(param_1 + 0x10) = uVar8;
        }
      }
      else if (iVar3 == 2) {
        if (iVar4 != 2) {
          FUN_109cca66c(uVar8,*(undefined8 *)(param_2 + 0x10));
          goto LAB_109cc70c4;
        }
        lVar6 = *(long *)(param_1 + 0x10);
        ppuVar2 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 2) {
          ppuVar2 = &PTR_PTR_1132fd228;
        }
        if (ppuVar2[2] != (undefined *)0x0) {
          *(undefined **)(lVar6 + 0x10) = ppuVar2[2];
        }
        if (((ulong)ppuVar2[1] & 1) != 0) goto LAB_109cc7054;
      }
    }
    else if (iVar3 == 3) {
      if (iVar4 != 3) {
        FUN_109cca720(uVar8,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109cc70c4;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 3) {
        ppuVar2 = &PTR_PTR_1132fd270;
      }
      func_0x000109cc655c(*(undefined8 *)(param_1 + 0x10),ppuVar2);
    }
    else if (iVar3 == 4) {
      if (iVar4 != 4) {
        FUN_109cca7ac(uVar8,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109cc70c4;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 4) {
        ppuVar2 = &PTR_PTR_1132fd248;
      }
      func_0x000109cc689c(*(undefined8 *)(param_1 + 0x10),ppuVar2);
    }
  }
  puVar5 = puVar7;
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



/* Entry: 109cc7110; end: 109cc7167;  */

long FUN_109cc7110(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109cc7168; end: 109cc718b;  */

undefined ** FUN_109cc7168(void)

{
  return &PTR_DAT_110b3b1c0;
}



/* Entry: 109cc718c; end: 109cc732f;  */

long * FUN_109cc718c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puVar7;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
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
      lVar8 = *(long *)(param_1 + 0x10);
    }
    *(undefined1 *)plVar1 = 0x11;
    *(long *)((long)plVar1 + 1) = lVar8;
    plVar1 = (long *)((long)plVar1 + 9);
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
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar6);
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



/* Entry: 109cc7330; end: 109cc73c3;  */

long FUN_109cc7330(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cc73c4; end: 109cc7403;  */

long FUN_109cc73c4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109cc7404; end: 109cc7407;  */

long FUN_109cc7404(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109cc7408; end: 109cc741b;  */

void FUN_109cc7408(void)

{
  FUN_109cc73c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc741c; end: 109cc7427;  */

undefined ** FUN_109cc741c(void)

{
  return &PTR_DAT_110b3b200;
}



/* Entry: 109cc7428; end: 109cc746f;  */

void FUN_109cc7428(long param_1)

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



/* Entry: 109cc7470; end: 109cc768b;  */

long * FUN_109cc7470(long param_1,long *param_2,long *param_3)

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
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),plVar6,param_3);
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



/* Entry: 109cc768c; end: 109cc7713;  */

void FUN_109cc768c(long param_1,long param_2)

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



/* Entry: 109cc7714; end: 109cc7717;  */

long FUN_109cc7714(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109cca12c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109cc7718; end: 109cc772b;  */

void FUN_109cc7718(void)

{
  func_0x000109cc76e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc772c; end: 109cc7737;  */

undefined ** FUN_109cc772c(void)

{
  return &PTR_DAT_110b3b248;
}



/* Entry: 109cc7738; end: 109cc777f;  */

void FUN_109cc7738(long param_1)

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



/* Entry: 109cc7780; end: 109cc799b;  */

long * FUN_109cc7780(long param_1,long *param_2,long *param_3)

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


