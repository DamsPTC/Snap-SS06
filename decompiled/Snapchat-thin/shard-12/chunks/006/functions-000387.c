/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092ab864; end: 1092ac093;  */

void FUN_1092ab864(long param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 *puVar8;
  long *plVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong *puVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  uint uVar21;
  long *plVar22;
  long lVar23;
  long *plStack_b0;
  long *plStack_a8;
  ulong *puStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  ulong *puStack_68;
  undefined8 **ppuVar7;
  
  (**(code **)**(undefined8 **)(param_1 + 0xc0))
            (&plStack_90,*(undefined8 **)(param_1 + 0xc0),0,0x30);
  piVar6 = (int *)*plStack_90;
  (*(code *)**(undefined8 **)piVar6)();
  lVar12 = *(long *)(piVar6 + 2);
  if (*piVar6 != 0x435a4c || piVar6[1] != 3) {
    ppuVar7 = &puStack_88;
    func_0x000107c31940(ppuVar7,&UNK_10f563854);
    uVar5 = SUB84(ppuVar7,0);
    __ZSt19uncaught_exceptionsv();
    plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f5635df,0x13);
    FUN_1092a22e8(&puStack_88);
  }
  (**(code **)**(undefined8 **)(param_1 + 0xc0))
            (&puStack_98,*(undefined8 **)(param_1 + 0xc0),0x30,lVar12);
  puVar8 = (undefined8 *)*puStack_98;
  (**(code **)*puVar8)();
  puStack_80 = (undefined8 *)(long)(int)lVar12;
  uVar17 = param_1 + 0x18;
  puStack_88 = puVar8;
  func_0x000107c30348(uVar17,&puStack_88);
  if ((uVar17 & 1) == 0) {
    ppuVar7 = &puStack_88;
    func_0x000107c31940(ppuVar7,&UNK_10f563854);
    uVar5 = SUB84(ppuVar7,0);
    __ZSt19uncaught_exceptionsv();
    plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f5635f3,0x21);
    FUN_1092a22e8(&puStack_88);
  }
  puVar15 = (ulong *)(param_1 + 0x90);
  puVar8 = (undefined8 *)*puVar15;
  *(long *)(param_1 + 0x100) = lVar12 + 0x30;
  uVar21 = *(uint *)(param_1 + 0x50);
  uVar17 = (ulong)(int)uVar21;
  plVar14 = *(long **)(param_1 + 0xa0);
  if ((ulong)((long)plVar14 - (long)puVar8 >> 4) < uVar17) {
    if ((int)uVar21 < 0) {
      FUN_1092af5e0();
LAB_1092abf84:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1092abf88);
      (*pcVar4)();
    }
    lVar18 = *(long *)(param_1 + 0x98);
    lVar12 = uVar17 << 4;
    puStack_68 = puVar15;
    __Znwm();
    _memcpy();
    *(long *)(param_1 + 0x90) = lVar12;
    *(long *)(param_1 + 0x98) = lVar12 + (lVar18 - (long)puVar8);
    *(ulong *)(param_1 + 0xa0) = lVar12 + uVar17 * 0x10;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    plStack_70 = plVar14;
    FUN_1092af5f4(&puStack_88);
    uVar21 = *(uint *)(param_1 + 0x50);
  }
  if (0 < (int)uVar21) {
    iVar16 = 0;
    do {
      plVar14 = (long *)0x78;
      __Znwm();
      plVar9 = plVar14 + 1;
      *plVar9 = 0;
      plVar14[2] = 0;
      *plVar14 = (long)&PTR_FUN_110ae82f0;
      plStack_b0 = plVar14 + 3;
      plVar14[5] = 0;
      *(undefined1 *)(plVar14 + 6) = 0;
      plVar14[7] = 0x32aaaba7;
      plVar14[9] = 0;
      plVar14[8] = 0;
      plVar14[0xb] = 0;
      plVar14[10] = 0;
      plVar14[0xd] = 0;
      plVar14[0xc] = 0;
      plVar14[0xe] = 0;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar22 = plVar14 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar3) {
          *plVar22 = *plVar22 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar14[3] = (long)(plVar14 + 3);
      plVar14[4] = (long)plVar14;
      do {
        lVar12 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_a8 = plVar14;
      if (lVar12 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
      plVar14 = *(long **)(param_1 + 0x98);
      plVar9 = *(long **)(param_1 + 0xa0);
      if (plVar14 < plVar9) {
        plVar22 = plVar14 + 2;
        plVar14[1] = (long)plStack_a8;
        *plVar14 = (long)plStack_b0;
      }
      else {
        puVar8 = (undefined8 *)*puVar15;
        uVar17 = ((long)plVar14 - (long)puVar8 >> 4) + 1;
        if (uVar17 >> 0x3c != 0) {
          FUN_1092af5e0();
          goto LAB_1092abf84;
        }
        uVar11 = (long)plVar9 - (long)puVar8 >> 3;
        if (uVar11 <= uVar17) {
          uVar11 = uVar17;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar9 - (long)puVar8)) {
          uVar11 = 0xfffffffffffffff;
        }
        if (uVar11 >> 0x3c != 0) {
          puStack_68 = puVar15;
          func_0x000104c4f740();
          goto LAB_1092abf84;
        }
        lVar12 = uVar11 << 4;
        puStack_68 = puVar15;
        __Znwm();
        plVar14 = (long *)(lVar12 + ((long)plVar14 - (long)puVar8));
        plVar22 = plVar14 + 2;
        plVar14[1] = (long)plStack_a8;
        *plVar14 = (long)plStack_b0;
        _memcpy();
        *(long *)(param_1 + 0x90) = lVar12;
        *(long **)(param_1 + 0x98) = plVar22;
        *(ulong *)(param_1 + 0xa0) = lVar12 + uVar11 * 0x10;
        puStack_88 = puVar8;
        puStack_80 = puVar8;
        puStack_78 = puVar8;
        plStack_70 = plVar9;
        FUN_1092af5f4(&puStack_88);
      }
      *(long **)(param_1 + 0x98) = plVar22;
      uVar21 = *(uint *)(param_1 + 0x50);
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)uVar21);
  }
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) && (uVar21 <= *(uint *)(param_1 + 0x60))) {
    ppuVar7 = &puStack_88;
    func_0x000107c31940(ppuVar7,&UNK_10f563854);
    uVar5 = SUB84(ppuVar7,0);
    __ZSt19uncaught_exceptionsv();
    plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f563615,0x1c);
    FUN_1092ac0ec(&puStack_88,*(undefined4 *)(param_1 + 0x60));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f563632,0xe);
    FUN_1092ac170(&puStack_88,*(undefined4 *)(param_1 + 0x50));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&DAT_10f684600,1);
    FUN_1092a22e8(&puStack_88);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_1092a9fe8(param_1 + 0xa8,(long)*(int *)(param_1 + 0x38));
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar18 = 0;
    lVar12 = 0;
    lVar13 = 8;
    do {
      uVar17 = *(ulong *)(param_1 + 0x30);
      puVar15 = (ulong *)(param_1 + 0x30);
      if ((uVar17 & 1) != 0) {
        puVar15 = (ulong *)(uVar17 + lVar13 + -1);
      }
      uVar17 = *puVar15;
      ppuVar10 = *(undefined ***)(uVar17 + 0x20);
      ppuVar1 = &PTR_PTR_1132cea20;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar1 = ppuVar10;
      }
      lVar23 = (long)(int)*(uint *)(ppuVar1 + 4);
      if (uVar21 <= *(uint *)(ppuVar1 + 4)) {
        ppuVar7 = &puStack_88;
        func_0x000107c31940(ppuVar7,&UNK_10f563854);
        uVar5 = SUB84(ppuVar7,0);
        __ZSt19uncaught_exceptionsv();
        plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar5);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f563641,0x1d);
        FUN_1092ac0ec(&puStack_88,lVar23);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f563632,0xe);
        FUN_1092ac170(&puStack_88,*(undefined4 *)(param_1 + 0x50));
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f56365f,0xe);
        FUN_1092ac170(&puStack_88,lVar12);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&DAT_10f684600,1);
        FUN_1092a22e8(&puStack_88);
        ppuVar10 = *(undefined ***)(uVar17 + 0x20);
      }
      uVar11 = *(ulong *)(param_1 + 0x48);
      puVar15 = (ulong *)(param_1 + 0x48);
      if ((uVar11 & 1) != 0) {
        puVar15 = (ulong *)(uVar11 + lVar23 * 8 + 7);
      }
      ppuVar1 = &PTR_PTR_1132cea20;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar1 = ppuVar10;
      }
      puVar20 = ppuVar1[3];
      uVar19 = *(ulong *)(uVar17 + 0x28);
      uVar11 = *(ulong *)(*puVar15 + 0x28);
      if (0x40000000 < uVar11) {
        ppuVar7 = &puStack_88;
        func_0x000107c31940(ppuVar7,&UNK_10f563854);
        uVar5 = SUB84(ppuVar7,0);
        __ZSt19uncaught_exceptionsv();
        plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar5);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f56366e,0x39);
        FUN_1092ac1f4(&puStack_88,uVar11);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636a8,0xe);
        FUN_1092ac0ec(&puStack_88,lVar23);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&DAT_10f684600,1);
        FUN_1092a22e8(&puStack_88);
      }
      if (uVar11 < uVar19 || (undefined *)(uVar11 - uVar19) < puVar20) {
        ppuVar7 = &puStack_88;
        func_0x000107c31940(ppuVar7,&UNK_10f563854);
        uVar5 = SUB84(ppuVar7,0);
        __ZSt19uncaught_exceptionsv();
        plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar5);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636b7,0x29);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636e1,8);
        FUN_1092ac1f4(&puStack_88,puVar20);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636ea,6);
        FUN_1092ac1f4(&puStack_88,uVar19);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636f1,0x14);
        FUN_1092ac1f4(&puStack_88,uVar11);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f563706,0xe);
        FUN_1092ac170(&puStack_88,lVar12);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&DAT_10f684600,1);
        FUN_1092a22e8(&puStack_88);
      }
      lVar23 = *(long *)(param_1 + 0xa8) + lVar18;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar23,*(ulong *)(uVar17 + 0x18) & 0xfffffffffffffffc);
      *(int *)(lVar23 + 0x18) = (int)*(undefined8 *)(param_1 + 0xf8);
      *(int *)(lVar23 + 0x20) = (int)*(undefined8 *)(uVar17 + 0x28);
      puStack_88 = (undefined8 *)(*(ulong *)(uVar17 + 0x18) & 0xfffffffffffffffc);
      lVar23 = param_1 + 0x68;
      FUN_1092afa68(lVar23,puStack_88,&UNK_10dd5b8f9,&puStack_88,&plStack_b0);
      *(int *)(lVar23 + 0x28) = (int)lVar12;
      *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + *(long *)(uVar17 + 0x28);
      lVar12 = lVar12 + 1;
      lVar18 = lVar18 + 0x28;
      lVar13 = lVar13 + 8;
    } while (lVar12 < *(int *)(param_1 + 0x38));
  }
  puVar15 = puStack_98;
  puStack_98 = (ulong *)0x0;
  if (puVar15 != (ulong *)0x0) {
    plVar14 = (long *)*puVar15;
    *puVar15 = 0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x40))();
    }
    __ZdlPv(puVar15);
  }
  plVar14 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar9 = (long *)*plVar14;
    *plVar14 = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x40))();
    }
    __ZdlPv(plVar14);
  }
  return;
}



/* Entry: 1092ac094; end: 1092ac0eb;  */

long FUN_1092ac094(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 1092ac0ec; end: 1092ac16f;  */

undefined8 FUN_1092ac0ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNSt3__19to_stringEj(&ppuStack_38,param_2);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return param_1;
}



/* Entry: 1092ac170; end: 1092ac1f3;  */

undefined8 FUN_1092ac170(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNSt3__19to_stringEi(&ppuStack_38,param_2);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return param_1;
}



/* Entry: 1092ac1f4; end: 1092ac277;  */

undefined8 FUN_1092ac1f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNSt3__19to_stringEy(&ppuStack_38,param_2);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return param_1;
}



/* Entry: 1092ac278; end: 1092ac3b7;  */

void FUN_1092ac278(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  (**(code **)(**(long **)(*param_2 + 8) + 0x18))();
  FUN_1092ac3b8(&lStack_58);
  if (*(char *)(param_1 + 0xf7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
  }
  *(long *)(param_1 + 0xe8) = lStack_50;
  *(long *)(param_1 + 0xe0) = lStack_58;
  *(undefined8 *)(param_1 + 0xf0) = uStack_48;
  puVar5 = (undefined8 *)0x38;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110ae84c8;
  lVar7 = *param_2;
  lVar2 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = *(long **)(lVar7 + 8);
  lStack_58 = lVar7;
  lStack_50 = lVar2;
  (**(code **)(*plVar6 + 0x10))();
  puVar5[3] = &PTR_FUN_110ae8518;
  puVar5[4] = plVar6;
  puVar5[5] = lVar7;
  puVar5[6] = lVar2;
  plVar6 = *(long **)(param_1 + 200);
  *(undefined8 **)(param_1 + 0xc0) = puVar5 + 3;
  *(undefined8 **)(param_1 + 200) = puVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  FUN_1092ab864(param_1);
  return;
}



/* Entry: 1092ac3b8; end: 1092ac46b;  */

void FUN_1092ac3b8(ulong *param_1,undefined8 *param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined8 *****pppppuVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *****pppppuVar8;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  undefined *puVar17;
  long *plStack_af8;
  long *plStack_af0;
  undefined8 *puStack_ae8;
  long lStack_ae0;
  undefined8 *puStack_ad8;
  long lStack_ad0;
  long *plStack_ac8;
  long *plStack_ac0;
  long *plStack_ab8;
  code *pcStack_ab0;
  undefined **ppuStack_aa8;
  long *plStack_aa0;
  long *plStack_a98;
  undefined8 *puStack_a90;
  long lStack_a88;
  long lStack_d0;
  undefined8 ****ppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  code **ppcVar9;
  
  __ZNKSt3__14__fs10filesystem4path13__parent_pathEv();
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppppuVar8 = &ppppuStack_58;
      if (param_3 == 0) goto LAB_1092ac43c;
    }
    else {
      pppppuVar3 = (undefined8 *****)0x19;
      if ((param_3 | 7) != 0x17) {
        pppppuVar3 = (undefined8 *****)((param_3 | 7) + 1);
      }
      pppppuVar8 = pppppuVar3;
      __Znwm();
      uStack_48 = (ulong)pppppuVar3 | 0x8000000000000000;
      ppppuStack_58 = pppppuVar8;
      uStack_50 = param_3;
    }
    _memmove(pppppuVar8,param_2,param_3);
LAB_1092ac43c:
    *(undefined1 *)((long)pppppuVar8 + param_3) = 0;
    param_1[1] = uStack_50;
    *param_1 = (ulong)ppppuStack_58;
    param_1[2] = uStack_48;
    return;
  }
  func_0x000104c4f6b8();
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_3 + 0x100);
  plVar4 = *(long **)(param_4 + 0x20);
  ppuVar2 = &PTR_PTR_1132cea48;
  if (*(undefined ***)(param_4 + 0x18) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_4 + 0x18);
  }
  puVar17 = ppuVar2[3];
  if ((long *)0x40000000 < plVar4) {
    ppcVar9 = &pcStack_ab0;
    func_0x000107c31940(ppcVar9,&UNK_10f563854);
    uVar7 = SUB84(ppcVar9,0);
    __ZSt19uncaught_exceptionsv();
    plStack_a98 = (long *)CONCAT44(plStack_a98._4_4_,uVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pcStack_ab0,&UNK_10f563715,0x29);
    FUN_1092ac1f4(&pcStack_ab0,plVar4);
    FUN_1092a22e8(&pcStack_ab0);
  }
  if ((*(byte *)(param_4 + 0x34) & 1) == 0) {
    (**(code **)**(undefined8 **)(param_3 + 0xc0))
              (param_2,*(undefined8 **)(param_3 + 0xc0),puVar17 + lVar16,plVar4);
  }
  else {
    if (*(char *)(param_3 + 0xd8) == '\x01') {
      (**(code **)**(undefined8 **)(param_3 + 0xc0))
                (&plStack_ab8,*(undefined8 **)(param_3 + 0xc0),puVar17 + lVar16,plVar4);
      (**(code **)(**(long **)(param_3 + 0xd0) + 0x18))
                (&plStack_ac8,*(long **)(param_3 + 0xd0),param_3 + 0xe0,plVar4);
      pcVar15 = (code *)plStack_ac8[3];
      (**(code **)(*(long *)pcVar15 + 0x30))(pcVar15,&UNK_10f563cd1);
      ppuStack_aa8 = (undefined **)0x0;
      pcStack_ab0 = pcVar15;
      plStack_aa0 = plVar4;
      FUN_1092b9184(&plStack_af8,*(long *)(pcVar15 + 8),&pcStack_ab0);
      func_0x000109d1a244(&plStack_af8);
      if ((((uint)plStack_af8[2] >> 1 & 1) == 0) || (((uint)plStack_af8[2] >> 5 & 1) != 0))
      goto LAB_1092ac8c4;
      puVar13 = (undefined8 *)plStack_af8[0x13];
      lVar16 = plStack_af8[0x14];
      if (lVar16 != 0) {
        plVar12 = (long *)(lVar16 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar1 = (ulong *)(plStack_af8 + 1);
      do {
        uVar14 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar14 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puStack_ad8 = puVar13;
      lStack_ad0 = lVar16;
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar14 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plStack_af8 + 8))();
        }
      }
      FUN_1092c37f8(&pcStack_ab0,param_5);
      puVar10 = (undefined8 *)*plStack_ab8;
      (**(code **)*puVar10)();
      FUN_1092c38a0(&pcStack_ab0,puVar10,plVar4,puVar13[3],puVar13[1]);
      plVar12 = plStack_ac0;
      plVar4 = plStack_ac8;
      plStack_af8 = plStack_ac8;
      plStack_af0 = plStack_ac0;
      plStack_ac8 = (long *)0x0;
      plStack_ac0 = (long *)0x0;
      puStack_ad8 = (undefined8 *)0x0;
      lStack_ad0 = 0;
      uVar11 = 0x10;
      puStack_ae8 = puVar13;
      lStack_ae0 = lVar16;
      __Znwm();
      pcStack_ab0 = FUN_1092b0970;
      ppuStack_aa8 = &PTR_FUN_110ae8568;
      plStack_aa0 = plVar4;
      plStack_a98 = plVar12;
      plStack_af8 = (long *)0x0;
      plStack_af0 = (long *)0x0;
      puStack_ae8 = (undefined8 *)0x0;
      lStack_ae0 = 0;
      puStack_a90 = puVar13;
      lStack_a88 = lVar16;
      FUN_1092c04b0();
      (*(code *)*ppuStack_aa8)(&ppuStack_aa8);
      plVar4 = plStack_ac0;
      *param_2 = uVar11;
      if (plStack_ac0 != (long *)0x0) {
        plVar12 = plStack_ac0 + 1;
        do {
          lVar16 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_ac0 + 0x10))(plStack_ac0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar4 = plStack_ab8;
      plStack_ab8 = (long *)0x0;
    }
    else {
      (**(code **)(**(long **)(param_3 + 0xc0) + 8))
                (&plStack_af8,*(long **)(param_3 + 0xc0),puVar17 + lVar16,plVar4);
      if (plStack_af8 != (long *)0x0) {
        plVar12 = (long *)*plStack_af8;
        (**(code **)(*plVar12 + 8))();
        FUN_1092c37f8(&pcStack_ab0,param_5);
        FUN_1092c38a0(&pcStack_ab0,plVar12,plVar4,plVar12,plVar4);
        *param_2 = plStack_af8;
        goto LAB_1092ac888;
      }
      (**(code **)**(undefined8 **)(param_3 + 0xc0))
                (&plStack_ac8,*(undefined8 **)(param_3 + 0xc0),puVar17 + lVar16,plVar4);
      puVar13 = (undefined8 *)*plStack_ac8;
      (**(code **)*puVar13)();
      FUN_1092c01cc(&puStack_ad8,plVar4,param_3);
      plVar12 = (long *)*puStack_ad8;
      (**(code **)(*plVar12 + 8))();
      FUN_1092c37f8(&pcStack_ab0,param_5);
      FUN_1092c38a0(&pcStack_ab0,puVar13,plVar4,plVar12,plVar4);
      plVar4 = plStack_ac8;
      *param_2 = puStack_ad8;
      plStack_ac8 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        plVar12 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x40))();
        }
        __ZdlPv(plVar4);
      }
      plVar4 = plStack_af8;
      plStack_af8 = (long *)0x0;
    }
    if (plVar4 != (long *)0x0) {
      plVar12 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x40))();
      }
      __ZdlPv(plVar4);
    }
  }
