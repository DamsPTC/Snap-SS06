/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1db280; end: 10a1db40f;  */

undefined *** FUN_10a1db280(long param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  uint uVar24;
  undefined ***pppuVar25;
  int *unaff_x26;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  int *piStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  if (*param_2 == 0) {
LAB_10a1db2d8:
    FUN_10a18cbd8(param_1 + 0x288);
    plVar10 = (long *)0x0;
    plVar12 = (long *)0x0;
    plVar15 = (long *)0x4;
    plVar18 = (long *)0x0;
LAB_10a1db3ec:
    plVar9 = (long *)0x0;
    plVar21 = (long *)0x0;
    plVar22 = (long *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x90) == 0) {
      lVar8 = 0;
      FUN_10a2421c8();
    }
    else {
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
      if (lVar8 == 0) {
        FUN_10a0edfc4(&stack0xffffffffffffffa0);
        goto LAB_10a1db2d8;
      }
    }
    plVar12 = *(long **)(lVar8 + 0x228);
    (**(code **)(*plVar12 + 0x18))(plVar12,param_2);
    FUN_10a099d88(param_1 + 0x288,plVar12);
    plVar10 = *(long **)(param_1 + 0x288);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)(ulong)*(uint *)(*param_2 + 0x18);
      plVar12 = (long *)(ulong)*(uint *)(*param_2 + 0x1c);
      plVar15 = (long *)0x0;
      plVar18 = (long *)0x4;
      goto LAB_10a1db3ec;
    }
    (**(code **)(*plVar10 + 0x28))();
    plVar12 = *(long **)(param_1 + 0x288);
    (**(code **)(*plVar12 + 0x30))();
    plVar9 = *(long **)(param_1 + 0x288);
    (**(code **)(*plVar9 + 0x38))();
    plVar15 = *(long **)(param_1 + 0x288);
    (**(code **)(*plVar15 + 0x20))();
    plVar18 = *(long **)(param_1 + 0x288);
    (**(code **)(*plVar18 + 0x50))();
    plVar21 = *(long **)(param_1 + 0x288);
    (**(code **)(*plVar21 + 0x70))();
    plVar22 = *(long **)(param_1 + 0x288);
    (**(code **)(*plVar22 + 0x48))();
  }
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = param_1 + 0xa8;
  uVar2 = *(ushort *)(param_1 + 0x101);
  *(ushort *)(param_1 + 0x101) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  uStack_90 = 1;
  pcStack_a8 = FUN_10a1d0710;
  ppuStack_a0 = &PTR_FUN_110bad6c8;
  plVar11 = plVar12;
  plVar13 = plVar9;
  plVar14 = plVar15;
  plVar17 = plVar18;
  plVar20 = plVar21;
  if (*(int *)(param_1 + 0x1e8) != (int)plVar10) {
    unaff_x26 = (int *)(param_1 + 0x1e8);
    *unaff_x26 = (int)plVar10;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20efac(unaff_x26);
  }
  iVar16 = (int)plVar17;
  uVar19 = SUB84(plVar20,0);
  uVar24 = (uint)plVar14;
  if (*(int *)(param_1 + 0x1ec) != (int)plVar12) {
    unaff_x26 = (int *)(param_1 + 0x1ec);
    *unaff_x26 = (int)plVar12;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f0c4(unaff_x26);
  }
  if (*(int *)(param_1 + 0x1f8) != (int)plVar15) {
    plVar12 = (long *)(param_1 + 0x1f8);
    *(int *)plVar12 = (int)plVar15;
    func_0x00010a1bd170(auStack_b0);
    FUN_10a1fd58c(plVar12);
  }
  if (*(int *)(param_1 + 0x1fc) != (int)plVar18) {
    plVar15 = (long *)(param_1 + 0x1fc);
    *(int *)plVar15 = (int)plVar18;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f1dc(plVar15);
  }
  *(char *)(param_1 + 0x200) = (char)plVar21;
  if (*(int *)(param_1 + 0x1f0) != (int)plVar9) {
    plVar21 = (long *)(param_1 + 0x1f0);
    *(int *)plVar21 = (int)plVar9;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f328(plVar21);
  }
  *(int *)(param_1 + 500) = (int)plVar22;
  *(undefined1 *)(param_1 + 0x201) = 1;
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    func_0x00010a042d30(param_1 + 0x1d0);
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  FUN_10a044790(&pcStack_a8);
  pppuVar25 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar25;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pppuVar5 = pppuVar25;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a1da580;
  piStack_100 = unaff_x26;
  plStack_f8 = plVar12;
  plStack_f0 = plVar15;
  plStack_e8 = plVar18;
  plStack_e0 = plVar21;
  plStack_d8 = plVar9;
  plStack_d0 = plVar22;
  pppuStack_c8 = pppuVar25;
  puStack_c0 = &stack0xfffffffffffffff0;
  pppuVar5[0x58] = &PTR_FUN_110c383b8;
  *(undefined2 *)(pppuVar5 + 0x5b) = 0x100;
  pppuVar5[0x5a] = (undefined **)0x0;
  pppuVar5[0x59] = (undefined **)0x0;
  pppuVar25 = pppuVar5;
  FUN_10a1da04c();
  *pppuVar25 = &PTR_DAT_110bae008;
  pppuVar25[2] = &PTR_FUN_110bae138;
  pppuVar25[5] = &PTR_FUN_110bae168;
  pppuVar25[0x58] = &PTR_FUN_110bae210;
  pppuVar25[0x15] = &PTR_FUN_110bae1c0;
  uVar1 = 4;
  if (0x26 < uVar24 - 0x30) {
    uVar1 = uVar24;
  }
  pppuVar25[0x52] = (undefined **)0x0;
  pppuVar25[0x51] = (undefined **)0x0;
  pppuVar25[0x54] = (undefined **)0x0;
  pppuVar25[0x53] = (undefined **)0x0;
  pppuVar25[0x56] = (undefined **)0x0;
  pppuVar25[0x55] = (undefined **)0x0;
  pppuVar25[0x57] = (undefined **)0x0;
  plVar12 = plVar10;
  FUN_10a2421c8();
  plVar12 = (long *)plVar12[0x45];
  (**(code **)(*plVar12 + 0x68))();
  uVar24 = *(uint *)(plVar12 + 0x11);
  if ((0 < (int)uVar24) && (uVar24 < (uint)plVar11 || uVar24 < (uint)plVar13)) {
    FUN_10a0ee900(&lStack_148,&UNK_10f643e2d,0x5c);
    FUN_10a0029c0(&lStack_148);
LAB_10a1da858:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1da85c);
    (*pcVar4)();
  }
  uVar24 = uVar1;
  if (uVar1 == 0x22) {
    uVar24 = 0x25;
  }
  uVar3 = 0x24;
  if (uVar1 != 0x21) {
    uVar3 = uVar24;
  }
  uVar24 = 1;
  FUN_109fc8e58(1,1,uVar3);
  if (uVar24 != 0) {
    uVar23 = ((ulong)plVar13 & 0xffffffff) * ((ulong)plVar11 & 0xffffffff);
    uVar3 = 0;
    if (uVar24 != 0) {
      uVar3 = 0xffffffff / uVar24;
    }
    if (uVar3 <= uVar23 && uVar23 - uVar3 != 0) {
      FUN_10a0ee900(&lStack_148,&UNK_10f643e8a,0x8b);
      FUN_10a0029c0(&lStack_148);
      goto LAB_10a1da858;
    }
  }
  FUN_10a1da3a4(pppuVar5,plVar11,plVar13,0,0,uVar1,0,0);
  FUN_10a2421c8();
  plVar12 = (long *)plVar10[0x45];
  lStack_148 = (long)plVar11 << 0x20;
  uStack_140 = CONCAT44(1,(uint)plVar13);
  uStack_138 = (ulong)uVar1;
  uStack_12c = 0x100000001;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = uVar19;
  (**(code **)(*plVar12 + 0x20))(plVar12,&lStack_148);
  FUN_10a099d88(pppuVar25 + 0x51,plVar12);
  if (iVar16 != 0) {
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    pppuVar25 = pppuVar5;
    (*(code *)(*pppuVar5)[0x1d])();
    if ((int)pppuVar25 == 0x21) {
      pppuVar25 = (undefined ***)0x24;
    }
    else if ((int)pppuVar25 == 0x22) {
      pppuVar25 = (undefined ***)0x25;
    }
    pppuVar6 = pppuVar5;
    (*(code *)(*pppuVar5)[0x16])();
    pppuVar7 = pppuVar5;
    (*(code *)(*pppuVar5)[0x17])(pppuVar5);
    FUN_109fc8e58(pppuVar6,pppuVar7,pppuVar25);
    if (((ulong)pppuVar6 & 0xffffffff) != 0) {
      func_0x000107c27d58(&lStack_148);
    }
    pppuVar25 = pppuVar5;
    (*(code *)(*pppuVar5)[0x16])();
    pppuVar6 = pppuVar5;
    (*(code *)(*pppuVar5)[0x17])();
    uStack_108 = (ulong)pppuVar25 & 0xffffffff | (long)pppuVar6 << 0x20;
    uStack_110 = 0;
    FUN_10a1daa20(pppuVar5,&uStack_110,lStack_148);
    if (lStack_148 != 0) {
      uStack_140 = lStack_148;
      __ZdlPv();
    }
  }
  return pppuVar5;
}



/* Entry: 10a1db410; end: 10a1db4cb;  */

undefined8 * FUN_10a1db410(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x53] = &PTR_FUN_110c383b8;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110bb3688,param_2);
  *puVar1 = &PTR_FUN_110bb3440;
  puVar1[2] = &PTR_FUN_110bb3570;
  puVar1[5] = &PTR_FUN_110bb35a0;
  puVar1[0x53] = &PTR_FUN_110bb3648;
  puVar1[0x15] = &PTR_FUN_110bb35f8;
  puVar1[0x52] = 0;
  puVar1[0x51] = 0;
  FUN_10a1db280();
  return param_1;
}



/* Entry: 10a1db4cc; end: 10a1db5e7;  */

undefined *** FUN_10a1db4cc(long param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  undefined4 uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  undefined ***pppuVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *unaff_x26;
  undefined **ppuVar28;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  plVar11 = (long *)*param_2;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))();
    plVar12 = (long *)*param_2;
    (**(code **)(*plVar12 + 0x30))();
    plVar13 = (long *)*param_2;
    (**(code **)(*plVar13 + 0x38))();
    plVar14 = (long *)*param_2;
    (**(code **)(*plVar14 + 0x20))();
    plVar15 = (long *)*param_2;
    (**(code **)(*plVar15 + 0x50))();
    plVar16 = (long *)*param_2;
    (**(code **)(*plVar16 + 0x70))();
    FUN_10a1da3a4(param_1,plVar11,plVar12,plVar13,plVar14,plVar15,plVar16,0);
    lVar23 = param_2[1];
    ppuVar28 = (undefined **)*param_2;
    if (param_2[1] != 0) {
      plVar11 = (long *)(param_2[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar11 = *(long **)(param_1 + 0x290);
    *(long *)(param_1 + 0x290) = lVar23;
    *(undefined ***)(param_1 + 0x288) = ppuVar28;
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        lVar23 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    return (undefined ***)(param_1 + 0x288);
  }
  FUN_10a18cbd8(param_1 + 0x288);
  lVar23 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar22 = 4;
  iVar19 = 0;
  uVar20 = 0;
  puVar25 = (undefined4 *)0x0;
  puVar26 = (undefined4 *)0x4;
  puVar27 = (undefined4 *)0x0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = param_1 + 0xa8;
  uVar2 = *(ushort *)(param_1 + 0x101);
  *(ushort *)(param_1 + 0x101) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  uStack_90 = 1;
  pcStack_a8 = FUN_10a1d0710;
  ppuStack_a0 = &PTR_FUN_110bad6c8;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    unaff_x26 = (undefined4 *)(param_1 + 0x1e8);
    *unaff_x26 = 0;
    uVar22 = 4;
    uVar20 = 0;
    iVar19 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20efac(unaff_x26);
  }
  if (*(int *)(param_1 + 0x1ec) != 0) {
    unaff_x26 = (undefined4 *)(param_1 + 0x1ec);
    *unaff_x26 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f0c4(unaff_x26);
  }
  if (*(int *)(param_1 + 0x1f8) != 4) {
    puVar27 = (undefined4 *)(param_1 + 0x1f8);
    *puVar27 = 4;
    func_0x00010a1bd170(auStack_b0);
    FUN_10a1fd58c(puVar27);
  }
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar26 = (undefined4 *)(param_1 + 0x1fc);
    *puVar26 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f1dc(puVar26);
  }
  *(undefined1 *)(param_1 + 0x200) = 0;
  if (*(int *)(param_1 + 0x1f0) != 0) {
    puVar25 = (undefined4 *)(param_1 + 0x1f0);
    *puVar25 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f328(puVar25);
  }
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined1 *)(param_1 + 0x201) = 1;
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    func_0x00010a042d30(param_1 + 0x1d0);
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  FUN_10a044790(&pcStack_a8);
  pppuVar24 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar24;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pppuVar7 = pppuVar24;
  __Unwind_Resume();
  uStack_e8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  pcStack_b8 = FUN_10a1da580;
  puStack_100 = unaff_x26;
  puStack_f8 = puVar27;
  puStack_f0 = puVar26;
  puStack_e0 = puVar25;
  pppuStack_c8 = pppuVar24;
  puStack_c0 = &stack0xfffffffffffffff0;
  pppuVar7[0x58] = &PTR_FUN_110c383b8;
  *(undefined2 *)(pppuVar7 + 0x5b) = 0x100;
  pppuVar7[0x5a] = (undefined **)0x0;
  pppuVar7[0x59] = (undefined **)0x0;
  pppuVar24 = pppuVar7;
  FUN_10a1da04c();
  *pppuVar24 = &PTR_DAT_110bae008;
  pppuVar24[2] = &PTR_FUN_110bae138;
  pppuVar24[5] = &PTR_FUN_110bae168;
  pppuVar24[0x58] = &PTR_FUN_110bae210;
  pppuVar24[0x15] = &PTR_FUN_110bae1c0;
  uVar1 = 4;
  if (0x26 < uVar22 - 0x30) {
    uVar1 = uVar22;
  }
  pppuVar24[0x52] = (undefined **)0x0;
  pppuVar24[0x51] = (undefined **)0x0;
  pppuVar24[0x54] = (undefined **)0x0;
  pppuVar24[0x53] = (undefined **)0x0;
  pppuVar24[0x56] = (undefined **)0x0;
  pppuVar24[0x55] = (undefined **)0x0;
  pppuVar24[0x57] = (undefined **)0x0;
  lVar8 = lVar23;
  FUN_10a2421c8();
  plVar11 = *(long **)(lVar8 + 0x228);
  (**(code **)(*plVar11 + 0x68))();
  uVar22 = *(uint *)(plVar11 + 0x11);
  if ((0 < (int)uVar22) && (uVar22 < (uint)uVar17 || uVar22 < (uint)uVar18)) {
    FUN_10a0ee900(&lStack_148,&UNK_10f643e2d,0x5c);
    FUN_10a0029c0(&lStack_148);
LAB_10a1da858:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1da85c);
    (*pcVar6)();
  }
  uVar22 = uVar1;
  if (uVar1 == 0x22) {
    uVar22 = 0x25;
  }
  uVar5 = 0x24;
  if (uVar1 != 0x21) {
    uVar5 = uVar22;
  }
  uVar22 = 1;
  FUN_109fc8e58(1,1,uVar5);
  if (uVar22 != 0) {
    uVar21 = (uVar18 & 0xffffffff) * (uVar17 & 0xffffffff);
    uVar5 = 0;
    if (uVar22 != 0) {
      uVar5 = 0xffffffff / uVar22;
    }
    if (uVar5 <= uVar21 && uVar21 - uVar5 != 0) {
      FUN_10a0ee900(&lStack_148,&UNK_10f643e8a,0x8b);
      FUN_10a0029c0(&lStack_148);
      goto LAB_10a1da858;
    }
  }
  FUN_10a1da3a4(pppuVar7,uVar17,uVar18,0,0,uVar1,0,0);
  FUN_10a2421c8();
  plVar11 = *(long **)(lVar23 + 0x228);
  lStack_148 = uVar17 << 0x20;
  uStack_140 = CONCAT44(1,(uint)uVar18);
  uStack_138 = (ulong)uVar1;
  uStack_12c = 0x100000001;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = uVar20;
  (**(code **)(*plVar11 + 0x20))(plVar11,&lStack_148);
  FUN_10a099d88(pppuVar24 + 0x51,plVar11);
  if (iVar19 != 0) {
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    pppuVar24 = pppuVar7;
    (*(code *)(*pppuVar7)[0x1d])();
    if ((int)pppuVar24 == 0x21) {
      pppuVar24 = (undefined ***)0x24;
    }
    else if ((int)pppuVar24 == 0x22) {
      pppuVar24 = (undefined ***)0x25;
    }
    pppuVar9 = pppuVar7;
    (*(code *)(*pppuVar7)[0x16])();
    pppuVar10 = pppuVar7;
    (*(code *)(*pppuVar7)[0x17])(pppuVar7);
    FUN_109fc8e58(pppuVar9,pppuVar10,pppuVar24);
    if (((ulong)pppuVar9 & 0xffffffff) != 0) {
      func_0x000107c27d58(&lStack_148);
    }
    pppuVar24 = pppuVar7;
    (*(code *)(*pppuVar7)[0x16])();
    pppuVar9 = pppuVar7;
    (*(code *)(*pppuVar7)[0x17])();
    uStack_108 = (ulong)pppuVar24 & 0xffffffff | (long)pppuVar9 << 0x20;
    uStack_110 = 0;
    FUN_10a1daa20(pppuVar7,&uStack_110,lStack_148);
    if (lStack_148 != 0) {
      uStack_140 = lStack_148;
      __ZdlPv();
    }
  }
  return pppuVar7;
}



/* Entry: 10a1db5e8; end: 10a1db6a3;  */

undefined8 * FUN_10a1db5e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x53] = &PTR_FUN_110c383b8;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110bb3688,param_2);
  *puVar1 = &PTR_FUN_110bb3440;
  puVar1[2] = &PTR_FUN_110bb3570;
  puVar1[5] = &PTR_FUN_110bb35a0;
  puVar1[0x53] = &PTR_FUN_110bb3648;
  puVar1[0x15] = &PTR_FUN_110bb35f8;
  puVar1[0x52] = 0;
  puVar1[0x51] = 0;
  FUN_10a1db4cc();
  return param_1;
}



/* Entry: 10a1db6a4; end: 10a1db88f;  */

undefined *** FUN_10a1db6a4(undefined ***param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  long lVar12;
  undefined ***pppuVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  undefined4 uVar21;
  ulong uVar22;
  int *piVar23;
  uint uVar24;
  undefined **ppuVar25;
  long *plVar26;
  undefined ***pppuVar27;
  undefined4 *puVar28;
  undefined ***unaff_x26;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  long lStack_70;
  undefined ***pppuStack_68;
  
  plVar26 = (long *)*param_2;
  if (plVar26 != (long *)0x0) {
    lStack_70 = 0;
    pppuStack_68 = (undefined ***)0x0;
    pppuVar13 = (undefined ***)plVar26[1];
    if (((pppuVar13 == (undefined ***)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_68 = pppuVar13,
        pppuVar13 == (undefined ***)0x0)) || (lStack_70 = *plVar26, lStack_70 == 0)) {
      pppuVar13 = pppuStack_68;
      FUN_10a18cbd8(param_1 + 0x51);
      FUN_10a1da3a4(param_1,0,0,0,4,0,0,0);
      if (pppuVar13 == (undefined ***)0x0) {
        return param_1;
      }
    }
    else {
      plVar26 = (long *)(lStack_70 + 0x28);
      if (*plVar26 != 0) {
        FUN_10a77d35c((long)&uStack_98 + 4,*param_2);
        (*(code *)(*param_1)[0x13])(param_1,(long)&uStack_98 + 4);
        piVar23 = *(int **)(*param_2 + 0x18);
        iVar20 = piVar23[2];
        iVar3 = piVar23[3];
        iVar2 = *piVar23;
        iVar4 = piVar23[1];
        plVar14 = (long *)*plVar26;
        (**(code **)(*plVar14 + 0x20))();
        plVar15 = (long *)*plVar26;
        (**(code **)(*plVar15 + 0x50))();
        plVar16 = (long *)*plVar26;
        (**(code **)(*plVar16 + 0x70))();
        FUN_10a1da3a4(param_1,iVar20 - iVar2,iVar3 - iVar4,0,plVar14,plVar15,plVar16,0);
      }
      param_1 = param_1 + 0x51;
      FUN_10a026ab4(param_1,plVar26);
    }
    pppuVar27 = pppuVar13 + 1;
    do {
      ppuVar25 = *pppuVar27;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppuVar27,0x10);
      if (bVar7) {
        *pppuVar27 = (undefined **)((long)ppuVar25 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppuVar25 == (undefined **)0x0) {
      (*(code *)(*pppuVar13)[2])(pppuVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar13);
      param_1 = pppuVar13;
    }
    return param_1;
  }
  FUN_10a18cbd8(param_1 + 0x51);
  lVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar24 = 4;
  iVar20 = 0;
  uVar21 = 0;
  pppuVar27 = (undefined ***)0x0;
  puVar28 = (undefined4 *)0x4;
  pppuVar13 = (undefined ***)0x0;
  pppuStack_68 = *(undefined ****)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = param_1 + 0x15;
  uVar5 = *(ushort *)((long)param_1 + 0x101);
  *(ushort *)((long)param_1 + 0x101) = uVar5 & 0xff80 | uVar5 + 1 & 0x7f;
  uStack_90 = 1;
  pcStack_a8 = FUN_10a1d0710;
  ppuStack_a0 = &PTR_FUN_110bad6c8;
  if (*(int *)(param_1 + 0x3d) != 0) {
    unaff_x26 = param_1 + 0x3d;
    *(undefined4 *)unaff_x26 = 0;
    uVar24 = 4;
    uVar21 = 0;
    iVar20 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20efac(unaff_x26);
  }
  if (*(int *)((long)param_1 + 0x1ec) != 0) {
    unaff_x26 = (undefined ***)((long)param_1 + 0x1ec);
    *(undefined4 *)unaff_x26 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f0c4(unaff_x26);
  }
  if (*(int *)(param_1 + 0x3f) != 4) {
    pppuVar13 = param_1 + 0x3f;
    *(undefined4 *)pppuVar13 = 4;
    func_0x00010a1bd170(auStack_b0);
    FUN_10a1fd58c(pppuVar13);
  }
  if (*(int *)((long)param_1 + 0x1fc) != 0) {
    puVar28 = (undefined4 *)((long)param_1 + 0x1fc);
    *puVar28 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f1dc(puVar28);
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x3e) != 0) {
    pppuVar27 = param_1 + 0x3e;
    *(undefined4 *)pppuVar27 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f328(pppuVar27);
  }
  *(undefined4 *)((long)param_1 + 500) = 0;
  *(undefined1 *)((long)param_1 + 0x201) = 1;
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  FUN_10a044790(&pcStack_a8);
  pppuVar10 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if ((undefined ***)*(long *)PTR____stack_chk_guard_11034bdc0 == pppuStack_68) {
    return pppuVar10;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pppuVar11 = pppuVar10;
  __Unwind_Resume();
  uStack_e8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  pcStack_b8 = FUN_10a1da580;
  pppuStack_100 = unaff_x26;
  pppuStack_f8 = pppuVar13;
  puStack_f0 = puVar28;
  pppuStack_e0 = pppuVar27;
  pppuStack_c8 = pppuVar10;
  puStack_c0 = &stack0xfffffffffffffff0;
  pppuVar11[0x58] = &PTR_FUN_110c383b8;
  *(undefined2 *)(pppuVar11 + 0x5b) = 0x100;
  pppuVar11[0x5a] = (undefined **)0x0;
  pppuVar11[0x59] = (undefined **)0x0;
  pppuVar13 = pppuVar11;
  FUN_10a1da04c();
  *pppuVar13 = &PTR_DAT_110bae008;
  pppuVar13[2] = &PTR_FUN_110bae138;
  pppuVar13[5] = &PTR_FUN_110bae168;
  pppuVar13[0x58] = &PTR_FUN_110bae210;
  pppuVar13[0x15] = &PTR_FUN_110bae1c0;
  uVar1 = 4;
  if (0x26 < uVar24 - 0x30) {
    uVar1 = uVar24;
  }
  pppuVar13[0x52] = (undefined **)0x0;
  pppuVar13[0x51] = (undefined **)0x0;
  pppuVar13[0x54] = (undefined **)0x0;
  pppuVar13[0x53] = (undefined **)0x0;
  pppuVar13[0x56] = (undefined **)0x0;
  pppuVar13[0x55] = (undefined **)0x0;
  pppuVar13[0x57] = (undefined **)0x0;
  lVar12 = lVar17;
  FUN_10a2421c8();
  plVar26 = *(long **)(lVar12 + 0x228);
  (**(code **)(*plVar26 + 0x68))();
  uVar24 = *(uint *)(plVar26 + 0x11);
  if ((0 < (int)uVar24) && (uVar24 < (uint)uVar18 || uVar24 < (uint)uVar19)) {
    FUN_10a0ee900(&lStack_148,&UNK_10f643e2d,0x5c);
    FUN_10a0029c0(&lStack_148);
LAB_10a1da858:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10a1da85c);
    (*pcVar9)();
  }
  uVar24 = uVar1;
  if (uVar1 == 0x22) {
    uVar24 = 0x25;
  }
  uVar8 = 0x24;
  if (uVar1 != 0x21) {
    uVar8 = uVar24;
  }
  uVar24 = 1;
  FUN_109fc8e58(1,1,uVar8);
  if (uVar24 != 0) {
    uVar22 = (uVar19 & 0xffffffff) * (uVar18 & 0xffffffff);
    uVar8 = 0;
    if (uVar24 != 0) {
      uVar8 = 0xffffffff / uVar24;
    }
    if (uVar8 <= uVar22 && uVar22 - uVar8 != 0) {
      FUN_10a0ee900(&lStack_148,&UNK_10f643e8a,0x8b);
      FUN_10a0029c0(&lStack_148);
      goto LAB_10a1da858;
    }
  }
  FUN_10a1da3a4(pppuVar11,uVar18,uVar19,0,0,uVar1,0,0);
  FUN_10a2421c8();
  plVar26 = *(long **)(lVar17 + 0x228);
  lStack_148 = uVar18 << 0x20;
  uStack_140 = CONCAT44(1,(uint)uVar19);
  uStack_138 = (ulong)uVar1;
  uStack_12c = 0x100000001;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = uVar21;
  (**(code **)(*plVar26 + 0x20))(plVar26,&lStack_148);
  FUN_10a099d88(pppuVar13 + 0x51,plVar26);
  if (iVar20 != 0) {
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    pppuVar13 = pppuVar11;
    (*(code *)(*pppuVar11)[0x1d])();
    if ((int)pppuVar13 == 0x21) {
      pppuVar13 = (undefined ***)0x24;
    }
    else if ((int)pppuVar13 == 0x22) {
      pppuVar13 = (undefined ***)0x25;
    }
    pppuVar27 = pppuVar11;
    (*(code *)(*pppuVar11)[0x16])();
    pppuVar10 = pppuVar11;
    (*(code *)(*pppuVar11)[0x17])(pppuVar11);
    FUN_109fc8e58(pppuVar27,pppuVar10,pppuVar13);
    if (((ulong)pppuVar27 & 0xffffffff) != 0) {
      func_0x000107c27d58(&lStack_148);
    }
    pppuVar13 = pppuVar11;
    (*(code *)(*pppuVar11)[0x16])();
    pppuVar27 = pppuVar11;
    (*(code *)(*pppuVar11)[0x17])();
    uStack_108 = (ulong)pppuVar13 & 0xffffffff | (long)pppuVar27 << 0x20;
    uStack_110 = 0;
    FUN_10a1daa20(pppuVar11,&uStack_110,lStack_148);
    if (lStack_148 != 0) {
      uStack_140 = lStack_148;
      __ZdlPv();
    }
  }
  return pppuVar11;
}



