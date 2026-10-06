/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a50c8e4; end: 10a50ccbb;  */

/* WARNING: Removing unreachable block (ram,0x00010a50ca48) */

void FUN_10a50c8e4(undefined8 *param_1,undefined8 ******param_2)

{
  undefined8 *****pppppuVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  long *plVar13;
  undefined8 ******ppppppuVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  undefined8 *extraout_x8;
  undefined8 ****ppppuVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *****unaff_x23;
  undefined8 *****unaff_x24;
  undefined8 *****pppppuVar22;
  undefined8 ****ppppuVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puStack_180;
  undefined4 **ppuStack_178;
  undefined4 **ppuStack_170;
  undefined1 uStack_168;
  undefined4 *puStack_160;
  undefined4 *puStack_158;
  undefined8 ***pppuStack_150;
  undefined8 ****ppppuStack_148;
  undefined8 ****ppppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined8 *****pppppuStack_130;
  long *plStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  long *plStack_f8;
  undefined8 *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 *****pppppuStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****appppuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar22 = param_2[0xe];
  ppppuVar23 = pppppuVar22[4];
  puVar10 = (undefined8 *)0xa0;
  __Znwm();
  puVar18 = puVar10 + 3;
  *(undefined2 *)puVar18 = 4;
  puVar10[2] = 0;
  puVar10[1] = 0x200000006;
  puVar10[5] = 0;
  puVar10[4] = 0;
  puVar10[7] = 0;
  puVar10[6] = 0;
  puVar10[9] = 0;
  puVar10[8] = 0;
  puVar10[0xb] = 0;
  puVar10[10] = 0;
  puVar10[0xd] = 0;
  puVar10[0xc] = 0;
  puVar10[0xf] = 0;
  puVar10[0xe] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = puVar18;
  puVar10[0x12] = 0;
  *puVar10 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar10 + 0x13) = 0;
  plStack_f8 = puVar10;
  puStack_f0 = puVar10;
  if (((ulong)param_2[0x32] & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10a50cc10);
    (*pcVar9)();
  }
  pppppuVar11 = unaff_x23;
  pppppuVar12 = unaff_x24;
  pppppuStack_c8 = param_2;
  if ((*(char *)((long)ppppuVar23 + 2) == '\x01') &&
     (cVar5 = *(char *)((long)ppppuVar23 + 1), cVar5 != '\0')) {
    pppppuVar11 = param_2[0x31];
    if ((pppppuVar11 != (undefined8 *****)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), appppuStack_a0[0] = pppppuVar11,
       pppppuVar11 != (undefined8 *****)0x0)) {
      pppppuVar12 = param_2[0x30];
      unaff_x23 = pppppuVar11;
      ppppuStack_a8 = pppppuVar12;
      if (pppppuVar12 == (undefined8 *****)0x0) {
        pppppuVar12 = pppppuVar11 + 1;
        do {
          ppppuVar19 = *pppppuVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
          if (bVar7) {
            *pppppuVar12 = (undefined8 ****)((long)ppppuVar19 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppuVar19 == (undefined8 ****)0x0) {
          (*(code *)(*pppppuVar11)[2])(pppppuVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
        }
      }
      else {
        (*(code *)(*pppppuVar12)[0xd])();
        pppppuVar1 = pppppuVar11 + 1;
        do {
          ppppuVar19 = *pppppuVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
          if (bVar7) {
            *pppppuVar1 = (undefined8 ****)((long)ppppuVar19 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppuVar19 == (undefined8 ****)0x0) {
          (*(code *)(*pppppuVar11)[2])(pppppuVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
        }
        unaff_x24 = pppppuVar12;
        if (((uint)pppppuVar12 >> 8 & 1) != 0) goto LAB_10a50c9fc;
      }
    }
    if (cVar5 == '\x02') {
      auStack_e8[0] = *(undefined1 *)ppppuVar23;
      if (*(char *)((long)ppppuVar23 + 0x1f) < '\0') {
        func_0x000107c3192c(&ppuStack_e0,ppppuVar23[1],ppppuVar23[2]);
      }
      else {
        ppuStack_d8 = ppppuVar23[2];
        ppuStack_e0 = ppppuVar23[1];
        ppuStack_d0 = ppppuVar23[3];
      }
      ppppppuVar14 = &pppppuStack_c8;
      func_0x0001098ac018(ppppppuVar14,&UNK_10e4bcbdf,0x17,auStack_e8,0,0);
      *(int *)(pppppuVar22 + 2) = (int)ppppppuVar14;
      if ((long)ppuStack_d0 < 0) {
        __ZdlPv(ppuStack_e0);
        ppppppuVar14 = (undefined8 ******)(ulong)*(uint *)(pppppuVar22 + 2);
      }
      if (((uint)((ulong)ppppppuVar14 >> 0x1d) & 7) != 2) goto LAB_10a50ca2c;
    }
    lStack_c0 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0;
    ppppuStack_a8 = (undefined8 ****)FUN_10a50d6e4;
    pppppuVar11 = &ppppuStack_a8;
    appppuStack_a0[0] = (undefined8 ****)&PTR_FUN_110beab00;
    param_2 = param_2 + 3;
    FUN_10a4fe9a0(param_2,&ppppuStack_a8,&lStack_c0);
    (*(code *)*appppuStack_a0[0])(appppuStack_a0);
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      __ZdlPv();
    }
  }
  else {
LAB_10a50c9fc:
    auStack_e8[0] = *(undefined1 *)ppppuVar23;
    param_2 = &pppppuStack_c8;
    func_0x0001098ac018(param_2,&UNK_10e4c8e94,0x23,auStack_e8,0,0);
    unaff_x24 = pppppuVar12;
  }
  *(int *)(pppppuVar22 + 2) = (int)param_2;
  unaff_x23 = pppppuVar11;
LAB_10a50ca2c:
  plVar13 = puVar10 + 2;
  do {
    lVar21 = *plVar13;
    if (lVar21 == 0) {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = 2;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        FUN_109d1b4dc(puVar18);
        goto LAB_10a50ca6c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar21 >> 1 & 1) != 0) {
LAB_10a50ca6c:
      while( true ) {
        *param_1 = puVar10;
        plStack_f8 = (long *)0x0;
        puVar18 = puVar10;
        func_0x0001092b4274(&puStack_f0);
        plVar13 = plStack_f8;
        if (plStack_f8 != (long *)0x0) {
          puVar2 = (ulong *)(plStack_f8 + 1);
          do {
            uVar20 = *puVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar20 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar20 & 0x1fffffffc) == 4) {
            do {
              uVar20 = *puVar2;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *puVar2 = uVar20 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar20 - 1 == 0) {
              (**(code **)(*plStack_f8 + 8))();
            }
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) break;
        ___stack_chk_fail();
        if ((int)puVar18 == 0) {
          __Unwind_Resume(plVar13);
          plVar15 = plVar13;
          func_0x000104bd46a0();
          pcStack_108 = FUN_10a50ccbc;
          puVar16 = (undefined8 *)0x20;
          pppuStack_150 = ppppuVar23;
          ppppuStack_148 = pppppuVar22;
          ppppuStack_140 = unaff_x24;
          ppppuStack_138 = unaff_x23;
          pppppuStack_130 = param_2;
          plStack_128 = plVar13;
          puStack_120 = puVar10;
          puStack_118 = param_1;
          puStack_110 = &stack0xfffffffffffffff0;
          __Znwm();
          puVar16[1] = 0;
          *puVar16 = &PTR_FUN_110bea9c8;
          puVar16[2] = 0;
          puVar16[3] = 0;
          lVar21 = plVar15[8];
          puVar10 = (undefined8 *)plVar15[9];
          lVar8 = (long)puVar10 - lVar21;
          if (lVar8 != 0) {
            puVar17 = (undefined4 *)(lVar8 >> 5);
            if ((ulong)puVar17 >> 0x3b != 0) {
              FUN_10a50d258();
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10a50cde4);
              (*pcVar9)();
            }
            FUN_10a50d26c();
            puVar16[1] = puVar17;
            puVar16[2] = puVar17;
            puVar16[3] = puVar17 + (long)puVar18 * 8;
            ppuStack_178 = &puStack_160;
            ppuStack_170 = &puStack_158;
            uStack_168 = 0;
            puVar18 = (undefined8 *)(lVar21 + 8);
            puStack_180 = puVar16 + 1;
            puStack_160 = puVar17;
            do {
              uVar4 = *(undefined4 *)(puVar18 + -1);
              *(undefined2 *)(puVar17 + 1) = *(undefined2 *)((long)puVar18 + -4);
              *puVar17 = uVar4;
              puStack_158 = puVar17;
              if (*(char *)((long)puVar18 + 0x17) < '\0') {
                func_0x000107c3192c(puVar17 + 2,*puVar18,puVar18[1]);
              }
              else {
                uVar25 = puVar18[1];
                uVar24 = *puVar18;
                *(undefined8 *)(puVar17 + 6) = puVar18[2];
                *(undefined8 *)(puVar17 + 4) = uVar25;
                *(undefined8 *)(puVar17 + 2) = uVar24;
              }
              puVar17 = puStack_158 + 8;
              puVar3 = puVar18 + 3;
              puVar18 = puVar18 + 4;
            } while (puVar3 != puVar10);
            uStack_168 = 1;
            puStack_158 = puVar17;
            FUN_10a50d2a0(&puStack_180);
            puVar16[2] = puVar17;
          }
          *extraout_x8 = puVar16;
          return;
        }
        func_0x00010a2941cc(&ppppuStack_a8);
        ___cxa_begin_catch(plVar13);
        __ZSt17current_exceptionv(&ppppuStack_a8);
        func_0x000109d1b350(puVar10,&ppppuStack_a8);
        __ZNSt13exception_ptrD1Ev(&ppppuStack_a8);
        ___cxa_end_catch();
      }
      return;
    }
  } while( true );
}



/* Entry: 10a50ccbc; end: 10a50ce13;  */

void FUN_10a50ccbc(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puStack_80;
  undefined4 **ppuStack_78;
  undefined4 **ppuStack_70;
  undefined1 uStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_110bea9c8;
  puVar7[2] = 0;
  puVar7[3] = 0;
  lVar2 = *(long *)(param_2 + 0x40);
  puVar3 = *(undefined8 **)(param_2 + 0x48);
  lVar5 = (long)puVar3 - lVar2;
  if (lVar5 != 0) {
    puVar8 = (undefined4 *)(lVar5 >> 5);
    if ((ulong)puVar8 >> 0x3b != 0) {
      FUN_10a50d258();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a50cde4);
      (*pcVar6)();
    }
    FUN_10a50d26c();
    puVar7[1] = puVar8;
    puVar7[2] = puVar8;
    puVar7[3] = puVar8 + param_3 * 8;
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    uStack_68 = 0;
    puVar9 = (undefined8 *)(lVar2 + 8);
    puStack_80 = puVar7 + 1;
    puStack_60 = puVar8;
    do {
      uVar4 = *(undefined4 *)(puVar9 + -1);
      *(undefined2 *)(puVar8 + 1) = *(undefined2 *)((long)puVar9 + -4);
      *puVar8 = uVar4;
      puStack_58 = puVar8;
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        func_0x000107c3192c(puVar8 + 2,*puVar9,puVar9[1]);
      }
      else {
        uVar11 = puVar9[1];
        uVar10 = *puVar9;
        *(undefined8 *)(puVar8 + 6) = puVar9[2];
        *(undefined8 *)(puVar8 + 4) = uVar11;
        *(undefined8 *)(puVar8 + 2) = uVar10;
      }
      puVar8 = puStack_58 + 8;
      puVar1 = puVar9 + 3;
      puVar9 = puVar9 + 4;
    } while (puVar1 != puVar3);
    uStack_68 = 1;
    puStack_58 = puVar8;
    FUN_10a50d2a0(&puStack_80);
    puVar7[2] = puVar8;
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 10a50ce14; end: 10a50cfc3;  */

/* WARNING: Removing unreachable block (ram,0x00010a50d060) */

void FUN_10a50ce14(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plStack_80;
  undefined4 **ppuStack_78;
  undefined4 **ppuStack_70;
  undefined1 uStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  iVar6 = (int)param_2;
  puVar12 = *(undefined4 **)(param_1 + 0x48);
  if (puVar12 < *(undefined4 **)(param_1 + 0x50)) {
    uVar7 = *param_2;
    *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(param_2 + 1);
    *puVar12 = uVar7;
    uVar17 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar12 + 4) = uVar17;
    *(undefined8 *)(puVar12 + 2) = uVar9;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    puVar12 = puVar12 + 8;
LAB_10a50cfa0:
    *(undefined4 **)(param_1 + 0x48) = puVar12;
    return;
  }
  plVar16 = (long *)(param_1 + 0x40);
  lVar14 = (long)puVar12 - *plVar16;
  uVar1 = (lVar14 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar8 = (long)*(undefined4 **)(param_1 + 0x50) - *plVar16;
    uVar11 = (long)uVar8 >> 4;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar8) {
      uVar11 = 0x7ffffffffffffff;
    }
    FUN_10a50d26c();
    puVar2 = (undefined4 *)(uVar11 + lVar14);
    uVar4 = *param_2;
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_2 + 1);
    *puVar2 = uVar4;
    uVar9 = *(undefined8 *)(param_2 + 6);
    uVar17 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar2 + 2) = uVar17;
    *(undefined8 *)(puVar2 + 6) = uVar9;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    puVar12 = puVar2 + 8;
    puVar15 = *(undefined4 **)(param_1 + 0x40);
    puVar3 = *(undefined4 **)(param_1 + 0x48);
    puVar2 = (undefined4 *)((long)puVar2 + ((long)puVar15 - (long)puVar3));
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = puVar2;
    puVar10 = puVar15;
    plStack_80 = plVar16;
    puStack_60 = puVar2;
    if (puVar3 == puVar15) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = *puVar10;
        *(undefined2 *)(puStack_58 + 1) = *(undefined2 *)(puVar10 + 1);
        *puStack_58 = uVar4;
        uVar17 = *(undefined8 *)(puVar10 + 4);
        uVar9 = *(undefined8 *)(puVar10 + 2);
        *(undefined8 *)(puStack_58 + 6) = *(undefined8 *)(puVar10 + 6);
        *(undefined8 *)(puStack_58 + 4) = uVar17;
        *(undefined8 *)(puStack_58 + 2) = uVar9;
        *(undefined8 *)(puVar10 + 4) = 0;
        *(undefined8 *)(puVar10 + 6) = 0;
        *(undefined8 *)(puVar10 + 2) = 0;
        puVar10 = puVar10 + 8;
        puStack_58 = puStack_58 + 8;
      } while (puVar10 != puVar3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)puVar15 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(puVar15 + 2));
        }
        puVar15 = puVar15 + 8;
      } while (puVar15 != puVar3);
    }
    FUN_10a50d2a0(&plStack_80);
    lVar14 = *(long *)(param_1 + 0x40);
    *(undefined4 **)(param_1 + 0x40) = puVar2;
    *(undefined4 **)(param_1 + 0x48) = puVar12;
    *(ulong *)(param_1 + 0x50) = uVar11 + CONCAT44(uVar7,iVar6) * 0x20;
    if (lVar14 != 0) {
      __ZdlPv();
    }
    goto LAB_10a50cfa0;
  }
  FUN_10a50d258();
  uVar11 = (ulong)iVar6;
  lVar14 = *(long *)(param_1 + 0x40);
  lVar13 = *(long *)(param_1 + 0x48);
  uVar1 = lVar13 - lVar14 >> 5;
  if (uVar11 + 1 != uVar1) {
    if ((lVar14 == lVar13) || (uVar1 <= uVar11)) goto LAB_10a50d080;
    puVar12 = (undefined4 *)(lVar14 + uVar11 * 0x20);
    uVar7 = *(undefined4 *)(lVar13 + -0x20);
    *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(lVar13 + -0x1c);
    *puVar12 = uVar7;
    if (*(char *)((long)puVar12 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(puVar12 + 2));
    }
    uVar17 = *(undefined8 *)(lVar13 + -0x10);
    uVar9 = *(undefined8 *)(lVar13 + -0x18);
    *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(lVar13 + -8);
    *(undefined8 *)(puVar12 + 4) = uVar17;
    *(undefined8 *)(puVar12 + 2) = uVar9;
    *(undefined1 *)(lVar13 + -1) = 0;
    *(undefined1 *)(lVar13 + -0x18) = 0;
    lVar14 = *(long *)(param_1 + 0x40);
    lVar13 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar13 - lVar14 >> 5) <= uVar11) goto LAB_10a50d080;
  }
  if (lVar14 != lVar13) {
    *(long *)(param_1 + 0x48) = lVar13 + -0x20;
    return;
  }