LAB_1092ac888:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return;
  }
  ___stack_chk_fail();
LAB_1092ac8c4:
  if (((uint)plStack_af8[2] >> 5 & 1) == 0) {
    puVar13 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar13 = &PTR_FUN_110ae85c0;
    ___cxa_throw(puVar13,&PTR_DAT_110ae8598,FUN_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_ab0,plStack_af8 + 0x12);
    FUN_1092af97c(&pcStack_ab0);
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x1092ac930);
  (*pcVar15)();
}



/* Entry: 1092ac46c; end: 1092acae3;  */

void FUN_1092ac46c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  undefined *puVar15;
  long *plStack_a98;
  long *plStack_a90;
  undefined8 *puStack_a88;
  long lStack_a80;
  undefined8 *puStack_a78;
  long lStack_a70;
  long *plStack_a68;
  long *plStack_a60;
  long *plStack_a58;
  code *pcStack_a50;
  undefined **ppuStack_a48;
  long *plStack_a40;
  long *plStack_a38;
  undefined8 *puStack_a30;
  long lStack_a28;
  long lStack_70;
  code **ppcVar7;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *(long *)(param_2 + 0x100);
  plVar3 = *(long **)(param_3 + 0x20);
  ppuVar2 = &PTR_PTR_1132cea48;
  if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_3 + 0x18);
  }
  puVar15 = ppuVar2[3];
  if ((long *)0x40000000 < plVar3) {
    ppcVar7 = &pcStack_a50;
    func_0x000107c31940(ppcVar7,&UNK_10f563854);
    uVar6 = SUB84(ppcVar7,0);
    __ZSt19uncaught_exceptionsv();
    plStack_a38 = (long *)CONCAT44(plStack_a38._4_4_,uVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pcStack_a50,&UNK_10f563715,0x29);
    FUN_1092ac1f4(&pcStack_a50,plVar3);
    FUN_1092a22e8(&pcStack_a50);
  }
  if ((*(byte *)(param_3 + 0x34) & 1) == 0) {
    (**(code **)**(undefined8 **)(param_2 + 0xc0))
              (param_1,*(undefined8 **)(param_2 + 0xc0),puVar15 + lVar14,plVar3);
  }
  else {
    if (*(char *)(param_2 + 0xd8) == '\x01') {
      (**(code **)**(undefined8 **)(param_2 + 0xc0))
                (&plStack_a58,*(undefined8 **)(param_2 + 0xc0),puVar15 + lVar14,plVar3);
      (**(code **)(**(long **)(param_2 + 0xd0) + 0x18))
                (&plStack_a68,*(long **)(param_2 + 0xd0),param_2 + 0xe0,plVar3);
      pcVar13 = (code *)plStack_a68[3];
      (**(code **)(*(long *)pcVar13 + 0x30))(pcVar13,&UNK_10f563cd1);
      ppuStack_a48 = (undefined **)0x0;
      pcStack_a50 = pcVar13;
      plStack_a40 = plVar3;
      FUN_1092b9184(&plStack_a98,*(long *)(pcVar13 + 8),&pcStack_a50);
      func_0x000109d1a244(&plStack_a98);
      if ((((uint)plStack_a98[2] >> 1 & 1) == 0) || (((uint)plStack_a98[2] >> 5 & 1) != 0))
      goto LAB_1092ac8c4;
      puVar11 = (undefined8 *)plStack_a98[0x13];
      lVar14 = plStack_a98[0x14];
      if (lVar14 != 0) {
        plVar10 = (long *)(lVar14 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar1 = (ulong *)(plStack_a98 + 1);
      do {
        uVar12 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar12 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puStack_a78 = puVar11;
      lStack_a70 = lVar14;
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar12 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plStack_a98 + 8))();
        }
      }
      FUN_1092c37f8(&pcStack_a50,param_4);
      puVar8 = (undefined8 *)*plStack_a58;
      (**(code **)*puVar8)();
      FUN_1092c38a0(&pcStack_a50,puVar8,plVar3,puVar11[3],puVar11[1]);
      plVar10 = plStack_a60;
      plVar3 = plStack_a68;
      plStack_a98 = plStack_a68;
      plStack_a90 = plStack_a60;
      plStack_a68 = (long *)0x0;
      plStack_a60 = (long *)0x0;
      puStack_a78 = (undefined8 *)0x0;
      lStack_a70 = 0;
      uVar9 = 0x10;
      puStack_a88 = puVar11;
      lStack_a80 = lVar14;
      __Znwm();
      pcStack_a50 = FUN_1092b0970;
      ppuStack_a48 = &PTR_FUN_110ae8568;
      plStack_a40 = plVar3;
      plStack_a38 = plVar10;
      plStack_a98 = (long *)0x0;
      plStack_a90 = (long *)0x0;
      puStack_a88 = (undefined8 *)0x0;
      lStack_a80 = 0;
      puStack_a30 = puVar11;
      lStack_a28 = lVar14;
      FUN_1092c04b0();
      (*(code *)*ppuStack_a48)(&ppuStack_a48);
      plVar3 = plStack_a60;
      *param_1 = uVar9;
      if (plStack_a60 != (long *)0x0) {
        plVar10 = plStack_a60 + 1;
        do {
          lVar14 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_a60 + 0x10))(plStack_a60);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      plVar3 = plStack_a58;
      plStack_a58 = (long *)0x0;
    }
    else {
      (**(code **)(**(long **)(param_2 + 0xc0) + 8))
                (&plStack_a98,*(long **)(param_2 + 0xc0),puVar15 + lVar14,plVar3);
      if (plStack_a98 != (long *)0x0) {
        plVar10 = (long *)*plStack_a98;
        (**(code **)(*plVar10 + 8))();
        FUN_1092c37f8(&pcStack_a50,param_4);
        FUN_1092c38a0(&pcStack_a50,plVar10,plVar3,plVar10,plVar3);
        *param_1 = plStack_a98;
        goto LAB_1092ac888;
      }
      (**(code **)**(undefined8 **)(param_2 + 0xc0))
                (&plStack_a68,*(undefined8 **)(param_2 + 0xc0),puVar15 + lVar14,plVar3);
      puVar11 = (undefined8 *)*plStack_a68;
      (**(code **)*puVar11)();
      FUN_1092c01cc(&puStack_a78,plVar3,param_2);
      plVar10 = (long *)*puStack_a78;
      (**(code **)(*plVar10 + 8))();
      FUN_1092c37f8(&pcStack_a50,param_4);
      FUN_1092c38a0(&pcStack_a50,puVar11,plVar3,plVar10,plVar3);
      plVar3 = plStack_a68;
      *param_1 = puStack_a78;
      plStack_a68 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        plVar10 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x40))();
        }
        __ZdlPv(plVar3);
      }
      plVar3 = plStack_a98;
      plStack_a98 = (long *)0x0;
    }
    if (plVar3 != (long *)0x0) {
      plVar10 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x40))();
      }
      __ZdlPv(plVar3);
    }
  }
LAB_1092ac888:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_1092ac8c4:
  if (((uint)plStack_a98[2] >> 5 & 1) == 0) {
    puVar11 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar11 = &PTR_FUN_110ae85c0;
    ___cxa_throw(puVar11,&PTR_DAT_110ae8598,FUN_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_a50,plStack_a98 + 0x12);
    FUN_1092af97c(&pcStack_a50);
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1092ac930);
  (*pcVar13)();
}



/* Entry: 1092acae4; end: 1092acba3;  */

void FUN_1092acae4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_48;
  
  lVar4 = param_2 + 0x68;
  FUN_1092b09c4(lVar4,param_3);
  if (lVar4 == 0) {
    uStack_48 = 0;
  }
  else {
    uVar5 = *(ulong *)(param_2 + 0x30);
    puVar1 = (ulong *)(param_2 + 0x30);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)*(int *)(lVar4 + 0x28) * 8 + 7);
    }
    uVar5 = *puVar1;
    ppuVar2 = &PTR_PTR_1132cea20;
    if (*(undefined ***)(uVar5 + 0x20) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar5 + 0x20);
    }
    iVar3 = *(int *)(ppuVar2 + 4);
    FUN_1092ace0c(param_2,(long)iVar3);
    ppuVar2 = &PTR_PTR_1132cea20;
    if (*(undefined ***)(uVar5 + 0x20) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar5 + 0x20);
    }
    FUN_1092ad1f8(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x90) + (long)iVar3 * 0x10),
                  ppuVar2[3],*(undefined8 *)(uVar5 + 0x28));
  }
  *param_1 = uStack_48;
  return;
}



/* Entry: 1092acba4; end: 1092acc7b;  */

void FUN_1092acba4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plStack_38;
  
  FUN_1092ac46c(&plStack_38,param_1,param_2,2);
  puVar2 = (undefined8 *)*plStack_38;
  (**(code **)*puVar2)();
  FUN_1092acd00(param_2,puVar2,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
  plVar1 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x40))();
    }
    __ZdlPv(plVar1);
  }
  return;
}



/* Entry: 1092acc7c; end: 1092accff;  */

undefined8 FUN_1092acc7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNSt3__19to_stringEm(&ppuStack_38,param_2);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return param_1;
}



/* Entry: 1092acd00; end: 1092ace0b;  */

void FUN_1092acd00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long *plStack_48;
  undefined8 *puVar3;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  func_0x0001092c3bac();
  uStack_68 = CONCAT44(uVar1,(undefined4)uStack_68);
  FUN_1092a2100(&plStack_48,&uStack_68);
  plVar2 = plStack_48;
  (**(code **)(*plStack_48 + 8))(plStack_48,param_2,param_3,param_4,param_5);
  if (*(long *)(param_1 + 0x20) != (long)(int)plVar2) {
    puVar3 = &uStack_68;
    func_0x000107c31940(puVar3,&UNK_10f563854);
    uVar1 = SUB84(puVar3,0);
    __ZSt19uncaught_exceptionsv();
    uStack_50 = uVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_68,&UNK_10f5638dd,0x18);
    FUN_1092a22e8(&uStack_68);
  }
  (**(code **)(*plStack_48 + 0x28))(plStack_48);
  return;
}



/* Entry: 1092ace0c; end: 1092ad1f7;  */

void FUN_1092ace0c(long param_1,ulong param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plStack_78;
  long *aplStack_70 [3];
  undefined4 uStack_58;
  long **pplVar7;
  
  iVar12 = (int)param_2;
  if ((iVar12 < 0) ||
     (lVar13 = *(long *)(param_1 + 0x90),
     (ulong)(*(long *)(param_1 + 0x98) - lVar13 >> 4) <= (param_2 & 0xffffffff))) {
    pplVar7 = aplStack_70;
    func_0x000107c31940(pplVar7,&UNK_10f563854);
    uVar6 = SUB84(pplVar7,0);
    __ZSt19uncaught_exceptionsv();
    uStack_58 = uVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (aplStack_70,&UNK_10f5637b6,0x17);
    FUN_1092ac170(aplStack_70,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (aplStack_70,&UNK_10f5637ce,0x1e);
    FUN_1092acc7c(aplStack_70,*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    FUN_1092a22e8(aplStack_70);
    lVar13 = *(long *)(param_1 + 0x90);
  }
  plVar10 = (long *)(lVar13 + (long)iVar12 * 0x10);
  if ((*(byte *)(*plVar10 + 0x18) & 1) == 0) {
    lVar13 = *plVar10;
    __ZNSt3__15mutex4lockEv(lVar13 + 0x20);
    if ((*(byte *)(*plVar10 + 0x18) & 1) == 0) {
      uVar14 = *(ulong *)(param_1 + 0x48);
      puVar2 = (ulong *)(param_1 + 0x48);
      if ((uVar14 & 1) != 0) {
        puVar2 = (ulong *)(uVar14 + (long)iVar12 * 8 + 7);
      }
      uVar14 = *puVar2;
      FUN_1092ac46c(&plStack_78,param_1,uVar14,*(undefined4 *)(param_1 + 0x10));
      plVar11 = plStack_78;
      lVar16 = *plVar10;
      plStack_78 = (long *)0x0;
      if (*(int *)(uVar14 + 0x30) == 0xf) {
        plVar10 = plVar11;
        plVar11 = (long *)0x0;
      }
      else {
        uVar15 = *(ulong *)(uVar14 + 0x28);
        if (uVar15 == 0) {
          puVar8 = (undefined8 *)0x8;
          __Znwm();
          *puVar8 = &PTR_FUN_110ae98b8;
          plVar10 = (long *)0x10;
          __Znwm();
          *(undefined4 *)(plVar10 + 1) = 4;
          *plVar10 = (long)puVar8;
        }
        else {
          if (0x40000000 < uVar15) {
            pplVar7 = aplStack_70;
            func_0x000107c31940(pplVar7,&UNK_10f563854);
            uVar6 = SUB84(pplVar7,0);
            __ZSt19uncaught_exceptionsv();
            uStack_58 = uVar6;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (aplStack_70,&UNK_10f563915,0x2b);
            FUN_1092ac1f4(aplStack_70,uVar15);
            FUN_1092a22e8(aplStack_70);
          }
          FUN_1092c01cc(aplStack_70,uVar15,param_1);
          puVar8 = (undefined8 *)*plVar11;
          (**(code **)*puVar8)();
          plVar10 = (long *)*plVar11;
          (**(code **)(*plVar10 + 0x18))();
          plVar9 = (long *)*aplStack_70[0];
          (**(code **)(*plVar9 + 8))();
          FUN_1092acd00(uVar14,puVar8,plVar10,plVar9,uVar15);
          plVar10 = aplStack_70[0];
        }
      }
      func_0x0001092af640(lVar16 + 0x10,plVar10);
      pbVar1 = (byte *)(lVar16 + 0x18);
      do {
        bVar3 = *pbVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar5) {
          *pbVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((bVar3 & 1) != 0) {
        pplVar7 = aplStack_70;
        func_0x000107c31940(pplVar7,&UNK_10f563854);
        uVar6 = SUB84(pplVar7,0);
        __ZSt19uncaught_exceptionsv();
        uStack_58 = uVar6;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (aplStack_70,&UNK_10f5638f6,0x1e);
        FUN_1092a22e8(aplStack_70);
      }
      if (plVar11 != (long *)0x0) {
        plVar10 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x40))();
        }
        __ZdlPv(plVar11);
      }
      plVar10 = plStack_78;
      plStack_78 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        plVar11 = (long *)*plVar10;
        *plVar10 = 0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x40))();
        }
        __ZdlPv(plVar10);
      }
    }
    __ZNSt3__15mutex6unlockEv(lVar13 + 0x20);
  }
  return;
}



/* Entry: 1092ad1f8; end: 1092ad377;  */

undefined *** FUN_1092ad1f8(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined *puVar11;
  long *unaff_x22;
  code **unaff_x26;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_4 == 0) || (unaff_x22 = param_2, (long *)param_2[2] == (long *)0x0)) {
    ppuVar7 = (undefined **)0x8;
    __Znwm();
    uVar9 = (undefined4)param_3;
    *ppuVar7 = (undefined *)&PTR_FUN_110ae98b8;
    pppuVar6 = (undefined ***)0x10;
    __Znwm();
    *(undefined4 *)(pppuVar6 + 1) = 4;
    *pppuVar6 = ppuVar7;
    *param_1 = pppuVar6;
  }
  else {
    puVar4 = *(undefined8 **)param_2[2];
    plVar8 = param_2;
    lVar10 = param_3;
    (**(code **)*puVar4)();
    uVar9 = (undefined4)lVar10;
    lVar10 = *param_2;
    lVar5 = param_2[1];
    pppuVar6 = (undefined ***)0x0;
    lStack_a8 = lVar10;
    if (lVar5 == 0) goto LAB_1092ad330;
    __ZNSt3__119__shared_weak_count4lockEv();
    pppuVar6 = (undefined ***)0x0;
    lStack_a0 = lVar5;
    if (lVar5 == 0) goto LAB_1092ad330;
    unaff_x22 = (long *)0x10;
    __Znwm();
    pcStack_98 = FUN_1092af6e4;
    ppuStack_90 = &PTR_FUN_110ae8268;
    unaff_x26 = &pcStack_98;
    lStack_a8 = 0;
    lStack_a0 = 0;
    param_2 = (long *)((long)puVar4 + param_3);
    lStack_88 = lVar10;
    lStack_80 = lVar5;
    FUN_1092c04b0();
    uVar9 = (undefined4)param_4;
    pppuVar6 = &ppuStack_90;
    (*(code *)*ppuStack_90)();
    *param_1 = unaff_x22;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  plVar8 = param_2;
LAB_1092ad330:
  FUN_1092315e8();
  (*(code *)*ppuStack_90)(unaff_x26 + 1);
  __ZdlPv(unaff_x22);
  func_0x0001092af68c(&lStack_a8);
  __Unwind_Resume();
  ppuVar7 = (undefined **)*plVar8;
  ppuVar12 = (undefined **)plVar8[1];
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar13 = ppuVar12 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar3) {
        *ppuVar13 = *ppuVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *pppuVar6 = &PTR_FUN_110ae8678;
  if (ppuVar7 == (undefined **)0x0) {
    pppuVar6[1] = &PTR_PTR_1132cee78;
    ppuVar7 = (undefined **)0x20;
    __Znwm();
    *ppuVar7 = (undefined *)&PTR_DAT_110ae8290;
    ppuVar7[1] = (undefined *)0x0;
    ppuVar7[2] = (undefined *)0x0;
    ppuVar7[3] = (undefined *)&PTR_PTR_1132cee78;
    pppuVar6[2] = ppuVar7;
    *(undefined4 *)(pppuVar6 + 3) = uVar9;
    if (ppuVar12 != (undefined **)0x0) {
      ppuVar7 = ppuVar12 + 1;
      do {
        puVar11 = *ppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar3) {
          *ppuVar7 = puVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuVar12 + 0x10))(ppuVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
      }
    }
  }
  else {
    pppuVar6[1] = ppuVar7;
    pppuVar6[2] = ppuVar12;
    *(undefined4 *)(pppuVar6 + 3) = uVar9;
  }
  *pppuVar6 = &PTR_FUN_110ae81e8;
  ppuVar7 = (undefined **)0x108;
  __Znwm();
  ppuVar13 = pppuVar6[2];
  ppuVar12 = pppuVar6[1];
  if (pppuVar6[2] != (undefined **)0x0) {
    ppuVar1 = pppuVar6[2] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuVar7[1] = (undefined *)ppuVar13;
  *ppuVar7 = (undefined *)ppuVar12;
  *(undefined4 *)(ppuVar7 + 2) = uVar9;
  ppuVar7[3] = (undefined *)&PTR_FUN_110ae7a48;
  ppuVar7[4] = (undefined *)0x0;
  ppuVar7[0xe] = (undefined *)0x0;
  ppuVar7[0xd] = (undefined *)0x0;
  ppuVar7[0x10] = (undefined *)0x0;
  ppuVar7[0xf] = (undefined *)0x0;
  ppuVar7[6] = (undefined *)0x0;
  ppuVar7[5] = (undefined *)0x0;
  ppuVar7[8] = (undefined *)0x0;
  ppuVar7[7] = (undefined *)0x0;
  ppuVar7[10] = (undefined *)0x0;
  ppuVar7[9] = (undefined *)0x0;
  *(undefined8 *)((long)ppuVar7 + 0x5c) = 0;
  *(undefined8 *)((long)ppuVar7 + 0x54) = 0;
  *(undefined4 *)(ppuVar7 + 0x11) = 0x3f800000;
  *(undefined1 *)(ppuVar7 + 0x1b) = 0;
  ppuVar7[0x13] = (undefined *)0x0;
  ppuVar7[0x12] = (undefined *)0x0;
  ppuVar7[0x15] = (undefined *)0x0;
  ppuVar7[0x14] = (undefined *)0x0;
  ppuVar7[0x17] = (undefined *)0x0;
  ppuVar7[0x16] = (undefined *)0x0;
  ppuVar7[0x19] = (undefined *)0x0;
  ppuVar7[0x18] = (undefined *)0x0;
  *(undefined1 *)(ppuVar7 + 0x1a) = 0;
  ppuVar7[0x20] = (undefined *)0x0;
  ppuVar7[0x1d] = (undefined *)0x0;
  ppuVar7[0x1c] = (undefined *)0x0;
  ppuVar7[0x1f] = (undefined *)0x0;
  ppuVar7[0x1e] = (undefined *)0x0;
  pppuVar6[4] = ppuVar7;
  return pppuVar6;
}