/* Entry: 10a1db890; end: 10a1db94b;  */

undefined8 * FUN_10a1db890(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x53] = &PTR_FUN_110c383b8;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110bb3688,param_2);
  *puVar1 = &PTR_FUN_110bb3440;
  puVar1[2] = &PTR_FUN_110bb3570;
  puVar1[5] = &PTR_FUN_110bb35a0;
  puVar1[0x53] = &PTR_FUN_110bb3648;
  puVar1[0x15] = &PTR_FUN_110bb35f8;
  puVar1[0x52] = 0;
  puVar1[0x51] = 0;
  FUN_10a1db6a4();
  return param_1;
}



/* Entry: 10a1db94c; end: 10a1db94f;  */

void FUN_10a1db94c(void)

{
  return;
}



/* Entry: 10a1db950; end: 10a1db983;  */

void FUN_10a1db950(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x248))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x78,param_2);
  return;
}



/* Entry: 10a1db984; end: 10a1db9c7;  */

void FUN_10a1db984(undefined8 param_1,long *param_2)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f6457ad;
  uStack_18 = 0x1d;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bb1c58,&puStack_20);
  return;
}



/* Entry: 10a1db9c8; end: 10a1dba67;  */

void FUN_10a1db9c8(void)

{
  return;
}



/* Entry: 10a1dba68; end: 10a1dbabf;  */

void FUN_10a1dba68(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f643dac;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a1dbac0(param_1,&uStack_58);
  FUN_10a1f9c58();
  return;
}



/* Entry: 10a1dbac0; end: 10a1dbb97;  */

/* WARNING: Removing unreachable block (ram,0x00010a1dbb58) */

undefined1  [16] FUN_10a1dbac0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6457cb,0x14);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a1f9b5c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1dbb98; end: 10a1dbc5b;  */

long * FUN_10a1dbb98(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10ac63120(param_1,param_3);
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110bb3b30;
  plVar1[5] = (long)&PTR_DAT_110bb3b60;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_3;
    if (param_3 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10a1dbc5c; end: 10a1dbc63;  */

undefined8 FUN_10a1dbc5c(void)

{
  return 0xfffe;
}



/* Entry: 10a1dbc64; end: 10a1dbd57;  */

void FUN_10a1dbc64(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined1 uStack_59;
  undefined1 *puStack_58;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  (**(code **)(*param_2 + 0x90))();
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = *(long *)(lVar3 + 0x48);
    for (lVar3 = *(long *)(lVar3 + 0x40); lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
      uVar4 = *(undefined4 *)(lVar3 + 0x18);
      FUN_10a0d09b4(auStack_80,lVar3);
      puVar2 = param_1;
      puStack_58 = (undefined1 *)auStack_80;
      FUN_10a1f9da4(param_1,auStack_80,&UNK_10dd5b8f9,&puStack_58,&uStack_59);
      *(undefined4 *)(puVar2 + 6) = uVar4;
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
    }
  }
  return;
}



/* Entry: 10a1dbd58; end: 10a1dbde3;  */

undefined1  [16] FUN_10a1dbd58(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f6457e0;
  return auVar1;
}



/* Entry: 10a1dbde4; end: 10a1dc66b;  */

void FUN_10a1dbde4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6457e0,0x1d);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb2dc8;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb2dc8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"format",FUN_10a1fa1f0,FUN_10a1fa2b8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x42,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644148,FUN_10a1fa474,FUN_10a1fa550);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644156,FUN_10a1fa640,FUN_10a1fa708);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f36f23a,FUN_10a1fa844,FUN_10a1fa920);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644162,FUN_10a1faa0c,FUN_10a1faac8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644173,FUN_10a1fabac,FUN_10a1fac68);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644183,FUN_10a1fad68,FUN_10a1fae24);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644194,FUN_10a1faf08,FUN_10a1fafc4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6441a8,FUN_10a1fb0a8,FUN_10a1fb164);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6441b6,FUN_10a1fb254,FUN_10a1fb30c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6441bf,FUN_10a1fb3cc,FUN_10a1fb484);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6441d0,FUN_10a1fb544,FUN_10a1fb5fc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6441e4,FUN_10a1fb6bc,FUN_10a1fb788);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6441f3,FUN_10a1fba7c,FUN_10a1fbb38);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644204,FUN_10a1fbc1c,FUN_10a1fbcd4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64420f,FUN_10a1fbe78,FUN_10a1fbf30);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64421c,FUN_10a1fc03c,FUN_10a1fc0f8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644229,FUN_10a1fc1dc,FUN_10a1fc298);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"camera",FUN_10a1fc37c,FUN_10a1fc4b8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64423a,FUN_10a1fc71c,FUN_10a1fc7dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64423f,FUN_10a1fc89c,FUN_10a1fc95c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644244,FUN_10a1fca28,FUN_10a1fcb78);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64424f,FUN_10a1fcd40,FUN_10a1fce00);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644263,FUN_10a1fcec4,FUN_10a1fcf80);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644272,FUN_10a1fd04c,FUN_10a1fd10c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,10,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644284,FUN_10a1fd1cc,FUN_10a1fd27c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644292,FUN_10a1fd334,FUN_10a1fd3f4);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6457e0,0x1d);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1dc650);
  (*pcVar6)();
}



/* Entry: 10a1dc66c; end: 10a1dc97f;  */

void FUN_10a1dc66c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6442a4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f643dac;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6442b5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f643dac;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a1dc7d0(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6442ba;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f643dac;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a1dc7d0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6442c3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f643dac;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a1dc7d0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a1dc980; end: 10a1dc9d7;  */

ulong FUN_10a1dc980(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a1dc9d8; end: 10a1dcc3b;  */

ulong FUN_10a1dc9d8(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a1fd4c0(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a1dcc3c; end: 10a1dcc4f;  */

undefined4 FUN_10a1dcc3c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x310);
}



/* Entry: 10a1dcc50; end: 10a1dcfab;  */

undefined *** FUN_10a1dcc50(undefined ***param_1,long param_2,int param_3,undefined1 param_4)

{
  long *plVar1;
  ushort uVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined1 uVar6;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x76] = &PTR_FUN_110c383b8;
  param_1[0x78] = (undefined **)0x0;
  param_1[0x77] = (undefined **)0x0;
  *(undefined2 *)(param_1 + 0x79) = 0x100;
  pppuVar3 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110bae730,param_2);
  pppuVar3[0x51] = &PTR_FUN_110bb2e68;
  pppuVar3 = pppuVar3 + 0x52;
  FUN_10a0040d0(pppuVar3,&PTR_PTR_110bae750);
  *param_1 = &PTR_DAT_110bae460;
  param_1[2] = &PTR_FUN_110bae5a0;
  param_1[5] = &PTR_FUN_110bae5d0;
  param_1[0x76] = &PTR_FUN_110bae6f0;
  pppuVar5 = param_1 + 0x15;
  *pppuVar5 = &PTR_FUN_110bae628;
  param_1[0x51] = &PTR_FUN_110bae648;
  param_1[0x52] = &PTR_FUN_110bae678;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)((long)param_1 + 0x2d4) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined1 *)((long)param_1 + 0x2fc) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x304) = 0x300;
  *(undefined4 *)(param_1 + 0x61) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x30c) = 0x100;
  *(undefined1 *)((long)param_1 + 0x30e) = 1;
  param_1[99] = (undefined **)0x0;
  param_1[0x62] = (undefined **)0x0;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined8 *)((long)param_1 + 0x32c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x324) = 0;
  *(undefined1 *)((long)param_1 + 0x334) = 1;
  *(undefined4 *)(param_1 + 0x67) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x6a] = (undefined **)0x0;
  param_1[0x69] = (undefined **)0x0;
  param_1[0x6c] = (undefined **)0x0;
  param_1[0x6b] = (undefined **)0x0;
  param_1[0x6e] = (undefined **)0x0;
  param_1[0x6d] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x6f) = 1;
  *(undefined8 *)((long)param_1 + 900) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined8 *)((long)param_1 + 0x38c) = 0;
  *(undefined4 *)((long)param_1 + 0x39c) = 0;
  ppuVar4 = (undefined **)0x58;
  __Znwm();
  ppuVar4[1] = (undefined *)0x0;
  ppuVar4[2] = (undefined *)0x0;
  *ppuVar4 = (undefined *)&PTR_DAT_110bf7fc8;
  ppuVar4[8] = (undefined *)0x0;
  ppuVar4[7] = (undefined *)0x0;
  ppuVar4[6] = (undefined *)0x0;
  ppuVar4[5] = (undefined *)0x0;
  *(undefined8 *)((long)ppuVar4 + 0x4d) = 0;
  *(undefined8 *)((long)ppuVar4 + 0x45) = 0;
  ppuVar4[4] = (undefined *)0x0;
  ppuVar4[3] = (undefined *)0x0;
  param_1[0x74] = ppuVar4 + 3;
  param_1[0x75] = ppuVar4;
  FUN_10a5cf1fc(param_1 + 0x74);
  uVar2 = *(ushort *)((long)param_1 + 0x101);
  *(ushort *)((long)param_1 + 0x101) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  uStack_90 = 1;
  pcStack_a8 = FUN_10a1d0710;
  ppuStack_a0 = &PTR_FUN_110bad6c8;
  pppuStack_98 = pppuVar5;
  if (*(int *)(param_1 + 0x3f) != param_3) {
    *(int *)(param_1 + 0x3f) = param_3;
    func_0x00010a1bd170(auStack_b0);
    FUN_10a1fd58c(param_1 + 0x3f);
  }
  *(undefined1 *)(param_1 + 0x40) = param_4;
  FUN_10a5ae998(param_1[0x74],&PTR_DAT_110bb2dc8,param_2,param_1);
  plVar1 = (long *)((long)pppuVar3 + (long)(*pppuVar3)[-3]);
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_2;
    if (param_2 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x55],&PTR_DAT_110b99f08,param_2,pppuVar3);
  uVar6 = 4;
  if (0x7f < *(int *)(param_1[0x12][0x144] + 0x18)) {
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 100) = uVar6;
  FUN_10a044790(&pcStack_a8);
  pppuVar5 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a1fd534(param_1 + 0x70);
  func_0x00010a05248c(param_1 + 0x6d);
  func_0x00010a05248c(param_1 + 0x6b);
  func_0x00010a05248c(param_1 + 0x69);
  FUN_10a004174(pppuVar3,&PTR_PTR_110bae750);
  ppuVar4 = &PTR_PTR_110bae730;
  FUN_10a00dc70(param_1);
  __Unwind_Resume();
  if (*(char *)(pppuVar5 + 100) == '\x04' || *(char *)(pppuVar5 + 100) == '\x01') {
    *(undefined1 *)((long)ppuVar4 + 0x569) = 1;
  }
  return pppuVar5;
}



/* Entry: 10a1dcfac; end: 10a1dcfe3;  */

void FUN_10a1dcfac(long param_1,long param_2)

{
  if (*(char *)(param_1 + 800) == '\x04' || *(char *)(param_1 + 800) == '\x01') {
    *(undefined1 *)(param_2 + 0x569) = 1;
  }
  return;
}



/* Entry: 10a1dcfe4; end: 10a1dcfff;  */

void FUN_10a1dcfe4(long *param_1)

{
  FUN_10a1dd000();
                    /* WARNING: Could not recover jumptable at 0x00010a1dcffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10a1dd000; end: 10a1dd0f3;  */

long FUN_10a1dd000(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_d0 [40];
  long lStack_a8;
  long lStack_a0;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = 0;
  plStack_28 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x398);
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_28 = plVar4, plVar4 == (long *)0x0)) ||
     (lStack_30 = *(long *)(param_1 + 0x390), lStack_30 == 0)) {
    plVar4 = plStack_28;
    FUN_10a1de960(param_1,0);
    if (plVar4 == (long *)0x0) {
      return param_1;
    }
  }
  else {
    FUN_10a42b51c(auStack_d0);
    FUN_10a1de960(param_1,auStack_d0);
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
  }
  plVar1 = plVar4 + 1;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return param_1;
}



/* Entry: 10a1dd0f4; end: 10a1dd7c7;  */

undefined8 **
FUN_10a1dd0f4(float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined8 **param_5
             ,long *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined1 auStack_348 [24];
  code **ppcStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 **ppuStack_318;
  undefined8 *puStack_310;
  undefined8 **ppuStack_308;
  undefined1 ***pppuStack_300;
  code *pcStack_2f8;
  undefined1 auStack_2e8 [8];
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined8 auStack_288 [2];
  char cStack_271;
  undefined8 uStack_270;
  undefined8 *apuStack_268 [7];
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  code *pcStack_218;
  undefined **ppuStack_210;
  undefined8 *puStack_208;
  long lStack_1d8;
  undefined1 *puStack_190;
  code *pcStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined **ppuStack_170;
  char cStack_161;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined8 **ppuStack_148;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 **ppuStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_s_camera_110bb1c78);
  if ((int)plVar12 != 0) {
    uStack_98 = 0x10a1fd960;
    ppuStack_90 = &PTR_DAT_110bb21c8;
    ppuStack_88 = param_5;
    FUN_10a1dd7c8(param_6,&PTR_s_camera_110bb1c78,&uStack_98,0);
    (*(code *)*ppuStack_90)(&ppuStack_90);
  }
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bae770,0);
  FUN_10a1dd994(param_5,plVar12);
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bae790);
  if ((int)plVar12 != 0) {
    ppuVar14 = &PTR_DAT_110bae790;
    plVar12 = param_6;
    (**(code **)(*param_6 + 0xb0))();
    ppuStack_160 = &PTR_DAT_110b9ff50;
    pppuVar5 = &ppuStack_160;
    plStack_178 = plVar12;
    ppuStack_170 = ppuVar14;
    FUN_10a09b630(pppuVar5,&plStack_178);
    if (pppuVar5 != (undefined ***)&UNK_110ba0778) {
      uVar19 = *(undefined4 *)(pppuVar5 + 2);
      goto LAB_10a1dd258;
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      plStack_180 = plVar12;
      func_0x00010ae06f08(0,1,&UNK_10f644302,&UNK_10f644341,0x8b,&UNK_10f6443b1);
    }
  }
  uVar19 = 4;
LAB_10a1dd258:
  FUN_10a1ddaa4(param_5,uVar19);
  plStack_178 = (long *)0x0;
  (**(code **)(*param_6 + 0xe0))(param_6,&PTR_DAT_110bae7b0,&plStack_178);
  *(ulong *)((long)param_5 + 700) = CONCAT44((int)param_2,(int)param_1);
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bae7d0);
  if ((int)plVar12 == 0) {
    plVar12 = param_6;
    (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110bae7f0);
    if ((int)plVar12 == 0) {
      *(undefined1 *)((long)param_5 + 0x2fc) = 1;
    }
    else {
      *(undefined1 *)((long)param_5 + 0x2fc) = 0;
    }
  }
  else {
    plVar12 = param_6;
    (**(code **)(*param_6 + 0x38))
              (param_6,&PTR_DAT_110bae7d0,*(undefined1 *)((long)param_5 + 0x2fc));
    *(char *)((long)param_5 + 0x2fc) = (char)plVar12;
  }
  uVar19 = *(undefined4 *)(param_5 + 0x60);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bae810);
  *(undefined4 *)(param_5 + 0x60) = uVar19;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bae830,*(undefined1 *)((long)param_5 + 0x304));
  *(char *)((long)param_5 + 0x304) = (char)plVar12;
  if (((uint)plVar12 & 0xff) == 2) {
    puVar17 = param_5[0x12];
    func_0x000107c2b054(&plStack_178,&UNK_10f6443f0);
    if (puVar17 != (undefined8 *)0x0) {
      FUN_10a76c080(puVar17[0x11b],&plStack_178);
    }
    if (cStack_161 < '\0') {
      __ZdlPv(plStack_178);
    }
  }
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bae850,0);
  if ((int)plVar12 != 0) {
    *(undefined1 *)((long)param_5 + 0x304) = 2;
  }
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bae870,0);
  if ((int)plVar12 != 0) {
    *(undefined1 *)((long)param_5 + 0x304) = 1;
  }
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bae890,*(undefined1 *)((long)param_5 + 0x305));
  *(char *)((long)param_5 + 0x305) = (char)plVar12;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bae8b0,*(undefined4 *)(param_5 + 0x6f));
  *(int *)(param_5 + 0x6f) = (int)plVar12;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bae8d0,*(undefined4 *)((long)param_5 + 0x37c));
  *(int *)((long)param_5 + 0x37c) = (int)plVar12;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bae8f0);
  if ((int)plVar12 == 0) {
    plVar12 = param_6;
    (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bde478);
    if ((int)plVar12 == 0) {
      plVar12 = param_6;
      (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bde498,0);
      uVar16 = SUB81(plVar12,0);
    }
    else {
      plVar12 = param_6;
      (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bde478,0);
      uVar16 = SUB81(plVar12,0);
    }
    *(undefined1 *)(param_5 + 100) = uVar16;
  }
  else {
    plVar12 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bae8f0,0);
    uVar16 = 4;
    if ((int)plVar12 == 0) {
      uVar16 = 0;
    }
    *(undefined1 *)(param_5 + 100) = uVar16;
  }
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bae910,0);
  *(byte *)(param_5 + 0x57) = *(byte *)(param_5 + 0x57) & 0xfe | (byte)plVar12;
  (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110bae930,(undefined4 *)((long)param_5 + 0x324));
  *(undefined4 *)((long)param_5 + 0x324) = uVar19;
  *(float *)(param_5 + 0x65) = param_2;
  *(undefined4 *)((long)param_5 + 0x32c) = param_3;
  *(undefined4 *)(param_5 + 0x66) = param_4;
  if ((*(int *)(param_5[0x12][0x144] + 0x18) < 0xe1) &&
     (plVar12 = param_6, (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bae950),
     (int)plVar12 != 0)) {
    plVar12 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bae950,1);
    uVar16 = SUB81(plVar12,0);
  }
  else {
    plVar12 = param_6;
    (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110be0450,1);
    uVar16 = SUB81(plVar12,0);
  }
  *(undefined1 *)((long)param_5 + 0x334) = uVar16;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c02188,0);
  *(char *)((long)param_5 + 0x33c) = (char)plVar12;
  uVar19 = *(undefined4 *)(param_5 + 0x67);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bae970);
  *(undefined4 *)(param_5 + 0x67) = uVar19;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0xd0))(param_6,&PTR_DAT_110bae990,*(undefined4 *)(param_5 + 0x68));
  *(int *)(param_5 + 0x68) = (int)plVar12;
  uStack_d8 = 0x10a1fd9b4;
  ppuStack_d0 = &PTR_DAT_110bb21e0;
  ppuStack_c8 = param_5;
  FUN_10a02d928(param_6,&PTR_DAT_110bae9b0,&uStack_d8,0);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  uStack_118 = 0x10a1fd9e4;
  ppuStack_110 = &PTR_DAT_110bb21f8;
  ppuStack_108 = param_5;
  FUN_10a02d928(param_6,&PTR_DAT_110bae9d0,&uStack_118,0);
  (*(code *)*ppuStack_110)(&ppuStack_110);
  uStack_158 = 0x10a1fda14;
  ppuStack_150 = &PTR_DAT_110bb2210;
  ppuStack_148 = param_5;
  FUN_10a02d928(param_6,&PTR_DAT_110bae9f0,&uStack_158,0);
  (*(code *)*ppuStack_150)(&ppuStack_150);
  puVar17 = (undefined8 *)(ulong)*(uint *)((long)param_5 + 700);
  puVar18 = (undefined8 *)(ulong)*(uint *)(param_5 + 0x58);
  (*(code *)(*param_5)[0x1a])();
  (*(code *)(*param_5)[0x19])(param_5);
  uVar15 = 0;
  FUN_10a1da3a4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_5;
  }
  ___stack_chk_fail();
  if (cStack_161 < '\0') {
    __ZdlPv(plStack_178);
  }
  __Unwind_Resume();
  pcStack_188 = FUN_10a1dd7c8;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_270 = *puVar18;
  puStack_190 = &stack0xfffffffffffffff0;
  (**(code **)(puVar18[1] + 0x10))(apuStack_268,puVar18 + 1);
  FUN_109ffe064(&uStack_230,*puVar17,puVar17[1]);
  pcStack_218 = FUN_10a1fd6a4;
  ppuStack_210 = &PTR_FUN_110bb2888;
  puVar6 = (undefined8 *)0x58;
  __Znwm();
  *puVar6 = uStack_270;
  (*(code *)apuStack_268[0][2])(puVar6 + 1,apuStack_268);
  puVar6[9] = uStack_228;
  puVar6[8] = uStack_230;
  puVar6[10] = lStack_220;
  uStack_228 = 0;
  lStack_220 = 0;
  uStack_230 = 0;
  puStack_208 = puVar6;
  func_0x000107c2b054(auStack_288,&UNK_10f643dac);
  ppuVar7 = param_5;
  puVar18 = puVar17;
  (*(code *)(*param_5)[0x4a])(param_5,puVar17,&pcStack_218,uVar15,auStack_288);
  if (cStack_271 < '\0') {
    __ZdlPv(auStack_288[0]);
  }
  (*(code *)*ppuStack_210)(&ppuStack_210);
  if (lStack_220 < 0) {
    __ZdlPv(uStack_230);
  }
  ppuVar13 = apuStack_268;
  (*(code *)*apuStack_268[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  if (cStack_271 < '\0') {
    __ZdlPv(auStack_288[0]);
  }
  (*(code *)*ppuStack_210)(&ppuStack_210);
  if (lStack_220 < 0) {
    __ZdlPv(uStack_230);
  }
  (*(code *)*apuStack_268[0])(apuStack_268);
  ppuVar7 = ppuVar13;
  __Unwind_Resume();
  pcStack_298 = FUN_10a1dd994;
  pppuStack_300 = &ppuStack_2a0;
  if (*(int *)(ppuVar7 + 0x3f) != (int)puVar18) {
    ppuStack_2a0 = &puStack_190;
    if (*(int *)(ppuVar7 + 0x3f) == 2) {
      ppuVar7 = (undefined8 **)&UNK_10f6443fa;
      FUN_10a00946c();
      pcStack_2f8 = FUN_10a1ddaa4;
      ppuVar10 = ppuVar7;
      if (*(int *)((long)ppuVar7 + 0x1fc) != (int)puVar18) {
        puVar11 = ppuVar7[0x12];
        ppcStack_330 = &pcStack_218;
        puStack_328 = &uStack_270;
        puStack_320 = puVar6;
        ppuStack_318 = param_5;
        puStack_310 = puVar17;
        ppuStack_308 = ppuVar13;
        FUN_10a2421c8();
        plVar12 = (long *)puVar11[0x45];
        (**(code **)(*plVar12 + 0x50))();
        puVar17 = puVar18;
        FUN_10a173a60(puVar18,plVar12);
        if (((ulong)puVar17 & 1) == 0) {
          FUN_10a096250();
          FUN_10a0ee900(auStack_348,&UNK_10f644438,0x50);
          FUN_10a0029c0(auStack_348);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1ddbd4);
          (*pcVar4)();
        }
        uVar19 = *(undefined4 *)((long)ppuVar7 + 700);
        uVar1 = *(undefined4 *)(ppuVar7 + 0x58);
        uVar2 = *(undefined4 *)(ppuVar7 + 0x3f);
        ppuVar13 = ppuVar7;
        (*(code *)(*ppuVar7)[0x1a])(ppuVar7);
        (*(code *)(*ppuVar7)[0x19])(ppuVar7);
        FUN_10a1da3a4(ppuVar7,uVar19,uVar1,0,uVar2,puVar18,ppuVar13,ppuVar10);
        ppuVar13 = (undefined8 **)ppuVar7[0x70];
        ppuVar10 = (undefined8 **)0x0;
        if (ppuVar13 != (undefined8 **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1ddb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(*ppuVar13)[4])(ppuVar13,*(undefined4 *)((long)ppuVar7 + 0x1fc));
          return ppuVar13;
        }
      }
      return ppuVar10;
    }
    ppuVar13 = ppuVar7 + 0x3f;
    *(int *)(ppuVar7 + 0x3f) = (int)puVar18;
    func_0x00010a1bd170(auStack_2e8);
    FUN_10a1fd58c(ppuVar13);
    uVar19 = *(undefined4 *)((long)ppuVar7 + 700);
    uVar1 = *(undefined4 *)(ppuVar7 + 0x58);
    uVar2 = *(undefined4 *)(ppuVar7 + 0x3e);
    uVar3 = *(undefined4 *)(ppuVar7 + 0x3f);
    ppuVar10 = ppuVar7;
    (*(code *)(*ppuVar7)[0x1d])(ppuVar7);
    ppuVar8 = ppuVar7;
    (*(code *)(*ppuVar7)[0x1a])(ppuVar7);
    ppuVar9 = ppuVar7;
    (*(code *)(*ppuVar7)[0x19])(ppuVar7);
    FUN_10a1da3a4(ppuVar7,uVar19,uVar1,uVar2,uVar3,ppuVar10,ppuVar8,ppuVar9);
    ppuVar10 = (undefined8 **)ppuVar7[0x70];
    ppuVar7 = (undefined8 **)0x0;
    if (ppuVar10 != (undefined8 **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1dda78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*ppuVar10)[3])(ppuVar10,*(undefined4 *)ppuVar13);
      return ppuVar10;
    }
  }
  return ppuVar7;
}



/* Entry: 10a1dd7c8; end: 10a1dd993;  */