LAB_10a50d080:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a50d084);
  (*pcVar5)();
}



/* Entry: 10a50cfc4; end: 10a50d083;  */

/* WARNING: Removing unreachable block (ram,0x00010a50d060) */

void FUN_10a50cfc4(long param_1,int param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = (ulong)param_2;
  lVar5 = *(long *)(param_1 + 0x40);
  lVar6 = *(long *)(param_1 + 0x48);
  uVar1 = lVar6 - lVar5 >> 5;
  if (uVar7 + 1 != uVar1) {
    if ((lVar5 == lVar6) || (uVar1 <= uVar7)) goto LAB_10a50d080;
    puVar2 = (undefined4 *)(lVar5 + uVar7 * 0x20);
    uVar3 = *(undefined4 *)(lVar6 + -0x20);
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(lVar6 + -0x1c);
    *puVar2 = uVar3;
    if (*(char *)((long)puVar2 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(puVar2 + 2));
    }
    uVar9 = *(undefined8 *)(lVar6 + -0x10);
    uVar8 = *(undefined8 *)(lVar6 + -0x18);
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(lVar6 + -8);
    *(undefined8 *)(puVar2 + 4) = uVar9;
    *(undefined8 *)(puVar2 + 2) = uVar8;
    *(undefined1 *)(lVar6 + -1) = 0;
    *(undefined1 *)(lVar6 + -0x18) = 0;
    lVar5 = *(long *)(param_1 + 0x40);
    lVar6 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar6 - lVar5 >> 5) <= uVar7) goto LAB_10a50d080;
  }
  if (lVar5 != lVar6) {
    *(long *)(param_1 + 0x48) = lVar6 + -0x20;
    return;
  }
LAB_10a50d080:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a50d084);
  (*pcVar4)();
}



/* Entry: 10a50d084; end: 10a50d0e3;  */

undefined8 * FUN_10a50d084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea9c8;
  func_0x00010a50d2fc(param_1 + 1);
  return param_1;
}



/* Entry: 10a50d0e4; end: 10a50d257;  */

/* WARNING: Removing unreachable block (ram,0x00010a50d2ec) */

undefined1  [16] FUN_10a50d0e4(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  code **ppcVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5);
  lVar4 = lStack_98 - lStack_a0;
  if (lVar4 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      if (((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5) <= uVar7) ||
         (plVar2 = param_2,
         func_0x0001098ac018(param_2,&UNK_10e4c90fd,0x1d,*(long *)(param_1 + 8) + lVar6,2,1),
         (ulong)(lStack_98 - lStack_a0 >> 2) <= uVar7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a50d218);
        (*pcVar1)();
      }
      *(int *)(lStack_a0 + uVar7 * 4) = (int)plVar2;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar4 >> 2 != uVar7);
  }
  pcStack_88 = FUN_10a50d36c;
  appuStack_80[0] = &PTR_DAT_110bea9f8;
  ppcVar5 = &pcStack_88;
  func_0x0001098bb6d0(*param_2 + 0x18,ppcVar5,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar4 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    (*(code *)*appuStack_80[0])(appuStack_80);
    if (lStack_a0 != 0) {
      lStack_98 = lStack_a0;
      __ZdlPv();
    }
    __Unwind_Resume(lVar4);
    puVar3 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if ((ulong)puVar3 >> 0x3b != 0) {
      func_0x000109ffded8();
      if ((puVar3[0x18] & 1) == 0) {
        for (lVar4 = **(long **)(puVar3 + 0x10); lVar4 != **(long **)(puVar3 + 8);
            lVar4 = lVar4 + -0x20) {
        }
      }
      auVar10._8_8_ = ppcVar5;
      auVar10._0_8_ = puVar3;
      return auVar10;
    }
    lVar4 = (long)puVar3 << 5;
    __Znwm(lVar4);
    auVar9._8_8_ = puVar3;
    auVar9._0_8_ = lVar4;
    return auVar9;
  }
  auVar8._8_8_ = ppcVar5;
  auVar8._0_8_ = lVar4;
  return auVar8;
}