/* Entry: 1092ad378; end: 1092ad517;  */

undefined8 * FUN_1092ad378(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *param_2;
  plVar2 = (long *)param_2[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = &PTR_FUN_110ae8678;
  if (lVar6 == 0) {
    param_1[1] = &PTR_PTR_1132cee78;
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    *puVar5 = &PTR_DAT_110ae8290;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = &PTR_PTR_1132cee78;
    param_1[2] = puVar5;
    *(undefined4 *)(param_1 + 3) = param_3;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  else {
    param_1[1] = lVar6;
    param_1[2] = plVar2;
    *(undefined4 *)(param_1 + 3) = param_3;
  }
  *param_1 = &PTR_FUN_110ae81e8;
  puVar5 = (undefined8 *)0x108;
  __Znwm();
  uVar8 = param_1[2];
  uVar7 = param_1[1];
  if (param_1[2] != 0) {
    plVar2 = (long *)(param_1[2] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  *(undefined4 *)(puVar5 + 2) = param_3;
  puVar5[3] = &PTR_FUN_110ae7a48;
  puVar5[4] = 0;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  puVar5[0x10] = 0;
  puVar5[0xf] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  *(undefined8 *)((long)puVar5 + 0x5c) = 0;
  *(undefined8 *)((long)puVar5 + 0x54) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0x3f800000;
  *(undefined1 *)(puVar5 + 0x1b) = 0;
  puVar5[0x13] = 0;
  puVar5[0x12] = 0;
  puVar5[0x15] = 0;
  puVar5[0x14] = 0;
  puVar5[0x17] = 0;
  puVar5[0x16] = 0;
  puVar5[0x19] = 0;
  puVar5[0x18] = 0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x20] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x1e] = 0;
  param_1[4] = puVar5;
  return param_1;
}



/* Entry: 1092ad518; end: 1092ad59f;  */

undefined8 * FUN_1092ad518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae81e8;
  FUN_1092b0aa8(param_1 + 4);
  *param_1 = &PTR_FUN_110ae8678;
  func_0x0001092ab60c(param_1 + 1);
  return param_1;
}



/* Entry: 1092ad5a0; end: 1092ad733;  */

void FUN_1092ad5a0(long param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong *puVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined *puVar23;
  uint uVar24;
  long lVar25;
  long *plStack_b0;
  long *plStack_a8;
  ulong *puStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  ulong *puStack_68;
  undefined8 **ppuVar8;
  
  lVar15 = *(long *)(param_1 + 0x20);
  plVar11 = (long *)0xa8;
  __Znwm();
  plVar17 = plVar11 + 1;
  *plVar17 = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_FUN_110ae8340;
  plVar10 = plVar11 + 3;
  *plVar10 = (long)&PTR_FUN_110ae8390;
  lVar13 = param_2[0xc] - param_2[0xb];
  if (param_2[10] != 0) {
    lVar13 = param_2[10];
  }
  plVar11[4] = lVar13;
  plVar11[5] = 0;
  lVar13 = *param_2;
  lVar21 = param_2[1];
  *param_2 = 0;
  plVar11[6] = 0;
  plVar11[7] = lVar13;
  plVar11[8] = lVar21;
  (**(code **)(param_2[2] + 0x10))(plVar11 + 9);
  lVar21 = param_2[9];
  lVar13 = param_2[0xd];
  lVar25 = param_2[0xc];
  lVar16 = param_2[0xb];
  plVar11[0x11] = param_2[10];
  plVar11[0x10] = lVar21;
  plVar11[0x13] = lVar25;
  plVar11[0x12] = lVar16;
  plVar11[0x14] = lVar13;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xb] = 0;
  if (plVar11[6] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = *plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar11 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar11[5] = (long)plVar10;
    plVar11[6] = (long)plVar11;
  }
  else {
    if (*(long *)(plVar11[6] + 8) != -1) goto LAB_1092ad6e0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = *plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar11 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar11[5] = (long)plVar10;
    plVar11[6] = (long)plVar11;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar13 = *plVar17;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar4) {
      *plVar17 = lVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar13 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_1092ad6e0:
  plVar17 = *(long **)(lVar15 + 200);
  *(long **)(lVar15 + 0xc0) = plVar10;
  *(long **)(lVar15 + 200) = plVar11;
  if (plVar17 != (long *)0x0) {
    plVar11 = plVar17 + 1;
    do {
      lVar13 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  (**(code **)**(undefined8 **)(lVar15 + 0xc0))(&plStack_90,*(undefined8 **)(lVar15 + 0xc0),0,0x30);
  piVar7 = (int *)*plStack_90;
  (*(code *)**(undefined8 **)piVar7)();
  lVar13 = *(long *)(piVar7 + 2);
  if (*piVar7 != 0x435a4c || piVar7[1] != 3) {
    ppuVar8 = &puStack_88;
    func_0x000107c31940(ppuVar8,&UNK_10f563854);
    uVar6 = SUB84(ppuVar8,0);
    __ZSt19uncaught_exceptionsv();
    plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f5635df,0x13);
    FUN_1092a22e8(&puStack_88);
  }
  (**(code **)**(undefined8 **)(lVar15 + 0xc0))
            (&puStack_98,*(undefined8 **)(lVar15 + 0xc0),0x30,lVar13);
  puVar9 = (undefined8 *)*puStack_98;
  (**(code **)*puVar9)();
  puStack_80 = (undefined8 *)(long)(int)lVar13;
  uVar20 = lVar15 + 0x18;
  puStack_88 = puVar9;
  func_0x000107c30348(uVar20,&puStack_88);
  if ((uVar20 & 1) == 0) {
    ppuVar8 = &puStack_88;
    func_0x000107c31940(ppuVar8,&UNK_10f563854);
    uVar6 = SUB84(ppuVar8,0);
    __ZSt19uncaught_exceptionsv();
    plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f5635f3,0x21);
    FUN_1092a22e8(&puStack_88);
  }
  puVar18 = (ulong *)(lVar15 + 0x90);
  puVar9 = (undefined8 *)*puVar18;
  *(long *)(lVar15 + 0x100) = lVar13 + 0x30;
  uVar24 = *(uint *)(lVar15 + 0x50);
  uVar20 = (ulong)(int)uVar24;
  plVar11 = *(long **)(lVar15 + 0xa0);
  if ((ulong)((long)plVar11 - (long)puVar9 >> 4) < uVar20) {
    if ((int)uVar24 < 0) {
      FUN_1092af5e0();
LAB_1092abf84:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1092abf88);
      (*pcVar5)();
    }
    lVar21 = *(long *)(lVar15 + 0x98);
    lVar13 = uVar20 << 4;
    puStack_68 = puVar18;
    __Znwm();
    _memcpy();
    *(long *)(lVar15 + 0x90) = lVar13;
    *(long *)(lVar15 + 0x98) = lVar13 + (lVar21 - (long)puVar9);
    *(ulong *)(lVar15 + 0xa0) = lVar13 + uVar20 * 0x10;
    puStack_88 = puVar9;
    puStack_80 = puVar9;
    puStack_78 = puVar9;
    plStack_70 = plVar11;
    FUN_1092af5f4(&puStack_88);
    uVar24 = *(uint *)(lVar15 + 0x50);
  }
  if (0 < (int)uVar24) {
    iVar19 = 0;
    do {
      plVar11 = (long *)0x78;
      __Znwm();
      plVar10 = plVar11 + 1;
      *plVar10 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110ae82f0;
      plStack_b0 = plVar11 + 3;
      plVar11[5] = 0;
      *(undefined1 *)(plVar11 + 6) = 0;
      plVar11[7] = 0x32aaaba7;
      plVar11[9] = 0;
      plVar11[8] = 0;
      plVar11[0xb] = 0;
      plVar11[10] = 0;
      plVar11[0xd] = 0;
      plVar11[0xc] = 0;
      plVar11[0xe] = 0;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar17 = plVar11 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar11[3] = (long)(plVar11 + 3);
      plVar11[4] = (long)plVar11;
      do {
        lVar13 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_a8 = plVar11;
      if (lVar13 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
      plVar11 = *(long **)(lVar15 + 0x98);
      plVar10 = *(long **)(lVar15 + 0xa0);
      if (plVar11 < plVar10) {
        plVar17 = plVar11 + 2;
        plVar11[1] = (long)plStack_a8;
        *plVar11 = (long)plStack_b0;
      }
      else {
        puVar9 = (undefined8 *)*puVar18;
        uVar20 = ((long)plVar11 - (long)puVar9 >> 4) + 1;
        if (uVar20 >> 0x3c != 0) {
          FUN_1092af5e0();
          goto LAB_1092abf84;
        }
        uVar14 = (long)plVar10 - (long)puVar9 >> 3;
        if (uVar14 <= uVar20) {
          uVar14 = uVar20;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar10 - (long)puVar9)) {
          uVar14 = 0xfffffffffffffff;
        }
        if (uVar14 >> 0x3c != 0) {
          puStack_68 = puVar18;
          func_0x000104c4f740();
          goto LAB_1092abf84;
        }
        lVar13 = uVar14 << 4;
        puStack_68 = puVar18;
        __Znwm();
        plVar11 = (long *)(lVar13 + ((long)plVar11 - (long)puVar9));
        plVar17 = plVar11 + 2;
        plVar11[1] = (long)plStack_a8;
        *plVar11 = (long)plStack_b0;
        _memcpy();
        *(long *)(lVar15 + 0x90) = lVar13;
        *(long **)(lVar15 + 0x98) = plVar17;
        *(ulong *)(lVar15 + 0xa0) = lVar13 + uVar14 * 0x10;
        puStack_88 = puVar9;
        puStack_80 = puVar9;
        puStack_78 = puVar9;
        plStack_70 = plVar10;
        FUN_1092af5f4(&puStack_88);
      }
      *(long **)(lVar15 + 0x98) = plVar17;
      uVar24 = *(uint *)(lVar15 + 0x50);
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)uVar24);
  }
  if (((*(byte *)(lVar15 + 0x28) & 1) != 0) && (uVar24 <= *(uint *)(lVar15 + 0x60))) {
    ppuVar8 = &puStack_88;
    func_0x000107c31940(ppuVar8,&UNK_10f563854);
    uVar6 = SUB84(ppuVar8,0);
    __ZSt19uncaught_exceptionsv();
    plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f563615,0x1c);
    FUN_1092ac0ec(&puStack_88,*(undefined4 *)(lVar15 + 0x60));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f563632,0xe);
    FUN_1092ac170(&puStack_88,*(undefined4 *)(lVar15 + 0x50));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&DAT_10f684600,1);
    FUN_1092a22e8(&puStack_88);
  }
  *(undefined8 *)(lVar15 + 0xf8) = 0;
  FUN_1092a9fe8(lVar15 + 0xa8,(long)*(int *)(lVar15 + 0x38));
  if (0 < *(int *)(lVar15 + 0x38)) {
    lVar21 = 0;
    lVar13 = 0;
    lVar16 = 8;
    do {
      uVar20 = *(ulong *)(lVar15 + 0x30);
      puVar18 = (ulong *)(lVar15 + 0x30);
      if ((uVar20 & 1) != 0) {
        puVar18 = (ulong *)(uVar20 + lVar16 + -1);
      }
      uVar20 = *puVar18;
      ppuVar12 = *(undefined ***)(uVar20 + 0x20);
      ppuVar2 = &PTR_PTR_1132cea20;
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar2 = ppuVar12;
      }
      lVar25 = (long)(int)*(uint *)(ppuVar2 + 4);
      if (uVar24 <= *(uint *)(ppuVar2 + 4)) {
        ppuVar8 = &puStack_88;
        func_0x000107c31940(ppuVar8,&UNK_10f563854);
        uVar6 = SUB84(ppuVar8,0);
        __ZSt19uncaught_exceptionsv();
        plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f563641,0x1d);
        FUN_1092ac0ec(&puStack_88,lVar25);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f563632,0xe);
        FUN_1092ac170(&puStack_88,*(undefined4 *)(lVar15 + 0x50));
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f56365f,0xe);
        FUN_1092ac170(&puStack_88,lVar13);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&DAT_10f684600,1);
        FUN_1092a22e8(&puStack_88);
        ppuVar12 = *(undefined ***)(uVar20 + 0x20);
      }
      uVar14 = *(ulong *)(lVar15 + 0x48);
      puVar18 = (ulong *)(lVar15 + 0x48);
      if ((uVar14 & 1) != 0) {
        puVar18 = (ulong *)(uVar14 + lVar25 * 8 + 7);
      }
      ppuVar2 = &PTR_PTR_1132cea20;
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar2 = ppuVar12;
      }
      puVar23 = ppuVar2[3];
      uVar22 = *(ulong *)(uVar20 + 0x28);
      uVar14 = *(ulong *)(*puVar18 + 0x28);
      if (0x40000000 < uVar14) {
        ppuVar8 = &puStack_88;
        func_0x000107c31940(ppuVar8,&UNK_10f563854);
        uVar6 = SUB84(ppuVar8,0);
        __ZSt19uncaught_exceptionsv();
        plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f56366e,0x39);
        FUN_1092ac1f4(&puStack_88,uVar14);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636a8,0xe);
        FUN_1092ac0ec(&puStack_88,lVar25);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&DAT_10f684600,1);
        FUN_1092a22e8(&puStack_88);
      }
      if (uVar14 < uVar22 || (undefined *)(uVar14 - uVar22) < puVar23) {
        ppuVar8 = &puStack_88;
        func_0x000107c31940(ppuVar8,&UNK_10f563854);
        uVar6 = SUB84(ppuVar8,0);
        __ZSt19uncaught_exceptionsv();
        plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636b7,0x29);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636e1,8);
        FUN_1092ac1f4(&puStack_88,puVar23);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636ea,6);
        FUN_1092ac1f4(&puStack_88,uVar22);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636f1,0x14);
        FUN_1092ac1f4(&puStack_88,uVar14);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f563706,0xe);
        FUN_1092ac170(&puStack_88,lVar13);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&DAT_10f684600,1);
        FUN_1092a22e8(&puStack_88);
      }
      lVar25 = *(long *)(lVar15 + 0xa8) + lVar21;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar25,*(ulong *)(uVar20 + 0x18) & 0xfffffffffffffffc);
      *(int *)(lVar25 + 0x18) = (int)*(undefined8 *)(lVar15 + 0xf8);
      *(int *)(lVar25 + 0x20) = (int)*(undefined8 *)(uVar20 + 0x28);
      puStack_88 = (undefined8 *)(*(ulong *)(uVar20 + 0x18) & 0xfffffffffffffffc);
      lVar25 = lVar15 + 0x68;
      FUN_1092afa68(lVar25,puStack_88,&UNK_10dd5b8f9,&puStack_88,&plStack_b0);
      *(int *)(lVar25 + 0x28) = (int)lVar13;
      *(long *)(lVar15 + 0xf8) = *(long *)(lVar15 + 0xf8) + *(long *)(uVar20 + 0x28);
      lVar13 = lVar13 + 1;
      lVar21 = lVar21 + 0x28;
      lVar16 = lVar16 + 8;
    } while (lVar13 < *(int *)(lVar15 + 0x38));
  }
  puVar18 = puStack_98;
  puStack_98 = (ulong *)0x0;
  if (puVar18 != (ulong *)0x0) {
    plVar11 = (long *)*puVar18;
    *puVar18 = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x40))();
    }
    __ZdlPv(puVar18);
  }
  plVar11 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar10 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x40))();
    }
    __ZdlPv(plVar11);
  }
  return;
}



/* Entry: 1092ad734; end: 1092ad84f;  */

