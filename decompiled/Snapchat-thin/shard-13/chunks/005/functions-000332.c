/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6cb934; end: 10a6cbe83;  */

/* WARNING: Possible PIC construction at 0x00010a6cbe78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6cbe7c) */
/* WARNING: Removing unreachable block (ram,0x00010a6cbe90) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a6cbe8c) */

void FUN_10a6cb934(undefined4 *param_1,long ****param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *****ppppplVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ***ppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ***ppplVar15;
  long ****pppplVar16;
  long ***ppplVar17;
  long ****pppplVar18;
  long ****unaff_x19;
  long *****unaff_x20;
  long *****unaff_x21;
  long lVar19;
  long *****unaff_x22;
  long *****ppppplVar20;
  long *****unaff_x23;
  long ***ppplVar21;
  long *****unaff_x24;
  long *****ppppplVar22;
  long ***ppplVar23;
  long *****unaff_x25;
  long *****ppppplVar24;
  ulong uVar25;
  long ****unaff_x26;
  long *****unaff_x27;
  long *****ppppplVar26;
  long ****unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long **pplStack_1d0;
  long *plStack_1c8;
  long ***ppplStack_1c0;
  undefined4 *puStack_1b0;
  long ****pppplStack_1a8;
  long ****pppplStack_1a0;
  long ****pppplStack_198;
  long ****pppplStack_190;
  long ***ppplStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long ****pppplStack_170;
  long ****pppplStack_168;
  long ***ppplStack_160;
  int iStack_158;
  undefined4 uStack_154;
  long ***appplStack_150 [7];
  undefined8 uStack_118;
  long ***ppplStack_110;
  undefined **ppuStack_108;
  long ***ppplStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  undefined8 uStack_88;
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar8 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppplVar8[0x59] < (long ***)0x8) {
    pppplVar8[(long)pppplVar8[0x59] + 0x4e] = pppplVar8[0x5a];
    pppplVar8[0x59] = (long ***)((long)pppplVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppplVar8 + 0x4b);
  }
  pppplVar9 = param_2;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6cbe84(param_5);
  if (*param_4 == 7) {
    pppplVar10 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 2));
    pppplVar16 = param_2;
    ppplStack_110 = (long ***)pppplVar10;
    (*(code *)(*param_2)[0x45])(param_2,&ppplStack_110);
    if ((int)pppplVar16 != 0) {
      pppplVar10 = param_2;
      (*(code *)(*param_2)[0xb])();
      ppplVar11 = pppplVar10[0x48];
      if ((ppplVar11 == (long ***)0x0) ||
         (___dynamic_cast(ppplVar11,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0),
         ppplVar15 = ppplStack_110, ppplVar11 == (long ***)0x0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a6cbdc0;
      }
      ppplStack_110 = (long ***)0x0;
      iStack_158 = 7;
      appplStack_150[0] = ppplVar15;
      ppplStack_160 = (long ***)param_2;
      FUN_10a688ac0(&pppplStack_d0,&ppplStack_160,ppplVar11[1]);
      if ((3 < iStack_158) && ((long ****)appplStack_150[0] != (long ****)0x0)) {
        (*(code *)**appplStack_150[0])();
      }
    }
    if ((long ****)ppplStack_110 != (long ****)0x0) {
      (*(code *)**ppplStack_110)();
    }
    if (((ulong)pppplVar16 & 1) != 0) {
      ppppplVar12 = (long *****)0x60;
      __Znwm();
      pppplVar10 = &ppplStack_110;
      ppppplVar24 = ppppplVar12 + 1;
      *ppppplVar24 = (long ****)0x0;
      ppppplVar12[2] = (long ****)0x0;
      *ppppplVar12 = (long ****)&PTR_FUN_110c110b8;
      ppppplVar14 = ppppplVar12 + 3;
      ppppplVar12[4] = pppplStack_c8;
      *ppppplVar14 = pppplStack_d0;
      if ((long *****)pppplStack_c8 != (long *****)0x0) {
        ppppplVar22 = (long *****)(pppplStack_c8 + 1);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppplVar22,0x10);
          if (bVar5) {
            *ppppplVar22 = (long ****)((long)*ppppplVar22 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppppplVar12[6] = (long ****)ppplStack_b8;
      ppppplVar12[5] = (long ****)ppplStack_c0;
      if ((long ****)ppplStack_b8 != (long ****)0x0) {
        pppplVar16 = (long ****)(ppplStack_b8 + 2);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppplVar16,0x10);
          if (bVar5) {
            *pppplVar16 = (long ***)((long)*pppplVar16 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined1 *)(ppppplVar12 + 0xb) = 2;
      ppppplVar13 = &pppplStack_d0;
      pppplStack_1a8 = (long ****)ppppplVar14;
      pppplStack_1a0 = (long ****)ppppplVar12;
      FUN_10a688c1c();
      ppppplVar22 = (long *****)pppplVar9[4];
      ppppplVar20 = (long *****)(*ppppplVar22)[0x128];
      ppppplVar26 = unaff_x27;
      pppplVar9 = unaff_x28;
      if (ppppplVar20 != (long *****)0x0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
          if (bVar5) {
            *ppppplVar24 = (long ****)((long)*ppppplVar24 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppplStack_170 = (long ****)ppppplVar14;
        pppplStack_168 = (long ****)ppppplVar12;
        FUN_10a6c7534(&ppplStack_188,ppppplVar22[1],ppppplVar14,ppppplVar12);
        FUN_10a3bf120(&ppplStack_160);
        ppplVar11 = (*ppppplVar22)[0x20];
        ppppplVar14 = (long *****)0x138;
        puStack_1b0 = param_1;
        __Znwm();
        pppplStack_d0 = (long ****)ppplStack_160;
        ppppplVar26 = ppppplVar14 + 1;
        *ppppplVar26 = (long ****)0x0;
        ppppplVar14[2] = (long ****)0x0;
        *ppppplVar14 = (long ****)&PTR_FUN_110b9f3b0;
        ppppplVar22 = ppppplVar14 + 3;
        pppplStack_c8 = (long ****)CONCAT44(uStack_154,iStack_158);
        ppplStack_160 = (long ***)0x0;
        (*(code *)appplStack_150[0][2])(&ppplStack_c0,appplStack_150);
        uStack_88 = uStack_118;
        plStack_1c8 = (long *)ppplVar11[0x42];
        pplStack_1d0 = ppplVar11[0x41];
        if (-1 < (char)*(byte *)((long)ppplVar11 + 0x21f)) {
          plStack_1c8 = (long *)(ulong)*(byte *)((long)ppplVar11 + 0x21f);
          pplStack_1d0 = (long **)(ppplVar11 + 0x41);
        }
        pppplVar9 = &ppplStack_110;
        ppplStack_110 = (long ***)FUN_10a6c7720;
        ppuStack_108 = &PTR_DAT_110c10e98;
        ppplStack_100 = ppplStack_188;
        uStack_f0 = uStack_178;
        uStack_f8 = uStack_180;
        uStack_180 = 0;
        uStack_178 = 0;
        ppplStack_1c0 = (long ***)pppplVar9;
        FUN_10a23708c(ppppplVar22,&UNK_10e4d3f78,0x2b,&UNK_10f647b45,3,&pppplStack_d0,0);
        (*(code *)*ppuStack_108)(&ppuStack_108);
        FUN_10a042634(&pppplStack_d0);
        pppplStack_198 = (long ****)ppppplVar22;
        pppplStack_190 = (long ****)ppppplVar14;
        FUN_10a042634(&ppplStack_160);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
          if (bVar5) {
            *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppplStack_d0 = (long ****)ppppplVar22;
        pppplStack_c8 = (long ****)ppppplVar14;
        FUN_10a25f3f4(ppppplVar20,&pppplStack_d0);
        do {
          pppplVar16 = *ppppplVar26;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
          if (bVar5) {
            *ppppplVar26 = (long ****)((long)pppplVar16 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppplVar16 == (long ****)0x0) {
          (*(code *)(*ppppplVar14)[2])(ppppplVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar14);
        }
        pppplVar16 = pppplStack_190;
        param_1 = puStack_1b0;
        if ((long *****)pppplStack_190 != (long *****)0x0) {
          ppppplVar13 = (long *****)(pppplStack_190 + 1);
          do {
            pppplVar18 = *ppppplVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
            if (bVar5) {
              *ppppplVar13 = (long ****)((long)pppplVar18 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppplVar18 == (long ****)0x0) {
            (*(code *)(*pppplStack_190)[2])(pppplStack_190);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar16);
          }
        }
        ppppplVar13 = (long *****)&ppplStack_188;
        FUN_10a6c7ce4();
        ppppplVar20 = (long *****)pppplStack_168;
        if ((long *****)pppplStack_168 != (long *****)0x0) {
          ppppplVar2 = (long *****)(pppplStack_168 + 1);
          do {
            pppplVar16 = *ppppplVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
            if (bVar5) {
              *ppppplVar2 = (long ****)((long)pppplVar16 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppplVar16 == (long ****)0x0) {
            (*(code *)(*pppplStack_168)[2])(pppplStack_168);
            ppppplVar13 = ppppplVar20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      do {
        pppplVar16 = *ppppplVar24;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
        if (bVar5) {
          *ppppplVar24 = (long ****)((long)pppplVar16 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pppplVar16 == (long ****)0x0) {
        (*(code *)(*ppppplVar12)[2])(ppppplVar12);
        ppppplVar13 = ppppplVar12;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *param_1 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        FUN_10a05bd88(&pppplStack_d0);
        FUN_10a05bd88(&pppplStack_198);
        FUN_10a6c7ce4(&ppplStack_188);
        func_0x00010a6c7d64(&pppplStack_170);
        func_0x00010a6c7d64(&pppplStack_1a8);
        unaff_x30 = 0x10a6cbe7c;
        register0x00000008 = (BADSPACEBASE *)&pplStack_1d0;
        unaff_x19 = pppplVar8;
        unaff_x20 = ppppplVar13;
        unaff_x21 = ppppplVar12;
        unaff_x22 = ppppplVar20;
        unaff_x23 = ppppplVar14;
        unaff_x24 = ppppplVar22;
        unaff_x25 = ppppplVar24;
        unaff_x26 = pppplVar10;
        unaff_x27 = ppppplVar26;
        unaff_x28 = pppplVar9;
        unaff_x29 = puVar1;
      }
      pppplVar9 = pppplVar8 + 0x4b;
      ppplVar11 = pppplVar8[0x59];
      ppplVar15 = (long ***)((long)ppplVar11 - 1);
      pppplVar8[0x59] = ppplVar15;
      if (ppplVar15 < (long ***)0x8) {
        ppplVar11 = pppplVar9[(long)ppplVar11 + 2];
        if (pppplVar8[0x5a] == ppplVar11) {
          return;
        }
      }
      else {
        ppplVar11 = (long ***)pppplVar8[0x57][-1];
        pppplVar8[0x57] = pppplVar8[0x57] + -1;
        if (pppplVar8[0x5a] == ppplVar11) {
          return;
        }
      }
      *(long *****)((long)register0x00000008 + -0x60) = unaff_x28;
      *(long ******)((long)register0x00000008 + -0x58) = unaff_x27;
      *(long *****)((long)register0x00000008 + -0x50) = unaff_x26;
      *(long ******)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long ******)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long ******)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long ******)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long ******)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long ******)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *****)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      ppplVar15 = *pppplVar9;
      ppplVar17 = pppplVar8[0x4c];
      lVar19 = (long)ppplVar17 - (long)ppplVar15;
      ppplVar23 = (long ***)(lVar19 >> 4);
      if (ppplVar23 < ppplVar11) {
        uVar25 = (long)ppplVar11 - (long)ppplVar23;
        ppplVar21 = pppplVar8[0x4d];
        if ((ulong)((long)ppplVar21 - (long)ppplVar17 >> 4) < uVar25) {
          if ((ulong)ppplVar11 >> 0x3c == 0) {
            ppplVar17 = (long ***)((long)ppplVar21 - (long)ppplVar15 >> 3);
            if (ppplVar17 <= ppplVar11) {
              ppplVar17 = ppplVar11;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppplVar21 - (long)ppplVar15)) {
              ppplVar17 = (long ***)0xfffffffffffffff;
            }
            *(long *****)((long)register0x00000008 + -0x68) = pppplVar9;
            if ((ulong)ppplVar17 >> 0x3c == 0) {
              lVar7 = (long)ppplVar17 << 4;
              __Znwm();
              lVar3 = lVar7 + lVar19;
              _bzero(lVar3,uVar25 * 0x10);
              ppplVar23 = (long ***)(lVar3 + (long)ppplVar23 * -0x10);
              _memcpy(ppplVar23,ppplVar15,lVar19);
              *pppplVar9 = ppplVar23;
              pppplVar8[0x4c] = (long ***)(lVar3 + uVar25 * 0x10);
              pppplVar8[0x4d] = (long ***)(lVar7 + (long)ppplVar17 * 0x10);
              *(long ****)((long)register0x00000008 + -0x78) = ppplVar15;
              *(long ****)((long)register0x00000008 + -0x70) = ppplVar21;
              *(long ****)((long)register0x00000008 + -0x88) = ppplVar15;
              *(long ****)((long)register0x00000008 + -0x80) = ppplVar15;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar6)();
        }
        _bzero(ppplVar17,uVar25 * 0x10);
        pppplVar8[0x4c] = ppplVar17 + uVar25 * 2;
      }
      else if (ppplVar11 < ppplVar23) {
        while (ppplVar17 != ppplVar15 + (long)ppplVar11 * 2) {
          ppplVar17 = ppplVar17 + -2;
          func_0x00010988c204(ppplVar17);
        }
        pppplVar8[0x4c] = ppplVar15 + (long)ppplVar11 * 2;
      }
code_r0x00010988c138:
      pppplVar8[0x5a] = ppplVar11;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a6cbdc0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6cbdc4);
  (*pcVar6)();
}



/* Entry: 10a6cbe84; end: 10a6cbea7;  */

void FUN_10a6cbe84(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110c110b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6cbea8; end: 10a6cbeb7;  */

void FUN_10a6cbea8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c110b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6cbeb8; end: 10a6cbed7;  */

void FUN_10a6cbeb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c110b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6cbed8; end: 10a6cbeff;  */

undefined1  [16] FUN_10a6cbed8(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a6cbefc);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a6cbf00; end: 10a6cc3d7;  */

/* WARNING: Possible PIC construction at 0x00010a6cc3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6cc3d0) */
/* WARNING: Removing unreachable block (ram,0x00010a6cc3e4) */
/* WARNING: Removing unreachable block (ram,0x00010a6cc494) */
/* WARNING: Removing unreachable block (ram,0x00010a6cc43c) */
/* WARNING: Removing unreachable block (ram,0x00010a6cc454) */
/* WARNING: Removing unreachable block (ram,0x00010a6cc3e0) */

void FUN_10a6cbf00(undefined4 *param_1,undefined ***param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined ****unaff_x21;
  undefined *puVar15;
  long lVar16;
  undefined ***unaff_x22;
  undefined ***unaff_x23;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  undefined ***unaff_x24;
  undefined **ppuVar19;
  undefined ***unaff_x25;
  undefined ***pppuVar20;
  ulong uVar21;
  code **unaff_x26;
  undefined *puVar22;
  code **ppcVar23;
  undefined *unaff_x27;
  undefined *puVar24;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puStack_1f0;
  ulong uStack_1e8;
  code **ppcStack_1e0;
  undefined8 uStack_1d0;
  undefined ***pppuStack_1c8;
  undefined8 uStack_1c0;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined **ppuStack_1a0;
  ulong uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined ***pppuStack_170;
  undefined8 uStack_168;
  undefined ***pppuStack_160;
  undefined8 uStack_158;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  undefined8 uStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppuVar8[0x59] < (undefined **)0x8) {
    pppuVar8[(long)pppuVar8[0x59] + 0x4e] = pppuVar8[0x5a];
    pppuVar8[0x59] = (undefined **)((long)pppuVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar8 + 0x4b);
  }
  pppuVar9 = param_2;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6cc3d8(param_5);
  pppuVar10 = param_2;
  func_0x000109898518(param_2,param_4);
  FUN_10a6cb46c(&uStack_1c0,param_2,*(undefined4 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18))
  ;
  FUN_10a6cb688(&uStack_1d0,param_2,param_4 + 0x20);
  pppuVar17 = (undefined ***)pppuVar9[4];
  puVar15 = (*pppuVar17)[0x128];
  pppuVar20 = unaff_x25;
  ppcVar23 = unaff_x26;
  puVar24 = unaff_x27;
  if (puVar15 != (undefined *)0x0) {
    pppuStack_160 = pppuStack_1b8;
    uStack_168 = uStack_1c0;
    if (pppuStack_1b8 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_1b8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar5) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppuStack_150 = pppuStack_1c8;
    uStack_158 = uStack_1d0;
    if (pppuStack_1c8 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_1c8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar5) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppuStack_170 = pppuVar17;
    FUN_10a6c7dbc(&ppuStack_188,pppuVar17[1],&pppuStack_170);
    pppuVar9 = &ppuStack_1a0;
    ppuStack_1a0 = &PTR_DAT_110b19148;
    uStack_198 = 0;
    uStack_190 = SUB84(pppuVar10,0);
    uStack_18c = 0;
    FUN_10a3bf4bc(&pppuStack_148,&ppuStack_1a0);
    puVar22 = (*pppuVar17)[0x20];
    pppuVar10 = (undefined ***)0x138;
    __Znwm();
    pppuStack_b8 = pppuStack_148;
    puVar24 = puVar22 + 0x208;
    pppuVar20 = pppuVar10 + 1;
    *pppuVar20 = (undefined **)0x0;
    pppuVar10[2] = (undefined **)0x0;
    *pppuVar10 = &PTR_FUN_110b9f3b0;
    pppuVar17 = pppuVar10 + 3;
    pppuStack_148 = (undefined ***)0x0;
    pppuStack_b0 = (undefined ***)uStack_140;
    (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
    uStack_70 = uStack_100;
    uStack_1e8 = *(ulong *)(puVar22 + 0x210);
    puStack_1f0 = *(undefined **)(puVar22 + 0x208);
    if (-1 < (char)puVar22[0x21f]) {
      uStack_1e8 = (ulong)(byte)puVar22[0x21f];
      puStack_1f0 = puVar24;
    }
    ppcVar23 = &pcStack_f8;
    pcStack_f8 = FUN_10a6c80f4;
    ppuStack_f0 = &PTR_FUN_110c10ec8;
    ppuStack_e8 = ppuStack_188;
    uStack_d8 = uStack_178;
    uStack_e0 = uStack_180;
    uStack_180 = 0;
    uStack_178 = 0;
    ppcStack_1e0 = ppcVar23;
    FUN_10a23708c(pppuVar17,&UNK_10e4d3fa4,0x25,&UNK_10f647b45,3,&pppuStack_b8,0);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    FUN_10a042634(&pppuStack_b8);
    pppuStack_1b0 = pppuVar17;
    pppuStack_1a8 = pppuVar10;
    FUN_10a042634(&pppuStack_148);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
      if (bVar5) {
        *pppuVar20 = (undefined **)((long)*pppuVar20 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppuStack_b8 = pppuVar17;
    pppuStack_b0 = pppuVar10;
    FUN_10a25f3f4(puVar15,&pppuStack_b8);
    do {
      ppuVar13 = *pppuVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
      if (bVar5) {
        *pppuVar20 = (undefined **)((long)ppuVar13 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar13 == (undefined **)0x0) {
      (*(code *)(*pppuVar10)[2])(pppuVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
    }
    pppuVar11 = pppuStack_1a8;
    if (pppuStack_1a8 != (undefined ***)0x0) {
      pppuVar2 = pppuStack_1a8 + 1;
      do {
        ppuVar13 = *pppuVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar5) {
          *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar13 == (undefined **)0x0) {
        (*(code *)(*pppuStack_1a8)[2])(pppuStack_1a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar11);
      }
    }
    if ((uStack_198 & 1) != 0) {
      func_0x0001053936ac(&uStack_198);
    }
    param_2 = &ppuStack_188;
    FUN_10a6c83d0();
    pppuVar11 = pppuStack_150;
    if (pppuStack_150 != (undefined ***)0x0) {
      pppuVar2 = pppuStack_150 + 1;
      do {
        ppuVar13 = *pppuVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar5) {
          *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar13 == (undefined **)0x0) {
        (*(code *)(*pppuStack_150)[2])(pppuStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = pppuVar11;
      }
    }
    pppuVar11 = pppuStack_160;
    if (pppuStack_160 != (undefined ***)0x0) {
      pppuVar2 = pppuStack_160 + 1;
      do {
        ppuVar13 = *pppuVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar5) {
          *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar13 == (undefined **)0x0) {
        (*(code *)(*pppuStack_160)[2])(pppuStack_160);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = pppuVar11;
      }
    }
  }
  if (pppuStack_1c8 != (undefined ***)0x0) {
    pppuVar11 = pppuStack_1c8 + 1;
    do {
      ppuVar13 = *pppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar5) {
        *pppuVar11 = (undefined **)((long)ppuVar13 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar13 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1c8)[2])(pppuStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_2 = pppuStack_1c8;
    }
  }
  if (pppuStack_1b8 != (undefined ***)0x0) {
    pppuVar11 = pppuStack_1b8 + 1;
    do {
      ppuVar13 = *pppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar5) {
        *pppuVar11 = (undefined **)((long)ppuVar13 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar13 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1b8)[2])(pppuStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_2 = pppuStack_1b8;
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a05bd88(&pppuStack_b8);
    FUN_10a05bd88(&pppuStack_1b0);
    if ((uStack_198 & 1) != 0) {
      func_0x0001053936ac(pppuVar9 + 1);
    }
    FUN_10a6c83d0(&ppuStack_188);
    unaff_x21 = &pppuStack_170;
    func_0x00010a6c7484(&uStack_158);
    func_0x00010a6c74dc(&uStack_168);
    func_0x00010a6c7484(&uStack_1d0);
    func_0x00010a6c74dc(&uStack_1c0);
    unaff_x30 = 0x10a6cc3d0;
    register0x00000008 = (BADSPACEBASE *)&puStack_1f0;
    unaff_x19 = pppuVar8;
    unaff_x20 = param_2;
    unaff_x22 = pppuVar10;
    unaff_x23 = pppuVar17;
    unaff_x24 = pppuVar9;
    unaff_x25 = pppuVar20;
    unaff_x26 = ppcVar23;
    unaff_x27 = puVar24;
    unaff_x29 = puVar1;
  }
  pppuVar9 = pppuVar8 + 0x4b;
  ppuVar13 = pppuVar8[0x59];
  ppuVar12 = (undefined **)((long)ppuVar13 + -1);
  pppuVar8[0x59] = ppuVar12;
  if (ppuVar12 < (undefined **)0x8) {
    ppuVar13 = pppuVar9[(long)ppuVar13 + 2];
    if (pppuVar8[0x5a] == ppuVar13) {
      return;
    }
  }
  else {
    ppuVar13 = (undefined **)pppuVar8[0x57][-1];
    pppuVar8[0x57] = pppuVar8[0x57] + -1;
    if (pppuVar8[0x5a] == ppuVar13) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(code ***)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined ****)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined ****)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined *****)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ****)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  ppuVar12 = *pppuVar9;
  ppuVar14 = pppuVar8[0x4c];
  lVar16 = (long)ppuVar14 - (long)ppuVar12;
  ppuVar19 = (undefined **)(lVar16 >> 4);
  if (ppuVar19 < ppuVar13) {
    uVar21 = (long)ppuVar13 - (long)ppuVar19;
    ppuVar18 = pppuVar8[0x4d];
    if ((ulong)((long)ppuVar18 - (long)ppuVar14 >> 4) < uVar21) {
      if ((ulong)ppuVar13 >> 0x3c == 0) {
        ppuVar14 = (undefined **)((long)ppuVar18 - (long)ppuVar12 >> 3);
        if (ppuVar14 <= ppuVar13) {
          ppuVar14 = ppuVar13;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppuVar18 - (long)ppuVar12)) {
          ppuVar14 = (undefined **)0xfffffffffffffff;
        }
        *(undefined ****)((long)register0x00000008 + -0x68) = pppuVar9;
        if ((ulong)ppuVar14 >> 0x3c == 0) {
          lVar7 = (long)ppuVar14 << 4;
          __Znwm();
          lVar3 = lVar7 + lVar16;
          _bzero(lVar3,uVar21 * 0x10);
          ppuVar19 = (undefined **)(lVar3 + (long)ppuVar19 * -0x10);
          _memcpy(ppuVar19,ppuVar12,lVar16);
          *pppuVar9 = ppuVar19;
          pppuVar8[0x4c] = (undefined **)(lVar3 + uVar21 * 0x10);
          pppuVar8[0x4d] = (undefined **)(lVar7 + (long)ppuVar14 * 0x10);
          *(undefined ***)((long)register0x00000008 + -0x78) = ppuVar12;
          *(undefined ***)((long)register0x00000008 + -0x70) = ppuVar18;
          *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar12;
          *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar12;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(ppuVar14,uVar21 * 0x10);
    pppuVar8[0x4c] = ppuVar14 + uVar21 * 2;
  }
  else if (ppuVar13 < ppuVar19) {
    while (ppuVar14 != ppuVar12 + (long)ppuVar13 * 2) {
      ppuVar14 = ppuVar14 + -2;
      func_0x00010988c204(ppuVar14);
    }
    pppuVar8[0x4c] = ppuVar12 + (long)ppuVar13 * 2;
  }
code_r0x00010988c138:
  pppuVar8[0x5a] = ppuVar13;
  return;
}



/* Entry: 10a6cc3d8; end: 10a6cc3fb;  */

void FUN_10a6cc3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar3 = (long *)0x3;
  uVar5 = 0;
  FUN_10a052ee0(3,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6ca450(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  FUN_10a6b4be0(plVar3[4],0);
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a6cc3fc; end: 10a6cc4b3;  */

void FUN_10a6cc3fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6ca450(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a6b4be0(param_2[4],0);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6cc4b4; end: 10a6cc5eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a6cc570) */
/* WARNING: Removing unreachable block (ram,0x00010a6cc578) */

void FUN_10a6cc4b4(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6cc5ec(param_5);
  puVar1 = (uint *)&stack0xffffffffffffffb0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  if (*puVar1 < 2) {
    param_2 = (long *)0x0;
  }
  else {
    FUN_10a373c54(param_2);
  }
  FUN_10a6b4be0(plVar5[4],param_2);
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a6cc5ec; end: 10a6cc60f;  */

void FUN_10a6cc5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((uint)param_1 < 2) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 1;
  FUN_10a052ee0(1,1,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6ca850(extraout_x8,plVar3,FUN_10a6b4eb4,0,uVar5,param_1,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a6cc610; end: 10a6cc6c7;  */

void FUN_10a6cc610(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6ca850(param_1,param_2,FUN_10a6b4eb4,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6cc6c8; end: 10a6cc9f7;  */

/* WARNING: Possible PIC construction at 0x00010a6cc9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a6ccd1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6cc9f0) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc98) */
/* WARNING: Removing unreachable block (ram,0x00010a6cca58) */
/* WARNING: Removing unreachable block (ram,0x00010a6cca70) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccaa4) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccac0) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccac4) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccb4c) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccb50) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccbc0) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccbc8) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccbd0) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccbdc) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccbe4) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccbec) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccbf0) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc08) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc10) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc14) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc1c) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc24) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc28) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc40) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc50) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc58) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccca4) */
/* WARNING: Removing unreachable block (ram,0x00010a6cccf0) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccd00) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccd08) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccd18) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccc74) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccd20) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccdc0) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccd6c) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccd84) */

void FUN_10a6cc6c8(undefined4 *param_1,undefined ***param_2,undefined8 param_3,undefined8 param_4,
                  undefined ***param_5)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  undefined ***pppuVar13;
  long lVar14;
  undefined ***unaff_x22;
  undefined ***pppuVar15;
  undefined ***unaff_x23;
  undefined **ppuVar16;
  undefined ***unaff_x24;
  undefined **ppuVar17;
  undefined ***unaff_x25;
  undefined ***pppuVar18;
  ulong uVar19;
  code **unaff_x26;
  undefined *puVar20;
  code **ppcVar21;
  code **unaff_x27;
  code **ppcVar22;
  undefined *unaff_x28;
  undefined *puVar23;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puStack_190;
  ulong uStack_188;
  code **ppcStack_180;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined1 uStack_158;
  undefined4 uStack_154;
  undefined ***pppuStack_150;
  undefined8 uStack_148;
  long alStack_140 [7];
  undefined8 uStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppuVar8[0x59] < (undefined **)0x8) {
    pppuVar8[(long)((long)pppuVar8[0x59] + 0x4e)] = pppuVar8[0x5a];
    pppuVar8[0x59] = (undefined **)((long)pppuVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar8 + 0x4b);
  }
  pppuVar9 = param_2;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  pppuVar13 = (undefined ***)pppuVar9[4];
  pppuVar15 = (undefined ***)(*pppuVar13)[0x128];
  pppuVar18 = unaff_x25;
  ppcVar21 = unaff_x26;
  ppcVar22 = unaff_x27;
  puVar23 = unaff_x28;
  if (pppuVar15 != (undefined ***)0x0) {
    pppuVar9 = &ppuStack_168;
    ppuStack_168 = &PTR_DAT_110b19238;
    ppuStack_160 = (undefined **)0x0;
    uStack_154 = 0;
    uStack_158 = SUB81(param_2,0);
    FUN_10a3bf4bc(&pppuStack_150,&ppuStack_168);
    puVar20 = (*pppuVar13)[0x20];
    pppuVar13 = (undefined ***)0x138;
    __Znwm();
    pppuStack_c0 = pppuStack_150;
    ppcVar22 = &pcStack_100;
    puVar23 = puVar20 + 0x208;
    pppuVar18 = pppuVar13 + 1;
    *pppuVar18 = (undefined **)0x0;
    pppuVar13[2] = (undefined **)0x0;
    *pppuVar13 = &PTR_FUN_110b9f3b0;
    param_5 = pppuVar13 + 3;
    pppuStack_150 = (undefined ***)0x0;
    pppuStack_b8 = (undefined ***)uStack_148;
    (**(code **)(alStack_140[0] + 0x10))(auStack_b0,alStack_140);
    uStack_78 = uStack_108;
    uStack_188 = *(ulong *)(puVar20 + 0x210);
    puStack_190 = *(undefined **)(puVar20 + 0x208);
    if (-1 < (char)puVar20[0x21f]) {
      uStack_188 = (ulong)(byte)puVar20[0x21f];
      puStack_190 = puVar23;
    }
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    ppcVar21 = &pcStack_100;
    pcStack_100 = FUN_10a282dc4;
    ppuStack_f8 = &PTR_DAT_110ae9180;
    ppcStack_180 = ppcVar21;
    FUN_10a23708c(param_5,&UNK_10e4d4022,0x2e,&UNK_10f647b49,4,&pppuStack_c0,0);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&pppuStack_c0);
    pppuStack_178 = param_5;
    pppuStack_170 = pppuVar13;
    FUN_10a042634(&pppuStack_150);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
      if (bVar5) {
        *pppuVar18 = (undefined **)((long)*pppuVar18 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    param_2 = pppuVar15;
    pppuStack_c0 = param_5;
    pppuStack_b8 = pppuVar13;
    FUN_10a25f3f4(pppuVar15,&pppuStack_c0);
    do {
      ppuVar11 = *pppuVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
      if (bVar5) {
        *pppuVar18 = (undefined **)((long)ppuVar11 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar11 == (undefined **)0x0) {
      (*(code *)(*pppuVar13)[2])(pppuVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_2 = pppuVar13;
    }
    pppuVar13 = pppuStack_170;
    if (pppuStack_170 != (undefined ***)0x0) {
      pppuVar2 = pppuStack_170 + 1;
      do {
        ppuVar11 = *pppuVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar5) {
          *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar11 == (undefined **)0x0) {
        (*(code *)(*pppuStack_170)[2])(pppuStack_170);
        param_2 = pppuVar13;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    if (((ulong)ppuStack_160 & 1) != 0) {
      param_2 = &ppuStack_160;
      func_0x0001053936ac();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_10a05bd88(&pppuStack_c0);
    FUN_10a05bd88(&pppuStack_178);
    if (((ulong)ppuStack_160 & 1) != 0) {
      func_0x0001053936ac(pppuVar9 + 1);
    }
    unaff_x30 = 0x10a6cc9f0;
    register0x00000008 = (BADSPACEBASE *)&puStack_190;
    unaff_x19 = pppuVar8;
    unaff_x20 = param_2;
    unaff_x21 = pppuVar13;
    unaff_x22 = pppuVar15;
    unaff_x23 = param_5;
    unaff_x24 = pppuVar9;
    unaff_x25 = pppuVar18;
    unaff_x26 = ppcVar21;
    unaff_x27 = ppcVar22;
    unaff_x28 = puVar23;
    unaff_x29 = puVar1;
  }
  pppuVar9 = pppuVar8 + 0x4b;
  ppuVar11 = pppuVar8[0x59];
  ppuVar10 = (undefined **)((long)ppuVar11 + -1);
  pppuVar8[0x59] = ppuVar10;
  if (ppuVar10 < (undefined **)0x8) {
    ppuVar11 = pppuVar9[(long)((long)ppuVar11 + 2)];
    if (pppuVar8[0x5a] == ppuVar11) {
      return;
    }
  }
  else {
    ppuVar11 = (undefined **)pppuVar8[0x57][-1];
    pppuVar8[0x57] = pppuVar8[0x57] + -1;
    if (pppuVar8[0x5a] == ppuVar11) {
      return;
    }
  }
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(code ***)((long)register0x00000008 + -0x58) = unaff_x27;
  *(code ***)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined ****)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined ****)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ****)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  ppuVar10 = *pppuVar9;
  ppuVar12 = pppuVar8[0x4c];
  lVar14 = (long)ppuVar12 - (long)ppuVar10;
  ppuVar17 = (undefined **)(lVar14 >> 4);
  if (ppuVar17 < ppuVar11) {
    uVar19 = (long)ppuVar11 - (long)ppuVar17;
    ppuVar16 = pppuVar8[0x4d];
    if ((ulong)((long)ppuVar16 - (long)ppuVar12 >> 4) < uVar19) {
      if ((ulong)ppuVar11 >> 0x3c == 0) {
        ppuVar12 = (undefined **)((long)ppuVar16 - (long)ppuVar10 >> 3);
        if (ppuVar12 <= ppuVar11) {
          ppuVar12 = ppuVar11;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppuVar16 - (long)ppuVar10)) {
          ppuVar12 = (undefined **)0xfffffffffffffff;
        }
        *(undefined ****)((long)register0x00000008 + -0x68) = pppuVar9;
        if ((ulong)ppuVar12 >> 0x3c == 0) {
          lVar7 = (long)ppuVar12 << 4;
          __Znwm();
          lVar3 = lVar7 + lVar14;
          _bzero(lVar3,uVar19 * 0x10);
          ppuVar17 = (undefined **)(lVar3 + (long)ppuVar17 * -0x10);
          _memcpy(ppuVar17,ppuVar10,lVar14);
          *pppuVar9 = ppuVar17;
          pppuVar8[0x4c] = (undefined **)(lVar3 + uVar19 * 0x10);
          pppuVar8[0x4d] = (undefined **)(lVar7 + (long)ppuVar12 * 0x10);
          *(undefined ***)((long)register0x00000008 + -0x78) = ppuVar10;
          *(undefined ***)((long)register0x00000008 + -0x70) = ppuVar16;
          *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar10;
          *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar10;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(ppuVar12,uVar19 * 0x10);
    pppuVar8[0x4c] = ppuVar12 + uVar19 * 2;
  }
  else if (ppuVar11 < ppuVar17) {
    while (ppuVar12 != ppuVar10 + (long)ppuVar11 * 2) {
      ppuVar12 = ppuVar12 + -2;
      func_0x00010988c204(ppuVar12);
    }
    pppuVar8[0x4c] = ppuVar10 + (long)ppuVar11 * 2;
  }
code_r0x00010988c138:
  pppuVar8[0x5a] = ppuVar11;
  return;
}



/* Entry: 10a6cc9f8; end: 10a6ccd27;  */

/* WARNING: Possible PIC construction at 0x00010a6ccd1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6ccd20) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccdc0) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccd6c) */
/* WARNING: Removing unreachable block (ram,0x00010a6ccd84) */

void FUN_10a6cc9f8(undefined4 *param_1,long ******param_2,undefined8 param_3,undefined8 param_4,
                  long *****param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long **pplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  code *pcVar7;
  long lVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long ******unaff_x19;
  long ******unaff_x20;
  long *****unaff_x21;
  long ***ppplVar14;
  long lVar15;
  long *****unaff_x22;
  long *****ppppplVar16;
  long *****unaff_x23;
  long *****ppppplVar17;
  long ******unaff_x24;
  long *****ppppplVar18;
  code **unaff_x25;
  long ***ppplVar19;
  code **ppcVar20;
  ulong uVar21;
  code **unaff_x26;
  code **ppcVar22;
  long ***unaff_x27;
  long ***ppplVar23;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  code **appcStack_180 [2];
  long ****pppplStack_170;
  long ****pppplStack_168;
  long *****ppppplStack_160;
  ulong uStack_158;
  byte bStack_149;
  long ****pppplStack_148;
  undefined8 uStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar9 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppppplVar9[0x59] < (long *****)0x8) {
    pppppplVar9[(long)pppppplVar9[0x59] + 0x4e] = pppppplVar9[0x5a];
    pppppplVar9[0x59] = (long *****)((long)pppppplVar9[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppppplVar9 + 0x4b);
  }
  pppppplVar10 = param_2;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  ppppplVar16 = pppppplVar10[4];
  ppplVar14 = (*ppppplVar16)[0x128];
  ppppplVar11 = (long *****)0x0;
  ppcVar20 = unaff_x25;
  ppcVar22 = unaff_x26;
  ppplVar23 = unaff_x27;
  if (ppplVar14 != (long ***)0x0) {
    __ZNSt3__19to_stringEi(&ppppplStack_160);
    pppppplVar10 = (long ******)ppppplStack_160;
    if (-1 < (char)bStack_149) {
      uStack_158 = (ulong)bStack_149;
      pppppplVar10 = &ppppplStack_160;
    }
    FUN_10a3bf330(&pppplStack_148,pppppplVar10,uStack_158);
    ppplVar19 = (*ppppplVar16)[0x20];
    ppppplVar16 = (long *****)0x138;
    __Znwm();
    pppplStack_b8 = pppplStack_148;
    ppcVar22 = &pcStack_f8;
    ppplVar23 = ppplVar19 + 0x41;
    pppppplVar10 = (long ******)(ppppplVar16 + 1);
    *pppppplVar10 = (long *****)0x0;
    ppppplVar16[2] = (long ****)0x0;
    *ppppplVar16 = (long ****)&PTR_FUN_110b9f3b0;
    param_5 = ppppplVar16 + 3;
    pppplStack_148 = (long ****)0x0;
    pppplStack_b0 = (long ****)uStack_140;
    (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
    uStack_70 = uStack_100;
    pplVar3 = ppplVar19[0x42];
    ppplVar6 = (long ***)ppplVar19[0x41];
    if (-1 < (char)*(byte *)((long)ppplVar19 + 0x21f)) {
      pplVar3 = (long **)(ulong)*(byte *)((long)ppplVar19 + 0x21f);
      ppplVar6 = ppplVar23;
    }
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    ppcVar20 = &pcStack_f8;
    pcStack_f8 = FUN_10a282dc4;
    ppuStack_f0 = &PTR_DAT_110ae9180;
    appcStack_180[0] = ppcVar20;
    FUN_10a6ac5b4(param_5,&UNK_10e4d4051,0x26,"POST",4,&pppplStack_b8,ppplVar6,pplVar3);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    FUN_10a042634(&pppplStack_b8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppplVar10,0x10);
      if (bVar5) {
        *pppppplVar10 = (long *****)((long)*pppppplVar10 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppplStack_170 = (long ****)param_5;
    pppplStack_168 = (long ****)ppppplVar16;
    pppplStack_b8 = (long ****)param_5;
    pppplStack_b0 = (long ****)ppppplVar16;
    FUN_10a25f3f4(ppplVar14,&pppplStack_b8);
    do {
      ppppplVar11 = *pppppplVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppplVar10,0x10);
      if (bVar5) {
        *pppppplVar10 = (long *****)((long)ppppplVar11 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppplVar11 == (long *****)0x0) {
      (*(code *)(*ppppplVar16)[2])(ppppplVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar16);
    }
    ppppplVar11 = (long *****)pppplStack_168;
    if ((long *****)pppplStack_168 != (long *****)0x0) {
      ppppplVar12 = (long *****)(pppplStack_168 + 1);
      do {
        pppplVar13 = *ppppplVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppplVar12,0x10);
        if (bVar5) {
          *ppppplVar12 = (long ****)((long)pppplVar13 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pppplVar13 == (long ****)0x0) {
        (*(code *)(*pppplStack_168)[2])(pppplStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar11);
      }
    }
    param_2 = (long ******)&pppplStack_148;
    FUN_10a042634();
    if ((char)bStack_149 < '\0') {
      param_2 = (long ******)ppppplStack_160;
      __ZdlPv();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a05bd88(&pppplStack_b8);
    FUN_10a05bd88(&pppplStack_170);
    FUN_10a042634(&pppplStack_148);
    if ((char)bStack_149 < '\0') {
      __ZdlPv(ppppplStack_160);
    }
    unaff_x30 = 0x10a6ccd20;
    register0x00000008 = (BADSPACEBASE *)appcStack_180;
    unaff_x19 = pppppplVar9;
    unaff_x20 = param_2;
    unaff_x21 = ppppplVar11;
    unaff_x22 = ppppplVar16;
    unaff_x23 = param_5;
    unaff_x24 = pppppplVar10;
    unaff_x25 = ppcVar20;
    unaff_x26 = ppcVar22;
    unaff_x27 = ppplVar23;
    unaff_x29 = puVar1;
  }
  pppppplVar10 = pppppplVar9 + 0x4b;
  ppppplVar11 = pppppplVar9[0x59];
  ppppplVar16 = (long *****)((long)ppppplVar11 + -1);
  pppppplVar9[0x59] = ppppplVar16;
  if (ppppplVar16 < (long *****)0x8) {
    ppppplVar11 = pppppplVar10[(long)ppppplVar11 + 2];
    if (pppppplVar9[0x5a] == ppppplVar11) {
      return;
    }
  }
  else {
    ppppplVar11 = (long *****)pppppplVar9[0x57][-1];
    pppppplVar9[0x57] = pppppplVar9[0x57] + -1;
    if (pppppplVar9[0x5a] == ppppplVar11) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(long ****)((long)register0x00000008 + -0x58) = unaff_x27;
  *(code ***)((long)register0x00000008 + -0x50) = unaff_x26;
  *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long *******)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long ******)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long ******)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long ******)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *******)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *******)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  ppppplVar16 = *pppppplVar10;
  ppppplVar12 = pppppplVar9[0x4c];
  lVar15 = (long)ppppplVar12 - (long)ppppplVar16;
  ppppplVar18 = (long *****)(lVar15 >> 4);
  if (ppppplVar18 < ppppplVar11) {
    uVar21 = (long)ppppplVar11 - (long)ppppplVar18;
    ppppplVar17 = pppppplVar9[0x4d];
    if ((ulong)((long)ppppplVar17 - (long)ppppplVar12 >> 4) < uVar21) {
      if ((ulong)ppppplVar11 >> 0x3c == 0) {
        ppppplVar12 = (long *****)((long)ppppplVar17 - (long)ppppplVar16 >> 3);
        if (ppppplVar12 <= ppppplVar11) {
          ppppplVar12 = ppppplVar11;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppppplVar17 - (long)ppppplVar16)) {
          ppppplVar12 = (long *****)0xfffffffffffffff;
        }
        *(long *******)((long)register0x00000008 + -0x68) = pppppplVar10;
        if ((ulong)ppppplVar12 >> 0x3c == 0) {
          lVar8 = (long)ppppplVar12 << 4;
          __Znwm();
          lVar2 = lVar8 + lVar15;
          _bzero(lVar2,uVar21 * 0x10);
          ppppplVar18 = (long *****)(lVar2 + (long)ppppplVar18 * -0x10);
          _memcpy(ppppplVar18,ppppplVar16,lVar15);
          *pppppplVar10 = ppppplVar18;
          pppppplVar9[0x4c] = (long *****)(lVar2 + uVar21 * 0x10);
          pppppplVar9[0x4d] = (long *****)(lVar8 + (long)ppppplVar12 * 0x10);
          *(long ******)((long)register0x00000008 + -0x78) = ppppplVar16;
          *(long ******)((long)register0x00000008 + -0x70) = ppppplVar17;
          *(long ******)((long)register0x00000008 + -0x88) = ppppplVar16;
          *(long ******)((long)register0x00000008 + -0x80) = ppppplVar16;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(ppppplVar12,uVar21 * 0x10);
    pppppplVar9[0x4c] = ppppplVar12 + uVar21 * 2;
  }
  else if (ppppplVar11 < ppppplVar18) {
    while (ppppplVar12 != ppppplVar16 + (long)ppppplVar11 * 2) {
      ppppplVar12 = ppppplVar12 + -2;
      func_0x00010988c204(ppppplVar12);
    }
    pppppplVar9[0x4c] = ppppplVar16 + (long)ppppplVar11 * 2;
  }
code_r0x00010988c138:
  pppppplVar9[0x5a] = ppppplVar11;
  return;
}



/* Entry: 10a6ccd28; end: 10a6ccddf;  */

void FUN_10a6ccd28(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6ccde0(param_1,param_2,FUN_10a6b51a0,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6ccde0; end: 10a6ccf1b;  */

void FUN_10a6ccde0(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_70;
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10a6ca450(param_2,param_5);
  FUN_10a6ccf1c(param_7);
  FUN_10a1f7d54(auStack_60,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&lStack_70,plVar1,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  if (lStack_70 == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(lStack_70 + 0x10));
  }
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a6ccf1c; end: 10a6ccf3f;  */

/* WARNING: Possible PIC construction at 0x00010a6ce8b4: Changing call to branch */

void FUN_10a6ccf1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint *puVar13;
  uint *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  ulong uVar20;
  uint *extraout_x8;
  long lVar21;
  undefined4 *extraout_x8_00;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long lVar25;
  uint *unaff_x22;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *unaff_x23;
  long lVar29;
  long *unaff_x24;
  ulong uVar30;
  uint *unaff_x25;
  ulong uVar31;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *puVar32;
  undefined8 *unaff_x28;
  undefined8 ****ppppuVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  long lStack_850;
  long *plStack_848;
  undefined1 auStack_840 [8];
  long *plStack_838;
  long *plStack_830;
  undefined8 *puStack_828;
  uint *puStack_820;
  long *plStack_818;
  uint *puStack_810;
  undefined8 *puStack_808;
  undefined8 ***pppuStack_800;
  code *pcStack_7f8;
  undefined8 ***pppuStack_7f0;
  code *pcStack_7e8;
  long lStack_7e0;
  long *plStack_7d8;
  undefined1 auStack_7d0 [8];
  uint *puStack_7c8;
  undefined1 auStack_7c0 [8];
  uint *puStack_7b8;
  uint uStack_7b0;
  int iStack_7ac;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  long lStack_778;
  long lStack_770;
  undefined8 *puStack_768;
  undefined8 auStack_760 [2];
  uint uStack_750;
  int iStack_74c;
  long lStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  long lStack_718;
  long lStack_710;
  long *plStack_708;
  long alStack_700 [2];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6b8;
  ulong uStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined1 auStack_688 [4];
  int iStack_684;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  long lStack_650;
  long lStack_648;
  undefined1 *puStack_640;
  undefined1 auStack_638 [16];
  undefined4 auStack_628 [2];
  undefined1 *puStack_620;
  undefined8 uStack_618;
  uint uStack_610;
  int iStack_60c;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_5d8;
  long lStack_5d0;
  undefined1 *puStack_5c8;
  undefined1 auStack_5c0 [16];
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long lStack_578;
  uint *puStack_570;
  undefined8 *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  int iStack_550;
  int iStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  long lStack_518;
  undefined4 *puStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4b8;
  long lStack_4b0;
  undefined1 *puStack_4a8;
  undefined1 auStack_4a0 [16];
  undefined1 auStack_490 [4];
  int iStack_48c;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_458;
  long lStack_450;
  undefined1 *puStack_448;
  undefined1 auStack_440 [16];
  undefined8 uStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_3f8;
  long lStack_3f0;
  undefined1 *puStack_3e8;
  undefined1 auStack_3e0 [16];
  undefined8 uStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_398;
  long lStack_390;
  undefined1 *puStack_388;
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [4];
  int iStack_36c;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_338;
  long lStack_330;
  undefined1 *puStack_328;
  undefined1 auStack_320 [16];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long lStack_2a8;
  uint *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int aiStack_160 [2];
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar10 = (long *)0x1;
  uVar16 = 0;
  FUN_10a052ee0(1,0,param_1);
  pcStack_18 = FUN_10a6ccf40;
  ppppuVar33 = &pppuStack_20;
  ppppuVar8 = (undefined8 ****)&lStack_7e0;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar10;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  (**(code **)(*plVar10 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  plVar12 = plVar10;
  plStack_7d8 = plVar11;
  FUN_10a6ca450(plVar10,uVar16);
  FUN_10a6ce8c0(param_4);
  FUN_10a1f7d54(auStack_7c0,plVar10,param_1);
  FUN_10a1f7d54(auStack_7d0,plVar10,param_1 + 0x10);
  lVar26 = plVar12[3];
  FUN_10a6b6384(&uStack_750,auStack_7c0,0x4e);
  FUN_10a6b6384(&uStack_7b0,auStack_7d0,0x4e);
  uStack_6f0 = CONCAT44(iStack_7ac,uStack_7b0);
  uStack_6b0 = (ulong)&uStack_6f0 | 8;
  uStack_6e8 = uStack_7a8;
  uStack_6d8 = uStack_798;
  uStack_6e0 = uStack_7a0;
  uStack_6c8 = uStack_788;
  uStack_6d0 = uStack_790;
  lStack_6b8 = lStack_778;
  uStack_6c0 = uStack_780;
  puVar24 = &uStack_6a0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  if (lStack_778 != 0) {
    piVar1 = (int *)(lStack_778 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_6a8 = puVar24;
  if (iStack_7ac < 3) {
    uStack_6a0 = *puStack_768;
    uStack_698 = puStack_768[1];
  }
  else {
    uStack_6f0 = (ulong)uStack_7b0;
    func_0x000109a84868(&uStack_6f0,&uStack_7b0);
  }
  FUN_10a6c0970(aiStack_160,&uStack_6f0);
  auVar35._4_4_ = aiStack_160[1];
  auVar35._0_4_ = aiStack_160[0];
  auVar35._8_8_ = puStack_158;
  auVar35 = NEON_scvtf(auVar35,4);
  uStack_2d8 = auVar35._8_4_;
  uStack_2d4 = auVar35._12_4_;
  uStack_2e0._0_4_ = auVar35._0_4_;
  uStack_2e0._4_4_ = auVar35._4_4_;
  FUN_10a6c09fc(0x4300000043000000,0x4300000043000000,&uStack_100,&uStack_2e0);
  FUN_10a6c0e18(&uStack_2e0,&uStack_6f0,&uStack_100);
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lStack_6b8 != 0) {
    piVar1 = (int *)(lStack_6b8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_6f0);
    }
  }
  puVar23 = puStack_298;
  lStack_6b8 = 0;
  uStack_6d8 = 0;
  uStack_6e0 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  if (uStack_6f0._4_4_ < 1) {
LAB_10a6cd168:
    if (2 < uStack_2e0._4_4_) goto LAB_10a6cd19c;
    uStack_6f0 = CONCAT44(uStack_2e0._4_4_,(uint)uStack_2e0);
    uStack_6e8 = CONCAT44(uStack_2d4,uStack_2d8);
    *puStack_6a8 = *puStack_298;
    puStack_6a8[1] = puVar23[1];
  }
  else {
    lVar21 = 0;
    do {
      *(undefined4 *)(uStack_6b0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_6f0._4_4_);
    if (uStack_6f0._4_4_ < 3) goto LAB_10a6cd168;
LAB_10a6cd19c:
    uStack_6f0 = CONCAT44(uStack_6f0._4_4_,(uint)uStack_2e0);
    func_0x000109a84868(&uStack_6f0,&uStack_2e0);
  }
  lStack_6b8 = lStack_2a8;
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  if (0 < uStack_2e0._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)((long)puStack_2a0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_2e0._4_4_);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    _free(puStack_298[-1]);
  }
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_300 = 0;
  aiStack_160[0] = 0x80;
  aiStack_160[1] = 0x80;
  func_0x000109a829e8(&uStack_2e0,aiStack_160,0);
  FUN_10a003124(auStack_370,&uStack_2e0);
  func_0x00010918eb6c(&uStack_2e0);
  aiStack_160[0] = 0;
  aiStack_160[1] = 0x11;
  uStack_3d0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_100,&uStack_750,aiStack_160,&uStack_3d0);
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2e0._4_4_ = 0;
  uStack_2d8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  puStack_2a0 = &uStack_2d8;
  uStack_2b4 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2e0._0_4_ = 0x42ff0005;
  puStack_298 = &uStack_290;
  func_0x000109390e94(&uStack_2e0,&uStack_100);
  FUN_10a6c0250(auStack_370,&uStack_2e0,3);
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  if (0 < uStack_2e0._4_4_) {
    lVar21 = 0;
    do {
      puStack_2a0[lVar21] = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_2e0._4_4_);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    _free(puStack_298[-1]);
  }
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_100._4_4_);
  }
  if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_b8 + -8));
  }
  FUN_109fed894(&uStack_310,auStack_370);
  aiStack_160[0] = 0x80;
  aiStack_160[1] = 0x80;
  func_0x000109a829e8(&uStack_2e0,aiStack_160,0);
  FUN_10a003124(&uStack_3d0,&uStack_2e0);
  func_0x00010918eb6c(&uStack_2e0);
  aiStack_160[0] = 0x24;
  aiStack_160[1] = 0x2a;
  uStack_430 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_100,&uStack_750,aiStack_160,&uStack_430);
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2e0._4_4_ = 0;
  uStack_2d8 = 0;
  puStack_2a0 = &uStack_2d8;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2b4 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2e0._0_4_ = 0x42ff0005;
  puStack_298 = &uStack_290;
  func_0x000109390e94(&uStack_2e0,&uStack_100);
  FUN_10a6c02f0(&uStack_3d0,&uStack_2e0);
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  if (0 < uStack_2e0._4_4_) {
    lVar21 = 0;
    do {
      puStack_2a0[lVar21] = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_2e0._4_4_);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    _free(puStack_298[-1]);
  }
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_100._4_4_);
  }
  if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_b8 + -8));
  }
  aiStack_160[0] = 0x2a;
  aiStack_160[1] = 0x30;
  uStack_430 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_100,&uStack_750,aiStack_160,&uStack_430);
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2e0._4_4_ = 0;
  uStack_2d8 = 0;
  puStack_2a0 = &uStack_2d8;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2b4 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2e0._0_4_ = 0x42ff0005;
  puStack_298 = &uStack_290;
  func_0x000109390e94(&uStack_2e0,&uStack_100);
  FUN_10a6c02f0(&uStack_3d0,&uStack_2e0);
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  if (0 < uStack_2e0._4_4_) {
    lVar21 = 0;
    do {
      puStack_2a0[lVar21] = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_2e0._4_4_);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    _free(puStack_298[-1]);
  }
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_100._4_4_);
  }
  if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_b8 + -8));
  }
  FUN_109fed894(&uStack_310,&uStack_3d0);
  aiStack_160[0] = 0x80;
  aiStack_160[1] = 0x80;
  func_0x000109a829e8(&uStack_2e0,aiStack_160,0);
  FUN_10a003124(&uStack_430,&uStack_2e0);
  func_0x00010918eb6c(&uStack_2e0);
  puStack_f8 = (undefined8 *)0x1e0000001d;
  uStack_100 = 0x1c0000001b;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,0x21);
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2e0._0_4_ = 0;
  uStack_2e0._4_4_ = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  FUN_10a14d944(&uStack_2e0,&uStack_100,(long)&uStack_f0 + 4,5);
  FUN_10a6c04d8(&uStack_430,&uStack_750,3,CONCAT44(uStack_2e0._4_4_,(uint)uStack_2e0),
                CONCAT44(uStack_2d4,uStack_2d8));
  if (CONCAT44(uStack_2e0._4_4_,(uint)uStack_2e0) != 0) {
    uStack_2d8 = (uint)uStack_2e0;
    uStack_2d4 = uStack_2e0._4_4_;
    __ZdlPv();
  }
  FUN_109fed894(&uStack_310,&uStack_430);
  aiStack_160[0] = 0x80;
  aiStack_160[1] = 0x80;
  func_0x000109a829e8(&uStack_2e0,aiStack_160,0);
  FUN_10a003124(auStack_490,&uStack_2e0);
  func_0x00010918eb6c(&uStack_2e0);
  aiStack_160[0] = 0x3c;
  aiStack_160[1] = 0x44;
  uStack_4f0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_100,&uStack_750,aiStack_160,&uStack_4f0);
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2e0._4_4_ = 0;
  uStack_2d8 = 0;
  puStack_2a0 = &uStack_2d8;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2b4 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2e0._0_4_ = 0x42ff0005;
  puStack_298 = &uStack_290;
  func_0x000109390e94(&uStack_2e0,&uStack_100);
  FUN_10a6c02f0(auStack_490,&uStack_2e0);
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  if (0 < uStack_2e0._4_4_) {
    lVar21 = 0;
    do {
      puStack_2a0[lVar21] = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_2e0._4_4_);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    _free(puStack_298[-1]);
  }
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_100._4_4_);
  }
  if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_b8 + -8));
  }
  FUN_109fed894(&uStack_310,auStack_490);
  aiStack_160[0] = 0x80;
  aiStack_160[1] = 0x80;
  func_0x000109a829e8(&uStack_2e0,aiStack_160,0);
  lStack_7e0 = lVar26;
  FUN_10a003124(&uStack_4f0,&uStack_2e0);
  func_0x00010918eb6c(&uStack_2e0);
  lVar26 = 0;
  aiStack_160[0] = 0x13;
  aiStack_160[1] = 0x18;
  do {
    uStack_100 = CONCAT44(uStack_100._4_4_,0x83010000);
    uStack_f0 = 0;
    uVar16 = *(undefined8 *)(lStack_740 + *plStack_708 * (long)*(int *)((long)aiStack_160 + lVar26))
    ;
    iStack_550 = (int)(float)uVar16;
    iStack_54c = (int)(float)((ulong)uVar16 >> 0x20);
    uStack_2e0._0_4_ = 0;
    uStack_2e0._4_4_ = 0x406fe000;
    uStack_2d0 = 0;
    uStack_2cc = 0;
    uStack_2c8 = 0;
    uStack_2c4 = 0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    puStack_f8 = &uStack_4f0;
    func_0x000109aee350(&uStack_100,&iStack_550,3,&uStack_2e0,0xffffffff,8,0);
    lVar26 = lVar26 + 4;
  } while (lVar26 != 8);
  FUN_109fed894(&uStack_310,&uStack_4f0);
  if (lRam00000001137eb8f8 == lRam00000001137eb8f0) {
    FUN_10a6c19c8();
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6ce5bc);
    (*pcVar7)();
  }
  FUN_10a6c1790(&uStack_2e0,0x80,0x80,&uStack_750);
  uStack_5b0 = CONCAT44(uStack_2e0._4_4_,(uint)uStack_2e0);
  uStack_5a8 = CONCAT44(uStack_2d4,uStack_2d8);
  puStack_570 = (uint *)((ulong)&uStack_5b0 | 8);
  uStack_598 = CONCAT44(uStack_2c4,uStack_2c8);
  uStack_5a0 = CONCAT44(uStack_2cc,uStack_2d0);
  uStack_588 = CONCAT44(uStack_2b4,uStack_2b8);
  uStack_590 = CONCAT44(uStack_2bc,uStack_2c0);
  uStack_580 = CONCAT44(uStack_2ac,uStack_2b0);
  lStack_578 = lStack_2a8;
  uStack_558 = 0;
  uStack_560 = 0;
  if (uStack_2e0._4_4_ < 3) {
    puVar23 = (undefined8 *)((ulong)&uStack_2e0 | 4);
    uStack_560 = *puStack_298;
    uStack_558 = puStack_298[1];
    uStack_2e0._0_4_ = 0x42ff0000;
    puVar23[1] = 0;
    *puVar23 = 0;
    puVar23[3] = 0;
    puVar23[2] = 0;
    puVar23[5] = 0;
    puVar23[4] = 0;
    *(undefined8 *)((long)puVar23 + 0x34) = 0;
    *(undefined8 *)((long)puVar23 + 0x2c) = 0;
    puStack_568 = &uStack_560;
    if (puStack_298 != &uStack_290) {
      _free(puStack_298[-1]);
    }
  }
  else {
    puStack_568 = puStack_298;
    puStack_570 = puStack_2a0;
  }
  aiStack_160[0] = 0;
  aiStack_160[1] = 1;
  uStack_2f8 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_100,&uStack_750,aiStack_160,&uStack_2f8);
  uStack_2f8 = 0x1100000010;
  uStack_168 = 0x7fffffff80000000;
  func_0x000109a84930(aiStack_160,&uStack_750,&uStack_2f8,&uStack_168);
  puVar23 = &uStack_100;
  func_0x000109a7cd1c(&uStack_2e0,puVar23,aiStack_160);
  uStack_170 = 0;
  uStack_180 = CONCAT44(uStack_180._4_4_,0xc1060000);
  puStack_178 = &uStack_2e0;
  func_0x000109a91d90();
  dVar34 = (double)func_0x000109ab9654(&uStack_180,4,puVar23);
  dVar36 = 128.0;
  if (dVar34 <= 128.0) {
    dVar36 = dVar34;
  }
  func_0x00010918eb6c(&uStack_2e0);
  if (lStack_128 != 0) {
    piVar1 = (int *)(lStack_128 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(aiStack_160);
    }
  }
  lStack_128 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (0 < aiStack_160[1]) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_120 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < aiStack_160[1]);
  }
  if (puStack_118 != auStack_110 && puStack_118 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_118 + -8));
  }
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < uStack_100._4_4_);
  }
  if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_b8 + -8));
  }
  aiStack_160[0] = 3;
  aiStack_160[1] = 3;
  uStack_180 = 0xffffffffffffffff;
  puVar23 = &uStack_2e0;
  func_0x000109b32bf8(&uStack_2e0,2,aiStack_160,&uStack_180);
  iVar19 = (int)(dVar36 * 0.12);
  if (iVar19 < 2) {
    iVar19 = 1;
  }
  uStack_150 = 0;
  uVar16 = 0x1010000;
  aiStack_160[0] = 0x1010000;
  puVar28 = &uStack_5b0;
  uStack_180 = CONCAT44(uStack_180._4_4_,0x2010000);
  uStack_170 = 0;
  uStack_2e8 = 0;
  uStack_2f8 = CONCAT44(uStack_2f8._4_4_,0x1010000);
  puStack_f8 = (undefined8 *)0x7fefffffffffffff;
  uStack_100 = 0x7fefffffffffffff;
  uStack_e8 = 0x7fefffffffffffff;
  uStack_f0 = 0x7fefffffffffffff;
  uStack_168 = 0xffffffffffffffff;
  puStack_2f0 = puVar23;
  puStack_178 = puVar28;
  puStack_158 = puVar28;
  func_0x000109b32fd4(1,aiStack_160,&uStack_180,&uStack_2f8,&uStack_168,iVar19,0,&uStack_100);
  uStack_f0 = 0;
  uStack_100._0_4_ = 0x1010000;
  aiStack_160[0] = 0x2010000;
  uStack_150 = 0;
  uStack_180 = 0;
  uVar18 = 0;
  puStack_158 = puVar28;
  puStack_f8 = puVar28;
  func_0x000109b44a6c(dVar36 * 0.09,dVar36 * 0.09,&uStack_100,aiStack_160,&uStack_180,0);
  plVar11 = plStack_7d8;
  uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
  puStack_f8 = &uStack_5b0;
  uStack_f0 = 0;
  func_0x000109a41858(0x4010000000000000,0xc073200000000000,&uStack_5b0,&uStack_100,0);
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  if (0 < uStack_2e0._4_4_) {
    lVar26 = 0;
    do {
      puStack_2a0[lVar26] = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < uStack_2e0._4_4_);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    _free(puStack_298[-1]);
  }
  uStack_544 = 0;
  uStack_540 = 0;
  iStack_54c = 0;
  uStack_548 = 0;
  puStack_510 = &uStack_548;
  uStack_534 = 0;
  uStack_530 = 0;
  uStack_53c = 0;
  uStack_538 = 0;
  uStack_524 = 0;
  uStack_52c = 0;
  uStack_528 = 0;
  lStack_518 = 0;
  uStack_520 = 0;
  uStack_51c = 0;
  puVar32 = &uStack_500;
  uStack_4f8 = 0;
  uStack_500 = 0;
  iStack_550 = 0x42ff0000;
  puStack_508 = puVar32;
  func_0x0001093910bc(&iStack_550,&uStack_5b0);
  if (lStack_578 != 0) {
    piVar1 = (int *)(lStack_578 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_5b0);
    }
  }
  lStack_578 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  if (0 < uStack_5b0._4_4_) {
    lVar26 = 0;
    do {
      puStack_570[lVar26] = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < uStack_5b0._4_4_);
  }
  if (puStack_568 != &uStack_560 && puStack_568 != (undefined8 *)0x0) {
    _free(puStack_568[-1]);
  }
  FUN_109fed894(&uStack_310,&iStack_550);
  uStack_2d8 = 0x80;
  uStack_2d4 = 0x80;
  uStack_2e0 = &uStack_310;
  FUN_10a6c146c(&uStack_2e0,&uStack_6f0);
  FUN_10a6c146c(&uStack_2e0,&uStack_750);
  FUN_10a6c05fc(auStack_688,uStack_310,uStack_308);
  puVar6 = uStack_2e0;
  if (lStack_518 != 0) {
    piVar1 = (int *)(lStack_518 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&iStack_550);
      puVar6 = uStack_2e0;
    }
  }
  lStack_518 = 0;
  uStack_538 = 0;
  uStack_534 = 0;
  uStack_540 = 0;
  uStack_53c = 0;
  uStack_528 = 0;
  uStack_524 = 0;
  uStack_530 = 0;
  uStack_52c = 0;
  if (0 < iStack_54c) {
    lVar26 = 0;
    do {
      puStack_510[lVar26] = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < iStack_54c);
  }
  uStack_2e0 = puVar6;
  if (puStack_508 != puVar32 && puStack_508 != (undefined8 *)0x0) {
    _free(puStack_508[-1]);
  }
  if (lStack_4b8 != 0) {
    piVar1 = (int *)(lStack_4b8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_4f0);
    }
  }
  lStack_4b8 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  if (0 < uStack_4f0._4_4_) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_4b0 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < uStack_4f0._4_4_);
  }
  if (puStack_4a8 != auStack_4a0 && puStack_4a8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_4a8 + -8));
  }
  if (lStack_458 != 0) {
    piVar1 = (int *)(lStack_458 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(auStack_490);
    }
  }
  lStack_458 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  if (0 < iStack_48c) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_450 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < iStack_48c);
  }
  if (puStack_448 != auStack_440 && puStack_448 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_448 + -8));
  }
  if (lStack_3f8 != 0) {
    piVar1 = (int *)(lStack_3f8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_430);
    }
  }
  lStack_3f8 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  if (0 < uStack_430._4_4_) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_3f0 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < uStack_430._4_4_);
  }
  if (puStack_3e8 != auStack_3e0 && puStack_3e8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_3e8 + -8));
  }
  if (lStack_398 != 0) {
    piVar1 = (int *)(lStack_398 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_3d0);
    }
  }
  lStack_398 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  if (0 < uStack_3d0._4_4_) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_390 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < uStack_3d0._4_4_);
  }
  if (puStack_388 != auStack_380 && puStack_388 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_388 + -8));
  }
  if (lStack_338 != 0) {
    piVar1 = (int *)(lStack_338 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(auStack_370);
    }
  }
  lStack_338 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  if (0 < iStack_36c) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_330 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < iStack_36c);
  }
  if (puStack_328 != auStack_320 && puStack_328 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_328 + -8));
  }
  uStack_2e0 = &uStack_310;
  FUN_109ffe3e8(&uStack_2e0);
  auStack_628[0] = 0x1010000;
  puStack_620 = auStack_688;
  uStack_618 = 0;
  FUN_10a0f4340(&uStack_610,auStack_628,5);
  if (lStack_650 != 0) {
    piVar1 = (int *)(lStack_650 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(auStack_688);
    }
  }
  lStack_650 = 0;
  uStack_670 = 0;
  uStack_678 = 0;
  uStack_660 = 0;
  uStack_668 = 0;
  if (0 < iStack_684) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_648 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < iStack_684);
  }
  if (puStack_640 != auStack_638 && puStack_640 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_640 + -8));
  }
  if (lStack_6b8 != 0) {
    piVar1 = (int *)(lStack_6b8 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_6f0);
    }
  }
  lStack_6b8 = 0;
  uStack_6d8 = 0;
  uStack_6e0 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  if (0 < uStack_6f0._4_4_) {
    lVar26 = 0;
    do {
      *(undefined4 *)(uStack_6b0 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < uStack_6f0._4_4_);
  }
  if (puStack_6a8 != puVar24 && puStack_6a8 != (undefined8 *)0x0) {
    _free(puStack_6a8[-1]);
  }
  uVar17 = *(undefined8 *)(lStack_7e0 + 0x870);
  puVar13 = (uint *)&uStack_2e0;
  FUN_10a6b28e4(puVar13,uVar17,&uStack_610);
  iVar19 = (int)uVar17;
  if (lStack_5d8 != 0) {
    piVar1 = (int *)(lStack_5d8 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      puVar13 = &uStack_610;
      func_0x000109a848d4();
    }
  }
  lStack_5d8 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  if (0 < iStack_60c) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_5d0 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < iStack_60c);
  }
  if (puStack_5c8 != auStack_5c0 && puStack_5c8 != (undefined1 *)0x0) {
    puVar13 = *(uint **)(puStack_5c8 + -8);
    _free();
  }
  if (lStack_778 != 0) {
    piVar1 = (int *)(lStack_778 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      puVar13 = &uStack_7b0;
      func_0x000109a848d4();
    }
  }
  lStack_778 = 0;
  uStack_798 = 0;
  uStack_7a0 = 0;
  uStack_788 = 0;
  uStack_790 = 0;
  if (0 < iStack_7ac) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_770 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < iStack_7ac);
  }
  if (puStack_768 != auStack_760 && puStack_768 != (undefined8 *)0x0) {
    puVar13 = (uint *)puStack_768[-1];
    _free();
  }
  if (lStack_718 != 0) {
    piVar1 = (int *)(lStack_718 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      puVar13 = &uStack_750;
      func_0x000109a848d4();
    }
  }
  lStack_718 = 0;
  uStack_738 = 0;
  lStack_740 = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  if (0 < iStack_74c) {
    lVar26 = 0;
    do {
      *(undefined4 *)(lStack_710 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < iStack_74c);
  }
  if (plStack_708 != alStack_700 && plStack_708 != (long *)0x0) {
    puVar13 = (uint *)plStack_708[-1];
    _free();
  }
  if (puStack_7c8 != (uint *)0x0) {
    puVar14 = puStack_7c8 + 2;
    do {
      lVar26 = *(long *)puVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
      if (bVar5) {
        *(long *)puVar14 = lVar26 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*(long *)puStack_7c8 + 0x10))(puStack_7c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      puVar13 = puStack_7c8;
    }
  }
  if (puStack_7b8 != (uint *)0x0) {
    puVar14 = puStack_7b8 + 2;
    do {
      lVar26 = *(long *)puVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
      if (bVar5) {
        *(long *)puVar14 = lVar26 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*(long *)puStack_7b8 + 0x10))(puStack_7b8);
      puVar13 = puStack_7b8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (uStack_2e0 == (undefined8 *)0x0) {
    *extraout_x8 = 1;
  }
  else {
    puVar13 = extraout_x8;
    plVar12 = plVar10;
    func_0x0001098849a4(extraout_x8,plVar10,uStack_2e0[2]);
    iVar19 = (int)plVar12;
  }
  puVar14 = (uint *)CONCAT44(uStack_2d4,uStack_2d8);
  if (puVar14 != (uint *)0x0) {
    puVar2 = puVar14 + 2;
    do {
      lVar26 = *(long *)puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *(long *)puVar2 = lVar26 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*(long *)puVar14 + 0x10))(puVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      puVar13 = puVar14;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    plVar12 = plVar11 + 0x4b;
    ppppuVar8 = (undefined8 ****)&stack0xfffffffffffffff0;
    puVar24 = unaff_x19;
    puVar13 = unaff_x20;
    plVar10 = unaff_x21;
    puVar28 = unaff_x23;
    plVar11 = unaff_x24;
    uVar16 = unaff_x26;
    puVar23 = unaff_x27;
    puVar32 = unaff_x28;
    ppppuVar33 = (undefined8 ****)pppuStack_20;
    pcVar7 = pcStack_18;
  }
  else {
    ___stack_chk_fail();
    unaff_x25 = extraout_x8;
    if (iVar19 == 0) {
      puVar14 = puVar13;
      __Unwind_Resume();
      if ((int)puVar14 == 2) {
        return;
      }
      ppppuVar8 = &pppuStack_7f0;
      pcStack_7e8 = FUN_10a6ce8c0;
      plVar15 = (long *)0x2;
      uVar17 = 0;
      pppuStack_7f0 = ppppuVar33;
      FUN_10a052ee0(2,0,puVar14);
      plStack_830 = plVar11;
      puStack_820 = puStack_7b8;
      pcStack_7f8 = FUN_10a6ce8e4;
      plVar12 = plVar15;
      puStack_828 = puVar28;
      plStack_818 = plVar10;
      puStack_810 = puVar13;
      puStack_808 = puVar24;
      pppuStack_800 = &pppuStack_7f0;
      (**(code **)(*plVar15 + 0x58))();
      if ((ulong)plVar12[0x59] < 8) {
        plVar12[plVar12[0x59] + 0x4e] = plVar12[0x5a];
        plVar12[0x59] = plVar12[0x59] + 1;
      }
      else {
        func_0x00010988bfcc(plVar12 + 0x4b);
      }
      plVar11 = plVar15;
      FUN_10a6ca450(plVar15,uVar17);
      FUN_10a6cea70(uVar18);
      plVar10 = plVar15;
      FUN_10a373c54(plVar15,puVar14);
      FUN_10a1f7d54(auStack_840,plVar15,puVar14 + 4);
      FUN_10a6b6564(&lStack_850,plVar11,plVar10,auStack_840);
      if (plStack_838 != (long *)0x0) {
        plVar11 = plStack_838 + 1;
        do {
          lVar26 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar26 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plStack_838 + 0x10))(plStack_838);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_838);
        }
      }
      if (lStack_850 == 0) {
        *extraout_x8_00 = 1;
      }
      else {
        func_0x0001098849a4(extraout_x8_00,plVar15,*(undefined8 *)(lStack_850 + 0x10));
      }
      if (plStack_848 != (long *)0x0) {
        plVar11 = plStack_848 + 1;
        do {
          lVar26 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar26 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plStack_848 + 0x10))(plStack_848);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_848);
        }
      }
      plVar12 = plVar12 + 0x4b;
      puVar24 = puStack_808;
      puVar13 = puStack_810;
      plVar10 = plStack_818;
      unaff_x22 = puStack_820;
      puVar28 = puStack_828;
      plVar11 = plStack_830;
      ppppuVar33 = (undefined8 ****)pppuStack_800;
      pcVar7 = pcStack_7f8;
    }
    else {
      func_0x000104bd46a0();
      func_0x00010938f90c(&uStack_7b0);
      func_0x00010938f90c(&uStack_750);
      func_0x00010a140010(auStack_7d0);
      func_0x00010a140010(auStack_7c0);
      plVar12 = plStack_7d8 + 0x4b;
      pcVar7 = (code *)0x10a6ce8b8;
      unaff_x22 = puStack_7b8;
    }
  }
  lVar26 = plVar12[0xe];
  uVar20 = lVar26 - 1;
  plVar12[0xe] = uVar20;
  if (uVar20 < 8) {
    uVar20 = plVar12[lVar26 + 2];
    if (plVar12[0xf] == uVar20) {
      return;
    }
  }
  else {
    uVar20 = *(ulong *)(plVar12[0xc] + -8);
    plVar12[0xc] = plVar12[0xc] + -8;
    if (plVar12[0xf] == uVar20) {
      return;
    }
  }
  *(undefined8 **)((long)ppppuVar8 + -0x60) = puVar32;
  *(undefined8 **)((long)ppppuVar8 + -0x58) = puVar23;
  *(undefined8 *)((long)ppppuVar8 + -0x50) = uVar16;
  *(uint **)((long)ppppuVar8 + -0x48) = unaff_x25;
  *(long **)((long)ppppuVar8 + -0x40) = plVar11;
  *(undefined8 **)((long)ppppuVar8 + -0x38) = puVar28;
  *(uint **)((long)ppppuVar8 + -0x30) = unaff_x22;
  *(long **)((long)ppppuVar8 + -0x28) = plVar10;
  *(uint **)((long)ppppuVar8 + -0x20) = puVar13;
  *(undefined8 **)((long)ppppuVar8 + -0x18) = puVar24;
  *(undefined8 *****)((long)ppppuVar8 + -0x10) = ppppuVar33;
  *(code **)((long)ppppuVar8 + -8) = pcVar7;
  lVar26 = *plVar12;
  lVar21 = plVar12[1];
  lVar25 = lVar21 - lVar26;
  uVar30 = lVar25 >> 4;
  if (uVar30 < uVar20) {
    uVar31 = uVar20 - uVar30;
    lVar29 = plVar12[2];
    if ((ulong)(lVar29 - lVar21 >> 4) < uVar31) {
      if (uVar20 >> 0x3c == 0) {
        uVar22 = lVar29 - lVar26 >> 3;
        if (uVar22 <= uVar20) {
          uVar22 = uVar20;
        }
        if (0x7fffffffffffffef < (ulong)(lVar29 - lVar26)) {
          uVar22 = 0xfffffffffffffff;
        }
        *(long **)((long)ppppuVar8 + -0x68) = plVar12;
        if (uVar22 >> 0x3c == 0) {
          lVar9 = uVar22 << 4;
          __Znwm();
          lVar21 = lVar9 + lVar25;
          _bzero(lVar21,uVar31 * 0x10);
          lVar27 = lVar21 + uVar30 * -0x10;
          _memcpy(lVar27,lVar26,lVar25);
          *plVar12 = lVar27;
          plVar12[1] = lVar21 + uVar31 * 0x10;
          plVar12[2] = lVar9 + uVar22 * 0x10;
          *(long *)((long)ppppuVar8 + -0x78) = lVar26;
          *(long *)((long)ppppuVar8 + -0x70) = lVar29;
          *(long *)((long)ppppuVar8 + -0x88) = lVar26;
          *(long *)((long)ppppuVar8 + -0x80) = lVar26;
          func_0x00010988c1b8((undefined1 *)((long)ppppuVar8 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(lVar21,uVar31 * 0x10);
    plVar12[1] = lVar21 + uVar31 * 0x10;
  }
  else if (uVar20 < uVar30) {
    lVar26 = lVar26 + uVar20 * 0x10;
    while (lVar21 != lVar26) {
      lVar21 = lVar21 + -0x10;
      func_0x00010988c204(lVar21);
    }
    plVar12[1] = lVar26;
  }
code_r0x00010988c138:
  plVar12[0xf] = uVar20;
  return;
}



/* Entry: 10a6ccf40; end: 10a6ce8bf;  */

/* WARNING: Possible PIC construction at 0x00010a6ce8b4: Changing call to branch */

void FUN_10a6ccf40(uint *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 **ppuVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  uint *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *extraout_x8;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long lVar24;
  uint *unaff_x22;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *unaff_x23;
  long lVar28;
  long *unaff_x24;
  ulong uVar29;
  uint *unaff_x25;
  ulong uVar30;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *puVar31;
  undefined8 *unaff_x28;
  undefined1 *puVar32;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  long lStack_840;
  long *plStack_838;
  undefined1 auStack_830 [8];
  long *plStack_828;
  long *plStack_820;
  undefined8 *puStack_818;
  uint *puStack_810;
  long *plStack_808;
  uint *puStack_800;
  undefined8 *puStack_7f8;
  undefined1 *puStack_7f0;
  code *pcStack_7e8;
  undefined1 *puStack_7e0;
  code *pcStack_7d8;
  long lStack_7d0;
  long *plStack_7c8;
  undefined1 auStack_7c0 [8];
  uint *puStack_7b8;
  undefined1 auStack_7b0 [8];
  uint *puStack_7a8;
  uint uStack_7a0;
  int iStack_79c;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  long lStack_768;
  long lStack_760;
  undefined8 *puStack_758;
  undefined8 auStack_750 [2];
  uint uStack_740;
  int iStack_73c;
  long lStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  long lStack_708;
  long lStack_700;
  long *plStack_6f8;
  long alStack_6f0 [2];
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  ulong uStack_6a0;
  undefined8 *puStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined1 auStack_678 [4];
  int iStack_674;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  long lStack_640;
  long lStack_638;
  undefined1 *puStack_630;
  undefined1 auStack_628 [16];
  undefined4 auStack_618 [2];
  undefined1 *puStack_610;
  undefined8 uStack_608;
  uint uStack_600;
  int iStack_5fc;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5c8;
  long lStack_5c0;
  undefined1 *puStack_5b8;
  undefined1 auStack_5b0 [16];
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  uint *puStack_560;
  undefined8 *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  int iStack_540;
  int iStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  long lStack_508;
  undefined4 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4a8;
  long lStack_4a0;
  undefined1 *puStack_498;
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [4];
  int iStack_47c;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_448;
  long lStack_440;
  undefined1 *puStack_438;
  undefined1 auStack_430 [16];
  undefined8 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3e8;
  long lStack_3e0;
  undefined1 *puStack_3d8;
  undefined1 auStack_3d0 [16];
  undefined8 uStack_3c0;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_388;
  long lStack_380;
  undefined1 *puStack_378;
  undefined1 auStack_370 [16];
  undefined1 auStack_360 [4];
  int iStack_35c;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_328;
  long lStack_320;
  undefined1 *puStack_318;
  undefined1 auStack_310 [16];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  uint uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long lStack_298;
  uint *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  long lStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  
  puVar32 = &stack0xfffffffffffffff0;
  ppuVar8 = (undefined1 **)&lStack_7d0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  plVar11 = param_2;
  plStack_7c8 = plVar10;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6ce8c0(param_5);
  FUN_10a1f7d54(auStack_7b0,param_2,param_4);
  FUN_10a1f7d54(auStack_7c0,param_2,param_4 + 0x10);
  lVar25 = plVar11[3];
  FUN_10a6b6384(&uStack_740,auStack_7b0,0x4e);
  FUN_10a6b6384(&uStack_7a0,auStack_7c0,0x4e);
  uStack_6e0 = CONCAT44(iStack_79c,uStack_7a0);
  uStack_6a0 = (ulong)&uStack_6e0 | 8;
  uStack_6d8 = uStack_798;
  uStack_6c8 = uStack_788;
  uStack_6d0 = uStack_790;
  uStack_6b8 = uStack_778;
  uStack_6c0 = uStack_780;
  lStack_6a8 = lStack_768;
  uStack_6b0 = uStack_770;
  puVar23 = &uStack_690;
  uStack_690 = 0;
  uStack_688 = 0;
  if (lStack_768 != 0) {
    piVar1 = (int *)(lStack_768 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_698 = puVar23;
  if (iStack_79c < 3) {
    uStack_690 = *puStack_758;
    uStack_688 = puStack_758[1];
  }
  else {
    uStack_6e0 = (ulong)uStack_7a0;
    func_0x000109a84868(&uStack_6e0,&uStack_7a0);
  }
  FUN_10a6c0970(aiStack_150,&uStack_6e0);
  auVar35._4_4_ = aiStack_150[1];
  auVar35._0_4_ = aiStack_150[0];
  auVar35._8_8_ = puStack_148;
  auVar35 = NEON_scvtf(auVar35,4);
  uStack_2c8 = auVar35._8_4_;
  uStack_2c4 = auVar35._12_4_;
  uStack_2d0._0_4_ = auVar35._0_4_;
  uStack_2d0._4_4_ = auVar35._4_4_;
  FUN_10a6c09fc(0x4300000043000000,0x4300000043000000,&uStack_f0,&uStack_2d0);
  FUN_10a6c0e18(&uStack_2d0,&uStack_6e0,&uStack_f0);
  if (lStack_298 != 0) {
    piVar1 = (int *)(lStack_298 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lStack_6a8 != 0) {
    piVar1 = (int *)(lStack_6a8 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_6e0);
    }
  }
  puVar22 = puStack_288;
  lStack_6a8 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  uStack_6b8 = 0;
  uStack_6c0 = 0;
  if (uStack_6e0._4_4_ < 1) {
LAB_10a6cd168:
    if (2 < uStack_2d0._4_4_) goto LAB_10a6cd19c;
    uStack_6e0 = CONCAT44(uStack_2d0._4_4_,(uint)uStack_2d0);
    uStack_6d8 = CONCAT44(uStack_2c4,uStack_2c8);
    *puStack_698 = *puStack_288;
    puStack_698[1] = puVar22[1];
  }
  else {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_6a0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_6e0._4_4_);
    if (uStack_6e0._4_4_ < 3) goto LAB_10a6cd168;
LAB_10a6cd19c:
    uStack_6e0 = CONCAT44(uStack_6e0._4_4_,(uint)uStack_2d0);
    func_0x000109a84868(&uStack_6e0,&uStack_2d0);
  }
  lStack_6a8 = lStack_298;
  if (lStack_298 != 0) {
    piVar1 = (int *)(lStack_298 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d0);
    }
  }
  lStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  if (0 < uStack_2d0._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)((long)puStack_290 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_2d0._4_4_);
  }
  if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
    _free(puStack_288[-1]);
  }
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2f0 = 0;
  aiStack_150[0] = 0x80;
  aiStack_150[1] = 0x80;
  func_0x000109a829e8(&uStack_2d0,aiStack_150,0);
  FUN_10a003124(auStack_360,&uStack_2d0);
  func_0x00010918eb6c(&uStack_2d0);
  aiStack_150[0] = 0;
  aiStack_150[1] = 0x11;
  uStack_3c0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_f0,&uStack_740,aiStack_150,&uStack_3c0);
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2d0._4_4_ = 0;
  uStack_2c8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  puStack_290 = &uStack_2c8;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2d0._0_4_ = 0x42ff0005;
  puStack_288 = &uStack_280;
  func_0x000109390e94(&uStack_2d0,&uStack_f0);
  FUN_10a6c0250(auStack_360,&uStack_2d0,3);
  if (lStack_298 != 0) {
    piVar1 = (int *)(lStack_298 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d0);
    }
  }
  lStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  if (0 < uStack_2d0._4_4_) {
    lVar20 = 0;
    do {
      puStack_290[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_2d0._4_4_);
  }
  if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
    _free(puStack_288[-1]);
  }
  if (lStack_b8 != 0) {
    piVar1 = (int *)(lStack_b8 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_f0);
    }
  }
  lStack_b8 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (0 < uStack_f0._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(lStack_b0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_f0._4_4_);
  }
  if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_a8 + -8));
  }
  FUN_109fed894(&uStack_300,auStack_360);
  aiStack_150[0] = 0x80;
  aiStack_150[1] = 0x80;
  func_0x000109a829e8(&uStack_2d0,aiStack_150,0);
  FUN_10a003124(&uStack_3c0,&uStack_2d0);
  func_0x00010918eb6c(&uStack_2d0);
  aiStack_150[0] = 0x24;
  aiStack_150[1] = 0x2a;
  uStack_420 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_f0,&uStack_740,aiStack_150,&uStack_420);
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2d0._4_4_ = 0;
  uStack_2c8 = 0;
  puStack_290 = &uStack_2c8;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2d0._0_4_ = 0x42ff0005;
  puStack_288 = &uStack_280;
  func_0x000109390e94(&uStack_2d0,&uStack_f0);
  FUN_10a6c02f0(&uStack_3c0,&uStack_2d0);
  if (lStack_298 != 0) {
    piVar1 = (int *)(lStack_298 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d0);
    }
  }
  lStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  if (0 < uStack_2d0._4_4_) {
    lVar20 = 0;
    do {
      puStack_290[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_2d0._4_4_);
  }
  if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
    _free(puStack_288[-1]);
  }
  if (lStack_b8 != 0) {
    piVar1 = (int *)(lStack_b8 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_f0);
    }
  }
  lStack_b8 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (0 < uStack_f0._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(lStack_b0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_f0._4_4_);
  }
  if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_a8 + -8));
  }
  aiStack_150[0] = 0x2a;
  aiStack_150[1] = 0x30;
  uStack_420 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_f0,&uStack_740,aiStack_150,&uStack_420);
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2d0._4_4_ = 0;
  uStack_2c8 = 0;
  puStack_290 = &uStack_2c8;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2d0._0_4_ = 0x42ff0005;
  puStack_288 = &uStack_280;
  func_0x000109390e94(&uStack_2d0,&uStack_f0);
  FUN_10a6c02f0(&uStack_3c0,&uStack_2d0);
  if (lStack_298 != 0) {
    piVar1 = (int *)(lStack_298 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d0);
    }
  }
  lStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  if (0 < uStack_2d0._4_4_) {
    lVar20 = 0;
    do {
      puStack_290[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_2d0._4_4_);
  }
  if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
    _free(puStack_288[-1]);
  }
  if (lStack_b8 != 0) {
    piVar1 = (int *)(lStack_b8 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_f0);
    }
  }
  lStack_b8 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (0 < uStack_f0._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(lStack_b0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_f0._4_4_);
  }
  if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_a8 + -8));
  }
  FUN_109fed894(&uStack_300,&uStack_3c0);
  aiStack_150[0] = 0x80;
  aiStack_150[1] = 0x80;
  func_0x000109a829e8(&uStack_2d0,aiStack_150,0);
  FUN_10a003124(&uStack_420,&uStack_2d0);
  func_0x00010918eb6c(&uStack_2d0);
  puStack_e8 = (undefined8 *)0x1e0000001d;
  uStack_f0 = 0x1c0000001b;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,0x21);
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2d0._0_4_ = 0;
  uStack_2d0._4_4_ = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  FUN_10a14d944(&uStack_2d0,&uStack_f0,(long)&uStack_e0 + 4,5);
  FUN_10a6c04d8(&uStack_420,&uStack_740,3,CONCAT44(uStack_2d0._4_4_,(uint)uStack_2d0),
                CONCAT44(uStack_2c4,uStack_2c8));
  if (CONCAT44(uStack_2d0._4_4_,(uint)uStack_2d0) != 0) {
    uStack_2c8 = (uint)uStack_2d0;
    uStack_2c4 = uStack_2d0._4_4_;
    __ZdlPv();
  }
  FUN_109fed894(&uStack_300,&uStack_420);
  aiStack_150[0] = 0x80;
  aiStack_150[1] = 0x80;
  func_0x000109a829e8(&uStack_2d0,aiStack_150,0);
  FUN_10a003124(auStack_480,&uStack_2d0);
  func_0x00010918eb6c(&uStack_2d0);
  aiStack_150[0] = 0x3c;
  aiStack_150[1] = 0x44;
  uStack_4e0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_f0,&uStack_740,aiStack_150,&uStack_4e0);
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2d0._4_4_ = 0;
  uStack_2c8 = 0;
  puStack_290 = &uStack_2c8;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2d0._0_4_ = 0x42ff0005;
  puStack_288 = &uStack_280;
  func_0x000109390e94(&uStack_2d0,&uStack_f0);
  FUN_10a6c02f0(auStack_480,&uStack_2d0);
  if (lStack_298 != 0) {
    piVar1 = (int *)(lStack_298 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d0);
    }
  }
  lStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  if (0 < uStack_2d0._4_4_) {
    lVar20 = 0;
    do {
      puStack_290[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_2d0._4_4_);
  }
  if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
    _free(puStack_288[-1]);
  }
  if (lStack_b8 != 0) {
    piVar1 = (int *)(lStack_b8 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_f0);
    }
  }
  lStack_b8 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (0 < uStack_f0._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(lStack_b0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_f0._4_4_);
  }
  if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_a8 + -8));
  }
  FUN_109fed894(&uStack_300,auStack_480);
  aiStack_150[0] = 0x80;
  aiStack_150[1] = 0x80;
  func_0x000109a829e8(&uStack_2d0,aiStack_150,0);
  lStack_7d0 = lVar25;
  FUN_10a003124(&uStack_4e0,&uStack_2d0);
  func_0x00010918eb6c(&uStack_2d0);
  lVar25 = 0;
  aiStack_150[0] = 0x13;
  aiStack_150[1] = 0x18;
  do {
    uStack_f0 = CONCAT44(uStack_f0._4_4_,0x83010000);
    uStack_e0 = 0;
    uVar33 = *(undefined8 *)(lStack_730 + *plStack_6f8 * (long)*(int *)((long)aiStack_150 + lVar25))
    ;
    iStack_540 = (int)(float)uVar33;
    iStack_53c = (int)(float)((ulong)uVar33 >> 0x20);
    uStack_2d0._0_4_ = 0;
    uStack_2d0._4_4_ = 0x406fe000;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_2b4 = 0;
    uStack_2c8 = 0;
    uStack_2c4 = 0;
    puStack_e8 = &uStack_4e0;
    func_0x000109aee350(&uStack_f0,&iStack_540,3,&uStack_2d0,0xffffffff,8,0);
    lVar25 = lVar25 + 4;
  } while (lVar25 != 8);
  FUN_109fed894(&uStack_300,&uStack_4e0);
  if (lRam00000001137eb8f8 == lRam00000001137eb8f0) {
    FUN_10a6c19c8();
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6ce5bc);
    (*pcVar7)();
  }
  FUN_10a6c1790(&uStack_2d0,0x80,0x80,&uStack_740);
  uStack_5a0 = CONCAT44(uStack_2d0._4_4_,(uint)uStack_2d0);
  uStack_598 = CONCAT44(uStack_2c4,uStack_2c8);
  puStack_560 = (uint *)((ulong)&uStack_5a0 | 8);
  uStack_588 = CONCAT44(uStack_2b4,uStack_2b8);
  uStack_590 = CONCAT44(uStack_2bc,uStack_2c0);
  uStack_578 = CONCAT44(uStack_2a4,uStack_2a8);
  uStack_580 = CONCAT44(uStack_2ac,uStack_2b0);
  uStack_570 = CONCAT44(uStack_29c,uStack_2a0);
  lStack_568 = lStack_298;
  uStack_548 = 0;
  uStack_550 = 0;
  if (uStack_2d0._4_4_ < 3) {
    puVar22 = (undefined8 *)((ulong)&uStack_2d0 | 4);
    uStack_550 = *puStack_288;
    uStack_548 = puStack_288[1];
    uStack_2d0._0_4_ = 0x42ff0000;
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar22[3] = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    puVar22[4] = 0;
    *(undefined8 *)((long)puVar22 + 0x34) = 0;
    *(undefined8 *)((long)puVar22 + 0x2c) = 0;
    puStack_558 = &uStack_550;
    if (puStack_288 != &uStack_280) {
      _free(puStack_288[-1]);
    }
  }
  else {
    puStack_558 = puStack_288;
    puStack_560 = puStack_290;
  }
  aiStack_150[0] = 0;
  aiStack_150[1] = 1;
  uStack_2e8 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_f0,&uStack_740,aiStack_150,&uStack_2e8);
  uStack_2e8 = 0x1100000010;
  uStack_158 = 0x7fffffff80000000;
  func_0x000109a84930(aiStack_150,&uStack_740,&uStack_2e8,&uStack_158);
  puVar22 = &uStack_f0;
  func_0x000109a7cd1c(&uStack_2d0,puVar22,aiStack_150);
  uStack_160 = 0;
  uStack_170 = CONCAT44(uStack_170._4_4_,0xc1060000);
  puStack_168 = &uStack_2d0;
  func_0x000109a91d90();
  dVar34 = (double)func_0x000109ab9654(&uStack_170,4,puVar22);
  dVar36 = 128.0;
  if (dVar34 <= 128.0) {
    dVar36 = dVar34;
  }
  func_0x00010918eb6c(&uStack_2d0);
  if (lStack_118 != 0) {
    piVar1 = (int *)(lStack_118 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(aiStack_150);
    }
  }
  lStack_118 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (0 < aiStack_150[1]) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_110 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < aiStack_150[1]);
  }
  if (puStack_108 != auStack_100 && puStack_108 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_108 + -8));
  }
  if (lStack_b8 != 0) {
    piVar1 = (int *)(lStack_b8 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_f0);
    }
  }
  lStack_b8 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (0 < uStack_f0._4_4_) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_b0 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < uStack_f0._4_4_);
  }
  if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_a8 + -8));
  }
  aiStack_150[0] = 3;
  aiStack_150[1] = 3;
  uStack_170 = 0xffffffffffffffff;
  puVar22 = &uStack_2d0;
  func_0x000109b32bf8(&uStack_2d0,2,aiStack_150,&uStack_170);
  iVar18 = (int)(dVar36 * 0.12);
  if (iVar18 < 2) {
    iVar18 = 1;
  }
  uStack_140 = 0;
  uVar33 = 0x1010000;
  aiStack_150[0] = 0x1010000;
  puVar27 = &uStack_5a0;
  uStack_170 = CONCAT44(uStack_170._4_4_,0x2010000);
  uStack_160 = 0;
  uStack_2d8 = 0;
  uStack_2e8 = CONCAT44(uStack_2e8._4_4_,0x1010000);
  puStack_e8 = (undefined8 *)0x7fefffffffffffff;
  uStack_f0 = 0x7fefffffffffffff;
  uStack_d8 = 0x7fefffffffffffff;
  uStack_e0 = 0x7fefffffffffffff;
  uStack_158 = 0xffffffffffffffff;
  puStack_2e0 = puVar22;
  puStack_168 = puVar27;
  puStack_148 = puVar27;
  func_0x000109b32fd4(1,aiStack_150,&uStack_170,&uStack_2e8,&uStack_158,iVar18,0,&uStack_f0);
  uStack_e0 = 0;
  uStack_f0._0_4_ = 0x1010000;
  aiStack_150[0] = 0x2010000;
  uStack_140 = 0;
  uStack_170 = 0;
  uVar17 = 0;
  puStack_148 = puVar27;
  puStack_e8 = puVar27;
  func_0x000109b44a6c(dVar36 * 0.09,dVar36 * 0.09,&uStack_f0,aiStack_150,&uStack_170,0);
  plVar10 = plStack_7c8;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,0x2010000);
  puStack_e8 = &uStack_5a0;
  uStack_e0 = 0;
  func_0x000109a41858(0x4010000000000000,0xc073200000000000,&uStack_5a0,&uStack_f0,0);
  if (lStack_298 != 0) {
    piVar1 = (int *)(lStack_298 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d0);
    }
  }
  lStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  if (0 < uStack_2d0._4_4_) {
    lVar25 = 0;
    do {
      puStack_290[lVar25] = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < uStack_2d0._4_4_);
  }
  if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
    _free(puStack_288[-1]);
  }
  uStack_534 = 0;
  uStack_530 = 0;
  iStack_53c = 0;
  uStack_538 = 0;
  puStack_500 = &uStack_538;
  uStack_524 = 0;
  uStack_520 = 0;
  uStack_52c = 0;
  uStack_528 = 0;
  uStack_514 = 0;
  uStack_51c = 0;
  uStack_518 = 0;
  lStack_508 = 0;
  uStack_510 = 0;
  uStack_50c = 0;
  puVar31 = &uStack_4f0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  iStack_540 = 0x42ff0000;
  puStack_4f8 = puVar31;
  func_0x0001093910bc(&iStack_540,&uStack_5a0);
  if (lStack_568 != 0) {
    piVar1 = (int *)(lStack_568 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_5a0);
    }
  }
  lStack_568 = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  if (0 < uStack_5a0._4_4_) {
    lVar25 = 0;
    do {
      puStack_560[lVar25] = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < uStack_5a0._4_4_);
  }
  if (puStack_558 != &uStack_550 && puStack_558 != (undefined8 *)0x0) {
    _free(puStack_558[-1]);
  }
  FUN_109fed894(&uStack_300,&iStack_540);
  uStack_2c8 = 0x80;
  uStack_2c4 = 0x80;
  uStack_2d0 = &uStack_300;
  FUN_10a6c146c(&uStack_2d0,&uStack_6e0);
  FUN_10a6c146c(&uStack_2d0,&uStack_740);
  FUN_10a6c05fc(auStack_678,uStack_300,uStack_2f8);
  puVar6 = uStack_2d0;
  if (lStack_508 != 0) {
    piVar1 = (int *)(lStack_508 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&iStack_540);
      puVar6 = uStack_2d0;
    }
  }
  lStack_508 = 0;
  uStack_528 = 0;
  uStack_524 = 0;
  uStack_530 = 0;
  uStack_52c = 0;
  uStack_518 = 0;
  uStack_514 = 0;
  uStack_520 = 0;
  uStack_51c = 0;
  if (0 < iStack_53c) {
    lVar25 = 0;
    do {
      puStack_500[lVar25] = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iStack_53c);
  }
  uStack_2d0 = puVar6;
  if (puStack_4f8 != puVar31 && puStack_4f8 != (undefined8 *)0x0) {
    _free(puStack_4f8[-1]);
  }
  if (lStack_4a8 != 0) {
    piVar1 = (int *)(lStack_4a8 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_4e0);
    }
  }
  lStack_4a8 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  if (0 < uStack_4e0._4_4_) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_4a0 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < uStack_4e0._4_4_);
  }
  if (puStack_498 != auStack_490 && puStack_498 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_498 + -8));
  }
  if (lStack_448 != 0) {
    piVar1 = (int *)(lStack_448 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(auStack_480);
    }
  }
  lStack_448 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  if (0 < iStack_47c) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_440 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iStack_47c);
  }
  if (puStack_438 != auStack_430 && puStack_438 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_438 + -8));
  }
  if (lStack_3e8 != 0) {
    piVar1 = (int *)(lStack_3e8 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_420);
    }
  }
  lStack_3e8 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  if (0 < uStack_420._4_4_) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_3e0 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < uStack_420._4_4_);
  }
  if (puStack_3d8 != auStack_3d0 && puStack_3d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_3d8 + -8));
  }
  if (lStack_388 != 0) {
    piVar1 = (int *)(lStack_388 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_3c0);
    }
  }
  lStack_388 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  if (0 < uStack_3c0._4_4_) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_380 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < uStack_3c0._4_4_);
  }
  if (puStack_378 != auStack_370 && puStack_378 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_378 + -8));
  }
  if (lStack_328 != 0) {
    piVar1 = (int *)(lStack_328 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(auStack_360);
    }
  }
  lStack_328 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  if (0 < iStack_35c) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_320 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iStack_35c);
  }
  if (puStack_318 != auStack_310 && puStack_318 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_318 + -8));
  }
  uStack_2d0 = &uStack_300;
  FUN_109ffe3e8(&uStack_2d0);
  auStack_618[0] = 0x1010000;
  puStack_610 = auStack_678;
  uStack_608 = 0;
  FUN_10a0f4340(&uStack_600,auStack_618,5);
  if (lStack_640 != 0) {
    piVar1 = (int *)(lStack_640 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(auStack_678);
    }
  }
  lStack_640 = 0;
  uStack_660 = 0;
  uStack_668 = 0;
  uStack_650 = 0;
  uStack_658 = 0;
  if (0 < iStack_674) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_638 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iStack_674);
  }
  if (puStack_630 != auStack_628 && puStack_630 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_630 + -8));
  }
  if (lStack_6a8 != 0) {
    piVar1 = (int *)(lStack_6a8 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_6e0);
    }
  }
  lStack_6a8 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  uStack_6b8 = 0;
  uStack_6c0 = 0;
  if (0 < uStack_6e0._4_4_) {
    lVar25 = 0;
    do {
      *(undefined4 *)(uStack_6a0 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < uStack_6e0._4_4_);
  }
  if (puStack_698 != puVar23 && puStack_698 != (undefined8 *)0x0) {
    _free(puStack_698[-1]);
  }
  uVar16 = *(undefined8 *)(lStack_7d0 + 0x870);
  puVar12 = (uint *)&uStack_2d0;
  FUN_10a6b28e4(puVar12,uVar16,&uStack_600);
  iVar18 = (int)uVar16;
  if (lStack_5c8 != 0) {
    piVar1 = (int *)(lStack_5c8 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      puVar12 = &uStack_600;
      func_0x000109a848d4();
    }
  }
  lStack_5c8 = 0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  if (0 < iStack_5fc) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_5c0 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iStack_5fc);
  }
  if (puStack_5b8 != auStack_5b0 && puStack_5b8 != (undefined1 *)0x0) {
    puVar12 = *(uint **)(puStack_5b8 + -8);
    _free();
  }
  if (lStack_768 != 0) {
    piVar1 = (int *)(lStack_768 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      puVar12 = &uStack_7a0;
      func_0x000109a848d4();
    }
  }
  lStack_768 = 0;
  uStack_788 = 0;
  uStack_790 = 0;
  uStack_778 = 0;
  uStack_780 = 0;
  if (0 < iStack_79c) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_760 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iStack_79c);
  }
  if (puStack_758 != auStack_750 && puStack_758 != (undefined8 *)0x0) {
    puVar12 = (uint *)puStack_758[-1];
    _free();
  }
  if (lStack_708 != 0) {
    piVar1 = (int *)(lStack_708 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      puVar12 = &uStack_740;
      func_0x000109a848d4();
    }
  }
  lStack_708 = 0;
  uStack_728 = 0;
  lStack_730 = 0;
  uStack_718 = 0;
  uStack_720 = 0;
  if (0 < iStack_73c) {
    lVar25 = 0;
    do {
      *(undefined4 *)(lStack_700 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iStack_73c);
  }
  if (plStack_6f8 != alStack_6f0 && plStack_6f8 != (long *)0x0) {
    puVar12 = (uint *)plStack_6f8[-1];
    _free();
  }
  if (puStack_7b8 != (uint *)0x0) {
    puVar13 = puStack_7b8 + 2;
    do {
      lVar25 = *(long *)puVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar5) {
        *(long *)puVar13 = lVar25 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*(long *)puStack_7b8 + 0x10))(puStack_7b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      puVar12 = puStack_7b8;
    }
  }
  if (puStack_7a8 != (uint *)0x0) {
    puVar13 = puStack_7a8 + 2;
    do {
      lVar25 = *(long *)puVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar5) {
        *(long *)puVar13 = lVar25 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*(long *)puStack_7a8 + 0x10))(puStack_7a8);
      puVar12 = puStack_7a8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (uStack_2d0 == (undefined8 *)0x0) {
    *param_1 = 1;
  }
  else {
    puVar12 = param_1;
    plVar11 = param_2;
    func_0x0001098849a4(param_1,param_2,uStack_2d0[2]);
    iVar18 = (int)plVar11;
  }
  puVar13 = (uint *)CONCAT44(uStack_2c4,uStack_2c8);
  if (puVar13 != (uint *)0x0) {
    puVar2 = puVar13 + 2;
    do {
      lVar25 = *(long *)puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *(long *)puVar2 = lVar25 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*(long *)puVar13 + 0x10))(puVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      puVar12 = puVar13;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    plVar11 = plVar10 + 0x4b;
    ppuVar8 = (undefined1 **)register0x00000008;
    puVar23 = unaff_x19;
    puVar12 = unaff_x20;
    param_2 = unaff_x21;
    puVar27 = unaff_x23;
    plVar10 = unaff_x24;
    param_1 = unaff_x25;
    uVar33 = unaff_x26;
    puVar22 = unaff_x27;
    puVar31 = unaff_x28;
    puVar32 = unaff_x29;
  }
  else {
    ___stack_chk_fail();
    if (iVar18 == 0) {
      puVar13 = puVar12;
      __Unwind_Resume();
      if ((int)puVar13 == 2) {
        return;
      }
      ppuVar8 = &puStack_7e0;
      pcStack_7d8 = FUN_10a6ce8c0;
      plVar14 = (long *)0x2;
      uVar16 = 0;
      puStack_7e0 = puVar32;
      FUN_10a052ee0(2,0,puVar13);
      plStack_820 = plVar10;
      puStack_810 = puStack_7a8;
      pcStack_7e8 = FUN_10a6ce8e4;
      plVar11 = plVar14;
      puStack_818 = puVar27;
      plStack_808 = param_2;
      puStack_800 = puVar12;
      puStack_7f8 = puVar23;
      puStack_7f0 = (undefined1 *)&puStack_7e0;
      (**(code **)(*plVar14 + 0x58))();
      if ((ulong)plVar11[0x59] < 8) {
        plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
        plVar11[0x59] = plVar11[0x59] + 1;
      }
      else {
        func_0x00010988bfcc(plVar11 + 0x4b);
      }
      plVar10 = plVar14;
      FUN_10a6ca450(plVar14,uVar16);
      FUN_10a6cea70(uVar17);
      plVar15 = plVar14;
      FUN_10a373c54(plVar14,puVar13);
      FUN_10a1f7d54(auStack_830,plVar14,puVar13 + 4);
      FUN_10a6b6564(&lStack_840,plVar10,plVar15,auStack_830);
      if (plStack_828 != (long *)0x0) {
        plVar10 = plStack_828 + 1;
        do {
          lVar25 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar25 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plStack_828 + 0x10))(plStack_828);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_828);
        }
      }
      if (lStack_840 == 0) {
        *extraout_x8 = 1;
      }
      else {
        func_0x0001098849a4(extraout_x8,plVar14,*(undefined8 *)(lStack_840 + 0x10));
      }
      if (plStack_838 != (long *)0x0) {
        plVar10 = plStack_838 + 1;
        do {
          lVar25 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar25 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plStack_838 + 0x10))(plStack_838);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_838);
        }
      }
      plVar11 = plVar11 + 0x4b;
      puVar23 = puStack_7f8;
      puVar12 = puStack_800;
      param_2 = plStack_808;
      unaff_x22 = puStack_810;
      puVar27 = puStack_818;
      plVar10 = plStack_820;
      puVar32 = puStack_7f0;
      unaff_x30 = pcStack_7e8;
    }
    else {
      func_0x000104bd46a0();
      func_0x00010938f90c(&uStack_7a0);
      func_0x00010938f90c(&uStack_740);
      func_0x00010a140010(auStack_7c0);
      func_0x00010a140010(auStack_7b0);
      plVar11 = plStack_7c8 + 0x4b;
      unaff_x30 = (code *)0x10a6ce8b8;
      unaff_x22 = puStack_7a8;
    }
  }
  lVar25 = plVar11[0xe];
  uVar19 = lVar25 - 1;
  plVar11[0xe] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar11[lVar25 + 2];
    if (plVar11[0xf] == uVar19) {
      return;
    }
  }
  else {
    uVar19 = *(ulong *)(plVar11[0xc] + -8);
    plVar11[0xc] = plVar11[0xc] + -8;
    if (plVar11[0xf] == uVar19) {
      return;
    }
  }
  *(undefined8 **)((long)ppuVar8 + -0x60) = puVar31;
  *(undefined8 **)((long)ppuVar8 + -0x58) = puVar22;
  *(undefined8 *)((long)ppuVar8 + -0x50) = uVar33;
  *(uint **)((long)ppuVar8 + -0x48) = param_1;
  *(long **)((long)ppuVar8 + -0x40) = plVar10;
  *(undefined8 **)((long)ppuVar8 + -0x38) = puVar27;
  *(uint **)((long)ppuVar8 + -0x30) = unaff_x22;
  *(long **)((long)ppuVar8 + -0x28) = param_2;
  *(uint **)((long)ppuVar8 + -0x20) = puVar12;
  *(undefined8 **)((long)ppuVar8 + -0x18) = puVar23;
  *(undefined1 **)((long)ppuVar8 + -0x10) = puVar32;
  *(code **)((long)ppuVar8 + -8) = unaff_x30;
  lVar25 = *plVar11;
  lVar20 = plVar11[1];
  lVar24 = lVar20 - lVar25;
  uVar29 = lVar24 >> 4;
  if (uVar29 < uVar19) {
    uVar30 = uVar19 - uVar29;
    lVar28 = plVar11[2];
    if ((ulong)(lVar28 - lVar20 >> 4) < uVar30) {
      if (uVar19 >> 0x3c == 0) {
        uVar21 = lVar28 - lVar25 >> 3;
        if (uVar21 <= uVar19) {
          uVar21 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar28 - lVar25)) {
          uVar21 = 0xfffffffffffffff;
        }
        *(long **)((long)ppuVar8 + -0x68) = plVar11;
        if (uVar21 >> 0x3c == 0) {
          lVar9 = uVar21 << 4;
          __Znwm();
          lVar20 = lVar9 + lVar24;
          _bzero(lVar20,uVar30 * 0x10);
          lVar26 = lVar20 + uVar29 * -0x10;
          _memcpy(lVar26,lVar25,lVar24);
          *plVar11 = lVar26;
          plVar11[1] = lVar20 + uVar30 * 0x10;
          plVar11[2] = lVar9 + uVar21 * 0x10;
          *(long *)((long)ppuVar8 + -0x78) = lVar25;
          *(long *)((long)ppuVar8 + -0x70) = lVar28;
          *(long *)((long)ppuVar8 + -0x88) = lVar25;
          *(long *)((long)ppuVar8 + -0x80) = lVar25;
          func_0x00010988c1b8((undefined1 *)((long)ppuVar8 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(lVar20,uVar30 * 0x10);
    plVar11[1] = lVar20 + uVar30 * 0x10;
  }
  else if (uVar19 < uVar29) {
    lVar25 = lVar25 + uVar19 * 0x10;
    while (lVar20 != lVar25) {
      lVar20 = lVar20 + -0x10;
      func_0x00010988c204(lVar20);
    }
    plVar11[1] = lVar25;
  }
code_r0x00010988c138:
  plVar11[0xf] = uVar19;
  return;
}



/* Entry: 10a6ce8c0; end: 10a6ce8e3;  */

void FUN_10a6ce8c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long in_stack_ffffffffffffff90;
  long *in_stack_ffffffffffffff98;
  long *in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar5 = (long *)0x2;
  uVar9 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a6ca450(plVar5,uVar9);
  FUN_10a6cea70(param_4);
  plVar8 = plVar5;
  FUN_10a373c54(plVar5,param_1);
  FUN_10a1f7d54(&stack0xffffffffffffffa0,plVar5,param_1 + 0x10);
  FUN_10a6b6564(&stack0xffffffffffffff90,plVar7,plVar8,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar12 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  if (in_stack_ffffffffffffff90 == 0) {
    *extraout_x8 = 1;
  }
  else {
    func_0x0001098849a4(extraout_x8,plVar5,*(undefined8 *)(in_stack_ffffffffffffff90 + 0x10));
  }
  if (in_stack_ffffffffffffff98 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffff98 + 1;
    do {
      lVar12 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*in_stack_ffffffffffffff98 + 0x10))(in_stack_ffffffffffffff98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff98);
    }
  }
  plVar5 = plVar6 + 0x4b;
  lVar12 = plVar6[0x59];
  uVar10 = lVar12 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar5[lVar12 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar12 = *plVar5;
  lVar15 = plVar6[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar6[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_78 = plVar5;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar4 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar5 = lVar14;
          plVar6[0x4c] = lVar15 + uVar18 * 0x10;
          plVar6[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_98 = lVar12;
          lStack_90 = lVar12;
          lStack_88 = lVar12;
          lStack_80 = lVar16;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar15,uVar18 * 0x10);
    plVar6[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar10 < uVar17) {
    lVar12 = lVar12 + uVar10 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar6[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a6ce8e4; end: 10a6cea6f;  */

void FUN_10a6ce8e4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6cea70(param_5);
  plVar7 = param_2;
  FUN_10a373c54(param_2,param_4);
  FUN_10a1f7d54(&stack0xffffffffffffffb0,param_2,param_4 + 0x10);
  FUN_10a6b6564(&stack0xffffffffffffffa0,plVar6,plVar7,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  if (in_stack_ffffffffffffffa0 == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(in_stack_ffffffffffffffa0 + 0x10));
  }
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar6;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a6cea70; end: 10a6cea93;  */

void FUN_10a6cea70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar5 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6ccde0(extraout_x8,plVar3,FUN_10a6b7304,0,uVar5,param_1,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a6cea94; end: 10a6ceb4b;  */

void FUN_10a6cea94(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6ccde0(param_1,param_2,FUN_10a6b7304,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6ceb4c; end: 10a6cec03;  */

void FUN_10a6ceb4c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6ccde0(param_1,param_2,FUN_10a6b75ac,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6cec04; end: 10a6cf0c3;  */

void FUN_10a6cec04(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long lStack_2c0;
  long *plStack_2b8;
  undefined1 auStack_2b0 [8];
  long *plStack_2a8;
  undefined1 auStack_2a0 [4];
  int iStack_29c;
  int iStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_268;
  long lStack_260;
  long *plStack_258;
  long alStack_250 [2];
  undefined4 auStack_240 [2];
  undefined4 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 auStack_1d8 [272];
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar8 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar8 + 0xb2) < 8) {
    *(long *)(pfVar8 + *(ulong *)(pfVar8 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar8 + 0xb4);
    *(long *)(pfVar8 + 0xb2) = *(long *)(pfVar8 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar8 + 0x96);
  }
  pfVar9 = param_2;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6cf0c4(param_5);
  FUN_10a1f7d54(auStack_2b0,param_2,param_4);
  pfVar10 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x10);
  pfVar11 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  lVar18 = *(long *)(pfVar9 + 6);
  FUN_10a6b6384(auStack_2a0,auStack_2b0,0);
  func_0x000109a8261c(&uStack_228,(int)pfVar10[1],(int)*pfVar10,0);
  uStack_c8 = 0x42ff0000;
  lStack_88 = (long)&uStack_c4 + 4;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  lStack_90 = 0;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  plStack_80 = &lStack_78;
  (**(code **)(*uStack_228 + 0x18))(uStack_228,&uStack_228,&uStack_c8,0xffffffff);
  func_0x00010918eb6c(&uStack_228);
  if (0 < iStack_298) {
    lVar20 = 0;
    do {
      uVar21 = *(undefined8 *)(lStack_290 + *plStack_258 * lVar20);
      auStack_240[0] = 0x3010000;
      uStack_230 = 0;
      lStack_2c0 = CONCAT44((int)(float)(int)(float)((ulong)uVar21 >> 0x20),
                            (int)(float)(int)(float)uVar21);
      uStack_228 = (long *)0x406fe00000000000;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_220 = 0;
      puStack_238 = &uStack_c8;
      func_0x000109aee350(auStack_240,&lStack_2c0,pfVar11,&uStack_228,0xffffffff,8,0);
      lVar20 = lVar20 + 1;
    } while (lVar20 < iStack_298);
  }
  uVar21 = *(undefined8 *)(lVar18 + 0x870);
  auStack_240[0] = 0x1010000;
  puStack_238 = &uStack_c8;
  uStack_230 = 0;
  FUN_10a0f4340(&uStack_228,auStack_240,5);
  FUN_10a6b28e4(&lStack_2c0,uVar21,&uStack_228);
  if (lStack_1f0 != 0) {
    piVar1 = (int *)(lStack_1f0 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_228);
    }
  }
  lStack_1f0 = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  if (0 < uStack_228._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_1e8 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_228._4_4_);
  }
  if (puStack_1e0 != auStack_1d8 && puStack_1e0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1e0 + -8));
  }
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  if (0 < (int)uStack_c4) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_88 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_c4);
  }
  if (plStack_80 != &lStack_78 && plStack_80 != (long *)0x0) {
    _free(plStack_80[-1]);
  }
  if (lStack_268 != 0) {
    piVar1 = (int *)(lStack_268 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(auStack_2a0);
    }
  }
  lStack_268 = 0;
  uStack_288 = 0;
  lStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  if (0 < iStack_29c) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_260 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < iStack_29c);
  }
  if (plStack_258 != alStack_250 && plStack_258 != (long *)0x0) {
    _free(plStack_258[-1]);
  }
  if (plStack_2a8 != (long *)0x0) {
    plVar2 = plStack_2a8 + 1;
    do {
      lVar18 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2a8);
    }
  }
  if (lStack_2c0 == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(lStack_2c0 + 0x10));
  }
  if (plStack_2b8 != (long *)0x0) {
    plVar2 = plStack_2b8 + 1;
    do {
      lVar18 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b8);
    }
  }
  pfVar9 = pfVar8 + 0x96;
  uVar12 = *(long *)(pfVar8 + 0xb2) - 1;
  *(ulong *)(pfVar8 + 0xb2) = uVar12;
  if (uVar12 < 8) {
    uVar12 = *(ulong *)(pfVar9 + uVar12 * 2 + 6);
    if (*(ulong *)(pfVar8 + 0xb4) == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(*(long *)(pfVar8 + 0xae) + -8);
    *(ulong **)(pfVar8 + 0xae) = (ulong *)(*(long *)(pfVar8 + 0xae) + -8);
    if (*(ulong *)(pfVar8 + 0xb4) == uVar12) {
      return;
    }
  }
  lVar18 = *(long *)pfVar9;
  lVar20 = *(long *)(pfVar8 + 0x98);
  lVar14 = lVar20 - lVar18;
  uVar17 = lVar14 >> 4;
  if (uVar17 < uVar12) {
    uVar19 = uVar12 - uVar17;
    lVar16 = *(long *)(pfVar8 + 0x9a);
    if ((ulong)(lVar16 - lVar20 >> 4) < uVar19) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar16 - lVar18 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar18)) {
          uVar13 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar9;
        if (uVar13 >> 0x3c == 0) {
          lVar7 = uVar13 << 4;
          __Znwm();
          lVar20 = lVar7 + lVar14;
          _bzero(lVar20,uVar19 * 0x10);
          lVar15 = lVar20 + uVar17 * -0x10;
          _memcpy(lVar15,lVar18,lVar14);
          *(long *)pfVar9 = lVar15;
          *(ulong *)(pfVar8 + 0x98) = lVar20 + uVar19 * 0x10;
          *(ulong *)(pfVar8 + 0x9a) = lVar7 + uVar13 * 0x10;
          lStack_88 = lVar18;
          plStack_80 = (long *)lVar18;
          lStack_78 = lVar18;
          lStack_70 = lVar16;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(lVar20,uVar19 * 0x10);
    *(ulong *)(pfVar8 + 0x98) = lVar20 + uVar19 * 0x10;
  }
  else if (uVar12 < uVar17) {
    lVar18 = lVar18 + uVar12 * 0x10;
    while (lVar20 != lVar18) {
      lVar20 = lVar20 + -0x10;
      func_0x00010988c204(lVar20);
    }
    *(long *)(pfVar8 + 0x98) = lVar18;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar8 + 0xb4) = uVar12;
  return;
}



/* Entry: 10a6cf0c4; end: 10a6cf0e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a6d06cc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a6cf0c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  int *piVar2;
  long *******ppppppplVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  long *******ppppppplVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *pcVar12;
  bool bVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *******ppppppplVar18;
  char *pcVar19;
  char **ppcVar20;
  char ***pppcVar21;
  long *******ppppppplVar22;
  long *******ppppppplVar23;
  undefined8 uVar24;
  uint uVar25;
  undefined8 extraout_x8;
  long lVar26;
  ulong uVar27;
  long *******ppppppplVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long *******ppppppplVar32;
  ulong uVar33;
  long *******ppppppplVar34;
  undefined8 *puVar35;
  ulong uVar36;
  long lVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  long ******pppppplVar40;
  long lVar41;
  long *******ppppppplVar42;
  long *******ppppppplVar43;
  long lVar44;
  long *******ppppppplVar45;
  long *******ppppppplVar46;
  long ******pppppplVar47;
  long lVar48;
  long *******ppppppplVar49;
  long *******ppppppplVar50;
  long *******ppppppplVar51;
  long *plStack_308;
  long *plStack_300;
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long *******ppppppplStack_2d8;
  long ******pppppplStack_2d0;
  undefined4 uStack_2c8;
  undefined3 uStack_2c4;
  char **ppcStack_2c0;
  char *pcStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  char **ppcStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long *******ppppppplStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  char *pcStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  char *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  char acStack_218 [8];
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined8 uStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *******ppppppplStack_1a0;
  undefined8 uStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long *******ppppppplStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  undefined4 *puStack_108;
  long *plStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long lStack_d8;
  long ******pppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar15 = (long *)0x3;
  uVar24 = 0;
  FUN_10a052ee0(3,0);
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = plVar15;
  (**(code **)(*plVar15 + 0x58))();
  if ((ulong)plVar16[0x59] < 8) {
    plVar16[plVar16[0x59] + 0x4e] = plVar16[0x5a];
    plVar16[0x59] = plVar16[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar16 + 0x4b);
  }
  plVar17 = plVar15;
  FUN_10a6ca450(plVar15,uVar24);
  FUN_10a6d0f48(param_4);
  func_0x000109898570(auStack_2f0,plVar15,param_1);
  FUN_10a6d0f6c(&plStack_308,plVar15,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18)
               );
  pppppplVar40 = (long ******)plVar17[3];
  ppppppplVar18 = (long *******)0x98;
  __Znwm();
  ppppppplVar18[1] = (long ******)0x0;
  ppppppplVar18[2] = (long ******)0x0;
  ppppppplVar18[4] = (long ******)0x0;
  ppppppplVar18[3] = (long ******)&PTR_FUN_110c10038;
  *ppppppplVar18 = (long ******)&PTR_FUN_110c11108;
  ppppppplVar34 = ppppppplVar18 + 7;
  ppppppplVar18[8] = (long ******)0x0;
  *ppppppplVar34 = (long ******)0x0;
  ppppppplVar18[5] = (long ******)0x0;
  ppppppplVar18[6] = pppppplVar40;
  ppppppplVar22 = ppppppplVar18 + 10;
  ppppppplVar51 = ppppppplVar18 + 0xd;
  ppppppplVar18[0xe] = (long ******)0x0;
  *ppppppplVar51 = (long ******)0x0;
  ppppppplVar23 = ppppppplVar18 + 0x10;
  ppppppplVar28 = ppppppplVar18 + 0x11;
  *ppppppplVar28 = (long ******)0x0;
  ppppppplVar18[10] = (long ******)0x0;
  ppppppplVar18[9] = (long ******)0x0;
  ppppppplVar18[0xc] = (long ******)0x0;
  ppppppplVar18[0xb] = (long ******)0x0;
  pcVar19 = (char *)((long)ppppppplVar18 + 0x71);
  pcVar6 = (char *)((long)ppppppplVar18 + 0x79);
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  pcVar6[4] = '\0';
  pcVar6[5] = '\0';
  pcVar6[6] = '\0';
  pcVar6[7] = '\0';
  pcVar19[0] = '\0';
  pcVar19[1] = '\0';
  pcVar19[2] = '\0';
  pcVar19[3] = '\0';
  pcVar19[4] = '\0';
  pcVar19[5] = '\0';
  pcVar19[6] = '\0';
  pcVar19[7] = '\0';
  ppppppplVar18[0x12] = (long ******)0x0;
  ppppppplStack_c8 = (long *******)0x0;
  ppppppplStack_c0 = (long *******)0x0;
  ppppppplStack_b8 = (long *******)0x0;
  if (plStack_308 != plStack_300) {
    puVar35 = (undefined8 *)((ulong)&uStack_1a8 | 4);
    puVar30 = (undefined8 *)((ulong)&uStack_208 | 4);
    plVar17 = plStack_308;
    do {
      lVar44 = *plVar17;
      uStack_1a8 = (long *******)&UNK_10f66d665;
      ppppppplStack_1a0 = (long *******)0x13;
      if (lVar44 == 0) {
        FUN_10a0edfc4(&uStack_1a8);
        goto LAB_10a6d0b60;
      }
      uStack_1a8 = (long *******)0x142ff0000;
      puVar35[1] = 0;
      *puVar35 = 0;
      puVar35[3] = 0;
      puVar35[2] = 0;
      puVar35[5] = 0;
      puVar35[4] = 0;
      *(undefined8 *)((long)puVar35 + 0x34) = 0;
      *(undefined8 *)((long)puVar35 + 0x2c) = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      iStack_144 = 0;
      uStack_140 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_11c = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      lStack_110 = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      lStack_f8 = 0;
      uStack_f0 = 0;
      uStack_148 = 0x42ff0005;
      ppppppplStack_e0 = (long *******)0x0;
      lStack_d8 = 0;
      puVar1 = (uint *)(lVar44 + 0x18);
      pppppplStack_d0 = (long ******)0x0;
      ppppppplStack_168 = (long *******)&ppppppplStack_1a0;
      puStack_160 = &uStack_158;
      puStack_108 = &uStack_140;
      plStack_100 = &lStack_f8;
      ppppppplStack_e8 = (long *******)&ppppppplStack_e0;
      if ((uint *)&uStack_1a8 == puVar1) {
LAB_10a6d0b04:
        uStack_200 = (long *******)0x1e;
        uStack_208 = (undefined **)&UNK_10f66d679;
        FUN_10a0edfc4(&uStack_208);
        goto LAB_10a6d0b60;
      }
      if (*(long *)(lVar44 + 0x50) != 0) {
        piVar2 = (int *)(*(long *)(lVar44 + 0x50) + 0x14);
        do {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lStack_170 != 0) {
          piVar2 = (int *)(lStack_170 + 0x14);
          do {
            iVar4 = *piVar2;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar13) {
              *piVar2 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_1a8);
          }
        }
      }
      lStack_170 = 0;
      ppppppplStack_190 = (long *******)0x0;
      uStack_198 = (long *******)0x0;
      uStack_180 = 0;
      ppppppplStack_188 = (long *******)0x0;
      if (uStack_1a8._4_4_ < 1) {
        uVar25 = *puVar1;
        uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,uVar25);
LAB_10a6cf3c8:
        if (2 < *(int *)(lVar44 + 0x1c)) goto LAB_10a6cf3fc;
        uStack_1a8 = (long *******)CONCAT44(*(int *)(lVar44 + 0x1c),(uint)uStack_1a8);
        ppppppplStack_1a0 = *(long ********)(lVar44 + 0x20);
        puVar31 = *(undefined8 **)(lVar44 + 0x60);
        *puStack_160 = *puVar31;
        puStack_160[1] = puVar31[1];
      }
      else {
        lVar26 = 0;
        do {
          *(undefined4 *)((long)ppppppplStack_168 + lVar26 * 4) = 0;
          lVar26 = lVar26 + 1;
        } while (lVar26 < uStack_1a8._4_4_);
        uVar25 = *puVar1;
        uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,uVar25);
        if (uStack_1a8._4_4_ < 3) goto LAB_10a6cf3c8;
LAB_10a6cf3fc:
        func_0x000109a84868(&uStack_1a8,puVar1);
        uVar25 = (uint)uStack_1a8;
      }
      ppppppplStack_190 = *(long ********)(lVar44 + 0x30);
      uStack_198 = *(long ********)(lVar44 + 0x28);
      uStack_180 = *(undefined8 *)(lVar44 + 0x40);
      ppppppplStack_188 = *(long ********)(lVar44 + 0x38);
      lStack_170 = *(long *)(lVar44 + 0x50);
      uStack_178 = *(undefined8 *)(lVar44 + 0x48);
      uStack_200 = (long *******)0x1e;
      if ((uVar25 & 0xfff) != 0x10) goto LAB_10a6d0b04;
      lVar41 = *plVar17;
      lVar44 = *(long *)(lVar41 + 0x98);
      lVar26 = *(long *)(lVar41 + 0xa0);
      uStack_208 = (undefined **)0x142ff0000;
      puVar30[1] = 0;
      *puVar30 = 0;
      puVar30[3] = 0;
      puVar30[2] = 0;
      puVar30[5] = 0;
      puVar30[4] = 0;
      *(undefined8 *)((long)puVar30 + 0x34) = 0;
      *(undefined8 *)((long)puVar30 + 0x2c) = 0;
      lStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_a8._0_4_ = (undefined4)((ulong)(lVar26 - lVar44) >> 3);
      uStack_a8._4_4_ = 2;
      puStack_1c8 = &uStack_200;
      plStack_1c0 = &lStack_1b8;
      func_0x000109a83fd0(&uStack_208,2,&uStack_a8,5);
      if (lStack_1d0 != 0) {
        piVar2 = (int *)(lStack_1d0 + 0x14);
        do {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (lStack_110 != 0) {
        piVar2 = (int *)(lStack_110 + 0x14);
        do {
          iVar4 = *piVar2;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_148);
        }
      }
      lStack_110 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      if (iStack_144 < 1) {
LAB_10a6cf540:
        uStack_148 = (undefined4)uStack_208;
        if (2 < uStack_208._4_4_) goto LAB_10a6cf574;
        iStack_144 = uStack_208._4_4_;
        uStack_140 = SUB84(uStack_200,0);
        uStack_13c = (undefined4)((ulong)uStack_200 >> 0x20);
        *plStack_100 = *plStack_1c0;
        plStack_100[1] = plStack_1c0[1];
      }
      else {
        lVar44 = 0;
        do {
          puStack_108[lVar44] = 0;
          lVar44 = lVar44 + 1;
        } while (lVar44 < iStack_144);
        if (iStack_144 < 3) goto LAB_10a6cf540;
LAB_10a6cf574:
        uStack_148 = (undefined4)uStack_208;
        func_0x000109a84868(&uStack_148,&uStack_208);
      }
      uStack_130 = SUB84(ppppppplStack_1f0,0);
      uStack_12c = (undefined4)((ulong)ppppppplStack_1f0 >> 0x20);
      uStack_138 = SUB84(ppppppplStack_1f8,0);
      uStack_134 = (undefined4)((ulong)ppppppplStack_1f8 >> 0x20);
      uStack_120 = (undefined4)uStack_1e0;
      uStack_11c = (undefined4)((ulong)uStack_1e0 >> 0x20);
      uStack_128 = SUB84(ppppppplStack_1e8,0);
      uStack_124 = (undefined4)((ulong)ppppppplStack_1e8 >> 0x20);
      lStack_110 = lStack_1d0;
      uStack_118 = (undefined4)uStack_1d8;
      uStack_114 = (undefined4)((ulong)uStack_1d8 >> 0x20);
      if (lStack_1d0 != 0) {
        piVar2 = (int *)(lStack_1d0 + 0x14);
        do {
          iVar4 = *piVar2;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_208);
        }
      }
      lStack_1d0 = 0;
      ppppppplStack_1f0 = (long *******)0x0;
      ppppppplStack_1f8 = (long *******)0x0;
      uStack_1e0 = 0;
      ppppppplStack_1e8 = (long *******)0x0;
      if (0 < uStack_208._4_4_) {
        lVar44 = 0;
        do {
          *(undefined4 *)((long)puStack_1c8 + lVar44 * 4) = 0;
          lVar44 = lVar44 + 1;
        } while (lVar44 < uStack_208._4_4_);
      }
      if (plStack_1c0 != &lStack_1b8 && plStack_1c0 != (long *)0x0) {
        _free(plStack_1c0[-1]);
      }
      lVar44 = *(long *)(lVar41 + 0xa0) - *(long *)(lVar41 + 0x98);
      if (lVar44 != 0) {
        lVar26 = 0;
        lVar44 = lVar44 >> 3;
        lVar37 = *plStack_100;
        puVar38 = (undefined4 *)(*(long *)(lVar41 + 0x98) + 4);
        do {
          puVar39 = (undefined4 *)(CONCAT44(uStack_134,uStack_138) + (lVar26 >> 0x20) * lVar37);
          *puVar39 = puVar38[-1];
          puVar39[1] = *puVar38;
          lVar26 = lVar26 + 0x100000000;
          lVar44 = lVar44 + -1;
          puVar38 = puVar38 + 2;
        } while (lVar44 != 0);
      }
      ppppppplVar45 = *(long ********)(*plVar17 + 0xb0);
      if (&ppppppplStack_e8 != (long ********)ppppppplVar45) {
        ppppppplVar49 = (long *******)*ppppppplVar45;
        if (lStack_d8 != 0) {
          ppppppplStack_e0[2] = (long ******)0x0;
          ppppppplStack_e0 = (long *******)0x0;
          lStack_d8 = 0;
          ppppppplVar42 = ppppppplStack_e8;
          if ((long *******)ppppppplStack_e8[1] != (long *******)0x0) {
            ppppppplVar42 = (long *******)ppppppplStack_e8[1];
          }
          uStack_208 = (undefined **)&ppppppplStack_e8;
          uStack_200 = ppppppplVar42;
          ppppppplStack_1f8 = ppppppplVar42;
          ppppppplStack_e8 = (long *******)&ppppppplStack_e0;
          if (ppppppplVar42 != (long *******)0x0) {
            ppppppplVar50 = ppppppplVar42;
            FUN_10a6c8c14();
            uStack_200 = ppppppplVar50;
            do {
              if (ppppppplVar49 == ppppppplVar45 + 1) break;
              *(undefined4 *)(ppppppplVar42 + 4) = *(undefined4 *)(ppppppplVar49 + 4);
              if (ppppppplVar42 != ppppppplVar49) {
                if (ppppppplVar49[0xc] != (long ******)0x0) {
                  piVar2 = (int *)((long)ppppppplVar49[0xc] + 0x14);
                  do {
                    cVar5 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar13) {
                      *piVar2 = *piVar2 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                if (ppppppplVar42[0xc] != (long ******)0x0) {
                  piVar2 = (int *)((long)ppppppplVar42[0xc] + 0x14);
                  do {
                    iVar4 = *piVar2;
                    cVar5 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar13) {
                      *piVar2 = iVar4 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar4 + -1 == 0) {
                    func_0x000109a848d4(ppppppplVar42 + 5);
                  }
                }
                ppppppplVar42[0xc] = (long ******)0x0;
                ppppppplVar42[8] = (long ******)0x0;
                ppppppplVar42[7] = (long ******)0x0;
                ppppppplVar42[10] = (long ******)0x0;
                ppppppplVar42[9] = (long ******)0x0;
                if (*(int *)((long)ppppppplVar42 + 0x2c) < 1) {
                  *(undefined4 *)(ppppppplVar42 + 5) = *(undefined4 *)(ppppppplVar49 + 5);
LAB_10a6cf788:
                  if (2 < *(int *)((long)ppppppplVar49 + 0x2c)) goto LAB_10a6cf7bc;
                  *(int *)((long)ppppppplVar42 + 0x2c) = *(int *)((long)ppppppplVar49 + 0x2c);
                  ppppppplVar42[6] = ppppppplVar49[6];
                  pppppplVar40 = ppppppplVar49[0xe];
                  pppppplVar47 = ppppppplVar42[0xe];
                  *pppppplVar47 = *pppppplVar40;
                  pppppplVar47[1] = pppppplVar40[1];
                }
                else {
                  lVar44 = 0;
                  pppppplVar40 = ppppppplVar42[0xd];
                  do {
                    *(undefined4 *)((long)pppppplVar40 + lVar44 * 4) = 0;
                    lVar44 = lVar44 + 1;
                  } while (lVar44 < *(int *)((long)ppppppplVar42 + 0x2c));
                  *(undefined4 *)(ppppppplVar42 + 5) = *(undefined4 *)(ppppppplVar49 + 5);
                  if (*(int *)((long)ppppppplVar42 + 0x2c) < 3) goto LAB_10a6cf788;
LAB_10a6cf7bc:
                  func_0x000109a84868(ppppppplVar42 + 5,ppppppplVar49 + 5);
                }
                pppppplVar40 = ppppppplVar49[7];
                ppppppplVar42[8] = ppppppplVar49[8];
                ppppppplVar42[7] = pppppplVar40;
                pppppplVar40 = ppppppplVar49[9];
                ppppppplVar42[10] = ppppppplVar49[10];
                ppppppplVar42[9] = pppppplVar40;
                pppppplVar40 = ppppppplVar49[0xb];
                ppppppplVar42[0xc] = ppppppplVar49[0xc];
                ppppppplVar42[0xb] = pppppplVar40;
                ppppppplVar42 = ppppppplStack_1f8;
              }
              ppppppplVar50 = (long *******)&ppppppplStack_e0;
              ppppppplVar32 = (long *******)&ppppppplStack_e0;
              if (ppppppplStack_e0 != (long *******)0x0) {
                ppppppplVar46 = ppppppplStack_e0;
                do {
                  while (ppppppplVar50 = ppppppplVar46,
                        *(uint *)(ppppppplVar42 + 4) < *(uint *)(ppppppplVar50 + 4)) {
                    ppppppplVar32 = ppppppplVar50;
                    ppppppplVar46 = (long *******)*ppppppplVar50;
                    if ((long *******)*ppppppplVar50 == (long *******)0x0) goto LAB_10a6cf824;
                  }
                  ppppppplVar46 = (long *******)ppppppplVar50[1];
                } while ((long *******)ppppppplVar50[1] != (long *******)0x0);
                ppppppplVar32 = ppppppplVar50 + 1;
              }
LAB_10a6cf824:
              *ppppppplVar42 = (long ******)0x0;
              ppppppplVar42[1] = (long ******)0x0;
              ppppppplVar42[2] = (long ******)ppppppplVar50;
              *ppppppplVar32 = (long ******)ppppppplVar42;
              if ((long *******)*ppppppplStack_e8 != (long *******)0x0) {
                ppppppplStack_e8 = (long *******)*ppppppplStack_e8;
                ppppppplVar42 = (long *******)*ppppppplVar32;
              }
              func_0x000107c2b058(ppppppplStack_e0,ppppppplVar42);
              ppppppplVar42 = uStack_200;
              lStack_d8 = lStack_d8 + 1;
              ppppppplStack_1f8 = uStack_200;
              if (uStack_200 != (long *******)0x0) {
                FUN_10a6c8c14();
              }
              ppppppplVar50 = (long *******)ppppppplVar49[1];
              ppppppplVar32 = ppppppplVar49;
              if ((long *******)ppppppplVar49[1] == (long *******)0x0) {
                do {
                  ppppppplVar49 = (long *******)ppppppplVar32[2];
                  bVar13 = (long *******)*ppppppplVar49 != ppppppplVar32;
                  ppppppplVar32 = ppppppplVar49;
                } while (bVar13);
              }
              else {
                do {
                  ppppppplVar49 = ppppppplVar50;
                  ppppppplVar50 = (long *******)*ppppppplVar49;
                } while ((long *******)*ppppppplVar49 != (long *******)0x0);
              }
            } while (ppppppplVar42 != (long *******)0x0);
          }
          FUN_10a6c8c68(&uStack_208);
        }
        while (ppppppplVar49 != ppppppplVar45 + 1) {
          FUN_109ffee4c(&uStack_208,&ppppppplStack_e8,ppppppplVar49 + 4);
          ppppppplVar42 = (long *******)&ppppppplStack_e0;
          ppppppplVar50 = (long *******)&ppppppplStack_e0;
          if (ppppppplStack_e0 != (long *******)0x0) {
            ppppppplVar32 = ppppppplStack_e0;
            do {
              while (ppppppplVar42 = ppppppplVar32,
                    *(uint *)(uStack_208 + 4) < *(uint *)(ppppppplVar42 + 4)) {
                ppppppplVar50 = ppppppplVar42;
                ppppppplVar32 = (long *******)*ppppppplVar42;
                if ((long *******)*ppppppplVar42 == (long *******)0x0) goto LAB_10a6cf934;
              }
              ppppppplVar32 = (long *******)ppppppplVar42[1];
            } while ((long *******)ppppppplVar42[1] != (long *******)0x0);
            ppppppplVar50 = ppppppplVar42 + 1;
          }
LAB_10a6cf934:
          *uStack_208 = (undefined *)0x0;
          uStack_208[1] = (undefined *)0x0;
          uStack_208[2] = (undefined *)ppppppplVar42;
          *ppppppplVar50 = (long ******)uStack_208;
          ppppppplVar42 = (long *******)uStack_208;
          if ((long *******)*ppppppplStack_e8 != (long *******)0x0) {
            ppppppplStack_e8 = (long *******)*ppppppplStack_e8;
            ppppppplVar42 = (long *******)*ppppppplVar50;
          }
          func_0x000107c2b058(ppppppplStack_e0,ppppppplVar42);
          lStack_d8 = lStack_d8 + 1;
          ppppppplVar42 = (long *******)ppppppplVar49[1];
          ppppppplVar50 = ppppppplVar49;
          if ((long *******)ppppppplVar49[1] == (long *******)0x0) {
            do {
              ppppppplVar49 = (long *******)ppppppplVar50[2];
              bVar13 = (long *******)*ppppppplVar49 != ppppppplVar50;
              ppppppplVar50 = ppppppplVar49;
            } while (bVar13);
          }
          else {
            do {
              ppppppplVar49 = ppppppplVar42;
              ppppppplVar42 = (long *******)*ppppppplVar49;
            } while ((long *******)*ppppppplVar49 != (long *******)0x0);
          }
        }
      }
      ppppppplVar49 = ppppppplStack_c0;
      pppppplStack_d0 = ppppppplVar45[3];
      if (ppppppplStack_c0 < ppppppplStack_b8) {
        FUN_10a6c8cbc(ppppppplStack_c0,&uStack_1a8);
        ppppppplVar49 = ppppppplVar49 + 0x1c;
      }
      else {
        lVar44 = (long)ppppppplStack_c0 - (long)ppppppplStack_c8;
        uVar33 = (lVar44 >> 5) * 0x6db6db6db6db6db7 + 1;
        if (0x124924924924924 < uVar33) {
          FUN_10a6c8e24();
          goto LAB_10a6d0b60;
        }
        lVar26 = (long)ppppppplStack_b8 - (long)ppppppplStack_c8 >> 5;
        uVar36 = lVar26 * -0x2492492492492492;
        if (uVar36 < uVar33 || uVar36 - uVar33 == 0) {
          uVar36 = uVar33;
        }
        if (0x92492492492491 < (ulong)(lVar26 * 0x6db6db6db6db6db7)) {
          uVar36 = 0x124924924924924;
        }
        ppppppplStack_1e8 = (long *******)&ppppppplStack_c8;
        if (uVar36 == 0) {
          lVar26 = 0;
        }
        else {
          if (0x124924924924924 < uVar36) {
            func_0x000109ffded8();
            goto LAB_10a6d0b60;
          }
          lVar26 = uVar36 * 0xe0;
          __Znwm();
        }
        lVar44 = lVar26 + lVar44;
        ppppppplVar43 = (long *******)(lVar26 + uVar36 * 0xe0);
        uStack_208 = (undefined **)lVar26;
        uStack_200 = (long *******)lVar44;
        ppppppplStack_1f8 = (long *******)lVar44;
        ppppppplStack_1f0 = ppppppplVar43;
        FUN_10a6c8cbc(lVar44,&uStack_1a8);
        ppppppplVar32 = ppppppplStack_c0;
        ppppppplVar42 = ppppppplStack_c8;
        ppppppplVar49 = (long *******)(lVar44 + 0xe0);
        ppppppplVar50 = (long *******)(lVar44 + ((long)ppppppplStack_c8 - (long)ppppppplStack_c0));
        ppppppplVar46 = ppppppplVar50;
        ppppppplVar45 = ppppppplStack_c8;
        ppppppplStack_1f8 = ppppppplVar49;
        if ((long)ppppppplStack_c8 - (long)ppppppplStack_c0 != 0) {
          do {
            FUN_10a6c8cbc(ppppppplVar46,ppppppplVar45);
            ppppppplVar45 = ppppppplVar45 + 0x1c;
            ppppppplVar46 = ppppppplVar46 + 0x1c;
          } while (ppppppplVar45 != ppppppplVar32);
          do {
            FUN_10a6c8e84(ppppppplVar42);
            ppppppplVar42 = ppppppplVar42 + 0x1c;
          } while (ppppppplVar42 != ppppppplVar32);
        }
        ppppppplStack_1f0 = ppppppplStack_b8;
        uStack_208 = (undefined **)ppppppplStack_c8;
        uStack_200 = ppppppplStack_c8;
        ppppppplStack_1f8 = ppppppplStack_c8;
        ppppppplStack_c8 = ppppppplVar50;
        ppppppplStack_c0 = ppppppplVar49;
        ppppppplStack_b8 = ppppppplVar43;
        FUN_10a6c8e38(&uStack_208);
      }
      ppppppplStack_c0 = ppppppplVar49;
      FUN_10a6c8e84(&uStack_1a8);
      plVar17 = plVar17 + 2;
    } while (plVar17 != plStack_300);
  }
  plStack_90 = (long *)0x0;
  func_0x0001094749d8(acStack_218,auStack_2f0,&uStack_a8,1,0);
  if (plStack_90 == &uStack_a8) {
    lVar44 = 0x20;
LAB_10a6cfb5c:
    (**(code **)(*plStack_90 + lVar44))();
  }
  else if (plStack_90 != (long *)0x0) {
    lVar44 = 0x28;
    goto LAB_10a6cfb5c;
  }
  uStack_1a8 = (long *******)&UNK_10f66d698;
  ppppppplStack_1a0 = (long *******)0x29;
  if (acStack_218[0] != '\x01') {
    FUN_10a0edfc4(&uStack_1a8);
    goto LAB_10a6d0b60;
  }
  func_0x000107c2b054(&uStack_1a8,&DAT_10f468704);
  pcVar19 = acStack_218;
  func_0x000109406570(pcVar19,&uStack_1a8);
  if ((long)uStack_198 < 0) {
    __ZdlPv(uStack_1a8);
  }
  uStack_230 = 0;
  lStack_228 = 0;
  uStack_220 = 0x8000000000000000;
  cVar5 = *pcVar19;
  if (cVar5 == '\0') {
    uStack_220 = 1;
LAB_10a6cfc3c:
    lStack_250 = 0;
    uStack_248 = 0;
    uStack_240 = 1;
  }
  else if (cVar5 == '\x02') {
    lStack_228 = **(long **)(pcVar19 + 8);
    lStack_250 = 0;
    uStack_240 = 0x8000000000000000;
    uStack_248 = *(undefined8 *)(*(long *)(pcVar19 + 8) + 8);
  }
  else {
    if (cVar5 != '\x01') {
      uStack_220 = 0;
      goto LAB_10a6cfc3c;
    }
    uStack_230 = **(undefined8 **)(pcVar19 + 8);
    uStack_248 = 0;
    uStack_240 = 0x8000000000000000;
    lStack_250 = *(long *)(pcVar19 + 8) + 8;
  }
  pcStack_258 = pcVar19;
  pcStack_238 = pcVar19;
  while( true ) {
    ppcVar20 = &pcStack_238;
    func_0x00010937c708(ppcVar20,&pcStack_258);
    if ((int)ppcVar20 != 0) break;
    ppcVar20 = &pcStack_238;
    func_0x00010937c560();
    ppppppplStack_278 = (long *******)0x0;
    uStack_280 = (long *******)0x0;
    ppppppplStack_268 = (long *******)0x0;
    ppppppplStack_270 = (long *******)0x0;
    func_0x000107c2b054(&uStack_1a8,&DAT_10f68f0dc);
    func_0x000109406570(ppcVar20,&uStack_1a8);
    func_0x0001094cf080();
    func_0x00010937ba88();
    uStack_280 = (long *******)CONCAT44(uStack_280._4_4_,(undefined4)uStack_208);
    if ((long)uStack_198 < 0) {
      __ZdlPv(uStack_1a8);
    }
    func_0x000107c2b054(&uStack_1a8,&DAT_10f68f0dc);
    func_0x000109406570(ppcVar20,&uStack_1a8);
    func_0x0001094cf080();
    func_0x00010937ba88();
    uStack_280 = (long *******)CONCAT44((undefined4)uStack_208,(undefined4)uStack_280);
    if ((long)uStack_198 < 0) {
      __ZdlPv(uStack_1a8);
    }
    func_0x000107c2b054(&uStack_1a8,&DAT_10f34a4b7);
    func_0x000109406570(ppcVar20,&uStack_1a8);
    if ((long)uStack_198 < 0) {
      __ZdlPv(uStack_1a8);
    }
    uStack_298 = 0;
    lStack_290 = 0;
    uStack_288 = 0x8000000000000000;
    cVar5 = *(char *)ppcVar20;
    ppcStack_2c0 = ppcVar20;
    ppcStack_2a0 = ppcVar20;
    if (cVar5 == '\0') {
      uStack_288 = 1;
LAB_10a6cfddc:
      pcStack_2b8 = (char *)0x0;
      lStack_2b0 = 0;
      uStack_2a8 = 1;
    }
    else if (cVar5 == '\x02') {
      lStack_290 = *(long *)ppcVar20[1];
      pcStack_2b8 = (char *)0x0;
      uStack_2a8 = 0x8000000000000000;
      lStack_2b0 = *(long *)(ppcVar20[1] + 8);
    }
    else {
      if (cVar5 != '\x01') {
        uStack_288 = 0;
        goto LAB_10a6cfddc;
      }
      uStack_298 = *(undefined8 *)ppcVar20[1];
      lStack_2b0 = 0;
      uStack_2a8 = 0x8000000000000000;
      pcStack_2b8 = ppcVar20[1] + 8;
    }
    while( true ) {
      pppcVar21 = &ppcStack_2a0;
      func_0x00010937c708(pppcVar21,&ppcStack_2c0);
      if ((int)pppcVar21 != 0) break;
      pppcVar21 = &ppcStack_2a0;
      func_0x00010937c560(pppcVar21);
      func_0x000107c2b054(&uStack_208,"id");
      func_0x000109406570(pppcVar21,&uStack_208);
      func_0x00010937c804(&uStack_1a8);
      ppppppplVar42 = uStack_198;
      ppppppplVar49 = ppppppplStack_1a0;
      ppppppplVar45 = uStack_1a8;
      uStack_2c8 = (undefined4)uStack_198;
      uStack_2c4 = (undefined3)((ulong)uStack_198 >> 0x20);
      cVar5 = uStack_198._7_1_;
      uStack_198 = (long *******)((ulong)uStack_198 & 0xffffffffffffff);
      uStack_1a8 = (long *******)((ulong)uStack_1a8 & 0xffffffffffffff00);
      if ((long)ppppppplStack_1f8 < 0) {
        __ZdlPv(uStack_208);
      }
      func_0x000107c2b054(&uStack_1a8,&DAT_10f68f20c);
      func_0x000109406570(pppcVar21,&uStack_1a8);
      func_0x0001094cf080();
      func_0x00010937ba88();
      uVar8 = (undefined4)uStack_208;
      if ((long)uStack_198 < 0) {
        __ZdlPv(uStack_1a8);
      }
      func_0x000107c2b054(&uStack_1a8,&DAT_10f68f20c);
      func_0x000109406570(pppcVar21,&uStack_1a8);
      func_0x0001094cf080();
      func_0x00010937ba88();
      uVar9 = (undefined4)uStack_208;
      if ((long)uStack_198 < 0) {
        __ZdlPv(uStack_1a8);
      }
      func_0x000107c2b054(&uStack_1a8,&DAT_10f68f0dc);
      func_0x000109406570(pppcVar21,&uStack_1a8);
      func_0x0001094cf080();
      func_0x00010937ba88();
      uVar10 = (undefined4)uStack_208;
      if ((long)uStack_198 < 0) {
        __ZdlPv(uStack_1a8);
      }
      func_0x000107c2b054(&uStack_1a8,&DAT_10f68f0dc);
      func_0x000109406570(pppcVar21,&uStack_1a8);
      func_0x0001094cf080();
      puVar30 = &uStack_208;
      func_0x00010937ba88();
      uVar11 = (undefined4)uStack_208;
      if ((long)uStack_198 < 0) {
        __ZdlPv(uStack_1a8);
      }
      ppppppplVar50 = ppppppplStack_270;
      if (ppppppplStack_270 < ppppppplStack_268) {
        if ((long)ppppppplVar42 < 0) {
          func_0x000107c3192c(ppppppplStack_270,ppppppplVar45,ppppppplVar49);
        }
        else {
          *ppppppplStack_270 = (long ******)ppppppplVar45;
          ppppppplStack_270[1] = (long ******)ppppppplVar49;
          *(undefined4 *)(ppppppplStack_270 + 2) = uStack_2c8;
          *(uint *)((long)ppppppplStack_270 + 0x13) = CONCAT31(uStack_2c4,uStack_2c8._3_1_);
          *(char *)((long)ppppppplStack_270 + 0x17) = cVar5;
        }
        *(undefined4 *)(ppppppplVar50 + 3) = uVar8;
        *(undefined4 *)((long)ppppppplVar50 + 0x1c) = uVar9;
        ppppppplVar49 = ppppppplVar50 + 5;
        *(undefined4 *)(ppppppplVar50 + 4) = uVar10;
        *(undefined4 *)((long)ppppppplVar50 + 0x24) = uVar11;
      }
      else {
        lVar44 = (long)ppppppplStack_270 - (long)ppppppplStack_278;
        uVar33 = (lVar44 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar33) {
          FUN_10a6c8fa8();
          goto LAB_10a6d0b60;
        }
        lVar26 = (long)ppppppplStack_268 - (long)ppppppplStack_278 >> 3;
        uVar36 = lVar26 * -0x6666666666666666;
        if (uVar36 < uVar33 || uVar36 - uVar33 == 0) {
          uVar36 = uVar33;
        }
        if (0x333333333333332 < (ulong)(lVar26 * -0x3333333333333333)) {
          uVar36 = 0x666666666666666;
        }
        ppppppplStack_188 = (long *******)&ppppppplStack_278;
        if (uVar36 == 0) {
          puVar30 = (undefined8 *)0x0;
        }
        else {
          FUN_10a6c8fbc();
        }
        pppppplVar40 = (long ******)(uVar36 + lVar44);
        ppppppplVar50 = (long *******)(uVar36 + (long)puVar30 * 0x28);
        uStack_1a8 = (long *******)uVar36;
        ppppppplStack_1a0 = (long *******)pppppplVar40;
        ppppppplStack_190 = ppppppplVar50;
        if ((long)ppppppplVar42 < 0) {
          uStack_198 = (long *******)pppppplVar40;
          func_0x000107c3192c(pppppplVar40,ppppppplVar45,ppppppplVar49);
        }
        else {
          *pppppplVar40 = (long *****)ppppppplVar45;
          pppppplVar40[1] = (long *****)ppppppplVar49;
          *(undefined4 *)(pppppplVar40 + 2) = uStack_2c8;
          *(uint *)((long)pppppplVar40 + 0x13) = CONCAT31(uStack_2c4,uStack_2c8._3_1_);
          *(char *)((long)pppppplVar40 + 0x17) = cVar5;
        }
        ppppppplVar7 = ppppppplStack_270;
        ppppppplVar43 = ppppppplStack_278;
        *(undefined4 *)(pppppplVar40 + 3) = uVar8;
        *(undefined4 *)((long)pppppplVar40 + 0x1c) = uVar9;
        *(undefined4 *)(pppppplVar40 + 4) = uVar10;
        *(undefined4 *)((long)pppppplVar40 + 0x24) = uVar11;
        ppppppplVar49 = (long *******)(pppppplVar40 + 5);
        uStack_200 = (long *******)&ppppppplStack_b0;
        ppppppplStack_1f8 = (long *******)&ppppppplStack_2d8;
        uVar33 = (ulong)ppppppplStack_1f0 >> 8;
        ppppppplStack_1f0 = (long *******)((ulong)ppppppplStack_1f0 & 0xffffffffffffff00);
        ppppppplVar3 = (long *******)
                       ((long)pppppplVar40 + ((long)ppppppplStack_278 - (long)ppppppplStack_270));
        ppppppplVar46 = ppppppplVar3;
        ppppppplVar32 = ppppppplStack_278;
        uStack_208 = (undefined **)&ppppppplStack_278;
        uStack_198 = ppppppplVar49;
        ppppppplStack_b0 = ppppppplVar3;
        if ((long)ppppppplStack_278 - (long)ppppppplStack_270 == 0) {
          ppppppplStack_1f0 = (long *******)CONCAT71((int7)uVar33,1);
          ppppppplStack_2d8 = ppppppplVar3;
        }
        else {
          do {
            ppppppplStack_2d8 = ppppppplVar46;
            if (*(char *)((long)ppppppplVar32 + 0x17) < '\0') {
              func_0x000107c3192c(ppppppplVar46,*ppppppplVar32,ppppppplVar32[1]);
            }
            else {
              pppppplVar47 = ppppppplVar32[1];
              pppppplVar40 = *ppppppplVar32;
              ppppppplVar46[2] = ppppppplVar32[2];
              ppppppplVar46[1] = pppppplVar47;
              *ppppppplVar46 = pppppplVar40;
            }
            pppppplVar40 = ppppppplVar32[3];
            ppppppplVar46[4] = ppppppplVar32[4];
            ppppppplVar46[3] = pppppplVar40;
            ppppppplVar32 = ppppppplVar32 + 5;
            ppppppplVar46 = ppppppplStack_2d8 + 5;
          } while (ppppppplVar32 != ppppppplVar7);
          ppppppplStack_1f0 = (long *******)CONCAT71(ppppppplStack_1f0._1_7_,1);
          ppppppplStack_2d8 = ppppppplVar46;
          do {
            if (*(char *)((long)ppppppplVar43 + 0x17) < '\0') {
              __ZdlPv(*ppppppplVar43);
            }
            ppppppplVar43 = ppppppplVar43 + 5;
          } while (ppppppplVar43 != ppppppplVar7);
        }
        FUN_10a6c9000(&uStack_208);
        uStack_198 = ppppppplStack_278;
        ppppppplStack_190 = ppppppplStack_268;
        ppppppplStack_1a0 = ppppppplStack_278;
        uStack_1a8 = ppppppplStack_278;
        ppppppplStack_278 = ppppppplVar3;
        ppppppplStack_270 = ppppppplVar49;
        ppppppplStack_268 = ppppppplVar50;
        FUN_10a6c905c(&uStack_1a8);
      }
      ppppppplStack_270 = ppppppplVar49;
      if ((long)ppppppplVar42 < 0) {
        __ZdlPv(ppppppplVar45);
      }
      func_0x00010937c698(&ppcStack_2a0);
    }
    pppppplVar40 = ppppppplVar18[8];
    if (pppppplVar40 < ppppppplVar18[9]) {
      *pppppplVar40 = (long *****)uStack_280;
      pppppplVar40[1] = (long *****)0x0;
      pppppplVar40[2] = (long *****)0x0;
      pppppplVar40[3] = (long *****)0x0;
      FUN_10a6c90bc();
      pppppplVar40 = pppppplVar40 + 4;
      ppppppplVar18[8] = pppppplVar40;
    }
    else {
      lVar44 = (long)pppppplVar40 - (long)*ppppppplVar34;
      uVar33 = (lVar44 >> 5) + 1;
      if (uVar33 >> 0x3b != 0) {
        FUN_10a6c9254();
        goto LAB_10a6d0b60;
      }
      uVar27 = (long)ppppppplVar18[9] - (long)*ppppppplVar34;
      uVar36 = (long)uVar27 >> 4;
      if (uVar36 <= uVar33) {
        uVar36 = uVar33;
      }
      if (0x7fffffffffffffdf < uVar27) {
        uVar36 = 0x7ffffffffffffff;
      }
      ppppppplStack_188 = ppppppplVar34;
      if (uVar36 == 0) {
        lVar26 = 0;
      }
      else {
        if (uVar36 >> 0x3b != 0) {
          func_0x000109ffded8();
          goto LAB_10a6d0b60;
        }
        lVar26 = uVar36 << 5;
        __Znwm();
      }
      pppppplVar40 = (long ******)(lVar26 + lVar44);
      ppppppplVar49 = (long *******)(lVar26 + uVar36 * 0x20);
      *pppppplVar40 = (long *****)uStack_280;
      pppppplVar40[1] = (long *****)0x0;
      pppppplVar40[2] = (long *****)0x0;
      pppppplVar40[3] = (long *****)0x0;
      uStack_1a8 = (long *******)lVar26;
      ppppppplStack_1a0 = (long *******)pppppplVar40;
      uStack_198 = (long *******)pppppplVar40;
      ppppppplStack_190 = ppppppplVar49;
      FUN_10a6c90bc();
      ppppppplVar45 = (long *******)ppppppplVar18[7];
      ppppppplVar42 = (long *******)ppppppplVar18[8];
      pppppplVar47 = (long ******)((long)pppppplVar40 - ((long)ppppppplVar42 - (long)ppppppplVar45))
      ;
      uStack_198 = (long *******)(pppppplVar40 + 4);
      pppppplVar40 = (long ******)uStack_198;
      if (ppppppplVar42 != ppppppplVar45) {
        lVar44 = 0;
        do {
          puVar30 = (undefined8 *)((long)pppppplVar47 + lVar44);
          pcVar19 = (char *)((long)ppppppplVar45 + lVar44);
          *puVar30 = *(undefined8 *)pcVar19;
          puVar30[2] = 0;
          puVar30[3] = 0;
          puVar30[1] = 0;
          FUN_10a6c90bc();
          lVar44 = lVar44 + 0x20;
        } while ((long *******)(pcVar19 + 0x20) != ppppppplVar42);
        do {
          FUN_10a6c91e4(ppppppplVar45 + 1);
          ppppppplVar45 = ppppppplVar45 + 4;
        } while (ppppppplVar45 != ppppppplVar42);
        ppppppplVar45 = (long *******)*ppppppplVar34;
        ppppppplVar49 = ppppppplStack_190;
        pppppplVar40 = (long ******)uStack_198;
      }
      ppppppplVar18[7] = pppppplVar47;
      ppppppplVar18[8] = pppppplVar40;
      ppppppplStack_190 = (long *******)ppppppplVar18[9];
      ppppppplVar18[9] = (long ******)ppppppplVar49;
      uStack_1a8 = ppppppplVar45;
      ppppppplStack_1a0 = ppppppplVar45;
      uStack_198 = ppppppplVar45;
      FUN_10a6c9268(&uStack_1a8);
    }
    ppppppplVar18[8] = pppppplVar40;
    FUN_10a6c91e4(&ppppppplStack_278);
    func_0x00010937c698(&pcStack_238);
  }
  func_0x000107c2b054(&uStack_1a8,&UNK_10f66d6c2);
  pcVar19 = acStack_218;
  func_0x000109406570(pcVar19,&uStack_1a8);
  func_0x000109381b20(&ppppppplStack_2d8,pcVar19);
  cVar5 = *(char *)ppppppplVar23;
  *(char *)ppppppplVar23 = (char)ppppppplStack_2d8;
  ppppppplStack_2d8 = (long *******)CONCAT71(ppppppplStack_2d8._1_7_,cVar5);
  pppppplVar40 = *ppppppplVar28;
  *ppppppplVar28 = pppppplStack_2d0;
  pppppplStack_2d0 = pppppplVar40;
  func_0x000109380ffc(&pppppplStack_2d0);
  if ((long)uStack_198 < 0) {
    __ZdlPv(uStack_1a8);
  }
  uStack_1a8 = (long *******)&UNK_10f630a61;
  ppppppplStack_1a0 = (long *******)0x26;
  if (*(char *)ppppppplVar23 != '\x02') {
    FUN_10a0edfc4(&uStack_1a8);
    goto LAB_10a6d0b60;
  }
  ppppppplStack_278 = (long *******)0x0;
  ppppppplStack_270 = (long *******)0x0;
  ppppppplStack_1a0 = (long *******)0x0;
  ppppppplStack_190 = (long *******)0x8000000000000000;
  uStack_198 = (long *******)**ppppppplVar28;
  uStack_200 = (long *******)0x0;
  ppppppplStack_1f0 = (long *******)0x8000000000000000;
  ppppppplStack_1f8 = (long *******)(*ppppppplVar28)[1];
  uStack_280 = (long *******)&ppppppplStack_278;
  uStack_208 = (undefined **)ppppppplVar23;
  uStack_1a8 = ppppppplVar23;
  while( true ) {
    puVar30 = &uStack_1a8;
    func_0x000109379420(puVar30,&uStack_208);
    ppppppplVar23 = uStack_280;
    if ((int)puVar30 != 0) break;
    pcVar19 = (char *)&uStack_1a8;
    func_0x00010937b950();
    func_0x000107c2b054(&pcStack_238,&DAT_10f2c3ed3);
    func_0x000109406570(pcVar19,&pcStack_238);
    if (lStack_228 < 0) {
      __ZdlPv(pcStack_238);
    }
    uStack_230 = 0;
    lStack_228 = 0;
    uStack_220 = 0x8000000000000000;
    cVar5 = *pcVar19;
    pcStack_258 = pcVar19;
    pcStack_238 = pcVar19;
    if (cVar5 == '\0') {
      uStack_220 = 1;
LAB_10a6d0514:
      lStack_250 = 0;
      uStack_248 = 0;
      uStack_240 = 1;
    }
    else if (cVar5 == '\x02') {
      lStack_228 = **(long **)(pcVar19 + 8);
      lStack_250 = 0;
      uStack_240 = 0x8000000000000000;
      uStack_248 = *(undefined8 *)(*(long *)(pcVar19 + 8) + 8);
    }
    else {
      if (cVar5 != '\x01') {
        uStack_220 = 0;
        goto LAB_10a6d0514;
      }
      uStack_230 = **(undefined8 **)(pcVar19 + 8);
      uStack_248 = 0;
      uStack_240 = 0x8000000000000000;
      lStack_250 = *(long *)(pcVar19 + 8) + 8;
    }
    while( true ) {
      ppcVar20 = &pcStack_238;
      func_0x00010937c708(ppcVar20,&pcStack_258);
      if ((int)ppcVar20 != 0) break;
      ppcVar20 = &pcStack_238;
      func_0x00010937c560(ppcVar20);
      func_0x000107c2b054(&ppcStack_2c0,&UNK_10f630a94);
      func_0x000109406570(ppcVar20,&ppcStack_2c0);
      func_0x00010937c804(&ppcStack_2a0);
      func_0x000107c283ac(&uStack_280,&ppcStack_2a0,&ppcStack_2a0);
      if (lStack_290 < 0) {
        __ZdlPv(ppcStack_2a0);
      }
      if (lStack_2b0 < 0) {
        __ZdlPv(ppcStack_2c0);
      }
      func_0x00010937c698(&pcStack_238);
    }
    func_0x000109386b30(&uStack_1a8);
  }
  if ((long ********)uStack_280 == &ppppppplStack_278) {
    pppppplVar40 = ppppppplVar18[10];
LAB_10a6d06a4:
    ppppppplVar22 = uStack_280;
    FUN_10a6c93a0(uStack_280,&ppppppplStack_278,pppppplVar40);
    for (ppppppplVar23 = (long *******)ppppppplVar18[0xb]; ppppppplVar23 != ppppppplVar22;
        ppppppplVar23 = ppppppplVar23 + -3) {
    }
    ppppppplVar18[0xb] = (long ******)ppppppplVar22;
  }
  else {
    ppppppplVar34 = uStack_280;
    uVar33 = 0;
    do {
      uVar36 = uVar33;
      ppppppplVar28 = ppppppplVar34;
      ppppppplVar45 = (long *******)ppppppplVar34[1];
      if ((long *******)ppppppplVar34[1] == (long *******)0x0) {
        do {
          ppppppplVar34 = (long *******)ppppppplVar28[2];
          bVar13 = (long *******)*ppppppplVar34 != ppppppplVar28;
          ppppppplVar28 = ppppppplVar34;
        } while (bVar13);
      }
      else {
        do {
          ppppppplVar34 = ppppppplVar45;
          ppppppplVar45 = (long *******)*ppppppplVar34;
        } while ((long *******)*ppppppplVar34 != (long *******)0x0);
      }
      uVar33 = uVar36 + 1;
    } while ((long ********)ppppppplVar34 != &ppppppplStack_278);
    pppppplVar40 = ppppppplVar18[10];
    uVar27 = ((long)ppppppplVar18[0xc] - (long)pppppplVar40 >> 3) * -0x5555555555555555;
    if (uVar27 < uVar36 || uVar27 - uVar36 == 0) {
      func_0x000107c3193c(ppppppplVar22);
      if (0xaaaaaaaaaaaaaa9 < uVar36) {
        FUN_10a05a0c0();
        goto LAB_10a6d0b60;
      }
      lVar44 = (long)ppppppplVar18[0xc] - (long)ppppppplVar18[10] >> 3;
      uVar36 = lVar44 * 0x5555555555555556;
      if (uVar36 < uVar33 || uVar36 - uVar33 == 0) {
        uVar36 = uVar33;
      }
      if (0x555555555555554 < (ulong)(lVar44 * -0x5555555555555555)) {
        uVar36 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a0cf150(ppppppplVar22,uVar36);
      FUN_10a6c92b8(ppppppplVar22,ppppppplVar23,&ppppppplStack_278,ppppppplVar18[0xb]);
      ppppppplVar18[0xb] = (long ******)ppppppplVar22;
    }
    else {
      ppppppplVar23 = ppppppplVar18 + 0xb;
      lVar44 = (long)*ppppppplVar23 - (long)pppppplVar40;
      uVar33 = (lVar44 >> 3) * -0x5555555555555555;
      if (uVar36 <= uVar33 && uVar33 - uVar36 != 0) goto LAB_10a6d06a4;
      ppppppplVar34 = uStack_280;
      if (lVar44 < -0x17) {
        do {
          ppppppplVar28 = (long *******)*ppppppplVar34;
          if ((long *******)*ppppppplVar34 == (long *******)0x0) {
            do {
              ppppppplVar45 = (long *******)ppppppplVar34[2];
              bVar13 = (long *******)*ppppppplVar45 == ppppppplVar34;
              ppppppplVar34 = ppppppplVar45;
            } while (bVar13);
          }
          else {
            do {
              ppppppplVar45 = ppppppplVar28;
              ppppppplVar28 = (long *******)ppppppplVar45[1];
            } while ((long *******)ppppppplVar45[1] != (long *******)0x0);
          }
          bVar13 = uVar33 != 0xffffffffffffffff;
          uVar33 = uVar33 + 1;
          ppppppplVar34 = ppppppplVar45;
        } while (bVar13);
      }
      else {
        ppppppplVar45 = uStack_280;
        if (*ppppppplVar23 != pppppplVar40) {
          do {
            ppppppplVar28 = (long *******)ppppppplVar34[1];
            if ((long *******)ppppppplVar34[1] == (long *******)0x0) {
              do {
                ppppppplVar45 = (long *******)ppppppplVar34[2];
                bVar13 = (long *******)*ppppppplVar45 != ppppppplVar34;
                ppppppplVar34 = ppppppplVar45;
              } while (bVar13);
            }
            else {
              do {
                ppppppplVar45 = ppppppplVar28;
                ppppppplVar28 = (long *******)*ppppppplVar45;
              } while ((long *******)*ppppppplVar45 != (long *******)0x0);
            }
            uVar36 = uVar33 - 1;
            bVar13 = 0 < (long)uVar33;
            uVar33 = uVar36;
            ppppppplVar34 = ppppppplVar45;
          } while (uVar36 != 0 && bVar13);
        }
      }
      FUN_10a6c93a0(uStack_280,ppppppplVar45);
      FUN_10a6c92b8(ppppppplVar22,ppppppplVar45,&ppppppplStack_278,*ppppppplVar23);
      *ppppppplVar23 = (long ******)ppppppplVar22;
    }
  }
  func_0x000107c27bf0(&uStack_280,ppppppplStack_278);
  uVar33 = ((long)ppppppplStack_c0 - (long)ppppppplStack_c8 >> 5) * 0x6db6db6db6db6db7;
  pppppplVar40 = ppppppplVar18[0xd];
  ppppppplVar22 = ppppppplStack_c8;
  ppppppplVar23 = ppppppplStack_c0;
  if ((ulong)(((long)ppppppplVar18[0xf] - (long)pppppplVar40 >> 3) * -0x5555555555555555) < uVar33)
  {
    if (uVar33 < 0xaaaaaaaaaaaaaab) {
      pppppplVar47 = ppppppplVar18[0xe];
      ppppppplVar22 = ppppppplVar51;
      ppppppplStack_188 = ppppppplVar51;
      FUN_10a001560();
      ppppppplStack_1a0 =
           (long *******)((long)ppppppplVar22 + ((long)pppppplVar47 - (long)pppppplVar40));
      ppppppplStack_190 = ppppppplVar22 + uVar33 * 3;
      uStack_1a8 = ppppppplVar22;
      uStack_198 = ppppppplStack_1a0;
      FUN_10a6c9420(ppppppplVar51,&uStack_1a8);
      ppppppplVar22 = ppppppplStack_c8;
      ppppppplVar23 = ppppppplStack_c0;
      if (uStack_1a8 != (long *******)0x0) {
        __ZdlPv();
        ppppppplVar22 = ppppppplStack_c8;
        ppppppplVar23 = ppppppplStack_c0;
      }
      goto joined_r0x00010a6d0874;
    }
  }
  else {
joined_r0x00010a6d0874:
    for (; ppppppplVar34 = ppppppplStack_c0, ppppppplVar22 != ppppppplStack_c0;
        ppppppplVar22 = ppppppplVar22 + 0x1c) {
      ppppppplStack_c0 = ppppppplVar23;
      FUN_109ffca90(&uStack_208,ppppppplVar22);
      pppppplVar40 = ppppppplVar18[0xe];
      if (pppppplVar40 < ppppppplVar18[0xf]) {
        lVar44 = 0;
        do {
          *(undefined4 *)((long)pppppplVar40 + lVar44) = *(undefined4 *)((long)&uStack_208 + lVar44)
          ;
          lVar44 = lVar44 + 4;
        } while (lVar44 != 0xc);
        lVar44 = 0;
        do {
          *(undefined4 *)((long)pppppplVar40 + lVar44 + 0xc) =
               *(undefined4 *)((long)&uStack_200 + lVar44 + 4);
          lVar44 = lVar44 + 4;
        } while (lVar44 != 0xc);
        pppppplVar40 = pppppplVar40 + 3;
      }
      else {
        lVar44 = (long)pppppplVar40 - (long)*ppppppplVar51;
        uVar33 = (lVar44 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar33) {
          FUN_10a00154c();
          goto LAB_10a6d0b60;
        }
        lVar26 = (long)ppppppplVar18[0xf] - (long)*ppppppplVar51 >> 3;
        uVar36 = lVar26 * 0x5555555555555556;
        if (uVar36 < uVar33 || uVar36 - uVar33 == 0) {
          uVar36 = uVar33;
        }
        if (0x555555555555554 < (ulong)(lVar26 * -0x5555555555555555)) {
          uVar36 = 0xaaaaaaaaaaaaaaa;
        }
        ppppppplStack_188 = ppppppplVar51;
        if (uVar36 == 0) {
          ppppppplVar23 = (long *******)0x0;
        }
        else {
          ppppppplVar23 = ppppppplVar51;
          FUN_10a001560();
        }
        lVar26 = 0;
        ppppppplStack_1a0 = (long *******)((long)ppppppplVar23 + lVar44);
        uStack_1a8 = ppppppplVar23;
        ppppppplStack_190 = ppppppplVar23 + uVar36 * 3;
        do {
          *(undefined4 *)((long)ppppppplStack_1a0 + lVar26) =
               *(undefined4 *)((long)&uStack_208 + lVar26);
          lVar26 = lVar26 + 4;
        } while (lVar26 != 0xc);
        lVar44 = 0;
        do {
          *(undefined4 *)((long)ppppppplStack_1a0 + lVar44 + 0xc) =
               *(undefined4 *)((long)&uStack_200 + lVar44 + 4);
          lVar44 = lVar44 + 4;
        } while (lVar44 != 0xc);
        uStack_198 = ppppppplStack_1a0 + 3;
        FUN_10a6c9420(ppppppplVar51,&uStack_1a8);
        pppppplVar40 = ppppppplVar18[0xe];
        if (uStack_1a8 != (long *******)0x0) {
          __ZdlPv();
        }
      }
      ppppppplVar18[0xe] = pppppplVar40;
      ppppppplVar23 = ppppppplStack_c0;
      ppppppplStack_c0 = ppppppplVar34;
    }
    pppppplVar40 = (long ******)0x30;
    ppppppplStack_c0 = ppppppplVar23;
    __Znwm();
    FUN_109ff9e38();
    pppppplVar47 = ppppppplVar18[0x12];
    ppppppplVar18[0x12] = pppppplVar40;
    if (pppppplVar47 != (long ******)0x0) {
      func_0x00010a6d6cb8();
    }
    func_0x000109380ffc(auStack_210,acStack_218[0]);
    FUN_10a6c94b8(&ppppppplStack_c8);
    func_0x00010a6d1378(&plStack_308);
    if (cStack_2d9 < '\0') {
      __ZdlPv(auStack_2f0[0]);
    }
    uStack_208 = &PTR_DAT_110c106a0;
    uStack_1a8 = ppppppplVar18 + 3;
    ppppppplStack_1a0 = ppppppplVar18;
    func_0x000109899de4(extraout_x8,plVar15,&uStack_1a8,&uStack_208,0,0);
    ppppppplVar22 = ppppppplStack_1a0;
    if (ppppppplStack_1a0 != (long *******)0x0) {
      ppppppplVar23 = ppppppplStack_1a0 + 1;
      do {
        pppppplVar40 = *ppppppplVar23;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
        if (bVar13) {
          *ppppppplVar23 = (long ******)((long)pppppplVar40 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppplVar40 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_1a0)[2])(ppppppplStack_1a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar22);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      plVar15 = plVar16 + 0x4b;
      lVar44 = plVar16[0x59];
      uVar33 = lVar44 - 1;
      plVar16[0x59] = uVar33;
      if (uVar33 < 8) {
        uVar33 = plVar15[lVar44 + 2];
        if (plVar16[0x5a] == uVar33) {
          return;
        }
      }
      else {
        uVar33 = *(ulong *)(plVar16[0x57] + -8);
        plVar16[0x57] = plVar16[0x57] + -8;
        if (plVar16[0x5a] == uVar33) {
          return;
        }
      }
      lVar44 = *plVar15;
      lVar26 = plVar16[0x4c];
      lVar41 = lVar26 - lVar44;
      uVar36 = lVar41 >> 4;
      if (uVar36 < uVar33) {
        uVar27 = uVar33 - uVar36;
        lVar37 = plVar16[0x4d];
        if ((ulong)(lVar37 - lVar26 >> 4) < uVar27) {
          if (uVar33 >> 0x3c == 0) {
            uVar29 = lVar37 - lVar44 >> 3;
            if (uVar29 <= uVar33) {
              uVar29 = uVar33;
            }
            if (0x7fffffffffffffef < (ulong)(lVar37 - lVar44)) {
              uVar29 = 0xfffffffffffffff;
            }
            plStack_78 = plVar15;
            if (uVar29 >> 0x3c == 0) {
              lVar14 = uVar29 << 4;
              __Znwm();
              lVar26 = lVar14 + lVar41;
              _bzero(lVar26,uVar27 * 0x10);
              lVar48 = lVar26 + uVar36 * -0x10;
              _memcpy(lVar48,lVar44,lVar41);
              *plVar15 = lVar48;
              plVar16[0x4c] = lVar26 + uVar27 * 0x10;
              plVar16[0x4d] = lVar14 + uVar29 * 0x10;
              lStack_98 = lVar44;
              plStack_90 = (long *)lVar44;
              lStack_88 = lVar44;
              lStack_80 = lVar37;
              func_0x00010988c1b8(&lStack_98);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar12)();
        }
        _bzero(lVar26,uVar27 * 0x10);
        plVar16[0x4c] = lVar26 + uVar27 * 0x10;
      }
      else if (uVar33 < uVar36) {
        lVar44 = lVar44 + uVar33 * 0x10;
        while (lVar26 != lVar44) {
          lVar26 = lVar26 + -0x10;
          func_0x00010988c204(lVar26);
        }
        plVar16[0x4c] = lVar44;
      }
code_r0x00010988c138:
      plVar16[0x5a] = uVar33;
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a00154c();
LAB_10a6d0b60:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a6d0b64);
  (*pcVar12)();
}



/* Entry: 10a6cf0e8; end: 10a6d0f47;  */

/* WARNING: Removing unreachable block (ram,0x00010a6d06cc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a6cf0e8(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  int *piVar2;
  long *******ppppppplVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  long *******ppppppplVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *pcVar12;
  bool bVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *******ppppppplVar17;
  char *pcVar18;
  char **ppcVar19;
  char ***pppcVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long *******ppppppplVar26;
  ulong uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long *******ppppppplVar30;
  ulong uVar31;
  long *******ppppppplVar32;
  undefined8 *puVar33;
  ulong uVar34;
  long lVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  long ******pppppplVar38;
  long lVar39;
  long *******ppppppplVar40;
  long *******ppppppplVar41;
  long lVar42;
  long *******ppppppplVar43;
  long *******ppppppplVar44;
  long ******pppppplVar45;
  long lVar46;
  long *******ppppppplVar47;
  long *******ppppppplVar48;
  long *******ppppppplVar49;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long *******ppppppplStack_2c8;
  long ******pppppplStack_2c0;
  undefined4 uStack_2b8;
  undefined3 uStack_2b4;
  char **ppcStack_2b0;
  char *pcStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  char **ppcStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  char *pcStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  char *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  char acStack_208 [8];
  undefined1 auStack_200 [8];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *******ppppppplStack_190;
  undefined8 uStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long *******ppppppplStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  long lStack_100;
  undefined4 *puStack_f8;
  long *plStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long lStack_c8;
  long ******pppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar15[0x59] < 8) {
    plVar15[plVar15[0x59] + 0x4e] = plVar15[0x5a];
    plVar15[0x59] = plVar15[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar15 + 0x4b);
  }
  plVar16 = param_2;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6d0f48(param_5);
  func_0x000109898570(auStack_2e0,param_2,param_4);
  FUN_10a6d0f6c(&plStack_2f8,param_2,*(undefined4 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18)
               );
  pppppplVar38 = (long ******)plVar16[3];
  ppppppplVar17 = (long *******)0x98;
  __Znwm();
  ppppppplVar17[1] = (long ******)0x0;
  ppppppplVar17[2] = (long ******)0x0;
  ppppppplVar17[4] = (long ******)0x0;
  ppppppplVar17[3] = (long ******)&PTR_FUN_110c10038;
  *ppppppplVar17 = (long ******)&PTR_FUN_110c11108;
  ppppppplVar32 = ppppppplVar17 + 7;
  ppppppplVar17[8] = (long ******)0x0;
  *ppppppplVar32 = (long ******)0x0;
  ppppppplVar17[5] = (long ******)0x0;
  ppppppplVar17[6] = pppppplVar38;
  ppppppplVar21 = ppppppplVar17 + 10;
  ppppppplVar49 = ppppppplVar17 + 0xd;
  ppppppplVar17[0xe] = (long ******)0x0;
  *ppppppplVar49 = (long ******)0x0;
  ppppppplVar22 = ppppppplVar17 + 0x10;
  ppppppplVar26 = ppppppplVar17 + 0x11;
  *ppppppplVar26 = (long ******)0x0;
  ppppppplVar17[10] = (long ******)0x0;
  ppppppplVar17[9] = (long ******)0x0;
  ppppppplVar17[0xc] = (long ******)0x0;
  ppppppplVar17[0xb] = (long ******)0x0;
  pcVar18 = (char *)((long)ppppppplVar17 + 0x71);
  pcVar6 = (char *)((long)ppppppplVar17 + 0x79);
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  pcVar6[4] = '\0';
  pcVar6[5] = '\0';
  pcVar6[6] = '\0';
  pcVar6[7] = '\0';
  pcVar18[0] = '\0';
  pcVar18[1] = '\0';
  pcVar18[2] = '\0';
  pcVar18[3] = '\0';
  pcVar18[4] = '\0';
  pcVar18[5] = '\0';
  pcVar18[6] = '\0';
  pcVar18[7] = '\0';
  ppppppplVar17[0x12] = (long ******)0x0;
  ppppppplStack_b8 = (long *******)0x0;
  ppppppplStack_b0 = (long *******)0x0;
  ppppppplStack_a8 = (long *******)0x0;
  if (plStack_2f8 != plStack_2f0) {
    puVar33 = (undefined8 *)((ulong)&uStack_198 | 4);
    puVar28 = (undefined8 *)((ulong)&uStack_1f8 | 4);
    plVar16 = plStack_2f8;
    do {
      lVar42 = *plVar16;
      uStack_198 = (long *******)&UNK_10f66d665;
      ppppppplStack_190 = (long *******)0x13;
      if (lVar42 == 0) {
        FUN_10a0edfc4(&uStack_198);
        goto LAB_10a6d0b60;
      }
      uStack_198 = (long *******)0x142ff0000;
      puVar33[1] = 0;
      *puVar33 = 0;
      puVar33[3] = 0;
      puVar33[2] = 0;
      puVar33[5] = 0;
      puVar33[4] = 0;
      *(undefined8 *)((long)puVar33 + 0x34) = 0;
      *(undefined8 *)((long)puVar33 + 0x2c) = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      iStack_134 = 0;
      uStack_130 = 0;
      uStack_11c = 0;
      uStack_118 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_10c = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      lStack_100 = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      uStack_138 = 0x42ff0005;
      ppppppplStack_d0 = (long *******)0x0;
      lStack_c8 = 0;
      puVar1 = (uint *)(lVar42 + 0x18);
      pppppplStack_c0 = (long ******)0x0;
      ppppppplStack_158 = (long *******)&ppppppplStack_190;
      puStack_150 = &uStack_148;
      puStack_f8 = &uStack_130;
      plStack_f0 = &lStack_e8;
      ppppppplStack_d8 = (long *******)&ppppppplStack_d0;
      if ((uint *)&uStack_198 == puVar1) {
LAB_10a6d0b04:
        uStack_1f0 = (long *******)0x1e;
        uStack_1f8 = (undefined **)&UNK_10f66d679;
        FUN_10a0edfc4(&uStack_1f8);
        goto LAB_10a6d0b60;
      }
      if (*(long *)(lVar42 + 0x50) != 0) {
        piVar2 = (int *)(*(long *)(lVar42 + 0x50) + 0x14);
        do {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lStack_160 != 0) {
          piVar2 = (int *)(lStack_160 + 0x14);
          do {
            iVar4 = *piVar2;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar13) {
              *piVar2 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_198);
          }
        }
      }
      lStack_160 = 0;
      ppppppplStack_180 = (long *******)0x0;
      uStack_188 = (long *******)0x0;
      uStack_170 = 0;
      ppppppplStack_178 = (long *******)0x0;
      if (uStack_198._4_4_ < 1) {
        uVar23 = *puVar1;
        uStack_198 = (long *******)CONCAT44(uStack_198._4_4_,uVar23);
LAB_10a6cf3c8:
        if (2 < *(int *)(lVar42 + 0x1c)) goto LAB_10a6cf3fc;
        uStack_198 = (long *******)CONCAT44(*(int *)(lVar42 + 0x1c),(uint)uStack_198);
        ppppppplStack_190 = *(long ********)(lVar42 + 0x20);
        puVar29 = *(undefined8 **)(lVar42 + 0x60);
        *puStack_150 = *puVar29;
        puStack_150[1] = puVar29[1];
      }
      else {
        lVar24 = 0;
        do {
          *(undefined4 *)((long)ppppppplStack_158 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_198._4_4_);
        uVar23 = *puVar1;
        uStack_198 = (long *******)CONCAT44(uStack_198._4_4_,uVar23);
        if (uStack_198._4_4_ < 3) goto LAB_10a6cf3c8;
LAB_10a6cf3fc:
        func_0x000109a84868(&uStack_198,puVar1);
        uVar23 = (uint)uStack_198;
      }
      ppppppplStack_180 = *(long ********)(lVar42 + 0x30);
      uStack_188 = *(long ********)(lVar42 + 0x28);
      uStack_170 = *(undefined8 *)(lVar42 + 0x40);
      ppppppplStack_178 = *(long ********)(lVar42 + 0x38);
      lStack_160 = *(long *)(lVar42 + 0x50);
      uStack_168 = *(undefined8 *)(lVar42 + 0x48);
      uStack_1f0 = (long *******)0x1e;
      if ((uVar23 & 0xfff) != 0x10) goto LAB_10a6d0b04;
      lVar39 = *plVar16;
      lVar42 = *(long *)(lVar39 + 0x98);
      lVar24 = *(long *)(lVar39 + 0xa0);
      uStack_1f8 = (undefined **)0x142ff0000;
      puVar28[1] = 0;
      *puVar28 = 0;
      puVar28[3] = 0;
      puVar28[2] = 0;
      puVar28[5] = 0;
      puVar28[4] = 0;
      *(undefined8 *)((long)puVar28 + 0x34) = 0;
      *(undefined8 *)((long)puVar28 + 0x2c) = 0;
      lStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_98._0_4_ = (undefined4)((ulong)(lVar24 - lVar42) >> 3);
      uStack_98._4_4_ = 2;
      puStack_1b8 = &uStack_1f0;
      plStack_1b0 = &lStack_1a8;
      func_0x000109a83fd0(&uStack_1f8,2,&uStack_98,5);
      if (lStack_1c0 != 0) {
        piVar2 = (int *)(lStack_1c0 + 0x14);
        do {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (lStack_100 != 0) {
        piVar2 = (int *)(lStack_100 + 0x14);
        do {
          iVar4 = *piVar2;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_138);
        }
      }
      lStack_100 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      if (iStack_134 < 1) {
LAB_10a6cf540:
        uStack_138 = (undefined4)uStack_1f8;
        if (2 < uStack_1f8._4_4_) goto LAB_10a6cf574;
        iStack_134 = uStack_1f8._4_4_;
        uStack_130 = SUB84(uStack_1f0,0);
        uStack_12c = (undefined4)((ulong)uStack_1f0 >> 0x20);
        *plStack_f0 = *plStack_1b0;
        plStack_f0[1] = plStack_1b0[1];
      }
      else {
        lVar42 = 0;
        do {
          puStack_f8[lVar42] = 0;
          lVar42 = lVar42 + 1;
        } while (lVar42 < iStack_134);
        if (iStack_134 < 3) goto LAB_10a6cf540;
LAB_10a6cf574:
        uStack_138 = (undefined4)uStack_1f8;
        func_0x000109a84868(&uStack_138,&uStack_1f8);
      }
      uStack_120 = SUB84(ppppppplStack_1e0,0);
      uStack_11c = (undefined4)((ulong)ppppppplStack_1e0 >> 0x20);
      uStack_128 = SUB84(ppppppplStack_1e8,0);
      uStack_124 = (undefined4)((ulong)ppppppplStack_1e8 >> 0x20);
      uStack_110 = (undefined4)uStack_1d0;
      uStack_10c = (undefined4)((ulong)uStack_1d0 >> 0x20);
      uStack_118 = SUB84(ppppppplStack_1d8,0);
      uStack_114 = (undefined4)((ulong)ppppppplStack_1d8 >> 0x20);
      lStack_100 = lStack_1c0;
      uStack_108 = (undefined4)uStack_1c8;
      uStack_104 = (undefined4)((ulong)uStack_1c8 >> 0x20);
      if (lStack_1c0 != 0) {
        piVar2 = (int *)(lStack_1c0 + 0x14);
        do {
          iVar4 = *piVar2;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_1f8);
        }
      }
      lStack_1c0 = 0;
      ppppppplStack_1e0 = (long *******)0x0;
      ppppppplStack_1e8 = (long *******)0x0;
      uStack_1d0 = 0;
      ppppppplStack_1d8 = (long *******)0x0;
      if (0 < uStack_1f8._4_4_) {
        lVar42 = 0;
        do {
          *(undefined4 *)((long)puStack_1b8 + lVar42 * 4) = 0;
          lVar42 = lVar42 + 1;
        } while (lVar42 < uStack_1f8._4_4_);
      }
      if (plStack_1b0 != &lStack_1a8 && plStack_1b0 != (long *)0x0) {
        _free(plStack_1b0[-1]);
      }
      lVar42 = *(long *)(lVar39 + 0xa0) - *(long *)(lVar39 + 0x98);
      if (lVar42 != 0) {
        lVar24 = 0;
        lVar42 = lVar42 >> 3;
        lVar35 = *plStack_f0;
        puVar36 = (undefined4 *)(*(long *)(lVar39 + 0x98) + 4);
        do {
          puVar37 = (undefined4 *)(CONCAT44(uStack_124,uStack_128) + (lVar24 >> 0x20) * lVar35);
          *puVar37 = puVar36[-1];
          puVar37[1] = *puVar36;
          lVar24 = lVar24 + 0x100000000;
          lVar42 = lVar42 + -1;
          puVar36 = puVar36 + 2;
        } while (lVar42 != 0);
      }
      ppppppplVar43 = *(long ********)(*plVar16 + 0xb0);
      if (&ppppppplStack_d8 != (long ********)ppppppplVar43) {
        ppppppplVar47 = (long *******)*ppppppplVar43;
        if (lStack_c8 != 0) {
          ppppppplStack_d0[2] = (long ******)0x0;
          ppppppplStack_d0 = (long *******)0x0;
          lStack_c8 = 0;
          ppppppplVar40 = ppppppplStack_d8;
          if ((long *******)ppppppplStack_d8[1] != (long *******)0x0) {
            ppppppplVar40 = (long *******)ppppppplStack_d8[1];
          }
          uStack_1f8 = (undefined **)&ppppppplStack_d8;
          uStack_1f0 = ppppppplVar40;
          ppppppplStack_1e8 = ppppppplVar40;
          ppppppplStack_d8 = (long *******)&ppppppplStack_d0;
          if (ppppppplVar40 != (long *******)0x0) {
            ppppppplVar48 = ppppppplVar40;
            FUN_10a6c8c14();
            uStack_1f0 = ppppppplVar48;
            do {
              if (ppppppplVar47 == ppppppplVar43 + 1) break;
              *(undefined4 *)(ppppppplVar40 + 4) = *(undefined4 *)(ppppppplVar47 + 4);
              if (ppppppplVar40 != ppppppplVar47) {
                if (ppppppplVar47[0xc] != (long ******)0x0) {
                  piVar2 = (int *)((long)ppppppplVar47[0xc] + 0x14);
                  do {
                    cVar5 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar13) {
                      *piVar2 = *piVar2 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                if (ppppppplVar40[0xc] != (long ******)0x0) {
                  piVar2 = (int *)((long)ppppppplVar40[0xc] + 0x14);
                  do {
                    iVar4 = *piVar2;
                    cVar5 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar13) {
                      *piVar2 = iVar4 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar4 + -1 == 0) {
                    func_0x000109a848d4(ppppppplVar40 + 5);
                  }
                }
                ppppppplVar40[0xc] = (long ******)0x0;
                ppppppplVar40[8] = (long ******)0x0;
                ppppppplVar40[7] = (long ******)0x0;
                ppppppplVar40[10] = (long ******)0x0;
                ppppppplVar40[9] = (long ******)0x0;
                if (*(int *)((long)ppppppplVar40 + 0x2c) < 1) {
                  *(undefined4 *)(ppppppplVar40 + 5) = *(undefined4 *)(ppppppplVar47 + 5);
LAB_10a6cf788:
                  if (2 < *(int *)((long)ppppppplVar47 + 0x2c)) goto LAB_10a6cf7bc;
                  *(int *)((long)ppppppplVar40 + 0x2c) = *(int *)((long)ppppppplVar47 + 0x2c);
                  ppppppplVar40[6] = ppppppplVar47[6];
                  pppppplVar38 = ppppppplVar47[0xe];
                  pppppplVar45 = ppppppplVar40[0xe];
                  *pppppplVar45 = *pppppplVar38;
                  pppppplVar45[1] = pppppplVar38[1];
                }
                else {
                  lVar42 = 0;
                  pppppplVar38 = ppppppplVar40[0xd];
                  do {
                    *(undefined4 *)((long)pppppplVar38 + lVar42 * 4) = 0;
                    lVar42 = lVar42 + 1;
                  } while (lVar42 < *(int *)((long)ppppppplVar40 + 0x2c));
                  *(undefined4 *)(ppppppplVar40 + 5) = *(undefined4 *)(ppppppplVar47 + 5);
                  if (*(int *)((long)ppppppplVar40 + 0x2c) < 3) goto LAB_10a6cf788;
LAB_10a6cf7bc:
                  func_0x000109a84868(ppppppplVar40 + 5,ppppppplVar47 + 5);
                }
                pppppplVar38 = ppppppplVar47[7];
                ppppppplVar40[8] = ppppppplVar47[8];
                ppppppplVar40[7] = pppppplVar38;
                pppppplVar38 = ppppppplVar47[9];
                ppppppplVar40[10] = ppppppplVar47[10];
                ppppppplVar40[9] = pppppplVar38;
                pppppplVar38 = ppppppplVar47[0xb];
                ppppppplVar40[0xc] = ppppppplVar47[0xc];
                ppppppplVar40[0xb] = pppppplVar38;
                ppppppplVar40 = ppppppplStack_1e8;
              }
              ppppppplVar48 = (long *******)&ppppppplStack_d0;
              ppppppplVar30 = (long *******)&ppppppplStack_d0;
              if (ppppppplStack_d0 != (long *******)0x0) {
                ppppppplVar44 = ppppppplStack_d0;
                do {
                  while (ppppppplVar48 = ppppppplVar44,
                        *(uint *)(ppppppplVar40 + 4) < *(uint *)(ppppppplVar48 + 4)) {
                    ppppppplVar30 = ppppppplVar48;
                    ppppppplVar44 = (long *******)*ppppppplVar48;
                    if ((long *******)*ppppppplVar48 == (long *******)0x0) goto LAB_10a6cf824;
                  }
                  ppppppplVar44 = (long *******)ppppppplVar48[1];
                } while ((long *******)ppppppplVar48[1] != (long *******)0x0);
                ppppppplVar30 = ppppppplVar48 + 1;
              }
LAB_10a6cf824:
              *ppppppplVar40 = (long ******)0x0;
              ppppppplVar40[1] = (long ******)0x0;
              ppppppplVar40[2] = (long ******)ppppppplVar48;
              *ppppppplVar30 = (long ******)ppppppplVar40;
              if ((long *******)*ppppppplStack_d8 != (long *******)0x0) {
                ppppppplStack_d8 = (long *******)*ppppppplStack_d8;
                ppppppplVar40 = (long *******)*ppppppplVar30;
              }
              func_0x000107c2b058(ppppppplStack_d0,ppppppplVar40);
              ppppppplVar40 = uStack_1f0;
              lStack_c8 = lStack_c8 + 1;
              ppppppplStack_1e8 = uStack_1f0;
              if (uStack_1f0 != (long *******)0x0) {
                FUN_10a6c8c14();
              }
              ppppppplVar48 = (long *******)ppppppplVar47[1];
              ppppppplVar30 = ppppppplVar47;
              if ((long *******)ppppppplVar47[1] == (long *******)0x0) {
                do {
                  ppppppplVar47 = (long *******)ppppppplVar30[2];
                  bVar13 = (long *******)*ppppppplVar47 != ppppppplVar30;
                  ppppppplVar30 = ppppppplVar47;
                } while (bVar13);
              }
              else {
                do {
                  ppppppplVar47 = ppppppplVar48;
                  ppppppplVar48 = (long *******)*ppppppplVar47;
                } while ((long *******)*ppppppplVar47 != (long *******)0x0);
              }
            } while (ppppppplVar40 != (long *******)0x0);
          }
          FUN_10a6c8c68(&uStack_1f8);
        }
        while (ppppppplVar47 != ppppppplVar43 + 1) {
          FUN_109ffee4c(&uStack_1f8,&ppppppplStack_d8,ppppppplVar47 + 4);
          ppppppplVar40 = (long *******)&ppppppplStack_d0;
          ppppppplVar48 = (long *******)&ppppppplStack_d0;
          if (ppppppplStack_d0 != (long *******)0x0) {
            ppppppplVar30 = ppppppplStack_d0;
            do {
              while (ppppppplVar40 = ppppppplVar30,
                    *(uint *)(uStack_1f8 + 4) < *(uint *)(ppppppplVar40 + 4)) {
                ppppppplVar48 = ppppppplVar40;
                ppppppplVar30 = (long *******)*ppppppplVar40;
                if ((long *******)*ppppppplVar40 == (long *******)0x0) goto LAB_10a6cf934;
              }
              ppppppplVar30 = (long *******)ppppppplVar40[1];
            } while ((long *******)ppppppplVar40[1] != (long *******)0x0);
            ppppppplVar48 = ppppppplVar40 + 1;
          }
LAB_10a6cf934:
          *uStack_1f8 = (undefined *)0x0;
          uStack_1f8[1] = (undefined *)0x0;
          uStack_1f8[2] = (undefined *)ppppppplVar40;
          *ppppppplVar48 = (long ******)uStack_1f8;
          ppppppplVar40 = (long *******)uStack_1f8;
          if ((long *******)*ppppppplStack_d8 != (long *******)0x0) {
            ppppppplStack_d8 = (long *******)*ppppppplStack_d8;
            ppppppplVar40 = (long *******)*ppppppplVar48;
          }
          func_0x000107c2b058(ppppppplStack_d0,ppppppplVar40);
          lStack_c8 = lStack_c8 + 1;
          ppppppplVar40 = (long *******)ppppppplVar47[1];
          ppppppplVar48 = ppppppplVar47;
          if ((long *******)ppppppplVar47[1] == (long *******)0x0) {
            do {
              ppppppplVar47 = (long *******)ppppppplVar48[2];
              bVar13 = (long *******)*ppppppplVar47 != ppppppplVar48;
              ppppppplVar48 = ppppppplVar47;
            } while (bVar13);
          }
          else {
            do {
              ppppppplVar47 = ppppppplVar40;
              ppppppplVar40 = (long *******)*ppppppplVar47;
            } while ((long *******)*ppppppplVar47 != (long *******)0x0);
          }
        }
      }
      ppppppplVar47 = ppppppplStack_b0;
      pppppplStack_c0 = ppppppplVar43[3];
      if (ppppppplStack_b0 < ppppppplStack_a8) {
        FUN_10a6c8cbc(ppppppplStack_b0,&uStack_198);
        ppppppplVar47 = ppppppplVar47 + 0x1c;
      }
      else {
        lVar42 = (long)ppppppplStack_b0 - (long)ppppppplStack_b8;
        uVar31 = (lVar42 >> 5) * 0x6db6db6db6db6db7 + 1;
        if (0x124924924924924 < uVar31) {
          FUN_10a6c8e24();
          goto LAB_10a6d0b60;
        }
        lVar24 = (long)ppppppplStack_a8 - (long)ppppppplStack_b8 >> 5;
        uVar34 = lVar24 * -0x2492492492492492;
        if (uVar34 < uVar31 || uVar34 - uVar31 == 0) {
          uVar34 = uVar31;
        }
        if (0x92492492492491 < (ulong)(lVar24 * 0x6db6db6db6db6db7)) {
          uVar34 = 0x124924924924924;
        }
        ppppppplStack_1d8 = (long *******)&ppppppplStack_b8;
        if (uVar34 == 0) {
          lVar24 = 0;
        }
        else {
          if (0x124924924924924 < uVar34) {
            func_0x000109ffded8();
            goto LAB_10a6d0b60;
          }
          lVar24 = uVar34 * 0xe0;
          __Znwm();
        }
        lVar42 = lVar24 + lVar42;
        ppppppplVar41 = (long *******)(lVar24 + uVar34 * 0xe0);
        uStack_1f8 = (undefined **)lVar24;
        uStack_1f0 = (long *******)lVar42;
        ppppppplStack_1e8 = (long *******)lVar42;
        ppppppplStack_1e0 = ppppppplVar41;
        FUN_10a6c8cbc(lVar42,&uStack_198);
        ppppppplVar30 = ppppppplStack_b0;
        ppppppplVar40 = ppppppplStack_b8;
        ppppppplVar47 = (long *******)(lVar42 + 0xe0);
        ppppppplVar48 = (long *******)(lVar42 + ((long)ppppppplStack_b8 - (long)ppppppplStack_b0));
        ppppppplVar44 = ppppppplVar48;
        ppppppplVar43 = ppppppplStack_b8;
        ppppppplStack_1e8 = ppppppplVar47;
        if ((long)ppppppplStack_b8 - (long)ppppppplStack_b0 != 0) {
          do {
            FUN_10a6c8cbc(ppppppplVar44,ppppppplVar43);
            ppppppplVar43 = ppppppplVar43 + 0x1c;
            ppppppplVar44 = ppppppplVar44 + 0x1c;
          } while (ppppppplVar43 != ppppppplVar30);
          do {
            FUN_10a6c8e84(ppppppplVar40);
            ppppppplVar40 = ppppppplVar40 + 0x1c;
          } while (ppppppplVar40 != ppppppplVar30);
        }
        ppppppplStack_1e0 = ppppppplStack_a8;
        uStack_1f8 = (undefined **)ppppppplStack_b8;
        uStack_1f0 = ppppppplStack_b8;
        ppppppplStack_1e8 = ppppppplStack_b8;
        ppppppplStack_b8 = ppppppplVar48;
        ppppppplStack_b0 = ppppppplVar47;
        ppppppplStack_a8 = ppppppplVar41;
        FUN_10a6c8e38(&uStack_1f8);
      }
      ppppppplStack_b0 = ppppppplVar47;
      FUN_10a6c8e84(&uStack_198);
      plVar16 = plVar16 + 2;
    } while (plVar16 != plStack_2f0);
  }
  plStack_80 = (long *)0x0;
  func_0x0001094749d8(acStack_208,auStack_2e0,&uStack_98,1,0);
  if (plStack_80 == &uStack_98) {
    lVar42 = 0x20;
LAB_10a6cfb5c:
    (**(code **)(*plStack_80 + lVar42))();
  }
  else if (plStack_80 != (long *)0x0) {
    lVar42 = 0x28;
    goto LAB_10a6cfb5c;
  }
  uStack_198 = (long *******)&UNK_10f66d698;
  ppppppplStack_190 = (long *******)0x29;
  if (acStack_208[0] != '\x01') {
    FUN_10a0edfc4(&uStack_198);
    goto LAB_10a6d0b60;
  }
  func_0x000107c2b054(&uStack_198,&DAT_10f468704);
  pcVar18 = acStack_208;
  func_0x000109406570(pcVar18,&uStack_198);
  if ((long)uStack_188 < 0) {
    __ZdlPv(uStack_198);
  }
  uStack_220 = 0;
  lStack_218 = 0;
  uStack_210 = 0x8000000000000000;
  cVar5 = *pcVar18;
  if (cVar5 == '\0') {
    uStack_210 = 1;
LAB_10a6cfc3c:
    lStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 1;
  }
  else if (cVar5 == '\x02') {
    lStack_218 = **(long **)(pcVar18 + 8);
    lStack_240 = 0;
    uStack_230 = 0x8000000000000000;
    uStack_238 = *(undefined8 *)(*(long *)(pcVar18 + 8) + 8);
  }
  else {
    if (cVar5 != '\x01') {
      uStack_210 = 0;
      goto LAB_10a6cfc3c;
    }
    uStack_220 = **(undefined8 **)(pcVar18 + 8);
    uStack_238 = 0;
    uStack_230 = 0x8000000000000000;
    lStack_240 = *(long *)(pcVar18 + 8) + 8;
  }
  pcStack_248 = pcVar18;
  pcStack_228 = pcVar18;
  while( true ) {
    ppcVar19 = &pcStack_228;
    func_0x00010937c708(ppcVar19,&pcStack_248);
    if ((int)ppcVar19 != 0) break;
    ppcVar19 = &pcStack_228;
    func_0x00010937c560();
    ppppppplStack_268 = (long *******)0x0;
    uStack_270 = (long *******)0x0;
    ppppppplStack_258 = (long *******)0x0;
    ppppppplStack_260 = (long *******)0x0;
    func_0x000107c2b054(&uStack_198,&DAT_10f68f0dc);
    func_0x000109406570(ppcVar19,&uStack_198);
    func_0x0001094cf080();
    func_0x00010937ba88();
    uStack_270 = (long *******)CONCAT44(uStack_270._4_4_,(undefined4)uStack_1f8);
    if ((long)uStack_188 < 0) {
      __ZdlPv(uStack_198);
    }
    func_0x000107c2b054(&uStack_198,&DAT_10f68f0dc);
    func_0x000109406570(ppcVar19,&uStack_198);
    func_0x0001094cf080();
    func_0x00010937ba88();
    uStack_270 = (long *******)CONCAT44((undefined4)uStack_1f8,(undefined4)uStack_270);
    if ((long)uStack_188 < 0) {
      __ZdlPv(uStack_198);
    }
    func_0x000107c2b054(&uStack_198,&DAT_10f34a4b7);
    func_0x000109406570(ppcVar19,&uStack_198);
    if ((long)uStack_188 < 0) {
      __ZdlPv(uStack_198);
    }
    uStack_288 = 0;
    lStack_280 = 0;
    uStack_278 = 0x8000000000000000;
    cVar5 = *(char *)ppcVar19;
    ppcStack_2b0 = ppcVar19;
    ppcStack_290 = ppcVar19;
    if (cVar5 == '\0') {
      uStack_278 = 1;
LAB_10a6cfddc:
      pcStack_2a8 = (char *)0x0;
      lStack_2a0 = 0;
      uStack_298 = 1;
    }
    else if (cVar5 == '\x02') {
      lStack_280 = *(long *)ppcVar19[1];
      pcStack_2a8 = (char *)0x0;
      uStack_298 = 0x8000000000000000;
      lStack_2a0 = *(long *)(ppcVar19[1] + 8);
    }
    else {
      if (cVar5 != '\x01') {
        uStack_278 = 0;
        goto LAB_10a6cfddc;
      }
      uStack_288 = *(undefined8 *)ppcVar19[1];
      lStack_2a0 = 0;
      uStack_298 = 0x8000000000000000;
      pcStack_2a8 = ppcVar19[1] + 8;
    }
    while( true ) {
      pppcVar20 = &ppcStack_290;
      func_0x00010937c708(pppcVar20,&ppcStack_2b0);
      if ((int)pppcVar20 != 0) break;
      pppcVar20 = &ppcStack_290;
      func_0x00010937c560(pppcVar20);
      func_0x000107c2b054(&uStack_1f8,"id");
      func_0x000109406570(pppcVar20,&uStack_1f8);
      func_0x00010937c804(&uStack_198);
      ppppppplVar40 = uStack_188;
      ppppppplVar47 = ppppppplStack_190;
      ppppppplVar43 = uStack_198;
      uStack_2b8 = (undefined4)uStack_188;
      uStack_2b4 = (undefined3)((ulong)uStack_188 >> 0x20);
      cVar5 = uStack_188._7_1_;
      uStack_188 = (long *******)((ulong)uStack_188 & 0xffffffffffffff);
      uStack_198 = (long *******)((ulong)uStack_198 & 0xffffffffffffff00);
      if ((long)ppppppplStack_1e8 < 0) {
        __ZdlPv(uStack_1f8);
      }
      func_0x000107c2b054(&uStack_198,&DAT_10f68f20c);
      func_0x000109406570(pppcVar20,&uStack_198);
      func_0x0001094cf080();
      func_0x00010937ba88();
      uVar8 = (undefined4)uStack_1f8;
      if ((long)uStack_188 < 0) {
        __ZdlPv(uStack_198);
      }
      func_0x000107c2b054(&uStack_198,&DAT_10f68f20c);
      func_0x000109406570(pppcVar20,&uStack_198);
      func_0x0001094cf080();
      func_0x00010937ba88();
      uVar9 = (undefined4)uStack_1f8;
      if ((long)uStack_188 < 0) {
        __ZdlPv(uStack_198);
      }
      func_0x000107c2b054(&uStack_198,&DAT_10f68f0dc);
      func_0x000109406570(pppcVar20,&uStack_198);
      func_0x0001094cf080();
      func_0x00010937ba88();
      uVar10 = (undefined4)uStack_1f8;
      if ((long)uStack_188 < 0) {
        __ZdlPv(uStack_198);
      }
      func_0x000107c2b054(&uStack_198,&DAT_10f68f0dc);
      func_0x000109406570(pppcVar20,&uStack_198);
      func_0x0001094cf080();
      puVar28 = &uStack_1f8;
      func_0x00010937ba88();
      uVar11 = (undefined4)uStack_1f8;
      if ((long)uStack_188 < 0) {
        __ZdlPv(uStack_198);
      }
      ppppppplVar48 = ppppppplStack_260;
      if (ppppppplStack_260 < ppppppplStack_258) {
        if ((long)ppppppplVar40 < 0) {
          func_0x000107c3192c(ppppppplStack_260,ppppppplVar43,ppppppplVar47);
        }
        else {
          *ppppppplStack_260 = (long ******)ppppppplVar43;
          ppppppplStack_260[1] = (long ******)ppppppplVar47;
          *(undefined4 *)(ppppppplStack_260 + 2) = uStack_2b8;
          *(uint *)((long)ppppppplStack_260 + 0x13) = CONCAT31(uStack_2b4,uStack_2b8._3_1_);
          *(char *)((long)ppppppplStack_260 + 0x17) = cVar5;
        }
        *(undefined4 *)(ppppppplVar48 + 3) = uVar8;
        *(undefined4 *)((long)ppppppplVar48 + 0x1c) = uVar9;
        ppppppplVar47 = ppppppplVar48 + 5;
        *(undefined4 *)(ppppppplVar48 + 4) = uVar10;
        *(undefined4 *)((long)ppppppplVar48 + 0x24) = uVar11;
      }
      else {
        lVar42 = (long)ppppppplStack_260 - (long)ppppppplStack_268;
        uVar31 = (lVar42 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar31) {
          FUN_10a6c8fa8();
          goto LAB_10a6d0b60;
        }
        lVar24 = (long)ppppppplStack_258 - (long)ppppppplStack_268 >> 3;
        uVar34 = lVar24 * -0x6666666666666666;
        if (uVar34 < uVar31 || uVar34 - uVar31 == 0) {
          uVar34 = uVar31;
        }
        if (0x333333333333332 < (ulong)(lVar24 * -0x3333333333333333)) {
          uVar34 = 0x666666666666666;
        }
        ppppppplStack_178 = (long *******)&ppppppplStack_268;
        if (uVar34 == 0) {
          puVar28 = (undefined8 *)0x0;
        }
        else {
          FUN_10a6c8fbc();
        }
        pppppplVar38 = (long ******)(uVar34 + lVar42);
        ppppppplVar48 = (long *******)(uVar34 + (long)puVar28 * 0x28);
        uStack_198 = (long *******)uVar34;
        ppppppplStack_190 = (long *******)pppppplVar38;
        ppppppplStack_180 = ppppppplVar48;
        if ((long)ppppppplVar40 < 0) {
          uStack_188 = (long *******)pppppplVar38;
          func_0x000107c3192c(pppppplVar38,ppppppplVar43,ppppppplVar47);
        }
        else {
          *pppppplVar38 = (long *****)ppppppplVar43;
          pppppplVar38[1] = (long *****)ppppppplVar47;
          *(undefined4 *)(pppppplVar38 + 2) = uStack_2b8;
          *(uint *)((long)pppppplVar38 + 0x13) = CONCAT31(uStack_2b4,uStack_2b8._3_1_);
          *(char *)((long)pppppplVar38 + 0x17) = cVar5;
        }
        ppppppplVar7 = ppppppplStack_260;
        ppppppplVar41 = ppppppplStack_268;
        *(undefined4 *)(pppppplVar38 + 3) = uVar8;
        *(undefined4 *)((long)pppppplVar38 + 0x1c) = uVar9;
        *(undefined4 *)(pppppplVar38 + 4) = uVar10;
        *(undefined4 *)((long)pppppplVar38 + 0x24) = uVar11;
        ppppppplVar47 = (long *******)(pppppplVar38 + 5);
        uStack_1f0 = (long *******)&ppppppplStack_a0;
        ppppppplStack_1e8 = (long *******)&ppppppplStack_2c8;
        uVar31 = (ulong)ppppppplStack_1e0 >> 8;
        ppppppplStack_1e0 = (long *******)((ulong)ppppppplStack_1e0 & 0xffffffffffffff00);
        ppppppplVar3 = (long *******)
                       ((long)pppppplVar38 + ((long)ppppppplStack_268 - (long)ppppppplStack_260));
        ppppppplVar44 = ppppppplVar3;
        ppppppplVar30 = ppppppplStack_268;
        uStack_1f8 = (undefined **)&ppppppplStack_268;
        uStack_188 = ppppppplVar47;
        ppppppplStack_a0 = ppppppplVar3;
        if ((long)ppppppplStack_268 - (long)ppppppplStack_260 == 0) {
          ppppppplStack_1e0 = (long *******)CONCAT71((int7)uVar31,1);
          ppppppplStack_2c8 = ppppppplVar3;
        }
        else {
          do {
            ppppppplStack_2c8 = ppppppplVar44;
            if (*(char *)((long)ppppppplVar30 + 0x17) < '\0') {
              func_0x000107c3192c(ppppppplVar44,*ppppppplVar30,ppppppplVar30[1]);
            }
            else {
              pppppplVar45 = ppppppplVar30[1];
              pppppplVar38 = *ppppppplVar30;
              ppppppplVar44[2] = ppppppplVar30[2];
              ppppppplVar44[1] = pppppplVar45;
              *ppppppplVar44 = pppppplVar38;
            }
            pppppplVar38 = ppppppplVar30[3];
            ppppppplVar44[4] = ppppppplVar30[4];
            ppppppplVar44[3] = pppppplVar38;
            ppppppplVar30 = ppppppplVar30 + 5;
            ppppppplVar44 = ppppppplStack_2c8 + 5;
          } while (ppppppplVar30 != ppppppplVar7);
          ppppppplStack_1e0 = (long *******)CONCAT71(ppppppplStack_1e0._1_7_,1);
          ppppppplStack_2c8 = ppppppplVar44;
          do {
            if (*(char *)((long)ppppppplVar41 + 0x17) < '\0') {
              __ZdlPv(*ppppppplVar41);
            }
            ppppppplVar41 = ppppppplVar41 + 5;
          } while (ppppppplVar41 != ppppppplVar7);
        }
        FUN_10a6c9000(&uStack_1f8);
        uStack_188 = ppppppplStack_268;
        ppppppplStack_180 = ppppppplStack_258;
        ppppppplStack_190 = ppppppplStack_268;
        uStack_198 = ppppppplStack_268;
        ppppppplStack_268 = ppppppplVar3;
        ppppppplStack_260 = ppppppplVar47;
        ppppppplStack_258 = ppppppplVar48;
        FUN_10a6c905c(&uStack_198);
      }
      ppppppplStack_260 = ppppppplVar47;
      if ((long)ppppppplVar40 < 0) {
        __ZdlPv(ppppppplVar43);
      }
      func_0x00010937c698(&ppcStack_290);
    }
    pppppplVar38 = ppppppplVar17[8];
    if (pppppplVar38 < ppppppplVar17[9]) {
      *pppppplVar38 = (long *****)uStack_270;
      pppppplVar38[1] = (long *****)0x0;
      pppppplVar38[2] = (long *****)0x0;
      pppppplVar38[3] = (long *****)0x0;
      FUN_10a6c90bc();
      pppppplVar38 = pppppplVar38 + 4;
      ppppppplVar17[8] = pppppplVar38;
    }
    else {
      lVar42 = (long)pppppplVar38 - (long)*ppppppplVar32;
      uVar31 = (lVar42 >> 5) + 1;
      if (uVar31 >> 0x3b != 0) {
        FUN_10a6c9254();
        goto LAB_10a6d0b60;
      }
      uVar25 = (long)ppppppplVar17[9] - (long)*ppppppplVar32;
      uVar34 = (long)uVar25 >> 4;
      if (uVar34 <= uVar31) {
        uVar34 = uVar31;
      }
      if (0x7fffffffffffffdf < uVar25) {
        uVar34 = 0x7ffffffffffffff;
      }
      ppppppplStack_178 = ppppppplVar32;
      if (uVar34 == 0) {
        lVar24 = 0;
      }
      else {
        if (uVar34 >> 0x3b != 0) {
          func_0x000109ffded8();
          goto LAB_10a6d0b60;
        }
        lVar24 = uVar34 << 5;
        __Znwm();
      }
      pppppplVar38 = (long ******)(lVar24 + lVar42);
      ppppppplVar47 = (long *******)(lVar24 + uVar34 * 0x20);
      *pppppplVar38 = (long *****)uStack_270;
      pppppplVar38[1] = (long *****)0x0;
      pppppplVar38[2] = (long *****)0x0;
      pppppplVar38[3] = (long *****)0x0;
      uStack_198 = (long *******)lVar24;
      ppppppplStack_190 = (long *******)pppppplVar38;
      uStack_188 = (long *******)pppppplVar38;
      ppppppplStack_180 = ppppppplVar47;
      FUN_10a6c90bc();
      ppppppplVar43 = (long *******)ppppppplVar17[7];
      ppppppplVar40 = (long *******)ppppppplVar17[8];
      pppppplVar45 = (long ******)((long)pppppplVar38 - ((long)ppppppplVar40 - (long)ppppppplVar43))
      ;
      uStack_188 = (long *******)(pppppplVar38 + 4);
      pppppplVar38 = (long ******)uStack_188;
      if (ppppppplVar40 != ppppppplVar43) {
        lVar42 = 0;
        do {
          puVar28 = (undefined8 *)((long)pppppplVar45 + lVar42);
          pcVar18 = (char *)((long)ppppppplVar43 + lVar42);
          *puVar28 = *(undefined8 *)pcVar18;
          puVar28[2] = 0;
          puVar28[3] = 0;
          puVar28[1] = 0;
          FUN_10a6c90bc();
          lVar42 = lVar42 + 0x20;
        } while ((long *******)(pcVar18 + 0x20) != ppppppplVar40);
        do {
          FUN_10a6c91e4(ppppppplVar43 + 1);
          ppppppplVar43 = ppppppplVar43 + 4;
        } while (ppppppplVar43 != ppppppplVar40);
        ppppppplVar43 = (long *******)*ppppppplVar32;
        ppppppplVar47 = ppppppplStack_180;
        pppppplVar38 = (long ******)uStack_188;
      }
      ppppppplVar17[7] = pppppplVar45;
      ppppppplVar17[8] = pppppplVar38;
      ppppppplStack_180 = (long *******)ppppppplVar17[9];
      ppppppplVar17[9] = (long ******)ppppppplVar47;
      uStack_198 = ppppppplVar43;
      ppppppplStack_190 = ppppppplVar43;
      uStack_188 = ppppppplVar43;
      FUN_10a6c9268(&uStack_198);
    }
    ppppppplVar17[8] = pppppplVar38;
    FUN_10a6c91e4(&ppppppplStack_268);
    func_0x00010937c698(&pcStack_228);
  }
  func_0x000107c2b054(&uStack_198,&UNK_10f66d6c2);
  pcVar18 = acStack_208;
  func_0x000109406570(pcVar18,&uStack_198);
  func_0x000109381b20(&ppppppplStack_2c8,pcVar18);
  cVar5 = *(char *)ppppppplVar22;
  *(char *)ppppppplVar22 = (char)ppppppplStack_2c8;
  ppppppplStack_2c8 = (long *******)CONCAT71(ppppppplStack_2c8._1_7_,cVar5);
  pppppplVar38 = *ppppppplVar26;
  *ppppppplVar26 = pppppplStack_2c0;
  pppppplStack_2c0 = pppppplVar38;
  func_0x000109380ffc(&pppppplStack_2c0);
  if ((long)uStack_188 < 0) {
    __ZdlPv(uStack_198);
  }
  uStack_198 = (long *******)&UNK_10f630a61;
  ppppppplStack_190 = (long *******)0x26;
  if (*(char *)ppppppplVar22 != '\x02') {
    FUN_10a0edfc4(&uStack_198);
    goto LAB_10a6d0b60;
  }
  ppppppplStack_268 = (long *******)0x0;
  ppppppplStack_260 = (long *******)0x0;
  ppppppplStack_190 = (long *******)0x0;
  ppppppplStack_180 = (long *******)0x8000000000000000;
  uStack_188 = (long *******)**ppppppplVar26;
  uStack_1f0 = (long *******)0x0;
  ppppppplStack_1e0 = (long *******)0x8000000000000000;
  ppppppplStack_1e8 = (long *******)(*ppppppplVar26)[1];
  uStack_270 = (long *******)&ppppppplStack_268;
  uStack_1f8 = (undefined **)ppppppplVar22;
  uStack_198 = ppppppplVar22;
  while( true ) {
    puVar28 = &uStack_198;
    func_0x000109379420(puVar28,&uStack_1f8);
    ppppppplVar22 = uStack_270;
    if ((int)puVar28 != 0) break;
    pcVar18 = (char *)&uStack_198;
    func_0x00010937b950();
    func_0x000107c2b054(&pcStack_228,&DAT_10f2c3ed3);
    func_0x000109406570(pcVar18,&pcStack_228);
    if (lStack_218 < 0) {
      __ZdlPv(pcStack_228);
    }
    uStack_220 = 0;
    lStack_218 = 0;
    uStack_210 = 0x8000000000000000;
    cVar5 = *pcVar18;
    pcStack_248 = pcVar18;
    pcStack_228 = pcVar18;
    if (cVar5 == '\0') {
      uStack_210 = 1;
LAB_10a6d0514:
      lStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 1;
    }
    else if (cVar5 == '\x02') {
      lStack_218 = **(long **)(pcVar18 + 8);
      lStack_240 = 0;
      uStack_230 = 0x8000000000000000;
      uStack_238 = *(undefined8 *)(*(long *)(pcVar18 + 8) + 8);
    }
    else {
      if (cVar5 != '\x01') {
        uStack_210 = 0;
        goto LAB_10a6d0514;
      }
      uStack_220 = **(undefined8 **)(pcVar18 + 8);
      uStack_238 = 0;
      uStack_230 = 0x8000000000000000;
      lStack_240 = *(long *)(pcVar18 + 8) + 8;
    }
    while( true ) {
      ppcVar19 = &pcStack_228;
      func_0x00010937c708(ppcVar19,&pcStack_248);
      if ((int)ppcVar19 != 0) break;
      ppcVar19 = &pcStack_228;
      func_0x00010937c560(ppcVar19);
      func_0x000107c2b054(&ppcStack_2b0,&UNK_10f630a94);
      func_0x000109406570(ppcVar19,&ppcStack_2b0);
      func_0x00010937c804(&ppcStack_290);
      func_0x000107c283ac(&uStack_270,&ppcStack_290,&ppcStack_290);
      if (lStack_280 < 0) {
        __ZdlPv(ppcStack_290);
      }
      if (lStack_2a0 < 0) {
        __ZdlPv(ppcStack_2b0);
      }
      func_0x00010937c698(&pcStack_228);
    }
    func_0x000109386b30(&uStack_198);
  }
  if ((long ********)uStack_270 == &ppppppplStack_268) {
    pppppplVar38 = ppppppplVar17[10];
LAB_10a6d06a4:
    ppppppplVar21 = uStack_270;
    FUN_10a6c93a0(uStack_270,&ppppppplStack_268,pppppplVar38);
    for (ppppppplVar22 = (long *******)ppppppplVar17[0xb]; ppppppplVar22 != ppppppplVar21;
        ppppppplVar22 = ppppppplVar22 + -3) {
    }
    ppppppplVar17[0xb] = (long ******)ppppppplVar21;
  }
  else {
    ppppppplVar32 = uStack_270;
    uVar31 = 0;
    do {
      uVar34 = uVar31;
      ppppppplVar26 = ppppppplVar32;
      ppppppplVar43 = (long *******)ppppppplVar32[1];
      if ((long *******)ppppppplVar32[1] == (long *******)0x0) {
        do {
          ppppppplVar32 = (long *******)ppppppplVar26[2];
          bVar13 = (long *******)*ppppppplVar32 != ppppppplVar26;
          ppppppplVar26 = ppppppplVar32;
        } while (bVar13);
      }
      else {
        do {
          ppppppplVar32 = ppppppplVar43;
          ppppppplVar43 = (long *******)*ppppppplVar32;
        } while ((long *******)*ppppppplVar32 != (long *******)0x0);
      }
      uVar31 = uVar34 + 1;
    } while ((long ********)ppppppplVar32 != &ppppppplStack_268);
    pppppplVar38 = ppppppplVar17[10];
    uVar25 = ((long)ppppppplVar17[0xc] - (long)pppppplVar38 >> 3) * -0x5555555555555555;
    if (uVar25 < uVar34 || uVar25 - uVar34 == 0) {
      func_0x000107c3193c(ppppppplVar21);
      if (0xaaaaaaaaaaaaaa9 < uVar34) {
        FUN_10a05a0c0();
        goto LAB_10a6d0b60;
      }
      lVar42 = (long)ppppppplVar17[0xc] - (long)ppppppplVar17[10] >> 3;
      uVar34 = lVar42 * 0x5555555555555556;
      if (uVar34 < uVar31 || uVar34 - uVar31 == 0) {
        uVar34 = uVar31;
      }
      if (0x555555555555554 < (ulong)(lVar42 * -0x5555555555555555)) {
        uVar34 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a0cf150(ppppppplVar21,uVar34);
      FUN_10a6c92b8(ppppppplVar21,ppppppplVar22,&ppppppplStack_268,ppppppplVar17[0xb]);
      ppppppplVar17[0xb] = (long ******)ppppppplVar21;
    }
    else {
      ppppppplVar22 = ppppppplVar17 + 0xb;
      lVar42 = (long)*ppppppplVar22 - (long)pppppplVar38;
      uVar31 = (lVar42 >> 3) * -0x5555555555555555;
      if (uVar34 <= uVar31 && uVar31 - uVar34 != 0) goto LAB_10a6d06a4;
      ppppppplVar32 = uStack_270;
      if (lVar42 < -0x17) {
        do {
          ppppppplVar26 = (long *******)*ppppppplVar32;
          if ((long *******)*ppppppplVar32 == (long *******)0x0) {
            do {
              ppppppplVar43 = (long *******)ppppppplVar32[2];
              bVar13 = (long *******)*ppppppplVar43 == ppppppplVar32;
              ppppppplVar32 = ppppppplVar43;
            } while (bVar13);
          }
          else {
            do {
              ppppppplVar43 = ppppppplVar26;
              ppppppplVar26 = (long *******)ppppppplVar43[1];
            } while ((long *******)ppppppplVar43[1] != (long *******)0x0);
          }
          bVar13 = uVar31 != 0xffffffffffffffff;
          uVar31 = uVar31 + 1;
          ppppppplVar32 = ppppppplVar43;
        } while (bVar13);
      }
      else {
        ppppppplVar43 = uStack_270;
        if (*ppppppplVar22 != pppppplVar38) {
          do {
            ppppppplVar26 = (long *******)ppppppplVar32[1];
            if ((long *******)ppppppplVar32[1] == (long *******)0x0) {
              do {
                ppppppplVar43 = (long *******)ppppppplVar32[2];
                bVar13 = (long *******)*ppppppplVar43 != ppppppplVar32;
                ppppppplVar32 = ppppppplVar43;
              } while (bVar13);
            }
            else {
              do {
                ppppppplVar43 = ppppppplVar26;
                ppppppplVar26 = (long *******)*ppppppplVar43;
              } while ((long *******)*ppppppplVar43 != (long *******)0x0);
            }
            uVar34 = uVar31 - 1;
            bVar13 = 0 < (long)uVar31;
            uVar31 = uVar34;
            ppppppplVar32 = ppppppplVar43;
          } while (uVar34 != 0 && bVar13);
        }
      }
      FUN_10a6c93a0(uStack_270,ppppppplVar43);
      FUN_10a6c92b8(ppppppplVar21,ppppppplVar43,&ppppppplStack_268,*ppppppplVar22);
      *ppppppplVar22 = (long ******)ppppppplVar21;
    }
  }
  func_0x000107c27bf0(&uStack_270,ppppppplStack_268);
  uVar31 = ((long)ppppppplStack_b0 - (long)ppppppplStack_b8 >> 5) * 0x6db6db6db6db6db7;
  pppppplVar38 = ppppppplVar17[0xd];
  ppppppplVar21 = ppppppplStack_b8;
  ppppppplVar22 = ppppppplStack_b0;
  if ((ulong)(((long)ppppppplVar17[0xf] - (long)pppppplVar38 >> 3) * -0x5555555555555555) < uVar31)
  {
    if (uVar31 < 0xaaaaaaaaaaaaaab) {
      pppppplVar45 = ppppppplVar17[0xe];
      ppppppplVar21 = ppppppplVar49;
      ppppppplStack_178 = ppppppplVar49;
      FUN_10a001560();
      ppppppplStack_190 =
           (long *******)((long)ppppppplVar21 + ((long)pppppplVar45 - (long)pppppplVar38));
      ppppppplStack_180 = ppppppplVar21 + uVar31 * 3;
      uStack_198 = ppppppplVar21;
      uStack_188 = ppppppplStack_190;
      FUN_10a6c9420(ppppppplVar49,&uStack_198);
      ppppppplVar21 = ppppppplStack_b8;
      ppppppplVar22 = ppppppplStack_b0;
      if (uStack_198 != (long *******)0x0) {
        __ZdlPv();
        ppppppplVar21 = ppppppplStack_b8;
        ppppppplVar22 = ppppppplStack_b0;
      }
      goto joined_r0x00010a6d0874;
    }
  }
  else {
joined_r0x00010a6d0874:
    for (; ppppppplVar32 = ppppppplStack_b0, ppppppplVar21 != ppppppplStack_b0;
        ppppppplVar21 = ppppppplVar21 + 0x1c) {
      ppppppplStack_b0 = ppppppplVar22;
      FUN_109ffca90(&uStack_1f8,ppppppplVar21);
      pppppplVar38 = ppppppplVar17[0xe];
      if (pppppplVar38 < ppppppplVar17[0xf]) {
        lVar42 = 0;
        do {
          *(undefined4 *)((long)pppppplVar38 + lVar42) = *(undefined4 *)((long)&uStack_1f8 + lVar42)
          ;
          lVar42 = lVar42 + 4;
        } while (lVar42 != 0xc);
        lVar42 = 0;
        do {
          *(undefined4 *)((long)pppppplVar38 + lVar42 + 0xc) =
               *(undefined4 *)((long)&uStack_1f0 + lVar42 + 4);
          lVar42 = lVar42 + 4;
        } while (lVar42 != 0xc);
        pppppplVar38 = pppppplVar38 + 3;
      }
      else {
        lVar42 = (long)pppppplVar38 - (long)*ppppppplVar49;
        uVar31 = (lVar42 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar31) {
          FUN_10a00154c();
          goto LAB_10a6d0b60;
        }
        lVar24 = (long)ppppppplVar17[0xf] - (long)*ppppppplVar49 >> 3;
        uVar34 = lVar24 * 0x5555555555555556;
        if (uVar34 < uVar31 || uVar34 - uVar31 == 0) {
          uVar34 = uVar31;
        }
        if (0x555555555555554 < (ulong)(lVar24 * -0x5555555555555555)) {
          uVar34 = 0xaaaaaaaaaaaaaaa;
        }
        ppppppplStack_178 = ppppppplVar49;
        if (uVar34 == 0) {
          ppppppplVar22 = (long *******)0x0;
        }
        else {
          ppppppplVar22 = ppppppplVar49;
          FUN_10a001560();
        }
        lVar24 = 0;
        ppppppplStack_190 = (long *******)((long)ppppppplVar22 + lVar42);
        uStack_198 = ppppppplVar22;
        ppppppplStack_180 = ppppppplVar22 + uVar34 * 3;
        do {
          *(undefined4 *)((long)ppppppplStack_190 + lVar24) =
               *(undefined4 *)((long)&uStack_1f8 + lVar24);
          lVar24 = lVar24 + 4;
        } while (lVar24 != 0xc);
        lVar42 = 0;
        do {
          *(undefined4 *)((long)ppppppplStack_190 + lVar42 + 0xc) =
               *(undefined4 *)((long)&uStack_1f0 + lVar42 + 4);
          lVar42 = lVar42 + 4;
        } while (lVar42 != 0xc);
        uStack_188 = ppppppplStack_190 + 3;
        FUN_10a6c9420(ppppppplVar49,&uStack_198);
        pppppplVar38 = ppppppplVar17[0xe];
        if (uStack_198 != (long *******)0x0) {
          __ZdlPv();
        }
      }
      ppppppplVar17[0xe] = pppppplVar38;
      ppppppplVar22 = ppppppplStack_b0;
      ppppppplStack_b0 = ppppppplVar32;
    }
    pppppplVar38 = (long ******)0x30;
    ppppppplStack_b0 = ppppppplVar22;
    __Znwm();
    FUN_109ff9e38();
    pppppplVar45 = ppppppplVar17[0x12];
    ppppppplVar17[0x12] = pppppplVar38;
    if (pppppplVar45 != (long ******)0x0) {
      func_0x00010a6d6cb8();
    }
    func_0x000109380ffc(auStack_200,acStack_208[0]);
    FUN_10a6c94b8(&ppppppplStack_b8);
    func_0x00010a6d1378(&plStack_2f8);
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
    }
    uStack_1f8 = &PTR_DAT_110c106a0;
    uStack_198 = ppppppplVar17 + 3;
    ppppppplStack_190 = ppppppplVar17;
    func_0x000109899de4(param_1,param_2,&uStack_198,&uStack_1f8,0,0);
    ppppppplVar21 = ppppppplStack_190;
    if (ppppppplStack_190 != (long *******)0x0) {
      ppppppplVar22 = ppppppplStack_190 + 1;
      do {
        pppppplVar38 = *ppppppplVar22;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(ppppppplVar22,0x10);
        if (bVar13) {
          *ppppppplVar22 = (long ******)((long)pppppplVar38 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppplVar38 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_190)[2])(ppppppplStack_190);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar21);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      plVar16 = plVar15 + 0x4b;
      lVar42 = plVar15[0x59];
      uVar31 = lVar42 - 1;
      plVar15[0x59] = uVar31;
      if (uVar31 < 8) {
        uVar31 = plVar16[lVar42 + 2];
        if (plVar15[0x5a] == uVar31) {
          return;
        }
      }
      else {
        uVar31 = *(ulong *)(plVar15[0x57] + -8);
        plVar15[0x57] = plVar15[0x57] + -8;
        if (plVar15[0x5a] == uVar31) {
          return;
        }
      }
      lVar42 = *plVar16;
      lVar24 = plVar15[0x4c];
      lVar39 = lVar24 - lVar42;
      uVar34 = lVar39 >> 4;
      if (uVar34 < uVar31) {
        uVar25 = uVar31 - uVar34;
        lVar35 = plVar15[0x4d];
        if ((ulong)(lVar35 - lVar24 >> 4) < uVar25) {
          if (uVar31 >> 0x3c == 0) {
            uVar27 = lVar35 - lVar42 >> 3;
            if (uVar27 <= uVar31) {
              uVar27 = uVar31;
            }
            if (0x7fffffffffffffef < (ulong)(lVar35 - lVar42)) {
              uVar27 = 0xfffffffffffffff;
            }
            plStack_68 = plVar16;
            if (uVar27 >> 0x3c == 0) {
              lVar14 = uVar27 << 4;
              __Znwm();
              lVar24 = lVar14 + lVar39;
              _bzero(lVar24,uVar25 * 0x10);
              lVar46 = lVar24 + uVar34 * -0x10;
              _memcpy(lVar46,lVar42,lVar39);
              *plVar16 = lVar46;
              plVar15[0x4c] = lVar24 + uVar25 * 0x10;
              plVar15[0x4d] = lVar14 + uVar27 * 0x10;
              lStack_88 = lVar42;
              plStack_80 = (long *)lVar42;
              lStack_78 = lVar42;
              lStack_70 = lVar35;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar12)();
        }
        _bzero(lVar24,uVar25 * 0x10);
        plVar15[0x4c] = lVar24 + uVar25 * 0x10;
      }
      else if (uVar31 < uVar34) {
        lVar42 = lVar42 + uVar31 * 0x10;
        while (lVar24 != lVar42) {
          lVar24 = lVar24 + -0x10;
          func_0x00010988c204(lVar24);
        }
        plVar15[0x4c] = lVar42;
      }
code_r0x00010988c138:
      plVar15[0x5a] = uVar31;
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a00154c();
LAB_10a6d0b60:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a6d0b64);
  (*pcVar12)();
}



/* Entry: 10a6d0f48; end: 10a6d0f6b;  */

void FUN_10a6d0f48(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  
  if (param_1 == 2) {
    return;
  }
  puVar6 = (ulong *)0x2;
  plVar9 = (long *)0x0;
  FUN_10a052ee0();
  if (param_1 == 7) {
    plVar7 = plVar9;
    (**(code **)(*plVar9 + 0x98))(plVar9,param_4);
    plVar14 = plVar9;
    plStack_98 = plVar7;
    (**(code **)(*plVar9 + 0x208))(plVar9,&plStack_98);
    if (((ulong)plVar14 & 1) != 0) {
      plStack_a0 = plStack_98;
      pplVar10 = &plStack_a0;
      plVar7 = plVar9;
      (**(code **)(*plVar9 + 0x268))();
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      if (plVar7 == (long *)0x0) {
LAB_10a6d11ec:
        if (plStack_a0 != (long *)0x0) {
          (**(code **)*plStack_a0)();
        }
        return;
      }
      if ((ulong)plVar7 >> 0x3c == 0) {
        plVar14 = plVar7;
        puStack_78 = puVar6;
        FUN_10a6d12f8();
        uVar15 = (long)plVar14 - (puVar6[1] - *puVar6);
        _memcpy(uVar15);
        plStack_98 = (long *)*puVar6;
        *puVar6 = uVar15;
        puVar6[1] = (ulong)plVar14;
        uStack_80 = puVar6[2];
        puVar6[2] = (ulong)(plVar14 + (long)pplVar10 * 2);
        plStack_90 = plStack_98;
        plStack_88 = plStack_98;
        func_0x00010a6d132c(&plStack_98);
        plVar14 = (long *)0x0;
        do {
          ppuVar11 = (undefined **)&plStack_a0;
          (**(code **)(*plVar9 + 0x288))(&plStack_c0,plVar9,ppuVar11,plVar14);
          if ((int)plStack_c0 == 1) {
            plStack_b0 = (long *)0x0;
            plStack_a8 = (long *)0x0;
          }
          else {
            plVar8 = plVar9;
            ppuVar11 = (undefined **)&plStack_c0;
            func_0x000109898688();
            if (plVar8 == (long *)0x0) {
              func_0x00010988bd28(&UNK_10f68f52e);
              goto LAB_10a6d126c;
            }
            func_0x00010989879c(&plStack_98);
            if (plStack_98 == (long *)0x0) {
LAB_10a6d10d8:
              pplVar10 = &plStack_b0;
            }
            else {
              ppuVar11 = &PTR_DAT_110b178e0;
              plVar8 = plStack_98;
              ___dynamic_cast(plStack_98,&PTR_DAT_110b178e0,&PTR_DAT_110c10640,0);
              if (plVar8 == (long *)0x0) goto LAB_10a6d10d8;
              plStack_a8 = plStack_90;
              pplVar10 = &plStack_98;
              plStack_b0 = plVar8;
            }
            *pplVar10 = (long *)0x0;
            pplVar10[1] = (long *)0x0;
            plVar8 = plStack_90;
            if (plStack_90 != (long *)0x0) {
              plVar1 = plStack_90 + 1;
              do {
                lVar16 = *plVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar16 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_90 + 0x10))(plStack_90);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            if (plStack_b0 == (long *)0x0) {
              func_0x00010988bd28(&UNK_10f58251f);
              goto LAB_10a6d126c;
            }
          }
          plVar8 = plStack_b0;
          puVar17 = (ulong *)puVar6[1];
          if (puVar17 < (ulong *)puVar6[2]) {
            *puVar17 = (ulong)plStack_b0;
            puVar17[1] = (ulong)plStack_a8;
            puVar17 = puVar17 + 2;
          }
          else {
            lVar16 = (long)puVar17 - *puVar6;
            uVar15 = (lVar16 >> 4) + 1;
            if (uVar15 >> 0x3c != 0) {
              FUN_10a6d12e4();
              goto LAB_10a6d126c;
            }
            uVar12 = (long)puVar6[2] - *puVar6;
            uVar13 = (long)uVar12 >> 3;
            if (uVar13 <= uVar15) {
              uVar13 = uVar15;
            }
            if (0x7fffffffffffffef < uVar12) {
              uVar13 = 0xfffffffffffffff;
            }
            puStack_78 = puVar6;
            FUN_10a6d12f8();
            puVar2 = (ulong *)(uVar13 + lVar16);
            *puVar2 = (ulong)plVar8;
            puVar2[1] = (ulong)plStack_a8;
            puVar17 = puVar2 + 2;
            uVar15 = (long)puVar2 - (puVar6[1] - *puVar6);
            _memcpy(uVar15);
            plStack_98 = (long *)*puVar6;
            *puVar6 = uVar15;
            puVar6[1] = (ulong)puVar17;
            uStack_80 = puVar6[2];
            puVar6[2] = uVar13 + (long)ppuVar11 * 0x10;
            plStack_90 = plStack_98;
            plStack_88 = plStack_98;
            func_0x00010a6d132c(&plStack_98);
          }
          puVar6[1] = (ulong)puVar17;
          if ((3 < (int)plStack_c0) && (puStack_b8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_b8)();
          }
          plVar14 = (long *)((long)plVar14 + 1);
        } while (plVar14 != plVar7);
        goto LAB_10a6d11ec;
      }
      goto LAB_10a6d1268;
    }
    if (plStack_98 != (long *)0x0) {
      (**(code **)*plStack_98)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a6d1268:
  FUN_10a6d12e4();
LAB_10a6d126c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6d1270);
  (*pcVar5)();
}



/* Entry: 10a6d0f6c; end: 10a6d12e3;  */

void FUN_10a6d0f6c(ulong *param_1,long *param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long *plStack_b0;
  undefined8 *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  if (param_3 == 7) {
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,param_4);
    plVar12 = param_2;
    plStack_88 = plVar6;
    (**(code **)(*param_2 + 0x208))(param_2,&plStack_88);
    if (((ulong)plVar12 & 1) != 0) {
      plStack_90 = plStack_88;
      pplVar8 = &plStack_90;
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x268))();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (plVar6 == (long *)0x0) {
LAB_10a6d11ec:
        if (plStack_90 != (long *)0x0) {
          (**(code **)*plStack_90)();
        }
        return;
      }
      if ((ulong)plVar6 >> 0x3c == 0) {
        plVar12 = plVar6;
        puStack_68 = param_1;
        FUN_10a6d12f8();
        uVar13 = (long)plVar12 - (param_1[1] - *param_1);
        _memcpy(uVar13);
        plStack_88 = (long *)*param_1;
        *param_1 = uVar13;
        param_1[1] = (ulong)plVar12;
        uStack_70 = param_1[2];
        param_1[2] = (ulong)(plVar12 + (long)pplVar8 * 2);
        plStack_80 = plStack_88;
        plStack_78 = plStack_88;
        func_0x00010a6d132c(&plStack_88);
        plVar12 = (long *)0x0;
        do {
          ppuVar9 = (undefined **)&plStack_90;
          (**(code **)(*param_2 + 0x288))(&plStack_b0,param_2,ppuVar9,plVar12);
          if ((int)plStack_b0 == 1) {
            plStack_a0 = (long *)0x0;
            plStack_98 = (long *)0x0;
          }
          else {
            plVar7 = param_2;
            ppuVar9 = (undefined **)&plStack_b0;
            func_0x000109898688();
            if (plVar7 == (long *)0x0) {
              func_0x00010988bd28(&UNK_10f68f52e);
              goto LAB_10a6d126c;
            }
            func_0x00010989879c(&plStack_88);
            if (plStack_88 == (long *)0x0) {
LAB_10a6d10d8:
              pplVar8 = &plStack_a0;
            }
            else {
              ppuVar9 = &PTR_DAT_110b178e0;
              plVar7 = plStack_88;
              ___dynamic_cast(plStack_88,&PTR_DAT_110b178e0,&PTR_DAT_110c10640,0);
              if (plVar7 == (long *)0x0) goto LAB_10a6d10d8;
              plStack_98 = plStack_80;
              pplVar8 = &plStack_88;
              plStack_a0 = plVar7;
            }
            *pplVar8 = (long *)0x0;
            pplVar8[1] = (long *)0x0;
            plVar7 = plStack_80;
            if (plStack_80 != (long *)0x0) {
              plVar1 = plStack_80 + 1;
              do {
                lVar14 = *plVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar14 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plStack_80 + 0x10))(plStack_80);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            if (plStack_a0 == (long *)0x0) {
              func_0x00010988bd28(&UNK_10f58251f);
              goto LAB_10a6d126c;
            }
          }
          plVar7 = plStack_a0;
          puVar15 = (ulong *)param_1[1];
          if (puVar15 < (ulong *)param_1[2]) {
            *puVar15 = (ulong)plStack_a0;
            puVar15[1] = (ulong)plStack_98;
            puVar15 = puVar15 + 2;
          }
          else {
            lVar14 = (long)puVar15 - *param_1;
            uVar13 = (lVar14 >> 4) + 1;
            if (uVar13 >> 0x3c != 0) {
              FUN_10a6d12e4();
              goto LAB_10a6d126c;
            }
            uVar10 = (long)param_1[2] - *param_1;
            uVar11 = (long)uVar10 >> 3;
            if (uVar11 <= uVar13) {
              uVar11 = uVar13;
            }
            if (0x7fffffffffffffef < uVar10) {
              uVar11 = 0xfffffffffffffff;
            }
            puStack_68 = param_1;
            FUN_10a6d12f8();
            puVar2 = (ulong *)(uVar11 + lVar14);
            *puVar2 = (ulong)plVar7;
            puVar2[1] = (ulong)plStack_98;
            puVar15 = puVar2 + 2;
            uVar13 = (long)puVar2 - (param_1[1] - *param_1);
            _memcpy(uVar13);
            plStack_88 = (long *)*param_1;
            *param_1 = uVar13;
            param_1[1] = (ulong)puVar15;
            uStack_70 = param_1[2];
            param_1[2] = uVar11 + (long)ppuVar9 * 0x10;
            plStack_80 = plStack_88;
            plStack_78 = plStack_88;
            func_0x00010a6d132c(&plStack_88);
          }
          param_1[1] = (ulong)puVar15;
          if ((3 < (int)plStack_b0) && (puStack_a8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_a8)();
          }
          plVar12 = (long *)((long)plVar12 + 1);
        } while (plVar12 != plVar6);
        goto LAB_10a6d11ec;
      }
      goto LAB_10a6d1268;
    }
    if (plStack_88 != (long *)0x0) {
      (**(code **)*plStack_88)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a6d1268:
  FUN_10a6d12e4();
LAB_10a6d126c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6d1270);
  (*pcVar5)();
}



/* Entry: 10a6d12e4; end: 10a6d12f7;  */

undefined1  [16] FUN_10a6d12e4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a6c5638();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a6d12f8; end: 10a6d13d3;  */

undefined1  [16] FUN_10a6d12f8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a6c5638();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a6d13d4; end: 10a6d17a7;  */

/* WARNING: Possible PIC construction at 0x00010a6d179c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6d17a0) */
/* WARNING: Removing unreachable block (ram,0x00010a6d17b4) */
/* WARNING: Removing unreachable block (ram,0x00010a6d17fc) */
/* WARNING: Removing unreachable block (ram,0x00010a6d17e4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */
/* WARNING: Removing unreachable block (ram,0x00010a6d17b0) */

void FUN_10a6d13d4(undefined4 *param_1,undefined ***param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  undefined *puVar14;
  long lVar15;
  undefined ***unaff_x22;
  undefined ***unaff_x23;
  undefined **ppuVar16;
  undefined ***unaff_x24;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  code **unaff_x25;
  undefined *puVar19;
  code **ppcVar20;
  ulong uVar21;
  code **unaff_x26;
  code **ppcVar22;
  undefined *unaff_x27;
  undefined *puVar23;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  code **ppcStack_1c0;
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined **ppuStack_1a0;
  ulong uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined4 uStack_180;
  undefined ***apppuStack_178 [2];
  char cStack_161;
  undefined ***apppuStack_160 [2];
  char cStack_149;
  undefined ***pppuStack_148;
  undefined8 uStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppuVar7[0x59] < (undefined **)0x8) {
    pppuVar7[(long)pppuVar7[0x59] + 0x4e] = pppuVar7[0x5a];
    pppuVar7[0x59] = (undefined **)((long)pppuVar7[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar7 + 0x4b);
  }
  pppuVar8 = param_2;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6d17a8(param_5);
  pppuVar9 = param_2;
  FUN_10a373c54(param_2,param_4);
  pppuVar10 = param_2;
  FUN_10a373c54(param_2,param_4 + 0x10);
  pppuVar17 = (undefined ***)pppuVar8[4];
  puVar14 = (*pppuVar17)[0x128];
  pppuVar8 = (undefined ***)0x0;
  ppcVar20 = unaff_x25;
  ppcVar22 = unaff_x26;
  puVar23 = unaff_x27;
  if (puVar14 != (undefined *)0x0) {
    FUN_10a6c8450(apppuStack_160,*pppuVar17,pppuVar9);
    FUN_10a6c8450(apppuStack_178,*pppuVar17,pppuVar10);
    ppuStack_1a0 = &PTR_DAT_110b190f8;
    uStack_198 = 0;
    puStack_190 = &DAT_11383d918;
    puStack_188 = &DAT_11383d918;
    uStack_180 = 0;
    func_0x000107c30248(&puStack_190,apppuStack_160,0);
    uVar21 = uStack_198;
    if ((uStack_198 & 1) != 0) {
      uVar21 = *(ulong *)(uStack_198 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(&puStack_188,apppuStack_178,uVar21);
    FUN_10a3bf4bc(&pppuStack_148,&ppuStack_1a0);
    puVar19 = (*pppuVar17)[0x20];
    param_2 = (undefined ***)0x138;
    __Znwm();
    pppuStack_b8 = pppuStack_148;
    ppcVar22 = &pcStack_f8;
    puVar23 = puVar19 + 0x208;
    pppuVar17 = param_2 + 1;
    *pppuVar17 = (undefined **)0x0;
    param_2[2] = (undefined **)0x0;
    *param_2 = &PTR_FUN_110b9f3b0;
    pppuVar9 = param_2 + 3;
    pppuStack_148 = (undefined ***)0x0;
    pppuStack_b0 = (undefined ***)uStack_140;
    (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
    uStack_70 = uStack_100;
    uStack_1c8 = *(ulong *)(puVar19 + 0x210);
    puStack_1d0 = *(undefined **)(puVar19 + 0x208);
    if (-1 < (char)puVar19[0x21f]) {
      uStack_1c8 = (ulong)(byte)puVar19[0x21f];
      puStack_1d0 = puVar23;
    }
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    ppcVar20 = &pcStack_f8;
    pcStack_f8 = FUN_10a282dc4;
    ppuStack_f0 = &PTR_DAT_110ae9180;
    ppcStack_1c0 = ppcVar20;
    FUN_10a23708c(pppuVar9,&UNK_10e4d4078,0x24,&UNK_10f647b49,4,&pppuStack_b8,0);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    FUN_10a042634(&pppuStack_b8);
    pppuStack_1b0 = pppuVar9;
    pppuStack_1a8 = param_2;
    FUN_10a042634(&pppuStack_148);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
      if (bVar4) {
        *pppuVar17 = (undefined **)((long)*pppuVar17 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pppuStack_b8 = pppuVar9;
    pppuStack_b0 = param_2;
    FUN_10a25f3f4(puVar14,&pppuStack_b8);
    do {
      ppuVar12 = *pppuVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
      if (bVar4) {
        *pppuVar17 = (undefined **)((long)ppuVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar12 == (undefined **)0x0) {
      (*(code *)(*param_2)[2])(param_2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
    }
    pppuVar8 = pppuStack_1a8;
    if (pppuStack_1a8 != (undefined ***)0x0) {
      pppuVar10 = pppuStack_1a8 + 1;
      do {
        ppuVar12 = *pppuVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar4) {
          *pppuVar10 = (undefined **)((long)ppuVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar12 == (undefined **)0x0) {
        (*(code *)(*pppuStack_1a8)[2])(pppuStack_1a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
      }
    }
    pppuVar10 = &ppuStack_1a0;
    func_0x0001098cf44c();
    if (cStack_161 < '\0') {
      pppuVar10 = apppuStack_178[0];
      __ZdlPv();
    }
    if (cStack_149 < '\0') {
      pppuVar10 = apppuStack_160[0];
      __ZdlPv();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a05bd88(&pppuStack_b8);
    FUN_10a05bd88(&pppuStack_1b0);
    func_0x0001098cf44c(&ppuStack_1a0);
    if (cStack_161 < '\0') {
      __ZdlPv(apppuStack_178[0]);
    }
    if (cStack_149 < '\0') {
      __ZdlPv(apppuStack_160[0]);
    }
    unaff_x30 = 0x10a6d17a0;
    register0x00000008 = (BADSPACEBASE *)&puStack_1d0;
    unaff_x19 = pppuVar7;
    unaff_x20 = pppuVar10;
    unaff_x21 = pppuVar8;
    unaff_x22 = param_2;
    unaff_x23 = pppuVar9;
    unaff_x24 = pppuVar17;
    unaff_x25 = ppcVar20;
    unaff_x26 = ppcVar22;
    unaff_x27 = puVar23;
    unaff_x29 = puVar1;
  }
  pppuVar9 = pppuVar7 + 0x4b;
  ppuVar12 = pppuVar7[0x59];
  ppuVar11 = (undefined **)((long)ppuVar12 + -1);
  pppuVar7[0x59] = ppuVar11;
  if (ppuVar11 < (undefined **)0x8) {
    ppuVar12 = pppuVar9[(long)ppuVar12 + 2];
    if (pppuVar7[0x5a] == ppuVar12) {
      return;
    }
  }
  else {
    ppuVar12 = (undefined **)pppuVar7[0x57][-1];
    pppuVar7[0x57] = pppuVar7[0x57] + -1;
    if (pppuVar7[0x5a] == ppuVar12) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(code ***)((long)register0x00000008 + -0x50) = unaff_x26;
  *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined ****)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ****)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  ppuVar11 = *pppuVar9;
  ppuVar13 = pppuVar7[0x4c];
  lVar15 = (long)ppuVar13 - (long)ppuVar11;
  ppuVar18 = (undefined **)(lVar15 >> 4);
  if (ppuVar18 < ppuVar12) {
    uVar21 = (long)ppuVar12 - (long)ppuVar18;
    ppuVar16 = pppuVar7[0x4d];
    if ((ulong)((long)ppuVar16 - (long)ppuVar13 >> 4) < uVar21) {
      if ((ulong)ppuVar12 >> 0x3c == 0) {
        ppuVar13 = (undefined **)((long)ppuVar16 - (long)ppuVar11 >> 3);
        if (ppuVar13 <= ppuVar12) {
          ppuVar13 = ppuVar12;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppuVar16 - (long)ppuVar11)) {
          ppuVar13 = (undefined **)0xfffffffffffffff;
        }
        *(undefined ****)((long)register0x00000008 + -0x68) = pppuVar9;
        if ((ulong)ppuVar13 >> 0x3c == 0) {
          lVar6 = (long)ppuVar13 << 4;
          __Znwm();
          lVar2 = lVar6 + lVar15;
          _bzero(lVar2,uVar21 * 0x10);
          ppuVar18 = (undefined **)(lVar2 + (long)ppuVar18 * -0x10);
          _memcpy(ppuVar18,ppuVar11,lVar15);
          *pppuVar9 = ppuVar18;
          pppuVar7[0x4c] = (undefined **)(lVar2 + uVar21 * 0x10);
          pppuVar7[0x4d] = (undefined **)(lVar6 + (long)ppuVar13 * 0x10);
          *(undefined ***)((long)register0x00000008 + -0x78) = ppuVar11;
          *(undefined ***)((long)register0x00000008 + -0x70) = ppuVar16;
          *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar11;
          *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar11;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(ppuVar13,uVar21 * 0x10);
    pppuVar7[0x4c] = ppuVar13 + uVar21 * 2;
  }
  else if (ppuVar12 < ppuVar18) {
    while (ppuVar13 != ppuVar11 + (long)ppuVar12 * 2) {
      ppuVar13 = ppuVar13 + -2;
      func_0x00010988c204(ppuVar13);
    }
    pppuVar7[0x4c] = ppuVar11 + (long)ppuVar12 * 2;
  }
code_r0x00010988c138:
  pppuVar7[0x5a] = ppuVar12;
  return;
}



/* Entry: 10a6d17a8; end: 10a6d17cb;  */

void FUN_10a6d17a8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar1 = (long *)0x2;
  lVar2 = 0;
  FUN_10a052ee0(2,0,param_1);
  lVar3 = *plVar1;
  *plVar1 = lVar2;
  if (lVar3 != 0) {
    func_0x00010a05a86c(lVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a6d17cc; end: 10a6d1807;  */

void FUN_10a6d17cc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a05a86c(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a6d1808; end: 10a6d1817;  */

void FUN_10a6d1808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c11108;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6d1818; end: 10a6d1837;  */

void FUN_10a6d1818(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c11108;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d1838; end: 10a6d1843;  */

undefined8 * FUN_10a6d1838(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar1 != 0) {
    func_0x00010a6d6cb8();
  }
  func_0x000109380ffc(param_1 + 0x88,*(undefined1 *)(param_1 + 0x80));
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x50;
  FUN_10a0426d8(&lStack_28);
  FUN_10a6c9514(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a6d1844; end: 10a6d188b;  */

void FUN_10a6d1844(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x1c0;
  __Znwm();
  FUN_10a6d188c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a6d188c; end: 10a6d18d3;  */

undefined8 * FUN_10a6d188c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c115a8;
  FUN_10a6d1914(param_1 + 3);
  return param_1;
}



/* Entry: 10a6d18d4; end: 10a6d18e3;  */

void FUN_10a6d18d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c115a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6d18e4; end: 10a6d1903;  */

void FUN_10a6d18e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c115a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d1904; end: 10a6d1913;  */

void FUN_10a6d1904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6d190c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6d1914; end: 10a6d1a07;  */

long * FUN_10a6d1914(long *param_1)

{
  long *plVar1;
  byte *pbVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 0xe) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = (long)(param_1 + 0x10);
  param_1[0x18] = (long)(param_1 + 0x19);
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *param_1 = (long)&PTR_FUN_110c27720;
  param_1[2] = (long)&PTR_FUN_110c27788;
  param_1[3] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  plVar1 = param_1;
  FUN_10a8bb1fc();
  pbVar2 = (byte *)(*plVar1 + 0x2c0);
  FUN_10a08fec0();
  *(byte *)(param_1 + 0x25) = *pbVar2 >> 1 & 1;
  *(undefined1 *)((long)param_1 + 0x1a4) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1;
}



/* Entry: 10a6d1a08; end: 10a6d1af7;  */

undefined8 * FUN_10a6d1a08(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110c27628;
  param_1[2] = &PTR_DAT_110c27690;
  func_0x00010a6d1ba8(param_1 + 0x1d);
  func_0x00010a140010(param_1 + 0x1b);
  if (param_1[0x16] != 0) {
    piVar1 = (int *)(param_1[0x16] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xf);
    }
  }
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  if (0 < *(int *)((long)param_1 + 0x7c)) {
    lVar5 = 0;
    lVar7 = param_1[0x17];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x7c));
  }
  puVar6 = (undefined8 *)param_1[0x18];
  if (puVar6 != param_1 + 0x19 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  func_0x00010a6c8bbc(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a6d1af8; end: 10a6d1c57;  */

long FUN_10a6d1af8(long param_1)

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



/* Entry: 10a6d1c58; end: 10a6d1c67;  */

void FUN_10a6d1c58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c114e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6d1c68; end: 10a6d1c87;  */

void FUN_10a6d1c68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c114e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d1c88; end: 10a6d1c93;  */

long * FUN_10a6d1c88(long param_1)

{
  long lVar1;
  
  func_0x00010a6d1ce0(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_10ab12f0c(param_1 + 0x30);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x20) = lVar1;
    __ZdlPv();
  }
  return (long *)(param_1 + 0x18);
}



/* Entry: 10a6d1c94; end: 10a6d1def;  */

long * FUN_10a6d1c94(long *param_1)

{
  func_0x00010a6d1ce0(param_1 + 0x14);
  if ((char)param_1[0x13] == '\x01') {
    FUN_10ab12f0c(param_1 + 3);
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a6d1df0; end: 10a6d1f0b;  */

void FUN_10a6d1df0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a6d1f0c(param_2,param_3);
  FUN_10a6ccf1c(param_5);
  FUN_10a1f7d54(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a6b8734(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a6d1f0c; end: 10a6d1f73;  */

/* WARNING: Possible PIC construction at 0x00010a6d2438: Changing call to branch */

void FUN_10a6d1f0c(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 ****ppppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  char *pcVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined4 *extraout_x8;
  long lVar20;
  undefined4 *extraout_x8_00;
  undefined *puVar21;
  long ***ppplVar22;
  long ****unaff_x20;
  long ****unaff_x21;
  long lVar23;
  long *unaff_x22;
  long **pplVar24;
  long **unaff_x23;
  undefined *puVar25;
  long *plVar26;
  long *unaff_x24;
  undefined *puVar27;
  code **ppcVar28;
  code **unaff_x25;
  long lVar29;
  ulong uVar30;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar31;
  undefined8 auStack_278 [2];
  char cStack_261;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long ***ppplStack_248;
  long ***ppplStack_240;
  undefined **ppuStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  code **ppcStack_210;
  undefined1 auStack_208 [8];
  long ***ppplStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long ***ppplStack_1e8;
  ulong uStack_1e0;
  byte bStack_1d1;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  long lStack_190;
  undefined1 *puStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  long **pplStack_168;
  undefined8 *puStack_160;
  long alStack_158 [7];
  undefined8 uStack_120;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long **pplStack_d8;
  long *plStack_d0;
  undefined8 auStack_c8 [7];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 ***pppuStack_30;
  code *pcStack_28;
  
  ppuVar7 = param_1;
  func_0x000109898688();
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar8 = param_1;
    FUN_10a052c2c(param_1,ppuVar7);
    param_2 = ppuVar7;
    if (ppuVar8 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c10658;
      param_4 = 0;
      ___dynamic_cast();
      if (ppuVar8 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar7 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppppuVar6 = (undefined8 ****)&ppcStack_210;
  pcStack_28 = FUN_10a6d1f74;
  ppppuVar31 = &pppuStack_30;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar7;
  pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
  (**(code **)(*ppuVar7 + 0x58))();
  if (ppuVar8[0x59] < (undefined *)0x8) {
    ppuVar8[(long)(ppuVar8[0x59] + 0x4e)] = ppuVar8[0x5a];
    ppuVar8[0x59] = ppuVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(ppuVar8 + 0x4b);
  }
  ppuVar9 = ppuVar7;
  FUN_10a6d1f0c(ppuVar7,param_2);
  FUN_10a6d2444(param_4);
  FUN_10a065cdc(auStack_208,ppuVar7,param_3);
  FUN_10a05a42c(ppuVar7,param_3 + 2);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66ce0c,&UNK_10f66cf78,0x31,&UNK_10f66d014);
  }
  uStack_170 = CONCAT44((int)(float)((ulong)*ppuVar7 >> 0x20),(int)SUB84(*ppuVar7,0));
  FUN_10a6b7fc8(&uStack_1d0,auStack_208,&uStack_170);
  pplStack_d8._0_4_ = 0x2010000;
  auStack_c8[0] = 0;
  plStack_d0 = &uStack_1d0;
  func_0x000109a41858(0x3ff0000000000000,0,&uStack_1d0,&pplStack_d8,0x18);
  pplStack_d8 = (long **)CONCAT44(pplStack_d8._4_4_,0x1010000);
  puStack_160 = &uStack_1d0;
  auStack_c8[0] = 0;
  pplStack_168 = (long **)CONCAT44(pplStack_168._4_4_,0x2010000);
  alStack_158[0] = 0;
  plStack_d0 = puStack_160;
  func_0x000109ac9fc8(&pplStack_d8,&pplStack_168,3,0);
  FUN_109febf28(&ppplStack_1e8,&uStack_1d0,0x5f);
  pppplVar12 = (long ****)ppplStack_1e8;
  if (-1 < (char)bStack_1d1) {
    uStack_1e0 = (ulong)bStack_1d1;
    pppplVar12 = &ppplStack_1e8;
  }
  FUN_10a3bf330(&pplStack_168,pppplVar12,uStack_1e0);
  lVar29 = *(long *)(ppuVar9[3] + 0x100);
  plVar10 = (long *)0x138;
  __Znwm();
  pplStack_d8 = pplStack_168;
  lVar23 = lVar29 + 0x208;
  plVar26 = plVar10 + 1;
  *plVar26 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110b9f3b0;
  pplVar24 = (long **)(plVar10 + 3);
  pplStack_168 = (long **)0x0;
  plStack_d0 = puStack_160;
  (**(code **)(alStack_158[0] + 0x10))(auStack_c8,alStack_158);
  uStack_90 = uStack_120;
  uVar30 = *(ulong *)(lVar29 + 0x210);
  lVar20 = *(long *)(lVar29 + 0x208);
  if (-1 < (char)*(byte *)(lVar29 + 0x21f)) {
    uVar30 = (ulong)*(byte *)(lVar29 + 0x21f);
    lVar20 = lVar23;
  }
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  ppcVar28 = &pcStack_118;
  pcStack_118 = FUN_10a282dc4;
  ppuStack_110 = &PTR_DAT_110ae9180;
  pcVar17 = "POST";
  ppcStack_210 = ppcVar28;
  FUN_10a6ac5b4(pplVar24,&UNK_10e4d3bb8,0x17,"POST",4,&pplStack_d8,lVar20,uVar30);
  (*(code *)*ppuStack_110)(&ppuStack_110);
  FUN_10a042634(&pplStack_d8);
  uVar11 = *(undefined8 *)(ppuVar9[3] + 0x940);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar4) {
      *plVar26 = *plVar26 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar16 = (int)&pplStack_d8;
  plStack_1f8 = (long *)pplVar24;
  plStack_1f0 = plVar10;
  pplStack_d8 = pplVar24;
  plStack_d0 = plVar10;
  FUN_10a25f3f4(uVar11);
  do {
    lVar20 = *plVar26;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar4) {
      *plVar26 = lVar20 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar20 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  plVar15 = plStack_1f0;
  if (plStack_1f0 != (long *)0x0) {
    plVar14 = plStack_1f0 + 1;
    do {
      lVar20 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  pppplVar12 = (long ****)&pplStack_168;
  FUN_10a042634();
  if ((char)bStack_1d1 < '\0') {
    pppplVar12 = (long ****)ppplStack_1e8;
    __ZdlPv();
  }
  if (lStack_198 != 0) {
    piVar1 = (int *)(lStack_198 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pppplVar12 = (long ****)&uStack_1d0;
      func_0x000109a848d4();
    }
  }
  lStack_198 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  if (0 < uStack_1d0._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(lStack_190 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_1d0._4_4_);
  }
  if (puStack_188 != auStack_180 && puStack_188 != (undefined1 *)0x0) {
    pppplVar12 = *(long *****)(puStack_188 + -8);
    _free();
  }
  if ((long ****)ppplStack_200 != (long ****)0x0) {
    pppplVar13 = (long ****)(ppplStack_200 + 1);
    do {
      ppplVar22 = *pppplVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppplVar13,0x10);
      if (bVar4) {
        *pppplVar13 = (long ***)((long)ppplVar22 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppplVar22 == (long ***)0x0) {
      (*(code *)(*ppplStack_200)[2])(ppplStack_200);
      pppplVar12 = (long ****)ppplStack_200;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *extraout_x8 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    ppuVar7 = ppuVar8 + 0x4b;
    ppppuVar6 = (undefined8 ****)&stack0xffffffffffffffe0;
    ppuVar8 = param_1;
    pppplVar12 = unaff_x20;
    plVar10 = unaff_x22;
    pplVar24 = unaff_x23;
    plVar26 = unaff_x24;
    ppcVar28 = unaff_x25;
    lVar23 = unaff_x26;
    ppppuVar31 = (undefined8 ****)pppuStack_30;
    pcVar5 = pcStack_28;
  }
  else {
    ___stack_chk_fail();
    if (iVar16 == 0) {
      pppplVar13 = pppplVar12;
      __Unwind_Resume();
      if ((int)pppplVar13 == 2) {
        return;
      }
      ppppuVar6 = &pppuStack_220;
      pcStack_218 = FUN_10a6d2444;
      plVar14 = (long *)0x2;
      uVar11 = 0;
      pppuStack_220 = ppppuVar31;
      FUN_10a052ee0(2,0,pppplVar13);
      ppplStack_248 = ppplStack_200;
      pcStack_228 = FUN_10a6d2468;
      plVar15 = plVar14;
      plStack_260 = plVar26;
      plStack_258 = (long *)pplVar24;
      plStack_250 = plVar10;
      ppplStack_240 = (long ***)pppplVar12;
      ppuStack_238 = ppuVar8;
      pppuStack_230 = &pppuStack_220;
      (**(code **)(*plVar14 + 0x58))();
      if ((ulong)plVar15[0x59] < 8) {
        plVar15[plVar15[0x59] + 0x4e] = plVar15[0x5a];
        plVar15[0x59] = plVar15[0x59] + 1;
      }
      else {
        func_0x00010988bfcc(plVar15 + 0x4b);
      }
      plVar10 = plVar14;
      FUN_10a6d1f0c(plVar14,uVar11);
      FUN_10a0584c8(pcVar17);
      func_0x000109898570(auStack_278,plVar14,pppplVar13);
      FUN_10a6b8b68(plVar10,auStack_278);
      if (cStack_261 < '\0') {
        __ZdlPv(auStack_278[0]);
      }
      *extraout_x8_00 = 0;
      ppuVar7 = (undefined **)(plVar15 + 0x4b);
      ppuVar8 = ppuStack_238;
      pppplVar12 = (long ****)ppplStack_240;
      unaff_x21 = (long ****)ppplStack_248;
      plVar10 = plStack_250;
      pplVar24 = (long **)plStack_258;
      plVar26 = plStack_260;
      ppppuVar31 = (undefined8 ****)pppuStack_230;
      pcVar5 = pcStack_228;
    }
    else {
      func_0x000104bd46a0();
      FUN_10a05bd88(&pplStack_d8);
      FUN_10a05bd88(&plStack_1f8);
      FUN_10a042634(&pplStack_168);
      if ((char)bStack_1d1 < '\0') {
        __ZdlPv(ppplStack_1e8);
      }
      func_0x00010567aa40(&uStack_1d0);
      func_0x00010a05248c(auStack_208);
      ppuVar7 = ppuVar8 + 0x4b;
      pcVar5 = (code *)0x10a6d243c;
      unaff_x21 = (long ****)ppplStack_200;
    }
  }
  puVar18 = ppuVar7[0xe];
  puVar19 = puVar18 + -1;
  ppuVar7[0xe] = puVar19;
  if (puVar19 < (undefined *)0x8) {
    puVar18 = ppuVar7[(long)(puVar18 + 2)];
    if (ppuVar7[0xf] == puVar18) {
      return;
    }
  }
  else {
    puVar18 = *(undefined **)(ppuVar7[0xc] + -8);
    ppuVar7[0xc] = ppuVar7[0xc] + -8;
    if (ppuVar7[0xf] == puVar18) {
      return;
    }
  }
  *(undefined8 *)((long)ppppuVar6 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppppuVar6 + -0x58) = unaff_x27;
  *(long *)((long)ppppuVar6 + -0x50) = lVar23;
  *(code ***)((long)ppppuVar6 + -0x48) = ppcVar28;
  *(long **)((long)ppppuVar6 + -0x40) = plVar26;
  *(long ***)((long)ppppuVar6 + -0x38) = pplVar24;
  *(long **)((long)ppppuVar6 + -0x30) = plVar10;
  *(long *****)((long)ppppuVar6 + -0x28) = unaff_x21;
  *(long *****)((long)ppppuVar6 + -0x20) = pppplVar12;
  *(undefined ***)((long)ppppuVar6 + -0x18) = ppuVar8;
  *(undefined8 *****)((long)ppppuVar6 + -0x10) = ppppuVar31;
  *(code **)((long)ppppuVar6 + -8) = pcVar5;
  puVar19 = *ppuVar7;
  puVar21 = ppuVar7[1];
  lVar23 = (long)puVar21 - (long)puVar19;
  puVar27 = (undefined *)(lVar23 >> 4);
  if (puVar27 < puVar18) {
    uVar30 = (long)puVar18 - (long)puVar27;
    puVar25 = ppuVar7[2];
    if ((ulong)((long)puVar25 - (long)puVar21 >> 4) < uVar30) {
      if ((ulong)puVar18 >> 0x3c == 0) {
        puVar21 = (undefined *)((long)puVar25 - (long)puVar19 >> 3);
        if (puVar21 <= puVar18) {
          puVar21 = puVar18;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar25 - (long)puVar19)) {
          puVar21 = (undefined *)0xfffffffffffffff;
        }
        *(undefined ***)((long)ppppuVar6 + -0x68) = ppuVar7;
        if ((ulong)puVar21 >> 0x3c == 0) {
          lVar29 = (long)puVar21 << 4;
          __Znwm();
          lVar20 = lVar29 + lVar23;
          _bzero(lVar20,uVar30 * 0x10);
          puVar27 = (undefined *)(lVar20 + (long)puVar27 * -0x10);
          _memcpy(puVar27,puVar19,lVar23);
          *ppuVar7 = puVar27;
          ppuVar7[1] = (undefined *)(lVar20 + uVar30 * 0x10);
          ppuVar7[2] = (undefined *)(lVar29 + (long)puVar21 * 0x10);
          *(undefined **)((long)ppppuVar6 + -0x78) = puVar19;
          *(undefined **)((long)ppppuVar6 + -0x70) = puVar25;
          *(undefined **)((long)ppppuVar6 + -0x88) = puVar19;
          *(undefined **)((long)ppppuVar6 + -0x80) = puVar19;
          func_0x00010988c1b8((undefined1 *)((long)ppppuVar6 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(puVar21,uVar30 * 0x10);
    ppuVar7[1] = puVar21 + uVar30 * 0x10;
  }
  else if (puVar18 < puVar27) {
    while (puVar21 != puVar19 + (long)puVar18 * 0x10) {
      puVar21 = puVar21 + -0x10;
      func_0x00010988c204(puVar21);
    }
    ppuVar7[1] = puVar19 + (long)puVar18 * 0x10;
  }
code_r0x00010988c138:
  ppuVar7[0xf] = puVar18;
  return;
}



/* Entry: 10a6d1f74; end: 10a6d2443;  */

/* WARNING: Possible PIC construction at 0x00010a6d2438: Changing call to branch */

void FUN_10a6d1f74(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  code ***pppcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long *plVar14;
  int iVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *extraout_x8;
  ulong uVar19;
  long ***ppplVar20;
  long *unaff_x19;
  long ****unaff_x20;
  long ****unaff_x21;
  long *unaff_x22;
  long lVar21;
  long **pplVar22;
  long **unaff_x23;
  long lVar23;
  long *plVar24;
  long *unaff_x24;
  ulong uVar25;
  code **ppcVar26;
  code **unaff_x25;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar30;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 auStack_258 [2];
  char cStack_241;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long ***ppplStack_228;
  long ***ppplStack_220;
  long *plStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  code **ppcStack_1f0;
  undefined1 auStack_1e8 [8];
  long ***ppplStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long ***ppplStack_1c8;
  ulong uStack_1c0;
  byte bStack_1b1;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  long **pplStack_148;
  undefined8 *puStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b8;
  long *plStack_b0;
  undefined8 auStack_a8 [7];
  undefined8 uStack_70;
  long lStack_68;
  
  pppcVar6 = &ppcStack_1f0;
  puVar30 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a6d1f0c(param_2,param_3);
  FUN_10a6d2444(param_5);
  FUN_10a065cdc(auStack_1e8,param_2,param_4);
  FUN_10a05a42c(param_2,param_4 + 0x10);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66ce0c,&UNK_10f66cf78,0x31,&UNK_10f66d014);
  }
  uStack_150 = CONCAT44((int)(float)((ulong)*param_2 >> 0x20),(int)(float)*param_2);
  FUN_10a6b7fc8(&uStack_1b0,auStack_1e8,&uStack_150);
  pplStack_b8._0_4_ = 0x2010000;
  auStack_a8[0] = 0;
  plStack_b0 = &uStack_1b0;
  func_0x000109a41858(0x3ff0000000000000,0,&uStack_1b0,&pplStack_b8,0x18);
  pplStack_b8 = (long **)CONCAT44(pplStack_b8._4_4_,0x1010000);
  puStack_140 = &uStack_1b0;
  auStack_a8[0] = 0;
  pplStack_148 = (long **)CONCAT44(pplStack_148._4_4_,0x2010000);
  alStack_138[0] = 0;
  plStack_b0 = puStack_140;
  func_0x000109ac9fc8(&pplStack_b8,&pplStack_148,3,0);
  FUN_109febf28(&ppplStack_1c8,&uStack_1b0,0x5f);
  pppplVar12 = (long ****)ppplStack_1c8;
  if (-1 < (char)bStack_1b1) {
    uStack_1c0 = (ulong)bStack_1b1;
    pppplVar12 = &ppplStack_1c8;
  }
  FUN_10a3bf330(&pplStack_148,pppplVar12,uStack_1c0);
  lVar27 = *(long *)(plVar9[3] + 0x100);
  plVar10 = (long *)0x138;
  __Znwm();
  pplStack_b8 = pplStack_148;
  lVar29 = lVar27 + 0x208;
  plVar24 = plVar10 + 1;
  *plVar24 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110b9f3b0;
  pplVar22 = (long **)(plVar10 + 3);
  pplStack_148 = (long **)0x0;
  plStack_b0 = puStack_140;
  (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
  uStack_70 = uStack_100;
  uVar17 = *(ulong *)(lVar27 + 0x210);
  lVar18 = *(long *)(lVar27 + 0x208);
  if (-1 < (char)*(byte *)(lVar27 + 0x21f)) {
    uVar17 = (ulong)*(byte *)(lVar27 + 0x21f);
    lVar18 = lVar29;
  }
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  ppcVar26 = &pcStack_f8;
  pcStack_f8 = FUN_10a282dc4;
  ppuStack_f0 = &PTR_DAT_110ae9180;
  pcVar16 = "POST";
  ppcStack_1f0 = ppcVar26;
  FUN_10a6ac5b4(pplVar22,&UNK_10e4d3bb8,0x17,"POST",4,&pplStack_b8,lVar18,uVar17);
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  FUN_10a042634(&pplStack_b8);
  uVar11 = *(undefined8 *)(plVar9[3] + 0x940);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar4) {
      *plVar24 = *plVar24 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar15 = (int)&pplStack_b8;
  plStack_1d8 = (long *)pplVar22;
  plStack_1d0 = plVar10;
  pplStack_b8 = pplVar22;
  plStack_b0 = plVar10;
  FUN_10a25f3f4(uVar11);
  do {
    lVar18 = *plVar24;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar4) {
      *plVar24 = lVar18 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar18 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  plVar9 = plStack_1d0;
  if (plStack_1d0 != (long *)0x0) {
    plVar14 = plStack_1d0 + 1;
    do {
      lVar18 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  pppplVar12 = (long ****)&pplStack_148;
  FUN_10a042634();
  if ((char)bStack_1b1 < '\0') {
    pppplVar12 = (long ****)ppplStack_1c8;
    __ZdlPv();
  }
  if (lStack_178 != 0) {
    piVar1 = (int *)(lStack_178 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pppplVar12 = (long ****)&uStack_1b0;
      func_0x000109a848d4();
    }
  }
  lStack_178 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  if (0 < uStack_1b0._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_170 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_1b0._4_4_);
  }
  if (puStack_168 != auStack_160 && puStack_168 != (undefined1 *)0x0) {
    pppplVar12 = *(long *****)(puStack_168 + -8);
    _free();
  }
  if ((long ****)ppplStack_1e0 != (long ****)0x0) {
    pppplVar13 = (long ****)(ppplStack_1e0 + 1);
    do {
      ppplVar20 = *pppplVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppplVar13,0x10);
      if (bVar4) {
        *pppplVar13 = (long ***)((long)ppplVar20 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppplVar20 == (long ***)0x0) {
      (*(code *)(*ppplStack_1e0)[2])(ppplStack_1e0);
      pppplVar12 = (long ****)ppplStack_1e0;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    plVar9 = plVar8 + 0x4b;
    pppcVar6 = (code ***)register0x00000008;
    plVar8 = unaff_x19;
    pppplVar12 = unaff_x20;
    plVar10 = unaff_x22;
    pplVar22 = unaff_x23;
    plVar24 = unaff_x24;
    ppcVar26 = unaff_x25;
    lVar29 = unaff_x26;
    puVar30 = unaff_x29;
  }
  else {
    ___stack_chk_fail();
    if (iVar15 == 0) {
      pppplVar13 = pppplVar12;
      __Unwind_Resume();
      if ((int)pppplVar13 == 2) {
        return;
      }
      pppcVar6 = (code ***)&puStack_200;
      pcStack_1f8 = FUN_10a6d2444;
      plVar14 = (long *)0x2;
      uVar11 = 0;
      puStack_200 = puVar30;
      FUN_10a052ee0(2,0,pppplVar13);
      ppplStack_228 = ppplStack_1e0;
      pcStack_208 = FUN_10a6d2468;
      plVar9 = plVar14;
      plStack_240 = plVar24;
      plStack_238 = (long *)pplVar22;
      plStack_230 = plVar10;
      ppplStack_220 = (long ***)pppplVar12;
      plStack_218 = plVar8;
      puStack_210 = (undefined1 *)&puStack_200;
      (**(code **)(*plVar14 + 0x58))();
      if ((ulong)plVar9[0x59] < 8) {
        plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
        plVar9[0x59] = plVar9[0x59] + 1;
      }
      else {
        func_0x00010988bfcc(plVar9 + 0x4b);
      }
      plVar8 = plVar14;
      FUN_10a6d1f0c(plVar14,uVar11);
      FUN_10a0584c8(pcVar16);
      func_0x000109898570(auStack_258,plVar14,pppplVar13);
      FUN_10a6b8b68(plVar8,auStack_258);
      if (cStack_241 < '\0') {
        __ZdlPv(auStack_258[0]);
      }
      *extraout_x8 = 0;
      plVar9 = plVar9 + 0x4b;
      plVar8 = plStack_218;
      pppplVar12 = (long ****)ppplStack_220;
      unaff_x21 = (long ****)ppplStack_228;
      plVar10 = plStack_230;
      pplVar22 = (long **)plStack_238;
      plVar24 = plStack_240;
      puVar30 = puStack_210;
      unaff_x30 = pcStack_208;
    }
    else {
      func_0x000104bd46a0();
      FUN_10a05bd88(&pplStack_b8);
      FUN_10a05bd88(&plStack_1d8);
      FUN_10a042634(&pplStack_148);
      if ((char)bStack_1b1 < '\0') {
        __ZdlPv(ppplStack_1c8);
      }
      func_0x00010567aa40(&uStack_1b0);
      func_0x00010a05248c(auStack_1e8);
      plVar9 = plVar8 + 0x4b;
      unaff_x30 = (code *)0x10a6d243c;
      unaff_x21 = (long ****)ppplStack_1e0;
    }
  }
  lVar18 = plVar9[0xe];
  uVar17 = lVar18 - 1;
  plVar9[0xe] = uVar17;
  if (uVar17 < 8) {
    uVar17 = plVar9[lVar18 + 2];
    if (plVar9[0xf] == uVar17) {
      return;
    }
  }
  else {
    uVar17 = *(ulong *)(plVar9[0xc] + -8);
    plVar9[0xc] = plVar9[0xc] + -8;
    if (plVar9[0xf] == uVar17) {
      return;
    }
  }
  *(undefined8 *)((long)pppcVar6 + -0x60) = unaff_x28;
  *(undefined8 *)((long)pppcVar6 + -0x58) = unaff_x27;
  *(long *)((long)pppcVar6 + -0x50) = lVar29;
  *(code ***)((long)pppcVar6 + -0x48) = ppcVar26;
  *(long **)((long)pppcVar6 + -0x40) = plVar24;
  *(long ***)((long)pppcVar6 + -0x38) = pplVar22;
  *(long **)((long)pppcVar6 + -0x30) = plVar10;
  *(long *****)((long)pppcVar6 + -0x28) = unaff_x21;
  *(long *****)((long)pppcVar6 + -0x20) = pppplVar12;
  *(long **)((long)pppcVar6 + -0x18) = plVar8;
  *(undefined1 **)((long)pppcVar6 + -0x10) = puVar30;
  *(code **)((long)pppcVar6 + -8) = unaff_x30;
  lVar29 = *plVar9;
  lVar18 = plVar9[1];
  lVar27 = lVar18 - lVar29;
  uVar25 = lVar27 >> 4;
  if (uVar25 < uVar17) {
    uVar28 = uVar17 - uVar25;
    lVar23 = plVar9[2];
    if ((ulong)(lVar23 - lVar18 >> 4) < uVar28) {
      if (uVar17 >> 0x3c == 0) {
        uVar19 = lVar23 - lVar29 >> 3;
        if (uVar19 <= uVar17) {
          uVar19 = uVar17;
        }
        if (0x7fffffffffffffef < (ulong)(lVar23 - lVar29)) {
          uVar19 = 0xfffffffffffffff;
        }
        *(long **)((long)pppcVar6 + -0x68) = plVar9;
        if (uVar19 >> 0x3c == 0) {
          lVar7 = uVar19 << 4;
          __Znwm();
          lVar18 = lVar7 + lVar27;
          _bzero(lVar18,uVar28 * 0x10);
          lVar21 = lVar18 + uVar25 * -0x10;
          _memcpy(lVar21,lVar29,lVar27);
          *plVar9 = lVar21;
          plVar9[1] = lVar18 + uVar28 * 0x10;
          plVar9[2] = lVar7 + uVar19 * 0x10;
          *(long *)((long)pppcVar6 + -0x78) = lVar29;
          *(long *)((long)pppcVar6 + -0x70) = lVar23;
          *(long *)((long)pppcVar6 + -0x88) = lVar29;
          *(long *)((long)pppcVar6 + -0x80) = lVar29;
          func_0x00010988c1b8((undefined1 *)((long)pppcVar6 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(lVar18,uVar28 * 0x10);
    plVar9[1] = lVar18 + uVar28 * 0x10;
  }
  else if (uVar17 < uVar25) {
    lVar29 = lVar29 + uVar17 * 0x10;
    while (lVar18 != lVar29) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[1] = lVar29;
  }
code_r0x00010988c138:
  plVar9[0xf] = uVar17;
  return;
}



/* Entry: 10a6d2444; end: 10a6d2467;  */

void FUN_10a6d2444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar6 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a6d1f0c(plVar3,uVar6);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar3,param_1);
  FUN_10a6b8b68(plVar5,&stack0xffffffffffffff98);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a6d2468; end: 10a6d2563;  */

void FUN_10a6d2468(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a6d1f0c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a6b8b68(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a6d2564; end: 10a6d26c7;  */

void FUN_10a6d2564(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  code *extraout_x9;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&lStack_70,*ppuVar8);
  plVar2 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar2[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar2;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar2;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar6 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar2 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a6d26c8; end: 10a6d26e3;  */

void FUN_10a6d26c8(void)

{
  return;
}



/* Entry: 10a6d26e4; end: 10a6d284b;  */

void FUN_10a6d26e4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [56];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x138;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110b9f3b0;
  uStack_98 = *param_3;
  uStack_90 = param_3[1];
  *param_3 = 0;
  (**(code **)(param_3[2] + 0x10))(auStack_88);
  uStack_50 = param_3[9];
  uVar1 = param_4[1];
  puVar3 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar3 = param_4;
  }
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  pcStack_d8 = FUN_10a282dc4;
  ppuStack_d0 = &PTR_DAT_110ae9180;
  FUN_10a6ac5b4(puVar2 + 3,param_2,0x18,"POST",4,&uStack_98,puVar3,uVar1,&pcStack_d8);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  puVar3 = &uStack_98;
  FUN_10a042634();
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
    FUN_10a042634(&uStack_98);
    __ZNSt3__119__shared_weak_countD2Ev(puVar2);
    __ZdlPv();
    __Unwind_Resume();
    *puVar3 = &PTR_FUN_110c11170;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10a6d284c; end: 10a6d285b;  */

void FUN_10a6d284c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c11170;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6d285c; end: 10a6d287b;  */

void FUN_10a6d285c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c11170;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d287c; end: 10a6d288b;  */

void FUN_10a6d287c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6d2884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6d288c; end: 10a6d459b;  */

void FUN_10a6d288c(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  float *pfVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined *puVar10;
  float *pfVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puStack_b38;
  long *plStack_b30;
  undefined1 auStack_b28 [8];
  long *plStack_b20;
  undefined8 *puStack_b18;
  long *plStack_b10;
  undefined8 *puStack_b08;
  long *plStack_b00;
  undefined8 *puStack_af8;
  long *plStack_af0;
  undefined8 *puStack_ae8;
  long *plStack_ae0;
  undefined8 *puStack_ad8;
  long *plStack_ad0;
  undefined8 *puStack_ac8;
  long *plStack_ac0;
  long lStack_ab8;
  long lStack_ab0;
  undefined8 uStack_aa0;
  float *pfStack_a98;
  undefined8 uStack_a90;
  long lStack_a88;
  long lStack_a80;
  long lStack_a78;
  long lStack_a70;
  long lStack_a68;
  ulong uStack_a60;
  long *plStack_a58;
  long lStack_a50;
  long lStack_a48;
  undefined4 uStack_a38;
  undefined8 uStack_a34;
  undefined4 uStack_a2c;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined4 uStack_a08;
  undefined4 uStack_a04;
  long lStack_a00;
  long lStack_9f8;
  undefined8 *puStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined1 auStack_9d8 [4];
  int iStack_9d4;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a0;
  long lStack_998;
  undefined1 *puStack_990;
  undefined1 auStack_988 [16];
  undefined1 auStack_978 [4];
  int iStack_974;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  long lStack_940;
  long lStack_938;
  undefined1 *puStack_930;
  undefined1 auStack_928 [16];
  undefined8 uStack_918;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  long lStack_8e0;
  long lStack_8d8;
  undefined1 *puStack_8d0;
  undefined1 auStack_8c8 [16];
  undefined1 auStack_8b8 [4];
  int iStack_8b4;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  long lStack_880;
  long lStack_878;
  undefined1 *puStack_870;
  undefined1 auStack_868 [16];
  undefined1 auStack_858 [4];
  int iStack_854;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  long lStack_820;
  long lStack_818;
  undefined1 *puStack_810;
  undefined1 auStack_808 [16];
  undefined1 auStack_7f8 [4];
  int iStack_7f4;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  long lStack_7c0;
  long lStack_7b8;
  undefined1 *puStack_7b0;
  undefined1 auStack_7a8 [16];
  int iStack_798;
  int iStack_794;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  int iStack_758;
  int iStack_754;
  undefined8 uStack_750;
  undefined1 *puStack_748;
  undefined8 uStack_740;
  undefined4 auStack_738 [2];
  undefined8 *puStack_730;
  undefined8 uStack_728;
  undefined4 uStack_720;
  int iStack_71c;
  undefined8 uStack_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  long lStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined4 uStack_460;
  undefined8 uStack_45c;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  long lStack_428;
  long lStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  float *pfStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  ulong uStack_3c0;
  long *plStack_3b8;
  long alStack_3b0 [3];
  undefined1 auStack_398 [104];
  undefined1 auStack_330 [104];
  undefined1 auStack_2c8 [104];
  undefined1 auStack_260 [104];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_98;
  long lStack_88;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar7 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar7 + 0xb2) < 8) {
    *(long *)(pfVar7 + *(ulong *)(pfVar7 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar7 + 0xb4);
    *(long *)(pfVar7 + 0xb2) = *(long *)(pfVar7 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar7 + 0x96);
  }
  pfVar8 = param_2;
  FUN_10a6d459c(param_2,param_3);
  FUN_10a6d4604(param_5);
  FUN_10a36cc70(&lStack_ab8,param_2,param_4);
  FUN_10a1f7d54(&puStack_ac8,param_2,param_4 + 0x10);
  FUN_10a1f7d54(&puStack_ad8,param_2,param_4 + 0x20);
  FUN_10a1f7d54(&puStack_ae8,param_2,param_4 + 0x30);
  FUN_10a1f7d54(&puStack_af8,param_2,param_4 + 0x40);
  FUN_10a1f7d54(&puStack_b08,param_2,param_4 + 0x50);
  FUN_10a1f7d54(&puStack_b18,param_2,param_4 + 0x60);
  FUN_10a065cdc(auStack_b28,param_2,param_4 + 0x70);
  if (*(int *)(param_4 + 0x80) == 1) {
    puStack_b38 = (undefined *)0x0;
    plStack_b30 = (long *)0x0;
LAB_10a6d2a50:
    pfVar9 = param_2;
    FUN_10a05a42c(param_2,param_4 + 0x90);
    pfVar11 = param_2;
    FUN_10a05a42c(param_2,param_4 + 0xa0);
    func_0x000109898518(param_2,param_4 + 0xb0);
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66d051,&UNK_10f66d135,0x3e,&UNK_10f66d2f9);
    }
    uStack_400 = (long *)&UNK_10f66d30f;
    pfStack_3f8 = (float *)0xc;
    if (lStack_ab0 == lStack_ab8) {
      FUN_10a0edfc4(&uStack_400);
      goto LAB_10a6d4284;
    }
    fVar26 = *pfVar9;
    fVar30 = pfVar9[1];
    lVar34 = *(long *)pfVar11;
    iStack_758 = (int)fVar26;
    iStack_754 = (int)fVar30;
    FUN_10a6b7fc8(&uStack_400,auStack_b28,&iStack_758);
    pfVar9 = pfVar8 + 0xc;
    if (*(long *)(pfVar8 + 0x1a) != 0) {
      piVar1 = (int *)(*(long *)(pfVar8 + 0x1a) + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(pfVar9);
      }
    }
    pfVar8[0x1a] = 0.0;
    pfVar8[0x1b] = 0.0;
    pfVar8[0x12] = 0.0;
    pfVar8[0x13] = 0.0;
    pfVar8[0x10] = 0.0;
    pfVar8[0x11] = 0.0;
    pfVar8[0x16] = 0.0;
    pfVar8[0x17] = 0.0;
    pfVar8[0x14] = 0.0;
    pfVar8[0x15] = 0.0;
    if (0 < (int)pfVar8[0xd]) {
      lVar14 = 0;
      lVar18 = *(long *)(pfVar8 + 0x1c);
      do {
        *(undefined4 *)(lVar18 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)pfVar8[0xd]);
    }
    *(float **)(pfVar8 + 0xe) = pfStack_3f8;
    *(long **)(pfVar8 + 0xc) = uStack_400;
    *(long *)(pfVar8 + 0x12) = lStack_3e8;
    *(long *)(pfVar8 + 0x10) = lStack_3f0;
    *(long *)(pfVar8 + 0x16) = lStack_3d8;
    *(long *)(pfVar8 + 0x14) = lStack_3e0;
    *(long *)(pfVar8 + 0x1a) = lStack_3c8;
    *(long *)(pfVar8 + 0x18) = lStack_3d0;
    pfVar19 = *(float **)(pfVar8 + 0x1e);
    pfVar2 = pfVar8 + 0x20;
    iVar32 = (int)uStack_400._4_4_;
    if (pfVar19 != pfVar2) {
      if (pfVar19 != (float *)0x0) {
        _free(*(long *)(pfVar19 + -2));
      }
      *(float **)(pfVar8 + 0x1c) = pfVar8 + 0xe;
      *(float **)(pfVar8 + 0x1e) = pfVar2;
      pfVar19 = pfVar2;
      iVar32 = (int)uStack_400._4_4_;
    }
    if (iVar32 < 3) {
      puVar15 = (undefined8 *)((ulong)&uStack_400 | 4);
      *(long *)pfVar19 = *plStack_3b8;
      *(long *)(pfVar19 + 2) = plStack_3b8[1];
      uStack_400 = (long *)CONCAT44(uStack_400._4_4_,0x42ff0000);
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      if (plStack_3b8 != alStack_3b0) {
        _free(plStack_3b8[-1]);
      }
    }
    else {
      *(ulong *)(pfVar8 + 0x1c) = uStack_3c0;
      *(long **)(pfVar8 + 0x1e) = plStack_3b8;
    }
    uStack_400._0_4_ = 9.477423e-38;
    lStack_3f0 = 0;
    pfStack_3f8 = pfVar9;
    func_0x000109a41858(0x3ff0000000000000,0,pfVar9,&uStack_400,0x18);
    lStack_3f0 = 0;
    uStack_400 = (long *)CONCAT44(uStack_400._4_4_,0x1010000);
    uStack_1f8._0_4_ = 0x2010000;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    pfStack_3f8 = pfVar9;
    uStack_1f0 = pfVar9;
    func_0x000109ac9fc8(&uStack_400,&uStack_1f8,3,0);
    lVar14 = *(long *)(puStack_b38 + 0x298);
    lVar18 = *(long *)pfVar11;
    fVar36 = *(float *)(lVar14 + 0x30);
    uVar37 = *(undefined8 *)(lVar14 + 0x2c);
    uVar28 = *(undefined8 *)(lVar14 + 0x24);
    FUN_10a0f4720(&uStack_400,&lStack_ab8,0x44);
    pfVar11 = pfVar8 + 0x2c;
    if (pfVar11 != (float *)&uStack_400) {
      if (lStack_3c8 != 0) {
        piVar1 = (int *)(lStack_3c8 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(long *)(pfVar8 + 0x3a) != 0) {
        piVar1 = (int *)(*(long *)(pfVar8 + 0x3a) + 0x14);
        do {
          iVar32 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar32 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar32 + -1 == 0) {
          func_0x000109a848d4(pfVar11);
        }
      }
      pfVar8[0x3a] = 0.0;
      pfVar8[0x3b] = 0.0;
      pfVar8[0x32] = 0.0;
      pfVar8[0x33] = 0.0;
      pfVar8[0x30] = 0.0;
      pfVar8[0x31] = 0.0;
      pfVar8[0x36] = 0.0;
      pfVar8[0x37] = 0.0;
      pfVar8[0x34] = 0.0;
      pfVar8[0x35] = 0.0;
      if ((int)pfVar8[0x2d] < 1) {
        *pfVar11 = (float)uStack_400;
LAB_10a6d2d30:
        if (2 < (int)uStack_400._4_4_) goto LAB_10a6d2d64;
        pfVar8[0x2d] = uStack_400._4_4_;
        *(float **)(pfVar8 + 0x2e) = pfStack_3f8;
        plVar21 = *(long **)(pfVar8 + 0x3e);
        *plVar21 = *plStack_3b8;
        plVar21[1] = plStack_3b8[1];
      }
      else {
        lVar14 = 0;
        lVar20 = *(long *)(pfVar8 + 0x3c);
        do {
          *(undefined4 *)(lVar20 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)pfVar8[0x2d]);
        *pfVar11 = (float)uStack_400;
        if ((int)pfVar8[0x2d] < 3) goto LAB_10a6d2d30;
LAB_10a6d2d64:
        func_0x000109a84868(pfVar11,&uStack_400);
      }
      *(long *)(pfVar8 + 0x32) = lStack_3e8;
      *(long *)(pfVar8 + 0x30) = lStack_3f0;
      *(long *)(pfVar8 + 0x36) = lStack_3d8;
      *(long *)(pfVar8 + 0x34) = lStack_3e0;
      *(long *)(pfVar8 + 0x3a) = lStack_3c8;
      *(long *)(pfVar8 + 0x38) = lStack_3d0;
    }
    if (lStack_3c8 != 0) {
      piVar1 = (int *)(lStack_3c8 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_400);
      }
    }
    uVar35 = CONCAT44((int)(float)((ulong)lVar34 >> 0x20),(int)(float)lVar34);
    fVar31 = (float)uVar28;
    fVar27 = (float)lVar18 / ((float)uVar37 - fVar31);
    fVar29 = (float)((ulong)lVar18 >> 0x20) /
             ((float)((ulong)uVar37 >> 0x20) - (float)((ulong)uVar28 >> 0x20));
    iVar32 = (int)(float)(int)((-1.0 - fVar31) * fVar27);
    iVar33 = (int)(float)(int)((fVar36 + -1.0) * fVar29);
    uVar37 = NEON_smax(CONCAT44(iVar33,iVar32),0,4);
    uVar28 = NEON_smin(CONCAT44(iVar33 + (int)(float)(int)(fVar29 + fVar29),
                                iVar32 + (int)(float)(int)(fVar27 + fVar27)),uVar35,4);
    lStack_3c8 = 0;
    lStack_3e8 = 0;
    lStack_3f0 = 0;
    lStack_3d8 = 0;
    lStack_3e0 = 0;
    if (0 < (int)uStack_400._4_4_) {
      lVar34 = 0;
      do {
        *(undefined4 *)(uStack_3c0 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < (int)uStack_400._4_4_);
    }
    uVar28 = CONCAT44((int)((ulong)uVar28 >> 0x20) - (int)((ulong)uVar37 >> 0x20),
                      (int)uVar28 - (int)uVar37);
    uVar38 = NEON_smax(CONCAT44(-iVar33,-iVar32),0,4);
    if (plStack_3b8 != alStack_3b0 && plStack_3b8 != (long *)0x0) {
      _free(plStack_3b8[-1]);
    }
    iStack_798 = (int)fVar26;
    iStack_794 = (int)fVar30;
    uStack_790 = uVar35;
    uStack_788 = CONCAT44(iVar33,iVar32);
    uStack_780 = CONCAT44((int)(float)(int)(fVar29 + fVar29),(int)(float)(int)(fVar27 + fVar27));
    uStack_778 = uVar37;
    uStack_770 = uVar28;
    uStack_768 = uVar38;
    uStack_760 = uVar28;
    FUN_10a6b9378(auStack_7f8,&iStack_798,*puStack_ac8);
    FUN_10a6b9378(auStack_858,&iStack_798,*puStack_ad8);
    FUN_10a6b9378(auStack_8b8,&iStack_798,*puStack_ae8);
    FUN_10a6b9378(&uStack_918,&iStack_798,*puStack_af8);
    FUN_10a6b9378(auStack_978,&iStack_798,*puStack_b08);
    FUN_10a6b9378(auStack_9d8,&iStack_798,*puStack_b18);
    uStack_1f8._0_4_ = 0;
    uStack_1f8._4_4_ = 0x3ff00000;
    uStack_1f0._0_4_ = 0;
    uStack_1f0._4_4_ = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    func_0x000109a7cf94(&uStack_400,&uStack_1f8,auStack_9d8);
    uStack_a38 = 0x42ff0000;
    lStack_9f8 = (long)&uStack_a34 + 4;
    uStack_a2c = 0;
    uStack_a28 = 0;
    uStack_a34 = 0;
    lStack_a00 = 0;
    uStack_a04 = 0;
    uStack_a0c = 0;
    uStack_a08 = 0;
    uStack_a14 = 0;
    uStack_a10 = 0;
    uStack_a1c = 0;
    uStack_a18 = 0;
    uStack_a24 = 0;
    uStack_a20 = 0;
    uStack_9e8 = 0;
    uStack_9e0 = 0;
    puStack_9f0 = &uStack_9e8;
    (**(code **)(*uStack_400 + 0x18))(uStack_400,&uStack_400,&uStack_a38,0xffffffff);
    func_0x00010918eb6c(&uStack_400);
    uStack_1f8._0_4_ = 0xa6d5fc0;
    uStack_1f8._4_4_ = 1;
    uStack_1f0._0_4_ = 0x10c11218;
    uStack_1f0._4_4_ = 1;
    uStack_1e8 = SUB84(pfVar8,0);
    uStack_1e4 = (undefined4)((ulong)pfVar8 >> 0x20);
    FUN_109ff0db4(&uStack_400,pfVar9,pfVar11,&uStack_a38,auStack_858,param_2,&uStack_1f8);
    puVar15 = (undefined8 *)((ulong)&uStack_400 | 4);
    uVar23 = (ulong)&uStack_aa0 | 8;
    pfStack_a98 = pfStack_3f8;
    uStack_aa0 = uStack_400;
    lStack_a88 = lStack_3e8;
    uStack_a90 = lStack_3f0;
    lStack_a78 = lStack_3d8;
    lStack_a80 = lStack_3e0;
    lStack_a68 = lStack_3c8;
    lStack_a70 = lStack_3d0;
    lStack_a50 = 0;
    lStack_a48 = 0;
    if ((int)uStack_400._4_4_ < 3) {
      lStack_a50 = *plStack_3b8;
      lStack_a48 = plStack_3b8[1];
      uStack_400 = (long *)CONCAT44(uStack_400._4_4_,0x42ff0000);
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      uStack_a60 = uVar23;
      plStack_a58 = &lStack_a50;
      if (plStack_3b8 != alStack_3b0) {
        _free(plStack_3b8[-1]);
      }
    }
    else {
      uStack_a60 = uStack_3c0;
      plStack_a58 = plStack_3b8;
      plStack_3b8 = alStack_3b0;
      uStack_400 = (long *)CONCAT44(uStack_400._4_4_,0x42ff0000);
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      uStack_3c0 = (ulong)&uStack_400 | 8;
    }
    (**(code **)CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0))(&uStack_1f0);
    FUN_109ff6b38(&uStack_400,0x3ff0000000000000,&uStack_aa0,pfVar11);
    if (lStack_a68 != 0) {
      piVar1 = (int *)(lStack_a68 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_aa0);
      }
    }
    if (0 < uStack_aa0._4_4_) {
      lVar34 = 0;
      do {
        *(undefined4 *)(uStack_a60 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < uStack_aa0._4_4_);
    }
    pfStack_a98 = pfStack_3f8;
    uStack_aa0 = uStack_400;
    lStack_a88 = lStack_3e8;
    uStack_a90 = lStack_3f0;
    lStack_a78 = lStack_3d8;
    lStack_a80 = lStack_3e0;
    lStack_a68 = lStack_3c8;
    lStack_a70 = lStack_3d0;
    uVar24 = uStack_a60;
    plVar21 = plStack_a58;
    if ((plStack_a58 != &lStack_a50) &&
       (uVar24 = uVar23, plVar21 = &lStack_a50, plStack_a58 != (long *)0x0)) {
      _free(plStack_a58[-1]);
    }
    plStack_a58 = plVar21;
    uStack_a60 = uVar24;
    plVar21 = plStack_3b8;
    if ((int)uStack_400._4_4_ < 3) {
      puVar15 = (undefined8 *)((ulong)&uStack_400 | 4);
      *plStack_a58 = *plStack_3b8;
      plStack_a58[1] = plVar21[1];
      uStack_400 = (long *)CONCAT44(uStack_400._4_4_,0x42ff0000);
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      if (plVar21 != alStack_3b0) {
        _free(plVar21[-1]);
      }
    }
    else {
      uStack_a60 = uStack_3c0;
      plStack_a58 = plStack_3b8;
    }
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f8._0_4_ = 0x1010000;
    uStack_1f0 = (float *)&uStack_aa0;
    FUN_10a0f4340(&uStack_400,&uStack_1f8,5);
    if (lStack_a68 != 0) {
      piVar1 = (int *)(lStack_a68 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_aa0);
      }
    }
    if (0 < uStack_aa0._4_4_) {
      lVar34 = 0;
      do {
        *(undefined4 *)(uStack_a60 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < uStack_aa0._4_4_);
    }
    pfStack_a98 = pfStack_3f8;
    uStack_aa0 = uStack_400;
    lStack_a88 = lStack_3e8;
    uStack_a90 = lStack_3f0;
    lStack_a78 = lStack_3d8;
    lStack_a80 = lStack_3e0;
    lStack_a68 = lStack_3c8;
    lStack_a70 = lStack_3d0;
    uVar24 = uStack_a60;
    plVar21 = plStack_a58;
    if ((plStack_a58 != &lStack_a50) &&
       (uVar24 = uVar23, plVar21 = &lStack_a50, plStack_a58 != (long *)0x0)) {
      _free(plStack_a58[-1]);
    }
    plStack_a58 = plVar21;
    uStack_a60 = uVar24;
    plVar21 = plStack_3b8;
    if ((int)uStack_400._4_4_ < 3) {
      puVar15 = (undefined8 *)((ulong)&uStack_400 | 4);
      *plStack_a58 = *plStack_3b8;
      plStack_a58[1] = plVar21[1];
      uStack_400 = (long *)CONCAT44(uStack_400._4_4_,0x42ff0000);
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      if (plVar21 != alStack_3b0) {
        _free(plVar21[-1]);
      }
    }
    else {
      uStack_a60 = uStack_3c0;
      plStack_a58 = plStack_3b8;
    }
    FUN_109ff28e0(0x3c23d70a,&uStack_aa0,pfVar11,0);
    func_0x000109a7c6f4(&uStack_720,auStack_7f8,auStack_858);
    func_0x000109a7c958(&uStack_5c0,&uStack_720,auStack_8b8);
    func_0x000109a7c958(&uStack_1f8,&uStack_5c0,&uStack_918);
    func_0x000109a7c958(&uStack_400,&uStack_1f8,auStack_978);
    uStack_460 = 0x42ff0000;
    lStack_420 = (long)&uStack_45c + 4;
    uStack_454 = 0;
    uStack_450 = 0;
    uStack_45c = 0;
    lStack_428 = 0;
    uStack_42c = 0;
    uStack_434 = 0;
    uStack_430 = 0;
    uStack_43c = 0;
    uStack_438 = 0;
    uStack_444 = 0;
    uStack_440 = 0;
    uStack_44c = 0;
    uStack_448 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    puStack_418 = &uStack_410;
    (**(code **)(*uStack_400 + 0x18))(uStack_400,&uStack_400,&uStack_460,0xffffffff);
    func_0x00010918eb6c(&uStack_400);
    func_0x00010918eb6c(&uStack_1f8);
    func_0x00010918eb6c(&uStack_5c0);
    func_0x00010918eb6c(&uStack_720);
    uStack_5b0 = 0;
    uStack_5ac = 0;
    uStack_5c0._0_4_ = 0x1010000;
    uStack_5b8 = &uStack_460;
    func_0x000109a8239c(&uStack_400,0x3ff0000000000000,&uStack_aa0,&uStack_5c0);
    uStack_1f8._0_4_ = 0x42ff0000;
    puStack_1b8 = &uStack_1f0;
    uStack_1f0._4_4_ = 0;
    uStack_1e8 = 0;
    uStack_1f8._4_4_ = 0;
    uStack_1f0._0_4_ = 0;
    lStack_1c0 = 0;
    uStack_1c4 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    puStack_1b0 = &uStack_1a8;
    (**(code **)(*uStack_400 + 0x18))(uStack_400,&uStack_400,&uStack_1f8,0xffffffff);
    puVar15 = &uStack_400;
    func_0x00010918eb6c(puVar15);
    uStack_5c0._0_4_ = 0x42ff0000;
    puStack_580 = &uStack_5b8;
    uStack_5b8._4_4_ = 0;
    uStack_5b0 = 0;
    uStack_5c0._4_4_ = 0;
    uStack_5b8._0_4_ = 0;
    uStack_5a4 = 0;
    uStack_5a0 = 0;
    uStack_5ac = 0;
    uStack_5a8 = 0;
    uStack_594 = 0;
    uStack_59c = 0;
    uStack_598 = 0;
    lStack_588 = 0;
    uStack_590 = 0;
    uStack_58c = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    lStack_3f0 = 0;
    uStack_400 = (long *)CONCAT44(uStack_400._4_4_,0x1010000);
    pfStack_3f8 = (float *)&uStack_1f8;
    uStack_710 = 0;
    uStack_70c = 0;
    uStack_720 = 0x1010000;
    uStack_718 = &uStack_460;
    auStack_738[0] = 0x2010000;
    uStack_728 = 0;
    uStack_750 = 0x3ff0000000000000;
    puStack_730 = &uStack_5c0;
    puStack_578 = &uStack_570;
    func_0x000109a91d90();
    func_0x000109a293c4(&uStack_400,&uStack_720,auStack_738,puVar15,0xffffffff,&PTR_DAT_1132e8cd0,1,
                        &uStack_750);
    uStack_728 = 0;
    auStack_738[0] = 0x1010000;
    puStack_730 = &uStack_5c0;
    func_0x000109a8239c(&uStack_400,0x3ff0000000000000,auStack_7f8,auStack_738);
    uStack_720 = 0x42ff0000;
    puStack_6e0 = &uStack_718;
    uStack_718._4_4_ = 0;
    uStack_710 = 0;
    iStack_71c = 0;
    uStack_718._0_4_ = 0;
    lStack_6e8 = 0;
    uStack_6ec = 0;
    uStack_6f4 = 0;
    uStack_6f0 = 0;
    uStack_6fc = 0;
    uStack_6f8 = 0;
    uStack_704 = 0;
    uStack_700 = 0;
    uStack_70c = 0;
    uStack_708 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    puStack_6d8 = &uStack_6d0;
    (**(code **)(*uStack_400 + 0x18))(uStack_400,&uStack_400,&uStack_720,0xffffffff);
    uStack_750 = CONCAT44(uStack_750._4_4_,0xc2010000);
    puStack_748 = auStack_7f8;
    uStack_740 = 0;
    func_0x000109a479a0(&uStack_720,&uStack_750);
    if (lStack_6e8 != 0) {
      piVar1 = (int *)(lStack_6e8 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_720);
      }
    }
    lStack_6e8 = 0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_710 = 0;
    uStack_70c = 0;
    uStack_6f8 = 0;
    uStack_6f4 = 0;
    uStack_700 = 0;
    uStack_6fc = 0;
    if (0 < iStack_71c) {
      lVar34 = 0;
      do {
        *(undefined4 *)((long)puStack_6e0 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < iStack_71c);
    }
    if (puStack_6d8 != &uStack_6d0 && puStack_6d8 != (undefined8 *)0x0) {
      _free(puStack_6d8[-1]);
    }
    func_0x00010918eb6c(&uStack_400);
    uStack_728 = 0;
    auStack_738[0] = 0x1010000;
    puStack_730 = &uStack_5c0;
    func_0x000109a8239c(&uStack_400,0x3ff0000000000000,auStack_858,auStack_738);
    uStack_720 = 0x42ff0000;
    puStack_6e0 = &uStack_718;
    uStack_718._4_4_ = 0;
    uStack_710 = 0;
    iStack_71c = 0;
    uStack_718._0_4_ = 0;
    lStack_6e8 = 0;
    uStack_6ec = 0;
    uStack_6f4 = 0;
    uStack_6f0 = 0;
    uStack_6fc = 0;
    uStack_6f8 = 0;
    uStack_704 = 0;
    uStack_700 = 0;
    uStack_70c = 0;
    uStack_708 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    puStack_6d8 = &uStack_6d0;
    (**(code **)(*uStack_400 + 0x18))(uStack_400,&uStack_400,&uStack_720,0xffffffff);
    uStack_750 = CONCAT44(uStack_750._4_4_,0xc2010000);
    puStack_748 = auStack_858;
    uStack_740 = 0;
    func_0x000109a479a0(&uStack_720,&uStack_750);
    if (lStack_6e8 != 0) {
      piVar1 = (int *)(lStack_6e8 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_720);
      }
    }
    lStack_6e8 = 0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_710 = 0;
    uStack_70c = 0;
    uStack_6f8 = 0;
    uStack_6f4 = 0;
    uStack_700 = 0;
    uStack_6fc = 0;
    if (0 < iStack_71c) {
      lVar34 = 0;
      do {
        *(undefined4 *)((long)puStack_6e0 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < iStack_71c);
    }
    if (puStack_6d8 != &uStack_6d0 && puStack_6d8 != (undefined8 *)0x0) {
      _free(puStack_6d8[-1]);
    }
    func_0x00010918eb6c(&uStack_400);
    uStack_728 = 0;
    auStack_738[0] = 0x1010000;
    puStack_730 = &uStack_5c0;
    func_0x000109a8239c(&uStack_400,0x3ff0000000000000,auStack_8b8,auStack_738);
    uStack_720 = 0x42ff0000;
    puStack_6e0 = &uStack_718;
    uStack_718._4_4_ = 0;
    uStack_710 = 0;
    iStack_71c = 0;
    uStack_718._0_4_ = 0;
    lStack_6e8 = 0;
    uStack_6ec = 0;
    uStack_6f4 = 0;
    uStack_6f0 = 0;
    uStack_6fc = 0;
    uStack_6f8 = 0;
    uStack_704 = 0;
    uStack_700 = 0;
    uStack_70c = 0;
    uStack_708 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    puStack_6d8 = &uStack_6d0;
    (**(code **)(*uStack_400 + 0x18))(uStack_400,&uStack_400,&uStack_720,0xffffffff);
    uStack_750 = CONCAT44(uStack_750._4_4_,0xc2010000);
    puStack_748 = auStack_8b8;
    uStack_740 = 0;
    func_0x000109a479a0(&uStack_720,&uStack_750);
    if (lStack_6e8 != 0) {
      piVar1 = (int *)(lStack_6e8 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_720);
      }
    }
    lStack_6e8 = 0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_710 = 0;
    uStack_70c = 0;
    uStack_6f8 = 0;
    uStack_6f4 = 0;
    uStack_700 = 0;
    uStack_6fc = 0;
    if (0 < iStack_71c) {
      lVar34 = 0;
      do {
        *(undefined4 *)((long)puStack_6e0 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < iStack_71c);
    }
    if (puStack_6d8 != &uStack_6d0 && puStack_6d8 != (undefined8 *)0x0) {
      _free(puStack_6d8[-1]);
    }
    func_0x00010918eb6c(&uStack_400);
    uStack_728 = 0;
    auStack_738[0] = 0x1010000;
    puStack_730 = &uStack_5c0;
    func_0x000109a8239c(&uStack_400,0x3ff0000000000000,auStack_978,auStack_738);
    uStack_720 = 0x42ff0000;
    puStack_6e0 = &uStack_718;
    uStack_718._4_4_ = 0;
    uStack_710 = 0;
    iStack_71c = 0;
    uStack_718._0_4_ = 0;
    lStack_6e8 = 0;
    uStack_6ec = 0;
    uStack_6f4 = 0;
    uStack_6f0 = 0;
    uStack_6fc = 0;
    uStack_6f8 = 0;
    uStack_704 = 0;
    uStack_700 = 0;
    uStack_70c = 0;
    uStack_708 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    puStack_6d8 = &uStack_6d0;
    (**(code **)(*uStack_400 + 0x18))(uStack_400,&uStack_400,&uStack_720,0xffffffff);
    uStack_750 = CONCAT44(uStack_750._4_4_,0xc2010000);
    puStack_748 = auStack_978;
    uStack_740 = 0;
    func_0x000109a479a0(&uStack_720,&uStack_750);
    if (lStack_6e8 != 0) {
      piVar1 = (int *)(lStack_6e8 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_720);
      }
    }
    lStack_6e8 = 0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_710 = 0;
    uStack_70c = 0;
    uStack_6f8 = 0;
    uStack_6f4 = 0;
    uStack_700 = 0;
    uStack_6fc = 0;
    if (0 < iStack_71c) {
      lVar34 = 0;
      do {
        *(undefined4 *)((long)puStack_6e0 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < iStack_71c);
    }
    if (puStack_6d8 != &uStack_6d0 && puStack_6d8 != (undefined8 *)0x0) {
      _free(puStack_6d8[-1]);
    }
    func_0x00010918eb6c(&uStack_400);
    if (lStack_588 != 0) {
      piVar1 = (int *)(lStack_588 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_5c0);
      }
    }
    lStack_588 = 0;
    uStack_5a8 = 0;
    uStack_5a4 = 0;
    uStack_5b0 = 0;
    uStack_5ac = 0;
    uStack_598 = 0;
    uStack_594 = 0;
    uStack_5a0 = 0;
    uStack_59c = 0;
    if (0 < uStack_5c0._4_4_) {
      lVar34 = 0;
      do {
        *(undefined4 *)((long)puStack_580 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < uStack_5c0._4_4_);
    }
    if (puStack_578 != &uStack_570 && puStack_578 != (undefined8 *)0x0) {
      _free(puStack_578[-1]);
    }
    if (lStack_1c0 != 0) {
      piVar1 = (int *)(lStack_1c0 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_1f8);
      }
    }
    lStack_1c0 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    if (0 < uStack_1f8._4_4_) {
      lVar34 = 0;
      do {
        *(undefined4 *)((long)puStack_1b8 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < uStack_1f8._4_4_);
    }
    if (puStack_1b0 != &uStack_1a8 && puStack_1b0 != (undefined8 *)0x0) {
      _free(puStack_1b0[-1]);
    }
    if (lStack_428 != 0) {
      piVar1 = (int *)(lStack_428 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_460);
      }
    }
    lStack_428 = 0;
    uStack_448 = 0;
    uStack_444 = 0;
    uStack_450 = 0;
    uStack_44c = 0;
    uStack_438 = 0;
    uStack_434 = 0;
    uStack_440 = 0;
    uStack_43c = 0;
    if (0 < (int)uStack_45c) {
      lVar34 = 0;
      do {
        *(undefined4 *)(lStack_420 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < (int)uStack_45c);
    }
    if (puStack_418 != &uStack_410 && puStack_418 != (undefined8 *)0x0) {
      _free(puStack_418[-1]);
    }
    uStack_400 = (long *)CONCAT44(uStack_400._4_4_,0x2010000);
    pfStack_3f8 = (float *)&uStack_918;
    lStack_3f0 = 0;
    func_0x000109a479a0(&uStack_aa0,&uStack_400);
    func_0x00010a6c8a9c(&uStack_400,1,auStack_7f8);
    func_0x00010a6c8a9c(auStack_398,0,auStack_858);
    func_0x00010a6c8a9c(auStack_330,2,auStack_8b8);
    func_0x00010a6c8a9c(auStack_2c8,3,&uStack_918);
    func_0x00010a6c8a9c(auStack_260,10,auStack_978);
    lVar34 = 0;
    uStack_5b0 = 0;
    uStack_5ac = 0;
    uStack_5b8._0_4_ = 0;
    uStack_5b8._4_4_ = 0;
    puVar15 = &uStack_1f8;
    uStack_5c0 = &uStack_5b8;
    do {
      func_0x000109ffec24(&uStack_5c0,&uStack_5b8,(long)&uStack_400 + lVar34,
                          (long)&uStack_400 + lVar34);
      lVar34 = lVar34 + 0x68;
    } while (lVar34 != 0x208);
    FUN_109feeac0(&uStack_1f8,&uStack_5c0);
    pfVar9 = pfVar8 + 0x26;
    FUN_109fff0a0(pfVar8 + 0x24,*(long *)pfVar9);
    lVar34 = CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0);
    *(undefined8 **)(pfVar8 + 0x24) = uStack_1f8;
    *(long *)(pfVar8 + 0x26) = lVar34;
    *(long *)(pfVar8 + 0x28) = CONCAT44(uStack_1e4,uStack_1e8);
    if (CONCAT44(uStack_1e4,uStack_1e8) == 0) {
      *(float **)(pfVar8 + 0x24) = pfVar9;
    }
    else {
      uStack_1f8 = &uStack_1f0;
      *(float **)(lVar34 + 0x10) = pfVar9;
      uStack_1f0._0_4_ = 0;
      uStack_1f0._4_4_ = 0;
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      lVar34 = 0;
    }
    *(long *)(pfVar8 + 0x2a) = CONCAT44(uStack_1dc,uStack_1e0);
    FUN_109fff0a0(&uStack_1f8,lVar34);
    FUN_109fff0a0(&uStack_5c0,CONCAT44(uStack_5b8._4_4_,(undefined4)uStack_5b8));
    do {
      if (puVar15[-5] != 0) {
        piVar1 = (int *)(puVar15[-5] + 0x14);
        do {
          iVar32 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar32 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar32 + -1 == 0) {
          func_0x000109a848d4(puVar15 + -0xc);
        }
      }
      puVar15[-5] = 0;
      puVar15[-9] = 0;
      puVar15[-10] = 0;
      puVar15[-7] = 0;
      puVar15[-8] = 0;
      if (0 < *(int *)((long)puVar15 + -0x5c)) {
        lVar34 = 0;
        lVar14 = puVar15[-4];
        do {
          *(undefined4 *)(lVar14 + lVar34 * 4) = 0;
          lVar34 = lVar34 + 1;
        } while (lVar34 < *(int *)((long)puVar15 + -0x5c));
      }
      puVar16 = (undefined8 *)puVar15[-3];
      if (puVar16 != puVar15 + -2 && puVar16 != (undefined8 *)0x0) {
        _free(puVar16[-1]);
      }
      puVar15 = puVar15 + -0xd;
    } while (puVar15 != &uStack_400);
    if (lStack_a68 != 0) {
      piVar1 = (int *)(lStack_a68 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_aa0);
      }
    }
    lStack_a68 = 0;
    lStack_a88 = 0;
    uStack_a90 = 0;
    lStack_a78 = 0;
    lStack_a80 = 0;
    if (0 < uStack_aa0._4_4_) {
      lVar34 = 0;
      do {
        *(undefined4 *)(uStack_a60 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < uStack_aa0._4_4_);
    }
    if (plStack_a58 != &lStack_a50 && plStack_a58 != (long *)0x0) {
      _free(plStack_a58[-1]);
    }
    if (lStack_a00 != 0) {
      piVar1 = (int *)(lStack_a00 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_a38);
      }
    }
    lStack_a00 = 0;
    uStack_a20 = 0;
    uStack_a1c = 0;
    uStack_a28 = 0;
    uStack_a24 = 0;
    uStack_a10 = 0;
    uStack_a0c = 0;
    uStack_a18 = 0;
    uStack_a14 = 0;
    if (0 < (int)uStack_a34) {
      lVar34 = 0;
      do {
        *(undefined4 *)(lStack_9f8 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < (int)uStack_a34);
    }
    if (puStack_9f0 != &uStack_9e8 && puStack_9f0 != (undefined8 *)0x0) {
      _free(puStack_9f0[-1]);
    }
    if (lStack_9a0 != 0) {
      piVar1 = (int *)(lStack_9a0 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(auStack_9d8);
      }
    }
    lStack_9a0 = 0;
    uStack_9c0 = 0;
    uStack_9c8 = 0;
    uStack_9b0 = 0;
    uStack_9b8 = 0;
    if (0 < iStack_9d4) {
      lVar34 = 0;
      do {
        *(undefined4 *)(lStack_998 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < iStack_9d4);
    }
    if (puStack_990 != auStack_988 && puStack_990 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_990 + -8));
    }
    if (lStack_940 != 0) {
      piVar1 = (int *)(lStack_940 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(auStack_978);
      }
    }
    lStack_940 = 0;
    uStack_960 = 0;
    uStack_968 = 0;
    uStack_950 = 0;
    uStack_958 = 0;
    if (0 < iStack_974) {
      lVar34 = 0;
      do {
        *(undefined4 *)(lStack_938 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < iStack_974);
    }
    if (puStack_930 != auStack_928 && puStack_930 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_930 + -8));
    }
    if (lStack_8e0 != 0) {
      piVar1 = (int *)(lStack_8e0 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_918);
      }
    }
    lStack_8e0 = 0;
    uStack_900 = 0;
    uStack_908 = 0;
    uStack_8f0 = 0;
    uStack_8f8 = 0;
    if (0 < uStack_918._4_4_) {
      lVar34 = 0;
      do {
        *(undefined4 *)(lStack_8d8 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < uStack_918._4_4_);
    }
    if (puStack_8d0 != auStack_8c8 && puStack_8d0 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_8d0 + -8));
    }
    if (lStack_880 != 0) {
      piVar1 = (int *)(lStack_880 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(auStack_8b8);
      }
    }
    lStack_880 = 0;
    uStack_8a0 = 0;
    uStack_8a8 = 0;
    uStack_890 = 0;
    uStack_898 = 0;
    if (0 < iStack_8b4) {
      lVar34 = 0;
      do {
        *(undefined4 *)(lStack_878 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < iStack_8b4);
    }
    if (puStack_870 != auStack_868 && puStack_870 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_870 + -8));
    }
    if (lStack_820 != 0) {
      piVar1 = (int *)(lStack_820 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(auStack_858);
      }
    }
    lStack_820 = 0;
    uStack_840 = 0;
    uStack_848 = 0;
    uStack_830 = 0;
    uStack_838 = 0;
    if (0 < iStack_854) {
      lVar34 = 0;
      do {
        *(undefined4 *)(lStack_818 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < iStack_854);
    }
    if (puStack_810 != auStack_808 && puStack_810 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_810 + -8));
    }
    if (lStack_7c0 != 0) {
      piVar1 = (int *)(lStack_7c0 + 0x14);
      do {
        iVar32 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar32 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(auStack_7f8);
      }
    }
    lStack_7c0 = 0;
    uStack_7e0 = 0;
    uStack_7e8 = 0;
    uStack_7d0 = 0;
    uStack_7d8 = 0;
    if (0 < iStack_7f4) {
      lVar34 = 0;
      do {
        *(undefined4 *)(lStack_7b8 + lVar34 * 4) = 0;
        lVar34 = lVar34 + 1;
      } while (lVar34 < iStack_7f4);
    }
    if (puStack_7b0 != auStack_7a8 && puStack_7b0 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_7b0 + -8));
    }
    plVar21 = plStack_b30;
    if (plStack_b30 != (long *)0x0) {
      plVar3 = plStack_b30 + 1;
      do {
        lVar34 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*plStack_b30 + 0x10))(plStack_b30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    if (plStack_b20 != (long *)0x0) {
      plVar21 = plStack_b20 + 1;
      do {
        lVar34 = *plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *plVar21 = lVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*plStack_b20 + 0x10))(plStack_b20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b20);
      }
    }
    if (plStack_b10 != (long *)0x0) {
      plVar21 = plStack_b10 + 1;
      do {
        lVar34 = *plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *plVar21 = lVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*plStack_b10 + 0x10))(plStack_b10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b10);
      }
    }
    if (plStack_b00 != (long *)0x0) {
      plVar21 = plStack_b00 + 1;
      do {
        lVar34 = *plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *plVar21 = lVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*plStack_b00 + 0x10))(plStack_b00);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b00);
      }
    }
    if (plStack_af0 != (long *)0x0) {
      plVar21 = plStack_af0 + 1;
      do {
        lVar34 = *plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *plVar21 = lVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*plStack_af0 + 0x10))(plStack_af0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_af0);
      }
    }
    if (plStack_ae0 != (long *)0x0) {
      plVar21 = plStack_ae0 + 1;
      do {
        lVar34 = *plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *plVar21 = lVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*plStack_ae0 + 0x10))(plStack_ae0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_ae0);
      }
    }
    if (plStack_ad0 != (long *)0x0) {
      plVar21 = plStack_ad0 + 1;
      do {
        lVar34 = *plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *plVar21 = lVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*plStack_ad0 + 0x10))(plStack_ad0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_ad0);
      }
    }
    if (plStack_ac0 != (long *)0x0) {
      plVar21 = plStack_ac0 + 1;
      do {
        lVar34 = *plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *plVar21 = lVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*plStack_ac0 + 0x10))(plStack_ac0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_ac0);
      }
    }
    if (lStack_ab8 != 0) {
      lStack_ab0 = lStack_ab8;
      __ZdlPv();
    }
    *param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      pfVar8 = pfVar7 + 0x96;
      uVar23 = *(long *)(pfVar7 + 0xb2) - 1;
      *(ulong *)(pfVar7 + 0xb2) = uVar23;
      if (uVar23 < 8) {
        uVar23 = *(ulong *)(pfVar8 + uVar23 * 2 + 6);
        if (*(ulong *)(pfVar7 + 0xb4) == uVar23) {
          return;
        }
      }
      else {
        uVar23 = *(ulong *)(*(long *)(pfVar7 + 0xae) + -8);
        *(ulong **)(pfVar7 + 0xae) = (ulong *)(*(long *)(pfVar7 + 0xae) + -8);
        if (*(ulong *)(pfVar7 + 0xb4) == uVar23) {
          return;
        }
      }
      lVar34 = *(long *)pfVar8;
      lVar14 = *(long *)(pfVar7 + 0x98);
      lVar18 = lVar14 - lVar34;
      uVar24 = lVar18 >> 4;
      if (uVar24 < uVar23) {
        uVar25 = uVar23 - uVar24;
        if ((ulong)(*(long *)(pfVar7 + 0x9a) - lVar14 >> 4) < uVar25) {
          if (uVar23 >> 0x3c == 0) {
            uVar12 = *(long *)(pfVar7 + 0x9a) - lVar34;
            uVar17 = (long)uVar12 >> 3;
            if (uVar17 <= uVar23) {
              uVar17 = uVar23;
            }
            if (0x7fffffffffffffef < uVar12) {
              uVar17 = 0xfffffffffffffff;
            }
            if (uVar17 >> 0x3c == 0) {
              lVar20 = uVar17 << 4;
              __Znwm();
              lVar14 = lVar20 + lVar18;
              _bzero(lVar14,uVar25 * 0x10);
              lVar22 = lVar14 + uVar24 * -0x10;
              _memcpy(lVar22,lVar34,lVar18);
              *(long *)pfVar8 = lVar22;
              *(ulong *)(pfVar7 + 0x98) = lVar14 + uVar25 * 0x10;
              *(ulong *)(pfVar7 + 0x9a) = lVar20 + uVar17 * 0x10;
              lStack_88 = lVar34;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar6)();
        }
        _bzero(lVar14,uVar25 * 0x10);
        *(ulong *)(pfVar7 + 0x98) = lVar14 + uVar25 * 0x10;
      }
      else if (uVar23 < uVar24) {
        lVar34 = lVar34 + uVar23 * 0x10;
        while (lVar14 != lVar34) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        *(long *)(pfVar7 + 0x98) = lVar34;
      }
code_r0x00010988c138:
      *(ulong *)(pfVar7 + 0xb4) = uVar23;
      return;
    }
    ___stack_chk_fail();
  }
  else {
    pfVar9 = param_2;
    func_0x000109898688();
    if (pfVar9 != (float *)0x0) {
      func_0x00010989879c(&uStack_400);
      if ((uStack_400 == (long *)0x0) ||
         (puVar10 = (undefined *)uStack_400,
         ___dynamic_cast(uStack_400,&PTR_DAT_110b178e0,&PTR_DAT_110c2c758,0x28),
         puVar10 == (undefined *)0x0)) {
        ppuVar13 = &puStack_b38;
      }
      else {
        plStack_b30 = (long *)pfStack_3f8;
        ppuVar13 = (undefined **)&uStack_400;
        puStack_b38 = puVar10;
      }
      *ppuVar13 = (undefined *)0x0;
      ppuVar13[1] = (undefined *)0x0;
      pfVar9 = pfStack_3f8;
      if (pfStack_3f8 != (float *)0x0) {
        plVar21 = (long *)((long)pfStack_3f8 + 8);
        do {
          lVar34 = *plVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *plVar21 = lVar34 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*(long *)pfStack_3f8 + 0x10))(pfStack_3f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pfVar9);
        }
      }
      if (puStack_b38 == (undefined *)0x0) {
        func_0x00010988bd28(&UNK_10f58251f);
        goto LAB_10a6d4284;
      }
      goto LAB_10a6d2a50;
    }
  }
  func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a6d4284:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6d4288);
  (*pcVar6)();
}



/* Entry: 10a6d459c; end: 10a6d4603;  */

void FUN_10a6d459c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long **pplVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 *extraout_x8;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long **pplVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auStack_858 [8];
  long *plStack_850;
  undefined1 auStack_848 [8];
  long *plStack_840;
  undefined1 auStack_838 [8];
  long *plStack_830;
  undefined1 auStack_828 [8];
  long *plStack_820;
  long *aplStack_818 [44];
  undefined4 uStack_6b8;
  undefined8 uStack_6b4;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  long lStack_680;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  long *aplStack_658 [44];
  undefined4 uStack_4f8;
  undefined8 uStack_4f4;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  long lStack_4c0;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long *aplStack_498 [44];
  undefined4 uStack_338;
  undefined8 uStack_334;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  long lStack_300;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long *aplStack_2d8 [44];
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long lStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  long **pplStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar15 = param_1;
  func_0x000109898688();
  if (lVar15 != 0) {
    FUN_10a053854(param_1,lVar15);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar9 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar9 == 0xc) {
    return;
  }
  plVar10 = (long *)0xc;
  uVar13 = 0;
  FUN_10a052ee0(0xc,0,puVar9);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  plVar12 = plVar10;
  FUN_10a6d459c(plVar10,uVar13);
  FUN_10a6d4dfc(param_4);
  FUN_10a065cdc(auStack_828,plVar10,puVar9);
  FUN_10a065cdc(auStack_838,plVar10,puVar9 + 0x10);
  FUN_10a065cdc(auStack_848,plVar10,puVar9 + 0x20);
  FUN_10a065cdc(auStack_858,plVar10,puVar9 + 0x30);
  FUN_10a05a42c(plVar10,puVar9 + 0x40);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66d051,&UNK_10f66d31c,0x7c,&UNK_10f66d460);
  }
  plStack_98 = (long *)CONCAT44((int)(float)((ulong)*plVar10 >> 0x20),(int)(float)*plVar10);
  FUN_10a6b98c8(aplStack_2d8,&plStack_98,auStack_828);
  uStack_178 = 0x42ff0000;
  lStack_138 = (long)&uStack_174 + 4;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_174 = 0;
  lStack_140 = 0;
  uStack_144 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  puStack_130 = &uStack_128;
  (**(code **)(*aplStack_2d8[0] + 0x18))(aplStack_2d8[0],aplStack_2d8,&uStack_178,0xffffffff);
  FUN_109feeb58(auStack_118,plVar12 + 0x12,5,&uStack_178,0);
  FUN_10a6b98c8(aplStack_498,&plStack_98,auStack_838);
  uStack_338 = 0x42ff0000;
  lStack_2f8 = (long)&uStack_334 + 4;
  uStack_32c = 0;
  uStack_328 = 0;
  uStack_334 = 0;
  lStack_300 = 0;
  uStack_304 = 0;
  uStack_30c = 0;
  uStack_308 = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_31c = 0;
  uStack_318 = 0;
  uStack_324 = 0;
  uStack_320 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  puStack_2f0 = &uStack_2e8;
  (**(code **)(*aplStack_498[0] + 0x18))(aplStack_498[0],aplStack_498,&uStack_338,0xffffffff);
  FUN_109feeb58(auStack_f8,auStack_118,6,&uStack_338,0);
  FUN_10a6b98c8(aplStack_658,&plStack_98,auStack_848);
  uStack_4f8 = 0x42ff0000;
  lStack_4b8 = (long)&uStack_4f4 + 4;
  uStack_4ec = 0;
  uStack_4e8 = 0;
  uStack_4f4 = 0;
  lStack_4c0 = 0;
  uStack_4c4 = 0;
  uStack_4cc = 0;
  uStack_4c8 = 0;
  uStack_4d4 = 0;
  uStack_4d0 = 0;
  uStack_4dc = 0;
  uStack_4d8 = 0;
  uStack_4e4 = 0;
  uStack_4e0 = 0;
  uStack_4a0 = 0;
  uStack_4a8 = 0;
  puStack_4b0 = &uStack_4a8;
  (**(code **)(*aplStack_658[0] + 0x18))(aplStack_658[0],aplStack_658,&uStack_4f8,0xffffffff);
  FUN_109feeb58(auStack_d8,auStack_f8,7,&uStack_4f8,0);
  FUN_10a6b98c8(aplStack_818,&plStack_98,auStack_858);
  uStack_6b8 = 0x42ff0000;
  lStack_678 = (long)&uStack_6b4 + 4;
  uStack_6ac = 0;
  uStack_6a8 = 0;
  uStack_6b4 = 0;
  lStack_680 = 0;
  uStack_684 = 0;
  uStack_68c = 0;
  uStack_688 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_69c = 0;
  uStack_698 = 0;
  uStack_6a4 = 0;
  uStack_6a0 = 0;
  uStack_668 = 0;
  uStack_660 = 0;
  puStack_670 = &uStack_668;
  (**(code **)(*aplStack_818[0] + 0x18))(aplStack_818[0],aplStack_818,&uStack_6b8,0xffffffff);
  FUN_109feeb58(&pplStack_b8,auStack_d8,8,&uStack_6b8,0);
  plVar10 = plVar12 + 0x13;
  FUN_109fff0a0(plVar12 + 0x12,*plVar10);
  plVar12[0x12] = (long)pplStack_b8;
  plVar12[0x13] = (long)ppuStack_b0;
  plVar12[0x14] = (long)ppuStack_a8;
  if (ppuStack_a8 == (undefined8 **)0x0) {
    plVar12[0x12] = (long)plVar10;
  }
  else {
    pplStack_b8 = (long **)&ppuStack_b0;
    ppuStack_b0[2] = plVar10;
    ppuStack_b0 = (undefined8 **)0x0;
    ppuStack_a8 = (undefined8 **)0x0;
  }
  plVar12[0x15] = lStack_a0;
  FUN_109fff0a0(&pplStack_b8,ppuStack_b0);
  if (lStack_680 != 0) {
    piVar1 = (int *)(lStack_680 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_6b8);
    }
  }
  lStack_680 = 0;
  uStack_6a0 = 0;
  uStack_69c = 0;
  uStack_6a8 = 0;
  uStack_6a4 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  if (0 < (int)uStack_6b4) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lStack_678 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uStack_6b4);
  }
  if (puStack_670 != &uStack_668 && puStack_670 != (undefined8 *)0x0) {
    _free(puStack_670[-1]);
  }
  func_0x00010918eb6c(aplStack_818);
  FUN_109fff0a0(auStack_d8,uStack_d0);
  if (lStack_4c0 != 0) {
    piVar1 = (int *)(lStack_4c0 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_4f8);
    }
  }
  lStack_4c0 = 0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  uStack_4e8 = 0;
  uStack_4e4 = 0;
  uStack_4d0 = 0;
  uStack_4cc = 0;
  uStack_4d8 = 0;
  uStack_4d4 = 0;
  if (0 < (int)uStack_4f4) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lStack_4b8 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uStack_4f4);
  }
  if (puStack_4b0 != &uStack_4a8 && puStack_4b0 != (undefined8 *)0x0) {
    _free(puStack_4b0[-1]);
  }
  func_0x00010918eb6c(aplStack_658);
  FUN_109fff0a0(auStack_f8,uStack_f0);
  if (lStack_300 != 0) {
    piVar1 = (int *)(lStack_300 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_338);
    }
  }
  lStack_300 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  if (0 < (int)uStack_334) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lStack_2f8 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uStack_334);
  }
  if (puStack_2f0 != &uStack_2e8 && puStack_2f0 != (undefined8 *)0x0) {
    _free(puStack_2f0[-1]);
  }
  func_0x00010918eb6c(aplStack_498);
  FUN_109fff0a0(auStack_118,uStack_110);
  if (lStack_140 != 0) {
    piVar1 = (int *)(lStack_140 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_178);
    }
  }
  lStack_140 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  if (0 < (int)uStack_174) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lStack_138 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uStack_174);
  }
  if (puStack_130 != &uStack_128 && puStack_130 != (undefined8 *)0x0) {
    _free(puStack_130[-1]);
  }
  func_0x00010918eb6c(aplStack_2d8);
  if (plStack_850 != (long *)0x0) {
    plVar10 = plStack_850 + 1;
    do {
      lVar15 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_850 + 0x10))(plStack_850);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_850);
    }
  }
  if (plStack_840 != (long *)0x0) {
    plVar10 = plStack_840 + 1;
    do {
      lVar15 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_840 + 0x10))(plStack_840);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_840);
    }
  }
  if (plStack_830 != (long *)0x0) {
    plVar10 = plStack_830 + 1;
    do {
      lVar15 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_830 + 0x10))(plStack_830);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_830);
    }
  }
  if (plStack_820 != (long *)0x0) {
    plVar10 = plStack_820 + 1;
    do {
      lVar15 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_820 + 0x10))(plStack_820);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_820);
    }
  }
  *extraout_x8 = 0;
  plVar10 = plVar11 + 0x4b;
  lVar15 = plVar11[0x59];
  uVar14 = lVar15 - 1;
  plVar11[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar10[lVar15 + 2];
    if (plVar11[0x5a] == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(plVar11[0x57] + -8);
    plVar11[0x57] = plVar11[0x57] + -8;
    if (plVar11[0x5a] == uVar14) {
      return;
    }
  }
  pplVar4 = (long **)*plVar10;
  pplVar18 = (long **)plVar11[0x4c];
  lVar15 = (long)pplVar18 - (long)pplVar4;
  uVar20 = lVar15 >> 4;
  if (uVar20 < uVar14) {
    uVar21 = uVar14 - uVar20;
    lVar19 = plVar11[0x4d];
    if ((ulong)(lVar19 - (long)pplVar18 >> 4) < uVar21) {
      if (uVar14 >> 0x3c == 0) {
        uVar16 = lVar19 - (long)pplVar4 >> 3;
        if (uVar16 <= uVar14) {
          uVar16 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - (long)pplVar4)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_98 = plVar10;
        if (uVar16 >> 0x3c == 0) {
          lVar8 = uVar16 << 4;
          __Znwm();
          lVar2 = lVar8 + lVar15;
          _bzero(lVar2,uVar21 * 0x10);
          lVar17 = lVar2 + uVar20 * -0x10;
          _memcpy(lVar17,pplVar4,lVar15);
          *plVar10 = lVar17;
          plVar11[0x4c] = lVar2 + uVar21 * 0x10;
          plVar11[0x4d] = lVar8 + uVar16 * 0x10;
          pplStack_b8 = pplVar4;
          ppuStack_b0 = pplVar4;
          ppuStack_a8 = pplVar4;
          lStack_a0 = lVar19;
          func_0x00010988c1b8(&pplStack_b8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(pplVar18,uVar21 * 0x10);
    plVar11[0x4c] = (long)(pplVar18 + uVar21 * 2);
  }
  else if (uVar14 < uVar20) {
    while (pplVar18 != pplVar4 + uVar14 * 2) {
      pplVar18 = pplVar18 + -2;
      func_0x00010988c204(pplVar18);
    }
    plVar11[0x4c] = (long)(pplVar4 + uVar14 * 2);
  }
code_r0x00010988c138:
  plVar11[0x5a] = uVar14;
  return;
}



/* Entry: 10a6d4604; end: 10a6d4627;  */

void FUN_10a6d4604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long **pplVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined4 *extraout_x8;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long **pplVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auStack_838 [8];
  long *plStack_830;
  undefined1 auStack_828 [8];
  long *plStack_820;
  undefined1 auStack_818 [8];
  long *plStack_810;
  undefined1 auStack_808 [8];
  long *plStack_800;
  long *aplStack_7f8 [44];
  undefined4 uStack_698;
  undefined8 uStack_694;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  long lStack_660;
  long lStack_658;
  undefined8 *puStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  long *aplStack_638 [44];
  undefined4 uStack_4d8;
  undefined8 uStack_4d4;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  long lStack_4a0;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long *aplStack_478 [44];
  undefined4 uStack_318;
  undefined8 uStack_314;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long *aplStack_2b8 [44];
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  long lStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  long **pplStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 0xc) {
    return;
  }
  plVar9 = (long *)0xc;
  uVar12 = 0;
  FUN_10a052ee0(0xc,0,param_1);
  plVar10 = plVar9;
  (**(code **)(*plVar9 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  plVar11 = plVar9;
  FUN_10a6d459c(plVar9,uVar12);
  FUN_10a6d4dfc(param_4);
  FUN_10a065cdc(auStack_808,plVar9,param_1);
  FUN_10a065cdc(auStack_818,plVar9,param_1 + 0x10);
  FUN_10a065cdc(auStack_828,plVar9,param_1 + 0x20);
  FUN_10a065cdc(auStack_838,plVar9,param_1 + 0x30);
  FUN_10a05a42c(plVar9,param_1 + 0x40);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66d051,&UNK_10f66d31c,0x7c,&UNK_10f66d460);
  }
  plStack_78 = (long *)CONCAT44((int)(float)((ulong)*plVar9 >> 0x20),(int)(float)*plVar9);
  FUN_10a6b98c8(aplStack_2b8,&plStack_78,auStack_808);
  uStack_158 = 0x42ff0000;
  lStack_118 = (long)&uStack_154 + 4;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_154 = 0;
  lStack_120 = 0;
  uStack_124 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  puStack_110 = &uStack_108;
  (**(code **)(*aplStack_2b8[0] + 0x18))(aplStack_2b8[0],aplStack_2b8,&uStack_158,0xffffffff);
  FUN_109feeb58(auStack_f8,plVar11 + 0x12,5,&uStack_158,0);
  FUN_10a6b98c8(aplStack_478,&plStack_78,auStack_818);
  uStack_318 = 0x42ff0000;
  lStack_2d8 = (long)&uStack_314 + 4;
  uStack_30c = 0;
  uStack_308 = 0;
  uStack_314 = 0;
  lStack_2e0 = 0;
  uStack_2e4 = 0;
  uStack_2ec = 0;
  uStack_2e8 = 0;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  puStack_2d0 = &uStack_2c8;
  (**(code **)(*aplStack_478[0] + 0x18))(aplStack_478[0],aplStack_478,&uStack_318,0xffffffff);
  FUN_109feeb58(auStack_d8,auStack_f8,6,&uStack_318,0);
  FUN_10a6b98c8(aplStack_638,&plStack_78,auStack_828);
  uStack_4d8 = 0x42ff0000;
  lStack_498 = (long)&uStack_4d4 + 4;
  uStack_4cc = 0;
  uStack_4c8 = 0;
  uStack_4d4 = 0;
  lStack_4a0 = 0;
  uStack_4a4 = 0;
  uStack_4ac = 0;
  uStack_4a8 = 0;
  uStack_4b4 = 0;
  uStack_4b0 = 0;
  uStack_4bc = 0;
  uStack_4b8 = 0;
  uStack_4c4 = 0;
  uStack_4c0 = 0;
  uStack_480 = 0;
  uStack_488 = 0;
  puStack_490 = &uStack_488;
  (**(code **)(*aplStack_638[0] + 0x18))(aplStack_638[0],aplStack_638,&uStack_4d8,0xffffffff);
  FUN_109feeb58(auStack_b8,auStack_d8,7,&uStack_4d8,0);
  FUN_10a6b98c8(aplStack_7f8,&plStack_78,auStack_838);
  uStack_698 = 0x42ff0000;
  lStack_658 = (long)&uStack_694 + 4;
  uStack_68c = 0;
  uStack_688 = 0;
  uStack_694 = 0;
  lStack_660 = 0;
  uStack_664 = 0;
  uStack_66c = 0;
  uStack_668 = 0;
  uStack_674 = 0;
  uStack_670 = 0;
  uStack_67c = 0;
  uStack_678 = 0;
  uStack_684 = 0;
  uStack_680 = 0;
  uStack_648 = 0;
  uStack_640 = 0;
  puStack_650 = &uStack_648;
  (**(code **)(*aplStack_7f8[0] + 0x18))(aplStack_7f8[0],aplStack_7f8,&uStack_698,0xffffffff);
  FUN_109feeb58(&pplStack_98,auStack_b8,8,&uStack_698,0);
  plVar9 = plVar11 + 0x13;
  FUN_109fff0a0(plVar11 + 0x12,*plVar9);
  plVar11[0x12] = (long)pplStack_98;
  plVar11[0x13] = (long)ppuStack_90;
  plVar11[0x14] = (long)ppuStack_88;
  if (ppuStack_88 == (undefined8 **)0x0) {
    plVar11[0x12] = (long)plVar9;
  }
  else {
    pplStack_98 = (long **)&ppuStack_90;
    ppuStack_90[2] = plVar9;
    ppuStack_90 = (undefined8 **)0x0;
    ppuStack_88 = (undefined8 **)0x0;
  }
  plVar11[0x15] = lStack_80;
  FUN_109fff0a0(&pplStack_98,ppuStack_90);
  if (lStack_660 != 0) {
    piVar1 = (int *)(lStack_660 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_698);
    }
  }
  lStack_660 = 0;
  uStack_680 = 0;
  uStack_67c = 0;
  uStack_688 = 0;
  uStack_684 = 0;
  uStack_670 = 0;
  uStack_66c = 0;
  uStack_678 = 0;
  uStack_674 = 0;
  if (0 < (int)uStack_694) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_658 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)uStack_694);
  }
  if (puStack_650 != &uStack_648 && puStack_650 != (undefined8 *)0x0) {
    _free(puStack_650[-1]);
  }
  func_0x00010918eb6c(aplStack_7f8);
  FUN_109fff0a0(auStack_b8,uStack_b0);
  if (lStack_4a0 != 0) {
    piVar1 = (int *)(lStack_4a0 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_4d8);
    }
  }
  lStack_4a0 = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  uStack_4c8 = 0;
  uStack_4c4 = 0;
  uStack_4b0 = 0;
  uStack_4ac = 0;
  uStack_4b8 = 0;
  uStack_4b4 = 0;
  if (0 < (int)uStack_4d4) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_498 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)uStack_4d4);
  }
  if (puStack_490 != &uStack_488 && puStack_490 != (undefined8 *)0x0) {
    _free(puStack_490[-1]);
  }
  func_0x00010918eb6c(aplStack_638);
  FUN_109fff0a0(auStack_d8,uStack_d0);
  if (lStack_2e0 != 0) {
    piVar1 = (int *)(lStack_2e0 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_318);
    }
  }
  lStack_2e0 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  if (0 < (int)uStack_314) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_2d8 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)uStack_314);
  }
  if (puStack_2d0 != &uStack_2c8 && puStack_2d0 != (undefined8 *)0x0) {
    _free(puStack_2d0[-1]);
  }
  func_0x00010918eb6c(aplStack_478);
  FUN_109fff0a0(auStack_f8,uStack_f0);
  if (lStack_120 != 0) {
    piVar1 = (int *)(lStack_120 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_158);
    }
  }
  lStack_120 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  if (0 < (int)uStack_154) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_118 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)uStack_154);
  }
  if (puStack_110 != &uStack_108 && puStack_110 != (undefined8 *)0x0) {
    _free(puStack_110[-1]);
  }
  func_0x00010918eb6c(aplStack_2b8);
  if (plStack_830 != (long *)0x0) {
    plVar9 = plStack_830 + 1;
    do {
      lVar14 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_830 + 0x10))(plStack_830);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_830);
    }
  }
  if (plStack_820 != (long *)0x0) {
    plVar9 = plStack_820 + 1;
    do {
      lVar14 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_820 + 0x10))(plStack_820);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_820);
    }
  }
  if (plStack_810 != (long *)0x0) {
    plVar9 = plStack_810 + 1;
    do {
      lVar14 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_810 + 0x10))(plStack_810);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_810);
    }
  }
  if (plStack_800 != (long *)0x0) {
    plVar9 = plStack_800 + 1;
    do {
      lVar14 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_800 + 0x10))(plStack_800);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_800);
    }
  }
  *extraout_x8 = 0;
  plVar9 = plVar10 + 0x4b;
  lVar14 = plVar10[0x59];
  uVar13 = lVar14 - 1;
  plVar10[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar9[lVar14 + 2];
    if (plVar10[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar10[0x57] + -8);
    plVar10[0x57] = plVar10[0x57] + -8;
    if (plVar10[0x5a] == uVar13) {
      return;
    }
  }
  pplVar4 = (long **)*plVar9;
  pplVar17 = (long **)plVar10[0x4c];
  lVar14 = (long)pplVar17 - (long)pplVar4;
  uVar19 = lVar14 >> 4;
  if (uVar19 < uVar13) {
    uVar20 = uVar13 - uVar19;
    lVar18 = plVar10[0x4d];
    if ((ulong)(lVar18 - (long)pplVar17 >> 4) < uVar20) {
      if (uVar13 >> 0x3c == 0) {
        uVar15 = lVar18 - (long)pplVar4 >> 3;
        if (uVar15 <= uVar13) {
          uVar15 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - (long)pplVar4)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_78 = plVar9;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar2 = lVar8 + lVar14;
          _bzero(lVar2,uVar20 * 0x10);
          lVar16 = lVar2 + uVar19 * -0x10;
          _memcpy(lVar16,pplVar4,lVar14);
          *plVar9 = lVar16;
          plVar10[0x4c] = lVar2 + uVar20 * 0x10;
          plVar10[0x4d] = lVar8 + uVar15 * 0x10;
          pplStack_98 = pplVar4;
          ppuStack_90 = pplVar4;
          ppuStack_88 = pplVar4;
          lStack_80 = lVar18;
          func_0x00010988c1b8(&pplStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(pplVar17,uVar20 * 0x10);
    plVar10[0x4c] = (long)(pplVar17 + uVar20 * 2);
  }
  else if (uVar13 < uVar19) {
    while (pplVar17 != pplVar4 + uVar13 * 2) {
      pplVar17 = pplVar17 + -2;
      func_0x00010988c204(pplVar17);
    }
    plVar10[0x4c] = (long)(pplVar4 + uVar13 * 2);
  }
code_r0x00010988c138:
  plVar10[0x5a] = uVar13;
  return;
}



/* Entry: 10a6d4628; end: 10a6d4dfb;  */

void FUN_10a6d4628(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long **pplVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long **pplVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined1 auStack_828 [8];
  long *plStack_820;
  undefined1 auStack_818 [8];
  long *plStack_810;
  undefined1 auStack_808 [8];
  long *plStack_800;
  undefined1 auStack_7f8 [8];
  long *plStack_7f0;
  long *aplStack_7e8 [44];
  undefined4 uStack_688;
  undefined8 uStack_684;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  long lStack_650;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long *aplStack_628 [44];
  undefined4 uStack_4c8;
  undefined8 uStack_4c4;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  long lStack_490;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long *aplStack_468 [44];
  undefined4 uStack_308;
  undefined8 uStack_304;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *aplStack_2a8 [44];
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  long **pplStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = param_2;
  FUN_10a6d459c(param_2,param_3);
  FUN_10a6d4dfc(param_5);
  FUN_10a065cdc(auStack_7f8,param_2,param_4);
  FUN_10a065cdc(auStack_808,param_2,param_4 + 0x10);
  FUN_10a065cdc(auStack_818,param_2,param_4 + 0x20);
  FUN_10a065cdc(auStack_828,param_2,param_4 + 0x30);
  FUN_10a05a42c(param_2,param_4 + 0x40);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66d051,&UNK_10f66d31c,0x7c,&UNK_10f66d460);
  }
  plStack_68 = (long *)CONCAT44((int)(float)((ulong)*param_2 >> 0x20),(int)(float)*param_2);
  FUN_10a6b98c8(aplStack_2a8,&plStack_68,auStack_7f8);
  uStack_148 = 0x42ff0000;
  lStack_108 = (long)&uStack_144 + 4;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_144 = 0;
  lStack_110 = 0;
  uStack_114 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  puStack_100 = &uStack_f8;
  (**(code **)(*aplStack_2a8[0] + 0x18))(aplStack_2a8[0],aplStack_2a8,&uStack_148,0xffffffff);
  FUN_109feeb58(auStack_e8,plVar10 + 0x12,5,&uStack_148,0);
  FUN_10a6b98c8(aplStack_468,&plStack_68,auStack_808);
  uStack_308 = 0x42ff0000;
  lStack_2c8 = (long)&uStack_304 + 4;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_304 = 0;
  lStack_2d0 = 0;
  uStack_2d4 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  uStack_2ec = 0;
  uStack_2e8 = 0;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  puStack_2c0 = &uStack_2b8;
  (**(code **)(*aplStack_468[0] + 0x18))(aplStack_468[0],aplStack_468,&uStack_308,0xffffffff);
  FUN_109feeb58(auStack_c8,auStack_e8,6,&uStack_308,0);
  FUN_10a6b98c8(aplStack_628,&plStack_68,auStack_818);
  uStack_4c8 = 0x42ff0000;
  lStack_488 = (long)&uStack_4c4 + 4;
  uStack_4bc = 0;
  uStack_4b8 = 0;
  uStack_4c4 = 0;
  lStack_490 = 0;
  uStack_494 = 0;
  uStack_49c = 0;
  uStack_498 = 0;
  uStack_4a4 = 0;
  uStack_4a0 = 0;
  uStack_4ac = 0;
  uStack_4a8 = 0;
  uStack_4b4 = 0;
  uStack_4b0 = 0;
  uStack_470 = 0;
  uStack_478 = 0;
  puStack_480 = &uStack_478;
  (**(code **)(*aplStack_628[0] + 0x18))(aplStack_628[0],aplStack_628,&uStack_4c8,0xffffffff);
  FUN_109feeb58(auStack_a8,auStack_c8,7,&uStack_4c8,0);
  FUN_10a6b98c8(aplStack_7e8,&plStack_68,auStack_828);
  uStack_688 = 0x42ff0000;
  lStack_648 = (long)&uStack_684 + 4;
  uStack_67c = 0;
  uStack_678 = 0;
  uStack_684 = 0;
  lStack_650 = 0;
  uStack_654 = 0;
  uStack_65c = 0;
  uStack_658 = 0;
  uStack_664 = 0;
  uStack_660 = 0;
  uStack_66c = 0;
  uStack_668 = 0;
  uStack_674 = 0;
  uStack_670 = 0;
  uStack_638 = 0;
  uStack_630 = 0;
  puStack_640 = &uStack_638;
  (**(code **)(*aplStack_7e8[0] + 0x18))(aplStack_7e8[0],aplStack_7e8,&uStack_688,0xffffffff);
  FUN_109feeb58(&pplStack_88,auStack_a8,8,&uStack_688,0);
  plVar19 = plVar10 + 0x13;
  FUN_109fff0a0(plVar10 + 0x12,*plVar19);
  plVar10[0x12] = (long)pplStack_88;
  plVar10[0x13] = (long)ppuStack_80;
  plVar10[0x14] = (long)ppuStack_78;
  if (ppuStack_78 == (undefined8 **)0x0) {
    plVar10[0x12] = (long)plVar19;
  }
  else {
    pplStack_88 = (long **)&ppuStack_80;
    ppuStack_80[2] = plVar19;
    ppuStack_80 = (undefined8 **)0x0;
    ppuStack_78 = (undefined8 **)0x0;
  }
  plVar10[0x15] = lStack_70;
  FUN_109fff0a0(&pplStack_88,ppuStack_80);
  if (lStack_650 != 0) {
    piVar1 = (int *)(lStack_650 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_688);
    }
  }
  lStack_650 = 0;
  uStack_670 = 0;
  uStack_66c = 0;
  uStack_678 = 0;
  uStack_674 = 0;
  uStack_660 = 0;
  uStack_65c = 0;
  uStack_668 = 0;
  uStack_664 = 0;
  if (0 < (int)uStack_684) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_648 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_684);
  }
  if (puStack_640 != &uStack_638 && puStack_640 != (undefined8 *)0x0) {
    _free(puStack_640[-1]);
  }
  func_0x00010918eb6c(aplStack_7e8);
  FUN_109fff0a0(auStack_a8,uStack_a0);
  if (lStack_490 != 0) {
    piVar1 = (int *)(lStack_490 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_4c8);
    }
  }
  lStack_490 = 0;
  uStack_4b0 = 0;
  uStack_4ac = 0;
  uStack_4b8 = 0;
  uStack_4b4 = 0;
  uStack_4a0 = 0;
  uStack_49c = 0;
  uStack_4a8 = 0;
  uStack_4a4 = 0;
  if (0 < (int)uStack_4c4) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_488 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_4c4);
  }
  if (puStack_480 != &uStack_478 && puStack_480 != (undefined8 *)0x0) {
    _free(puStack_480[-1]);
  }
  func_0x00010918eb6c(aplStack_628);
  FUN_109fff0a0(auStack_c8,uStack_c0);
  if (lStack_2d0 != 0) {
    piVar1 = (int *)(lStack_2d0 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_308);
    }
  }
  lStack_2d0 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  if (0 < (int)uStack_304) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_2c8 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_304);
  }
  if (puStack_2c0 != &uStack_2b8 && puStack_2c0 != (undefined8 *)0x0) {
    _free(puStack_2c0[-1]);
  }
  func_0x00010918eb6c(aplStack_468);
  FUN_109fff0a0(auStack_e8,uStack_e0);
  if (lStack_110 != 0) {
    piVar1 = (int *)(lStack_110 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_148);
    }
  }
  lStack_110 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  if (0 < (int)uStack_144) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_108 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_144);
  }
  if (puStack_100 != &uStack_f8 && puStack_100 != (undefined8 *)0x0) {
    _free(puStack_100[-1]);
  }
  func_0x00010918eb6c(aplStack_2a8);
  if (plStack_820 != (long *)0x0) {
    plVar10 = plStack_820 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_820 + 0x10))(plStack_820);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_820);
    }
  }
  if (plStack_810 != (long *)0x0) {
    plVar10 = plStack_810 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_810 + 0x10))(plStack_810);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_810);
    }
  }
  if (plStack_800 != (long *)0x0) {
    plVar10 = plStack_800 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_800 + 0x10))(plStack_800);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_800);
    }
  }
  if (plStack_7f0 != (long *)0x0) {
    plVar10 = plStack_7f0 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_7f0 + 0x10))(plStack_7f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_7f0);
    }
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar12 = plVar9[0x59];
  uVar11 = lVar12 - 1;
  plVar9[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar10[lVar12 + 2];
    if (plVar9[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar11) {
      return;
    }
  }
  pplVar4 = (long **)*plVar10;
  pplVar15 = (long **)plVar9[0x4c];
  lVar12 = (long)pplVar15 - (long)pplVar4;
  uVar17 = lVar12 >> 4;
  if (uVar17 < uVar11) {
    uVar18 = uVar11 - uVar17;
    lVar16 = plVar9[0x4d];
    if ((ulong)(lVar16 - (long)pplVar15 >> 4) < uVar18) {
      if (uVar11 >> 0x3c == 0) {
        uVar13 = lVar16 - (long)pplVar4 >> 3;
        if (uVar13 <= uVar11) {
          uVar13 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - (long)pplVar4)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar13 >> 0x3c == 0) {
          lVar8 = uVar13 << 4;
          __Znwm();
          lVar2 = lVar8 + lVar12;
          _bzero(lVar2,uVar18 * 0x10);
          lVar14 = lVar2 + uVar17 * -0x10;
          _memcpy(lVar14,pplVar4,lVar12);
          *plVar10 = lVar14;
          plVar9[0x4c] = lVar2 + uVar18 * 0x10;
          plVar9[0x4d] = lVar8 + uVar13 * 0x10;
          pplStack_88 = pplVar4;
          ppuStack_80 = pplVar4;
          ppuStack_78 = pplVar4;
          lStack_70 = lVar16;
          func_0x00010988c1b8(&pplStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(pplVar15,uVar18 * 0x10);
    plVar9[0x4c] = (long)(pplVar15 + uVar18 * 2);
  }
  else if (uVar11 < uVar17) {
    while (pplVar15 != pplVar4 + uVar11 * 2) {
      pplVar15 = pplVar15 + -2;
      func_0x00010988c204(pplVar15);
    }
    plVar9[0x4c] = (long)(pplVar4 + uVar11 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar11;
  return;
}



/* Entry: 10a6d4dfc; end: 10a6d4e1f;  */

void FUN_10a6d4dfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *extraout_x8;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  long *plStack_250;
  long alStack_248 [2];
  undefined8 uStack_238;
  int iStack_230;
  int iStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  long lStack_200;
  int *piStack_1f8;
  long *plStack_1f0;
  long alStack_1e8 [2];
  undefined8 uStack_1d8;
  int iStack_1d0;
  int iStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  long lStack_1a0;
  int *piStack_198;
  long *plStack_190;
  long alStack_188 [2];
  undefined4 uStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long lStack_140;
  int *piStack_138;
  long *plStack_130;
  long alStack_128 [2];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [4];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined4 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if ((int)param_1 == 5) {
    return;
  }
  pfVar7 = (float *)0x5;
  uVar13 = 0;
  FUN_10a052ee0(5,0,param_1);
  pfVar8 = pfVar7;
  (**(code **)(*(long *)pfVar7 + 0x58))();
  if (*(ulong *)(pfVar8 + 0xb2) < 8) {
    *(long *)(pfVar8 + *(ulong *)(pfVar8 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar8 + 0xb4);
    *(long *)(pfVar8 + 0xb2) = *(long *)(pfVar8 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar8 + 0x96);
  }
  FUN_10a6d459c(pfVar7,uVar13);
  FUN_10a6d5b64(param_4);
  FUN_10a1f7d54(&plStack_2a8,pfVar7,param_1);
  FUN_10a1f7d54(&plStack_2b8,pfVar7,param_1 + 0x10);
  FUN_10a1f7d54(&plStack_2c8,pfVar7,param_1 + 0x20);
  FUN_10a1f7d54(&plStack_2d8,pfVar7,param_1 + 0x30);
  pfVar9 = pfVar7;
  FUN_10a05a42c(pfVar7,param_1 + 0x40);
  func_0x00010989847c(pfVar7,param_1 + 0x50);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66d051,&UNK_10f66d472,0x91,&UNK_10f66d54b);
  }
  iVar21 = (int)*pfVar9;
  iVar23 = (int)pfVar9[1];
  lVar16 = *plStack_2a8;
  uStack_178 = 0x42ff0005;
  iStack_174 = 2;
  piStack_138 = &iStack_170;
  uStack_168 = (undefined4)lVar16;
  uStack_164 = (undefined4)((ulong)lVar16 >> 0x20);
  uStack_150._0_4_ = 0;
  uStack_150._4_4_ = 0;
  uStack_158._0_4_ = 0;
  uStack_158._4_4_ = 0;
  lStack_140 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  lVar24 = (long)iVar23 * (long)iVar21;
  iStack_170 = iVar23;
  iStack_16c = iVar21;
  uStack_160 = uStack_168;
  uStack_15c = uStack_164;
  plStack_130 = alStack_128;
  if (lVar24 == 0 || lVar16 != 0) {
    lVar18 = (long)iVar21 * 4;
    uStack_178 = 0x42ff4005;
    alStack_128[1] = 4;
    lVar19 = lVar18 * iVar23;
    uStack_158 = lVar16 + lVar19;
    puStack_d8 = auStack_110;
    uStack_10c = 0;
    uStack_108 = 0;
    stack0xfffffffffffffeec = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_ec = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    lStack_e0 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    auStack_118._0_4_ = 0x42ff0005;
    alStack_128[0] = lVar18;
    puStack_d0 = &uStack_c8;
    uStack_150 = uStack_158;
    func_0x000109390e94(auStack_118,&uStack_178);
    if (lStack_140 != 0) {
      piVar1 = (int *)(lStack_140 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_178);
      }
    }
    lStack_140 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_150._0_4_ = 0;
    uStack_150._4_4_ = 0;
    uStack_158._0_4_ = 0;
    uStack_158._4_4_ = 0;
    if (0 < iStack_174) {
      lVar16 = 0;
      do {
        piStack_138[lVar16] = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iStack_174);
    }
    if (plStack_130 != alStack_128 && plStack_130 != (long *)0x0) {
      _free(plStack_130[-1]);
    }
    lVar16 = *plStack_2b8;
    uStack_1d8._0_4_ = 0x42ff0005;
    uStack_1d8._4_4_ = 2;
    piStack_198 = &iStack_1d0;
    uStack_1c8 = (undefined4)lVar16;
    uStack_1c4 = (undefined4)((ulong)lVar16 >> 0x20);
    uStack_1b0._0_4_ = 0;
    uStack_1b0._4_4_ = 0;
    uStack_1b8._0_4_ = 0;
    uStack_1b8._4_4_ = 0;
    lStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    alStack_188[0] = 0;
    alStack_188[1] = 0;
    iStack_1d0 = iVar23;
    iStack_1cc = iVar21;
    uStack_1c0 = uStack_1c8;
    uStack_1bc = uStack_1c4;
    plStack_190 = alStack_188;
    if ((lVar24 == 0) || (lVar16 != 0)) {
      uStack_1d8._0_4_ = 0x42ff4005;
      alStack_188[1] = 4;
      uStack_1b8 = lVar16 + lVar19;
      piStack_138 = &iStack_170;
      iStack_16c = 0;
      uStack_168 = 0;
      iStack_174 = 0;
      iStack_170 = 0;
      uStack_15c = 0;
      uStack_158._0_4_ = 0;
      uStack_164 = 0;
      uStack_160 = 0;
      uStack_150._4_4_ = 0;
      uStack_158._4_4_ = 0;
      uStack_150._0_4_ = 0;
      lStack_140 = 0;
      uStack_148 = 0;
      uStack_144 = 0;
      alStack_128[0] = 0;
      alStack_128[1] = 0;
      uStack_178 = 0x42ff0005;
      alStack_188[0] = lVar18;
      plStack_130 = alStack_128;
      uStack_1b0 = uStack_1b8;
      func_0x000109390e94(&uStack_178,&uStack_1d8);
      if (lStack_1a0 != 0) {
        piVar1 = (int *)(lStack_1a0 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_1d8);
        }
      }
      lStack_1a0 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1b0._0_4_ = 0;
      uStack_1b0._4_4_ = 0;
      uStack_1b8._0_4_ = 0;
      uStack_1b8._4_4_ = 0;
      if (0 < uStack_1d8._4_4_) {
        lVar16 = 0;
        do {
          piStack_198[lVar16] = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_1d8._4_4_);
      }
      if (plStack_190 != alStack_188 && plStack_190 != (long *)0x0) {
        _free(plStack_190[-1]);
      }
      lVar16 = *plStack_2c8;
      uStack_238._0_4_ = 0x42ff0005;
      uStack_238._4_4_ = 2;
      piStack_1f8 = &iStack_230;
      uStack_228 = (undefined4)lVar16;
      uStack_224 = (undefined4)((ulong)lVar16 >> 0x20);
      uStack_210._0_4_ = 0;
      uStack_210._4_4_ = 0;
      uStack_218._0_4_ = 0;
      uStack_218._4_4_ = 0;
      lStack_200 = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      alStack_1e8[0] = 0;
      alStack_1e8[1] = 0;
      iStack_230 = iVar23;
      iStack_22c = iVar21;
      uStack_220 = uStack_228;
      uStack_21c = uStack_224;
      plStack_1f0 = alStack_1e8;
      if ((lVar24 == 0) || (lVar16 != 0)) {
        uStack_238._0_4_ = 0x42ff4005;
        alStack_1e8[1] = 4;
        uStack_218 = lVar16 + lVar19;
        piStack_198 = &iStack_1d0;
        iStack_1cc = 0;
        uStack_1c8 = 0;
        uStack_1d8._4_4_ = 0;
        iStack_1d0 = 0;
        uStack_1bc = 0;
        uStack_1b8._0_4_ = 0;
        uStack_1c4 = 0;
        uStack_1c0 = 0;
        uStack_1b0._4_4_ = 0;
        uStack_1b8._4_4_ = 0;
        uStack_1b0._0_4_ = 0;
        lStack_1a0 = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        alStack_188[0] = 0;
        alStack_188[1] = 0;
        uStack_1d8._0_4_ = 0x42ff0005;
        alStack_1e8[0] = lVar18;
        plStack_190 = alStack_188;
        uStack_210 = uStack_218;
        func_0x000109390e94(&uStack_1d8,&uStack_238);
        if (lStack_200 != 0) {
          piVar1 = (int *)(lStack_200 + 0x14);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_238);
          }
        }
        lStack_200 = 0;
        uStack_220 = 0;
        uStack_21c = 0;
        uStack_228 = 0;
        uStack_224 = 0;
        uStack_210._0_4_ = 0;
        uStack_210._4_4_ = 0;
        uStack_218._0_4_ = 0;
        uStack_218._4_4_ = 0;
        if (0 < uStack_238._4_4_) {
          lVar16 = 0;
          do {
            piStack_1f8[lVar16] = 0;
            lVar16 = lVar16 + 1;
          } while (lVar16 < uStack_238._4_4_);
        }
        if (plStack_1f0 != alStack_1e8 && plStack_1f0 != (long *)0x0) {
          _free(plStack_1f0[-1]);
        }
        lStack_288 = *plStack_2d8;
        uStack_298 = (undefined4 *)0x242ff0005;
        puStack_258 = &uStack_290;
        uStack_290 = (undefined8 *)CONCAT44(iVar21,iVar23);
        lStack_270 = 0;
        lStack_278 = 0;
        lStack_260 = 0;
        uStack_268 = 0;
        alStack_248[0] = 0;
        alStack_248[1] = 0;
        lStack_280 = lStack_288;
        plStack_250 = alStack_248;
        if ((lVar24 == 0) || (lStack_288 != 0)) {
          uStack_298 = (undefined4 *)0x242ff4005;
          alStack_248[1] = 4;
          lStack_278 = lStack_288 + lVar19;
          piStack_1f8 = &iStack_230;
          iStack_22c = 0;
          uStack_228 = 0;
          uStack_238._4_4_ = 0;
          iStack_230 = 0;
          uStack_21c = 0;
          uStack_218._0_4_ = 0;
          uStack_224 = 0;
          uStack_220 = 0;
          uStack_210._4_4_ = 0;
          uStack_218._4_4_ = 0;
          uStack_210._0_4_ = 0;
          lStack_200 = 0;
          uStack_208 = 0;
          uStack_204 = 0;
          alStack_1e8[0] = 0;
          alStack_1e8[1] = 0;
          uStack_238._0_4_ = 0x42ff0005;
          puVar10 = &uStack_238;
          lStack_270 = lStack_278;
          alStack_248[0] = lVar18;
          plStack_1f0 = alStack_1e8;
          func_0x000109390e94(puVar10,&uStack_298);
          if (lStack_260 != 0) {
            piVar1 = (int *)(lStack_260 + 0x14);
            do {
              iVar21 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar21 + -1 == 0) {
              puVar10 = &uStack_298;
              func_0x000109a848d4(puVar10);
            }
          }
          lStack_260 = 0;
          lStack_280 = 0;
          lStack_288 = 0;
          lStack_270 = 0;
          lStack_278 = 0;
          if (0 < uStack_298._4_4_) {
            lVar16 = 0;
            do {
              *(undefined4 *)((long)puStack_258 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < uStack_298._4_4_);
          }
          if (plStack_250 != alStack_248 && plStack_250 != (long *)0x0) {
            puVar10 = (undefined8 *)plStack_250[-1];
            _free(puVar10);
          }
          lStack_288 = 0;
          uStack_298._0_4_ = 0x81010005;
          puStack_90 = (undefined8 *)0x0;
          puStack_a0._0_4_ = 0x81010005;
          puStack_98 = (undefined8 *)&uStack_178;
          auStack_b8[0] = 0x82010005;
          uStack_a8 = 0;
          uStack_290 = &uStack_1d8;
          puStack_b0 = &uStack_1d8;
          func_0x000109a91d90();
          puVar11 = &uStack_298;
          func_0x000109a293c4(puVar11,&puStack_a0,auStack_b8,puVar10,0xffffffff,&PTR_DAT_1132e8bd0,0
                              ,0);
          lStack_288 = 0;
          uStack_298._0_4_ = 0x81010005;
          uStack_290 = &uStack_238;
          puStack_90 = (undefined8 *)0x0;
          puStack_a0._0_4_ = 0x81010005;
          auStack_b8[0] = 0x82010005;
          uStack_a8 = 0;
          puStack_b0 = uStack_290;
          puStack_98 = &uStack_1d8;
          func_0x000109a91d90();
          func_0x000109a293c4(&uStack_298,&puStack_a0,auStack_b8,puVar11,0xffffffff,
                              &PTR_DAT_1132e8bd0,0,0);
          FUN_109ff3688(0x3e19999a,&uStack_1d8,1);
          if ((int)pfVar7 != 0) {
            uStack_298._0_4_ = 0x81010005;
            uStack_290 = (undefined8 *)auStack_118;
            lStack_288 = 0;
            puStack_a0._0_4_ = 0x82010005;
            puStack_90 = (undefined8 *)0x0;
            puStack_98 = uStack_290;
            func_0x000109a491e0(&uStack_298,&puStack_a0,1);
            uStack_298._0_4_ = 0x81010005;
            uStack_290 = (undefined8 *)&uStack_178;
            lStack_288 = 0;
            puStack_a0._0_4_ = 0x82010005;
            puStack_90 = (undefined8 *)0x0;
            puStack_98 = uStack_290;
            func_0x000109a491e0(&uStack_298,&puStack_a0,1);
            uStack_298._0_4_ = 0x81010005;
            uStack_290 = &uStack_1d8;
            lStack_288 = 0;
            puStack_a0._0_4_ = 0x82010005;
            puStack_90 = (undefined8 *)0x0;
            puStack_98 = uStack_290;
            func_0x000109a491e0(&uStack_298,&puStack_a0,1);
            uStack_298._0_4_ = 0x81010005;
            uStack_290 = &uStack_238;
            lStack_288 = 0;
            puStack_a0._0_4_ = 0x82010005;
            puStack_90 = (undefined8 *)0x0;
            puStack_98 = uStack_290;
            func_0x000109a491e0(&uStack_298,&puStack_a0,1);
          }
          if (lStack_200 != 0) {
            piVar1 = (int *)(lStack_200 + 0x14);
            do {
              iVar21 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar21 + -1 == 0) {
              func_0x000109a848d4(&uStack_238);
            }
          }
          lStack_200 = 0;
          uStack_220 = 0;
          uStack_21c = 0;
          uStack_228 = 0;
          uStack_224 = 0;
          uStack_210._0_4_ = 0;
          uStack_210._4_4_ = 0;
          uStack_218._0_4_ = 0;
          uStack_218._4_4_ = 0;
          if (0 < uStack_238._4_4_) {
            lVar16 = 0;
            do {
              piStack_1f8[lVar16] = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < uStack_238._4_4_);
          }
          if (plStack_1f0 != alStack_1e8 && plStack_1f0 != (long *)0x0) {
            _free(plStack_1f0[-1]);
          }
          if (lStack_1a0 != 0) {
            piVar1 = (int *)(lStack_1a0 + 0x14);
            do {
              iVar21 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar21 + -1 == 0) {
              func_0x000109a848d4(&uStack_1d8);
            }
          }
          lStack_1a0 = 0;
          uStack_1c0 = 0;
          uStack_1bc = 0;
          uStack_1c8 = 0;
          uStack_1c4 = 0;
          uStack_1b0._0_4_ = 0;
          uStack_1b0._4_4_ = 0;
          uStack_1b8._0_4_ = 0;
          uStack_1b8._4_4_ = 0;
          if (0 < uStack_1d8._4_4_) {
            lVar16 = 0;
            do {
              piStack_198[lVar16] = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < uStack_1d8._4_4_);
          }
          if (plStack_190 != alStack_188 && plStack_190 != (long *)0x0) {
            _free(plStack_190[-1]);
          }
          if (lStack_140 != 0) {
            piVar1 = (int *)(lStack_140 + 0x14);
            do {
              iVar21 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar21 + -1 == 0) {
              func_0x000109a848d4(&uStack_178);
            }
          }
          lStack_140 = 0;
          uStack_160 = 0;
          uStack_15c = 0;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_150._0_4_ = 0;
          uStack_150._4_4_ = 0;
          uStack_158._0_4_ = 0;
          uStack_158._4_4_ = 0;
          if (0 < iStack_174) {
            lVar16 = 0;
            do {
              piStack_138[lVar16] = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < iStack_174);
          }
          if (plStack_130 != alStack_128 && plStack_130 != (long *)0x0) {
            _free(plStack_130[-1]);
          }
          if (lStack_e0 != 0) {
            piVar1 = (int *)(lStack_e0 + 0x14);
            do {
              iVar21 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar21 + -1 == 0) {
              func_0x000109a848d4(auStack_118);
            }
          }
          lStack_e0 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          if (0 < (int)auStack_118._4_4_) {
            lVar16 = 0;
            do {
              *(undefined4 *)(puStack_d8 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < (int)auStack_118._4_4_);
          }
          if (puStack_d0 != &uStack_c8 && puStack_d0 != (undefined8 *)0x0) {
            _free(puStack_d0[-1]);
          }
          if (plStack_2d0 != (long *)0x0) {
            plVar2 = plStack_2d0 + 1;
            do {
              lVar16 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2d0);
            }
          }
          if (plStack_2c0 != (long *)0x0) {
            plVar2 = plStack_2c0 + 1;
            do {
              lVar16 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c0);
            }
          }
          if (plStack_2b0 != (long *)0x0) {
            plVar2 = plStack_2b0 + 1;
            do {
              lVar16 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b0);
            }
          }
          if (plStack_2a0 != (long *)0x0) {
            plVar2 = plStack_2a0 + 1;
            do {
              lVar16 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2a0);
            }
          }
          *extraout_x8 = 0;
          pfVar7 = pfVar8 + 0x96;
          uVar15 = *(long *)(pfVar8 + 0xb2) - 1;
          *(ulong *)(pfVar8 + 0xb2) = uVar15;
          if (uVar15 < 8) {
            uVar15 = *(ulong *)(pfVar7 + uVar15 * 2 + 6);
            if (*(ulong *)(pfVar8 + 0xb4) == uVar15) {
              return;
            }
          }
          else {
            uVar15 = *(ulong *)(*(long *)(pfVar8 + 0xae) + -8);
            *(ulong **)(pfVar8 + 0xae) = (ulong *)(*(long *)(pfVar8 + 0xae) + -8);
            if (*(ulong *)(pfVar8 + 0xb4) == uVar15) {
              return;
            }
          }
          puVar10 = *(undefined8 **)pfVar7;
          puVar11 = *(undefined8 **)(pfVar8 + 0x98);
          lVar16 = (long)puVar11 - (long)puVar10;
          uVar20 = lVar16 >> 4;
          if (uVar20 < uVar15) {
            uVar22 = uVar15 - uVar20;
            if ((ulong)(*(long *)(pfVar8 + 0x9a) - (long)puVar11 >> 4) < uVar22) {
              if (uVar15 >> 0x3c == 0) {
                uVar14 = *(long *)(pfVar8 + 0x9a) - (long)puVar10;
                uVar17 = (long)uVar14 >> 3;
                if (uVar17 <= uVar15) {
                  uVar17 = uVar15;
                }
                if (0x7fffffffffffffef < uVar14) {
                  uVar17 = 0xfffffffffffffff;
                }
                if (uVar17 >> 0x3c == 0) {
                  lVar18 = uVar17 << 4;
                  __Znwm();
                  lVar24 = lVar18 + lVar16;
                  _bzero(lVar24,uVar22 * 0x10);
                  lVar19 = lVar24 + uVar20 * -0x10;
                  _memcpy(lVar19,puVar10,lVar16);
                  *(long *)pfVar7 = lVar19;
                  *(ulong *)(pfVar8 + 0x98) = lVar24 + uVar22 * 0x10;
                  *(ulong *)(pfVar8 + 0x9a) = lVar18 + uVar17 * 0x10;
                  puStack_98 = puVar10;
                  puStack_90 = puVar10;
                  puStack_88 = puVar10;
                  func_0x00010988c1b8(&puStack_98);
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar6)();
            }
            _bzero(puVar11,uVar22 * 0x10);
            *(undefined8 **)(pfVar8 + 0x98) = puVar11 + uVar22 * 2;
          }
          else if (uVar15 < uVar20) {
            while (puVar11 != puVar10 + uVar15 * 2) {
              puVar11 = puVar11 + -2;
              func_0x00010988c204(puVar11);
            }
            *(undefined8 **)(pfVar8 + 0x98) = puVar10 + uVar15 * 2;
          }
code_r0x00010988c138:
          *(ulong *)(pfVar8 + 0xb4) = uVar15;
          return;
        }
        puVar12 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_a0 = puVar12 + 1;
        puStack_98 = (undefined8 *)0x1c;
        *(undefined1 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&puStack_a0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
      }
      else {
        puVar12 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        uStack_298 = puVar12 + 1;
        uStack_290 = (undefined8 *)0x1c;
        *(undefined1 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&uStack_298,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
      }
    }
    else {
      puVar12 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar12 = 1;
      uStack_238 = puVar12 + 1;
      iStack_230 = 0x1c;
      iStack_22c = 0;
      *(undefined1 *)(puVar12 + 8) = 0;
      *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&uStack_238,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
    }
  }
  else {
    puVar12 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    uStack_1d8 = puVar12 + 1;
    iStack_1d0 = 0x1c;
    iStack_1cc = 0;
    *(undefined1 *)(puVar12 + 8) = 0;
    *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
    func_0x000109ac3188(0xffffff29,&uStack_1d8,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6d5998);
  (*pcVar6)();
}



/* Entry: 10a6d4e20; end: 10a6d5b63;  */

void FUN_10a6d4e20(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 *puStack_248;
  long *plStack_240;
  long alStack_238 [2];
  undefined8 uStack_228;
  int iStack_220;
  int iStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  long lStack_1f0;
  int *piStack_1e8;
  long *plStack_1e0;
  long alStack_1d8 [2];
  undefined8 uStack_1c8;
  int iStack_1c0;
  int iStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  long lStack_190;
  int *piStack_188;
  long *plStack_180;
  long alStack_178 [2];
  undefined4 uStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long lStack_130;
  int *piStack_128;
  long *plStack_120;
  long alStack_118 [2];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [4];
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  pfVar7 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar7 + 0xb2) < 8) {
    *(long *)(pfVar7 + *(ulong *)(pfVar7 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar7 + 0xb4);
    *(long *)(pfVar7 + 0xb2) = *(long *)(pfVar7 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar7 + 0x96);
  }
  FUN_10a6d459c(param_2,param_3);
  FUN_10a6d5b64(param_5);
  FUN_10a1f7d54(&plStack_298,param_2,param_4);
  FUN_10a1f7d54(&plStack_2a8,param_2,param_4 + 0x10);
  FUN_10a1f7d54(&plStack_2b8,param_2,param_4 + 0x20);
  FUN_10a1f7d54(&plStack_2c8,param_2,param_4 + 0x30);
  pfVar8 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x40);
  func_0x00010989847c(param_2,param_4 + 0x50);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66d051,&UNK_10f66d472,0x91,&UNK_10f66d54b);
  }
  iVar19 = (int)*pfVar8;
  iVar21 = (int)pfVar8[1];
  lVar14 = *plStack_298;
  uStack_168 = 0x42ff0005;
  iStack_164 = 2;
  piStack_128 = &iStack_160;
  uStack_158 = (undefined4)lVar14;
  uStack_154 = (undefined4)((ulong)lVar14 >> 0x20);
  uStack_140._0_4_ = 0;
  uStack_140._4_4_ = 0;
  uStack_148._0_4_ = 0;
  uStack_148._4_4_ = 0;
  lStack_130 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  alStack_118[0] = 0;
  alStack_118[1] = 0;
  lVar22 = (long)iVar21 * (long)iVar19;
  iStack_160 = iVar21;
  iStack_15c = iVar19;
  uStack_150 = uStack_158;
  uStack_14c = uStack_154;
  plStack_120 = alStack_118;
  if (lVar22 == 0 || lVar14 != 0) {
    lVar16 = (long)iVar19 * 4;
    uStack_168 = 0x42ff4005;
    alStack_118[1] = 4;
    lVar17 = lVar16 * iVar21;
    uStack_148 = lVar14 + lVar17;
    puStack_c8 = auStack_100;
    uStack_fc = 0;
    uStack_f8 = 0;
    stack0xfffffffffffffefc = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_dc = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    lStack_d0 = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    auStack_108._0_4_ = 0x42ff0005;
    alStack_118[0] = lVar16;
    puStack_c0 = &uStack_b8;
    uStack_140 = uStack_148;
    func_0x000109390e94(auStack_108,&uStack_168);
    if (lStack_130 != 0) {
      piVar1 = (int *)(lStack_130 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_168);
      }
    }
    lStack_130 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_140._0_4_ = 0;
    uStack_140._4_4_ = 0;
    uStack_148._0_4_ = 0;
    uStack_148._4_4_ = 0;
    if (0 < iStack_164) {
      lVar14 = 0;
      do {
        piStack_128[lVar14] = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < iStack_164);
    }
    if (plStack_120 != alStack_118 && plStack_120 != (long *)0x0) {
      _free(plStack_120[-1]);
    }
    lVar14 = *plStack_2a8;
    uStack_1c8._0_4_ = 0x42ff0005;
    uStack_1c8._4_4_ = 2;
    piStack_188 = &iStack_1c0;
    uStack_1b8 = (undefined4)lVar14;
    uStack_1b4 = (undefined4)((ulong)lVar14 >> 0x20);
    uStack_1a0._0_4_ = 0;
    uStack_1a0._4_4_ = 0;
    uStack_1a8._0_4_ = 0;
    uStack_1a8._4_4_ = 0;
    lStack_190 = 0;
    uStack_198 = 0;
    uStack_194 = 0;
    alStack_178[0] = 0;
    alStack_178[1] = 0;
    iStack_1c0 = iVar21;
    iStack_1bc = iVar19;
    uStack_1b0 = uStack_1b8;
    uStack_1ac = uStack_1b4;
    plStack_180 = alStack_178;
    if ((lVar22 == 0) || (lVar14 != 0)) {
      uStack_1c8._0_4_ = 0x42ff4005;
      alStack_178[1] = 4;
      uStack_1a8 = lVar14 + lVar17;
      piStack_128 = &iStack_160;
      iStack_15c = 0;
      uStack_158 = 0;
      iStack_164 = 0;
      iStack_160 = 0;
      uStack_14c = 0;
      uStack_148._0_4_ = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      uStack_140._4_4_ = 0;
      uStack_148._4_4_ = 0;
      uStack_140._0_4_ = 0;
      lStack_130 = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      alStack_118[0] = 0;
      alStack_118[1] = 0;
      uStack_168 = 0x42ff0005;
      alStack_178[0] = lVar16;
      plStack_120 = alStack_118;
      uStack_1a0 = uStack_1a8;
      func_0x000109390e94(&uStack_168,&uStack_1c8);
      if (lStack_190 != 0) {
        piVar1 = (int *)(lStack_190 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_1c8);
        }
      }
      lStack_190 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1a0._0_4_ = 0;
      uStack_1a0._4_4_ = 0;
      uStack_1a8._0_4_ = 0;
      uStack_1a8._4_4_ = 0;
      if (0 < uStack_1c8._4_4_) {
        lVar14 = 0;
        do {
          piStack_188[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < uStack_1c8._4_4_);
      }
      if (plStack_180 != alStack_178 && plStack_180 != (long *)0x0) {
        _free(plStack_180[-1]);
      }
      lVar14 = *plStack_2b8;
      uStack_228._0_4_ = 0x42ff0005;
      uStack_228._4_4_ = 2;
      piStack_1e8 = &iStack_220;
      uStack_218 = (undefined4)lVar14;
      uStack_214 = (undefined4)((ulong)lVar14 >> 0x20);
      uStack_200._0_4_ = 0;
      uStack_200._4_4_ = 0;
      uStack_208._0_4_ = 0;
      uStack_208._4_4_ = 0;
      lStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      alStack_1d8[0] = 0;
      alStack_1d8[1] = 0;
      iStack_220 = iVar21;
      iStack_21c = iVar19;
      uStack_210 = uStack_218;
      uStack_20c = uStack_214;
      plStack_1e0 = alStack_1d8;
      if ((lVar22 == 0) || (lVar14 != 0)) {
        uStack_228._0_4_ = 0x42ff4005;
        alStack_1d8[1] = 4;
        uStack_208 = lVar14 + lVar17;
        piStack_188 = &iStack_1c0;
        iStack_1bc = 0;
        uStack_1b8 = 0;
        uStack_1c8._4_4_ = 0;
        iStack_1c0 = 0;
        uStack_1ac = 0;
        uStack_1a8._0_4_ = 0;
        uStack_1b4 = 0;
        uStack_1b0 = 0;
        uStack_1a0._4_4_ = 0;
        uStack_1a8._4_4_ = 0;
        uStack_1a0._0_4_ = 0;
        lStack_190 = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        alStack_178[0] = 0;
        alStack_178[1] = 0;
        uStack_1c8._0_4_ = 0x42ff0005;
        alStack_1d8[0] = lVar16;
        plStack_180 = alStack_178;
        uStack_200 = uStack_208;
        func_0x000109390e94(&uStack_1c8,&uStack_228);
        if (lStack_1f0 != 0) {
          piVar1 = (int *)(lStack_1f0 + 0x14);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_228);
          }
        }
        lStack_1f0 = 0;
        uStack_210 = 0;
        uStack_20c = 0;
        uStack_218 = 0;
        uStack_214 = 0;
        uStack_200._0_4_ = 0;
        uStack_200._4_4_ = 0;
        uStack_208._0_4_ = 0;
        uStack_208._4_4_ = 0;
        if (0 < uStack_228._4_4_) {
          lVar14 = 0;
          do {
            piStack_1e8[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_228._4_4_);
        }
        if (plStack_1e0 != alStack_1d8 && plStack_1e0 != (long *)0x0) {
          _free(plStack_1e0[-1]);
        }
        lStack_278 = *plStack_2c8;
        uStack_288 = (undefined4 *)0x242ff0005;
        puStack_248 = &uStack_280;
        uStack_280 = (undefined8 *)CONCAT44(iVar19,iVar21);
        lStack_260 = 0;
        lStack_268 = 0;
        lStack_250 = 0;
        uStack_258 = 0;
        alStack_238[0] = 0;
        alStack_238[1] = 0;
        lStack_270 = lStack_278;
        plStack_240 = alStack_238;
        if ((lVar22 == 0) || (lStack_278 != 0)) {
          uStack_288 = (undefined4 *)0x242ff4005;
          alStack_238[1] = 4;
          lStack_268 = lStack_278 + lVar17;
          piStack_1e8 = &iStack_220;
          iStack_21c = 0;
          uStack_218 = 0;
          uStack_228._4_4_ = 0;
          iStack_220 = 0;
          uStack_20c = 0;
          uStack_208._0_4_ = 0;
          uStack_214 = 0;
          uStack_210 = 0;
          uStack_200._4_4_ = 0;
          uStack_208._4_4_ = 0;
          uStack_200._0_4_ = 0;
          lStack_1f0 = 0;
          uStack_1f8 = 0;
          uStack_1f4 = 0;
          alStack_1d8[0] = 0;
          alStack_1d8[1] = 0;
          uStack_228._0_4_ = 0x42ff0005;
          puVar9 = &uStack_228;
          lStack_260 = lStack_268;
          alStack_238[0] = lVar16;
          plStack_1e0 = alStack_1d8;
          func_0x000109390e94(puVar9,&uStack_288);
          if (lStack_250 != 0) {
            piVar1 = (int *)(lStack_250 + 0x14);
            do {
              iVar19 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar19 + -1 == 0) {
              puVar9 = &uStack_288;
              func_0x000109a848d4(puVar9);
            }
          }
          lStack_250 = 0;
          lStack_270 = 0;
          lStack_278 = 0;
          lStack_260 = 0;
          lStack_268 = 0;
          if (0 < uStack_288._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)((long)puStack_248 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_288._4_4_);
          }
          if (plStack_240 != alStack_238 && plStack_240 != (long *)0x0) {
            puVar9 = (undefined8 *)plStack_240[-1];
            _free(puVar9);
          }
          lStack_278 = 0;
          uStack_288._0_4_ = 0x81010005;
          puStack_80 = (undefined8 *)0x0;
          puStack_90._0_4_ = 0x81010005;
          puStack_88 = (undefined8 *)&uStack_168;
          auStack_a8[0] = 0x82010005;
          uStack_98 = 0;
          uStack_280 = &uStack_1c8;
          puStack_a0 = &uStack_1c8;
          func_0x000109a91d90();
          puVar10 = &uStack_288;
          func_0x000109a293c4(puVar10,&puStack_90,auStack_a8,puVar9,0xffffffff,&PTR_DAT_1132e8bd0,0,
                              0);
          lStack_278 = 0;
          uStack_288._0_4_ = 0x81010005;
          uStack_280 = &uStack_228;
          puStack_80 = (undefined8 *)0x0;
          puStack_90._0_4_ = 0x81010005;
          auStack_a8[0] = 0x82010005;
          uStack_98 = 0;
          puStack_a0 = uStack_280;
          puStack_88 = &uStack_1c8;
          func_0x000109a91d90();
          func_0x000109a293c4(&uStack_288,&puStack_90,auStack_a8,puVar10,0xffffffff,
                              &PTR_DAT_1132e8bd0,0,0);
          FUN_109ff3688(0x3e19999a,&uStack_1c8,1);
          if ((int)param_2 != 0) {
            uStack_288._0_4_ = 0x81010005;
            uStack_280 = (undefined8 *)auStack_108;
            lStack_278 = 0;
            puStack_90._0_4_ = 0x82010005;
            puStack_80 = (undefined8 *)0x0;
            puStack_88 = uStack_280;
            func_0x000109a491e0(&uStack_288,&puStack_90,1);
            uStack_288._0_4_ = 0x81010005;
            uStack_280 = (undefined8 *)&uStack_168;
            lStack_278 = 0;
            puStack_90._0_4_ = 0x82010005;
            puStack_80 = (undefined8 *)0x0;
            puStack_88 = uStack_280;
            func_0x000109a491e0(&uStack_288,&puStack_90,1);
            uStack_288._0_4_ = 0x81010005;
            uStack_280 = &uStack_1c8;
            lStack_278 = 0;
            puStack_90._0_4_ = 0x82010005;
            puStack_80 = (undefined8 *)0x0;
            puStack_88 = uStack_280;
            func_0x000109a491e0(&uStack_288,&puStack_90,1);
            uStack_288._0_4_ = 0x81010005;
            uStack_280 = &uStack_228;
            lStack_278 = 0;
            puStack_90._0_4_ = 0x82010005;
            puStack_80 = (undefined8 *)0x0;
            puStack_88 = uStack_280;
            func_0x000109a491e0(&uStack_288,&puStack_90,1);
          }
          if (lStack_1f0 != 0) {
            piVar1 = (int *)(lStack_1f0 + 0x14);
            do {
              iVar19 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar19 + -1 == 0) {
              func_0x000109a848d4(&uStack_228);
            }
          }
          lStack_1f0 = 0;
          uStack_210 = 0;
          uStack_20c = 0;
          uStack_218 = 0;
          uStack_214 = 0;
          uStack_200._0_4_ = 0;
          uStack_200._4_4_ = 0;
          uStack_208._0_4_ = 0;
          uStack_208._4_4_ = 0;
          if (0 < uStack_228._4_4_) {
            lVar14 = 0;
            do {
              piStack_1e8[lVar14] = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_228._4_4_);
          }
          if (plStack_1e0 != alStack_1d8 && plStack_1e0 != (long *)0x0) {
            _free(plStack_1e0[-1]);
          }
          if (lStack_190 != 0) {
            piVar1 = (int *)(lStack_190 + 0x14);
            do {
              iVar19 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar19 + -1 == 0) {
              func_0x000109a848d4(&uStack_1c8);
            }
          }
          lStack_190 = 0;
          uStack_1b0 = 0;
          uStack_1ac = 0;
          uStack_1b8 = 0;
          uStack_1b4 = 0;
          uStack_1a0._0_4_ = 0;
          uStack_1a0._4_4_ = 0;
          uStack_1a8._0_4_ = 0;
          uStack_1a8._4_4_ = 0;
          if (0 < uStack_1c8._4_4_) {
            lVar14 = 0;
            do {
              piStack_188[lVar14] = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_1c8._4_4_);
          }
          if (plStack_180 != alStack_178 && plStack_180 != (long *)0x0) {
            _free(plStack_180[-1]);
          }
          if (lStack_130 != 0) {
            piVar1 = (int *)(lStack_130 + 0x14);
            do {
              iVar19 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar19 + -1 == 0) {
              func_0x000109a848d4(&uStack_168);
            }
          }
          lStack_130 = 0;
          uStack_150 = 0;
          uStack_14c = 0;
          uStack_158 = 0;
          uStack_154 = 0;
          uStack_140._0_4_ = 0;
          uStack_140._4_4_ = 0;
          uStack_148._0_4_ = 0;
          uStack_148._4_4_ = 0;
          if (0 < iStack_164) {
            lVar14 = 0;
            do {
              piStack_128[lVar14] = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < iStack_164);
          }
          if (plStack_120 != alStack_118 && plStack_120 != (long *)0x0) {
            _free(plStack_120[-1]);
          }
          if (lStack_d0 != 0) {
            piVar1 = (int *)(lStack_d0 + 0x14);
            do {
              iVar19 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar19 + -1 == 0) {
              func_0x000109a848d4(auStack_108);
            }
          }
          lStack_d0 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          uStack_e8 = 0;
          uStack_e4 = 0;
          if (0 < (int)auStack_108._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(puStack_c8 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < (int)auStack_108._4_4_);
          }
          if (puStack_c0 != &uStack_b8 && puStack_c0 != (undefined8 *)0x0) {
            _free(puStack_c0[-1]);
          }
          if (plStack_2c0 != (long *)0x0) {
            plVar2 = plStack_2c0 + 1;
            do {
              lVar14 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c0);
            }
          }
          if (plStack_2b0 != (long *)0x0) {
            plVar2 = plStack_2b0 + 1;
            do {
              lVar14 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b0);
            }
          }
          if (plStack_2a0 != (long *)0x0) {
            plVar2 = plStack_2a0 + 1;
            do {
              lVar14 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2a0);
            }
          }
          if (plStack_290 != (long *)0x0) {
            plVar2 = plStack_290 + 1;
            do {
              lVar14 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_290 + 0x10))(plStack_290);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_290);
            }
          }
          *param_1 = 0;
          pfVar8 = pfVar7 + 0x96;
          uVar13 = *(long *)(pfVar7 + 0xb2) - 1;
          *(ulong *)(pfVar7 + 0xb2) = uVar13;
          if (uVar13 < 8) {
            uVar13 = *(ulong *)(pfVar8 + uVar13 * 2 + 6);
            if (*(ulong *)(pfVar7 + 0xb4) == uVar13) {
              return;
            }
          }
          else {
            uVar13 = *(ulong *)(*(long *)(pfVar7 + 0xae) + -8);
            *(ulong **)(pfVar7 + 0xae) = (ulong *)(*(long *)(pfVar7 + 0xae) + -8);
            if (*(ulong *)(pfVar7 + 0xb4) == uVar13) {
              return;
            }
          }
          puVar9 = *(undefined8 **)pfVar8;
          puVar10 = *(undefined8 **)(pfVar7 + 0x98);
          lVar14 = (long)puVar10 - (long)puVar9;
          uVar18 = lVar14 >> 4;
          if (uVar18 < uVar13) {
            uVar20 = uVar13 - uVar18;
            if ((ulong)(*(long *)(pfVar7 + 0x9a) - (long)puVar10 >> 4) < uVar20) {
              if (uVar13 >> 0x3c == 0) {
                uVar12 = *(long *)(pfVar7 + 0x9a) - (long)puVar9;
                uVar15 = (long)uVar12 >> 3;
                if (uVar15 <= uVar13) {
                  uVar15 = uVar13;
                }
                if (0x7fffffffffffffef < uVar12) {
                  uVar15 = 0xfffffffffffffff;
                }
                if (uVar15 >> 0x3c == 0) {
                  lVar16 = uVar15 << 4;
                  __Znwm();
                  lVar22 = lVar16 + lVar14;
                  _bzero(lVar22,uVar20 * 0x10);
                  lVar17 = lVar22 + uVar18 * -0x10;
                  _memcpy(lVar17,puVar9,lVar14);
                  *(long *)pfVar8 = lVar17;
                  *(ulong *)(pfVar7 + 0x98) = lVar22 + uVar20 * 0x10;
                  *(ulong *)(pfVar7 + 0x9a) = lVar16 + uVar15 * 0x10;
                  puStack_88 = puVar9;
                  puStack_80 = puVar9;
                  puStack_78 = puVar9;
                  func_0x00010988c1b8(&puStack_88);
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar6)();
            }
            _bzero(puVar10,uVar20 * 0x10);
            *(undefined8 **)(pfVar7 + 0x98) = puVar10 + uVar20 * 2;
          }
          else if (uVar13 < uVar18) {
            while (puVar10 != puVar9 + uVar13 * 2) {
              puVar10 = puVar10 + -2;
              func_0x00010988c204(puVar10);
            }
            *(undefined8 **)(pfVar7 + 0x98) = puVar9 + uVar13 * 2;
          }
code_r0x00010988c138:
          *(ulong *)(pfVar7 + 0xb4) = uVar13;
          return;
        }
        puVar11 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        puStack_90 = puVar11 + 1;
        puStack_88 = (undefined8 *)0x1c;
        *(undefined1 *)(puVar11 + 8) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&puStack_90,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
      }
      else {
        puVar11 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_288 = puVar11 + 1;
        uStack_280 = (undefined8 *)0x1c;
        *(undefined1 *)(puVar11 + 8) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&uStack_288,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
      }
    }
    else {
      puVar11 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      uStack_228 = puVar11 + 1;
      iStack_220 = 0x1c;
      iStack_21c = 0;
      *(undefined1 *)(puVar11 + 8) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&uStack_228,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
    }
  }
  else {
    puVar11 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_1c8 = puVar11 + 1;
    iStack_1c0 = 0x1c;
    iStack_1bc = 0;
    *(undefined1 *)(puVar11 + 8) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
    func_0x000109ac3188(0xffffff29,&uStack_1c8,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6d5998);
  (*pcVar6)();
}



/* Entry: 10a6d5b64; end: 10a6d5b87;  */

void FUN_10a6d5b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 6) {
    return;
  }
  plVar5 = (long *)0x6;
  uVar7 = 0;
  FUN_10a052ee0(6,0,param_1);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a6d459c(plVar5,uVar7);
  FUN_10a1ceb0c(param_4);
  FUN_10a13a07c(&stack0xffffffffffffffa0,plVar5,param_1);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *extraout_x8 = 0;
  plVar5 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_98 = lVar10;
          lStack_90 = lVar10;
          lStack_88 = lVar10;
          lStack_80 = lVar14;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a6d5b88; end: 10a6d5c83;  */

void FUN_10a6d5b88(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a6d459c(param_2,param_3);
  FUN_10a1ceb0c(param_5);
  FUN_10a13a07c(&stack0xffffffffffffffb0,param_2,param_4);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar1 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar7 = lVar9 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar9 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar1;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar5 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar1 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a6d5c84; end: 10a6d5dab;  */

void FUN_10a6d5c84(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a052c2c(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a5645cc(param_5);
      plVar4 = param_2;
      func_0x000109898518(param_2,param_4);
      func_0x000109898518(param_2,param_4 + 0x10);
      FUN_10a6b9a20(plVar5,plVar4,param_2);
      *param_1 = 0;
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6d5d98);
  (*pcVar1)();
}



/* Entry: 10a6d5dac; end: 10a6d5f0f;  */

void FUN_10a6d5dac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  code *extraout_x9;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&lStack_70,*ppuVar8);
  plVar2 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar2[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar2;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar2;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar6 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar2 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a6d5f10; end: 10a6d5f2b;  */

void FUN_10a6d5f10(void)

{
  return;
}



/* Entry: 10a6d5f2c; end: 10a6d5f83;  */

long FUN_10a6d5f2c(long param_1)

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



/* Entry: 10a6d5f84; end: 10a6d5f93;  */

void FUN_10a6d5f84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c111d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6d5f94; end: 10a6d5fb3;  */

void FUN_10a6d5f94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c111d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d5fb4; end: 10a6d6067;  */

long FUN_10a6d5fb4(long param_1)

{
  func_0x00010ab147b0(param_1 + 0x40,0);
  func_0x00010ab1476c(param_1 + 0x38,0);
  func_0x00010ab1476c(param_1 + 0x30,0);
  func_0x00010ab1476c(param_1 + 0x28,0);
  func_0x00010ab1476c(param_1 + 0x20,0);
  func_0x00010ab1476c(param_1 + 0x18,0);
  return param_1 + 0x18;
}



/* Entry: 10a6d6068; end: 10a6d6087;  */

void FUN_10a6d6068(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c11268;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d6088; end: 10a6d60cf;  */

void FUN_10a6d6088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6d6090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6d60d0; end: 10a6d611f;  */

void FUN_10a6d60d0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x50;
  __Znwm();
  FUN_10a6d6120();
  *param_1 = lVar4 + 0x18;
  param_1[1] = lVar4;
  if (((long *)(lVar4 + 0x30) != (long *)0x0) &&
     ((lVar5 = *(long *)(lVar4 + 0x38), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
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
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    *(long *)(lVar4 + 0x30) = lVar4 + 0x18;
    *(long **)(lVar4 + 0x38) = plVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a6d6120; end: 10a6d6167;  */

undefined8 * FUN_10a6d6120(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c115f8;
  FUN_10a6d61a8(param_1 + 3);
  return param_1;
}



/* Entry: 10a6d6168; end: 10a6d6177;  */

void FUN_10a6d6168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c115f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6d6178; end: 10a6d6197;  */

void FUN_10a6d6178(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c115f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d6198; end: 10a6d61a7;  */

void FUN_10a6d6198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6d61a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6d61a8; end: 10a6d6293;  */

undefined8 * FUN_10a6d61a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110c278f8;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar4 = 0xf8;
  __Znwm(0xf8);
  FUN_10a8cd1bc();
  FUN_10a6d62f8(auStack_40,uVar4);
  FUN_10a6d6294(param_1 + 5,auStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return param_1;
}



/* Entry: 10a6d6294; end: 10a6d62f7;  */

undefined8 * FUN_10a6d6294(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 10a6d62f8; end: 10a6d6373;  */

long * FUN_10a6d62f8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110c11530;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a6d6374(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a6d6374; end: 10a6d6423;  */

void FUN_10a6d6374(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 10a6d6424; end: 10a6d6427;  */

void FUN_10a6d6424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6d6428; end: 10a6d643b;  */

void FUN_10a6d6428(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d643c; end: 10a6d6453;  */

void FUN_10a6d643c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a6d644c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a6d6454; end: 10a6d648b;  */

undefined8 FUN_10a6d6454(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c11580);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a6d648c; end: 10a6d648f;  */

void FUN_10a6d648c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d6490; end: 10a6d6597;  */

void FUN_10a6d6490(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 10a6d6598; end: 10a6d6693;  */

undefined1  [16] FUN_10a6d6598(ulong param_1,undefined8 *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c10688;
  pcVar1 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar1 = (char *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pcVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c10688;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c46558;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6d6694; end: 10a6d674f;  */

void FUN_10a6d6694(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66dc48,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6d6750);
  (*pcVar4)();
}



/* Entry: 10a6d6750; end: 10a6d684b;  */

undefined1  [16] FUN_10a6d6750(ulong param_1,undefined8 *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c106a0;
  pcVar1 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar1 = (char *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pcVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c106a0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6d684c; end: 10a6d68af;  */

ulong FUN_10a6d684c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6d68b0);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a6d68b0,3,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a6d68b0; end: 10a6d6967;  */

void FUN_10a6d68b0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6d6968(param_1,param_2,FUN_10a6bb188,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6d6968; end: 10a6d6abb;  */

long ** FUN_10a6d6968(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5
                     ,long param_6,undefined8 param_7)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 *puVar7;
  long lStack_88;
  long lStack_80;
  long *aplStack_70 [3];
  undefined8 **ppuStack_58;
  
  lVar3 = param_2;
  func_0x000109898688(param_2,param_5);
  if (lVar3 != 0) {
    lVar4 = param_2;
    FUN_10a053854(param_2,lVar3);
    if ((lVar4 != 0) && (___dynamic_cast(), lVar4 != 0)) {
      FUN_10a6d6abc(param_7);
      lVar3 = param_2;
      func_0x00010a137904(param_2,param_6);
      FUN_10a06787c(aplStack_70,param_2,param_6 + 0x10);
      plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
      }
      (*param_3)(&lStack_88,plVar1,lVar3,aplStack_70);
      ppuStack_58 = aplStack_70;
      FUN_10a04a568(&ppuStack_58);
      FUN_10a067748(param_1,param_2,lStack_88,lStack_80 - lStack_88 >> 4);
      aplStack_70[0] = &lStack_88;
      pplVar5 = aplStack_70;
      FUN_10a04a568(pplVar5);
      return pplVar5;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  pplVar5 = (long **)&UNK_10f68f52e;
  func_0x00010988bd28();
  aplStack_70[0] = &lStack_88;
  FUN_10a04a568(aplStack_70);
  __Unwind_Resume();
  if ((int)pplVar5 == 2) {
    return pplVar5;
  }
  pplVar6 = (long **)0x2;
  puVar7 = (undefined8 *)0x0;
  FUN_10a052ee0(2,0,pplVar5);
  pplVar5 = pplVar6;
  FUN_10a0051e8();
  if (((ulong)pplVar5 & 1) == 0) {
    if (((ulong)pplVar6[0xf] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6d6b44);
      (*pcVar2)();
    }
    FUN_10a054dac(pplVar6,*puVar7,FUN_10a6d6b44,3,pplVar6[8]);
  }
  return pplVar6;
}



/* Entry: 10a6d6abc; end: 10a6d6adf;  */

ulong FUN_10a6d6abc(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((int)param_1 == 2) {
    return param_1;
  }
  uVar2 = 2;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(2,0,param_1);
  uVar3 = uVar2;
  FUN_10a0051e8();
  if ((uVar3 & 1) == 0) {
    if ((*(byte *)(uVar2 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6d6b44);
      (*pcVar1)();
    }
    FUN_10a054dac(uVar2,*puVar4,FUN_10a6d6b44,3,*(undefined8 *)(uVar2 + 0x40));
  }
  return uVar2;
}



/* Entry: 10a6d6ae0; end: 10a6d6b43;  */

ulong FUN_10a6d6ae0(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6d6b44);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a6d6b44,3,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a6d6b44; end: 10a6d6bfb;  */

void FUN_10a6d6b44(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6d6968(param_1,param_2,FUN_10a6bbdf0,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6d6bfc; end: 10a6d6d3f;  */

void FUN_10a6d6bfc(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66dc59,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6d6cb8);
  (*pcVar4)();
}