/* Entry: 10a50d258; end: 10a50d26b;  */

/* WARNING: Removing unreachable block (ram,0x00010a50d2ec) */

undefined1  [16] FUN_10a50d258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b != 0) {
    func_0x000109ffded8();
    if ((puVar1[0x18] & 1) == 0) {
      for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8);
          lVar2 = lVar2 + -0x20) {
      }
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = puVar1;
    return auVar4;
  }
  lVar2 = (long)puVar1 << 5;
  __Znwm(lVar2);
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 10a50d26c; end: 10a50d29f;  */

/* WARNING: Removing unreachable block (ram,0x00010a50d2ec) */

undefined1  [16] FUN_10a50d26c(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 >> 0x3b != 0) {
    func_0x000109ffded8();
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
          lVar1 = lVar1 + -0x20) {
      }
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  lVar1 = param_1 << 5;
  __Znwm(lVar1);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 10a50d2a0; end: 10a50d36b;  */

/* WARNING: Removing unreachable block (ram,0x00010a50d2ec) */

long FUN_10a50d2a0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x20) {
    }
  }
  return param_1;
}



/* Entry: 10a50d36c; end: 10a50d3d7;  */

void FUN_10a50d36c(void)

{
  return;
}



/* Entry: 10a50d3d8; end: 10a50d45b;  */

void FUN_10a50d3d8(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a50d490(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a50d45c; end: 10a50d48f;  */

void FUN_10a50d45c(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110beaa40;
  param_1[1] = &UNK_110beaa10;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a50d490; end: 10a50d53f;  */

undefined1 * FUN_10a50d490(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = &uStack_40;
  uStack_40 = *param_2;
  uStack_3c = *(undefined2 *)(param_2 + 1);
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(&uStack_38,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uStack_30 = *(undefined8 *)(param_2 + 4);
    uStack_38 = *(undefined8 *)(param_2 + 2);
    lStack_28 = *(long *)(param_2 + 6);
  }
  FUN_10ace7944(&uStack_40,param_1);
  FUN_10a50d540(&uStack_40,param_2);
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10a50d540; end: 10a50d60b;  */

bool FUN_10a50d540(char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  
  if (*param_1 == *param_2) {
    bVar4 = param_1[2];
    bVar5 = param_2[2];
    if ((bVar5 & bVar4) != 0) {
      bVar4 = param_1[1];
      bVar5 = param_2[1];
    }
    if ((((bVar4 == bVar5) && (param_1[3] == param_2[3])) && (param_1[4] == param_2[4])) &&
       (param_1[5] == param_2[5])) {
      bVar4 = param_1[0x1f];
      uVar1 = *(ulong *)(param_1 + 0x10);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      bVar5 = param_2[0x1f];
      uVar2 = *(ulong *)(param_2 + 0x10);
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar1 == uVar2) {
        pcVar6 = *(char **)(param_1 + 8);
        if (-1 < (char)bVar4) {
          pcVar6 = param_1 + 8;
        }
        pcVar3 = *(char **)(param_2 + 8);
        if (-1 < (char)bVar5) {
          pcVar3 = param_2 + 8;
        }
        _memcmp(pcVar6,pcVar3);
        return (int)pcVar6 == 0;
      }
    }
  }
  return false;
}



/* Entry: 10a50d60c; end: 10a50d64f;  */

void FUN_10a50d60c(long param_1,undefined8 param_2,long param_3)

{
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a50d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x48))
              (param_2,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    return;
  }
  return;
}



/* Entry: 10a50d650; end: 10a50d687;  */

void FUN_10a50d650(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a50d688; end: 10a50d68b;  */

void FUN_10a50d688(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a50d68c; end: 10a50d69f;  */

void FUN_10a50d68c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50d6a0; end: 10a50d6a7;  */

void FUN_10a50d6a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a50d6a8; end: 10a50d6df;  */

undefined8 FUN_10a50d6a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110beaaf0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a50d6e0; end: 10a50d6e3;  */

void FUN_10a50d6e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50d6e4; end: 10a50d71f;  */

void FUN_10a50d6e4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_20;
  undefined8 uStack_18;
  
  plVar1 = &lStack_20;
  lStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10a4ff0c0(&lStack_20,param_3);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010a502490();
  }
  return;
}



/* Entry: 10a50d720; end: 10a50d73b;  */

void FUN_10a50d720(void)

{
  return;
}



/* Entry: 10a50d73c; end: 10a50d7f3;  */

undefined8 * FUN_10a50d73c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beab28;
  (**(code **)param_1[0x11])();
  (**(code **)param_1[9])();
  FUN_10a235538(param_1 + 5);
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a50d7f4; end: 10a50daaf;  */

/* WARNING: Removing unreachable block (ram,0x00010a50d9f8) */
/* WARNING: Removing unreachable block (ram,0x00010a50d9fc) */
/* WARNING: Removing unreachable block (ram,0x00010a50da04) */
/* WARNING: Removing unreachable block (ram,0x00010a50da0c) */
/* WARNING: Removing unreachable block (ram,0x00010a50da10) */

void FUN_10a50d7f4(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 uStack_51;
  
  puVar5 = (undefined8 *)0x1f0;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  plStack_68 = *(long **)(param_2 + 0x20);
  uStack_70 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110beab68;
  func_0x0001098bae4c(puVar5,&UNK_10e4bccd2,0x17,param_3,lVar6,puVar5 + 0x19,puVar5 + 0x34,in_x7,0,0
                      ,&uStack_70);
  plVar1 = plStack_68;
  param_2 = param_2 + 0x28;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110beab68;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110beabb8;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110beac70;
  puVar5[0x25] = &UNK_110beac40;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_DAT_110beac70;
  puVar5[0x2b] = &UNK_110beac40;
  *(undefined1 *)(puVar5 + 0x33) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar6 = puVar5[0xc];
  if (lVar6 == 0) {
    bVar4 = false;
    lVar7 = param_2;
  }
  else {
    bVar4 = lVar6 != puVar5[0xb];
    lVar7 = 0;
    if (!bVar4) {
      lVar7 = param_2;
    }
  }
  *(undefined2 *)(puVar5 + 0x35) = 0;
  puVar5[0x38] = 0x10a50e7a0;
  puVar5[0x39] = &UNK_110be9e78;
  puVar5[0x3a] = 0;
  puVar5[0x3b] = 0;
  puVar5[0x3c] = 0;
  puVar5[0x3d] = 0;
  puVar5[0x34] = &PTR_DAT_110beacb0;
  if ((!bVar4) && (*(char *)(*(long *)(lVar7 + 0x20) + 8) == '\x01')) {
    puVar5[0x3d] = lVar7 + 0x18;
  }
  if ((lVar6 == 0) || (lVar6 == puVar5[0xb])) {
    FUN_10acef39c(puVar5 + 0x30,&uStack_51);
    puVar5[0x32] = param_3;
    FUN_10a4ec3f0(puVar5[0x30] + 0x38,param_2);
    *(undefined1 *)(puVar5 + 0x33) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a50dab0; end: 10a50db93;  */

undefined8 * FUN_10a50dab0(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110beab68;
  if (*(char *)(param_1 + 0x33) == '\x01') {
    FUN_10a50e7bc(param_1 + 0x30);
  }
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110beabb8;
  func_0x00010a50e4b0(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a50db94; end: 10a50db97;  */

void FUN_10a50db94(void)

{
  return;
}



/* Entry: 10a50db98; end: 10a50dd23;  */

uint FUN_10a50db98(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puStack_50;
  long *plStack_48;
  
  lVar12 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar12 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar7 = (undefined1 *)0x20;
  __Znwm();
  puVar10 = *(undefined1 **)(param_1 + 0x108);
  puVar3 = *(undefined1 **)(param_1 + 0x110);
  *puVar7 = *puVar10;
  if ((char)puVar10[0x1f] < '\0') {
    func_0x000107c3192c(puVar7 + 8,*(undefined8 *)(puVar10 + 8),*(undefined8 *)(puVar10 + 0x10));
  }
  else {
    uVar13 = *(undefined8 *)(puVar10 + 0x10);
    uVar9 = *(undefined8 *)(puVar10 + 8);
    *(undefined8 *)(puVar7 + 0x18) = *(undefined8 *)(puVar10 + 0x18);
    *(undefined8 *)(puVar7 + 0x10) = uVar13;
    *(undefined8 *)(puVar7 + 8) = uVar9;
  }
  while (puVar10 = puVar10 + 0x20, puVar10 != puVar3) {
    FUN_10a50e744(puVar7);
  }
  plVar8 = (long *)0x20;
  puStack_50 = puVar7;
  __Znwm();
  *plVar8 = (long)&PTR_FUN_110beace0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)puVar7;
  plStack_48 = plVar8;
  FUN_10a286fec(lVar2 + 0x20,&puStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lVar12 == 0) {
    uVar6 = 1;
  }
  else {
    uVar9 = *(undefined8 *)(lVar12 + 0x20);
    FUN_10a50e6c8(uVar9,*(undefined8 *)(lVar2 + 0x20));
    uVar6 = (uint)uVar9 ^ 1;
  }
  return uVar6;
}



/* Entry: 10a50dd24; end: 10a50dea3;  */

/* WARNING: Removing unreachable block (ram,0x00010a50de18) */
/* WARNING: Removing unreachable block (ram,0x00010a50de1c) */
/* WARNING: Removing unreachable block (ram,0x00010a50de24) */
/* WARNING: Removing unreachable block (ram,0x00010a50de2c) */
/* WARNING: Removing unreachable block (ram,0x00010a50de38) */
/* WARNING: Removing unreachable block (ram,0x00010a50de40) */
/* WARNING: Removing unreachable block (ram,0x00010a50de48) */
/* WARNING: Removing unreachable block (ram,0x00010a50de4c) */

void FUN_10a50dd24(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_48;
  
  lVar8 = *(long *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar6 = puVar5 + 3;
  *(undefined2 *)puVar6 = 4;
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar6;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_48 = puVar5;
  if ((*(byte *)(param_2 + 0x198) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a50de74);
    (*pcVar4)();
  }
  FUN_10ace58a8(param_2 + 0x180,param_2,lVar8 + 0x10,uVar7);
  plVar1 = puVar5 + 2;
  do {
    lVar8 = *plVar1;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_10a50ddf8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10a50ddf8:
      *param_1 = puVar5;
      func_0x0001092b4274(&puStack_48,puVar5);
      return;
    }
  } while( true );
}



/* Entry: 10a50dea4; end: 10a50dff3;  */

void FUN_10a50dea4(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_80;
  undefined1 **ppuStack_78;
  undefined1 **ppuStack_70;
  undefined1 uStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_110beabf8;
  puVar6[2] = 0;
  puVar6[3] = 0;
  lVar2 = *(long *)(param_2 + 0x40);
  puVar3 = *(undefined8 **)(param_2 + 0x48);
  lVar4 = (long)puVar3 - lVar2;
  if (lVar4 != 0) {
    puVar7 = (undefined1 *)(lVar4 >> 5);
    if ((ulong)puVar7 >> 0x3b != 0) {
      FUN_10a50e40c();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a50dfc4);
      (*pcVar5)();
    }
    FUN_10a50e420();
    puVar6[1] = puVar7;
    puVar6[2] = puVar7;
    puVar6[3] = puVar7 + param_3 * 0x20;
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    uStack_68 = 0;
    puVar8 = (undefined8 *)(lVar2 + 8);
    puStack_80 = puVar6 + 1;
    puStack_60 = puVar7;
    do {
      *puVar7 = *(undefined1 *)(puVar8 + -1);
      puStack_58 = puVar7;
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        func_0x000107c3192c(puVar7 + 8,*puVar8,puVar8[1]);
      }
      else {
        uVar10 = puVar8[1];
        uVar9 = *puVar8;
        *(undefined8 *)(puVar7 + 0x18) = puVar8[2];
        *(undefined8 *)(puVar7 + 0x10) = uVar10;
        *(undefined8 *)(puVar7 + 8) = uVar9;
      }
      puVar7 = puStack_58 + 0x20;
      puVar1 = puVar8 + 3;
      puVar8 = puVar8 + 4;
    } while (puVar1 != puVar3);
    uStack_68 = 1;
    puStack_58 = puVar7;
    FUN_10a50e454(&puStack_80);
    puVar6[2] = puVar7;
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10a50dff4; end: 10a50e17f;  */

/* WARNING: Removing unreachable block (ram,0x00010a50e214) */

void FUN_10a50dff4(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plStack_70;
  undefined1 **ppuStack_68;
  undefined1 **ppuStack_60;
  undefined1 uStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  puVar10 = *(undefined1 **)(param_1 + 0x48);
  if (puVar10 < *(undefined1 **)(param_1 + 0x50)) {
    *puVar10 = *param_2;
    uVar16 = *(undefined8 *)(param_2 + 0x10);
    uVar15 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar10 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(puVar10 + 0x10) = uVar16;
    *(undefined8 *)(puVar10 + 8) = uVar15;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    puVar10 = puVar10 + 0x20;
LAB_10a50e160:
    *(undefined1 **)(param_1 + 0x48) = puVar10;
    return;
  }
  plVar14 = (long *)(param_1 + 0x40);
  lVar12 = (long)puVar10 - *plVar14;
  uVar1 = (lVar12 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar7 = (long)*(undefined1 **)(param_1 + 0x50) - *plVar14;
    uVar9 = (long)uVar7 >> 4;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar9 = 0x7ffffffffffffff;
    }
    FUN_10a50e420();
    puVar2 = (undefined1 *)(uVar9 + lVar12);
    *puVar2 = *param_2;
    uVar16 = *(undefined8 *)(param_2 + 0x10);
    uVar15 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(puVar2 + 0x10) = uVar16;
    *(undefined8 *)(puVar2 + 8) = uVar15;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    puVar10 = puVar2 + 0x20;
    puVar13 = *(undefined1 **)(param_1 + 0x40);
    puVar3 = *(undefined1 **)(param_1 + 0x48);
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puVar2 = puVar2 + ((long)puVar13 - (long)puVar3);
    puStack_48 = puVar2;
    puVar8 = puVar13;
    plStack_70 = plVar14;
    puStack_50 = puVar2;
    if ((long)puVar13 - (long)puVar3 == 0) {
      uStack_58 = 1;
    }
    else {
      do {
        *puStack_48 = *puVar8;
        uVar16 = *(undefined8 *)(puVar8 + 0x10);
        uVar15 = *(undefined8 *)(puVar8 + 8);
        *(undefined8 *)(puStack_48 + 0x18) = *(undefined8 *)(puVar8 + 0x18);
        *(undefined8 *)(puStack_48 + 0x10) = uVar16;
        *(undefined8 *)(puStack_48 + 8) = uVar15;
        *(undefined8 *)(puVar8 + 0x10) = 0;
        *(undefined8 *)(puVar8 + 0x18) = 0;
        *(undefined8 *)(puVar8 + 8) = 0;
        puVar8 = puVar8 + 0x20;
        puStack_48 = puStack_48 + 0x20;
      } while (puVar8 != puVar3);
      uStack_58 = 1;
      do {
        if ((char)puVar13[0x1f] < '\0') {
          __ZdlPv(*(undefined8 *)(puVar13 + 8));
        }
        puVar13 = puVar13 + 0x20;
      } while (puVar13 != puVar3);
    }
    FUN_10a50e454(&plStack_70);
    lVar12 = *(long *)(param_1 + 0x40);
    *(undefined1 **)(param_1 + 0x40) = puVar2;
    *(undefined1 **)(param_1 + 0x48) = puVar10;
    *(ulong *)(param_1 + 0x50) = uVar9 + CONCAT44(uVar6,iVar5) * 0x20;
    if (lVar12 != 0) {
      __ZdlPv();
    }
    goto LAB_10a50e160;
  }
  FUN_10a50e40c();
  uVar9 = (ulong)iVar5;
  lVar12 = *(long *)(param_1 + 0x40);
  lVar11 = *(long *)(param_1 + 0x48);
  uVar1 = lVar11 - lVar12 >> 5;
  if (uVar9 + 1 != uVar1) {
    if ((lVar12 == lVar11) || (uVar1 <= uVar9)) goto LAB_10a50e234;
    puVar10 = (undefined1 *)(lVar12 + uVar9 * 0x20);
    *puVar10 = *(undefined1 *)(lVar11 + -0x20);
    if ((char)puVar10[0x1f] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar10 + 8));
    }
    uVar16 = *(undefined8 *)(lVar11 + -0x10);
    uVar15 = *(undefined8 *)(lVar11 + -0x18);
    *(undefined8 *)(puVar10 + 0x18) = *(undefined8 *)(lVar11 + -8);
    *(undefined8 *)(puVar10 + 0x10) = uVar16;
    *(undefined8 *)(puVar10 + 8) = uVar15;
    *(undefined1 *)(lVar11 + -1) = 0;
    *(undefined1 *)(lVar11 + -0x18) = 0;
    lVar12 = *(long *)(param_1 + 0x40);
    lVar11 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar11 - lVar12 >> 5) <= uVar9) goto LAB_10a50e234;
  }
  if (lVar12 != lVar11) {
    *(long *)(param_1 + 0x48) = lVar11 + -0x20;
    return;
  }