void FUN_1092ad734(long param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  ulong *puVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined *puVar25;
  uint uVar26;
  long *plVar27;
  long lVar28;
  long *plStack_b0;
  long *plStack_a8;
  ulong *puStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  ulong *puStack_68;
  undefined8 **ppuVar8;
  
  puVar17 = *(undefined8 **)(param_1 + 0x20);
  puVar11 = (undefined8 *)0x80;
  __Znwm();
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &PTR_DAT_110ae8430;
  uVar2 = *puVar17;
  lVar16 = puVar17[1];
  if (lVar16 != 0) {
    plVar19 = (long *)(lVar16 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar12 = *param_2;
  FUN_1092b1a98();
  puVar11[3] = &PTR_DAT_110ae8480;
  uVar14 = *param_2;
  *param_2 = 0;
  puVar11[4] = uVar12;
  puVar11[5] = uVar14;
  puVar11[6] = uVar2;
  puVar11[7] = lVar16;
  puVar11[8] = 0x32aaaba7;
  puVar11[10] = 0;
  puVar11[9] = 0;
  puVar11[0xc] = 0;
  puVar11[0xb] = 0;
  puVar11[0xe] = 0;
  puVar11[0xd] = 0;
  puVar11[0xf] = 0;
  plVar19 = (long *)puVar17[0x19];
  puVar17[0x18] = puVar11 + 3;
  puVar17[0x19] = puVar11;
  if (plVar19 != (long *)0x0) {
    plVar10 = plVar19 + 1;
    do {
      lVar16 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  (*(code *)**(undefined8 **)puVar17[0x18])(&plStack_90,(undefined8 *)puVar17[0x18],0,0x30);
  piVar7 = (int *)*plStack_90;
  (*(code *)**(undefined8 **)piVar7)();
  lVar16 = *(long *)(piVar7 + 2);
  if (*piVar7 != 0x435a4c || piVar7[1] != 3) {
    ppuVar8 = &puStack_88;
    func_0x000107c31940(ppuVar8,&UNK_10f563854);
    uVar6 = SUB84(ppuVar8,0);
    __ZSt19uncaught_exceptionsv();
    plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f5635df,0x13);
    FUN_1092a22e8(&puStack_88);
  }
  (*(code *)**(undefined8 **)puVar17[0x18])(&puStack_98,(undefined8 *)puVar17[0x18],0x30,lVar16);
  puVar9 = (undefined8 *)*puStack_98;
  (**(code **)*puVar9)();
  puStack_80 = (undefined8 *)(long)(int)lVar16;
  puVar11 = puVar17 + 3;
  puStack_88 = puVar9;
  func_0x000107c30348(puVar11,&puStack_88);
  if (((ulong)puVar11 & 1) == 0) {
    ppuVar8 = &puStack_88;
    func_0x000107c31940(ppuVar8,&UNK_10f563854);
    uVar6 = SUB84(ppuVar8,0);
    __ZSt19uncaught_exceptionsv();
    plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f5635f3,0x21);
    FUN_1092a22e8(&puStack_88);
  }
  puVar20 = puVar17 + 0x12;
  puVar11 = (undefined8 *)*puVar20;
  puVar17[0x20] = lVar16 + 0x30;
  uVar26 = *(uint *)(puVar17 + 10);
  uVar22 = (ulong)(int)uVar26;
  plVar19 = (long *)puVar17[0x14];
  if ((ulong)((long)plVar19 - (long)puVar11 >> 4) < uVar22) {
    if ((int)uVar26 < 0) {
      FUN_1092af5e0();
LAB_1092abf84:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1092abf88);
      (*pcVar5)();
    }
    lVar23 = puVar17[0x13];
    lVar16 = uVar22 << 4;
    puStack_68 = puVar20;
    __Znwm();
    _memcpy();
    puVar17[0x12] = lVar16;
    puVar17[0x13] = lVar16 + (lVar23 - (long)puVar11);
    puVar17[0x14] = lVar16 + uVar22 * 0x10;
    puStack_88 = puVar11;
    puStack_80 = puVar11;
    puStack_78 = puVar11;
    plStack_70 = plVar19;
    FUN_1092af5f4(&puStack_88);
    uVar26 = *(uint *)(puVar17 + 10);
  }
  if (0 < (int)uVar26) {
    iVar21 = 0;
    do {
      plVar19 = (long *)0x78;
      __Znwm();
      plVar10 = plVar19 + 1;
      *plVar10 = 0;
      plVar19[2] = 0;
      *plVar19 = (long)&PTR_FUN_110ae82f0;
      plStack_b0 = plVar19 + 3;
      plVar19[5] = 0;
      *(undefined1 *)(plVar19 + 6) = 0;
      plVar19[7] = 0x32aaaba7;
      plVar19[9] = 0;
      plVar19[8] = 0;
      plVar19[0xb] = 0;
      plVar19[10] = 0;
      plVar19[0xd] = 0;
      plVar19[0xc] = 0;
      plVar19[0xe] = 0;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar27 = plVar19 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar4) {
          *plVar27 = *plVar27 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar19[3] = (long)(plVar19 + 3);
      plVar19[4] = (long)plVar19;
      do {
        lVar16 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_a8 = plVar19;
      if (lVar16 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
      plVar19 = (long *)puVar17[0x13];
      plVar10 = (long *)puVar17[0x14];
      if (plVar19 < plVar10) {
        plVar27 = plVar19 + 2;
        plVar19[1] = (long)plStack_a8;
        *plVar19 = (long)plStack_b0;
      }
      else {
        puVar11 = (undefined8 *)*puVar20;
        uVar22 = ((long)plVar19 - (long)puVar11 >> 4) + 1;
        if (uVar22 >> 0x3c != 0) {
          FUN_1092af5e0();
          goto LAB_1092abf84;
        }
        uVar15 = (long)plVar10 - (long)puVar11 >> 3;
        if (uVar15 <= uVar22) {
          uVar15 = uVar22;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar10 - (long)puVar11)) {
          uVar15 = 0xfffffffffffffff;
        }
        if (uVar15 >> 0x3c != 0) {
          puStack_68 = puVar20;
          func_0x000104c4f740();
          goto LAB_1092abf84;
        }
        lVar16 = uVar15 << 4;
        puStack_68 = puVar20;
        __Znwm();
        plVar19 = (long *)(lVar16 + ((long)plVar19 - (long)puVar11));
        plVar27 = plVar19 + 2;
        plVar19[1] = (long)plStack_a8;
        *plVar19 = (long)plStack_b0;
        _memcpy();
        puVar17[0x12] = lVar16;
        puVar17[0x13] = plVar27;
        puVar17[0x14] = lVar16 + uVar15 * 0x10;
        puStack_88 = puVar11;
        puStack_80 = puVar11;
        puStack_78 = puVar11;
        plStack_70 = plVar10;
        FUN_1092af5f4(&puStack_88);
      }
      puVar17[0x13] = plVar27;
      uVar26 = *(uint *)(puVar17 + 10);
      iVar21 = iVar21 + 1;
    } while (iVar21 < (int)uVar26);
  }
  if (((*(byte *)(puVar17 + 5) & 1) != 0) && (uVar26 <= *(uint *)(puVar17 + 0xc))) {
    ppuVar8 = &puStack_88;
    func_0x000107c31940(ppuVar8,&UNK_10f563854);
    uVar6 = SUB84(ppuVar8,0);
    __ZSt19uncaught_exceptionsv();
    plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f563615,0x1c);
    FUN_1092ac0ec(&puStack_88,*(undefined4 *)(puVar17 + 0xc));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f563632,0xe);
    FUN_1092ac170(&puStack_88,*(undefined4 *)(puVar17 + 10));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&DAT_10f684600,1);
    FUN_1092a22e8(&puStack_88);
  }
  puVar17[0x1f] = 0;
  FUN_1092a9fe8(puVar17 + 0x15,(long)*(int *)(puVar17 + 7));
  if (0 < *(int *)(puVar17 + 7)) {
    lVar23 = 0;
    lVar16 = 0;
    lVar18 = 8;
    do {
      uVar22 = puVar17[6];
      puVar20 = puVar17 + 6;
      if ((uVar22 & 1) != 0) {
        puVar20 = (ulong *)(uVar22 + lVar18 + -1);
      }
      uVar22 = *puVar20;
      ppuVar13 = *(undefined ***)(uVar22 + 0x20);
      ppuVar1 = &PTR_PTR_1132cea20;
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar1 = ppuVar13;
      }
      lVar28 = (long)(int)*(uint *)(ppuVar1 + 4);
      if (uVar26 <= *(uint *)(ppuVar1 + 4)) {
        ppuVar8 = &puStack_88;
        func_0x000107c31940(ppuVar8,&UNK_10f563854);
        uVar6 = SUB84(ppuVar8,0);
        __ZSt19uncaught_exceptionsv();
        plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f563641,0x1d);
        FUN_1092ac0ec(&puStack_88,lVar28);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f563632,0xe);
        FUN_1092ac170(&puStack_88,*(undefined4 *)(puVar17 + 10));
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f56365f,0xe);
        FUN_1092ac170(&puStack_88,lVar16);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&DAT_10f684600,1);
        FUN_1092a22e8(&puStack_88);
        ppuVar13 = *(undefined ***)(uVar22 + 0x20);
      }
      uVar15 = puVar17[9];
      puVar20 = puVar17 + 9;
      if ((uVar15 & 1) != 0) {
        puVar20 = (ulong *)(uVar15 + lVar28 * 8 + 7);
      }
      ppuVar1 = &PTR_PTR_1132cea20;
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar1 = ppuVar13;
      }
      puVar25 = ppuVar1[3];
      uVar24 = *(ulong *)(uVar22 + 0x28);
      uVar15 = *(ulong *)(*puVar20 + 0x28);
      if (0x40000000 < uVar15) {
        ppuVar8 = &puStack_88;
        func_0x000107c31940(ppuVar8,&UNK_10f563854);
        uVar6 = SUB84(ppuVar8,0);
        __ZSt19uncaught_exceptionsv();
        plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f56366e,0x39);
        FUN_1092ac1f4(&puStack_88,uVar15);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636a8,0xe);
        FUN_1092ac0ec(&puStack_88,lVar28);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&DAT_10f684600,1);
        FUN_1092a22e8(&puStack_88);
      }
      if (uVar15 < uVar24 || (undefined *)(uVar15 - uVar24) < puVar25) {
        ppuVar8 = &puStack_88;
        func_0x000107c31940(ppuVar8,&UNK_10f563854);
        uVar6 = SUB84(ppuVar8,0);
        __ZSt19uncaught_exceptionsv();
        plStack_70 = (long *)CONCAT44(plStack_70._4_4_,uVar6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636b7,0x29);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636e1,8);
        FUN_1092ac1f4(&puStack_88,puVar25);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636ea,6);
        FUN_1092ac1f4(&puStack_88,uVar24);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f5636f1,0x14);
        FUN_1092ac1f4(&puStack_88,uVar15);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&UNK_10f563706,0xe);
        FUN_1092ac170(&puStack_88,lVar16);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_88,&DAT_10f684600,1);
        FUN_1092a22e8(&puStack_88);
      }
      lVar28 = puVar17[0x15] + lVar23;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar28,*(ulong *)(uVar22 + 0x18) & 0xfffffffffffffffc);
      *(int *)(lVar28 + 0x18) = (int)puVar17[0x1f];
      *(int *)(lVar28 + 0x20) = (int)*(undefined8 *)(uVar22 + 0x28);
      puStack_88 = (undefined8 *)(*(ulong *)(uVar22 + 0x18) & 0xfffffffffffffffc);
      puVar11 = puVar17 + 0xd;
      FUN_1092afa68(puVar11,puStack_88,&UNK_10dd5b8f9,&puStack_88,&plStack_b0);
      *(int *)(puVar11 + 5) = (int)lVar16;
      puVar17[0x1f] = puVar17[0x1f] + *(long *)(uVar22 + 0x28);
      lVar16 = lVar16 + 1;
      lVar23 = lVar23 + 0x28;
      lVar18 = lVar18 + 8;
    } while (lVar16 < *(int *)(puVar17 + 7));
  }
  puVar20 = puStack_98;
  puStack_98 = (ulong *)0x0;
  if (puVar20 != (ulong *)0x0) {
    plVar19 = (long *)*puVar20;
    *puVar20 = 0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x40))();
    }
    __ZdlPv(puVar20);
  }
  plVar19 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar10 = (long *)*plVar19;
    *plVar19 = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x40))();
    }
    __ZdlPv(plVar19);
  }
  return;
}



/* Entry: 1092ad850; end: 1092ad8df;  */