undefined8 **
FUN_10a1dd7c8(undefined8 **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  undefined1 auStack_1c8 [24];
  code **ppcStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 *puStack_190;
  undefined8 **ppuStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 auStack_168 [8];
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a1fd6a4;
  ppuStack_90 = &PTR_FUN_110bb2888;
  puVar6 = (undefined8 *)0x58;
  __Znwm();
  *puVar6 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar6 + 1,apuStack_e8);
  puVar6[9] = uStack_a8;
  puVar6[8] = uStack_b0;
  puVar6[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar6;
  func_0x000107c2b054(auStack_108,&UNK_10f643dac);
  ppuVar7 = param_1;
  puVar14 = param_2;
  (*(code *)(*param_1)[0x4a])(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar13 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  ppuVar7 = ppuVar13;
  __Unwind_Resume();
  pcStack_118 = FUN_10a1dd994;
  ppuStack_180 = &puStack_120;
  if (*(int *)(ppuVar7 + 0x3f) != (int)puVar14) {
    puStack_120 = &stack0xfffffffffffffff0;
    if (*(int *)(ppuVar7 + 0x3f) == 2) {
      ppuVar7 = (undefined8 **)&UNK_10f6443fa;
      FUN_10a00946c();
      pcStack_178 = FUN_10a1ddaa4;
      ppuVar10 = ppuVar7;
      if (*(int *)((long)ppuVar7 + 0x1fc) != (int)puVar14) {
        puVar11 = ppuVar7[0x12];
        ppcStack_1b0 = &pcStack_98;
        puStack_1a8 = &uStack_f0;
        puStack_1a0 = puVar6;
        ppuStack_198 = param_1;
        puStack_190 = param_2;
        ppuStack_188 = ppuVar13;
        FUN_10a2421c8();
        plVar12 = (long *)puVar11[0x45];
        (**(code **)(*plVar12 + 0x50))();
        puVar6 = puVar14;
        FUN_10a173a60(puVar14,plVar12);
        if (((ulong)puVar6 & 1) == 0) {
          FUN_10a096250();
          FUN_10a0ee900(auStack_1c8,&UNK_10f644438,0x50);
          FUN_10a0029c0(auStack_1c8);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1ddbd4);
          (*pcVar5)();
        }
        uVar1 = *(undefined4 *)((long)ppuVar7 + 700);
        uVar2 = *(undefined4 *)(ppuVar7 + 0x58);
        uVar3 = *(undefined4 *)(ppuVar7 + 0x3f);
        ppuVar13 = ppuVar7;
        (*(code *)(*ppuVar7)[0x1a])(ppuVar7);
        (*(code *)(*ppuVar7)[0x19])(ppuVar7);
        FUN_10a1da3a4(ppuVar7,uVar1,uVar2,0,uVar3,puVar14,ppuVar13,ppuVar10);
        ppuVar13 = (undefined8 **)ppuVar7[0x70];
        ppuVar10 = (undefined8 **)0x0;
        if (ppuVar13 != (undefined8 **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1ddb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(*ppuVar13)[4])(ppuVar13,*(undefined4 *)((long)ppuVar7 + 0x1fc));
          return ppuVar13;
        }
      }
      return ppuVar10;
    }
    ppuVar13 = ppuVar7 + 0x3f;
    *(int *)(ppuVar7 + 0x3f) = (int)puVar14;
    func_0x00010a1bd170(auStack_168);
    FUN_10a1fd58c(ppuVar13);
    uVar1 = *(undefined4 *)((long)ppuVar7 + 700);
    uVar2 = *(undefined4 *)(ppuVar7 + 0x58);
    uVar3 = *(undefined4 *)(ppuVar7 + 0x3e);
    uVar4 = *(undefined4 *)(ppuVar7 + 0x3f);
    ppuVar10 = ppuVar7;
    (*(code *)(*ppuVar7)[0x1d])(ppuVar7);
    ppuVar8 = ppuVar7;
    (*(code *)(*ppuVar7)[0x1a])(ppuVar7);
    ppuVar9 = ppuVar7;
    (*(code *)(*ppuVar7)[0x19])(ppuVar7);
    FUN_10a1da3a4(ppuVar7,uVar1,uVar2,uVar3,uVar4,ppuVar10,ppuVar8,ppuVar9);
    ppuVar10 = (undefined8 **)ppuVar7[0x70];
    ppuVar7 = (undefined8 **)0x0;
    if (ppuVar10 != (undefined8 **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1dda78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*ppuVar10)[3])(ppuVar10,*(undefined4 *)ppuVar13);
      return ppuVar10;
    }
  }
  return ppuVar7;
}



/* Entry: 10a1dd994; end: 10a1ddaa3;  */

void FUN_10a1dd994(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_b8 [24];
  undefined1 auStack_58 [8];
  
  if ((int)param_1[0x3f] != (int)param_2) {
    if ((int)param_1[0x3f] == 2) {
      plVar5 = (long *)&UNK_10f6443fa;
      FUN_10a00946c();
      if (*(int *)((long)plVar5 + 0x1fc) != (int)param_2) {
        lVar6 = plVar5[0x12];
        FUN_10a2421c8();
        plVar7 = *(long **)(lVar6 + 0x228);
        (**(code **)(*plVar7 + 0x50))();
        uVar8 = param_2;
        FUN_10a173a60(param_2,plVar7);
        if ((uVar8 & 1) == 0) {
          FUN_10a096250();
          FUN_10a0ee900(auStack_b8,&UNK_10f644438,0x50);
          FUN_10a0029c0(auStack_b8);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1ddbd4);
          (*pcVar4)();
        }
        uVar1 = *(undefined4 *)((long)plVar5 + 700);
        lVar6 = plVar5[0x58];
        lVar2 = plVar5[0x3f];
        plVar7 = plVar5;
        (**(code **)(*plVar5 + 0xd0))(plVar5);
        plVar9 = plVar5;
        (**(code **)(*plVar5 + 200))(plVar5);
        FUN_10a1da3a4(plVar5,uVar1,(int)lVar6,0,(int)lVar2,param_2,plVar7,plVar9);
        plVar7 = (long *)plVar5[0x70];
        if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1ddb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x20))(plVar7,*(undefined4 *)((long)plVar5 + 0x1fc));
          return;
        }
      }
      return;
    }
    *(int *)(param_1 + 0x3f) = (int)param_2;
    func_0x00010a1bd170(auStack_58);
    FUN_10a1fd58c(param_1 + 0x3f);
    uVar1 = *(undefined4 *)((long)param_1 + 700);
    lVar6 = param_1[0x58];
    lVar2 = param_1[0x3e];
    lVar3 = param_1[0x3f];
    plVar5 = param_1;
    (**(code **)(*param_1 + 0xe8))(param_1);
    plVar7 = param_1;
    (**(code **)(*param_1 + 0xd0))(param_1);
    plVar9 = param_1;
    (**(code **)(*param_1 + 200))(param_1);
    FUN_10a1da3a4(param_1,uVar1,(int)lVar6,(int)lVar2,(int)lVar3,plVar5,plVar7,plVar9);
    plVar5 = (long *)param_1[0x70];
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1dda78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,(int)param_1[0x3f]);
      return;
    }
  }
  return;
}



/* Entry: 10a1ddaa4; end: 10a1ddbef;  */

void FUN_10a1ddaa4(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auStack_58 [24];
  
  if (*(int *)((long)param_1 + 0x1fc) != (int)param_2) {
    lVar4 = param_1[0x12];
    FUN_10a2421c8();
    plVar5 = *(long **)(lVar4 + 0x228);
    (**(code **)(*plVar5 + 0x50))();
    uVar6 = param_2;
    FUN_10a173a60(param_2,plVar5);
    if ((uVar6 & 1) == 0) {
      FUN_10a096250();
      FUN_10a0ee900(auStack_58,&UNK_10f644438,0x50);
      FUN_10a0029c0(auStack_58);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1ddbd4);
      (*pcVar3)();
    }
    uVar1 = *(undefined4 *)((long)param_1 + 700);
    lVar4 = param_1[0x58];
    lVar2 = param_1[0x3f];
    plVar5 = param_1;
    (**(code **)(*param_1 + 0xd0))(param_1);
    plVar7 = param_1;
    (**(code **)(*param_1 + 200))(param_1);
    FUN_10a1da3a4(param_1,uVar1,(int)lVar4,0,(int)lVar2,param_2,plVar5,plVar7);
    plVar5 = (long *)param_1[0x70];
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1ddb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x20))(plVar5,*(undefined4 *)((long)param_1 + 0x1fc));
      return;
    }
  }
  return;
}



/* Entry: 10a1ddbf0; end: 10a1dde2f;  */

void FUN_10a1ddbf0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  uStack_30 = (long *)&UNK_10f6457e0;
  ppuStack_28 = (undefined **)0x1d;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bb1c58,&uStack_30);
  FUN_10a1dde30(param_2,&PTR_s_camera_110bb1c78,param_1 + 0x72,&DAT_10f63a6be,6);
  ppuVar2 = &PTR_DAT_110bae770;
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bae770,(int)param_1[0x3f]);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0xe8))();
  if ((int)plVar1 != 4) {
    FUN_10a096250();
    uStack_30 = plVar1;
    ppuStack_28 = ppuVar2;
    (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bae790,&uStack_30);
  }
  uStack_30 = (long *)CONCAT44((float)(int)param_1[0x58],(float)*(int *)((long)param_1 + 700));
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bae7b0,&uStack_30);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bae7d0,*(undefined1 *)((long)param_1 + 0x2fc));
  (**(code **)(*param_2 + 0x60))((int)param_1[0x60],param_2,&PTR_DAT_110bae810);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bae8b0,(int)param_1[0x6f]);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bae830,*(undefined1 *)((long)param_1 + 0x304));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bae890,*(undefined1 *)((long)param_1 + 0x305));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bae8d0,*(undefined4 *)((long)param_1 + 0x37c));
  FUN_10a02e188(param_2,&PTR_DAT_110bae9f0,param_1 + 0x6d,&UNK_10f633e9d,0xd);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bde498,(char)param_1[100]);
  (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110bae930,(long)param_1 + 0x324);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bae910,*(byte *)(param_1 + 0x57) & 1);
  (**(code **)(*param_2 + 0x70))
            (param_2,&PTR_DAT_110bae950,*(char *)((long)param_1 + 0x334) != '\0');
  return;
}



/* Entry: 10a1dde30; end: 10a1ddf4f;  */

void FUN_10a1dde30(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = (long *)param_3[1];
  uStack_40 = param_4;
  uStack_38 = param_5;
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 == (long *)0x0)) {
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
  }
  else {
    uStack_60 = *param_3;
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_58 = plVar4;
      uStack_50 = uStack_60;
    } while (cVar2 != '\0');
  }
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_60,&uStack_40);
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a1ddf50; end: 10a1ddfe3;  */

void FUN_10a1ddf50(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 1.1754944e-38;
  if (1.1754944e-38 <= *(float *)(param_1 + 0x300)) {
    fVar4 = *(float *)(param_1 + 0x300);
  }
  *(float *)(param_1 + 0x300) = fVar4;
  lVar1 = *(long *)(param_1 + 0x90);
  FUN_10a2421c8();
  plVar2 = *(long **)(lVar1 + 0x228);
  (**(code **)(*plVar2 + 0x68))();
  fVar4 = (float)(int)param_2;
  fVar5 = (float)(int)plVar2[0x11];
  iVar3 = (int)((ulong)param_2 >> 0x20);
  if ((fVar5 < *(float *)(param_1 + 0x300) * fVar4 && iVar3 < (int)param_2) ||
     (fVar4 = (float)iVar3, fVar5 < *(float *)(param_1 + 0x300) * fVar4)) {
    *(float *)(param_1 + 0x300) = fVar5 / fVar4;
  }
  return;
}



/* Entry: 10a1ddfe4; end: 10a1de1fb;  */

void FUN_10a1ddfe4(long *param_1,ulong *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  if (*(char *)((long)param_1 + 0x2fc) != '\x02') {
    FUN_10a1ddf50(param_1,*param_2);
    lVar5 = param_1[0x12];
    FUN_10a2421c8();
    plVar6 = *(long **)(lVar5 + 0x228);
    (**(code **)(*plVar6 + 0x68))();
    if (*(char *)((long)param_1 + 0x2fc) == '\0') {
      uVar10 = (uint)(*(float *)(param_1 + 0x60) * (float)(int)*param_2);
      uVar9 = (uint)(*(float *)(param_1 + 0x60) * (float)*(int *)((long)param_2 + 4));
      uVar12 = CONCAT44(uVar9,uVar10);
      bVar3 = true;
      do {
        bVar2 = bVar3;
        uVar1 = uVar10;
        if (!bVar2) {
          uVar1 = uVar9;
        }
        if (uVar1 != 1) {
          uVar11 = 0x100000001;
          uVar13 = 0x100000001;
          if (0 < (int)uVar1) {
            uVar11 = uVar12;
            uVar13 = uVar12;
          }
          break;
        }
        uVar11 = (ulong)uVar10;
        uVar13 = uVar12;
        bVar3 = false;
      } while (bVar2);
    }
    else {
      uVar11 = *param_2;
      uVar13 = *param_2;
    }
    uVar9 = (uint)uVar11;
    uVar10 = (uint)(uVar13 >> 0x20);
    if (*(uint *)((long)param_1 + 700) != uVar9 || *(uint *)(param_1 + 0x58) != uVar10) {
      lVar5 = plVar6[0x11];
      func_0x000107c2b054(auStack_68,&UNK_10f644489);
      if ((uVar9 == 0) || (uVar1 = (int)lVar5 + 1, uVar1 <= uVar9)) {
        FUN_10a109200(auStack_68);
      }
      else {
        if (cStack_51 < '\0') {
          __ZdlPv(auStack_68[0]);
        }
        func_0x000107c2b054(auStack_68,&UNK_10f6444a5);
        if ((uVar13 >> 0x20 != 0) && (uVar10 < uVar1)) {
          if (cStack_51 < '\0') {
            __ZdlPv(auStack_68[0]);
          }
          *(ulong *)((long)param_1 + 700) = uVar13;
          lVar5 = param_1[0x3f];
          plVar6 = param_1;
          (**(code **)(*param_1 + 0xe8))(param_1);
          plVar7 = param_1;
          (**(code **)(*param_1 + 0xd0))(param_1);
          plVar8 = param_1;
          (**(code **)(*param_1 + 200))(param_1);
          FUN_10a1da3a4(param_1,uVar11,uVar13 >> 0x20,0,(int)lVar5,plVar6,plVar7,plVar8);
          plVar6 = (long *)param_1[0x70];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x30))
                      (plVar6,(ulong *)((long)param_1 + 700),*(byte *)(param_1 + 0x57) & 1);
          }
          if ((char)param_1[0x5f] != '\x01') {
            return;
          }
          *(undefined1 *)(param_1 + 0x5f) = 0;
          return;
        }
        FUN_10a109200(auStack_68);
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1de1dc);
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10a1de1fc; end: 10a1de2e3;  */

void FUN_10a1de1fc(long param_1,long *param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lStack_30;
  ulong uStack_28;
  
  FUN_10a1ddf50(param_1,CONCAT44(*(int *)((long)param_2 + 0xc) - *(int *)((long)param_2 + 4),
                                 (int)param_2[1] - (int)*param_2));
  if (*(char *)(param_1 + 0x2fc) == '\0') {
    lStack_30 = *param_2;
    fVar2 = *(float *)(param_1 + 0x300) * (float)((int)param_2[1] - (int)lStack_30);
    fVar3 = 1.0;
    if (1.0 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar4 = *(float *)(param_1 + 0x300) *
            (float)(*(int *)((long)param_2 + 0xc) - (int)((ulong)lStack_30 >> 0x20));
    fVar2 = 1.0;
    if (1.0 <= fVar4) {
      fVar2 = fVar4;
    }
    uStack_28 = lStack_30 + ((ulong)(uint)(int)fVar2 << 0x20) & 0xffffffff00000000 |
                (ulong)(uint)((int)fVar3 + (int)lStack_30);
  }
  else {
    uStack_28 = param_2[1];
    lStack_30 = *param_2;
  }
  *(ulong *)(param_1 + 0x2cc) = uStack_28;
  *(long *)(param_1 + 0x2c4) = lStack_30;
  plVar1 = *(long **)(param_1 + 0x380);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,&lStack_30,*(byte *)(param_1 + 0x2b8) & 1);
  }
  if (*(char *)(param_1 + 0x2f8) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f8) = 0;
  }
  return;
}



/* Entry: 10a1de2e4; end: 10a1de577;  */

void FUN_10a1de2e4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  long *plStack_60;
  undefined8 uStack_58;
  
  if (param_1[0x70] != 0) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
      plVar7 = param_1;
      (**(code **)(*param_1 + 0xe0))();
      if ((int)plVar1 != (int)plVar7) goto LAB_10a1de384;
    }
    plVar1 = param_1;
    (**(code **)(*param_1 + 0xd0))();
    if (((int)plVar1 == 0) || (plVar1 = (long *)*param_2, plVar1 == (long *)0x0))
    goto LAB_10a1de430;
    (**(code **)(*plVar1 + 0x70))();
    plVar7 = param_1;
    (**(code **)(*param_1 + 0xd0))();
    if ((int)plVar1 == (int)plVar7) goto LAB_10a1de430;
  }
LAB_10a1de384:
  plVar1 = param_1;
  if ((long *)*param_2 == (long *)0x0) {
    lVar8 = 0xd0;
  }
  else {
    (**(code **)(*(long *)*param_2 + 0x20))();
    plVar7 = (long *)*param_2;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7;
    }
    lVar8 = 0xd0;
    if (plVar7 != (long *)0x0) {
      lVar8 = 0x70;
    }
  }
  (**(code **)(*plVar1 + lVar8))();
  plVar7 = (long *)0x3a8;
  __Znwm();
  FUN_10abf70a0();
  plStack_60 = plVar7;
  FUN_10a1de578(param_1 + 0x70,&plStack_60);
  plVar7 = plStack_60;
  *(char *)(param_1 + 0x40) = (char)plVar1;
  plStack_60 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
LAB_10a1de430:
  (**(code **)(*(long *)param_1[0x70] + 0x48))((long *)param_1[0x70],param_2);
  uVar6 = 1;
  if (*param_2 != 0) {
    uVar6 = 2;
  }
  *(undefined1 *)((long)param_1 + 0x2fc) = uVar6;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  FUN_10a1de1fc(param_1,&plStack_60);
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
    plVar7 = (long *)*param_2;
    (**(code **)(*plVar7 + 0x30))();
    plVar2 = (long *)*param_2;
    (**(code **)(*plVar2 + 0x38))();
    plVar3 = (long *)*param_2;
    (**(code **)(*plVar3 + 0x20))();
    plVar4 = (long *)*param_2;
    (**(code **)(*plVar4 + 0x50))();
    plVar5 = (long *)*param_2;
    (**(code **)(*plVar5 + 0x70))();
    param_2 = (long *)*param_2;
    (**(code **)(*param_2 + 0x48))();
    FUN_10a1da3a4(param_1,plVar1,plVar7,plVar2,plVar3,plVar4,plVar5,param_2);
  }
  if ((char)param_1[0x5f] == '\x01') {
    *(undefined1 *)(param_1 + 0x5f) = 0;
  }
  return;
}



/* Entry: 10a1de578; end: 10a1de6d7;  */

undefined8 * FUN_10a1de578(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a1fda44(&uStack_30);
  plVar5 = (long *)param_1[1];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      uStack_30 = uVar6;
      uStack_28 = uVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1de6d8; end: 10a1de703;  */

ulong FUN_10a1de6d8(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar9 = param_1;
    iVar1 = *(int *)(puVar9 + 0x2cc);
    iVar2 = *(int *)(puVar9 + 0x2c4);
    iVar3 = *(int *)(puVar9 + 0x2d0);
    iVar4 = *(int *)(puVar9 + 0x2c8);
    iVar5 = iVar1 - iVar2;
    if (((iVar5 != 0 && iVar1 >= iVar2) && iVar3 != iVar4) &&
        ((iVar5 == 0 || iVar1 < iVar2) || iVar4 <= iVar3)) {
      return CONCAT44(iVar3 - iVar4,iVar5);
    }
    param_1 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (puVar9[0x2fc] != '\x02') break;
    plVar6 = *(long **)(puVar9 + 0x380);
    if (plVar6 == (long *)0x0) {
      plVar7 = (long *)0x0;
      plVar6 = (long *)0x0;
      goto LAB_10a1de6ac;
    }
    (**(code **)(*plVar6 + 0x50))();
    if (*plVar6 == 0) {
      *(undefined **)((long)register0x00000008 + -0x30) = &UNK_10f643dac;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    }
    else {
      plVar6 = *(long **)(puVar9 + 0x380);
      (**(code **)(*plVar6 + 0x50))();
      lVar10 = *plVar6;
      *(undefined **)((long)register0x00000008 + -0x30) = &UNK_10f6444de;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0x1b;
      if (lVar10 != 0) {
        plVar7 = *(long **)(puVar9 + 0x380);
        (**(code **)(*plVar7 + 0x50))();
        plVar7 = (long *)*plVar7;
        (**(code **)(*plVar7 + 0x28))();
        puVar8 = *(ulong **)(puVar9 + 0x380);
        (**(code **)(*puVar8 + 0x50))();
        plVar6 = (long *)*puVar8;
        (**(code **)(*plVar6 + 0x30))();
        goto LAB_10a1de6ac;
      }
    }
    unaff_x30 = FUN_10a1de6d8;
    FUN_10a0edfc4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = puVar9;
  }
  plVar7 = (long *)(ulong)*(uint *)(puVar9 + 700);
  plVar6 = (long *)(ulong)*(uint *)(puVar9 + 0x2c0);
LAB_10a1de6ac:
  return (ulong)plVar7 & 0xffffffff | (long)plVar6 << 0x20;
}



/* Entry: 10a1de704; end: 10a1de803;  */

void FUN_10a1de704(undefined8 *param_1,long param_2)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((*(byte *)(param_2 + 0x2f8) & 1) == 0) {
    if ((*(int *)(param_2 + 0x2c4) < *(int *)(param_2 + 0x2cc) &&
        *(int *)(param_2 + 0x2d0) != *(int *)(param_2 + 0x2c8)) &&
        (*(int *)(param_2 + 0x2cc) <= *(int *)(param_2 + 0x2c4) ||
        *(int *)(param_2 + 0x2c8) <= *(int *)(param_2 + 0x2d0))) {
      lVar1 = param_2;
      func_0x00010a1de5f0();
      fVar7 = (float)(int)((ulong)lVar1 >> 0x20);
      fVar2 = (float)*(int *)(param_2 + 0x2c4) / (float)(int)lVar1;
      fVar4 = (float)*(int *)(param_2 + 0x2c8) / fVar7;
      *(float *)(param_2 + 0x2d4) = (float)*(int *)(param_2 + 0x2cc) / (float)(int)lVar1 - fVar2;
      *(undefined8 *)(param_2 + 0x2d8) = 0;
      *(undefined4 *)(param_2 + 0x2e0) = 0;
      *(float *)(param_2 + 0x2e4) = (float)*(int *)(param_2 + 0x2d0) / fVar7 - fVar4;
      *(undefined4 *)(param_2 + 0x2e8) = 0;
      *(float *)(param_2 + 0x2ec) = fVar2;
      *(float *)(param_2 + 0x2f0) = fVar4;
      *(undefined4 *)(param_2 + 0x2f4) = 0x3f800000;
      if ((*(byte *)(param_2 + 0x2f8) & 1) != 0) goto LAB_10a1de7e4;
    }
    else {
      *(undefined8 *)(param_2 + 0x2dc) = 0;
      *(undefined8 *)(param_2 + 0x2d4) = 0x3f800000;
      *(undefined8 *)(param_2 + 0x2ec) = 0;
      *(undefined8 *)(param_2 + 0x2e4) = 0x3f800000;
      *(undefined4 *)(param_2 + 0x2f4) = 0x3f800000;
    }
    *(undefined1 *)(param_2 + 0x2f8) = 1;
  }
LAB_10a1de7e4:
  uVar3 = *(undefined8 *)(param_2 + 0x2d4);
  uVar6 = *(undefined8 *)(param_2 + 0x2ec);
  uVar5 = *(undefined8 *)(param_2 + 0x2e4);
  param_1[1] = *(undefined8 *)(param_2 + 0x2dc);
  *param_1 = uVar3;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x2f4);
  return;
}



/* Entry: 10a1de804; end: 10a1de823;  */

int FUN_10a1de804(int param_1)

{
  int iVar1;
  
  FUN_10a1de824();
  iVar1 = 4;
  if (param_1 != 0) {
    iVar1 = param_1;
  }
  return iVar1;
}



/* Entry: 10a1de824; end: 10a1de8e3;  */

long * FUN_10a1de824(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)param_1[0x13];
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    plVar4 = (long *)(ulong)*(uint *)((long)param_1 + 0x1fc);
  }
  else {
    plVar6 = (long *)param_1[0x14];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar4 + 0xe8))();
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return plVar4;
}



/* Entry: 10a1de8e4; end: 10a1de95f;  */

void FUN_10a1de8e4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  FUN_10a1dd000();
                    /* WARNING: Could not recover jumptable at 0x00010a1de91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,param_1,0,param_3);
  return;
}



/* Entry: 10a1de960; end: 10a1dece7;  */

ulong FUN_10a1de960(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  long *plVar10;
  long **pplVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if (param_2 == 0) {
    plVar3 = param_1;
    (**(code **)(*param_1 + 0xd0))();
    iVar15 = (int)plVar3;
  }
  else if ((*(byte *)(param_2 + 2) >> 2 & 1) == 0) {
    iVar14 = 4;
    if (*(char *)(param_2 + 1) != '\x02') {
      iVar14 = 1;
    }
    iVar15 = 2;
    if (*(char *)(param_2 + 1) != '\x01') {
      iVar15 = iVar14;
    }
  }
  else {
    iVar15 = 1;
  }
  puVar1 = (ulong *)(param_1 + 0x70);
  if (param_1[0x70] == 0) {
LAB_10a1dea30:
    (**(code **)(*param_1 + 0xe0))(param_1);
    plVar3 = (long *)0x3a8;
    __Znwm();
    FUN_10abf70a0();
    plVar2 = param_1;
    plStack_70 = plVar3;
    (**(code **)(*param_1 + 0xb0))(param_1);
    plVar10 = param_1;
    (**(code **)(*param_1 + 0xb8))(param_1);
    plVar4 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1);
    plVar3 = plVar3 + 1;
    plVar5 = plVar3;
    (**(code **)(*plVar3 + 0xe0))(plVar3);
    plVar6 = param_1;
    (**(code **)(*param_1 + 0xe8))(param_1);
    plVar7 = plVar3;
    (**(code **)(*plVar3 + 0xd0))(plVar3);
    plVar8 = plVar3;
    (**(code **)(*plVar3 + 200))(plVar3);
    FUN_10a1da3a4(param_1,plVar2,plVar10,plVar4,plVar5,plVar6,plVar7,plVar8);
    FUN_10a1de578(puVar1,&plStack_70);
    plVar2 = plStack_70;
    *(char *)(param_1 + 0x40) = (char)iVar15;
    plStack_70 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  else {
    plVar3 = param_1;
    (**(code **)(*param_1 + 0xe0))();
    plVar2 = (long *)(param_1[0x70] + 8);
    (**(code **)(*plVar2 + 0xe0))();
    if (((int)plVar3 != (int)plVar2) ||
       ((plVar2 = param_1, (**(code **)(*param_1 + 0xd0))(), (int)plVar2 != 0 &&
        (plVar2 = param_1, (**(code **)(*param_1 + 0xd0))(), (int)plVar2 != iVar15))))
    goto LAB_10a1dea30;
  }
  uStack_78 = *(ulong *)((long)param_1 + 700);
  if (*(char *)((long)param_1 + 0x2fc) == '\x02') {
    plVar2 = (long *)*puVar1;
    (**(code **)(*plVar2 + 0x50))();
    if (*plVar2 == 0) goto LAB_10a1dec88;
    puVar9 = (ulong *)*puVar1;
    (**(code **)(*puVar9 + 0x50))();
    plVar2 = (long *)*puVar9;
    (**(code **)(*plVar2 + 0x28))();
    plVar10 = (long *)*puVar1;
    (**(code **)(*plVar10 + 0x50))();
    plVar10 = (long *)*plVar10;
    (**(code **)(*plVar10 + 0x30))();
    uStack_78 = (ulong)plVar2 & 0xffffffff | (long)plVar10 << 0x20;
  }
  (**(code **)(*(long *)param_1[0x70] + 0x30))
            ((long *)param_1[0x70],&uStack_78,*(byte *)(param_1 + 0x57) & 1);
  plVar10 = (long *)param_1[0x70];
  plVar2 = param_1;
  (**(code **)(*param_1 + 0xe8))(param_1);
  (**(code **)(*plVar10 + 0x20))(plVar10,plVar2);
  (**(code **)(*(long *)param_1[0x70] + 0x40))
            ((long *)param_1[0x70],(long)param_1 + 0x2c4,*(byte *)(param_1 + 0x57) & 1);
  (**(code **)(*(long *)param_1[0x70] + 0x38))((long *)param_1[0x70],(int)param_1[0x3e]);
  if (((*(int *)((long)param_1 + 0x2c4) < *(int *)((long)param_1 + 0x2cc)) &&
      ((int)param_1[0x59] < (int)param_1[0x5a])) &&
     ((int)uStack_78 < *(int *)((long)param_1 + 0x2cc) - *(int *)((long)param_1 + 0x2c4))) {
    plStack_70 = (long *)&UNK_10f6444fa;
    uStack_68 = 0x29;
    if (uStack_78._4_4_ < (int)param_1[0x5a] - (int)param_1[0x59]) {
      pplVar11 = &plStack_70;
      FUN_10a0edfc4();
      __ZdlPv(plVar3);
      __Unwind_Resume();
      plVar3 = pplVar11[0x70];
      uVar12 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        uVar13 = 0;
        if (*plVar3 != 0) {
          uVar13 = 2;
        }
        uVar12 = (ulong)uVar13;
      }
      return uVar12;
    }
  }
