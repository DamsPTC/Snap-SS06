/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a73fdf4; end: 10a73fecb;  */

/* WARNING: Removing unreachable block (ram,0x00010a73fe8c) */

undefined1  [16] FUN_10a73fdf4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f673bbb,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a75886c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a73fecc; end: 10a73ff47;  */

undefined8 * FUN_10a73fecc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a73ff48; end: 10a7405cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a740174) */

long ***** FUN_10a73ff48(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long ****pppplVar2;
  long ***ppplVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long *****ppppplVar8;
  long *plVar9;
  code **ppcVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  long *****ppppplVar15;
  code *pcVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  long lVar19;
  long ***ppplVar20;
  long *****ppppplVar21;
  long *****unaff_x23;
  long ***ppplVar22;
  undefined8 uStack_278;
  long *plStack_270;
  long lStack_268;
  undefined **ppuStack_260;
  long **pplStack_258;
  long **pplStack_250;
  long **pplStack_248;
  long lStack_228;
  long ****pppplStack_220;
  long ****pppplStack_218;
  long ****pppplStack_210;
  long ****pppplStack_208;
  long ****pppplStack_200;
  long ****pppplStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 *puStack_1e0;
  ulong uStack_1d8;
  code **ppcStack_1d0;
  long ****pppplStack_1c8;
  long ****pppplStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  long ****pppplStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  long ****pppplStack_180;
  long ****pppplStack_178;
  long ****pppplStack_170;
  undefined1 uStack_168;
  code *pcStack_160;
  long ****pppplStack_158;
  long ****pppplStack_150;
  long ****pppplStack_148;
  ulong uStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  long *****ppppplStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [7];
  byte bStack_a1;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar8 = (long *****)0xf8;
  __Znwm();
  ppppplVar11 = ppppplVar8 + 1;
  ppppplVar8[2] = (long ****)0x0;
  *ppppplVar11 = (long ****)0x200000006;
  *(undefined2 *)(ppppplVar8 + 3) = 4;
  ppppplVar8[5] = (long ****)0x0;
  ppppplVar8[4] = (long ****)0x0;
  ppppplVar8[7] = (long ****)0x0;
  ppppplVar8[6] = (long ****)0x0;
  ppppplVar8[9] = (long ****)0x0;
  ppppplVar8[8] = (long ****)0x0;
  ppppplVar8[0xb] = (long ****)0x0;
  ppppplVar8[10] = (long ****)0x0;
  ppppplVar8[0xd] = (long ****)0x0;
  ppppplVar8[0xc] = (long ****)0x0;
  ppppplVar8[0xf] = (long ****)0x0;
  ppppplVar8[0xe] = (long ****)0x0;
  ppppplVar8[0x10] = (long ****)0x0;
  ppppplVar8[0x11] = (long ****)(ppppplVar8 + 3);
  ppppplVar8[0x12] = (long ****)0x0;
  *ppppplVar8 = (long ****)&PTR_DAT_110bb2e48;
  *(undefined1 *)(ppppplVar8 + 0x13) = 0;
  *(undefined1 *)(ppppplVar8 + 0x1e) = 0;
  uStack_190 = *(undefined8 *)(param_2 + 0x28);
  plStack_188 = *(long **)(param_2 + 0x30);
  pppplStack_178 = (long ****)ppppplVar8;
  pppplStack_170 = (long ****)ppppplVar8;
  if (plStack_188 == (long *)0x0) {
    plStack_188 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_188 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar11,0x10);
        if (bVar7) {
          *ppppplVar11 = *ppppplVar11 + 0x40000000;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      pppplStack_1a0 = (long ****)0x0;
      plStack_198 = (long *)0x0;
      plVar9 = *(long **)(param_2 + 0x40);
      pppplStack_180 = (long ****)ppppplVar8;
      if (((plVar9 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_198 = plVar9, plVar9 == (long *)0x0))
         || (ppppplVar8 = *(long ******)(param_2 + 0x38), pppplStack_1a0 = (long ****)ppppplVar8,
            ppppplVar8 == (long *****)0x0)) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          param_4 = (undefined8 *)&UNK_10f6721ce;
          func_0x00010ae06f08(0,1,&UNK_10f6721ce,&UNK_10f672211,0x38,&UNK_10f67228e);
        }
        ppppplVar21 = (long *****)pppplStack_170;
        ppppplStack_b8 = (long *****)pppplStack_170;
        pppplStack_170 = (long ****)0x0;
        FUN_10a1fe64c(ppppplVar21,&UNK_10dd62ad6);
        if (ppppplVar21 != (long *****)0x0) {
          func_0x0001092b4274(&ppppplStack_b8,ppppplVar21);
        }
      }
      else {
        bVar4 = *(byte *)(param_2 + 0x90);
        pcStack_f8 = (code *)((ulong)pcStack_f8 & 0xffffffffffffff00);
        ppuStack_f0 = (undefined **)0x0;
        pcStack_1b0 = (code *)0x0;
        uStack_1b8 = 3;
        pcVar16 = (code *)(param_2 + 0x60);
        func_0x00010938229c();
        ppcVar10 = &pcStack_f8;
        pcStack_1b0 = pcVar16;
        func_0x00010945a80c(ppcVar10,"avatarId");
        uStack_1b8 = *(undefined1 *)ppcVar10;
        *(undefined1 *)ppcVar10 = 3;
        pcVar16 = ppcVar10[1];
        ppcVar10[1] = pcStack_1b0;
        pcStack_1b0 = pcVar16;
        func_0x000109380ffc(&pcStack_1b0);
        pppplStack_150 = (long ****)0x0;
        pppplStack_158._0_1_ = 3;
        pppplVar17 = (long ****)(param_2 + 0x78);
        func_0x00010938229c();
        ppcVar10 = &pcStack_f8;
        pppplStack_150 = pppplVar17;
        func_0x00010945a80c(ppcVar10,&DAT_10f2fd449);
        uVar5 = *(undefined1 *)ppcVar10;
        *(undefined1 *)ppcVar10 = 3;
        pppplStack_158 = (long ****)CONCAT71(pppplStack_158._1_7_,uVar5);
        pppplVar17 = (long ****)ppcVar10[1];
        ppcVar10[1] = (code *)pppplStack_150;
        pppplStack_150 = pppplVar17;
        func_0x000109380ffc(&pppplStack_150);
        uStack_168 = 4;
        ppcVar10 = &pcStack_f8;
        pcStack_160 = (code *)(ulong)bVar4;
        func_0x00010945a80c(ppcVar10,"isRequestingSelfie");
        uStack_168 = *(undefined1 *)ppcVar10;
        *(undefined1 *)ppcVar10 = 4;
        pcVar16 = ppcVar10[1];
        ppcVar10[1] = pcStack_160;
        pcStack_160 = pcVar16;
        func_0x000109380ffc(&pcStack_160);
        FUN_10a0c32e4(&ppppplStack_b8,&pcStack_f8,0xffffffff,0x20,0,0);
        if (-1 < (char)bStack_a1) {
          uStack_b0 = (ulong)bStack_a1;
          ppppplStack_b8 = (long *****)&ppppplStack_b8;
        }
        FUN_10a3bf330(&pppplStack_148,ppppplStack_b8,uStack_b0);
        func_0x000109380ffc(&ppuStack_f0,(ulong)pcStack_f8 & 0xff);
        FUN_10a7405cc(&uStack_1b8,*(undefined8 *)(param_2 + 0x98),&uStack_190);
        ppppplVar11 = (long *****)0x138;
        __Znwm();
        ppppplStack_b8 = (long *****)pppplStack_148;
        ppppplVar21 = ppppplVar11 + 1;
        *ppppplVar21 = (long ****)0x0;
        ppppplVar11[2] = (long ****)0x0;
        *ppppplVar11 = (long ****)&PTR_FUN_110b9f3b0;
        unaff_x23 = ppppplVar11 + 3;
        pppplStack_148 = (long ****)0x0;
        uStack_b0 = uStack_140;
        (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
        uStack_70 = uStack_100;
        uStack_1d8 = *(ulong *)(param_2 + 0x50);
        puStack_1e0 = *(undefined8 **)(param_2 + 0x48);
        if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
          uStack_1d8 = (ulong)*(byte *)(param_2 + 0x5f);
          puStack_1e0 = (undefined8 *)(param_2 + 0x48);
        }
        ppcStack_1d0 = &pcStack_f8;
        pcStack_f8 = FUN_10a758a64;
        ppuStack_f0 = &PTR_FUN_110c16738;
        uStack_e8 = CONCAT71(uStack_1b7,uStack_1b8);
        uStack_d8 = uStack_1a8;
        pcStack_e0 = pcStack_1b0;
        pcStack_1b0 = (code *)0x0;
        uStack_1a8 = 0;
        param_4 = (undefined8 *)0x23;
        FUN_10a23708c(unaff_x23,&UNK_10f6722e4,0x23,&UNK_10f647b45,3,&ppppplStack_b8,1);
        (*(code *)*ppuStack_f0)(&ppuStack_f0);
        FUN_10a042634(&ppppplStack_b8);
        pppplStack_158 = (long ****)unaff_x23;
        pppplStack_150 = (long ****)ppppplVar11;
        FUN_10a740744(&uStack_1b8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar21,0x10);
          if (bVar7) {
            *ppppplVar21 = (long ****)((long)*ppppplVar21 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        pppplStack_1c8 = (long ****)unaff_x23;
        pppplStack_1c0 = (long ****)ppppplVar11;
        (*(code *)**ppppplVar8)(ppppplVar8,&pppplStack_1c8);
        pppplVar17 = pppplStack_1c0;
        if ((long *****)pppplStack_1c0 != (long *****)0x0) {
          ppppplVar21 = (long *****)(pppplStack_1c0 + 1);
          do {
            pppplVar18 = *ppppplVar21;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar21,0x10);
            if (bVar7) {
              *ppppplVar21 = (long ****)((long)pppplVar18 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppplVar18 == (long ****)0x0) {
            (*(code *)(*pppplStack_1c0)[2])(pppplStack_1c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar17);
          }
        }
        ppppplVar21 = (long *****)pppplStack_150;
        if ((long *****)pppplStack_150 != (long *****)0x0) {
          ppppplVar15 = (long *****)(pppplStack_150 + 1);
          do {
            pppplVar17 = *ppppplVar15;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
            if (bVar7) {
              *ppppplVar15 = (long ****)((long)pppplVar17 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppplVar17 == (long ****)0x0) {
            (*(code *)(*pppplStack_150)[2])(pppplStack_150);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar21);
          }
        }
        FUN_10a042634(&pppplStack_148);
      }
      plVar9 = plStack_198;
      *param_1 = pppplStack_178;
      if ((long *****)pppplStack_178 != (long *****)0x0) {
        ppppplVar15 = (long *****)(pppplStack_178 + 1);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
          if (bVar7) {
            *ppppplVar15 = (long ****)((long)*ppppplVar15 + 4);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (plStack_198 != (long *)0x0) {
        plVar1 = plStack_198 + 1;
        do {
          lVar19 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if ((long *****)pppplStack_180 != (long *****)0x0) {
        func_0x0001092b4274(&pppplStack_180);
      }
      plVar9 = plStack_188;
      if (plStack_188 != (long *)0x0) {
        plVar1 = plStack_188 + 1;
        do {
          lVar19 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      ppppplVar15 = (long *****)pppplStack_170;
      if ((long *****)pppplStack_170 != (long *****)0x0) {
        func_0x0001092b4274(&pppplStack_170);
      }
      ppppplVar12 = (long *****)pppplStack_178;
      if ((long *****)pppplStack_178 != (long *****)0x0) {
        ppppplVar13 = (long *****)(pppplStack_178 + 1);
        do {
          pppplVar17 = *ppppplVar13;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
          if (bVar7) {
            *ppppplVar13 = (long ****)((long)pppplVar17 - 4);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (((ulong)pppplVar17 & 0x1fffffffc) == 4) {
          do {
            pppplVar17 = *ppppplVar13;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
            if (bVar7) {
              *ppppplVar13 = (long ****)((long)pppplVar17 - 1U);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((long ****)((long)pppplVar17 - 1U) == (long ****)0x0) {
            (*(code *)(*pppplStack_178)[1])();
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return ppppplVar12;
      }
      ___stack_chk_fail();
      FUN_10a05bd88(&pppplStack_1c8);
      FUN_10a05bd88(&pppplStack_158);
      FUN_10a042634(&pppplStack_148);
      func_0x00010a05a8c4(&pppplStack_1a0);
      func_0x00010a7407c4(&uStack_190);
      func_0x00010a7407f0(&pppplStack_178);
      ppppplVar13 = ppppplVar12;
      __Unwind_Resume();
      pcStack_1e8 = FUN_10a7405cc;
      lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppplStack_220 = (long ****)&pppplStack_178;
      pppplStack_218 = (long ****)unaff_x23;
      pppplStack_210 = (long ****)ppppplVar11;
      pppplStack_208 = (long ****)ppppplVar8;
      pppplStack_200 = (long ****)ppppplVar21;
      pppplStack_1f8 = (long ****)ppppplVar12;
      puStack_1f0 = &stack0xfffffffffffffff0;
      __ZNSt3__115recursive_mutex4lockEv(ppppplVar15 + 2);
      ppplVar20 = (long ***)*param_4;
      ppplVar3 = (long ***)param_4[1];
      ppplVar22 = (long ***)param_4[2];
      param_4[1] = 0;
      param_4[2] = 0;
      *param_4 = 0;
      ppuStack_260 = &PTR_SUB_110c162e0;
      plStack_270 = (long *)0x0;
      lStack_268 = 0;
      uStack_278 = 0;
      pppplVar14 = (long ****)0x48;
      pplStack_258 = (long **)ppplVar20;
      pplStack_250 = (long **)ppplVar3;
      pplStack_248 = (long **)ppplVar22;
      __Znwm();
      pppplVar14[2] = (long ***)&PTR_SUB_110c162e0;
      pppplVar14[3] = ppplVar20;
      pplStack_258 = (long **)0x0;
      pplStack_250 = (long **)0x0;
      pppplVar14[4] = ppplVar3;
      pppplVar14[5] = ppplVar22;
      pplStack_248 = (long **)0x0;
      pppplVar17 = ppppplVar15[0xb];
      pppplVar18 = ppppplVar15[0xc];
      *pppplVar14 = (long ***)(ppppplVar15 + 10);
      pppplVar14[1] = (long ***)pppplVar17;
      *pppplVar17 = (long ***)pppplVar14;
      ppppplVar15[0xb] = pppplVar14;
      ppppplVar15[0xc] = (long ****)((long)pppplVar18 + 1);
      func_0x00010a7521bc(&ppuStack_260);
      if (lStack_268 != 0) {
        func_0x0001092b4274(&lStack_268);
      }
      plVar9 = plStack_270;
      if (plStack_270 != (long *)0x0) {
        plVar1 = plStack_270 + 1;
        do {
          lVar19 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_270 + 0x10))(plStack_270);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      pppplVar17 = ppppplVar15[0xb];
      ppppplVar8 = ppppplVar15 + 2;
      __ZNSt3__115recursive_mutex6unlockEv();
      pppplVar14 = ppppplVar15[1];
      pppplVar18 = *ppppplVar15;
      if (ppppplVar15[1] != (long ****)0x0) {
        pppplVar2 = ppppplVar15[1] + 2;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
          if (bVar7) {
            *pppplVar2 = (long ***)((long)*pppplVar2 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      *ppppplVar13 = pppplVar17;
      ppppplVar13[2] = pppplVar14;
      ppppplVar13[1] = pppplVar18;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
        ___stack_chk_fail();
        func_0x00010a7521bc(&ppuStack_260);
        func_0x00010a752190(&uStack_278);
        __ZNSt3__115recursive_mutex6unlockEv(ppppplVar15 + 2);
        __Unwind_Resume();
        pppplVar17 = ppppplVar8[2];
        if (pppplVar17 != (long ****)0x0) {
          __ZNSt3__119__shared_weak_count4lockEv();
          if (pppplVar17 != (long ****)0x0) {
            if (ppppplVar8[1] != (long ****)0x0) {
              FUN_10a05c0fc(ppppplVar8[1],*ppppplVar8);
            }
            pppplVar18 = pppplVar17 + 1;
            do {
              ppplVar20 = *pppplVar18;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pppplVar18,0x10);
              if (bVar7) {
                *pppplVar18 = (long ***)((long)ppplVar20 + -1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (ppplVar20 == (long ***)0x0) {
              (*(code *)(*pppplVar17)[2])(pppplVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar17);
            }
          }
          if (ppppplVar8[2] != (long ****)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        return ppppplVar8;
      }
      return ppppplVar8;
    }
  }
  FUN_10a043ecc();
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10a7404d0);
  (*pcVar16)();
}



/* Entry: 10a7405cc; end: 10a740743;  */

undefined8 * FUN_10a7405cc(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar7 = *param_3;
  lVar2 = param_3[1];
  lVar9 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  ppuStack_80 = &PTR_SUB_110c162e0;
  plStack_90 = (long *)0x0;
  lStack_88 = 0;
  uStack_98 = 0;
  plVar5 = (long *)0x48;
  lStack_78 = lVar7;
  lStack_70 = lVar2;
  lStack_68 = lVar9;
  __Znwm();
  plVar5[2] = (long)&PTR_SUB_110c162e0;
  plVar5[3] = lVar7;
  lStack_78 = 0;
  lStack_70 = 0;
  plVar5[4] = lVar2;
  plVar5[5] = lVar9;
  lStack_68 = 0;
  puVar6 = (undefined8 *)param_2[0xb];
  lVar7 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar6;
  *puVar6 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar7 + 1;
  func_0x00010a7521bc(&ppuStack_80);
  if (lStack_88 != 0) {
    func_0x0001092b4274(&lStack_88);
  }
  plVar5 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uVar8 = param_2[0xb];
  puVar6 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar11 = param_2[1];
  uVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = uVar8;
  param_1[2] = uVar11;
  param_1[1] = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010a7521bc(&ppuStack_80);
  func_0x00010a752190(&uStack_98);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar5 = (long *)puVar6[2];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (puVar6[1] != 0) {
        FUN_10a05c0fc(puVar6[1],*puVar6);
      }
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (puVar6[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar6;
}



/* Entry: 10a740744; end: 10a740863;  */

undefined8 * FUN_10a740744(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
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
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a740864; end: 10a740943;  */

undefined1  [16] FUN_10a740864(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f672308;
  return auVar1;
}



/* Entry: 10a740944; end: 10a740c3b;  */

void FUN_10a740944(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10a003e74(param_1,&UNK_10f672308,0x10);
  func_0x000109887da8(appuStack_d8,&UNK_10f672319,8);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c16750;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c16750;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"optionId",FUN_10a759094,FUN_10a7591d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2c436b,FUN_10a759400,FUN_10a759648);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f672319,8);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f672319;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f672059;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a740c1c;
      FUN_10a054dac(param_1,&UNK_10f6721c7,FUN_10a75a0a8,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a740c1c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a740c20);
  (*pcVar6)();
}



/* Entry: 10a740c3c; end: 10a740f73;  */

void FUN_10a740c3c(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10a003e74(param_1,&UNK_10f672308,0x10);
  func_0x000109887da8(appuStack_d8,&UNK_10f672322,0xe);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c16798;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c16798;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"gender",FUN_10a75a1e8,FUN_10a75a2b4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2c4735,FUN_10a75a4dc,FUN_10a75a5a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2c5256,FUN_10a75a700,FUN_10a75a7cc);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f672322,0xe);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f672322;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f672059;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a740f54;
      FUN_10a054dac(param_1,&UNK_10f6721c7,FUN_10a75a924,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a740f54:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a740f58);
  (*pcVar6)();
}



/* Entry: 10a740f74; end: 10a7414ab;  */

void FUN_10a740f74(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10a003e74(param_1,&UNK_10f672308,0x10);
  func_0x000109887da8(appuStack_d8,&UNK_10f672363,0xc);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c167b0;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c167b0;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2c5279,FUN_10a75aa58,FUN_10a75ab14);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f672331,FUN_10a75acc8,FUN_10a75ad84);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"top",FUN_10a75ae68,FUN_10a75af18);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67233d,FUN_10a75b3e0,FUN_10a75b490);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f672347,FUN_10a75b548,FUN_10a75b5f8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f672352,FUN_10a75b6b0,FUN_10a75b760);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2f4e48,FUN_10a75b818,FUN_10a75b8c8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3c7832,FUN_10a75b980,FUN_10a75ba30);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3c782e,FUN_10a75bae8,FUN_10a75bb98);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67235b,FUN_10a75bc50,FUN_10a75bd00);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2f4aa3,FUN_10a75c0c4,FUN_10a75c174);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f672363,0xc);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f672363;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f672059;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a74148c;
      FUN_10a054dac(param_1,&UNK_10f6721c7,FUN_10a75c22c,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a74148c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a741490);
  (*pcVar6)();
}



/* Entry: 10a7414ac; end: 10a7415c7;  */

void FUN_10a7414ac(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f672308,0x10);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f672059;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a7415c8(param_1,&puStack_98);
  FUN_10a75c4f0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672370;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6721c7;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x100;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a7416a0(param_1,&puStack_98);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a7415c8; end: 10a74169f;  */

/* WARNING: Removing unreachable block (ram,0x00010a741660) */

undefined1  [16] FUN_10a7415c8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f672370,0xf);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a75c3f4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a7416a0; end: 10a741707;  */

ulong FUN_10a7416a0(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a741708);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a75c5ac,0,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a741708; end: 10a7419ff;  */

void FUN_10a741708(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10a003e74(param_1,&UNK_10f672308,0x10);
  func_0x000109887da8(appuStack_d8,&UNK_10f67238c,0x12);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c167e0;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c167e0;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f672380,FUN_10a75c74c,FUN_10a75c808);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2c4710,FUN_10a75c9c8,FUN_10a75ca84);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f67238c,0x12);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f67238c;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f672059;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a7419e0;
      FUN_10a054dac(param_1,&UNK_10f6721c7,FUN_10a75cb74,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a7419e0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7419e4);
  (*pcVar6)();
}



/* Entry: 10a741a00; end: 10a741ddf;  */

void FUN_10a741a00(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f672308,0x10);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c15d88;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c15d88;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"user",FUN_10a75cd18,FUN_10a75ce34);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67239f,FUN_10a75d010,FUN_10a75d0c8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f30a70c,FUN_10a75d6e4,FUN_10a75d7a0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6723aa,FUN_10a75d884,FUN_10a75d9a0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6723ba,FUN_10a75dbd4,FUN_10a75dcf0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6723c7,FUN_10a75df30,FUN_10a75e04c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f672308,0x10);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f672308;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f672059;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a741dc0;
      FUN_10a054dac(param_1,&UNK_10f6721c7,FUN_10a75e280,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a741dc0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a741dc4);
  (*pcVar6)();
}



/* Entry: 10a741de0; end: 10a741ebf;  */

void FUN_10a741de0(undefined8 param_1)

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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f672059;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a741ec0(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f67239f;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a75e4c0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6723da;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_3c = 0x124;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a75e638(param_1,&puStack_88);
  FUN_10a75e76c(param_1);
  return;
}



/* Entry: 10a741ec0; end: 10a741f97;  */

/* WARNING: Removing unreachable block (ram,0x00010a741f58) */

undefined1  [16] FUN_10a741ec0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f673bcd,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a75e3c4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a741f98; end: 10a74210f;  */