void FUN_1092ad850(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1092ac278(uVar5,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 1092ad8e0; end: 1092aecbf;  */

void FUN_1092ad8e0(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  long *plVar13;
  ulong *puVar14;
  long **pplVar15;
  undefined *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long **pplVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  undefined *puVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  undefined *puVar31;
  long *plStack_ae0;
  long *plStack_ad8;
  long *plStack_ad0;
  undefined4 uStack_ac8;
  long *plStack_ab8;
  long *plStack_ab0;
  long lStack_aa8;
  long lStack_aa0;
  long *plStack_a98;
  ulong *puStack_a90;
  long **pplStack_a88;
  long lStack_a80;
  long *plStack_a78;
  undefined8 *puStack_a70;
  long *plStack_a68;
  long *plStack_a60;
  long *plStack_a58;
  long *plStack_a48;
  undefined8 uStack_a40;
  long *plStack_a38;
  undefined4 uStack_a30;
  
  lVar28 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar28 + 0xd8) & 1) == 0) {
    FUN_1092acae4(&puStack_a90,lVar28,param_2);
    puVar14 = puStack_a90;
    if (puStack_a90 == (ulong *)0x0) {
      pplVar20 = &plStack_a48;
      func_0x000107c31940(pplVar20,&UNK_10f563854);
      uVar12 = SUB84(pplVar20,0);
      __ZSt19uncaught_exceptionsv();
      uStack_a30 = uVar12;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&plStack_a48,&UNK_10f56373f,0x29);
      uVar25 = param_2[1];
      puVar19 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar25 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar19 = param_2;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&plStack_a48,puVar19,uVar25);
      FUN_1092a22e8(&plStack_a48);
    }
    plVar23 = (long *)*puVar14;
    (**(code **)(*plVar23 + 0x18))();
    if (plVar23 != (long *)0x0) {
      plVar29 = *(long **)(param_3 + 0x18);
      (**(code **)(*plVar29 + 0x30))(plVar29,&UNK_10f563cd1);
      uStack_a40 = 0;
      plStack_a48 = plVar29;
      plStack_a38 = plVar23;
      FUN_1092b9184(&plStack_ab8,plVar29[1],&plStack_a48);
      func_0x000109d1a244(&plStack_ab8);
      if ((((uint)plStack_ab8[2] >> 1 & 1) == 0) || (((uint)plStack_ab8[2] >> 5 & 1) != 0)) {
        if (((uint)plStack_ab8[2] >> 5 & 1) == 0) {
          puVar19 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
          *puVar19 = &PTR_FUN_110ae85c0;
          ___cxa_throw(puVar19,&PTR_DAT_110ae8598,FUN_1092af9d8);
        }
        else {
          __ZNSt13exception_ptrC1ERKS_(&plStack_a48,plStack_ab8 + 0x12);
          FUN_1092af97c(&plStack_a48);
        }
        goto LAB_1092ae884;
      }
      plVar29 = (long *)plStack_ab8[0x13];
      plVar26 = (long *)plStack_ab8[0x14];
      if (plVar26 != (long *)0x0) {
        plVar18 = plVar26 + 1;
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar2 = (ulong *)(plStack_ab8 + 1);
      do {
        uVar25 = *puVar2;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar10) {
          *puVar2 = uVar25 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_ae0 = plVar29;
      plStack_ad8 = plVar26;
      if ((uVar25 & 0x1fffffffc) == 4) {
        do {
          uVar25 = *puVar2;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar10) {
            *puVar2 = uVar25 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plStack_ab8 + 8))();
        }
      }
      puVar19 = (undefined8 *)*puVar14;
      (**(code **)*puVar19)();
      _memmove(plVar29[3],puVar19,plVar23);
      if (plVar26 != (long *)0x0) {
        plVar23 = plVar26 + 1;
        do {
          lVar28 = *plVar23;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *plVar23 = lVar28 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar28 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      puVar14 = puStack_a90;
      if (puStack_a90 == (ulong *)0x0) {
        return;
      }
    }
    plVar23 = (long *)*puVar14;
    *puVar14 = 0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x40))();
    }
    __ZdlPv(puVar14);
  }
  else {
    lVar30 = lVar28 + 0x68;
    FUN_1092b09c4(lVar30,param_2);
    if (lVar30 == 0) {
      pplVar20 = &plStack_a48;
      func_0x000107c31940(pplVar20,&UNK_10f563854);
      uVar12 = SUB84(pplVar20,0);
      __ZSt19uncaught_exceptionsv();
      uStack_a30 = uVar12;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&plStack_a48,&UNK_10f563769,0x20);
      uVar25 = param_2[1];
      puVar19 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar25 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar19 = param_2;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&plStack_a48,puVar19,uVar25);
      FUN_1092a22e8(&plStack_a48);
    }
    uVar25 = *(ulong *)(lVar28 + 0x30);
    puVar14 = (ulong *)(lVar28 + 0x30);
    if ((uVar25 & 1) != 0) {
      puVar14 = (ulong *)(uVar25 + (long)*(int *)(lVar30 + 0x28) * 8 + 7);
    }
    ppuVar4 = *(undefined ***)(*puVar14 + 0x20);
    plVar23 = *(long **)(*puVar14 + 0x28);
    ppuVar3 = &PTR_PTR_1132cea20;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar3 = ppuVar4;
    }
    uVar25 = *(ulong *)(lVar28 + 0x48);
    puVar14 = (ulong *)(lVar28 + 0x48);
    if ((uVar25 & 1) != 0) {
      puVar14 = (ulong *)(uVar25 + (long)*(int *)(ppuVar3 + 4) * 8 + 7);
    }
    if (plVar23 != (long *)0x0) {
      uVar25 = *puVar14;
      puVar27 = ppuVar3[3];
      if ((puVar27 == (undefined *)0x0) && (plVar23 == *(long **)(uVar25 + 0x28))) {
        if (*(int *)(uVar25 + 0x30) == 1) {
          puVar19 = *(undefined8 **)(lVar28 + 0xc0);
          lVar30 = *(long *)(lVar28 + 0x100);
          uVar24 = *(ulong *)(uVar25 + 0x20);
          ppuVar3 = &PTR_PTR_1132cea48;
          if (*(undefined ***)(uVar25 + 0x18) != (undefined **)0x0) {
            ppuVar3 = *(undefined ***)(uVar25 + 0x18);
          }
          puVar31 = ppuVar3[3];
          cVar5 = *(char *)(uVar25 + 0x34);
          plVar29 = *(long **)(lVar28 + 0xd0);
          puVar27 = &UNK_10e010ee0;
          func_0x000107c2ae5c();
          if (puVar27 == (undefined *)0x0) {
            pplVar20 = &plStack_a48;
            func_0x000107c31940(pplVar20,&UNK_10f563854);
            uVar12 = SUB84(pplVar20,0);
            __ZSt19uncaught_exceptionsv();
            uStack_a30 = uVar12;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&plStack_a48,&UNK_10f56386d,0x19);
            FUN_1092a22e8(&plStack_a48);
          }
          *(undefined4 *)(puVar27 + 0x7174) = 0;
          *(undefined4 *)(puVar27 + 0x71d4) = 0;
          func_0x000107c2ae58(*(undefined8 *)(puVar27 + 0x7158));
          *(undefined4 *)(puVar27 + 0x7170) = 0;
          *(undefined8 *)(puVar27 + 0x7160) = 0;
          *(undefined8 *)(puVar27 + 0x7158) = 0;
          FUN_1092c37f8(&plStack_a48,2);
          plStack_a60 = (long *)0x0;
          plStack_a58 = (long *)0x0;
          puStack_a70 = (undefined8 *)0x0;
          plStack_a68 = (long *)0x0;
          if (cVar5 != '\0') {
            (**(code **)(*plVar29 + 0x18))(&plStack_ae0,plVar29,lVar28 + 0xe0,0x100000);
            plStack_a58 = plStack_ad8;
            plStack_a60 = plStack_ae0;
            plVar29 = (long *)plStack_ae0[3];
            (**(code **)(*plVar29 + 0x30))(plVar29,&UNK_10f563cd1);
            plStack_ad0 = (long *)0x100000;
            plStack_ad8 = (long *)0x0;
            plStack_ae0 = plVar29;
            FUN_1092b9184(&puStack_a90,plVar29[1],&plStack_ae0);
            func_0x000109d1a244(&puStack_a90);
            plVar29 = plStack_a68;
            if ((((uint)puStack_a90[2] >> 1 & 1) == 0) || (((uint)puStack_a90[2] >> 5 & 1) != 0)) {
              if (((uint)puStack_a90[2] >> 5 & 1) == 0) {
                puVar19 = (undefined8 *)0x10;
                ___cxa_allocate_exception();
                __ZNSt13runtime_errorC2EPKc();
                *puVar19 = &PTR_FUN_110ae85c0;
                ___cxa_throw(puVar19,&PTR_DAT_110ae8598,FUN_1092af9d8);
              }
              else {
                __ZNSt13exception_ptrC1ERKS_(&plStack_ae0,puStack_a90 + 0x12);
                FUN_1092af97c(&plStack_ae0);
              }
              goto LAB_1092ae884;
            }
            plVar26 = (long *)puStack_a90[0x14];
            puStack_a70 = (undefined8 *)puStack_a90[0x13];
            if (puStack_a90[0x14] != 0) {
              plVar18 = (long *)(puStack_a90[0x14] + 8);
              do {
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar10) {
                  *plVar18 = *plVar18 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            if (plStack_a68 != (long *)0x0) {
              plVar18 = plStack_a68 + 1;
              do {
                lVar28 = *plVar18;
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar10) {
                  *plVar18 = lVar28 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (lVar28 == 0) {
                lVar28 = *plStack_a68;
                plStack_a68 = plVar26;
                (**(code **)(lVar28 + 0x10))(plVar29);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
                plVar26 = plStack_a68;
              }
            }
            plStack_a68 = plVar26;
            if (puStack_a90 != (ulong *)0x0) {
              puVar14 = puStack_a90 + 1;
              do {
                uVar25 = *puVar14;
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                if (bVar10) {
                  *puVar14 = uVar25 - 4;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((uVar25 & 0x1fffffffc) == 4) {
                do {
                  uVar25 = *puVar14;
                  cVar7 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                  if (bVar10) {
                    *puVar14 = uVar25 - 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (uVar25 - 1 == 0) {
                  (**(code **)(*puStack_a90 + 8))();
                }
              }
            }
          }
          uVar25 = uVar24;
          if (0xfffff < uVar24) {
            uVar25 = 0x100000;
          }
          (**(code **)*puVar19)(&plStack_a78,puVar19,puVar31 + lVar30,uVar25);
          if (uVar24 == 0) {
            plVar29 = (long *)0x0;
          }
          else {
            uVar25 = 0;
            plVar29 = (long *)0x0;
            do {
              plVar26 = plStack_a78;
              pplVar20 = (long **)(uVar24 - uVar25);
              if ((long **)0xfffff < pplVar20) {
                pplVar20 = (long **)0x100000;
              }
              plStack_a78 = (long *)0x0;
              uVar25 = (long)pplVar20 + uVar25;
              uVar21 = uVar24 - uVar25;
              if (uVar25 <= uVar24 && uVar21 != 0) {
                if (0xfffff < uVar21) {
                  uVar21 = 0x100000;
                }
                (**(code **)*puVar19)(&plStack_ae0,puVar19,puVar31 + lVar30 + uVar25,uVar21);
                plVar18 = plStack_a78;
                plStack_a78 = plStack_ae0;
                plStack_ae0 = (long *)0x0;
                if (plVar18 != (long *)0x0) {
                  plVar13 = (long *)*plVar18;
                  *plVar18 = 0;
                  if (plVar13 != (long *)0x0) {
                    (**(code **)(*plVar13 + 0x40))();
                  }
                  __ZdlPv(plVar18);
                  plVar18 = plStack_ae0;
                  plStack_ae0 = (long *)0x0;
                  if (plVar18 != (long *)0x0) {
                    plVar13 = (long *)*plVar18;
                    *plVar18 = 0;
                    if (plVar13 != (long *)0x0) {
                      (**(code **)(*plVar13 + 0x40))();
                    }
                    __ZdlPv(plVar18);
                  }
                }
              }
              puVar14 = (ulong *)*plVar26;
              if (cVar5 == '\0') {
                (**(code **)*puVar14)();
              }
              else {
                (**(code **)*puVar14)();
                puVar8 = puStack_a70;
                pplVar15 = &plStack_a48;
                FUN_1092c38a0(pplVar15,puVar14,pplVar20,puStack_a70[3],pplVar20);
                puVar14 = (ulong *)*puVar8;
                pplVar20 = pplVar15;
              }
              lStack_a80 = 0;
              puStack_a90 = puVar14;
              pplStack_a88 = pplVar20;
              do {
                plVar18 = (long *)((long)plVar23 - (long)plVar29);
                if (plVar23 < plVar29 || plVar18 == (long *)0x0) break;
                if ((long *)0xfffff < plVar18) {
                  plVar18 = (long *)0x100000;
                }
                plVar13 = *(long **)(param_3 + 0x18);
                (**(code **)(*plVar13 + 0x30))(plVar13,&UNK_10f563cd1);
                plStack_ae0 = plVar13;
                plStack_ad8 = plVar29;
                plStack_ad0 = plVar18;
                FUN_1092b9184(&plStack_ab8,plVar13[1],&plStack_ae0);
                func_0x000109d1a244(&plStack_ab8);
                if ((((uint)plStack_ab8[2] >> 1 & 1) == 0) || (((uint)plStack_ab8[2] >> 5 & 1) != 0)
                   ) {
                  if (((uint)plStack_ab8[2] >> 5 & 1) == 0) {
                    puVar19 = (undefined8 *)0x10;
                    ___cxa_allocate_exception();
                    __ZNSt13runtime_errorC2EPKc();
                    *puVar19 = &PTR_FUN_110ae85c0;
                    ___cxa_throw(puVar19,&PTR_DAT_110ae8598,FUN_1092af9d8);
                  }
                  else {
                    __ZNSt13exception_ptrC1ERKS_(&plStack_ae0,plStack_ab8 + 0x12);
                    FUN_1092af97c(&plStack_ae0);
                  }
                  goto LAB_1092ae884;
                }
                lVar28 = plStack_ab8[0x13];
                plVar13 = (long *)plStack_ab8[0x14];
                if (plVar13 != (long *)0x0) {
                  plVar1 = plVar13 + 1;
                  do {
                    cVar7 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar10) {
                      *plVar1 = *plVar1 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                }
                puVar14 = (ulong *)(plStack_ab8 + 1);
                do {
                  uVar21 = *puVar14;
                  cVar7 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                  if (bVar10) {
                    *puVar14 = uVar21 - 4;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                lStack_aa0 = lVar28;
                plStack_a98 = plVar13;
                if ((uVar21 & 0x1fffffffc) == 4) {
                  do {
                    uVar21 = *puVar14;
                    cVar7 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                    if (bVar10) {
                      *puVar14 = uVar21 - 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (uVar21 - 1 == 0) {
                    (**(code **)(*plStack_ab8 + 8))();
                  }
                }
                lVar22 = lStack_a80;
                plStack_ab8 = *(long **)(lVar28 + 0x18);
                lStack_aa8 = 0;
                puVar16 = puVar27;
                plStack_ab0 = plVar18;
                FUN_1099efb64(puVar27,&plStack_ab8,&puStack_a90);
                if ((undefined *)0xffffffffffffff88 < puVar16) {
                  pplVar20 = &plStack_ae0;
                  func_0x000107c31940(pplVar20,&UNK_10f563854);
                  uVar12 = SUB84(pplVar20,0);
                  __ZSt19uncaught_exceptionsv();
                  uStack_ac8 = uVar12;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (&plStack_ae0,&UNK_10f563887,0x21);
                  uVar17 = (ulong)(uint)-(int)puVar16;
                  FUN_1099ae7ac(uVar17);
                  uVar21 = uVar17;
                  _strlen();
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (&plStack_ae0,uVar17,uVar21);
                  FUN_1092a22e8(&plStack_ae0);
                }
                lVar28 = lStack_aa8;
                bVar10 = lStack_a80 != lVar22;
                bVar11 = lStack_aa8 != 0;
                if (plVar13 != (long *)0x0) {
                  plVar18 = plVar13 + 1;
                  do {
                    lVar22 = *plVar18;
                    cVar7 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar6) {
                      *plVar18 = lVar22 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (lVar22 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
                plVar29 = (long *)(lVar28 + (long)plVar29);
              } while (bVar10 || bVar11);
              plVar18 = (long *)*plVar26;
              *plVar26 = 0;
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 0x40))();
              }
              __ZdlPv(plVar26);
            } while (uVar25 < uVar24);
          }
          if (plVar29 != plVar23) {
            pplVar20 = &plStack_ae0;
            func_0x000107c31940(pplVar20,&UNK_10f563854);
            uVar12 = SUB84(pplVar20,0);
            __ZSt19uncaught_exceptionsv();
            uStack_ac8 = uVar12;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&plStack_ae0,&UNK_10f5638a9,0x2e);
            pplVar20 = &plStack_ae0;
            FUN_1092acc7c(pplVar20,plVar29);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
            FUN_1092acc7c(pplVar20,plVar23);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
            FUN_1092a22e8(&plStack_ae0);
          }
          plVar23 = plStack_a78;
          plStack_a78 = (long *)0x0;
          if (plVar23 != (long *)0x0) {
            plVar29 = (long *)*plVar23;
            *plVar23 = 0;
            if (plVar29 != (long *)0x0) {
              (**(code **)(*plVar29 + 0x40))();
            }
            __ZdlPv(plVar23);
          }
          plVar23 = plStack_a68;
          if (plStack_a68 != (long *)0x0) {
            plVar29 = plStack_a68 + 1;
            do {
              lVar28 = *plVar29;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar10) {
                *plVar29 = lVar28 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar28 == 0) {
              (**(code **)(*plStack_a68 + 0x10))(plStack_a68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
            }
          }
          plVar23 = plStack_a58;
          if (plStack_a58 != (long *)0x0) {
            plVar29 = plStack_a58 + 1;
            do {
              lVar28 = *plVar29;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar10) {
                *plVar29 = lVar28 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar28 == 0) {
              (**(code **)(*plStack_a58 + 0x10))(plStack_a58);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
            }
          }
          func_0x000107c2ae60(puVar27);
          return;
        }
        plVar29 = *(long **)(param_3 + 0x18);
        (**(code **)(*plVar29 + 0x30))(plVar29,&UNK_10f563cd1);
        uStack_a40 = 0;
        plStack_a48 = plVar29;
        plStack_a38 = plVar23;
        FUN_1092b9184(&puStack_a90,plVar29[1],&plStack_a48);
        func_0x000109d1a244(&puStack_a90);
        if ((((uint)puStack_a90[2] >> 1 & 1) == 0) || (((uint)puStack_a90[2] >> 5 & 1) != 0)) {
          if (((uint)puStack_a90[2] >> 5 & 1) == 0) {
            puVar19 = (undefined8 *)0x10;
            ___cxa_allocate_exception();
            __ZNSt13runtime_errorC2EPKc();
            *puVar19 = &PTR_FUN_110ae85c0;
            ___cxa_throw(puVar19,&PTR_DAT_110ae8598,FUN_1092af9d8);
          }
          else {
            __ZNSt13exception_ptrC1ERKS_(&plStack_a48,puStack_a90 + 0x12);
            FUN_1092af97c(&plStack_a48);
          }
          goto LAB_1092ae884;
        }
        plVar29 = (long *)puStack_a90[0x13];
        plVar23 = (long *)puStack_a90[0x14];
        if (plVar23 != (long *)0x0) {
          plVar26 = plVar23 + 1;
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar10) {
              *plVar26 = *plVar26 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar14 = puStack_a90 + 1;
        do {
          uVar24 = *puVar14;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar10) {
            *puVar14 = uVar24 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_ae0 = plVar29;
        plStack_ad8 = plVar23;
        if ((uVar24 & 0x1fffffffc) == 4) {
          do {
            uVar24 = *puVar14;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar14,0x10);
            if (bVar10) {
              *puVar14 = uVar24 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar24 - 1 == 0) {
            (**(code **)(*puStack_a90 + 8))();
          }
        }
        FUN_1092acba4(lVar28,uVar25,plVar29[3],plVar29[1]);
        if (plVar23 == (long *)0x0) {
          return;
        }
        plVar29 = plVar23 + 1;
        do {
          lVar28 = *plVar29;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar10) {
            *plVar29 = lVar28 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar28 != 0) {
          return;
        }
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
      else {
        if (*(long **)(uVar25 + 0x28) < puVar27 + (long)plVar23) {
          pplVar20 = &plStack_a48;
          func_0x000107c31940(pplVar20,&UNK_10f563854);
          uVar12 = SUB84(pplVar20,0);
          __ZSt19uncaught_exceptionsv();
          uStack_a30 = uVar12;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&plStack_a48,&UNK_10f56378a,0x23);
          pplVar20 = &plStack_a48;
          FUN_1092acc7c(pplVar20,puVar27);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
          FUN_1092acc7c(pplVar20,plVar23);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
          FUN_1092acc7c(pplVar20,*(undefined8 *)(uVar25 + 0x28));
          FUN_1092a22e8(&plStack_a48);
        }
        plVar29 = *(long **)(param_3 + 0x18);
        (**(code **)(*plVar29 + 0x30))(plVar29,&UNK_10f563cd1);
        uStack_a40 = 0;
        plStack_a48 = plVar29;
        plStack_a38 = plVar23;
        FUN_1092b9184(&puStack_a90,plVar29[1],&plStack_a48);
        func_0x000109d1a244(&puStack_a90);
        if ((((uint)puStack_a90[2] >> 1 & 1) == 0) || (((uint)puStack_a90[2] >> 5 & 1) != 0)) {
          if (((uint)puStack_a90[2] >> 5 & 1) == 0) {
            puVar19 = (undefined8 *)0x10;
            ___cxa_allocate_exception();
            __ZNSt13runtime_errorC2EPKc();
            *puVar19 = &PTR_FUN_110ae85c0;
            ___cxa_throw(puVar19,&PTR_DAT_110ae8598,FUN_1092af9d8);
          }
          else {
            __ZNSt13exception_ptrC1ERKS_(&plStack_a48,puStack_a90 + 0x12);
            FUN_1092af97c(&plStack_a48);
          }
LAB_1092ae884:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1092ae888);
          (*pcVar9)();
        }
        plVar29 = (long *)puStack_a90[0x13];
        plStack_ad8 = (long *)puStack_a90[0x14];
        if (plStack_ad8 != (long *)0x0) {
          plVar26 = plStack_ad8 + 1;
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar10) {
              *plVar26 = *plVar26 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar14 = puStack_a90 + 1;
        do {
          uVar24 = *puVar14;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar10) {
            *puVar14 = uVar24 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_ae0 = plVar29;
        if ((uVar24 & 0x1fffffffc) == 4) {
          do {
            uVar24 = *puVar14;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar14,0x10);
            if (bVar10) {
              *puVar14 = uVar24 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar24 - 1 == 0) {
            (**(code **)(*puStack_a90 + 8))();
          }
        }
        (**(code **)(**(long **)(lVar28 + 0xd0) + 0x18))
                  (&puStack_a90,*(long **)(lVar28 + 0xd0),lVar28 + 0xe0,
                   *(undefined8 *)(uVar25 + 0x28));
        plVar18 = *(long **)(uVar25 + 0x28);
        plVar26 = (long *)puStack_a90[3];
        (**(code **)(*plVar26 + 0x30))(plVar26,&UNK_10f563cd1);
        uStack_a40 = 0;
        plStack_a48 = plVar26;
        plStack_a38 = plVar18;
        FUN_1092b9184(&plStack_a60,plVar26[1],&plStack_a48);
        func_0x000109d1a244(&plStack_a60);
        if ((((uint)plStack_a60[2] >> 1 & 1) == 0) || (((uint)plStack_a60[2] >> 5 & 1) != 0)) {
          if (((uint)plStack_a60[2] >> 5 & 1) == 0) {
            puVar19 = (undefined8 *)0x10;
            ___cxa_allocate_exception();
            __ZNSt13runtime_errorC2EPKc();
            *puVar19 = &PTR_FUN_110ae85c0;
            ___cxa_throw(puVar19,&PTR_DAT_110ae8598,FUN_1092af9d8);
          }
          else {
            __ZNSt13exception_ptrC1ERKS_(&plStack_a48,plStack_a60 + 0x12);
            FUN_1092af97c(&plStack_a48);
          }
          goto LAB_1092ae884;
        }
        plVar26 = (long *)plStack_a60[0x13];
        plVar18 = (long *)plStack_a60[0x14];
        if (plVar18 != (long *)0x0) {
          plVar13 = plVar18 + 1;
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar10) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar14 = (ulong *)(plStack_a60 + 1);
        do {
          uVar24 = *puVar14;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar10) {
            *puVar14 = uVar24 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_ab8 = plVar26;
        plStack_ab0 = plVar18;
        if ((uVar24 & 0x1fffffffc) == 4) {
          do {
            uVar24 = *puVar14;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar14,0x10);
            if (bVar10) {
              *puVar14 = uVar24 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar24 - 1 == 0) {
            (**(code **)(*plStack_a60 + 8))();
          }
        }
        FUN_1092acba4(lVar28,uVar25,plVar26[3],plVar26[1]);
        plVar13 = (long *)(plVar26[1] - (long)puVar27);
        if (plVar23 != (long *)0xffffffffffffffff) {
          plVar13 = plVar23;
        }
        if (plVar13 != (long *)0x0) {
          _memmove(plVar29[3],puVar27 + *plVar26);
        }
        if (plVar18 != (long *)0x0) {
          plVar23 = plVar18 + 1;
          do {
            lVar28 = *plVar23;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar10) {
              *plVar23 = lVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar28 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        if (pplStack_a88 != (long **)0x0) {
          pplVar20 = pplStack_a88 + 1;
          do {
            plVar23 = *pplVar20;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pplVar20,0x10);
            if (bVar10) {
              *pplVar20 = (long *)((long)plVar23 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (plVar23 == (long *)0x0) {
            (*(code *)(*pplStack_a88)[2])(pplStack_a88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pplStack_a88);
          }
        }
        plVar23 = plStack_ad8;
        if (plStack_ad8 == (long *)0x0) {
          return;
        }
        plVar29 = plStack_ad8 + 1;
        do {
          lVar28 = *plVar29;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar10) {
            *plVar29 = lVar28 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar28 != 0) {
          return;
        }
        (**(code **)(*plStack_ad8 + 0x10))(plStack_ad8);
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  return;
}



/* Entry: 1092aecc0; end: 1092aed07;  */

void FUN_1092aecc0(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (0 < *(int *)(lVar1 + 0x50)) {
    iVar2 = 0;
    do {
      FUN_1092ace0c(lVar1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0x50));
  }
  return;
}



/* Entry: 1092aed08; end: 1092aed1f;  */

void FUN_1092aed08(long param_1)

{
  byte *pbVar1;
  ulong *puVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plStack_78;
  long *aplStack_70 [3];
  undefined4 uStack_58;
  long **pplVar8;
  
  lVar13 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar13 + 0x28) & 1) == 0) {
    return;
  }
  uVar4 = *(uint *)(lVar13 + 0x60);
  if (((int)uVar4 < 0) ||
     (lVar14 = *(long *)(lVar13 + 0x90),
     (ulong)(*(long *)(lVar13 + 0x98) - lVar14 >> 4) <= (ulong)uVar4)) {
    pplVar8 = aplStack_70;
    func_0x000107c31940(pplVar8,&UNK_10f563854);
    uVar7 = SUB84(pplVar8,0);
    __ZSt19uncaught_exceptionsv();
    uStack_58 = uVar7;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (aplStack_70,&UNK_10f5637b6,0x17);
    FUN_1092ac170(aplStack_70,(ulong)uVar4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (aplStack_70,&UNK_10f5637ce,0x1e);
    FUN_1092acc7c(aplStack_70,*(long *)(lVar13 + 0x98) - *(long *)(lVar13 + 0x90) >> 4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    FUN_1092a22e8(aplStack_70);
    lVar14 = *(long *)(lVar13 + 0x90);
  }
  plVar11 = (long *)(lVar14 + (long)(int)uVar4 * 0x10);
  if ((*(byte *)(*plVar11 + 0x18) & 1) == 0) {
    lVar14 = *plVar11;
    __ZNSt3__15mutex4lockEv(lVar14 + 0x20);
    if ((*(byte *)(*plVar11 + 0x18) & 1) == 0) {
      uVar15 = *(ulong *)(lVar13 + 0x48);
      puVar2 = (ulong *)(lVar13 + 0x48);
      if ((uVar15 & 1) != 0) {
        puVar2 = (ulong *)(uVar15 + (long)(int)uVar4 * 8 + 7);
      }
      uVar15 = *puVar2;
      FUN_1092ac46c(&plStack_78,lVar13,uVar15,*(undefined4 *)(lVar13 + 0x10));
      plVar12 = plStack_78;
      lVar17 = *plVar11;
      plStack_78 = (long *)0x0;
      if (*(int *)(uVar15 + 0x30) == 0xf) {
        plVar11 = plVar12;
        plVar12 = (long *)0x0;
      }
      else {
        uVar16 = *(ulong *)(uVar15 + 0x28);
        if (uVar16 == 0) {
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = &PTR_FUN_110ae98b8;
          plVar11 = (long *)0x10;
          __Znwm();
          *(undefined4 *)(plVar11 + 1) = 4;
          *plVar11 = (long)puVar9;
        }
        else {
          if (0x40000000 < uVar16) {
            pplVar8 = aplStack_70;
            func_0x000107c31940(pplVar8,&UNK_10f563854);
            uVar7 = SUB84(pplVar8,0);
            __ZSt19uncaught_exceptionsv();
            uStack_58 = uVar7;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (aplStack_70,&UNK_10f563915,0x2b);
            FUN_1092ac1f4(aplStack_70,uVar16);
            FUN_1092a22e8(aplStack_70);
          }
          FUN_1092c01cc(aplStack_70,uVar16,lVar13);
          puVar9 = (undefined8 *)*plVar12;
          (**(code **)*puVar9)();
          plVar11 = (long *)*plVar12;
          (**(code **)(*plVar11 + 0x18))();
          plVar10 = (long *)*aplStack_70[0];
          (**(code **)(*plVar10 + 8))();
          FUN_1092acd00(uVar15,puVar9,plVar11,plVar10,uVar16);
          plVar11 = aplStack_70[0];
        }
      }
      func_0x0001092af640(lVar17 + 0x10,plVar11);
      pbVar1 = (byte *)(lVar17 + 0x18);
      do {
        bVar3 = *pbVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar6) {
          *pbVar1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((bVar3 & 1) != 0) {
        pplVar8 = aplStack_70;
        func_0x000107c31940(pplVar8,&UNK_10f563854);
        uVar7 = SUB84(pplVar8,0);
        __ZSt19uncaught_exceptionsv();
        uStack_58 = uVar7;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (aplStack_70,&UNK_10f5638f6,0x1e);
        FUN_1092a22e8(aplStack_70);
      }
      if (plVar12 != (long *)0x0) {
        plVar11 = (long *)*plVar12;
        *plVar12 = 0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x40))();
        }
        __ZdlPv(plVar12);
      }
      plVar11 = plStack_78;
      plStack_78 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        plVar12 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x40))();
        }
        __ZdlPv(plVar11);
      }
    }
    __ZNSt3__15mutex6unlockEv(lVar14 + 0x20);
  }
  return;
}



/* Entry: 1092aed20; end: 1092af1b3;  */

void FUN_1092aed20(long param_1,undefined8 *param_2,long *param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  int *piVar3;
  undefined4 uVar4;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong *unaff_x21;
  int *unaff_x22;
  undefined *puVar16;
  undefined **unaff_x24;
  ulong *unaff_x25;
  ulong uVar17;
  ulong *unaff_x27;
  long unaff_x28;
  int *piVar18;
  long alStack_210 [3];
  undefined8 uStack_1f8;
  long lStack_1f0;
  ulong *puStack_1e8;
  ulong *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  int *piStack_1c0;
  ulong *puStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  int *piStack_188;
  ulong *puStack_180;
  long *aplStack_178 [2];
  char cStack_161;
  undefined4 uStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  long alStack_140 [3];
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_70;
  long **pplVar5;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_1 + 0x20);
  puVar9 = (ulong *)(long)*(int *)(lVar15 + 0x50);
  FUN_1092a997c(alStack_140);
  uStack_e8 = (long *)((ulong)uStack_e8._4_4_ << 0x20);
  if (0 < *(int *)(lVar15 + 0x38)) {
    iVar12 = 0;
    unaff_x21 = (ulong *)(lVar15 + 0x30);
    unaff_x22 = (int *)0x18;
    do {
      puVar9 = unaff_x21;
      if ((*unaff_x21 & 1) != 0) {
        puVar9 = (ulong *)(*unaff_x21 + (long)iVar12 * 8 + 7);
      }
      ppuVar2 = &PTR_PTR_1132cea20;
      if (*(undefined ***)(*puVar9 + 0x20) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(*puVar9 + 0x20);
      }
      puVar9 = &uStack_e8;
      FUN_10923b3a0(alStack_140[0] + (long)*(int *)(ppuVar2 + 4) * 0x18);
      iVar12 = (int)uStack_e8 + 1;
      uStack_e8 = (long *)CONCAT44(uStack_e8._4_4_,iVar12);
    } while (iVar12 < *(int *)(lVar15 + 0x38));
  }
  if (0 < *(int *)(lVar15 + 0x50)) {
    unaff_x21 = (ulong *)0x0;
    unaff_x25 = (ulong *)(lVar15 + 0x30);
    unaff_x24 = &puStack_128;
    do {
      puVar9 = unaff_x21;
      FUN_1092ace0c(lVar15);
      puVar13 = (undefined8 *)(alStack_140[0] + (long)unaff_x21 * 0x18);
      piStack_188 = (int *)puVar13[1];
      puStack_180 = unaff_x21;
      for (unaff_x22 = (int *)*puVar13; unaff_x22 != piStack_188; unaff_x22 = unaff_x22 + 1) {
        puVar9 = unaff_x25;
        if ((*unaff_x25 & 1) != 0) {
          puVar9 = (ulong *)(*unaff_x25 + (long)*unaff_x22 * 8 + 7);
        }
        uVar17 = *puVar9;
        FUN_1092a4cfc(aplStack_178,param_2,*(ulong *)(uVar17 + 0x18) & 0xfffffffffffffffc);
        func_0x000107c31940(auStack_158,&UNK_10f5173d2);
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        uStack_f8 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        puStack_128 = &UNK_1069b161c;
        ppuStack_120 = &PTR_DAT_110950c70;
        FUN_1092b17dc(&uStack_e8,aplStack_178,auStack_158,&puStack_128);
        (*(code *)*ppuStack_120)(&ppuStack_120);
        if (cStack_141 < '\0') {
          __ZdlPv(auStack_158[0]);
        }
        if (cStack_161 < '\0') {
          __ZdlPv(aplStack_178[0]);
        }
        if (uStack_e8 == (long *)0x0) {
          pplVar5 = aplStack_178;
          func_0x000107c31940(pplVar5,&UNK_10f563854);
          uVar4 = SUB84(pplVar5,0);
          __ZSt19uncaught_exceptionsv();
          uStack_160 = uVar4;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (aplStack_178,&UNK_10f5637ed,0x1b);
          uVar14 = param_2[1];
          puVar13 = (undefined8 *)*param_2;
          if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
            uVar14 = (ulong)*(byte *)((long)param_2 + 0x17);
            puVar13 = param_2;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (aplStack_178,puVar13,uVar14);
          puVar13 = (undefined8 *)(*(ulong *)(uVar17 + 0x18) & 0xfffffffffffffffc);
          lVar10 = (long)*(char *)((long)puVar13 + 0x17);
          if (lVar10 < 0) {
            lVar10 = puVar13[1];
            puVar13 = (undefined8 *)*puVar13;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (aplStack_178,puVar13,lVar10);
          FUN_1092a22e8(aplStack_178);
        }
        unaff_x28 = *(long *)(uVar17 + 0x28);
        ppuVar2 = &PTR_PTR_1132cea20;
        if (*(undefined ***)(uVar17 + 0x20) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar17 + 0x20);
        }
        puVar16 = ppuVar2[3];
        lVar10 = (long)puStack_180 * 0x10;
        puVar13 = *(undefined8 **)(*(long *)(*(long *)(lVar15 + 0x90) + lVar10) + 0x10);
        if (puVar13 == (undefined8 *)0x0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)*puVar13;
          (**(code **)(*plVar6 + 0x18))();
        }
        if (plVar6 < puVar16 + unaff_x28) {
          pplVar5 = aplStack_178;
          func_0x000107c31940(pplVar5,&UNK_10f563854);
          uVar4 = SUB84(pplVar5,0);
          __ZSt19uncaught_exceptionsv();
          uStack_160 = uVar4;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (aplStack_178,&UNK_10f563809,0x12);
          puVar13 = (undefined8 *)(*(ulong *)(uVar17 + 0x18) & 0xfffffffffffffffc);
          lVar11 = (long)*(char *)((long)puVar13 + 0x17);
          if (lVar11 < 0) {
            lVar11 = puVar13[1];
            puVar13 = (undefined8 *)*puVar13;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (aplStack_178,puVar13,lVar11);
          FUN_1092a22e8(aplStack_178);
        }
        ppuVar2 = &PTR_PTR_1132cea20;
        if (*(undefined ***)(uVar17 + 0x20) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar17 + 0x20);
        }
        FUN_1092ad1f8(aplStack_178,*(undefined8 *)(*(long *)(lVar15 + 0x90) + lVar10),ppuVar2[3],
                      *(undefined8 *)(uVar17 + 0x28));
        plVar6 = aplStack_178[0];
        unaff_x27 = (ulong *)*aplStack_178[0];
        (**(code **)*unaff_x27)();
        param_3 = (long *)*plVar6;
        (**(code **)(*param_3 + 0x18))();
        puVar9 = unaff_x27;
        FUN_1092b1f3c(&uStack_e8);
        plVar7 = (long *)*plVar6;
        *plVar6 = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x40))();
        }
        __ZdlPv(plVar6);
        FUN_1092b2248(&uStack_e8);
      }
      unaff_x21 = (ulong *)((long)puStack_180 + 1);
    } while ((long)unaff_x21 < (long)*(int *)(lVar15 + 0x50));
  }
  uStack_e8 = alStack_140;
  puVar13 = &uStack_e8;
  func_0x0001092a9abc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = puVar13;
  __Unwind_Resume();
  ppuStack_1c8 = &PTR_PTR_1132cea20;
  pcStack_198 = FUN_1092af1b4;
  lVar11 = puVar8[4];
  lVar10 = *(ulong *)(lVar11 + 0xf8) - (puVar9[1] - *puVar9);
  lStack_1f0 = unaff_x28;
  puStack_1e8 = unaff_x27;
  puStack_1d8 = unaff_x25;
  ppuStack_1d0 = unaff_x24;
  piStack_1c0 = unaff_x22;
  puStack_1b8 = unaff_x21;
  lStack_1b0 = lVar15;
  puStack_1a8 = puVar13;
  puStack_1a0 = &stack0xfffffffffffffff0;
  if (puVar9[1] - *puVar9 <= *(ulong *)(lVar11 + 0xf8) && lVar10 != 0) {
    func_0x000107c27d58(puVar9,lVar10);
  }
  if ((long *)(lVar11 + 0xa8) != param_3) {
    FUN_1092a8954(param_3,*(long *)(lVar11 + 0xa8),*(long *)(lVar11 + 0xb0),
                  (*(long *)(lVar11 + 0xb0) - *(long *)(lVar11 + 0xa8) >> 3) * -0x3333333333333333);
  }
  FUN_1092a997c(alStack_210,(long)*(int *)(lVar11 + 0x50));
  uStack_1f8 = (long *)((ulong)uStack_1f8._4_4_ << 0x20);
  if (0 < *(int *)(lVar11 + 0x38)) {
    iVar12 = 0;
    do {
      uVar17 = *(ulong *)(lVar11 + 0x30);
      puVar1 = (ulong *)(lVar11 + 0x30);
      if ((uVar17 & 1) != 0) {
        puVar1 = (ulong *)(uVar17 + (long)iVar12 * 8 + 7);
      }
      ppuVar2 = &PTR_PTR_1132cea20;
      if (*(undefined ***)(*puVar1 + 0x20) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(*puVar1 + 0x20);
      }
      FUN_10923b3a0(alStack_210[0] + (long)*(int *)(ppuVar2 + 4) * 0x18,&uStack_1f8);
      iVar12 = (int)uStack_1f8 + 1;
      uStack_1f8 = (long *)CONCAT44(uStack_1f8._4_4_,iVar12);
    } while (iVar12 < *(int *)(lVar11 + 0x38));
  }
  if (0 < *(int *)(lVar11 + 0x50)) {
    lVar15 = 0;
    uVar17 = 0;
    do {
      FUN_1092ace0c(lVar11,lVar15);
      puVar13 = (undefined8 *)(alStack_210[0] + lVar15 * 0x18);
      piVar3 = (int *)puVar13[1];
      for (piVar18 = (int *)*puVar13; piVar18 != piVar3; piVar18 = piVar18 + 1) {
        plVar6 = (long *)(lVar11 + 0x30);
        if ((*(ulong *)(lVar11 + 0x30) & 1) != 0) {
          plVar6 = (long *)(*(ulong *)(lVar11 + 0x30) + (long)*piVar18 * 8 + 7);
        }
        lVar10 = *plVar6;
        ppuVar2 = &PTR_PTR_1132cea20;
        if (*(undefined ***)(lVar10 + 0x20) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(lVar10 + 0x20);
        }
        FUN_1092ad1f8(&uStack_1f8,*(undefined8 *)(*(long *)(lVar11 + 0x90) + lVar15 * 0x10),
                      ppuVar2[3],*(undefined8 *)(lVar10 + 0x28));
        plVar6 = uStack_1f8;
        uVar14 = *puVar9;
        puVar13 = (undefined8 *)*uStack_1f8;
        (**(code **)*puVar13)();
        plVar7 = (long *)*plVar6;
        (**(code **)(*plVar7 + 0x18))();
        _memcpy(uVar14 + uVar17,puVar13,plVar7);
        iVar12 = *(int *)(lVar10 + 0x28);
        plVar7 = (long *)*plVar6;
        *plVar6 = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x40))();
        }
        uVar17 = (ulong)(uint)((int)uVar17 + iVar12);
        __ZdlPv(plVar6);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(lVar11 + 0x50));
  }
  uStack_1f8 = alStack_210;
  func_0x0001092a9abc(&uStack_1f8);
  return;
}



/* Entry: 1092af1b4; end: 1092af427;  */

void FUN_1092af1b4(long param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined **ppuVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long alStack_80 [3];
  undefined8 uStack_68;
  
  lVar10 = *(long *)(param_1 + 0x20);
  lVar11 = *(ulong *)(lVar10 + 0xf8) - (param_2[1] - *param_2);
  if ((ulong)(param_2[1] - *param_2) <= *(ulong *)(lVar10 + 0xf8) && lVar11 != 0) {
    func_0x000107c27d58(param_2,lVar11);
  }
  if (lVar10 + 0xa8 != param_3) {
    FUN_1092a8954(param_3,*(long *)(lVar10 + 0xa8),*(long *)(lVar10 + 0xb0),
                  (*(long *)(lVar10 + 0xb0) - *(long *)(lVar10 + 0xa8) >> 3) * -0x3333333333333333);
  }
  FUN_1092a997c(alStack_80,(long)*(int *)(lVar10 + 0x50));
  uStack_68 = (long *)((ulong)uStack_68._4_4_ << 0x20);
  if (0 < *(int *)(lVar10 + 0x38)) {
    iVar6 = 0;
    do {
      uVar8 = *(ulong *)(lVar10 + 0x30);
      puVar1 = (ulong *)(lVar10 + 0x30);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar6 * 8 + 7);
      }
      ppuVar3 = &PTR_PTR_1132cea20;
      if (*(undefined ***)(*puVar1 + 0x20) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(*puVar1 + 0x20);
      }
      FUN_10923b3a0(alStack_80[0] + (long)*(int *)(ppuVar3 + 4) * 0x18,&uStack_68);
      iVar6 = (int)uStack_68 + 1;
      uStack_68 = (long *)CONCAT44(uStack_68._4_4_,iVar6);
    } while (iVar6 < *(int *)(lVar10 + 0x38));
  }
  if (0 < *(int *)(lVar10 + 0x50)) {
    lVar11 = 0;
    uVar8 = 0;
    do {
      FUN_1092ace0c(lVar10,lVar11);
      puVar7 = (undefined8 *)(alStack_80[0] + lVar11 * 0x18);
      piVar4 = (int *)puVar7[1];
      for (piVar13 = (int *)*puVar7; piVar13 != piVar4; piVar13 = piVar13 + 1) {
        plVar2 = (long *)(lVar10 + 0x30);
        if ((*(ulong *)(lVar10 + 0x30) & 1) != 0) {
          plVar2 = (long *)(*(ulong *)(lVar10 + 0x30) + (long)*piVar13 * 8 + 7);
        }
        lVar12 = *plVar2;
        ppuVar3 = &PTR_PTR_1132cea20;
        if (*(undefined ***)(lVar12 + 0x20) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(lVar12 + 0x20);
        }
        FUN_1092ad1f8(&uStack_68,*(undefined8 *)(*(long *)(lVar10 + 0x90) + lVar11 * 0x10),
                      ppuVar3[3],*(undefined8 *)(lVar12 + 0x28));
        plVar2 = uStack_68;
        lVar9 = *param_2;
        puVar7 = (undefined8 *)*uStack_68;
        (**(code **)*puVar7)();
        plVar5 = (long *)*plVar2;
        (**(code **)(*plVar5 + 0x18))();
        _memcpy(lVar9 + uVar8,puVar7,plVar5);
        iVar6 = *(int *)(lVar12 + 0x28);
        plVar5 = (long *)*plVar2;
        *plVar2 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x40))();
        }
        uVar8 = (ulong)(uint)((int)uVar8 + iVar6);
        __ZdlPv(plVar2);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar10 + 0x50));
  }
  uStack_68 = alStack_80;
  func_0x0001092a9abc(&uStack_68);
  return;
}



/* Entry: 1092af428; end: 1092af44b;  */

void FUN_1092af428(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(param_2 + 0x20);
  lVar4 = lVar5 + 0x68;
  FUN_1092b09c4(lVar4,param_3);
  if (lVar4 == 0) {
    uStack_48 = 0;
  }
  else {
    uVar6 = *(ulong *)(lVar5 + 0x30);
    puVar1 = (ulong *)(lVar5 + 0x30);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)*(int *)(lVar4 + 0x28) * 8 + 7);
    }
    uVar6 = *puVar1;
    ppuVar2 = &PTR_PTR_1132cea20;
    if (*(undefined ***)(uVar6 + 0x20) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar6 + 0x20);
    }
    iVar3 = *(int *)(ppuVar2 + 4);
    FUN_1092ace0c(lVar5,(long)iVar3);
    ppuVar2 = &PTR_PTR_1132cea20;
    if (*(undefined ***)(uVar6 + 0x20) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar6 + 0x20);
    }
    FUN_1092ad1f8(&uStack_48,*(undefined8 *)(*(long *)(lVar5 + 0x90) + (long)iVar3 * 0x10),
                  ppuVar2[3],*(undefined8 *)(uVar6 + 0x28));
  }
  *param_1 = uStack_48;
  return;
}