LAB_10a1dec88:
  return *puVar1;
}



/* Entry: 10a1dece8; end: 10a1ded1b;  */

undefined4 FUN_10a1dece8(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x380);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    uVar2 = 0;
    if (*plVar1 != 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* Entry: 10a1ded1c; end: 10a1dfa53;  */

void FUN_10a1ded1c(undefined8 param_1,long param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *puVar12;
  ulong unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *puVar13;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  long lVar14;
  undefined8 *unaff_x27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  
code_r0x00010a1ded1c:
  *(byte **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x2b8) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(long *)((long)register0x00000008 + -0x2b0) = param_2;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0x140),param_2 + 0x28);
  *(undefined4 *)((long)register0x00000008 + -0x120) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x118),&UNK_10f6442b5);
  *(undefined4 *)((long)register0x00000008 + -0x100) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f6442ba);
  *(undefined4 *)((long)register0x00000008 + -0xe0) = 2;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd8),&UNK_10f6442c3);
  puVar13 = (undefined8 *)0x0;
  lVar14 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x150);
  *(undefined8 **)((long)register0x00000008 + -0x158) = puVar9;
  puVar8 = puVar9;
  do {
    puVar1 = (uint *)((long)register0x00000008 + lVar14 + -0x120);
    uVar4 = *puVar1;
    puVar10 = puVar9;
    puVar12 = puVar9;
    puVar11 = puVar9;
    if (puVar8 == puVar9) {
LAB_10a1dee6c:
      puVar8 = (undefined8 *)((long)register0x00000008 + -0x158);
      if (puVar13 != (undefined8 *)0x0) {
        puVar12 = puVar10 + 1;
        puVar8 = puVar10;
        puVar11 = puVar10;
      }
      if (puVar8[1] == 0) goto LAB_10a1dee88;
    }
    else {
      puVar8 = puVar9;
      puVar6 = puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar8[2];
          bVar7 = (undefined8 *)*puVar10 == puVar8;
          puVar8 = puVar10;
        } while (bVar7);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10a1dee6c;
      }
      else {
        do {
          puVar10 = puVar6;
          puVar6 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10a1dee6c;
        do {
          while (puVar11 = puVar13, uVar4 < *(uint *)(puVar11 + 4)) {
            puVar13 = (undefined8 *)*puVar11;
            puVar12 = puVar11;
            if ((undefined8 *)*puVar11 == (undefined8 *)0x0) goto LAB_10a1dee88;
          }
          if (uVar4 <= *(uint *)(puVar11 + 4)) goto LAB_10a1deef8;
          puVar13 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
        puVar12 = puVar11 + 1;
      }
LAB_10a1dee88:
      puVar8 = (undefined8 *)0x40;
      __Znwm();
      *(uint *)(puVar8 + 4) = uVar4;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar8 + 5,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar15 = *(undefined8 *)(puVar1 + 2);
        puVar8[6] = *(undefined8 *)(puVar1 + 4);
        puVar8[5] = uVar15;
        puVar8[7] = *(undefined8 *)(puVar1 + 6);
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = puVar11;
      *puVar12 = puVar8;
      if (**(long **)((long)register0x00000008 + -0x158) != 0) {
        *(long *)((long)register0x00000008 + -0x158) =
             **(long **)((long)register0x00000008 + -0x158);
        puVar8 = (undefined8 *)*puVar12;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x150),puVar8);
      *(long *)((long)register0x00000008 + -0x148) =
           *(long *)((long)register0x00000008 + -0x148) + 1;
    }
LAB_10a1deef8:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x60) break;
    puVar8 = *(undefined8 **)((long)register0x00000008 + -0x158);
    puVar13 = *(undefined8 **)((long)register0x00000008 + -0x150);
  } while( true );
  lVar14 = 0;
  do {
    if (*(char *)((long)register0x00000008 + lVar14 + -0xc1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar14 + -0xd8));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0x60);
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0x150);
  if (puVar8 != (undefined8 *)0x0) {
    puVar13 = puVar9;
    do {
      lVar14 = 8;
      if (*(uint *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x37c) <= *(uint *)(puVar8 + 4))
      {
        lVar14 = 0;
        puVar13 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + lVar14);
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar13 != puVar9) &&
       (*(uint *)(puVar13 + 4) <= *(uint *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x37c)))
    {
      if (*(char *)((long)puVar13 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x170),puVar13[5],puVar13[6])
        ;
      }
      else {
        uVar15 = puVar13[5];
        *(undefined8 *)((long)register0x00000008 + -0x168) = puVar13[6];
        *(undefined8 *)((long)register0x00000008 + -0x170) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0x160) = puVar13[7];
      }
      goto LAB_10a1def8c;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x170),&UNK_10f644524);
LAB_10a1def8c:
  *(undefined4 *)((long)register0x00000008 + -0x120) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x118),&UNK_10f6442d8);
  *(undefined4 *)((long)register0x00000008 + -0x100) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f6442e0);
  puVar13 = (undefined8 *)0x0;
  lVar14 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x180);
  *(undefined8 **)((long)register0x00000008 + -0x188) = puVar9;
  puVar8 = puVar9;
  do {
    puVar1 = (uint *)((long)register0x00000008 + lVar14 + -0x120);
    uVar4 = *puVar1;
    puVar10 = puVar9;
    puVar12 = puVar9;
    puVar11 = puVar9;
    if (puVar8 == puVar9) {
LAB_10a1df078:
      puVar8 = (undefined8 *)((long)register0x00000008 + -0x188);
      if (puVar13 != (undefined8 *)0x0) {
        puVar12 = puVar10 + 1;
        puVar8 = puVar10;
        puVar11 = puVar10;
      }
      if (puVar8[1] == 0) goto LAB_10a1df094;
    }
    else {
      puVar8 = puVar9;
      puVar6 = puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar8[2];
          bVar7 = (undefined8 *)*puVar10 == puVar8;
          puVar8 = puVar10;
        } while (bVar7);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10a1df078;
      }
      else {
        do {
          puVar10 = puVar6;
          puVar6 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10a1df078;
        do {
          while (puVar11 = puVar13, uVar4 < *(uint *)(puVar11 + 4)) {
            puVar13 = (undefined8 *)*puVar11;
            puVar12 = puVar11;
            if ((undefined8 *)*puVar11 == (undefined8 *)0x0) goto LAB_10a1df094;
          }
          if (uVar4 <= *(uint *)(puVar11 + 4)) goto LAB_10a1df104;
          puVar13 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
        puVar12 = puVar11 + 1;
      }
LAB_10a1df094:
      puVar8 = (undefined8 *)0x40;
      __Znwm();
      *(uint *)(puVar8 + 4) = uVar4;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar8 + 5,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar15 = *(undefined8 *)(puVar1 + 2);
        puVar8[6] = *(undefined8 *)(puVar1 + 4);
        puVar8[5] = uVar15;
        puVar8[7] = *(undefined8 *)(puVar1 + 6);
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = puVar11;
      *puVar12 = puVar8;
      if (**(long **)((long)register0x00000008 + -0x188) != 0) {
        *(long *)((long)register0x00000008 + -0x188) =
             **(long **)((long)register0x00000008 + -0x188);
        puVar8 = (undefined8 *)*puVar12;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x180),puVar8);
      *(long *)((long)register0x00000008 + -0x178) =
           *(long *)((long)register0x00000008 + -0x178) + 1;
    }
LAB_10a1df104:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x40) break;
    puVar8 = *(undefined8 **)((long)register0x00000008 + -0x188);
    puVar13 = *(undefined8 **)((long)register0x00000008 + -0x180);
  } while( true );
  lVar14 = 0;
  do {
    if (*(char *)((long)register0x00000008 + lVar14 + -0xe1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar14 + -0xf8));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0x40);
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0x180);
  if (puVar8 != (undefined8 *)0x0) {
    puVar13 = puVar9;
    do {
      lVar14 = 8;
      if (*(uint *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x378) <= *(uint *)(puVar8 + 4))
      {
        lVar14 = 0;
        puVar13 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + lVar14);
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar13 != puVar9) &&
       (*(uint *)(puVar13 + 4) <= *(uint *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x378)))
    {
      if (*(char *)((long)puVar13 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x1a0),puVar13[5],puVar13[6])
        ;
      }
      else {
        uVar15 = puVar13[5];
        *(undefined8 *)((long)register0x00000008 + -0x198) = puVar13[6];
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -400) = puVar13[7];
      }
      goto LAB_10a1df198;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x1a0),&UNK_10f64453f);
LAB_10a1df198:
  *(undefined1 *)((long)register0x00000008 + -0x120) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x118),"Disabled");
  *(undefined1 *)((long)register0x00000008 + -0x100) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f644556);
  *(undefined1 *)((long)register0x00000008 + -0xe0) = 2;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd8),&UNK_10f64455b);
  *(undefined1 *)((long)register0x00000008 + -0xc0) = 3;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xb8),&UNK_10f644560);
  unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x120);
  *(undefined1 *)((long)register0x00000008 + -0xa0) = 4;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x98),&UNK_10f644565);
  puVar8 = (undefined8 *)0x0;
  lVar14 = 0;
  unaff_x27 = (undefined8 *)((long)register0x00000008 + -0x1b8);
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
  unaff_x24 = (undefined8 *)((long)register0x00000008 + -0x1b0);
  *(undefined8 **)((long)register0x00000008 + -0x1b8) = unaff_x24;
  puVar9 = unaff_x24;
  do {
    unaff_x28 = unaff_x25 + lVar14;
    bVar5 = *unaff_x28;
    unaff_x23 = (ulong)bVar5;
    puVar11 = unaff_x24;
    puVar13 = unaff_x24;
    puVar12 = unaff_x24;
    if (puVar9 == unaff_x24) {
LAB_10a1df2e0:
      puVar9 = unaff_x27;
      if (puVar8 != (undefined8 *)0x0) {
        puVar13 = puVar11 + 1;
        puVar9 = puVar11;
        puVar12 = puVar11;
      }
      if (puVar9[1] == 0) goto LAB_10a1df2fc;
    }
    else {
      puVar9 = unaff_x24;
      puVar10 = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        do {
          puVar11 = (undefined8 *)puVar9[2];
          bVar7 = (undefined8 *)*puVar11 == puVar9;
          puVar9 = puVar11;
        } while (bVar7);
        if (*(byte *)(puVar11 + 4) < bVar5) goto LAB_10a1df2e0;
      }
      else {
        do {
          puVar11 = puVar10;
          puVar10 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
        if (*(byte *)(puVar11 + 4) < bVar5) goto LAB_10a1df2e0;
        do {
          while (puVar12 = puVar8, bVar5 < *(byte *)(puVar12 + 4)) {
            puVar8 = (undefined8 *)*puVar12;
            puVar13 = puVar12;
            if ((undefined8 *)*puVar12 == (undefined8 *)0x0) goto LAB_10a1df2fc;
          }
          if (bVar5 <= *(byte *)(puVar12 + 4)) goto LAB_10a1df36c;
          puVar8 = (undefined8 *)puVar12[1];
        } while ((undefined8 *)puVar12[1] != (undefined8 *)0x0);
        puVar13 = puVar12 + 1;
      }
LAB_10a1df2fc:
      puVar9 = (undefined8 *)0x40;
      __Znwm();
      *(byte *)(puVar9 + 4) = bVar5;
      if ((char)unaff_x28[0x1f] < '\0') {
        func_0x000107c3192c(puVar9 + 5,*(undefined8 *)(unaff_x28 + 8),
                            *(undefined8 *)(unaff_x28 + 0x10));
      }
      else {
        uVar15 = *(undefined8 *)(unaff_x28 + 8);
        puVar9[6] = *(undefined8 *)(unaff_x28 + 0x10);
        puVar9[5] = uVar15;
        puVar9[7] = *(undefined8 *)(unaff_x28 + 0x18);
      }
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = puVar12;
      *puVar13 = puVar9;
      if (**(long **)((long)register0x00000008 + -0x1b8) != 0) {
        *(long *)((long)register0x00000008 + -0x1b8) =
             **(long **)((long)register0x00000008 + -0x1b8);
        puVar9 = (undefined8 *)*puVar13;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x1b0),puVar9);
      *(long *)((long)register0x00000008 + -0x1a8) =
           *(long *)((long)register0x00000008 + -0x1a8) + 1;
    }
LAB_10a1df36c:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0xa0) break;
    puVar9 = *(undefined8 **)((long)register0x00000008 + -0x1b8);
    puVar8 = *(undefined8 **)((long)register0x00000008 + -0x1b0);
  } while( true );
  lVar14 = 0;
  unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x210);
  do {
    if (*(char *)((long)register0x00000008 + lVar14 + -0x81) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar14 + -0x98));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0xa0);
  puVar9 = *(undefined8 **)((long)register0x00000008 + -0x1b0);
  if (puVar9 != (undefined8 *)0x0) {
    puVar8 = unaff_x24;
    do {
      lVar14 = 8;
      if (*(byte *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x304) <= *(byte *)(puVar9 + 4))
      {
        lVar14 = 0;
        puVar8 = puVar9;
      }
      puVar9 = *(undefined8 **)((long)puVar9 + lVar14);
    } while (puVar9 != (undefined8 *)0x0);
    if ((puVar8 != unaff_x24) &&
       (*(byte *)(puVar8 + 4) <= *(byte *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x304))) {
      if (*(char *)((long)puVar8 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x120),puVar8[5],puVar8[6]);
      }
      else {
        uVar15 = puVar8[5];
        *(undefined8 *)((long)register0x00000008 + -0x118) = puVar8[6];
        *(undefined8 *)((long)register0x00000008 + -0x120) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0x110) = puVar8[7];
      }
      goto LAB_10a1df400;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x120),&UNK_10f644569);
LAB_10a1df400:
  __ZNSt3__19to_stringEi
            ((undefined1 *)((long)register0x00000008 + -0x1d0),
             *(undefined1 *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x305));
  unaff_x20 = *(ulong *)((long)register0x00000008 + -0x138);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x129)) {
    unaff_x20 = (ulong)*(byte *)((long)register0x00000008 + -0x129);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x2a8),unaff_x20 + 10,
                (undefined1 *)((long)register0x00000008 + -0x121));
  unaff_x21 = *(undefined1 **)((long)register0x00000008 + -0x2a8);
  if (-1 < *(char *)((long)register0x00000008 + -0x291)) {
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x2a8);
  }
  if (unaff_x20 != 0) {
    puVar2 = *(undefined1 **)((long)register0x00000008 + -0x140);
    if (-1 < *(char *)((long)register0x00000008 + -0x129)) {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x140);
    }
    _memmove(unaff_x21,puVar2,unaff_x20);
  }
  puVar9 = (undefined8 *)(unaff_x21 + unaff_x20);
  *puVar9 = 0x65646f6d20414120;
  *(undefined2 *)(puVar9 + 1) = 0x203a;
  *(undefined1 *)((long)puVar9 + 10) = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x118);
  puVar2 = *(undefined1 **)((long)register0x00000008 + -0x120);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x109)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x109);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x120);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x2a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar2,uVar3);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x280) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x288) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x290) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x290);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644586,0xe);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x260) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x268) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x270) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x1c8);
  puVar2 = *(undefined1 **)((long)register0x00000008 + -0x1d0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x1b9)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x1b9);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x1d0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x270);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar2,uVar3);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x240) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x248) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x250) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x250);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644595,0x14);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x220) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x228) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x230) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x168);
  puVar2 = *(undefined1 **)((long)register0x00000008 + -0x170);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x159)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x159);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x170);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x230);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar2,uVar3);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x200) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x208) = uVar16;
  *unaff_x22 = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x210);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f6445aa,0x10);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x198);
  puVar2 = *(undefined1 **)((long)register0x00000008 + -0x1a0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x189)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x189);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x1a0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x1f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar2,uVar3);
  uVar15 = *puVar9;
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0x2b8);
  puVar8[1] = puVar9[1];
  *puVar8 = uVar15;
  puVar8[2] = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (*(char *)((long)register0x00000008 + -0x1d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1f0));
  }
  if (*(char *)((long)register0x00000008 + -0x1f9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x210));
  }
  if (*(char *)((long)register0x00000008 + -0x219) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x230));
  }
  if (*(char *)((long)register0x00000008 + -0x239) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x250));
  }
  if (*(char *)((long)register0x00000008 + -0x259) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x270));
  }
  if (*(char *)((long)register0x00000008 + -0x279) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
  }
  if (*(char *)((long)register0x00000008 + -0x291) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2a8));
  }
  if (*(char *)((long)register0x00000008 + -0x1b9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1d0));
  }
  if (*(char *)((long)register0x00000008 + -0x109) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x120));
  }
  func_0x00010a1fdc6c(*(undefined8 *)((long)register0x00000008 + -0x1b0));
  if (*(char *)((long)register0x00000008 + -0x189) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a0));
  }
  func_0x00010a1fdc24(*(undefined8 *)((long)register0x00000008 + -0x180));
  if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0x150);
  func_0x00010a1fdbdc();
  if (*(char *)((long)register0x00000008 + -0x129) < '\0') {
    unaff_x19 = *(long *)((long)register0x00000008 + -0x140);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a1fdc6c(*(undefined8 *)((long)register0x00000008 + -0x1b0));
  if (*(char *)((long)register0x00000008 + -0x189) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a0));
  }
  func_0x00010a1fdc24(*(undefined8 *)((long)register0x00000008 + -0x180));
  if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
  }
  func_0x00010a1fdbdc(*(undefined8 *)((long)register0x00000008 + -0x150));
  if (*(char *)((long)register0x00000008 + -0x129) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x140));
  }
  unaff_x30 = FUN_10a1dfa54;
  param_2 = unaff_x19;
  __Unwind_Resume();
  param_2 = param_2 + -0x28;
  unaff_x26 = 0xa0;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2c0);
  param_1 = extraout_x8;
  goto code_r0x00010a1ded1c;
}



/* Entry: 10a1dfa54; end: 10a1dfa5b;  */

void FUN_10a1dfa54(undefined8 param_1,long param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  undefined8 *puVar12;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *puVar13;
  undefined1 *unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *unaff_x25;
  long lVar14;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  
FUN_10a1ded1c:
  *(byte **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x2b8) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(long *)((long)register0x00000008 + -0x2b0) = param_2 + -0x28;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0x140),param_2);
  *(undefined4 *)((long)register0x00000008 + -0x120) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x118),&UNK_10f6442b5);
  *(undefined4 *)((long)register0x00000008 + -0x100) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f6442ba);
  *(undefined4 *)((long)register0x00000008 + -0xe0) = 2;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd8),&UNK_10f6442c3);
  puVar13 = (undefined8 *)0x0;
  lVar14 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x150);
  *(undefined8 **)((long)register0x00000008 + -0x158) = puVar9;
  puVar8 = puVar9;
  do {
    puVar1 = (uint *)((long)register0x00000008 + lVar14 + -0x120);
    uVar4 = *puVar1;
    puVar10 = puVar9;
    puVar12 = puVar9;
    puVar11 = puVar9;
    if (puVar8 == puVar9) {
LAB_10a1dee6c:
      puVar8 = (undefined8 *)((long)register0x00000008 + -0x158);
      if (puVar13 != (undefined8 *)0x0) {
        puVar12 = puVar10 + 1;
        puVar8 = puVar10;
        puVar11 = puVar10;
      }
      if (puVar8[1] == 0) goto LAB_10a1dee88;
    }
    else {
      puVar8 = puVar9;
      puVar6 = puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar8[2];
          bVar7 = (undefined8 *)*puVar10 == puVar8;
          puVar8 = puVar10;
        } while (bVar7);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10a1dee6c;
      }
      else {
        do {
          puVar10 = puVar6;
          puVar6 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10a1dee6c;
        do {
          while (puVar11 = puVar13, uVar4 < *(uint *)(puVar11 + 4)) {
            puVar13 = (undefined8 *)*puVar11;
            puVar12 = puVar11;
            if ((undefined8 *)*puVar11 == (undefined8 *)0x0) goto LAB_10a1dee88;
          }
          if (uVar4 <= *(uint *)(puVar11 + 4)) goto LAB_10a1deef8;
          puVar13 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
        puVar12 = puVar11 + 1;
      }
LAB_10a1dee88:
      puVar8 = (undefined8 *)0x40;
      __Znwm();
      *(uint *)(puVar8 + 4) = uVar4;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar8 + 5,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar15 = *(undefined8 *)(puVar1 + 2);
        puVar8[6] = *(undefined8 *)(puVar1 + 4);
        puVar8[5] = uVar15;
        puVar8[7] = *(undefined8 *)(puVar1 + 6);
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = puVar11;
      *puVar12 = puVar8;
      if (**(long **)((long)register0x00000008 + -0x158) != 0) {
        *(long *)((long)register0x00000008 + -0x158) =
             **(long **)((long)register0x00000008 + -0x158);
        puVar8 = (undefined8 *)*puVar12;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x150),puVar8);
      *(long *)((long)register0x00000008 + -0x148) =
           *(long *)((long)register0x00000008 + -0x148) + 1;
    }
LAB_10a1deef8:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x60) break;
    puVar8 = *(undefined8 **)((long)register0x00000008 + -0x158);
    puVar13 = *(undefined8 **)((long)register0x00000008 + -0x150);
  } while( true );
  lVar14 = 0;
  do {
    if (*(char *)((long)register0x00000008 + lVar14 + -0xc1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar14 + -0xd8));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0x60);
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0x150);
  if (puVar8 != (undefined8 *)0x0) {
    puVar13 = puVar9;
    do {
      lVar14 = 8;
      if (*(uint *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x37c) <= *(uint *)(puVar8 + 4))
      {
        lVar14 = 0;
        puVar13 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + lVar14);
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar13 != puVar9) &&
       (*(uint *)(puVar13 + 4) <= *(uint *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x37c)))
    {
      if (*(char *)((long)puVar13 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x170),puVar13[5],puVar13[6])
        ;
      }
      else {
        uVar15 = puVar13[5];
        *(undefined8 *)((long)register0x00000008 + -0x168) = puVar13[6];
        *(undefined8 *)((long)register0x00000008 + -0x170) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0x160) = puVar13[7];
      }
      goto LAB_10a1def8c;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x170),&UNK_10f644524);
LAB_10a1def8c:
  *(undefined4 *)((long)register0x00000008 + -0x120) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x118),&UNK_10f6442d8);
  *(undefined4 *)((long)register0x00000008 + -0x100) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f6442e0);
  puVar13 = (undefined8 *)0x0;
  lVar14 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x180);
  *(undefined8 **)((long)register0x00000008 + -0x188) = puVar9;
  puVar8 = puVar9;
  do {
    puVar1 = (uint *)((long)register0x00000008 + lVar14 + -0x120);
    uVar4 = *puVar1;
    puVar10 = puVar9;
    puVar12 = puVar9;
    puVar11 = puVar9;
    if (puVar8 == puVar9) {
LAB_10a1df078:
      puVar8 = (undefined8 *)((long)register0x00000008 + -0x188);
      if (puVar13 != (undefined8 *)0x0) {
        puVar12 = puVar10 + 1;
        puVar8 = puVar10;
        puVar11 = puVar10;
      }
      if (puVar8[1] == 0) goto LAB_10a1df094;
    }
    else {
      puVar8 = puVar9;
      puVar6 = puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar8[2];
          bVar7 = (undefined8 *)*puVar10 == puVar8;
          puVar8 = puVar10;
        } while (bVar7);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10a1df078;
      }
      else {
        do {
          puVar10 = puVar6;
          puVar6 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10a1df078;
        do {
          while (puVar11 = puVar13, uVar4 < *(uint *)(puVar11 + 4)) {
            puVar13 = (undefined8 *)*puVar11;
            puVar12 = puVar11;
            if ((undefined8 *)*puVar11 == (undefined8 *)0x0) goto LAB_10a1df094;
          }
          if (uVar4 <= *(uint *)(puVar11 + 4)) goto LAB_10a1df104;
          puVar13 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
        puVar12 = puVar11 + 1;
      }
LAB_10a1df094:
      puVar8 = (undefined8 *)0x40;
      __Znwm();
      *(uint *)(puVar8 + 4) = uVar4;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar8 + 5,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar15 = *(undefined8 *)(puVar1 + 2);
        puVar8[6] = *(undefined8 *)(puVar1 + 4);
        puVar8[5] = uVar15;
        puVar8[7] = *(undefined8 *)(puVar1 + 6);
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = puVar11;
      *puVar12 = puVar8;
      if (**(long **)((long)register0x00000008 + -0x188) != 0) {
        *(long *)((long)register0x00000008 + -0x188) =
             **(long **)((long)register0x00000008 + -0x188);
        puVar8 = (undefined8 *)*puVar12;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x180),puVar8);
      *(long *)((long)register0x00000008 + -0x178) =
           *(long *)((long)register0x00000008 + -0x178) + 1;
    }