void FUN_10a741f98(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Gender";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Unknown";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742110(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Male";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742110();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Female";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742110();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a742110; end: 10a7421b7;  */

undefined8 * FUN_10a742110(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7421b8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a7421b8; end: 10a742677;  */

void FUN_10a7421b8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f2c5309;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6723f5;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672401;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67240b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672418;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672421;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672429;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672435;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672442;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67245b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672474;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672483;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672491;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67249d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6724a8;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6724b2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6724c0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6724d2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6724e0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742678();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a742678; end: 10a74271f;  */

undefined8 * FUN_10a742678(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a742720);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a742720; end: 10a742897;  */

void FUN_10a742720(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f2c5312;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6724fb;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742898(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672503;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742898();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67250a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742898();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a742898; end: 10a74293f;  */

undefined8 * FUN_10a742898(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a742940);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a742940; end: 10a742b27;  */

void FUN_10a742940(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672512;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f3d9096;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742b28(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67251f;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742b28();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67252c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742b28();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67253c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742b28();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f672547;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742b28();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a742b28; end: 10a742bcf;  */

undefined8 * FUN_10a742b28(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a742bd0);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a742bd0; end: 10a742fe7;  */

void FUN_10a742bd0(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "AvatarScope";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Unset";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Full";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Head";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Body";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Hair";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Glasses";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Hathair";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Piercing";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Clothes";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "MannequinHead";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "MannequinHeadFeatureless";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "MannequinEarLeft";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "MannequinEarRight";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "MannequinHeadFeaturelessWithBody";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "GlassesWithSkeleton";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a742fe8();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a742fe8; end: 10a74308b;  */

undefined8 * FUN_10a742fe8(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a74308c);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a74308c; end: 10a743203;  */

void FUN_10a74308c(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "RequestType";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Avatar";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a743204(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Animation";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a743204();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Custom";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x100;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a743204();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a743204; end: 10a7432a7;  */

undefined8 * FUN_10a743204(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7432a8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a7432a8; end: 10a7432eb;  */

void FUN_10a7432a8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0x38) == '\x01') {
    lVar4 = *(long *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10a7432ec; end: 10a743307;  */

void FUN_10a7432ec(long param_1)

{
  func_0x00010a7522c0(param_1 + 0x28);
  return;
}



/* Entry: 10a743308; end: 10a74334b;  */

void FUN_10a743308(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar4 = *(long *)(param_2 + 0x48);
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    param_1[1] = *(undefined8 *)(param_2 + 0x48);
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10a74334c; end: 10a743367;  */

void FUN_10a74334c(long param_1)

{
  func_0x00010a7522c0(param_1 + 0x40);
  return;
}



/* Entry: 10a743368; end: 10a7433ab;  */

void FUN_10a743368(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0x68) == '\x01') {
    lVar4 = *(long *)(param_2 + 0x60);
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    param_1[1] = *(undefined8 *)(param_2 + 0x60);
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10a7433ac; end: 10a7433c7;  */

void FUN_10a7433ac(long param_1)

{
  func_0x00010a7522c0(param_1 + 0x58);
  return;
}



/* Entry: 10a7433c8; end: 10a74340b;  */

void FUN_10a7433c8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0x80) == '\x01') {
    lVar4 = *(long *)(param_2 + 0x78);
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    param_1[1] = *(undefined8 *)(param_2 + 0x78);
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10a74340c; end: 10a743427;  */

void FUN_10a74340c(long param_1)

{
  func_0x00010a7522c0(param_1 + 0x70);
  return;
}



/* Entry: 10a743428; end: 10a74346b;  */

void FUN_10a743428(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0x98) == '\x01') {
    lVar4 = *(long *)(param_2 + 0x90);
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    param_1[1] = *(undefined8 *)(param_2 + 0x90);
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10a74346c; end: 10a743487;  */

void FUN_10a74346c(long param_1)

{
  func_0x00010a7522c0(param_1 + 0x88);
  return;
}



/* Entry: 10a743488; end: 10a7434cb;  */

void FUN_10a743488(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    lVar4 = *(long *)(param_2 + 0xa8);
    uVar5 = *(undefined8 *)(param_2 + 0xa0);
    param_1[1] = *(undefined8 *)(param_2 + 0xa8);
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10a7434cc; end: 10a7434e7;  */

void FUN_10a7434cc(long param_1)

{
  func_0x00010a7522c0(param_1 + 0xa0);
  return;
}



/* Entry: 10a7434e8; end: 10a74352b;  */

void FUN_10a7434e8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 200) == '\x01') {
    lVar4 = *(long *)(param_2 + 0xc0);
    uVar5 = *(undefined8 *)(param_2 + 0xb8);
    param_1[1] = *(undefined8 *)(param_2 + 0xc0);
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10a74352c; end: 10a743547;  */

void FUN_10a74352c(long param_1)

{
  func_0x00010a7522c0(param_1 + 0xb8);
  return;
}



/* Entry: 10a743548; end: 10a743553;  */

undefined1 * FUN_10a743548(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10a1ccb84(param_1,param_2 + 0xd0);
  return param_1;
}



/* Entry: 10a743554; end: 10a74356f;  */

void FUN_10a743554(long param_1)

{
  func_0x00010a20a7e0(param_1 + 0xd0);
  return;
}



/* Entry: 10a743570; end: 10a74357b;  */

undefined1 * FUN_10a743570(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10a1ccb84(param_1,param_2 + 0xf0);
  return param_1;
}



/* Entry: 10a74357c; end: 10a743597;  */

void FUN_10a74357c(long param_1)

{
  func_0x00010a20a7e0(param_1 + 0xf0);
  return;
}



/* Entry: 10a743598; end: 10a7435fb;  */

undefined8 * FUN_10a743598(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a7435fc; end: 10a74433b;  */

/* WARNING: Removing unreachable block (ram,0x00010a7436dc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a7435fc(undefined8 param_1,int *param_2,long *param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *******pppppppuVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *******pppppppuStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  long alStack_f8 [3];
  undefined8 uStack_e0;
  int iStack_d4;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  
  if ((param_5 & 1) == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (*(char *)(param_4 + 0x2f) < '\0') {
    func_0x000107c3192c(&lStack_90,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  }
  else {
    uStack_88 = *(ulong *)(param_4 + 0x20);
    lStack_90 = *(long *)(param_4 + 0x18);
    plStack_80 = *(long **)(param_4 + 0x28);
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&pppppppuStack_120,*param_3,param_3[1]);
  }
  else {
    uStack_118 = param_3[1];
    pppppppuStack_120 = (undefined8 *******)*param_3;
    uStack_110 = param_3[2];
  }
  uStack_100 = uStack_88;
  lStack_108 = lStack_90;
  alStack_f8[0] = (long)plStack_80;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  lStack_90 = 0;
  FUN_10a7528e8(&ppuStack_c8,param_1,&pppppppuStack_120,&lStack_108);
  if (alStack_f8[0] < 0) {
    __ZdlPv(lStack_108);
  }
  if ((long)uStack_110 < 0) {
    __ZdlPv(pppppppuStack_120);
  }
  FUN_10a75e828(&pppppppuStack_120,param_4 + 0x30);
  lVar5 = lStack_108;
  func_0x00010a752a64(uStack_110);
  pppppppuVar6 = pppppppuStack_120;
  pppppppuStack_120 = (undefined8 *******)0x0;
  if (pppppppuVar6 != (undefined8 *******)0x0) {
    __ZdlPv();
  }
  if (lVar5 == 0) {
    return;
  }
  FUN_10a75e828(&pppppppuStack_120,param_4 + 0x30);
  FUN_10a75235c(&lStack_90,uStack_110);
  func_0x00010a752a64(uStack_110);
  pppppppuVar6 = pppppppuStack_120;
  pppppppuStack_120 = (undefined8 *******)0x0;
  if (pppppppuVar6 != (undefined8 *******)0x0) {
    __ZdlPv();
  }
  ppuStack_c8 = &PTR_DAT_110b186f8;
  uStack_c0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  uStack_110 = CONCAT17(8,(undefined7)uStack_110);
  pppppppuStack_120 = (undefined8 *******)0x72616577746f6f66;
  bVar2 = *(byte *)((long)param_3 + 0x17);
  uVar11 = param_3[1];
  if (-1 < (char)bVar2) {
    uVar11 = (ulong)bVar2;
  }
  if (uVar11 == 8) {
    plVar14 = (long *)*param_3;
    if (-1 < (char)bVar2) {
      plVar14 = param_3;
    }
    if (*plVar14 == 0x72616577746f6f66) {
      puVar4 = (undefined8 *)0x40;
      __Znwm();
      *puVar4 = &PTR_DAT_110b18478;
      puVar4[1] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      *(undefined8 *)((long)puVar4 + 0x34) = 0;
      *(undefined8 *)((long)puVar4 + 0x2c) = 0;
      plVar14 = plStack_80;
      if (lStack_78 != 0) {
        for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          plVar7 = plVar14 + 2;
          bVar2 = *(byte *)((long)plVar14 + 0x27);
          if ((char)bVar2 < '\0') {
            lVar5 = plVar14[3];
            if (lVar5 < 7) {
              if (lVar5 == 4) {
                if (*(int *)*plVar7 == 0x656c6f73) goto LAB_10a7440e8;
              }
              else if (lVar5 == 5) {
                piVar10 = (int *)*plVar7;
                if (*piVar10 == 0x6174656d && (char)piVar10[1] == 'l') goto LAB_10a744208;
                if (*piVar10 == 0x6563616c && (char)piVar10[1] == 's') goto LAB_10a744214;
              }
              else if ((lVar5 == 6) &&
                      (*(int *)*plVar7 == 0x61746564 && (short)((int *)*plVar7)[1] == 0x6c69))
              goto LAB_10a743f6c;
            }
            else if (lVar5 < 9) {
              if (lVar5 == 7) {
                plVar12 = (long *)*plVar7;
                if (*(int *)plVar12 != 0x6d697270 || *(int *)((long)plVar12 + 3) != 0x7972616d) {
                  if (*(int *)plVar12 != 0x73616c65 || *(int *)((long)plVar12 + 3) != 0x63697473)
                  goto LAB_10a744024;
LAB_10a744140:
                  *(int *)(puVar4 + 6) = (int)plVar14[5];
                  goto LAB_10a7441fc;
                }
LAB_10a744184:
                *(int *)(puVar4 + 2) = (int)plVar14[5];
                goto LAB_10a7441fc;
              }
              if ((lVar5 == 8) && (*(long *)*plVar7 == 0x7972616974726574)) goto LAB_10a743ebc;
            }
            else if (lVar5 == 9) {
              if (*(long *)*plVar7 == 0x7261646e6f636573 && (char)((long *)*plVar7)[1] == 'y')
              goto LAB_10a744178;
            }
            else if ((lVar5 == 10) &&
                    (*(long *)*plVar7 == 0x616e726574617571 && (short)((long *)*plVar7)[1] == 0x7972
                    )) goto LAB_10a743fb4;
            if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10a7441fc;
LAB_10a7441d8:
            plVar7 = (long *)*plVar7;
LAB_10a7441dc:
            func_0x00010ae06f08(0,1,&UNK_10f672606,&UNK_10f673efc,0x61,&UNK_10f673fb2,param_7,
                                param_8,plVar7);
          }
          else if (bVar2 < 7) {
            if (bVar2 == 4) {
              if ((int)*plVar7 != 0x656c6f73) goto LAB_10a7440c4;
LAB_10a7440e8:
              *(int *)(puVar4 + 4) = (int)plVar14[5];
            }
            else if (bVar2 == 5) {
              if ((int)*plVar7 != 0x6174656d || *(char *)((long)plVar14 + 0x14) != 'l') {
                if ((int)*plVar7 == 0x6563616c && *(char *)((long)plVar14 + 0x14) == 's') {
LAB_10a744214:
                  *(int *)(puVar4 + 5) = (int)plVar14[5];
                  goto LAB_10a7441fc;
                }
                goto LAB_10a7440c4;
              }
LAB_10a744208:
              *(int *)((long)puVar4 + 0x24) = (int)plVar14[5];
            }
            else {
              if ((bVar2 != 6) ||
                 ((int)*plVar7 != 0x61746564 || *(short *)((long)plVar14 + 0x14) != 0x6c69))
              goto LAB_10a7440c4;
LAB_10a743f6c:
              *(int *)((long)puVar4 + 0x2c) = (int)plVar14[5];
            }
          }
          else if (bVar2 < 9) {
            if (bVar2 == 7) {
              if ((int)*plVar7 == 0x6d697270 && *(int *)((long)plVar14 + 0x13) == 0x7972616d)
              goto LAB_10a744184;
              plVar12 = plVar7;
              if ((int)*plVar7 == 0x73616c65 && *(int *)((long)plVar14 + 0x13) == 0x63697473)
              goto LAB_10a744140;
LAB_10a744024:
              if (*(int *)plVar12 == 0x74727566 && *(int *)((long)plVar12 + 3) == 0x6d697274) {
                *(int *)((long)puVar4 + 0x34) = (int)plVar14[5];
              }
              else if ((bRam000000011330a9e8 & 1) != 0) {
                if ((char)bVar2 < '\0') goto LAB_10a7441d8;
                goto LAB_10a7441dc;
              }
            }
            else {
              if ((bVar2 != 8) || (*plVar7 != 0x7972616974726574)) goto LAB_10a7440c4;
LAB_10a743ebc:
              *(int *)(puVar4 + 3) = (int)plVar14[5];
            }
          }
          else if (bVar2 == 9) {
            if (*plVar7 != 0x7261646e6f636573 || (char)plVar14[3] != 'y') goto LAB_10a7440c4;
LAB_10a744178:
            *(int *)((long)puVar4 + 0x14) = (int)plVar14[5];
          }
          else if ((bVar2 == 10) && (*plVar7 == 0x616e726574617571 && (short)plVar14[3] == 0x7972))
          {
LAB_10a743fb4:
            *(int *)((long)puVar4 + 0x1c) = (int)plVar14[5];
          }
          else {
LAB_10a7440c4:
            if ((bRam000000011330a9e8 & 1) != 0) goto LAB_10a7441dc;
          }
LAB_10a7441fc:
        }
      }
      func_0x0001098ca1f8(&ppuStack_c8,puVar4);
      goto LAB_10a743c18;
    }
  }
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = &PTR_DAT_110b18518;
  puVar4[1] = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  *(undefined8 *)((long)puVar4 + 0x34) = 0;
  *(undefined8 *)((long)puVar4 + 0x2c) = 0;
  plVar14 = plStack_80;
  if (lStack_78 != 0) {
    for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      plVar7 = plVar14 + 2;
      bVar2 = *(byte *)((long)plVar14 + 0x27);
      if ((char)bVar2 < '\0') {
        lVar5 = plVar14[3];
        if (lVar5 < 7) {
          if (lVar5 == 4) {
            if (*(int *)*plVar7 == 0x746c6562) goto LAB_10a743ac8;
          }
          else if (lVar5 == 5) {
            piVar10 = (int *)*plVar7;
            if (*piVar10 == 0x6174656d && (char)piVar10[1] == 'l') goto LAB_10a743be8;
            if (*piVar10 == 0x6563616c && (char)piVar10[1] == 's') goto LAB_10a743bf4;
          }
          else if ((lVar5 == 6) &&
                  (*(int *)*plVar7 == 0x61746564 && (short)((int *)*plVar7)[1] == 0x6c69))
          goto LAB_10a74394c;
        }
        else if (lVar5 < 9) {
          if (lVar5 == 7) {
            plVar12 = (long *)*plVar7;
            if (*(int *)plVar12 != 0x6d697270 || *(int *)((long)plVar12 + 3) != 0x7972616d) {
              if (*(int *)plVar12 != 0x74747562 || *(int *)((long)plVar12 + 3) != 0x736e6f74)
              goto LAB_10a743a04;
LAB_10a743b20:
              *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(plVar14 + 5);
              goto LAB_10a743bdc;
            }
LAB_10a743b64:
            *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(plVar14 + 5);
            goto LAB_10a743bdc;
          }
          if ((lVar5 == 8) && (*(long *)*plVar7 == 0x7972616974726574)) goto LAB_10a74389c;
        }
        else if (lVar5 == 9) {
          if (*(long *)*plVar7 == 0x7261646e6f636573 && (char)((long *)*plVar7)[1] == 'y')
          goto LAB_10a743b58;
        }
        else if ((lVar5 == 10) &&
                (*(long *)*plVar7 == 0x616e726574617571 && (short)((long *)*plVar7)[1] == 0x7972))
        goto LAB_10a743994;
        if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10a743bdc;
LAB_10a743bb8:
        plVar7 = (long *)*plVar7;
LAB_10a743bbc:
        func_0x00010ae06f08(0,1,&UNK_10f672606,&UNK_10f673fe9,0x41,&UNK_10f67409f,param_7,param_8,
                            plVar7);
      }
      else if (bVar2 < 7) {
        if (bVar2 == 4) {
          if ((int)*plVar7 != 0x746c6562) goto LAB_10a743aa4;
LAB_10a743ac8:
          *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(plVar14 + 5);
        }
        else if (bVar2 == 5) {
          if ((int)*plVar7 != 0x6174656d || *(char *)((long)plVar14 + 0x14) != 'l') {
            if ((int)*plVar7 == 0x6563616c && *(char *)((long)plVar14 + 0x14) == 's') {
LAB_10a743bf4:
              *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(plVar14 + 5);
              goto LAB_10a743bdc;
            }
            goto LAB_10a743aa4;
          }
LAB_10a743be8:
          *(undefined4 *)((long)puVar4 + 0x24) = *(undefined4 *)(plVar14 + 5);
        }
        else {
          if ((bVar2 != 6) ||
             ((int)*plVar7 != 0x61746564 || *(short *)((long)plVar14 + 0x14) != 0x6c69))
          goto LAB_10a743aa4;
LAB_10a74394c:
          *(undefined4 *)((long)puVar4 + 0x2c) = *(undefined4 *)(plVar14 + 5);
        }
      }
      else if (bVar2 < 9) {
        if (bVar2 == 7) {
          if ((int)*plVar7 == 0x6d697270 && *(int *)((long)plVar14 + 0x13) == 0x7972616d)
          goto LAB_10a743b64;
          plVar12 = plVar7;
          if ((int)*plVar7 == 0x74747562 && *(int *)((long)plVar14 + 0x13) == 0x736e6f74)
          goto LAB_10a743b20;
LAB_10a743a04:
          if (*(int *)plVar12 == 0x74727566 && *(int *)((long)plVar12 + 3) == 0x6d697274) {
            *(undefined4 *)((long)puVar4 + 0x34) = *(undefined4 *)(plVar14 + 5);
          }
          else if ((bRam000000011330a9e8 & 1) != 0) {
            if ((char)bVar2 < '\0') goto LAB_10a743bb8;
            goto LAB_10a743bbc;
          }
        }
        else {
          if ((bVar2 != 8) || (*plVar7 != 0x7972616974726574)) goto LAB_10a743aa4;
LAB_10a74389c:
          *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(plVar14 + 5);
        }
      }
      else if (bVar2 == 9) {
        if (*plVar7 != 0x7261646e6f636573 || *(char *)(plVar14 + 3) != 'y') goto LAB_10a743aa4;
LAB_10a743b58:
        *(undefined4 *)((long)puVar4 + 0x14) = *(undefined4 *)(plVar14 + 5);
      }
      else if ((bVar2 == 10) && (*plVar7 == 0x616e726574617571 && *(short *)(plVar14 + 3) == 0x7972)
              ) {
LAB_10a743994:
        *(undefined4 *)((long)puVar4 + 0x1c) = *(undefined4 *)(plVar14 + 5);
      }
      else {
LAB_10a743aa4:
        if ((bRam000000011330a9e8 & 1) != 0) goto LAB_10a743bbc;
      }
LAB_10a743bdc:
    }
  }
  func_0x0001098ca114(&ppuStack_c8,puVar4);
LAB_10a743c18:
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&pppppppuStack_120,*param_3,param_3[1]);
  }
  else {
    uStack_118 = param_3[1];
    pppppppuStack_120 = (undefined8 *******)*param_3;
    uStack_110 = param_3[2];
  }
  func_0x0001098ca254(&lStack_108,0,&ppuStack_c8);
  uVar11 = uStack_118;
  pppppppuVar6 = pppppppuStack_120;
  if (-1 < (long)uStack_110) {
    uVar11 = uStack_110 >> 0x38;
    pppppppuVar6 = &pppppppuStack_120;
  }
  piVar10 = param_2;
  func_0x000107c27d5c(param_2,pppppppuVar6,uVar11,0);
  if (piVar10 == (int *)0x0) {
    piVar10 = param_2;
    func_0x000107c27d60(param_2,*param_2 + 1);
    if ((int)piVar10 != 0) {
      uVar11 = uStack_118;
      pppppppuVar6 = pppppppuStack_120;
      if (-1 < (long)uStack_110) {
        uVar11 = uStack_110 >> 0x38;
        pppppppuVar6 = &pppppppuStack_120;
      }
      func_0x000107c27d5c(param_2,pppppppuVar6,uVar11,0);
    }
    piVar10 = param_2;
    func_0x000107c27d64(param_2,0x58);
    lVar5 = *(long *)(param_2 + 6);
    *(ulong *)(piVar10 + 4) = uStack_118;
    *(undefined8 ********)(piVar10 + 2) = pppppppuStack_120;
    *(ulong *)(piVar10 + 6) = uStack_110;
    uStack_118 = 0;
    uStack_110 = 0;
    pppppppuStack_120 = (undefined8 *******)0x0;
    if (lVar5 != 0) {
      func_0x00010b4d8014(lVar5,piVar10 + 2,&UNK_104c611dc);
    }
    plVar14 = (long *)(piVar10 + 8);
    *plVar14 = (long)&PTR_DAT_110b186f8;
    uVar8 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(piVar10 + 10) = uVar8;
    piVar10[0xc] = 0;
    piVar10[0xd] = 0;
    piVar10[0xe] = 0;
    piVar10[0xf] = 0;
    *(undefined8 *)(piVar10 + 0x10) = uVar8;
    piVar10[0x14] = 0;
    piVar10[0x15] = 0;
    func_0x000107c27d68(param_2,pppppppuVar6,piVar10);
    *param_2 = *param_2 + 1;
    if (plVar14 != &lStack_108) {
      uVar9 = *(ulong *)(piVar10 + 10);
      uVar11 = uVar9;
      if ((uVar9 & 1) != 0) {
        uVar11 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      uVar13 = uStack_100;
      if ((uStack_100 & 1) != 0) {
        uVar13 = *(ulong *)(uStack_100 & 0xfffffffffffffffe);
      }
      if (uVar11 == uVar13) {
        lVar5 = 0;
        *(ulong *)(piVar10 + 10) = uStack_100;
        do {
          uVar3 = *(undefined1 *)((long)piVar10 + lVar5 + 0x30);
          *(undefined1 *)((long)piVar10 + lVar5 + 0x30) = *(undefined1 *)((long)alStack_f8 + lVar5);
          *(undefined1 *)((long)alStack_f8 + lVar5) = uVar3;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0x10);
        uVar8 = *(undefined8 *)(piVar10 + 0x12);
        *(undefined8 *)(piVar10 + 0x12) = uStack_e0;
        iVar1 = piVar10[0x15];
        piVar10[0x15] = iStack_d4;
        uStack_100 = uVar9;
        uStack_e0 = uVar8;
        iStack_d4 = iVar1;
      }
      else {
        func_0x0001098ca35c(plVar14);
        func_0x0001098ca51c(plVar14,&lStack_108);
      }
    }
  }
  func_0x0001098ca2e0(&lStack_108);
  if ((long)uStack_110 < 0) {
    __ZdlPv(pppppppuStack_120);
  }
  func_0x0001098ca2e0(&ppuStack_c8);
  func_0x0001092b0b8c(&lStack_90);
  return;
}



/* Entry: 10a74433c; end: 10a7444f3;  */

void FUN_10a74433c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **appuStack_88 [2];
  char cStack_71;
  undefined8 **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_51;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != (long *)0x0) {
    do {
      uVar2 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      if (uVar2 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,&DAT_10f2e8297,1);
      }
      uVar2 = param_2[3];
      if (-1 < (char)*(byte *)((long)param_2 + 0x27)) {
        uVar2 = (ulong)*(byte *)((long)param_2 + 0x27);
      }
      FUN_10a003c90(appuStack_88,uVar2 + 1,&uStack_51);
      pppuVar4 = (undefined8 ***)appuStack_88[0];
      if (-1 < cStack_71) {
        pppuVar4 = appuStack_88;
      }
      if (uVar2 != 0) {
        plVar1 = (long *)param_2[2];
        if (-1 < *(char *)((long)param_2 + 0x27)) {
          plVar1 = param_2 + 2;
        }
        _memmove(pppuVar4,plVar1,uVar2);
      }
      *(undefined2 *)((long)pppuVar4 + uVar2) = 0x3d;
      uVar2 = param_2[6];
      plVar1 = (long *)param_2[5];
      if (-1 < (char)*(byte *)((long)param_2 + 0x3f)) {
        uVar2 = (ulong)*(byte *)((long)param_2 + 0x3f);
        plVar1 = param_2 + 5;
      }
      pppuVar4 = appuStack_88;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar4,plVar1,uVar2);
      puStack_68 = pppuVar4[1];
      ppuStack_70 = *pppuVar4;
      puStack_60 = pppuVar4[2];
      pppuVar4[1] = (undefined8 **)0x0;
      pppuVar4[2] = (undefined8 **)0x0;
      *pppuVar4 = (undefined8 **)0x0;
      ppuVar3 = (undefined8 **)puStack_68;
      pppuVar4 = (undefined8 ***)ppuStack_70;
      if (-1 < (long)puStack_60) {
        ppuVar3 = (undefined8 **)((ulong)puStack_60 >> 0x38);
        pppuVar4 = &ppuStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar4,ppuVar3);
      if ((long)puStack_60 < 0) {
        __ZdlPv(ppuStack_70);
      }
      if (cStack_71 < '\0') {
        __ZdlPv(appuStack_88[0]);
      }
      param_2 = (long *)*param_2;
    } while (param_2 != (long *)0x0);
  }
  return;
}



/* Entry: 10a7444f4; end: 10a744877;  */

/* WARNING: Removing unreachable block (ram,0x00010a7447e8) */
/* WARNING: Removing unreachable block (ram,0x00010a7447ec) */
/* WARNING: Removing unreachable block (ram,0x00010a7447f4) */
/* WARNING: Removing unreachable block (ram,0x00010a7447fc) */
/* WARNING: Removing unreachable block (ram,0x00010a744800) */
/* WARNING: Removing unreachable block (ram,0x00010a7445e8) */
/* WARNING: Removing unreachable block (ram,0x00010a7445ec) */
/* WARNING: Removing unreachable block (ram,0x00010a7445f4) */
/* WARNING: Removing unreachable block (ram,0x00010a7445fc) */
/* WARNING: Removing unreachable block (ram,0x00010a744608) */
/* WARNING: Removing unreachable block (ram,0x00010a744610) */
/* WARNING: Removing unreachable block (ram,0x00010a744618) */
/* WARNING: Removing unreachable block (ram,0x00010a74461c) */
/* WARNING: Removing unreachable block (ram,0x00010a7447a0) */
/* WARNING: Removing unreachable block (ram,0x00010a7447a4) */
/* WARNING: Removing unreachable block (ram,0x00010a7447ac) */
/* WARNING: Removing unreachable block (ram,0x00010a7447b4) */
/* WARNING: Removing unreachable block (ram,0x00010a7447c0) */
/* WARNING: Removing unreachable block (ram,0x00010a7447c8) */
/* WARNING: Removing unreachable block (ram,0x00010a7447d0) */
/* WARNING: Removing unreachable block (ram,0x00010a7447d4) */
/* WARNING: Removing unreachable block (ram,0x00010a1e010c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0110) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0118) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0120) */
/* WARNING: Removing unreachable block (ram,0x00010a1e012c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0134) */
/* WARNING: Removing unreachable block (ram,0x00010a1e013c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0140) */

void FUN_10a7444f4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (*(char *)(param_2 + 0x4f) < '\0') {
    if (*(long *)(param_2 + 0x40) == 0) goto LAB_10a744668;
  }
  else if (*(char *)(param_2 + 0x4f) == '\0') {
LAB_10a744668:
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f672606,&UNK_10f672712,0x1d7,&UNK_10f67278f);
    }
    puVar3 = (undefined8 *)0xf8;
    __Znwm();
    *(undefined2 *)(puVar3 + 3) = 4;
    puVar3[2] = 0;
    puVar3[1] = 0x200000006;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = puVar3 + 3;
    puVar3[0x12] = 0;
    *puVar3 = &PTR_DAT_110bb2e48;
    *(undefined1 *)(puVar3 + 0x13) = 0;
    *(undefined1 *)(puVar3 + 0x1e) = 0;
    FUN_10a1fe64c();
    *param_1 = puVar3;
    func_0x0001092b4274(&stack0xffffffffffffffc8,puVar3);
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  puVar3 = *(undefined8 **)(param_2 + 0x30);
  if ((puVar3 != (undefined8 *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), puVar3 != (undefined8 *)0x0)) {
    puVar4 = puVar3;
    FUN_109d1a80c();
    puVar4 = (undefined8 *)*puVar4;
    plVar6 = (long *)puVar4[2];
    puStack_78 = (undefined8 *)0x0;
    if (plVar6 == (long *)0x0) {
      puStack_80 = (undefined8 *)0x120;
      __Znwm();
      puStack_80[2] = 0;
      puStack_80[1] = 0x200000006;
      *(undefined2 *)(puStack_80 + 3) = 4;
      puStack_80[5] = 0;
      puStack_80[4] = 0;
      puStack_80[7] = 0;
      puStack_80[6] = 0;
      puStack_80[9] = 0;
      puStack_80[8] = 0;
      puStack_80[0xb] = 0;
      puStack_80[10] = 0;
      puStack_80[0xd] = 0;
      puStack_80[0xc] = 0;
      puStack_80[0xf] = 0;
      puStack_80[0xe] = 0;
      puStack_80[0x10] = 0;
      puStack_80[0x11] = puStack_80 + 3;
      puStack_80[0x12] = 0;
      *(undefined1 *)(puStack_80 + 0x13) = 0;
      *(undefined1 *)(puStack_80 + 0x1e) = 0;
      *puStack_80 = &PTR_DAT_110c16358;
      puVar5 = puStack_80 + 0x1f;
      *puVar5 = uVar1;
      puStack_80[0x20] = puVar3;
      *(undefined1 *)(puStack_80 + 0x22) = 1;
      puStack_80[0x23] = 0;
      pcStack_70 = FUN_10a752bcc;
      puStack_78 = puStack_80;
    }
    else {
      pcStack_68 = (code *)0x0;
      (**(code **)(*plVar6 + 0x28))(plVar6,0,&pcStack_68);
      if (pcStack_68 != (code *)0x0) goto LAB_10a744838;
      puStack_80 = (undefined8 *)0x128;
      __Znwm();
      puStack_80[2] = 0;
      puStack_80[1] = 0x200000006;
      *(undefined2 *)(puStack_80 + 3) = 4;
      puStack_80[5] = 0;
      puStack_80[4] = 0;
      puStack_80[7] = 0;
      puStack_80[6] = 0;
      puStack_80[9] = 0;
      puStack_80[8] = 0;
      puStack_80[0xb] = 0;
      puStack_80[10] = 0;
      puStack_80[0xd] = 0;
      puStack_80[0xc] = 0;
      puStack_80[0xf] = 0;
      puStack_80[0xe] = 0;
      puStack_80[0x10] = 0;
      puStack_80[0x11] = puStack_80 + 3;
      puStack_80[0x12] = 0;
      *(undefined1 *)(puStack_80 + 0x13) = 0;
      *(undefined1 *)(puStack_80 + 0x1e) = 0;
      *puStack_80 = &PTR_FUN_110c16320;
      puVar5 = puStack_80 + 0x1f;
      *puVar5 = uVar1;
      puStack_80[0x20] = puVar3;
      *(undefined1 *)(puStack_80 + 0x22) = 1;
      puStack_80[0x23] = 0;
      puStack_80[0x24] = plVar6;
      if (puStack_78 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_78);
      }
      pcStack_70 = (code *)0x10a752b9c;
      puStack_78 = puStack_80;
      __ZNSt13exception_ptrD1Ev(&pcStack_68);
    }
    if (puVar5[4] != 0) {
      func_0x0001092b4274();
    }
    puVar5[4] = puStack_78;
    puStack_78 = (undefined8 *)0x0;
    pcStack_68 = pcStack_70;
    puStack_60 = puVar5;
    puStack_58 = puVar4;
    (**(code **)*puVar4)(puVar4,&pcStack_68);
    *param_1 = puStack_80;
    if (puStack_78 != (undefined8 *)0x0) {
      func_0x0001092b4274(&puStack_78);
    }
    return;
  }
  FUN_10a043ecc();
LAB_10a744838:
  func_0x0001092af97c(&pcStack_68);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a744844);
  (*pcVar2)();
}



/* Entry: 10a744878; end: 10a744903;  */

undefined8 FUN_10a744878(void)

{
  return 0x20;
}



/* Entry: 10a744904; end: 10a744d53;  */

void FUN_10a744904(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6634de,0x13);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c15da0;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
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
  uStack_58 = 0xad;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c15da0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a744d34;
    FUN_10a054dac(param_1,&UNK_10f6727cc,FUN_10a75f900,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a744d34;
    FUN_10a054dac(param_1,&UNK_10f6727e5,FUN_10a75fc70,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a744d34;
    FUN_10a054dac(param_1,&UNK_10f672808,FUN_10a75fe80,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a744d34;
    FUN_10a054dac(param_1,&UNK_10f672827,FUN_10a760194,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a744d34;
    FUN_10a054dac(param_1,&UNK_10f672850,FUN_10a760348,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a744d34;
    FUN_10a054dac(param_1,&UNK_10f672874,FUN_10a7605e4,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a744d34;
    FUN_10a054dac(param_1,&UNK_10f67289c,FUN_10a760c2c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a744d34;
    FUN_10a054dac(param_1,&UNK_10f6728b5,FUN_10a761064,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6728c4,FUN_10a7611a8,FUN_10a7612d4);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6634de,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a744d34:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a744d38);
  (*pcVar6)();
}



/* Entry: 10a744d54; end: 10a744ddf;  */

void FUN_10a744d54(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  lVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,lVar2);
  *param_1 = &PTR_DAT_110c14e30;
  param_1[2] = &PTR_FUN_110c14ed8;
  param_1[7] = &PTR_FUN_110c14f30;
  param_1[0x1c] = param_2;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x100) + 0x1d8) + 0x28) = 1;
  return;
}



/* Entry: 10a744de0; end: 10a744de7;  */

void FUN_10a744de0(long param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_DAT_110c3fbe8,&UNK_10f68c0c1,0);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_30;
  *(undefined8 *)(param_1 + 0x58) = uStack_38;
  *(undefined8 *)(param_1 + 0x68) = uStack_28;
  return;
}



/* Entry: 10a744de8; end: 10a744ec7;  */

void FUN_10a744de8(int param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (0xfe < param_1) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c2b054(puVar1 + 2,"ua");
    func_0x000107c2b054(puVar1 + 5,"2");
    uVar2 = param_2;
    func_0x000107c2b05c(param_2,puVar1 + 2);
    puVar1[1] = uVar2;
    FUN_10a7613d0(param_2,puVar1);
    if (((param_2 & 1) == 0) && (puVar1 != (undefined8 *)0x0)) {
      func_0x00010a052340(puVar1 + 2);
      __ZdlPv(puVar1);
    }
  }
  return;
}



/* Entry: 10a744ec8; end: 10a745277;  */

void FUN_10a744ec8(long param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  code *pcStack_98;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *param_3;
  if (lVar7 == 0) {
LAB_10a7451d0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar8 = *param_2;
    lStack_c8 = param_1;
    if (*(char *)(lVar8 + 0x3f) < '\0') {
      func_0x000107c3192c(&uStack_c0,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30));
      lVar7 = *param_3;
    }
    else {
      uStack_b8 = *(undefined8 *)(lVar8 + 0x30);
      uStack_c0 = *(undefined8 *)(lVar8 + 0x28);
      lStack_b0 = *(long *)(lVar8 + 0x38);
    }
    plVar9 = (long *)param_3[1];
    if (plVar9 != (long *)0x0) {
      plVar11 = plVar9 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = *plVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_d8 = *(long *)(*param_2 + 0x18);
    plVar11 = *(long **)(*param_2 + 0x20);
    plStack_d0 = plVar11;
    lStack_a8 = lVar7;
    plStack_a0 = plVar9;
    if (plVar11 != (long *)0x0) {
      plVar5 = plVar11 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lStack_d8 == 0) goto LAB_10a744fec;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plStack_e0 = plVar11;
      } while (cVar1 != '\0');
LAB_10a744fa8:
      lStack_e8 = lStack_d8;
      FUN_10a745278(&lStack_c8,&lStack_e8);
      if (plVar11 != (long *)0x0) {
        plVar9 = plVar11 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
LAB_10a745150:
      plVar9 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        plVar11 = plStack_d0 + 1;
        do {
          lVar7 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar11 = plStack_a0 + 1;
        do {
          lVar7 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (lStack_b0 < 0) {
        __ZdlPv(uStack_c0);
      }
      goto LAB_10a7451d0;
    }
    if (lStack_d8 != 0) {
      plStack_e0 = (long *)0x0;
      goto LAB_10a744fa8;
    }
LAB_10a744fec:
    plVar11 = *(long **)(*(long *)(param_1 + 0xe0) + 0xaa0);
    lStack_118 = lStack_c8;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    lStack_100 = lStack_b0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    lStack_b0 = 0;
    if (plVar9 != (long *)0x0) {
      plVar5 = plVar9 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar5 = plVar11 + 9;
    lStack_f8 = lVar7;
    plStack_f0 = plVar9;
    FUN_10a1cda24(plVar5,&PTR_DAT_110c14f40);
    if (plVar5 == (long *)0x0) {
      puVar6 = &UNK_10f64981f;
      goto LAB_10a74521c;
    }
    pcStack_98 = (code *)&DAT_10f648b9d;
    apuStack_90[0] = (undefined8 *)0xb;
    FUN_10a2677b4(plVar11[0x11],&pcStack_98);
    plVar10 = (long *)plVar5[4];
    if ((plVar10 != (long *)0x0) &&
       (plVar4 = plVar10, ___dynamic_cast(plVar10,&PTR_DAT_110bbadc8,&PTR_DAT_110bbade0,0),
       plVar4 != (long *)0x0)) {
      pcStack_98 = FUN_10a7615b4;
      FUN_10a76169c(apuStack_90,&lStack_118);
      FUN_10a2a6cbc(plVar4,&pcStack_98);
      (*(code *)*apuStack_90[0])(apuStack_90);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      plVar5 = (long *)plVar5[4];
      (**(code **)(*plVar5 + 0x18))();
      if ((int)plVar5 != 0) {
        (**(code **)(*(long *)((long)plVar11 + *(long *)(*plVar11 + -0x18)) + 0x28))
                  ((long)plVar11 + *(long *)(*plVar11 + -0x18));
      }
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 1;
        do {
          lVar7 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (lStack_100 < 0) {
        __ZdlPv(uStack_110);
      }
      goto LAB_10a745150;
    }
  }
  puVar6 = &UNK_10f64983a;
LAB_10a74521c:
  FUN_10a00946c(puVar6);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a745224);
  (*pcVar3)();
}



/* Entry: 10a745278; end: 10a745843;  */

/* WARNING: Removing unreachable block (ram,0x00010a74552c) */
/* WARNING: Removing unreachable block (ram,0x00010a745708) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a745278(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  undefined7 uStack_80;
  byte bStack_79;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  char cStack_61;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  lVar10 = *param_2;
  if (lVar10 == 0) {
    puVar8 = (undefined8 *)param_1[4];
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
    if (puVar8 != (undefined8 *)0x0 && *(char *)(puVar8 + 8) == '\x02') {
      FUN_10a754698(puVar8,&uStack_60);
      return;
    }
    if (puVar8 == (undefined8 *)0x0 || *(char *)(puVar8 + 8) != '\x01') {
      return;
    }
    (*(code *)*puVar8)(&uStack_60,puVar8);
    plVar9 = plStack_58;
    if (plStack_58 == (long *)0x0) {
      return;
    }
    plVar7 = plStack_58 + 1;
    do {
      lVar10 = *plVar7;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 != 0) {
      return;
    }
    (**(code **)(*plStack_58 + 0x10))(plStack_58);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    return;
  }
  lVar13 = *param_1;
  lVar11 = *(long *)(*(long *)(lVar13 + 0xe0) + 0x100);
  if (*(char *)(lVar11 + 0x21f) < '\0') {
    func_0x000107c3192c(&uStack_60,*(undefined8 *)(lVar11 + 0x208),*(undefined8 *)(lVar11 + 0x210));
    lVar10 = *param_2;
  }
  else {
    plStack_58 = *(long **)(lVar11 + 0x210);
    uStack_60 = *(undefined8 *)(lVar11 + 0x208);
    uStack_50 = *(undefined8 *)(lVar11 + 0x218);
  }
  FUN_10a745cf8(&uStack_78,lVar10,lVar13 + 0xe8,&uStack_60);
  lVar10 = *param_2;
  uStack_88 = 0;
  uStack_80 = 0;
  bStack_79 = 0;
  pppppppuStack_90 = (undefined8 *******)0x0;
  if ((*(char *)(lVar10 + 0x70) == '\x01') && (*(char *)(lVar10 + 0x68) == '\x01')) {
    uVar12 = *(ulong *)(lVar10 + 0x58);
    if (-1 < (char)*(byte *)(lVar10 + 0x67)) {
      uVar12 = (ulong)*(byte *)(lVar10 + 0x67);
    }
    if (uVar12 == 0) goto LAB_10a7453ac;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&pppppppuStack_90,lVar10 + 0x50);
  }
  else {
LAB_10a7453ac:
    uStack_80 = 0;
    bStack_79 = 8;
    pppppppuStack_90 = (undefined8 *******)0x3132303632323031;
    uStack_88 = 0;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6728d5,&UNK_10f6741b7,0x74,&UNK_10f674232,in_x6,in_x7,
                          &pppppppuStack_90);
    }
  }
  plVar9 = param_1 + 1;
  cVar4 = *(char *)((long)param_1 + 0x1f);
  uVar12 = (ulong)cVar4;
  if ((long)uVar12 < 0) {
    if (param_1[2] == 0) goto LAB_10a745474;
LAB_10a745418:
    uVar2 = param_1[2];
    if (-1 < cVar4) {
      uVar2 = uVar12;
    }
    uVar12 = uStack_88;
    if (-1 < (char)bStack_79) {
      uVar12 = (ulong)bStack_79;
    }
    if (uVar2 == uVar12) {
      plVar7 = (long *)*plVar9;
      if (-1 < cVar4) {
        plVar7 = plVar9;
      }
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < (char)bStack_79) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memcmp(plVar7,pppppppuVar3);
      bVar6 = (int)plVar7 == 0;
    }
    else {
      bVar6 = false;
    }
  }
  else {
    if (uVar12 != 0) goto LAB_10a745418;
LAB_10a745474:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar9,&pppppppuStack_90);
    bVar6 = true;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar13 + 0xe0) + 0x100) + 0x1c8);
  (**(code **)(*plVar7 + 0x60))();
  lVar10 = plVar7[1];
  lVar13 = plVar7[1];
  lVar11 = *plVar7;
  if (lVar10 != 0) {
    plVar7 = (long *)(lVar10 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar8 = (undefined8 *)0xa8;
  __Znwm();
  puVar8[6] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_110c14dd0;
  puVar8[8] = lVar13;
  puVar8[7] = lVar11;
  if (lVar10 != 0) {
    plVar7 = (long *)(lVar10 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar8[10] = plStack_58;
  puVar8[9] = uStack_60;
  puVar8[0xb] = uStack_50;
  if (cStack_61 < '\0') {
    func_0x000107c3192c(puVar8 + 0xc,uStack_78,uStack_70);
  }
  else {
    puVar8[0xd] = uStack_70;
    puVar8[0xc] = uStack_78;
    puVar8[0xe] = CONCAT17(cStack_61,uStack_68);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar8 + 0xf,param_1[1],param_1[2]);
  }
  else {
    uVar14 = *plVar9;
    puVar8[0x10] = param_1[2];
    puVar8[0xf] = uVar14;
    puVar8[0x11] = param_1[3];
  }
  *(bool *)(puVar8 + 0x12) = bVar6;
  FUN_10a05a5d4(puVar8 + 0x13,&uStack_41);
  plVar9 = (long *)0x20;
  puStack_a0 = puVar8;
  __Znwm();
  plVar7 = plVar9 + 1;
  *plVar7 = 0;
  *plVar9 = (long)&PTR_FUN_110c163a8;
  plVar9[2] = 0;
  plVar9[3] = (long)puVar8;
  plStack_98 = plVar9;
  if (puVar8[6] == 0) {
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar1 = plVar9 + 2;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar8[5] = puVar8;
    puVar8[6] = plVar9;
  }
  else {
    if (*(long *)(puVar8[6] + 8) != -1) goto LAB_10a74565c;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar1 = plVar9 + 2;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar8[5] = puVar8;
    puVar8[6] = plVar9;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar11 = *plVar7;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar6) {
      *plVar7 = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10a74565c:
  puVar8 = (undefined8 *)param_1[4];
  if (puVar8 == (undefined8 *)0x0 || *(char *)(puVar8 + 8) != '\x02') {
    if ((puVar8 != (undefined8 *)0x0) && (*(char *)(puVar8 + 8) == '\x01')) {
      (*(code *)*puVar8)(&puStack_a0,puVar8);
    }
  }
  else {
    FUN_10a754698(puVar8,&puStack_a0);
  }
  plVar9 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar7 = plStack_98 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (lVar10 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar10);
  }
  if ((char)bStack_79 < '\0') {
    __ZdlPv(pppppppuStack_90);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(uStack_78);
  }
  return;
}



/* Entry: 10a745844; end: 10a7458b3;  */

long FUN_10a745844(long param_1)

{
  FUN_10a754bc8(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a7458b4; end: 10a74599b;  */

void FUN_10a7458b4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = (long *)0xa0;
  __Znwm();
  plVar5 = plVar3 + 1;
  *plVar5 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c16b68;
  plStack_40 = plVar3 + 3;
  *plStack_40 = (long)&PTR_FUN_110c15d40;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  *(undefined4 *)(plVar3 + 0xc) = 0x3f800000;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plStack_38 = plVar3;
  FUN_10a74599c(param_1,&plStack_40,param_2);
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
  return;
}



/* Entry: 10a74599c; end: 10a7459e3;  */

void FUN_10a74599c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a746008(param_1,param_2,&uStack_30,param_3,0);
  return;
}



/* Entry: 10a7459e4; end: 10a745b23;  */

/* WARNING: Removing unreachable block (ram,0x00010a745c84) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a7459e4(undefined8 param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plStack_170;
  long *plStack_168;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined4 uStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [48];
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = auStack_d0;
  puVar3 = auStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a754c20(auStack_a8);
  FUN_10a754c78(auStack_78);
  func_0x000104bd4884(auStack_d0,auStack_a8,2);
  lVar11 = 0;
  do {
    if ((&cStack_49)[lVar11] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
    }
    if ((&cStack_61)[lVar11] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_78 + lVar11));
    }
    lVar11 = lVar11 + -0x30;
  } while (lVar11 != -0x60);
  FUN_10a744de8(*(undefined4 *)(*(long *)(*(long *)(param_2 + 0x50) + 0xa20) + 0x18),auStack_d0);
  FUN_10a745b24(param_1,param_2,param_3,auStack_d0);
  func_0x000104c4f944();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = auStack_78;
  lVar11 = -0x60;
  do {
    func_0x000104acfb5c(puVar4);
    puVar4 = puVar4 + -6;
    lVar11 = lVar11 + 0x30;
  } while (lVar11 != 0);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a745b24;
  lVar7 = *param_3;
  if (lVar7 == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(puVar5 + 0xe0) + 0x100);
    puStack_100 = auStack_a8;
    uStack_f8 = param_1;
    lStack_f0 = lVar11;
    puStack_e8 = puVar3;
    puStack_e0 = &stack0xfffffffffffffff0;
    if (*(char *)(lVar9 + 0x21f) < '\0') {
      func_0x000107c3192c(&uStack_120,*(undefined8 *)(lVar9 + 0x208),*(undefined8 *)(lVar9 + 0x210))
      ;
      lVar7 = *param_3;
    }
    else {
      uStack_118 = *(undefined8 *)(lVar9 + 0x210);
      uStack_120 = *(undefined8 *)(lVar9 + 0x208);
      uStack_110 = *(undefined8 *)(lVar9 + 0x218);
    }
    FUN_10a745cf8(auStack_138,lVar7,puVar5 + 0xe8,&uStack_120);
    func_0x000107c2791c(auStack_160,puVar8);
    FUN_10a744de8(*(undefined4 *)(*(long *)(*(long *)(puVar5 + 0x50) + 0xa20) + 0x18),auStack_160);
    plVar6 = (long *)0xa0;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c16b68;
    plStack_170 = plVar6 + 3;
    *plStack_170 = (long)&PTR_FUN_110c15d40;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[5] = 0;
    plVar6[4] = 0;
    plVar6[7] = 0;
    plVar6[6] = 0;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x11] = 0;
    plVar6[0x10] = 0;
    plVar6[0x13] = 0;
    plVar6[0x12] = 0;
    *(undefined4 *)(plVar6 + 0xc) = uStack_140;
    plStack_168 = plVar6;
    FUN_10a75eb64(plVar6 + 8,uStack_150,0);
    FUN_10a745e5c(extraout_x8,auStack_138,&plStack_170);
    do {
      lVar11 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    func_0x000104c4f944(auStack_160);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
  }
  return;
}



/* Entry: 10a745b24; end: 10a745cf7;  */

/* WARNING: Removing unreachable block (ram,0x00010a745c84) */

void FUN_10a745b24(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined4 uStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar4 = *param_3;
  if (lVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_2 + 0xe0) + 0x100);
    if (*(char *)(lVar5 + 0x21f) < '\0') {
      func_0x000107c3192c(&uStack_50,*(undefined8 *)(lVar5 + 0x208),*(undefined8 *)(lVar5 + 0x210));
      lVar4 = *param_3;
    }
    else {
      uStack_48 = *(undefined8 *)(lVar5 + 0x210);
      uStack_50 = *(undefined8 *)(lVar5 + 0x208);
      uStack_40 = *(undefined8 *)(lVar5 + 0x218);
    }
    FUN_10a745cf8(auStack_68,lVar4,param_2 + 0xe8,&uStack_50);
    func_0x000107c2791c(auStack_90,param_4);
    FUN_10a744de8(*(undefined4 *)(*(long *)(*(long *)(param_2 + 0x50) + 0xa20) + 0x18),auStack_90);
    plVar3 = (long *)0xa0;
    __Znwm();
    plVar6 = plVar3 + 1;
    *plVar6 = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110c16b68;
    plStack_a0 = plVar3 + 3;
    *plStack_a0 = (long)&PTR_FUN_110c15d40;
    plVar3[0xb] = 0;
    plVar3[10] = 0;
    plVar3[0xd] = 0;
    plVar3[0xc] = 0;
    plVar3[5] = 0;
    plVar3[4] = 0;
    plVar3[7] = 0;
    plVar3[6] = 0;
    plVar3[9] = 0;
    plVar3[8] = 0;
    plVar3[0xf] = 0;
    plVar3[0xe] = 0;
    plVar3[0x11] = 0;
    plVar3[0x10] = 0;
    plVar3[0x13] = 0;
    plVar3[0x12] = 0;
    *(undefined4 *)(plVar3 + 0xc) = uStack_70;
    plStack_98 = plVar3;
    FUN_10a75eb64(plVar3 + 8,uStack_80,0);
    FUN_10a745e5c(param_1,auStack_68,&plStack_a0);
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
    func_0x000104c4f944(auStack_90);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
  }
  return;
}



/* Entry: 10a745cf8; end: 10a745e5b;  */

void FUN_10a745cf8(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 auStack_40 [2];
  char cStack_29;
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*(char *)(param_2 + 0x70) == '\x01') && ((*(byte *)(param_2 + 0x48) & 1) != 0)) {
    uVar1 = *(ulong *)(param_2 + 0x38);
    if (-1 < (char)*(byte *)(param_2 + 0x47)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x47);
    }
    if (uVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1,param_2 + 0x30);
      return;
    }
  }
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar1 == 0) {
    FUN_10a0b4df8(auStack_40,param_4,param_2 + 0x18);
    puVar3 = &uStack_21;
    func_0x000107c2b05c(puVar3,auStack_40);
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
    }
    func_0x000107c2c4dc(param_1,(&PTR_DAT_110c14f50)[(ulong)puVar3 % 0x37]);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,param_3);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    puVar2 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar2 = param_1;
    }
    func_0x00010ae06f08(1,4,&UNK_10f6728d5,&UNK_10f67425c,0x68,&UNK_10f674301,param_7,param_8,puVar2
                       );
  }
  return;
}