/* Entry: 1092af44c; end: 1092af5df;  */

void FUN_1092af44c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *aplStack_48 [3];
  
  puVar1 = *(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000107c31940(param_1,&UNK_10f56381c);
  }
  else {
    (**(code **)*puVar1)(aplStack_48,puVar1,0,puVar1[1]);
    puVar1 = (undefined8 *)*aplStack_48[0];
    (**(code **)*puVar1)();
    plVar2 = (long *)*aplStack_48[0];
    (**(code **)(*plVar2 + 0x18))();
    FUN_1092c3638(param_1,puVar1,plVar2);
    plVar2 = aplStack_48[0];
    aplStack_48[0] = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar3 = (long *)*plVar2;
      *plVar2 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x40))();
      }
      __ZdlPv(plVar2);
    }
  }
  return;
}



/* Entry: 1092af5e0; end: 1092af5f3;  */

long * FUN_1092af5e0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x10;
    FUN_1092ac094();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 1092af5f4; end: 1092af6e3;  */

long * FUN_1092af5f4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_1092ac094();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092af6e4; end: 1092af6e7;  */

void FUN_1092af6e4(void)

{
  return;
}



/* Entry: 1092af6e8; end: 1092af73f;  */

void FUN_1092af6e8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 1092af740; end: 1092af75f;  */