LAB_10a50e234:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a50e238);
  (*pcVar4)();
}



/* Entry: 10a50e180; end: 10a50e237;  */

/* WARNING: Removing unreachable block (ram,0x00010a50e214) */

void FUN_10a50e180(long param_1,int param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = (ulong)param_2;
  lVar4 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  uVar1 = lVar5 - lVar4 >> 5;
  if (uVar6 + 1 != uVar1) {
    if ((lVar4 == lVar5) || (uVar1 <= uVar6)) goto LAB_10a50e234;
    puVar2 = (undefined1 *)(lVar4 + uVar6 * 0x20);
    *puVar2 = *(undefined1 *)(lVar5 + -0x20);
    if ((char)puVar2[0x1f] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar2 + 8));
    }
    uVar8 = *(undefined8 *)(lVar5 + -0x10);
    uVar7 = *(undefined8 *)(lVar5 + -0x18);
    *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(lVar5 + -8);
    *(undefined8 *)(puVar2 + 0x10) = uVar8;
    *(undefined8 *)(puVar2 + 8) = uVar7;
    *(undefined1 *)(lVar5 + -1) = 0;
    *(undefined1 *)(lVar5 + -0x18) = 0;
    lVar4 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar5 - lVar4 >> 5) <= uVar6) goto LAB_10a50e234;
  }
  if (lVar4 != lVar5) {
    *(long *)(param_1 + 0x48) = lVar5 + -0x20;
    return;
  }
LAB_10a50e234:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a50e238);
  (*pcVar3)();
}



/* Entry: 10a50e238; end: 10a50e297;  */

undefined8 * FUN_10a50e238(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beabf8;
  func_0x00010a50e4b0(param_1 + 1);
  return param_1;
}



/* Entry: 10a50e298; end: 10a50e40b;  */

/* WARNING: Removing unreachable block (ram,0x00010a50e4a0) */

undefined1  [16] FUN_10a50e298(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  code **ppcVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5);
  lVar4 = lStack_98 - lStack_a0;
  if (lVar4 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      if (((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5) <= uVar7) ||
         (plVar2 = param_2,
         func_0x0001098ac018(param_2,&UNK_10e4bcbdf,0x17,*(long *)(param_1 + 8) + lVar6,2,1),
         (ulong)(lStack_98 - lStack_a0 >> 2) <= uVar7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a50e3cc);
        (*pcVar1)();
      }
      *(int *)(lStack_a0 + uVar7 * 4) = (int)plVar2;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar4 >> 2 != uVar7);
  }
  pcStack_88 = FUN_10a50e520;
  appuStack_80[0] = &PTR_DAT_110beac28;
  ppcVar5 = &pcStack_88;
  func_0x0001098bb6d0(*param_2 + 0x18,ppcVar5,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar4 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    (*(code *)*appuStack_80[0])(appuStack_80);
    if (lStack_a0 != 0) {
      lStack_98 = lStack_a0;
      __ZdlPv();
    }
    __Unwind_Resume(lVar4);
    puVar3 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if ((ulong)puVar3 >> 0x3b != 0) {
      func_0x000109ffded8();
      if ((puVar3[0x18] & 1) == 0) {
        for (lVar4 = **(long **)(puVar3 + 0x10); lVar4 != **(long **)(puVar3 + 8);
            lVar4 = lVar4 + -0x20) {
        }
      }
      auVar10._8_8_ = ppcVar5;
      auVar10._0_8_ = puVar3;
      return auVar10;
    }
    lVar4 = (long)puVar3 << 5;
    __Znwm(lVar4);
    auVar9._8_8_ = puVar3;
    auVar9._0_8_ = lVar4;
    return auVar9;
  }
  auVar8._8_8_ = ppcVar5;
  auVar8._0_8_ = lVar4;
  return auVar8;
}