LAB_10a1df104:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x40) break;
    puVar8 = *(undefined8 **)((long)register0x00000008 + -0x188);
    puVar13 = *(undefined8 **)((long)register0x00000008 + -0x180);
  } while( true );
  lVar14 = 0;
  do {
    if (*(char *)((long)register0x00000008 + lVar14 + -0xe1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar14 + -0xf8));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0x40);
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0x180);
  if (puVar8 != (undefined8 *)0x0) {
    puVar13 = puVar9;
    do {
      lVar14 = 8;
      if (*(uint *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x378) <= *(uint *)(puVar8 + 4))
      {
        lVar14 = 0;
        puVar13 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + lVar14);
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar13 != puVar9) &&
       (*(uint *)(puVar13 + 4) <= *(uint *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x378)))
    {
      if (*(char *)((long)puVar13 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x1a0),puVar13[5],puVar13[6])
        ;
      }
      else {
        uVar15 = puVar13[5];
        *(undefined8 *)((long)register0x00000008 + -0x198) = puVar13[6];
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -400) = puVar13[7];
      }
      goto LAB_10a1df198;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x1a0),&UNK_10f64453f);
LAB_10a1df198:
  *(undefined1 *)((long)register0x00000008 + -0x120) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x118),"Disabled");
  *(undefined1 *)((long)register0x00000008 + -0x100) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f644556);
  *(undefined1 *)((long)register0x00000008 + -0xe0) = 2;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd8),&UNK_10f64455b);
  *(undefined1 *)((long)register0x00000008 + -0xc0) = 3;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xb8),&UNK_10f644560);
  unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x120);
  *(undefined1 *)((long)register0x00000008 + -0xa0) = 4;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x98),&UNK_10f644565);
  puVar8 = (undefined8 *)0x0;
  lVar14 = 0;
  unaff_x27 = (undefined8 *)((long)register0x00000008 + -0x1b8);
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
  unaff_x24 = (undefined8 *)((long)register0x00000008 + -0x1b0);
  *(undefined8 **)((long)register0x00000008 + -0x1b8) = unaff_x24;
  puVar9 = unaff_x24;
  do {
    unaff_x28 = unaff_x25 + lVar14;
    bVar5 = *unaff_x28;
    unaff_x23 = (ulong)bVar5;
    puVar11 = unaff_x24;
    puVar13 = unaff_x24;
    puVar12 = unaff_x24;
    if (puVar9 == unaff_x24) {
LAB_10a1df2e0:
      puVar9 = unaff_x27;
      if (puVar8 != (undefined8 *)0x0) {
        puVar13 = puVar11 + 1;
        puVar9 = puVar11;
        puVar12 = puVar11;
      }
      if (puVar9[1] == 0) goto LAB_10a1df2fc;
    }
    else {
      puVar9 = unaff_x24;
      puVar10 = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        do {
          puVar11 = (undefined8 *)puVar9[2];
          bVar7 = (undefined8 *)*puVar11 == puVar9;
          puVar9 = puVar11;
        } while (bVar7);
        if (*(byte *)(puVar11 + 4) < bVar5) goto LAB_10a1df2e0;
      }
      else {
        do {
          puVar11 = puVar10;
          puVar10 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
        if (*(byte *)(puVar11 + 4) < bVar5) goto LAB_10a1df2e0;
        do {
          while (puVar12 = puVar8, bVar5 < *(byte *)(puVar12 + 4)) {
            puVar8 = (undefined8 *)*puVar12;
            puVar13 = puVar12;
            if ((undefined8 *)*puVar12 == (undefined8 *)0x0) goto LAB_10a1df2fc;
          }
          if (bVar5 <= *(byte *)(puVar12 + 4)) goto LAB_10a1df36c;
          puVar8 = (undefined8 *)puVar12[1];
        } while ((undefined8 *)puVar12[1] != (undefined8 *)0x0);
        puVar13 = puVar12 + 1;
      }
LAB_10a1df2fc:
      puVar9 = (undefined8 *)0x40;
      __Znwm();
      *(byte *)(puVar9 + 4) = bVar5;
      if ((char)unaff_x28[0x1f] < '\0') {
        func_0x000107c3192c(puVar9 + 5,*(undefined8 *)(unaff_x28 + 8),
                            *(undefined8 *)(unaff_x28 + 0x10));
      }
      else {
        uVar15 = *(undefined8 *)(unaff_x28 + 8);
        puVar9[6] = *(undefined8 *)(unaff_x28 + 0x10);
        puVar9[5] = uVar15;
        puVar9[7] = *(undefined8 *)(unaff_x28 + 0x18);
      }
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = puVar12;
      *puVar13 = puVar9;
      if (**(long **)((long)register0x00000008 + -0x1b8) != 0) {
        *(long *)((long)register0x00000008 + -0x1b8) =
             **(long **)((long)register0x00000008 + -0x1b8);
        puVar9 = (undefined8 *)*puVar13;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x1b0),puVar9);
      *(long *)((long)register0x00000008 + -0x1a8) =
           *(long *)((long)register0x00000008 + -0x1a8) + 1;
    }
LAB_10a1df36c:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0xa0) break;
    puVar9 = *(undefined8 **)((long)register0x00000008 + -0x1b8);
    puVar8 = *(undefined8 **)((long)register0x00000008 + -0x1b0);
  } while( true );
  lVar14 = 0;
  unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x210);
  do {
    if (*(char *)((long)register0x00000008 + lVar14 + -0x81) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar14 + -0x98));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0xa0);
  puVar9 = *(undefined8 **)((long)register0x00000008 + -0x1b0);
  if (puVar9 != (undefined8 *)0x0) {
    puVar8 = unaff_x24;
    do {
      lVar14 = 8;
      if (*(byte *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x304) <= *(byte *)(puVar9 + 4))
      {
        lVar14 = 0;
        puVar8 = puVar9;
      }
      puVar9 = *(undefined8 **)((long)puVar9 + lVar14);
    } while (puVar9 != (undefined8 *)0x0);
    if ((puVar8 != unaff_x24) &&
       (*(byte *)(puVar8 + 4) <= *(byte *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x304))) {
      if (*(char *)((long)puVar8 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x120),puVar8[5],puVar8[6]);
      }
      else {
        uVar15 = puVar8[5];
        *(undefined8 *)((long)register0x00000008 + -0x118) = puVar8[6];
        *(undefined8 *)((long)register0x00000008 + -0x120) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0x110) = puVar8[7];
      }
      goto LAB_10a1df400;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x120),&UNK_10f644569);
LAB_10a1df400:
  __ZNSt3__19to_stringEi
            ((undefined1 *)((long)register0x00000008 + -0x1d0),
             *(undefined1 *)(*(long *)((long)register0x00000008 + -0x2b0) + 0x305));
  unaff_x20 = *(ulong *)((long)register0x00000008 + -0x138);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x129)) {
    unaff_x20 = (ulong)*(byte *)((long)register0x00000008 + -0x129);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x2a8),unaff_x20 + 10,
                (undefined1 *)((long)register0x00000008 + -0x121));
  unaff_x21 = *(undefined1 **)((long)register0x00000008 + -0x2a8);
  if (-1 < *(char *)((long)register0x00000008 + -0x291)) {
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x2a8);
  }
  if (unaff_x20 != 0) {
    puVar2 = *(undefined1 **)((long)register0x00000008 + -0x140);
    if (-1 < *(char *)((long)register0x00000008 + -0x129)) {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x140);
    }
    _memmove(unaff_x21,puVar2,unaff_x20);
  }
  puVar9 = (undefined8 *)(unaff_x21 + unaff_x20);
  *puVar9 = 0x65646f6d20414120;
  *(undefined2 *)(puVar9 + 1) = 0x203a;
  *(undefined1 *)((long)puVar9 + 10) = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x118);
  puVar2 = *(undefined1 **)((long)register0x00000008 + -0x120);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x109)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x109);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x120);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x2a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar2,uVar3);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x280) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x288) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x290) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x290);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644586,0xe);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x260) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x268) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x270) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x1c8);
  puVar2 = *(undefined1 **)((long)register0x00000008 + -0x1d0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x1b9)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x1b9);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x1d0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x270);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar2,uVar3);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x240) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x248) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x250) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x250);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644595,0x14);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x220) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x228) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x230) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x168);
  puVar2 = *(undefined1 **)((long)register0x00000008 + -0x170);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x159)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x159);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x170);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x230);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar2,uVar3);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x200) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x208) = uVar16;
  *unaff_x22 = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x210);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f6445aa,0x10);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x198);
  puVar2 = *(undefined1 **)((long)register0x00000008 + -0x1a0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x189)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x189);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x1a0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x1f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar2,uVar3);
  uVar15 = *puVar9;
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0x2b8);
  puVar8[1] = puVar9[1];
  *puVar8 = uVar15;
  puVar8[2] = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (*(char *)((long)register0x00000008 + -0x1d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1f0));
  }
  if (*(char *)((long)register0x00000008 + -0x1f9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x210));
  }
  if (*(char *)((long)register0x00000008 + -0x219) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x230));
  }
  if (*(char *)((long)register0x00000008 + -0x239) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x250));
  }
  if (*(char *)((long)register0x00000008 + -0x259) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x270));
  }
  if (*(char *)((long)register0x00000008 + -0x279) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
  }
  if (*(char *)((long)register0x00000008 + -0x291) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2a8));
  }
  if (*(char *)((long)register0x00000008 + -0x1b9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1d0));
  }
  if (*(char *)((long)register0x00000008 + -0x109) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x120));
  }
  func_0x00010a1fdc6c(*(undefined8 *)((long)register0x00000008 + -0x1b0));
  if (*(char *)((long)register0x00000008 + -0x189) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a0));
  }
  func_0x00010a1fdc24(*(undefined8 *)((long)register0x00000008 + -0x180));
  if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0x150);
  func_0x00010a1fdbdc();
  if (*(char *)((long)register0x00000008 + -0x129) < '\0') {
    unaff_x19 = *(long *)((long)register0x00000008 + -0x140);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a1fdc6c(*(undefined8 *)((long)register0x00000008 + -0x1b0));
  if (*(char *)((long)register0x00000008 + -0x189) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a0));
  }
  func_0x00010a1fdc24(*(undefined8 *)((long)register0x00000008 + -0x180));
  if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
  }
  func_0x00010a1fdbdc(*(undefined8 *)((long)register0x00000008 + -0x150));
  if (*(char *)((long)register0x00000008 + -0x129) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x140));
  }
  unaff_x30 = FUN_10a1dfa54;
  param_2 = unaff_x19;
  __Unwind_Resume();
  unaff_x26 = 0xa0;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2c0);
  param_1 = extraout_x8;
  goto FUN_10a1ded1c;
}



/* Entry: 10a1dfa5c; end: 10a1dfab7;  */

undefined8 * FUN_10a1dfa5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baea20;
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  FUN_10a1ce160(param_1 + 0x13);
  func_0x00010a1fdcb4(param_1 + 0xe);
  func_0x00010a1fdcb4(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10a1dfab8; end: 10a1dfabb;  */

undefined8 * FUN_10a1dfab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baea20;
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  FUN_10a1ce160(param_1 + 0x13);
  func_0x00010a1fdcb4(param_1 + 0xe);
  func_0x00010a1fdcb4(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10a1dfabc; end: 10a1dfacf;  */

void FUN_10a1dfabc(void)

{
  FUN_10a1dfa5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1dfad0; end: 10a1dfb2b;  */

void FUN_10a1dfad0(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  FUN_10a1fdcfc(param_1 + 0x70,&uStack_28,&uStack_28);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  return;
}



/* Entry: 10a1dfb2c; end: 10a1dfb8f;  */

void FUN_10a1dfb2c(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  FUN_10a1fe0ec(param_1 + 0x48,&uStack_28);
  FUN_10a1fe0ec(param_1 + 0x70,&uStack_28);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  return;
}



/* Entry: 10a1dfb90; end: 10a1dfc0b;  */

bool FUN_10a1dfb90(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  lVar2 = param_1 + 0x48;
  func_0x00010a1f3d44(lVar2,&uStack_28);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0x70;
    func_0x00010a1f3d44(lVar2,&uStack_28);
    bVar1 = lVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  return bVar1;
}



/* Entry: 10a1dfc0c; end: 10a1dfc77;  */

void FUN_10a1dfc0c(long param_1)

{
  long *plVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar1 = (long *)(param_1 + 0x80);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_10a1fdcfc(param_1 + 0x48,plVar1 + 2,plVar1 + 2);
  }
  FUN_10a1fe360(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}



/* Entry: 10a1dfc78; end: 10a1dfeb7;  */

int FUN_10a1dfc78(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  func_0x00010a1fe3c4(param_1 + 0x98);
  FUN_10a1cdd10(param_1 + 0x98,
                (long)((float)*(ulong *)(param_1 + 0x60) / *(float *)(param_1 + 0xb8)));
  plVar7 = (long *)(param_1 + 0xc0);
  *(long *)(param_1 + 200) = *plVar7;
  plVar8 = *(long **)(param_1 + 0x58);
  do {
    if (plVar8 == (long *)0x0) {
      plVar8 = *(long **)(param_1 + 0xa8);
      if (plVar8 == (long *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        do {
          iVar5 = (int)plVar8[3] + iVar5;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      func_0x00010a1fe3c4(param_1 + 0x98);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
      __ZNSt3__15mutex6unlockEv(param_1 + 8);
      return iVar5;
    }
    (**(code **)(*(long *)plVar8[2] + 0x60))(&plStack_80);
    if (*plVar7 != 0) {
      *(long *)(param_1 + 200) = *plVar7;
      __ZdlPv();
      *plVar7 = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    plVar1 = plStack_78;
    *(long **)(param_1 + 0xc0) = plStack_80;
    *(undefined8 *)(param_1 + 0xd0) = uStack_70;
    *(long **)(param_1 + 200) = plStack_78;
    for (plVar6 = plStack_80; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      plVar2 = (long *)*plVar6;
      if (plVar2 != (long *)0x0) {
        plVar3 = plVar2;
        if (param_2 != 0) {
          (**(code **)(*plVar2 + 0x18))();
          plVar3 = (long *)*plVar6;
          if ((int)plVar2 != 0) {
            (**(code **)(*plVar3 + 0x18))();
            if ((int)plVar3 != param_2) goto LAB_10a1dfdac;
            plVar3 = (long *)*plVar6;
          }
        }
        (**(code **)(*plVar3 + 0x10))();
        lVar4 = param_1 + 0x98;
        plStack_80 = plVar6;
        FUN_10a1cdf1c(lVar4,plVar6,&UNK_10dd5b8f9,&plStack_80,&uStack_61);
        *(int *)(lVar4 + 0x18) = (int)plVar3;
      }
LAB_10a1dfdac:
    }
    plVar8 = (long *)*plVar8;
  } while( true );
}



/* Entry: 10a1dfeb8; end: 10a1dff17;  */

undefined1  [16] FUN_10a1dfeb8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f6458d3;
  return auVar1;
}



/* Entry: 10a1dff18; end: 10a1dff7b;  */

void FUN_10a1dff18(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f643dac;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x161;
  uStack_18 = 0xffffffff;
  FUN_10a1dff7c(param_1,&uStack_58);
  FUN_10a1fe524();
  return;
}



/* Entry: 10a1dff7c; end: 10a1e0053;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e0014) */

undefined1  [16] FUN_10a1dff7c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6458d3,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a1fe428(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1e0054; end: 10a1e0073;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e010c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0110) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0118) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0120) */
/* WARNING: Removing unreachable block (ram,0x00010a1e012c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0134) */
/* WARNING: Removing unreachable block (ram,0x00010a1e013c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0140) */

void FUN_10a1e0054(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  if (*(long **)(param_2 + 0x28) == (long *)0x0) {
    puVar1 = (undefined8 *)0xf8;
    __Znwm();
    *(undefined2 *)(puVar1 + 3) = 4;
    puVar1[2] = 0;
    puVar1[1] = 0x200000006;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = puVar1 + 3;
    puVar1[0x12] = 0;
    *puVar1 = &PTR_DAT_110bb2e48;
    *(undefined1 *)(puVar1 + 0x13) = 0;
    *(undefined1 *)(puVar1 + 0x1e) = 0;
    puStack_38 = puVar1;
    FUN_10a1fe64c();
    *param_1 = puVar1;
    func_0x0001092b4274(&puStack_38,puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a1e0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x28) + 0x48))();
  return;
}



/* Entry: 10a1e0074; end: 10a1e0163;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e010c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0110) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0118) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0120) */
/* WARNING: Removing unreachable block (ram,0x00010a1e012c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0134) */
/* WARNING: Removing unreachable block (ram,0x00010a1e013c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0140) */

void FUN_10a1e0074(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110bb2e48;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  puStack_38 = puVar1;
  FUN_10a1fe64c();
  *param_1 = puVar1;
  func_0x0001092b4274(&puStack_38,puVar1);
  return;
}



/* Entry: 10a1e0164; end: 10a1e0183;  */

undefined1  [16] FUN_10a1e0164(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x25;
  auVar1._0_8_ = &UNK_10f6458e6;
  return auVar1;
}



/* Entry: 10a1e0184; end: 10a1e01eb;  */

bool FUN_10a1e0184(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf6458e6;
    _memcmp(&UNK_10f6458e6,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a1e01ec; end: 10a1e01f3;  */

bool FUN_10a1e01ec(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf6458e6;
    _memcmp(&UNK_10f6458e6,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a1e01f4; end: 10a1e02db;  */

void FUN_10a1e01f4(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f643dac;
  uStack_68 = 0;
  puStack_60 = &UNK_10f643dac;
  uStack_58 = 0;
  uStack_50 = 0x1240000012d;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a1e02dc(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6446b1;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a1fe8e8();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6446bc;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a1fea70(param_1,&puStack_88,0);
  FUN_10a1feb98(param_1);
  return;
}



/* Entry: 10a1e02dc; end: 10a1e03b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e0374) */

undefined1  [16] FUN_10a1e02dc(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6458e6,0x25);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a1fe7ec(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1e03b4; end: 10a1e04e3;  */

undefined8 * FUN_10a1e03b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 uStack_22;
  
  param_1[0x5d] = &PTR_FUN_110c383b8;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110baed68,param_2);
  uStack_22 = 0x101;
  FUN_10a00db68(puVar1 + 0x51,param_2,&uStack_22);
  FUN_10a03c0d0(param_1 + 0x56);
  *param_1 = &PTR_FUN_110baeac0;
  param_1[2] = &PTR_FUN_110baec00;
  param_1[5] = &PTR_FUN_110baec30;
  param_1[0x5d] = &PTR_FUN_110baed28;
  param_1[0x15] = &PTR_FUN_110baec88;
  param_1[0x51] = &PTR_FUN_110baeca8;
  param_1[0x56] = &PTR_FUN_110baecd0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  FUN_10a5ae998(param_1[0x57],&PTR_DAT_110b9f988,param_2,param_1 + 0x56);
  return param_1;
}



/* Entry: 10a1e04e4; end: 10a1e061f;  */

void FUN_10a1e04e4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar5 = param_1;
  do {
    if (plVar5 == (long *)0x0) {
LAB_10a1e0528:
      plStack_30 = *(long **)(param_1[0x12] + 0xcb0);
      plStack_28 = *(long **)(param_1[0x12] + 0xcb8);
      if (plStack_28 != (long *)0x0) {
        plVar5 = plStack_28 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (plStack_30 != (long *)0x0) {
        (**(code **)(*plStack_30 + 0x10))(&lStack_40);
        if (lStack_40 != 0) {
          *(int *)((long)param_1 + 0x2e4) = *(int *)((long)param_1 + 0x2e4) + 1;
          FUN_10a026ab4(param_1 + 0x5a,&lStack_40);
          *(undefined4 *)((long)param_1 + 0x74) = 2;
        }
        if (plStack_38 != (long *)0x0) {
          plVar5 = plStack_38 + 1;
          do {
            lVar4 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
          }
        }
      }
      plVar5 = plStack_28;
      if (plStack_28 != (long *)0x0) {
        plVar3 = plStack_28 + 1;
        do {
          lVar4 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return;
    }
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x80))();
    if ((int)plVar3 != 2) {
      if ((int)plVar3 == 0) {
        return;
      }
      goto LAB_10a1e0528;
    }
    plVar5 = (long *)plVar5[0x13];
  } while( true );
}



/* Entry: 10a1e0620; end: 10a1e062f;  */

void FUN_10a1e0620(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar4 = (long *)(param_1 + -0x288);
  do {
    if (plVar4 == (long *)0x0) {
LAB_10a1e0528:
      plStack_30 = *(long **)(*(long *)(param_1 + -0x1f8) + 0xcb0);
      plStack_28 = *(long **)(*(long *)(param_1 + -0x1f8) + 0xcb8);
      if (plStack_28 != (long *)0x0) {
        plVar4 = plStack_28 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (plStack_30 != (long *)0x0) {
        (**(code **)(*plStack_30 + 0x10))(&lStack_40);
        if (lStack_40 != 0) {
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
          FUN_10a026ab4(param_1 + 0x48,&lStack_40);
          *(undefined4 *)(param_1 + -0x214) = 2;
        }
        if (plStack_38 != (long *)0x0) {
          plVar4 = plStack_38 + 1;
          do {
            lVar5 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
          }
        }
      }
      plVar4 = plStack_28;
      if (plStack_28 != (long *)0x0) {
        plVar3 = plStack_28 + 1;
        do {
          lVar5 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      return;
    }
    plVar3 = plVar4;
    (**(code **)(*plVar4 + 0x80))();
    if ((int)plVar3 != 2) {
      if ((int)plVar3 == 0) {
        return;
      }
      goto LAB_10a1e0528;
    }
    plVar4 = (long *)plVar4[0x13];
  } while( true );
}



/* Entry: 10a1e0630; end: 10a1e06a7;  */

void FUN_10a1e0630(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  if (param_2 == 2) {
    for (; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[0x13]) {
      plVar2 = plVar1;
      (**(code **)(*plVar1 + 0x80))();
      if ((int)plVar2 != 2) {
        if (((int)plVar2 == 0) && (0x10d < *(int *)(*(long *)(param_1[0x12] + 0xa20) + 0x18))) {
          *(undefined4 *)((long)param_1 + 0x74) = 1;
          FUN_10a3de9a4();
        }
        break;
      }
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}



/* Entry: 10a1e06a8; end: 10a1e06af;  */

void FUN_10a1e06a8(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -0x10);
  if (param_2 == 2) {
    for (; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[0x13]) {
      plVar1 = plVar2;
      (**(code **)(*plVar2 + 0x80))();
      if ((int)plVar1 != 2) {
        if (((int)plVar1 == 0) &&
           (0x10d < *(int *)(*(long *)(*(long *)(param_1 + 0x80) + 0xa20) + 0x18))) {
          *(undefined4 *)(param_1 + 100) = 1;
          FUN_10a3de9a4();
        }
        break;
      }
    }
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  return;
}



/* Entry: 10a1e06b0; end: 10a1e073b;  */

void FUN_10a1e06b0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = param_1;
  if (0x10d < *(int *)(*(long *)(param_1[0x12] + 0xa20) + 0x18)) {
    do {
      plVar2 = plVar3;
      (**(code **)(*plVar3 + 0x80))();
      if ((int)plVar2 != 2) {
        return;
      }
      plVar2 = plVar3 + 0x13;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    lVar1 = param_1[0x5c];
    *(int *)(param_1 + 0x5c) = (int)lVar1 + 1;
    if ((1 < (int)lVar1) && (1 < *(int *)((long)param_1 + 0x2e4))) {
                    /* WARNING: Could not recover jumptable at 0x00010a1e072c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x50))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10a1e073c; end: 10a1e0743;  */

void FUN_10a1e073c(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + -0x2b0);
  plVar4 = plVar3;
  if (0x10d < *(int *)(*(long *)(*(long *)(param_1 + -0x220) + 0xa20) + 0x18)) {
    do {
      plVar2 = plVar4;
      (**(code **)(*plVar4 + 0x80))();
      if ((int)plVar2 != 2) {
        return;
      }
      plVar2 = plVar4 + 0x13;
      plVar4 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    iVar1 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar1 + 1;
    if ((1 < iVar1) && (1 < *(int *)(param_1 + 0x34))) {
                    /* WARNING: Could not recover jumptable at 0x00010a1e072c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x50))(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 10a1e0744; end: 10a1e0777;  */

void FUN_10a1e0744(long param_1)

{
  FUN_10a3de9f4(*(undefined8 *)(param_1 + 0x90));
  FUN_10a18cbd8(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  return;
}



/* Entry: 10a1e0778; end: 10a1e07bb;  */

void FUN_10a1e0778(undefined8 param_1,long *param_2)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f6458e6;
  uStack_18 = 0x25;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bb1c58,&puStack_20);
  return;
}



/* Entry: 10a1e07bc; end: 10a1e0883;  */

void FUN_10a1e07bc(void)

{
  return;
}



/* Entry: 10a1e0884; end: 10a1e092b;  */

void FUN_10a1e0884(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f643dac;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a1e092c(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f6446c8;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_3c = 0x13c00000124;
  puStack_30 = &UNK_10f643dac;
  uStack_28 = 0;
  FUN_10a1feda8();
  FUN_10a1ff010(param_1);
  return;
}



/* Entry: 10a1e092c; end: 10a1e0a03;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e09c4) */

undefined1  [16] FUN_10a1e092c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f64590c,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a1fecac(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1e0a04; end: 10a1e0a57;  */

long * FUN_10a1e0a04(long param_1)

{
  undefined **ppuVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar1 = &puStack_20;
  if (*(long *)(param_1 + 0x290) == 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    puStack_20 = &UNK_10f653c20;
    uStack_18 = 0x21;
    if (lVar4 == 0) {
      FUN_10a0edfc4();
      plVar5 = *(long **)((long)ppuVar1 + 0x290);
      if (plVar5 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x70);
LAB_10a1e0a68:
                    /* WARNING: Could not recover jumptable at 0x00010a1e0a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar5);
        return plVar5;
      }
      lVar4 = *(long *)((long)ppuVar1 + 0x90);
      if (lVar4 == 0) {
        plVar5 = *(long **)((long)ppuVar1 + 0x98);
        if (plVar5 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0xd0);
          goto LAB_10a1e0a68;
        }
        uVar3 = (uint)*(byte *)((long)ppuVar1 + 0x200);
      }
      else {
        uVar3 = 1;
        if (*(char *)(lVar4 + 0x1150) == '\x01') {
          uVar2 = 1;
          if (*(char *)(lVar4 + 0xff8) == '\x01') {
            uVar2 = 2;
          }
          uVar3 = 4;
          if (*(char *)(lVar4 + 0xff8) != '\x02') {
            uVar3 = uVar2;
          }
        }
      }
      return (long *)(ulong)uVar3;
    }
    plVar5 = (long *)(lVar4 + 0xb8);
  }
  else {
    plVar5 = (long *)(param_1 + 0x290);
  }
  return plVar5;
}



/* Entry: 10a1e0a58; end: 10a1e0ae7;  */

long * FUN_10a1e0a58(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x290);
  if (plVar3 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x70);
LAB_10a1e0a68:
                    /* WARNING: Could not recover jumptable at 0x00010a1e0a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3);
    return plVar3;
  }
  lVar4 = *(long *)(param_1 + 0x90);
  if (lVar4 == 0) {
    plVar3 = *(long **)(param_1 + 0x98);
    if (plVar3 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0xd0);
      goto LAB_10a1e0a68;
    }
    uVar2 = (uint)*(byte *)(param_1 + 0x200);
  }
  else {
    uVar2 = 1;
    if (*(char *)(lVar4 + 0x1150) == '\x01') {
      uVar1 = 1;
      if (*(char *)(lVar4 + 0xff8) == '\x01') {
        uVar1 = 2;
      }
      uVar2 = 4;
      if (*(char *)(lVar4 + 0xff8) != '\x02') {
        uVar2 = uVar1;
      }
    }
  }
  return (long *)(ulong)uVar2;
}



/* Entry: 10a1e0ae8; end: 10a1e0c2f;  */

void FUN_10a1e0ae8(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined1 auStack_68 [40];
  
  (**(code **)(*param_2 + 0x60))(auStack_78,param_2,(char)param_1[0x54]);
  plVar6 = param_1 + 0x52;
  FUN_10a026ab4(plVar6,auStack_78);
  plVar3 = (long *)param_1[0x52];
  (**(code **)(*plVar3 + 0x28))();
  plVar4 = (long *)*plVar6;
  (**(code **)(*plVar4 + 0x30))();
  plVar5 = (long *)*plVar6;
  (**(code **)(*plVar5 + 0x20))();
  plVar6 = (long *)*plVar6;
  (**(code **)(*plVar6 + 0x50))();
  plVar7 = (long *)param_1[0x52];
  (**(code **)(*plVar7 + 0x70))();
  FUN_10a1da3a4(param_1,plVar3,plVar4,0,plVar5,plVar6,plVar7,0);
  (**(code **)(*param_1 + 0x98))(param_1,auStack_68);
  if (plStack_70 != (long *)0x0) {
    plVar6 = plStack_70 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  return;
}



/* Entry: 10a1e0c30; end: 10a1e0c3f;  */

void FUN_10a1e0c30(long param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined1 auStack_68 [40];
  
  plVar9 = (long *)(param_1 + -0x288);
  (**(code **)(*param_2 + 0x60))(auStack_78,param_2,*(undefined1 *)(param_1 + 0x18));
  puVar1 = (undefined8 *)(param_1 + 8);
  FUN_10a026ab4(puVar1,auStack_78);
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0x28))();
  plVar5 = (long *)*puVar1;
  (**(code **)(*plVar5 + 0x30))();
  plVar6 = (long *)*puVar1;
  (**(code **)(*plVar6 + 0x20))();
  plVar7 = (long *)*puVar1;
  (**(code **)(*plVar7 + 0x50))();
  plVar8 = *(long **)(param_1 + 8);
  (**(code **)(*plVar8 + 0x70))();
  FUN_10a1da3a4(plVar9,plVar4,plVar5,0,plVar6,plVar7,plVar8,0);
  (**(code **)(*plVar9 + 0x98))(plVar9,auStack_68);
  if (plStack_70 != (long *)0x0) {
    plVar4 = plStack_70 + 1;
    do {
      lVar10 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  return;
}



/* Entry: 10a1e0c40; end: 10a1e0d0b;  */

void FUN_10a1e0c40(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110baed90,0);
  *(char *)(param_1 + 0x2a0) = (char)param_2;
  return;
}



/* Entry: 10a1e0d0c; end: 10a1e0d2b;  */

undefined1  [16] FUN_10a1e0d0c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x24;
  auVar1._0_8_ = &UNK_10f64592b;
  return auVar1;
}



/* Entry: 10a1e0d2c; end: 10a1e0d93;  */

bool FUN_10a1e0d2c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf64592b;
    _memcmp(&UNK_10f64592b,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a1e0d94; end: 10a1e0d9b;  */

bool FUN_10a1e0d94(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf64592b;
    _memcmp(&UNK_10f64592b,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a1e0d9c; end: 10a1e145f;  */

void FUN_10a1e0d9c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64592b,0x24);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1218;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb1218;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f6446d5,FUN_10a1ff124,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f6446e7,FUN_10a1ff2ac,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f6446f9,FUN_10a1ff454,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f64470c,FUN_10a1ff50c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f644723,FUN_10a1ff5c4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f644738,FUN_10a1ff690,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f64474c,FUN_10a1ff78c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f644779,FUN_10a1ff844,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f644798,FUN_10a1ff93c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f6447b5,FUN_10a1ff9f4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f6447ce,FUN_10a1ffaac,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f6447e0,FUN_10a1ffb78,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1e1440;
    FUN_10a054dac(param_1,&UNK_10f6447ee,FUN_10a1ffc4c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2e5c64,FUN_10a1ffd18,FUN_10a1ffe34);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6447fa,FUN_10a2003a8,FUN_10a20048c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644807,FUN_10a200588,FUN_10a200640);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a200700,FUN_10a2007b8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bb22a0,FUN_10a200e2c);
    FUN_10a0605c4(param_1,&UNK_10f644832,FUN_10a201c90,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64592b,0x24);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a1e1440:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1e1444);
  (*pcVar6)();
}



/* Entry: 10a1e1460; end: 10a1e1587;  */

undefined8 * FUN_10a1e1460(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1e1588; end: 10a1e1887;  */

undefined8 * FUN_10a1e1588(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined2 auStack_3a [5];
  
  param_1[0x97] = &PTR_FUN_110c383b8;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110baf418,param_2);
  auStack_3a[0] = 1;
  FUN_10a00db68(puVar1 + 0x51,param_2,auStack_3a);
  FUN_10a0040d0(param_1 + 0x56,&PTR_PTR_110baf438);
  *param_1 = &PTR_FUN_110baf138;
  param_1[2] = &PTR_FUN_110baf288;
  param_1[5] = &PTR_FUN_110baf2b8;
  param_1[0x97] = &PTR_DAT_110baf3d8;
  param_1[0x15] = &PTR_FUN_110baf310;
  param_1[0x51] = &PTR_FUN_110baf330;
  param_1[0x56] = &PTR_FUN_110baf360;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)((long)param_1 + 0x354) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)((long)param_1 + 0x35c) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined2 *)((long)param_1 + 0x364) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)((long)param_1 + 0x36c) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)((long)param_1 + 0x37c) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)((long)param_1 + 0x38c) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined2 *)((long)param_1 + 0x394) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined2 *)((long)param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  *(undefined4 *)((long)param_1 + 900) = 0;
  *(undefined2 *)(param_1 + 0x71) = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bb22c8;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110bb2318;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a202098;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x95] = puVar1 + 3;
  param_1[0x96] = puVar1;
  if ((*(byte *)(param_1 + 0x9a) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x9a) = 1;
    param_1[0x99] = param_2;
    if (param_2 != 0) {
      param_1[0x98] = *(undefined8 *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
  }
  FUN_10a5ae998(param_1[0x59],&PTR_DAT_110b99f08,param_2,param_1 + 0x56);
  uVar2 = 0x38;
  __Znwm();
  FUN_10a97fa68();
  lVar3 = param_1[0x60];
  param_1[0x60] = uVar2;
  if (lVar3 != 0) {
    func_0x00010a202180();
  }
  func_0x00010a1e14dc(param_1);
  return param_1;
}



/* Entry: 10a1e1888; end: 10a1e1b17;  */

void FUN_10a1e1888(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long lStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar4);
  uStack_130 = 0x10a202460;
  ppuStack_128 = &PTR_DAT_110bb2378;
  uStack_f0 = 0x10a202460;
  ppuStack_e8 = &PTR_DAT_110bb2378;
  uStack_a0 = CONCAT17(5,(undefined7)uStack_a0);
  uStack_b0 = CONCAT26(uStack_b0._6_2_,0x6c65646f6d);
  pcStack_98 = FUN_10a202224;
  ppuStack_90 = &PTR_FUN_110bb2360;
  puVar5 = (undefined8 *)0x58;
  lStack_120 = param_1;
  lStack_e0 = param_1;
  __Znwm();
  *puVar5 = 0x10a202460;
  puVar5[1] = &PTR_DAT_110bb2378;
  puVar5[2] = param_1;
  puVar5[9] = uStack_a8;
  puVar5[8] = uStack_b0;
  puVar5[10] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_88 = puVar5;
  func_0x000107c2b054(auStack_148,&UNK_10f643dac);
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110bb1c98,&pcStack_98,0,auStack_148);
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  (**(code **)(*param_2 + 0xa0))(&uStack_f0,param_2,&PTR_DAT_110baf458);
  puVar5 = (undefined8 *)(param_1 + 0x2e8);
  if (*(char *)(param_1 + 0x2ff) < '\0') {
    __ZdlPv(*puVar5);
  }
  *(undefined ***)(param_1 + 0x2f0) = ppuStack_e8;
  *puVar5 = uStack_f0;
  *(long *)(param_1 + 0x2f8) = lStack_e0;
  FUN_10a97edd4(param_1 + 0x338,param_2);
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110baf478,0);
  *(char *)(param_1 + 0x318) = (char)plVar4;
  ppuVar7 = &PTR_DAT_110bb3700;
  plVar4 = param_2;
  FUN_10a20248c(param_2,&PTR_DAT_110bb3700,param_1 + 800);
  *(undefined1 *)(param_1 + 0x330) = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  (*(code *)*ppuStack_128)(param_1 + 0x2f0);
  plVar6 = plVar4;
  __Unwind_Resume();
  pcStack_158 = FUN_10a1e1b18;
  puStack_190 = &UNK_10f64592b;
  uStack_188 = 0x24;
  puStack_180 = &uStack_f0;
  puStack_178 = puVar5;
  plStack_170 = param_2;
  plStack_168 = plVar4;
  puStack_160 = &stack0xfffffffffffffff0;
  (**(code **)(*ppuVar7 + 0x30))(ppuVar7,&PTR_DAT_110bb1c58,&puStack_190);
  lStack_1a0 = plVar6[0x5b];
  plStack_198 = (long *)plVar6[0x5c];
  puStack_190 = &UNK_10f645950;
  uStack_188 = 0x17;
  if (plStack_198 != (long *)0x0) {
    plVar4 = plStack_198 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*ppuVar7 + 0x108))(ppuVar7,&PTR_DAT_110bb1c98,&lStack_1a0,&puStack_190);
  plVar4 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar1 = plStack_198 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  FUN_10a00d760(ppuVar7,&PTR_DAT_110baf458,plVar6 + 0x5d);
  func_0x00010a97f418(plVar6 + 0x67,ppuVar7);
  (**(code **)(*ppuVar7 + 0x70))(ppuVar7,&PTR_DAT_110baf478,(char)plVar6[99]);
  FUN_10a202aac(ppuVar7,&PTR_DAT_110bb3700,plVar6 + 100,&UNK_10f645f59,0x1a);
  return;
}



/* Entry: 10a1e1b18; end: 10a1e1c6f;  */

void FUN_10a1e1b18(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &UNK_10f64592b;
  uStack_38 = 0x24;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bb1c58,&puStack_40);
  uStack_50 = *(undefined8 *)(param_1 + 0x2d8);
  plStack_48 = *(long **)(param_1 + 0x2e0);
  puStack_40 = &UNK_10f645950;
  uStack_38 = 0x17;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bb1c98,&uStack_50,&puStack_40);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10a00d760(param_2,&PTR_DAT_110baf458,param_1 + 0x2e8);
  func_0x00010a97f418(param_1 + 0x338,param_2);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110baf478,*(undefined1 *)(param_1 + 0x318));
  FUN_10a202aac(param_2,&PTR_DAT_110bb3700,param_1 + 800,&UNK_10f645f59,0x1a);
  return;
}



/* Entry: 10a1e1c70; end: 10a1e1d7b;  */

void FUN_10a1e1c70(long param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 uStack_39;
  long *plStack_38;
  
  FUN_10a1e26ec();
  if (*(char *)(param_1 + 0x480) != '\x01') {
    return;
  }
  if ((*(long *)(*(long *)(param_1 + 0x4a8) + 0x30) != 0) &&
     ((*(char *)(param_1 + 0x3a7) != '\x01' || ((*(byte *)(param_1 + 0x3a6) & 1) == 0)))) {
    *(undefined2 *)(param_1 + 0x3a6) = 0x101;
    *(undefined1 *)(param_1 + 0x330) = 1;
  }
  if (*(char *)(param_1 + 0x330) != '\x01') goto LAB_10a1e1d38;
  if ((*(byte *)(param_1 + 0x318) & 1) == 0) {
    if ((*(char *)(param_1 + 0x33d) == '\x01') && (*(char *)(param_1 + 0x33c) == '\x01')) {
      if (*(char *)(param_1 + 0x371) != '\x01') goto LAB_10a1e1cd8;
      bVar6 = *(byte *)(param_1 + 0x370) ^ 1;
    }
    else {
      bVar6 = 0;
    }
  }
  else {
LAB_10a1e1cd8:
    bVar6 = 1;
  }
  FUN_10a97f800(param_1 + 0x3d0,param_1 + 0x338,param_1 + 0x2e8,bVar6 & 1);
  *(undefined1 *)(param_1 + 0x330) = 0;
  if (*(char *)(param_1 + 0x480) != '\x01') {
    return;
  }
LAB_10a1e1d38:
  if ((*(byte *)(param_2 + 0x1c8) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x1c0) = 0;
    *(undefined8 *)(param_2 + 0x1a8) = 0;
    *(undefined8 *)(param_2 + 0x1a0) = 0;
    *(undefined8 *)(param_2 + 0x1b8) = 0;
    *(undefined8 *)(param_2 + 0x1b0) = 0;
    *(undefined4 *)(param_2 + 0x1c0) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x1c8) = 1;
  }
  param_2 = param_2 + 0x1a0;
  lVar4 = param_2;
  FUN_10a5094b0();
  if (lVar4 != 0) {
    plVar7 = *(long **)(param_1 + 0x468);
    while (plVar7 != (long *)(param_1 + 0x470)) {
      plStack_38 = plVar7 + 4;
      lVar5 = lVar4 + 0xa8;
      FUN_10a4f5f30(lVar5,plStack_38,&UNK_10dd5b8f9,&plStack_38,&uStack_39);
      lVar10 = plVar7[7];
      *(long *)(lVar5 + 0x40) = plVar7[8];
      *(long *)(lVar5 + 0x38) = lVar10;
      lVar12 = plVar7[10];
      lVar10 = plVar7[9];
      lVar15 = plVar7[0xc];
      lVar14 = plVar7[0xb];
      lVar17 = plVar7[0xe];
      lVar16 = plVar7[0xd];
      lVar18 = plVar7[0xf];
      *(long *)(lVar5 + 0x80) = plVar7[0x10];
      *(long *)(lVar5 + 0x78) = lVar18;
      *(long *)(lVar5 + 0x70) = lVar17;
      *(long *)(lVar5 + 0x68) = lVar16;
      *(long *)(lVar5 + 0x60) = lVar15;
      *(long *)(lVar5 + 0x58) = lVar14;
      *(long *)(lVar5 + 0x50) = lVar12;
      *(long *)(lVar5 + 0x48) = lVar10;
      plVar2 = (long *)plVar7[1];
      plVar8 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar3 = (long *)*plVar7 != plVar8;
          plVar8 = plVar7;
        } while (bVar3);
      }
      else {
        do {
          plVar7 = plVar2;
          plVar2 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    return;
  }
  plStack_38 = (long *)(param_1 + 0x3d0);
  FUN_10a509594(param_2,(long *)(param_1 + 0x3d0),&UNK_10dd5b8f9,&plStack_38,&uStack_39);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_2 + 0x28,param_1 + 1000);
  uVar1 = *(undefined1 *)(param_1 + 0x404);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x400);
  *(undefined1 *)(param_2 + 0x44) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_2 + 0x48,param_1 + 0x408);
  uVar11 = *(undefined8 *)(param_1 + 0x436);
  uVar9 = *(undefined8 *)(param_1 + 0x42e);
  uVar13 = *(undefined8 *)(param_1 + 0x420);
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x428);
  *(undefined8 *)(param_2 + 0x60) = uVar13;
  *(undefined8 *)(param_2 + 0x76) = uVar11;
  *(undefined8 *)(param_2 + 0x6e) = uVar9;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_2 + 0x80,param_1 + 0x440);
  uVar9 = *(undefined8 *)(param_1 + 0x458);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 0x460);
  *(undefined8 *)(param_2 + 0x98) = uVar9;
  if (param_2 + 0x28 != param_1 + 1000) {
    FUN_10a292b24(param_2 + 0xa8,*(undefined8 *)(param_1 + 0x468),param_1 + 0x470);
  }
  return;
}