/* Entry: 10a745e5c; end: 10a746007;  */

void FUN_10a745e5c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  *puVar4 = &PTR_FUN_110c15c38;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar4 + 7,*param_2,param_2[1]);
  }
  else {
    uVar8 = *param_2;
    puVar4[8] = param_2[1];
    puVar4[7] = uVar8;
    puVar4[9] = param_2[2];
  }
  lVar6 = param_3[1];
  uVar8 = *param_3;
  puVar4[0xb] = param_3[1];
  puVar4[10] = uVar8;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = puVar4;
  plVar5 = (long *)0x20;
  __Znwm();
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  *plVar5 = (long)&PTR_FUN_110c16420;
  plVar5[2] = 0;
  plVar5[3] = (long)puVar4;
  param_1[1] = plVar5;
  if (puVar4[6] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[5] = puVar4;
    puVar4[6] = plVar5;
  }
  else {
    if (*(long *)(puVar4[6] + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[5] = puVar4;
    puVar4[6] = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 10a746008; end: 10a746e27;  */

/* WARNING: Possible PIC construction at 0x00010a746478: Changing call to branch */

void FUN_10a746008(long param_1,long *param_2,long *param_3,long *param_4,undefined1 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar19;
  undefined1 auStack_220 [8];
  long alStack_218 [2];
  undefined8 uStack_208;
  long lStack_200;
  undefined4 uStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined1 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  long *plStack_140;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined1 auStack_f8 [80];
  code *pcStack_a8;
  long *aplStack_a0 [7];
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_4 == 0) || (lVar16 = *param_2, lVar16 == 0)) {
    if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10a7469f4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      puVar11 = &UNK_10f672914;
      puVar15 = &UNK_10f672a25;
      uVar18 = 0;
      uVar12 = 1;
      uVar14 = 0x13a;
      goto SUB_10ae06f08;
    }
LAB_10a746cac:
    ___stack_chk_fail();
  }
  else {
    plStack_1e0 = *(long **)(lVar16 + 0x68);
    plVar8 = *(long **)(lVar16 + 0x70);
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_1d8 = plVar8;
    if (plStack_1e0 != (long *)0x0) {
      lVar16 = 0;
      do {
        if (*(int *)(&UNK_10e4d7f74 + lVar16) == (int)plStack_1e0[4]) {
          if (lVar16 != 0x10) goto LAB_10a746154;
          break;
        }
        lVar16 = lVar16 + 4;
      } while (lVar16 != 0x10);
      uVar18 = *(undefined8 *)(param_1 + 0xe0);
      FUN_10a3bf330(auStack_f8,&DAT_10f2fb62f,2);
      FUN_10a746e28(uVar18,&UNK_10f674339,0x22,auStack_f8);
      FUN_10a042634(auStack_f8);
    }
LAB_10a746154:
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 1;
      do {
        lVar16 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    lVar16 = *param_2;
    if (*param_3 != 0) {
      plStack_1e0 = *(long **)(lVar16 + 0x68);
      plVar8 = *(long **)(lVar16 + 0x70);
      if (plVar8 != (long *)0x0) {
        plVar7 = plVar8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_1d8 = plVar8;
      if (plStack_1e0 == (long *)0x0) {
        plVar7 = (long *)0x128;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_110c16970;
        plVar7[5] = 0;
        plVar7[4] = 0;
        plVar7[7] = 0;
        plVar7[6] = 0;
        plVar7[9] = 0;
        plVar7[8] = 0;
        plVar7[0xb] = 0;
        plVar7[10] = 0;
        plVar7[0xd] = 0;
        plVar7[0xc] = 0;
        plVar7[0xf] = 0;
        plVar7[0xe] = 0;
        plVar7[0x11] = 0;
        plVar7[0x10] = 0;
        plVar7[0x13] = 0;
        plVar7[0x12] = 0;
        plVar7[0x15] = 0;
        plVar7[0x14] = 0;
        plVar7[0x17] = 0;
        plVar7[0x16] = 0;
        plVar7[0x19] = 0;
        plVar7[0x18] = 0;
        plVar7[0x1b] = 0;
        plVar7[0x1a] = 0;
        plVar7[0x1d] = 0;
        plVar7[0x1c] = 0;
        plVar7[0x1f] = 0;
        plVar7[0x1e] = 0;
        plVar7[0x21] = 0;
        plVar7[0x20] = 0;
        plVar7[0x23] = 0;
        plVar7[0x22] = 0;
        plVar7[0x24] = 0;
        plStack_1e0 = plVar7 + 3;
        *plStack_1e0 = (long)&PTR_DAT_110c169c0;
        *(undefined4 *)(plVar7 + 6) = 0;
        *(undefined4 *)((long)plVar7 + 0x33) = 0;
        plStack_1d8 = plVar7;
        if (plVar8 != (long *)0x0) {
          plVar7 = plVar8 + 1;
          do {
            lVar16 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      lVar16 = *param_3;
      if ((*(ushort *)(lVar16 + 0x18) >> 8 & 1) != 0) {
        *(ushort *)(plStack_1e0 + 3) = *(ushort *)(lVar16 + 0x18);
        lVar16 = *param_3;
      }
      if ((*(ushort *)(lVar16 + 0x1a) >> 8 & 1) != 0) {
        *(ushort *)((long)plStack_1e0 + 0x1a) = *(ushort *)(lVar16 + 0x1a);
        lVar16 = *param_3;
      }
      if ((*(ushort *)(lVar16 + 0x1c) >> 8 & 1) != 0) {
        *(ushort *)((long)plStack_1e0 + 0x1c) = *(ushort *)(lVar16 + 0x1c);
      }
      lVar16 = *param_2;
      plStack_1f0 = plStack_1e0;
      plStack_1e8 = plStack_1d8;
      if (plStack_1d8 != (long *)0x0) {
        plVar8 = plStack_1d8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a743598(lVar16 + 0x68,&plStack_1f0);
      plVar8 = plStack_1e8;
      if (plStack_1e8 != (long *)0x0) {
        plVar7 = plStack_1e8 + 1;
        do {
          lVar16 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_1d8;
      if (plStack_1d8 != (long *)0x0) {
        plVar7 = plStack_1d8 + 1;
        do {
          lVar16 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      lVar16 = *param_2;
    }
    func_0x000107c2791c(alStack_218,lVar16 + 0x28);
    if (lStack_200 == 0) {
      plVar7 = (long *)0x40;
      __Znwm();
      plStack_1d8 = alStack_218;
      lStack_1d0 = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plStack_1e0 = plVar7;
      FUN_10a754c20(plVar7 + 2);
      lStack_1d0 = CONCAT71(lStack_1d0._1_7_,1);
      plVar8 = alStack_218;
      func_0x000107c2b05c(plVar8,plVar7 + 2);
      plVar7[1] = (long)plVar8;
      plVar8 = alStack_218;
      FUN_10a7613d0(plVar8,plVar7);
      plVar7 = plStack_1e0;
      if ((((ulong)plVar8 & 1) == 0) && (plStack_1e0 != (long *)0x0)) {
        if ((char)lStack_1d0 == '\x01') {
          func_0x00010a052340(plStack_1e0 + 2);
        }
        __ZdlPv(plVar7);
      }
      plVar7 = (long *)0x40;
      __Znwm();
      plStack_1d8 = alStack_218;
      lStack_1d0 = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plStack_1e0 = plVar7;
      FUN_10a754c78(plVar7 + 2);
      lStack_1d0 = CONCAT71(lStack_1d0._1_7_,1);
      plVar8 = alStack_218;
      func_0x000107c2b05c(plVar8,plVar7 + 2);
      plVar7[1] = (long)plVar8;
      plVar8 = alStack_218;
      FUN_10a7613d0(plVar8,plVar7);
      plVar7 = plStack_1e0;
      if ((((ulong)plVar8 & 1) == 0) && (plStack_1e0 != (long *)0x0)) {
        if ((char)lStack_1d0 == '\x01') {
          func_0x00010a052340(plStack_1e0 + 2);
        }
        __ZdlPv(plVar7);
      }
      plVar7 = (long *)0x40;
      __Znwm();
      plStack_1d8 = alStack_218;
      lStack_1d0 = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plStack_1e0 = plVar7;
      func_0x000107c2b054(plVar7 + 2,&DAT_10f2c4724);
      func_0x000107c2b054(plVar7 + 5,&DAT_10f6842c6);
      lStack_1d0 = CONCAT71(lStack_1d0._1_7_,1);
      plVar8 = alStack_218;
      func_0x000107c2b05c(plVar8,plVar7 + 2);
      plVar7[1] = (long)plVar8;
      plVar8 = alStack_218;
      FUN_10a7613d0(plVar8,plStack_1e0);
      plVar7 = plStack_1e0;
      if ((((ulong)plVar8 & 1) == 0) && (plStack_1e0 != (long *)0x0)) {
        if ((char)lStack_1d0 == '\x01') {
          func_0x00010a052340(plStack_1e0 + 2);
        }
        __ZdlPv(plVar7);
      }
    }
    FUN_10a744de8(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x50) + 0xa20) + 0x18),alStack_218);
    plStack_1e0 = *(long **)(*param_2 + 0x68);
    plVar8 = *(long **)(*param_2 + 0x70);
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_1d8 = plVar8;
    if ((plStack_1e0 == (long *)0x0) || ((int)plStack_1e0[4] != 3)) {
      bVar5 = true;
    }
    else {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        puVar11 = &UNK_10f67435c;
        puVar15 = &UNK_10f67441b;
        uVar18 = 1;
        uVar12 = 4;
        uVar14 = 0x9c;
        unaff_x30 = 0x10a74647c;
        register0x00000008 = (BADSPACEBASE *)auStack_220;
        unaff_x29 = puVar1;
SUB_10ae06f08:
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        *(BADSPACEBASE **)((long)register0x00000008 + -0x18) = register0x00000008;
        FUN_10ae06f30(uVar18,uVar12,&UNK_10f6728d5,puVar11,uVar14,puVar15,register0x00000008);
        return;
      }
      bVar5 = false;
      pcStack_a8 = (code *)0x0;
      aplStack_a0[0] = (long *)0x0;
    }
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 1;
      do {
        lVar16 = *plVar7;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (bVar5) {
      pcStack_a8 = *(code **)(*param_2 + 0x78);
      plVar8 = *(long **)(*param_2 + 0x80);
      aplStack_a0[0] = plVar8;
      if (plVar8 == (long *)0x0) {
        if (pcStack_a8 == (code *)0x0) goto LAB_10a7465c8;
      }
      else {
        plVar7 = plVar8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pcStack_a8 == (code *)0x0) {
          do {
            lVar16 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
LAB_10a7465c8:
          plVar8 = (long *)0x38;
          __Znwm();
          plVar8[1] = 0;
          plVar8[2] = 0;
          *plVar8 = (long)&PTR_FUN_110c16ac0;
          pcStack_a8 = (code *)(plVar8 + 3);
          *(undefined ***)pcStack_a8 = &PTR_FUN_110c16b10;
          plVar8[4] = 0;
          plVar8[5] = 0;
          plVar8[6] = 0x3f0000003f000000;
          aplStack_a0[0] = plVar8;
        }
      }
LAB_10a746600:
      pcVar6 = pcStack_a8;
      plVar7 = (long *)0x40;
      __Znwm();
      plStack_1d8 = alStack_218;
      lStack_1d0 = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plStack_1e0 = plVar7;
      func_0x000107c2b054(plVar7 + 2,&DAT_10f2c46fc);
      func_0x000107c2b054(plVar7 + 5,"true");
      lStack_1d0 = CONCAT71(lStack_1d0._1_7_,1);
      plVar8 = alStack_218;
      func_0x000107c2b05c(plVar8,plVar7 + 2);
      plVar7[1] = (long)plVar8;
      plVar8 = alStack_218;
      FUN_10a7613d0(plVar8,plStack_1e0);
      plVar7 = plStack_1e0;
      if ((((ulong)plVar8 & 1) == 0) && (plStack_1e0 != (long *)0x0)) {
        if ((char)lStack_1d0 == '\x01') {
          func_0x00010a052340(plStack_1e0 + 2);
        }
        __ZdlPv(plVar7);
      }
      fVar19 = *(float *)(pcVar6 + 0x18);
      if (0.4 <= fVar19) {
        if (0.65 <= fVar19) {
          pcVar13 = "0.8";
          if (0.9 <= fVar19) {
            pcVar13 = "1";
          }
        }
        else {
          pcVar13 = "0.5";
        }
      }
      else {
        pcVar13 = "0.3";
      }
      func_0x000107c2b054(&lStack_160,pcVar13);
      plVar7 = (long *)0x40;
      __Znwm();
      plStack_1d8 = alStack_218;
      lStack_1d0 = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plStack_1e0 = plVar7;
      func_0x000107c2b054(plVar7 + 2,&DAT_10f2c4707);
      plVar7[6] = lStack_158;
      plVar7[5] = lStack_160;
      plVar7[7] = (long)plStack_150;
      lStack_158 = 0;
      plStack_150 = (long *)0x0;
      lStack_160 = 0;
      lStack_1d0 = CONCAT71(lStack_1d0._1_7_,1);
      plVar8 = alStack_218;
      func_0x000107c2b05c(plVar8,plVar7 + 2);
      plVar7[1] = (long)plVar8;
      plVar8 = alStack_218;
      FUN_10a7613d0(plVar8,plVar7);
      plVar7 = plStack_1e0;
      if ((((ulong)plVar8 & 1) == 0) && (plStack_1e0 != (long *)0x0)) {
        if ((char)lStack_1d0 == '\x01') {
          func_0x00010a052340(plStack_1e0 + 2);
        }
        __ZdlPv(plVar7);
      }
      if ((long)plStack_150 < 0) {
        __ZdlPv(lStack_160);
      }
      fVar19 = *(float *)(pcVar6 + 0x1c);
      if (0.4 <= fVar19) {
        if (0.65 <= fVar19) {
          pcVar13 = "0.8";
          if (0.9 <= fVar19) {
            pcVar13 = "1";
          }
        }
        else {
          pcVar13 = "0.5";
        }
      }
      else {
        pcVar13 = "0.3";
      }
      func_0x000107c2b054(&lStack_160,pcVar13);
      plVar7 = (long *)0x40;
      __Znwm();
      plStack_1d8 = alStack_218;
      lStack_1d0 = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plStack_1e0 = plVar7;
      func_0x000107c2b054(plVar7 + 2,&DAT_10f2c4710);
      plVar7[6] = lStack_158;
      plVar7[5] = lStack_160;
      plVar7[7] = (long)plStack_150;
      lStack_158 = 0;
      plStack_150 = (long *)0x0;
      lStack_160 = 0;
      lStack_1d0 = CONCAT71(lStack_1d0._1_7_,1);
      plVar8 = alStack_218;
      func_0x000107c2b05c(plVar8,plVar7 + 2);
      plVar7[1] = (long)plVar8;
      plVar8 = alStack_218;
      FUN_10a7613d0(plVar8,plVar7);
      plVar7 = plStack_1e0;
      if ((((ulong)plVar8 & 1) == 0) && (plStack_1e0 != (long *)0x0)) {
        if ((char)lStack_1d0 == '\x01') {
          func_0x00010a052340(plStack_1e0 + 2);
        }
        __ZdlPv(plVar7);
      }
      if ((long)plStack_150 < 0) {
        __ZdlPv(lStack_160);
      }
    }
    else if (pcStack_a8 != (code *)0x0) goto LAB_10a746600;
    plVar8 = aplStack_a0[0];
    if (aplStack_a0[0] != (long *)0x0) {
      plVar7 = aplStack_a0[0] + 1;
      do {
        lVar16 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*aplStack_a0[0] + 0x10))(aplStack_a0[0]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    lVar16 = *param_2;
    if ((long *)(lVar16 + 0x28) != alStack_218) {
      *(undefined4 *)(lVar16 + 0x48) = uStack_1f8;
      FUN_10a75eb64((long *)(lVar16 + 0x28),uStack_208,0);
      lVar16 = *param_2;
    }
    plStack_150 = (long *)param_2[1];
    if (plStack_150 != (long *)0x0) {
      plVar8 = plStack_150 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_140 = (long *)param_4[1];
    lStack_148 = *param_4;
    if (param_4[1] != 0) {
      plVar8 = (long *)(param_4[1] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_110 = (undefined1)param_1;
    uStack_10f = (undefined7)((ulong)param_1 >> 8);
    lVar2 = *(long *)(*param_2 + 0x18);
    plVar8 = *(long **)(*param_2 + 0x20);
    lStack_160 = param_1;
    lStack_158 = lVar16;
    lStack_130 = param_1;
    lStack_120 = param_1;
    uStack_118 = param_5;
    uStack_108 = param_5;
    if (plVar8 == (long *)0x0) {
LAB_10a746970:
      if (lVar2 == 0) goto LAB_10a746a48;
LAB_10a746974:
      FUN_10a7470e4(&lStack_160);
LAB_10a74697c:
      plVar8 = plStack_140;
      if (plStack_140 != (long *)0x0) {
        plVar7 = plStack_140 + 1;
        do {
          lVar16 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_140 + 0x10))(plStack_140);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_150;
      if (plStack_150 != (long *)0x0) {
        plVar7 = plStack_150 + 1;
        do {
          lVar16 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      func_0x000104c4f944(alStack_218);
LAB_10a7469f4:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      goto LAB_10a746cac;
    }
    plVar7 = plVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar16 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 != 0) goto LAB_10a746970;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    if (lVar2 != 0) goto LAB_10a746974;
LAB_10a746a48:
    plVar8 = plStack_140;
    plVar7 = *(long **)(*(long *)(param_1 + 0xe0) + 0xaa0);
    plStack_1d8 = (long *)param_4[1];
    plStack_1e0 = (long *)*param_4;
    if (param_4[1] != 0) {
      plVar10 = (long *)(param_4[1] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_1c8 = (long *)param_2[1];
    lStack_1d0 = *param_2;
    if (param_2[1] != 0) {
      plVar10 = (long *)(param_2[1] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lStack_1b8 = lStack_158;
    lStack_1c0 = lStack_160;
    plStack_1b0 = plStack_150;
    if (plStack_150 != (long *)0x0) {
      plVar10 = plStack_150 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_1a0 = plStack_140;
    lStack_1a8 = lStack_148;
    if (plStack_140 != (long *)0x0) {
      plVar10 = plStack_140 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_188 = uStack_128;
    lStack_190 = lStack_130;
    uStack_178 = uStack_118;
    lStack_180 = lStack_120;
    uStack_16f = CONCAT17(uStack_108,uStack_10f);
    uStack_170 = uStack_110;
    plVar10 = plVar7 + 9;
    FUN_10a1cda24(plVar10,&PTR_DAT_110c14f40);
    if (plVar10 == (long *)0x0) {
      puVar11 = &UNK_10f64981f;
      goto LAB_10a746cc4;
    }
    pcStack_a8 = (code *)&DAT_10f648b9d;
    aplStack_a0[0] = (long *)0xb;
    FUN_10a2677b4(plVar7[0x11],&pcStack_a8);
    plVar17 = (long *)plVar10[4];
    if ((plVar17 != (long *)0x0) &&
       (plVar9 = plVar17, ___dynamic_cast(plVar17,&PTR_DAT_110bbadc8,&PTR_DAT_110bbade0,0),
       plVar9 != (long *)0x0)) {
      pcStack_a8 = FUN_10a7617b0;
      FUN_10a7618ac(aplStack_a0,&plStack_1e0);
      FUN_10a2a6cbc(plVar9,&pcStack_a8);
      (*(code *)*aplStack_a0[0])(aplStack_a0);
      (**(code **)(*plVar17 + 0x10))(plVar17);
      plVar10 = (long *)plVar10[4];
      (**(code **)(*plVar10 + 0x18))();
      if ((int)plVar10 != 0) {
        (**(code **)(*(long *)((long)plVar7 + *(long *)(*plVar7 + -0x18)) + 0x28))
                  ((long)plVar7 + *(long *)(*plVar7 + -0x18));
      }
      if (plVar8 != (long *)0x0) {
        plVar7 = plVar8 + 1;
        do {
          lVar16 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_1b0;
      if (plStack_1b0 != (long *)0x0) {
        plVar7 = plStack_1b0 + 1;
        do {
          lVar16 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_1c8;
      if (plStack_1c8 != (long *)0x0) {
        plVar7 = plStack_1c8 + 1;
        do {
          lVar16 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_1d8;
      if (plStack_1d8 != (long *)0x0) {
        plVar7 = plStack_1d8 + 1;
        do {
          lVar16 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      goto LAB_10a74697c;
    }
  }
  puVar11 = &UNK_10f64983a;
LAB_10a746cc4:
  FUN_10a00946c(puVar11);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a746ccc);
  (*pcVar6)();
}



/* Entry: 10a746e28; end: 10a7470e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a747ef8) */
/* WARNING: Removing unreachable block (ram,0x00010a7479d8) */
/* WARNING: Removing unreachable block (ram,0x00010a747a0c) */
/* WARNING: Removing unreachable block (ram,0x00010a747f08) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10a746e28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  char *pcVar3;
  ulong uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  byte bVar7;
  undefined1 uVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  long *******ppppppplVar12;
  long *****ppppplVar13;
  undefined1 *puVar14;
  long *******ppppppplVar15;
  long *****ppppplVar16;
  uint uVar17;
  long lVar18;
  long ******pppppplVar19;
  long ****pppplVar20;
  long *******ppppppplVar21;
  long ******pppppplVar22;
  long *plVar23;
  long ****pppplVar24;
  long *******ppppppplVar25;
  long *****ppppplVar26;
  undefined8 uStack_3d8;
  undefined6 uStack_3d0;
  undefined1 uStack_3ca;
  byte bStack_3c9;
  undefined7 uStack_3c8;
  byte bStack_3c1;
  long *******ppppppplStack_3c0;
  long ***ppplStack_3b8;
  long ***ppplStack_3b0;
  undefined8 uStack_3a8;
  long *******ppppppplStack_3a0;
  long *******ppppppplStack_398;
  long *******ppppppplStack_390;
  long *******ppppppplStack_388;
  long *******ppppppplStack_380;
  long *******ppppppplStack_378;
  long *******ppppppplStack_370;
  undefined8 uStack_368;
  long lStack_360;
  long ******pppppplStack_358;
  long *******ppppppplStack_350;
  long ******pppppplStack_348;
  long *******ppppppplStack_340;
  char cStack_338;
  long ******pppppplStack_330;
  long *******ppppppplStack_328;
  undefined1 auStack_320 [80];
  long *******ppppppplStack_2d0;
  undefined7 uStack_2c8;
  byte bStack_2c1;
  undefined7 uStack_2c0;
  byte bStack_2b9;
  long ******pppppplStack_2b8;
  long *******ppppppplStack_2b0;
  long *******ppppppplStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long ******pppppplStack_290;
  long *******ppppppplStack_288;
  long ******pppppplStack_280;
  long *******ppppppplStack_278;
  char cStack_270;
  long ******pppppplStack_268;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long ******pppppplStack_238;
  long *******ppppppplStack_230;
  long ******pppppplStack_228;
  long *******ppppppplStack_220;
  char cStack_218;
  undefined8 uStack_210;
  undefined7 uStack_208;
  byte bStack_201;
  long ******pppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long ******pppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long ******pppppplStack_1c8;
  long *******ppppppplStack_1c0;
  char cStack_1b8;
  long ******pppppplStack_1b0;
  long lStack_1a8;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar15 = (long *******)0x113835ee8;
  FUN_10a08f69c();
  if ((*(char *)ppppppplVar15 == '\x01') &&
     (ppppppplVar25 = *(long ********)(param_1 + 0x940), ppppppplVar25 != (long *******)0x0)) {
    lVar18 = *(long *)(param_1 + 0x100);
    if (*(char *)(lVar18 + 0x21f) < '\0') {
      ppppppplVar15 = (long *******)&ppppppplStack_100;
      func_0x000107c3192c(ppppppplVar15,*(undefined8 *)(lVar18 + 0x208),
                          *(undefined8 *)(lVar18 + 0x210));
    }
    else {
      uStack_f8 = *(ulong *)(lVar18 + 0x210);
      ppppppplStack_100 = *(long ********)(lVar18 + 0x208);
      uStack_f0 = *(undefined8 *)(lVar18 + 0x218);
    }
    uVar17 = (uint)(char)uStack_f0._7_1_;
    uVar4 = uStack_f8;
    if (-1 < (int)uVar17) {
      uVar4 = (ulong)uStack_f0._7_1_;
    }
    if (uVar4 != 0) {
      ppppppplVar12 = (long *******)0x138;
      __Znwm();
      ppppppplVar21 = ppppppplVar12 + 1;
      *ppppppplVar21 = (long ******)0x0;
      ppppppplVar12[2] = (long ******)0x0;
      *ppppppplVar12 = (long ******)&PTR_FUN_110b9f3b0;
      ppppppplVar15 = ppppppplVar12 + 3;
      uStack_a8 = *param_4;
      uStack_a0 = param_4[1];
      *param_4 = 0;
      (**(code **)(param_4[2] + 0x10))(auStack_98);
      uStack_60 = param_4[9];
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      pcStack_e8 = FUN_10a282dc4;
      ppuStack_e0 = &PTR_DAT_110ae9180;
      FUN_10a23708c(ppppppplVar15,param_2,param_3,&UNK_10f647b49,4,&uStack_a8,1);
      (*(code *)*ppuStack_e0)(&ppuStack_e0);
      FUN_10a042634(&uStack_a8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar21,0x10);
        if (bVar11) {
          *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + 1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      ppppppplStack_120 = ppppppplVar15;
      ppppppplStack_118 = ppppppplVar12;
      ppppppplStack_110 = ppppppplVar15;
      ppppppplStack_108 = ppppppplVar12;
      FUN_10a25f3f4(ppppppplVar25,&ppppppplStack_120);
      do {
        pppppplVar19 = *ppppppplVar21;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar21,0x10);
        if (bVar11) {
          *ppppppplVar21 = (long ******)((long)pppppplVar19 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (pppppplVar19 == (long ******)0x0) {
        (*(code *)(*ppppppplVar12)[2])(ppppppplVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar25 = ppppppplVar12;
      }
      ppppppplVar12 = ppppppplStack_108;
      ppppppplVar15 = ppppppplVar25;
      if (ppppppplStack_108 != (long *******)0x0) {
        ppppppplVar25 = ppppppplStack_108 + 1;
        do {
          pppppplVar19 = *ppppppplVar25;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
          if (bVar11) {
            *ppppppplVar25 = (long ******)((long)pppppplVar19 + -1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (pppppplVar19 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_108)[2])(ppppppplStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppplVar15 = ppppppplVar12;
        }
      }
      uVar17 = (uint)uStack_f0._7_1_;
    }
    if ((uVar17 >> 7 & 1) != 0) {
      ppppppplVar15 = ppppppplStack_100;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppppplVar15;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar19 = *ppppppplVar15;
  pppplVar20 = pppppplVar19[0x1c][0x20];
  if (*(char *)((long)pppplVar20 + 0x21f) < '\0') {
    func_0x000107c3192c(&ppppppplStack_3c0,pppplVar20[0x41],pppplVar20[0x42]);
  }
  else {
    ppplStack_3b8 = pppplVar20[0x42];
    ppppppplStack_3c0 = (long *******)pppplVar20[0x41];
    ppplStack_3b0 = pppplVar20[0x43];
  }
  ppppppplVar25 = ppppppplVar15 + 1;
  ppppplVar16 = (*ppppppplVar25)[0xd];
  ppppplVar26 = (*ppppppplVar25)[0xe];
  if (ppppplVar26 != (long *****)0x0) {
    ppppplVar13 = ppppplVar26 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
      if (bVar11) {
        *ppppplVar13 = (long ****)((long)*ppppplVar13 + 1);
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (ppppplVar16 == (long *****)0x0) {
LAB_10a7471e0:
    bVar11 = true;
  }
  else {
    lVar18 = 0;
    do {
      if (*(int *)(&UNK_10e4d7f74 + lVar18) == *(int *)(ppppplVar16 + 4)) {
        if (lVar18 != 0x10) goto LAB_10a7471e0;
        break;
      }
      lVar18 = lVar18 + 4;
    } while (lVar18 != 0x10);
    bVar11 = false;
    bStack_3c1 = 0xe;
    uStack_3d8._0_6_ = 0x393633323231;
    uStack_3d8._6_2_ = 0x3833;
    uStack_3d0 = 0x35732d315f39;
    uStack_3ca = 0;
  }
  if (ppppplVar26 != (long *****)0x0) {
    ppppplVar16 = ppppplVar26 + 1;
    do {
      pppplVar20 = *ppppplVar16;
      cVar10 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
      if (bVar9) {
        *ppppplVar16 = (long ****)((long)pppplVar20 + -1);
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (pppplVar20 == (long ****)0x0) {
      (*(code *)(*ppppplVar26)[2])(ppppplVar26);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar26);
    }
  }
  pppppplVar22 = *ppppppplVar25;
  if (bVar11) {
    ppppppplStack_2d0 = (long *******)pppppplVar22[3];
    ppppplVar16 = pppppplVar22[4];
    uStack_2c8 = SUB87(ppppplVar16,0);
    bStack_2c1 = (byte)((ulong)ppppplVar16 >> 0x38);
    if (ppppplVar16 != (long *****)0x0) {
      ppppplVar26 = ppppplVar16 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
        if (bVar11) {
          *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    FUN_10a745cf8(&uStack_3d8,ppppppplStack_2d0,pppppplVar19 + 0x1d,&ppppppplStack_3c0);
    if (ppppplVar16 != (long *****)0x0) {
      ppppplVar26 = ppppplVar16 + 1;
      do {
        pppplVar20 = *ppppplVar26;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
        if (bVar11) {
          *ppppplVar26 = (long ****)((long)pppplVar20 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (pppplVar20 == (long ****)0x0) {
        (*(code *)(*ppppplVar16)[2])(ppppplVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar16);
      }
    }
    pppppplVar22 = *ppppppplVar25;
  }
  ppppplVar16 = pppppplVar22[3];
  ppppplVar26 = pppppplVar22[4];
  if (ppppplVar26 != (long *****)0x0) {
    ppppplVar13 = ppppplVar26 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
      if (bVar11) {
        *ppppplVar13 = (long ****)((long)*ppppplVar13 + 1);
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  pppplVar20 = (long ****)(long)(char)bStack_3c1;
  if ((long)pppplVar20 < 0) {
    pppplVar24 = (long ****)CONCAT17(bStack_3c9,CONCAT16(uStack_3ca,uStack_3d0));
    if (pppplVar24 != (long ****)0x0) {
      plVar23 = (long *)CONCAT26(uStack_3d8._6_2_,(undefined6)uStack_3d8);
      goto LAB_10a7472c8;
    }
LAB_10a747374:
    bVar11 = false;
    if (ppppplVar26 == (long *****)0x0) goto LAB_10a747394;
LAB_10a74737c:
    ppppplVar16 = ppppplVar26 + 1;
    do {
      pppplVar20 = *ppppplVar16;
      cVar10 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
      if (bVar9) {
        *ppppplVar16 = (long ****)((long)pppplVar20 + -1);
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (pppplVar20 != (long ****)0x0) goto LAB_10a747394;
    (*(code *)(*ppppplVar26)[2])(ppppplVar26);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar26);
    if (bVar11) goto LAB_10a747398;
  }
  else {
    if (bStack_3c1 == 0) goto LAB_10a747374;
    plVar23 = &uStack_3d8;
    pppplVar24 = pppplVar20;
LAB_10a7472c8:
    if ((((pppplVar24 == (long ****)0xe) &&
         (*plVar23 == 0x3833393633323231 && *(long *)((long)plVar23 + 6) == 0x35732d315f393833)) ||
        (*(char *)(ppppplVar16 + 0xe) != '\x01')) || (*(char *)(ppppplVar16 + 9) != '\x01'))
    goto LAB_10a747374;
    bVar7 = *(byte *)((long)ppppplVar16 + 0x47);
    pppplVar24 = ppppplVar16[7];
    if (-1 < (char)bVar7) {
      pppplVar24 = (long ****)(ulong)bVar7;
    }
    pppplVar1 = (long ****)CONCAT17(bStack_3c9,CONCAT16(uStack_3ca,uStack_3d0));
    if (-1 < (char)bStack_3c1) {
      pppplVar1 = pppplVar20;
    }
    if (pppplVar24 != pppplVar1) goto LAB_10a747374;
    ppppplVar13 = (long *****)ppppplVar16[6];
    if (-1 < (char)bVar7) {
      ppppplVar13 = ppppplVar16 + 6;
    }
    puVar2 = (undefined8 *)CONCAT26(uStack_3d8._6_2_,(undefined6)uStack_3d8);
    if (-1 < (char)bStack_3c1) {
      puVar2 = &uStack_3d8;
    }
    _memcmp(ppppplVar13,puVar2);
    bVar11 = (int)ppppplVar13 == 0;
    if (ppppplVar26 != (long *****)0x0) goto LAB_10a74737c;
LAB_10a747394:
    if (bVar11) {
LAB_10a747398:
      ppppplVar26 = pppppplVar19[0x1c];
      pppppplVar22 = (long ******)(*ppppppplVar25)[3];
      ppppppplVar12 = (long *******)(*ppppppplVar25)[4];
      ppppplVar16 = ppppplVar26;
      if (ppppppplVar12 != (long *******)0x0) {
        ppppppplVar21 = ppppppplVar12 + 1;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar21,0x10);
          if (bVar11) {
            *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + 1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        ppppplVar16 = pppppplVar19[0x1c];
      }
      pppppplStack_330 = pppppplVar22;
      ppppppplStack_328 = ppppppplVar12;
      FUN_10a247594(pppppplVar22,ppppplVar16);
      uStack_210._0_1_ = 0;
      uStack_208 = 0;
      bStack_201 = 0;
      ppppppplStack_370 = (long *******)0x0;
      ppppppplStack_378._0_1_ = 3;
      pppppplVar19 = (long ******)&uStack_3d8;
      func_0x00010938229c();
      pcVar3 = "avatarId";
      if ((int)pppppplVar22 == 0) {
        pcVar3 = "friendAvatarId";
      }
      puVar14 = (undefined1 *)&uStack_210;
      ppppppplStack_370 = (long *******)pppppplVar19;
      func_0x00010945a80c(puVar14,pcVar3);
      uVar8 = *puVar14;
      *puVar14 = 3;
      ppppppplStack_378 = (long *******)CONCAT71(ppppppplStack_378._1_7_,uVar8);
      ppppppplVar21 = *(long ********)(puVar14 + 8);
      *(long ********)(puVar14 + 8) = ppppppplStack_370;
      ppppppplStack_370 = ppppppplVar21;
      func_0x000109380ffc(&ppppppplStack_370);
      FUN_10a0c32e4(&ppppppplStack_2d0,&uStack_210,0xffffffff,0x20,0,0);
      uVar4 = CONCAT17(bStack_2c1,uStack_2c8);
      ppppppplVar21 = ppppppplStack_2d0;
      if (-1 < (char)bStack_2b9) {
        uVar4 = (ulong)bStack_2b9;
        ppppppplVar21 = (long *******)&ppppppplStack_2d0;
      }
      FUN_10a3bf330(auStack_320,ppppppplVar21,uVar4);
      if ((char)bStack_2b9 < '\0') {
        __ZdlPv(ppppppplStack_2d0);
      }
      func_0x000109380ffc(&uStack_208,(undefined1)uStack_210);
      FUN_10a746e28(ppppplVar26,&UNK_10f674483,0x23,auStack_320);
      FUN_10a042634(auStack_320);
      if (ppppppplVar12 != (long *******)0x0) {
        ppppppplVar21 = ppppppplVar12 + 1;
        do {
          pppppplVar19 = *ppppppplVar21;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar21,0x10);
          if (bVar11) {
            *ppppppplVar21 = (long ******)((long)pppppplVar19 + -1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (pppppplVar19 == (long ******)0x0) {
          (*(code *)(*ppppppplVar12)[2])(ppppppplVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar12);
        }
      }
    }
  }
  if (((ulong)ppppppplVar15[0xb] & 1) == 0) {
    ppppplVar16 = (*ppppppplVar25)[0xd];
    ppppplVar26 = (*ppppppplVar25)[0xe];
    if (ppppplVar26 != (long *****)0x0) {
      ppppplVar13 = ppppplVar26 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
        if (bVar11) {
          *ppppplVar13 = (long ****)((long)*ppppplVar13 + 1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (ppppplVar16 != (long *****)0x0) {
      ppppplVar13 = (*ppppppplVar25)[3];
      ppppplVar6 = (*ppppppplVar25)[4];
      if (ppppplVar6 != (long *****)0x0) {
        ppppplVar5 = ppppplVar6 + 1;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppplVar5,0x10);
          if (bVar11) {
            *ppppplVar5 = (long ****)((long)*ppppplVar5 + 1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      if ((*(char *)(ppppplVar13 + 0xe) == '\x01') && (*(char *)(ppppplVar13 + 9) == '\x01')) {
        bVar7 = *(byte *)((long)ppppplVar13 + 0x47);
        pppplVar20 = ppppplVar13[7];
        if (-1 < (char)bVar7) {
          pppplVar20 = (long ****)(ulong)bVar7;
        }
        if (pppplVar20 != (long ****)0xe) goto LAB_10a7475d8;
        ppppplVar5 = (long *****)ppppplVar13[6];
        if (-1 < (char)bVar7) {
          ppppplVar5 = ppppplVar13 + 6;
        }
        uVar8 = *ppppplVar5 != (long ****)0x3833393633323231 ||
                *(long *)((long)ppppplVar5 + 6) != 0x35732d315f393833;
      }
      else {
LAB_10a7475d8:
        uVar8 = true;
      }
      if (ppppplVar6 != (long *****)0x0) {
        ppppplVar13 = ppppplVar6 + 1;
        do {
          pppplVar20 = *ppppplVar13;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
          if (bVar11) {
            *ppppplVar13 = (long ****)((long)pppplVar20 + -1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (pppplVar20 == (long ****)0x0) {
          (*(code *)(*ppppplVar6)[2])(ppppplVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar6);
        }
      }
      if ((bool)uVar8) {
        *(undefined2 *)((long)ppppplVar16 + 0x1c) = 0;
        *(undefined4 *)(ppppplVar16 + 3) = 0;
      }
    }
    if (ppppplVar26 != (long *****)0x0) {
      ppppplVar16 = ppppplVar26 + 1;
      do {
        pppplVar20 = *ppppplVar16;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
        if (bVar11) {
          *ppppplVar16 = (long ****)((long)pppplVar20 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (pppplVar20 == (long ****)0x0) {
        (*(code *)(*ppppplVar26)[2])(ppppplVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar26);
      }
    }
  }
  pppppplVar19 = *ppppppplVar25;
  if (*(int *)(pppppplVar19 + 10) == 0) {
    if ((char)bStack_3c1 < '\0') {
      func_0x000107c3192c(&ppppppplStack_2d0,CONCAT26(uStack_3d8._6_2_,(undefined6)uStack_3d8),
                          CONCAT17(bStack_3c9,CONCAT16(uStack_3ca,uStack_3d0)));
    }
    else {
      uStack_2c8 = CONCAT16(uStack_3ca,uStack_3d0);
      bStack_2c1 = bStack_3c9;
      ppppppplStack_2d0 = (long *******)CONCAT26(uStack_3d8._6_2_,(undefined6)uStack_3d8);
      uStack_2c0 = uStack_3c8;
      bStack_2b9 = bStack_3c1;
    }
    pppppplVar22 = ppppppplVar15[10];
    ppppppplVar21 = (long *******)0x38;
    pppppplStack_2b8 = pppppplVar22;
    __Znwm();
    bVar7 = bStack_2b9;
    ppppppplVar12 = ppppppplStack_2d0;
    ppppppplVar21[1] = (long ******)0x0;
    ppppppplVar21[2] = (long ******)0x0;
    *ppppppplVar21 = (long ******)&PTR_DAT_110c164b0;
    uStack_210._0_1_ = (undefined1)uStack_2c8;
    uStack_210._1_6_ = (undefined6)((uint7)uStack_2c8 >> 8);
    uStack_210._7_1_ = bStack_2c1;
    uStack_208 = uStack_2c0;
    uStack_2c8 = 0;
    bStack_2c1 = 0;
    uStack_2c0 = 0;
    bStack_2b9 = 0;
    ppppppplStack_2d0 = (long *******)0x0;
    ppppppplVar21[6] = (long ******)0x0;
    pppppplVar19 = (long ******)0x28;
    __Znwm();
    *pppppplVar19 = (long *****)&PTR_FUN_110c16500;
    pppppplVar19[1] = (long *****)ppppppplVar12;
    pppppplVar19[2] =
         (long *****)CONCAT17(uStack_210._7_1_,CONCAT61(uStack_210._1_6_,(undefined1)uStack_210));
    *(ulong *)((long)pppppplVar19 + 0x17) = CONCAT71(uStack_208,uStack_210._7_1_);
    *(byte *)((long)pppppplVar19 + 0x1f) = bVar7;
    pppppplVar19[4] = (long *****)pppppplVar22;
    ppppppplVar21[6] = pppppplVar19;
    ppppppplStack_378 = ppppppplVar21 + 3;
    ppppppplStack_370 = ppppppplVar21;
    FUN_10a745e5c(&uStack_210,&uStack_3d8,ppppppplVar25);
    ppppppplVar25 =
         (long *******)
         (CONCAT17(uStack_210._7_1_,CONCAT61(uStack_210._1_6_,(undefined1)uStack_210)) + 0x18);
    func_0x00010a754d94(ppppppplVar25,ppppppplVar21 + 3,ppppppplVar21);
    ppppppplVar15 = (long *******)ppppppplVar15[3];
    if ((ppppppplVar15 == (long *******)0x0) || (*(char *)(ppppppplVar15 + 8) != '\x02')) {
      if ((ppppppplVar15 != (long *******)0x0) && (*(char *)(ppppppplVar15 + 8) == '\x01')) {
        ppppppplVar25 = (long *******)&uStack_210;
        (*(code *)*ppppppplVar15)(ppppppplVar25,ppppppplVar15);
      }
    }
    else {
      FUN_10a754e08(ppppppplVar15,&uStack_210);
      ppppppplVar25 = ppppppplVar15;
    }
    ppppppplVar15 = (long *******)CONCAT17(bStack_201,uStack_208);
    if (ppppppplVar15 != (long *******)0x0) {
      ppppppplVar12 = ppppppplVar15 + 1;
      do {
        pppppplVar19 = *ppppppplVar12;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
        if (bVar11) {
          *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (pppppplVar19 == (long ******)0x0) {
        (*(code *)(*ppppppplVar15)[2])(ppppppplVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar25 = ppppppplVar15;
      }
    }
    ppppppplVar15 = ppppppplStack_370;
    if (ppppppplStack_370 != (long *******)0x0) {
      ppppppplVar12 = ppppppplStack_370 + 1;
      do {
        pppppplVar19 = *ppppppplVar12;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
        if (bVar11) {
          *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (pppppplVar19 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_370)[2])(ppppppplStack_370);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar25 = ppppppplVar15;
      }
    }
    ppppppplVar15 = ppppppplStack_2d0;
    if (-1 < (char)bStack_2b9) goto LAB_10a747f90;
  }
  else {
    ppppppplVar12 = (long *******)ppppppplVar15[6];
    ppppppplStack_378 = ppppppplVar12;
    if ((char)bStack_3c1 < '\0') {
      func_0x000107c3192c(&ppppppplStack_370,CONCAT26(uStack_3d8._6_2_,(undefined6)uStack_3d8),
                          CONCAT17(bStack_3c9,CONCAT16(uStack_3ca,uStack_3d0)));
      pppppplVar19 = *ppppppplVar25;
    }
    else {
      uStack_368 = CONCAT17(bStack_3c9,CONCAT16(uStack_3ca,uStack_3d0));
      ppppppplStack_370 = (long *******)CONCAT26(uStack_3d8._6_2_,(undefined6)uStack_3d8);
      lStack_360 = CONCAT17(bStack_3c1,uStack_3c8);
    }
    ppppppplStack_350 = (long *******)ppppppplVar15[2];
    pppppplStack_358 = pppppplVar19;
    if (ppppppplStack_350 != (long *******)0x0) {
      ppppppplVar21 = ppppppplStack_350 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar21,0x10);
        if (bVar11) {
          *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + 1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppppppplStack_340 = (long *******)ppppppplVar15[4];
    pppppplStack_348 = ppppppplVar15[3];
    if (ppppppplVar15[4] != (long ******)0x0) {
      pppppplVar19 = ppppppplVar15[4] + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(pppppplVar19,0x10);
        if (bVar11) {
          *pppppplVar19 = (long *****)((long)*pppppplVar19 + 1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    cStack_338 = *(char *)(ppppppplVar15 + 9);
    if ((*(char *)(ppppppplVar15 + 9) == '\x01') &&
       (pppppplVar19 = *ppppppplVar25, *(int *)(pppppplVar19 + 10) == 2)) {
      ppppppplStack_2d0 = (long *******)pppppplVar19[0xd];
      ppppplVar16 = pppppplVar19[0xe];
      uStack_2c8 = SUB87(ppppplVar16,0);
      bStack_2c1 = (byte)((ulong)ppppplVar16 >> 0x38);
      if (ppppplVar16 != (long *****)0x0) {
        ppppplVar26 = ppppplVar16 + 1;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
          if (bVar11) {
            *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      if ((((ppppppplStack_2d0 == (long *******)0x0) ||
           ((*(ushort *)((long)ppppppplStack_2d0 + 0x1a) >> 8 & 1) == 0)) ||
          ((*(ushort *)((long)ppppppplStack_2d0 + 0x1c) >> 8 & 1) == 0)) ||
         ((*(ushort *)(ppppppplStack_2d0 + 3) >> 8 & 1) == 0)) {
        if (ppppplVar16 != (long *****)0x0) {
          ppppplVar26 = ppppplVar16 + 1;
          do {
            pppplVar20 = *ppppplVar26;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
            if (bVar11) {
              *ppppplVar26 = (long ****)((long)pppplVar20 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppplVar20 == (long ****)0x0) {
            (*(code *)(*ppppplVar16)[2])(ppppplVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar16);
          }
        }
        goto LAB_10a747774;
      }
      FUN_10a755710(&ppppppplStack_378);
      ppppppplVar25 = (long *******)&ppppppplStack_2d0;
      func_0x00010a75f544();
    }
    else {
LAB_10a747774:
      ppppppplVar21 = ppppppplVar12 + 0x20;
      FUN_109ce5028(ppppppplVar21,&uStack_3d8);
      if (ppppppplVar21 == (long *******)0x0) {
        if ((char)bStack_3c1 < '\0') {
          func_0x000107c3192c(&uStack_210,CONCAT26(uStack_3d8._6_2_,(undefined6)uStack_3d8),
                              CONCAT17(bStack_3c9,CONCAT16(uStack_3ca,uStack_3d0)));
        }
        else {
          uStack_208 = CONCAT16(uStack_3ca,uStack_3d0);
          bStack_201 = bStack_3c9;
          uStack_210._0_1_ = (undefined1)(undefined6)uStack_3d8;
          uStack_210._1_6_ = (undefined6)(CONCAT26(uStack_3d8._6_2_,(undefined6)uStack_3d8) >> 8);
          uStack_210._7_1_ = (byte)((ushort)uStack_3d8._6_2_ >> 8);
          pppppplStack_200 = (long ******)CONCAT17(bStack_3c1,uStack_3c8);
        }
        ppppppplStack_1f8 = ppppppplStack_378;
        if (lStack_360 < 0) {
          func_0x000107c3192c(&ppppppplStack_1f0,ppppppplStack_370,uStack_368);
        }
        else {
          uStack_1e8 = uStack_368;
          ppppppplStack_1f0 = ppppppplStack_370;
          lStack_1e0 = lStack_360;
        }
        ppppppplStack_1d0 = ppppppplStack_350;
        pppppplStack_1d8 = pppppplStack_358;
        if (ppppppplStack_350 != (long *******)0x0) {
          ppppppplVar21 = ppppppplStack_350 + 1;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar21,0x10);
            if (bVar11) {
              *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        ppppppplStack_1c0 = ppppppplStack_340;
        pppppplStack_1c8 = pppppplStack_348;
        if (ppppppplStack_340 != (long *******)0x0) {
          ppppppplVar21 = ppppppplStack_340 + 1;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar21,0x10);
            if (bVar11) {
              *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        cStack_1b8 = cStack_338;
        pppppplStack_268 = ppppppplVar15[8];
        uStack_2c8 = CONCAT61(uStack_210._1_6_,(undefined1)uStack_210);
        uStack_2c0 = uStack_208;
        bStack_2b9 = bStack_201;
        bStack_2c1 = uStack_210._7_1_;
        pppppplStack_2b8 = pppppplStack_200;
        ppppppplStack_2b0 = ppppppplStack_1f8;
        uStack_2a0 = uStack_1e8;
        ppppppplStack_2a8 = ppppppplStack_1f0;
        lStack_298 = lStack_1e0;
        ppppppplStack_288 = ppppppplStack_350;
        pppppplStack_290 = pppppplStack_358;
        if (ppppppplStack_350 != (long *******)0x0) {
          ppppppplVar15 = ppppppplStack_350 + 1;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
            if (bVar11) {
              *ppppppplVar15 = (long ******)((long)*ppppppplVar15 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        ppppppplStack_278 = ppppppplStack_340;
        pppppplStack_280 = pppppplStack_348;
        if (ppppppplStack_340 != (long *******)0x0) {
          ppppppplVar15 = ppppppplStack_340 + 1;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
            if (bVar11) {
              *ppppppplVar15 = (long ******)((long)*ppppppplVar15 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        cStack_270 = cStack_338;
        ppppppplStack_258 = ppppppplStack_378;
        ppppppplStack_2d0 = ppppppplVar12;
        pppppplStack_1b0 = pppppplStack_268;
        if (lStack_360 < 0) {
          func_0x000107c3192c(&ppppppplStack_250,ppppppplStack_370,uStack_368);
        }
        else {
          uStack_248 = uStack_368;
          ppppppplStack_250 = ppppppplStack_370;
          lStack_240 = lStack_360;
        }
        ppppppplStack_230 = ppppppplStack_350;
        pppppplStack_238 = pppppplStack_358;
        if (ppppppplStack_350 != (long *******)0x0) {
          ppppppplVar15 = ppppppplStack_350 + 1;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
            if (bVar11) {
              *ppppppplVar15 = (long ******)((long)*ppppppplVar15 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        ppppppplStack_220 = ppppppplStack_340;
        pppppplStack_228 = pppppplStack_348;
        if (ppppppplStack_340 != (long *******)0x0) {
          ppppppplVar15 = ppppppplStack_340 + 1;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
            if (bVar11) {
              *ppppppplVar15 = (long ******)((long)*ppppppplVar15 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        cStack_218 = cStack_338;
        ppppppplVar15 = (long *******)0xa0;
        __Znwm();
        ppppppplVar15[1] = (long ******)0x0;
        ppppppplVar15[2] = (long ******)0x0;
        *ppppppplVar15 = (long ******)&PTR_FUN_110c16b68;
        ppppppplVar15[0xb] = (long ******)0x0;
        ppppppplVar15[10] = (long ******)0x0;
        ppppppplVar15[0xd] = (long ******)0x0;
        ppppppplVar15[0xc] = (long ******)0x0;
        ppppppplStack_388 = ppppppplVar15 + 3;
        *ppppppplStack_388 = (long ******)&PTR_FUN_110c15d40;
        ppppppplVar15[5] = (long ******)0x0;
        ppppppplVar15[4] = (long ******)0x0;
        ppppppplVar15[7] = (long ******)0x0;
        ppppppplVar15[6] = (long ******)0x0;
        ppppppplVar12 = ppppppplVar15 + 8;
        ppppppplVar15[9] = (long ******)0x0;
        *ppppppplVar12 = (long ******)0x0;
        *(undefined4 *)(ppppppplVar15 + 0xc) = 0x3f800000;
        ppppppplVar15[0xf] = (long ******)0x0;
        ppppppplVar15[0xe] = (long ******)0x0;
        ppppppplVar15[0x11] = (long ******)0x0;
        ppppppplVar15[0x10] = (long ******)0x0;
        ppppppplVar15[0x13] = (long ******)0x0;
        ppppppplVar15[0x12] = (long ******)0x0;
        pppppplVar19 = *ppppppplVar25;
        ppppppplStack_380 = ppppppplVar15;
        if (ppppppplVar12 != (long *******)(pppppplVar19 + 5)) {
          *(undefined4 *)(ppppppplVar15 + 0xc) = *(undefined4 *)(pppppplVar19 + 9);
          FUN_10a75eb64(ppppppplVar12,pppppplVar19[7],0);
          pppppplVar19 = *ppppppplVar25;
        }
        ppppppplStack_328 = (long *******)pppppplVar19[4];
        pppppplStack_330 = (long ******)pppppplVar19[3];
        if (pppppplVar19[4] != (long *****)0x0) {
          ppppplVar16 = pppppplVar19[4] + 1;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
            if (bVar11) {
              *ppppplVar16 = (long ****)((long)*ppppplVar16 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        FUN_10a73fecc(ppppppplVar15 + 6,&pppppplStack_330);
        ppppppplVar15 = ppppppplStack_328;
        if (ppppppplStack_328 != (long *******)0x0) {
          ppppppplVar25 = ppppppplStack_328 + 1;
          do {
            pppppplVar19 = *ppppppplVar25;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
            if (bVar11) {
              *ppppppplVar25 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_328)[2])(ppppppplStack_328);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar15);
          }
        }
        ppppppplVar15 = (long *******)0x60;
        __Znwm();
        ppppppplVar15[1] = (long ******)0x0;
        ppppppplVar15[2] = (long ******)0x0;
        *ppppppplVar15 = (long ******)&PTR_FUN_110c16590;
        ppppppplVar12 = ppppppplVar15 + 3;
        *ppppppplVar12 = (long ******)FUN_10a756130;
        *(undefined1 *)(ppppppplVar15 + 0xb) = 3;
        ppppppplVar15[4] = (long ******)&PTR_FUN_110c16610;
        pppppplVar19 = (long ******)0xc0;
        __Znwm();
        FUN_10a756824();
        ppppppplVar15[5] = pppppplVar19;
        *(undefined1 *)(ppppppplVar15 + 0xb) = 1;
        uStack_3a8 = 0;
        ppppppplStack_3a0 = (long *******)0x0;
        ppppppplVar25 = &pppppplStack_330;
        ppppppplStack_398 = ppppppplVar12;
        ppppppplStack_390 = ppppppplVar15;
        FUN_10a745e5c(ppppppplVar25,&uStack_3d8,&ppppppplStack_388);
        if (*(char *)(ppppppplVar15 + 0xb) == '\x01') {
          ppppppplVar25 = &pppppplStack_330;
          (*(code *)*ppppppplVar12)(ppppppplVar25,ppppppplVar12);
        }
        else if (*(char *)(ppppppplVar15 + 0xb) == '\x02') {
          FUN_10a754e08(ppppppplVar12,&pppppplStack_330);
          ppppppplVar25 = ppppppplVar12;
        }
        ppppppplVar15 = ppppppplStack_328;
        if (ppppppplStack_328 != (long *******)0x0) {
          ppppppplVar12 = ppppppplStack_328 + 1;
          do {
            pppppplVar19 = *ppppppplVar12;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
            if (bVar11) {
              *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_328)[2])(ppppppplStack_328);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar25 = ppppppplVar15;
          }
        }
        ppppppplVar15 = ppppppplStack_3a0;
        if (ppppppplStack_3a0 != (long *******)0x0) {
          ppppppplVar12 = ppppppplStack_3a0 + 1;
          do {
            pppppplVar19 = *ppppppplVar12;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
            if (bVar11) {
              *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_3a0)[2])(ppppppplStack_3a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar25 = ppppppplVar15;
          }
        }
        ppppppplVar15 = ppppppplStack_390;
        if (ppppppplStack_390 != (long *******)0x0) {
          ppppppplVar12 = ppppppplStack_390 + 1;
          do {
            pppppplVar19 = *ppppppplVar12;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
            if (bVar11) {
              *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_390)[2])(ppppppplStack_390);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar25 = ppppppplVar15;
          }
        }
        ppppppplVar15 = ppppppplStack_380;
        if (ppppppplStack_380 != (long *******)0x0) {
          ppppppplVar12 = ppppppplStack_380 + 1;
          do {
            pppppplVar19 = *ppppppplVar12;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
            if (bVar11) {
              *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_380)[2])(ppppppplStack_380);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar25 = ppppppplVar15;
          }
        }
        ppppppplVar15 = ppppppplStack_220;
        if (ppppppplStack_220 != (long *******)0x0) {
          ppppppplVar12 = ppppppplStack_220 + 1;
          do {
            pppppplVar19 = *ppppppplVar12;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
            if (bVar11) {
              *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_220)[2])(ppppppplStack_220);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar25 = ppppppplVar15;
          }
        }
        ppppppplVar15 = ppppppplStack_230;
        if (ppppppplStack_230 != (long *******)0x0) {
          ppppppplVar12 = ppppppplStack_230 + 1;
          do {
            pppppplVar19 = *ppppppplVar12;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
            if (bVar11) {
              *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_230)[2])(ppppppplStack_230);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar25 = ppppppplVar15;
          }
        }
        if (lStack_240 < 0) {
          ppppppplVar25 = ppppppplStack_250;
          __ZdlPv();
        }
        ppppppplVar15 = ppppppplStack_278;
        if (ppppppplStack_278 != (long *******)0x0) {
          ppppppplVar12 = ppppppplStack_278 + 1;
          do {
            pppppplVar19 = *ppppppplVar12;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
            if (bVar11) {
              *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_278)[2])(ppppppplStack_278);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar25 = ppppppplVar15;
          }
        }
        ppppppplVar15 = ppppppplStack_288;
        if (ppppppplStack_288 != (long *******)0x0) {
          ppppppplVar12 = ppppppplStack_288 + 1;
          do {
            pppppplVar19 = *ppppppplVar12;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
            if (bVar11) {
              *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_288)[2])(ppppppplStack_288);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar25 = ppppppplVar15;
          }
        }
        if (lStack_298 < 0) {
          ppppppplVar25 = ppppppplStack_2a8;
          __ZdlPv();
        }
        if ((long)pppppplStack_2b8 < 0) {
          ppppppplVar25 = (long *******)CONCAT17(bStack_2c1,uStack_2c8);
          __ZdlPv();
        }
        ppppppplVar15 = ppppppplStack_1c0;
        if (ppppppplStack_1c0 != (long *******)0x0) {
          ppppppplVar12 = ppppppplStack_1c0 + 1;
          do {
            pppppplVar19 = *ppppppplVar12;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
            if (bVar11) {
              *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_1c0)[2])(ppppppplStack_1c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar25 = ppppppplVar15;
          }
        }
        ppppppplVar15 = ppppppplStack_1d0;
        if (ppppppplStack_1d0 != (long *******)0x0) {
          ppppppplVar12 = ppppppplStack_1d0 + 1;
          do {
            pppppplVar19 = *ppppppplVar12;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
            if (bVar11) {
              *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_1d0)[2])(ppppppplStack_1d0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar25 = ppppppplVar15;
          }
        }
      }
      else {
        ppppppplVar25 = (long *******)&ppppppplStack_378;
        FUN_10a755710();
      }
    }
    ppppppplVar15 = ppppppplStack_340;
    if (ppppppplStack_340 != (long *******)0x0) {
      ppppppplVar12 = ppppppplStack_340 + 1;
      do {
        pppppplVar19 = *ppppppplVar12;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
        if (bVar11) {
          *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (pppppplVar19 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_340)[2])(ppppppplStack_340);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar25 = ppppppplVar15;
      }
    }
    ppppppplVar15 = ppppppplStack_350;
    if (ppppppplStack_350 != (long *******)0x0) {
      ppppppplVar12 = ppppppplStack_350 + 1;
      do {
        pppppplVar19 = *ppppppplVar12;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
        if (bVar11) {
          *ppppppplVar12 = (long ******)((long)pppppplVar19 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (pppppplVar19 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_350)[2])(ppppppplStack_350);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar25 = ppppppplVar15;
      }
    }
    ppppppplVar15 = ppppppplStack_370;
    if (-1 < lStack_360) goto LAB_10a747f90;
  }
  __ZdlPv();
  ppppppplVar25 = ppppppplVar15;
LAB_10a747f90:
  if ((char)bStack_3c1 < '\0') {
    ppppppplVar25 = (long *******)CONCAT26(uStack_3d8._6_2_,(undefined6)uStack_3d8);
    __ZdlPv();
  }
  if ((long)ppplStack_3b0 < 0) {
    ppppppplVar25 = ppppppplStack_3c0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    func_0x00010a75f544(&ppppppplStack_2d0);
    func_0x00010a755f90(&ppppppplStack_378);
    if ((char)bStack_3c1 < '\0') {
      __ZdlPv(CONCAT26(uStack_3d8._6_2_,(undefined6)uStack_3d8));
    }
    if ((long)ppplStack_3b0 < 0) {
      __ZdlPv(ppppppplStack_3c0);
    }
    __Unwind_Resume();
    FUN_10a7569b8(ppppppplVar25 + 7);
    FUN_10a757ff0(ppppppplVar25 + 5);
    FUN_10a757ff0(ppppppplVar25 + 2);
    pppppplVar19 = ppppppplVar25[1];
    if (pppppplVar19 != (long ******)0x0) {
      pppppplVar22 = pppppplVar19 + 1;
      do {
        ppppplVar16 = *pppppplVar22;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
        if (bVar11) {
          *pppppplVar22 = (long *****)((long)ppppplVar16 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (ppppplVar16 == (long *****)0x0) {
        (*(code *)(*pppppplVar19)[2])(pppppplVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar19);
      }
    }
    return ppppppplVar25;
  }
  return ppppppplVar25;
}



/* Entry: 10a7470e4; end: 10a748223;  */

/* WARNING: Removing unreachable block (ram,0x00010a747ef8) */
/* WARNING: Removing unreachable block (ram,0x00010a7479d8) */
/* WARNING: Removing unreachable block (ram,0x00010a747a0c) */
/* WARNING: Removing unreachable block (ram,0x00010a747f08) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10a7470e4(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  long *plVar11;
  long ******pppppplVar12;
  undefined1 *puVar13;
  long *******ppppppplVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *******ppppppplVar18;
  ulong uVar19;
  long ******pppppplVar20;
  long *****ppppplVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  long lVar25;
  long *******ppppppplVar26;
  undefined8 uStack_298;
  undefined6 uStack_290;
  undefined1 uStack_28a;
  byte bStack_289;
  undefined7 uStack_288;
  byte bStack_281;
  long *******ppppppplStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  long *******ppppppplStack_210;
  long lStack_208;
  long *******ppppppplStack_200;
  char cStack_1f8;
  long ******pppppplStack_1f0;
  long *******ppppppplStack_1e8;
  undefined1 auStack_1e0 [80];
  long *******ppppppplStack_190;
  undefined7 uStack_188;
  byte bStack_181;
  undefined7 uStack_180;
  byte bStack_179;
  long *****ppppplStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long *******ppppppplStack_148;
  long lStack_140;
  long *******ppppppplStack_138;
  char cStack_130;
  long lStack_128;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long *******ppppppplStack_f0;
  long lStack_e8;
  long *******ppppppplStack_e0;
  char cStack_d8;
  undefined8 uStack_d0;
  undefined7 uStack_c8;
  byte bStack_c1;
  long *****ppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long *******ppppppplStack_90;
  long lStack_88;
  long *******ppppppplStack_80;
  char cStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *param_1;
  lVar16 = *(long *)(*(long *)(lVar25 + 0xe0) + 0x100);
  if (*(char *)(lVar16 + 0x21f) < '\0') {
    func_0x000107c3192c(&ppppppplStack_280,*(undefined8 *)(lVar16 + 0x208),
                        *(undefined8 *)(lVar16 + 0x210));
  }
  else {
    uStack_278 = *(undefined8 *)(lVar16 + 0x210);
    ppppppplStack_280 = *(long ********)(lVar16 + 0x208);
    lStack_270 = *(long *)(lVar16 + 0x218);
  }
  plVar23 = param_1 + 1;
  lVar16 = *(long *)(*plVar23 + 0x68);
  plVar5 = *(long **)(*plVar23 + 0x70);
  if (plVar5 != (long *)0x0) {
    plVar11 = plVar5 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *plVar11 = *plVar11 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (lVar16 == 0) {
LAB_10a7471e0:
    bVar10 = true;
  }
  else {
    lVar17 = 0;
    do {
      if (*(int *)(&UNK_10e4d7f74 + lVar17) == *(int *)(lVar16 + 0x20)) {
        if (lVar17 != 0x10) goto LAB_10a7471e0;
        break;
      }
      lVar17 = lVar17 + 4;
    } while (lVar17 != 0x10);
    bVar10 = false;
    bStack_281 = 0xe;
    uStack_298._0_6_ = 0x393633323231;
    uStack_298._6_2_ = 0x3833;
    uStack_290 = 0x35732d315f39;
    uStack_28a = 0;
  }
  if (plVar5 != (long *)0x0) {
    plVar11 = plVar5 + 1;
    do {
      lVar16 = *plVar11;
      cVar9 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  lVar16 = *plVar23;
  if (bVar10) {
    ppppppplStack_190 = *(long ********)(lVar16 + 0x18);
    plVar5 = *(long **)(lVar16 + 0x20);
    uStack_188 = SUB87(plVar5,0);
    bStack_181 = (byte)((ulong)plVar5 >> 0x38);
    if (plVar5 != (long *)0x0) {
      plVar11 = plVar5 + 1;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar10) {
          *plVar11 = *plVar11 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    FUN_10a745cf8(&uStack_298,ppppppplStack_190,lVar25 + 0xe8,&ppppppplStack_280);
    if (plVar5 != (long *)0x0) {
      plVar11 = plVar5 + 1;
      do {
        lVar16 = *plVar11;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar10) {
          *plVar11 = lVar16 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    lVar16 = *plVar23;
  }
  lVar17 = *(long *)(lVar16 + 0x18);
  plVar5 = *(long **)(lVar16 + 0x20);
  if (plVar5 != (long *)0x0) {
    plVar11 = plVar5 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *plVar11 = *plVar11 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  uVar19 = (ulong)(char)bStack_281;
  if ((long)uVar19 < 0) {
    uVar22 = CONCAT17(bStack_289,CONCAT16(uStack_28a,uStack_290));
    if (uVar22 != 0) {
      plVar11 = (long *)CONCAT26(uStack_298._6_2_,(undefined6)uStack_298);
      goto LAB_10a7472c8;
    }
LAB_10a747374:
    bVar10 = false;
    if (plVar5 == (long *)0x0) goto LAB_10a747394;
LAB_10a74737c:
    plVar11 = plVar5 + 1;
    do {
      lVar16 = *plVar11;
      cVar9 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar16 != 0) goto LAB_10a747394;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    if (bVar10) goto LAB_10a747398;
  }
  else {
    if (bStack_281 == 0) goto LAB_10a747374;
    plVar11 = &uStack_298;
    uVar22 = uVar19;
LAB_10a7472c8:
    if ((((uVar22 == 0xe) &&
         (*plVar11 == 0x3833393633323231 && *(long *)((long)plVar11 + 6) == 0x35732d315f393833)) ||
        (*(char *)(lVar17 + 0x70) != '\x01')) || (*(char *)(lVar17 + 0x48) != '\x01'))
    goto LAB_10a747374;
    bVar6 = *(byte *)(lVar17 + 0x47);
    uVar22 = *(ulong *)(lVar17 + 0x38);
    if (-1 < (char)bVar6) {
      uVar22 = (ulong)bVar6;
    }
    uVar1 = CONCAT17(bStack_289,CONCAT16(uStack_28a,uStack_290));
    if (-1 < (char)bStack_281) {
      uVar1 = uVar19;
    }
    if (uVar22 != uVar1) goto LAB_10a747374;
    plVar11 = (long *)*(long *)(lVar17 + 0x30);
    if (-1 < (char)bVar6) {
      plVar11 = (long *)(lVar17 + 0x30);
    }
    puVar2 = (undefined8 *)CONCAT26(uStack_298._6_2_,(undefined6)uStack_298);
    if (-1 < (char)bStack_281) {
      puVar2 = &uStack_298;
    }
    _memcmp(plVar11,puVar2);
    bVar10 = (int)plVar11 == 0;
    if (plVar5 != (long *)0x0) goto LAB_10a74737c;
LAB_10a747394:
    if (bVar10) {
LAB_10a747398:
      uVar24 = *(undefined8 *)(lVar25 + 0xe0);
      pppppplVar20 = *(long *******)(*plVar23 + 0x18);
      ppppppplVar26 = *(long ********)(*plVar23 + 0x20);
      uVar15 = uVar24;
      if (ppppppplVar26 != (long *******)0x0) {
        ppppppplVar18 = ppppppplVar26 + 1;
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
          if (bVar10) {
            *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        uVar15 = *(undefined8 *)(lVar25 + 0xe0);
      }
      pppppplStack_1f0 = pppppplVar20;
      ppppppplStack_1e8 = ppppppplVar26;
      FUN_10a247594(pppppplVar20,uVar15);
      uStack_d0._0_1_ = 0;
      uStack_c8 = 0;
      bStack_c1 = 0;
      ppppppplStack_230 = (long *******)0x0;
      ppppppplStack_238._0_1_ = 3;
      pppppplVar12 = (long ******)&uStack_298;
      func_0x00010938229c();
      pcVar3 = "avatarId";
      if ((int)pppppplVar20 == 0) {
        pcVar3 = "friendAvatarId";
      }
      puVar13 = (undefined1 *)&uStack_d0;
      ppppppplStack_230 = (long *******)pppppplVar12;
      func_0x00010945a80c(puVar13,pcVar3);
      uVar7 = *puVar13;
      *puVar13 = 3;
      ppppppplStack_238 = (long *******)CONCAT71(ppppppplStack_238._1_7_,uVar7);
      ppppppplVar18 = *(long ********)(puVar13 + 8);
      *(long ********)(puVar13 + 8) = ppppppplStack_230;
      ppppppplStack_230 = ppppppplVar18;
      func_0x000109380ffc(&ppppppplStack_230);
      FUN_10a0c32e4(&ppppppplStack_190,&uStack_d0,0xffffffff,0x20,0,0);
      uVar19 = CONCAT17(bStack_181,uStack_188);
      ppppppplVar18 = ppppppplStack_190;
      if (-1 < (char)bStack_179) {
        uVar19 = (ulong)bStack_179;
        ppppppplVar18 = (long *******)&ppppppplStack_190;
      }
      FUN_10a3bf330(auStack_1e0,ppppppplVar18,uVar19);
      if ((char)bStack_179 < '\0') {
        __ZdlPv(ppppppplStack_190);
      }
      func_0x000109380ffc(&uStack_c8,(undefined1)uStack_d0);
      FUN_10a746e28(uVar24,&UNK_10f674483,0x23,auStack_1e0);
      FUN_10a042634(auStack_1e0);
      if (ppppppplVar26 != (long *******)0x0) {
        ppppppplVar18 = ppppppplVar26 + 1;
        do {
          pppppplVar20 = *ppppppplVar18;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
          if (bVar10) {
            *ppppppplVar18 = (long ******)((long)pppppplVar20 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppppplVar20 == (long ******)0x0) {
          (*(code *)(*ppppppplVar26)[2])(ppppppplVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar26);
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    lVar16 = *(long *)(*plVar23 + 0x68);
    plVar5 = *(long **)(*plVar23 + 0x70);
    if (plVar5 != (long *)0x0) {
      plVar11 = plVar5 + 1;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar10) {
          *plVar11 = *plVar11 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    if (lVar16 != 0) {
      lVar25 = *(long *)(*plVar23 + 0x18);
      plVar11 = *(long **)(*plVar23 + 0x20);
      if (plVar11 != (long *)0x0) {
        plVar4 = plVar11 + 1;
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar10) {
            *plVar4 = *plVar4 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      if ((*(char *)(lVar25 + 0x70) == '\x01') && (*(char *)(lVar25 + 0x48) == '\x01')) {
        bVar6 = *(byte *)(lVar25 + 0x47);
        uVar19 = *(ulong *)(lVar25 + 0x38);
        if (-1 < (char)bVar6) {
          uVar19 = (ulong)bVar6;
        }
        if (uVar19 != 0xe) goto LAB_10a7475d8;
        plVar4 = (long *)*(long *)(lVar25 + 0x30);
        if (-1 < (char)bVar6) {
          plVar4 = (long *)(lVar25 + 0x30);
        }
        uVar7 = *plVar4 != 0x3833393633323231 || *(long *)((long)plVar4 + 6) != 0x35732d315f393833;
      }
      else {
LAB_10a7475d8:
        uVar7 = true;
      }
      if (plVar11 != (long *)0x0) {
        plVar4 = plVar11 + 1;
        do {
          lVar25 = *plVar4;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar10) {
            *plVar4 = lVar25 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if ((bool)uVar7) {
        *(undefined2 *)(lVar16 + 0x1c) = 0;
        *(undefined4 *)(lVar16 + 0x18) = 0;
      }
    }
    if (plVar5 != (long *)0x0) {
      plVar11 = plVar5 + 1;
      do {
        lVar16 = *plVar11;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar10) {
          *plVar11 = lVar16 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  lVar16 = *plVar23;
  if (*(int *)(lVar16 + 0x50) == 0) {
    if ((char)bStack_281 < '\0') {
      func_0x000107c3192c(&ppppppplStack_190,CONCAT26(uStack_298._6_2_,(undefined6)uStack_298),
                          CONCAT17(bStack_289,CONCAT16(uStack_28a,uStack_290)));
    }
    else {
      uStack_188 = CONCAT16(uStack_28a,uStack_290);
      ppppppplStack_190 = (long *******)CONCAT26(uStack_298._6_2_,(undefined6)uStack_298);
      bStack_181 = bStack_289;
      uStack_180 = uStack_288;
      bStack_179 = bStack_281;
    }
    ppppplVar21 = (long *****)param_1[10];
    ppppppplVar18 = (long *******)0x38;
    ppppplStack_178 = ppppplVar21;
    __Znwm();
    bVar6 = bStack_179;
    ppppppplVar26 = ppppppplStack_190;
    ppppppplVar18[1] = (long ******)0x0;
    ppppppplVar18[2] = (long ******)0x0;
    *ppppppplVar18 = (long ******)&PTR_DAT_110c164b0;
    uStack_d0._0_1_ = (undefined1)uStack_188;
    uStack_d0._1_6_ = (undefined6)((uint7)uStack_188 >> 8);
    uStack_d0._7_1_ = bStack_181;
    uStack_c8 = uStack_180;
    uStack_188 = 0;
    bStack_181 = 0;
    uStack_180 = 0;
    bStack_179 = 0;
    ppppppplStack_190 = (long *******)0x0;
    ppppppplVar18[6] = (long ******)0x0;
    pppppplVar20 = (long ******)0x28;
    __Znwm();
    *pppppplVar20 = (long *****)&PTR_FUN_110c16500;
    pppppplVar20[1] = (long *****)ppppppplVar26;
    pppppplVar20[2] =
         (long *****)CONCAT17(uStack_d0._7_1_,CONCAT61(uStack_d0._1_6_,(undefined1)uStack_d0));
    *(ulong *)((long)pppppplVar20 + 0x17) = CONCAT71(uStack_c8,uStack_d0._7_1_);
    *(byte *)((long)pppppplVar20 + 0x1f) = bVar6;
    pppppplVar20[4] = ppppplVar21;
    ppppppplVar18[6] = pppppplVar20;
    ppppppplStack_238 = ppppppplVar18 + 3;
    ppppppplStack_230 = ppppppplVar18;
    FUN_10a745e5c(&uStack_d0,&uStack_298,plVar23);
    ppppppplVar26 =
         (long *******)
         (CONCAT17(uStack_d0._7_1_,CONCAT61(uStack_d0._1_6_,(undefined1)uStack_d0)) + 0x18);
    func_0x00010a754d94(ppppppplVar26,ppppppplVar18 + 3,ppppppplVar18);
    ppppppplVar18 = (long *******)param_1[3];
    if ((ppppppplVar18 == (long *******)0x0) || (*(char *)(ppppppplVar18 + 8) != '\x02')) {
      if ((ppppppplVar18 != (long *******)0x0) && (*(char *)(ppppppplVar18 + 8) == '\x01')) {
        ppppppplVar26 = (long *******)&uStack_d0;
        (*(code *)*ppppppplVar18)(ppppppplVar26,ppppppplVar18);
      }
    }
    else {
      FUN_10a754e08(ppppppplVar18,&uStack_d0);
      ppppppplVar26 = ppppppplVar18;
    }
    ppppppplVar18 = (long *******)CONCAT17(bStack_c1,uStack_c8);
    if (ppppppplVar18 != (long *******)0x0) {
      ppppppplVar14 = ppppppplVar18 + 1;
      do {
        pppppplVar20 = *ppppppplVar14;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
        if (bVar10) {
          *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppppplVar20 == (long ******)0x0) {
        (*(code *)(*ppppppplVar18)[2])(ppppppplVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar26 = ppppppplVar18;
      }
    }
    ppppppplVar18 = ppppppplStack_230;
    if (ppppppplStack_230 != (long *******)0x0) {
      ppppppplVar14 = ppppppplStack_230 + 1;
      do {
        pppppplVar20 = *ppppppplVar14;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
        if (bVar10) {
          *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppppplVar20 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_230)[2])(ppppppplStack_230);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar26 = ppppppplVar18;
      }
    }
    ppppppplVar18 = ppppppplStack_190;
    if (-1 < (char)bStack_179) goto LAB_10a747f90;
  }
  else {
    ppppppplVar26 = (long *******)param_1[6];
    ppppppplStack_238 = ppppppplVar26;
    if ((char)bStack_281 < '\0') {
      func_0x000107c3192c(&ppppppplStack_230,CONCAT26(uStack_298._6_2_,(undefined6)uStack_298),
                          CONCAT17(bStack_289,CONCAT16(uStack_28a,uStack_290)));
      lVar16 = *plVar23;
    }
    else {
      uStack_228 = CONCAT17(bStack_289,CONCAT16(uStack_28a,uStack_290));
      ppppppplStack_230 = (long *******)CONCAT26(uStack_298._6_2_,(undefined6)uStack_298);
      lStack_220 = CONCAT17(bStack_281,uStack_288);
    }
    ppppppplStack_210 = (long *******)param_1[2];
    if (ppppppplStack_210 != (long *******)0x0) {
      ppppppplVar18 = ppppppplStack_210 + 1;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
        if (bVar10) {
          *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + 1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    ppppppplStack_200 = (long *******)param_1[4];
    lStack_208 = param_1[3];
    if (param_1[4] != 0) {
      plVar5 = (long *)(param_1[4] + 8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar10) {
          *plVar5 = *plVar5 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    cStack_1f8 = (char)param_1[9];
    lStack_218 = lVar16;
    if ((cStack_1f8 == '\x01') && (lVar16 = *plVar23, *(int *)(lVar16 + 0x50) == 2)) {
      ppppppplStack_190 = *(long ********)(lVar16 + 0x68);
      plVar5 = *(long **)(lVar16 + 0x70);
      uStack_188 = SUB87(plVar5,0);
      bStack_181 = (byte)((ulong)plVar5 >> 0x38);
      if (plVar5 != (long *)0x0) {
        plVar11 = plVar5 + 1;
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar10) {
            *plVar11 = *plVar11 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      if ((((ppppppplStack_190 == (long *******)0x0) ||
           ((*(ushort *)((long)ppppppplStack_190 + 0x1a) >> 8 & 1) == 0)) ||
          ((*(ushort *)((long)ppppppplStack_190 + 0x1c) >> 8 & 1) == 0)) ||
         ((*(ushort *)(ppppppplStack_190 + 3) >> 8 & 1) == 0)) {
        if (plVar5 != (long *)0x0) {
          plVar11 = plVar5 + 1;
          do {
            lVar16 = *plVar11;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar10) {
              *plVar11 = lVar16 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        goto LAB_10a747774;
      }
      FUN_10a755710(&ppppppplStack_238);
      ppppppplVar26 = (long *******)&ppppppplStack_190;
      func_0x00010a75f544();
    }
    else {
LAB_10a747774:
      ppppppplVar18 = ppppppplVar26 + 0x20;
      FUN_109ce5028(ppppppplVar18,&uStack_298);
      if (ppppppplVar18 == (long *******)0x0) {
        if ((char)bStack_281 < '\0') {
          func_0x000107c3192c(&uStack_d0,CONCAT26(uStack_298._6_2_,(undefined6)uStack_298),
                              CONCAT17(bStack_289,CONCAT16(uStack_28a,uStack_290)));
        }
        else {
          uStack_c8 = CONCAT16(uStack_28a,uStack_290);
          bStack_c1 = bStack_289;
          uStack_d0._0_1_ = (undefined1)(undefined6)uStack_298;
          uStack_d0._1_6_ = (undefined6)(CONCAT26(uStack_298._6_2_,(undefined6)uStack_298) >> 8);
          uStack_d0._7_1_ = (byte)((ushort)uStack_298._6_2_ >> 8);
          ppppplStack_c0 = (long *****)CONCAT17(bStack_281,uStack_288);
        }
        ppppppplStack_b8 = ppppppplStack_238;
        if (lStack_220 < 0) {
          func_0x000107c3192c(&ppppppplStack_b0,ppppppplStack_230,uStack_228);
        }
        else {
          uStack_a8 = uStack_228;
          ppppppplStack_b0 = ppppppplStack_230;
          lStack_a0 = lStack_220;
        }
        ppppppplStack_90 = ppppppplStack_210;
        lStack_98 = lStack_218;
        if (ppppppplStack_210 != (long *******)0x0) {
          ppppppplVar18 = ppppppplStack_210 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
            if (bVar10) {
              *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        ppppppplStack_80 = ppppppplStack_200;
        lStack_88 = lStack_208;
        if (ppppppplStack_200 != (long *******)0x0) {
          ppppppplVar18 = ppppppplStack_200 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
            if (bVar10) {
              *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        cStack_78 = cStack_1f8;
        lStack_128 = param_1[8];
        uStack_188 = CONCAT61(uStack_d0._1_6_,(undefined1)uStack_d0);
        uStack_180 = uStack_c8;
        bStack_179 = bStack_c1;
        bStack_181 = uStack_d0._7_1_;
        ppppplStack_178 = ppppplStack_c0;
        ppppppplStack_170 = ppppppplStack_b8;
        uStack_160 = uStack_a8;
        ppppppplStack_168 = ppppppplStack_b0;
        lStack_158 = lStack_a0;
        ppppppplStack_148 = ppppppplStack_210;
        lStack_150 = lStack_218;
        if (ppppppplStack_210 != (long *******)0x0) {
          ppppppplVar18 = ppppppplStack_210 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
            if (bVar10) {
              *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        ppppppplStack_138 = ppppppplStack_200;
        lStack_140 = lStack_208;
        if (ppppppplStack_200 != (long *******)0x0) {
          ppppppplVar18 = ppppppplStack_200 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
            if (bVar10) {
              *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        cStack_130 = cStack_1f8;
        ppppppplStack_118 = ppppppplStack_238;
        ppppppplStack_190 = ppppppplVar26;
        lStack_70 = lStack_128;
        if (lStack_220 < 0) {
          func_0x000107c3192c(&ppppppplStack_110,ppppppplStack_230,uStack_228);
        }
        else {
          uStack_108 = uStack_228;
          ppppppplStack_110 = ppppppplStack_230;
          lStack_100 = lStack_220;
        }
        ppppppplStack_f0 = ppppppplStack_210;
        lStack_f8 = lStack_218;
        if (ppppppplStack_210 != (long *******)0x0) {
          ppppppplVar26 = ppppppplStack_210 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
            if (bVar10) {
              *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        ppppppplStack_e0 = ppppppplStack_200;
        lStack_e8 = lStack_208;
        if (ppppppplStack_200 != (long *******)0x0) {
          ppppppplVar26 = ppppppplStack_200 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
            if (bVar10) {
              *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        cStack_d8 = cStack_1f8;
        ppppppplVar26 = (long *******)0xa0;
        __Znwm();
        ppppppplVar26[1] = (long ******)0x0;
        ppppppplVar26[2] = (long ******)0x0;
        *ppppppplVar26 = (long ******)&PTR_FUN_110c16b68;
        ppppppplVar26[0xb] = (long ******)0x0;
        ppppppplVar26[10] = (long ******)0x0;
        ppppppplVar26[0xd] = (long ******)0x0;
        ppppppplVar26[0xc] = (long ******)0x0;
        ppppppplStack_248 = ppppppplVar26 + 3;
        *ppppppplStack_248 = (long ******)&PTR_FUN_110c15d40;
        ppppppplVar26[5] = (long ******)0x0;
        ppppppplVar26[4] = (long ******)0x0;
        ppppppplVar26[7] = (long ******)0x0;
        ppppppplVar26[6] = (long ******)0x0;
        ppppppplVar18 = ppppppplVar26 + 8;
        ppppppplVar26[9] = (long ******)0x0;
        *ppppppplVar18 = (long ******)0x0;
        *(undefined4 *)(ppppppplVar26 + 0xc) = 0x3f800000;
        ppppppplVar26[0xf] = (long ******)0x0;
        ppppppplVar26[0xe] = (long ******)0x0;
        ppppppplVar26[0x11] = (long ******)0x0;
        ppppppplVar26[0x10] = (long ******)0x0;
        ppppppplVar26[0x13] = (long ******)0x0;
        ppppppplVar26[0x12] = (long ******)0x0;
        lVar16 = *plVar23;
        ppppppplStack_240 = ppppppplVar26;
        if (ppppppplVar18 != (long *******)(lVar16 + 0x28)) {
          *(undefined4 *)(ppppppplVar26 + 0xc) = *(undefined4 *)(lVar16 + 0x48);
          FUN_10a75eb64(ppppppplVar18,*(undefined8 *)(lVar16 + 0x38),0);
          lVar16 = *plVar23;
        }
        ppppppplStack_1e8 = *(long ********)(lVar16 + 0x20);
        pppppplStack_1f0 = *(long *******)(lVar16 + 0x18);
        if (*(long *)(lVar16 + 0x20) != 0) {
          plVar5 = (long *)(*(long *)(lVar16 + 0x20) + 8);
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar10) {
              *plVar5 = *plVar5 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        FUN_10a73fecc(ppppppplVar26 + 6,&pppppplStack_1f0);
        ppppppplVar26 = ppppppplStack_1e8;
        if (ppppppplStack_1e8 != (long *******)0x0) {
          ppppppplVar18 = ppppppplStack_1e8 + 1;
          do {
            pppppplVar20 = *ppppppplVar18;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
            if (bVar10) {
              *ppppppplVar18 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_1e8)[2])(ppppppplStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar26);
          }
        }
        ppppppplVar18 = (long *******)0x60;
        __Znwm();
        ppppppplVar18[1] = (long ******)0x0;
        ppppppplVar18[2] = (long ******)0x0;
        *ppppppplVar18 = (long ******)&PTR_FUN_110c16590;
        ppppppplVar14 = ppppppplVar18 + 3;
        *ppppppplVar14 = (long ******)FUN_10a756130;
        *(undefined1 *)(ppppppplVar18 + 0xb) = 3;
        ppppppplVar18[4] = (long ******)&PTR_FUN_110c16610;
        pppppplVar20 = (long ******)0xc0;
        __Znwm();
        FUN_10a756824();
        ppppppplVar18[5] = pppppplVar20;
        *(undefined1 *)(ppppppplVar18 + 0xb) = 1;
        uStack_268 = 0;
        ppppppplStack_260 = (long *******)0x0;
        ppppppplVar26 = &pppppplStack_1f0;
        ppppppplStack_258 = ppppppplVar14;
        ppppppplStack_250 = ppppppplVar18;
        FUN_10a745e5c(ppppppplVar26,&uStack_298,&ppppppplStack_248);
        if (*(char *)(ppppppplVar18 + 0xb) == '\x01') {
          ppppppplVar26 = &pppppplStack_1f0;
          (*(code *)*ppppppplVar14)(ppppppplVar26,ppppppplVar14);
        }
        else if (*(char *)(ppppppplVar18 + 0xb) == '\x02') {
          FUN_10a754e08(ppppppplVar14,&pppppplStack_1f0);
          ppppppplVar26 = ppppppplVar14;
        }
        ppppppplVar18 = ppppppplStack_1e8;
        if (ppppppplStack_1e8 != (long *******)0x0) {
          ppppppplVar14 = ppppppplStack_1e8 + 1;
          do {
            pppppplVar20 = *ppppppplVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar10) {
              *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_1e8)[2])(ppppppplStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar26 = ppppppplVar18;
          }
        }
        ppppppplVar18 = ppppppplStack_260;
        if (ppppppplStack_260 != (long *******)0x0) {
          ppppppplVar14 = ppppppplStack_260 + 1;
          do {
            pppppplVar20 = *ppppppplVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar10) {
              *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_260)[2])(ppppppplStack_260);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar26 = ppppppplVar18;
          }
        }
        ppppppplVar18 = ppppppplStack_250;
        if (ppppppplStack_250 != (long *******)0x0) {
          ppppppplVar14 = ppppppplStack_250 + 1;
          do {
            pppppplVar20 = *ppppppplVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar10) {
              *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_250)[2])(ppppppplStack_250);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar26 = ppppppplVar18;
          }
        }
        ppppppplVar18 = ppppppplStack_240;
        if (ppppppplStack_240 != (long *******)0x0) {
          ppppppplVar14 = ppppppplStack_240 + 1;
          do {
            pppppplVar20 = *ppppppplVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar10) {
              *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_240)[2])(ppppppplStack_240);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar26 = ppppppplVar18;
          }
        }
        ppppppplVar18 = ppppppplStack_e0;
        if (ppppppplStack_e0 != (long *******)0x0) {
          ppppppplVar14 = ppppppplStack_e0 + 1;
          do {
            pppppplVar20 = *ppppppplVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar10) {
              *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_e0)[2])(ppppppplStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar26 = ppppppplVar18;
          }
        }
        ppppppplVar18 = ppppppplStack_f0;
        if (ppppppplStack_f0 != (long *******)0x0) {
          ppppppplVar14 = ppppppplStack_f0 + 1;
          do {
            pppppplVar20 = *ppppppplVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar10) {
              *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_f0)[2])(ppppppplStack_f0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar26 = ppppppplVar18;
          }
        }
        if (lStack_100 < 0) {
          ppppppplVar26 = ppppppplStack_110;
          __ZdlPv();
        }
        ppppppplVar18 = ppppppplStack_138;
        if (ppppppplStack_138 != (long *******)0x0) {
          ppppppplVar14 = ppppppplStack_138 + 1;
          do {
            pppppplVar20 = *ppppppplVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar10) {
              *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_138)[2])(ppppppplStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar26 = ppppppplVar18;
          }
        }
        ppppppplVar18 = ppppppplStack_148;
        if (ppppppplStack_148 != (long *******)0x0) {
          ppppppplVar14 = ppppppplStack_148 + 1;
          do {
            pppppplVar20 = *ppppppplVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar10) {
              *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_148)[2])(ppppppplStack_148);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar26 = ppppppplVar18;
          }
        }
        if (lStack_158 < 0) {
          ppppppplVar26 = ppppppplStack_168;
          __ZdlPv();
        }
        if ((long)ppppplStack_178 < 0) {
          ppppppplVar26 = (long *******)CONCAT17(bStack_181,uStack_188);
          __ZdlPv();
        }
        ppppppplVar18 = ppppppplStack_80;
        if (ppppppplStack_80 != (long *******)0x0) {
          ppppppplVar14 = ppppppplStack_80 + 1;
          do {
            pppppplVar20 = *ppppppplVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar10) {
              *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_80)[2])(ppppppplStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar26 = ppppppplVar18;
          }
        }
        ppppppplVar18 = ppppppplStack_90;
        if (ppppppplStack_90 != (long *******)0x0) {
          ppppppplVar14 = ppppppplStack_90 + 1;
          do {
            pppppplVar20 = *ppppppplVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar10) {
              *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_90)[2])(ppppppplStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar26 = ppppppplVar18;
          }
        }
      }
      else {
        ppppppplVar26 = (long *******)&ppppppplStack_238;
        FUN_10a755710();
      }
    }
    ppppppplVar18 = ppppppplStack_200;
    if (ppppppplStack_200 != (long *******)0x0) {
      ppppppplVar14 = ppppppplStack_200 + 1;
      do {
        pppppplVar20 = *ppppppplVar14;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
        if (bVar10) {
          *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppppplVar20 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_200)[2])(ppppppplStack_200);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar26 = ppppppplVar18;
      }
    }
    ppppppplVar18 = ppppppplStack_210;
    if (ppppppplStack_210 != (long *******)0x0) {
      ppppppplVar14 = ppppppplStack_210 + 1;
      do {
        pppppplVar20 = *ppppppplVar14;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
        if (bVar10) {
          *ppppppplVar14 = (long ******)((long)pppppplVar20 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppppplVar20 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_210)[2])(ppppppplStack_210);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar26 = ppppppplVar18;
      }
    }
    ppppppplVar18 = ppppppplStack_230;
    if (-1 < lStack_220) goto LAB_10a747f90;
  }
  __ZdlPv();
  ppppppplVar26 = ppppppplVar18;
LAB_10a747f90:
  if ((char)bStack_281 < '\0') {
    ppppppplVar26 = (long *******)CONCAT26(uStack_298._6_2_,(undefined6)uStack_298);
    __ZdlPv();
  }
  if (lStack_270 < 0) {
    ppppppplVar26 = ppppppplStack_280;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010a75f544(&ppppppplStack_190);
    func_0x00010a755f90(&ppppppplStack_238);
    if ((char)bStack_281 < '\0') {
      __ZdlPv(CONCAT26(uStack_298._6_2_,(undefined6)uStack_298));
    }
    if (lStack_270 < 0) {
      __ZdlPv(ppppppplStack_280);
    }
    __Unwind_Resume();
    FUN_10a7569b8(ppppppplVar26 + 7);
    FUN_10a757ff0(ppppppplVar26 + 5);
    FUN_10a757ff0(ppppppplVar26 + 2);
    pppppplVar20 = ppppppplVar26[1];
    if (pppppplVar20 != (long ******)0x0) {
      pppppplVar12 = pppppplVar20 + 1;
      do {
        ppppplVar21 = *pppppplVar12;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
        if (bVar10) {
          *pppppplVar12 = (long *****)((long)ppppplVar21 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (ppppplVar21 == (long *****)0x0) {
        (*(code *)(*pppppplVar20)[2])(pppppplVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar20);
      }
    }
    return ppppppplVar26;
  }
  return ppppppplVar26;
}



/* Entry: 10a748224; end: 10a74825b;  */

long FUN_10a748224(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a7569b8(param_1 + 0x38);
  FUN_10a757ff0(param_1 + 0x28);
  FUN_10a757ff0(param_1 + 0x10);
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



/* Entry: 10a74825c; end: 10a748617;  */

/* WARNING: Removing unreachable block (ram,0x00010a748518) */
/* WARNING: Removing unreachable block (ram,0x00010a74846c) */
/* WARNING: Removing unreachable block (ram,0x00010a748608) */
/* WARNING: Removing unreachable block (ram,0x00010a748314) */

undefined8 ***** FUN_10a74825c(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 ****ppppuStack_180;
  undefined1 uStack_178;
  undefined2 uStack_169;
  undefined8 ****ppppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  char cStack_149;
  char cStack_148;
  undefined8 ****ppppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  char cStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 uStack_110;
  long lStack_108;
  char cStack_100;
  undefined8 ****appppuStack_f8 [2];
  char cStack_e1;
  undefined8 ****ppppuStack_e0;
  undefined8 uStack_d8;
  char cStack_c9;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined8 ****ppppuStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined1 uStack_40;
  
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar1 != 0) {
    lVar6 = *(long *)(*(long *)(param_2 + 0xe0) + 0x100);
    if (*(char *)(lVar6 + 0x21f) < '\0') {
      func_0x000107c3192c(&uStack_c0,*(undefined8 *)(lVar6 + 0x208),*(undefined8 *)(lVar6 + 0x210));
    }
    else {
      uStack_b8 = *(undefined8 *)(lVar6 + 0x210);
      uStack_c0 = *(undefined8 *)(lVar6 + 0x208);
      uStack_b0 = *(undefined8 *)(lVar6 + 0x218);
    }
    FUN_10a0b4df8(&ppppuStack_80,&uStack_c0,param_3);
    puVar2 = &uStack_c1;
    func_0x000107c2b05c(puVar2,&ppppuStack_80);
    func_0x000107c2b054(&ppppuStack_e0,(&PTR_DAT_110c14f50)[(ulong)puVar2 % 0x37]);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (appppuStack_f8,"mock_",param_3);
    if (cStack_c9 < '\0') {
      func_0x000107c3192c(&ppppuStack_160,ppppuStack_e0,uStack_d8);
    }
    else {
      uStack_158 = uStack_d8;
      ppppuStack_160 = ppppuStack_e0;
      cStack_149 = cStack_c9;
    }
    cStack_148 = '\x01';
    ppppuStack_180 = (undefined8 *****)0x3132303632323031;
    uStack_178 = 0;
    uStack_169 = 0x108;
    FUN_10a29fefc(&ppppuStack_138,&ppppuStack_160,&ppppuStack_180);
    puVar3 = (undefined8 *)0xb8;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_DAT_110bbace8;
    ppppuStack_80 = (undefined8 ****)((ulong)ppppuStack_80 & 0xffffffffffffff00);
    uStack_68 = cStack_120 == '\x01';
    if ((bool)uStack_68) {
      uStack_78 = uStack_130;
      ppppuStack_80 = ppppuStack_138;
      lStack_70 = lStack_128;
      uStack_130 = 0;
      lStack_128 = 0;
      ppppuStack_138 = (undefined8 *****)0x0;
    }
    ppppuStack_60 = (undefined8 ****)((ulong)ppppuStack_60 & 0xffffffffffffff00);
    uStack_48 = cStack_100 == '\x01';
    if ((bool)uStack_48) {
      uStack_58 = uStack_110;
      ppppuStack_60 = ppppuStack_118;
      lStack_50 = lStack_108;
      uStack_110 = 0;
      lStack_108 = 0;
      ppppuStack_118 = (undefined8 *****)0x0;
    }
    uStack_40 = 1;
    auStack_a0[0] = 0;
    uStack_88 = 0;
    FUN_10a247130(puVar3 + 3,appppuStack_f8,&ppppuStack_80,auStack_a0,0);
    pppppuVar4 = &ppppuStack_80;
    FUN_10a26a30c(pppppuVar4);
    *param_1 = (long)(puVar3 + 3);
    param_1[1] = (long)puVar3;
    if ((cStack_100 == '\x01') && (lStack_108 < 0)) {
      pppppuVar4 = (undefined8 *****)ppppuStack_118;
      __ZdlPv(ppppuStack_118);
    }
    if ((cStack_120 == '\x01') && (lStack_128 < 0)) {
      pppppuVar4 = (undefined8 *****)ppppuStack_138;
      __ZdlPv(ppppuStack_138);
    }
    if ((uStack_169._1_1_ == '\x01') && ((char)uStack_169 < '\0')) {
      pppppuVar4 = (undefined8 *****)ppppuStack_180;
      __ZdlPv(ppppuStack_180);
    }
    if ((cStack_148 == '\x01') && (cStack_149 < '\0')) {
      pppppuVar4 = (undefined8 *****)ppppuStack_160;
      __ZdlPv(ppppuStack_160);
    }
    if (cStack_e1 < '\0') {
      __ZdlPv(appppuStack_f8[0]);
      pppppuVar4 = (undefined8 *****)appppuStack_f8[0];
    }
    if (cStack_c9 < '\0') {
      __ZdlPv(ppppuStack_e0);
      pppppuVar4 = (undefined8 *****)ppppuStack_e0;
    }
    return pppppuVar4;
  }
  puVar5 = &UNK_10f672a6e;
  FUN_10a00946c(&UNK_10f672a6e);
  if (cStack_e1 < '\0') {
    __ZdlPv(appppuStack_f8[0]);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(ppppuStack_e0);
  }
  __Unwind_Resume(puVar5);
  return (undefined8 *****)0x80;
}



/* Entry: 10a748618; end: 10a7486b3;  */

undefined8 FUN_10a748618(void)

{
  return 0x80;
}



/* Entry: 10a7486b4; end: 10a748773;  */

undefined8 * FUN_10a7486b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c15118;
  puVar1[2] = &PTR_DAT_110c151b8;
  puVar1[7] = &PTR_DAT_110c15210;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110c16bf8;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110c16c48;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[0xb] = FUN_10a761c74;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x1d] = puVar1 + 3;
  param_1[0x1e] = puVar1;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  return param_1;
}



/* Entry: 10a748774; end: 10a74894f;  */

void FUN_10a748774(ulong param_1)

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
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_78 = 0x4ffffffff;
  uStack_80 = 0x40000000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672aa4;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3d9096;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748950(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672aad;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748950();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672abb;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748950();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672ac4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748950();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672acd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748950();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a748950; end: 10a7489f7;  */

undefined8 * FUN_10a748950(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7489f8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a7489f8; end: 10a748b9b;  */

void FUN_10a7489f8(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_78 = 0x4ffffffff;
  uStack_80 = 0x40000000064;
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "BluetoothStatus";
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Unknown";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748b9c(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "PermissionDenied";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748b9c();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Unavailable";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748b9c();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Available";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748b9c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a748b9c; end: 10a748c43;  */

undefined8 * FUN_10a748b9c(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a748c44);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a748c44; end: 10a748f37;  */

void FUN_10a748c44(ulong param_1)

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
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_78 = 0x4ffffffff;
  uStack_80 = 0x40000000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672af9;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f672b10;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748f38(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f4bbe2a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748f38();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672b1a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748f38();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672b2f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748f38();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672b35;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748f38();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672b3c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748f38();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672b45;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748f38();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672b51;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748f38();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672b5f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748f38();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672b78;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000136;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a748f38();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a748f38; end: 10a748fdf;  */

undefined8 * FUN_10a748f38(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a748fe0);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a748fe0; end: 10a7490c3;  */

undefined1  [16] FUN_10a748fe0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f674978;
  return auVar1;
}



/* Entry: 10a7490c4; end: 10a74911f;  */

void FUN_10a7490c4(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f672059;
  uStack_38 = 0;
  puStack_30 = &UNK_10f672059;
  uStack_28 = 0;
  uStack_20 = 0xae;
  uStack_18 = 0xffffffff;
  FUN_10a749120(param_1,&uStack_58);
  FUN_10a761e00();
  return;
}



/* Entry: 10a749120; end: 10a7491f7;  */

/* WARNING: Removing unreachable block (ram,0x00010a7491b8) */

undefined1  [16] FUN_10a749120(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f674978,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  func_0x00010a761d04(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a7491f8; end: 10a7492cf;  */

void FUN_10a7491f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x68] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x6b) = 0x100;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  FUN_10a38a7f0(param_1,&PTR_PTR_110c15520,param_2,param_3);
  *param_1 = &PTR_FUN_110c15238;
  param_1[2] = &PTR_DAT_110c15368;
  param_1[7] = &PTR_DAT_110c153c0;
  param_1[0xd] = &PTR_DAT_110c153e0;
  param_1[0x68] = &PTR_DAT_110c154e0;
  param_1[0x16] = &PTR_DAT_110c15450;
  param_1[0x17] = &PTR_DAT_110c15480;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0x3a83126f41200000;
  param_1[0x61] = 0x13d0f5c29;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x66] = 0;
  return;
}



/* Entry: 10a7492d0; end: 10a749403;  */

void FUN_10a7492d0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c15238;
  param_1[2] = &PTR_DAT_110c15368;
  param_1[7] = &PTR_DAT_110c153c0;
  param_1[0xd] = &PTR_DAT_110c153e0;
  param_1[0x68] = &PTR_DAT_110c154e0;
  param_1[0x16] = &PTR_DAT_110c15450;
  param_1[0x17] = &PTR_DAT_110c15480;
  func_0x00010a0523dc(param_1 + 0x5e);
  func_0x00010a05248c(param_1 + 0x5c);
  func_0x00010a0523dc(param_1 + 0x5a);
  func_0x00010a05248c(param_1 + 0x58);
  func_0x00010a0523dc(param_1 + 0x56);
  func_0x00010a05248c(param_1 + 0x54);
  func_0x00010a0523dc(param_1 + 0x52);
  func_0x00010a05248c(param_1 + 0x50);
  FUN_10a0617bc(param_1 + 0x4e);
  FUN_10a0617bc(param_1 + 0x4c);
  FUN_10a0617bc(param_1 + 0x4a);
  FUN_10a0617bc(param_1 + 0x48);
  func_0x00010a051ed8(param_1 + 0x46);
  func_0x00010a761ebc(param_1 + 0x44);
  func_0x00010a0536d4(param_1 + 0x42);
  plVar1 = (long *)param_1[0x41];
  param_1[0x41] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = &PTR_FUN_110c15de8;
  param_1[2] = &PTR_DAT_110bcf758;
  param_1[7] = &PTR_DAT_110bcf7b0;
  param_1[0xd] = &PTR_DAT_110bcf7d0;
  param_1[0x68] = &PTR_DAT_110c15f20;
  param_1[0x16] = &PTR_DAT_110bcf840;
  param_1[0x17] = &PTR_DAT_110bcf870;
  func_0x00010a004e5c(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c15f70;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x68] = &PTR_DAT_110c160a0;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a749404; end: 10a74943f;  */

void FUN_10a749404(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c15238;
  param_1[2] = &PTR_DAT_110c15368;
  param_1[7] = &PTR_DAT_110c153c0;
  param_1[0xd] = &PTR_DAT_110c153e0;
  param_1[0x68] = &PTR_DAT_110c154e0;
  param_1[0x16] = &PTR_DAT_110c15450;
  param_1[0x17] = &PTR_DAT_110c15480;
  func_0x00010a0523dc(param_1 + 0x5e);
  func_0x00010a05248c(param_1 + 0x5c);
  func_0x00010a0523dc(param_1 + 0x5a);
  func_0x00010a05248c(param_1 + 0x58);
  func_0x00010a0523dc(param_1 + 0x56);
  func_0x00010a05248c(param_1 + 0x54);
  func_0x00010a0523dc(param_1 + 0x52);
  func_0x00010a05248c(param_1 + 0x50);
  FUN_10a0617bc(param_1 + 0x4e);
  FUN_10a0617bc(param_1 + 0x4c);
  FUN_10a0617bc(param_1 + 0x4a);
  FUN_10a0617bc(param_1 + 0x48);
  func_0x00010a051ed8(param_1 + 0x46);
  func_0x00010a761ebc(param_1 + 0x44);
  func_0x00010a0536d4(param_1 + 0x42);
  plVar1 = (long *)param_1[0x41];
  param_1[0x41] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = &PTR_FUN_110c15de8;
  param_1[2] = &PTR_DAT_110bcf758;
  param_1[7] = &PTR_DAT_110bcf7b0;
  param_1[0xd] = &PTR_DAT_110bcf7d0;
  param_1[0x68] = &PTR_DAT_110c15f20;
  param_1[0x16] = &PTR_DAT_110bcf840;
  param_1[0x17] = &PTR_DAT_110bcf870;
  func_0x00010a004e5c(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c15f70;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x68] = &PTR_DAT_110c160a0;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a749440; end: 10a7494cb;  */

void FUN_10a749440(void)

{
  FUN_10a7492d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7494cc; end: 10a7494fb;  */

void FUN_10a7494cc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a7492d0((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a7494fc; end: 10a74983f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a7494fc(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined8 uStack_344;
  undefined8 uStack_33c;
  undefined4 uStack_334;
  undefined8 *puStack_330;
  long **pplStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  long *plStack_310;
  undefined1 *puStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  long *plStack_2e8;
  undefined8 uStack_2e0;
  long *aplStack_2d8 [13];
  undefined1 auStack_270 [416];
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aplStack_2d8[0xc] = (long *)0x0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_88 = 0xffffffffffffffff;
  uStack_80 = 0x3f800000;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  puVar2 = (undefined8 *)param_2[1];
  for (puVar1 = (undefined8 *)*param_2; plStack_2e8 = param_1, puVar1 != puVar2; puVar1 = puVar1 + 2
      ) {
    aplStack_2d8[0] = (long *)0x0;
    uStack_2e0 = 0;
    aplStack_2d8[1] = (long *)0x0;
    aplStack_2d8[2] = (long *)0xffffffffffffffff;
    aplStack_2d8[3] = (long *)0xffffffffffffffff;
    aplStack_2d8[4] = (long *)0x0;
    aplStack_2d8[5] = (long *)0x0;
    aplStack_2d8[6] = (long *)0x0;
    aplStack_2d8[7] = (long *)0xffffffffffffffff;
    aplStack_2d8[9] = (long *)0x0;
    aplStack_2d8[10] = (long *)0x0;
    aplStack_2d8[8] = (long *)0xffffffffffffffff;
    aplStack_2d8[0xb] = (long *)0x0;
    FUN_10a061728(aplStack_2d8 + 0xc,&uStack_2e0);
    plVar6 = aplStack_2d8[5];
    if (aplStack_2d8[5] != (long *)0x0) {
      plVar7 = aplStack_2d8[5] + 1;
      do {
        lVar15 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*aplStack_2d8[5] + 0x10))(aplStack_2d8[5]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = aplStack_2d8[0];
    if (aplStack_2d8[0] != (long *)0x0) {
      plVar7 = aplStack_2d8[0] + 1;
      do {
        lVar15 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*aplStack_2d8[0] + 0x10))(aplStack_2d8[0]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = aplStack_2d8[0xc];
    aplStack_2d8[0] = (long *)puVar1[1];
    uStack_2e0 = *puVar1;
    if (puVar1[1] != 0) {
      plVar7 = (long *)(puVar1[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    aplStack_2d8[1] = (long *)0x0;
    aplStack_2d8[2] = (long *)0xffffffffffffffff;
    aplStack_2d8[3] = (long *)0xffffffffffffffff;
    FUN_10a00e5c4(aplStack_2d8 + (long)aplStack_2d8[0xc] * 0xd,&uStack_2e0);
    plVar7 = aplStack_2d8[0];
    aplStack_2d8[(long)plVar6 * 0xd + 3] = aplStack_2d8[2];
    aplStack_2d8[(long)plVar6 * 0xd + 2] = aplStack_2d8[1];
    aplStack_2d8[(long)plVar6 * 0xd + 4] = aplStack_2d8[3];
    if (aplStack_2d8[0] != (long *)0x0) {
      plVar6 = aplStack_2d8[0] + 1;
      do {
        lVar15 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*aplStack_2d8[0] + 0x10))(aplStack_2d8[0]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    *(undefined4 *)(aplStack_2d8 + 0xc + (long)aplStack_2d8[0xc] * 0xd) = 2;
    param_1 = plStack_2e8;
  }
  uStack_78 = 2;
  uStack_74 = 2;
  (**(code **)(*param_1 + 0x88))(param_1,aplStack_2d8 + 0xc);
  if ((ulong *)*param_2 != (ulong *)param_2[1]) {
    plVar6 = *(long **)*param_2;
    (**(code **)(*plVar6 + 0x28))();
    if ((long *)*param_2 != (long *)param_2[1]) {
      plVar7 = *(long **)*param_2;
      (**(code **)(*plVar7 + 0x30))();
      aplStack_2d8[0] = (long *)((ulong)plVar6 & 0xffffffff | (long)plVar7 << 0x20);
      uStack_2e0 = 0;
      (**(code **)(*param_1 + 0xc0))(param_1,&uStack_2e0);
      plVar7 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar10 = plStack_a0 + 1;
        do {
          lVar15 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar10 = plStack_c8 + 1;
        do {
          lVar15 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      puVar8 = auStack_270;
      plVar7 = aplStack_2d8[0xc];
      func_0x00010a048e34();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
      FUN_10a023a44(aplStack_2d8 + 0xc);
      puVar9 = puVar8;
      __Unwind_Resume();
      uStack_320 = 0xffffffffffffffff;
      pcStack_2f8 = FUN_10a749840;
      plVar10 = plVar7 + 4;
      puStack_330 = puVar1;
      pplStack_328 = aplStack_2d8 + 0xc;
      plStack_318 = plVar6;
      plStack_310 = param_2;
      puStack_308 = puVar8;
      puStack_300 = &stack0xfffffffffffffff0;
      FUN_10a5dfd94(plVar10,*(undefined8 *)(puVar9 + 0x270));
      plVar6 = plVar7 + 4;
      FUN_10a01eacc(plVar6,plVar10);
      func_0x000107c2b074(&uStack_370,&PTR_DAT_110c16648);
      if (*param_3 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(*param_3 + 0x268);
      }
      FUN_10a5e17a8(plVar6,&uStack_370,uVar13,&UNK_10e4ac8a8);
      if (uStack_35c < 0) {
        __ZdlPv(CONCAT44(uStack_36c,uStack_370));
      }
      func_0x000107c2b074(&uStack_370,&PTR_s_direction_110c16720);
      FUN_10a022468(plVar6,&uStack_370,param_4);
      if (uStack_35c._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_36c,uStack_370));
      }
      if (*(long *)(puVar9 + 0x170) == 0) goto LAB_10a74992c;
      puVar14 = *(undefined **)(*(long *)(*(long *)(puVar9 + 0x170) + 0x100) + 0x260);
      puVar16 = &UNK_10f653c20;
      uStack_368 = 0x21;
      while( true ) {
        uStack_370 = SUB84(puVar16,0);
        uStack_36c = (undefined4)((ulong)puVar16 >> 0x20);
        uStack_364 = 0;
        if (puVar14 != (undefined *)0x0) break;
        FUN_10a0edfc4(&uStack_370);
LAB_10a74992c:
        ppuVar11 = &PTR___tlv_bootstrap_11340dee8;
        (*(code *)PTR___tlv_bootstrap_11340dee8)();
        puVar14 = *ppuVar11;
        if (puVar14 != (undefined *)0x0) break;
        FUN_10a3ca004();
        pbVar12 = (byte *)0x113836510;
        FUN_10ad0621c();
        uVar17 = (ulong)(*pbVar12 >> 4 & 4);
        puVar14 = ppuVar11[uVar17 + 7];
        if (puVar14 != (undefined *)0x0) break;
        FUN_10a3ca05c(ppuVar11,uVar17);
        puVar14 = ppuVar11[uVar17 + 7];
        puVar16 = &UNK_10f646d35;
        uStack_368 = 0x26;
      }
      uStack_370 = 0x3f800000;
      uStack_364 = 0;
      uStack_360 = 0;
      uStack_36c = 0;
      uStack_368 = 0;
      uStack_35c = 0x3f800000;
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0x3f800000;
      uStack_33c = 0;
      uStack_344 = 0;
      uStack_334 = 0x3f800000;
      (**(code **)(*plVar7 + 0x58))(plVar7,*(undefined8 *)(puVar14 + 0x208),plVar10,&uStack_370,3);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a749824);
  (*pcVar5)();
}



/* Entry: 10a749840; end: 10a749a0f;  */

void FUN_10a749840(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  plVar1 = param_2 + 4;
  FUN_10a5dfd94(plVar1,*(undefined8 *)(param_1 + 0x270));
  plVar2 = param_2 + 4;
  FUN_10a01eacc(plVar2,plVar1);
  func_0x000107c2b074(&uStack_80,&PTR_DAT_110c16648);
  if (*param_3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*param_3 + 0x268);
  }
  FUN_10a5e17a8(plVar2,&uStack_80,uVar5,&UNK_10e4ac8a8);
  if (uStack_6c < 0) {
    __ZdlPv(CONCAT44(uStack_7c,uStack_80));
  }
  func_0x000107c2b074(&uStack_80,&PTR_s_direction_110c16720);
  FUN_10a022468(plVar2,&uStack_80,param_4);
  if (uStack_6c._3_1_ < '\0') {
    __ZdlPv(CONCAT44(uStack_7c,uStack_80));
  }
  if (*(long *)(param_1 + 0x170) == 0) goto LAB_10a74992c;
  puVar6 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x260);
  puVar7 = &UNK_10f653c20;
  uStack_78 = 0x21;
  while( true ) {
    uStack_80 = SUB84(puVar7,0);
    uStack_7c = (undefined4)((ulong)puVar7 >> 0x20);
    uStack_74 = 0;
    if (puVar6 != (undefined *)0x0) break;
    FUN_10a0edfc4(&uStack_80);
LAB_10a74992c:
    ppuVar3 = &PTR___tlv_bootstrap_11340dee8;
    (*(code *)PTR___tlv_bootstrap_11340dee8)();
    puVar6 = *ppuVar3;
    if (puVar6 != (undefined *)0x0) break;
    FUN_10a3ca004();
    pbVar4 = (byte *)0x113836510;
    FUN_10ad0621c();
    uVar8 = (ulong)(*pbVar4 >> 4 & 4);
    puVar6 = ppuVar3[uVar8 + 7];
    if (puVar6 != (undefined *)0x0) break;
    FUN_10a3ca05c(ppuVar3,uVar8);
    puVar6 = ppuVar3[uVar8 + 7];
    puVar7 = &UNK_10f646d35;
    uStack_78 = 0x26;
  }
  uStack_80 = 0x3f800000;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_6c = 0x3f800000;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0x3f800000;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_44 = 0x3f800000;
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(puVar6 + 0x208),plVar1,&uStack_80,3);
  return;
}



/* Entry: 10a749a10; end: 10a749d5f;  */

void FUN_10a749a10(undefined8 param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  puVar9 = (undefined8 *)0x1;
  FUN_10a088744(*(undefined8 *)(*param_3 + 0x268));
  if (puVar9 == (undefined8 *)0x0) {
    plStack_80 = (long *)0x0;
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = (long *)*puVar9;
    plStack_80 = (long *)puVar9[1];
    if (plStack_80 != (long *)0x0) {
      plVar8 = plStack_80 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  plStack_88 = plVar12;
  if (*(long *)(param_2 + 0x170) == 0) {
    ppuVar4 = &PTR___tlv_bootstrap_11340dee8;
    (*(code *)PTR___tlv_bootstrap_11340dee8)();
    puVar10 = *ppuVar4;
    if (puVar10 != (undefined *)0x0) goto LAB_10a749aec;
    FUN_10a3ca004();
    pbVar5 = (byte *)0x113836510;
    FUN_10ad0621c();
    uVar14 = (ulong)(*pbVar5 >> 4 & 4);
    puVar10 = ppuVar4[uVar14 + 7];
    if (puVar10 != (undefined *)0x0) goto LAB_10a749aec;
    FUN_10a3ca05c(ppuVar4,uVar14);
    puVar10 = ppuVar4[uVar14 + 7];
    plStack_78 = (long *)&UNK_10f646d35;
    plStack_70 = (long *)0x26;
  }
  else {
    puVar10 = *(undefined **)(*(long *)(*(long *)(param_2 + 0x170) + 0x100) + 0x260);
    plStack_78 = (long *)&UNK_10f653c20;
    plStack_70 = (long *)0x21;
  }
  if (puVar10 == (undefined *)0x0) {
    FUN_10a0edfc4(&plStack_78);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a749aa8);
    (*pcVar3)();
  }
LAB_10a749aec:
  uVar13 = *(undefined8 *)(puVar10 + 0x1e0);
  plVar8 = plVar12;
  (**(code **)(*plVar12 + 0x20))();
  plVar6 = plVar12;
  (**(code **)(*plVar12 + 0x28))();
  (**(code **)(*plVar12 + 0x30))();
  plVar7 = *(long **)(*param_3 + 0x268);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0xd0))();
  }
  uStack_5c = SUB84(plVar8,0);
  uStack_58 = 1;
  plStack_78 = (long *)CONCAT44((int)plVar12,(int)plVar6);
  uStack_68 = 0x100000001;
  plStack_70 = (long *)0x400000001;
  uStack_60 = SUB81(plVar7,0);
  FUN_10a048f04(&lStack_98,uVar13,&plStack_78);
  *(undefined1 *)(lStack_98 + 0x19) = 1;
  uVar13 = *(undefined8 *)(param_2 + 0x170);
  plVar8 = (long *)0x2d0;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110b9fcf0;
  plVar12 = plVar8 + 3;
  plVar8[0x56] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar8 + 0x59) = 0x100;
  plVar8[0x58] = 0;
  plVar8[0x57] = 0;
  FUN_10a1da04c(plVar12,&PTR_PTR_110bb3688,uVar13);
  plVar8[3] = (long)&PTR_FUN_110bb3440;
  plVar8[5] = (long)&PTR_FUN_110bb3570;
  plVar8[8] = (long)&PTR_FUN_110bb35a0;
  plVar8[0x56] = (long)&PTR_FUN_110bb3648;
  plVar8[0x18] = (long)&PTR_FUN_110bb35f8;
  plVar8[0x55] = 0;
  plVar8[0x54] = 0;
  plStack_78 = plVar12;
  plStack_70 = plVar8;
  FUN_10a063ca4(&plStack_78,plVar8 + 0xb,plVar12);
  FUN_10a1db4cc(plStack_78,&lStack_98);
  FUN_10a1cb720(param_1,*(undefined8 *)(param_2 + 0x170),&plStack_78);
  plVar12 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    plVar8 = plStack_70 + 1;
    do {
      lVar11 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (plStack_90 != (long *)0x0) {
    plVar12 = plStack_90 + 1;
    do {
      lVar11 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  plVar12 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar8 = plStack_80 + 1;
    do {
      lVar11 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  return;
}



/* Entry: 10a749d60; end: 10a74b297;  */

void FUN_10a749d60(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined **ppuVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int iVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  float *pfVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long lStack_150;
  long *plStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 auStack_110 [2];
  undefined8 uStack_100;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar18 = (int)*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x10);
  FUN_10a8c7000();
  if ((iVar18 == 0) || (lVar10 = param_1, FUN_10a74b298(), (int)lVar10 == 0)) {
LAB_10a74afac:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar10 = *(long *)(param_1 + 0x168);
    FUN_10a74b304();
    if (lVar10 == 0) goto LAB_10a74afac;
    iVar18 = *(int *)(param_1 + 0x310);
    if (iVar18 == 0) {
      FUN_10a8c6a58(*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x10),1);
      plVar11 = *(long **)(param_1 + 0x220);
      uStack_ec._3_1_ = '\b';
      uStack_100._0_4_ = 0x7074756f;
      uStack_100._4_4_ = 0x305f7475;
      uStack_f8 = uStack_f8 & 0xffffff00;
      func_0x00010a8b98b4(plVar11,&uStack_100);
      lVar21 = *plVar11;
      if (uStack_ec._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      pfVar23 = (float *)**(long **)(lVar21 + 0xd8);
      plVar11 = *(long **)(param_1 + 0x220);
      uStack_ec = CONCAT13(4,(undefined3)uStack_ec);
      uStack_100._0_4_ = 0x61746164;
      uStack_100._4_4_ = uStack_100._4_4_ & 0xffffff00;
      func_0x00010a8b9874(plVar11,&uStack_100);
      plVar11 = *(long **)(*(long *)(*plVar11 + 0x108) + 0x268);
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar11 + 0xb0))();
      }
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      plVar12 = *(long **)(param_1 + 0x220);
      uStack_ec = CONCAT13(4,(undefined3)uStack_ec);
      uStack_100._0_4_ = 0x61746164;
      uStack_100._4_4_ = uStack_100._4_4_ & 0xffffff00;
      func_0x00010a8b9874(plVar12,&uStack_100);
      uVar3 = *(uint *)(*plVar12 + 0x48);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      fVar25 = (float)NEON_fminnm((float)((ulong)plVar11 & 0xffffffff) / (float)uVar3,0x3f800000);
      fVar36 = pfVar23[1];
      fVar34 = ABS(*pfVar23) * *(float *)(param_1 + 0x300);
      _expf(fVar36 * 10.0,fVar34,fVar36);
      fVar36 = (float)_logf();
      fVar26 = *(float *)(param_1 + 0x304) * (fVar36 / 10.0);
      fVar36 = *(float *)(param_1 + 0x308);
      if (fVar26 <= *(float *)(param_1 + 0x308)) {
        fVar36 = fVar26;
      }
      fVar26 = (float)_expf();
      fVar27 = (float)_expf();
      fVar28 = (float)_expf();
      fVar39 = fVar27 + fVar28;
      fVar29 = (float)_expf();
      fVar30 = (float)_expf();
      fVar38 = fVar29 + fVar30;
      fVar31 = (float)_expf();
      fVar32 = (float)_expf();
      fVar35 = fVar31 + fVar32;
      uVar37 = NEON_fminnm((fVar25 * fVar34) / 6.0,0x3f800000);
      *(undefined4 *)(param_1 + 0x314) = uVar37;
      fVar25 = 1.0 / ((fVar35 + fVar39 + fVar38) * 2.0 + 1.0);
      *(float *)(param_1 + 0x318) = fVar36;
      *(float *)(param_1 + 0x31c) = 1.0 / (fVar26 + 1.0);
      *(float *)(param_1 + 800) = (fVar27 + fVar28 + fVar28) / fVar39;
      *(float *)(param_1 + 0x324) = (fVar30 * 4.0 + fVar29 * 3.0) / fVar38;
      *(float *)(param_1 + 0x328) = (fVar32 * 6.0 + fVar31 * 5.0) / fVar35;
      *(float *)(param_1 + 0x32c) = fVar25;
      *(float *)(param_1 + 0x330) = fVar39 * fVar25;
      *(float *)(param_1 + 0x334) = fVar38 * fVar25;
      *(float *)(param_1 + 0x338) = fVar35 * fVar25;
      iVar18 = *(int *)(param_1 + 0x310);
    }
    *(int *)(param_1 + 0x310) = iVar18 + 1;
    FUN_10a0095ac();
    uVar37 = 0x1340ddc8;
    (*(code *)PTR___tlv_bootstrap_11340ddc8)();
    uVar7 = uVar37;
    func_0x000107c284a0();
    uVar8 = uVar37;
    func_0x000107c284a0();
    uVar9 = uVar37;
    func_0x000107c284a0();
    func_0x000107c284a0();
    auVar33._4_4_ = uVar8;
    auVar33._0_4_ = uVar7;
    auVar33._8_4_ = uVar9;
    auVar33._12_4_ = uVar37;
    auVar33 = NEON_ucvtf(auVar33,4);
    fStack_140 = auVar33._0_4_ * 2.3283064e-10 + 0.0;
    fStack_13c = auVar33._4_4_ * 2.3283064e-10 + 0.0;
    fStack_138 = auVar33._8_4_ * 2.3283064e-10 + 0.0;
    fStack_134 = auVar33._12_4_ * 2.3283064e-10 + 0.0;
    uStack_100._0_4_ = 0xf63946e;
    uStack_100._4_4_ = 1;
    uStack_f8 = 0x4f;
    uStack_f4 = 0;
    if (*(long **)(lVar10 + 0x230) != *(long **)(lVar10 + 0x238)) {
      lVar19 = **(long **)(lVar10 + 0x230);
      lVar21 = *(long *)(lVar19 + 0x28);
      plStack_148 = *(long **)(lVar19 + 0x30);
      if (plStack_148 != (long *)0x0) {
        plVar11 = plStack_148 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar16 = (undefined8 *)0x1;
      lStack_150 = lVar21;
      FUN_10a088744(*(undefined8 *)(lVar21 + 0x268));
      if (puVar16 == (undefined8 *)0x0) {
        plStack_158 = (long *)0x0;
        uStack_160 = 0;
      }
      else {
        uStack_160 = *puVar16;
        plStack_158 = (long *)puVar16[1];
        if (plStack_158 != (long *)0x0) {
          plVar11 = plStack_158 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      puVar16 = (undefined8 *)0x1;
      FUN_10a088744(*(undefined8 *)(lVar21 + 0x268));
      if (puVar16 == (undefined8 *)0x0) {
        plStack_118 = (long *)0x0;
        uStack_120 = 0;
      }
      else {
        uStack_120 = *puVar16;
        plStack_118 = (long *)puVar16[1];
        if (plStack_118 != (long *)0x0) {
          plVar11 = plStack_118 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      plVar11 = (long *)(param_1 + 0x280);
      if (*(long *)(param_1 + 0x280) == 0) {
        FUN_10a749a10(&uStack_100,param_1,&lStack_150);
        FUN_10a015bec(plVar11,&uStack_100);
        plVar12 = (long *)CONCAT44(uStack_f4,uStack_f8);
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 1;
          do {
            lVar21 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        puVar16 = (undefined8 *)0x1;
        uVar37 = (int)*(undefined8 *)(*plVar11 + 0x268);
        FUN_10a088744();
        uStack_100._0_4_ = uVar37;
        if (puVar16 == (undefined8 *)0x0) {
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
        }
        else {
          uStack_f0 = (undefined4)puVar16[1];
          uStack_ec = (int)((ulong)puVar16[1] >> 0x20);
          uStack_f8 = (uint)*puVar16;
          uStack_f4 = (undefined4)((ulong)*puVar16 >> 0x20);
          if (puVar16[1] != 0) {
            plVar12 = (long *)(puVar16[1] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *plVar12 = *plVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        FUN_10a00e5c4(param_1 + 0x290,&uStack_f8);
        plVar12 = (long *)CONCAT44(uStack_ec,uStack_f0);
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 1;
          do {
            lVar21 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
      }
      plVar12 = (long *)(param_1 + 0x2a0);
      if (*(long *)(param_1 + 0x2a0) == 0) {
        FUN_10a749a10(&uStack_100,param_1,&lStack_150);
        FUN_10a015bec(plVar12,&uStack_100);
        plVar1 = (long *)CONCAT44(uStack_f4,uStack_f8);
        if (plVar1 != (long *)0x0) {
          plVar2 = plVar1 + 1;
          do {
            lVar21 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        puVar16 = (undefined8 *)0x1;
        uVar37 = (int)*(undefined8 *)(*plVar12 + 0x268);
        FUN_10a088744();
        uStack_100._0_4_ = uVar37;
        if (puVar16 == (undefined8 *)0x0) {
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
        }
        else {
          uStack_f0 = (undefined4)puVar16[1];
          uStack_ec = (int)((ulong)puVar16[1] >> 0x20);
          uStack_f8 = (uint)*puVar16;
          uStack_f4 = (undefined4)((ulong)*puVar16 >> 0x20);
          if (puVar16[1] != 0) {
            plVar1 = (long *)(puVar16[1] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        FUN_10a00e5c4(param_1 + 0x2b0,&uStack_f8);
        plVar1 = (long *)CONCAT44(uStack_ec,uStack_f0);
        if (plVar1 != (long *)0x0) {
          plVar2 = plVar1 + 1;
          do {
            lVar21 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
      plVar1 = (long *)(param_1 + 0x2c0);
      if (*(long *)(param_1 + 0x2c0) == 0) {
        FUN_10a749a10(&uStack_100,param_1,&lStack_150);
        FUN_10a015bec(plVar1,&uStack_100);
        plVar2 = (long *)CONCAT44(uStack_f4,uStack_f8);
        if (plVar2 != (long *)0x0) {
          plVar24 = plVar2 + 1;
          do {
            lVar21 = *plVar24;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar5) {
              *plVar24 = lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        puVar16 = (undefined8 *)0x1;
        uVar37 = (int)*(undefined8 *)(*plVar1 + 0x268);
        FUN_10a088744();
        uStack_100._0_4_ = uVar37;
        if (puVar16 == (undefined8 *)0x0) {
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
        }
        else {
          uStack_f0 = (undefined4)puVar16[1];
          uStack_ec = (int)((ulong)puVar16[1] >> 0x20);
          uStack_f8 = (uint)*puVar16;
          uStack_f4 = (undefined4)((ulong)*puVar16 >> 0x20);
          if (puVar16[1] != 0) {
            plVar2 = (long *)(puVar16[1] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        FUN_10a00e5c4(param_1 + 0x2d0,&uStack_f8);
        plVar2 = (long *)CONCAT44(uStack_ec,uStack_f0);
        if (plVar2 != (long *)0x0) {
          plVar24 = plVar2 + 1;
          do {
            lVar21 = *plVar24;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar5) {
              *plVar24 = lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
      plVar2 = (long *)(param_1 + 0x2e0);
      if (*(long *)(param_1 + 0x2e0) == 0) {
        FUN_10a749a10(&uStack_100,param_1,&lStack_150);
        FUN_10a015bec(plVar2,&uStack_100);
        plVar24 = (long *)CONCAT44(uStack_f4,uStack_f8);
        if (plVar24 != (long *)0x0) {
          plVar13 = plVar24 + 1;
          do {
            lVar21 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
          }
        }
        puVar16 = (undefined8 *)0x1;
        uVar37 = (int)*(undefined8 *)(*plVar2 + 0x268);
        FUN_10a088744();
        uStack_100._0_4_ = uVar37;
        if (puVar16 == (undefined8 *)0x0) {
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
        }
        else {
          uStack_f0 = (undefined4)puVar16[1];
          uStack_ec = (int)((ulong)puVar16[1] >> 0x20);
          uStack_f8 = (uint)*puVar16;
          uStack_f4 = (undefined4)((ulong)*puVar16 >> 0x20);
          if (puVar16[1] != 0) {
            plVar24 = (long *)(puVar16[1] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar5) {
                *plVar24 = *plVar24 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        FUN_10a00e5c4(param_1 + 0x2f0,&uStack_f8);
        plVar24 = (long *)CONCAT44(uStack_ec,uStack_f0);
        if (plVar24 != (long *)0x0) {
          plVar13 = plVar24 + 1;
          do {
            lVar21 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
          }
        }
      }
      plVar24 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar13 = plStack_118 + 1;
        do {
          lVar21 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
        }
      }
      lVar21 = *(long *)(lVar10 + 0x700);
      plVar24 = *(long **)(lVar10 + 0x708);
      if (plVar24 != (long *)0x0) {
        plVar13 = plVar24 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_170 = *(undefined8 *)(lVar21 + 0x28);
      plStack_168 = *(long **)(lVar21 + 0x30);
      if (*(long *)(lVar21 + 0x30) != 0) {
        plVar13 = (long *)(*(long *)(lVar21 + 0x30) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (plVar24 != (long *)0x0) {
        plVar13 = plVar24 + 1;
        do {
          lVar10 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
        }
      }
      uStack_120 = *(undefined8 *)(param_1 + 0x290);
      plStack_118 = *(long **)(param_1 + 0x298);
      if (*(long *)(param_1 + 0x298) != 0) {
        plVar24 = (long *)(*(long *)(param_1 + 0x298) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar5) {
            *plVar24 = *plVar24 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_100._0_4_ = 0;
      uStack_100._4_4_ = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      FUN_10a756a10(&uStack_100,&uStack_120,auStack_110,1);
      FUN_10a7494fc(param_2,&uStack_100);
      puStack_128 = &uStack_100;
      FUN_10a18ba48(&puStack_128);
      plVar24 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar13 = plStack_118 + 1;
        do {
          lVar10 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
        }
      }
      uStack_100._0_4_ = *(undefined4 *)(param_1 + 0x314);
      uStack_100._4_4_ = 0;
      FUN_10a749840(param_1,param_2,&uStack_170,&uStack_100);
      (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
      uStack_120 = *(undefined8 *)(param_1 + 0x2b0);
      plStack_118 = *(long **)(param_1 + 0x2b8);
      if (*(long *)(param_1 + 0x2b8) != 0) {
        plVar24 = (long *)(*(long *)(param_1 + 0x2b8) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar5) {
            *plVar24 = *plVar24 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_100._0_4_ = 0;
      uStack_100._4_4_ = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      FUN_10a756a10(&uStack_100,&uStack_120,auStack_110,1);
      FUN_10a7494fc(param_2,&uStack_100);
      puStack_128 = &uStack_100;
      FUN_10a18ba48(&puStack_128);
      plVar24 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar13 = plStack_118 + 1;
        do {
          lVar10 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
        }
      }
      uStack_100._4_4_ = *(undefined4 *)(param_1 + 0x314);
      uStack_100._0_4_ = 0;
      FUN_10a749840(param_1,param_2,plVar11,&uStack_100);
      (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
      uStack_120 = *(undefined8 *)(param_1 + 0x290);
      plStack_118 = *(long **)(param_1 + 0x298);
      if (*(long *)(param_1 + 0x298) != 0) {
        plVar24 = (long *)(*(long *)(param_1 + 0x298) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar5) {
            *plVar24 = *plVar24 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_100._0_4_ = 0;
      uStack_100._4_4_ = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      FUN_10a756a10(&uStack_100,&uStack_120,auStack_110,1);
      FUN_10a7494fc(param_2,&uStack_100);
      puStack_128 = &uStack_100;
      FUN_10a18ba48(&puStack_128);
      plVar24 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar13 = plStack_118 + 1;
        do {
          lVar10 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
        }
      }
      plVar24 = param_2 + 4;
      FUN_10a5dfd94(plVar24,*(undefined8 *)(param_1 + 0x260));
      plVar13 = param_2 + 4;
      FUN_10a01eacc(plVar13,plVar24);
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c16648);
      if (lStack_150 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(lStack_150 + 0x268);
      }
      FUN_10a5e17a8(plVar13,&uStack_100,uVar17,&UNK_10e4ac8a8);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c166d8);
      FUN_10a01671c(plVar13,&uStack_100,param_1 + 0x318);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c166f0);
      FUN_10a01671c(plVar13,&uStack_100,param_1 + 0x31c);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c16708);
      FUN_10a015dcc(plVar13,&uStack_100,&fStack_140);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      if (*(long *)(param_1 + 0x170) == 0) {
        ppuVar14 = &PTR___tlv_bootstrap_11340dee8;
        (*(code *)PTR___tlv_bootstrap_11340dee8)();
        puVar20 = *ppuVar14;
        if (puVar20 == (undefined *)0x0) {
          FUN_10a3ca004();
          pbVar15 = (byte *)0x113836510;
          FUN_10ad0621c();
          uVar22 = (ulong)(*pbVar15 >> 4 & 4);
          puVar20 = ppuVar14[uVar22 + 7];
          if (puVar20 == (undefined *)0x0) {
            FUN_10a3ca05c(ppuVar14,uVar22);
            puVar20 = ppuVar14[uVar22 + 7];
            uStack_100._0_4_ = 0xf646d35;
            uStack_f8 = 0x26;
            goto joined_r0x00010a74a86c;
          }
        }
      }
      else {
        puVar20 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x260);
        uStack_100._0_4_ = 0xf653c20;
        uStack_f8 = 0x21;
joined_r0x00010a74a86c:
        if (puVar20 == (undefined *)0x0) {
          uStack_f4 = 0;
          uStack_100._4_4_ = 1;
          FUN_10a0edfc4(&uStack_100);
          goto LAB_10a74b130;
        }
      }
      uStack_100._0_4_ = 0x3f800000;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_100._4_4_ = 0;
      uStack_f8 = 0;
      uStack_ec = 0x3f800000;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_cc = 0;
      uStack_d4 = 0;
      uStack_d8 = 0x3f800000;
      uStack_c4 = 0x3f800000;
      (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(puVar20 + 0x208),plVar24,&uStack_100,3)
      ;
      (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
      uStack_f8 = (uint)*(undefined8 *)(param_1 + 0x2d8);
      uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2d8) >> 0x20);
      uStack_100._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0x2d0);
      uStack_100._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 0x2d0) >> 0x20);
      if (*(long *)(param_1 + 0x2d8) != 0) {
        plVar24 = (long *)(*(long *)(param_1 + 0x2d8) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar5) {
            *plVar24 = *plVar24 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_e8 = *(undefined8 *)(param_1 + 0x2f8);
      uStack_f0 = (undefined4)*(undefined8 *)(param_1 + 0x2f0);
      uStack_ec = (int)((ulong)*(undefined8 *)(param_1 + 0x2f0) >> 0x20);
      if (*(long *)(param_1 + 0x2f8) != 0) {
        plVar24 = (long *)(*(long *)(param_1 + 0x2f8) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar5) {
            *plVar24 = *plVar24 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_120 = 0;
      plStack_118 = (long *)0x0;
      auStack_110[0] = 0;
      FUN_10a756a10(&uStack_120,&uStack_100,&uStack_e0,2);
      FUN_10a7494fc(param_2,&uStack_120);
      puStack_128 = &uStack_120;
      FUN_10a18ba48(&puStack_128);
      lVar10 = 0x10;
      do {
        func_0x00010a0523dc((long)&uStack_100 + lVar10);
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != -0x10);
      uStack_120 = 0x3f800000;
      plVar24 = param_2 + 4;
      FUN_10a5dfd94(plVar24,*(undefined8 *)(param_1 + 0x240));
      plVar13 = param_2 + 4;
      FUN_10a01eacc(plVar13,plVar24);
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c16648);
      if (*plVar11 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(*plVar11 + 0x268);
      }
      FUN_10a5e17a8(plVar13,&uStack_100,uVar17,&UNK_10e4ac8a8);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c16660);
      if (*plVar12 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(*plVar12 + 0x268);
      }
      FUN_10a5e17a8(plVar13,&uStack_100,uVar17,&UNK_10e4ac8a8);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c16678);
      func_0x00010a01f3c4(plVar13,&uStack_100,param_1 + 800);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c16690);
      FUN_10a015dcc(plVar13,&uStack_100,param_1 + 0x32c);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c166a8);
      FUN_10a022468(plVar13,&uStack_100,&uStack_120);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      if (*(long *)(param_1 + 0x170) == 0) {
        ppuVar14 = &PTR___tlv_bootstrap_11340dee8;
        (*(code *)PTR___tlv_bootstrap_11340dee8)();
        puVar20 = *ppuVar14;
        if (puVar20 == (undefined *)0x0) {
          FUN_10a3ca004();
          pbVar15 = (byte *)0x113836510;
          FUN_10ad0621c();
          uVar22 = (ulong)(*pbVar15 >> 4 & 4);
          puVar20 = ppuVar14[uVar22 + 7];
          if (puVar20 == (undefined *)0x0) {
            FUN_10a3ca05c(ppuVar14,uVar22);
            puVar20 = ppuVar14[uVar22 + 7];
            uStack_100._0_4_ = 0xf646d35;
            uStack_f8 = 0x26;
            goto joined_r0x00010a74ab50;
          }
        }
      }
      else {
        puVar20 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x260);
        uStack_100._0_4_ = 0xf653c20;
        uStack_f8 = 0x21;
joined_r0x00010a74ab50:
        if (puVar20 == (undefined *)0x0) {
          uStack_f4 = 0;
          uStack_100._4_4_ = 1;
          FUN_10a0edfc4(&uStack_100);
          goto LAB_10a74b130;
        }
      }
      uStack_100._0_4_ = 0x3f800000;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_100._4_4_ = 0;
      uStack_f8 = 0;
      uStack_ec = 0x3f800000;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_cc = 0;
      uStack_d4 = 0;
      uStack_d8 = 0x3f800000;
      uStack_c4 = 0x3f800000;
      (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(puVar20 + 0x208),plVar24,&uStack_100,3)
      ;
      (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
      (**(code **)(*param_2 + 0x98))(param_2,&uStack_160,0,0,param_1 + 0x290,0,0);
      plStack_118 = plStack_158;
      uStack_120 = uStack_160;
      if (plStack_158 != (long *)0x0) {
        plVar12 = plStack_158 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_100._0_4_ = 0;
      uStack_100._4_4_ = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      FUN_10a756a10(&uStack_100,&uStack_120,auStack_110,1);
      FUN_10a7494fc(param_2,&uStack_100);
      puStack_128 = &uStack_100;
      FUN_10a18ba48(&puStack_128);
      plVar12 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar24 = plStack_118 + 1;
        do {
          lVar10 = *plVar24;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar5) {
            *plVar24 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      uStack_120 = 0x3f80000000000000;
      plVar12 = param_2 + 4;
      FUN_10a5dfd94(plVar12,*(undefined8 *)(param_1 + 0x250));
      plVar24 = param_2 + 4;
      FUN_10a01eacc(plVar24,plVar12);
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c16648);
      if (*plVar1 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(*plVar1 + 0x268);
      }
      FUN_10a5e17a8(plVar24,&uStack_100,uVar17,&UNK_10e4ac8a8);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c16660);
      if (*plVar2 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(*plVar2 + 0x268);
      }
      FUN_10a5e17a8(plVar24,&uStack_100,uVar17,&UNK_10e4ac8a8);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c166c0);
      if (*plVar11 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(*plVar11 + 0x268);
      }
      FUN_10a5e17a8(plVar24,&uStack_100,uVar17,&UNK_10e4ac8a8);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c16678);
      func_0x00010a01f3c4(plVar24,&uStack_100,param_1 + 800);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c16690);
      FUN_10a015dcc(plVar24,&uStack_100,param_1 + 0x32c);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&PTR_DAT_110c166a8);
      FUN_10a022468(plVar24,&uStack_100,&uStack_120);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
      }
      if (*(long *)(param_1 + 0x170) == 0) {
        ppuVar14 = &PTR___tlv_bootstrap_11340dee8;
        (*(code *)PTR___tlv_bootstrap_11340dee8)();
        puVar20 = *ppuVar14;
        if (puVar20 == (undefined *)0x0) {
          FUN_10a3ca004();
          pbVar15 = (byte *)0x113836510;
          FUN_10ad0621c();
          uVar22 = (ulong)(*pbVar15 >> 4 & 4);
          puVar20 = ppuVar14[uVar22 + 7];
          if (puVar20 == (undefined *)0x0) {
            FUN_10a3ca05c(ppuVar14,uVar22);
            puVar20 = ppuVar14[uVar22 + 7];
            uStack_100._0_4_ = 0xf646d35;
            uStack_f8 = 0x26;
            goto joined_r0x00010a74ae9c;
          }
        }
      }
      else {
        puVar20 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x260);
        uStack_100._0_4_ = 0xf653c20;
        uStack_f8 = 0x21;
joined_r0x00010a74ae9c:
        if (puVar20 == (undefined *)0x0) {
          uStack_f4 = 0;
          uStack_100._4_4_ = 1;
          FUN_10a0edfc4(&uStack_100);
          goto LAB_10a74b130;
        }
      }
      uStack_100._0_4_ = 0x3f800000;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_100._4_4_ = 0;
      uStack_f8 = 0;
      uStack_ec = 0x3f800000;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_cc = 0;
      uStack_d4 = 0;
      uStack_d8 = 0x3f800000;
      uStack_c4 = 0x3f800000;
      (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(puVar20 + 0x208),plVar12,&uStack_100,3)
      ;
      (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
      plVar11 = plStack_168;
      if (plStack_168 != (long *)0x0) {
        plVar12 = plStack_168 + 1;
        do {
          lVar10 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_168 + 0x10))(plStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_158;
      if (plStack_158 != (long *)0x0) {
        plVar12 = plStack_158 + 1;
        do {
          lVar10 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar12 = plStack_148 + 1;
        do {
          lVar10 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      goto LAB_10a74afac;
    }
  }
  FUN_10a0edfc4(&uStack_100);
LAB_10a74b130:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a74b134);
  (*pcVar6)();
}



/* Entry: 10a74b298; end: 10a74b303;  */

byte FUN_10a74b298(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = *(long *)(param_1 + 0x168);
  FUN_10a74b304();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(lVar1 + 500);
    *(int *)(param_1 + 0x1f0) = *(int *)(lVar1 + 0x1f0) + 1;
    if ((*(byte *)(lVar1 + 0x6fa) & 1) == 0) {
      FUN_10a42fc94(lVar1,1);
      bVar2 = *(byte *)(lVar1 + 0x6fa);
    }
    else {
      bVar2 = 1;
    }
  }
  return bVar2 & 1;
}



/* Entry: 10a74b304; end: 10a74b3a3;  */

void FUN_10a74b304(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x158);
  do {
    if (lVar2 == param_1 + 0x150) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f672c1a,&UNK_10f672c6b,0x225,&UNK_10f672caf);
      }
      return;
    }
    if (*(long *)(lVar2 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(lVar2 + 0x10) + 0xb0);
      (**(code **)(*plVar1 + 0x18))(plVar1,0x49f6491c8e4b2468);
      if (plVar1 != (long *)0x0) {
        return;
      }
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* Entry: 10a74b3a4; end: 10a74b4df;  */

/* WARNING: Type propagation algorithm not settling */

undefined ***** FUN_10a74b3a4(long param_1)

{
  long ****pppplVar1;
  long ****pppplVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined *****pppppuVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *****pppppuVar10;
  undefined *****pppppuVar11;
  long ***ppplVar12;
  long lVar13;
  undefined *puVar14;
  undefined ****ppppuVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined ****ppppuVar18;
  undefined ****ppppuVar19;
  undefined8 uStack_208;
  long *plStack_200;
  undefined1 auStack_1f8 [7];
  char cStack_1f1;
  undefined8 *apuStack_1f0 [7];
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  undefined8 *apuStack_1a0 [7];
  undefined ****ppppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  long ****apppplStack_150 [7];
  long lStack_118;
  undefined *****pppppuStack_110;
  undefined1 auStack_108 [8];
  long ****apppplStack_100 [7];
  long lStack_c8;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined ****ppppuStack_58;
  undefined4 auStack_50 [2];
  undefined *****pppppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x1f8),&PTR_DAT_110bcf9d0,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  puVar8 = (undefined8 *)0x8;
  __Znwm();
  *puVar8 = &PTR_FUN_110bc3560;
  plVar9 = *(long **)(param_1 + 0x208);
  *(undefined8 **)(param_1 + 0x208) = puVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  auStack_50[0] = 5;
  pppppuVar10 = (undefined *****)0x28;
  __Znwm();
  *(undefined4 *)(pppppuVar10 + 4) = 0x4c45444f;
  lStack_38 = -0x7fffffffffffffd8;
  uStack_40 = 0x24;
  pppppuVar10[1] = (undefined ****)0x4f4e5f52554c425f;
  *pppppuVar10 = (undefined ****)0x45524f43534e454c;
  pppppuVar10[3] = (undefined ****)0x4d5f4e4f4954414d;
  pppppuVar10[2] = (undefined ****)0x495453455f455349;
  *(undefined1 *)((long)pppppuVar10 + 0x24) = 0;
  uStack_30 = 2;
  uStack_68 = 0;
  uStack_60 = 0;
  pppuStack_70 = (undefined ***)0x0;
  pppppuStack_48 = pppppuVar10;
  FUN_10a2e1520(&pppuStack_70,auStack_50,&lStack_28,1);
  pppppuVar10 = &ppppuStack_58;
  ppppuStack_58 = &pppuStack_70;
  func_0x00010a2e17b4();
  if (lStack_38 < 0) {
    pppppuVar10 = pppppuStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppppuVar10;
  }
  ___stack_chk_fail();
  if (lStack_38 < 0) {
    __ZdlPv(pppppuStack_48);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_168 = pppppuVar10[0x2e];
  FUN_10a761f14(&lStack_118,&puStack_1b8,&ppppuStack_168);
  FUN_10a74bcf4(pppppuVar10 + 0x44,&lStack_118);
  pppppuVar11 = pppppuStack_110;
  if (pppppuStack_110 != (undefined *****)0x0) {
    pppplVar1 = (long ****)(pppppuStack_110 + 1);
    do {
      ppplVar12 = *pppplVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar7) {
        *pppplVar1 = (long ***)((long)ppplVar12 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppplVar12 == (long ***)0x0) {
      (*(code *)(*pppppuStack_110)[2])(pppppuStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
    }
  }
  pppuVar17 = pppppuVar10[0x2e][0x111];
  (*(code *)(*pppppuVar10)[10])(&lStack_118,pppppuVar10);
  pppppuVar11 = pppppuStack_110;
  lVar13 = lStack_118;
  if (pppppuStack_110 != (undefined *****)0x0) {
    pppplVar1 = (long ****)(pppppuStack_110 + 1);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar7) {
        *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppppuStack_110 != (undefined *****)0x0) {
      pppplVar2 = (long ****)(pppppuStack_110 + 1);
      do {
        ppplVar12 = *pppplVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
        if (bVar7) {
          *pppplVar2 = (long ***)((long)ppplVar12 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppplVar12 == (long ***)0x0) {
        (*(code *)(*pppppuStack_110)[2])(pppppuStack_110);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuStack_110);
      }
    }
    pppplVar2 = (long ****)(pppppuStack_110 + 2);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
      if (bVar7) {
        *pppplVar2 = (long ***)((long)*pppplVar2 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      ppplVar12 = *pppplVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar7) {
        *pppplVar1 = (long ***)((long)ppplVar12 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppplVar12 == (long ***)0x0) {
      (*(code *)(*pppppuStack_110)[2])(pppppuStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuStack_110);
    }
  }
  puVar8 = (undefined8 *)0x28;
  __Znwm();
  lStack_1a8 = -0x7fffffffffffffd8;
  plStack_1b0 = (long *)0x24;
  *(undefined4 *)(puVar8 + 4) = 0x4c45444f;
  puVar8[1] = 0x4f4e5f52554c425f;
  *puVar8 = 0x45524f43534e454c;
  puVar8[3] = 0x4d5f4e4f4954414d;
  puVar8[2] = 0x495453455f455349;
  *(undefined1 *)((long)puVar8 + 0x24) = 0;
  if (pppppuStack_110 == (undefined *****)0x0) {
    apppplStack_100[0] = (long ****)0x0;
  }
  else {
    pppplVar1 = (long ****)(pppppuStack_110 + 2);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar7) {
        *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    apppplStack_100[0] = (long ****)pppppuStack_110;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar7) {
        *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar7) {
        *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar7) {
        *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  pppppuStack_110 = (undefined *****)&PTR_FUN_110c16ca8;
  lStack_118 = 0x10a762050;
  lStack_158 = lVar13;
  ppuStack_160 = &PTR_FUN_110c16cc0;
  ppppuStack_168 = (undefined ****)FUN_10a762158;
  puStack_1b8 = puVar8;
  apppplStack_150[0] = apppplStack_100[0];
  func_0x000107c2b054(&uStack_208,&UNK_10f672059);
  FUN_10a76e51c(pppuVar17,&puStack_1b8,3,&lStack_118,&ppppuStack_168,&uStack_208);
  if (cStack_1f1 < '\0') {
    __ZdlPv(uStack_208);
  }
  (*(code *)*ppuStack_160)(&ppuStack_160);
  if (pppppuVar11 == (undefined *****)0x0) {
    (*(code *)*pppppuStack_110)(&pppppuStack_110);
  }
  else {
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
    (*(code *)*pppppuStack_110)(&pppppuStack_110);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
  }
  if (lStack_1a8 < 0) {
    __ZdlPv(puStack_1b8);
  }
  if (pppppuVar11 != (undefined *****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
  }
  FUN_10ab451f4(&lStack_118,0,&UNK_10f672b93,0x16,&UNK_10f672baa,0x12,&UNK_10f674996,0x14,1);
  func_0x00010a015c50(pppppuVar10 + 0x48,&lStack_118);
  pppuVar17 = pppppuVar10[0x48][0x45];
  if (pppuVar17 == pppppuVar10[0x48][0x46]) {
    ppuVar16 = (undefined **)0x0;
  }
  else {
    ppuVar16 = *pppuVar17;
  }
  func_0x00010a3326b8(ppuVar16 + 0x43,1);
  func_0x00010a332748((long)ppuVar16 + 0x219,0);
  func_0x00010a332700((long)ppuVar16 + 0x21a,0);
  func_0x00010a3325d0(ppuVar16,0);
  *(undefined4 *)((long)ppuVar16 + 0x21e) = 0x1010101;
  func_0x000107c2b074(&ppppuStack_168,&PTR_DAT_110c16630);
  FUN_10a047898(ppuVar16 + 0x40,&ppppuStack_168,&ppppuStack_168);
  if (lStack_158 < 0) {
    __ZdlPv(ppppuStack_168);
  }
  func_0x000107c2b07c(&ppppuStack_168,&UNK_10f672bbd);
  FUN_10a047898(ppuVar16 + 0x40,&ppppuStack_168,&ppppuStack_168);
  if (lStack_158 < 0) {
    __ZdlPv(ppppuStack_168);
  }
  FUN_10ab451f4(&ppppuStack_168,0,&UNK_10f672b93,0x16,&UNK_10f672baa,0x12,&UNK_10f674996,0x14,1);
  func_0x00010a015c50(pppppuVar10 + 0x4a,&ppppuStack_168);
  pppuVar17 = pppppuVar10[0x4a][0x45];
  if (pppuVar17 == pppppuVar10[0x4a][0x46]) {
    ppuVar16 = (undefined **)0x0;
  }
  else {
    ppuVar16 = *pppuVar17;
  }
  func_0x00010a3326b8(ppuVar16 + 0x43,1);
  func_0x00010a332748((long)ppuVar16 + 0x219,0);
  func_0x00010a332700((long)ppuVar16 + 0x21a,0);
  func_0x00010a3325d0(ppuVar16,0);
  *(undefined4 *)((long)ppuVar16 + 0x21e) = 0x1010101;
  FUN_10ab451f4(&puStack_1b8,0,&UNK_10f672bd0,0x17,&UNK_10f672be8,0x13,&UNK_10f6749c6,0x15,1);
  func_0x00010a015c50(pppppuVar10 + 0x4c,&puStack_1b8);
  pppuVar17 = pppppuVar10[0x4c][0x45];
  if (pppuVar17 == pppppuVar10[0x4c][0x46]) {
    ppuVar16 = (undefined **)0x0;
  }
  else {
    ppuVar16 = *pppuVar17;
  }
  func_0x00010a3326b8(ppuVar16 + 0x43,1);
  func_0x00010a332748((long)ppuVar16 + 0x219,0);
  func_0x00010a332700((long)ppuVar16 + 0x21a,0);
  func_0x00010a3325d0(ppuVar16,0);
  *(undefined4 *)((long)ppuVar16 + 0x21e) = 0x1010101;
  FUN_10ab451f4(&uStack_208,0,&UNK_10f672bfc,0x10,&UNK_10f672c0d,0xc,&UNK_10f6749dc,0xb,1);
  func_0x00010a015c50(pppppuVar10 + 0x4e,&uStack_208);
  pppuVar17 = pppppuVar10[0x4e][0x45];
  if (pppuVar17 == pppppuVar10[0x4e][0x46]) {
    ppuVar16 = (undefined **)0x0;
  }
  else {
    ppuVar16 = *pppuVar17;
  }
  func_0x00010a3326b8(ppuVar16 + 0x43,1);
  func_0x00010a332748((long)ppuVar16 + 0x219,0);
  func_0x00010a332700((long)ppuVar16 + 0x21a,0);
  puVar8 = (undefined8 *)0x0;
  func_0x00010a3325d0(ppuVar16);
  *(undefined4 *)((long)ppuVar16 + 0x21e) = 0x1010101;
  FUN_10a044790(auStack_1f8);
  (*(code *)*apuStack_1f0[0])(apuStack_1f0);
  if (plStack_200 != (long *)0x0) {
    plVar9 = plStack_200 + 1;
    do {
      lVar13 = *plVar9;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_200 + 0x10))(plStack_200);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_200);
    }
  }
  FUN_10a044790(&lStack_1a8);
  (*(code *)*apuStack_1a0[0])(apuStack_1a0);
  plVar9 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    plVar3 = plStack_1b0 + 1;
    do {
      lVar13 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  FUN_10a044790(&lStack_158);
  (*(code *)*apppplStack_150[0])(apppplStack_150);
  ppuVar16 = ppuStack_160;
  if (ppuStack_160 != (undefined **)0x0) {
    ppuVar4 = ppuStack_160 + 1;
    do {
      puVar14 = *ppuVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar7) {
        *ppuVar4 = puVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuStack_160 + 0x10))(ppuStack_160);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
    }
  }
  FUN_10a044790(auStack_108);
  pppppuVar10 = (undefined *****)apppplStack_100;
  (*(code *)*apppplStack_100[0])();
  pppppuVar11 = pppppuStack_110;
  if (pppppuStack_110 != (undefined *****)0x0) {
    pppppuVar5 = pppppuStack_110 + 1;
    do {
      ppppuVar15 = *pppppuVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppuVar5,0x10);
      if (bVar7) {
        *pppppuVar5 = (undefined ****)((long)ppppuVar15 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppuVar15 == (undefined ****)0x0) {
      (*(code *)(*pppppuStack_110)[2])(pppppuStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppuVar10 = pppppuVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    func_0x00010a015cb4(&puStack_1b8);
    func_0x00010a015cb4(&ppppuStack_168);
    func_0x00010a015cb4(&lStack_118);
    __Unwind_Resume();
    ppppuVar19 = (undefined ****)puVar8[1];
    ppppuVar18 = (undefined ****)*puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    ppppuVar15 = pppppuVar10[1];
    pppppuVar10[1] = ppppuVar19;
    *pppppuVar10 = ppppuVar18;
    if (ppppuVar15 != (undefined ****)0x0) {
      ppppuVar18 = ppppuVar15 + 1;
      do {
        pppuVar17 = *ppppuVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar18,0x10);
        if (bVar7) {
          *ppppuVar18 = (undefined ***)((long)pppuVar17 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppuVar17 == (undefined ***)0x0) {
        (*(code *)(*ppppuVar15)[2])(ppppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar15);
      }
    }
    return pppppuVar10;
  }
  return pppppuVar10;
}



/* Entry: 10a74b4e0; end: 10a74bcf3;  */

long **** FUN_10a74b4e0(long *param_1)

{
  undefined ****ppppuVar1;
  undefined ****ppppuVar2;
  long *plVar3;
  undefined **ppuVar4;
  long ****pppplVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  undefined ****ppppuVar9;
  undefined8 *puVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long *plVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  long ***ppplVar16;
  long **pplVar17;
  long lVar18;
  undefined8 uVar19;
  long ***ppplVar20;
  long ***ppplVar21;
  undefined8 uStack_198;
  long *plStack_190;
  undefined1 auStack_188 [7];
  char cStack_181;
  undefined8 *apuStack_180 [7];
  undefined8 *puStack_148;
  long *plStack_140;
  long lStack_138;
  undefined8 *apuStack_130 [7];
  code *pcStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  long ***appplStack_e0 [7];
  long lStack_a8;
  undefined ****ppppuStack_a0;
  undefined1 auStack_98 [8];
  long ***appplStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_f8 = (code *)param_1[0x2e];
  FUN_10a761f14(&lStack_a8,&puStack_148,&pcStack_f8);
  FUN_10a74bcf4(param_1 + 0x44,&lStack_a8);
  ppppuVar9 = ppppuStack_a0;
  if (ppppuStack_a0 != (undefined ****)0x0) {
    ppppuVar1 = ppppuStack_a0 + 1;
    do {
      pppuVar14 = *ppppuVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)pppuVar14 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppuVar14 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_a0)[2])(ppppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
    }
  }
  uVar19 = *(undefined8 *)(param_1[0x2e] + 0x888);
  (**(code **)(*param_1 + 0x50))(&lStack_a8,param_1);
  ppppuVar9 = ppppuStack_a0;
  lVar18 = lStack_a8;
  if (ppppuStack_a0 != (undefined ****)0x0) {
    ppppuVar1 = ppppuStack_a0 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppuStack_a0 != (undefined ****)0x0) {
      ppppuVar2 = ppppuStack_a0 + 1;
      do {
        pppuVar14 = *ppppuVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar2,0x10);
        if (bVar7) {
          *ppppuVar2 = (undefined ***)((long)pppuVar14 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppuVar14 == (undefined ***)0x0) {
        (*(code *)(*ppppuStack_a0)[2])(ppppuStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuStack_a0);
      }
    }
    ppppuVar2 = ppppuStack_a0 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar2,0x10);
      if (bVar7) {
        *ppppuVar2 = (undefined ***)((long)*ppppuVar2 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      pppuVar14 = *ppppuVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)pppuVar14 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppuVar14 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_a0)[2])(ppppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuStack_a0);
    }
  }
  puVar10 = (undefined8 *)0x28;
  __Znwm();
  lStack_138 = -0x7fffffffffffffd8;
  plStack_140 = (long *)0x24;
  *(undefined4 *)(puVar10 + 4) = 0x4c45444f;
  puVar10[1] = 0x4f4e5f52554c425f;
  *puVar10 = 0x45524f43534e454c;
  puVar10[3] = 0x4d5f4e4f4954414d;
  puVar10[2] = 0x495453455f455349;
  *(undefined1 *)((long)puVar10 + 0x24) = 0;
  if (ppppuStack_a0 == (undefined ****)0x0) {
    appplStack_90[0] = (long ***)0x0;
  }
  else {
    ppppuVar1 = ppppuStack_a0 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    appplStack_90[0] = (long ***)ppppuStack_a0;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppuStack_a0 = (undefined ****)&PTR_FUN_110c16ca8;
  lStack_a8 = 0x10a762050;
  lStack_e8 = lVar18;
  ppuStack_f0 = &PTR_FUN_110c16cc0;
  pcStack_f8 = FUN_10a762158;
  puStack_148 = puVar10;
  appplStack_e0[0] = appplStack_90[0];
  func_0x000107c2b054(&uStack_198,&UNK_10f672059);
  FUN_10a76e51c(uVar19,&puStack_148,3,&lStack_a8,&pcStack_f8,&uStack_198);
  if (cStack_181 < '\0') {
    __ZdlPv(uStack_198);
  }
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  if (ppppuVar9 == (undefined ****)0x0) {
    (*(code *)*ppppuStack_a0)(&ppppuStack_a0);
  }
  else {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
    (*(code *)*ppppuStack_a0)(&ppppuStack_a0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
  }
  if (lStack_138 < 0) {
    __ZdlPv(puStack_148);
  }
  if (ppppuVar9 != (undefined ****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
  }
  FUN_10ab451f4(&lStack_a8,0,&UNK_10f672b93,0x16,&UNK_10f672baa,0x12,&UNK_10f674996,0x14,1);
  func_0x00010a015c50(param_1 + 0x48,&lStack_a8);
  plVar13 = *(long **)(param_1[0x48] + 0x228);
  if (plVar13 == *(long **)(param_1[0x48] + 0x230)) {
    lVar18 = 0;
  }
  else {
    lVar18 = *plVar13;
  }
  func_0x00010a3326b8(lVar18 + 0x218,1);
  func_0x00010a332748(lVar18 + 0x219,0);
  func_0x00010a332700(lVar18 + 0x21a,0);
  func_0x00010a3325d0(lVar18,0);
  *(undefined4 *)(lVar18 + 0x21e) = 0x1010101;
  func_0x000107c2b074(&pcStack_f8,&PTR_DAT_110c16630);
  FUN_10a047898(lVar18 + 0x200,&pcStack_f8,&pcStack_f8);
  if (lStack_e8 < 0) {
    __ZdlPv(pcStack_f8);
  }
  func_0x000107c2b07c(&pcStack_f8,&UNK_10f672bbd);
  FUN_10a047898(lVar18 + 0x200,&pcStack_f8,&pcStack_f8);
  if (lStack_e8 < 0) {
    __ZdlPv(pcStack_f8);
  }
  FUN_10ab451f4(&pcStack_f8,0,&UNK_10f672b93,0x16,&UNK_10f672baa,0x12,&UNK_10f674996,0x14,1);
  func_0x00010a015c50(param_1 + 0x4a,&pcStack_f8);
  plVar13 = *(long **)(param_1[0x4a] + 0x228);
  if (plVar13 == *(long **)(param_1[0x4a] + 0x230)) {
    lVar18 = 0;
  }
  else {
    lVar18 = *plVar13;
  }
  func_0x00010a3326b8(lVar18 + 0x218,1);
  func_0x00010a332748(lVar18 + 0x219,0);
  func_0x00010a332700(lVar18 + 0x21a,0);
  func_0x00010a3325d0(lVar18,0);
  *(undefined4 *)(lVar18 + 0x21e) = 0x1010101;
  FUN_10ab451f4(&puStack_148,0,&UNK_10f672bd0,0x17,&UNK_10f672be8,0x13,&UNK_10f6749c6,0x15,1);
  func_0x00010a015c50(param_1 + 0x4c,&puStack_148);
  plVar13 = *(long **)(param_1[0x4c] + 0x228);
  if (plVar13 == *(long **)(param_1[0x4c] + 0x230)) {
    lVar18 = 0;
  }
  else {
    lVar18 = *plVar13;
  }
  func_0x00010a3326b8(lVar18 + 0x218,1);
  func_0x00010a332748(lVar18 + 0x219,0);
  func_0x00010a332700(lVar18 + 0x21a,0);
  func_0x00010a3325d0(lVar18,0);
  *(undefined4 *)(lVar18 + 0x21e) = 0x1010101;
  FUN_10ab451f4(&uStack_198,0,&UNK_10f672bfc,0x10,&UNK_10f672c0d,0xc,&UNK_10f6749dc,0xb,1);
  func_0x00010a015c50(param_1 + 0x4e,&uStack_198);
  plVar13 = *(long **)(param_1[0x4e] + 0x228);
  if (plVar13 == *(long **)(param_1[0x4e] + 0x230)) {
    lVar18 = 0;
  }
  else {
    lVar18 = *plVar13;
  }
  func_0x00010a3326b8(lVar18 + 0x218,1);
  func_0x00010a332748(lVar18 + 0x219,0);
  func_0x00010a332700(lVar18 + 0x21a,0);
  puVar10 = (undefined8 *)0x0;
  func_0x00010a3325d0(lVar18);
  *(undefined4 *)(lVar18 + 0x21e) = 0x1010101;
  FUN_10a044790(auStack_188);
  (*(code *)*apuStack_180[0])(apuStack_180);
  if (plStack_190 != (long *)0x0) {
    plVar13 = plStack_190 + 1;
    do {
      lVar18 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_190 + 0x10))(plStack_190);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_190);
    }
  }
  FUN_10a044790(&lStack_138);
  (*(code *)*apuStack_130[0])(apuStack_130);
  plVar13 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    plVar3 = plStack_140 + 1;
    do {
      lVar18 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  FUN_10a044790(&lStack_e8);
  (*(code *)*appplStack_e0[0])(appplStack_e0);
  ppuVar8 = ppuStack_f0;
  if (ppuStack_f0 != (undefined **)0x0) {
    ppuVar4 = ppuStack_f0 + 1;
    do {
      puVar15 = *ppuVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar7) {
        *ppuVar4 = puVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
    }
  }
  FUN_10a044790(auStack_98);
  pppplVar11 = appplStack_90;
  (*(code *)*appplStack_90[0])();
  pppplVar12 = (long ****)ppppuStack_a0;
  if ((long ****)ppppuStack_a0 != (long ****)0x0) {
    pppplVar5 = (long ****)(ppppuStack_a0 + 1);
    do {
      ppplVar16 = *pppplVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar5,0x10);
      if (bVar7) {
        *pppplVar5 = (long ***)((long)ppplVar16 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppplVar16 == (long ***)0x0) {
      (*(code *)(*ppppuStack_a0)[2])(ppppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppplVar11 = pppplVar12;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a015cb4(&puStack_148);
    func_0x00010a015cb4(&pcStack_f8);
    func_0x00010a015cb4(&lStack_a8);
    __Unwind_Resume();
    ppplVar21 = (long ***)puVar10[1];
    ppplVar20 = (long ***)*puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    ppplVar16 = pppplVar11[1];
    pppplVar11[1] = ppplVar21;
    *pppplVar11 = ppplVar20;
    if (ppplVar16 != (long ***)0x0) {
      ppplVar20 = ppplVar16 + 1;
      do {
        pplVar17 = *ppplVar20;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppplVar20,0x10);
        if (bVar7) {
          *ppplVar20 = (long **)((long)pplVar17 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pplVar17 == (long **)0x0) {
        (*(code *)(*ppplVar16)[2])(ppplVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar16);
      }
    }
    return pppplVar11;
  }
  return pppplVar11;
}



/* Entry: 10a74bcf4; end: 10a74bd57;  */

undefined8 * FUN_10a74bcf4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a74bd58; end: 10a74bd77;  */

long **** FUN_10a74bd58(long param_1)

{
  undefined ****ppppuVar1;
  undefined ****ppppuVar2;
  long *plVar3;
  undefined **ppuVar4;
  long ****pppplVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  undefined ****ppppuVar9;
  undefined8 *puVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long *plVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  long ***ppplVar16;
  long **pplVar17;
  long lVar18;
  undefined8 uVar19;
  long ***ppplVar20;
  long ***ppplVar21;
  undefined8 uStack_198;
  long *plStack_190;
  undefined1 auStack_188 [7];
  char cStack_181;
  undefined8 *apuStack_180 [7];
  undefined8 *puStack_148;
  long *plStack_140;
  long lStack_138;
  undefined8 *apuStack_130 [7];
  code *pcStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  long ***appplStack_e0 [7];
  long lStack_a8;
  undefined ****ppppuStack_a0;
  undefined1 auStack_98 [8];
  long ***appplStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_f8 = *(code **)(param_1 + 0x108);
  FUN_10a761f14(&lStack_a8,&puStack_148,&pcStack_f8);
  FUN_10a74bcf4(param_1 + 0x1b8,&lStack_a8);
  ppppuVar9 = ppppuStack_a0;
  if (ppppuStack_a0 != (undefined ****)0x0) {
    ppppuVar1 = ppppuStack_a0 + 1;
    do {
      pppuVar14 = *ppppuVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)pppuVar14 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppuVar14 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_a0)[2])(ppppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
    }
  }
  uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x108) + 0x888);
  (**(code **)(*(long *)(param_1 + -0x68) + 0x50))(&lStack_a8,(long *)(param_1 + -0x68));
  ppppuVar9 = ppppuStack_a0;
  lVar18 = lStack_a8;
  if (ppppuStack_a0 != (undefined ****)0x0) {
    ppppuVar1 = ppppuStack_a0 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppuStack_a0 != (undefined ****)0x0) {
      ppppuVar2 = ppppuStack_a0 + 1;
      do {
        pppuVar14 = *ppppuVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar2,0x10);
        if (bVar7) {
          *ppppuVar2 = (undefined ***)((long)pppuVar14 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppuVar14 == (undefined ***)0x0) {
        (*(code *)(*ppppuStack_a0)[2])(ppppuStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuStack_a0);
      }
    }
    ppppuVar2 = ppppuStack_a0 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar2,0x10);
      if (bVar7) {
        *ppppuVar2 = (undefined ***)((long)*ppppuVar2 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      pppuVar14 = *ppppuVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)pppuVar14 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppuVar14 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_a0)[2])(ppppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuStack_a0);
    }
  }
  puVar10 = (undefined8 *)0x28;
  __Znwm();
  lStack_138 = -0x7fffffffffffffd8;
  plStack_140 = (long *)0x24;
  *(undefined4 *)(puVar10 + 4) = 0x4c45444f;
  puVar10[1] = 0x4f4e5f52554c425f;
  *puVar10 = 0x45524f43534e454c;
  puVar10[3] = 0x4d5f4e4f4954414d;
  puVar10[2] = 0x495453455f455349;
  *(undefined1 *)((long)puVar10 + 0x24) = 0;
  if (ppppuStack_a0 == (undefined ****)0x0) {
    appplStack_90[0] = (long ***)0x0;
  }
  else {
    ppppuVar1 = ppppuStack_a0 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    appplStack_90[0] = (long ***)ppppuStack_a0;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar7) {
        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppuStack_a0 = (undefined ****)&PTR_FUN_110c16ca8;
  lStack_a8 = 0x10a762050;
  lStack_e8 = lVar18;
  ppuStack_f0 = &PTR_FUN_110c16cc0;
  pcStack_f8 = FUN_10a762158;
  puStack_148 = puVar10;
  appplStack_e0[0] = appplStack_90[0];
  func_0x000107c2b054(&uStack_198,&UNK_10f672059);
  FUN_10a76e51c(uVar19,&puStack_148,3,&lStack_a8,&pcStack_f8,&uStack_198);
  if (cStack_181 < '\0') {
    __ZdlPv(uStack_198);
  }
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  if (ppppuVar9 == (undefined ****)0x0) {
    (*(code *)*ppppuStack_a0)(&ppppuStack_a0);
  }
  else {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
    (*(code *)*ppppuStack_a0)(&ppppuStack_a0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
  }
  if (lStack_138 < 0) {
    __ZdlPv(puStack_148);
  }
  if (ppppuVar9 != (undefined ****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
  }
  FUN_10ab451f4(&lStack_a8,0,&UNK_10f672b93,0x16,&UNK_10f672baa,0x12,&UNK_10f674996,0x14,1);
  func_0x00010a015c50(param_1 + 0x1d8,&lStack_a8);
  plVar13 = *(long **)(*(long *)(param_1 + 0x1d8) + 0x228);
  if (plVar13 == *(long **)(*(long *)(param_1 + 0x1d8) + 0x230)) {
    lVar18 = 0;
  }
  else {
    lVar18 = *plVar13;
  }
  func_0x00010a3326b8(lVar18 + 0x218,1);
  func_0x00010a332748(lVar18 + 0x219,0);
  func_0x00010a332700(lVar18 + 0x21a,0);
  func_0x00010a3325d0(lVar18,0);
  *(undefined4 *)(lVar18 + 0x21e) = 0x1010101;
  func_0x000107c2b074(&pcStack_f8,&PTR_DAT_110c16630);
  FUN_10a047898(lVar18 + 0x200,&pcStack_f8,&pcStack_f8);
  if (lStack_e8 < 0) {
    __ZdlPv(pcStack_f8);
  }
  func_0x000107c2b07c(&pcStack_f8,&UNK_10f672bbd);
  FUN_10a047898(lVar18 + 0x200,&pcStack_f8,&pcStack_f8);
  if (lStack_e8 < 0) {
    __ZdlPv(pcStack_f8);
  }
  FUN_10ab451f4(&pcStack_f8,0,&UNK_10f672b93,0x16,&UNK_10f672baa,0x12,&UNK_10f674996,0x14,1);
  func_0x00010a015c50(param_1 + 0x1e8,&pcStack_f8);
  plVar13 = *(long **)(*(long *)(param_1 + 0x1e8) + 0x228);
  if (plVar13 == *(long **)(*(long *)(param_1 + 0x1e8) + 0x230)) {
    lVar18 = 0;
  }
  else {
    lVar18 = *plVar13;
  }
  func_0x00010a3326b8(lVar18 + 0x218,1);
  func_0x00010a332748(lVar18 + 0x219,0);
  func_0x00010a332700(lVar18 + 0x21a,0);
  func_0x00010a3325d0(lVar18,0);
  *(undefined4 *)(lVar18 + 0x21e) = 0x1010101;
  FUN_10ab451f4(&puStack_148,0,&UNK_10f672bd0,0x17,&UNK_10f672be8,0x13,&UNK_10f6749c6,0x15,1);
  func_0x00010a015c50(param_1 + 0x1f8,&puStack_148);
  plVar13 = *(long **)(*(long *)(param_1 + 0x1f8) + 0x228);
  if (plVar13 == *(long **)(*(long *)(param_1 + 0x1f8) + 0x230)) {
    lVar18 = 0;
  }
  else {
    lVar18 = *plVar13;
  }
  func_0x00010a3326b8(lVar18 + 0x218,1);
  func_0x00010a332748(lVar18 + 0x219,0);
  func_0x00010a332700(lVar18 + 0x21a,0);
  func_0x00010a3325d0(lVar18,0);
  *(undefined4 *)(lVar18 + 0x21e) = 0x1010101;
  FUN_10ab451f4(&uStack_198,0,&UNK_10f672bfc,0x10,&UNK_10f672c0d,0xc,&UNK_10f6749dc,0xb,1);
  func_0x00010a015c50(param_1 + 0x208,&uStack_198);
  plVar13 = *(long **)(*(long *)(param_1 + 0x208) + 0x228);
  if (plVar13 == *(long **)(*(long *)(param_1 + 0x208) + 0x230)) {
    lVar18 = 0;
  }
  else {
    lVar18 = *plVar13;
  }
  func_0x00010a3326b8(lVar18 + 0x218,1);
  func_0x00010a332748(lVar18 + 0x219,0);
  func_0x00010a332700(lVar18 + 0x21a,0);
  puVar10 = (undefined8 *)0x0;
  func_0x00010a3325d0(lVar18);
  *(undefined4 *)(lVar18 + 0x21e) = 0x1010101;
  FUN_10a044790(auStack_188);
  (*(code *)*apuStack_180[0])(apuStack_180);
  if (plStack_190 != (long *)0x0) {
    plVar13 = plStack_190 + 1;
    do {
      lVar18 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_190 + 0x10))(plStack_190);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_190);
    }
  }
  FUN_10a044790(&lStack_138);
  (*(code *)*apuStack_130[0])(apuStack_130);
  plVar13 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    plVar3 = plStack_140 + 1;
    do {
      lVar18 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  FUN_10a044790(&lStack_e8);
  (*(code *)*appplStack_e0[0])(appplStack_e0);
  ppuVar8 = ppuStack_f0;
  if (ppuStack_f0 != (undefined **)0x0) {
    ppuVar4 = ppuStack_f0 + 1;
    do {
      puVar15 = *ppuVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar7) {
        *ppuVar4 = puVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
    }
  }
  FUN_10a044790(auStack_98);
  pppplVar11 = appplStack_90;
  (*(code *)*appplStack_90[0])();
  pppplVar12 = (long ****)ppppuStack_a0;
  if ((long ****)ppppuStack_a0 != (long ****)0x0) {
    pppplVar5 = (long ****)(ppppuStack_a0 + 1);
    do {
      ppplVar16 = *pppplVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar5,0x10);
      if (bVar7) {
        *pppplVar5 = (long ***)((long)ppplVar16 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppplVar16 == (long ***)0x0) {
      (*(code *)(*ppppuStack_a0)[2])(ppppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppplVar11 = pppplVar12;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a015cb4(&puStack_148);
    func_0x00010a015cb4(&pcStack_f8);
    func_0x00010a015cb4(&lStack_a8);
    __Unwind_Resume();
    ppplVar21 = (long ***)puVar10[1];
    ppplVar20 = (long ***)*puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    ppplVar16 = pppplVar11[1];
    pppplVar11[1] = ppplVar21;
    *pppplVar11 = ppplVar20;
    if (ppplVar16 != (long ***)0x0) {
      ppplVar20 = ppplVar16 + 1;
      do {
        pplVar17 = *ppplVar20;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppplVar20,0x10);
        if (bVar7) {
          *ppplVar20 = (long **)((long)pplVar17 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pplVar17 == (long **)0x0) {
        (*(code *)(*ppplVar16)[2])(ppplVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar16);
      }
    }
    return pppplVar11;
  }
  return pppplVar11;
}



/* Entry: 10a74bd78; end: 10a74bd9f;  */

/* WARNING: Removing unreachable block (ram,0x00010a42fd00) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd04) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd7c) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd14) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd1c) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd20) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd28) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd30) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd84) */
/* WARNING: Removing unreachable block (ram,0x00010a4300a0) */
/* WARNING: Removing unreachable block (ram,0x00010a42fdf4) */
/* WARNING: Removing unreachable block (ram,0x00010a42fe30) */
/* WARNING: Removing unreachable block (ram,0x00010a42fe04) */
/* WARNING: Removing unreachable block (ram,0x00010a42fe34) */
/* WARNING: Removing unreachable block (ram,0x00010a42fe1c) */
/* WARNING: Removing unreachable block (ram,0x00010a42fe38) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff00) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff04) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff0c) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff14) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff18) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff30) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff44) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff48) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff50) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff58) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff70) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff74) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff7c) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff84) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff88) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffa0) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffb4) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffb8) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffc0) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffc8) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffcc) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffe4) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffec) */
/* WARNING: Removing unreachable block (ram,0x00010a42fff0) */
/* WARNING: Removing unreachable block (ram,0x00010a42fff8) */
/* WARNING: Removing unreachable block (ram,0x00010a430000) */
/* WARNING: Removing unreachable block (ram,0x00010a430004) */
/* WARNING: Removing unreachable block (ram,0x00010a43001c) */
/* WARNING: Removing unreachable block (ram,0x00010a430024) */
/* WARNING: Removing unreachable block (ram,0x00010a430028) */
/* WARNING: Removing unreachable block (ram,0x00010a430030) */
/* WARNING: Removing unreachable block (ram,0x00010a430038) */
/* WARNING: Removing unreachable block (ram,0x00010a43003c) */
/* WARNING: Removing unreachable block (ram,0x00010a430054) */

undefined ** FUN_10a74bd78(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar6 = *(undefined ***)(param_1 + 0x168);
  FUN_10a74b304();
  if (ppuVar6 == (undefined **)0x0) {
    return (undefined **)0x0;
  }
  puVar7 = (undefined8 *)0x0;
  puStack_40 = &UNK_10f658729;
  uStack_38 = 0x4f;
  if (ppuVar6[0x46] != ppuVar6[0x47]) {
    lVar8 = *(long *)ppuVar6[0x46];
    lStack_50 = *(long *)(lVar8 + 0x28);
    ppuVar5 = *(undefined ***)(lVar8 + 0x30);
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar11 = ppuVar5 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar4) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuStack_48 = ppuVar5;
    if ((lStack_50 != 0) &&
       (*(undefined1 *)((long)ppuVar6 + 0x6fa) = 0, ppuVar6[0xe0] != (undefined *)0x0)) {
      ppuVar11 = (undefined **)ppuVar6[0xe1];
      ppuVar6[0xe1] = (undefined *)0x0;
      ppuVar6[0xe0] = (undefined *)0x0;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar1 = ppuVar11 + 1;
        do {
          puVar9 = *ppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = puVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar9 == (undefined *)0x0) {
          (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
          ppuVar6 = ppuVar11;
        }
      }
    }
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar11 = ppuVar5 + 1;
      do {
        puVar9 = *ppuVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar4) {
          *ppuVar11 = puVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar9 == (undefined *)0x0) {
        (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
        ppuVar6 = ppuVar5;
      }
    }
    return ppuVar6;
  }
  ppuVar6 = &puStack_40;
  FUN_10a0edfc4();
  func_0x00010a05248c(auStack_90);
  func_0x00010a05248c(auStack_70);
  func_0x00010a216360(auStack_60);
  func_0x00010a0523dc(&puStack_40);
  func_0x00010a05248c(&lStack_50);
  __Unwind_Resume();
  puVar12 = (undefined *)puVar7[1];
  puVar9 = (undefined *)*puVar7;
  *puVar7 = 0;
  puVar7[1] = 0;
  plVar10 = (long *)ppuVar6[1];
  ppuVar6[1] = puVar12;
  *ppuVar6 = puVar9;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return ppuVar6;
}



/* Entry: 10a74bda0; end: 10a74bda7;  */

/* WARNING: Removing unreachable block (ram,0x00010a42fd00) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd04) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd7c) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd14) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd1c) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd20) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd28) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd30) */
/* WARNING: Removing unreachable block (ram,0x00010a42fd84) */
/* WARNING: Removing unreachable block (ram,0x00010a4300a0) */
/* WARNING: Removing unreachable block (ram,0x00010a42fdf4) */
/* WARNING: Removing unreachable block (ram,0x00010a42fe30) */
/* WARNING: Removing unreachable block (ram,0x00010a42fe04) */
/* WARNING: Removing unreachable block (ram,0x00010a42fe34) */
/* WARNING: Removing unreachable block (ram,0x00010a42fe1c) */
/* WARNING: Removing unreachable block (ram,0x00010a42fe38) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff00) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff04) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff0c) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff14) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff18) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff30) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff44) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff48) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff50) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff58) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff70) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff74) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff7c) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff84) */
/* WARNING: Removing unreachable block (ram,0x00010a42ff88) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffa0) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffb4) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffb8) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffc0) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffc8) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffcc) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffe4) */
/* WARNING: Removing unreachable block (ram,0x00010a42ffec) */
/* WARNING: Removing unreachable block (ram,0x00010a42fff0) */
/* WARNING: Removing unreachable block (ram,0x00010a42fff8) */
/* WARNING: Removing unreachable block (ram,0x00010a430000) */
/* WARNING: Removing unreachable block (ram,0x00010a430004) */
/* WARNING: Removing unreachable block (ram,0x00010a43001c) */
/* WARNING: Removing unreachable block (ram,0x00010a430024) */
/* WARNING: Removing unreachable block (ram,0x00010a430028) */
/* WARNING: Removing unreachable block (ram,0x00010a430030) */
/* WARNING: Removing unreachable block (ram,0x00010a430038) */
/* WARNING: Removing unreachable block (ram,0x00010a43003c) */
/* WARNING: Removing unreachable block (ram,0x00010a430054) */

undefined ** FUN_10a74bda0(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar6 = *(undefined ***)(param_1 + 0x100);
  FUN_10a74b304();
  if (ppuVar6 == (undefined **)0x0) {
    return (undefined **)0x0;
  }
  puVar7 = (undefined8 *)0x0;
  puStack_40 = &UNK_10f658729;
  uStack_38 = 0x4f;
  if (ppuVar6[0x46] != ppuVar6[0x47]) {
    lVar8 = *(long *)ppuVar6[0x46];
    lStack_50 = *(long *)(lVar8 + 0x28);
    ppuVar5 = *(undefined ***)(lVar8 + 0x30);
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar11 = ppuVar5 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar4) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuStack_48 = ppuVar5;
    if ((lStack_50 != 0) &&
       (*(undefined1 *)((long)ppuVar6 + 0x6fa) = 0, ppuVar6[0xe0] != (undefined *)0x0)) {
      ppuVar11 = (undefined **)ppuVar6[0xe1];
      ppuVar6[0xe1] = (undefined *)0x0;
      ppuVar6[0xe0] = (undefined *)0x0;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar1 = ppuVar11 + 1;
        do {
          puVar9 = *ppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = puVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar9 == (undefined *)0x0) {
          (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
          ppuVar6 = ppuVar11;
        }
      }
    }
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar11 = ppuVar5 + 1;
      do {
        puVar9 = *ppuVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar4) {
          *ppuVar11 = puVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar9 == (undefined *)0x0) {
        (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
        ppuVar6 = ppuVar5;
      }
    }
    return ppuVar6;
  }
  ppuVar6 = &puStack_40;
  FUN_10a0edfc4();
  func_0x00010a05248c(auStack_90);
  func_0x00010a05248c(auStack_70);
  func_0x00010a216360(auStack_60);
  func_0x00010a0523dc(&puStack_40);
  func_0x00010a05248c(&lStack_50);
  __Unwind_Resume();
  puVar12 = (undefined *)puVar7[1];
  puVar9 = (undefined *)*puVar7;
  *puVar7 = 0;
  puVar7[1] = 0;
  plVar10 = (long *)ppuVar6[1];
  ppuVar6[1] = puVar12;
  *ppuVar6 = puVar9;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return ppuVar6;
}



/* Entry: 10a74bda8; end: 10a74c483;  */

/* WARNING: Removing unreachable block (ram,0x00010a74c1f4) */

void FUN_10a74bda8(undefined1 *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  char *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(char **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar2 = *(uint *)(param_1 + 0x30c);
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = *(uint *)(param_1 + 0x310) / uVar2;
    }
    iVar6 = *(uint *)(param_1 + 0x310) - uVar5 * uVar2;
    *(int *)(param_1 + 0x310) = iVar6;
    if (iVar6 != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      FUN_10a74c48c((undefined1 *)((long)register0x00000008 + -0x40));
      lVar11 = *(long *)((long)register0x00000008 + -0x40);
      cVar3 = *(char *)(lVar11 + 0x108);
      if (cVar3 == '\t') {
LAB_10a74c148:
        func_0x00010a8c65cc(*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x10),
                            (undefined1 *)((long)register0x00000008 + -0x40));
        *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(param_1 + 0x170);
        FUN_10a762268((undefined1 *)((long)register0x00000008 + -0x80),
                      (undefined1 *)((long)register0x00000008 + -0x60),
                      (undefined1 *)((long)register0x00000008 + -0x88));
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x88);
        uVar10 = uVar12;
        FUN_10a3dedfc(uVar12);
        FUN_10a74c51c((undefined1 *)((long)register0x00000008 + -0x98),uVar12,uVar10);
        FUN_10a8cda2c(*(undefined8 *)((long)register0x00000008 + -0x80),
                      (undefined1 *)((long)register0x00000008 + -0x98));
        FUN_10a74c674((undefined1 *)((long)register0x00000008 + -0xa8),
                      *(undefined8 *)((long)register0x00000008 + -0x88),
                      (undefined1 *)((long)register0x00000008 + -0x80));
        plVar8 = *(long **)(param_1 + 0x220);
        *(undefined1 *)((long)register0x00000008 + -0x49) = 4;
        *(undefined4 *)((long)register0x00000008 + -0x60) = 0x61746164;
        *(undefined1 *)((long)register0x00000008 + -0x5c) = 0;
        func_0x00010a8b9874(plVar8,(undefined1 *)((long)register0x00000008 + -0x60));
        unaff_x21 = (char *)*plVar8;
        plVar8 = (long *)plVar8[1];
        *(char **)((long)register0x00000008 + -0xb8) = unaff_x21;
        *(long **)((long)register0x00000008 + -0xb0) = plVar8;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        func_0x00010a8c5f40(unaff_x21,(undefined1 *)((long)register0x00000008 + -0xa8));
        FUN_10a8c6f54(*(long *)(*(long *)(param_1 + 0x220) + 0x10),
                      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x220) + 0x10) + 0x2e8));
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = *(long **)((long)register0x00000008 + -0xa0);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = *(long **)((long)register0x00000008 + -0x90);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = *(long **)((long)register0x00000008 + -0x78);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      else {
        *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10f674a3b;
        unaff_x21 = (char *)(lVar11 + 0x108);
        *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0x8000000000000000;
        if (cVar3 == '\x01') {
          uVar10 = *(undefined8 *)(lVar11 + 0x110);
          func_0x00010938ce90(uVar10,(undefined1 *)((long)register0x00000008 + -0x80));
          *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
          cVar3 = *unaff_x21;
LAB_10a74be60:
          *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
          if (cVar3 == '\x01') {
            *(long *)((long)register0x00000008 + -0x78) = *(long *)(lVar11 + 0x110) + 8;
          }
          else {
            if (cVar3 == '\x02') {
              lVar9 = *(long *)(lVar11 + 0x110);
              goto LAB_10a74be80;
            }
            *(undefined8 *)((long)register0x00000008 + -0x68) = 1;
          }
        }
        else {
          if (cVar3 != '\x02') {
            *(undefined8 *)((long)register0x00000008 + -0x48) = 1;
            goto LAB_10a74be60;
          }
          lVar9 = *(long *)(lVar11 + 0x110);
          *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)(lVar9 + 8);
          *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
LAB_10a74be80:
          *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)(lVar9 + 8);
        }
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x60);
        func_0x00010937c708(puVar7,(undefined1 *)((long)register0x00000008 + -0x80));
        if (((ulong)puVar7 & 1) != 0) {
LAB_10a74becc:
          *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10f674a46;
          cVar3 = *unaff_x21;
          if (cVar3 == '\x01') {
            uVar10 = *(undefined8 *)(lVar11 + 0x110);
            func_0x00010938ce90(uVar10,(undefined1 *)((long)register0x00000008 + -0x80));
            cVar3 = *unaff_x21;
            uVar12 = 0x8000000000000000;
LAB_10a74bf2c:
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar12;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
            if (cVar3 == '\x01') {
              *(long *)((long)register0x00000008 + -0x78) = *(long *)(lVar11 + 0x110) + 8;
            }
            else {
              if (cVar3 == '\x02') {
                lVar9 = *(long *)(lVar11 + 0x110);
                goto LAB_10a74bf54;
              }
              *(undefined8 *)((long)register0x00000008 + -0x68) = 1;
            }
          }
          else {
            if (cVar3 != '\x02') {
              uVar10 = 0;
              uVar12 = 1;
              goto LAB_10a74bf2c;
            }
            lVar9 = *(long *)(lVar11 + 0x110);
            uVar10 = *(undefined8 *)(lVar9 + 8);
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x48) = 0x8000000000000000;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
LAB_10a74bf54:
            *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)(lVar9 + 8);
          }
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x60);
          func_0x00010937c708(puVar7,(undefined1 *)((long)register0x00000008 + -0x80));
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010938cf68((undefined1 *)((long)register0x00000008 + -0x60));
            func_0x00010938d050();
            *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)((long)register0x00000008 + -0x80);
          }
          *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10f674a55;
          cVar3 = *unaff_x21;
          if (cVar3 == '\x01') {
            uVar10 = *(undefined8 *)(lVar11 + 0x110);
            func_0x00010938ce90(uVar10,(undefined1 *)((long)register0x00000008 + -0x80));
            cVar3 = *unaff_x21;
            uVar12 = 0x8000000000000000;
LAB_10a74c000:
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar12;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
            if (cVar3 == '\x02') goto LAB_10a74c034;
            if (cVar3 == '\x01') {
              *(long *)((long)register0x00000008 + -0x78) = *(long *)(lVar11 + 0x110) + 8;
            }
            else {
              *(undefined8 *)((long)register0x00000008 + -0x68) = 1;
            }
          }
          else {
            if (cVar3 != '\x02') {
              uVar10 = 0;
              uVar12 = 1;
              goto LAB_10a74c000;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x110) + 8);
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x48) = 0x8000000000000000;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
LAB_10a74c034:
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)(*(long *)(lVar11 + 0x110) + 8);
          }
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x60);
          func_0x00010937c708(puVar7,(undefined1 *)((long)register0x00000008 + -0x80));
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010938cf68((undefined1 *)((long)register0x00000008 + -0x60));
            func_0x00010938d050();
            *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)((long)register0x00000008 + -0x80);
          }
          *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10f674a66;
          cVar3 = *unaff_x21;
          if (cVar3 == '\x01') {
            uVar10 = *(undefined8 *)(lVar11 + 0x110);
            func_0x00010938ce90(uVar10,(undefined1 *)((long)register0x00000008 + -0x80));
            cVar3 = *unaff_x21;
            uVar12 = 0x8000000000000000;
LAB_10a74c0d4:
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar12;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
            if (cVar3 == '\x02') goto LAB_10a74c108;
            if (cVar3 == '\x01') {
              *(long *)((long)register0x00000008 + -0x78) = *(long *)(lVar11 + 0x110) + 8;
            }
            else {
              *(undefined8 *)((long)register0x00000008 + -0x68) = 1;
            }
          }
          else {
            if (cVar3 != '\x02') {
              uVar10 = 0;
              uVar12 = 1;
              goto LAB_10a74c0d4;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x110) + 8);
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x48) = 0x8000000000000000;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
LAB_10a74c108:
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)(*(long *)(lVar11 + 0x110) + 8);
          }
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x60);
          func_0x00010937c708(puVar7,(undefined1 *)((long)register0x00000008 + -0x80));
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010938cf68((undefined1 *)((long)register0x00000008 + -0x60));
            func_0x00010938d050();
            *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)((long)register0x00000008 + -0x80);
          }
          goto LAB_10a74c148;
        }
        func_0x00010938cf68((undefined1 *)((long)register0x00000008 + -0x60));
        func_0x00010938d198();
        if ((*(byte *)((long)register0x00000008 + -0x98) & 1) == 0) goto LAB_10a74becc;
      }
      plVar8 = *(long **)((long)register0x00000008 + -0x38);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      FUN_10a2c8f88(param_1 + 0x210,(undefined1 *)((long)register0x00000008 + -0x60));
      unaff_x20 = *(long **)((long)register0x00000008 + -0x58);
      if (unaff_x20 != (long *)0x0) {
        plVar8 = unaff_x20 + 1;
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
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
    }
    iVar6 = (int)*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x10);
    FUN_10a8c7000();
    if (iVar6 == 0) {
      return;
    }
    iVar6 = (int)*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x10);
    FUN_10a8c6990();
    if (iVar6 == 0) {
      return;
    }
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x260);
    *(undefined **)((long)register0x00000008 + -0x60) = &UNK_10f653c20;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x21;
    if (lVar11 != 0) {
      FUN_10a244d68();
      FUN_10a8c6824(*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x10),lVar11);
      FUN_10a8c6740(*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x10),1);
      return;
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x60);
    FUN_10a0edfc4();
    func_0x00010a051ed8((undefined1 *)((long)register0x00000008 + -0x40));
    unaff_x30 = FUN_10a74c484;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x68;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  } while( true );
}



/* Entry: 10a74c484; end: 10a74c48b;  */

/* WARNING: Removing unreachable block (ram,0x00010a74c1f4) */

void FUN_10a74c484(undefined1 *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *unaff_x19;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x20;
  char *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(char **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar2 = *(uint *)(param_1 + 0x2a4);
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = *(uint *)(param_1 + 0x2a8) / uVar2;
    }
    iVar6 = *(uint *)(param_1 + 0x2a8) - uVar5 * uVar2;
    *(int *)(param_1 + 0x2a8) = iVar6;
    if (iVar6 != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x1a8) != 0) {
      FUN_10a74c48c((undefined1 *)((long)register0x00000008 + -0x40));
      lVar11 = *(long *)((long)register0x00000008 + -0x40);
      cVar3 = *(char *)(lVar11 + 0x108);
      if (cVar3 == '\t') {
LAB_10a74c148:
        func_0x00010a8c65cc(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x10),
                            (undefined1 *)((long)register0x00000008 + -0x40));
        *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(param_1 + 0x108);
        FUN_10a762268((undefined1 *)((long)register0x00000008 + -0x80),
                      (undefined1 *)((long)register0x00000008 + -0x60),
                      (undefined1 *)((long)register0x00000008 + -0x88));
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x88);
        uVar10 = uVar12;
        FUN_10a3dedfc(uVar12);
        FUN_10a74c51c((undefined1 *)((long)register0x00000008 + -0x98),uVar12,uVar10);
        FUN_10a8cda2c(*(undefined8 *)((long)register0x00000008 + -0x80),
                      (undefined1 *)((long)register0x00000008 + -0x98));
        FUN_10a74c674((undefined1 *)((long)register0x00000008 + -0xa8),
                      *(undefined8 *)((long)register0x00000008 + -0x88),
                      (undefined1 *)((long)register0x00000008 + -0x80));
        plVar8 = *(long **)(param_1 + 0x1b8);
        *(undefined1 *)((long)register0x00000008 + -0x49) = 4;
        *(undefined4 *)((long)register0x00000008 + -0x60) = 0x61746164;
        *(undefined1 *)((long)register0x00000008 + -0x5c) = 0;
        func_0x00010a8b9874(plVar8,(undefined1 *)((long)register0x00000008 + -0x60));
        unaff_x21 = (char *)*plVar8;
        plVar8 = (long *)plVar8[1];
        *(char **)((long)register0x00000008 + -0xb8) = unaff_x21;
        *(long **)((long)register0x00000008 + -0xb0) = plVar8;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        func_0x00010a8c5f40(unaff_x21,(undefined1 *)((long)register0x00000008 + -0xa8));
        FUN_10a8c6f54(*(long *)(*(long *)(param_1 + 0x1b8) + 0x10),
                      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x1b8) + 0x10) + 0x2e8));
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = *(long **)((long)register0x00000008 + -0xa0);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = *(long **)((long)register0x00000008 + -0x90);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = *(long **)((long)register0x00000008 + -0x78);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      else {
        *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10f674a3b;
        unaff_x21 = (char *)(lVar11 + 0x108);
        *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0x8000000000000000;
        if (cVar3 == '\x01') {
          uVar10 = *(undefined8 *)(lVar11 + 0x110);
          func_0x00010938ce90(uVar10,(undefined1 *)((long)register0x00000008 + -0x80));
          *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
          cVar3 = *unaff_x21;
LAB_10a74be60:
          *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
          if (cVar3 == '\x01') {
            *(long *)((long)register0x00000008 + -0x78) = *(long *)(lVar11 + 0x110) + 8;
          }
          else {
            if (cVar3 == '\x02') {
              lVar9 = *(long *)(lVar11 + 0x110);
              goto LAB_10a74be80;
            }
            *(undefined8 *)((long)register0x00000008 + -0x68) = 1;
          }
        }
        else {
          if (cVar3 != '\x02') {
            *(undefined8 *)((long)register0x00000008 + -0x48) = 1;
            goto LAB_10a74be60;
          }
          lVar9 = *(long *)(lVar11 + 0x110);
          *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)(lVar9 + 8);
          *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
LAB_10a74be80:
          *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)(lVar9 + 8);
        }
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x60);
        func_0x00010937c708(puVar7,(undefined1 *)((long)register0x00000008 + -0x80));
        if (((ulong)puVar7 & 1) != 0) {
LAB_10a74becc:
          *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10f674a46;
          cVar3 = *unaff_x21;
          if (cVar3 == '\x01') {
            uVar10 = *(undefined8 *)(lVar11 + 0x110);
            func_0x00010938ce90(uVar10,(undefined1 *)((long)register0x00000008 + -0x80));
            cVar3 = *unaff_x21;
            uVar12 = 0x8000000000000000;
LAB_10a74bf2c:
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar12;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
            if (cVar3 == '\x01') {
              *(long *)((long)register0x00000008 + -0x78) = *(long *)(lVar11 + 0x110) + 8;
            }
            else {
              if (cVar3 == '\x02') {
                lVar9 = *(long *)(lVar11 + 0x110);
                goto LAB_10a74bf54;
              }
              *(undefined8 *)((long)register0x00000008 + -0x68) = 1;
            }
          }
          else {
            if (cVar3 != '\x02') {
              uVar10 = 0;
              uVar12 = 1;
              goto LAB_10a74bf2c;
            }
            lVar9 = *(long *)(lVar11 + 0x110);
            uVar10 = *(undefined8 *)(lVar9 + 8);
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x48) = 0x8000000000000000;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
LAB_10a74bf54:
            *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)(lVar9 + 8);
          }
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x60);
          func_0x00010937c708(puVar7,(undefined1 *)((long)register0x00000008 + -0x80));
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010938cf68((undefined1 *)((long)register0x00000008 + -0x60));
            func_0x00010938d050();
            *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)((long)register0x00000008 + -0x80);
          }
          *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10f674a55;
          cVar3 = *unaff_x21;
          if (cVar3 == '\x01') {
            uVar10 = *(undefined8 *)(lVar11 + 0x110);
            func_0x00010938ce90(uVar10,(undefined1 *)((long)register0x00000008 + -0x80));
            cVar3 = *unaff_x21;
            uVar12 = 0x8000000000000000;
LAB_10a74c000:
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar12;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
            if (cVar3 == '\x02') goto LAB_10a74c034;
            if (cVar3 == '\x01') {
              *(long *)((long)register0x00000008 + -0x78) = *(long *)(lVar11 + 0x110) + 8;
            }
            else {
              *(undefined8 *)((long)register0x00000008 + -0x68) = 1;
            }
          }
          else {
            if (cVar3 != '\x02') {
              uVar10 = 0;
              uVar12 = 1;
              goto LAB_10a74c000;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x110) + 8);
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x48) = 0x8000000000000000;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
LAB_10a74c034:
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)(*(long *)(lVar11 + 0x110) + 8);
          }
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x60);
          func_0x00010937c708(puVar7,(undefined1 *)((long)register0x00000008 + -0x80));
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010938cf68((undefined1 *)((long)register0x00000008 + -0x60));
            func_0x00010938d050();
            *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)((long)register0x00000008 + -0x80);
          }
          *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10f674a66;
          cVar3 = *unaff_x21;
          if (cVar3 == '\x01') {
            uVar10 = *(undefined8 *)(lVar11 + 0x110);
            func_0x00010938ce90(uVar10,(undefined1 *)((long)register0x00000008 + -0x80));
            cVar3 = *unaff_x21;
            uVar12 = 0x8000000000000000;
LAB_10a74c0d4:
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar12;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
            if (cVar3 == '\x02') goto LAB_10a74c108;
            if (cVar3 == '\x01') {
              *(long *)((long)register0x00000008 + -0x78) = *(long *)(lVar11 + 0x110) + 8;
            }
            else {
              *(undefined8 *)((long)register0x00000008 + -0x68) = 1;
            }
          }
          else {
            if (cVar3 != '\x02') {
              uVar10 = 0;
              uVar12 = 1;
              goto LAB_10a74c0d4;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x110) + 8);
            *(char **)((long)register0x00000008 + -0x60) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x48) = 0x8000000000000000;
            *(char **)((long)register0x00000008 + -0x80) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x8000000000000000;
LAB_10a74c108:
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)(*(long *)(lVar11 + 0x110) + 8);
          }
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x60);
          func_0x00010937c708(puVar7,(undefined1 *)((long)register0x00000008 + -0x80));
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010938cf68((undefined1 *)((long)register0x00000008 + -0x60));
            func_0x00010938d050();
            *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)((long)register0x00000008 + -0x80);
          }
          goto LAB_10a74c148;
        }
        func_0x00010938cf68((undefined1 *)((long)register0x00000008 + -0x60));
        func_0x00010938d198();
        if ((*(byte *)((long)register0x00000008 + -0x98) & 1) == 0) goto LAB_10a74becc;
      }
      plVar8 = *(long **)((long)register0x00000008 + -0x38);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      FUN_10a2c8f88(param_1 + 0x1a8,(undefined1 *)((long)register0x00000008 + -0x60));
      unaff_x20 = *(long **)((long)register0x00000008 + -0x58);
      if (unaff_x20 != (long *)0x0) {
        plVar8 = unaff_x20 + 1;
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
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
    }
    iVar6 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x10);
    FUN_10a8c7000();
    if (iVar6 == 0) {
      return;
    }
    iVar6 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x10);
    FUN_10a8c6990();
    if (iVar6 == 0) {
      return;
    }
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x108) + 0x100) + 0x260);
    *(undefined **)((long)register0x00000008 + -0x60) = &UNK_10f653c20;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x21;
    if (lVar11 != 0) {
      FUN_10a244d68();
      FUN_10a8c6824(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x10),lVar11);
      FUN_10a8c6740(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x10),1);
      return;
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x60);
    FUN_10a0edfc4();
    func_0x00010a051ed8((undefined1 *)((long)register0x00000008 + -0x40));
    unaff_x30 = FUN_10a74c484;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  } while( true );
}



/* Entry: 10a74c48c; end: 10a74c51b;  */

void FUN_10a74c48c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}