/* Entry: 10a50e40c; end: 10a50e41f;  */

/* WARNING: Removing unreachable block (ram,0x00010a50e4a0) */

undefined1  [16] FUN_10a50e40c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b != 0) {
    func_0x000109ffded8();
    if ((puVar1[0x18] & 1) == 0) {
      for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8);
          lVar2 = lVar2 + -0x20) {
      }
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = puVar1;
    return auVar4;
  }
  lVar2 = (long)puVar1 << 5;
  __Znwm(lVar2);
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 10a50e420; end: 10a50e453;  */

/* WARNING: Removing unreachable block (ram,0x00010a50e4a0) */

undefined1  [16] FUN_10a50e420(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 >> 0x3b != 0) {
    func_0x000109ffded8();
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
          lVar1 = lVar1 + -0x20) {
      }
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  lVar1 = param_1 << 5;
  __Znwm(lVar1);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 10a50e454; end: 10a50e51f;  */

/* WARNING: Removing unreachable block (ram,0x00010a50e4a0) */

long FUN_10a50e454(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x20) {
    }
  }
  return param_1;
}



/* Entry: 10a50e520; end: 10a50e58b;  */

void FUN_10a50e520(void)

{
  return;
}



/* Entry: 10a50e58c; end: 10a50e693;  */

void FUN_10a50e58c(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined4 uStack_60;
  undefined1 auStack_5c [4];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  iVar2 = (int)&uStack_60;
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  puVar3 = *(undefined1 **)(param_2 + 0x20);
  uStack_60 = CONCAT31(uStack_60._1_3_,*puVar3);
  if ((char)puVar3[0x1f] < '\0') {
    func_0x000107c3192c(&uStack_58,*(undefined8 *)(puVar3 + 8),*(undefined8 *)(puVar3 + 0x10));
  }
  else {
    uStack_50 = *(undefined8 *)(puVar3 + 0x10);
    uStack_58 = *(undefined8 *)(puVar3 + 8);
    lStack_48 = *(long *)(puVar3 + 0x18);
  }
  FUN_10a50e744(&uStack_60,uVar4);
  FUN_10a50e6c8(&uStack_60,puVar3);
  if (lStack_48 < 0) {
    __ZdlPv(uStack_58);
  }
  if (iVar2 == 0) {
    uStack_60 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_60 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_60,auStack_5c,1);
  return;
}



/* Entry: 10a50e694; end: 10a50e6c7;  */

void FUN_10a50e694(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110beac70;
  param_1[1] = &UNK_110beac40;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a50e6c8; end: 10a50e743;  */

bool FUN_10a50e6c8(char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  
  if (*param_1 == *param_2) {
    bVar4 = param_1[0x1f];
    uVar1 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)bVar4) {
      uVar1 = (ulong)bVar4;
    }
    bVar5 = param_2[0x1f];
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (-1 < (char)bVar5) {
      uVar2 = (ulong)bVar5;
    }
    if (uVar1 == uVar2) {
      pcVar6 = *(char **)(param_1 + 8);
      if (-1 < (char)bVar4) {
        pcVar6 = param_1 + 8;
      }
      pcVar3 = *(char **)(param_2 + 8);
      if (-1 < (char)bVar5) {
        pcVar3 = param_2 + 8;
      }
      _memcmp(pcVar6,pcVar3);
      return (int)pcVar6 == 0;
    }
  }
  return false;
}



/* Entry: 10a50e744; end: 10a50e7bb;  */

void FUN_10a50e744(byte *param_1,byte *param_2)

{
  ulong uVar1;
  
  *param_1 = *param_1 | *param_2;
  uVar1 = *(ulong *)(param_2 + 0x10);
  if (-1 < (char)param_2[0x1f]) {
    uVar1 = (ulong)param_2[0x1f];
  }
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_1 + 8,param_2 + 8);
    return;
  }
  return;
}



/* Entry: 10a50e7bc; end: 10a50e84b;  */

long FUN_10a50e7bc(long param_1)

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



/* Entry: 10a50e84c; end: 10a50e84f;  */

void FUN_10a50e84c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a50e850; end: 10a50e863;  */

void FUN_10a50e850(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50e864; end: 10a50e86b;  */

void FUN_10a50e864(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a50e86c; end: 10a50e8a3;  */

undefined8 FUN_10a50e86c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bead20);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a50e8a4; end: 10a50e8a7;  */

void FUN_10a50e8a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50e8a8; end: 10a50e94f;  */

undefined8 * FUN_10a50e8a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bead40;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a50e950; end: 10a50ebff;  */

/* WARNING: Removing unreachable block (ram,0x00010a50eb64) */
/* WARNING: Removing unreachable block (ram,0x00010a50eb68) */
/* WARNING: Removing unreachable block (ram,0x00010a50eb70) */
/* WARNING: Removing unreachable block (ram,0x00010a50eb78) */
/* WARNING: Removing unreachable block (ram,0x00010a50eb7c) */

void FUN_10a50e950(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long *plVar7;
  undefined8 uStack_60;
  long *plStack_58;
  
  puVar5 = (undefined8 *)0x3e0;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  plStack_58 = *(long **)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_DAT_110bead80;
  func_0x0001098bae4c(puVar5,&UNK_10e4bcff0,0x21,param_3,lVar6,puVar5 + 0x19,puVar5 + 0x72,in_x7,0,0
                      ,&uStack_60);
  plVar7 = plStack_58;
  plVar1 = (long *)(param_2 + 0x28);
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *puVar5 = &PTR_DAT_110bead80;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x19] = &PTR_FUN_110beadd0;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110beae88;
  puVar5[0x25] = &UNK_110beae58;
  *(undefined1 *)((long)puVar5 + 0x13c) = 0;
  *(undefined1 *)((long)puVar5 + 0x15c) = 0;
  puVar5[0x2e] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2f) = 0x40000000;
  puVar5[0x2c] = &PTR_DAT_110beae88;
  puVar5[0x2d] = &UNK_110beae58;
  *(undefined1 *)((long)puVar5 + 0x17c) = 0;
  *(undefined1 *)((long)puVar5 + 0x19c) = 0;
  *(undefined1 *)(puVar5 + 0x34) = 0;
  *(undefined1 *)(puVar5 + 0x70) = 0;
  lVar6 = puVar5[0xc];
  if (lVar6 == 0) {
    bVar4 = false;
    plVar7 = plVar1;
  }
  else {
    bVar4 = lVar6 != puVar5[0xb];
    plVar7 = (long *)0x0;
    if (!bVar4) {
      plVar7 = plVar1;
    }
  }
  *(undefined2 *)(puVar5 + 0x73) = 0;
  puVar5[0x76] = 0x10a50f598;
  puVar5[0x77] = &UNK_110be9d10;
  puVar5[0x79] = 0;
  puVar5[0x78] = 0;
  puVar5[0x7b] = 0;
  puVar5[0x7a] = 0;
  puVar5[0x72] = &PTR_DAT_110beaec8;
  if ((!bVar4) && (*(char *)(plVar7[3] + 8) == '\x01')) {
    puVar5[0x7b] = plVar7 + 2;
  }
  if ((lVar6 == 0) || (lVar6 == puVar5[0xb])) {
    lVar6 = *plVar1;
    FUN_10acf6c0c(puVar5 + 0x34);
    puVar5[0x6c] = param_3;
    puVar5[0x6d] = lVar6 + 0x408;
    puVar5[0x6e] = lVar6 + 0x488;
    *(undefined1 *)(puVar5 + 0x70) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a50ec00; end: 10a50ed0f;  */

undefined8 * FUN_10a50ec00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beadd0;
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  *param_1 = &PTR____cxa_pure_virtual_110b17e28;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a50ed10; end: 10a50ed13;  */

void FUN_10a50ed10(void)

{
  return;
}



/* Entry: 10a50ed14; end: 10a50edbf;  */

uint FUN_10a50ed14(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(param_1 + 0x70);
  lVar1 = param_1 + 0x160;
  if (lVar6 != param_1 + 0x120) {
    lVar1 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar1;
  if (*(char *)(lVar1 + 0x3c) == '\x01') {
    *(undefined1 *)(lVar1 + 0x3c) = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x108);
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  uVar8 = puVar5[1];
  uVar7 = *puVar5;
  uVar9 = *(undefined8 *)((long)puVar5 + 0xf);
  *(undefined8 *)(lVar1 + 0x33) = *(undefined8 *)((long)puVar5 + 0x17);
  *(undefined8 *)(lVar1 + 0x2b) = uVar9;
  *(undefined8 *)(lVar1 + 0x24) = uVar8;
  *(undefined8 *)(lVar1 + 0x1c) = uVar7;
  if ((long)puVar2 - (long)puVar5 != 0x20) {
    puVar5 = puVar5 + 4;
    do {
      func_0x00010a4bfba4(lVar1 + 0x1c,puVar5);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar2);
  }
  uVar4 = 1;
  *(undefined1 *)(lVar1 + 0x3c) = 1;
  if (lVar6 != 0) {
    if ((*(byte *)(lVar6 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a50edc0);
      (*pcVar3)();
    }
    lVar6 = lVar6 + 0x1c;
    func_0x00010a50f4ac(lVar6,lVar1 + 0x1c);
    uVar4 = (uint)lVar6 ^ 1;
  }
  return uVar4;
}



/* Entry: 10a50edc0; end: 10a50ef43;  */

/* WARNING: Removing unreachable block (ram,0x00010a50eeb8) */
/* WARNING: Removing unreachable block (ram,0x00010a50eebc) */
/* WARNING: Removing unreachable block (ram,0x00010a50eec4) */
/* WARNING: Removing unreachable block (ram,0x00010a50eecc) */
/* WARNING: Removing unreachable block (ram,0x00010a50eed8) */
/* WARNING: Removing unreachable block (ram,0x00010a50eee0) */
/* WARNING: Removing unreachable block (ram,0x00010a50eee8) */
/* WARNING: Removing unreachable block (ram,0x00010a50eeec) */

void FUN_10a50edc0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_48;
  
  lVar7 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar7 + 0x3c) & 1) != 0) {
    puVar5 = (undefined8 *)0xa0;
    __Znwm();
    puVar6 = puVar5 + 3;
    *(undefined2 *)puVar6 = 4;
    puVar5[2] = 0;
    puVar5[1] = 0x200000006;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = puVar6;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar5 + 0x13) = 0;
    puStack_48 = puVar5;
    if ((*(byte *)(param_2 + 0x380) & 1) != 0) {
      FUN_10acf63a4(param_2 + 0x1a0,param_2,lVar7 + 0x10,lVar7 + 0x1c);
      plVar1 = puVar5 + 2;
      do {
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(puVar6);
            goto LAB_10a50ee98;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar7 >> 1 & 1) != 0) {
LAB_10a50ee98:
          *param_1 = puVar5;
          func_0x0001092b4274(&puStack_48,puVar5);
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a50ef14);
  (*pcVar4)();
}