void FUN_1092af740(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110ae8268;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 1092af760; end: 1092af773;  */

void FUN_1092af760(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092af774; end: 1092af777;  */

void FUN_1092af774(void)

{
  return;
}



/* Entry: 1092af778; end: 1092af7af;  */

undefined8 FUN_1092af778(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae82d0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092af7b0; end: 1092af7b3;  */

void FUN_1092af7b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092af7b4; end: 1092af8bb;  */

long FUN_1092af7b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 1092af8bc; end: 1092af97b;  */

void FUN_1092af8bc(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if ((((uint)*(undefined8 *)(*param_1 + 0x10) >> 1 & 1) != 0) &&
     (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0)) {
    return;
  }
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    param_1 = (long *)0x10;
    ___cxa_allocate_exception();
    FUN_1092af9b8();
    ___cxa_throw(param_1,&PTR_DAT_110ae8598,FUN_1092af9d8);
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x90);
  FUN_1092af97c(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092af958);
  (*pcVar1)();
}



/* Entry: 1092af97c; end: 1092af9b7;  */

void FUN_1092af97c(undefined8 param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  __ZNSt13exception_ptrC1ERKS_(auStack_28,param_1);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092af9a4);
  (*pcVar1)();
}



/* Entry: 1092af9b8; end: 1092af9d7;  */

void FUN_1092af9b8(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_FUN_110ae85c0;
  return;
}



/* Entry: 1092af9d8; end: 1092af9db;  */

void FUN_1092af9d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1092af9dc; end: 1092af9ef;  */

void FUN_1092af9dc(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092af9f0; end: 1092af9ff;  */

void FUN_1092af9f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae82f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092afa00; end: 1092afa1f;  */

void FUN_1092afa00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae82f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092afa20; end: 1092afa63;  */

void FUN_1092afa20(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  func_0x0001092af640(param_1 + 0x28,0);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1092afa64; end: 1092afa67;  */

void FUN_1092afa64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092afa68; end: 1092afcbf;  */

undefined1  [16]
FUN_1092afa68(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1092afc70;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_1092afcc0(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_1092afd6c(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_1092afc70:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1092afcc0; end: 1092afd6b;  */

void FUN_1092afcc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  param_1[1] = param_2;
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    puVar1[4] = param_5[2];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1092afd6c; end: 1092afe3b;  */

void FUN_1092afd6c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_1092afdb4:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        if ((char)param_1[1] == '\x01') {
          if (*(char *)(param_2 + 0x27) < '\0') {
            __ZdlPv(*(undefined8 *)(param_2 + 0x10));
          }
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_1092afdb4;
  }
  return;
}



/* Entry: 1092afe3c; end: 1092affc7;  */

void FUN_1092afe3c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      if ((char)param_1[1] == '\x01') {
        if (*(char *)(param_2 + 0x27) < '\0') {
          __ZdlPv(*(undefined8 *)(param_2 + 0x10));
        }
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 1092affc8; end: 1092affd7;  */

void FUN_1092affc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8340;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092affd8; end: 1092afff7;  */

void FUN_1092affd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8340;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092afff8; end: 1092b0007;  */

void FUN_1092afff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b0000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1092b0008; end: 1092b01b3;  */

void FUN_1092b0008(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_58;
  code **ppcVar4;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(ulong *)(param_2 + 0x70);
  if (uVar8 == 0) {
    uVar8 = *(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78);
  }
  if ((uVar8 < param_4) || (uVar8 - param_4 < param_3)) {
    ppcVar4 = &pcStack_98;
    func_0x000107c31940(ppcVar4,&UNK_10f563854);
    uVar3 = SUB84(ppcVar4,0);
    __ZSt19uncaught_exceptionsv();
    lStack_80 = CONCAT44(lStack_80._4_4_,uVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pcStack_98,&UNK_10f563941,0x2c);
    FUN_1092a22e8(&pcStack_98);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar5 = *(long *)(param_2 + 0x18);
  if ((lVar5 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lVar5 != 0)) {
    uVar6 = 0x10;
    __Znwm();
    pcStack_98 = FUN_1092b028c;
    ppuStack_90 = &PTR_FUN_110ae8408;
    uStack_88 = uVar1;
    lStack_80 = lVar5;
    FUN_1092c04b0();
    pppuVar7 = &ppuStack_90;
    (*(code *)*ppuStack_90)(pppuVar7);
    *param_1 = uVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    FUN_1092a22e8(&pcStack_98);
    __Unwind_Resume(pppuVar7);
    *extraout_x8 = 0;
    return;
  }
  FUN_1092315e8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1092b0154);
  (*pcVar2)();
}



/* Entry: 1092b01b4; end: 1092b01bb;  */

void FUN_1092b01b4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1092b01bc; end: 1092b028b;  */

undefined8 * FUN_1092b01bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8390;
  func_0x0001092bffbc(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1092b028c; end: 1092b028f;  */

void FUN_1092b028c(void)

{
  return;
}



/* Entry: 1092b0290; end: 1092b02e7;  */

void FUN_1092b0290(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 1092b02e8; end: 1092b0313;  */

void FUN_1092b02e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110ae8408;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 1092b0314; end: 1092b0333;  */

void FUN_1092b0314(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8430;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b0334; end: 1092b036b;  */

void FUN_1092b0334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b033c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1092b036c; end: 1092b0403;  */

undefined8 * FUN_1092b036c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8480;
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  func_0x0001092ab60c(param_1 + 3);
  FUN_1092a43bc(param_1 + 2,0);
  return param_1;
}



/* Entry: 1092b0404; end: 1092b0557;  */

void FUN_1092b0404(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [24];
  undefined4 uStack_48;
  
  uVar1 = SUB84(auStack_60,0);
  if (*(ulong *)(param_2 + 8) < param_4 || *(ulong *)(param_2 + 8) - param_4 < param_3) {
    func_0x000107c31940(auStack_60,&UNK_10f563854);
    __ZSt19uncaught_exceptionsv();
    uStack_48 = uVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_60,&UNK_10f56396e,0x2c);
    FUN_1092a22e8(auStack_60);
  }
  FUN_1092c01cc(param_1,param_4,param_2 + 0x18);
  if (param_4 != 0) {
    __ZNSt3__15mutex4lockEv(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    FUN_1092b21dc(uVar2);
    FUN_1092b2024(*(undefined8 *)(param_2 + 0x10),param_3,0);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    plVar3 = *(long **)*param_1;
    (**(code **)(*plVar3 + 8))();
    FUN_1092b1af4(uVar4,plVar3,param_4);
    FUN_1092b2024(*(undefined8 *)(param_2 + 0x10),uVar2,0);
    __ZNSt3__15mutex6unlockEv(param_2 + 0x28);
  }
  return;
}



/* Entry: 1092b0558; end: 1092b0567;  */

void FUN_1092b0558(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae84c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092b0568; end: 1092b0587;  */

void FUN_1092b0568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae84c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b0588; end: 1092b0597;  */

void FUN_1092b0588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b0590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1092b0598; end: 1092b088f;  */

undefined *** FUN_1092b0598(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 uVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_58;
  code **ppcVar9;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(ulong *)(param_2 + 8) < param_4 || *(ulong *)(param_2 + 8) - param_4 < param_3) {
    ppcVar9 = &pcStack_98;
    func_0x000107c31940(ppcVar9,&UNK_10f563854);
    uVar8 = SUB84(ppcVar9,0);
    __ZSt19uncaught_exceptionsv();
    lStack_80 = CONCAT44(lStack_80._4_4_,uVar8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pcStack_98,&UNK_10f56399b,0x33);
    FUN_1092a22e8(&pcStack_98);
  }
  FUN_1092b8dfc(&plStack_a8,*(undefined8 *)(*(long *)(param_2 + 0x10) + 8),param_3,param_4);
  func_0x000109d1a244(&plStack_a8);
  if ((((uint)plStack_a8[2] >> 1 & 1) == 0) || (((uint)plStack_a8[2] >> 5 & 1) != 0)) {
    if (((uint)plStack_a8[2] >> 5 & 1) == 0) {
      puVar12 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC2EPKc();
      *puVar12 = &PTR_FUN_110ae85c0;
      ___cxa_throw(puVar12,&PTR_DAT_110ae8598,FUN_1092af9d8);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&pcStack_98,plStack_a8 + 0x12);
      FUN_1092af97c(&pcStack_98);
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1092b07b8);
    (*pcVar7)();
  }
  plVar3 = (long *)plStack_a8[0x13];
  lVar4 = plStack_a8[0x14];
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar2 = (ulong *)(plStack_a8 + 1);
  do {
    uVar13 = *puVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = uVar13 - 4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar13 & 0x1fffffffc) == 4) {
    do {
      uVar13 = *puVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = uVar13 - 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (uVar13 - 1 == 0) {
      (**(code **)(*plStack_a8 + 8))();
    }
  }
  uVar10 = 0x10;
  plStack_a8 = plVar3;
  lStack_a0 = lVar4;
  __Znwm();
  pcStack_98 = FUN_1092b08f0;
  ppuStack_90 = &PTR_DAT_110ae8550;
  plStack_a8 = (long *)0x0;
  lStack_a0 = 0;
  plStack_88 = plVar3;
  lStack_80 = lVar4;
  FUN_1092c04b0();
  pppuVar11 = &ppuStack_90;
  (*(code *)*ppuStack_90)();
  *param_1 = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar11;
  }
  ___stack_chk_fail();
  if (plStack_a8 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_a8 + 1);
    do {
      uVar13 = *puVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = uVar13 - 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar13 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plStack_a8 + 8))();
      }
    }
  }
  __Unwind_Resume();
  *pppuVar11 = &PTR_FUN_110ae8518;
  FUN_1092af7b4(pppuVar11 + 2);
  return pppuVar11;
}



/* Entry: 1092b0890; end: 1092b08ef;  */

undefined8 * FUN_1092b0890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8518;
  FUN_1092af7b4(param_1 + 2);
  return param_1;
}



/* Entry: 1092b08f0; end: 1092b0917;  */

void FUN_1092b08f0(void)

{
  return;
}



/* Entry: 1092b0918; end: 1092b096f;  */

long FUN_1092b0918(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 1092b0970; end: 1092b0973;  */

void FUN_1092b0970(void)

{
  return;
}



/* Entry: 1092b0974; end: 1092b099b;  */

long FUN_1092b0974(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x0001092af864(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 1092b099c; end: 1092b09c3;  */

void FUN_1092b099c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110ae8568;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 1092b09c4; end: 1092b0aa7;  */

long FUN_1092b09c4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1092b0aa8; end: 1092b0c07;  */

void FUN_1092b0aa8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_28;
  
  lVar7 = *param_1;
  *param_1 = 0;
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0xf7) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar7 + 0xe0));
    }
    plVar8 = *(long **)(lVar7 + 200);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    lStack_28 = lVar7 + 0xa8;
    FUN_1092a50e4(&lStack_28);
    lVar6 = *(long *)(lVar7 + 0x90);
    if (lVar6 != 0) {
      lVar4 = *(long *)(lVar7 + 0x98);
      lVar5 = lVar6;
      if (lVar4 != lVar6) {
        do {
          lVar4 = lVar4 + -0x10;
          FUN_1092ac094();
        } while (lVar4 != lVar6);
        lVar5 = *(long *)(lVar7 + 0x90);
      }
      *(long *)(lVar7 + 0x98) = lVar6;
      __ZdlPv(lVar5);
    }
    func_0x0001092b0b8c(lVar7 + 0x68);
    FUN_1092a1920(lVar7 + 0x18);
    func_0x0001092ab60c(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1092b0c08; end: 1092b0c77;  */

void FUN_1092b0c08(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uStack_49;
  long lStack_48;
  
  uVar1 = 0x90;
  __Znwm();
  FUN_1092a2eec();
  lVar2 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  if (lVar2 != 0) {
    FUN_1092b1440();
  }
  lStack_48 = *(long *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != lStack_48) {
    lVar2 = 0;
    uVar4 = 0;
    do {
      lStack_48 = lStack_48 + lVar2;
      lVar3 = param_1 + 0x20;
      FUN_1092404c8(lVar3,lStack_48,&UNK_10dd5b8f9,&lStack_48,&uStack_49);
      *(ulong *)(lVar3 + 0x28) = uVar4;
      uVar4 = uVar4 + 1;
      lStack_48 = *(long *)(param_1 + 0x48);
      lVar2 = lVar2 + 0x28;
    } while (uVar4 < (ulong)((*(long *)(param_1 + 0x50) - lStack_48 >> 3) * -0x3333333333333333));
  }
  return;
}



/* Entry: 1092b0c78; end: 1092b0d0f;  */

void FUN_1092b0c78(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != lStack_48) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lStack_48 = lStack_48 + lVar2;
      lVar1 = param_1 + 0x20;
      FUN_1092404c8(lVar1,lStack_48,&UNK_10dd5b8f9,&lStack_48,&uStack_49);
      *(ulong *)(lVar1 + 0x28) = uVar3;
      uVar3 = uVar3 + 1;
      lStack_48 = *(long *)(param_1 + 0x48);
      lVar2 = lVar2 + 0x28;
    } while (uVar3 < (ulong)((*(long *)(param_1 + 0x50) - lStack_48 >> 3) * -0x3333333333333333));
  }
  return;
}



/* Entry: 1092b0d10; end: 1092b0dab;  */

void FUN_1092b0d10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  long lStack_30;
  
  FUN_1092c0068(&lStack_38,param_2);
  uVar1 = 0x90;
  __Znwm();
  FUN_1092a349c();
  lVar2 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  if (lVar2 != 0) {
    FUN_1092b1440();
  }
  FUN_1092b0c78(param_1);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 1092b0dac; end: 1092b0daf;  */

void FUN_1092b0dac(void)

{
  return;
}



/* Entry: 1092b0db0; end: 1092b1097;  */

void FUN_1092b0db0(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *unaff_x20;
  long *unaff_x21;
  undefined *unaff_x22;
  long lVar11;
  long *unaff_x23;
  ulong uVar12;
  long *unaff_x24;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long *aplStack_158 [2];
  char cStack_141;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long alStack_e8 [15];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined8 *)param_1[9];
  puVar2 = (undefined8 *)param_1[10];
  plVar5 = param_1;
  plVar8 = param_2;
  if (puVar10 != puVar2) {
    unaff_x22 = &UNK_10f5173d2;
    do {
      FUN_1092a4cfc(&plStack_140,param_2,puVar10);
      func_0x000107c31940(aplStack_158,&UNK_10f5173d2);
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      puStack_128 = &UNK_1069b161c;
      ppuStack_120 = &PTR_DAT_110950c70;
      FUN_1092b17dc(alStack_e8,&plStack_140,aplStack_158,&puStack_128);
      (*(code *)*ppuStack_120)(&ppuStack_120);
      if (cStack_141 < '\0') {
        __ZdlPv(aplStack_158[0]);
      }
      if ((long)plStack_130 < 0) {
        __ZdlPv(plStack_140);
      }
      if (alStack_e8[0] == 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (aplStack_158,&UNK_10f5634e2,param_2);
        uVar1 = puVar10[1];
        puVar2 = (undefined8 *)*puVar10;
        if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)puVar10 + 0x17);
          puVar2 = puVar10;
        }
        pplVar6 = aplStack_158;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pplVar6,puVar2,uVar1);
        plStack_138 = pplVar6[1];
        plStack_140 = *pplVar6;
        plStack_130 = pplVar6[2];
        pplVar6[1] = (long *)0x0;
        pplVar6[2] = (long *)0x0;
        *pplVar6 = (long *)0x0;
        func_0x000105687ee0(&plStack_140);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1092b0fcc);
        (*pcVar4)();
      }
      FUN_1092a3710(aplStack_158,param_1[0xc],*(undefined4 *)(puVar10 + 3),
                    *(undefined4 *)(puVar10 + 4));
      unaff_x23 = aplStack_158[0];
      (**(code **)(*aplStack_158[0] + 0x28))();
      unaff_x24 = aplStack_158[0];
      (**(code **)(*aplStack_158[0] + 0x28))();
      plVar5 = aplStack_158[0];
      (**(code **)(*aplStack_158[0] + 0x10))();
      plStack_140 = (long *)0x0;
      plStack_138 = (long *)0x0;
      plStack_130 = (long *)0x0;
      FUN_1092b13d0(&plStack_140,unaff_x23,(long)unaff_x24 + (long)plVar5,
                    ((long)unaff_x24 + (long)plVar5) - (long)unaff_x23);
      param_3 = (long *)((long)plStack_138 - (long)plStack_140);
      plVar8 = plStack_140;
      FUN_1092b1f3c(alStack_e8);
      if (plStack_140 != (long *)0x0) {
        plStack_138 = plStack_140;
        __ZdlPv();
      }
      plVar5 = aplStack_158[0];
      aplStack_158[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x50))();
      }
      plVar5 = alStack_e8;
      FUN_1092b2248();
      puVar10 = puVar10 + 5;
      unaff_x20 = param_2;
      unaff_x21 = param_1;
    } while (puVar10 != puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if ((long)plStack_130 < 0) {
      __ZdlPv(plStack_140);
    }
    if (cStack_141 < '\0') {
      __ZdlPv(aplStack_158[0]);
    }
    FUN_1092b2248(alStack_e8);
    plVar7 = plVar5;
    __Unwind_Resume();
    pcStack_168 = FUN_1092b1098;
    plStack_1a0 = unaff_x24;
    plStack_198 = unaff_x23;
    puStack_190 = unaff_x22;
    plStack_188 = unaff_x21;
    plStack_180 = unaff_x20;
    plStack_178 = plVar5;
    puStack_170 = &stack0xfffffffffffffff0;
    if (plVar7 + 9 != param_3) {
      FUN_1092a8954(param_3,plVar7[9],plVar7[10],(plVar7[10] - plVar7[9] >> 3) * -0x3333333333333333
                   );
    }
    FUN_1092a2dc0(plVar8,0,0,0);
    lVar3 = param_3[1];
    for (lVar11 = *param_3; lVar11 != lVar3; lVar11 = lVar11 + 0x28) {
      uVar12 = plVar8[1] - *plVar8;
      uVar9 = (ulong)*(uint *)(lVar11 + 0x20);
      uVar1 = uVar12 + uVar9;
      if (uVar12 < uVar1) {
        func_0x000107c27d58(plVar8,uVar9);
        uVar9 = (ulong)*(uint *)(lVar11 + 0x20);
      }
      else if (uVar12 != uVar1) {
        plVar8[1] = *plVar8 + uVar1;
      }
      FUN_1092a3710(&plStack_1a8,plVar7[0xc],*(undefined4 *)(lVar11 + 0x18),uVar9);
      (**(code **)*plStack_1a8)(plStack_1a8,*plVar8 + uVar12,*(undefined4 *)(lVar11 + 0x20));
      plVar5 = plStack_1a8;
      *(int *)(lVar11 + 0x18) = (int)uVar12;
      plStack_1a8 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x50))();
      }
    }
    return;
  }
  return;
}