/* Entry: 10a1e1d7c; end: 10a1e1d83;  */

void FUN_10a1e1d7c(long param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 uStack_39;
  long *plStack_38;
  
  FUN_10a1e26ec();
  if (*(char *)(param_1 + 0x1d0) != '\x01') {
    return;
  }
  if ((*(long *)(*(long *)(param_1 + 0x1f8) + 0x30) != 0) &&
     ((*(char *)(param_1 + 0xf7) != '\x01' || ((*(byte *)(param_1 + 0xf6) & 1) == 0)))) {
    *(undefined2 *)(param_1 + 0xf6) = 0x101;
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_10a1e1d38;
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if ((*(char *)(param_1 + 0x8d) == '\x01') && (*(char *)(param_1 + 0x8c) == '\x01')) {
      if (*(char *)(param_1 + 0xc1) != '\x01') goto LAB_10a1e1cd8;
      bVar6 = *(byte *)(param_1 + 0xc0) ^ 1;
    }
    else {
      bVar6 = 0;
    }
  }
  else {
LAB_10a1e1cd8:
    bVar6 = 1;
  }
  FUN_10a97f800(param_1 + 0x120,param_1 + 0x88,param_1 + 0x38,bVar6 & 1);
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (*(char *)(param_1 + 0x1d0) != '\x01') {
    return;
  }
LAB_10a1e1d38:
  if ((*(byte *)(param_2 + 0x1c8) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x1c0) = 0;
    *(undefined8 *)(param_2 + 0x1a8) = 0;
    *(undefined8 *)(param_2 + 0x1a0) = 0;
    *(undefined8 *)(param_2 + 0x1b8) = 0;
    *(undefined8 *)(param_2 + 0x1b0) = 0;
    *(undefined4 *)(param_2 + 0x1c0) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x1c8) = 1;
  }
  param_2 = param_2 + 0x1a0;
  lVar4 = param_2;
  FUN_10a5094b0();
  if (lVar4 != 0) {
    plVar7 = *(long **)(param_1 + 0x1b8);
    while (plVar7 != (long *)(param_1 + 0x1c0)) {
      plStack_38 = plVar7 + 4;
      lVar5 = lVar4 + 0xa8;
      FUN_10a4f5f30(lVar5,plStack_38,&UNK_10dd5b8f9,&plStack_38,&uStack_39);
      lVar10 = plVar7[7];
      *(long *)(lVar5 + 0x40) = plVar7[8];
      *(long *)(lVar5 + 0x38) = lVar10;
      lVar12 = plVar7[10];
      lVar10 = plVar7[9];
      lVar15 = plVar7[0xc];
      lVar14 = plVar7[0xb];
      lVar17 = plVar7[0xe];
      lVar16 = plVar7[0xd];
      lVar18 = plVar7[0xf];
      *(long *)(lVar5 + 0x80) = plVar7[0x10];
      *(long *)(lVar5 + 0x78) = lVar18;
      *(long *)(lVar5 + 0x70) = lVar17;
      *(long *)(lVar5 + 0x68) = lVar16;
      *(long *)(lVar5 + 0x60) = lVar15;
      *(long *)(lVar5 + 0x58) = lVar14;
      *(long *)(lVar5 + 0x50) = lVar12;
      *(long *)(lVar5 + 0x48) = lVar10;
      plVar2 = (long *)plVar7[1];
      plVar8 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar3 = (long *)*plVar7 != plVar8;
          plVar8 = plVar7;
        } while (bVar3);
      }
      else {
        do {
          plVar7 = plVar2;
          plVar2 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    return;
  }
  plStack_38 = (long *)(param_1 + 0x120);
  FUN_10a509594(param_2,(long *)(param_1 + 0x120),&UNK_10dd5b8f9,&plStack_38,&uStack_39);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_2 + 0x28,param_1 + 0x138);
  uVar1 = *(undefined1 *)(param_1 + 0x154);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x150);
  *(undefined1 *)(param_2 + 0x44) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_2 + 0x48,param_1 + 0x158);
  uVar11 = *(undefined8 *)(param_1 + 0x186);
  uVar9 = *(undefined8 *)(param_1 + 0x17e);
  uVar13 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_2 + 0x60) = uVar13;
  *(undefined8 *)(param_2 + 0x76) = uVar11;
  *(undefined8 *)(param_2 + 0x6e) = uVar9;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_2 + 0x80,param_1 + 400);
  uVar9 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_2 + 0x98) = uVar9;
  if (param_2 + 0x28 != param_1 + 0x138) {
    FUN_10a292b24(param_2 + 0xa8,*(undefined8 *)(param_1 + 0x1b8),param_1 + 0x1c0);
  }
  return;
}



/* Entry: 10a1e1d84; end: 10a1e2173;  */