/* Entry: 10a50ef44; end: 10a50f007;  */

void FUN_10a50ef44(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110beae10;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 5;
    if (uVar4 >> 0x3b != 0) {
      FUN_10a50f320();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a50efe4);
      (*pcVar2)();
    }
    FUN_10a50f334();
    puVar3[1] = uVar4;
    puVar3[3] = uVar4 + param_3 * 0x20;
    _memmove();
    puVar3[2] = uVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a50f008; end: 10a50f0cb;  */

void FUN_10a50f008(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = *(undefined8 **)(param_1 + 0x48);
  if (puVar9 < *(undefined8 **)(param_1 + 0x50)) {
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    puVar9[1] = param_2[1];
    *puVar9 = uVar10;
    puVar9[3] = uVar12;
    puVar9[2] = uVar11;
    puVar9 = puVar9 + 4;
LAB_10a50f0b4:
    *(undefined8 **)(param_1 + 0x48) = puVar9;
    return;
  }
  lVar8 = (long)puVar9 - *(long *)(param_1 + 0x40);
  uVar1 = (lVar8 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar5 = (long)*(undefined8 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40);
    uVar6 = (long)uVar5 >> 4;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar6 = 0x7ffffffffffffff;
    }
    puVar4 = param_2;
    FUN_10a50f334();
    puVar2 = (undefined8 *)(uVar6 + lVar8);
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar10;
    puVar2[3] = uVar12;
    puVar2[2] = uVar11;
    puVar9 = puVar2 + 4;
    lVar7 = (long)puVar2 - (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40));
    _memcpy(lVar7);
    lVar8 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar7;
    *(undefined8 **)(param_1 + 0x48) = puVar9;
    *(ulong *)(param_1 + 0x50) = uVar6 + (long)puVar4 * 0x20;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    goto LAB_10a50f0b4;
  }
  FUN_10a50f320();
  uVar6 = (ulong)(int)param_2;
  lVar8 = *(long *)(param_1 + 0x40);
  lVar7 = *(long *)(param_1 + 0x48);
  uVar1 = lVar7 - lVar8 >> 5;
  if (uVar6 + 1 != uVar1) {
    if ((lVar8 == lVar7) || (uVar1 <= uVar6)) goto LAB_10a50f130;
    puVar9 = (undefined8 *)(lVar8 + uVar6 * 0x20);
    uVar11 = *(undefined8 *)(lVar7 + -0x18);
    uVar10 = *(undefined8 *)(lVar7 + -0x20);
    uVar12 = *(undefined8 *)(lVar7 + -0x11);
    *(undefined8 *)((long)puVar9 + 0x17) = *(undefined8 *)(lVar7 + -9);
    *(undefined8 *)((long)puVar9 + 0xf) = uVar12;
    puVar9[1] = uVar11;
    *puVar9 = uVar10;
    lVar8 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar7 - lVar8 >> 5) <= uVar6) goto LAB_10a50f130;
  }
  if (lVar8 != lVar7) {
    *(long *)(param_1 + 0x48) = lVar7 + -0x20;
    return;
  }
LAB_10a50f130:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a50f134);
  (*pcVar3)();
}



/* Entry: 10a50f0cc; end: 10a50f133;  */

void FUN_10a50f0cc(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = (ulong)param_2;
  lVar5 = *(long *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x48);
  uVar1 = lVar4 - lVar5 >> 5;
  if (uVar6 + 1 != uVar1) {
    if ((lVar5 == lVar4) || (uVar1 <= uVar6)) goto LAB_10a50f130;
    puVar2 = (undefined8 *)(lVar5 + uVar6 * 0x20);
    uVar8 = *(undefined8 *)(lVar4 + -0x18);
    uVar7 = *(undefined8 *)(lVar4 + -0x20);
    uVar9 = *(undefined8 *)(lVar4 + -0x11);
    *(undefined8 *)((long)puVar2 + 0x17) = *(undefined8 *)(lVar4 + -9);
    *(undefined8 *)((long)puVar2 + 0xf) = uVar9;
    puVar2[1] = uVar8;
    *puVar2 = uVar7;
    lVar5 = *(long *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar4 - lVar5 >> 5) <= uVar6) goto LAB_10a50f130;
  }
  if (lVar5 != lVar4) {
    *(long *)(param_1 + 0x48) = lVar4 + -0x20;
    return;
  }
LAB_10a50f130:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a50f134);
  (*pcVar3)();
}



/* Entry: 10a50f134; end: 10a50f1ab;  */

undefined8 * FUN_10a50f134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beae10;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a50f1ac; end: 10a50f31f;  */

void FUN_10a50f1ac(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5);
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5) <= uVar6) {
LAB_10a50f2dc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a50f2e0);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c8fc9,0x23,*(long *)(param_1 + 8) + lVar5,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar6) goto LAB_10a50f2dc;
      *(int *)(lStack_a0 + uVar6 * 4) = (int)plVar2;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar3 >> 2 != uVar6);
  }
  pcStack_88 = FUN_10a50f368;
  appuStack_80[0] = &PTR_DAT_110beae40;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_88,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar3 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar4 >> 0x3b == 0) {
    __Znwm((long)puVar4 << 5);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a50f320; end: 10a50f333;  */

void FUN_10a50f320(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b == 0) {
    __Znwm((long)puVar1 << 5);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a50f334; end: 10a50f367;  */

void FUN_10a50f334(ulong param_1)

{
  if (param_1 >> 0x3b == 0) {
    __Znwm(param_1 << 5);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a50f368; end: 10a50f3c7;  */

void FUN_10a50f368(void)

{
  return;
}



/* Entry: 10a50f3c8; end: 10a50f477;  */

void FUN_10a50f3c8(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar3 = (int)&uStack_50;
  if (((*(byte *)(param_3 + 0x3c) & 1) != 0) && ((*(byte *)(param_2 + 0x3c) & 1) != 0)) {
    uStack_48 = *(undefined8 *)(param_2 + 0x24);
    uStack_50 = *(undefined8 *)(param_2 + 0x1c);
    uStack_38 = *(undefined8 *)(param_2 + 0x34);
    uStack_40 = *(undefined8 *)(param_2 + 0x2c);
    func_0x00010a4bfba4(&uStack_50,param_3 + 0x1c);
    func_0x00010a50f4ac(&uStack_50,param_2 + 0x1c);
    if (iVar3 == 0) {
      uVar4 = 0x40000000;
    }
    else {
      lVar1 = 0x10;
      if (param_4 != 0) {
        lVar1 = 0x18;
      }
      uVar4 = *(undefined4 *)(param_2 + lVar1);
    }
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10a26d5a0(param_1,&uStack_50,(long)&uStack_50 + 4,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a50f478);
  (*pcVar2)();
}



/* Entry: 10a50f478; end: 10a50f5b3;  */

void FUN_10a50f478(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110beae88;
  param_1[1] = &UNK_110beae58;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10a50f5b4; end: 10a50f7df;  */

long FUN_10a50f5b4(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  func_0x00010a1bb0e8(param_1 + 0x1a8);
  func_0x00010a061620(param_1 + 400);
  plVar5 = *(long **)(param_1 + 0x178);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010726f2e4(param_1 + 0x150);
  func_0x00010a50f66c(param_1 + 0x128);
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a50f7e0; end: 10a50fa1f;  */

/* WARNING: Removing unreachable block (ram,0x00010a50f9b4) */
/* WARNING: Removing unreachable block (ram,0x00010a50f9b8) */
/* WARNING: Removing unreachable block (ram,0x00010a50f9c0) */
/* WARNING: Removing unreachable block (ram,0x00010a50f9c8) */
/* WARNING: Removing unreachable block (ram,0x00010a50f9cc) */

void FUN_10a50f7e0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1d8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110beaf38;
  func_0x0001098bae4c(puVar5,&UNK_10e4bd23f,0x32,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x31,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110beaf38;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bea988;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110beafa8;
  puVar5[0x25] = &UNK_110beaf78;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110beafa8;
  puVar5[0x2b] = &UNK_110beaf78;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined2 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x32) = 0;
  puVar5[0x35] = 0x10a510000;
  puVar5[0x36] = &UNK_110be9e78;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x31] = &PTR_DAT_110beafe8;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3a] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x181) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a50fa20; end: 10a50fadb;  */

undefined8 * FUN_10a50fa20(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110beaf38;
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bea988;
  func_0x00010a50d2fc(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a50fadc; end: 10a50fadf;  */

void FUN_10a50fadc(void)

{
  return;
}



/* Entry: 10a50fae0; end: 10a50fc6f;  */

uint FUN_10a50fae0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 *puStack_50;
  long *plStack_48;
  
  lVar13 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar13 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar11 = *(undefined4 **)(param_1 + 0x108);
  puVar3 = *(undefined4 **)(param_1 + 0x110);
  uVar4 = *puVar11;
  *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(puVar11 + 1);
  *puVar8 = uVar4;
  if (*(char *)((long)puVar11 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar8 + 2,*(undefined8 *)(puVar11 + 2),*(undefined8 *)(puVar11 + 4));
  }
  else {
    uVar14 = *(undefined8 *)(puVar11 + 4);
    uVar10 = *(undefined8 *)(puVar11 + 2);
    *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar11 + 6);
    *(undefined8 *)(puVar8 + 4) = uVar14;
    *(undefined8 *)(puVar8 + 2) = uVar10;
  }
  while (puVar11 = puVar11 + 8, puVar11 != puVar3) {
    FUN_10ace7944(puVar8);
  }
  plVar9 = (long *)0x20;
  puStack_50 = puVar8;
  __Znwm();
  *plVar9 = (long)&PTR_FUN_110beb018;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)puVar8;
  plStack_48 = plVar9;
  FUN_10a286fec(lVar2 + 0x20,&puStack_50);
  plVar9 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (lVar13 == 0) {
    uVar7 = 1;
  }
  else {
    uVar10 = *(undefined8 *)(lVar13 + 0x20);
    FUN_10a50d540(uVar10,*(undefined8 *)(lVar2 + 0x20));
    uVar7 = (uint)uVar10 ^ 1;
  }
  return uVar7;
}



/* Entry: 10a50fc70; end: 10a50fecb;  */

/* WARNING: Removing unreachable block (ram,0x00010a50fdd8) */
/* WARNING: Removing unreachable block (ram,0x00010a50fddc) */
/* WARNING: Removing unreachable block (ram,0x00010a50fde4) */
/* WARNING: Removing unreachable block (ram,0x00010a50fdec) */
/* WARNING: Removing unreachable block (ram,0x00010a50fdf8) */
/* WARNING: Removing unreachable block (ram,0x00010a50fe00) */
/* WARNING: Removing unreachable block (ram,0x00010a50fe08) */
/* WARNING: Removing unreachable block (ram,0x00010a50fe0c) */

void FUN_10a50fc70(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x70);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar6 = puVar5 + 3;
  *(undefined2 *)puVar6 = 4;
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar6;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_b0 = puVar5;
  if ((*(byte *)(param_2 + 0x181) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a50fe4c);
    (*pcVar4)();
  }
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_8c = 0x20000000;
  FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
  pcStack_88 = FUN_10a5100b0;
  appuStack_80[0] = &PTR_FUN_110beb068;
  param_2 = param_2 + 0x18;
  FUN_10a4fe9a0(param_2,&pcStack_88,&lStack_a8);
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  plVar1 = puVar5 + 2;
  *(int *)(lVar9 + 0x10) = (int)param_2;
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_10a50fdb8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a50fdb8:
      while( true ) {
        *param_1 = puVar5;
        puVar6 = puVar5;
        func_0x0001092b4274(&puStack_b0);
        lVar9 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
        ___stack_chk_fail();
        if ((int)puVar6 == 0) break;
        (*(code *)*appuStack_80[0])(appuStack_80);
        if (lStack_a8 != 0) {
          lStack_a0 = lStack_a8;
          __ZdlPv();
        }
        ___cxa_begin_catch(lVar9);
        __ZSt17current_exceptionv(&pcStack_88);
        func_0x000109d1b350(puVar5,&pcStack_88);
        __ZNSt13exception_ptrD1Ev(&pcStack_88);
        ___cxa_end_catch();
      }
      __Unwind_Resume(lVar9);
      func_0x000104bd46a0();
      uVar7 = *(undefined8 *)(lVar9 + 8);
      *puVar6 = &PTR____cxa_pure_virtual_110b17f40;
      puVar6[1] = uVar7;
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar9 + 0x18);
      puVar6[2] = uVar7;
      *puVar6 = &PTR_FUN_110beafa8;
      lVar8 = *(long *)(lVar9 + 0x28);
      uVar7 = *(undefined8 *)(lVar9 + 0x20);
      puVar6[5] = *(undefined8 *)(lVar9 + 0x28);
      puVar6[4] = uVar7;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  } while( true );
}