/* Entry: 1092b1098; end: 1092b11cb;  */

void FUN_1092b1098(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plStack_48;
  
  if ((long *)(param_1 + 0x48) != param_3) {
    FUN_1092a8954(param_3,*(long *)(param_1 + 0x48),*(long *)(param_1 + 0x50),
                  (*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3) * -0x3333333333333333
                 );
  }
  FUN_1092a2dc0(param_2,0,0,0);
  lVar2 = param_3[1];
  for (lVar5 = *param_3; lVar5 != lVar2; lVar5 = lVar5 + 0x28) {
    uVar6 = param_2[1] - *param_2;
    uVar4 = (ulong)*(uint *)(lVar5 + 0x20);
    uVar1 = uVar6 + uVar4;
    if (uVar6 < uVar1) {
      func_0x000107c27d58(param_2,uVar4);
      uVar4 = (ulong)*(uint *)(lVar5 + 0x20);
    }
    else if (uVar6 != uVar1) {
      param_2[1] = *param_2 + uVar1;
    }
    FUN_1092a3710(&plStack_48,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(lVar5 + 0x18),uVar4);
    (**(code **)*plStack_48)(plStack_48,*param_2 + uVar6,*(undefined4 *)(lVar5 + 0x20));
    plVar3 = plStack_48;
    *(int *)(lVar5 + 0x18) = (int)uVar6;
    plStack_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))();
    }
  }
  return;
}



/* Entry: 1092b11cc; end: 1092b128f;  */

void FUN_1092b11cc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plStack_28;
  
  lVar3 = param_2 + 0x20;
  FUN_109240a28();
  if (lVar3 == 0) {
    *param_1 = 0;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x48) + *(long *)(lVar3 + 0x28) * 0x28;
    FUN_1092a3710(&plStack_28,*(undefined8 *)(param_2 + 0x60),*(undefined4 *)(lVar3 + 0x18),
                  *(undefined4 *)(lVar3 + 0x20));
    uVar2 = 0x10;
    __Znwm();
    FUN_1092c0408();
    plVar1 = plStack_28;
    *param_1 = uVar2;
    plStack_28 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x50))();
    }
  }
  return;
}



/* Entry: 1092b1290; end: 1092b129f;  */

long FUN_1092b1290(long param_1)

{
  return param_1 + 0x48;
}



/* Entry: 1092b12a0; end: 1092b12df;  */

long * FUN_1092b12a0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plStack_38;
  
  if (*(long **)(param_1 + 0x60) == (long *)0x0) {
    func_0x000105688514(&UNK_10f5639cf);
  }
  else {
    plVar1 = (long *)**(long **)(param_1 + 0x60);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001092b12c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))();
      return plVar1;
    }
  }
  plVar1 = (long *)&UNK_10f56325d;
  func_0x000105688514();
  *plVar1 = (long)&PTR_FUN_110ae8600;
  lVar2 = plVar1[0xc];
  plVar1[0xc] = 0;
  if (lVar2 != 0) {
    FUN_1092b1440();
  }
  plStack_38 = plVar1 + 9;
  FUN_1092a50e4(&plStack_38);
  FUN_109240b0c(plVar1 + 4);
  *plVar1 = (long)&PTR_FUN_110ae8678;
  func_0x0001092ab60c(plVar1 + 1);
  return plVar1;
}



/* Entry: 1092b12e0; end: 1092b13c3;  */

undefined8 * FUN_1092b12e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae8600;
  lVar1 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar1 != 0) {
    FUN_1092b1440();
  }
  puStack_28 = param_1 + 9;
  FUN_1092a50e4(&puStack_28);
  FUN_109240b0c(param_1 + 4);
  *param_1 = &PTR_FUN_110ae8678;
  func_0x0001092ab60c(param_1 + 1);
  return param_1;
}



/* Entry: 1092b13c4; end: 1092b13cf;  */

void FUN_1092b13c4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b13cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 1092b13d0; end: 1092b143f;  */

void FUN_1092b13d0(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    FUN_109246380(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1092b1440; end: 1092b1497;  */

void FUN_1092b1440(long *param_1)

{
  long *plVar1;
  
  FUN_1092a3d04(param_1 + 0xc);
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1092b1498; end: 1092b17d3;  */

void FUN_1092b1498(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 uVar6;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  long *plStack_38;
  long **pplVar7;
  
  (**(code **)(*param_1 + 0x40))(&plStack_38);
  if (plStack_38 == (long *)0x0) {
    pplVar7 = &plStack_58;
    func_0x000107c31940(pplVar7,&UNK_10f563a3c);
    uVar6 = SUB84(pplVar7,0);
    __ZSt19uncaught_exceptionsv();
    uStack_40 = uVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_58,&UNK_10f563a10,0x2b);
    uVar10 = param_2[1];
    puVar9 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar9 = param_2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_58,puVar9,uVar10);
    FUN_1092a22e8(&plStack_58);
  }
  plVar8 = (long *)*plStack_38;
  (**(code **)(*plVar8 + 0x18))();
  if (plVar8 != (long *)0x0) {
    plVar12 = *(long **)(param_3 + 0x18);
    (**(code **)(*plVar12 + 0x30))(plVar12,&UNK_10f563cd1);
    uStack_50 = 0;
    plStack_58 = plVar12;
    plStack_48 = plVar8;
    FUN_1092b9184(&plStack_70,plVar12[1],&plStack_58);
    func_0x000109d1a244(&plStack_70);
    if ((((uint)plStack_70[2] >> 1 & 1) == 0) || (((uint)plStack_70[2] >> 5 & 1) != 0)) {
      if (((uint)plStack_70[2] >> 5 & 1) == 0) {
        puVar9 = (undefined8 *)0x10;
        ___cxa_allocate_exception();
        __ZNSt13runtime_errorC2EPKc();
        *puVar9 = &PTR_FUN_110ae85c0;
        ___cxa_throw(puVar9,&PTR_DAT_110ae8598,FUN_1092af9d8);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&plStack_58,plStack_70 + 0x12);
        FUN_1092af97c(&plStack_58);
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1092b1700);
      (*pcVar5)();
    }
    lVar11 = plStack_70[0x13];
    plVar12 = (long *)plStack_70[0x14];
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar2 = (ulong *)(plStack_70 + 1);
    do {
      uVar10 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lStack_68 = lVar11;
    plStack_60 = plVar12;
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plStack_70 + 8))();
      }
    }
    puVar9 = (undefined8 *)*plStack_38;
    (**(code **)*puVar9)();
    _memmove(*(undefined8 *)(lVar11 + 0x18),puVar9,plVar8);
    if (plVar12 != (long *)0x0) {
      plVar8 = plVar12 + 1;
      do {
        lVar11 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  plVar8 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar12 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x40))();
    }
    __ZdlPv(plVar8);
  }
  return;
}



/* Entry: 1092b17d4; end: 1092b17db;  */

void FUN_1092b17d4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092b17d8);
  (*pcVar1)();
}



/* Entry: 1092b17dc; end: 1092b1a3b;  */

long * FUN_1092b17dc(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    lVar6 = param_2[1];
    lVar2 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = lVar6;
    param_1[1] = lVar2;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 4,*param_3,param_3[1]);
  }
  else {
    lVar6 = param_3[1];
    lVar2 = *param_3;
    param_1[6] = param_3[2];
    param_1[5] = lVar6;
    param_1[4] = lVar2;
  }
  plVar5 = param_1 + 7;
  *plVar5 = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_1 + 8,param_4 + 1);
  cVar3 = *(char *)((long)param_3 + 0x17);
  if (cVar3 < '\0') {
    if (param_3[1] != 2) goto LAB_1092b195c;
    plVar4 = (long *)*param_3;
  }
  else {
    plVar4 = param_3;
    if (cVar3 != '\x02') goto LAB_1092b195c;
  }
  if ((short)*plVar4 == 0x6277) {
    cVar3 = *(char *)((long)param_2 + 0x17);
    plVar4 = (long *)*param_2;
    if (-1 < (long)cVar3) {
      plVar4 = param_2;
    }
    lVar2 = param_2[1];
    if (-1 < cVar3) {
      lVar2 = (long)cVar3;
    }
    do {
      if (lVar2 == 0) goto LAB_1092b190c;
      cVar3 = *(char *)((long)plVar4 + lVar2 + -1);
      lVar2 = lVar2 + -1;
    } while ((cVar3 != '\\') && (cVar3 != '/'));
    if (lVar2 == -1) {
LAB_1092b190c:
      func_0x000107c31940(auStack_58,&DAT_10f62a9de);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (auStack_58,param_2,0,lVar2,auStack_70);
    }
    FUN_1092b2830(auStack_70,auStack_58,0);
    __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE(auStack_70,0);
    if (cStack_59 < '\0') {
      __ZdlPv(auStack_70[0]);
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    cVar3 = *(char *)((long)param_3 + 0x17);
  }
LAB_1092b195c:
  plVar4 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar4 = param_2;
  }
  plVar1 = (long *)*param_3;
  if (-1 < cVar3) {
    plVar1 = param_3;
  }
  if (*(char *)(param_1[8] + 8) == '\x01') {
    (*(code *)*plVar5)(plVar4,plVar1,plVar5);
  }
  else {
    _fopen(plVar4,plVar1);
  }
  *param_1 = (long)plVar4;
  return param_1;
}



/* Entry: 1092b1a3c; end: 1092b1a97;  */

void FUN_1092b1a3c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1092b1a98();
  FUN_109246310(param_1,uVar1);
  FUN_1092b1af4(param_2,*param_1,param_1[1] - *param_1);
  return;
}



/* Entry: 1092b1a98; end: 1092b1af3;  */

undefined8 FUN_1092b1a98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1092b21dc();
  FUN_1092b2024(param_1,0,2);
  uVar2 = param_1;
  FUN_1092b21dc(param_1);
  FUN_1092b2024(param_1,uVar1,0);
  return uVar2;
}



/* Entry: 1092b1af4; end: 1092b1ccb;  */

long FUN_1092b1af4(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _clearerr(*param_1);
  _fread(param_2,1,param_3,*param_1);
  if (param_2 != param_3) {
    __ZNSt3__19to_stringEm(auStack_a8,param_3);
    puVar3 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f563a51,0x22);
    uStack_88 = puVar3[1];
    uStack_90 = *puVar3;
    lStack_80 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f563a74,0xb);
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    lStack_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    __ZNSt3__19to_stringEm(&ppuStack_c0,param_2);
    pppuVar1 = (undefined8 ***)ppuStack_c0;
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      pppuVar1 = &ppuStack_c0;
    }
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,pppuVar1,uStack_b8);
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(ppuStack_c0);
    }
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
    FUN_1092b1ccc(param_1,&uStack_50);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1092b1c54);
    (*pcVar2)();
  }
  return param_3;
}



/* Entry: 1092b1ccc; end: 1092b1f3b;  */

void FUN_1092b1ccc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  long *plVar4;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  _ftell(*param_1);
  __ZNSt3__19to_stringEl(alStack_78);
  plVar4 = alStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar4,0,&UNK_10f563aee,9);
  uStack_58 = plVar4[1];
  ppuStack_60 = (undefined8 **)*plVar4;
  uStack_50 = plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  uVar1 = uStack_58;
  pppuVar2 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    uVar1 = uStack_50 >> 0x38;
    pppuVar2 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_40,pppuVar2,uVar1);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(alStack_78[0]);
  }
  _ferror(*param_1);
  __ZNSt3__19to_stringEi(alStack_78);
  plVar4 = alStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar4,0,&UNK_10f563af8,9);
  uStack_58 = plVar4[1];
  ppuStack_60 = (undefined8 **)*plVar4;
  uStack_50 = plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  uVar1 = uStack_58;
  pppuVar2 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    uVar1 = uStack_50 >> 0x38;
    pppuVar2 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_40,pppuVar2,uVar1);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(alStack_78[0]);
  }
  FUN_1092b1a98(param_1);
  __ZNSt3__19to_stringEm(alStack_78);
  FUN_10928a5e0(&ppuStack_60,&UNK_10f563b02,alStack_78);
  uVar1 = uStack_58;
  pppuVar2 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    uVar1 = uStack_50 >> 0x38;
    pppuVar2 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_40,pppuVar2,uVar1);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(alStack_78[0]);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppuStack_60,&UNK_10f563b0a,param_1 + 1);
  uVar1 = uStack_58;
  pppuVar2 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    uVar1 = uStack_50 >> 0x38;
    pppuVar2 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_40,pppuVar2,uVar1);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  FUN_1092a2350(&uStack_40);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1092b1ebc);
  (*pcVar3)();
}



/* Entry: 1092b1f3c; end: 1092b2023;  */

long FUN_1092b1f3c(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _clearerr(*param_1);
  _fwrite(param_2,1,param_3,*param_1);
  if (param_2 == param_3) {
    return param_3;
  }
  __ZNSt3__19to_stringEm(auStack_68,param_3);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f563a80,0x1e);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  uStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  FUN_1092b1ccc(param_1,&uStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092b1ff4);
  (*pcVar1)();
}



/* Entry: 1092b2024; end: 1092b21db;  */

void FUN_1092b2024(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  iVar3 = (int)*param_1;
  _fseek();
  if (iVar3 != 0) {
    __ZNSt3__19to_stringEl(auStack_a8,param_2);
    puVar4 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar4,0,&UNK_10f563a9f,0x1c);
    uStack_88 = puVar4[1];
    uStack_90 = *puVar4;
    lStack_80 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4 = &uStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,&UNK_10f563abc,7);
    uStack_68 = puVar4[1];
    uStack_70 = *puVar4;
    lStack_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    __ZNSt3__19to_stringEi(&puStack_c0,param_3);
    ppuVar1 = (undefined1 **)puStack_c0;
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      ppuVar1 = &puStack_c0;
    }
    puVar4 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,ppuVar1,uStack_b8);
    uStack_48 = puVar4[1];
    uStack_50 = *puVar4;
    uStack_40 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(puStack_c0);
    }
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
    FUN_1092b1ccc(param_1,&uStack_50);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1092b2164);
    (*pcVar2)();
  }
  return;
}



/* Entry: 1092b21dc; end: 1092b2247;  */

void FUN_1092b21dc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  _ftell();
  if (-1 < lVar2) {
    return;
  }
  func_0x000107c31940(auStack_38,&UNK_10f563ac4);
  FUN_1092b1ccc(param_1,auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092b222c);
  (*pcVar1)();
}



/* Entry: 1092b2248; end: 1092b22a7;  */

/* WARNING: Removing unreachable block (ram,0x0001092b2280) */

long * FUN_1092b2248(long *param_1)

{
  if (*param_1 != 0) {
    _fclose();
  }
  (**(code **)param_1[8])(param_1 + 8);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 1092b22a8; end: 1092b26ff;  */

void FUN_1092b22a8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long *plStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  char cStack_60;
  undefined7 uStack_5f;
  long *plStack_58;
  undefined1 uStack_50;
  char acStack_48 [8];
  
  FUN_1092b2830(&lStack_e0,param_2,0);
  __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(&cStack_60,&lStack_e0,0);
  cVar3 = cStack_60;
  if (lStack_d0 < 0) {
    __ZdlPv(lStack_e0);
  }
  if (cVar3 != '\x02') {
    func_0x000107c31940(&cStack_60,&UNK_10f563adc);
    FUN_109259240(&lStack_e0);
    func_0x000105687ee0(&lStack_e0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1092b262c);
    (*pcVar6)();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092b2830(&lStack_e0,param_2,0);
  __ZNSt3__14__fs10filesystem28recursive_directory_iteratorC1ERKNS1_4pathENS1_17directory_optionsEPNS_10error_codeE
            (&cStack_60,&lStack_e0,0,0);
  if (lStack_d0 < 0) {
    __ZdlPv(lStack_e0);
  }
  plVar7 = plStack_58;
  lStack_78 = CONCAT71(uStack_5f,cStack_60);
  if (plStack_58 == (long *)0x0) {
    plStack_70 = (long *)0x0;
  }
  else {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_70 = plStack_58;
    uStack_68 = uStack_50;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lStack_90 = 0;
      plStack_88 = (long *)0x0;
      uStack_80 = 0;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar5 = lStack_90;
      if (lVar9 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        lVar5 = lStack_90;
      }
      goto LAB_1092b23d8;
    }
  }
  uStack_68 = uStack_50;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  lVar5 = lStack_90;
LAB_1092b23d8:
  while (plVar7 = plStack_88, lStack_78 != lVar5) {
    plVar7 = &lStack_78;
    __ZNKSt3__14__fs10filesystem28recursive_directory_iterator13__dereferenceEv();
    if (*(char *)((long)plVar7 + 0x17) < '\0') {
      func_0x000107c3192c(&lStack_b0,*plVar7,plVar7[1]);
    }
    else {
      lStack_a8 = plVar7[1];
      lStack_b0 = *plVar7;
      lStack_a0 = plVar7[2];
    }
    lStack_d8 = lStack_a8;
    lStack_e0 = lStack_b0;
    lStack_d0 = lStack_a0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(acStack_48,&lStack_e0,0);
    cVar3 = acStack_48[0];
    if (lStack_d0 < 0) {
      __ZdlPv(lStack_e0);
    }
    if (lStack_a0 < 0) {
      __ZdlPv(lStack_b0);
    }
    if (cVar3 != '\x02') {
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        func_0x000107c3192c(&lStack_b0,*plVar7,plVar7[1]);
      }
      else {
        lStack_a8 = plVar7[1];
        lStack_b0 = *plVar7;
        lStack_a0 = plVar7[2];
      }
      uVar2 = *(ulong *)(param_2 + 8);
      if (-1 < (char)*(byte *)(param_2 + 0x17)) {
        uVar2 = (ulong)*(byte *)(param_2 + 0x17);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&lStack_e0,&lStack_b0,uVar2,0xffffffffffffffff,acStack_48);
      uStack_c8 = 0;
      uStack_c0 = 0;
      plVar7 = (long *)param_1[1];
      if (plVar7 < (long *)param_1[2]) {
        plVar7[2] = lStack_d0;
        plVar7[1] = lStack_d8;
        *plVar7 = lStack_e0;
        lStack_d8 = 0;
        lStack_d0 = 0;
        lStack_e0 = 0;
        plVar7[4] = 0;
        plVar7[3] = 0;
        param_1[1] = plVar7 + 5;
      }
      else {
        puVar8 = param_1;
        FUN_1092a394c(param_1,&lStack_e0);
        param_1[1] = puVar8;
        if (lStack_d0 < 0) {
          __ZdlPv(lStack_e0);
        }
      }
      if (lStack_a0 < 0) {
        __ZdlPv(lStack_b0);
      }
    }
    __ZNSt3__14__fs10filesystem28recursive_directory_iterator11__incrementEPNS_10error_codeE
              (&lStack_78,0);
  }
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      lVar9 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return;
}



/* Entry: 1092b2700; end: 1092b27d7;  */

undefined8 ** FUN_1092b2700(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 0x78;
  __Znwm();
  uStack_78 = *(undefined8 *)(param_2 + 0x38);
  (**(code **)(*(long *)(param_2 + 0x40) + 0x18))(apuStack_70);
  FUN_1092b17dc(uVar4,param_2 + 8,param_2 + 0x20,&uStack_78);
  *param_1 = uVar4;
  ppuVar5 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(apuStack_70);
  __ZdlPv(uVar4);
  __Unwind_Resume();
  plVar7 = ppuVar5[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return ppuVar5;
}