void FUN_10a1e1d84(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong unaff_x26;
  long *plVar15;
  long lVar16;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  ulong uStack_78;
  float fStack_70;
  long *plStack_68;
  
  if (*(char *)(param_1 + 0x480) != '\x01') {
    return;
  }
  FUN_10a4e15b4(&lStack_90,*(undefined8 *)(param_2 + 0x110),param_1 + 0x3d0,param_1 + 0x2e8);
  bVar1 = *(byte *)(param_1 + 0x4a0);
  if (bVar1 == (byte)uStack_78) {
    if ((bVar1 & 1) == 0) goto LAB_10a1e1e6c;
    FUN_10a16b1ec((long *)(param_1 + 0x488),&lStack_90);
    *(undefined4 *)(param_1 + 0x498) = plStack_80._0_4_;
    if ((byte)uStack_78 != 1) goto LAB_10a1e1e6c;
  }
  else {
    if (bVar1 == 0) {
      *(long **)(param_1 + 0x490) = plStack_88;
      *(long *)(param_1 + 0x488) = lStack_90;
      lStack_90 = 0;
      plStack_88 = (long *)0x0;
      *(undefined4 *)(param_1 + 0x498) = plStack_80._0_4_;
      *(undefined1 *)(param_1 + 0x4a0) = 1;
    }
    else {
      FUN_10a0d92c8();
      *(undefined1 *)(param_1 + 0x4a0) = 0;
    }
    if ((uStack_78 & 1) == 0) goto LAB_10a1e1e6c;
  }
  plVar15 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar14 = plStack_88 + 1;
    do {
      lVar13 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
LAB_10a1e1e6c:
  if (*(char *)(param_1 + 0x4a0) == '\x01') {
    lVar13 = *(long *)(param_1 + 0x4a8);
    plStack_88 = (long *)0x0;
    lStack_90 = 0;
    uStack_78 = 0;
    plStack_80 = (long *)0x0;
    fStack_70 = *(float *)(lVar13 + 0x38);
    FUN_10a201420(&lStack_90,*(undefined8 *)(lVar13 + 0x20));
    plVar14 = *(long **)(lVar13 + 0x28);
    plVar15 = plStack_80;
    if (plVar14 != (long *)0x0) {
      do {
        plVar15 = plStack_88;
        uVar6 = plVar14[2];
        uVar10 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
        uVar10 = (uVar6 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
        uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
        if (plStack_88 != (long *)0x0) {
          uVar8 = (long)plStack_88 - 1;
          if (((ulong)plStack_88 & uVar8) == 0) {
            unaff_x26 = uVar10 & uVar8;
          }
          else {
            unaff_x26 = uVar10;
            if (plStack_88 <= uVar10) {
              uVar12 = 0;
              if (plStack_88 != (long *)0x0) {
                uVar12 = uVar10 / (ulong)plStack_88;
              }
              unaff_x26 = uVar10 - uVar12 * (long)plStack_88;
            }
          }
          plVar11 = *(long **)(lStack_90 + unaff_x26 * 8);
          if (plVar11 != (long *)0x0) {
            do {
              while( true ) {
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_10a1e1f70;
                uVar12 = plVar11[1];
                if (uVar12 != uVar10) break;
                if (plVar11[2] == uVar6) goto LAB_10a1e20d0;
              }
              if (((ulong)plStack_88 & uVar8) == 0) {
                uVar12 = uVar12 & uVar8;
              }
              else if (plStack_88 <= uVar12) {
                uVar4 = 0;
                if (plStack_88 != (long *)0x0) {
                  uVar4 = uVar12 / (ulong)plStack_88;
                }
                uVar12 = uVar12 - uVar4 * (long)plStack_88;
              }
            } while (uVar12 == unaff_x26);
          }
        }
LAB_10a1e1f70:
        plVar11 = (long *)0x68;
        __Znwm();
        *plVar11 = 0;
        plVar11[1] = uVar10;
        lVar7 = plVar14[3];
        lVar16 = plVar14[2];
        plVar11[3] = plVar14[3];
        plVar11[2] = lVar16;
        if (lVar7 != 0) {
          plVar9 = (long *)(lVar7 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plStack_68 = plVar11 + 4;
        *(undefined1 *)(plVar11 + 0xc) = 3;
        if ((char)plVar14[0xc] == '\0') {
          uVar5 = 0;
        }
        else {
          FUN_10a005398(&plStack_68,plVar14 + 4);
          uVar5 = (undefined1)plVar14[0xc];
        }
        *(undefined1 *)(plVar11 + 0xc) = uVar5;
        if ((plVar15 == (long *)0x0) || (fStack_70 * (float)plVar15 < (float)(uStack_78 + 1))) {
          uVar6 = 1;
          if (2 < plVar15) {
            uVar6 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
          }
          uVar6 = uVar6 | (long)plVar15 << 1;
          uVar8 = (ulong)((float)(uStack_78 + 1) / fStack_70);
          if (uVar6 <= uVar8) {
            uVar6 = uVar8;
          }
          FUN_10a201420(&lStack_90,uVar6);
          plVar15 = plStack_88;
          if (((ulong)plStack_88 & (long)plStack_88 - 1U) == 0) {
            unaff_x26 = (long)plStack_88 - 1U & uVar10;
          }
          else {
            unaff_x26 = uVar10;
            if (plStack_88 <= uVar10) {
              uVar6 = 0;
              if (plStack_88 != (long *)0x0) {
                uVar6 = uVar10 / (ulong)plStack_88;
              }
              unaff_x26 = uVar10 - uVar6 * (long)plStack_88;
            }
          }
        }
        plVar9 = *(long **)(lStack_90 + unaff_x26 * 8);
        if (plVar9 == (long *)0x0) {
          *plVar11 = (long)plStack_80;
          *(long ***)(lStack_90 + unaff_x26 * 8) = &plStack_80;
          plStack_80 = plVar11;
          if (*plVar11 != 0) {
            uVar6 = *(ulong *)(*plVar11 + 8);
            if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
              uVar6 = uVar6 & (long)plVar15 - 1U;
            }
            else if (plVar15 <= uVar6) {
              uVar10 = 0;
              if (plVar15 != (long *)0x0) {
                uVar10 = uVar6 / (ulong)plVar15;
              }
              uVar6 = uVar6 - uVar10 * (long)plVar15;
            }
            *(long **)(lStack_90 + uVar6 * 8) = plVar11;
          }
        }
        else {
          *plVar11 = *plVar9;
          *plVar9 = (long)plVar11;
        }
        uStack_78 = uStack_78 + 1;
LAB_10a1e20d0:
        plVar14 = (long *)*plVar14;
        plVar15 = plStack_80;
      } while (plVar14 != (long *)0x0);
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      lVar7 = lVar13 + 0x18;
      FUN_10a201aa0(lVar7,plVar15[2]);
      if (lVar7 != 0) {
        FUN_10a202b54(plVar15 + 4,param_1 + 0x498);
      }
    }
    FUN_10a2020a8(&lStack_90);
  }
  return;
}



/* Entry: 10a1e2174; end: 10a1e2183;  */

void FUN_10a1e2174(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong unaff_x26;
  long *plVar15;
  long lVar16;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  ulong uStack_78;
  float fStack_70;
  long *plStack_68;
  
  if (*(char *)(param_1 + 0x1d0) != '\x01') {
    return;
  }
  FUN_10a4e15b4(&lStack_90,*(undefined8 *)(param_2 + 0x110),param_1 + 0x120,param_1 + 0x38);
  bVar1 = *(byte *)(param_1 + 0x1f0);
  if (bVar1 == (byte)uStack_78) {
    if ((bVar1 & 1) == 0) goto LAB_10a1e1e6c;
    FUN_10a16b1ec((long *)(param_1 + 0x1d8),&lStack_90);
    *(undefined4 *)(param_1 + 0x1e8) = plStack_80._0_4_;
    if ((byte)uStack_78 != 1) goto LAB_10a1e1e6c;
  }
  else {
    if (bVar1 == 0) {
      *(long **)(param_1 + 0x1e0) = plStack_88;
      *(long *)(param_1 + 0x1d8) = lStack_90;
      lStack_90 = 0;
      plStack_88 = (long *)0x0;
      *(undefined4 *)(param_1 + 0x1e8) = plStack_80._0_4_;
      *(undefined1 *)(param_1 + 0x1f0) = 1;
    }
    else {
      FUN_10a0d92c8();
      *(undefined1 *)(param_1 + 0x1f0) = 0;
    }
    if ((uStack_78 & 1) == 0) goto LAB_10a1e1e6c;
  }
  plVar15 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar14 = plStack_88 + 1;
    do {
      lVar13 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
LAB_10a1e1e6c:
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    lVar13 = *(long *)(param_1 + 0x1f8);
    plStack_88 = (long *)0x0;
    lStack_90 = 0;
    uStack_78 = 0;
    plStack_80 = (long *)0x0;
    fStack_70 = *(float *)(lVar13 + 0x38);
    FUN_10a201420(&lStack_90,*(undefined8 *)(lVar13 + 0x20));
    plVar14 = *(long **)(lVar13 + 0x28);
    plVar15 = plStack_80;
    if (plVar14 != (long *)0x0) {
      do {
        plVar15 = plStack_88;
        uVar6 = plVar14[2];
        uVar10 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
        uVar10 = (uVar6 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
        uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
        if (plStack_88 != (long *)0x0) {
          uVar8 = (long)plStack_88 - 1;
          if (((ulong)plStack_88 & uVar8) == 0) {
            unaff_x26 = uVar10 & uVar8;
          }
          else {
            unaff_x26 = uVar10;
            if (plStack_88 <= uVar10) {
              uVar12 = 0;
              if (plStack_88 != (long *)0x0) {
                uVar12 = uVar10 / (ulong)plStack_88;
              }
              unaff_x26 = uVar10 - uVar12 * (long)plStack_88;
            }
          }
          plVar11 = *(long **)(lStack_90 + unaff_x26 * 8);
          if (plVar11 != (long *)0x0) {
            do {
              while( true ) {
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_10a1e1f70;
                uVar12 = plVar11[1];
                if (uVar12 != uVar10) break;
                if (plVar11[2] == uVar6) goto LAB_10a1e20d0;
              }
              if (((ulong)plStack_88 & uVar8) == 0) {
                uVar12 = uVar12 & uVar8;
              }
              else if (plStack_88 <= uVar12) {
                uVar4 = 0;
                if (plStack_88 != (long *)0x0) {
                  uVar4 = uVar12 / (ulong)plStack_88;
                }
                uVar12 = uVar12 - uVar4 * (long)plStack_88;
              }
            } while (uVar12 == unaff_x26);
          }
        }
LAB_10a1e1f70:
        plVar11 = (long *)0x68;
        __Znwm();
        *plVar11 = 0;
        plVar11[1] = uVar10;
        lVar7 = plVar14[3];
        lVar16 = plVar14[2];
        plVar11[3] = plVar14[3];
        plVar11[2] = lVar16;
        if (lVar7 != 0) {
          plVar9 = (long *)(lVar7 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plStack_68 = plVar11 + 4;
        *(undefined1 *)(plVar11 + 0xc) = 3;
        if ((char)plVar14[0xc] == '\0') {
          uVar5 = 0;
        }
        else {
          FUN_10a005398(&plStack_68,plVar14 + 4);
          uVar5 = (undefined1)plVar14[0xc];
        }
        *(undefined1 *)(plVar11 + 0xc) = uVar5;
        if ((plVar15 == (long *)0x0) || (fStack_70 * (float)plVar15 < (float)(uStack_78 + 1))) {
          uVar6 = 1;
          if (2 < plVar15) {
            uVar6 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
          }
          uVar6 = uVar6 | (long)plVar15 << 1;
          uVar8 = (ulong)((float)(uStack_78 + 1) / fStack_70);
          if (uVar6 <= uVar8) {
            uVar6 = uVar8;
          }
          FUN_10a201420(&lStack_90,uVar6);
          plVar15 = plStack_88;
          if (((ulong)plStack_88 & (long)plStack_88 - 1U) == 0) {
            unaff_x26 = (long)plStack_88 - 1U & uVar10;
          }
          else {
            unaff_x26 = uVar10;
            if (plStack_88 <= uVar10) {
              uVar6 = 0;
              if (plStack_88 != (long *)0x0) {
                uVar6 = uVar10 / (ulong)plStack_88;
              }
              unaff_x26 = uVar10 - uVar6 * (long)plStack_88;
            }
          }
        }
        plVar9 = *(long **)(lStack_90 + unaff_x26 * 8);
        if (plVar9 == (long *)0x0) {
          *plVar11 = (long)plStack_80;
          *(long ***)(lStack_90 + unaff_x26 * 8) = &plStack_80;
          plStack_80 = plVar11;
          if (*plVar11 != 0) {
            uVar6 = *(ulong *)(*plVar11 + 8);
            if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
              uVar6 = uVar6 & (long)plVar15 - 1U;
            }
            else if (plVar15 <= uVar6) {
              uVar10 = 0;
              if (plVar15 != (long *)0x0) {
                uVar10 = uVar6 / (ulong)plVar15;
              }
              uVar6 = uVar6 - uVar10 * (long)plVar15;
            }
            *(long **)(lStack_90 + uVar6 * 8) = plVar11;
          }
        }
        else {
          *plVar11 = *plVar9;
          *plVar9 = (long)plVar11;
        }
        uStack_78 = uStack_78 + 1;
LAB_10a1e20d0:
        plVar14 = (long *)*plVar14;
        plVar15 = plStack_80;
      } while (plVar14 != (long *)0x0);
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      lVar7 = lVar13 + 0x18;
      FUN_10a201aa0(lVar7,plVar15[2]);
      if (lVar7 != 0) {
        FUN_10a202b54(plVar15 + 4,param_1 + 0x1e8);
      }
    }
    FUN_10a2020a8(&lStack_90);
  }
  return;
}



/* Entry: 10a1e2184; end: 10a1e2637;  */

void FUN_10a1e2184(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined1 auStack_98 [40];
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    return;
  }
  lStack_b8 = param_1[0x91];
  plStack_68 = (long *)param_1[0x92];
  if (plStack_68 == (long *)0x0) {
    *(undefined4 *)((long)param_1 + 0x74) = 2;
    lVar10 = param_1[0x12];
    lVar11 = param_1[0x60];
    plStack_b0 = (long *)0x0;
  }
  else {
    plVar6 = plStack_68 + 1;
    do {
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(undefined4 *)((long)param_1 + 0x74) = 2;
    lVar10 = param_1[0x12];
    lVar11 = param_1[0x60];
    do {
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plStack_b0 = plStack_68;
    } while (cVar1 != '\0');
  }
  lVar3 = param_1[100];
  lStack_70 = lStack_b8;
  FUN_10ab6e450();
  if (lVar3 == 0) {
    plVar4 = (long *)param_1[0x12];
    FUN_10a3dedfc();
    plVar6 = (long *)*plVar4;
    plStack_58 = (long *)plVar4[1];
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plStack_60 = plVar6;
    if (plVar6 == (long *)0x0) goto LAB_10a1e23c8;
LAB_10a1e234c:
    do {
      plVar5 = plVar6;
      (**(code **)(*plVar6 + 0x80))();
      plVar4 = plStack_60;
      if ((int)plVar5 != 2) goto LAB_10a1e23c8;
      plVar6 = (long *)plVar6[0x13];
    } while (plVar6 != (long *)0x0);
    plVar6 = plStack_60;
    (**(code **)(*plStack_60 + 0xb0))();
    if (((uint)plVar6 < 2) || (plVar6 = plVar4, (**(code **)(*plVar4 + 0xb8))(), (uint)plVar6 < 2))
    goto LAB_10a1e23c8;
    plStack_c8 = plVar4;
    plStack_c0 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar7) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10a1e23d4;
    }
  }
  else {
    lVar12 = *(long *)(lVar3 + 0xe0);
    plVar6 = *(long **)(lVar3 + 0xe8);
    if (plVar6 == (long *)0x0) {
      if (lVar12 != 0) {
        plVar6 = (long *)0x0;
LAB_10a1e22e8:
        bVar7 = true;
        goto LAB_10a1e22ec;
      }
    }
    else {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar9 = *plVar4;
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *plVar4 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      if (lVar12 != 0) {
        lVar12 = *(long *)(lVar3 + 0xe0);
        plVar6 = *(long **)(lVar3 + 0xe8);
        if (plVar6 == (long *)0x0) goto LAB_10a1e22e8;
        plVar4 = plVar6 + 1;
        do {
          cVar1 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        bVar7 = false;
LAB_10a1e22ec:
        plStack_60 = *(long **)(lVar12 + 0x268);
        plStack_58 = *(long **)(lVar12 + 0x270);
        if (plStack_58 != (long *)0x0) {
          plVar4 = plStack_58 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (!bVar7) {
          plVar4 = plVar6 + 1;
          do {
            lVar3 = *plVar4;
            cVar1 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar7) {
              *plVar4 = lVar3 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_60;
        if (plStack_60 != (long *)0x0) goto LAB_10a1e234c;
        goto LAB_10a1e23c8;
      }
    }
    plStack_60 = (long *)0x0;
    plStack_58 = (long *)0x0;
LAB_10a1e23c8:
    plStack_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    if (plStack_58 != (long *)0x0) {
LAB_10a1e23d4:
      plVar4 = plStack_58;
      plVar6 = plStack_58 + 1;
      do {
        lVar3 = *plVar6;
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar7) {
          *plVar6 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  if ((*(byte *)(param_1 + 99) & 1) == 0) {
    if ((*(char *)((long)param_1 + 0x33d) != '\x01') || (*(char *)((long)param_1 + 0x33c) != '\x01')
       ) {
      bVar8 = 0;
      goto LAB_10a1e2448;
    }
    if (*(char *)((long)param_1 + 0x371) == '\x01') {
      bVar8 = *(byte *)(param_1 + 0x6e) ^ 1;
      goto LAB_10a1e2448;
    }
  }
  bVar8 = 1;
LAB_10a1e2448:
  FUN_10a97fb24(auStack_a8,lVar11,param_2,lVar10,&lStack_b8,&plStack_c8,bVar8 & 1,param_1 + 0x5d);
  plVar6 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar4 = plStack_c0 + 1;
    do {
      lVar10 = *plVar4;
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *plVar4 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar4 = plStack_b0 + 1;
    do {
      lVar10 = *plVar4;
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *plVar4 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = param_1 + 0x61;
  FUN_10a026ab4(plVar6,auStack_a8);
  (**(code **)(*param_1 + 0x98))(param_1,auStack_98);
  plVar4 = (long *)*plVar6;
  (**(code **)(*plVar4 + 0x28))();
  plVar5 = (long *)*plVar6;
  (**(code **)(*plVar5 + 0x30))();
  plVar6 = (long *)*plVar6;
  (**(code **)(*plVar6 + 0x50))();
  FUN_10a1da3a4(param_1,plVar4,plVar5,0,0,plVar6,0,0);
  if (plStack_a0 != (long *)0x0) {
    plVar6 = plStack_a0 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar4 = plStack_68 + 1;
    do {
      lVar10 = *plVar4;
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *plVar4 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a1e2638; end: 10a1e263f;  */

void FUN_10a1e2638(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  byte bVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar8 = (long *)(param_1 + -0x288);
  if ((*(byte *)(param_1 + 0x218) & 1) == 0) {
    *(undefined4 *)(param_1 + -0x214) = 0;
    return;
  }
  uStack_b8 = *(undefined8 *)(param_1 + 0x200);
  plStack_68 = *(long **)(param_1 + 0x208);
  if (plStack_68 == (long *)0x0) {
    *(undefined4 *)(param_1 + -0x214) = 2;
    uVar12 = *(undefined8 *)(param_1 + -0x1f8);
    uVar13 = *(undefined8 *)(param_1 + 0x78);
    plStack_b0 = (long *)0x0;
  }
  else {
    plVar5 = plStack_68 + 1;
    do {
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(param_1 + -0x214) = 2;
    uVar12 = *(undefined8 *)(param_1 + -0x1f8);
    uVar13 = *(undefined8 *)(param_1 + 0x78);
    do {
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_b0 = plStack_68;
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x98);
  uStack_70 = uStack_b8;
  FUN_10ab6e450();
  if (lVar4 == 0) {
    plVar6 = *(long **)(param_1 + -0x1f8);
    FUN_10a3dedfc();
    plVar5 = (long *)*plVar6;
    plStack_58 = (long *)plVar6[1];
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar9) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_60 = plVar5;
    if (plVar5 == (long *)0x0) goto LAB_10a1e23c8;
LAB_10a1e234c:
    do {
      plVar7 = plVar5;
      (**(code **)(*plVar5 + 0x80))();
      plVar6 = plStack_60;
      if ((int)plVar7 != 2) goto LAB_10a1e23c8;
      plVar5 = (long *)plVar5[0x13];
    } while (plVar5 != (long *)0x0);
    plVar5 = plStack_60;
    (**(code **)(*plStack_60 + 0xb0))();
    if (((uint)plVar5 < 2) || (plVar5 = plVar6, (**(code **)(*plVar6 + 0xb8))(), (uint)plVar5 < 2))
    goto LAB_10a1e23c8;
    plStack_c8 = plVar6;
    plStack_c0 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_10a1e23d4;
    }
  }
  else {
    lVar14 = *(long *)(lVar4 + 0xe0);
    plVar5 = *(long **)(lVar4 + 0xe8);
    if (plVar5 == (long *)0x0) {
      if (lVar14 != 0) {
        plVar5 = (long *)0x0;
LAB_10a1e22e8:
        bVar9 = true;
        goto LAB_10a1e22ec;
      }
    }
    else {
      plVar6 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar9) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        lVar11 = *plVar6;
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar9) {
          *plVar6 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
      if (lVar14 != 0) {
        lVar14 = *(long *)(lVar4 + 0xe0);
        plVar5 = *(long **)(lVar4 + 0xe8);
        if (plVar5 == (long *)0x0) goto LAB_10a1e22e8;
        plVar6 = plVar5 + 1;
        do {
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar9) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar9 = false;
LAB_10a1e22ec:
        plStack_60 = *(long **)(lVar14 + 0x268);
        plStack_58 = *(long **)(lVar14 + 0x270);
        if (plStack_58 != (long *)0x0) {
          plVar6 = plStack_58 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (!bVar9) {
          plVar6 = plVar5 + 1;
          do {
            lVar4 = *plVar6;
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar9) {
              *plVar6 = lVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        plVar5 = plStack_60;
        if (plStack_60 != (long *)0x0) goto LAB_10a1e234c;
        goto LAB_10a1e23c8;
      }
    }
    plStack_60 = (long *)0x0;
    plStack_58 = (long *)0x0;
LAB_10a1e23c8:
    plStack_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    if (plStack_58 != (long *)0x0) {
LAB_10a1e23d4:
      plVar6 = plStack_58;
      plVar5 = plStack_58 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    if ((*(char *)(param_1 + 0xb5) != '\x01') || (*(char *)(param_1 + 0xb4) != '\x01')) {
      bVar10 = 0;
      goto LAB_10a1e2448;
    }
    if (*(char *)(param_1 + 0xe9) == '\x01') {
      bVar10 = *(byte *)(param_1 + 0xe8) ^ 1;
      goto LAB_10a1e2448;
    }
  }
  bVar10 = 1;
LAB_10a1e2448:
  FUN_10a97fb24(auStack_a8,uVar13,param_2,uVar12,&uStack_b8,&plStack_c8,bVar10 & 1,param_1 + 0x60);
  plVar5 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar6 = plStack_c0 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar9) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar6 = plStack_b0 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar9) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x80);
  FUN_10a026ab4(puVar1,auStack_a8);
  (**(code **)(*plVar8 + 0x98))(plVar8,auStack_98);
  plVar5 = (long *)*puVar1;
  (**(code **)(*plVar5 + 0x28))();
  plVar6 = (long *)*puVar1;
  (**(code **)(*plVar6 + 0x30))();
  plVar7 = (long *)*puVar1;
  (**(code **)(*plVar7 + 0x50))();
  FUN_10a1da3a4(plVar8,plVar5,plVar6,0,0,plVar7,0,0);
  if (plStack_a0 != (long *)0x0) {
    plVar8 = plStack_a0 + 1;
    do {
      lVar4 = *plVar8;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *plVar8 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  plVar8 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar5 = plStack_68 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 10a1e2640; end: 10a1e26eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e2c70) */
/* WARNING: Removing unreachable block (ram,0x00010a1e2ab8) */
/* WARNING: Removing unreachable block (ram,0x00010a1e2dc0) */

void FUN_10a1e2640(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long **pplVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined7 uStack_170;
  undefined4 uStack_169;
  undefined1 uStack_165;
  undefined4 uStack_164;
  undefined7 uStack_160;
  char cStack_159;
  long **pplStack_148;
  long *plStack_140;
  char cStack_131;
  long **pplStack_130;
  long *plStack_128;
  long **pplStack_120;
  long lStack_118;
  ulong uStack_110;
  long **pplStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  long **pplStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined1 uStack_c2;
  byte bStack_c1;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  long **pplStack_b0;
  long lStack_a8;
  undefined5 uStack_a0;
  undefined2 uStack_9b;
  char cStack_99;
  undefined5 uStack_98;
  uint3 uStack_93;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long **pplStack_70;
  long lStack_68;
  ulong uStack_60;
  
  if (param_1[0x5b] == *param_2) {
    return;
  }
  (**(code **)(*param_1 + 0x50))();
  lVar11 = param_2[1];
  lVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar10 = (long *)(param_2[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar10 = (long *)param_1[0x5c];
  param_1[0x5c] = lVar11;
  param_1[0x5b] = lVar7;
  if (plVar10 != (long *)0x0) {
    plVar5 = plVar10 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    return;
  }
  lVar7 = param_1[0x5b];
  if (lVar7 == 0) {
    return;
  }
  func_0x00010aae9fd8();
  if (lVar7 == 0) {
    return;
  }
  FUN_10a08d2e0(&pplStack_120,lVar7 + 0x10);
  lStack_68 = lStack_118;
  pplStack_70 = pplStack_120;
  uStack_60 = uStack_110;
  plStack_128 = *(long **)(param_1[0x5b] + 0x48);
  pplStack_130 = *(long ***)(param_1[0x5b] + 0x40);
  FUN_10a0ffca4(&pplStack_120,&pplStack_130);
  FUN_10a09cbb0(&pplStack_148,&PTR_DAT_110baf498,0);
  FUN_10a177c38(&uStack_170,&pplStack_70,&pplStack_148);
  if (cStack_159 < '\0') {
    func_0x000107c3192c(&pplStack_108,CONCAT17((undefined1)uStack_169,uStack_170),
                        CONCAT44(uStack_164,CONCAT13(uStack_165,uStack_169._1_3_)));
  }
  else {
    lStack_100 = CONCAT44(uStack_164,CONCAT13(uStack_165,uStack_169._1_3_));
    pplStack_108 = (long **)CONCAT17((undefined1)uStack_169,uStack_170);
    uStack_f8 = CONCAT17(cStack_159,uStack_160);
  }
  uStack_f0 = 0x3e99999a;
  uStack_ec = 1;
  func_0x000107c2b054(&pplStack_e8,&UNK_10f643dac);
  uStack_d0 = 0x40;
  uStack_cc = uStack_cc & 0xffffff00;
  plVar10 = param_1 + 0x7a;
  uStack_c8 = 0x3f800000;
  uStack_c4 = 0x101;
  uStack_c2 = 0;
  uStack_c0 = 0x80;
  uStack_bc = 0;
  uStack_b8 = 0x3dcccccd;
  uStack_b4 = 0;
  pplStack_b0 = (long **)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_9b = 0;
  cStack_99 = 0;
  lStack_a8 = 0;
  lStack_90 = 0x300000168;
  lStack_80 = 0;
  lStack_78 = 0;
  plStack_88 = &lStack_80;
  if ((char)param_1[0x90] == '\x01') {
    if (*(char *)((long)param_1 + 999) < '\0') {
      __ZdlPv(*plVar10);
    }
    param_1[0x7b] = lStack_118;
    *plVar10 = (long)pplStack_120;
    param_1[0x7c] = uStack_110;
    uStack_110 = uStack_110 & 0xffffffffffffff;
    pplStack_120 = (long **)((ulong)pplStack_120 & 0xffffffffffffff00);
    if (*(char *)((long)param_1 + 0x3ff) < '\0') {
      __ZdlPv(param_1[0x7d]);
    }
    param_1[0x7e] = lStack_100;
    param_1[0x7d] = (long)pplStack_108;
    param_1[0x7f] = uStack_f8;
    uStack_f8 = uStack_f8 & 0xffffffffffffff;
    pplStack_108 = (long **)((ulong)pplStack_108 & 0xffffffffffffff00);
    *(undefined4 *)(param_1 + 0x80) = uStack_f0;
    *(undefined1 *)((long)param_1 + 0x404) = uStack_ec;
    if (*(char *)((long)param_1 + 0x41f) < '\0') {
      __ZdlPv(param_1[0x81]);
    }
    param_1[0x82] = lStack_e0;
    param_1[0x81] = (long)pplStack_e8;
    param_1[0x83] = uStack_d8;
    uStack_d8 = uStack_d8 & 0xffffffffffffff;
    pplStack_e8 = (long **)((ulong)pplStack_e8 & 0xffffffffffffff00);
    param_1[0x85] = CONCAT17(bStack_c1,CONCAT16(uStack_c2,CONCAT24(uStack_c4,uStack_c8)));
    param_1[0x84] = CONCAT44(uStack_cc,uStack_d0);
    *(ulong *)((long)param_1 + 0x436) = CONCAT26(uStack_b4,CONCAT42(uStack_b8,uStack_ba));
    *(ulong *)((long)param_1 + 0x42e) =
         CONCAT17(uStack_bb,CONCAT16(uStack_bc,CONCAT42(uStack_c0,CONCAT11(bStack_c1,uStack_c2))));
    if (*(char *)((long)param_1 + 0x457) < '\0') {
      __ZdlPv(param_1[0x88]);
    }
    param_1[0x89] = lStack_a8;
    param_1[0x88] = (long)pplStack_b0;
    param_1[0x8a] = CONCAT17(cStack_99,CONCAT25(uStack_9b,uStack_a0));
    cStack_99 = '\0';
    pplStack_b0 = (long **)((ulong)pplStack_b0 & 0xffffffffffffff00);
    param_1[0x8c] = lStack_90;
    param_1[0x8b] = CONCAT35(uStack_93,uStack_98);
    FUN_10a1f3f34(param_1 + 0x8d,param_1[0x8e]);
    param_1[0x8d] = (long)plStack_88;
    param_1[0x8e] = lStack_80;
    param_1[0x8f] = lStack_78;
    if (lStack_78 == 0) {
      param_1[0x8d] = (long)(param_1 + 0x8e);
    }
    else {
      *(long **)(lStack_80 + 0x10) = param_1 + 0x8e;
      lStack_80 = 0;
      lStack_78 = 0;
      plStack_88 = &lStack_80;
    }
  }
  else {
    param_1[0x7c] = uStack_110;
    param_1[0x7b] = lStack_118;
    *plVar10 = (long)pplStack_120;
    pplStack_120 = (long **)0x0;
    uStack_110 = 0;
    lStack_118 = 0;
    param_1[0x7e] = lStack_100;
    param_1[0x7d] = (long)pplStack_108;
    param_1[0x7f] = uStack_f8;
    uStack_f8 = 0;
    lStack_100 = 0;
    pplStack_108 = (long **)0x0;
    *(undefined1 *)((long)param_1 + 0x404) = uStack_ec;
    *(undefined4 *)(param_1 + 0x80) = uStack_f0;
    param_1[0x83] = uStack_d8;
    param_1[0x82] = lStack_e0;
    param_1[0x81] = (long)pplStack_e8;
    uStack_d8 = 0;
    lStack_e0 = 0;
    pplStack_e8 = (long **)0x0;
    *(ulong *)((long)param_1 + 0x436) = (ulong)CONCAT42(0x3dcccccd,uStack_ba);
    *(ulong *)((long)param_1 + 0x42e) =
         CONCAT17(uStack_bb,(uint7)CONCAT42(0x80,(ushort)bStack_c1 << 8));
    param_1[0x85] = CONCAT17(bStack_c1,0x1013f800000);
    param_1[0x84] = CONCAT44(uStack_cc,0x40);
    param_1[0x8a] = 0;
    param_1[0x89] = 0;
    param_1[0x88] = 0;
    uStack_a0 = 0;
    uStack_9b = 0;
    cStack_99 = '\0';
    lStack_a8 = 0;
    pplStack_b0 = (long **)0x0;
    param_1[0x8c] = 0x300000168;
    param_1[0x8b] = (ulong)uStack_93 << 0x28;
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    param_1[0x8d] = (long)(param_1 + 0x8e);
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  pplVar4 = &plStack_88;
  FUN_10a1f3f34(pplVar4,lStack_80);
  if (cStack_99 < '\0') {
    pplVar4 = pplStack_b0;
    __ZdlPv(pplStack_b0);
  }
  if ((long)uStack_d8 < 0) {
    pplVar4 = pplStack_e8;
    __ZdlPv(pplStack_e8);
  }
  if ((long)uStack_f8 < 0) {
    pplVar4 = pplStack_108;
    __ZdlPv(pplStack_108);
  }
  if ((long)uStack_110 < 0) {
    pplVar4 = pplStack_120;
    __ZdlPv(pplStack_120);
  }
  if (cStack_159 < '\0') {
    pplVar4 = (long **)CONCAT17((undefined1)uStack_169,uStack_170);
    __ZdlPv(pplVar4);
  }
  if (cStack_131 < '\0') {
    pplVar4 = pplStack_148;
    __ZdlPv(pplStack_148);
  }
  func_0x00010ad031c0();
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
LAB_10a1e2de8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1e2dec);
    (*pcVar3)();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x88,pplVar4);
  lStack_118 = lStack_68;
  pplStack_120 = pplStack_70;
  uStack_110 = uStack_60;
  plVar10 = (long *)0x38;
  __Znwm();
  plVar5 = plVar10 + 1;
  *plVar5 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_DAT_110bb3748;
  pplStack_148 = (long **)(plVar10 + 3);
  *pplStack_148 = (long *)&PTR_FUN_110ba56f0;
  plVar10[5] = lStack_118;
  plVar10[4] = (long)pplStack_120;
  plVar10[6] = uStack_110;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  cStack_159 = '\v';
  uStack_170 = 0x2e6769666e6f63;
  uStack_169 = 0x6e6f736a;
  uStack_165 = 0;
  plStack_140 = plVar10;
  pplStack_130 = pplStack_148;
  plStack_128 = plVar10;
  func_0x0001095a0258(&pplStack_120,&pplStack_130,&uStack_170);
  do {
    lVar7 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  func_0x0001095a0328(&pplStack_130,&pplStack_120);
  func_0x000107c283d0(&uStack_170,pplStack_130 + 0x2c);
  plVar10 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar5 = plStack_128 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = (long *)CONCAT17(cStack_159,uStack_160);
  if (plVar10 == (long *)0x0) {
    lVar7 = param_1[0x77];
  }
  else {
    plVar5 = plVar10;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar6 = uVar9;
      plVar5 = (long *)*plVar5;
      uVar9 = uVar6 + 1;
    } while (plVar5 != (long *)0x0);
    lVar7 = param_1[0x77];
    uVar8 = (param_1[0x79] - lVar7 >> 3) * -0x5555555555555555;
    if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
      func_0x000107c3193c(param_1 + 0x77);
      if (0xaaaaaaaaaaaaaa9 < uVar9) {
        FUN_10a05a0c0();
        goto LAB_10a1e2de8;
      }
      uVar6 = uVar6 + 2;
      lVar7 = param_1[0x79] - param_1[0x77] >> 3;
      uVar9 = lVar7 * 0x5555555555555556;
      if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
        uVar9 = uVar6;
      }
      if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar9 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a0cf150(param_1 + 0x77,uVar9);
      plVar5 = param_1 + 0x77;
      FUN_10a1f3f84(plVar5,plVar10,0,param_1[0x78]);
      param_1[0x78] = (long)plVar5;
      goto LAB_10a1e2d68;
    }
    lVar11 = param_1[0x78];
    uVar6 = (lVar11 - lVar7 >> 3) * -0x5555555555555555;
    if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
      if (0 < lVar11 - lVar7) {
        uVar6 = uVar6 + 1;
        plVar5 = plVar10;
        do {
          plVar5 = (long *)*plVar5;
          uVar6 = uVar6 - 1;
        } while (1 < uVar6);
        if (plVar10 != plVar5) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (lVar7,plVar10 + 2);
            plVar10 = (long *)*plVar10;
            lVar7 = lVar7 + 0x18;
          } while (plVar10 != plVar5);
          lVar11 = param_1[0x78];
          plVar10 = plVar5;
        }
      }
      plVar5 = param_1 + 0x77;
      FUN_10a1f3f84(plVar5,plVar10,0,lVar11);
      param_1[0x78] = (long)plVar5;
      goto LAB_10a1e2d68;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar7,plVar10 + 2);
      plVar10 = (long *)*plVar10;
      lVar7 = lVar7 + 0x18;
    } while (plVar10 != (long *)0x0);
  }
  for (lVar11 = param_1[0x78]; lVar11 != lVar7; lVar11 = lVar11 + -0x18) {
  }
  param_1[0x78] = lVar7;
LAB_10a1e2d68:
  *(undefined1 *)(param_1 + 0x66) = 1;
  func_0x000107c2826c(&uStack_170);
  func_0x0001095a02f0(&pplStack_120);
  plVar10 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    plVar5 = plStack_140 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return;
}



/* Entry: 10a1e26ec; end: 10a1e2edb;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e2c70) */
/* WARNING: Removing unreachable block (ram,0x00010a1e2ab8) */
/* WARNING: Removing unreachable block (ram,0x00010a1e2dc0) */

void FUN_10a1e26ec(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined7 uStack_170;
  undefined4 uStack_169;
  undefined1 uStack_165;
  undefined4 uStack_164;
  undefined7 uStack_160;
  char cStack_159;
  long **pplStack_148;
  long *plStack_140;
  char cStack_131;
  long **pplStack_130;
  long *plStack_128;
  long **pplStack_120;
  long lStack_118;
  ulong uStack_110;
  long **pplStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  long **pplStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined1 uStack_c2;
  byte bStack_c1;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  long **pplStack_b0;
  undefined8 uStack_a8;
  undefined5 uStack_a0;
  undefined2 uStack_9b;
  char cStack_99;
  undefined5 uStack_98;
  uint3 uStack_93;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long **pplStack_70;
  long lStack_68;
  ulong uStack_60;
  
  if ((*(byte *)(param_1 + 0x480) & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x2d8);
  if (lVar4 == 0) {
    return;
  }
  func_0x00010aae9fd8();
  if (lVar4 == 0) {
    return;
  }
  FUN_10a08d2e0(&pplStack_120,lVar4 + 0x10);
  lStack_68 = lStack_118;
  pplStack_70 = pplStack_120;
  uStack_60 = uStack_110;
  plStack_128 = *(long **)(*(long *)(param_1 + 0x2d8) + 0x48);
  pplStack_130 = *(long ***)(*(long *)(param_1 + 0x2d8) + 0x40);
  FUN_10a0ffca4(&pplStack_120,&pplStack_130);
  FUN_10a09cbb0(&pplStack_148,&PTR_DAT_110baf498,0);
  FUN_10a177c38(&uStack_170,&pplStack_70,&pplStack_148);
  if (cStack_159 < '\0') {
    func_0x000107c3192c(&pplStack_108,CONCAT17((undefined1)uStack_169,uStack_170),
                        CONCAT44(uStack_164,CONCAT13(uStack_165,uStack_169._1_3_)));
  }
  else {
    uStack_100 = CONCAT44(uStack_164,CONCAT13(uStack_165,uStack_169._1_3_));
    pplStack_108 = (long **)CONCAT17((undefined1)uStack_169,uStack_170);
    uStack_f8 = CONCAT17(cStack_159,uStack_160);
  }
  uStack_f0 = 0x3e99999a;
  uStack_ec = 1;
  func_0x000107c2b054(&pplStack_e8,&UNK_10f643dac);
  uStack_d0 = 0x40;
  uStack_cc = uStack_cc & 0xffffff00;
  plVar6 = (long *)(param_1 + 0x3d0);
  uStack_c8 = 0x3f800000;
  uStack_c4 = 0x101;
  uStack_c2 = 0;
  uStack_c0 = 0x80;
  uStack_bc = 0;
  uStack_b8 = 0x3dcccccd;
  uStack_b4 = 0;
  pplStack_b0 = (long **)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_9b = 0;
  cStack_99 = 0;
  uStack_a8 = 0;
  uStack_90 = 0x300000168;
  lStack_80 = 0;
  lStack_78 = 0;
  plStack_88 = &lStack_80;
  if (*(char *)(param_1 + 0x480) == '\x01') {
    if (*(char *)(param_1 + 999) < '\0') {
      __ZdlPv(*plVar6);
    }
    *(long *)(param_1 + 0x3d8) = lStack_118;
    *plVar6 = (long)pplStack_120;
    *(ulong *)(param_1 + 0x3e0) = uStack_110;
    uStack_110 = uStack_110 & 0xffffffffffffff;
    pplStack_120 = (long **)((ulong)pplStack_120 & 0xffffffffffffff00);
    if (*(char *)(param_1 + 0x3ff) < '\0') {
      __ZdlPv(*(ulong *)(param_1 + 1000));
    }
    *(undefined8 *)(param_1 + 0x3f0) = uStack_100;
    *(ulong *)(param_1 + 1000) = (ulong)pplStack_108;
    *(ulong *)(param_1 + 0x3f8) = uStack_f8;
    uStack_f8 = uStack_f8 & 0xffffffffffffff;
    pplStack_108 = (long **)((ulong)pplStack_108 & 0xffffffffffffff00);
    *(undefined4 *)(param_1 + 0x400) = uStack_f0;
    *(undefined1 *)(param_1 + 0x404) = uStack_ec;
    if (*(char *)(param_1 + 0x41f) < '\0') {
      __ZdlPv(*(ulong *)(param_1 + 0x408));
    }
    *(undefined8 *)(param_1 + 0x410) = uStack_e0;
    *(ulong *)(param_1 + 0x408) = (ulong)pplStack_e8;
    *(ulong *)(param_1 + 0x418) = uStack_d8;
    uStack_d8 = uStack_d8 & 0xffffffffffffff;
    pplStack_e8 = (long **)((ulong)pplStack_e8 & 0xffffffffffffff00);
    *(ulong *)(param_1 + 0x428) =
         CONCAT17(bStack_c1,CONCAT16(uStack_c2,CONCAT24(uStack_c4,uStack_c8)));
    *(ulong *)(param_1 + 0x420) = CONCAT44(uStack_cc,uStack_d0);
    *(ulong *)(param_1 + 0x436) = CONCAT26(uStack_b4,CONCAT42(uStack_b8,uStack_ba));
    *(ulong *)(param_1 + 0x42e) =
         CONCAT17(uStack_bb,CONCAT16(uStack_bc,CONCAT42(uStack_c0,CONCAT11(bStack_c1,uStack_c2))));
    if (*(char *)(param_1 + 0x457) < '\0') {
      __ZdlPv(*(ulong *)(param_1 + 0x440));
    }
    *(undefined8 *)(param_1 + 0x448) = uStack_a8;
    *(ulong *)(param_1 + 0x440) = (ulong)pplStack_b0;
    *(ulong *)(param_1 + 0x450) = CONCAT17(cStack_99,CONCAT25(uStack_9b,uStack_a0));
    cStack_99 = '\0';
    pplStack_b0 = (long **)((ulong)pplStack_b0 & 0xffffffffffffff00);
    *(undefined8 *)(param_1 + 0x460) = uStack_90;
    *(ulong *)(param_1 + 0x458) = CONCAT35(uStack_93,uStack_98);
    FUN_10a1f3f34((long *)(param_1 + 0x468),*(undefined8 *)(param_1 + 0x470));
    *(long **)(param_1 + 0x468) = plStack_88;
    *(long *)(param_1 + 0x470) = lStack_80;
    *(long *)(param_1 + 0x478) = lStack_78;
    if (lStack_78 == 0) {
      *(long *)(param_1 + 0x468) = param_1 + 0x470;
    }
    else {
      *(long *)(lStack_80 + 0x10) = param_1 + 0x470;
      lStack_80 = 0;
      lStack_78 = 0;
      plStack_88 = &lStack_80;
    }
  }
  else {
    *(ulong *)(param_1 + 0x3e0) = uStack_110;
    *(long *)(param_1 + 0x3d8) = lStack_118;
    *plVar6 = (long)pplStack_120;
    pplStack_120 = (long **)0x0;
    uStack_110 = 0;
    lStack_118 = 0;
    *(undefined8 *)(param_1 + 0x3f0) = uStack_100;
    *(long ***)(param_1 + 1000) = pplStack_108;
    *(ulong *)(param_1 + 0x3f8) = uStack_f8;
    uStack_f8 = 0;
    uStack_100 = 0;
    pplStack_108 = (long **)0x0;
    *(undefined1 *)(param_1 + 0x404) = uStack_ec;
    *(undefined4 *)(param_1 + 0x400) = uStack_f0;
    *(ulong *)(param_1 + 0x418) = uStack_d8;
    *(undefined8 *)(param_1 + 0x410) = uStack_e0;
    *(long ***)(param_1 + 0x408) = pplStack_e8;
    uStack_d8 = 0;
    uStack_e0 = 0;
    pplStack_e8 = (long **)0x0;
    *(ulong *)(param_1 + 0x436) = (ulong)CONCAT42(0x3dcccccd,uStack_ba);
    *(ulong *)(param_1 + 0x42e) = CONCAT17(uStack_bb,(uint7)CONCAT42(0x80,(ushort)bStack_c1 << 8));
    *(ulong *)(param_1 + 0x428) = CONCAT17(bStack_c1,0x1013f800000);
    *(ulong *)(param_1 + 0x420) = CONCAT44(uStack_cc,0x40);
    *(undefined8 *)(param_1 + 0x450) = 0;
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined8 *)(param_1 + 0x440) = 0;
    uStack_a0 = 0;
    uStack_9b = 0;
    cStack_99 = '\0';
    uStack_a8 = 0;
    pplStack_b0 = (long **)0x0;
    *(undefined8 *)(param_1 + 0x460) = 0x300000168;
    *(ulong *)(param_1 + 0x458) = (ulong)uStack_93 << 0x28;
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    *(long *)(param_1 + 0x468) = param_1 + 0x470;
    *(undefined1 *)(param_1 + 0x480) = 1;
  }
  pplVar5 = &plStack_88;
  FUN_10a1f3f34(pplVar5,lStack_80);
  if (cStack_99 < '\0') {
    pplVar5 = pplStack_b0;
    __ZdlPv(pplStack_b0);
  }
  if ((long)uStack_d8 < 0) {
    pplVar5 = pplStack_e8;
    __ZdlPv(pplStack_e8);
  }
  if ((long)uStack_f8 < 0) {
    pplVar5 = pplStack_108;
    __ZdlPv(pplStack_108);
  }
  if ((long)uStack_110 < 0) {
    pplVar5 = pplStack_120;
    __ZdlPv(pplStack_120);
  }
  if (cStack_159 < '\0') {
    pplVar5 = (long **)CONCAT17((undefined1)uStack_169,uStack_170);
    __ZdlPv(pplVar5);
  }
  if (cStack_131 < '\0') {
    pplVar5 = pplStack_148;
    __ZdlPv(pplStack_148);
  }
  func_0x00010ad031c0();
  if ((*(byte *)(param_1 + 0x480) & 1) == 0) {
LAB_10a1e2de8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1e2dec);
    (*pcVar3)();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x440,pplVar5);
  lStack_118 = lStack_68;
  pplStack_120 = pplStack_70;
  uStack_110 = uStack_60;
  plVar6 = (long *)0x38;
  __Znwm();
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110bb3748;
  pplStack_148 = (long **)(plVar6 + 3);
  *pplStack_148 = (long *)&PTR_FUN_110ba56f0;
  plVar6[5] = lStack_118;
  plVar6[4] = (long)pplStack_120;
  plVar6[6] = uStack_110;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  cStack_159 = '\v';
  uStack_170 = 0x2e6769666e6f63;
  uStack_169 = 0x6e6f736a;
  uStack_165 = 0;
  plStack_140 = plVar6;
  pplStack_130 = pplStack_148;
  plStack_128 = plVar6;
  func_0x0001095a0258(&pplStack_120,&pplStack_130,&uStack_170);
  do {
    lVar4 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  func_0x0001095a0328(&pplStack_130,&pplStack_120);
  func_0x000107c283d0(&uStack_170,pplStack_130 + 0x2c);
  plVar6 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar7 = plStack_128 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = (long *)CONCAT17(cStack_159,uStack_160);
  if (plVar6 == (long *)0x0) {
    lVar4 = *(long *)(param_1 + 0x3b8);
  }
  else {
    plVar7 = plVar6;
    uVar10 = 0xffffffffffffffff;
    do {
      uVar8 = uVar10;
      plVar7 = (long *)*plVar7;
      uVar10 = uVar8 + 1;
    } while (plVar7 != (long *)0x0);
    lVar4 = *(long *)(param_1 + 0x3b8);
    uVar9 = (*(long *)(param_1 + 0x3c8) - lVar4 >> 3) * -0x5555555555555555;
    if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
      func_0x000107c3193c(param_1 + 0x3b8);
      if (0xaaaaaaaaaaaaaa9 < uVar10) {
        FUN_10a05a0c0();
        goto LAB_10a1e2de8;
      }
      uVar8 = uVar8 + 2;
      lVar4 = *(long *)(param_1 + 0x3c8) - *(long *)(param_1 + 0x3b8) >> 3;
      uVar10 = lVar4 * 0x5555555555555556;
      if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
        uVar10 = uVar8;
      }
      if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
        uVar10 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a0cf150(param_1 + 0x3b8,uVar10);
      lVar4 = param_1 + 0x3b8;
      FUN_10a1f3f84(lVar4,plVar6,0,*(undefined8 *)(param_1 + 0x3c0));
      *(long *)(param_1 + 0x3c0) = lVar4;
      goto LAB_10a1e2d68;
    }
    lVar11 = *(long *)(param_1 + 0x3c0);
    uVar8 = (lVar11 - lVar4 >> 3) * -0x5555555555555555;
    if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
      if (0 < lVar11 - lVar4) {
        uVar8 = uVar8 + 1;
        plVar7 = plVar6;
        do {
          plVar7 = (long *)*plVar7;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
        if (plVar6 != plVar7) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (lVar4,plVar6 + 2);
            plVar6 = (long *)*plVar6;
            lVar4 = lVar4 + 0x18;
          } while (plVar6 != plVar7);
          lVar11 = *(long *)(param_1 + 0x3c0);
          plVar6 = plVar7;
        }
      }
      lVar4 = param_1 + 0x3b8;
      FUN_10a1f3f84(lVar4,plVar6,0,lVar11);
      *(long *)(param_1 + 0x3c0) = lVar4;
      goto LAB_10a1e2d68;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar4,plVar6 + 2);
      plVar6 = (long *)*plVar6;
      lVar4 = lVar4 + 0x18;
    } while (plVar6 != (long *)0x0);
  }
  for (lVar11 = *(long *)(param_1 + 0x3c0); lVar11 != lVar4; lVar11 = lVar11 + -0x18) {
  }
  *(long *)(param_1 + 0x3c0) = lVar4;
LAB_10a1e2d68:
  *(undefined1 *)(param_1 + 0x330) = 1;
  func_0x000107c2826c(&uStack_170);
  func_0x0001095a02f0(&pplStack_120);
  plVar6 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    plVar7 = plStack_140 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a1e2edc; end: 10a1e2fff;  */

void FUN_10a1e2edc(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + 0x2e8);
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  bVar6 = *(byte *)(param_1 + 0x2ff);
  uVar3 = *(ulong *)(param_1 + 0x2f0);
  if (-1 < (char)bVar6) {
    uVar3 = (ulong)bVar6;
  }
  if (uVar2 == uVar3) {
    plVar8 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar8 = param_2;
    }
    plVar4 = (long *)*plVar1;
    if (-1 < (char)bVar6) {
      plVar4 = plVar1;
    }
    _memcmp(plVar8,plVar4,uVar2);
    if ((int)plVar8 == 0) {
      return;
    }
  }
  if (uVar2 == 0) {
    FUN_10a00946c(&UNK_10f64484a);
LAB_10a1e2fb0:
    FUN_10a0ee900(auStack_48,&UNK_10f64485f,0x13);
    FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1e2fe4);
    (*pcVar7)();
  }
  if (*(long *)(param_1 + 0x3b8) != *(long *)(param_1 + 0x3c0)) {
    lVar9 = param_1 + 0x3b8;
    FUN_10a1f3e94(lVar9,param_2);
    if (*(long *)(param_1 + 0x3c0) == lVar9) goto LAB_10a1e2fb0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar1,param_2);
  *(undefined1 *)(param_1 + 0x330) = 1;
  return;
}



/* Entry: 10a1e3000; end: 10a1e3003;  */

undefined *** FUN_10a1e3000(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  long lVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *unaff_x26;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_10a18cbd8(param_1 + 0x308);
  if (*(char *)(param_1 + 0x480) == '\x01') {
    FUN_10a1f3f34(param_1 + 0x468,*(undefined8 *)(param_1 + 0x470));
    if (*(char *)(param_1 + 0x457) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x440));
    }
    if (*(char *)(param_1 + 0x41f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x408));
    }
    if (*(char *)(param_1 + 0x3ff) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 1000));
    }
    if (*(char *)(param_1 + 999) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x3d0));
    }
    *(undefined1 *)(param_1 + 0x480) = 0;
  }
  FUN_10a042718(param_1 + 0x3b8);
  lVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar16 = 4;
  iVar13 = 0;
  uVar14 = 0;
  puVar18 = (undefined4 *)0x0;
  puVar19 = (undefined4 *)0x4;
  puVar20 = (undefined4 *)0x0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = param_1 + 0xa8;
  uVar2 = *(ushort *)(param_1 + 0x101);
  *(ushort *)(param_1 + 0x101) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  uStack_90 = 1;
  pcStack_a8 = FUN_10a1d0710;
  ppuStack_a0 = &PTR_FUN_110bad6c8;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    unaff_x26 = (undefined4 *)(param_1 + 0x1e8);
    *unaff_x26 = 0;
    uVar16 = 4;
    uVar14 = 0;
    iVar13 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20efac(unaff_x26);
  }
  if (*(int *)(param_1 + 0x1ec) != 0) {
    unaff_x26 = (undefined4 *)(param_1 + 0x1ec);
    *unaff_x26 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f0c4(unaff_x26);
  }
  if (*(int *)(param_1 + 0x1f8) != 4) {
    puVar20 = (undefined4 *)(param_1 + 0x1f8);
    *puVar20 = 4;
    func_0x00010a1bd170(auStack_b0);
    FUN_10a1fd58c(puVar20);
  }
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar19 = (undefined4 *)(param_1 + 0x1fc);
    *puVar19 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f1dc(puVar19);
  }
  *(undefined1 *)(param_1 + 0x200) = 0;
  if (*(int *)(param_1 + 0x1f0) != 0) {
    puVar18 = (undefined4 *)(param_1 + 0x1f0);
    *puVar18 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f328(puVar18);
  }
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined1 *)(param_1 + 0x201) = 1;
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    func_0x00010a042d30(param_1 + 0x1d0);
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  FUN_10a044790(&pcStack_a8);
  pppuVar17 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar17;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pppuVar5 = pppuVar17;
  __Unwind_Resume();
  uStack_e8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  pcStack_b8 = FUN_10a1da580;
  puStack_100 = unaff_x26;
  puStack_f8 = puVar20;
  puStack_f0 = puVar19;
  puStack_e0 = puVar18;
  pppuStack_c8 = pppuVar17;
  puStack_c0 = &stack0xfffffffffffffff0;
  pppuVar5[0x58] = &PTR_FUN_110c383b8;
  *(undefined2 *)(pppuVar5 + 0x5b) = 0x100;
  pppuVar5[0x5a] = (undefined **)0x0;
  pppuVar5[0x59] = (undefined **)0x0;
  pppuVar17 = pppuVar5;
  FUN_10a1da04c();
  *pppuVar17 = &PTR_DAT_110bae008;
  pppuVar17[2] = &PTR_FUN_110bae138;
  pppuVar17[5] = &PTR_FUN_110bae168;
  pppuVar17[0x58] = &PTR_FUN_110bae210;
  pppuVar17[0x15] = &PTR_FUN_110bae1c0;
  uVar1 = 4;
  if (0x26 < uVar16 - 0x30) {
    uVar1 = uVar16;
  }
  pppuVar17[0x52] = (undefined **)0x0;
  pppuVar17[0x51] = (undefined **)0x0;
  pppuVar17[0x54] = (undefined **)0x0;
  pppuVar17[0x53] = (undefined **)0x0;
  pppuVar17[0x56] = (undefined **)0x0;
  pppuVar17[0x55] = (undefined **)0x0;
  pppuVar17[0x57] = (undefined **)0x0;
  lVar6 = lVar10;
  FUN_10a2421c8();
  plVar7 = *(long **)(lVar6 + 0x228);
  (**(code **)(*plVar7 + 0x68))();
  uVar16 = *(uint *)(plVar7 + 0x11);
  if ((0 < (int)uVar16) && (uVar16 < (uint)uVar11 || uVar16 < (uint)uVar12)) {
    FUN_10a0ee900(&lStack_148,&UNK_10f643e2d,0x5c);
    FUN_10a0029c0(&lStack_148);
LAB_10a1da858:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1da85c);
    (*pcVar4)();
  }
  uVar16 = uVar1;
  if (uVar1 == 0x22) {
    uVar16 = 0x25;
  }
  uVar3 = 0x24;
  if (uVar1 != 0x21) {
    uVar3 = uVar16;
  }
  uVar16 = 1;
  FUN_109fc8e58(1,1,uVar3);
  if (uVar16 != 0) {
    uVar15 = (uVar12 & 0xffffffff) * (uVar11 & 0xffffffff);
    uVar3 = 0;
    if (uVar16 != 0) {
      uVar3 = 0xffffffff / uVar16;
    }
    if (uVar3 <= uVar15 && uVar15 - uVar3 != 0) {
      FUN_10a0ee900(&lStack_148,&UNK_10f643e8a,0x8b);
      FUN_10a0029c0(&lStack_148);
      goto LAB_10a1da858;
    }
  }
  FUN_10a1da3a4(pppuVar5,uVar11,uVar12,0,0,uVar1,0,0);
  FUN_10a2421c8();
  plVar7 = *(long **)(lVar10 + 0x228);
  lStack_148 = uVar11 << 0x20;
  uStack_140 = CONCAT44(1,(uint)uVar12);
  uStack_138 = (ulong)uVar1;
  uStack_12c = 0x100000001;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = uVar14;
  (**(code **)(*plVar7 + 0x20))(plVar7,&lStack_148);
  FUN_10a099d88(pppuVar17 + 0x51,plVar7);
  if (iVar13 != 0) {
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    pppuVar17 = pppuVar5;
    (*(code *)(*pppuVar5)[0x1d])();
    if ((int)pppuVar17 == 0x21) {
      pppuVar17 = (undefined ***)0x24;
    }
    else if ((int)pppuVar17 == 0x22) {
      pppuVar17 = (undefined ***)0x25;
    }
    pppuVar8 = pppuVar5;
    (*(code *)(*pppuVar5)[0x16])();
    pppuVar9 = pppuVar5;
    (*(code *)(*pppuVar5)[0x17])(pppuVar5);
    FUN_109fc8e58(pppuVar8,pppuVar9,pppuVar17);
    if (((ulong)pppuVar8 & 0xffffffff) != 0) {
      func_0x000107c27d58(&lStack_148);
    }
    pppuVar17 = pppuVar5;
    (*(code *)(*pppuVar5)[0x16])();
    pppuVar8 = pppuVar5;
    (*(code *)(*pppuVar5)[0x17])();
    uStack_108 = (ulong)pppuVar17 & 0xffffffff | (long)pppuVar8 << 0x20;
    uStack_110 = 0;
    FUN_10a1daa20(pppuVar5,&uStack_110,lStack_148);
    if (lStack_148 != 0) {
      uStack_140 = lStack_148;
      __ZdlPv();
    }
  }
  return pppuVar5;
}



/* Entry: 10a1e3004; end: 10a1e306f;  */

undefined8 * FUN_10a1e3004(undefined8 *param_1)

{
  FUN_10a1f3f34(param_1 + 0x13,param_1[0x14]);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    __ZdlPv(param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a1e3070; end: 10a1e30ff;  */

void FUN_10a1e3070(long param_1,ushort param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f644873);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(ushort *)(param_1 + 0x338) = param_2 | 0x100;
  *(undefined1 *)(param_1 + 0x330) = 1;
  return;
}