/* Entry: 10a50fecc; end: 10a50ff1f;  */

void FUN_10a50fecc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = &PTR_FUN_110beafa8;
  lVar5 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a50ff20; end: 10a50ffa3;  */

void FUN_10a50ff20(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a50d490(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a50ffa4; end: 10a51001b;  */

void FUN_10a50ffa4(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110beafa8;
  param_1[1] = &UNK_110beaf78;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a51001c; end: 10a510053;  */

void FUN_10a51001c(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a510054; end: 10a510057;  */

void FUN_10a510054(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a510058; end: 10a51006b;  */

void FUN_10a510058(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a51006c; end: 10a510073;  */

void FUN_10a51006c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a510074; end: 10a5100ab;  */

undefined8 FUN_10a510074(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110beb058);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a5100ac; end: 10a5100af;  */

void FUN_10a5100ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5100b0; end: 10a510117;  */

void FUN_10a5100b0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar3 = &lStack_40;
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (*plVar2 != 0) {
      FUN_10a4ff0c0(&lStack_40,param_3);
      lVar4 = *plVar3;
      *plVar3 = 0;
      if (lVar4 != 0) {
        func_0x00010a502490();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a510118);
  (*pcVar1)();
}



/* Entry: 10a510118; end: 10a510133;  */

void FUN_10a510118(void)

{
  return;
}



/* Entry: 10a510134; end: 10a5101db;  */

undefined8 * FUN_10a510134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beb090;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a5101dc; end: 10a510423;  */

/* WARNING: Removing unreachable block (ram,0x00010a5103b8) */
/* WARNING: Removing unreachable block (ram,0x00010a5103bc) */
/* WARNING: Removing unreachable block (ram,0x00010a5103c4) */
/* WARNING: Removing unreachable block (ram,0x00010a5103cc) */
/* WARNING: Removing unreachable block (ram,0x00010a5103d0) */

void FUN_10a5101dc(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1f8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110beb0d0;
  func_0x0001098bae4c(puVar5,&UNK_10e4bd575,0x38,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x35,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110beb0d0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110beadd0;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110beb140;
  puVar5[0x25] = &UNK_110beb110;
  *(undefined1 *)((long)puVar5 + 0x13c) = 0;
  *(undefined1 *)((long)puVar5 + 0x15c) = 0;
  puVar5[0x2e] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2f) = 0x40000000;
  puVar5[0x2c] = &PTR_FUN_110beb140;
  puVar5[0x2d] = &UNK_110beb110;
  *(undefined1 *)((long)puVar5 + 0x17c) = 0;
  *(undefined1 *)((long)puVar5 + 0x19c) = 0;
  *(undefined2 *)(puVar5 + 0x34) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x36) = 0;
  puVar5[0x39] = 0x10a510940;
  puVar5[0x3a] = &UNK_110be9d10;
  puVar5[0x3b] = 0;
  puVar5[0x3c] = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x35] = &PTR_DAT_110beb180;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3e] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x1a1) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a510424; end: 10a5104cf;  */

undefined8 * FUN_10a510424(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110beb0d0;
  param_1[0x19] = &PTR_FUN_110beadd0;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a5104d0; end: 10a5104d3;  */

void FUN_10a5104d0(void)

{
  return;
}



/* Entry: 10a5104d4; end: 10a51057f;  */

uint FUN_10a5104d4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(param_1 + 0x70);
  lVar1 = param_1 + 0x160;
  if (lVar6 != param_1 + 0x120) {
    lVar1 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar1;
  if (*(char *)(lVar1 + 0x3c) == '\x01') {
    *(undefined1 *)(lVar1 + 0x3c) = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x108);
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  uVar8 = puVar5[1];
  uVar7 = *puVar5;
  uVar9 = *(undefined8 *)((long)puVar5 + 0xf);
  *(undefined8 *)(lVar1 + 0x33) = *(undefined8 *)((long)puVar5 + 0x17);
  *(undefined8 *)(lVar1 + 0x2b) = uVar9;
  *(undefined8 *)(lVar1 + 0x24) = uVar8;
  *(undefined8 *)(lVar1 + 0x1c) = uVar7;
  if ((long)puVar2 - (long)puVar5 != 0x20) {
    puVar5 = puVar5 + 4;
    do {
      func_0x00010a4bfba4(lVar1 + 0x1c,puVar5);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar2);
  }
  uVar4 = 1;
  *(undefined1 *)(lVar1 + 0x3c) = 1;
  if (lVar6 != 0) {
    if ((*(byte *)(lVar6 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a510580);
      (*pcVar3)();
    }
    lVar6 = lVar6 + 0x1c;
    func_0x00010a50f4ac(lVar6,lVar1 + 0x1c);
    uVar4 = (uint)lVar6 ^ 1;
  }
  return uVar4;
}



/* Entry: 10a510580; end: 10a5107e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a5106f0) */
/* WARNING: Removing unreachable block (ram,0x00010a5106f4) */
/* WARNING: Removing unreachable block (ram,0x00010a5106fc) */
/* WARNING: Removing unreachable block (ram,0x00010a510704) */
/* WARNING: Removing unreachable block (ram,0x00010a510710) */
/* WARNING: Removing unreachable block (ram,0x00010a510718) */
/* WARNING: Removing unreachable block (ram,0x00010a510720) */
/* WARNING: Removing unreachable block (ram,0x00010a510724) */

void FUN_10a510580(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar8 + 0x3c) & 1) != 0) {
    puVar5 = (undefined8 *)0xa0;
    __Znwm();
    puVar6 = puVar5 + 3;
    *(undefined2 *)puVar6 = 4;
    puVar5[2] = 0;
    puVar5[1] = 0x200000006;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = puVar6;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar5 + 0x13) = 0;
    puStack_b0 = puVar5;
    if ((*(byte *)(param_2 + 0x1a1) & 1) != 0) {
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_8c = 0x20000000;
      FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
      pcStack_88 = FUN_10a51095c;
      appuStack_80[0] = &PTR_FUN_110beb1a0;
      param_2 = param_2 + 0x18;
      FUN_10a4fcca4(param_2,&pcStack_88,&lStack_a8);
      (*(code *)*appuStack_80[0])(appuStack_80);
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      plVar1 = puVar5 + 2;
      *(int *)(lVar8 + 0x10) = (int)param_2;
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(puVar6);
            goto LAB_10a5106d0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10a5106d0:
          while( true ) {
            *param_1 = puVar5;
            puVar6 = puVar5;
            func_0x0001092b4274(&puStack_b0);
            lVar8 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            if ((int)puVar6 == 0) break;
            (*(code *)*appuStack_80[0])(appuStack_80);
            if (lStack_a8 != 0) {
              lStack_a0 = lStack_a8;
              __ZdlPv();
            }
            ___cxa_begin_catch(lVar8);
            __ZSt17current_exceptionv(&pcStack_88);
            func_0x000109d1b350(puVar5,&pcStack_88);
            __ZNSt13exception_ptrD1Ev(&pcStack_88);
            ___cxa_end_catch();
          }
          __Unwind_Resume(lVar8);
          func_0x000104bd46a0();
          uVar7 = *(undefined8 *)(lVar8 + 8);
          *puVar6 = &PTR____cxa_pure_virtual_110b17f40;
          puVar6[1] = uVar7;
          uVar7 = *(undefined8 *)(lVar8 + 0x10);
          *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar8 + 0x18);
          puVar6[2] = uVar7;
          *puVar6 = &PTR_FUN_110beb140;
          uVar9 = *(undefined8 *)(lVar8 + 0x24);
          uVar7 = *(undefined8 *)(lVar8 + 0x1c);
          uVar11 = *(undefined8 *)(lVar8 + 0x34);
          uVar10 = *(undefined8 *)(lVar8 + 0x2c);
          *(undefined4 *)((long)puVar6 + 0x3c) = *(undefined4 *)(lVar8 + 0x3c);
          *(undefined8 *)((long)puVar6 + 0x34) = uVar11;
          *(undefined8 *)((long)puVar6 + 0x2c) = uVar10;
          *(undefined8 *)((long)puVar6 + 0x24) = uVar9;
          *(undefined8 *)((long)puVar6 + 0x1c) = uVar7;
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a510764);
  (*pcVar4)();
}



/* Entry: 10a5107e4; end: 10a51082b;  */

void FUN_10a5107e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110beb140;
  uVar2 = *(undefined8 *)(param_1 + 0x24);
  uVar1 = *(undefined8 *)(param_1 + 0x1c);
  uVar4 = *(undefined8 *)(param_1 + 0x34);
  uVar3 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined8 *)((long)param_2 + 0x34) = uVar4;
  *(undefined8 *)((long)param_2 + 0x2c) = uVar3;
  *(undefined8 *)((long)param_2 + 0x24) = uVar2;
  *(undefined8 *)((long)param_2 + 0x1c) = uVar1;
  return;
}



/* Entry: 10a51082c; end: 10a5108db;  */

void FUN_10a51082c(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar3 = (int)&uStack_50;
  if (((*(byte *)(param_3 + 0x3c) & 1) != 0) && ((*(byte *)(param_2 + 0x3c) & 1) != 0)) {
    uStack_48 = *(undefined8 *)(param_2 + 0x24);
    uStack_50 = *(undefined8 *)(param_2 + 0x1c);
    uStack_38 = *(undefined8 *)(param_2 + 0x34);
    uStack_40 = *(undefined8 *)(param_2 + 0x2c);
    func_0x00010a4bfba4(&uStack_50,param_3 + 0x1c);
    func_0x00010a50f4ac(&uStack_50,param_2 + 0x1c);
    if (iVar3 == 0) {
      uVar4 = 0x40000000;
    }
    else {
      lVar1 = 0x10;
      if (param_4 != 0) {
        lVar1 = 0x18;
      }
      uVar4 = *(undefined4 *)(param_2 + lVar1);
    }
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10a26d5a0(param_1,&uStack_50,(long)&uStack_50 + 4,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5108dc);
  (*pcVar2)();
}



/* Entry: 10a5108dc; end: 10a51095b;  */

void FUN_10a5108dc(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110beb140;
  param_1[1] = &UNK_110beb110;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10a51095c; end: 10a5109c3;  */

void FUN_10a51095c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar3 = &lStack_40;
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (*plVar2 != 0) {
      FUN_10a4fcdbc(&lStack_40,param_3);
      lVar4 = *plVar3;
      *plVar3 = 0;
      if (lVar4 != 0) {
        func_0x00010a502838();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5109c4);
  (*pcVar1)();
}



/* Entry: 10a5109c4; end: 10a5109df;  */

void FUN_10a5109c4(void)

{
  return;
}



/* Entry: 10a5109e0; end: 10a510a87;  */

undefined8 * FUN_10a5109e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beb1c8;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a510a88; end: 10a510cc7;  */

/* WARNING: Removing unreachable block (ram,0x00010a510c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a510c60) */
/* WARNING: Removing unreachable block (ram,0x00010a510c68) */
/* WARNING: Removing unreachable block (ram,0x00010a510c70) */
/* WARNING: Removing unreachable block (ram,0x00010a510c74) */

void FUN_10a510a88(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1b8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110beb208;
  func_0x0001098bae4c(puVar5,&UNK_10e4bd7ba,0x35,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x2d,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110beb208;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110beb258;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110beb310;
  puVar5[0x25] = &UNK_110beb2e0;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_DAT_110beb310;
  puVar5[0x29] = &UNK_110beb2e0;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined2 *)(puVar5 + 0x2c) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x2e) = 0;
  puVar5[0x31] = FUN_10a5114ec;
  puVar5[0x32] = &UNK_110beb370;
  puVar5[0x33] = 0;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x2d] = &PTR_FUN_110beb350;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x36] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x161) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a510cc8; end: 10a510d73;  */

undefined8 * FUN_10a510cc8(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110beb208;
  param_1[0x19] = &PTR_FUN_110beb258;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a510d74; end: 10a510db3;  */

void FUN_10a510d74(void)

{
  return;
}



/* Entry: 10a510db4; end: 10a511017;  */

/* WARNING: Removing unreachable block (ram,0x00010a510f24) */
/* WARNING: Removing unreachable block (ram,0x00010a510f28) */
/* WARNING: Removing unreachable block (ram,0x00010a510f30) */
/* WARNING: Removing unreachable block (ram,0x00010a510f38) */
/* WARNING: Removing unreachable block (ram,0x00010a510f44) */
/* WARNING: Removing unreachable block (ram,0x00010a510f4c) */
/* WARNING: Removing unreachable block (ram,0x00010a510f54) */
/* WARNING: Removing unreachable block (ram,0x00010a510f58) */

void FUN_10a510db4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  long lVar9;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar9 + 0x1d) & 1) != 0) {
    puVar5 = (undefined8 *)0xa0;
    __Znwm();
    puVar8 = puVar5 + 3;
    *(undefined2 *)puVar8 = 4;
    puVar5[2] = 0;
    puVar5[1] = 0x200000006;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = puVar8;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar5 + 0x13) = 0;
    puStack_b0 = puVar5;
    if ((*(byte *)(param_2 + 0x161) & 1) != 0) {
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_8c = 0x20000000;
      FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
      pcStack_88 = FUN_10a5116f8;
      appuStack_80[0] = &PTR_FUN_110beb3a8;
      param_2 = param_2 + 0x18;
      FUN_10a5115ec(param_2,&pcStack_88,&lStack_a8);
      (*(code *)*appuStack_80[0])(appuStack_80);
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      plVar1 = puVar5 + 2;
      *(int *)(lVar9 + 0x10) = (int)param_2;
      do {
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(puVar8);
            goto LAB_10a510f04;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a510f04:
          while( true ) {
            *param_1 = puVar5;
            puVar8 = puVar5;
            func_0x0001092b4274(&puStack_b0);
            iVar7 = (int)puVar8;
            lVar9 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            if (iVar7 == 0) break;
            (*(code *)*appuStack_80[0])(appuStack_80);
            if (lStack_a8 != 0) {
              lStack_a0 = lStack_a8;
              __ZdlPv();
            }
            ___cxa_begin_catch(lVar9);
            __ZSt17current_exceptionv(&pcStack_88);
            func_0x000109d1b350(puVar5,&pcStack_88);
            __ZNSt13exception_ptrD1Ev(&pcStack_88);
            ___cxa_end_catch();
          }
          __Unwind_Resume(lVar9);
          func_0x000104bd46a0();
          puVar5 = (undefined8 *)0x20;
          __Znwm();
          puVar5[1] = 0;
          *puVar5 = &PTR_FUN_110beb298;
          puVar5[2] = 0;
          puVar5[3] = 0;
          lVar9 = *(long *)(lVar9 + 0x48) - *(long *)(lVar9 + 0x40);
          if (lVar9 != 0) {
            if (lVar9 < 0) {
              FUN_10a5113b0();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5110ac);
              (*pcVar4)();
            }
            lVar6 = lVar9;
            __Znwm();
            puVar5[1] = lVar6;
            puVar5[3] = lVar6 + lVar9;
            _memcpy();
            puVar5[2] = lVar6 + lVar9;
          }
          *extraout_x8 = puVar5;
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a510f98);
  (*pcVar4)();
}



/* Entry: 10a511018; end: 10a5110cf;  */

void FUN_10a511018(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110beb298;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a5113b0();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5110ac);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a5110d0; end: 10a51118f;  */

void FUN_10a5110d0(long param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 0x48);
  if (uVar7 < *(ulong *)(param_1 + 0x50)) {
    lVar6 = uVar7 + 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    lVar5 = uVar7 - lVar4;
    uVar7 = lVar5 + 1;
    if ((long)uVar7 < 0) {
      FUN_10a5113b0();
      lVar4 = *(long *)(param_1 + 0x40);
      lVar5 = *(long *)(param_1 + 0x48);
      if ((((long)param_2 + 1U == lVar5 - lVar4) ||
          ((lVar4 != lVar5 && ((ulong)(long)param_2 < (ulong)(lVar5 - lVar4))))) && (lVar4 != lVar5)
         ) {
        *(long *)(param_1 + 0x48) = lVar5 + -1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5111d0);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_1 + 0x50) - lVar4;
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar7 || uVar3 - uVar7 == 0) {
      uVar3 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3;
      __Znwm();
    }
    lVar6 = uVar7 + lVar5 + 1;
    _memcpy(uVar7,lVar4,lVar5);
    *(ulong *)(param_1 + 0x40) = uVar7;
    *(long *)(param_1 + 0x48) = lVar6;
    *(ulong *)(param_1 + 0x50) = uVar7 + uVar3;
    if (lVar4 != 0) {
      __ZdlPv(lVar4);
    }
  }
  *(long *)(param_1 + 0x48) = lVar6;
  return;
}



/* Entry: 10a511190; end: 10a5111cf;  */

void FUN_10a511190(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  if ((((long)param_2 + 1U == lVar2 - lVar1) ||
      ((lVar1 != lVar2 && ((ulong)(long)param_2 < (ulong)(lVar2 - lVar1))))) && (lVar1 != lVar2)) {
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5111d0);
  (*pcVar3)();
}


