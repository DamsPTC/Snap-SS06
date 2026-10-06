/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a86453c; end: 10a864ca3;  */

/* WARNING: Type propagation algorithm not settling */

undefined ******** FUN_10a86453c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *******pppppppuVar2;
  code ******ppppppcVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined ********ppppppppuVar8;
  code *******pppppppcVar9;
  long *plVar10;
  code ******ppppppcVar11;
  ulong uVar12;
  undefined ********ppppppppuVar13;
  int iVar14;
  undefined **ppuVar15;
  undefined *****pppppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *******pppppppuVar22;
  undefined ****ppppuVar23;
  ulong uVar24;
  undefined ******ppppppuVar25;
  undefined ******ppppppuVar26;
  ulong uVar27;
  undefined *******pppppppuVar28;
  undefined *******pppppppuVar29;
  undefined **unaff_x22;
  undefined **unaff_x23;
  long *plVar30;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined *****pppppuVar31;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined ****ppppuVar32;
  undefined *puStack_cf8;
  undefined8 uStack_cf0;
  undefined1 uStack_ce8;
  undefined *puStack_ce0;
  undefined8 uStack_cd8;
  undefined1 uStack_cd0;
  undefined **ppuStack_cc8;
  undefined *puStack_cc0;
  undefined *puStack_cb8;
  ulong uStack_cb0;
  ulong uStack_ca8;
  ulong uStack_ca0;
  undefined4 uStack_c98;
  undefined **ppuStack_c90;
  undefined *puStack_c88;
  undefined8 uStack_c80;
  undefined1 uStack_c78;
  undefined *puStack_c70;
  undefined8 uStack_c68;
  undefined1 uStack_c60;
  int iStack_c58;
  undefined1 auStack_c50 [1024];
  undefined1 auStack_850 [1024];
  long lStack_450;
  undefined *******pppppppuStack_440;
  undefined ******ppppppuStack_438;
  undefined ******ppppppuStack_430;
  undefined ****ppppuStack_428;
  undefined ******ppppppuStack_420;
  long *plStack_418;
  undefined ********ppppppppuStack_410;
  undefined **ppuStack_408;
  undefined *******pppppppuStack_400;
  undefined ********ppppppppuStack_3f8;
  undefined1 ****ppppuStack_3f0;
  code *pcStack_3e8;
  long alStack_3d8 [2];
  char cStack_3c1;
  undefined ********ppppppppuStack_3c0;
  undefined ******ppppppuStack_3b8;
  undefined ******ppppppuStack_3b0;
  undefined ********ppppppppuStack_3a0;
  undefined ******ppppppuStack_398;
  undefined ******ppppppuStack_390;
  undefined *******pppppppuStack_380;
  undefined *******pppppppuStack_378;
  undefined ********ppppppppuStack_370;
  undefined ******ppppppuStack_368;
  undefined ******ppppppuStack_360;
  long lStack_338;
  undefined *******pppppppuStack_330;
  code *******pppppppcStack_328;
  long *plStack_320;
  undefined ********ppppppppuStack_318;
  undefined1 ***pppuStack_310;
  code *pcStack_308;
  uint uStack_2f4;
  undefined *******pppppppuStack_2f0;
  undefined *******pppppppuStack_2e8;
  long lStack_2e0;
  undefined *******pppppppuStack_2d0;
  undefined *******pppppppuStack_2c8;
  undefined *******pppppppuStack_2c0;
  undefined *******pppppppuStack_2b8;
  long lStack_2b0;
  undefined ******ppppppuStack_2a8;
  undefined ******ppppppuStack_2a0;
  undefined *******pppppppuStack_298;
  undefined *******pppppppuStack_290;
  char cStack_281;
  undefined8 uStack_280;
  long *plStack_278;
  code *******pppppppcStack_270;
  undefined ******ppppppuStack_268;
  undefined8 uStack_260;
  long *plStack_258;
  long lStack_230;
  undefined *******pppppppuStack_220;
  undefined ******ppppppuStack_218;
  undefined ******ppppppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined *****pppppuStack_1e0;
  undefined ********ppppppppuStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined *******pppppppuStack_1b8;
  undefined *******pppppppuStack_1b0;
  undefined *******pppppppuStack_1a8;
  undefined *******pppppppuStack_1a0;
  undefined ********ppppppppuStack_198;
  undefined **ppuStack_190;
  undefined *****pppppuStack_188;
  undefined1 *puStack_180;
  undefined ********ppppppppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *******pppppppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  char cStack_d1;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined *****pppppuStack_b8;
  undefined **ppuStack_b0;
  undefined *******pppppppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = &PTR_PTR_113304258;
  FUN_10ae079a0(0,&PTR_PTR_113304258);
  FUN_10ae07cd4(ppuVar15,&PTR_PTR_113304258);
  pppppppuStack_100 = (undefined *******)0x0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  FUN_10a860df0(&pppppppuStack_100,(long)(int)param_2[1]);
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  FUN_10a860df0(&uStack_120,(long)(int)param_2[3]);
  if (0 < (int)param_2[1]) {
    unaff_x28 = (undefined **)0x0;
    unaff_x23 = (undefined **)0x38;
    do {
      unaff_x27 = (undefined **)(*param_2 + (long)unaff_x28 * 0x38);
      if ((undefined *****)unaff_x27[1] == (undefined *****)0x0) {
LAB_10a8647f4:
        ppuVar15 = &PTR_PTR_113304ec8;
        FUN_10ae079a0(0,&PTR_PTR_113304ec8);
        FUN_10ae07cd4(ppuVar15,&PTR_PTR_113304ec8);
      }
      else {
        pppppuVar31 = (undefined *****)*unaff_x27;
        unaff_x25 = (undefined **)0x0;
        if (pppppuVar31 == (undefined *****)0x0) goto LAB_10a8647f4;
        lVar19 = *param_2 + (long)unaff_x28 * 0x38;
        puVar20 = *(undefined **)(lVar19 + 0x10);
        puVar4 = *(undefined **)(lVar19 + 0x18);
        puVar21 = &UNK_10f67d9eb;
        if (puVar20 != (undefined *)0x0) {
          puVar21 = puVar20;
        }
        puVar20 = &UNK_10f67d9eb;
        if (puVar4 != (undefined *)0x0) {
          puVar20 = puVar4;
        }
        unaff_x22 = (undefined **)0xd0;
        __Znwm();
        ppuVar15 = unaff_x22 + 1;
        *ppuVar15 = (undefined *)0x0;
        unaff_x22[2] = (undefined *)0x0;
        *unaff_x22 = (undefined *)&PTR_FUN_110bf8238;
        func_0x000107c2b054(&pppppuStack_b8,pppppuVar31);
        func_0x000107c2b054(&puStack_160,puVar21);
        func_0x000107c2b054(auStack_d0,puVar20);
        func_0x000107c2b054(&ppuStack_e8,unaff_x27[1]);
        unaff_x24 = unaff_x22 + 3;
        FUN_10a5caa80(unaff_x24,&pppppuStack_b8,&puStack_160,auStack_d0,&ppuStack_e8,unaff_x27[6]);
        if (cStack_d1 < '\0') {
          __ZdlPv(ppuStack_e8);
        }
        if (cStack_b9 < '\0') {
          __ZdlPv(auStack_d0[0]);
        }
        if ((long)uStack_150 < 0) {
          __ZdlPv(puStack_160);
        }
        if ((long)pppppppuStack_a8 < 0) {
          __ZdlPv(pppppuStack_b8);
        }
        puVar20 = *(undefined **)(*param_2 + (long)unaff_x28 * 0x38 + 0x20);
        puVar21 = &UNK_10f67d9eb;
        if (puVar20 != (undefined *)0x0) {
          puVar21 = puVar20;
        }
        ppuStack_130 = unaff_x24;
        ppuStack_128 = unaff_x22;
        func_0x000107c2b054(&pppppuStack_b8,puVar21);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (unaff_x22 + 0x13,&pppppuStack_b8);
        if ((long)pppppppuStack_a8 < 0) {
          __ZdlPv(pppppuStack_b8);
        }
        FUN_10a860e8c(param_1,&ppuStack_130);
        FUN_10a8979c4(unaff_x22 + 9,unaff_x22 + 6);
        unaff_x26 = &PTR_PTR_113304f10;
        unaff_x25 = unaff_x26;
        FUN_10ae079a0();
        func_0x00010a897a18();
        FUN_10ae07cd4(unaff_x25,&PTR_PTR_113304f10);
        FUN_10a864ca4(&pppppppuStack_100,&ppuStack_130);
        FUN_10a897a68(param_1 + 0x328,unaff_x22 + 9,unaff_x22 + 9,&ppuStack_130);
        FUN_10a897a68(param_1 + 0x300,unaff_x22 + 6,unaff_x22 + 6,&ppuStack_130);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar7) {
            *ppuVar15 = *ppuVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        pppppuStack_b8 = (undefined *****)FUN_10a897ce0;
        ppuStack_b0 = &PTR_FUN_110c24ab0;
        puStack_160 = (undefined *)0x0;
        uStack_158 = 0;
        pppppppuStack_a8 = (undefined *******)unaff_x24;
        ppuStack_a0 = unaff_x22;
        FUN_10a860860(param_1,&pppppuStack_b8);
        (*(code *)*ppuStack_b0)(&ppuStack_b0);
        do {
          puVar21 = *ppuVar15;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar7) {
            *ppuVar15 = puVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (puVar21 == (undefined *)0x0) {
          (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
        }
      }
      unaff_x28 = (undefined **)((long)unaff_x28 + 1);
    } while ((long)unaff_x28 < (long)(int)param_2[1]);
  }
  if (0 < (int)param_2[3]) {
    unaff_x28 = (undefined **)0x0;
    unaff_x27 = (undefined **)&pppppuStack_b8;
    unaff_x26 = (undefined **)0x38;
    unaff_x22 = &PTR_PTR_113304fa0;
    unaff_x23 = &PTR_PTR_113304980;
    do {
      puVar20 = *(undefined **)(param_2[2] + (long)unaff_x28 * 0x38 + 8);
      puVar21 = &UNK_10f67d9eb;
      if (puVar20 != (undefined *)0x0) {
        puVar21 = puVar20;
      }
      func_0x000107c2b054(&puStack_160,puVar21);
      uVar12 = uStack_158;
      if (-1 < (long)uStack_150) {
        uVar12 = uStack_150 >> 0x38;
      }
      if (uVar12 == 0) {
        ppuVar15 = &PTR_PTR_113304f58;
        FUN_10ae079a0(0,&PTR_PTR_113304f58);
        FUN_10ae07cd4(ppuVar15,&PTR_PTR_113304f58);
      }
      else {
        puVar20 = *(undefined **)(param_2[2] + (long)unaff_x28 * 0x38);
        puVar21 = &UNK_10f67d9eb;
        if (puVar20 != (undefined *)0x0) {
          puVar21 = puVar20;
        }
        func_0x000107c2b054(auStack_d0,puVar21);
        lVar19 = param_1 + 0x328;
        FUN_10a894b50(lVar19,&puStack_160);
        if (lVar19 == 0) {
          FUN_10ae03140();
          unaff_x24 = unaff_x22;
          FUN_10ae079a0();
          FUN_10ae0314c();
          FUN_10ae07cd4(unaff_x24,&PTR_PTR_113304fa0);
          unaff_x25 = &puStack_160;
        }
        else {
          func_0x00010a383718(&puStack_160,auStack_d0);
          ppuVar15 = unaff_x23;
          FUN_10ae079a0();
          func_0x00010a38376c();
          FUN_10ae07cd4(ppuVar15,&PTR_PTR_113304980);
          unaff_x25 = *(undefined ***)(lVar19 + 0x28);
          unaff_x24 = *(undefined ***)(lVar19 + 0x30);
          if (unaff_x24 != (undefined **)0x0) {
            ppuVar15 = unaff_x24 + 1;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
              if (bVar7) {
                *ppuVar15 = *ppuVar15 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          ppuStack_e8 = unaff_x25;
          ppuStack_e0 = unaff_x24;
          FUN_10a864ca4(&uStack_120,&ppuStack_e8);
          FUN_10a897db4(param_1 + 0x328,unaff_x25 + 6);
          FUN_10a897db4(param_1 + 0x300,unaff_x25 + 3);
          if (unaff_x24 != (undefined **)0x0) {
            ppuVar15 = unaff_x24 + 1;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
              if (bVar7) {
                *ppuVar15 = *ppuVar15 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          pppppuStack_b8 = (undefined *****)FUN_10a897efc;
          ppuStack_b0 = &PTR_FUN_110c24ac8;
          ppuStack_130 = (undefined **)0x0;
          ppuStack_128 = (undefined **)0x0;
          pppppppuStack_a8 = (undefined *******)unaff_x25;
          ppuStack_a0 = unaff_x24;
          FUN_10a860860(param_1,&pppppuStack_b8);
          (*(code *)*ppuStack_b0)(&ppuStack_b0);
          if (unaff_x24 != (undefined **)0x0) {
            ppuVar15 = unaff_x24 + 1;
            do {
              puVar21 = *ppuVar15;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
              if (bVar7) {
                *ppuVar15 = puVar21 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (puVar21 == (undefined *)0x0) {
              (**(code **)(*unaff_x24 + 0x10))(unaff_x24);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x24);
            }
          }
        }
        if (cStack_b9 < '\0') {
          __ZdlPv(auStack_d0[0]);
        }
      }
      if ((long)uStack_150 < 0) {
        __ZdlPv(puStack_160);
      }
      unaff_x28 = (undefined **)((long)unaff_x28 + 1);
    } while ((long)unaff_x28 < (long)(int)param_2[3]);
  }
  uStack_98 = uStack_f0;
  ppuStack_a0 = (undefined **)uStack_f8;
  pppppppuStack_a8 = pppppppuStack_100;
  uStack_80 = uStack_110;
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  uStack_f8 = 0;
  uStack_f0 = 0;
  pppppppuStack_100 = (undefined *******)0x0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_120 = 0;
  pppppuStack_b8 = (undefined *****)FUN_10a897fd0;
  ppuStack_b0 = &PTR_FUN_110c24ae0;
  puStack_160 = (undefined *)0x0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  pppppuVar31 = (undefined *****)&pppppuStack_b8;
  FUN_10a860860(param_1);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  func_0x00010a87edc4(&uStack_148);
  func_0x00010a87edc4(&puStack_160);
  func_0x00010a87edc4(&uStack_120);
  ppppppppuVar13 = &pppppppuStack_100;
  func_0x00010a87edc4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppppppppuVar13;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  func_0x00010a87edc4(&uStack_148);
  func_0x00010a87edc4(&puStack_160);
  func_0x00010a87edc4(&uStack_120);
  func_0x00010a87edc4(&pppppppuStack_100);
  ppppppppuVar8 = ppppppppuVar13;
  __Unwind_Resume();
  pcStack_168 = FUN_10a864ca4;
  ppuStack_1d0 = &puStack_170;
  pppppppuVar29 = ppppppppuVar8[1];
  if (pppppppuVar29 < ppppppppuVar8[2]) {
    ppppuVar23 = pppppuVar31[1];
    ppppppuVar25 = (undefined ******)*pppppuVar31;
    pppppppuVar29[1] = (undefined ******)pppppuVar31[1];
    *pppppppuVar29 = ppppppuVar25;
    if (ppppuVar23 != (undefined ****)0x0) {
      ppppuVar23 = ppppuVar23 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar23,0x10);
        if (bVar7) {
          *ppppuVar23 = (undefined ***)((long)*ppppuVar23 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    pppppppuVar29 = pppppppuVar29 + 2;
    ppppppppuVar13 = ppppppppuVar8;
  }
  else {
    lVar19 = (long)pppppppuVar29 - (long)*ppppppppuVar8;
    uVar12 = (lVar19 >> 4) + 1;
    ppuStack_190 = unaff_x22;
    pppppuStack_188 = (undefined *****)&pppppuStack_b8;
    ppppppppuStack_178 = ppppppppuVar13;
    puStack_170 = &stack0xfffffffffffffff0;
    if (uVar12 >> 0x3c != 0) {
      ppppppppuVar13 = ppppppppuVar8;
      pppppuVar16 = pppppuVar31;
      puStack_180 = (undefined1 *)&puStack_160;
      FUN_10a87ed30();
      pcStack_1c8 = FUN_10a864db8;
      lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar15 = &PTR_PTR_113304058;
      pppppppuStack_220 = (undefined *******)unaff_x28;
      ppppppuStack_218 = (undefined ******)unaff_x27;
      ppppppuStack_210 = (undefined ******)unaff_x26;
      ppuStack_208 = unaff_x25;
      ppuStack_200 = unaff_x24;
      ppuStack_1f8 = unaff_x23;
      ppuStack_1f0 = unaff_x22;
      lStack_1e8 = lVar19;
      pppppuStack_1e0 = pppppuVar31;
      ppppppppuStack_1d8 = ppppppppuVar8;
      FUN_10ae079a0(0,&PTR_PTR_113304058);
      FUN_10ae07cd4(ppuVar15,&PTR_PTR_113304058);
      FUN_10a860bc8(ppppppppuVar13,pppppuVar16);
      pppppppuStack_2c0 = (undefined *******)0x0;
      pppppppuStack_2b8 = (undefined *******)0x0;
      lStack_2b0 = 0;
      pppppppuVar28 = ppppppppuVar13[0xae];
      pppppppuVar29 = ppppppppuVar13[0xaf];
      if (pppppppuVar29 != (undefined *******)0x0) {
        pppppppuVar22 = pppppppuVar29 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar22,0x10);
          if (bVar7) {
            *pppppppuVar22 = (undefined ******)((long)*pppppppuVar22 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      pppppppuStack_2d0 = pppppppuVar28;
      pppppppuStack_2c8 = pppppppuVar29;
      if (pppppppuVar28 != (undefined *******)0x0) {
        pppppppuStack_2f0 = (undefined *******)0x0;
        pppppppuStack_2e8 = (undefined *******)0x0;
        lStack_2e0 = 0;
        if (*pppppuVar16 != (undefined ****)0x0) {
          func_0x000107c2b054(&pppppppcStack_270);
          FUN_10a87a708(&uStack_280,ppppppppuVar13,&pppppppcStack_270);
          pppppppuVar22 = ppppppppuVar13[0x46];
          if (-1 < (long)uStack_260) {
            ppppppuStack_268 = (undefined ******)((ulong)uStack_260 >> 0x38);
          }
          bVar5 = *(byte *)((long)pppppppuVar22 + 0x47);
          ppppppuVar25 = pppppppuVar22[7];
          if (-1 < (char)bVar5) {
            ppppppuVar25 = (undefined ******)(ulong)bVar5;
          }
          if (ppppppuStack_268 == ppppppuVar25) {
            pppppppcVar9 = pppppppcStack_270;
            if (-1 < (long)uStack_260) {
              pppppppcVar9 = (code *******)&pppppppcStack_270;
            }
            pppppppuVar2 = (undefined *******)pppppppuVar22[6];
            if (-1 < (char)bVar5) {
              pppppppuVar2 = pppppppuVar22 + 6;
            }
            _memcmp(pppppppcVar9,pppppppuVar2);
            uStack_2f4 = (uint)((int)pppppppcVar9 != 0);
          }
          else {
            uStack_2f4 = 1;
          }
          if (0 < *(int *)(pppppuVar16 + 3)) {
            lVar19 = 0;
            do {
              if ((pppppuVar16[2] == (undefined ****)0x0) ||
                 (pppppuVar16[2][lVar19] == (undefined ***)0x0)) {
                func_0x00010ae02ecc(0,lVar19);
                unaff_x26 = &PTR_PTR_113304dc0;
                FUN_10ae079a0();
                func_0x00010ae02edc();
                FUN_10ae07cd4(unaff_x26,&PTR_PTR_113304dc0);
              }
              else {
                func_0x000107c2b054(&pppppppuStack_298);
                pppppppuVar22 = pppppppuVar28 + 7;
                FUN_10a8abef0(pppppppuVar22,&pppppppuStack_298);
                if (pppppppuVar22 == (undefined *******)0x0) {
                  FUN_10ae03140();
                  unaff_x26 = &PTR_PTR_113304e00;
                  unaff_x27 = &PTR_PTR_113304e00;
                  FUN_10ae079a0();
                  FUN_10ae0314c();
                  FUN_10ae07cd4(unaff_x26,&PTR_PTR_113304e00);
                }
                else {
                  unaff_x27 = (undefined **)pppppppuVar22[5];
                  unaff_x26 = (undefined **)pppppppuVar22[6];
                  if ((undefined ******)unaff_x26 != (undefined ******)0x0) {
                    ppppppuVar25 = (undefined ******)(unaff_x26 + 1);
                    do {
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
                      if (bVar7) {
                        *ppppppuVar25 = (undefined *****)((long)*ppppppuVar25 + 1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  unaff_x28 = (undefined **)(pppppppuVar28 + 0xc);
                  ppppppuStack_2a8 = (undefined ******)unaff_x27;
                  ppppppuStack_2a0 = (undefined ******)unaff_x26;
                  FUN_10a8aaad4(unaff_x28,unaff_x27);
                  if ((undefined *******)unaff_x28 == (undefined *******)0x0) {
                    FUN_10ae03140();
                    unaff_x28 = &PTR_PTR_113304e40;
                    unaff_x27 = unaff_x28;
                    FUN_10ae079a0();
                    FUN_10ae0314c();
                    FUN_10ae07cd4(unaff_x27,&PTR_PTR_113304e40);
                  }
                  else {
                    FUN_10a8602bc((undefined ******)((long)unaff_x28[4] + 0x48),uStack_280,
                                  plStack_278);
                    *(undefined1 *)((long)unaff_x28[4] + 0x35) = 2;
                    *(char *)(unaff_x27 + 0xc) = (char)uStack_2f4;
                    FUN_10a87a948(&pppppppuStack_2f0,&ppppppuStack_2a8);
                  }
                  if ((undefined ******)unaff_x26 != (undefined ******)0x0) {
                    ppppppuVar25 = (undefined ******)(unaff_x26 + 1);
                    do {
                      pppppuVar31 = *ppppppuVar25;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
                      if (bVar7) {
                        *ppppppuVar25 = (undefined *****)((long)pppppuVar31 + -1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (pppppuVar31 == (undefined *****)0x0) {
                      (*(code *)*(undefined *****)((long)*unaff_x26 + 0x10))(unaff_x26);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x26);
                    }
                  }
                }
                if (cStack_281 < '\0') {
                  __ZdlPv(pppppppuStack_298);
                }
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < *(int *)(pppppuVar16 + 3));
          }
          if (plStack_278 != (long *)0x0) {
            plVar10 = plStack_278 + 1;
            do {
              lVar19 = *plVar10;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar7) {
                *plVar10 = lVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_278 + 0x10))(plStack_278);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_278);
            }
          }
          if (uStack_260._7_1_ < '\0') {
            __ZdlPv(pppppppcStack_270);
          }
          pppppppuVar22 = pppppppuStack_2c0;
          pppppppuVar28 = pppppppuStack_2b8;
          if (pppppppuStack_2c0 != (undefined *******)0x0) {
            while (pppppppuVar28 != pppppppuVar22) {
              pppppppuVar28 = pppppppuVar28 + -2;
              FUN_10a297544();
            }
            pppppppuStack_2b8 = pppppppuVar22;
            __ZdlPv(pppppppuStack_2c0);
          }
        }
        pppppppuStack_2b8 = pppppppuStack_2e8;
        pppppppuStack_2c0 = pppppppuStack_2f0;
        lStack_2b0 = lStack_2e0;
        pppppppuStack_2e8 = (undefined *******)0x0;
        lStack_2e0 = 0;
        pppppppuStack_2f0 = (undefined *******)0x0;
        FUN_10a87f1e0(&pppppppuStack_2f0);
      }
      if (pppppppuVar29 != (undefined *******)0x0) {
        pppppppuVar28 = pppppppuVar29 + 1;
        do {
          ppppppuVar25 = *pppppppuVar28;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar28,0x10);
          if (bVar7) {
            *pppppppuVar28 = (undefined ******)((long)ppppppuVar25 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppppuVar25 == (undefined ******)0x0) {
          (*(code *)(*pppppppuVar29)[2])(pppppppuVar29);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar29);
        }
      }
      pppppppuStack_298 = ppppppppuVar13[0x48];
      if (pppppppuStack_298 == (undefined *******)0x0) {
        pppppppuVar29 = (undefined *******)0xd0;
        __Znwm();
        pppppppuVar29[1] = (undefined ******)0x0;
        pppppppuVar29[2] = (undefined ******)0x0;
        *pppppppuVar29 = (undefined ******)&PTR_FUN_110bf8238;
        pppppppuStack_298 = pppppppuVar29 + 3;
        *pppppppuStack_298 = (undefined ******)&PTR_FUN_110c25680;
        pppppppuVar29[0x17] = (undefined ******)0x0;
        pppppppuVar29[0x16] = (undefined ******)0x0;
        pppppppuVar29[0x19] = (undefined ******)0x0;
        pppppppuVar29[0x18] = (undefined ******)0x0;
        pppppppuVar29[9] = (undefined ******)0x0;
        pppppppuVar29[8] = (undefined ******)0x0;
        pppppppuVar29[0xb] = (undefined ******)0x0;
        pppppppuVar29[10] = (undefined ******)0x0;
        pppppppuVar29[0xd] = (undefined ******)0x0;
        pppppppuVar29[0xc] = (undefined ******)0x0;
        pppppppuVar29[0xf] = (undefined ******)0x0;
        pppppppuVar29[0xe] = (undefined ******)0x0;
        pppppppuVar29[5] = (undefined ******)0x0;
        pppppppuVar29[4] = (undefined ******)0x0;
        pppppppuVar29[7] = (undefined ******)0x0;
        pppppppuVar29[6] = (undefined ******)0x0;
        pppppppuVar29[0xe] = (undefined ******)0x0;
        pppppppuVar29[0xf] = (undefined ******)0xffffffffffffffff;
        pppppppuVar29[0x13] = (undefined ******)0x0;
        pppppppuVar29[0x12] = (undefined ******)0x0;
        pppppppuVar29[0x15] = (undefined ******)0x0;
        pppppppuVar29[0x14] = (undefined ******)0x0;
        pppppppuVar29[0x11] = (undefined ******)0x0;
        pppppppuVar29[0x10] = (undefined ******)0x0;
        *(undefined1 *)(pppppppuVar29 + 0x16) = 0;
        pppppppuStack_290 = pppppppuVar29;
      }
      else {
        pppppppuStack_290 = ppppppppuVar13[0x49];
        if (pppppppuStack_290 != (undefined *******)0x0) {
          pppppppuVar29 = pppppppuStack_290 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar29,0x10);
            if (bVar7) {
              *pppppppuVar29 = (undefined ******)((long)*pppppppuVar29 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
      }
      pppppppuVar29 = pppppppuStack_290;
      pppppppuVar2 = pppppppuStack_298;
      ppppuVar23 = pppppuVar16[1];
      plVar10 = (long *)0x60;
      __Znwm();
      lVar19 = lStack_2b0;
      pppppppuVar22 = pppppppuStack_2b8;
      pppppppuVar28 = pppppppuStack_2c0;
      plVar30 = plVar10 + 1;
      *plVar30 = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_DAT_110c24b08;
      ppppppuVar25 = (undefined ******)(plVar10 + 3);
      *ppppppuVar25 = (undefined *****)&PTR_FUN_110c23ba0;
      pppppppuStack_2c0 = (undefined *******)0x0;
      pppppppuStack_2b8 = (undefined *******)0x0;
      lStack_2b0 = 0;
      plVar10[4] = 0;
      plVar10[5] = 0;
      plVar10[6] = (long)pppppppuVar2;
      plVar10[7] = (long)pppppppuVar29;
      if (pppppppuVar29 != (undefined *******)0x0) {
        pppppppuVar29 = pppppppuVar29 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar29,0x10);
          if (bVar7) {
            *pppppppuVar29 = (undefined ******)((long)*pppppppuVar29 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plVar10[8] = (long)ppppuVar23;
      plVar10[10] = (long)pppppppuVar22;
      plVar10[9] = (long)pppppppuVar28;
      plVar10[0xb] = lVar19;
      ppppppuStack_268 = (undefined ******)0x0;
      uStack_260 = (undefined ******)0x0;
      pppppppcStack_270 = (code *******)0x0;
      FUN_10a87f1e0(&pppppppcStack_270);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar7) {
          *plVar30 = *plVar30 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      pppppppcStack_270 = (code *******)FUN_10a8986ec;
      ppppppuStack_268 = (undefined ******)&PTR_DAT_110c24b60;
      uStack_280 = 0;
      plStack_278 = (long *)0x0;
      pppppppcVar9 = (code *******)&pppppppcStack_270;
      pppppppuStack_2f0 = (undefined *******)ppppppuVar25;
      pppppppuStack_2e8 = (undefined *******)plVar10;
      uStack_260 = ppppppuVar25;
      plStack_258 = plVar10;
      FUN_10a860860(ppppppppuVar13);
      (*(code *)*ppppppuStack_268)(&ppppppuStack_268);
      do {
        lVar19 = *plVar30;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar7) {
          *plVar30 = lVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
      pppppppuVar29 = pppppppuStack_290;
      if (pppppppuStack_290 != (undefined *******)0x0) {
        pppppppuVar28 = pppppppuStack_290 + 1;
        do {
          ppppppuVar26 = *pppppppuVar28;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar28,0x10);
          if (bVar7) {
            *pppppppuVar28 = (undefined ******)((long)ppppppuVar26 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppppuVar26 == (undefined ******)0x0) {
          (*(code *)(*pppppppuStack_290)[2])(pppppppuStack_290);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar29);
        }
      }
      ppppppppuVar13 = &pppppppuStack_2c0;
      FUN_10a87f1e0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_230) {
        return ppppppppuVar13;
      }
      ___stack_chk_fail();
      FUN_10a87f1e0(&pppppppuStack_2c0);
      ppppppppuVar8 = ppppppppuVar13;
      __Unwind_Resume(ppppppppuVar13);
      pcStack_308 = FUN_10a865444;
      lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppppppuStack_330 = pppppppuVar2;
      pppppppcStack_328 = (code *******)&pppppppcStack_270;
      plStack_320 = plVar10;
      ppppppppuStack_318 = ppppppppuVar13;
      pppuStack_310 = &ppuStack_1d0;
      __ZNSt3__19to_stringEi(alStack_3d8,*(undefined2 *)pppppppcVar9);
      plVar10 = alStack_3d8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar10,0,&UNK_10f67ec68,6);
      ppppppuStack_3b8 = (undefined ******)plVar10[1];
      ppppppppuStack_3c0 = (undefined ********)*plVar10;
      ppppppuStack_3b0 = (undefined ******)plVar10[2];
      plVar10[1] = 0;
      plVar10[2] = 0;
      *plVar10 = 0;
      ppppppppuVar13 = (undefined ********)&ppppppppuStack_3c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppppuVar13,&UNK_10f67ec6f,9);
      pppppppuStack_378 = ppppppppuVar13[1];
      pppppppuStack_380 = *ppppppppuVar13;
      ppppppppuStack_370 = (undefined ********)ppppppppuVar13[2];
      ppppppppuVar13[1] = (undefined *******)0x0;
      ppppppppuVar13[2] = (undefined *******)0x0;
      *ppppppppuVar13 = (undefined *******)0x0;
      ppppppcVar3 = (code ******)&UNK_10f67d9eb;
      if (pppppppcVar9[1] != (code ******)0x0) {
        ppppppcVar3 = pppppppcVar9[1];
      }
      ppppppcVar11 = ppppppcVar3;
      _strlen(ppppppcVar3);
      pppppppuVar29 = (undefined *******)&pppppppuStack_380;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar29,ppppppcVar3,ppppppcVar11);
      ppppppuStack_398 = pppppppuVar29[1];
      ppppppppuStack_3a0 = (undefined ********)*pppppppuVar29;
      ppppppuStack_390 = pppppppuVar29[2];
      pppppppuVar29[1] = (undefined ******)0x0;
      pppppppuVar29[2] = (undefined ******)0x0;
      *pppppppuVar29 = (undefined ******)0x0;
      if ((long)ppppppppuStack_370 < 0) {
        __ZdlPv(pppppppuStack_380);
      }
      if ((long)ppppppuStack_3b0 < 0) {
        __ZdlPv(ppppppppuStack_3c0);
      }
      if (cStack_3c1 < '\0') {
        __ZdlPv(alStack_3d8[0]);
      }
      ppppppuVar26 = ppppppuStack_398;
      ppppppppuVar13 = ppppppppuStack_3a0;
      if (-1 < (long)ppppppuStack_390) {
        ppppppuVar26 = (undefined ******)((ulong)ppppppuStack_390 >> 0x38);
        ppppppppuVar13 = (undefined ********)&ppppppppuStack_3a0;
      }
      FUN_10ae03140(0,ppppppppuVar13,ppppppuVar26);
      ppuVar15 = &PTR_PTR_1133031a0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar15,&PTR_PTR_1133031a0);
      if ((long)ppppppuStack_390 < 0) {
        func_0x000107c3192c(&ppppppppuStack_3c0,ppppppppuStack_3a0,ppppppuStack_398);
      }
      else {
        ppppppuStack_3b8 = ppppppuStack_398;
        ppppppppuStack_3c0 = ppppppppuStack_3a0;
        ppppppuStack_3b0 = ppppppuStack_390;
      }
      pppppppuStack_380 = (undefined *******)FUN_10a898e24;
      pppppppuStack_378 = (undefined *******)&PTR_DAT_110c24b90;
      ppppppuStack_368 = ppppppuStack_3b8;
      ppppppppuStack_370 = ppppppppuStack_3c0;
      ppppppuStack_360 = ppppppuStack_3b0;
      ppppppppuStack_3c0 = (undefined ********)0x0;
      ppppppuStack_3b8 = (undefined ******)0x0;
      ppppppuStack_3b0 = (undefined ******)0x0;
      FUN_10a860860(ppppppppuVar8,&pppppppuStack_380);
      ppppppppuVar13 = &pppppppuStack_378;
      (*(code *)*pppppppuStack_378)();
      if ((long)ppppppuStack_3b0 < 0) {
        ppppppppuVar13 = ppppppppuStack_3c0;
        __ZdlPv();
      }
      if ((long)ppppppuStack_390 < 0) {
        ppppppppuVar13 = ppppppppuStack_3a0;
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
        return ppppppppuVar13;
      }
      ___stack_chk_fail();
      if ((long)ppppppuStack_390 < 0) {
        __ZdlPv(ppppppppuStack_3a0);
      }
      __Unwind_Resume(ppppppppuVar13);
      pcStack_3e8 = FUN_10a865700;
      ppuVar18 = &PTR_PTR_1133031d0;
      ppuVar17 = ppuVar18;
      pppppppuStack_400 = (undefined *******)&pppppppuStack_380;
      ppppppppuStack_3f8 = ppppppppuVar13;
      ppppuStack_3f0 = &pppuStack_310;
      FUN_10ae079a0(0);
      lStack_450 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppppppppuVar13 = (undefined ********)0x0;
      pppppppuStack_440 = (undefined *******)unaff_x28;
      ppppppuStack_438 = (undefined ******)unaff_x27;
      ppppppuStack_430 = (undefined ******)unaff_x26;
      ppppuStack_428 = ppppuVar23;
      ppppppuStack_420 = ppppppuVar25;
      plStack_418 = plVar30;
      ppppppppuStack_410 = (undefined ********)&ppppppppuStack_3a0;
      ppuStack_408 = ppuVar15;
      if (ppuVar17 != (undefined **)0x0) {
        FUN_10ae03188(&puStack_c88,auStack_850,0x400,auStack_c50,0x400,ppuVar17[0x13],ppuVar17[0xf],
                      ppuVar17 + 0x14,0x400);
        puStack_cf8 = puStack_c70;
        uStack_cf0 = uStack_c68;
        puStack_ce0 = puStack_c88;
        uStack_cd8 = uStack_c80;
        uStack_ce8 = uStack_c60;
        if (iStack_c58 != 0) {
          puStack_cf8 = &UNK_10f6c352e;
          uStack_cf0 = 0x10;
          puStack_ce0 = &UNK_10f6c352e;
          uStack_cd8 = 0x10;
          uStack_ce8 = 0;
          uStack_c78 = 0;
        }
        puVar20 = ppuVar17[0x12];
        puVar21 = ppuVar17[0xb];
        uVar27 = 0;
        _clock_gettime_nsec_np();
        uVar12 = uVar27;
        _pthread_self();
        _pthread_mach_thread_np();
        ppuStack_cc8 = ppuVar17 + 1;
        uStack_c98 = *(undefined4 *)(ppuVar17 + 0xe);
        uStack_ca0 = uVar12 & 0xffffffff;
        ppuStack_c90 = ppuVar17 + 0x10;
        ppppppppuVar13 = (undefined ********)*ppuVar17;
        ppuVar18 = (undefined **)&ppuStack_cc8;
        uStack_cd0 = uStack_c78;
        puStack_cc0 = puVar21;
        puStack_cb8 = puVar20;
        uStack_cb0 = (ulong)(puVar20 != (undefined *)0x0);
        uStack_ca8 = uVar27;
        FUN_10ae0784c(ppppppppuVar13,ppuVar18,&puStack_ce0,&puStack_cf8);
      }
      iVar14 = (int)ppuVar18;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_450) {
        return ppppppppuVar13;
      }
      ___stack_chk_fail();
      if (iVar14 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(ppppppppuVar13);
      return ppppppppuVar13;
    }
    uVar24 = (long)ppppppppuVar8[2] - (long)*ppppppppuVar8;
    uVar27 = (long)uVar24 >> 3;
    if (uVar27 <= uVar12) {
      uVar27 = uVar12;
    }
    if (0x7fffffffffffffef < uVar24) {
      uVar27 = 0xfffffffffffffff;
    }
    pppppuVar16 = pppppuVar31;
    ppppppppuStack_198 = ppppppppuVar8;
    puStack_180 = (undefined1 *)&puStack_160;
    func_0x00010a87ed44();
    puVar1 = (undefined8 *)(uVar27 + lVar19);
    ppppuVar23 = pppppuVar31[1];
    ppppuVar32 = *pppppuVar31;
    puVar1[1] = pppppuVar31[1];
    *puVar1 = ppppuVar32;
    if (ppppuVar23 != (undefined ****)0x0) {
      ppppuVar23 = ppppuVar23 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar23,0x10);
        if (bVar7) {
          *ppppuVar23 = (undefined ***)((long)*ppppuVar23 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    pppppppuVar29 = (undefined *******)(puVar1 + 2);
    pppppppuVar28 =
         (undefined *******)((long)puVar1 - ((long)ppppppppuVar8[1] - (long)*ppppppppuVar8));
    _memcpy(pppppppuVar28);
    pppppppuStack_1b8 = *ppppppppuVar8;
    *ppppppppuVar8 = pppppppuVar28;
    ppppppppuVar8[1] = pppppppuVar29;
    pppppppuStack_1a0 = ppppppppuVar8[2];
    ppppppppuVar8[2] = (undefined *******)(uVar27 + (long)pppppuVar16 * 0x10);
    ppppppppuVar13 = &pppppppuStack_1b8;
    pppppppuStack_1b0 = pppppppuStack_1b8;
    pppppppuStack_1a8 = pppppppuStack_1b8;
    func_0x00010a87ed78(ppppppppuVar13);
  }
  ppppppppuVar8[1] = pppppppuVar29;
  return ppppppppuVar13;
}



/* Entry: 10a864ca4; end: 10a864db7;  */

/* WARNING: Type propagation algorithm not settling */

undefined ******** FUN_10a864ca4(undefined ********param_1,long *param_2)

{
  long *plVar1;
  undefined *******pppppppuVar2;
  code ******ppppppcVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *******pppppppcVar7;
  long *plVar8;
  undefined ********ppppppppuVar9;
  code ******ppppppcVar10;
  ulong uVar11;
  undefined ********ppppppppuVar12;
  int iVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *******pppppppuVar18;
  long lVar19;
  ulong uVar20;
  undefined *****pppppuVar21;
  undefined ******ppppppuVar22;
  undefined ******ppppppuVar23;
  ulong uVar24;
  undefined *******pppppppuVar25;
  undefined *******pppppppuVar26;
  undefined *puVar27;
  long lVar28;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined *puVar29;
  undefined **unaff_x28;
  undefined *puStack_b98;
  undefined8 uStack_b90;
  undefined1 uStack_b88;
  undefined *puStack_b80;
  undefined8 uStack_b78;
  undefined1 uStack_b70;
  undefined **ppuStack_b68;
  undefined *puStack_b60;
  undefined *puStack_b58;
  ulong uStack_b50;
  ulong uStack_b48;
  ulong uStack_b40;
  undefined4 uStack_b38;
  undefined **ppuStack_b30;
  undefined *puStack_b28;
  undefined8 uStack_b20;
  undefined1 uStack_b18;
  undefined *puStack_b10;
  undefined8 uStack_b08;
  undefined1 uStack_b00;
  int iStack_af8;
  undefined1 auStack_af0 [1024];
  undefined1 auStack_6f0 [1024];
  long lStack_2f0;
  undefined *******pppppppuStack_2e0;
  undefined ******ppppppuStack_2d8;
  undefined ******ppppppuStack_2d0;
  long lStack_2c8;
  undefined ******ppppppuStack_2c0;
  long *plStack_2b8;
  undefined ********ppppppppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined *******pppppppuStack_2a0;
  undefined ********ppppppppuStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  long alStack_278 [2];
  char cStack_261;
  undefined ********ppppppppuStack_260;
  undefined ******ppppppuStack_258;
  undefined ******ppppppuStack_250;
  undefined ********ppppppppuStack_240;
  undefined ******ppppppuStack_238;
  undefined ******ppppppuStack_230;
  undefined *******pppppppuStack_220;
  undefined *******pppppppuStack_218;
  undefined ********ppppppppuStack_210;
  undefined ******ppppppuStack_208;
  undefined ******ppppppuStack_200;
  long lStack_1d8;
  undefined *******pppppppuStack_1d0;
  code *******pppppppcStack_1c8;
  long *plStack_1c0;
  undefined ********ppppppppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  uint uStack_194;
  undefined *******pppppppuStack_190;
  undefined *******pppppppuStack_188;
  long lStack_180;
  undefined *******pppppppuStack_170;
  undefined *******pppppppuStack_168;
  undefined *******pppppppuStack_160;
  undefined *******pppppppuStack_158;
  long lStack_150;
  undefined ******ppppppuStack_148;
  undefined ******ppppppuStack_140;
  undefined *******pppppppuStack_138;
  undefined *******pppppppuStack_130;
  char cStack_121;
  undefined8 uStack_120;
  long *plStack_118;
  code *******pppppppcStack_110;
  undefined ******ppppppuStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long lStack_d0;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *******pppppppuStack_58;
  undefined *******pppppppuStack_50;
  undefined *******pppppppuStack_48;
  undefined *******pppppppuStack_40;
  undefined ********ppppppppuStack_38;
  
  pppppppuVar26 = param_1[1];
  if (pppppppuVar26 < param_1[2]) {
    lVar19 = param_2[1];
    ppppppuVar22 = (undefined ******)*param_2;
    pppppppuVar26[1] = (undefined ******)param_2[1];
    *pppppppuVar26 = ppppppuVar22;
    if (lVar19 != 0) {
      plVar8 = (long *)(lVar19 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppppppuVar26 = pppppppuVar26 + 2;
    ppppppppuVar12 = param_1;
  }
  else {
    lVar19 = (long)pppppppuVar26 - (long)*param_1;
    uVar11 = (lVar19 >> 4) + 1;
    if (uVar11 >> 0x3c != 0) {
      FUN_10a87ed30();
      pcStack_68 = FUN_10a864db8;
      lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar15 = &PTR_PTR_113304058;
      puStack_70 = &stack0xfffffffffffffff0;
      FUN_10ae079a0(0,&PTR_PTR_113304058);
      FUN_10ae07cd4(ppuVar15,&PTR_PTR_113304058);
      FUN_10a860bc8(param_1,param_2);
      pppppppuStack_160 = (undefined *******)0x0;
      pppppppuStack_158 = (undefined *******)0x0;
      lStack_150 = 0;
      pppppppuVar25 = param_1[0xae];
      pppppppuVar26 = param_1[0xaf];
      if (pppppppuVar26 != (undefined *******)0x0) {
        pppppppuVar18 = pppppppuVar26 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
          if (bVar6) {
            *pppppppuVar18 = (undefined ******)((long)*pppppppuVar18 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppppppuStack_170 = pppppppuVar25;
      pppppppuStack_168 = pppppppuVar26;
      if (pppppppuVar25 != (undefined *******)0x0) {
        pppppppuStack_190 = (undefined *******)0x0;
        pppppppuStack_188 = (undefined *******)0x0;
        lStack_180 = 0;
        if (*param_2 != 0) {
          func_0x000107c2b054(&pppppppcStack_110);
          FUN_10a87a708(&uStack_120,param_1,&pppppppcStack_110);
          pppppppuVar18 = param_1[0x46];
          if (-1 < (long)uStack_100) {
            ppppppuStack_108 = (undefined ******)((ulong)uStack_100 >> 0x38);
          }
          bVar4 = *(byte *)((long)pppppppuVar18 + 0x47);
          ppppppuVar22 = pppppppuVar18[7];
          if (-1 < (char)bVar4) {
            ppppppuVar22 = (undefined ******)(ulong)bVar4;
          }
          if (ppppppuStack_108 == ppppppuVar22) {
            pppppppcVar7 = pppppppcStack_110;
            if (-1 < (long)uStack_100) {
              pppppppcVar7 = (code *******)&pppppppcStack_110;
            }
            pppppppuVar2 = (undefined *******)pppppppuVar18[6];
            if (-1 < (char)bVar4) {
              pppppppuVar2 = pppppppuVar18 + 6;
            }
            _memcmp(pppppppcVar7,pppppppuVar2);
            uStack_194 = (uint)((int)pppppppcVar7 != 0);
          }
          else {
            uStack_194 = 1;
          }
          if (0 < (int)param_2[3]) {
            lVar19 = 0;
            do {
              if ((param_2[2] == 0) || (*(long *)(param_2[2] + lVar19 * 8) == 0)) {
                func_0x00010ae02ecc(0,lVar19);
                unaff_x26 = &PTR_PTR_113304dc0;
                FUN_10ae079a0();
                func_0x00010ae02edc();
                FUN_10ae07cd4(unaff_x26,&PTR_PTR_113304dc0);
              }
              else {
                func_0x000107c2b054(&pppppppuStack_138);
                pppppppuVar18 = pppppppuVar25 + 7;
                FUN_10a8abef0(pppppppuVar18,&pppppppuStack_138);
                if (pppppppuVar18 == (undefined *******)0x0) {
                  FUN_10ae03140();
                  unaff_x26 = &PTR_PTR_113304e00;
                  unaff_x27 = &PTR_PTR_113304e00;
                  FUN_10ae079a0();
                  FUN_10ae0314c();
                  FUN_10ae07cd4(unaff_x26,&PTR_PTR_113304e00);
                }
                else {
                  unaff_x27 = (undefined **)pppppppuVar18[5];
                  unaff_x26 = (undefined **)pppppppuVar18[6];
                  if ((undefined ******)unaff_x26 != (undefined ******)0x0) {
                    ppppppuVar22 = (undefined ******)(unaff_x26 + 1);
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar22,0x10);
                      if (bVar6) {
                        *ppppppuVar22 = (undefined *****)((long)*ppppppuVar22 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  unaff_x28 = (undefined **)(pppppppuVar25 + 0xc);
                  ppppppuStack_148 = (undefined ******)unaff_x27;
                  ppppppuStack_140 = (undefined ******)unaff_x26;
                  FUN_10a8aaad4(unaff_x28,unaff_x27);
                  if ((undefined *******)unaff_x28 == (undefined *******)0x0) {
                    FUN_10ae03140();
                    unaff_x28 = &PTR_PTR_113304e40;
                    unaff_x27 = unaff_x28;
                    FUN_10ae079a0();
                    FUN_10ae0314c();
                    FUN_10ae07cd4(unaff_x27,&PTR_PTR_113304e40);
                  }
                  else {
                    FUN_10a8602bc((undefined ******)((long)unaff_x28[4] + 0x48),uStack_120,
                                  plStack_118);
                    *(undefined1 *)((long)unaff_x28[4] + 0x35) = 2;
                    *(char *)(unaff_x27 + 0xc) = (char)uStack_194;
                    FUN_10a87a948(&pppppppuStack_190,&ppppppuStack_148);
                  }
                  if ((undefined ******)unaff_x26 != (undefined ******)0x0) {
                    ppppppuVar22 = (undefined ******)(unaff_x26 + 1);
                    do {
                      pppppuVar21 = *ppppppuVar22;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar22,0x10);
                      if (bVar6) {
                        *ppppppuVar22 = (undefined *****)((long)pppppuVar21 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (pppppuVar21 == (undefined *****)0x0) {
                      (*(code *)*(undefined *****)((long)*unaff_x26 + 0x10))(unaff_x26);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x26);
                    }
                  }
                }
                if (cStack_121 < '\0') {
                  __ZdlPv(pppppppuStack_138);
                }
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < (int)param_2[3]);
          }
          if (plStack_118 != (long *)0x0) {
            plVar8 = plStack_118 + 1;
            do {
              lVar19 = *plVar8;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *plVar8 = lVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_118 + 0x10))(plStack_118);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
            }
          }
          if (uStack_100._7_1_ < '\0') {
            __ZdlPv(pppppppcStack_110);
          }
          pppppppuVar18 = pppppppuStack_160;
          pppppppuVar25 = pppppppuStack_158;
          if (pppppppuStack_160 != (undefined *******)0x0) {
            while (pppppppuVar25 != pppppppuVar18) {
              pppppppuVar25 = pppppppuVar25 + -2;
              FUN_10a297544();
            }
            pppppppuStack_158 = pppppppuVar18;
            __ZdlPv(pppppppuStack_160);
          }
        }
        pppppppuStack_158 = pppppppuStack_188;
        pppppppuStack_160 = pppppppuStack_190;
        lStack_150 = lStack_180;
        pppppppuStack_188 = (undefined *******)0x0;
        lStack_180 = 0;
        pppppppuStack_190 = (undefined *******)0x0;
        FUN_10a87f1e0(&pppppppuStack_190);
      }
      if (pppppppuVar26 != (undefined *******)0x0) {
        pppppppuVar25 = pppppppuVar26 + 1;
        do {
          ppppppuVar22 = *pppppppuVar25;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar25,0x10);
          if (bVar6) {
            *pppppppuVar25 = (undefined ******)((long)ppppppuVar22 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppppuVar22 == (undefined ******)0x0) {
          (*(code *)(*pppppppuVar26)[2])(pppppppuVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar26);
        }
      }
      pppppppuStack_138 = param_1[0x48];
      if (pppppppuStack_138 == (undefined *******)0x0) {
        pppppppuVar26 = (undefined *******)0xd0;
        __Znwm();
        pppppppuVar26[1] = (undefined ******)0x0;
        pppppppuVar26[2] = (undefined ******)0x0;
        *pppppppuVar26 = (undefined ******)&PTR_FUN_110bf8238;
        pppppppuStack_138 = pppppppuVar26 + 3;
        *pppppppuStack_138 = (undefined ******)&PTR_FUN_110c25680;
        pppppppuVar26[0x17] = (undefined ******)0x0;
        pppppppuVar26[0x16] = (undefined ******)0x0;
        pppppppuVar26[0x19] = (undefined ******)0x0;
        pppppppuVar26[0x18] = (undefined ******)0x0;
        pppppppuVar26[9] = (undefined ******)0x0;
        pppppppuVar26[8] = (undefined ******)0x0;
        pppppppuVar26[0xb] = (undefined ******)0x0;
        pppppppuVar26[10] = (undefined ******)0x0;
        pppppppuVar26[0xd] = (undefined ******)0x0;
        pppppppuVar26[0xc] = (undefined ******)0x0;
        pppppppuVar26[0xf] = (undefined ******)0x0;
        pppppppuVar26[0xe] = (undefined ******)0x0;
        pppppppuVar26[5] = (undefined ******)0x0;
        pppppppuVar26[4] = (undefined ******)0x0;
        pppppppuVar26[7] = (undefined ******)0x0;
        pppppppuVar26[6] = (undefined ******)0x0;
        pppppppuVar26[0xe] = (undefined ******)0x0;
        pppppppuVar26[0xf] = (undefined ******)0xffffffffffffffff;
        pppppppuVar26[0x13] = (undefined ******)0x0;
        pppppppuVar26[0x12] = (undefined ******)0x0;
        pppppppuVar26[0x15] = (undefined ******)0x0;
        pppppppuVar26[0x14] = (undefined ******)0x0;
        pppppppuVar26[0x11] = (undefined ******)0x0;
        pppppppuVar26[0x10] = (undefined ******)0x0;
        *(undefined1 *)(pppppppuVar26 + 0x16) = 0;
        pppppppuStack_130 = pppppppuVar26;
      }
      else {
        pppppppuStack_130 = param_1[0x49];
        if (pppppppuStack_130 != (undefined *******)0x0) {
          pppppppuVar26 = pppppppuStack_130 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar26,0x10);
            if (bVar6) {
              *pppppppuVar26 = (undefined ******)((long)*pppppppuVar26 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      pppppppuVar26 = pppppppuStack_130;
      pppppppuVar2 = pppppppuStack_138;
      lVar28 = param_2[1];
      plVar8 = (long *)0x60;
      __Znwm();
      lVar19 = lStack_150;
      pppppppuVar18 = pppppppuStack_158;
      pppppppuVar25 = pppppppuStack_160;
      plVar14 = plVar8 + 1;
      *plVar14 = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_DAT_110c24b08;
      ppppppuVar22 = (undefined ******)(plVar8 + 3);
      *ppppppuVar22 = (undefined *****)&PTR_FUN_110c23ba0;
      pppppppuStack_160 = (undefined *******)0x0;
      pppppppuStack_158 = (undefined *******)0x0;
      lStack_150 = 0;
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[6] = (long)pppppppuVar2;
      plVar8[7] = (long)pppppppuVar26;
      if (pppppppuVar26 != (undefined *******)0x0) {
        pppppppuVar26 = pppppppuVar26 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar26,0x10);
          if (bVar6) {
            *pppppppuVar26 = (undefined ******)((long)*pppppppuVar26 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar8[8] = lVar28;
      plVar8[10] = (long)pppppppuVar18;
      plVar8[9] = (long)pppppppuVar25;
      plVar8[0xb] = lVar19;
      ppppppuStack_108 = (undefined ******)0x0;
      uStack_100 = (undefined ******)0x0;
      pppppppcStack_110 = (code *******)0x0;
      FUN_10a87f1e0(&pppppppcStack_110);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = *plVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pppppppcStack_110 = (code *******)FUN_10a8986ec;
      ppppppuStack_108 = (undefined ******)&PTR_DAT_110c24b60;
      uStack_120 = 0;
      plStack_118 = (long *)0x0;
      pppppppcVar7 = (code *******)&pppppppcStack_110;
      pppppppuStack_190 = (undefined *******)ppppppuVar22;
      pppppppuStack_188 = (undefined *******)plVar8;
      uStack_100 = ppppppuVar22;
      plStack_f8 = plVar8;
      FUN_10a860860(param_1);
      (*(code *)*ppppppuStack_108)(&ppppppuStack_108);
      do {
        lVar19 = *plVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
      pppppppuVar26 = pppppppuStack_130;
      if (pppppppuStack_130 != (undefined *******)0x0) {
        pppppppuVar25 = pppppppuStack_130 + 1;
        do {
          ppppppuVar23 = *pppppppuVar25;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar25,0x10);
          if (bVar6) {
            *pppppppuVar25 = (undefined ******)((long)ppppppuVar23 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppppuVar23 == (undefined ******)0x0) {
          (*(code *)(*pppppppuStack_130)[2])(pppppppuStack_130);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar26);
        }
      }
      ppppppppuVar12 = &pppppppuStack_160;
      FUN_10a87f1e0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
        return ppppppppuVar12;
      }
      ___stack_chk_fail();
      FUN_10a87f1e0(&pppppppuStack_160);
      ppppppppuVar9 = ppppppppuVar12;
      __Unwind_Resume(ppppppppuVar12);
      pcStack_1a8 = FUN_10a865444;
      lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppppppuStack_1d0 = pppppppuVar2;
      pppppppcStack_1c8 = (code *******)&pppppppcStack_110;
      plStack_1c0 = plVar8;
      ppppppppuStack_1b8 = ppppppppuVar12;
      ppuStack_1b0 = &puStack_70;
      __ZNSt3__19to_stringEi(alStack_278,*(undefined2 *)pppppppcVar7);
      plVar8 = alStack_278;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar8,0,&UNK_10f67ec68,6);
      ppppppuStack_258 = (undefined ******)plVar8[1];
      ppppppppuStack_260 = (undefined ********)*plVar8;
      ppppppuStack_250 = (undefined ******)plVar8[2];
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = 0;
      ppppppppuVar12 = (undefined ********)&ppppppppuStack_260;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppppuVar12,&UNK_10f67ec6f,9);
      pppppppuStack_218 = ppppppppuVar12[1];
      pppppppuStack_220 = *ppppppppuVar12;
      ppppppppuStack_210 = (undefined ********)ppppppppuVar12[2];
      ppppppppuVar12[1] = (undefined *******)0x0;
      ppppppppuVar12[2] = (undefined *******)0x0;
      *ppppppppuVar12 = (undefined *******)0x0;
      ppppppcVar3 = (code ******)&UNK_10f67d9eb;
      if (pppppppcVar7[1] != (code ******)0x0) {
        ppppppcVar3 = pppppppcVar7[1];
      }
      ppppppcVar10 = ppppppcVar3;
      _strlen(ppppppcVar3);
      pppppppuVar26 = (undefined *******)&pppppppuStack_220;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar26,ppppppcVar3,ppppppcVar10);
      ppppppuStack_238 = pppppppuVar26[1];
      ppppppppuStack_240 = (undefined ********)*pppppppuVar26;
      ppppppuStack_230 = pppppppuVar26[2];
      pppppppuVar26[1] = (undefined ******)0x0;
      pppppppuVar26[2] = (undefined ******)0x0;
      *pppppppuVar26 = (undefined ******)0x0;
      if ((long)ppppppppuStack_210 < 0) {
        __ZdlPv(pppppppuStack_220);
      }
      if ((long)ppppppuStack_250 < 0) {
        __ZdlPv(ppppppppuStack_260);
      }
      if (cStack_261 < '\0') {
        __ZdlPv(alStack_278[0]);
      }
      ppppppuVar23 = ppppppuStack_238;
      ppppppppuVar12 = ppppppppuStack_240;
      if (-1 < (long)ppppppuStack_230) {
        ppppppuVar23 = (undefined ******)((ulong)ppppppuStack_230 >> 0x38);
        ppppppppuVar12 = (undefined ********)&ppppppppuStack_240;
      }
      FUN_10ae03140(0,ppppppppuVar12,ppppppuVar23);
      ppuVar15 = &PTR_PTR_1133031a0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar15,&PTR_PTR_1133031a0);
      if ((long)ppppppuStack_230 < 0) {
        func_0x000107c3192c(&ppppppppuStack_260,ppppppppuStack_240,ppppppuStack_238);
      }
      else {
        ppppppuStack_258 = ppppppuStack_238;
        ppppppppuStack_260 = ppppppppuStack_240;
        ppppppuStack_250 = ppppppuStack_230;
      }
      pppppppuStack_220 = (undefined *******)FUN_10a898e24;
      pppppppuStack_218 = (undefined *******)&PTR_DAT_110c24b90;
      ppppppuStack_208 = ppppppuStack_258;
      ppppppppuStack_210 = ppppppppuStack_260;
      ppppppuStack_200 = ppppppuStack_250;
      ppppppppuStack_260 = (undefined ********)0x0;
      ppppppuStack_258 = (undefined ******)0x0;
      ppppppuStack_250 = (undefined ******)0x0;
      FUN_10a860860(ppppppppuVar9,&pppppppuStack_220);
      ppppppppuVar12 = &pppppppuStack_218;
      (*(code *)*pppppppuStack_218)();
      if ((long)ppppppuStack_250 < 0) {
        ppppppppuVar12 = ppppppppuStack_260;
        __ZdlPv();
      }
      if ((long)ppppppuStack_230 < 0) {
        ppppppppuVar12 = ppppppppuStack_240;
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
        return ppppppppuVar12;
      }
      ___stack_chk_fail();
      if ((long)ppppppuStack_230 < 0) {
        __ZdlPv(ppppppppuStack_240);
      }
      __Unwind_Resume(ppppppppuVar12);
      pcStack_288 = FUN_10a865700;
      ppuVar17 = &PTR_PTR_1133031d0;
      ppuVar16 = ppuVar17;
      pppppppuStack_2a0 = (undefined *******)&pppppppuStack_220;
      ppppppppuStack_298 = ppppppppuVar12;
      pppuStack_290 = &ppuStack_1b0;
      FUN_10ae079a0(0);
      lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppppppppuVar12 = (undefined ********)0x0;
      pppppppuStack_2e0 = (undefined *******)unaff_x28;
      ppppppuStack_2d8 = (undefined ******)unaff_x27;
      ppppppuStack_2d0 = (undefined ******)unaff_x26;
      lStack_2c8 = lVar28;
      ppppppuStack_2c0 = ppppppuVar22;
      plStack_2b8 = plVar14;
      ppppppppuStack_2b0 = (undefined ********)&ppppppppuStack_240;
      ppuStack_2a8 = ppuVar15;
      if (ppuVar16 != (undefined **)0x0) {
        FUN_10ae03188(&puStack_b28,auStack_6f0,0x400,auStack_af0,0x400,ppuVar16[0x13],ppuVar16[0xf],
                      ppuVar16 + 0x14,0x400);
        puStack_b98 = puStack_b10;
        uStack_b90 = uStack_b08;
        puStack_b80 = puStack_b28;
        uStack_b78 = uStack_b20;
        uStack_b88 = uStack_b00;
        if (iStack_af8 != 0) {
          puStack_b98 = &UNK_10f6c352e;
          uStack_b90 = 0x10;
          puStack_b80 = &UNK_10f6c352e;
          uStack_b78 = 0x10;
          uStack_b88 = 0;
          uStack_b18 = 0;
        }
        puVar29 = ppuVar16[0x12];
        puVar27 = ppuVar16[0xb];
        uVar24 = 0;
        _clock_gettime_nsec_np();
        uVar11 = uVar24;
        _pthread_self();
        _pthread_mach_thread_np();
        ppuStack_b68 = ppuVar16 + 1;
        uStack_b38 = *(undefined4 *)(ppuVar16 + 0xe);
        uStack_b40 = uVar11 & 0xffffffff;
        ppuStack_b30 = ppuVar16 + 0x10;
        ppppppppuVar12 = (undefined ********)*ppuVar16;
        ppuVar17 = (undefined **)&ppuStack_b68;
        uStack_b70 = uStack_b18;
        puStack_b60 = puVar27;
        puStack_b58 = puVar29;
        uStack_b50 = (ulong)(puVar29 != (undefined *)0x0);
        uStack_b48 = uVar24;
        FUN_10ae0784c(ppppppppuVar12,ppuVar17,&puStack_b80,&puStack_b98);
      }
      iVar13 = (int)ppuVar17;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
        return ppppppppuVar12;
      }
      ___stack_chk_fail();
      if (iVar13 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(ppppppppuVar12);
      return ppppppppuVar12;
    }
    uVar20 = (long)param_1[2] - (long)*param_1;
    uVar24 = (long)uVar20 >> 3;
    if (uVar24 <= uVar11) {
      uVar24 = uVar11;
    }
    if (0x7fffffffffffffef < uVar20) {
      uVar24 = 0xfffffffffffffff;
    }
    plVar14 = param_2;
    ppppppppuStack_38 = param_1;
    FUN_10a87ed44();
    plVar8 = (long *)(uVar24 + lVar19);
    lVar19 = param_2[1];
    lVar28 = *param_2;
    plVar8[1] = param_2[1];
    *plVar8 = lVar28;
    if (lVar19 != 0) {
      plVar1 = (long *)(lVar19 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppppppuVar26 = (undefined *******)(plVar8 + 2);
    pppppppuVar25 = (undefined *******)((long)plVar8 - ((long)param_1[1] - (long)*param_1));
    _memcpy(pppppppuVar25);
    pppppppuStack_58 = *param_1;
    *param_1 = pppppppuVar25;
    param_1[1] = pppppppuVar26;
    pppppppuStack_40 = param_1[2];
    param_1[2] = (undefined *******)(uVar24 + (long)plVar14 * 0x10);
    ppppppppuVar12 = &pppppppuStack_58;
    pppppppuStack_50 = pppppppuStack_58;
    pppppppuStack_48 = pppppppuStack_58;
    func_0x00010a87ed78(ppppppppuVar12);
  }
  param_1[1] = pppppppuVar26;
  return ppppppppuVar12;
}



/* Entry: 10a864db8; end: 10a865443;  */

/* WARNING: Type propagation algorithm not settling */

undefined ******** FUN_10a864db8(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  code ******ppppppcVar3;
  undefined ******ppppppuVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *******pppppppuVar8;
  code *******pppppppcVar9;
  long lVar10;
  undefined *******pppppppuVar11;
  long *plVar12;
  undefined ********ppppppppuVar13;
  code ******ppppppcVar14;
  ulong uVar15;
  ulong uVar16;
  undefined ********ppppppppuVar17;
  int iVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long lVar22;
  long *plVar23;
  undefined *puVar24;
  long *plVar25;
  undefined ******ppppppuVar26;
  long lVar27;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined *puVar28;
  undefined **unaff_x28;
  undefined *puStack_b38;
  undefined8 uStack_b30;
  undefined1 uStack_b28;
  undefined *puStack_b20;
  undefined8 uStack_b18;
  undefined1 uStack_b10;
  undefined **ppuStack_b08;
  undefined *puStack_b00;
  undefined *puStack_af8;
  ulong uStack_af0;
  ulong uStack_ae8;
  ulong uStack_ae0;
  undefined4 uStack_ad8;
  undefined **ppuStack_ad0;
  undefined *puStack_ac8;
  undefined8 uStack_ac0;
  undefined1 uStack_ab8;
  undefined *puStack_ab0;
  undefined8 uStack_aa8;
  undefined1 uStack_aa0;
  int iStack_a98;
  undefined1 auStack_a90 [1024];
  undefined1 auStack_690 [1024];
  long lStack_290;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  long lStack_268;
  undefined ******ppppppuStack_260;
  long *plStack_258;
  undefined ********ppppppppuStack_250;
  undefined **ppuStack_248;
  undefined *******pppppppuStack_240;
  undefined ********ppppppppuStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  long alStack_218 [2];
  char cStack_201;
  undefined ********ppppppppuStack_200;
  undefined ******ppppppuStack_1f8;
  undefined ******ppppppuStack_1f0;
  undefined ********ppppppppuStack_1e0;
  undefined ******ppppppuStack_1d8;
  undefined ******ppppppuStack_1d0;
  undefined *******pppppppuStack_1c0;
  undefined *******pppppppuStack_1b8;
  undefined ********ppppppppuStack_1b0;
  undefined ******ppppppuStack_1a8;
  undefined ******ppppppuStack_1a0;
  long lStack_178;
  long *plStack_170;
  code *******pppppppcStack_168;
  long *plStack_160;
  undefined ********ppppppppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  uint uStack_134;
  undefined *******pppppppuStack_130;
  undefined *******pppppppuStack_128;
  long lStack_120;
  long lStack_110;
  long *plStack_108;
  undefined *******pppppppuStack_100;
  undefined *******pppppppuStack_f8;
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  char cStack_c1;
  undefined8 uStack_c0;
  long *plStack_b8;
  code *******pppppppcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar19 = &PTR_PTR_113304058;
  FUN_10ae079a0(0,&PTR_PTR_113304058);
  FUN_10ae07cd4(ppuVar19,&PTR_PTR_113304058);
  FUN_10a860bc8(param_1,param_2);
  pppppppuStack_100 = (undefined *******)0x0;
  pppppppuStack_f8 = (undefined *******)0x0;
  lStack_f0 = 0;
  lVar27 = *(long *)(param_1 + 0x570);
  plVar23 = *(long **)(param_1 + 0x578);
  if (plVar23 != (long *)0x0) {
    plVar2 = plVar23 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lStack_110 = lVar27;
  plStack_108 = plVar23;
  if (lVar27 != 0) {
    pppppppuStack_130 = (undefined *******)0x0;
    pppppppuStack_128 = (undefined *******)0x0;
    lStack_120 = 0;
    if (*param_2 != 0) {
      func_0x000107c2b054(&pppppppcStack_b0);
      FUN_10a87a708(&uStack_c0,param_1,&pppppppcStack_b0);
      lVar22 = *(long *)(param_1 + 0x230);
      if (-1 < (long)uStack_a0) {
        ppuStack_a8 = (undefined **)((ulong)uStack_a0 >> 0x38);
      }
      bVar5 = *(byte *)(lVar22 + 0x47);
      ppuVar19 = *(undefined ***)(lVar22 + 0x38);
      if (-1 < (char)bVar5) {
        ppuVar19 = (undefined **)(ulong)bVar5;
      }
      if (ppuStack_a8 == ppuVar19) {
        pppppppcVar9 = pppppppcStack_b0;
        if (-1 < (long)uStack_a0) {
          pppppppcVar9 = (code *******)&pppppppcStack_b0;
        }
        plVar2 = (long *)*(long *)(lVar22 + 0x30);
        if (-1 < (char)bVar5) {
          plVar2 = (long *)(lVar22 + 0x30);
        }
        _memcmp(pppppppcVar9,plVar2);
        uStack_134 = (uint)((int)pppppppcVar9 != 0);
      }
      else {
        uStack_134 = 1;
      }
      if (0 < (int)param_2[3]) {
        lVar22 = 0;
        do {
          if ((param_2[2] == 0) || (*(long *)(param_2[2] + lVar22 * 8) == 0)) {
            func_0x00010ae02ecc(0,lVar22);
            unaff_x26 = &PTR_PTR_113304dc0;
            FUN_10ae079a0();
            func_0x00010ae02edc();
            FUN_10ae07cd4(unaff_x26,&PTR_PTR_113304dc0);
          }
          else {
            func_0x000107c2b054(&plStack_d8);
            lVar10 = lVar27 + 0x38;
            FUN_10a8abef0(lVar10,&plStack_d8);
            if (lVar10 == 0) {
              FUN_10ae03140();
              unaff_x26 = &PTR_PTR_113304e00;
              unaff_x27 = &PTR_PTR_113304e00;
              FUN_10ae079a0();
              FUN_10ae0314c();
              FUN_10ae07cd4(unaff_x26,&PTR_PTR_113304e00);
            }
            else {
              unaff_x27 = *(undefined ***)(lVar10 + 0x28);
              unaff_x26 = *(undefined ***)(lVar10 + 0x30);
              if (unaff_x26 != (undefined **)0x0) {
                ppuVar19 = unaff_x26 + 1;
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                  if (bVar7) {
                    *ppuVar19 = *ppuVar19 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              unaff_x28 = (undefined **)(lVar27 + 0x60);
              ppuStack_e8 = unaff_x27;
              ppuStack_e0 = unaff_x26;
              FUN_10a8aaad4(unaff_x28,unaff_x27);
              if (unaff_x28 == (undefined **)0x0) {
                FUN_10ae03140();
                unaff_x28 = &PTR_PTR_113304e40;
                unaff_x27 = unaff_x28;
                FUN_10ae079a0();
                FUN_10ae0314c();
                FUN_10ae07cd4(unaff_x27,&PTR_PTR_113304e40);
              }
              else {
                FUN_10a8602bc(unaff_x28[4] + 0x48,uStack_c0,plStack_b8);
                unaff_x28[4][0x35] = 2;
                *(char *)(unaff_x27 + 0xc) = (char)uStack_134;
                FUN_10a87a948(&pppppppuStack_130,&ppuStack_e8);
              }
              if (unaff_x26 != (undefined **)0x0) {
                ppuVar19 = unaff_x26 + 1;
                do {
                  puVar24 = *ppuVar19;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                  if (bVar7) {
                    *ppuVar19 = puVar24 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (puVar24 == (undefined *)0x0) {
                  (**(code **)(*unaff_x26 + 0x10))(unaff_x26);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x26);
                }
              }
            }
            if (cStack_c1 < '\0') {
              __ZdlPv(plStack_d8);
            }
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 < (int)param_2[3]);
      }
      if (plStack_b8 != (long *)0x0) {
        plVar2 = plStack_b8 + 1;
        do {
          lVar27 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar27 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      if (uStack_a0._7_1_ < '\0') {
        __ZdlPv(pppppppcStack_b0);
      }
      pppppppuVar8 = pppppppuStack_100;
      pppppppuVar11 = pppppppuStack_f8;
      if (pppppppuStack_100 != (undefined *******)0x0) {
        while (pppppppuVar11 != pppppppuVar8) {
          pppppppuVar11 = pppppppuVar11 + -2;
          FUN_10a297544();
        }
        pppppppuStack_f8 = pppppppuVar8;
        __ZdlPv(pppppppuStack_100);
      }
    }
    pppppppuStack_f8 = pppppppuStack_128;
    pppppppuStack_100 = pppppppuStack_130;
    lStack_f0 = lStack_120;
    pppppppuStack_128 = (undefined *******)0x0;
    lStack_120 = 0;
    pppppppuStack_130 = (undefined *******)0x0;
    FUN_10a87f1e0(&pppppppuStack_130);
  }
  if (plVar23 != (long *)0x0) {
    plVar2 = plVar23 + 1;
    do {
      lVar27 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar27 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  plStack_d8 = *(long **)(param_1 + 0x240);
  if (plStack_d8 == (long *)0x0) {
    plVar23 = (long *)0xd0;
    __Znwm();
    plVar23[1] = 0;
    plVar23[2] = 0;
    *plVar23 = (long)&PTR_FUN_110bf8238;
    plStack_d8 = plVar23 + 3;
    *plStack_d8 = (long)&PTR_FUN_110c25680;
    plVar23[0x17] = 0;
    plVar23[0x16] = 0;
    plVar23[0x19] = 0;
    plVar23[0x18] = 0;
    plVar23[9] = 0;
    plVar23[8] = 0;
    plVar23[0xb] = 0;
    plVar23[10] = 0;
    plVar23[0xd] = 0;
    plVar23[0xc] = 0;
    plVar23[0xf] = 0;
    plVar23[0xe] = 0;
    plVar23[5] = 0;
    plVar23[4] = 0;
    plVar23[7] = 0;
    plVar23[6] = 0;
    plVar23[0xe] = 0;
    plVar23[0xf] = -1;
    plVar23[0x13] = 0;
    plVar23[0x12] = 0;
    plVar23[0x15] = 0;
    plVar23[0x14] = 0;
    plVar23[0x11] = 0;
    plVar23[0x10] = 0;
    *(undefined1 *)(plVar23 + 0x16) = 0;
    plStack_d0 = plVar23;
  }
  else {
    plStack_d0 = *(long **)(param_1 + 0x248);
    if (plStack_d0 != (long *)0x0) {
      plVar23 = plStack_d0 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar7) {
          *plVar23 = *plVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  plVar23 = plStack_d0;
  plVar2 = plStack_d8;
  lVar22 = param_2[1];
  plVar12 = (long *)0x60;
  __Znwm();
  lVar27 = lStack_f0;
  pppppppuVar8 = pppppppuStack_f8;
  pppppppuVar11 = pppppppuStack_100;
  plVar25 = plVar12 + 1;
  *plVar25 = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_DAT_110c24b08;
  ppppppuVar26 = (undefined ******)(plVar12 + 3);
  *ppppppuVar26 = (undefined *****)&PTR_FUN_110c23ba0;
  pppppppuStack_100 = (undefined *******)0x0;
  pppppppuStack_f8 = (undefined *******)0x0;
  lStack_f0 = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[6] = (long)plVar2;
  plVar12[7] = (long)plVar23;
  if (plVar23 != (long *)0x0) {
    plVar23 = plVar23 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar7) {
        *plVar23 = *plVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar12[8] = lVar22;
  plVar12[10] = (long)pppppppuVar8;
  plVar12[9] = (long)pppppppuVar11;
  plVar12[0xb] = lVar27;
  ppuStack_a8 = (undefined **)0x0;
  uStack_a0 = (undefined ******)0x0;
  pppppppcStack_b0 = (code *******)0x0;
  FUN_10a87f1e0(&pppppppcStack_b0);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar7) {
      *plVar25 = *plVar25 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  pppppppcStack_b0 = (code *******)FUN_10a8986ec;
  ppuStack_a8 = &PTR_DAT_110c24b60;
  uStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  pppppppcVar9 = (code *******)&pppppppcStack_b0;
  pppppppuStack_130 = (undefined *******)ppppppuVar26;
  pppppppuStack_128 = (undefined *******)plVar12;
  uStack_a0 = ppppppuVar26;
  plStack_98 = plVar12;
  FUN_10a860860(param_1);
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  do {
    lVar27 = *plVar25;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar7) {
      *plVar25 = lVar27 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar27 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
  }
  plVar23 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar1 = plStack_d0 + 1;
    do {
      lVar27 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar27 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  ppppppppuVar17 = &pppppppuStack_100;
  FUN_10a87f1e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppppppuVar17;
  }
  ___stack_chk_fail();
  FUN_10a87f1e0(&pppppppuStack_100);
  ppppppppuVar13 = ppppppppuVar17;
  __Unwind_Resume(ppppppppuVar17);
  pcStack_148 = FUN_10a865444;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_170 = plVar2;
  pppppppcStack_168 = (code *******)&pppppppcStack_b0;
  plStack_160 = plVar12;
  ppppppppuStack_158 = ppppppppuVar17;
  puStack_150 = &stack0xfffffffffffffff0;
  __ZNSt3__19to_stringEi(alStack_218,*(undefined2 *)pppppppcVar9);
  plVar23 = alStack_218;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar23,0,&UNK_10f67ec68,6);
  ppppppuStack_1f8 = (undefined ******)plVar23[1];
  ppppppppuStack_200 = (undefined ********)*plVar23;
  ppppppuStack_1f0 = (undefined ******)plVar23[2];
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = 0;
  ppppppppuVar17 = (undefined ********)&ppppppppuStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppppuVar17,&UNK_10f67ec6f,9);
  pppppppuStack_1b8 = ppppppppuVar17[1];
  pppppppuStack_1c0 = *ppppppppuVar17;
  ppppppppuStack_1b0 = (undefined ********)ppppppppuVar17[2];
  ppppppppuVar17[1] = (undefined *******)0x0;
  ppppppppuVar17[2] = (undefined *******)0x0;
  *ppppppppuVar17 = (undefined *******)0x0;
  ppppppcVar3 = (code ******)&UNK_10f67d9eb;
  if (pppppppcVar9[1] != (code ******)0x0) {
    ppppppcVar3 = pppppppcVar9[1];
  }
  ppppppcVar14 = ppppppcVar3;
  _strlen(ppppppcVar3);
  pppppppuVar11 = (undefined *******)&pppppppuStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar11,ppppppcVar3,ppppppcVar14);
  ppppppuStack_1d8 = pppppppuVar11[1];
  ppppppppuStack_1e0 = (undefined ********)*pppppppuVar11;
  ppppppuStack_1d0 = pppppppuVar11[2];
  pppppppuVar11[1] = (undefined ******)0x0;
  pppppppuVar11[2] = (undefined ******)0x0;
  *pppppppuVar11 = (undefined ******)0x0;
  if ((long)ppppppppuStack_1b0 < 0) {
    __ZdlPv(pppppppuStack_1c0);
  }
  if ((long)ppppppuStack_1f0 < 0) {
    __ZdlPv(ppppppppuStack_200);
  }
  if (cStack_201 < '\0') {
    __ZdlPv(alStack_218[0]);
  }
  ppppppuVar4 = ppppppuStack_1d8;
  ppppppppuVar17 = ppppppppuStack_1e0;
  if (-1 < (long)ppppppuStack_1d0) {
    ppppppuVar4 = (undefined ******)((ulong)ppppppuStack_1d0 >> 0x38);
    ppppppppuVar17 = (undefined ********)&ppppppppuStack_1e0;
  }
  FUN_10ae03140(0,ppppppppuVar17,ppppppuVar4);
  ppuVar19 = &PTR_PTR_1133031a0;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar19,&PTR_PTR_1133031a0);
  if ((long)ppppppuStack_1d0 < 0) {
    func_0x000107c3192c(&ppppppppuStack_200,ppppppppuStack_1e0,ppppppuStack_1d8);
  }
  else {
    ppppppuStack_1f8 = ppppppuStack_1d8;
    ppppppppuStack_200 = ppppppppuStack_1e0;
    ppppppuStack_1f0 = ppppppuStack_1d0;
  }
  pppppppuStack_1c0 = (undefined *******)FUN_10a898e24;
  pppppppuStack_1b8 = (undefined *******)&PTR_DAT_110c24b90;
  ppppppuStack_1a8 = ppppppuStack_1f8;
  ppppppppuStack_1b0 = ppppppppuStack_200;
  ppppppuStack_1a0 = ppppppuStack_1f0;
  ppppppppuStack_200 = (undefined ********)0x0;
  ppppppuStack_1f8 = (undefined ******)0x0;
  ppppppuStack_1f0 = (undefined ******)0x0;
  FUN_10a860860(ppppppppuVar13,&pppppppuStack_1c0);
  ppppppppuVar17 = &pppppppuStack_1b8;
  (*(code *)*pppppppuStack_1b8)();
  if ((long)ppppppuStack_1f0 < 0) {
    ppppppppuVar17 = ppppppppuStack_200;
    __ZdlPv();
  }
  if ((long)ppppppuStack_1d0 < 0) {
    ppppppppuVar17 = ppppppppuStack_1e0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return ppppppppuVar17;
  }
  ___stack_chk_fail();
  if ((long)ppppppuStack_1d0 < 0) {
    __ZdlPv(ppppppppuStack_1e0);
  }
  __Unwind_Resume(ppppppppuVar17);
  pcStack_228 = FUN_10a865700;
  ppuVar21 = &PTR_PTR_1133031d0;
  ppuVar20 = ppuVar21;
  pppppppuStack_240 = (undefined *******)&pppppppuStack_1c0;
  ppppppppuStack_238 = ppppppppuVar17;
  ppuStack_230 = &puStack_150;
  FUN_10ae079a0(0);
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar17 = (undefined ********)0x0;
  ppuStack_280 = unaff_x28;
  ppuStack_278 = unaff_x27;
  ppuStack_270 = unaff_x26;
  lStack_268 = lVar22;
  ppppppuStack_260 = ppppppuVar26;
  plStack_258 = plVar25;
  ppppppppuStack_250 = (undefined ********)&ppppppppuStack_1e0;
  ppuStack_248 = ppuVar19;
  if (ppuVar20 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_ac8,auStack_690,0x400,auStack_a90,0x400,ppuVar20[0x13],ppuVar20[0xf],
                  ppuVar20 + 0x14,0x400);
    puStack_b38 = puStack_ab0;
    uStack_b30 = uStack_aa8;
    puStack_b20 = puStack_ac8;
    uStack_b18 = uStack_ac0;
    uStack_b28 = uStack_aa0;
    if (iStack_a98 != 0) {
      puStack_b38 = &UNK_10f6c352e;
      uStack_b30 = 0x10;
      puStack_b20 = &UNK_10f6c352e;
      uStack_b18 = 0x10;
      uStack_b28 = 0;
      uStack_ab8 = 0;
    }
    puVar28 = ppuVar20[0x12];
    puVar24 = ppuVar20[0xb];
    uVar15 = 0;
    _clock_gettime_nsec_np();
    uVar16 = uVar15;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_b08 = ppuVar20 + 1;
    uStack_ad8 = *(undefined4 *)(ppuVar20 + 0xe);
    uStack_ae0 = uVar16 & 0xffffffff;
    ppuStack_ad0 = ppuVar20 + 0x10;
    ppppppppuVar17 = (undefined ********)*ppuVar20;
    ppuVar21 = (undefined **)&ppuStack_b08;
    uStack_b10 = uStack_ab8;
    puStack_b00 = puVar24;
    puStack_af8 = puVar28;
    uStack_af0 = (ulong)(puVar28 != (undefined *)0x0);
    uStack_ae8 = uVar15;
    FUN_10ae0784c(ppppppppuVar17,ppuVar21,&puStack_b20,&puStack_b38);
  }
  iVar18 = (int)ppuVar21;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) {
    return ppppppppuVar17;
  }
  ___stack_chk_fail();
  if (iVar18 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(ppppppppuVar17);
  return ppppppppuVar17;
}



/* Entry: 10a865444; end: 10a8656ff;  */

undefined ****** FUN_10a865444(undefined8 param_1,undefined2 *param_2)

{
  undefined ****ppppuVar1;
  long *plVar2;
  undefined *****pppppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined ******ppppppuVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_9f8;
  undefined8 uStack_9f0;
  undefined1 uStack_9e8;
  undefined *puStack_9e0;
  undefined8 uStack_9d8;
  undefined1 uStack_9d0;
  undefined **ppuStack_9c8;
  undefined *puStack_9c0;
  undefined *puStack_9b8;
  ulong uStack_9b0;
  ulong uStack_9a8;
  ulong uStack_9a0;
  undefined4 uStack_998;
  undefined **ppuStack_990;
  undefined *puStack_988;
  undefined8 uStack_980;
  undefined1 uStack_978;
  undefined *puStack_970;
  undefined8 uStack_968;
  undefined1 uStack_960;
  int iStack_958;
  undefined1 auStack_950 [1024];
  undefined1 auStack_550 [1024];
  long lStack_150;
  long alStack_d8 [2];
  char cStack_c1;
  undefined *****pppppuStack_c0;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  undefined *****pppppuStack_a0;
  undefined ***pppuStack_98;
  undefined ***pppuStack_90;
  undefined ****ppppuStack_80;
  undefined ****ppppuStack_78;
  undefined *****pppppuStack_70;
  undefined ***pppuStack_68;
  undefined ***pppuStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__19to_stringEi(alStack_d8,*param_2);
  plVar2 = alStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar2,0,&UNK_10f67ec68,6);
  pppuStack_b8 = (undefined ***)plVar2[1];
  pppppuStack_c0 = (undefined *****)*plVar2;
  pppuStack_b0 = (undefined ***)plVar2[2];
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = 0;
  ppppppuVar6 = &pppppuStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar6,&UNK_10f67ec6f,9);
  ppppuStack_78 = (undefined ****)ppppppuVar6[1];
  ppppuStack_80 = (undefined ****)*ppppppuVar6;
  pppppuStack_70 = ppppppuVar6[2];
  ppppppuVar6[1] = (undefined *****)0x0;
  ppppppuVar6[2] = (undefined *****)0x0;
  *ppppppuVar6 = (undefined *****)0x0;
  puVar10 = &UNK_10f67d9eb;
  if (*(undefined **)(param_2 + 4) != (undefined *)0x0) {
    puVar10 = *(undefined **)(param_2 + 4);
  }
  puVar11 = puVar10;
  _strlen(puVar10);
  pppppuVar3 = &ppppuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar3,puVar10,puVar11);
  pppuStack_98 = (undefined ***)pppppuVar3[1];
  pppppuStack_a0 = (undefined *****)*pppppuVar3;
  pppuStack_90 = (undefined ***)pppppuVar3[2];
  pppppuVar3[1] = (undefined ****)0x0;
  pppppuVar3[2] = (undefined ****)0x0;
  *pppppuVar3 = (undefined ****)0x0;
  if ((long)pppppuStack_70 < 0) {
    __ZdlPv(ppppuStack_80);
  }
  if ((long)pppuStack_b0 < 0) {
    __ZdlPv(pppppuStack_c0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(alStack_d8[0]);
  }
  ppppuVar1 = (undefined ****)pppuStack_98;
  ppppppuVar6 = (undefined ******)pppppuStack_a0;
  if (-1 < (long)pppuStack_90) {
    ppppuVar1 = (undefined ****)((ulong)pppuStack_90 >> 0x38);
    ppppppuVar6 = &pppppuStack_a0;
  }
  FUN_10ae03140(0,ppppppuVar6,ppppuVar1);
  ppuVar8 = &PTR_PTR_1133031a0;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133031a0);
  if ((long)pppuStack_90 < 0) {
    func_0x000107c3192c(&pppppuStack_c0,pppppuStack_a0,pppuStack_98);
  }
  else {
    pppuStack_b8 = pppuStack_98;
    pppppuStack_c0 = pppppuStack_a0;
    pppuStack_b0 = pppuStack_90;
  }
  ppppuStack_80 = (undefined ****)FUN_10a898e24;
  ppppuStack_78 = (undefined ****)&PTR_DAT_110c24b90;
  pppuStack_68 = pppuStack_b8;
  pppppuStack_70 = pppppuStack_c0;
  pppuStack_60 = pppuStack_b0;
  pppppuStack_c0 = (undefined *****)0x0;
  pppuStack_b8 = (undefined ***)0x0;
  pppuStack_b0 = (undefined ***)0x0;
  FUN_10a860860(param_1,&ppppuStack_80);
  ppppppuVar6 = (undefined ******)&ppppuStack_78;
  (*(code *)*ppppuStack_78)();
  if ((long)pppuStack_b0 < 0) {
    ppppppuVar6 = (undefined ******)pppppuStack_c0;
    __ZdlPv();
  }
  if ((long)pppuStack_90 < 0) {
    ppppppuVar6 = (undefined ******)pppppuStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if ((long)pppuStack_90 < 0) {
      __ZdlPv(pppppuStack_a0);
    }
    __Unwind_Resume(ppppppuVar6);
    ppuVar8 = &PTR_PTR_1133031d0;
    ppuVar9 = ppuVar8;
    FUN_10ae079a0(0);
    lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppppuVar6 = (undefined ******)0x0;
    if (ppuVar9 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_988,auStack_550,0x400,auStack_950,0x400,ppuVar9[0x13],ppuVar9[0xf],
                    ppuVar9 + 0x14,0x400);
      puStack_9f8 = puStack_970;
      uStack_9f0 = uStack_968;
      puStack_9e0 = puStack_988;
      uStack_9d8 = uStack_980;
      uStack_9e8 = uStack_960;
      if (iStack_958 != 0) {
        puStack_9f8 = &UNK_10f6c352e;
        uStack_9f0 = 0x10;
        puStack_9e0 = &UNK_10f6c352e;
        uStack_9d8 = 0x10;
        uStack_9e8 = 0;
        uStack_978 = 0;
      }
      puVar11 = ppuVar9[0x12];
      puVar10 = ppuVar9[0xb];
      uVar4 = 0;
      _clock_gettime_nsec_np();
      uVar5 = uVar4;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_9c8 = ppuVar9 + 1;
      uStack_998 = *(undefined4 *)(ppuVar9 + 0xe);
      uStack_9a0 = uVar5 & 0xffffffff;
      ppuStack_990 = ppuVar9 + 0x10;
      ppppppuVar6 = (undefined ******)*ppuVar9;
      ppuVar8 = (undefined **)&ppuStack_9c8;
      uStack_9d0 = uStack_978;
      puStack_9c0 = puVar10;
      puStack_9b8 = puVar11;
      uStack_9b0 = (ulong)(puVar11 != (undefined *)0x0);
      uStack_9a8 = uVar4;
      FUN_10ae0784c(ppppppuVar6,ppuVar8,&puStack_9e0,&puStack_9f8);
    }
    iVar7 = (int)ppuVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) {
      ___stack_chk_fail();
      if (iVar7 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(ppppppuVar6);
      return ppppppuVar6;
    }
    return ppppppuVar6;
  }
  return ppppppuVar6;
}



/* Entry: 10a865700; end: 10a865733;  */

undefined * FUN_10a865700(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  ppuVar6 = &PTR_PTR_1133031d0;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a865734; end: 10a8658fb;  */

void FUN_10a865734(undefined8 param_1,uint *param_2)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  
  uVar3 = (ulong)*param_2;
  puVar6 = param_2;
  FUN_10a85ec08();
  if ((uint *)0x7ffffffffffffff7 < puVar6) {
    func_0x000109ffde50();
    goto LAB_10a8658a8;
  }
  if (puVar6 < (uint *)0x17) {
    uStack_58 = CONCAT17((char)puVar6,(undefined7)uStack_58);
    pppuVar4 = &ppuStack_68;
    if (puVar6 != (uint *)0x0) goto LAB_10a8657b8;
    uVar3 = 0;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if (((ulong)puVar6 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)(((ulong)puVar6 | 7) + 1);
    }
    pppuVar4 = pppuVar1;
    __Znwm();
    uStack_58 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_68 = pppuVar4;
    puStack_60 = puVar6;
LAB_10a8657b8:
    _memmove(pppuVar4,uVar3,puVar6);
  }
  *(undefined1 *)((long)pppuVar4 + (long)puVar6) = 0;
  uVar5 = (ulong)*param_2;
  func_0x00010a85ec3c(uVar5);
  if (0x7ffffffffffffff7 < uVar3) {
LAB_10a8658a8:
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a8658b0);
    (*pcVar2)();
  }
  if (uVar3 < 0x17) {
    uStack_70 = CONCAT17((char)uVar3,(undefined7)uStack_70);
    pppuVar4 = &ppuStack_80;
    if (uVar3 == 0) goto LAB_10a865834;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((uVar3 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((uVar3 | 7) + 1);
    }
    pppuVar4 = pppuVar1;
    __Znwm();
    uStack_70 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_80 = pppuVar4;
    uStack_78 = uVar3;
  }
  _memmove(pppuVar4,uVar5,uVar3);
LAB_10a865834:
  *(undefined1 *)((long)pppuVar4 + uVar3) = 0;
  func_0x000107c2b054(auStack_98,*(undefined8 *)(param_2 + 2));
  FUN_10a8658fc(param_1,&ppuStack_68,&ppuStack_80,auStack_98);
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppuStack_80);
  }
  if ((long)uStack_58 < 0) {
    __ZdlPv(ppuStack_68);
  }
  return;
}



/* Entry: 10a8658fc; end: 10a865c93;  */

undefined *** FUN_10a8658fc(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined ***pppuStack_110;
  long lStack_108;
  long lStack_100;
  undefined ***pppuStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined ***pppuStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined ***pppuStack_b0;
  long lStack_a8;
  undefined7 uStack_a0;
  char cStack_99;
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a0ee900(&pppuStack_b0,&UNK_10f67ec79,0x4b);
  FUN_10a8979c4(param_2,param_4);
  ppuVar3 = &PTR_PTR_1133031f0;
  FUN_10ae079a0();
  func_0x00010a897a18();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_1133031f0);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&pppuStack_110,*param_2,param_2[1]);
  }
  else {
    lStack_108 = param_2[1];
    pppuStack_110 = (undefined ***)*param_2;
    lStack_100 = param_2[2];
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&pppuStack_f8,*param_3,param_3[1]);
  }
  else {
    lStack_f0 = param_3[1];
    pppuStack_f8 = (undefined ***)*param_3;
    lStack_e8 = param_3[2];
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&pppuStack_e0,*param_4,param_4[1]);
  }
  else {
    lStack_d8 = param_4[1];
    pppuStack_e0 = (undefined ***)*param_4;
    lStack_d0 = param_4[2];
  }
  if (cStack_99 < '\0') {
    func_0x000107c3192c(&pppuStack_c8,pppuStack_b0,lStack_a8);
  }
  else {
    lStack_c0 = lStack_a8;
    pppuStack_c8 = pppuStack_b0;
    uStack_b8 = CONCAT17(cStack_99,uStack_a0);
  }
  pcStack_98 = FUN_10a899630;
  ppuStack_90 = &PTR_FUN_110c24ba8;
  plVar1 = (long *)0x60;
  __Znwm();
  if (lStack_100 < 0) {
    func_0x000107c3192c(plVar1,pppuStack_110,lStack_108);
  }
  else {
    plVar1[1] = lStack_108;
    *plVar1 = (long)pppuStack_110;
    plVar1[2] = lStack_100;
  }
  if (lStack_e8 < 0) {
    func_0x000107c3192c(plVar1 + 3,pppuStack_f8,lStack_f0);
  }
  else {
    plVar1[4] = lStack_f0;
    plVar1[3] = (long)pppuStack_f8;
    plVar1[5] = lStack_e8;
  }
  if (lStack_d0 < 0) {
    func_0x000107c3192c(plVar1 + 6,pppuStack_e0,lStack_d8);
  }
  else {
    plVar1[7] = lStack_d8;
    plVar1[6] = (long)pppuStack_e0;
    plVar1[8] = lStack_d0;
  }
  if (uStack_b8 < 0) {
    func_0x000107c3192c(plVar1 + 9,pppuStack_c8,lStack_c0);
  }
  else {
    plVar1[10] = lStack_c0;
    plVar1[9] = (long)pppuStack_c8;
    plVar1[0xb] = uStack_b8;
  }
  plStack_88 = plVar1;
  FUN_10a860860(param_1,&pcStack_98);
  pppuVar2 = &ppuStack_90;
  (*(code *)*ppuStack_90)();
  if (uStack_b8._7_1_ < '\0') {
    pppuVar2 = pppuStack_c8;
    __ZdlPv();
  }
  if (lStack_d0 < 0) {
    pppuVar2 = pppuStack_e0;
    __ZdlPv();
  }
  if (lStack_e8 < 0) {
    pppuVar2 = pppuStack_f8;
    __ZdlPv();
  }
  if (lStack_100 < 0) {
    pppuVar2 = pppuStack_110;
    __ZdlPv();
  }
  if (cStack_99 < '\0') {
    pppuVar2 = pppuStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  if (*(char *)((long)plVar1 + 0x47) < '\0') {
    __ZdlPv(plVar1[6]);
  }
  if (*(char *)((long)plVar1 + 0x2f) < '\0') {
    __ZdlPv(plVar1[3]);
  }
  if (*(char *)((long)plVar1 + 0x17) < '\0') {
    __ZdlPv(*plVar1);
  }
  __ZdlPv(plVar1);
  FUN_10a865c94(&pppuStack_110);
  if (cStack_99 < '\0') {
    __ZdlPv(pppuStack_b0);
  }
  __Unwind_Resume();
  if (*(char *)((long)pppuVar2 + 0x5f) < '\0') {
    __ZdlPv(pppuVar2[9]);
  }
  if (*(char *)((long)pppuVar2 + 0x47) < '\0') {
    __ZdlPv(pppuVar2[6]);
  }
  if (*(char *)((long)pppuVar2 + 0x2f) < '\0') {
    __ZdlPv(pppuVar2[3]);
  }
  if (*(char *)((long)pppuVar2 + 0x17) < '\0') {
    __ZdlPv(*pppuVar2);
  }
  return pppuVar2;
}



/* Entry: 10a865c94; end: 10a865cf3;  */

undefined8 * FUN_10a865c94(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a865cf4; end: 10a865fb7;  */

void FUN_10a865cf4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 *param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code **ppcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined7 uStack_178;
  char cStack_171;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined7 uStack_160;
  char cStack_159;
  undefined1 *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 auStack_120 [64];
  byte bStack_e0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_90 [8];
  byte bStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(&puStack_170,*param_6);
  func_0x000107c2b054(&puStack_188,param_6[1]);
  uVar7 = param_6[3];
  FUN_10a865fb8(auStack_90,*(undefined8 *)(param_5 + 0x350),param_6[2],uVar7);
  if (cStack_159 < '\0') {
    func_0x000107c3192c(&puStack_150,puStack_170,uStack_168);
  }
  else {
    uStack_148 = uStack_168;
    puStack_150 = puStack_170;
    lStack_140 = CONCAT17(cStack_159,uStack_160);
  }
  if (cStack_171 < '\0') {
    func_0x000107c3192c(&puStack_138,puStack_188,uStack_180);
  }
  else {
    uStack_130 = uStack_180;
    puStack_138 = puStack_188;
    lStack_128 = CONCAT17(cStack_171,uStack_178);
  }
  bStack_e0 = 10;
  uVar6 = (ulong)bStack_50;
  puStack_158 = auStack_120;
  func_0x00010a840fd8(&puStack_158,auStack_90,uVar6);
  bStack_e0 = bStack_50;
  pcStack_d0 = FUN_10a89a77c;
  ppuStack_c8 = &PTR_FUN_110c24bd8;
  puVar2 = (undefined8 *)0x78;
  __Znwm();
  puVar4 = puStack_138;
  puVar2[1] = uStack_148;
  *puVar2 = puStack_150;
  puVar2[2] = lStack_140;
  uStack_148 = 0;
  lStack_140 = 0;
  puStack_150 = (undefined8 *)0x0;
  puVar2[4] = uStack_130;
  puVar2[3] = puStack_138;
  puVar2[5] = lStack_128;
  puStack_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  lStack_128 = 0;
  FUN_10a87f290(puVar2 + 6,auStack_120);
  ppcVar5 = &pcStack_d0;
  puStack_c0 = puVar2;
  FUN_10a860860(param_5);
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  if (10 < (ulong)bStack_e0) {
LAB_10a865f78:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a865f7c);
    (*pcVar1)();
  }
  (*(code *)(&PTR_FUN_110c17158)[bStack_e0])(auStack_120);
  if (lStack_128 < 0) {
    __ZdlPv(puStack_138);
  }
  if (lStack_140 < 0) {
    __ZdlPv(puStack_150);
  }
  if (10 < (ulong)bStack_50) goto LAB_10a865f78;
  puVar2 = auStack_90;
  (*(code *)(&PTR_FUN_110c17158)[bStack_50])();
  if (cStack_171 < '\0') {
    puVar2 = puStack_188;
    __ZdlPv();
  }
  if (cStack_159 < '\0') {
    puVar2 = puStack_170;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_140 < 0) {
    __ZdlPv(puStack_150);
  }
  if (10 < (ulong)bStack_50) goto LAB_10a865f78;
  (*(code *)(&PTR_FUN_110c17158)[bStack_50])(auStack_90);
  if (cStack_171 < '\0') {
    __ZdlPv(puStack_188);
  }
  if (cStack_159 < '\0') {
    __ZdlPv(puStack_170);
  }
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_198 = FUN_10a865fb8;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b0 = auStack_120;
  puStack_1a8 = puVar2;
  puStack_1a0 = &stack0xfffffffffffffff0;
  if ((ppcVar5 != (code **)0x0) && (*(int *)(ppcVar5[0x144] + 0x18) < 0x90)) {
    FUN_109ffe064(&uStack_360,uVar6,uVar7);
    puVar3[1] = uStack_358;
    *puVar3 = uStack_360;
    puVar3[2] = uStack_350;
    *(undefined1 *)(puVar3 + 8) = 0;
    goto LAB_10a8661f0;
  }
  FUN_10a0f639c(&uStack_360,uVar6,uVar7);
  puVar2 = &uStack_360;
  FUN_10a0f70fc(puVar2,&PTR_s_key_110c240e8);
  if (puVar2 == (undefined8 *)0x0) goto LAB_10a866238;
  puVar2 = &uStack_360;
  FUN_10a0f70fc(puVar2,&PTR_s_key_110c240e8);
  if (puVar2 == (undefined8 *)0x0) goto LAB_10a86621c;
  switch(*(undefined2 *)((long)puVar2 + 0xc)) {
  case 1:
    puVar4 = &uStack_360;
    FUN_10a0f7efc(puVar4,&PTR_s_key_110c240e8);
    *(char *)puVar3 = (char)puVar4;
    uVar8 = 2;
    break;
  default:
    goto LAB_10a86621c;
  case 4:
    FUN_10a0f809c(&uStack_220,&uStack_360,&PTR_s_key_110c240e8);
    goto code_r0x00010a8661a4;
  case 5:
    FUN_10a0f816c(&uStack_360,&PTR_s_key_110c240e8);
    *puVar3 = puVar4;
    uVar8 = 1;
    break;
  case 7:
    FUN_10a0f82c8(&uStack_360,&PTR_s_key_110c240e8);
    *(int *)puVar3 = (int)puVar4;
    *(undefined4 *)((long)puVar3 + 4) = param_2;
    uVar8 = 3;
    break;
  case 8:
    FUN_10a0f8348(&uStack_360,&PTR_s_key_110c240e8);
    *(int *)puVar3 = (int)puVar4;
    *(undefined4 *)((long)puVar3 + 4) = param_2;
    *(undefined4 *)(puVar3 + 1) = param_3;
    uVar8 = 4;
    break;
  case 9:
    FUN_10a0f8438(&uStack_360,&PTR_s_key_110c240e8);
    *(int *)puVar3 = (int)puVar4;
    *(undefined4 *)((long)puVar3 + 4) = param_2;
    *(undefined4 *)(puVar3 + 1) = param_3;
    *(undefined4 *)((long)puVar3 + 0xc) = param_4;
    uVar8 = 5;
    break;
  case 10:
    FUN_10a0f8a18(&uStack_220,&uStack_360,&PTR_s_key_110c240e8);
    puVar3[1] = uStack_218;
    *puVar3 = uStack_220;
    puVar3[3] = uStack_208;
    puVar3[2] = uStack_210;
    *(undefined4 *)(puVar3 + 4) = uStack_200;
    uVar8 = 7;
    break;
  case 0xb:
    FUN_10a0f8908(&uStack_220,&uStack_360,&PTR_s_key_110c240e8);
    puVar3[1] = uStack_218;
    *puVar3 = uStack_220;
    puVar3[3] = uStack_208;
    puVar3[2] = uStack_210;
    puVar3[5] = uStack_1f8;
    puVar3[4] = CONCAT44(uStack_1fc,uStack_200);
    puVar3[7] = uStack_1e8;
    puVar3[6] = uStack_1f0;
    uVar8 = 8;
    break;
  case 0xc:
    FUN_10a0f8818(&uStack_360,&PTR_s_key_110c240e8);
    *(int *)puVar3 = (int)puVar4;
    *(undefined4 *)((long)puVar3 + 4) = param_2;
    *(undefined4 *)(puVar3 + 1) = param_3;
    *(undefined4 *)((long)puVar3 + 0xc) = param_4;
    uVar8 = 9;
    break;
  case 0x16:
    FUN_10a0f8994(&uStack_360,&PTR_s_key_110c240e8);
    *(int *)puVar3 = (int)puVar4;
    *(undefined4 *)((long)puVar3 + 4) = param_2;
    *(undefined4 *)(puVar3 + 1) = param_3;
    *(undefined4 *)((long)puVar3 + 0xc) = param_4;
    uVar8 = 6;
    break;
  case 0x18:
    FUN_10a0f809c(&uStack_220,&uStack_360,&PTR_s_key_110c240e8);
code_r0x00010a8661a4:
    puVar3[1] = uStack_218;
    *puVar3 = uStack_220;
    puVar3[2] = uStack_210;
    *(undefined1 *)(puVar3 + 8) = 0;
    goto code_r0x00010a8661e8;
  }
  *(undefined1 *)(puVar3 + 8) = uVar8;
code_r0x00010a8661e8:
  func_0x00010a0f618c(&uStack_360);
LAB_10a8661f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
LAB_10a86621c:
  FUN_10a0f70fc(&uStack_360,&PTR_s_key_110c240e8);
  FUN_10a87f23c();
LAB_10a866238:
  FUN_10a0f70fc(&uStack_360,&PTR_s_key_110c240e8);
  _snprintf(&uStack_220,100,&UNK_10f67f232);
  FUN_10a00946c(&uStack_220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a86627c);
  (*pcVar1)();
}



/* Entry: 10a865fb8; end: 10a8662cb;  */

void FUN_10a865fb8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_6 != 0) && (*(int *)(*(long *)(param_6 + 0xa20) + 0x18) < 0x90)) {
    FUN_109ffe064(&uStack_1d0,param_7,param_8);
    param_5[1] = uStack_1c8;
    *param_5 = uStack_1d0;
    param_5[2] = uStack_1c0;
    *(undefined1 *)(param_5 + 8) = 0;
    goto LAB_10a8661f0;
  }
  FUN_10a0f639c(&uStack_1d0,param_7,param_8);
  puVar2 = &uStack_1d0;
  FUN_10a0f70fc(puVar2,&PTR_s_key_110c240e8);
  if (puVar2 == (undefined8 *)0x0) goto LAB_10a866238;
  puVar2 = &uStack_1d0;
  FUN_10a0f70fc(puVar2,&PTR_s_key_110c240e8);
  if (puVar2 == (undefined8 *)0x0) goto LAB_10a86621c;
  switch(*(undefined2 *)((long)puVar2 + 0xc)) {
  case 1:
    puVar2 = &uStack_1d0;
    FUN_10a0f7efc(puVar2,&PTR_s_key_110c240e8);
    *(char *)param_5 = (char)puVar2;
    uVar3 = 2;
    break;
  default:
    goto LAB_10a86621c;
  case 4:
    FUN_10a0f809c(&uStack_90,&uStack_1d0,&PTR_s_key_110c240e8);
    goto code_r0x00010a8661a4;
  case 5:
    FUN_10a0f816c(&uStack_1d0,&PTR_s_key_110c240e8);
    *param_5 = param_1;
    uVar3 = 1;
    break;
  case 7:
    FUN_10a0f82c8(&uStack_1d0,&PTR_s_key_110c240e8);
    *(int *)param_5 = (int)param_1;
    *(undefined4 *)((long)param_5 + 4) = param_2;
    uVar3 = 3;
    break;
  case 8:
    FUN_10a0f8348(&uStack_1d0,&PTR_s_key_110c240e8);
    *(int *)param_5 = (int)param_1;
    *(undefined4 *)((long)param_5 + 4) = param_2;
    *(undefined4 *)(param_5 + 1) = param_3;
    uVar3 = 4;
    break;
  case 9:
    FUN_10a0f8438(&uStack_1d0,&PTR_s_key_110c240e8);
    *(int *)param_5 = (int)param_1;
    *(undefined4 *)((long)param_5 + 4) = param_2;
    *(undefined4 *)(param_5 + 1) = param_3;
    *(undefined4 *)((long)param_5 + 0xc) = param_4;
    uVar3 = 5;
    break;
  case 10:
    FUN_10a0f8a18(&uStack_90,&uStack_1d0,&PTR_s_key_110c240e8);
    param_5[1] = uStack_88;
    *param_5 = uStack_90;
    param_5[3] = uStack_78;
    param_5[2] = uStack_80;
    *(undefined4 *)(param_5 + 4) = uStack_70;
    uVar3 = 7;
    break;
  case 0xb:
    FUN_10a0f8908(&uStack_90,&uStack_1d0,&PTR_s_key_110c240e8);
    param_5[1] = uStack_88;
    *param_5 = uStack_90;
    param_5[3] = uStack_78;
    param_5[2] = uStack_80;
    param_5[5] = uStack_68;
    param_5[4] = CONCAT44(uStack_6c,uStack_70);
    param_5[7] = uStack_58;
    param_5[6] = uStack_60;
    uVar3 = 8;
    break;
  case 0xc:
    FUN_10a0f8818(&uStack_1d0,&PTR_s_key_110c240e8);
    *(int *)param_5 = (int)param_1;
    *(undefined4 *)((long)param_5 + 4) = param_2;
    *(undefined4 *)(param_5 + 1) = param_3;
    *(undefined4 *)((long)param_5 + 0xc) = param_4;
    uVar3 = 9;
    break;
  case 0x16:
    FUN_10a0f8994(&uStack_1d0,&PTR_s_key_110c240e8);
    *(int *)param_5 = (int)param_1;
    *(undefined4 *)((long)param_5 + 4) = param_2;
    *(undefined4 *)(param_5 + 1) = param_3;
    *(undefined4 *)((long)param_5 + 0xc) = param_4;
    uVar3 = 6;
    break;
  case 0x18:
    FUN_10a0f809c(&uStack_90,&uStack_1d0,&PTR_s_key_110c240e8);
code_r0x00010a8661a4:
    param_5[1] = uStack_88;
    *param_5 = uStack_90;
    param_5[2] = uStack_80;
    *(undefined1 *)(param_5 + 8) = 0;
    goto code_r0x00010a8661e8;
  }
  *(undefined1 *)(param_5 + 8) = uVar3;
code_r0x00010a8661e8:
  func_0x00010a0f618c(&uStack_1d0);
LAB_10a8661f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
LAB_10a86621c:
  FUN_10a0f70fc(&uStack_1d0,&PTR_s_key_110c240e8);
  FUN_10a87f23c();
LAB_10a866238:
  FUN_10a0f70fc(&uStack_1d0,&PTR_s_key_110c240e8);
  _snprintf(&uStack_90,100,&UNK_10f67f232);
  FUN_10a00946c(&uStack_90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a86627c);
  (*pcVar1)();
}



/* Entry: 10a8662cc; end: 10a86632f;  */

undefined8 * FUN_10a8662cc(undefined8 *param_1)

{
  code *pcVar1;
  
  if ((ulong)*(byte *)(param_1 + 0xe) < 0xb) {
    (*(code *)(&PTR_FUN_110c17158)[*(byte *)(param_1 + 0xe)])(param_1 + 6);
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a866330);
  (*pcVar1)();
}



/* Entry: 10a866330; end: 10a8665a7;  */

undefined *** FUN_10a866330(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [880];
  long *plStack_100;
  undefined ***pppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined ***pppuStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined ***pppuStack_a8;
  long lStack_a0;
  undefined7 uStack_98;
  char cStack_91;
  undefined ***pppuStack_90;
  long lStack_88;
  undefined7 uStack_80;
  char cStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = &PTR_PTR_113304080;
  FUN_10ae079a0(0,&PTR_PTR_113304080);
  FUN_10ae07cd4(ppuVar8,&PTR_PTR_113304080);
  if (*param_2 == 0) {
    ppuVar8 = &PTR_PTR_113304628;
    pppuVar2 = (undefined ***)0x0;
    ppuVar9 = ppuVar8;
    FUN_10ae079a0();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      ppuStack_70 = *(undefined ***)PTR____stack_chk_guard_11034bdc0;
      pppuVar2 = (undefined ***)0x0;
      if (ppuVar9 != (undefined **)0x0) {
        FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar9[0x13],ppuVar9[0xf],
                      ppuVar9 + 0x14,0x400);
        puStack_918 = puStack_890;
        uStack_910 = uStack_888;
        puStack_900 = puStack_8a8;
        uStack_8f8 = uStack_8a0;
        uStack_908 = uStack_880;
        if (iStack_878 != 0) {
          puStack_918 = &UNK_10f6c352e;
          uStack_910 = 0x10;
          puStack_900 = &UNK_10f6c352e;
          uStack_8f8 = 0x10;
          uStack_908 = 0;
          uStack_898 = 0;
        }
        puVar12 = ppuVar9[0x12];
        puVar11 = ppuVar9[0xb];
        uVar5 = 0;
        _clock_gettime_nsec_np();
        uVar6 = uVar5;
        _pthread_self();
        _pthread_mach_thread_np();
        ppuStack_8e8 = ppuVar9 + 1;
        uStack_8b8 = *(undefined4 *)(ppuVar9 + 0xe);
        uStack_8c0 = uVar6 & 0xffffffff;
        ppuStack_8b0 = ppuVar9 + 0x10;
        pppuVar2 = (undefined ***)*ppuVar9;
        ppuVar8 = (undefined **)&ppuStack_8e8;
        uStack_8f0 = uStack_898;
        puStack_8e0 = puVar11;
        puStack_8d8 = puVar12;
        uStack_8d0 = (ulong)(puVar12 != (undefined *)0x0);
        uStack_8c8 = uVar5;
        FUN_10ae0784c(pppuVar2,ppuVar8,&puStack_900,&puStack_918);
      }
      iVar7 = (int)ppuVar8;
      if (*(undefined ***)PTR____stack_chk_guard_11034bdc0 != ppuStack_70) {
        ___stack_chk_fail();
        if (iVar7 == 0) {
          __Unwind_Resume();
        }
        func_0x000104bd46a0();
        func_0x00010ae087bc();
        FUN_10ae07e54(pppuVar2);
        return pppuVar2;
      }
      return pppuVar2;
    }
  }
  else {
    func_0x000107c2b054(&pppuStack_90);
    puVar11 = &UNK_10f67d9eb;
    if ((undefined *)param_2[1] != (undefined *)0x0) {
      puVar11 = (undefined *)param_2[1];
    }
    func_0x000107c2b054(&pppuStack_a8,puVar11);
    param_2 = (long *)param_2[2];
    if (cStack_79 < '\0') {
      func_0x000107c3192c(&pppuStack_e0,pppuStack_90,lStack_88);
    }
    else {
      lStack_d8 = lStack_88;
      pppuStack_e0 = pppuStack_90;
      lStack_d0 = CONCAT17(cStack_79,uStack_80);
    }
    if (cStack_91 < '\0') {
      func_0x000107c3192c(&pppuStack_c8,pppuStack_a8,lStack_a0);
    }
    else {
      lStack_c0 = lStack_a0;
      pppuStack_c8 = pppuStack_a8;
      lStack_b8 = CONCAT17(cStack_91,uStack_98);
    }
    pcStack_78 = FUN_10a89b1c8;
    ppuStack_70 = &PTR_FUN_110c24c20;
    plVar3 = (long *)0x38;
    plStack_b0 = param_2;
    __Znwm();
    lVar1 = lStack_b8;
    plVar3[1] = lStack_d8;
    *plVar3 = (long)pppuStack_e0;
    plVar3[2] = lStack_d0;
    lStack_d8 = 0;
    lStack_d0 = 0;
    pppuStack_e0 = (undefined ***)0x0;
    plVar3[4] = lStack_c0;
    plVar3[3] = (long)pppuStack_c8;
    pppuStack_c8 = (undefined ***)0x0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    plVar3[5] = lVar1;
    plVar3[6] = (long)param_2;
    plStack_68 = plVar3;
    FUN_10a860860(param_1,&pcStack_78);
    pppuVar2 = &ppuStack_70;
    (*(code *)*ppuStack_70)();
    if (lStack_b8 < 0) {
      pppuVar2 = pppuStack_c8;
      __ZdlPv();
    }
    if (lStack_d0 < 0) {
      pppuVar2 = pppuStack_e0;
      __ZdlPv();
    }
    if (cStack_91 < '\0') {
      pppuVar2 = pppuStack_a8;
      __ZdlPv();
    }
    if (cStack_79 < '\0') {
      pppuVar2 = pppuStack_90;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return pppuVar2;
    }
  }
  ___stack_chk_fail();
  if (lStack_d0 < 0) {
    __ZdlPv(pppuStack_e0);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(pppuStack_a8);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(pppuStack_90);
  }
  pppuVar4 = pppuVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a8665a8;
  plStack_100 = param_2;
  pppuStack_f8 = pppuVar2;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)pppuVar4 + 0x2f) < '\0') {
    __ZdlPv(pppuVar4[3]);
  }
  if (*(char *)((long)pppuVar4 + 0x17) < '\0') {
    __ZdlPv(*pppuVar4);
  }
  return pppuVar4;
}



/* Entry: 10a8665a8; end: 10a8665e7;  */

undefined8 * FUN_10a8665a8(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a8665e8; end: 10a8668a3;  */

undefined ***** FUN_10a8665e8(undefined8 param_1,undefined2 *param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *****pppppuVar3;
  long *plVar4;
  undefined *****pppppuVar5;
  undefined *puVar6;
  undefined ****ppppuVar7;
  undefined *****pppppuVar8;
  undefined *****pppppuVar9;
  undefined **ppuVar10;
  undefined ****ppppuVar11;
  undefined ****ppppuStack_1d0;
  code **ppcStack_1c8;
  ulong uStack_1c0;
  undefined ****ppppuStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined ****ppppuStack_198;
  undefined8 uStack_190;
  undefined7 uStack_188;
  char cStack_181;
  undefined ****ppppuStack_180;
  code **ppcStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined ***pppuStack_160;
  undefined ****ppppuStack_158;
  code **ppcStack_150;
  ulong uStack_148;
  undefined ****ppppuStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long alStack_d8 [2];
  char cStack_c1;
  undefined ****ppppuStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  undefined ****ppppuStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined ****ppppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__19to_stringEi(alStack_d8,*param_2);
  plVar4 = alStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar4,0,&UNK_10f67ec68,6);
  pcStack_b8 = (code *)plVar4[1];
  ppppuStack_c0 = (undefined ****)*plVar4;
  pcStack_b0 = (code *)plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  pppppuVar5 = &ppppuStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar5,&UNK_10f67ec6f,9);
  pppuStack_78 = (undefined ***)pppppuVar5[1];
  pppuStack_80 = (undefined ***)*pppppuVar5;
  ppppuStack_70 = pppppuVar5[2];
  pppppuVar5[1] = (undefined ****)0x0;
  pppppuVar5[2] = (undefined ****)0x0;
  *pppppuVar5 = (undefined ****)0x0;
  puVar1 = &UNK_10f67d9eb;
  if (*(undefined **)(param_2 + 4) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 4);
  }
  puVar6 = puVar1;
  _strlen(puVar1);
  ppppuVar7 = &pppuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar7,puVar1,puVar6);
  pcStack_98 = (code *)ppppuVar7[1];
  ppppuStack_a0 = (undefined ****)*ppppuVar7;
  pcStack_90 = (code *)ppppuVar7[2];
  ppppuVar7[1] = (undefined ***)0x0;
  ppppuVar7[2] = (undefined ***)0x0;
  *ppppuVar7 = (undefined ***)0x0;
  if ((long)ppppuStack_70 < 0) {
    __ZdlPv(pppuStack_80);
  }
  if ((long)pcStack_b0 < 0) {
    __ZdlPv(ppppuStack_c0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(alStack_d8[0]);
  }
  pppuVar2 = (undefined ***)pcStack_98;
  pppppuVar5 = (undefined *****)ppppuStack_a0;
  if (-1 < (long)pcStack_90) {
    pppuVar2 = (undefined ***)((ulong)pcStack_90 >> 0x38);
    pppppuVar5 = &ppppuStack_a0;
  }
  FUN_10ae03140(0,pppppuVar5,pppuVar2);
  ppuVar10 = &PTR_PTR_1133032b8;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar10,&PTR_PTR_1133032b8);
  if ((long)pcStack_90 < 0) {
    func_0x000107c3192c(&ppppuStack_c0,ppppuStack_a0,pcStack_98);
  }
  else {
    pcStack_b8 = pcStack_98;
    ppppuStack_c0 = ppppuStack_a0;
    pcStack_b0 = pcStack_90;
  }
  pppuStack_80 = (undefined ***)FUN_10a89c078;
  pppuStack_78 = (undefined ***)&PTR_FUN_110c24c38;
  pcStack_68 = pcStack_b8;
  ppppuStack_70 = ppppuStack_c0;
  pcStack_60 = pcStack_b0;
  ppppuStack_c0 = (undefined ****)0x0;
  pcStack_b8 = (code *)0x0;
  pcStack_b0 = (code *)0x0;
  ppppuVar7 = &pppuStack_80;
  FUN_10a860860(param_1);
  pppppuVar5 = (undefined *****)&pppuStack_78;
  (*(code *)*pppuStack_78)();
  if ((long)pcStack_b0 < 0) {
    pppppuVar5 = (undefined *****)ppppuStack_c0;
    __ZdlPv();
  }
  if ((long)pcStack_90 < 0) {
    pppppuVar5 = (undefined *****)ppppuStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  if ((long)pcStack_90 < 0) {
    __ZdlPv(ppppuStack_a0);
  }
  __Unwind_Resume(pppppuVar5);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar8 = (undefined *****)(ulong)*(uint *)ppppuVar7;
  ppppuVar11 = ppppuVar7;
  FUN_10a85ec08();
  if ((undefined ****)0x7ffffffffffffff7 < ppppuVar11) {
    func_0x000109ffde50();
    goto LAB_10a866ab4;
  }
  if (ppppuVar11 < (undefined ****)0x17) {
    uStack_170 = CONCAT17((char)ppppuVar11,(undefined7)uStack_170);
    pppppuVar9 = &ppppuStack_180;
    if (ppppuVar11 != (undefined ****)0x0) goto LAB_10a866930;
  }
  else {
    pppppuVar3 = (undefined *****)0x19;
    if (((ulong)ppppuVar11 | 7) != 0x17) {
      pppppuVar3 = (undefined *****)(((ulong)ppppuVar11 | 7) + 1);
    }
    pppppuVar9 = pppppuVar3;
    __Znwm();
    uStack_170 = (ulong)pppppuVar3 | 0x8000000000000000;
    ppppuStack_180 = (undefined ****)pppppuVar9;
    ppcStack_178 = (code **)ppppuVar11;
LAB_10a866930:
    _memmove(pppppuVar9,pppppuVar8,ppppuVar11);
  }
  *(undefined1 *)((long)pppppuVar9 + (long)ppppuVar11) = 0;
  func_0x000107c2b054(&ppppuStack_198,ppppuVar7[1]);
  func_0x00010a383718(&ppppuStack_180,&ppppuStack_198);
  ppuVar10 = &PTR_PTR_1133032f8;
  FUN_10ae079a0();
  func_0x00010a38376c();
  FUN_10ae07cd4(ppuVar10,&PTR_PTR_1133032f8);
  if ((long)uStack_170 < 0) {
    func_0x000107c3192c(&ppppuStack_1d0,ppppuStack_180,ppcStack_178);
  }
  else {
    ppcStack_1c8 = ppcStack_178;
    ppppuStack_1d0 = ppppuStack_180;
    uStack_1c0 = uStack_170;
  }
  if (cStack_181 < '\0') {
    func_0x000107c3192c(&ppppuStack_1b8,ppppuStack_198,uStack_190);
  }
  else {
    uStack_1b0 = uStack_190;
    ppppuStack_1b8 = ppppuStack_198;
    lStack_1a8 = CONCAT17(cStack_181,uStack_188);
  }
  pcStack_168 = FUN_10a89c1d4;
  pppuStack_160 = (undefined ***)&PTR_FUN_110c24c50;
  ppcStack_150 = ppcStack_1c8;
  ppppuStack_158 = ppppuStack_1d0;
  uStack_148 = uStack_1c0;
  ppppuStack_1d0 = (undefined ****)0x0;
  ppcStack_1c8 = (code **)0x0;
  uStack_1c0 = 0;
  uStack_138 = uStack_1b0;
  ppppuStack_140 = ppppuStack_1b8;
  lStack_130 = lStack_1a8;
  ppppuStack_1b8 = (undefined ****)0x0;
  uStack_1b0 = 0;
  lStack_1a8 = 0;
  FUN_10a860860(pppppuVar5,&pcStack_168);
  pppppuVar8 = (undefined *****)&pppuStack_160;
  (*(code *)*pppuStack_160)();
  if (lStack_1a8 < 0) {
    pppppuVar8 = (undefined *****)ppppuStack_1b8;
    __ZdlPv();
  }
  if ((long)uStack_1c0 < 0) {
    pppppuVar8 = (undefined *****)ppppuStack_1d0;
    __ZdlPv();
  }
  if (cStack_181 < '\0') {
    pppppuVar8 = (undefined *****)ppppuStack_198;
    __ZdlPv();
  }
  if ((long)uStack_170 < 0) {
    pppppuVar8 = (undefined *****)ppppuStack_180;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return pppppuVar8;
  }
LAB_10a866ab4:
  ___stack_chk_fail();
  if ((long)uStack_1c0 < 0) {
    __ZdlPv(ppppuStack_1d0);
  }
  if (cStack_181 < '\0') {
    __ZdlPv(ppppuStack_198);
  }
  if ((long)uStack_170 < 0) {
    __ZdlPv(ppppuStack_180);
  }
  __Unwind_Resume();
  if (*(char *)((long)pppppuVar8 + 0x2f) < '\0') {
    __ZdlPv(pppppuVar8[3]);
  }
  if (*(char *)((long)pppppuVar8 + 0x17) < '\0') {
    __ZdlPv(*pppppuVar8);
  }
  return pppppuVar8;
}



/* Entry: 10a8668a4; end: 10a866b23;  */

undefined **** FUN_10a8668a4(undefined8 param_1,uint *param_2)

{
  undefined ****ppppuVar1;
  undefined ****ppppuVar2;
  undefined ****ppppuVar3;
  uint *puVar4;
  undefined **ppuVar5;
  undefined ***pppuStack_f0;
  uint *puStack_e8;
  ulong uStack_e0;
  undefined ***pppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined ***pppuStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  char cStack_a1;
  undefined ***pppuStack_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  uint *puStack_70;
  ulong uStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar2 = (undefined ****)(ulong)*param_2;
  puVar4 = param_2;
  FUN_10a85ec08();
  if ((uint *)0x7ffffffffffffff7 < puVar4) {
    func_0x000109ffde50();
    goto LAB_10a866ab4;
  }
  if (puVar4 < (uint *)0x17) {
    uStack_90 = CONCAT17((char)puVar4,(undefined7)uStack_90);
    ppppuVar3 = &pppuStack_a0;
    if (puVar4 != (uint *)0x0) goto LAB_10a866930;
  }
  else {
    ppppuVar1 = (undefined ****)0x19;
    if (((ulong)puVar4 | 7) != 0x17) {
      ppppuVar1 = (undefined ****)(((ulong)puVar4 | 7) + 1);
    }
    ppppuVar3 = ppppuVar1;
    __Znwm();
    uStack_90 = (ulong)ppppuVar1 | 0x8000000000000000;
    pppuStack_a0 = (undefined ***)ppppuVar3;
    puStack_98 = puVar4;
LAB_10a866930:
    _memmove(ppppuVar3,ppppuVar2,puVar4);
  }
  *(undefined1 *)((long)ppppuVar3 + (long)puVar4) = 0;
  func_0x000107c2b054(&pppuStack_b8,*(undefined8 *)(param_2 + 2));
  func_0x00010a383718(&pppuStack_a0,&pppuStack_b8);
  ppuVar5 = &PTR_PTR_1133032f8;
  FUN_10ae079a0();
  func_0x00010a38376c();
  FUN_10ae07cd4(ppuVar5,&PTR_PTR_1133032f8);
  if ((long)uStack_90 < 0) {
    func_0x000107c3192c(&pppuStack_f0,pppuStack_a0,puStack_98);
  }
  else {
    puStack_e8 = puStack_98;
    pppuStack_f0 = pppuStack_a0;
    uStack_e0 = uStack_90;
  }
  if (cStack_a1 < '\0') {
    func_0x000107c3192c(&pppuStack_d8,pppuStack_b8,uStack_b0);
  }
  else {
    uStack_d0 = uStack_b0;
    pppuStack_d8 = pppuStack_b8;
    lStack_c8 = CONCAT17(cStack_a1,uStack_a8);
  }
  pcStack_88 = FUN_10a89c1d4;
  ppuStack_80 = &PTR_FUN_110c24c50;
  puStack_70 = puStack_e8;
  pppuStack_78 = pppuStack_f0;
  uStack_68 = uStack_e0;
  pppuStack_f0 = (undefined ***)0x0;
  puStack_e8 = (uint *)0x0;
  uStack_e0 = 0;
  uStack_58 = uStack_d0;
  pppuStack_60 = pppuStack_d8;
  lStack_50 = lStack_c8;
  pppuStack_d8 = (undefined ***)0x0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  FUN_10a860860(param_1,&pcStack_88);
  ppppuVar2 = (undefined ****)&ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (lStack_c8 < 0) {
    ppppuVar2 = (undefined ****)pppuStack_d8;
    __ZdlPv();
  }
  if ((long)uStack_e0 < 0) {
    ppppuVar2 = (undefined ****)pppuStack_f0;
    __ZdlPv();
  }
  if (cStack_a1 < '\0') {
    ppppuVar2 = (undefined ****)pppuStack_b8;
    __ZdlPv();
  }
  if ((long)uStack_90 < 0) {
    ppppuVar2 = (undefined ****)pppuStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppuVar2;
  }
LAB_10a866ab4:
  ___stack_chk_fail();
  if ((long)uStack_e0 < 0) {
    __ZdlPv(pppuStack_f0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(pppuStack_b8);
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(pppuStack_a0);
  }
  __Unwind_Resume();
  if (*(char *)((long)ppppuVar2 + 0x2f) < '\0') {
    __ZdlPv(ppppuVar2[3]);
  }
  if (*(char *)((long)ppppuVar2 + 0x17) < '\0') {
    __ZdlPv(*ppppuVar2);
  }
  return ppppuVar2;
}



/* Entry: 10a866b24; end: 10a866b63;  */

undefined8 * FUN_10a866b24(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a866b64; end: 10a866d97;  */

undefined *** FUN_10a866b64(undefined8 param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined4 *puVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined4 auStack_c0 [2];
  undefined ***pppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined ***pppuStack_a0;
  long lStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined4 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a8979c4(param_3,param_4);
  ppuVar3 = &PTR_PTR_1133031f0;
  FUN_10ae079a0();
  func_0x00010a897a18();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_1133031f0);
  auStack_c0[0] = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&pppuStack_b8,*param_3,param_3[1]);
  }
  else {
    lStack_b0 = param_3[1];
    pppuStack_b8 = (undefined ***)*param_3;
    lStack_a8 = param_3[2];
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&pppuStack_a0,*param_4,param_4[1]);
  }
  else {
    lStack_98 = param_4[1];
    pppuStack_a0 = (undefined ***)*param_4;
    lStack_90 = param_4[2];
  }
  pcStack_88 = FUN_10a89c428;
  ppuStack_80 = &PTR_DAT_110c24c68;
  puVar1 = (undefined4 *)0x38;
  __Znwm();
  *puVar1 = auStack_c0[0];
  if (lStack_a8 < 0) {
    func_0x000107c3192c(puVar1 + 2,pppuStack_b8,lStack_b0);
  }
  else {
    *(long *)(puVar1 + 4) = lStack_b0;
    *(undefined ****)(puVar1 + 2) = pppuStack_b8;
    *(long *)(puVar1 + 6) = lStack_a8;
  }
  if (lStack_90 < 0) {
    func_0x000107c3192c(puVar1 + 8,pppuStack_a0,lStack_98);
  }
  else {
    *(long *)(puVar1 + 10) = lStack_98;
    *(undefined ****)(puVar1 + 8) = pppuStack_a0;
    *(long *)(puVar1 + 0xc) = lStack_90;
  }
  puStack_78 = puVar1;
  FUN_10a860860(param_1,&pcStack_88);
  pppuVar2 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (lStack_90 < 0) {
    pppuVar2 = pppuStack_a0;
    __ZdlPv();
  }
  if (lStack_a8 < 0) {
    pppuVar2 = pppuStack_b8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  if (*(char *)((long)puVar1 + 0x1f) < '\0') {
    __ZdlPv(pcStack_88);
  }
  __ZdlPv(puVar1);
  FUN_10a866d98(auStack_c0);
  __Unwind_Resume();
  if (*(char *)((long)pppuVar2 + 0x37) < '\0') {
    __ZdlPv(pppuVar2[4]);
  }
  if (*(char *)((long)pppuVar2 + 0x1f) < '\0') {
    __ZdlPv(pppuVar2[1]);
  }
  return pppuVar2;
}



/* Entry: 10a866d98; end: 10a866e73;  */

long FUN_10a866d98(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a866e74; end: 10a867547;  */

/* WARNING: Removing unreachable block (ram,0x00010a8670bc) */
/* WARNING: Removing unreachable block (ram,0x00010a8671f4) */
/* WARNING: Removing unreachable block (ram,0x00010a867304) */
/* WARNING: Removing unreachable block (ram,0x00010a867314) */
/* WARNING: Removing unreachable block (ram,0x00010a8673c8) */

void FUN_10a866e74(undefined **param_1,undefined ******param_2,undefined *****param_3,
                  undefined ******param_4)

{
  undefined ******ppppppuVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined ******ppppppuVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  undefined ****ppppuVar10;
  ulong uVar11;
  undefined *****pppppuVar12;
  undefined *****pppppuVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined **unaff_x22;
  undefined ***pppuVar16;
  long lVar17;
  ulong uVar18;
  undefined ****ppppuStack_2c0;
  undefined *****pppppuStack_2b8;
  undefined4 *puStack_2b0;
  long lStack_2a8;
  undefined *****pppppuStack_2a0;
  undefined4 *puStack_298;
  long lStack_290;
  undefined ***pppuStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined *****pppppuStack_270;
  undefined4 *puStack_268;
  undefined7 uStack_260;
  char cStack_259;
  undefined ****ppppuStack_258;
  undefined *****pppppuStack_250;
  undefined *****pppppuStack_248;
  undefined ****ppppuStack_240;
  undefined *****pppppuStack_238;
  undefined4 *puStack_230;
  undefined *****pppppuStack_228;
  undefined4 *puStack_220;
  long lStack_218;
  byte bStack_200;
  long lStack_1f0;
  undefined *****pppppuStack_178;
  undefined *****pppppuStack_170;
  undefined8 uStack_168;
  undefined ****ppppuStack_160;
  undefined7 uStack_158;
  char cStack_151;
  long *plStack_150;
  undefined ****ppppuStack_148;
  undefined7 uStack_140;
  char cStack_139;
  undefined ****ppppuStack_138;
  undefined **ppuStack_130;
  undefined4 *puStack_128;
  undefined4 uStack_120;
  undefined *****pppppuStack_f8;
  undefined **ppuStack_f0;
  undefined4 *puStack_e8;
  byte bStack_b8;
  undefined ***pppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long *plStack_88;
  undefined ****ppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined ****ppppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar7 = &pppppuStack_178;
  pppppuVar13 = param_3;
  func_0x00010a866dd8();
  if ((undefined ******)pppppuStack_178 == (undefined ******)0x0) {
    param_1 = &PTR_PTR_1133049c0;
    ppppppuVar7 = (undefined ******)param_1;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
    goto LAB_10a86734c;
  }
  if (*(int *)pppppuStack_178[0x3d] == 4) goto LAB_10a86734c;
  func_0x00010ae02ecc(0,param_2);
  func_0x00010ae02ecc();
  unaff_x22 = &PTR_PTR_113304288;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  FUN_10ae07cd4(unaff_x22,&PTR_PTR_113304288);
  if (*(int *)(param_3 + 1) == 0) {
    func_0x000107c2b054(&pppuStack_b0,&UNK_10f67ed11);
    func_0x000107c2b054(&pppppuStack_f8,&UNK_10f67ed20);
    pppppuVar13 = (undefined *****)&pppuStack_b0;
    param_4 = &pppppuStack_f8;
    FUN_10a866b64();
    ppppppuVar7 = (undefined ******)pppppuStack_178;
    param_1 = (undefined **)param_2;
LAB_10a8670a4:
    if ((long)puStack_e8 < 0) {
      ppppppuVar7 = (undefined ******)pppppuStack_f8;
      __ZdlPv();
    }
    goto LAB_10a86734c;
  }
  if (1 < *(int *)(param_3 + 1)) {
    func_0x00010ae02ecc(0);
    ppuVar9 = &PTR_PTR_113305a18;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_113305a18);
  }
  ppppuVar10 = *param_3;
  pppuVar16 = ppppuVar10[6];
  if (pppuVar16 == (undefined ***)0x0) {
    param_4 = (undefined ******)ppppuVar10[3];
    FUN_10a865fb8(&pppppuStack_f8,pppppuStack_178[0x6a],ppppuVar10[2]);
    pppuStack_b0 = (undefined ***)CONCAT44(pppuStack_b0._4_4_,(int)param_2);
    ppppuStack_68._0_1_ = 10;
    pppppuVar13 = (undefined *****)(ulong)bStack_b8;
    plStack_150 = &lStack_a8;
    func_0x00010a840fd8(&plStack_150,&pppppuStack_f8);
    ppppuStack_68 = (undefined ****)CONCAT71(ppppuStack_68._1_7_,bStack_b8);
    ppppuStack_138 = (undefined ****)FUN_10a89deac;
    ppuStack_130 = &PTR_DAT_110c24cf8;
    puVar8 = (undefined4 *)0x50;
    __Znwm();
    unaff_x22 = (undefined **)&ppppuStack_138;
    *puVar8 = pppuStack_b0._0_4_;
    FUN_10a87f290(puVar8 + 2,&lStack_a8);
    param_1 = (undefined **)&ppppuStack_138;
    puStack_128 = puVar8;
    FUN_10a860860(pppppuStack_178);
    (*(code *)*ppuStack_130)(&ppuStack_130);
    if (((ulong)ppppuStack_68 & 0xff) < 0xb) {
      (*(code *)(&PTR_FUN_110c17158)[(ulong)ppppuStack_68 & 0xff])(&lStack_a8);
      if ((ulong)bStack_b8 < 0xb) {
        ppppppuVar7 = &pppppuStack_f8;
        (*(code *)(&PTR_FUN_110c17158)[bStack_b8])();
        goto LAB_10a86734c;
      }
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8674f8);
    (*pcVar6)();
  }
  unaff_x22 = (undefined **)&pppuStack_b0;
  if (((*pppuVar16 == (undefined **)0x0) || (pppuVar16[3] == (undefined **)0x0)) ||
     (pppuVar16[4] == (undefined **)0x0)) {
    uStack_a0 = CONCAT17(0x10,(undefined7)uStack_a0);
    lStack_a8 = 0x64656c6961466863;
    pppuStack_b0 = (undefined ***)0x7465467465737341;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    func_0x000107c2b054(&pppppuStack_f8,&UNK_10f67ecc5);
    pppppuVar13 = (undefined *****)&pppuStack_b0;
    param_4 = &pppppuStack_f8;
    FUN_10a866b64();
    ppppppuVar7 = (undefined ******)pppppuStack_178;
    param_1 = (undefined **)param_2;
    goto LAB_10a8670a4;
  }
  ppppuStack_138 = (undefined ****)&PTR_DAT_110b19d58;
  ppuStack_130 = (undefined **)0x0;
  puStack_128 = (undefined4 *)&DAT_11383d918;
  uStack_120 = 0;
  pppuStack_b0 = ppppuVar10[2];
  lStack_a8 = (long)*(int *)(ppppuVar10 + 3);
  pppppuVar13 = &ppppuStack_138;
  func_0x000107c30348(pppppuVar13,&pppuStack_b0);
  if (((ulong)pppppuVar13 & 1) == 0) {
    uStack_a0 = CONCAT17(0x10,(undefined7)uStack_a0);
    lStack_a8 = 0x64656c6961466863;
    pppuStack_b0 = (undefined ***)0x7465467465737341;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    func_0x000107c2b054(&pppppuStack_f8,&UNK_10f67ecef);
    pppppuVar13 = (undefined *****)&pppuStack_b0;
    param_4 = &pppppuStack_f8;
    FUN_10a866b64(pppppuStack_178);
    if ((long)puStack_e8 < 0) {
      __ZdlPv(pppppuStack_f8);
    }
  }
  else {
    FUN_109ffe064(&plStack_150,pppuVar16[3],pppuVar16[4]);
    func_0x000107c2b054(&uStack_168,*(*param_3)[6]);
    pppuStack_b0 = (undefined ***)CONCAT44(pppuStack_b0._4_4_,(int)param_2);
    pppppuVar13 = &ppppuStack_138;
    func_0x0001098d147c(&lStack_a8,0);
    if (cStack_139 < '\0') {
      func_0x000107c3192c(&plStack_88,plStack_150);
    }
    else {
      ppppuStack_80 = ppppuStack_148;
      plStack_88 = plStack_150;
      uStack_78 = CONCAT17(cStack_139,uStack_140);
      ppppuStack_148 = (undefined ****)pppppuVar13;
    }
    if (cStack_151 < '\0') {
      func_0x000107c3192c(&uStack_70,uStack_168);
      pppppuVar13 = (undefined *****)ppppuStack_160;
    }
    else {
      ppppuStack_68 = ppppuStack_160;
      uStack_70 = uStack_168;
      uStack_60 = CONCAT17(cStack_151,uStack_158);
      pppppuVar13 = (undefined *****)ppppuStack_148;
    }
    pppppuStack_f8 = (undefined *****)FUN_10a89d684;
    ppuStack_f0 = &PTR_FUN_110c24cc8;
    puVar8 = (undefined4 *)0x58;
    __Znwm();
    puVar5 = puStack_98;
    uVar18 = uStack_a0;
    *puVar8 = pppuStack_b0._0_4_;
    puVar14 = (undefined8 *)(puVar8 + 2);
    *puVar14 = &PTR_DAT_110b19d58;
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined **)(puVar8 + 6) = &DAT_11383d918;
    puVar8[8] = 0;
    if ((uStack_a0 & 1) == 0) {
      if (uStack_a0 == 0) goto LAB_10a86729c;
LAB_10a867278:
      func_0x0001098d1530(puVar14);
      func_0x0001098d1688(puVar14,&lStack_a8);
    }
    else {
      if (*(long *)(uStack_a0 & 0xfffffffffffffffe) != 0) goto LAB_10a867278;
LAB_10a86729c:
      uStack_a0 = 0;
      puStack_98 = &DAT_11383d918;
      *(ulong *)(puVar8 + 4) = uVar18;
      *(undefined **)(puVar8 + 6) = puVar5;
    }
    *(undefined *****)(puVar8 + 0xc) = ppppuStack_80;
    *(long **)(puVar8 + 10) = plStack_88;
    *(undefined8 *)(puVar8 + 0xe) = uStack_78;
    ppppuStack_80 = (undefined ****)0x0;
    uStack_78 = 0;
    plStack_88 = (long *)0x0;
    *(undefined *****)(puVar8 + 0x12) = ppppuStack_68;
    *(undefined8 *)(puVar8 + 0x10) = uStack_70;
    *(undefined8 *)(puVar8 + 0x14) = uStack_60;
    uStack_70 = 0;
    ppppuStack_68 = (undefined ****)0x0;
    uStack_60 = 0;
    param_2 = &pppppuStack_f8;
    puStack_e8 = puVar8;
    FUN_10a860860(pppppuStack_178);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    func_0x0001098d14dc(&lStack_a8);
    if (cStack_151 < '\0') {
      __ZdlPv(uStack_168);
    }
    if (cStack_139 < '\0') {
      __ZdlPv(plStack_150);
    }
  }
  ppppppuVar7 = (undefined ******)&ppppuStack_138;
  func_0x0001098d14dc();
  param_1 = (undefined **)param_2;
LAB_10a86734c:
  if ((undefined ******)pppppuStack_170 != (undefined ******)0x0) {
    ppppppuVar1 = (undefined ******)(pppppuStack_170 + 1);
    do {
      pppppuVar12 = *ppppppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar4) {
        *ppppppuVar1 = (undefined *****)((long)pppppuVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppuVar12 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_170)[2])(pppppuStack_170);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuVar7 = (undefined ******)pppppuStack_170;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001098d14dc(unaff_x22 + 1);
  if (cStack_151 < '\0') {
    __ZdlPv(uStack_168);
  }
  if (cStack_139 < '\0') {
    __ZdlPv(plStack_150);
  }
  func_0x0001098d14dc(&ppppuStack_138);
  FUN_10a5ca2e0(&pppppuStack_178);
  __Unwind_Resume(ppppppuVar7);
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined **)&ppppuStack_258;
  func_0x00010a866dd8(ppuVar9,ppppppuVar7);
  if ((undefined *****)ppppuStack_258 == (undefined *****)0x0) {
    ppuVar9 = &PTR_PTR_113305798;
    FUN_10ae079a0(0,&PTR_PTR_113305798);
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_113305798);
  }
  else if (*(int *)ppppuStack_258[0x3d] != 4) {
    ppppppuVar7 = (undefined ******)&UNK_10f67d9eb;
    if (param_4 != (undefined ******)0x0) {
      ppppppuVar7 = param_4;
    }
    func_0x000107c2b054(&pppppuStack_270,ppppppuVar7);
    func_0x00010ae02ecc(0,param_1);
    func_0x00010ae02ecc();
    FUN_10ae03140();
    ppuVar9 = &PTR_PTR_113304a00;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_113304a00);
    iVar2 = *(int *)(pppppuVar13 + 1);
    if (iVar2 == 0) {
      ppppuStack_2c0 = (undefined ****)CONCAT44(ppppuStack_2c0._4_4_,(int)param_1);
      if (cStack_259 < '\0') {
        func_0x000107c3192c(&pppppuStack_2b8,pppppuStack_270,puStack_268);
        param_1 = (undefined **)((ulong)ppppuStack_2c0 & 0xffffffff);
      }
      else {
        puStack_2b0 = puStack_268;
        pppppuStack_2b8 = pppppuStack_270;
        lStack_2a8 = CONCAT17(cStack_259,uStack_260);
      }
      ppppuStack_240 = (undefined ****)FUN_10a89e8cc;
      pppppuStack_238 = (undefined *****)&PTR_FUN_110c24d40;
      puStack_230 = (undefined4 *)CONCAT44(puStack_230._4_4_,(int)param_1);
      puStack_220 = puStack_2b0;
      pppppuStack_228 = pppppuStack_2b8;
      lStack_218 = lStack_2a8;
      pppppuStack_2b8 = (undefined *****)0x0;
      puStack_2b0 = (undefined4 *)0x0;
      lStack_2a8 = 0;
      FUN_10a860860(ppppuStack_258,&ppppuStack_240);
      ppuVar9 = (undefined **)&pppppuStack_238;
      (*(code *)*pppppuStack_238)(ppuVar9);
      if (lStack_2a8 < 0) {
        ppuVar9 = (undefined **)pppppuStack_2b8;
        __ZdlPv(pppppuStack_2b8);
      }
    }
    else {
      pppuStack_288 = (undefined ***)0x0;
      lStack_280 = 0;
      uStack_278 = 0;
      ppppuStack_240 = &pppuStack_288;
      pppppuStack_238 = (undefined *****)((ulong)pppppuStack_238 & 0xffffffffffffff00);
      FUN_10a841ca4(&pppuStack_288,(long)iVar2);
      lVar17 = lStack_280;
      lVar15 = (((long)iVar2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      _bzero(lStack_280,lVar15);
      lStack_280 = lVar17 + lVar15;
      pppppuVar12 = (undefined *****)ppppuStack_258;
      if (0 < *(int *)(pppppuVar13 + 1)) {
        lVar15 = 0;
        lVar17 = 0;
        uVar18 = 0;
        do {
          pppuVar16 = pppuStack_288;
          uVar11 = (lStack_280 - (long)pppuStack_288 >> 3) * -0x5555555555555555;
          if (uVar11 < uVar18 || uVar11 - uVar18 == 0) goto LAB_10a867b04;
          ppppuVar10 = *pppppuVar13;
          func_0x000107c2b054(&ppppuStack_2c0,*(undefined8 *)((long)ppppuVar10 + lVar15 + 8));
          pppppuStack_238 = pppppuStack_2b8;
          ppppuStack_240 = ppppuStack_2c0;
          puStack_230 = puStack_2b0;
          pppppuStack_2b8 = (undefined *****)0x0;
          puStack_2b0 = (undefined4 *)0x0;
          ppppuStack_2c0 = (undefined ****)0x0;
          bStack_200 = 0;
          FUN_10a867b08((long)pppuVar16 + lVar17,&ppppuStack_240);
          if (10 < (ulong)bStack_200) goto LAB_10a867b04;
          (*(code *)(&PTR_FUN_110c17158)[bStack_200])(&ppppuStack_240);
          if ((long)puStack_2b0 < 0) {
            __ZdlPv(ppppuStack_2c0);
          }
          pppppuVar12 = (undefined *****)ppppuStack_258;
          pppuVar16 = pppuStack_288;
          uVar11 = (lStack_280 - (long)pppuStack_288 >> 3) * -0x5555555555555555;
          if (uVar11 < uVar18 || uVar11 - uVar18 == 0) goto LAB_10a867b04;
          FUN_10a865fb8(&ppppuStack_240,ppppuStack_258[0x6a],
                        *(undefined8 *)((long)ppppuVar10 + lVar15 + 0x10),
                        *(undefined8 *)((long)ppppuVar10 + lVar15 + 0x18));
          FUN_10a867b08((long)pppuVar16 + lVar17,&ppppuStack_240);
          if (10 < (ulong)bStack_200) goto LAB_10a867b04;
          (*(code *)(&PTR_FUN_110c17158)[bStack_200])(&ppppuStack_240);
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 0x18;
          lVar15 = lVar15 + 0x40;
        } while ((long)uVar18 < (long)*(int *)(pppppuVar13 + 1));
      }
      ppppuStack_2c0 = (undefined ****)CONCAT44(ppppuStack_2c0._4_4_,(int)param_1);
      puStack_2b0 = (undefined4 *)0x0;
      lStack_2a8 = 0;
      pppppuStack_2b8 = (undefined *****)0x0;
      FUN_10a841c20(&pppppuStack_2b8,pppuStack_288,lStack_280,
                    (lStack_280 - (long)pppuStack_288 >> 3) * -0x5555555555555555);
      if (cStack_259 < '\0') {
        func_0x000107c3192c(&pppppuStack_2a0,pppppuStack_270,puStack_268);
      }
      else {
        puStack_298 = puStack_268;
        pppppuStack_2a0 = pppppuStack_270;
        lStack_290 = CONCAT17(cStack_259,uStack_260);
      }
      ppppuStack_240 = (undefined ****)FUN_10a89fb2c;
      pppppuStack_238 = (undefined *****)&PTR_FUN_110c24d58;
      puVar8 = (undefined4 *)0x38;
      __Znwm();
      *puVar8 = ppppuStack_2c0._0_4_;
      *(undefined4 **)(puVar8 + 4) = puStack_2b0;
      *(undefined ******)(puVar8 + 2) = pppppuStack_2b8;
      *(long *)(puVar8 + 6) = lStack_2a8;
      puStack_2b0 = (undefined4 *)0x0;
      lStack_2a8 = 0;
      pppppuStack_2b8 = (undefined *****)0x0;
      *(undefined4 **)(puVar8 + 10) = puStack_298;
      *(undefined ******)(puVar8 + 8) = pppppuStack_2a0;
      *(long *)(puVar8 + 0xc) = lStack_290;
      pppppuStack_2a0 = (undefined *****)0x0;
      puStack_298 = (undefined4 *)0x0;
      lStack_290 = 0;
      puStack_230 = puVar8;
      FUN_10a860860(pppppuVar12,&ppppuStack_240);
      (*(code *)*pppppuStack_238)(&pppppuStack_238);
      if (lStack_290 < 0) {
        __ZdlPv(pppppuStack_2a0);
      }
      pppppuStack_248 = (undefined *****)&pppppuStack_2b8;
      FUN_10a842110(&pppppuStack_248);
      ppppuStack_240 = &pppuStack_288;
      ppuVar9 = (undefined **)&ppppuStack_240;
      FUN_10a842110(ppuVar9);
    }
    unaff_x22 = (undefined **)&ppppuStack_240;
    if (cStack_259 < '\0') {
      ppuVar9 = (undefined **)pppppuStack_270;
      __ZdlPv(pppppuStack_270);
    }
  }
  if ((undefined ******)pppppuStack_250 != (undefined ******)0x0) {
    ppppppuVar7 = (undefined ******)(pppppuStack_250 + 1);
    do {
      pppppuVar13 = *ppppppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar4) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar13 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppuVar13 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_250)[2])(pppppuStack_250);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuStack_250);
      ppuVar9 = (undefined **)pppppuStack_250;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
  ___stack_chk_fail();
  while( true ) {
    if (cStack_259 < '\0') {
      __ZdlPv(pppppuStack_270);
    }
    FUN_10a5ca2e0(&ppppuStack_258);
    __Unwind_Resume(ppuVar9);
    if (10 < (ulong)bStack_200) break;
    (*(code *)unaff_x22[bStack_200])(&ppppuStack_240);
    if ((long)puStack_2b0 < 0) {
      __ZdlPv(ppppuStack_2c0);
    }
    ppppuStack_240 = &pppuStack_288;
    FUN_10a842110(&ppppuStack_240);
  }
LAB_10a867b04:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a867b08);
  (*pcVar6)();
}



/* Entry: 10a867548; end: 10a867b07;  */

void FUN_10a867548(undefined8 param_1,ulong param_2,long *param_3,undefined *param_4)

{
  undefined ******ppppppuVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined ***pppuVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined *****pppppuVar11;
  long lVar12;
  undefined *****unaff_x22;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined ****ppppuStack_140;
  undefined *****pppppuStack_138;
  undefined4 *puStack_130;
  long lStack_128;
  undefined *****pppppuStack_120;
  undefined4 *puStack_118;
  long lStack_110;
  undefined ***pppuStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined *****pppppuStack_f0;
  undefined4 *puStack_e8;
  undefined7 uStack_e0;
  char cStack_d9;
  undefined ****ppppuStack_d8;
  undefined *****pppppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined ****ppppuStack_c0;
  undefined *****pppppuStack_b8;
  undefined4 *puStack_b0;
  undefined *****pppppuStack_a8;
  undefined4 *puStack_a0;
  long lStack_98;
  byte bStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = (undefined **)&ppppuStack_d8;
  func_0x00010a866dd8(ppuVar8,param_1);
  if ((undefined *****)ppppuStack_d8 == (undefined *****)0x0) {
    ppuVar8 = &PTR_PTR_113305798;
    FUN_10ae079a0(0,&PTR_PTR_113305798);
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_113305798);
  }
  else if (*(int *)ppppuStack_d8[0x3d] != 4) {
    puVar2 = &UNK_10f67d9eb;
    if (param_4 != (undefined *)0x0) {
      puVar2 = param_4;
    }
    func_0x000107c2b054(&pppppuStack_f0,puVar2);
    func_0x00010ae02ecc(0,param_2);
    func_0x00010ae02ecc();
    FUN_10ae03140();
    ppuVar8 = &PTR_PTR_113304a00;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_113304a00);
    iVar3 = (int)param_3[1];
    if (iVar3 == 0) {
      ppppuStack_140 = (undefined ****)CONCAT44(ppppuStack_140._4_4_,(int)param_2);
      if (cStack_d9 < '\0') {
        func_0x000107c3192c(&pppppuStack_138,pppppuStack_f0,puStack_e8);
        param_2 = (ulong)ppppuStack_140 & 0xffffffff;
      }
      else {
        puStack_130 = puStack_e8;
        pppppuStack_138 = pppppuStack_f0;
        lStack_128 = CONCAT17(cStack_d9,uStack_e0);
      }
      ppppuStack_c0 = (undefined ****)FUN_10a89e8cc;
      pppppuStack_b8 = (undefined *****)&PTR_FUN_110c24d40;
      puStack_b0 = (undefined4 *)CONCAT44(puStack_b0._4_4_,(int)param_2);
      puStack_a0 = puStack_130;
      pppppuStack_a8 = pppppuStack_138;
      lStack_98 = lStack_128;
      pppppuStack_138 = (undefined *****)0x0;
      puStack_130 = (undefined4 *)0x0;
      lStack_128 = 0;
      FUN_10a860860(ppppuStack_d8,&ppppuStack_c0);
      ppuVar8 = (undefined **)&pppppuStack_b8;
      (*(code *)*pppppuStack_b8)(ppuVar8);
      if (lStack_128 < 0) {
        ppuVar8 = (undefined **)pppppuStack_138;
        __ZdlPv(pppppuStack_138);
      }
    }
    else {
      pppuStack_108 = (undefined ***)0x0;
      lStack_100 = 0;
      uStack_f8 = 0;
      ppppuStack_c0 = &pppuStack_108;
      pppppuStack_b8 = (undefined *****)((ulong)pppppuStack_b8 & 0xffffffffffffff00);
      FUN_10a841ca4(&pppuStack_108,(long)iVar3);
      lVar13 = lStack_100;
      lVar12 = (((long)iVar3 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      _bzero(lStack_100,lVar12);
      lStack_100 = lVar13 + lVar12;
      pppppuVar11 = (undefined *****)ppppuStack_d8;
      if (0 < (int)param_3[1]) {
        lVar12 = 0;
        lVar13 = 0;
        uVar14 = 0;
        do {
          pppuVar6 = pppuStack_108;
          uVar10 = (lStack_100 - (long)pppuStack_108 >> 3) * -0x5555555555555555;
          if (uVar10 < uVar14 || uVar10 - uVar14 == 0) goto LAB_10a867b04;
          lVar15 = *param_3;
          func_0x000107c2b054(&ppppuStack_140,*(undefined8 *)(lVar15 + lVar12 + 8));
          pppppuStack_b8 = pppppuStack_138;
          ppppuStack_c0 = ppppuStack_140;
          puStack_b0 = puStack_130;
          pppppuStack_138 = (undefined *****)0x0;
          puStack_130 = (undefined4 *)0x0;
          ppppuStack_140 = (undefined ****)0x0;
          bStack_80 = 0;
          FUN_10a867b08((long)pppuVar6 + lVar13,&ppppuStack_c0);
          if (10 < (ulong)bStack_80) goto LAB_10a867b04;
          (*(code *)(&PTR_FUN_110c17158)[bStack_80])(&ppppuStack_c0);
          if ((long)puStack_130 < 0) {
            __ZdlPv(ppppuStack_140);
          }
          pppppuVar11 = (undefined *****)ppppuStack_d8;
          pppuVar6 = pppuStack_108;
          uVar10 = (lStack_100 - (long)pppuStack_108 >> 3) * -0x5555555555555555;
          if (uVar10 < uVar14 || uVar10 - uVar14 == 0) goto LAB_10a867b04;
          lVar15 = lVar15 + lVar12;
          FUN_10a865fb8(&ppppuStack_c0,ppppuStack_d8[0x6a],*(undefined8 *)(lVar15 + 0x10),
                        *(undefined8 *)(lVar15 + 0x18));
          FUN_10a867b08((long)pppuVar6 + lVar13,&ppppuStack_c0);
          if (10 < (ulong)bStack_80) goto LAB_10a867b04;
          (*(code *)(&PTR_FUN_110c17158)[bStack_80])(&ppppuStack_c0);
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0x18;
          lVar12 = lVar12 + 0x40;
        } while ((long)uVar14 < (long)(int)param_3[1]);
      }
      ppppuStack_140 = (undefined ****)CONCAT44(ppppuStack_140._4_4_,(int)param_2);
      puStack_130 = (undefined4 *)0x0;
      lStack_128 = 0;
      pppppuStack_138 = (undefined *****)0x0;
      FUN_10a841c20(&pppppuStack_138,pppuStack_108,lStack_100,
                    (lStack_100 - (long)pppuStack_108 >> 3) * -0x5555555555555555);
      if (cStack_d9 < '\0') {
        func_0x000107c3192c(&pppppuStack_120,pppppuStack_f0,puStack_e8);
      }
      else {
        puStack_118 = puStack_e8;
        pppppuStack_120 = pppppuStack_f0;
        lStack_110 = CONCAT17(cStack_d9,uStack_e0);
      }
      ppppuStack_c0 = (undefined ****)FUN_10a89fb2c;
      pppppuStack_b8 = (undefined *****)&PTR_FUN_110c24d58;
      puVar9 = (undefined4 *)0x38;
      __Znwm();
      *puVar9 = ppppuStack_140._0_4_;
      *(undefined4 **)(puVar9 + 4) = puStack_130;
      *(undefined ******)(puVar9 + 2) = pppppuStack_138;
      *(long *)(puVar9 + 6) = lStack_128;
      puStack_130 = (undefined4 *)0x0;
      lStack_128 = 0;
      pppppuStack_138 = (undefined *****)0x0;
      *(undefined4 **)(puVar9 + 10) = puStack_118;
      *(undefined ******)(puVar9 + 8) = pppppuStack_120;
      *(long *)(puVar9 + 0xc) = lStack_110;
      pppppuStack_120 = (undefined *****)0x0;
      puStack_118 = (undefined4 *)0x0;
      lStack_110 = 0;
      puStack_b0 = puVar9;
      FUN_10a860860(pppppuVar11,&ppppuStack_c0);
      (*(code *)*pppppuStack_b8)(&pppppuStack_b8);
      if (lStack_110 < 0) {
        __ZdlPv(pppppuStack_120);
      }
      pppppuStack_c8 = (undefined *****)&pppppuStack_138;
      FUN_10a842110(&pppppuStack_c8);
      ppppuStack_c0 = &pppuStack_108;
      ppuVar8 = (undefined **)&ppppuStack_c0;
      FUN_10a842110(ppuVar8);
    }
    unaff_x22 = &ppppuStack_c0;
    if (cStack_d9 < '\0') {
      ppuVar8 = (undefined **)pppppuStack_f0;
      __ZdlPv(pppppuStack_f0);
    }
  }
  if ((undefined ******)pppppuStack_d0 != (undefined ******)0x0) {
    ppppppuVar1 = (undefined ******)(pppppuStack_d0 + 1);
    do {
      pppppuVar11 = *ppppppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar5) {
        *ppppppuVar1 = (undefined *****)((long)pppppuVar11 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppuVar11 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_d0)[2])(pppppuStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuStack_d0);
      ppuVar8 = (undefined **)pppppuStack_d0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  while( true ) {
    if (cStack_d9 < '\0') {
      __ZdlPv(pppppuStack_f0);
    }
    FUN_10a5ca2e0(&ppppuStack_d8);
    __Unwind_Resume(ppuVar8);
    if (10 < (ulong)bStack_80) break;
    (*(code *)unaff_x22[bStack_80])(&ppppuStack_c0);
    if ((long)puStack_130 < 0) {
      __ZdlPv(ppppuStack_140);
    }
    ppppuStack_c0 = &pppuStack_108;
    FUN_10a842110(&ppppuStack_c0);
  }
LAB_10a867b04:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a867b08);
  (*pcVar7)();
}



/* Entry: 10a867b08; end: 10a867c8b;  */

ulong FUN_10a867b08(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lStack_78;
  
  uVar4 = param_1[1];
  if (uVar4 < param_1[2]) {
    FUN_10a87f290(uVar4,param_2);
    uVar8 = uVar4 + 0x48;
  }
  else {
    lVar11 = uVar4 - *param_1;
    uVar8 = (lVar11 >> 3) * -0x71c71c71c71c71c7 + 1;
    if (0x38e38e38e38e38e < uVar8) {
      FUN_10a841ed4();
      if (*(char *)(uVar4 + 0x37) < '\0') {
        __ZdlPv(*(undefined8 *)(uVar4 + 0x20));
      }
      lStack_78 = uVar4 + 8;
      FUN_10a842110(&lStack_78);
      return uVar4;
    }
    lVar6 = (long)(param_1[2] - *param_1) >> 3;
    uVar7 = lVar6 * 0x1c71c71c71c71c72;
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      uVar7 = uVar8;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
      uVar7 = 0x38e38e38e38e38e;
    }
    if (uVar7 == 0) {
      puVar9 = (ulong *)0x0;
      uVar7 = 0;
    }
    else {
      puVar9 = param_1;
      FUN_10a841ee8();
    }
    uVar8 = (long)puVar9 + lVar11;
    uVar4 = uVar8;
    FUN_10a87f290(uVar8,param_2);
    uVar10 = *param_1;
    uVar2 = param_1[1];
    uVar1 = uVar8 + (uVar10 - uVar2);
    uVar5 = uVar1;
    uVar12 = uVar10;
    if (uVar2 != uVar10) {
      do {
        FUN_10a87f290(uVar5,uVar12);
        uVar12 = uVar12 + 0x48;
        uVar5 = uVar5 + 0x48;
      } while (uVar12 != uVar2);
      do {
        if (10 < (ulong)*(byte *)(uVar10 + 0x40)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a867c88);
          (*pcVar3)();
        }
        uVar4 = uVar10;
        (*(code *)(&PTR_FUN_110c17158)[*(byte *)(uVar10 + 0x40)])(uVar10);
        uVar10 = uVar10 + 0x48;
      } while (uVar10 != uVar2);
      uVar10 = *param_1;
    }
    uVar8 = uVar8 + 0x48;
    *param_1 = uVar1;
    param_1[1] = uVar8;
    param_1[2] = (ulong)(puVar9 + uVar7 * 9);
    if (uVar10 != 0) {
      __ZdlPv(uVar10);
      uVar4 = uVar10;
    }
  }
  param_1[1] = uVar8;
  return uVar4;
}



/* Entry: 10a867c8c; end: 10a867cd3;  */

long FUN_10a867c8c(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  lStack_28 = param_1 + 8;
  FUN_10a842110(&lStack_28);
  return param_1;
}



/* Entry: 10a867cd4; end: 10a867dff;  */

/* WARNING: Possible PIC construction at 0x00010a868e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a868eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a868c94) */
/* WARNING: Removing unreachable block (ram,0x00010a868624) */
/* WARNING: Removing unreachable block (ram,0x00010a8686a4) */
/* WARNING: Removing unreachable block (ram,0x00010a868ca4) */

void FUN_10a867cd4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined ***pppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined2 *puVar5;
  code *pcVar6;
  undefined ****ppppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long **pplVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  int iVar19;
  long *plVar20;
  undefined *puVar21;
  undefined7 *puVar22;
  code **ppcVar23;
  byte bVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  code **unaff_x20;
  long *plVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined *puVar30;
  long *plVar31;
  undefined8 ****ppppuVar32;
  undefined ***pppuStack_550;
  undefined **ppuStack_548;
  code **ppcStack_540;
  long *plStack_538;
  long *plStack_530;
  undefined *puStack_528;
  long *plStack_520;
  undefined1 auStack_518 [8];
  long *plStack_510;
  undefined1 uStack_508;
  long lStack_500;
  undefined1 uStack_4f8;
  long lStack_4f0;
  undefined1 uStack_4e8;
  long lStack_4e0;
  undefined1 auStack_4d8 [8];
  long *plStack_4d0;
  undefined1 uStack_4c8;
  code **ppcStack_4c0;
  undefined2 uStack_4b8;
  undefined1 uStack_4b6;
  undefined1 uStack_4b5;
  undefined1 uStack_4b4;
  undefined2 uStack_4b3;
  undefined1 uStack_4b1;
  undefined2 uStack_4b0;
  undefined1 uStack_4ae;
  undefined2 uStack_4ad;
  undefined1 uStack_4ab;
  undefined1 uStack_4aa;
  undefined1 uStack_4a9;
  undefined8 uStack_4a8;
  undefined1 uStack_4a0;
  undefined7 *puStack_498;
  undefined1 auStack_490 [8];
  undefined8 uStack_488;
  undefined1 uStack_480;
  long *plStack_478;
  undefined1 uStack_470;
  undefined **ppuStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 auStack_450 [2];
  long alStack_440 [7];
  undefined8 uStack_408;
  code *pcStack_400;
  undefined **ppuStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  undefined7 uStack_3c0;
  undefined1 uStack_3b9;
  undefined2 uStack_3b8;
  undefined5 uStack_3b6;
  undefined1 uStack_3b1;
  undefined8 uStack_3b0;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  uint auStack_300 [2];
  undefined ***pppuStack_2f8;
  undefined **ppuStack_2f0;
  long lStack_2e8;
  undefined ***pppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 uStack_2d0;
  undefined **ppuStack_2c8;
  undefined ***pppuStack_2c0;
  undefined ***pppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined ***pppuStack_2a0;
  undefined **ppuStack_298;
  long lStack_290;
  long lStack_278;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined ***pppuStack_238;
  undefined4 *puStack_230;
  long lStack_228;
  undefined ***pppuStack_220;
  undefined4 *puStack_218;
  undefined7 uStack_210;
  char cStack_209;
  undefined **ppuStack_208;
  undefined ***pppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 uStack_1e8;
  undefined ***pppuStack_1e0;
  undefined4 *puStack_1d8;
  long lStack_1d0;
  long lStack_1b8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_178;
  undefined ***pppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined4 uStack_158;
  long lStack_128;
  code **ppcStack_120;
  undefined ***pppuStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  undefined ***pppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined4 uStack_d8;
  long lStack_a8;
  code **ppcStack_a0;
  undefined ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined4 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = &ppuStack_78;
  func_0x00010a866dd8();
  if (ppuStack_78 == (undefined **)0x0) {
    ppuVar25 = &PTR_PTR_113305798;
    pppuVar8 = (undefined ***)ppuVar25;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
    param_1 = SUB84(ppuVar25,0);
  }
  else if (*(int *)ppuStack_78[0x3d] != 4) {
    unaff_x20 = &pcStack_68;
    pcStack_68 = FUN_10a89fd2c;
    ppuStack_60 = &PTR_FUN_110c24d70;
    param_1 = SUB84(&pcStack_68,0);
    uStack_58 = param_2;
    FUN_10a860860(ppuStack_78);
    pppuVar8 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  pppuStack_98 = pppuVar8;
  if (pppuStack_70 != (undefined ***)0x0) {
    pppuVar8 = pppuStack_70 + 1;
    do {
      ppuVar25 = *pppuVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar4) {
        *pppuVar8 = (undefined **)((long)ppuVar25 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar25 == (undefined **)0x0) {
      (*(code *)(*pppuStack_70)[2])(pppuStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuStack_98 = pppuStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  FUN_10a5ca2e0(&ppuStack_78);
  pppuVar8 = pppuStack_98;
  __Unwind_Resume();
  uVar14 = SUB84(pppuVar8,0);
  pcStack_88 = FUN_10a867e00;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = &ppuStack_f8;
  ppcStack_a0 = unaff_x20;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010a866dd8();
  if (ppuStack_f8 == (undefined **)0x0) {
    ppuVar25 = &PTR_PTR_113305798;
    pppuVar8 = (undefined ***)ppuVar25;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
    uVar14 = SUB84(ppuVar25,0);
  }
  else if (*(int *)ppuStack_f8[0x3d] != 4) {
    unaff_x20 = &pcStack_e8;
    pcStack_e8 = FUN_10a89ffdc;
    ppuStack_e0 = &PTR_FUN_110c24d88;
    uVar14 = SUB84(&pcStack_e8,0);
    uStack_d8 = param_1;
    FUN_10a860860(ppuStack_f8);
    pppuVar8 = &ppuStack_e0;
    (*(code *)*ppuStack_e0)();
  }
  pppuStack_118 = pppuVar8;
  if (pppuStack_f0 != (undefined ***)0x0) {
    pppuVar8 = pppuStack_f0 + 1;
    do {
      ppuVar25 = *pppuVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar4) {
        *pppuVar8 = (undefined **)((long)ppuVar25 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar25 == (undefined **)0x0) {
      (*(code *)(*pppuStack_f0)[2])(pppuStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuStack_118 = pppuStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(unaff_x20 + 1);
  FUN_10a5ca2e0(&ppuStack_f8);
  pppuVar8 = pppuStack_118;
  __Unwind_Resume();
  uVar15 = SUB84(pppuVar8,0);
  pcStack_108 = FUN_10a867f2c;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar25 = (undefined **)&ppuStack_178;
  ppcStack_120 = unaff_x20;
  ppuStack_110 = &puStack_90;
  func_0x00010a866dd8();
  if (ppuStack_178 == (undefined **)0x0) {
    ppuVar26 = &PTR_PTR_113305798;
    ppuVar25 = ppuVar26;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
    uVar15 = SUB84(ppuVar26,0);
  }
  else if (*(int *)ppuStack_178[0x3d] != 4) {
    unaff_x20 = &pcStack_168;
    pcStack_168 = FUN_10a8a00fc;
    ppuStack_160 = &PTR_FUN_110c24da0;
    uVar15 = SUB84(&pcStack_168,0);
    uStack_158 = uVar14;
    FUN_10a860860(ppuStack_178);
    ppuVar25 = (undefined **)&ppuStack_160;
    (*(code *)*ppuStack_160)();
  }
  if (pppuStack_170 != (undefined ***)0x0) {
    pppuVar8 = pppuStack_170 + 1;
    do {
      ppuVar26 = *pppuVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar4) {
        *pppuVar8 = (undefined **)((long)ppuVar26 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar26 == (undefined **)0x0) {
      (*(code *)(*pppuStack_170)[2])(pppuStack_170);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar25 = (undefined **)pppuStack_170;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(unaff_x20 + 1);
  FUN_10a5ca2e0(&ppuStack_178);
  __Unwind_Resume();
  pcStack_188 = FUN_10a868058;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = &ppuStack_208;
  puVar17 = param_3;
  pppuStack_190 = &ppuStack_110;
  func_0x00010a866dd8();
  if (ppuStack_208 == (undefined **)0x0) {
    ppuVar25 = &PTR_PTR_113305798;
    pppuVar8 = (undefined ***)ppuVar25;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
  }
  else if (*(int *)ppuStack_208[0x3d] != 4) {
    uVar14 = *param_3;
    func_0x000107c2b054(&pppuStack_220,*(undefined8 *)(param_3 + 2));
    uStack_240 = uVar15;
    uStack_23c = uVar14;
    if (cStack_209 < '\0') {
      func_0x000107c3192c(&pppuStack_238,pppuStack_220);
      puVar17 = puStack_218;
    }
    else {
      puStack_230 = puStack_218;
      pppuStack_238 = pppuStack_220;
      lStack_228 = CONCAT17(cStack_209,uStack_210);
    }
    ppuStack_1f8 = (undefined **)FUN_10a8a021c;
    ppuStack_1f0 = &PTR_FUN_110c24db8;
    uStack_1e8 = CONCAT44(uStack_23c,uStack_240);
    puStack_1d8 = puStack_230;
    pppuStack_1e0 = pppuStack_238;
    lStack_1d0 = lStack_228;
    pppuStack_238 = (undefined ***)0x0;
    puStack_230 = (undefined4 *)0x0;
    lStack_228 = 0;
    ppuVar25 = (undefined **)&ppuStack_1f8;
    FUN_10a860860(ppuStack_208);
    pppuVar8 = &ppuStack_1f0;
    (*(code *)*ppuStack_1f0)();
    if (lStack_228 < 0) {
      pppuVar8 = pppuStack_238;
      __ZdlPv();
    }
    if (cStack_209 < '\0') {
      pppuVar8 = pppuStack_220;
      __ZdlPv();
    }
  }
  if (pppuStack_200 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_200 + 1;
    do {
      ppuVar26 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar26 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar26 == (undefined **)0x0) {
      (*(code *)(*pppuStack_200)[2])(pppuStack_200);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar8 = pppuStack_200;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_209 < '\0') {
    __ZdlPv(pppuStack_220);
  }
  FUN_10a5ca2e0(&ppuStack_208);
  __Unwind_Resume(pppuVar8);
  pcStack_248 = FUN_10a868240;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar26 = (undefined **)&ppuStack_2c8;
  pppuStack_250 = &pppuStack_190;
  func_0x00010a866dd8(ppuVar26,pppuVar8);
  if (ppuStack_2c8 == (undefined **)0x0) {
    ppuVar26 = &PTR_PTR_113305798;
    FUN_10ae079a0(0);
    FUN_10ae07cd4(ppuVar26,&PTR_PTR_113305798);
  }
  else if (*(int *)ppuStack_2c8[0x3d] != 4) {
    func_0x000107c2b054(&pppuStack_2e0,&UNK_10f67d9eb);
    if (((*(long *)(puVar17 + 4) != 0) && (*(long *)(puVar17 + 2) != 0)) && (puVar17[6] == 1)) {
      FUN_109ffe064(&pppuStack_2b8);
      if (uStack_2d0 < 0) {
        __ZdlPv(pppuStack_2e0);
      }
      ppuStack_2d8 = ppuStack_2b0;
      pppuStack_2e0 = pppuStack_2b8;
      uStack_2d0 = CONCAT44(uStack_2a4,uStack_2a8);
    }
    func_0x00010ae02ecc(0,ppuVar25);
    func_0x00010ae02f70();
    ppuVar26 = &PTR_PTR_1133042b8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02f80();
    FUN_10ae07cd4(ppuVar26,&PTR_PTR_1133042b8);
    auStack_300[0] = (uint)ppuVar25;
    if (uStack_2d0 < 0) {
      func_0x000107c3192c(&pppuStack_2f8,pppuStack_2e0,ppuStack_2d8);
      ppuVar25 = (undefined **)(ulong)auStack_300[0];
    }
    else {
      ppuStack_2f0 = ppuStack_2d8;
      pppuStack_2f8 = pppuStack_2e0;
      lStack_2e8 = uStack_2d0;
    }
    pppuStack_2b8 = (undefined ***)FUN_10a8a0624;
    ppuStack_2b0 = &PTR_FUN_110c24dd0;
    uStack_2a8 = SUB84(ppuVar25,0);
    ppuStack_298 = ppuStack_2f0;
    pppuStack_2a0 = pppuStack_2f8;
    lStack_290 = lStack_2e8;
    pppuStack_2f8 = (undefined ***)0x0;
    ppuStack_2f0 = (undefined **)0x0;
    lStack_2e8 = 0;
    FUN_10a860860(ppuStack_2c8,&pppuStack_2b8);
    ppuVar26 = (undefined **)&ppuStack_2b0;
    (*(code *)*ppuStack_2b0)();
    if (lStack_2e8 < 0) {
      ppuVar26 = (undefined **)pppuStack_2f8;
      __ZdlPv();
    }
    if (uStack_2d0 < 0) {
      ppuVar26 = (undefined **)pppuStack_2e0;
      __ZdlPv();
    }
  }
  if (pppuStack_2c0 != (undefined ***)0x0) {
    pppuVar8 = pppuStack_2c0 + 1;
    do {
      ppuVar25 = *pppuVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar4) {
        *pppuVar8 = (undefined **)((long)ppuVar25 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar25 == (undefined **)0x0) {
      (*(code *)(*pppuStack_2c0)[2])(pppuStack_2c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar26 = (undefined **)pppuStack_2c0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_2d0._7_1_ < '\0') {
    __ZdlPv(pppuStack_2e0);
  }
  FUN_10a5ca2e0(&ppuStack_2c8);
  __Unwind_Resume();
  pcStack_308 = FUN_10a8684b4;
  ppppuVar7 = &pppuStack_550;
  lStack_370 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined **)ppuVar26[0x6f];
  pppuStack_310 = &pppuStack_250;
  (**(code **)(*ppuVar9 + 0x48))();
  ppuVar25 = (undefined **)*ppuVar9;
  if (-1 < *(char *)((long)ppuVar9 + 0x17)) {
    ppuVar25 = ppuVar9;
  }
  ppuVar9 = ppuVar25;
  _strlen();
  puVar28 = (undefined8 *)&UNK_110c23970;
  lVar29 = 0x30;
  do {
    if ((undefined **)*puVar28 == ppuVar9) {
      uVar10 = puVar28[-1];
      _memcmp(uVar10,ppuVar25,ppuVar9);
      if ((int)uVar10 == 0) {
        if (lVar29 != 0) {
          if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10a868f68;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_370) goto LAB_10a868fa0;
          puVar30 = &UNK_10f67ede7;
          uVar10 = 0;
          uVar16 = 1;
          uVar18 = 0x59c;
          ppppuVar7 = (undefined ****)auStack_300;
          ppppuVar32 = (undefined8 ****)pppuStack_310;
          pcVar6 = pcStack_308;
          goto SUB_10ae06f08;
        }
        break;
      }
    }
    puVar28 = puVar28 + 2;
    lVar29 = lVar29 + -0x10;
  } while (lVar29 != 0);
  ppuVar25 = (undefined **)ppuVar26[0x6f];
  (**(code **)(*ppuVar25 + 0x48))();
  bVar24 = *(byte *)((long)ppuVar26[0x6f] + 0xaa);
  ppuVar9 = (undefined **)ppuVar26[0x6f];
  puVar30 = ppuVar9[0x76];
  plVar27 = (long *)ppuVar9[0x77];
  if (plVar27 != (long *)0x0) {
    plVar20 = plVar27 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_460 = (long *)((ulong)plStack_460 & 0xffffffffffffff00);
  plStack_458 = (long *)0x0;
  puVar21 = ppuVar25[1];
  if (-1 < (char)*(byte *)((long)ppuVar25 + 0x17)) {
    puVar21 = (undefined *)(ulong)*(byte *)((long)ppuVar25 + 0x17);
  }
  puStack_528 = puVar30;
  plStack_520 = plVar27;
  if (puVar21 != (undefined *)0x0) {
    ppuStack_468 = (undefined **)0x0;
    uStack_470 = 3;
    func_0x00010938229c();
    uStack_3b0 = CONCAT17(9,(undefined7)uStack_3b0);
    uStack_3c0 = 0x6e6f6973736573;
    uStack_3b9 = 0x49;
    uStack_3b8 = 100;
    pplVar11 = &plStack_460;
    ppuStack_468 = ppuVar25;
    func_0x0001095b7584(pplVar11,&uStack_3c0);
    uVar13 = *(undefined1 *)pplVar11;
    *(undefined1 *)pplVar11 = uStack_470;
    ppuVar25 = (undefined **)pplVar11[1];
    uStack_470 = uVar13;
    pplVar11[1] = (long *)ppuStack_468;
    ppuStack_468 = ppuVar25;
    func_0x000109380ffc(&ppuStack_468,uVar13);
  }
  plStack_478 = (long *)((ulong)bVar24 & 1);
  uStack_480 = 4;
  uStack_3b0 = CONCAT17(0xf,(undefined7)uStack_3b0);
  uStack_3c0 = 0x53617461447369;
  uStack_3b9 = 0x74;
  uStack_3b8 = 0x6572;
  uStack_3b6 = 0x676e696d61;
  uStack_3b1 = 0;
  pplVar11 = &plStack_460;
  func_0x0001095b7584(pplVar11,&uStack_3c0);
  uVar13 = *(undefined1 *)pplVar11;
  *(undefined1 *)pplVar11 = uStack_480;
  plVar20 = pplVar11[1];
  uStack_480 = uVar13;
  pplVar11[1] = plStack_478;
  plStack_478 = plVar20;
  func_0x000109380ffc(&plStack_478,uVar13);
  uStack_3c0 = 0;
  uStack_3b9 = 0;
  uStack_3b8 = 0;
  uStack_3b6 = 0;
  uStack_3b1 = 0;
  uStack_3b0 = 0;
  pcStack_400 = (code *)0x0;
  ppuStack_3f8 = (undefined **)0x0;
  uStack_3f0 = 0;
  if (*(char *)(ppuVar9 + 0x75) == '\x01') {
    puVar21 = ppuVar9[0x73];
    if (puVar21 != (undefined *)0x0) {
      bVar24 = 5;
      uVar10 = 0x70756f7267;
LAB_10a86870c:
      uStack_3c0 = (undefined7)uVar10;
      uStack_3b9 = 0;
      uStack_3b0 = (ulong)bVar24 << 0x38;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pcStack_400,puVar21 + 0x18);
      puVar30 = puStack_528;
      uVar2 = CONCAT17(uStack_3b1,CONCAT52(uStack_3b6,uStack_3b8));
      if (-1 < (long)uStack_3b0) {
        uVar2 = uStack_3b0 >> 0x38;
      }
      if (uVar2 != 0) {
        ppuVar25 = ppuStack_3f8;
        if (-1 < (long)uStack_3f0) {
          ppuVar25 = (undefined **)(uStack_3f0 >> 0x38);
        }
        if ((ppuVar25 == (undefined **)0x0) || (puStack_528 == (undefined *)0x0)) {
          if (ppuVar25 == (undefined **)0x0) goto LAB_10a8689b0;
        }
        else {
          ppuVar25 = &PTR_PTR_113305e00;
          FUN_10ae079a0(0,&PTR_PTR_113305e00);
          FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305e00);
        }
        auStack_490[0] = 0;
        uStack_488 = 0;
        puStack_498 = (undefined7 *)0x0;
        uStack_4a0 = 3;
        puVar22 = &uStack_3c0;
        func_0x00010938229c();
        uStack_4a8._7_1_ = '\x04';
        uStack_4b8 = 0x7974;
        uStack_4b6 = 0x70;
        uStack_4b5 = 0x65;
        uStack_4b4 = 0;
        puVar12 = auStack_490;
        puStack_498 = puVar22;
        func_0x0001095b7584(puVar12,&uStack_4b8);
        uVar13 = *puVar12;
        *puVar12 = uStack_4a0;
        puVar22 = *(undefined7 **)(puVar12 + 8);
        uStack_4a0 = uVar13;
        *(undefined7 **)(puVar12 + 8) = puStack_498;
        puStack_498 = puVar22;
        if (uStack_4a8._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_4b1,
                           CONCAT25(uStack_4b3,
                                    CONCAT14(uStack_4b4,
                                             CONCAT13(uStack_4b5,CONCAT12(uStack_4b6,uStack_4b8)))))
                 );
          uVar13 = uStack_4a0;
        }
        func_0x000109380ffc(&puStack_498,uVar13);
        ppcStack_4c0 = (code **)0x0;
        uStack_4c8 = 3;
        ppcVar23 = &pcStack_400;
        func_0x00010938229c();
        uStack_4a8._7_1_ = '\x02';
        uStack_4b8 = 0x6469;
        uStack_4b6 = 0;
        puVar12 = auStack_490;
        ppcStack_4c0 = ppcVar23;
        func_0x0001095b7584(puVar12,&uStack_4b8);
        uVar13 = *puVar12;
        *puVar12 = uStack_4c8;
        ppcVar23 = *(code ***)(puVar12 + 8);
        uStack_4c8 = uVar13;
        *(code ***)(puVar12 + 8) = ppcStack_4c0;
        ppcStack_4c0 = ppcVar23;
        if (uStack_4a8._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_4b1,
                           CONCAT25(uStack_4b3,
                                    CONCAT14(uStack_4b4,
                                             CONCAT13(uStack_4b5,CONCAT12(uStack_4b6,uStack_4b8)))))
                 );
          uVar13 = uStack_4c8;
        }
        func_0x000109380ffc(&ppcStack_4c0,uVar13);
        func_0x000109381b20(auStack_4d8,auStack_490);
        uStack_4a8 = CONCAT17(10,(undefined7)uStack_4a8);
        uStack_4b0 = 0x6f66;
        uStack_4b8 = 0x6e69;
        uStack_4b6 = 0x76;
        uStack_4b5 = 0x69;
        uStack_4b4 = 0x74;
        uStack_4b3 = 0x4965;
        uStack_4b1 = 0x6e;
        uStack_4ae = 0;
        pplVar11 = &plStack_460;
        func_0x0001095b7584(pplVar11,&uStack_4b8);
        uVar13 = *(undefined1 *)pplVar11;
        *(undefined1 *)pplVar11 = auStack_4d8[0];
        plVar20 = pplVar11[1];
        auStack_4d8[0] = uVar13;
        pplVar11[1] = plStack_4d0;
        plStack_4d0 = plVar20;
        if ((long)uStack_4a8 < 0) {
          __ZdlPv(CONCAT17(uStack_4b1,
                           CONCAT25(uStack_4b3,
                                    CONCAT14(uStack_4b4,
                                             CONCAT13(uStack_4b5,CONCAT12(uStack_4b6,uStack_4b8)))))
                 );
          uVar13 = auStack_4d8[0];
        }
        func_0x000109380ffc(&plStack_4d0,uVar13);
        func_0x00010a383718(&uStack_3c0,&pcStack_400);
        ppuVar25 = &PTR_PTR_113305078;
        FUN_10ae079a0();
        func_0x00010a38376c();
        FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305078);
        func_0x000109380ffc(&uStack_488,auStack_490[0]);
      }
    }
  }
  else {
    if (*(char *)(ppuVar9 + 0x75) != '\0') goto LAB_10a868fa4;
    puVar21 = ppuVar9[0x73];
    if (puVar21 != (undefined *)0x0) {
      bVar24 = 6;
      uVar10 = 0x646e65697266;
      goto LAB_10a86870c;
    }
  }
LAB_10a8689b0:
  if (puVar30 != (undefined *)0x0) {
    auStack_490[0] = 0;
    uStack_488 = 0;
    lStack_4e0 = (long)*(int *)(puVar30 + 0x18);
    uStack_4e8 = 5;
    uStack_4a8._7_1_ = '\n';
    uStack_4b0 = 0x7372;
    uStack_4b8 = 0x696d;
    uStack_4b6 = 0x6e;
    uStack_4b5 = 0x50;
    uStack_4b4 = 0x6c;
    uStack_4b3 = 0x7961;
    uStack_4b1 = 0x65;
    uStack_4ae = 0;
    puVar12 = auStack_490;
    func_0x0001095b7584(puVar12,&uStack_4b8);
    uVar13 = *puVar12;
    *puVar12 = uStack_4e8;
    lVar29 = *(long *)(puVar12 + 8);
    uStack_4e8 = uVar13;
    *(long *)(puVar12 + 8) = lStack_4e0;
    lStack_4e0 = lVar29;
    if (uStack_4a8._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_4b1,
                       CONCAT25(uStack_4b3,
                                CONCAT14(uStack_4b4,
                                         CONCAT13(uStack_4b5,CONCAT12(uStack_4b6,uStack_4b8))))));
      uVar13 = uStack_4e8;
    }
    func_0x000109380ffc(&lStack_4e0,uVar13);
    lStack_4f0 = (long)*(int *)(puVar30 + 0x1c);
    uStack_4f8 = 5;
    uStack_4a8._7_1_ = '\n';
    uStack_4b0 = 0x7372;
    uStack_4b8 = 0x616d;
    uStack_4b6 = 0x78;
    uStack_4b5 = 0x50;
    uStack_4b4 = 0x6c;
    uStack_4b3 = 0x7961;
    uStack_4b1 = 0x65;
    uStack_4ae = 0;
    puVar12 = auStack_490;
    func_0x0001095b7584(puVar12,&uStack_4b8);
    uVar13 = *puVar12;
    *puVar12 = uStack_4f8;
    lVar29 = *(long *)(puVar12 + 8);
    uStack_4f8 = uVar13;
    *(long *)(puVar12 + 8) = lStack_4f0;
    lStack_4f0 = lVar29;
    if (uStack_4a8._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_4b1,
                       CONCAT25(uStack_4b3,
                                CONCAT14(uStack_4b4,
                                         CONCAT13(uStack_4b5,CONCAT12(uStack_4b6,uStack_4b8))))));
      uVar13 = uStack_4f8;
    }
    func_0x000109380ffc(&lStack_4f0,uVar13);
    iVar19 = *(int *)(puVar30 + 0x18);
    if ((*(ulong *)(puVar30 + 0x20) & 0x100000000) != 0) {
      iVar19 = (int)*(ulong *)(puVar30 + 0x20);
    }
    lStack_500 = (long)iVar19;
    uStack_508 = 5;
    uStack_4a8._7_1_ = '\r';
    uStack_4b8 = 0x6174;
    uStack_4b6 = 0x72;
    uStack_4b5 = 0x67;
    uStack_4b4 = 0x65;
    uStack_4b3 = 0x5074;
    uStack_4b1 = 0x6c;
    uStack_4b0 = 0x7961;
    uStack_4ae = 0x65;
    uStack_4ad = 0x7372;
    uStack_4ab = 0;
    puVar12 = auStack_490;
    func_0x0001095b7584(puVar12,&uStack_4b8);
    uVar13 = *puVar12;
    *puVar12 = uStack_508;
    lVar29 = *(long *)(puVar12 + 8);
    uStack_508 = uVar13;
    *(long *)(puVar12 + 8) = lStack_500;
    lStack_500 = lVar29;
    if (uStack_4a8._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_4b1,
                       CONCAT25(uStack_4b3,
                                CONCAT14(uStack_4b4,
                                         CONCAT13(uStack_4b5,CONCAT12(uStack_4b6,uStack_4b8))))));
      uVar13 = uStack_508;
    }
    func_0x000109380ffc(&lStack_500,uVar13);
    func_0x000109381b20(auStack_518,auStack_490);
    uStack_4a8 = CONCAT17(0xf,(undefined7)uStack_4a8);
    uStack_4b8 = 0x616d;
    uStack_4b6 = 0x74;
    uStack_4b5 = 99;
    uStack_4b4 = 0x68;
    uStack_4b3 = 0x616d;
    uStack_4b1 = 0x6b;
    uStack_4b0 = 0x6e69;
    uStack_4ae = 0x67;
    uStack_4ad = 0x6e49;
    uStack_4ab = 0x66;
    uStack_4aa = 0x6f;
    uStack_4a9 = 0;
    pplVar11 = &plStack_460;
    func_0x0001095b7584(pplVar11,&uStack_4b8);
    uVar13 = *(undefined1 *)pplVar11;
    *(undefined1 *)pplVar11 = auStack_518[0];
    plVar20 = pplVar11[1];
    auStack_518[0] = uVar13;
    pplVar11[1] = plStack_510;
    plStack_510 = plVar20;
    if ((long)uStack_4a8 < 0) {
      __ZdlPv(CONCAT17(uStack_4b1,
                       CONCAT25(uStack_4b3,
                                CONCAT14(uStack_4b4,
                                         CONCAT13(uStack_4b5,CONCAT12(uStack_4b6,uStack_4b8))))));
      uVar13 = auStack_518[0];
    }
    func_0x000109380ffc(&plStack_510,uVar13);
    func_0x00010ae02ecc(0,*(undefined4 *)(puVar30 + 0x18));
    func_0x00010ae02ecc();
    func_0x00010ae02ecc();
    ppuVar25 = &PTR_PTR_113305e70;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305e70);
    func_0x000109380ffc(&uStack_488,auStack_490[0]);
  }
  FUN_10a0c32e4(&uStack_4b8,&plStack_460,0xffffffff,0x20,0,1);
  uVar2 = CONCAT17(uStack_4a9,
                   CONCAT16(uStack_4aa,
                            CONCAT15(uStack_4ab,CONCAT23(uStack_4ad,CONCAT12(uStack_4ae,uStack_4b0))
                                    )));
  puVar5 = (undefined2 *)
           CONCAT17(uStack_4b1,
                    CONCAT25(uStack_4b3,
                             CONCAT14(uStack_4b4,
                                      CONCAT13(uStack_4b5,CONCAT12(uStack_4b6,uStack_4b8)))));
  if (-1 < (long)uStack_4a8) {
    uVar2 = uStack_4a8 >> 0x38;
    puVar5 = &uStack_4b8;
  }
  FUN_10a3bf330(auStack_450,puVar5,uVar2);
  if ((long)uStack_4a8 < 0) {
    __ZdlPv(CONCAT17(uStack_4b1,
                     CONCAT25(uStack_4b3,
                              CONCAT14(uStack_4b4,
                                       CONCAT13(uStack_4b5,CONCAT12(uStack_4b6,uStack_4b8))))));
  }
  func_0x000109380ffc(&plStack_458,(ulong)plStack_460 & 0xff);
  if (plVar27 != (long *)0x0) {
    plVar20 = plVar27 + 1;
    do {
      lVar29 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar29 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  FUN_10a8691d4(&uStack_4b8,ppuVar26[0x71],ppuVar26);
  plVar20 = (long *)0x138;
  __Znwm();
  uVar10 = auStack_450[0];
  plVar31 = plVar20 + 1;
  *plVar31 = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&PTR_FUN_110b9f3b0;
  plVar27 = plVar20 + 3;
  auStack_450[0] = 0;
  uStack_3c0 = (undefined7)uVar10;
  uStack_3b9 = (undefined1)((ulong)uVar10 >> 0x38);
  uStack_3b8 = (undefined2)auStack_450[1];
  uStack_3b6 = (undefined5)((ulong)auStack_450[1] >> 0x10);
  uStack_3b1 = (undefined1)((ulong)auStack_450[1] >> 0x38);
  (**(code **)(alStack_440[0] + 0x10))(&uStack_3b0,alStack_440);
  uStack_378 = uStack_408;
  ppuStack_548 = (undefined **)ppuVar26[0x41];
  pppuStack_550 = (undefined ***)ppuVar26[0x40];
  if (-1 < (char)*(byte *)((long)ppuVar26 + 0x217)) {
    ppuStack_548 = (undefined **)(ulong)*(byte *)((long)ppuVar26 + 0x217);
    pppuStack_550 = (undefined ***)(ppuVar26 + 0x40);
  }
  ppcStack_540 = &pcStack_400;
  pcStack_400 = FUN_10a8a082c;
  ppuStack_3f8 = &PTR_FUN_110c24de8;
  uStack_3f0 = CONCAT17(uStack_4b1,
                        CONCAT25(uStack_4b3,
                                 CONCAT14(uStack_4b4,
                                          CONCAT13(uStack_4b5,CONCAT12(uStack_4b6,uStack_4b8)))));
  uStack_3e8 = CONCAT17(uStack_4a9,
                        CONCAT16(uStack_4aa,
                                 CONCAT15(uStack_4ab,
                                          CONCAT23(uStack_4ad,CONCAT12(uStack_4ae,uStack_4b0)))));
  uStack_3e0 = uStack_4a8;
  uStack_4b0 = 0;
  uStack_4ae = 0;
  uStack_4ad = 0;
  uStack_4ab = 0;
  uStack_4aa = 0;
  uStack_4a9 = 0;
  uStack_4a8 = 0;
  FUN_10a23708c(plVar27,&UNK_10e4df438,0x2a,&UNK_10f647b49,4,&uStack_3c0,1);
  (*(code *)*ppuStack_3f8)(&ppuStack_3f8);
  FUN_10a042634(&uStack_3c0);
  plStack_460 = plVar27;
  plStack_458 = plVar20;
  FUN_10a86927c(&uStack_4b8);
  uStack_3c0 = 0;
  uStack_3b9 = 0;
  uStack_3b8 = 0;
  uStack_3b6 = 0;
  uStack_3b1 = 0;
  ppuVar25 = (undefined **)ppuVar26[0x6c];
  ppppuVar32 = &pppuStack_310;
  if (ppuVar25 == (undefined **)0x0) {
LAB_10a868ebc:
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar30 = &UNK_10f67ee52;
      uVar10 = 0;
      uVar16 = 1;
      uVar18 = 0x631;
      pcVar6 = (code *)0x10a868ef0;
SUB_10ae06f08:
      *(undefined8 *****)((long)ppppuVar7 + -0x10) = ppppuVar32;
      *(code **)((long)ppppuVar7 + -8) = pcVar6;
      *(undefined *****)((long)ppppuVar7 + -0x18) = ppppuVar7;
      FUN_10ae06f30(uVar10,uVar16,&UNK_10f67ed4a,&UNK_10f67ed92,uVar18,puVar30,ppppuVar7);
      return;
    }
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_3b8 = SUB82(ppuVar25,0);
    uStack_3b6 = (undefined5)((ulong)ppuVar25 >> 0x10);
    uStack_3b1 = (undefined1)((ulong)ppuVar25 >> 0x38);
    if (ppuVar25 == (undefined **)0x0) goto LAB_10a868ebc;
    ppuVar25 = (undefined **)ppuVar26[0x6b];
    uStack_3c0 = SUB87(ppuVar25,0);
    uStack_3b9 = (undefined1)((ulong)ppuVar25 >> 0x38);
    if (ppuVar25 == (undefined **)0x0) goto LAB_10a868ebc;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar30 = &UNK_10f67ee2b;
      uVar10 = 1;
      uVar16 = 4;
      uVar18 = 0x62d;
      ppppuVar7 = &pppuStack_550;
      pcVar6 = (code *)0x10a868e4c;
      goto SUB_10ae06f08;
    }
    *(undefined4 *)ppuVar26[0x3d] = 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar4) {
        *plVar31 = *plVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_538 = plVar27;
    plStack_530 = plVar20;
    (**(code **)*ppuVar25)(ppuVar25,&plStack_538);
    plVar27 = plStack_530;
    if (plStack_530 != (long *)0x0) {
      plVar20 = plStack_530 + 1;
      do {
        lVar29 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = lVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_530 + 0x10))(plStack_530);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
  }
  plVar27 = (long *)CONCAT17(uStack_3b1,CONCAT52(uStack_3b6,uStack_3b8));
  if (plVar27 != (long *)0x0) {
    plVar20 = plVar27 + 1;
    do {
      lVar29 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar29 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  plVar27 = plStack_458;
  if (plStack_458 != (long *)0x0) {
    plVar20 = plStack_458 + 1;
    do {
      lVar29 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar29 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plStack_458 + 0x10))(plStack_458);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  FUN_10a042634(auStack_450);
LAB_10a868f68:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_370) {
    return;
  }
LAB_10a868fa0:
  ___stack_chk_fail();
LAB_10a868fa4:
  FUN_10a05bab8(&UNK_10f6347d3);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a868fb4);
  (*pcVar6)();
}



/* Entry: 10a867e00; end: 10a867f2b;  */

/* WARNING: Possible PIC construction at 0x00010a868e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a868eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a868c94) */
/* WARNING: Removing unreachable block (ram,0x00010a868624) */
/* WARNING: Removing unreachable block (ram,0x00010a8686a4) */
/* WARNING: Removing unreachable block (ram,0x00010a868ca4) */

void FUN_10a867e00(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined ***pppuVar1;
  ulong uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined2 *puVar6;
  code *pcVar7;
  undefined ****ppppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long **pplVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  int iVar19;
  long *plVar20;
  undefined *puVar21;
  undefined7 *puVar22;
  code **ppcVar23;
  byte bVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  code **unaff_x20;
  long *plVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined *puVar30;
  long *plVar31;
  undefined8 ****ppppuVar32;
  undefined ***pppuStack_4d0;
  undefined **ppuStack_4c8;
  code **ppcStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  undefined *puStack_4a8;
  long *plStack_4a0;
  undefined1 auStack_498 [8];
  long *plStack_490;
  undefined1 uStack_488;
  long lStack_480;
  undefined1 uStack_478;
  long lStack_470;
  undefined1 uStack_468;
  long lStack_460;
  undefined1 auStack_458 [8];
  long *plStack_450;
  undefined1 uStack_448;
  code **ppcStack_440;
  undefined2 uStack_438;
  undefined1 uStack_436;
  undefined1 uStack_435;
  undefined1 uStack_434;
  undefined2 uStack_433;
  undefined1 uStack_431;
  undefined2 uStack_430;
  undefined1 uStack_42e;
  undefined2 uStack_42d;
  undefined1 uStack_42b;
  undefined1 uStack_42a;
  undefined1 uStack_429;
  undefined8 uStack_428;
  undefined1 uStack_420;
  undefined7 *puStack_418;
  undefined1 auStack_410 [8];
  undefined8 uStack_408;
  undefined1 uStack_400;
  long *plStack_3f8;
  undefined1 uStack_3f0;
  undefined **ppuStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 auStack_3d0 [2];
  long alStack_3c0 [7];
  undefined8 uStack_388;
  code *pcStack_380;
  undefined **ppuStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  undefined7 uStack_340;
  undefined1 uStack_339;
  undefined2 uStack_338;
  undefined5 uStack_336;
  undefined1 uStack_331;
  undefined8 uStack_330;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  uint auStack_280 [2];
  undefined ***pppuStack_278;
  undefined **ppuStack_270;
  long lStack_268;
  undefined ***pppuStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  undefined **ppuStack_248;
  undefined ***pppuStack_240;
  undefined ***pppuStack_238;
  undefined **ppuStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined ***pppuStack_220;
  undefined **ppuStack_218;
  long lStack_210;
  long lStack_1f8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined ***pppuStack_1b8;
  undefined4 *puStack_1b0;
  long lStack_1a8;
  undefined ***pppuStack_1a0;
  undefined4 *puStack_198;
  undefined7 uStack_190;
  char cStack_189;
  undefined **ppuStack_188;
  undefined ***pppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined ***pppuStack_160;
  undefined4 *puStack_158;
  long lStack_150;
  long lStack_138;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  undefined ***pppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined4 uStack_d8;
  long lStack_a8;
  code **ppcStack_a0;
  undefined ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined4 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = &ppuStack_78;
  func_0x00010a866dd8();
  if (ppuStack_78 == (undefined **)0x0) {
    ppuVar25 = &PTR_PTR_113305798;
    pppuVar9 = (undefined ***)ppuVar25;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
    param_1 = SUB84(ppuVar25,0);
  }
  else if (*(int *)ppuStack_78[0x3d] != 4) {
    unaff_x20 = &pcStack_68;
    pcStack_68 = FUN_10a89ffdc;
    ppuStack_60 = &PTR_FUN_110c24d88;
    param_1 = SUB84(&pcStack_68,0);
    uStack_58 = param_2;
    FUN_10a860860(ppuStack_78);
    pppuVar9 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  pppuStack_98 = pppuVar9;
  if (pppuStack_70 != (undefined ***)0x0) {
    pppuVar9 = pppuStack_70 + 1;
    do {
      ppuVar25 = *pppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
      if (bVar5) {
        *pppuVar9 = (undefined **)((long)ppuVar25 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar25 == (undefined **)0x0) {
      (*(code *)(*pppuStack_70)[2])(pppuStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuStack_98 = pppuStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  FUN_10a5ca2e0(&ppuStack_78);
  pppuVar9 = pppuStack_98;
  __Unwind_Resume();
  uVar15 = SUB84(pppuVar9,0);
  pcStack_88 = FUN_10a867f2c;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar25 = (undefined **)&ppuStack_f8;
  ppcStack_a0 = unaff_x20;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010a866dd8();
  if (ppuStack_f8 == (undefined **)0x0) {
    ppuVar26 = &PTR_PTR_113305798;
    ppuVar25 = ppuVar26;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
    uVar15 = SUB84(ppuVar26,0);
  }
  else if (*(int *)ppuStack_f8[0x3d] != 4) {
    unaff_x20 = &pcStack_e8;
    pcStack_e8 = FUN_10a8a00fc;
    ppuStack_e0 = &PTR_FUN_110c24da0;
    uVar15 = SUB84(&pcStack_e8,0);
    uStack_d8 = param_1;
    FUN_10a860860(ppuStack_f8);
    ppuVar25 = (undefined **)&ppuStack_e0;
    (*(code *)*ppuStack_e0)();
  }
  if (pppuStack_f0 != (undefined ***)0x0) {
    pppuVar9 = pppuStack_f0 + 1;
    do {
      ppuVar26 = *pppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
      if (bVar5) {
        *pppuVar9 = (undefined **)((long)ppuVar26 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar26 == (undefined **)0x0) {
      (*(code *)(*pppuStack_f0)[2])(pppuStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar25 = (undefined **)pppuStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(unaff_x20 + 1);
  FUN_10a5ca2e0(&ppuStack_f8);
  __Unwind_Resume();
  pcStack_108 = FUN_10a868058;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = &ppuStack_188;
  puVar17 = param_3;
  ppuStack_110 = &puStack_90;
  func_0x00010a866dd8();
  if (ppuStack_188 == (undefined **)0x0) {
    ppuVar25 = &PTR_PTR_113305798;
    pppuVar9 = (undefined ***)ppuVar25;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
  }
  else if (*(int *)ppuStack_188[0x3d] != 4) {
    uVar3 = *param_3;
    func_0x000107c2b054(&pppuStack_1a0,*(undefined8 *)(param_3 + 2));
    uStack_1c0 = uVar15;
    uStack_1bc = uVar3;
    if (cStack_189 < '\0') {
      func_0x000107c3192c(&pppuStack_1b8,pppuStack_1a0);
      puVar17 = puStack_198;
    }
    else {
      puStack_1b0 = puStack_198;
      pppuStack_1b8 = pppuStack_1a0;
      lStack_1a8 = CONCAT17(cStack_189,uStack_190);
    }
    ppuStack_178 = (undefined **)FUN_10a8a021c;
    ppuStack_170 = &PTR_FUN_110c24db8;
    uStack_168 = CONCAT44(uStack_1bc,uStack_1c0);
    puStack_158 = puStack_1b0;
    pppuStack_160 = pppuStack_1b8;
    lStack_150 = lStack_1a8;
    pppuStack_1b8 = (undefined ***)0x0;
    puStack_1b0 = (undefined4 *)0x0;
    lStack_1a8 = 0;
    ppuVar25 = (undefined **)&ppuStack_178;
    FUN_10a860860(ppuStack_188);
    pppuVar9 = &ppuStack_170;
    (*(code *)*ppuStack_170)();
    if (lStack_1a8 < 0) {
      pppuVar9 = pppuStack_1b8;
      __ZdlPv();
    }
    if (cStack_189 < '\0') {
      pppuVar9 = pppuStack_1a0;
      __ZdlPv();
    }
  }
  if (pppuStack_180 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_180 + 1;
    do {
      ppuVar26 = *pppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined **)((long)ppuVar26 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar26 == (undefined **)0x0) {
      (*(code *)(*pppuStack_180)[2])(pppuStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar9 = pppuStack_180;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_189 < '\0') {
    __ZdlPv(pppuStack_1a0);
  }
  FUN_10a5ca2e0(&ppuStack_188);
  __Unwind_Resume(pppuVar9);
  pcStack_1c8 = FUN_10a868240;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar26 = (undefined **)&ppuStack_248;
  pppuStack_1d0 = &ppuStack_110;
  func_0x00010a866dd8(ppuVar26,pppuVar9);
  if (ppuStack_248 == (undefined **)0x0) {
    ppuVar26 = &PTR_PTR_113305798;
    FUN_10ae079a0(0);
    FUN_10ae07cd4(ppuVar26,&PTR_PTR_113305798);
  }
  else if (*(int *)ppuStack_248[0x3d] != 4) {
    func_0x000107c2b054(&pppuStack_260,&UNK_10f67d9eb);
    if (((*(long *)(puVar17 + 4) != 0) && (*(long *)(puVar17 + 2) != 0)) && (puVar17[6] == 1)) {
      FUN_109ffe064(&pppuStack_238);
      if (uStack_250 < 0) {
        __ZdlPv(pppuStack_260);
      }
      ppuStack_258 = ppuStack_230;
      pppuStack_260 = pppuStack_238;
      uStack_250 = CONCAT44(uStack_224,uStack_228);
    }
    func_0x00010ae02ecc(0,ppuVar25);
    func_0x00010ae02f70();
    ppuVar26 = &PTR_PTR_1133042b8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02f80();
    FUN_10ae07cd4(ppuVar26,&PTR_PTR_1133042b8);
    auStack_280[0] = (uint)ppuVar25;
    if (uStack_250 < 0) {
      func_0x000107c3192c(&pppuStack_278,pppuStack_260,ppuStack_258);
      ppuVar25 = (undefined **)(ulong)auStack_280[0];
    }
    else {
      ppuStack_270 = ppuStack_258;
      pppuStack_278 = pppuStack_260;
      lStack_268 = uStack_250;
    }
    pppuStack_238 = (undefined ***)FUN_10a8a0624;
    ppuStack_230 = &PTR_FUN_110c24dd0;
    uStack_228 = SUB84(ppuVar25,0);
    ppuStack_218 = ppuStack_270;
    pppuStack_220 = pppuStack_278;
    lStack_210 = lStack_268;
    pppuStack_278 = (undefined ***)0x0;
    ppuStack_270 = (undefined **)0x0;
    lStack_268 = 0;
    FUN_10a860860(ppuStack_248,&pppuStack_238);
    ppuVar26 = (undefined **)&ppuStack_230;
    (*(code *)*ppuStack_230)();
    if (lStack_268 < 0) {
      ppuVar26 = (undefined **)pppuStack_278;
      __ZdlPv();
    }
    if (uStack_250 < 0) {
      ppuVar26 = (undefined **)pppuStack_260;
      __ZdlPv();
    }
  }
  if (pppuStack_240 != (undefined ***)0x0) {
    pppuVar9 = pppuStack_240 + 1;
    do {
      ppuVar25 = *pppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
      if (bVar5) {
        *pppuVar9 = (undefined **)((long)ppuVar25 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar25 == (undefined **)0x0) {
      (*(code *)(*pppuStack_240)[2])(pppuStack_240);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar26 = (undefined **)pppuStack_240;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_250._7_1_ < '\0') {
    __ZdlPv(pppuStack_260);
  }
  FUN_10a5ca2e0(&ppuStack_248);
  __Unwind_Resume();
  pcStack_288 = FUN_10a8684b4;
  ppppuVar8 = &pppuStack_4d0;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = (undefined **)ppuVar26[0x6f];
  pppuStack_290 = &pppuStack_1d0;
  (**(code **)(*ppuVar10 + 0x48))();
  ppuVar25 = (undefined **)*ppuVar10;
  if (-1 < *(char *)((long)ppuVar10 + 0x17)) {
    ppuVar25 = ppuVar10;
  }
  ppuVar10 = ppuVar25;
  _strlen();
  puVar28 = (undefined8 *)&UNK_110c23970;
  lVar29 = 0x30;
  do {
    if ((undefined **)*puVar28 == ppuVar10) {
      uVar11 = puVar28[-1];
      _memcmp(uVar11,ppuVar25,ppuVar10);
      if ((int)uVar11 == 0) {
        if (lVar29 != 0) {
          if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10a868f68;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f0) goto LAB_10a868fa0;
          puVar30 = &UNK_10f67ede7;
          uVar11 = 0;
          uVar16 = 1;
          uVar18 = 0x59c;
          ppppuVar8 = (undefined ****)auStack_280;
          ppppuVar32 = (undefined8 ****)pppuStack_290;
          pcVar7 = pcStack_288;
          goto SUB_10ae06f08;
        }
        break;
      }
    }
    puVar28 = puVar28 + 2;
    lVar29 = lVar29 + -0x10;
  } while (lVar29 != 0);
  ppuVar25 = (undefined **)ppuVar26[0x6f];
  (**(code **)(*ppuVar25 + 0x48))();
  bVar24 = *(byte *)((long)ppuVar26[0x6f] + 0xaa);
  ppuVar10 = (undefined **)ppuVar26[0x6f];
  puVar30 = ppuVar10[0x76];
  plVar27 = (long *)ppuVar10[0x77];
  if (plVar27 != (long *)0x0) {
    plVar20 = plVar27 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = *plVar20 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_3e0 = (long *)((ulong)plStack_3e0 & 0xffffffffffffff00);
  plStack_3d8 = (long *)0x0;
  puVar21 = ppuVar25[1];
  if (-1 < (char)*(byte *)((long)ppuVar25 + 0x17)) {
    puVar21 = (undefined *)(ulong)*(byte *)((long)ppuVar25 + 0x17);
  }
  puStack_4a8 = puVar30;
  plStack_4a0 = plVar27;
  if (puVar21 != (undefined *)0x0) {
    ppuStack_3e8 = (undefined **)0x0;
    uStack_3f0 = 3;
    func_0x00010938229c();
    uStack_330 = CONCAT17(9,(undefined7)uStack_330);
    uStack_340 = 0x6e6f6973736573;
    uStack_339 = 0x49;
    uStack_338 = 100;
    pplVar12 = &plStack_3e0;
    ppuStack_3e8 = ppuVar25;
    func_0x0001095b7584(pplVar12,&uStack_340);
    uVar14 = *(undefined1 *)pplVar12;
    *(undefined1 *)pplVar12 = uStack_3f0;
    ppuVar25 = (undefined **)pplVar12[1];
    uStack_3f0 = uVar14;
    pplVar12[1] = (long *)ppuStack_3e8;
    ppuStack_3e8 = ppuVar25;
    func_0x000109380ffc(&ppuStack_3e8,uVar14);
  }
  plStack_3f8 = (long *)((ulong)bVar24 & 1);
  uStack_400 = 4;
  uStack_330 = CONCAT17(0xf,(undefined7)uStack_330);
  uStack_340 = 0x53617461447369;
  uStack_339 = 0x74;
  uStack_338 = 0x6572;
  uStack_336 = 0x676e696d61;
  uStack_331 = 0;
  pplVar12 = &plStack_3e0;
  func_0x0001095b7584(pplVar12,&uStack_340);
  uVar14 = *(undefined1 *)pplVar12;
  *(undefined1 *)pplVar12 = uStack_400;
  plVar20 = pplVar12[1];
  uStack_400 = uVar14;
  pplVar12[1] = plStack_3f8;
  plStack_3f8 = plVar20;
  func_0x000109380ffc(&plStack_3f8,uVar14);
  uStack_340 = 0;
  uStack_339 = 0;
  uStack_338 = 0;
  uStack_336 = 0;
  uStack_331 = 0;
  uStack_330 = 0;
  pcStack_380 = (code *)0x0;
  ppuStack_378 = (undefined **)0x0;
  uStack_370 = 0;
  if (*(char *)(ppuVar10 + 0x75) == '\x01') {
    puVar21 = ppuVar10[0x73];
    if (puVar21 != (undefined *)0x0) {
      bVar24 = 5;
      uVar11 = 0x70756f7267;
LAB_10a86870c:
      uStack_340 = (undefined7)uVar11;
      uStack_339 = 0;
      uStack_330 = (ulong)bVar24 << 0x38;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pcStack_380,puVar21 + 0x18);
      puVar30 = puStack_4a8;
      uVar2 = CONCAT17(uStack_331,CONCAT52(uStack_336,uStack_338));
      if (-1 < (long)uStack_330) {
        uVar2 = uStack_330 >> 0x38;
      }
      if (uVar2 != 0) {
        ppuVar25 = ppuStack_378;
        if (-1 < (long)uStack_370) {
          ppuVar25 = (undefined **)(uStack_370 >> 0x38);
        }
        if ((ppuVar25 == (undefined **)0x0) || (puStack_4a8 == (undefined *)0x0)) {
          if (ppuVar25 == (undefined **)0x0) goto LAB_10a8689b0;
        }
        else {
          ppuVar25 = &PTR_PTR_113305e00;
          FUN_10ae079a0(0,&PTR_PTR_113305e00);
          FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305e00);
        }
        auStack_410[0] = 0;
        uStack_408 = 0;
        puStack_418 = (undefined7 *)0x0;
        uStack_420 = 3;
        puVar22 = &uStack_340;
        func_0x00010938229c();
        uStack_428._7_1_ = '\x04';
        uStack_438 = 0x7974;
        uStack_436 = 0x70;
        uStack_435 = 0x65;
        uStack_434 = 0;
        puVar13 = auStack_410;
        puStack_418 = puVar22;
        func_0x0001095b7584(puVar13,&uStack_438);
        uVar14 = *puVar13;
        *puVar13 = uStack_420;
        puVar22 = *(undefined7 **)(puVar13 + 8);
        uStack_420 = uVar14;
        *(undefined7 **)(puVar13 + 8) = puStack_418;
        puStack_418 = puVar22;
        if (uStack_428._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_431,
                           CONCAT25(uStack_433,
                                    CONCAT14(uStack_434,
                                             CONCAT13(uStack_435,CONCAT12(uStack_436,uStack_438)))))
                 );
          uVar14 = uStack_420;
        }
        func_0x000109380ffc(&puStack_418,uVar14);
        ppcStack_440 = (code **)0x0;
        uStack_448 = 3;
        ppcVar23 = &pcStack_380;
        func_0x00010938229c();
        uStack_428._7_1_ = '\x02';
        uStack_438 = 0x6469;
        uStack_436 = 0;
        puVar13 = auStack_410;
        ppcStack_440 = ppcVar23;
        func_0x0001095b7584(puVar13,&uStack_438);
        uVar14 = *puVar13;
        *puVar13 = uStack_448;
        ppcVar23 = *(code ***)(puVar13 + 8);
        uStack_448 = uVar14;
        *(code ***)(puVar13 + 8) = ppcStack_440;
        ppcStack_440 = ppcVar23;
        if (uStack_428._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_431,
                           CONCAT25(uStack_433,
                                    CONCAT14(uStack_434,
                                             CONCAT13(uStack_435,CONCAT12(uStack_436,uStack_438)))))
                 );
          uVar14 = uStack_448;
        }
        func_0x000109380ffc(&ppcStack_440,uVar14);
        func_0x000109381b20(auStack_458,auStack_410);
        uStack_428 = CONCAT17(10,(undefined7)uStack_428);
        uStack_430 = 0x6f66;
        uStack_438 = 0x6e69;
        uStack_436 = 0x76;
        uStack_435 = 0x69;
        uStack_434 = 0x74;
        uStack_433 = 0x4965;
        uStack_431 = 0x6e;
        uStack_42e = 0;
        pplVar12 = &plStack_3e0;
        func_0x0001095b7584(pplVar12,&uStack_438);
        uVar14 = *(undefined1 *)pplVar12;
        *(undefined1 *)pplVar12 = auStack_458[0];
        plVar20 = pplVar12[1];
        auStack_458[0] = uVar14;
        pplVar12[1] = plStack_450;
        plStack_450 = plVar20;
        if ((long)uStack_428 < 0) {
          __ZdlPv(CONCAT17(uStack_431,
                           CONCAT25(uStack_433,
                                    CONCAT14(uStack_434,
                                             CONCAT13(uStack_435,CONCAT12(uStack_436,uStack_438)))))
                 );
          uVar14 = auStack_458[0];
        }
        func_0x000109380ffc(&plStack_450,uVar14);
        func_0x00010a383718(&uStack_340,&pcStack_380);
        ppuVar25 = &PTR_PTR_113305078;
        FUN_10ae079a0();
        func_0x00010a38376c();
        FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305078);
        func_0x000109380ffc(&uStack_408,auStack_410[0]);
      }
    }
  }
  else {
    if (*(char *)(ppuVar10 + 0x75) != '\0') goto LAB_10a868fa4;
    puVar21 = ppuVar10[0x73];
    if (puVar21 != (undefined *)0x0) {
      bVar24 = 6;
      uVar11 = 0x646e65697266;
      goto LAB_10a86870c;
    }
  }
LAB_10a8689b0:
  if (puVar30 != (undefined *)0x0) {
    auStack_410[0] = 0;
    uStack_408 = 0;
    lStack_460 = (long)*(int *)(puVar30 + 0x18);
    uStack_468 = 5;
    uStack_428._7_1_ = '\n';
    uStack_430 = 0x7372;
    uStack_438 = 0x696d;
    uStack_436 = 0x6e;
    uStack_435 = 0x50;
    uStack_434 = 0x6c;
    uStack_433 = 0x7961;
    uStack_431 = 0x65;
    uStack_42e = 0;
    puVar13 = auStack_410;
    func_0x0001095b7584(puVar13,&uStack_438);
    uVar14 = *puVar13;
    *puVar13 = uStack_468;
    lVar29 = *(long *)(puVar13 + 8);
    uStack_468 = uVar14;
    *(long *)(puVar13 + 8) = lStack_460;
    lStack_460 = lVar29;
    if (uStack_428._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_431,
                       CONCAT25(uStack_433,
                                CONCAT14(uStack_434,
                                         CONCAT13(uStack_435,CONCAT12(uStack_436,uStack_438))))));
      uVar14 = uStack_468;
    }
    func_0x000109380ffc(&lStack_460,uVar14);
    lStack_470 = (long)*(int *)(puVar30 + 0x1c);
    uStack_478 = 5;
    uStack_428._7_1_ = '\n';
    uStack_430 = 0x7372;
    uStack_438 = 0x616d;
    uStack_436 = 0x78;
    uStack_435 = 0x50;
    uStack_434 = 0x6c;
    uStack_433 = 0x7961;
    uStack_431 = 0x65;
    uStack_42e = 0;
    puVar13 = auStack_410;
    func_0x0001095b7584(puVar13,&uStack_438);
    uVar14 = *puVar13;
    *puVar13 = uStack_478;
    lVar29 = *(long *)(puVar13 + 8);
    uStack_478 = uVar14;
    *(long *)(puVar13 + 8) = lStack_470;
    lStack_470 = lVar29;
    if (uStack_428._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_431,
                       CONCAT25(uStack_433,
                                CONCAT14(uStack_434,
                                         CONCAT13(uStack_435,CONCAT12(uStack_436,uStack_438))))));
      uVar14 = uStack_478;
    }
    func_0x000109380ffc(&lStack_470,uVar14);
    iVar19 = *(int *)(puVar30 + 0x18);
    if ((*(ulong *)(puVar30 + 0x20) & 0x100000000) != 0) {
      iVar19 = (int)*(ulong *)(puVar30 + 0x20);
    }
    lStack_480 = (long)iVar19;
    uStack_488 = 5;
    uStack_428._7_1_ = '\r';
    uStack_438 = 0x6174;
    uStack_436 = 0x72;
    uStack_435 = 0x67;
    uStack_434 = 0x65;
    uStack_433 = 0x5074;
    uStack_431 = 0x6c;
    uStack_430 = 0x7961;
    uStack_42e = 0x65;
    uStack_42d = 0x7372;
    uStack_42b = 0;
    puVar13 = auStack_410;
    func_0x0001095b7584(puVar13,&uStack_438);
    uVar14 = *puVar13;
    *puVar13 = uStack_488;
    lVar29 = *(long *)(puVar13 + 8);
    uStack_488 = uVar14;
    *(long *)(puVar13 + 8) = lStack_480;
    lStack_480 = lVar29;
    if (uStack_428._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_431,
                       CONCAT25(uStack_433,
                                CONCAT14(uStack_434,
                                         CONCAT13(uStack_435,CONCAT12(uStack_436,uStack_438))))));
      uVar14 = uStack_488;
    }
    func_0x000109380ffc(&lStack_480,uVar14);
    func_0x000109381b20(auStack_498,auStack_410);
    uStack_428 = CONCAT17(0xf,(undefined7)uStack_428);
    uStack_438 = 0x616d;
    uStack_436 = 0x74;
    uStack_435 = 99;
    uStack_434 = 0x68;
    uStack_433 = 0x616d;
    uStack_431 = 0x6b;
    uStack_430 = 0x6e69;
    uStack_42e = 0x67;
    uStack_42d = 0x6e49;
    uStack_42b = 0x66;
    uStack_42a = 0x6f;
    uStack_429 = 0;
    pplVar12 = &plStack_3e0;
    func_0x0001095b7584(pplVar12,&uStack_438);
    uVar14 = *(undefined1 *)pplVar12;
    *(undefined1 *)pplVar12 = auStack_498[0];
    plVar20 = pplVar12[1];
    auStack_498[0] = uVar14;
    pplVar12[1] = plStack_490;
    plStack_490 = plVar20;
    if ((long)uStack_428 < 0) {
      __ZdlPv(CONCAT17(uStack_431,
                       CONCAT25(uStack_433,
                                CONCAT14(uStack_434,
                                         CONCAT13(uStack_435,CONCAT12(uStack_436,uStack_438))))));
      uVar14 = auStack_498[0];
    }
    func_0x000109380ffc(&plStack_490,uVar14);
    func_0x00010ae02ecc(0,*(undefined4 *)(puVar30 + 0x18));
    func_0x00010ae02ecc();
    func_0x00010ae02ecc();
    ppuVar25 = &PTR_PTR_113305e70;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305e70);
    func_0x000109380ffc(&uStack_408,auStack_410[0]);
  }
  FUN_10a0c32e4(&uStack_438,&plStack_3e0,0xffffffff,0x20,0,1);
  uVar2 = CONCAT17(uStack_429,
                   CONCAT16(uStack_42a,
                            CONCAT15(uStack_42b,CONCAT23(uStack_42d,CONCAT12(uStack_42e,uStack_430))
                                    )));
  puVar6 = (undefined2 *)
           CONCAT17(uStack_431,
                    CONCAT25(uStack_433,
                             CONCAT14(uStack_434,
                                      CONCAT13(uStack_435,CONCAT12(uStack_436,uStack_438)))));
  if (-1 < (long)uStack_428) {
    uVar2 = uStack_428 >> 0x38;
    puVar6 = &uStack_438;
  }
  FUN_10a3bf330(auStack_3d0,puVar6,uVar2);
  if ((long)uStack_428 < 0) {
    __ZdlPv(CONCAT17(uStack_431,
                     CONCAT25(uStack_433,
                              CONCAT14(uStack_434,
                                       CONCAT13(uStack_435,CONCAT12(uStack_436,uStack_438))))));
  }
  func_0x000109380ffc(&plStack_3d8,(ulong)plStack_3e0 & 0xff);
  if (plVar27 != (long *)0x0) {
    plVar20 = plVar27 + 1;
    do {
      lVar29 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar29 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  FUN_10a8691d4(&uStack_438,ppuVar26[0x71],ppuVar26);
  plVar20 = (long *)0x138;
  __Znwm();
  uVar11 = auStack_3d0[0];
  plVar31 = plVar20 + 1;
  *plVar31 = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&PTR_FUN_110b9f3b0;
  plVar27 = plVar20 + 3;
  auStack_3d0[0] = 0;
  uStack_340 = (undefined7)uVar11;
  uStack_339 = (undefined1)((ulong)uVar11 >> 0x38);
  uStack_338 = (undefined2)auStack_3d0[1];
  uStack_336 = (undefined5)((ulong)auStack_3d0[1] >> 0x10);
  uStack_331 = (undefined1)((ulong)auStack_3d0[1] >> 0x38);
  (**(code **)(alStack_3c0[0] + 0x10))(&uStack_330,alStack_3c0);
  uStack_2f8 = uStack_388;
  ppuStack_4c8 = (undefined **)ppuVar26[0x41];
  pppuStack_4d0 = (undefined ***)ppuVar26[0x40];
  if (-1 < (char)*(byte *)((long)ppuVar26 + 0x217)) {
    ppuStack_4c8 = (undefined **)(ulong)*(byte *)((long)ppuVar26 + 0x217);
    pppuStack_4d0 = (undefined ***)(ppuVar26 + 0x40);
  }
  ppcStack_4c0 = &pcStack_380;
  pcStack_380 = FUN_10a8a082c;
  ppuStack_378 = &PTR_FUN_110c24de8;
  uStack_370 = CONCAT17(uStack_431,
                        CONCAT25(uStack_433,
                                 CONCAT14(uStack_434,
                                          CONCAT13(uStack_435,CONCAT12(uStack_436,uStack_438)))));
  uStack_368 = CONCAT17(uStack_429,
                        CONCAT16(uStack_42a,
                                 CONCAT15(uStack_42b,
                                          CONCAT23(uStack_42d,CONCAT12(uStack_42e,uStack_430)))));
  uStack_360 = uStack_428;
  uStack_430 = 0;
  uStack_42e = 0;
  uStack_42d = 0;
  uStack_42b = 0;
  uStack_42a = 0;
  uStack_429 = 0;
  uStack_428 = 0;
  FUN_10a23708c(plVar27,&UNK_10e4df438,0x2a,&UNK_10f647b49,4,&uStack_340,1);
  (*(code *)*ppuStack_378)(&ppuStack_378);
  FUN_10a042634(&uStack_340);
  plStack_3e0 = plVar27;
  plStack_3d8 = plVar20;
  FUN_10a86927c(&uStack_438);
  uStack_340 = 0;
  uStack_339 = 0;
  uStack_338 = 0;
  uStack_336 = 0;
  uStack_331 = 0;
  ppuVar25 = (undefined **)ppuVar26[0x6c];
  ppppuVar32 = &pppuStack_290;
  if (ppuVar25 == (undefined **)0x0) {
LAB_10a868ebc:
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar30 = &UNK_10f67ee52;
      uVar11 = 0;
      uVar16 = 1;
      uVar18 = 0x631;
      pcVar7 = (code *)0x10a868ef0;
SUB_10ae06f08:
      *(undefined8 *****)((long)ppppuVar8 + -0x10) = ppppuVar32;
      *(code **)((long)ppppuVar8 + -8) = pcVar7;
      *(undefined *****)((long)ppppuVar8 + -0x18) = ppppuVar8;
      FUN_10ae06f30(uVar11,uVar16,&UNK_10f67ed4a,&UNK_10f67ed92,uVar18,puVar30,ppppuVar8);
      return;
    }
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_338 = SUB82(ppuVar25,0);
    uStack_336 = (undefined5)((ulong)ppuVar25 >> 0x10);
    uStack_331 = (undefined1)((ulong)ppuVar25 >> 0x38);
    if (ppuVar25 == (undefined **)0x0) goto LAB_10a868ebc;
    ppuVar25 = (undefined **)ppuVar26[0x6b];
    uStack_340 = SUB87(ppuVar25,0);
    uStack_339 = (undefined1)((ulong)ppuVar25 >> 0x38);
    if (ppuVar25 == (undefined **)0x0) goto LAB_10a868ebc;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar30 = &UNK_10f67ee2b;
      uVar11 = 1;
      uVar16 = 4;
      uVar18 = 0x62d;
      ppppuVar8 = &pppuStack_4d0;
      pcVar7 = (code *)0x10a868e4c;
      goto SUB_10ae06f08;
    }
    *(undefined4 *)ppuVar26[0x3d] = 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = *plVar31 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plStack_4b8 = plVar27;
    plStack_4b0 = plVar20;
    (**(code **)*ppuVar25)(ppuVar25,&plStack_4b8);
    plVar27 = plStack_4b0;
    if (plStack_4b0 != (long *)0x0) {
      plVar20 = plStack_4b0 + 1;
      do {
        lVar29 = *plVar20;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = lVar29 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_4b0 + 0x10))(plStack_4b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
  }
  plVar27 = (long *)CONCAT17(uStack_331,CONCAT52(uStack_336,uStack_338));
  if (plVar27 != (long *)0x0) {
    plVar20 = plVar27 + 1;
    do {
      lVar29 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar29 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  plVar27 = plStack_3d8;
  if (plStack_3d8 != (long *)0x0) {
    plVar20 = plStack_3d8 + 1;
    do {
      lVar29 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar29 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  FUN_10a042634(auStack_3d0);
LAB_10a868f68:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return;
  }
LAB_10a868fa0:
  ___stack_chk_fail();
LAB_10a868fa4:
  FUN_10a05bab8(&UNK_10f6347d3);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a868fb4);
  (*pcVar7)();
}



/* Entry: 10a867f2c; end: 10a868057;  */

/* WARNING: Possible PIC construction at 0x00010a868e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a868eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a868c94) */
/* WARNING: Removing unreachable block (ram,0x00010a868624) */
/* WARNING: Removing unreachable block (ram,0x00010a8686a4) */
/* WARNING: Removing unreachable block (ram,0x00010a868ca4) */

void FUN_10a867f2c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined ***pppuVar1;
  ulong uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined2 *puVar6;
  code *pcVar7;
  undefined ****ppppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long **pplVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  int iVar18;
  long *plVar19;
  undefined *puVar20;
  undefined7 *puVar21;
  code **ppcVar22;
  byte bVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  code **unaff_x20;
  long *plVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined *puVar29;
  long *plVar30;
  undefined8 ****ppppuVar31;
  undefined ***pppuStack_450;
  undefined **ppuStack_448;
  code **ppcStack_440;
  long *plStack_438;
  long *plStack_430;
  undefined *puStack_428;
  long *plStack_420;
  undefined1 auStack_418 [8];
  long *plStack_410;
  undefined1 uStack_408;
  long lStack_400;
  undefined1 uStack_3f8;
  long lStack_3f0;
  undefined1 uStack_3e8;
  long lStack_3e0;
  undefined1 auStack_3d8 [8];
  long *plStack_3d0;
  undefined1 uStack_3c8;
  code **ppcStack_3c0;
  undefined2 uStack_3b8;
  undefined1 uStack_3b6;
  undefined1 uStack_3b5;
  undefined1 uStack_3b4;
  undefined2 uStack_3b3;
  undefined1 uStack_3b1;
  undefined2 uStack_3b0;
  undefined1 uStack_3ae;
  undefined2 uStack_3ad;
  undefined1 uStack_3ab;
  undefined1 uStack_3aa;
  undefined1 uStack_3a9;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined7 *puStack_398;
  undefined1 auStack_390 [8];
  undefined8 uStack_388;
  undefined1 uStack_380;
  long *plStack_378;
  undefined1 uStack_370;
  undefined **ppuStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 auStack_350 [2];
  long alStack_340 [7];
  undefined8 uStack_308;
  code *pcStack_300;
  undefined **ppuStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  undefined7 uStack_2c0;
  undefined1 uStack_2b9;
  undefined2 uStack_2b8;
  undefined5 uStack_2b6;
  undefined1 uStack_2b1;
  undefined8 uStack_2b0;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  uint auStack_200 [2];
  undefined ***pppuStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined ***pppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined ***pppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined ***pppuStack_1a0;
  undefined **ppuStack_198;
  long lStack_190;
  long lStack_178;
  undefined8 **ppuStack_150;
  code *pcStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined ***pppuStack_138;
  undefined4 *puStack_130;
  long lStack_128;
  undefined ***pppuStack_120;
  undefined4 *puStack_118;
  undefined7 uStack_110;
  char cStack_109;
  undefined **ppuStack_108;
  undefined ***pppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined ***pppuStack_e0;
  undefined4 *puStack_d8;
  long lStack_d0;
  long lStack_b8;
  undefined8 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined4 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar25 = (undefined **)&ppuStack_78;
  func_0x00010a866dd8();
  if (ppuStack_78 == (undefined **)0x0) {
    ppuVar24 = &PTR_PTR_113305798;
    ppuVar25 = ppuVar24;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
    param_1 = SUB84(ppuVar24,0);
  }
  else if (*(int *)ppuStack_78[0x3d] != 4) {
    unaff_x20 = &pcStack_68;
    pcStack_68 = FUN_10a8a00fc;
    ppuStack_60 = &PTR_FUN_110c24da0;
    param_1 = SUB84(&pcStack_68,0);
    uStack_58 = param_2;
    FUN_10a860860(ppuStack_78);
    ppuVar25 = (undefined **)&ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  if (pppuStack_70 != (undefined ***)0x0) {
    pppuVar9 = pppuStack_70 + 1;
    do {
      ppuVar24 = *pppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
      if (bVar5) {
        *pppuVar9 = (undefined **)((long)ppuVar24 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar24 == (undefined **)0x0) {
      (*(code *)(*pppuStack_70)[2])(pppuStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar25 = (undefined **)pppuStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  FUN_10a5ca2e0(&ppuStack_78);
  __Unwind_Resume();
  pcStack_88 = FUN_10a868058;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = &ppuStack_108;
  puVar16 = param_3;
  puStack_90 = (undefined8 *)&stack0xfffffffffffffff0;
  func_0x00010a866dd8();
  if (ppuStack_108 == (undefined **)0x0) {
    ppuVar25 = &PTR_PTR_113305798;
    pppuVar9 = (undefined ***)ppuVar25;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
  }
  else if (*(int *)ppuStack_108[0x3d] != 4) {
    uVar3 = *param_3;
    func_0x000107c2b054(&pppuStack_120,*(undefined8 *)(param_3 + 2));
    uStack_140 = param_1;
    uStack_13c = uVar3;
    if (cStack_109 < '\0') {
      func_0x000107c3192c(&pppuStack_138,pppuStack_120);
      puVar16 = puStack_118;
    }
    else {
      puStack_130 = puStack_118;
      pppuStack_138 = pppuStack_120;
      lStack_128 = CONCAT17(cStack_109,uStack_110);
    }
    ppuStack_f8 = (undefined **)FUN_10a8a021c;
    ppuStack_f0 = &PTR_FUN_110c24db8;
    uStack_e8 = CONCAT44(uStack_13c,uStack_140);
    puStack_d8 = puStack_130;
    pppuStack_e0 = pppuStack_138;
    lStack_d0 = lStack_128;
    pppuStack_138 = (undefined ***)0x0;
    puStack_130 = (undefined4 *)0x0;
    lStack_128 = 0;
    ppuVar25 = (undefined **)&ppuStack_f8;
    FUN_10a860860(ppuStack_108);
    pppuVar9 = &ppuStack_f0;
    (*(code *)*ppuStack_f0)();
    if (lStack_128 < 0) {
      pppuVar9 = pppuStack_138;
      __ZdlPv();
    }
    if (cStack_109 < '\0') {
      pppuVar9 = pppuStack_120;
      __ZdlPv();
    }
  }
  if (pppuStack_100 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_100 + 1;
    do {
      ppuVar24 = *pppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined **)((long)ppuVar24 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar24 == (undefined **)0x0) {
      (*(code *)(*pppuStack_100)[2])(pppuStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar9 = pppuStack_100;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_109 < '\0') {
    __ZdlPv(pppuStack_120);
  }
  FUN_10a5ca2e0(&ppuStack_108);
  __Unwind_Resume(pppuVar9);
  pcStack_148 = FUN_10a868240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar24 = (undefined **)&ppuStack_1c8;
  ppuStack_150 = &puStack_90;
  func_0x00010a866dd8(ppuVar24,pppuVar9);
  if (ppuStack_1c8 == (undefined **)0x0) {
    ppuVar24 = &PTR_PTR_113305798;
    FUN_10ae079a0(0);
    FUN_10ae07cd4(ppuVar24,&PTR_PTR_113305798);
  }
  else if (*(int *)ppuStack_1c8[0x3d] != 4) {
    func_0x000107c2b054(&pppuStack_1e0,&UNK_10f67d9eb);
    if (((*(long *)(puVar16 + 4) != 0) && (*(long *)(puVar16 + 2) != 0)) && (puVar16[6] == 1)) {
      FUN_109ffe064(&pppuStack_1b8);
      if (uStack_1d0 < 0) {
        __ZdlPv(pppuStack_1e0);
      }
      ppuStack_1d8 = ppuStack_1b0;
      pppuStack_1e0 = pppuStack_1b8;
      uStack_1d0 = CONCAT44(uStack_1a4,uStack_1a8);
    }
    func_0x00010ae02ecc(0,ppuVar25);
    func_0x00010ae02f70();
    ppuVar24 = &PTR_PTR_1133042b8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02f80();
    FUN_10ae07cd4(ppuVar24,&PTR_PTR_1133042b8);
    auStack_200[0] = (uint)ppuVar25;
    if (uStack_1d0 < 0) {
      func_0x000107c3192c(&pppuStack_1f8,pppuStack_1e0,ppuStack_1d8);
      ppuVar25 = (undefined **)(ulong)auStack_200[0];
    }
    else {
      ppuStack_1f0 = ppuStack_1d8;
      pppuStack_1f8 = pppuStack_1e0;
      lStack_1e8 = uStack_1d0;
    }
    pppuStack_1b8 = (undefined ***)FUN_10a8a0624;
    ppuStack_1b0 = &PTR_FUN_110c24dd0;
    uStack_1a8 = SUB84(ppuVar25,0);
    ppuStack_198 = ppuStack_1f0;
    pppuStack_1a0 = pppuStack_1f8;
    lStack_190 = lStack_1e8;
    pppuStack_1f8 = (undefined ***)0x0;
    ppuStack_1f0 = (undefined **)0x0;
    lStack_1e8 = 0;
    FUN_10a860860(ppuStack_1c8,&pppuStack_1b8);
    ppuVar24 = (undefined **)&ppuStack_1b0;
    (*(code *)*ppuStack_1b0)();
    if (lStack_1e8 < 0) {
      ppuVar24 = (undefined **)pppuStack_1f8;
      __ZdlPv();
    }
    if (uStack_1d0 < 0) {
      ppuVar24 = (undefined **)pppuStack_1e0;
      __ZdlPv();
    }
  }
  if (pppuStack_1c0 != (undefined ***)0x0) {
    pppuVar9 = pppuStack_1c0 + 1;
    do {
      ppuVar25 = *pppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
      if (bVar5) {
        *pppuVar9 = (undefined **)((long)ppuVar25 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar25 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1c0)[2])(pppuStack_1c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar24 = (undefined **)pppuStack_1c0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_1d0._7_1_ < '\0') {
    __ZdlPv(pppuStack_1e0);
  }
  FUN_10a5ca2e0(&ppuStack_1c8);
  __Unwind_Resume();
  pcStack_208 = FUN_10a8684b4;
  ppppuVar8 = &pppuStack_450;
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = (undefined **)ppuVar24[0x6f];
  pppuStack_210 = &ppuStack_150;
  (**(code **)(*ppuVar10 + 0x48))();
  ppuVar25 = (undefined **)*ppuVar10;
  if (-1 < *(char *)((long)ppuVar10 + 0x17)) {
    ppuVar25 = ppuVar10;
  }
  ppuVar10 = ppuVar25;
  _strlen();
  puVar27 = (undefined8 *)&UNK_110c23970;
  lVar28 = 0x30;
  do {
    if ((undefined **)*puVar27 == ppuVar10) {
      uVar11 = puVar27[-1];
      _memcmp(uVar11,ppuVar25,ppuVar10);
      if ((int)uVar11 == 0) {
        if (lVar28 != 0) {
          if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10a868f68;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_270) goto LAB_10a868fa0;
          puVar29 = &UNK_10f67ede7;
          uVar11 = 0;
          uVar15 = 1;
          uVar17 = 0x59c;
          ppppuVar8 = (undefined ****)auStack_200;
          ppppuVar31 = (undefined8 ****)pppuStack_210;
          pcVar7 = pcStack_208;
          goto SUB_10ae06f08;
        }
        break;
      }
    }
    puVar27 = puVar27 + 2;
    lVar28 = lVar28 + -0x10;
  } while (lVar28 != 0);
  ppuVar25 = (undefined **)ppuVar24[0x6f];
  (**(code **)(*ppuVar25 + 0x48))();
  bVar23 = *(byte *)((long)ppuVar24[0x6f] + 0xaa);
  ppuVar10 = (undefined **)ppuVar24[0x6f];
  puVar29 = ppuVar10[0x76];
  plVar26 = (long *)ppuVar10[0x77];
  if (plVar26 != (long *)0x0) {
    plVar19 = plVar26 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = *plVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_360 = (long *)((ulong)plStack_360 & 0xffffffffffffff00);
  plStack_358 = (long *)0x0;
  puVar20 = ppuVar25[1];
  if (-1 < (char)*(byte *)((long)ppuVar25 + 0x17)) {
    puVar20 = (undefined *)(ulong)*(byte *)((long)ppuVar25 + 0x17);
  }
  puStack_428 = puVar29;
  plStack_420 = plVar26;
  if (puVar20 != (undefined *)0x0) {
    ppuStack_368 = (undefined **)0x0;
    uStack_370 = 3;
    func_0x00010938229c();
    uStack_2b0 = CONCAT17(9,(undefined7)uStack_2b0);
    uStack_2c0 = 0x6e6f6973736573;
    uStack_2b9 = 0x49;
    uStack_2b8 = 100;
    pplVar12 = &plStack_360;
    ppuStack_368 = ppuVar25;
    func_0x0001095b7584(pplVar12,&uStack_2c0);
    uVar14 = *(undefined1 *)pplVar12;
    *(undefined1 *)pplVar12 = uStack_370;
    ppuVar25 = (undefined **)pplVar12[1];
    uStack_370 = uVar14;
    pplVar12[1] = (long *)ppuStack_368;
    ppuStack_368 = ppuVar25;
    func_0x000109380ffc(&ppuStack_368,uVar14);
  }
  plStack_378 = (long *)((ulong)bVar23 & 1);
  uStack_380 = 4;
  uStack_2b0 = CONCAT17(0xf,(undefined7)uStack_2b0);
  uStack_2c0 = 0x53617461447369;
  uStack_2b9 = 0x74;
  uStack_2b8 = 0x6572;
  uStack_2b6 = 0x676e696d61;
  uStack_2b1 = 0;
  pplVar12 = &plStack_360;
  func_0x0001095b7584(pplVar12,&uStack_2c0);
  uVar14 = *(undefined1 *)pplVar12;
  *(undefined1 *)pplVar12 = uStack_380;
  plVar19 = pplVar12[1];
  uStack_380 = uVar14;
  pplVar12[1] = plStack_378;
  plStack_378 = plVar19;
  func_0x000109380ffc(&plStack_378,uVar14);
  uStack_2c0 = 0;
  uStack_2b9 = 0;
  uStack_2b8 = 0;
  uStack_2b6 = 0;
  uStack_2b1 = 0;
  uStack_2b0 = 0;
  pcStack_300 = (code *)0x0;
  ppuStack_2f8 = (undefined **)0x0;
  uStack_2f0 = 0;
  if (*(char *)(ppuVar10 + 0x75) == '\x01') {
    puVar20 = ppuVar10[0x73];
    if (puVar20 != (undefined *)0x0) {
      bVar23 = 5;
      uVar11 = 0x70756f7267;
LAB_10a86870c:
      uStack_2c0 = (undefined7)uVar11;
      uStack_2b9 = 0;
      uStack_2b0 = (ulong)bVar23 << 0x38;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pcStack_300,puVar20 + 0x18);
      puVar29 = puStack_428;
      uVar2 = CONCAT17(uStack_2b1,CONCAT52(uStack_2b6,uStack_2b8));
      if (-1 < (long)uStack_2b0) {
        uVar2 = uStack_2b0 >> 0x38;
      }
      if (uVar2 != 0) {
        ppuVar25 = ppuStack_2f8;
        if (-1 < (long)uStack_2f0) {
          ppuVar25 = (undefined **)(uStack_2f0 >> 0x38);
        }
        if ((ppuVar25 == (undefined **)0x0) || (puStack_428 == (undefined *)0x0)) {
          if (ppuVar25 == (undefined **)0x0) goto LAB_10a8689b0;
        }
        else {
          ppuVar25 = &PTR_PTR_113305e00;
          FUN_10ae079a0(0,&PTR_PTR_113305e00);
          FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305e00);
        }
        auStack_390[0] = 0;
        uStack_388 = 0;
        puStack_398 = (undefined7 *)0x0;
        uStack_3a0 = 3;
        puVar21 = &uStack_2c0;
        func_0x00010938229c();
        uStack_3a8._7_1_ = '\x04';
        uStack_3b8 = 0x7974;
        uStack_3b6 = 0x70;
        uStack_3b5 = 0x65;
        uStack_3b4 = 0;
        puVar13 = auStack_390;
        puStack_398 = puVar21;
        func_0x0001095b7584(puVar13,&uStack_3b8);
        uVar14 = *puVar13;
        *puVar13 = uStack_3a0;
        puVar21 = *(undefined7 **)(puVar13 + 8);
        uStack_3a0 = uVar14;
        *(undefined7 **)(puVar13 + 8) = puStack_398;
        puStack_398 = puVar21;
        if (uStack_3a8._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_3b1,
                           CONCAT25(uStack_3b3,
                                    CONCAT14(uStack_3b4,
                                             CONCAT13(uStack_3b5,CONCAT12(uStack_3b6,uStack_3b8)))))
                 );
          uVar14 = uStack_3a0;
        }
        func_0x000109380ffc(&puStack_398,uVar14);
        ppcStack_3c0 = (code **)0x0;
        uStack_3c8 = 3;
        ppcVar22 = &pcStack_300;
        func_0x00010938229c();
        uStack_3a8._7_1_ = '\x02';
        uStack_3b8 = 0x6469;
        uStack_3b6 = 0;
        puVar13 = auStack_390;
        ppcStack_3c0 = ppcVar22;
        func_0x0001095b7584(puVar13,&uStack_3b8);
        uVar14 = *puVar13;
        *puVar13 = uStack_3c8;
        ppcVar22 = *(code ***)(puVar13 + 8);
        uStack_3c8 = uVar14;
        *(code ***)(puVar13 + 8) = ppcStack_3c0;
        ppcStack_3c0 = ppcVar22;
        if (uStack_3a8._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_3b1,
                           CONCAT25(uStack_3b3,
                                    CONCAT14(uStack_3b4,
                                             CONCAT13(uStack_3b5,CONCAT12(uStack_3b6,uStack_3b8)))))
                 );
          uVar14 = uStack_3c8;
        }
        func_0x000109380ffc(&ppcStack_3c0,uVar14);
        func_0x000109381b20(auStack_3d8,auStack_390);
        uStack_3a8 = CONCAT17(10,(undefined7)uStack_3a8);
        uStack_3b0 = 0x6f66;
        uStack_3b8 = 0x6e69;
        uStack_3b6 = 0x76;
        uStack_3b5 = 0x69;
        uStack_3b4 = 0x74;
        uStack_3b3 = 0x4965;
        uStack_3b1 = 0x6e;
        uStack_3ae = 0;
        pplVar12 = &plStack_360;
        func_0x0001095b7584(pplVar12,&uStack_3b8);
        uVar14 = *(undefined1 *)pplVar12;
        *(undefined1 *)pplVar12 = auStack_3d8[0];
        plVar19 = pplVar12[1];
        auStack_3d8[0] = uVar14;
        pplVar12[1] = plStack_3d0;
        plStack_3d0 = plVar19;
        if ((long)uStack_3a8 < 0) {
          __ZdlPv(CONCAT17(uStack_3b1,
                           CONCAT25(uStack_3b3,
                                    CONCAT14(uStack_3b4,
                                             CONCAT13(uStack_3b5,CONCAT12(uStack_3b6,uStack_3b8)))))
                 );
          uVar14 = auStack_3d8[0];
        }
        func_0x000109380ffc(&plStack_3d0,uVar14);
        func_0x00010a383718(&uStack_2c0,&pcStack_300);
        ppuVar25 = &PTR_PTR_113305078;
        FUN_10ae079a0();
        func_0x00010a38376c();
        FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305078);
        func_0x000109380ffc(&uStack_388,auStack_390[0]);
      }
    }
  }
  else {
    if (*(char *)(ppuVar10 + 0x75) != '\0') goto LAB_10a868fa4;
    puVar20 = ppuVar10[0x73];
    if (puVar20 != (undefined *)0x0) {
      bVar23 = 6;
      uVar11 = 0x646e65697266;
      goto LAB_10a86870c;
    }
  }
LAB_10a8689b0:
  if (puVar29 != (undefined *)0x0) {
    auStack_390[0] = 0;
    uStack_388 = 0;
    lStack_3e0 = (long)*(int *)(puVar29 + 0x18);
    uStack_3e8 = 5;
    uStack_3a8._7_1_ = '\n';
    uStack_3b0 = 0x7372;
    uStack_3b8 = 0x696d;
    uStack_3b6 = 0x6e;
    uStack_3b5 = 0x50;
    uStack_3b4 = 0x6c;
    uStack_3b3 = 0x7961;
    uStack_3b1 = 0x65;
    uStack_3ae = 0;
    puVar13 = auStack_390;
    func_0x0001095b7584(puVar13,&uStack_3b8);
    uVar14 = *puVar13;
    *puVar13 = uStack_3e8;
    lVar28 = *(long *)(puVar13 + 8);
    uStack_3e8 = uVar14;
    *(long *)(puVar13 + 8) = lStack_3e0;
    lStack_3e0 = lVar28;
    if (uStack_3a8._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_3b1,
                       CONCAT25(uStack_3b3,
                                CONCAT14(uStack_3b4,
                                         CONCAT13(uStack_3b5,CONCAT12(uStack_3b6,uStack_3b8))))));
      uVar14 = uStack_3e8;
    }
    func_0x000109380ffc(&lStack_3e0,uVar14);
    lStack_3f0 = (long)*(int *)(puVar29 + 0x1c);
    uStack_3f8 = 5;
    uStack_3a8._7_1_ = '\n';
    uStack_3b0 = 0x7372;
    uStack_3b8 = 0x616d;
    uStack_3b6 = 0x78;
    uStack_3b5 = 0x50;
    uStack_3b4 = 0x6c;
    uStack_3b3 = 0x7961;
    uStack_3b1 = 0x65;
    uStack_3ae = 0;
    puVar13 = auStack_390;
    func_0x0001095b7584(puVar13,&uStack_3b8);
    uVar14 = *puVar13;
    *puVar13 = uStack_3f8;
    lVar28 = *(long *)(puVar13 + 8);
    uStack_3f8 = uVar14;
    *(long *)(puVar13 + 8) = lStack_3f0;
    lStack_3f0 = lVar28;
    if (uStack_3a8._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_3b1,
                       CONCAT25(uStack_3b3,
                                CONCAT14(uStack_3b4,
                                         CONCAT13(uStack_3b5,CONCAT12(uStack_3b6,uStack_3b8))))));
      uVar14 = uStack_3f8;
    }
    func_0x000109380ffc(&lStack_3f0,uVar14);
    iVar18 = *(int *)(puVar29 + 0x18);
    if ((*(ulong *)(puVar29 + 0x20) & 0x100000000) != 0) {
      iVar18 = (int)*(ulong *)(puVar29 + 0x20);
    }
    lStack_400 = (long)iVar18;
    uStack_408 = 5;
    uStack_3a8._7_1_ = '\r';
    uStack_3b8 = 0x6174;
    uStack_3b6 = 0x72;
    uStack_3b5 = 0x67;
    uStack_3b4 = 0x65;
    uStack_3b3 = 0x5074;
    uStack_3b1 = 0x6c;
    uStack_3b0 = 0x7961;
    uStack_3ae = 0x65;
    uStack_3ad = 0x7372;
    uStack_3ab = 0;
    puVar13 = auStack_390;
    func_0x0001095b7584(puVar13,&uStack_3b8);
    uVar14 = *puVar13;
    *puVar13 = uStack_408;
    lVar28 = *(long *)(puVar13 + 8);
    uStack_408 = uVar14;
    *(long *)(puVar13 + 8) = lStack_400;
    lStack_400 = lVar28;
    if (uStack_3a8._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_3b1,
                       CONCAT25(uStack_3b3,
                                CONCAT14(uStack_3b4,
                                         CONCAT13(uStack_3b5,CONCAT12(uStack_3b6,uStack_3b8))))));
      uVar14 = uStack_408;
    }
    func_0x000109380ffc(&lStack_400,uVar14);
    func_0x000109381b20(auStack_418,auStack_390);
    uStack_3a8 = CONCAT17(0xf,(undefined7)uStack_3a8);
    uStack_3b8 = 0x616d;
    uStack_3b6 = 0x74;
    uStack_3b5 = 99;
    uStack_3b4 = 0x68;
    uStack_3b3 = 0x616d;
    uStack_3b1 = 0x6b;
    uStack_3b0 = 0x6e69;
    uStack_3ae = 0x67;
    uStack_3ad = 0x6e49;
    uStack_3ab = 0x66;
    uStack_3aa = 0x6f;
    uStack_3a9 = 0;
    pplVar12 = &plStack_360;
    func_0x0001095b7584(pplVar12,&uStack_3b8);
    uVar14 = *(undefined1 *)pplVar12;
    *(undefined1 *)pplVar12 = auStack_418[0];
    plVar19 = pplVar12[1];
    auStack_418[0] = uVar14;
    pplVar12[1] = plStack_410;
    plStack_410 = plVar19;
    if ((long)uStack_3a8 < 0) {
      __ZdlPv(CONCAT17(uStack_3b1,
                       CONCAT25(uStack_3b3,
                                CONCAT14(uStack_3b4,
                                         CONCAT13(uStack_3b5,CONCAT12(uStack_3b6,uStack_3b8))))));
      uVar14 = auStack_418[0];
    }
    func_0x000109380ffc(&plStack_410,uVar14);
    func_0x00010ae02ecc(0,*(undefined4 *)(puVar29 + 0x18));
    func_0x00010ae02ecc();
    func_0x00010ae02ecc();
    ppuVar25 = &PTR_PTR_113305e70;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305e70);
    func_0x000109380ffc(&uStack_388,auStack_390[0]);
  }
  FUN_10a0c32e4(&uStack_3b8,&plStack_360,0xffffffff,0x20,0,1);
  uVar2 = CONCAT17(uStack_3a9,
                   CONCAT16(uStack_3aa,
                            CONCAT15(uStack_3ab,CONCAT23(uStack_3ad,CONCAT12(uStack_3ae,uStack_3b0))
                                    )));
  puVar6 = (undefined2 *)
           CONCAT17(uStack_3b1,
                    CONCAT25(uStack_3b3,
                             CONCAT14(uStack_3b4,
                                      CONCAT13(uStack_3b5,CONCAT12(uStack_3b6,uStack_3b8)))));
  if (-1 < (long)uStack_3a8) {
    uVar2 = uStack_3a8 >> 0x38;
    puVar6 = &uStack_3b8;
  }
  FUN_10a3bf330(auStack_350,puVar6,uVar2);
  if ((long)uStack_3a8 < 0) {
    __ZdlPv(CONCAT17(uStack_3b1,
                     CONCAT25(uStack_3b3,
                              CONCAT14(uStack_3b4,
                                       CONCAT13(uStack_3b5,CONCAT12(uStack_3b6,uStack_3b8))))));
  }
  func_0x000109380ffc(&plStack_358,(ulong)plStack_360 & 0xff);
  if (plVar26 != (long *)0x0) {
    plVar19 = plVar26 + 1;
    do {
      lVar28 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar28 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  FUN_10a8691d4(&uStack_3b8,ppuVar24[0x71],ppuVar24);
  plVar19 = (long *)0x138;
  __Znwm();
  uVar11 = auStack_350[0];
  plVar30 = plVar19 + 1;
  *plVar30 = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&PTR_FUN_110b9f3b0;
  plVar26 = plVar19 + 3;
  auStack_350[0] = 0;
  uStack_2c0 = (undefined7)uVar11;
  uStack_2b9 = (undefined1)((ulong)uVar11 >> 0x38);
  uStack_2b8 = (undefined2)auStack_350[1];
  uStack_2b6 = (undefined5)((ulong)auStack_350[1] >> 0x10);
  uStack_2b1 = (undefined1)((ulong)auStack_350[1] >> 0x38);
  (**(code **)(alStack_340[0] + 0x10))(&uStack_2b0,alStack_340);
  uStack_278 = uStack_308;
  ppuStack_448 = (undefined **)ppuVar24[0x41];
  pppuStack_450 = (undefined ***)ppuVar24[0x40];
  if (-1 < (char)*(byte *)((long)ppuVar24 + 0x217)) {
    ppuStack_448 = (undefined **)(ulong)*(byte *)((long)ppuVar24 + 0x217);
    pppuStack_450 = (undefined ***)(ppuVar24 + 0x40);
  }
  ppcStack_440 = &pcStack_300;
  pcStack_300 = FUN_10a8a082c;
  ppuStack_2f8 = &PTR_FUN_110c24de8;
  uStack_2f0 = CONCAT17(uStack_3b1,
                        CONCAT25(uStack_3b3,
                                 CONCAT14(uStack_3b4,
                                          CONCAT13(uStack_3b5,CONCAT12(uStack_3b6,uStack_3b8)))));
  uStack_2e8 = CONCAT17(uStack_3a9,
                        CONCAT16(uStack_3aa,
                                 CONCAT15(uStack_3ab,
                                          CONCAT23(uStack_3ad,CONCAT12(uStack_3ae,uStack_3b0)))));
  uStack_2e0 = uStack_3a8;
  uStack_3b0 = 0;
  uStack_3ae = 0;
  uStack_3ad = 0;
  uStack_3ab = 0;
  uStack_3aa = 0;
  uStack_3a9 = 0;
  uStack_3a8 = 0;
  FUN_10a23708c(plVar26,&UNK_10e4df438,0x2a,&UNK_10f647b49,4,&uStack_2c0,1);
  (*(code *)*ppuStack_2f8)(&ppuStack_2f8);
  FUN_10a042634(&uStack_2c0);
  plStack_360 = plVar26;
  plStack_358 = plVar19;
  FUN_10a86927c(&uStack_3b8);
  uStack_2c0 = 0;
  uStack_2b9 = 0;
  uStack_2b8 = 0;
  uStack_2b6 = 0;
  uStack_2b1 = 0;
  ppuVar25 = (undefined **)ppuVar24[0x6c];
  ppppuVar31 = &pppuStack_210;
  if (ppuVar25 == (undefined **)0x0) {
LAB_10a868ebc:
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar29 = &UNK_10f67ee52;
      uVar11 = 0;
      uVar15 = 1;
      uVar17 = 0x631;
      pcVar7 = (code *)0x10a868ef0;
SUB_10ae06f08:
      *(undefined8 *****)((long)ppppuVar8 + -0x10) = ppppuVar31;
      *(code **)((long)ppppuVar8 + -8) = pcVar7;
      *(undefined *****)((long)ppppuVar8 + -0x18) = ppppuVar8;
      FUN_10ae06f30(uVar11,uVar15,&UNK_10f67ed4a,&UNK_10f67ed92,uVar17,puVar29,ppppuVar8);
      return;
    }
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_2b8 = SUB82(ppuVar25,0);
    uStack_2b6 = (undefined5)((ulong)ppuVar25 >> 0x10);
    uStack_2b1 = (undefined1)((ulong)ppuVar25 >> 0x38);
    if (ppuVar25 == (undefined **)0x0) goto LAB_10a868ebc;
    ppuVar25 = (undefined **)ppuVar24[0x6b];
    uStack_2c0 = SUB87(ppuVar25,0);
    uStack_2b9 = (undefined1)((ulong)ppuVar25 >> 0x38);
    if (ppuVar25 == (undefined **)0x0) goto LAB_10a868ebc;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar29 = &UNK_10f67ee2b;
      uVar11 = 1;
      uVar15 = 4;
      uVar17 = 0x62d;
      ppppuVar8 = &pppuStack_450;
      pcVar7 = (code *)0x10a868e4c;
      goto SUB_10ae06f08;
    }
    *(undefined4 *)ppuVar24[0x3d] = 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar5) {
        *plVar30 = *plVar30 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plStack_438 = plVar26;
    plStack_430 = plVar19;
    (**(code **)*ppuVar25)(ppuVar25,&plStack_438);
    plVar26 = plStack_430;
    if (plStack_430 != (long *)0x0) {
      plVar19 = plStack_430 + 1;
      do {
        lVar28 = *plVar19;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *plVar19 = lVar28 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar28 == 0) {
        (**(code **)(*plStack_430 + 0x10))(plStack_430);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
    }
  }
  plVar26 = (long *)CONCAT17(uStack_2b1,CONCAT52(uStack_2b6,uStack_2b8));
  if (plVar26 != (long *)0x0) {
    plVar19 = plVar26 + 1;
    do {
      lVar28 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar28 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  plVar26 = plStack_358;
  if (plStack_358 != (long *)0x0) {
    plVar19 = plStack_358 + 1;
    do {
      lVar28 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar28 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_358 + 0x10))(plStack_358);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  FUN_10a042634(auStack_350);
LAB_10a868f68:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
    return;
  }
LAB_10a868fa0:
  ___stack_chk_fail();
LAB_10a868fa4:
  FUN_10a05bab8(&UNK_10f6347d3);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a868fb4);
  (*pcVar7)();
}



/* Entry: 10a868058; end: 10a86823f;  */

/* WARNING: Possible PIC construction at 0x00010a868e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a868eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a868c94) */
/* WARNING: Removing unreachable block (ram,0x00010a868624) */
/* WARNING: Removing unreachable block (ram,0x00010a8686a4) */
/* WARNING: Removing unreachable block (ram,0x00010a868ca4) */

void FUN_10a868058(undefined **param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined ***pppuVar1;
  ulong uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined2 *puVar6;
  code *pcVar7;
  undefined ****ppppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long **pplVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  int iVar18;
  long *plVar19;
  undefined *puVar20;
  undefined7 *puVar21;
  code **ppcVar22;
  byte bVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  long *plVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined *puVar29;
  long *plVar30;
  undefined8 ****ppppuVar31;
  undefined ***pppuStack_3d0;
  undefined **ppuStack_3c8;
  code **ppcStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  undefined *puStack_3a8;
  long *plStack_3a0;
  undefined1 auStack_398 [8];
  long *plStack_390;
  undefined1 uStack_388;
  long lStack_380;
  undefined1 uStack_378;
  long lStack_370;
  undefined1 uStack_368;
  long lStack_360;
  undefined1 auStack_358 [8];
  long *plStack_350;
  undefined1 uStack_348;
  code **ppcStack_340;
  undefined2 uStack_338;
  undefined1 uStack_336;
  undefined1 uStack_335;
  undefined1 uStack_334;
  undefined2 uStack_333;
  undefined1 uStack_331;
  undefined2 uStack_330;
  undefined1 uStack_32e;
  undefined2 uStack_32d;
  undefined1 uStack_32b;
  undefined1 uStack_32a;
  undefined1 uStack_329;
  undefined8 uStack_328;
  undefined1 uStack_320;
  undefined7 *puStack_318;
  undefined1 auStack_310 [8];
  undefined8 uStack_308;
  undefined1 uStack_300;
  long *plStack_2f8;
  undefined1 uStack_2f0;
  undefined **ppuStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 auStack_2d0 [2];
  long alStack_2c0 [7];
  undefined8 uStack_288;
  code *pcStack_280;
  undefined **ppuStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  undefined7 uStack_240;
  undefined1 uStack_239;
  undefined2 uStack_238;
  undefined5 uStack_236;
  undefined1 uStack_231;
  undefined8 uStack_230;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 ***pppuStack_190;
  code *pcStack_188;
  uint auStack_180 [2];
  undefined ***pppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined ***pppuStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined ***pppuStack_140;
  undefined ***pppuStack_138;
  undefined **ppuStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined ***pppuStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  long lStack_f8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined ***pppuStack_b8;
  undefined4 *puStack_b0;
  long lStack_a8;
  undefined ***pppuStack_a0;
  undefined4 *puStack_98;
  undefined7 uStack_90;
  char cStack_89;
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  undefined4 *puStack_58;
  long lStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = &ppuStack_88;
  puVar16 = param_3;
  func_0x00010a866dd8();
  if (ppuStack_88 == (undefined **)0x0) {
    param_1 = &PTR_PTR_113305798;
    pppuVar9 = (undefined ***)param_1;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
  }
  else if (*(int *)ppuStack_88[0x3d] != 4) {
    uVar3 = *param_3;
    func_0x000107c2b054(&pppuStack_a0,*(undefined8 *)(param_3 + 2));
    uStack_c0 = param_2;
    uStack_bc = uVar3;
    if (cStack_89 < '\0') {
      func_0x000107c3192c(&pppuStack_b8,pppuStack_a0);
      puVar16 = puStack_98;
    }
    else {
      puStack_b0 = puStack_98;
      pppuStack_b8 = pppuStack_a0;
      lStack_a8 = CONCAT17(cStack_89,uStack_90);
    }
    pcStack_78 = FUN_10a8a021c;
    ppuStack_70 = &PTR_FUN_110c24db8;
    uStack_68 = CONCAT44(uStack_bc,uStack_c0);
    puStack_58 = puStack_b0;
    pppuStack_60 = pppuStack_b8;
    lStack_50 = lStack_a8;
    pppuStack_b8 = (undefined ***)0x0;
    puStack_b0 = (undefined4 *)0x0;
    lStack_a8 = 0;
    param_1 = &pcStack_78;
    FUN_10a860860(ppuStack_88);
    pppuVar9 = &ppuStack_70;
    (*(code *)*ppuStack_70)();
    if (lStack_a8 < 0) {
      pppuVar9 = pppuStack_b8;
      __ZdlPv();
    }
    if (cStack_89 < '\0') {
      pppuVar9 = pppuStack_a0;
      __ZdlPv();
    }
  }
  if (pppuStack_80 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_80 + 1;
    do {
      ppuVar24 = *pppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined **)((long)ppuVar24 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar24 == (undefined **)0x0) {
      (*(code *)(*pppuStack_80)[2])(pppuStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar9 = pppuStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_89 < '\0') {
    __ZdlPv(pppuStack_a0);
  }
  FUN_10a5ca2e0(&ppuStack_88);
  __Unwind_Resume(pppuVar9);
  pcStack_c8 = FUN_10a868240;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar24 = (undefined **)&ppuStack_148;
  ppuStack_d0 = (undefined8 **)&stack0xfffffffffffffff0;
  func_0x00010a866dd8(ppuVar24,pppuVar9);
  if (ppuStack_148 == (undefined **)0x0) {
    ppuVar24 = &PTR_PTR_113305798;
    FUN_10ae079a0(0);
    FUN_10ae07cd4(ppuVar24,&PTR_PTR_113305798);
  }
  else if (*(int *)ppuStack_148[0x3d] != 4) {
    func_0x000107c2b054(&pppuStack_160,&UNK_10f67d9eb);
    if (((*(long *)(puVar16 + 4) != 0) && (*(long *)(puVar16 + 2) != 0)) && (puVar16[6] == 1)) {
      FUN_109ffe064(&pppuStack_138);
      if (uStack_150 < 0) {
        __ZdlPv(pppuStack_160);
      }
      ppuStack_158 = ppuStack_130;
      pppuStack_160 = pppuStack_138;
      uStack_150 = CONCAT44(uStack_124,uStack_128);
    }
    func_0x00010ae02ecc(0,param_1);
    func_0x00010ae02f70();
    ppuVar24 = &PTR_PTR_1133042b8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02f80();
    FUN_10ae07cd4(ppuVar24,&PTR_PTR_1133042b8);
    auStack_180[0] = (uint)param_1;
    if (uStack_150 < 0) {
      func_0x000107c3192c(&pppuStack_178,pppuStack_160,ppuStack_158);
      param_1 = (undefined **)(ulong)auStack_180[0];
    }
    else {
      ppuStack_170 = ppuStack_158;
      pppuStack_178 = pppuStack_160;
      lStack_168 = uStack_150;
    }
    pppuStack_138 = (undefined ***)FUN_10a8a0624;
    ppuStack_130 = &PTR_FUN_110c24dd0;
    uStack_128 = SUB84(param_1,0);
    ppuStack_118 = ppuStack_170;
    pppuStack_120 = pppuStack_178;
    lStack_110 = lStack_168;
    pppuStack_178 = (undefined ***)0x0;
    ppuStack_170 = (undefined **)0x0;
    lStack_168 = 0;
    FUN_10a860860(ppuStack_148,&pppuStack_138);
    ppuVar24 = (undefined **)&ppuStack_130;
    (*(code *)*ppuStack_130)();
    if (lStack_168 < 0) {
      ppuVar24 = (undefined **)pppuStack_178;
      __ZdlPv();
    }
    if (uStack_150 < 0) {
      ppuVar24 = (undefined **)pppuStack_160;
      __ZdlPv();
    }
  }
  if (pppuStack_140 != (undefined ***)0x0) {
    pppuVar9 = pppuStack_140 + 1;
    do {
      ppuVar25 = *pppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
      if (bVar5) {
        *pppuVar9 = (undefined **)((long)ppuVar25 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar25 == (undefined **)0x0) {
      (*(code *)(*pppuStack_140)[2])(pppuStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar24 = (undefined **)pppuStack_140;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_150._7_1_ < '\0') {
    __ZdlPv(pppuStack_160);
  }
  FUN_10a5ca2e0(&ppuStack_148);
  __Unwind_Resume();
  pcStack_188 = FUN_10a8684b4;
  ppppuVar8 = &pppuStack_3d0;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = (undefined **)ppuVar24[0x6f];
  pppuStack_190 = &ppuStack_d0;
  (**(code **)(*ppuVar10 + 0x48))();
  ppuVar25 = (undefined **)*ppuVar10;
  if (-1 < *(char *)((long)ppuVar10 + 0x17)) {
    ppuVar25 = ppuVar10;
  }
  ppuVar10 = ppuVar25;
  _strlen();
  puVar27 = (undefined8 *)&UNK_110c23970;
  lVar28 = 0x30;
  do {
    if ((undefined **)*puVar27 == ppuVar10) {
      uVar11 = puVar27[-1];
      _memcmp(uVar11,ppuVar25,ppuVar10);
      if ((int)uVar11 == 0) {
        if (lVar28 != 0) {
          if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10a868f68;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f0) goto LAB_10a868fa0;
          puVar29 = &UNK_10f67ede7;
          uVar11 = 0;
          uVar15 = 1;
          uVar17 = 0x59c;
          ppppuVar8 = (undefined ****)auStack_180;
          ppppuVar31 = (undefined8 ****)pppuStack_190;
          pcVar7 = pcStack_188;
          goto SUB_10ae06f08;
        }
        break;
      }
    }
    puVar27 = puVar27 + 2;
    lVar28 = lVar28 + -0x10;
  } while (lVar28 != 0);
  ppuVar25 = (undefined **)ppuVar24[0x6f];
  (**(code **)(*ppuVar25 + 0x48))();
  bVar23 = *(byte *)((long)ppuVar24[0x6f] + 0xaa);
  ppuVar10 = (undefined **)ppuVar24[0x6f];
  puVar29 = ppuVar10[0x76];
  plVar26 = (long *)ppuVar10[0x77];
  if (plVar26 != (long *)0x0) {
    plVar19 = plVar26 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = *plVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_2e0 = (long *)((ulong)plStack_2e0 & 0xffffffffffffff00);
  plStack_2d8 = (long *)0x0;
  puVar20 = ppuVar25[1];
  if (-1 < (char)*(byte *)((long)ppuVar25 + 0x17)) {
    puVar20 = (undefined *)(ulong)*(byte *)((long)ppuVar25 + 0x17);
  }
  puStack_3a8 = puVar29;
  plStack_3a0 = plVar26;
  if (puVar20 != (undefined *)0x0) {
    ppuStack_2e8 = (undefined **)0x0;
    uStack_2f0 = 3;
    func_0x00010938229c();
    uStack_230 = CONCAT17(9,(undefined7)uStack_230);
    uStack_240 = 0x6e6f6973736573;
    uStack_239 = 0x49;
    uStack_238 = 100;
    pplVar12 = &plStack_2e0;
    ppuStack_2e8 = ppuVar25;
    func_0x0001095b7584(pplVar12,&uStack_240);
    uVar14 = *(undefined1 *)pplVar12;
    *(undefined1 *)pplVar12 = uStack_2f0;
    ppuVar25 = (undefined **)pplVar12[1];
    uStack_2f0 = uVar14;
    pplVar12[1] = (long *)ppuStack_2e8;
    ppuStack_2e8 = ppuVar25;
    func_0x000109380ffc(&ppuStack_2e8,uVar14);
  }
  plStack_2f8 = (long *)((ulong)bVar23 & 1);
  uStack_300 = 4;
  uStack_230 = CONCAT17(0xf,(undefined7)uStack_230);
  uStack_240 = 0x53617461447369;
  uStack_239 = 0x74;
  uStack_238 = 0x6572;
  uStack_236 = 0x676e696d61;
  uStack_231 = 0;
  pplVar12 = &plStack_2e0;
  func_0x0001095b7584(pplVar12,&uStack_240);
  uVar14 = *(undefined1 *)pplVar12;
  *(undefined1 *)pplVar12 = uStack_300;
  plVar19 = pplVar12[1];
  uStack_300 = uVar14;
  pplVar12[1] = plStack_2f8;
  plStack_2f8 = plVar19;
  func_0x000109380ffc(&plStack_2f8,uVar14);
  uStack_240 = 0;
  uStack_239 = 0;
  uStack_238 = 0;
  uStack_236 = 0;
  uStack_231 = 0;
  uStack_230 = 0;
  pcStack_280 = (code *)0x0;
  ppuStack_278 = (undefined **)0x0;
  uStack_270 = 0;
  if (*(char *)(ppuVar10 + 0x75) == '\x01') {
    puVar20 = ppuVar10[0x73];
    if (puVar20 != (undefined *)0x0) {
      bVar23 = 5;
      uVar11 = 0x70756f7267;
LAB_10a86870c:
      uStack_240 = (undefined7)uVar11;
      uStack_239 = 0;
      uStack_230 = (ulong)bVar23 << 0x38;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pcStack_280,puVar20 + 0x18);
      puVar29 = puStack_3a8;
      uVar2 = CONCAT17(uStack_231,CONCAT52(uStack_236,uStack_238));
      if (-1 < (long)uStack_230) {
        uVar2 = uStack_230 >> 0x38;
      }
      if (uVar2 != 0) {
        ppuVar25 = ppuStack_278;
        if (-1 < (long)uStack_270) {
          ppuVar25 = (undefined **)(uStack_270 >> 0x38);
        }
        if ((ppuVar25 == (undefined **)0x0) || (puStack_3a8 == (undefined *)0x0)) {
          if (ppuVar25 == (undefined **)0x0) goto LAB_10a8689b0;
        }
        else {
          ppuVar25 = &PTR_PTR_113305e00;
          FUN_10ae079a0(0,&PTR_PTR_113305e00);
          FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305e00);
        }
        auStack_310[0] = 0;
        uStack_308 = 0;
        puStack_318 = (undefined7 *)0x0;
        uStack_320 = 3;
        puVar21 = &uStack_240;
        func_0x00010938229c();
        uStack_328._7_1_ = '\x04';
        uStack_338 = 0x7974;
        uStack_336 = 0x70;
        uStack_335 = 0x65;
        uStack_334 = 0;
        puVar13 = auStack_310;
        puStack_318 = puVar21;
        func_0x0001095b7584(puVar13,&uStack_338);
        uVar14 = *puVar13;
        *puVar13 = uStack_320;
        puVar21 = *(undefined7 **)(puVar13 + 8);
        uStack_320 = uVar14;
        *(undefined7 **)(puVar13 + 8) = puStack_318;
        puStack_318 = puVar21;
        if (uStack_328._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_331,
                           CONCAT25(uStack_333,
                                    CONCAT14(uStack_334,
                                             CONCAT13(uStack_335,CONCAT12(uStack_336,uStack_338)))))
                 );
          uVar14 = uStack_320;
        }
        func_0x000109380ffc(&puStack_318,uVar14);
        ppcStack_340 = (code **)0x0;
        uStack_348 = 3;
        ppcVar22 = &pcStack_280;
        func_0x00010938229c();
        uStack_328._7_1_ = '\x02';
        uStack_338 = 0x6469;
        uStack_336 = 0;
        puVar13 = auStack_310;
        ppcStack_340 = ppcVar22;
        func_0x0001095b7584(puVar13,&uStack_338);
        uVar14 = *puVar13;
        *puVar13 = uStack_348;
        ppcVar22 = *(code ***)(puVar13 + 8);
        uStack_348 = uVar14;
        *(code ***)(puVar13 + 8) = ppcStack_340;
        ppcStack_340 = ppcVar22;
        if (uStack_328._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_331,
                           CONCAT25(uStack_333,
                                    CONCAT14(uStack_334,
                                             CONCAT13(uStack_335,CONCAT12(uStack_336,uStack_338)))))
                 );
          uVar14 = uStack_348;
        }
        func_0x000109380ffc(&ppcStack_340,uVar14);
        func_0x000109381b20(auStack_358,auStack_310);
        uStack_328 = CONCAT17(10,(undefined7)uStack_328);
        uStack_330 = 0x6f66;
        uStack_338 = 0x6e69;
        uStack_336 = 0x76;
        uStack_335 = 0x69;
        uStack_334 = 0x74;
        uStack_333 = 0x4965;
        uStack_331 = 0x6e;
        uStack_32e = 0;
        pplVar12 = &plStack_2e0;
        func_0x0001095b7584(pplVar12,&uStack_338);
        uVar14 = *(undefined1 *)pplVar12;
        *(undefined1 *)pplVar12 = auStack_358[0];
        plVar19 = pplVar12[1];
        auStack_358[0] = uVar14;
        pplVar12[1] = plStack_350;
        plStack_350 = plVar19;
        if ((long)uStack_328 < 0) {
          __ZdlPv(CONCAT17(uStack_331,
                           CONCAT25(uStack_333,
                                    CONCAT14(uStack_334,
                                             CONCAT13(uStack_335,CONCAT12(uStack_336,uStack_338)))))
                 );
          uVar14 = auStack_358[0];
        }
        func_0x000109380ffc(&plStack_350,uVar14);
        func_0x00010a383718(&uStack_240,&pcStack_280);
        ppuVar25 = &PTR_PTR_113305078;
        FUN_10ae079a0();
        func_0x00010a38376c();
        FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305078);
        func_0x000109380ffc(&uStack_308,auStack_310[0]);
      }
    }
  }
  else {
    if (*(char *)(ppuVar10 + 0x75) != '\0') goto LAB_10a868fa4;
    puVar20 = ppuVar10[0x73];
    if (puVar20 != (undefined *)0x0) {
      bVar23 = 6;
      uVar11 = 0x646e65697266;
      goto LAB_10a86870c;
    }
  }
LAB_10a8689b0:
  if (puVar29 != (undefined *)0x0) {
    auStack_310[0] = 0;
    uStack_308 = 0;
    lStack_360 = (long)*(int *)(puVar29 + 0x18);
    uStack_368 = 5;
    uStack_328._7_1_ = '\n';
    uStack_330 = 0x7372;
    uStack_338 = 0x696d;
    uStack_336 = 0x6e;
    uStack_335 = 0x50;
    uStack_334 = 0x6c;
    uStack_333 = 0x7961;
    uStack_331 = 0x65;
    uStack_32e = 0;
    puVar13 = auStack_310;
    func_0x0001095b7584(puVar13,&uStack_338);
    uVar14 = *puVar13;
    *puVar13 = uStack_368;
    lVar28 = *(long *)(puVar13 + 8);
    uStack_368 = uVar14;
    *(long *)(puVar13 + 8) = lStack_360;
    lStack_360 = lVar28;
    if (uStack_328._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_331,
                       CONCAT25(uStack_333,
                                CONCAT14(uStack_334,
                                         CONCAT13(uStack_335,CONCAT12(uStack_336,uStack_338))))));
      uVar14 = uStack_368;
    }
    func_0x000109380ffc(&lStack_360,uVar14);
    lStack_370 = (long)*(int *)(puVar29 + 0x1c);
    uStack_378 = 5;
    uStack_328._7_1_ = '\n';
    uStack_330 = 0x7372;
    uStack_338 = 0x616d;
    uStack_336 = 0x78;
    uStack_335 = 0x50;
    uStack_334 = 0x6c;
    uStack_333 = 0x7961;
    uStack_331 = 0x65;
    uStack_32e = 0;
    puVar13 = auStack_310;
    func_0x0001095b7584(puVar13,&uStack_338);
    uVar14 = *puVar13;
    *puVar13 = uStack_378;
    lVar28 = *(long *)(puVar13 + 8);
    uStack_378 = uVar14;
    *(long *)(puVar13 + 8) = lStack_370;
    lStack_370 = lVar28;
    if (uStack_328._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_331,
                       CONCAT25(uStack_333,
                                CONCAT14(uStack_334,
                                         CONCAT13(uStack_335,CONCAT12(uStack_336,uStack_338))))));
      uVar14 = uStack_378;
    }
    func_0x000109380ffc(&lStack_370,uVar14);
    iVar18 = *(int *)(puVar29 + 0x18);
    if ((*(ulong *)(puVar29 + 0x20) & 0x100000000) != 0) {
      iVar18 = (int)*(ulong *)(puVar29 + 0x20);
    }
    lStack_380 = (long)iVar18;
    uStack_388 = 5;
    uStack_328._7_1_ = '\r';
    uStack_338 = 0x6174;
    uStack_336 = 0x72;
    uStack_335 = 0x67;
    uStack_334 = 0x65;
    uStack_333 = 0x5074;
    uStack_331 = 0x6c;
    uStack_330 = 0x7961;
    uStack_32e = 0x65;
    uStack_32d = 0x7372;
    uStack_32b = 0;
    puVar13 = auStack_310;
    func_0x0001095b7584(puVar13,&uStack_338);
    uVar14 = *puVar13;
    *puVar13 = uStack_388;
    lVar28 = *(long *)(puVar13 + 8);
    uStack_388 = uVar14;
    *(long *)(puVar13 + 8) = lStack_380;
    lStack_380 = lVar28;
    if (uStack_328._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_331,
                       CONCAT25(uStack_333,
                                CONCAT14(uStack_334,
                                         CONCAT13(uStack_335,CONCAT12(uStack_336,uStack_338))))));
      uVar14 = uStack_388;
    }
    func_0x000109380ffc(&lStack_380,uVar14);
    func_0x000109381b20(auStack_398,auStack_310);
    uStack_328 = CONCAT17(0xf,(undefined7)uStack_328);
    uStack_338 = 0x616d;
    uStack_336 = 0x74;
    uStack_335 = 99;
    uStack_334 = 0x68;
    uStack_333 = 0x616d;
    uStack_331 = 0x6b;
    uStack_330 = 0x6e69;
    uStack_32e = 0x67;
    uStack_32d = 0x6e49;
    uStack_32b = 0x66;
    uStack_32a = 0x6f;
    uStack_329 = 0;
    pplVar12 = &plStack_2e0;
    func_0x0001095b7584(pplVar12,&uStack_338);
    uVar14 = *(undefined1 *)pplVar12;
    *(undefined1 *)pplVar12 = auStack_398[0];
    plVar19 = pplVar12[1];
    auStack_398[0] = uVar14;
    pplVar12[1] = plStack_390;
    plStack_390 = plVar19;
    if ((long)uStack_328 < 0) {
      __ZdlPv(CONCAT17(uStack_331,
                       CONCAT25(uStack_333,
                                CONCAT14(uStack_334,
                                         CONCAT13(uStack_335,CONCAT12(uStack_336,uStack_338))))));
      uVar14 = auStack_398[0];
    }
    func_0x000109380ffc(&plStack_390,uVar14);
    func_0x00010ae02ecc(0,*(undefined4 *)(puVar29 + 0x18));
    func_0x00010ae02ecc();
    func_0x00010ae02ecc();
    ppuVar25 = &PTR_PTR_113305e70;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar25,&PTR_PTR_113305e70);
    func_0x000109380ffc(&uStack_308,auStack_310[0]);
  }
  FUN_10a0c32e4(&uStack_338,&plStack_2e0,0xffffffff,0x20,0,1);
  uVar2 = CONCAT17(uStack_329,
                   CONCAT16(uStack_32a,
                            CONCAT15(uStack_32b,CONCAT23(uStack_32d,CONCAT12(uStack_32e,uStack_330))
                                    )));
  puVar6 = (undefined2 *)
           CONCAT17(uStack_331,
                    CONCAT25(uStack_333,
                             CONCAT14(uStack_334,
                                      CONCAT13(uStack_335,CONCAT12(uStack_336,uStack_338)))));
  if (-1 < (long)uStack_328) {
    uVar2 = uStack_328 >> 0x38;
    puVar6 = &uStack_338;
  }
  FUN_10a3bf330(auStack_2d0,puVar6,uVar2);
  if ((long)uStack_328 < 0) {
    __ZdlPv(CONCAT17(uStack_331,
                     CONCAT25(uStack_333,
                              CONCAT14(uStack_334,
                                       CONCAT13(uStack_335,CONCAT12(uStack_336,uStack_338))))));
  }
  func_0x000109380ffc(&plStack_2d8,(ulong)plStack_2e0 & 0xff);
  if (plVar26 != (long *)0x0) {
    plVar19 = plVar26 + 1;
    do {
      lVar28 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar28 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  FUN_10a8691d4(&uStack_338,ppuVar24[0x71],ppuVar24);
  plVar19 = (long *)0x138;
  __Znwm();
  uVar11 = auStack_2d0[0];
  plVar30 = plVar19 + 1;
  *plVar30 = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&PTR_FUN_110b9f3b0;
  plVar26 = plVar19 + 3;
  auStack_2d0[0] = 0;
  uStack_240 = (undefined7)uVar11;
  uStack_239 = (undefined1)((ulong)uVar11 >> 0x38);
  uStack_238 = (undefined2)auStack_2d0[1];
  uStack_236 = (undefined5)((ulong)auStack_2d0[1] >> 0x10);
  uStack_231 = (undefined1)((ulong)auStack_2d0[1] >> 0x38);
  (**(code **)(alStack_2c0[0] + 0x10))(&uStack_230,alStack_2c0);
  uStack_1f8 = uStack_288;
  ppuStack_3c8 = (undefined **)ppuVar24[0x41];
  pppuStack_3d0 = (undefined ***)ppuVar24[0x40];
  if (-1 < (char)*(byte *)((long)ppuVar24 + 0x217)) {
    ppuStack_3c8 = (undefined **)(ulong)*(byte *)((long)ppuVar24 + 0x217);
    pppuStack_3d0 = (undefined ***)(ppuVar24 + 0x40);
  }
  ppcStack_3c0 = &pcStack_280;
  pcStack_280 = FUN_10a8a082c;
  ppuStack_278 = &PTR_FUN_110c24de8;
  uStack_270 = CONCAT17(uStack_331,
                        CONCAT25(uStack_333,
                                 CONCAT14(uStack_334,
                                          CONCAT13(uStack_335,CONCAT12(uStack_336,uStack_338)))));
  uStack_268 = CONCAT17(uStack_329,
                        CONCAT16(uStack_32a,
                                 CONCAT15(uStack_32b,
                                          CONCAT23(uStack_32d,CONCAT12(uStack_32e,uStack_330)))));
  uStack_260 = uStack_328;
  uStack_330 = 0;
  uStack_32e = 0;
  uStack_32d = 0;
  uStack_32b = 0;
  uStack_32a = 0;
  uStack_329 = 0;
  uStack_328 = 0;
  FUN_10a23708c(plVar26,&UNK_10e4df438,0x2a,&UNK_10f647b49,4,&uStack_240,1);
  (*(code *)*ppuStack_278)(&ppuStack_278);
  FUN_10a042634(&uStack_240);
  plStack_2e0 = plVar26;
  plStack_2d8 = plVar19;
  FUN_10a86927c(&uStack_338);
  uStack_240 = 0;
  uStack_239 = 0;
  uStack_238 = 0;
  uStack_236 = 0;
  uStack_231 = 0;
  ppuVar25 = (undefined **)ppuVar24[0x6c];
  ppppuVar31 = &pppuStack_190;
  if (ppuVar25 == (undefined **)0x0) {
LAB_10a868ebc:
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar29 = &UNK_10f67ee52;
      uVar11 = 0;
      uVar15 = 1;
      uVar17 = 0x631;
      pcVar7 = (code *)0x10a868ef0;
SUB_10ae06f08:
      *(undefined8 *****)((long)ppppuVar8 + -0x10) = ppppuVar31;
      *(code **)((long)ppppuVar8 + -8) = pcVar7;
      *(undefined *****)((long)ppppuVar8 + -0x18) = ppppuVar8;
      FUN_10ae06f30(uVar11,uVar15,&UNK_10f67ed4a,&UNK_10f67ed92,uVar17,puVar29,ppppuVar8);
      return;
    }
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_238 = SUB82(ppuVar25,0);
    uStack_236 = (undefined5)((ulong)ppuVar25 >> 0x10);
    uStack_231 = (undefined1)((ulong)ppuVar25 >> 0x38);
    if (ppuVar25 == (undefined **)0x0) goto LAB_10a868ebc;
    ppuVar25 = (undefined **)ppuVar24[0x6b];
    uStack_240 = SUB87(ppuVar25,0);
    uStack_239 = (undefined1)((ulong)ppuVar25 >> 0x38);
    if (ppuVar25 == (undefined **)0x0) goto LAB_10a868ebc;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar29 = &UNK_10f67ee2b;
      uVar11 = 1;
      uVar15 = 4;
      uVar17 = 0x62d;
      ppppuVar8 = &pppuStack_3d0;
      pcVar7 = (code *)0x10a868e4c;
      goto SUB_10ae06f08;
    }
    *(undefined4 *)ppuVar24[0x3d] = 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar5) {
        *plVar30 = *plVar30 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plStack_3b8 = plVar26;
    plStack_3b0 = plVar19;
    (**(code **)*ppuVar25)(ppuVar25,&plStack_3b8);
    plVar26 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      plVar19 = plStack_3b0 + 1;
      do {
        lVar28 = *plVar19;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *plVar19 = lVar28 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar28 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
    }
  }
  plVar26 = (long *)CONCAT17(uStack_231,CONCAT52(uStack_236,uStack_238));
  if (plVar26 != (long *)0x0) {
    plVar19 = plVar26 + 1;
    do {
      lVar28 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar28 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  plVar26 = plStack_2d8;
  if (plStack_2d8 != (long *)0x0) {
    plVar19 = plStack_2d8 + 1;
    do {
      lVar28 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar28 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  FUN_10a042634(auStack_2d0);
LAB_10a868f68:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
LAB_10a868fa0:
  ___stack_chk_fail();
LAB_10a868fa4:
  FUN_10a05bab8(&UNK_10f6347d3);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a868fb4);
  (*pcVar7)();
}



/* Entry: 10a868240; end: 10a8684b3;  */

/* WARNING: Possible PIC construction at 0x00010a868e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a868eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a868c94) */
/* WARNING: Removing unreachable block (ram,0x00010a868624) */
/* WARNING: Removing unreachable block (ram,0x00010a8686a4) */
/* WARNING: Removing unreachable block (ram,0x00010a868ca4) */

void FUN_10a868240(undefined8 param_1,ulong param_2,long param_3)

{
  undefined ***pppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined2 *puVar5;
  code *pcVar6;
  undefined ****ppppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long **pplVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  long *plVar17;
  undefined *puVar18;
  undefined7 *puVar19;
  code **ppcVar20;
  byte bVar21;
  undefined **ppuVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined *puVar26;
  long *plVar27;
  undefined8 ****ppppuVar28;
  undefined ***pppuStack_310;
  undefined **ppuStack_308;
  code **ppcStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined *puStack_2e8;
  long *plStack_2e0;
  undefined1 auStack_2d8 [8];
  long *plStack_2d0;
  undefined1 uStack_2c8;
  long lStack_2c0;
  undefined1 uStack_2b8;
  long lStack_2b0;
  undefined1 uStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [8];
  long *plStack_290;
  undefined1 uStack_288;
  code **ppcStack_280;
  undefined2 uStack_278;
  undefined1 uStack_276;
  undefined1 uStack_275;
  undefined1 uStack_274;
  undefined2 uStack_273;
  undefined1 uStack_271;
  undefined2 uStack_270;
  undefined1 uStack_26e;
  undefined2 uStack_26d;
  undefined1 uStack_26b;
  undefined1 uStack_26a;
  undefined1 uStack_269;
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined7 *puStack_258;
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  undefined1 uStack_240;
  long *plStack_238;
  undefined1 uStack_230;
  undefined **ppuStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined8 auStack_210 [2];
  long alStack_200 [7];
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined **ppuStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined2 uStack_178;
  undefined5 uStack_176;
  undefined1 uStack_171;
  undefined8 uStack_170;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 ***pppuStack_d0;
  code *pcStack_c8;
  uint auStack_c0 [2];
  undefined ***pppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = (undefined **)&ppuStack_88;
  func_0x00010a866dd8(ppuVar8,param_1);
  if (ppuStack_88 == (undefined **)0x0) {
    ppuVar8 = &PTR_PTR_113305798;
    FUN_10ae079a0(0);
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_113305798);
  }
  else if (*(int *)ppuStack_88[0x3d] != 4) {
    func_0x000107c2b054(&pppuStack_a0,&UNK_10f67d9eb);
    if (((*(long *)(param_3 + 0x10) != 0) && (*(long *)(param_3 + 8) != 0)) &&
       (*(int *)(param_3 + 0x18) == 1)) {
      FUN_109ffe064(&pppuStack_78);
      if (uStack_90 < 0) {
        __ZdlPv(pppuStack_a0);
      }
      ppuStack_98 = ppuStack_70;
      pppuStack_a0 = pppuStack_78;
      uStack_90 = CONCAT44(uStack_64,uStack_68);
    }
    func_0x00010ae02ecc(0,param_2);
    func_0x00010ae02f70();
    ppuVar8 = &PTR_PTR_1133042b8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02f80();
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133042b8);
    auStack_c0[0] = (uint)param_2;
    if (uStack_90 < 0) {
      func_0x000107c3192c(&pppuStack_b8,pppuStack_a0,ppuStack_98);
      param_2 = (ulong)auStack_c0[0];
    }
    else {
      ppuStack_b0 = ppuStack_98;
      pppuStack_b8 = pppuStack_a0;
      lStack_a8 = uStack_90;
    }
    pppuStack_78 = (undefined ***)FUN_10a8a0624;
    ppuStack_70 = &PTR_FUN_110c24dd0;
    uStack_68 = (undefined4)param_2;
    ppuStack_58 = ppuStack_b0;
    pppuStack_60 = pppuStack_b8;
    lStack_50 = lStack_a8;
    pppuStack_b8 = (undefined ***)0x0;
    ppuStack_b0 = (undefined **)0x0;
    lStack_a8 = 0;
    FUN_10a860860(ppuStack_88,&pppuStack_78);
    ppuVar8 = (undefined **)&ppuStack_70;
    (*(code *)*ppuStack_70)();
    if (lStack_a8 < 0) {
      ppuVar8 = (undefined **)pppuStack_b8;
      __ZdlPv();
    }
    if (uStack_90 < 0) {
      ppuVar8 = (undefined **)pppuStack_a0;
      __ZdlPv();
    }
  }
  if (pppuStack_80 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_80 + 1;
    do {
      ppuVar22 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar22 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar22 == (undefined **)0x0) {
      (*(code *)(*pppuStack_80)[2])(pppuStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar8 = (undefined **)pppuStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_90._7_1_ < '\0') {
    __ZdlPv(pppuStack_a0);
  }
  FUN_10a5ca2e0(&ppuStack_88);
  __Unwind_Resume();
  pcStack_c8 = FUN_10a8684b4;
  ppppuVar7 = &pppuStack_310;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined **)ppuVar8[0x6f];
  pppuStack_d0 = (undefined8 ***)&stack0xfffffffffffffff0;
  (**(code **)(*ppuVar9 + 0x48))();
  ppuVar22 = (undefined **)*ppuVar9;
  if (-1 < *(char *)((long)ppuVar9 + 0x17)) {
    ppuVar22 = ppuVar9;
  }
  ppuVar9 = ppuVar22;
  _strlen();
  puVar24 = (undefined8 *)&UNK_110c23970;
  lVar25 = 0x30;
  do {
    if ((undefined **)*puVar24 == ppuVar9) {
      uVar10 = puVar24[-1];
      _memcmp(uVar10,ppuVar22,ppuVar9);
      if ((int)uVar10 == 0) {
        if (lVar25 != 0) {
          if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10a868f68;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) goto LAB_10a868fa0;
          puVar26 = &UNK_10f67ede7;
          uVar10 = 0;
          uVar14 = 1;
          uVar15 = 0x59c;
          ppppuVar7 = (undefined ****)auStack_c0;
          ppppuVar28 = (undefined8 ****)pppuStack_d0;
          pcVar6 = pcStack_c8;
          goto SUB_10ae06f08;
        }
        break;
      }
    }
    puVar24 = puVar24 + 2;
    lVar25 = lVar25 + -0x10;
  } while (lVar25 != 0);
  ppuVar22 = (undefined **)ppuVar8[0x6f];
  (**(code **)(*ppuVar22 + 0x48))();
  bVar21 = *(byte *)((long)ppuVar8[0x6f] + 0xaa);
  ppuVar9 = (undefined **)ppuVar8[0x6f];
  puVar26 = ppuVar9[0x76];
  plVar23 = (long *)ppuVar9[0x77];
  if (plVar23 != (long *)0x0) {
    plVar17 = plVar23 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = *plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_220 = (long *)((ulong)plStack_220 & 0xffffffffffffff00);
  plStack_218 = (long *)0x0;
  puVar18 = ppuVar22[1];
  if (-1 < (char)*(byte *)((long)ppuVar22 + 0x17)) {
    puVar18 = (undefined *)(ulong)*(byte *)((long)ppuVar22 + 0x17);
  }
  puStack_2e8 = puVar26;
  plStack_2e0 = plVar23;
  if (puVar18 != (undefined *)0x0) {
    ppuStack_228 = (undefined **)0x0;
    uStack_230 = 3;
    func_0x00010938229c();
    uStack_170 = CONCAT17(9,(undefined7)uStack_170);
    uStack_180 = 0x6e6f6973736573;
    uStack_179 = 0x49;
    uStack_178 = 100;
    pplVar11 = &plStack_220;
    ppuStack_228 = ppuVar22;
    func_0x0001095b7584(pplVar11,&uStack_180);
    uVar13 = *(undefined1 *)pplVar11;
    *(undefined1 *)pplVar11 = uStack_230;
    ppuVar22 = (undefined **)pplVar11[1];
    uStack_230 = uVar13;
    pplVar11[1] = (long *)ppuStack_228;
    ppuStack_228 = ppuVar22;
    func_0x000109380ffc(&ppuStack_228,uVar13);
  }
  plStack_238 = (long *)((ulong)bVar21 & 1);
  uStack_240 = 4;
  uStack_170 = CONCAT17(0xf,(undefined7)uStack_170);
  uStack_180 = 0x53617461447369;
  uStack_179 = 0x74;
  uStack_178 = 0x6572;
  uStack_176 = 0x676e696d61;
  uStack_171 = 0;
  pplVar11 = &plStack_220;
  func_0x0001095b7584(pplVar11,&uStack_180);
  uVar13 = *(undefined1 *)pplVar11;
  *(undefined1 *)pplVar11 = uStack_240;
  plVar17 = pplVar11[1];
  uStack_240 = uVar13;
  pplVar11[1] = plStack_238;
  plStack_238 = plVar17;
  func_0x000109380ffc(&plStack_238,uVar13);
  uStack_180 = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  uStack_176 = 0;
  uStack_171 = 0;
  uStack_170 = 0;
  pcStack_1c0 = (code *)0x0;
  ppuStack_1b8 = (undefined **)0x0;
  uStack_1b0 = 0;
  if (*(char *)(ppuVar9 + 0x75) == '\x01') {
    puVar18 = ppuVar9[0x73];
    if (puVar18 != (undefined *)0x0) {
      bVar21 = 5;
      uVar10 = 0x70756f7267;
LAB_10a86870c:
      uStack_180 = (undefined7)uVar10;
      uStack_179 = 0;
      uStack_170 = (ulong)bVar21 << 0x38;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pcStack_1c0,puVar18 + 0x18);
      puVar26 = puStack_2e8;
      uVar2 = CONCAT17(uStack_171,CONCAT52(uStack_176,uStack_178));
      if (-1 < (long)uStack_170) {
        uVar2 = uStack_170 >> 0x38;
      }
      if (uVar2 != 0) {
        ppuVar22 = ppuStack_1b8;
        if (-1 < (long)uStack_1b0) {
          ppuVar22 = (undefined **)(uStack_1b0 >> 0x38);
        }
        if ((ppuVar22 == (undefined **)0x0) || (puStack_2e8 == (undefined *)0x0)) {
          if (ppuVar22 == (undefined **)0x0) goto LAB_10a8689b0;
        }
        else {
          ppuVar22 = &PTR_PTR_113305e00;
          FUN_10ae079a0(0,&PTR_PTR_113305e00);
          FUN_10ae07cd4(ppuVar22,&PTR_PTR_113305e00);
        }
        auStack_250[0] = 0;
        uStack_248 = 0;
        puStack_258 = (undefined7 *)0x0;
        uStack_260 = 3;
        puVar19 = &uStack_180;
        func_0x00010938229c();
        uStack_268._7_1_ = '\x04';
        uStack_278 = 0x7974;
        uStack_276 = 0x70;
        uStack_275 = 0x65;
        uStack_274 = 0;
        puVar12 = auStack_250;
        puStack_258 = puVar19;
        func_0x0001095b7584(puVar12,&uStack_278);
        uVar13 = *puVar12;
        *puVar12 = uStack_260;
        puVar19 = *(undefined7 **)(puVar12 + 8);
        uStack_260 = uVar13;
        *(undefined7 **)(puVar12 + 8) = puStack_258;
        puStack_258 = puVar19;
        if (uStack_268._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_271,
                           CONCAT25(uStack_273,
                                    CONCAT14(uStack_274,
                                             CONCAT13(uStack_275,CONCAT12(uStack_276,uStack_278)))))
                 );
          uVar13 = uStack_260;
        }
        func_0x000109380ffc(&puStack_258,uVar13);
        ppcStack_280 = (code **)0x0;
        uStack_288 = 3;
        ppcVar20 = &pcStack_1c0;
        func_0x00010938229c();
        uStack_268._7_1_ = '\x02';
        uStack_278 = 0x6469;
        uStack_276 = 0;
        puVar12 = auStack_250;
        ppcStack_280 = ppcVar20;
        func_0x0001095b7584(puVar12,&uStack_278);
        uVar13 = *puVar12;
        *puVar12 = uStack_288;
        ppcVar20 = *(code ***)(puVar12 + 8);
        uStack_288 = uVar13;
        *(code ***)(puVar12 + 8) = ppcStack_280;
        ppcStack_280 = ppcVar20;
        if (uStack_268._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_271,
                           CONCAT25(uStack_273,
                                    CONCAT14(uStack_274,
                                             CONCAT13(uStack_275,CONCAT12(uStack_276,uStack_278)))))
                 );
          uVar13 = uStack_288;
        }
        func_0x000109380ffc(&ppcStack_280,uVar13);
        func_0x000109381b20(auStack_298,auStack_250);
        uStack_268 = CONCAT17(10,(undefined7)uStack_268);
        uStack_270 = 0x6f66;
        uStack_278 = 0x6e69;
        uStack_276 = 0x76;
        uStack_275 = 0x69;
        uStack_274 = 0x74;
        uStack_273 = 0x4965;
        uStack_271 = 0x6e;
        uStack_26e = 0;
        pplVar11 = &plStack_220;
        func_0x0001095b7584(pplVar11,&uStack_278);
        uVar13 = *(undefined1 *)pplVar11;
        *(undefined1 *)pplVar11 = auStack_298[0];
        plVar17 = pplVar11[1];
        auStack_298[0] = uVar13;
        pplVar11[1] = plStack_290;
        plStack_290 = plVar17;
        if ((long)uStack_268 < 0) {
          __ZdlPv(CONCAT17(uStack_271,
                           CONCAT25(uStack_273,
                                    CONCAT14(uStack_274,
                                             CONCAT13(uStack_275,CONCAT12(uStack_276,uStack_278)))))
                 );
          uVar13 = auStack_298[0];
        }
        func_0x000109380ffc(&plStack_290,uVar13);
        func_0x00010a383718(&uStack_180,&pcStack_1c0);
        ppuVar22 = &PTR_PTR_113305078;
        FUN_10ae079a0();
        func_0x00010a38376c();
        FUN_10ae07cd4(ppuVar22,&PTR_PTR_113305078);
        func_0x000109380ffc(&uStack_248,auStack_250[0]);
      }
    }
  }
  else {
    if (*(char *)(ppuVar9 + 0x75) != '\0') goto LAB_10a868fa4;
    puVar18 = ppuVar9[0x73];
    if (puVar18 != (undefined *)0x0) {
      bVar21 = 6;
      uVar10 = 0x646e65697266;
      goto LAB_10a86870c;
    }
  }
LAB_10a8689b0:
  if (puVar26 != (undefined *)0x0) {
    auStack_250[0] = 0;
    uStack_248 = 0;
    lStack_2a0 = (long)*(int *)(puVar26 + 0x18);
    uStack_2a8 = 5;
    uStack_268._7_1_ = '\n';
    uStack_270 = 0x7372;
    uStack_278 = 0x696d;
    uStack_276 = 0x6e;
    uStack_275 = 0x50;
    uStack_274 = 0x6c;
    uStack_273 = 0x7961;
    uStack_271 = 0x65;
    uStack_26e = 0;
    puVar12 = auStack_250;
    func_0x0001095b7584(puVar12,&uStack_278);
    uVar13 = *puVar12;
    *puVar12 = uStack_2a8;
    lVar25 = *(long *)(puVar12 + 8);
    uStack_2a8 = uVar13;
    *(long *)(puVar12 + 8) = lStack_2a0;
    lStack_2a0 = lVar25;
    if (uStack_268._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_271,
                       CONCAT25(uStack_273,
                                CONCAT14(uStack_274,
                                         CONCAT13(uStack_275,CONCAT12(uStack_276,uStack_278))))));
      uVar13 = uStack_2a8;
    }
    func_0x000109380ffc(&lStack_2a0,uVar13);
    lStack_2b0 = (long)*(int *)(puVar26 + 0x1c);
    uStack_2b8 = 5;
    uStack_268._7_1_ = '\n';
    uStack_270 = 0x7372;
    uStack_278 = 0x616d;
    uStack_276 = 0x78;
    uStack_275 = 0x50;
    uStack_274 = 0x6c;
    uStack_273 = 0x7961;
    uStack_271 = 0x65;
    uStack_26e = 0;
    puVar12 = auStack_250;
    func_0x0001095b7584(puVar12,&uStack_278);
    uVar13 = *puVar12;
    *puVar12 = uStack_2b8;
    lVar25 = *(long *)(puVar12 + 8);
    uStack_2b8 = uVar13;
    *(long *)(puVar12 + 8) = lStack_2b0;
    lStack_2b0 = lVar25;
    if (uStack_268._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_271,
                       CONCAT25(uStack_273,
                                CONCAT14(uStack_274,
                                         CONCAT13(uStack_275,CONCAT12(uStack_276,uStack_278))))));
      uVar13 = uStack_2b8;
    }
    func_0x000109380ffc(&lStack_2b0,uVar13);
    iVar16 = *(int *)(puVar26 + 0x18);
    if ((*(ulong *)(puVar26 + 0x20) & 0x100000000) != 0) {
      iVar16 = (int)*(ulong *)(puVar26 + 0x20);
    }
    lStack_2c0 = (long)iVar16;
    uStack_2c8 = 5;
    uStack_268._7_1_ = '\r';
    uStack_278 = 0x6174;
    uStack_276 = 0x72;
    uStack_275 = 0x67;
    uStack_274 = 0x65;
    uStack_273 = 0x5074;
    uStack_271 = 0x6c;
    uStack_270 = 0x7961;
    uStack_26e = 0x65;
    uStack_26d = 0x7372;
    uStack_26b = 0;
    puVar12 = auStack_250;
    func_0x0001095b7584(puVar12,&uStack_278);
    uVar13 = *puVar12;
    *puVar12 = uStack_2c8;
    lVar25 = *(long *)(puVar12 + 8);
    uStack_2c8 = uVar13;
    *(long *)(puVar12 + 8) = lStack_2c0;
    lStack_2c0 = lVar25;
    if (uStack_268._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_271,
                       CONCAT25(uStack_273,
                                CONCAT14(uStack_274,
                                         CONCAT13(uStack_275,CONCAT12(uStack_276,uStack_278))))));
      uVar13 = uStack_2c8;
    }
    func_0x000109380ffc(&lStack_2c0,uVar13);
    func_0x000109381b20(auStack_2d8,auStack_250);
    uStack_268 = CONCAT17(0xf,(undefined7)uStack_268);
    uStack_278 = 0x616d;
    uStack_276 = 0x74;
    uStack_275 = 99;
    uStack_274 = 0x68;
    uStack_273 = 0x616d;
    uStack_271 = 0x6b;
    uStack_270 = 0x6e69;
    uStack_26e = 0x67;
    uStack_26d = 0x6e49;
    uStack_26b = 0x66;
    uStack_26a = 0x6f;
    uStack_269 = 0;
    pplVar11 = &plStack_220;
    func_0x0001095b7584(pplVar11,&uStack_278);
    uVar13 = *(undefined1 *)pplVar11;
    *(undefined1 *)pplVar11 = auStack_2d8[0];
    plVar17 = pplVar11[1];
    auStack_2d8[0] = uVar13;
    pplVar11[1] = plStack_2d0;
    plStack_2d0 = plVar17;
    if ((long)uStack_268 < 0) {
      __ZdlPv(CONCAT17(uStack_271,
                       CONCAT25(uStack_273,
                                CONCAT14(uStack_274,
                                         CONCAT13(uStack_275,CONCAT12(uStack_276,uStack_278))))));
      uVar13 = auStack_2d8[0];
    }
    func_0x000109380ffc(&plStack_2d0,uVar13);
    func_0x00010ae02ecc(0,*(undefined4 *)(puVar26 + 0x18));
    func_0x00010ae02ecc();
    func_0x00010ae02ecc();
    ppuVar22 = &PTR_PTR_113305e70;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar22,&PTR_PTR_113305e70);
    func_0x000109380ffc(&uStack_248,auStack_250[0]);
  }
  FUN_10a0c32e4(&uStack_278,&plStack_220,0xffffffff,0x20,0,1);
  uVar2 = CONCAT17(uStack_269,
                   CONCAT16(uStack_26a,
                            CONCAT15(uStack_26b,CONCAT23(uStack_26d,CONCAT12(uStack_26e,uStack_270))
                                    )));
  puVar5 = (undefined2 *)
           CONCAT17(uStack_271,
                    CONCAT25(uStack_273,
                             CONCAT14(uStack_274,
                                      CONCAT13(uStack_275,CONCAT12(uStack_276,uStack_278)))));
  if (-1 < (long)uStack_268) {
    uVar2 = uStack_268 >> 0x38;
    puVar5 = &uStack_278;
  }
  FUN_10a3bf330(auStack_210,puVar5,uVar2);
  if ((long)uStack_268 < 0) {
    __ZdlPv(CONCAT17(uStack_271,
                     CONCAT25(uStack_273,
                              CONCAT14(uStack_274,
                                       CONCAT13(uStack_275,CONCAT12(uStack_276,uStack_278))))));
  }
  func_0x000109380ffc(&plStack_218,(ulong)plStack_220 & 0xff);
  if (plVar23 != (long *)0x0) {
    plVar17 = plVar23 + 1;
    do {
      lVar25 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar25 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  FUN_10a8691d4(&uStack_278,ppuVar8[0x71],ppuVar8);
  plVar17 = (long *)0x138;
  __Znwm();
  uVar10 = auStack_210[0];
  plVar27 = plVar17 + 1;
  *plVar27 = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&PTR_FUN_110b9f3b0;
  plVar23 = plVar17 + 3;
  auStack_210[0] = 0;
  uStack_180 = (undefined7)uVar10;
  uStack_179 = (undefined1)((ulong)uVar10 >> 0x38);
  uStack_178 = (undefined2)auStack_210[1];
  uStack_176 = (undefined5)((ulong)auStack_210[1] >> 0x10);
  uStack_171 = (undefined1)((ulong)auStack_210[1] >> 0x38);
  (**(code **)(alStack_200[0] + 0x10))(&uStack_170,alStack_200);
  uStack_138 = uStack_1c8;
  ppuStack_308 = (undefined **)ppuVar8[0x41];
  pppuStack_310 = (undefined ***)ppuVar8[0x40];
  if (-1 < (char)*(byte *)((long)ppuVar8 + 0x217)) {
    ppuStack_308 = (undefined **)(ulong)*(byte *)((long)ppuVar8 + 0x217);
    pppuStack_310 = (undefined ***)(ppuVar8 + 0x40);
  }
  ppcStack_300 = &pcStack_1c0;
  pcStack_1c0 = FUN_10a8a082c;
  ppuStack_1b8 = &PTR_FUN_110c24de8;
  uStack_1b0 = CONCAT17(uStack_271,
                        CONCAT25(uStack_273,
                                 CONCAT14(uStack_274,
                                          CONCAT13(uStack_275,CONCAT12(uStack_276,uStack_278)))));
  uStack_1a8 = CONCAT17(uStack_269,
                        CONCAT16(uStack_26a,
                                 CONCAT15(uStack_26b,
                                          CONCAT23(uStack_26d,CONCAT12(uStack_26e,uStack_270)))));
  uStack_1a0 = uStack_268;
  uStack_270 = 0;
  uStack_26e = 0;
  uStack_26d = 0;
  uStack_26b = 0;
  uStack_26a = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  FUN_10a23708c(plVar23,&UNK_10e4df438,0x2a,&UNK_10f647b49,4,&uStack_180,1);
  (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
  FUN_10a042634(&uStack_180);
  plStack_220 = plVar23;
  plStack_218 = plVar17;
  FUN_10a86927c(&uStack_278);
  uStack_180 = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  uStack_176 = 0;
  uStack_171 = 0;
  ppuVar22 = (undefined **)ppuVar8[0x6c];
  ppppuVar28 = &pppuStack_d0;
  if (ppuVar22 == (undefined **)0x0) {
LAB_10a868ebc:
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar26 = &UNK_10f67ee52;
      uVar10 = 0;
      uVar14 = 1;
      uVar15 = 0x631;
      pcVar6 = (code *)0x10a868ef0;
SUB_10ae06f08:
      *(undefined8 *****)((long)ppppuVar7 + -0x10) = ppppuVar28;
      *(code **)((long)ppppuVar7 + -8) = pcVar6;
      *(undefined *****)((long)ppppuVar7 + -0x18) = ppppuVar7;
      FUN_10ae06f30(uVar10,uVar14,&UNK_10f67ed4a,&UNK_10f67ed92,uVar15,puVar26,ppppuVar7);
      return;
    }
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_178 = SUB82(ppuVar22,0);
    uStack_176 = (undefined5)((ulong)ppuVar22 >> 0x10);
    uStack_171 = (undefined1)((ulong)ppuVar22 >> 0x38);
    if (ppuVar22 == (undefined **)0x0) goto LAB_10a868ebc;
    ppuVar22 = (undefined **)ppuVar8[0x6b];
    uStack_180 = SUB87(ppuVar22,0);
    uStack_179 = (undefined1)((ulong)ppuVar22 >> 0x38);
    if (ppuVar22 == (undefined **)0x0) goto LAB_10a868ebc;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar26 = &UNK_10f67ee2b;
      uVar10 = 1;
      uVar14 = 4;
      uVar15 = 0x62d;
      ppppuVar7 = &pppuStack_310;
      pcVar6 = (code *)0x10a868e4c;
      goto SUB_10ae06f08;
    }
    *(undefined4 *)ppuVar8[0x3d] = 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar4) {
        *plVar27 = *plVar27 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_2f8 = plVar23;
    plStack_2f0 = plVar17;
    (**(code **)*ppuVar22)(ppuVar22,&plStack_2f8);
    plVar23 = plStack_2f0;
    if (plStack_2f0 != (long *)0x0) {
      plVar17 = plStack_2f0 + 1;
      do {
        lVar25 = *plVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = lVar25 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_2f0 + 0x10))(plStack_2f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
  }
  plVar23 = (long *)CONCAT17(uStack_171,CONCAT52(uStack_176,uStack_178));
  if (plVar23 != (long *)0x0) {
    plVar17 = plVar23 + 1;
    do {
      lVar25 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar25 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  plVar23 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    plVar17 = plStack_218 + 1;
    do {
      lVar25 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar25 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  FUN_10a042634(auStack_210);
LAB_10a868f68:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    return;
  }
LAB_10a868fa0:
  ___stack_chk_fail();
LAB_10a868fa4:
  FUN_10a05bab8(&UNK_10f6347d3);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a868fb4);
  (*pcVar6)();
}



/* Entry: 10a8684b4; end: 10a8691d3;  */

/* WARNING: Possible PIC construction at 0x00010a868e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a868eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a868c94) */
/* WARNING: Removing unreachable block (ram,0x00010a868624) */
/* WARNING: Removing unreachable block (ram,0x00010a8686a4) */
/* WARNING: Removing unreachable block (ram,0x00010a868ca4) */

void FUN_10a8684b4(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined2 *puVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long **pplVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  int iVar17;
  undefined7 *puVar18;
  code **ppcVar19;
  byte bVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_250;
  ulong uStack_248;
  code **ppcStack_240;
  long *plStack_238;
  long *plStack_230;
  long lStack_228;
  long *plStack_220;
  undefined1 auStack_218 [8];
  long *plStack_210;
  undefined1 uStack_208;
  long lStack_200;
  undefined1 uStack_1f8;
  long lStack_1f0;
  undefined1 uStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d8 [8];
  long *plStack_1d0;
  undefined1 uStack_1c8;
  code **ppcStack_1c0;
  undefined2 uStack_1b8;
  undefined1 uStack_1b6;
  undefined1 uStack_1b5;
  undefined1 uStack_1b4;
  undefined2 uStack_1b3;
  undefined1 uStack_1b1;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined2 uStack_1ad;
  undefined1 uStack_1ab;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined7 *puStack_198;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined1 uStack_180;
  long *plStack_178;
  undefined1 uStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 auStack_150 [2];
  long alStack_140 [7];
  undefined8 uStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined2 uStack_b8;
  undefined5 uStack_b6;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = *(long **)(param_1 + 0x378);
  (**(code **)(*plVar7 + 0x48))();
  plVar9 = (long *)*plVar7;
  if (-1 < *(char *)((long)plVar7 + 0x17)) {
    plVar9 = plVar7;
  }
  lVar22 = (long)plVar9;
  _strlen();
  plVar7 = (long *)&UNK_110c23970;
  lVar24 = 0x30;
  do {
    if (*plVar7 == lVar22) {
      lVar8 = plVar7[-1];
      _memcmp(lVar8,plVar9,lVar22);
      if ((int)lVar8 == 0) {
        if (lVar24 != 0) {
          if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10a868f68;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_10a868fa0;
          puVar16 = &UNK_10f67ede7;
          uVar21 = 0;
          uVar14 = 1;
          uVar15 = 0x59c;
          goto SUB_10ae06f08;
        }
        break;
      }
    }
    plVar7 = plVar7 + 2;
    lVar24 = lVar24 + -0x10;
  } while (lVar24 != 0);
  plVar9 = *(long **)(param_1 + 0x378);
  (**(code **)(*plVar9 + 0x48))();
  bVar20 = *(byte *)(*(long *)(param_1 + 0x378) + 0xaa);
  lVar22 = *(long *)(param_1 + 0x378);
  lVar24 = *(long *)(lVar22 + 0x3b0);
  plVar7 = *(long **)(lVar22 + 0x3b8);
  if (plVar7 != (long *)0x0) {
    plVar25 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = *plVar25 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_160 = (long *)((ulong)plStack_160 & 0xffffffffffffff00);
  plStack_158 = (long *)0x0;
  uVar2 = plVar9[1];
  if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)plVar9 + 0x17);
  }
  lStack_228 = lVar24;
  plStack_220 = plVar7;
  if (uVar2 != 0) {
    plStack_168 = (long *)0x0;
    uStack_170 = 3;
    func_0x00010938229c();
    uStack_b0 = CONCAT17(9,(undefined7)uStack_b0);
    uStack_c0 = 0x6e6f6973736573;
    uStack_b9 = 0x49;
    uStack_b8 = 100;
    pplVar10 = &plStack_160;
    plStack_168 = plVar9;
    func_0x0001095b7584(pplVar10,&uStack_c0);
    uVar12 = *(undefined1 *)pplVar10;
    *(undefined1 *)pplVar10 = uStack_170;
    plVar9 = pplVar10[1];
    uStack_170 = uVar12;
    pplVar10[1] = plStack_168;
    plStack_168 = plVar9;
    func_0x000109380ffc(&plStack_168,uVar12);
  }
  plStack_178 = (long *)((ulong)bVar20 & 1);
  uStack_180 = 4;
  uStack_b0 = CONCAT17(0xf,(undefined7)uStack_b0);
  uStack_c0 = 0x53617461447369;
  uStack_b9 = 0x74;
  uStack_b8 = 0x6572;
  uStack_b6 = 0x676e696d61;
  uStack_b1 = 0;
  pplVar10 = &plStack_160;
  func_0x0001095b7584(pplVar10,&uStack_c0);
  uVar12 = *(undefined1 *)pplVar10;
  *(undefined1 *)pplVar10 = uStack_180;
  plVar9 = pplVar10[1];
  uStack_180 = uVar12;
  pplVar10[1] = plStack_178;
  plStack_178 = plVar9;
  func_0x000109380ffc(&plStack_178,uVar12);
  uStack_c0 = 0;
  uStack_b9 = 0;
  uStack_b8 = 0;
  uStack_b6 = 0;
  uStack_b1 = 0;
  uStack_b0 = 0;
  pcStack_100 = (code *)0x0;
  ppuStack_f8 = (undefined **)0x0;
  uStack_f0 = 0;
  if (*(char *)(lVar22 + 0x3a8) == '\x01') {
    lVar22 = *(long *)(lVar22 + 0x398);
    if (lVar22 != 0) {
      bVar20 = 5;
      uVar21 = 0x70756f7267;
LAB_10a86870c:
      uStack_c0 = (undefined7)uVar21;
      uStack_b9 = 0;
      uStack_b0 = (ulong)bVar20 << 0x38;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pcStack_100,lVar22 + 0x18);
      lVar24 = lStack_228;
      uVar2 = CONCAT17(uStack_b1,CONCAT52(uStack_b6,uStack_b8));
      if (-1 < (long)uStack_b0) {
        uVar2 = uStack_b0 >> 0x38;
      }
      if (uVar2 != 0) {
        ppuVar13 = ppuStack_f8;
        if (-1 < (long)uStack_f0) {
          ppuVar13 = (undefined **)(uStack_f0 >> 0x38);
        }
        if ((ppuVar13 == (undefined **)0x0) || (lStack_228 == 0)) {
          if (ppuVar13 == (undefined **)0x0) goto LAB_10a8689b0;
        }
        else {
          ppuVar13 = &PTR_PTR_113305e00;
          FUN_10ae079a0(0,&PTR_PTR_113305e00);
          FUN_10ae07cd4(ppuVar13,&PTR_PTR_113305e00);
        }
        auStack_190[0] = 0;
        uStack_188 = 0;
        puStack_198 = (undefined7 *)0x0;
        uStack_1a0 = 3;
        puVar18 = &uStack_c0;
        func_0x00010938229c();
        uStack_1a8._7_1_ = '\x04';
        uStack_1b8 = 0x7974;
        uStack_1b6 = 0x70;
        uStack_1b5 = 0x65;
        uStack_1b4 = 0;
        puVar11 = auStack_190;
        puStack_198 = puVar18;
        func_0x0001095b7584(puVar11,&uStack_1b8);
        uVar12 = *puVar11;
        *puVar11 = uStack_1a0;
        puVar18 = *(undefined7 **)(puVar11 + 8);
        uStack_1a0 = uVar12;
        *(undefined7 **)(puVar11 + 8) = puStack_198;
        puStack_198 = puVar18;
        if (uStack_1a8._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_1b1,
                           CONCAT25(uStack_1b3,
                                    CONCAT14(uStack_1b4,
                                             CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8)))))
                 );
          uVar12 = uStack_1a0;
        }
        func_0x000109380ffc(&puStack_198,uVar12);
        ppcStack_1c0 = (code **)0x0;
        uStack_1c8 = 3;
        ppcVar19 = &pcStack_100;
        func_0x00010938229c();
        uStack_1a8._7_1_ = '\x02';
        uStack_1b8 = 0x6469;
        uStack_1b6 = 0;
        puVar11 = auStack_190;
        ppcStack_1c0 = ppcVar19;
        func_0x0001095b7584(puVar11,&uStack_1b8);
        uVar12 = *puVar11;
        *puVar11 = uStack_1c8;
        ppcVar19 = *(code ***)(puVar11 + 8);
        uStack_1c8 = uVar12;
        *(code ***)(puVar11 + 8) = ppcStack_1c0;
        ppcStack_1c0 = ppcVar19;
        if (uStack_1a8._7_1_ < '\0') {
          __ZdlPv(CONCAT17(uStack_1b1,
                           CONCAT25(uStack_1b3,
                                    CONCAT14(uStack_1b4,
                                             CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8)))))
                 );
          uVar12 = uStack_1c8;
        }
        func_0x000109380ffc(&ppcStack_1c0,uVar12);
        func_0x000109381b20(auStack_1d8,auStack_190);
        uStack_1a8 = CONCAT17(10,(undefined7)uStack_1a8);
        uStack_1b0 = 0x6f66;
        uStack_1b8 = 0x6e69;
        uStack_1b6 = 0x76;
        uStack_1b5 = 0x69;
        uStack_1b4 = 0x74;
        uStack_1b3 = 0x4965;
        uStack_1b1 = 0x6e;
        uStack_1ae = 0;
        pplVar10 = &plStack_160;
        func_0x0001095b7584(pplVar10,&uStack_1b8);
        uVar12 = *(undefined1 *)pplVar10;
        *(undefined1 *)pplVar10 = auStack_1d8[0];
        plVar9 = pplVar10[1];
        auStack_1d8[0] = uVar12;
        pplVar10[1] = plStack_1d0;
        plStack_1d0 = plVar9;
        if ((long)uStack_1a8 < 0) {
          __ZdlPv(CONCAT17(uStack_1b1,
                           CONCAT25(uStack_1b3,
                                    CONCAT14(uStack_1b4,
                                             CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8)))))
                 );
          uVar12 = auStack_1d8[0];
        }
        func_0x000109380ffc(&plStack_1d0,uVar12);
        func_0x00010a383718(&uStack_c0,&pcStack_100);
        ppuVar13 = &PTR_PTR_113305078;
        FUN_10ae079a0();
        func_0x00010a38376c();
        FUN_10ae07cd4(ppuVar13,&PTR_PTR_113305078);
        func_0x000109380ffc(&uStack_188,auStack_190[0]);
      }
    }
  }
  else {
    if (*(char *)(lVar22 + 0x3a8) != '\0') goto LAB_10a868fa4;
    lVar22 = *(long *)(lVar22 + 0x398);
    if (lVar22 != 0) {
      bVar20 = 6;
      uVar21 = 0x646e65697266;
      goto LAB_10a86870c;
    }
  }
LAB_10a8689b0:
  if (lVar24 != 0) {
    auStack_190[0] = 0;
    uStack_188 = 0;
    lStack_1e0 = (long)*(int *)(lVar24 + 0x18);
    uStack_1e8 = 5;
    uStack_1a8._7_1_ = '\n';
    uStack_1b0 = 0x7372;
    uStack_1b8 = 0x696d;
    uStack_1b6 = 0x6e;
    uStack_1b5 = 0x50;
    uStack_1b4 = 0x6c;
    uStack_1b3 = 0x7961;
    uStack_1b1 = 0x65;
    uStack_1ae = 0;
    puVar11 = auStack_190;
    func_0x0001095b7584(puVar11,&uStack_1b8);
    uVar12 = *puVar11;
    *puVar11 = uStack_1e8;
    lVar22 = *(long *)(puVar11 + 8);
    uStack_1e8 = uVar12;
    *(long *)(puVar11 + 8) = lStack_1e0;
    lStack_1e0 = lVar22;
    if (uStack_1a8._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_1b1,
                       CONCAT25(uStack_1b3,
                                CONCAT14(uStack_1b4,
                                         CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8))))));
      uVar12 = uStack_1e8;
    }
    func_0x000109380ffc(&lStack_1e0,uVar12);
    lStack_1f0 = (long)*(int *)(lVar24 + 0x1c);
    uStack_1f8 = 5;
    uStack_1a8._7_1_ = '\n';
    uStack_1b0 = 0x7372;
    uStack_1b8 = 0x616d;
    uStack_1b6 = 0x78;
    uStack_1b5 = 0x50;
    uStack_1b4 = 0x6c;
    uStack_1b3 = 0x7961;
    uStack_1b1 = 0x65;
    uStack_1ae = 0;
    puVar11 = auStack_190;
    func_0x0001095b7584(puVar11,&uStack_1b8);
    uVar12 = *puVar11;
    *puVar11 = uStack_1f8;
    lVar22 = *(long *)(puVar11 + 8);
    uStack_1f8 = uVar12;
    *(long *)(puVar11 + 8) = lStack_1f0;
    lStack_1f0 = lVar22;
    if (uStack_1a8._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_1b1,
                       CONCAT25(uStack_1b3,
                                CONCAT14(uStack_1b4,
                                         CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8))))));
      uVar12 = uStack_1f8;
    }
    func_0x000109380ffc(&lStack_1f0,uVar12);
    iVar17 = *(int *)(lVar24 + 0x18);
    if ((*(ulong *)(lVar24 + 0x20) & 0x100000000) != 0) {
      iVar17 = (int)*(ulong *)(lVar24 + 0x20);
    }
    lStack_200 = (long)iVar17;
    uStack_208 = 5;
    uStack_1a8._7_1_ = '\r';
    uStack_1b8 = 0x6174;
    uStack_1b6 = 0x72;
    uStack_1b5 = 0x67;
    uStack_1b4 = 0x65;
    uStack_1b3 = 0x5074;
    uStack_1b1 = 0x6c;
    uStack_1b0 = 0x7961;
    uStack_1ae = 0x65;
    uStack_1ad = 0x7372;
    uStack_1ab = 0;
    puVar11 = auStack_190;
    func_0x0001095b7584(puVar11,&uStack_1b8);
    uVar12 = *puVar11;
    *puVar11 = uStack_208;
    lVar22 = *(long *)(puVar11 + 8);
    uStack_208 = uVar12;
    *(long *)(puVar11 + 8) = lStack_200;
    lStack_200 = lVar22;
    if (uStack_1a8._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_1b1,
                       CONCAT25(uStack_1b3,
                                CONCAT14(uStack_1b4,
                                         CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8))))));
      uVar12 = uStack_208;
    }
    func_0x000109380ffc(&lStack_200,uVar12);
    func_0x000109381b20(auStack_218,auStack_190);
    uStack_1a8 = CONCAT17(0xf,(undefined7)uStack_1a8);
    uStack_1b8 = 0x616d;
    uStack_1b6 = 0x74;
    uStack_1b5 = 99;
    uStack_1b4 = 0x68;
    uStack_1b3 = 0x616d;
    uStack_1b1 = 0x6b;
    uStack_1b0 = 0x6e69;
    uStack_1ae = 0x67;
    uStack_1ad = 0x6e49;
    uStack_1ab = 0x66;
    uStack_1aa = 0x6f;
    uStack_1a9 = 0;
    pplVar10 = &plStack_160;
    func_0x0001095b7584(pplVar10,&uStack_1b8);
    uVar12 = *(undefined1 *)pplVar10;
    *(undefined1 *)pplVar10 = auStack_218[0];
    plVar9 = pplVar10[1];
    auStack_218[0] = uVar12;
    pplVar10[1] = plStack_210;
    plStack_210 = plVar9;
    if ((long)uStack_1a8 < 0) {
      __ZdlPv(CONCAT17(uStack_1b1,
                       CONCAT25(uStack_1b3,
                                CONCAT14(uStack_1b4,
                                         CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8))))));
      uVar12 = auStack_218[0];
    }
    func_0x000109380ffc(&plStack_210,uVar12);
    func_0x00010ae02ecc(0,*(undefined4 *)(lVar24 + 0x18));
    func_0x00010ae02ecc();
    func_0x00010ae02ecc();
    ppuVar13 = &PTR_PTR_113305e70;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar13,&PTR_PTR_113305e70);
    func_0x000109380ffc(&uStack_188,auStack_190[0]);
  }
  FUN_10a0c32e4(&uStack_1b8,&plStack_160,0xffffffff,0x20,0,1);
  uVar2 = CONCAT17(uStack_1a9,
                   CONCAT16(uStack_1aa,
                            CONCAT15(uStack_1ab,CONCAT23(uStack_1ad,CONCAT12(uStack_1ae,uStack_1b0))
                                    )));
  puVar5 = (undefined2 *)
           CONCAT17(uStack_1b1,
                    CONCAT25(uStack_1b3,
                             CONCAT14(uStack_1b4,
                                      CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8)))));
  if (-1 < (long)uStack_1a8) {
    uVar2 = uStack_1a8 >> 0x38;
    puVar5 = &uStack_1b8;
  }
  FUN_10a3bf330(auStack_150,puVar5,uVar2);
  if ((long)uStack_1a8 < 0) {
    __ZdlPv(CONCAT17(uStack_1b1,
                     CONCAT25(uStack_1b3,
                              CONCAT14(uStack_1b4,
                                       CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8))))));
  }
  func_0x000109380ffc(&plStack_158,(ulong)plStack_160 & 0xff);
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      lVar24 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar24 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10a8691d4(&uStack_1b8,*(undefined8 *)(param_1 + 0x388),param_1);
  plVar7 = (long *)0x138;
  __Znwm();
  uVar21 = auStack_150[0];
  plVar25 = plVar7 + 1;
  *plVar25 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110b9f3b0;
  plVar9 = plVar7 + 3;
  auStack_150[0] = 0;
  uStack_c0 = (undefined7)uVar21;
  uStack_b9 = (undefined1)((ulong)uVar21 >> 0x38);
  uStack_b8 = (undefined2)auStack_150[1];
  uStack_b6 = (undefined5)((ulong)auStack_150[1] >> 0x10);
  uStack_b1 = (undefined1)((ulong)auStack_150[1] >> 0x38);
  (**(code **)(alStack_140[0] + 0x10))(&uStack_b0,alStack_140);
  uStack_78 = uStack_108;
  uStack_248 = *(ulong *)(param_1 + 0x208);
  lStack_250 = *(long *)(param_1 + 0x200);
  if (-1 < (char)*(byte *)(param_1 + 0x217)) {
    uStack_248 = (ulong)*(byte *)(param_1 + 0x217);
    lStack_250 = param_1 + 0x200;
  }
  ppcStack_240 = &pcStack_100;
  pcStack_100 = FUN_10a8a082c;
  ppuStack_f8 = &PTR_FUN_110c24de8;
  uStack_f0 = CONCAT17(uStack_1b1,
                       CONCAT25(uStack_1b3,
                                CONCAT14(uStack_1b4,
                                         CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8)))));
  uStack_e8 = CONCAT17(uStack_1a9,
                       CONCAT16(uStack_1aa,
                                CONCAT15(uStack_1ab,
                                         CONCAT23(uStack_1ad,CONCAT12(uStack_1ae,uStack_1b0)))));
  uStack_e0 = uStack_1a8;
  uStack_1b0 = 0;
  uStack_1ae = 0;
  uStack_1ad = 0;
  uStack_1ab = 0;
  uStack_1aa = 0;
  uStack_1a9 = 0;
  uStack_1a8 = 0;
  FUN_10a23708c(plVar9,&UNK_10e4df438,0x2a,&UNK_10f647b49,4,&uStack_c0,1);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  FUN_10a042634(&uStack_c0);
  plStack_160 = plVar9;
  plStack_158 = plVar7;
  FUN_10a86927c(&uStack_1b8);
  uStack_c0 = 0;
  uStack_b9 = 0;
  uStack_b8 = 0;
  uStack_b6 = 0;
  uStack_b1 = 0;
  lVar24 = *(long *)(param_1 + 0x360);
  unaff_x29 = puVar1;
  if (lVar24 == 0) {
LAB_10a868ebc:
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar16 = &UNK_10f67ee52;
      uVar21 = 0;
      uVar14 = 1;
      uVar15 = 0x631;
      unaff_x30 = 0x10a868ef0;
      register0x00000008 = (BADSPACEBASE *)&lStack_250;
SUB_10ae06f08:
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      *(BADSPACEBASE **)((long)register0x00000008 + -0x18) = register0x00000008;
      FUN_10ae06f30(uVar21,uVar14,&UNK_10f67ed4a,&UNK_10f67ed92,uVar15,puVar16,register0x00000008);
      return;
    }
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_b8 = (undefined2)lVar24;
    uStack_b6 = (undefined5)((ulong)lVar24 >> 0x10);
    uStack_b1 = (undefined1)((ulong)lVar24 >> 0x38);
    if (lVar24 == 0) goto LAB_10a868ebc;
    puVar23 = *(undefined8 **)(param_1 + 0x358);
    uStack_c0 = SUB87(puVar23,0);
    uStack_b9 = (undefined1)((ulong)puVar23 >> 0x38);
    if (puVar23 == (undefined8 *)0x0) goto LAB_10a868ebc;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar16 = &UNK_10f67ee2b;
      uVar21 = 1;
      uVar14 = 4;
      uVar15 = 0x62d;
      unaff_x30 = 0x10a868e4c;
      register0x00000008 = (BADSPACEBASE *)&lStack_250;
      goto SUB_10ae06f08;
    }
    **(undefined4 **)(param_1 + 0x1e8) = 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = *plVar25 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_238 = plVar9;
    plStack_230 = plVar7;
    (**(code **)*puVar23)(puVar23,&plStack_238);
    plVar9 = plStack_230;
    if (plStack_230 != (long *)0x0) {
      plVar7 = plStack_230 + 1;
      do {
        lVar24 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_230 + 0x10))(plStack_230);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  plVar9 = (long *)CONCAT17(uStack_b1,CONCAT52(uStack_b6,uStack_b8));
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9 + 1;
    do {
      lVar24 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar24 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar7 = plStack_158 + 1;
    do {
      lVar24 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar24 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  FUN_10a042634(auStack_150);
LAB_10a868f68:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
LAB_10a868fa0:
  ___stack_chk_fail();
LAB_10a868fa4:
  FUN_10a05bab8(&UNK_10f6347d3);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a868fb4);
  (*pcVar6)();
}



/* Entry: 10a8691d4; end: 10a86927b;  */

void FUN_10a8691d4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_DAT_110c24108;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a86927c; end: 10a8692fb;  */

undefined8 * FUN_10a86927c(undefined8 *param_1)

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



/* Entry: 10a8692fc; end: 10a8693c7;  */

void FUN_10a8692fc(long param_1,undefined **param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_118;
  long *plStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long lStack_c8;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (**(int **)(param_1 + 0x1e8) != 4) {
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    puStack_68 = &UNK_1053a6a3c;
    ppuStack_60 = &PTR_DAT_110ae9180;
    param_2 = &puStack_68;
    FUN_10a8693c8();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    FUN_10a8684b4();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x2b8) == '\x01') {
LAB_10a869660:
    if (param_2[1][8] == '\x01') {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
                    /* WARNING: Could not recover jumptable at 0x00010a8696a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_2)(param_2);
        return;
      }
    }
    else {
LAB_10a8696ac:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
        return;
      }
    }
    ___stack_chk_fail();
  }
  else {
    if ((*(long *)(param_1 + 0x350) == 0) ||
       (plVar10 = *(long **)(*(long *)(param_1 + 0x350) + 0xaa0), plVar10 == (long *)0x0)) {
      ppuVar8 = &PTR_PTR_113303cb8;
      FUN_10ae079a0(0,&PTR_PTR_113303cb8);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_113303cb8);
      goto LAB_10a869660;
    }
    plVar4 = (long *)0x58;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_110c25008;
    plVar6 = plVar4 + 3;
    *plVar6 = (long)*param_2;
    (**(code **)(param_2[1] + 0x10))(plVar4 + 4,param_2 + 1);
    plStack_118 = plVar6;
    plStack_110 = plVar4;
    FUN_10a8a41a8(&uStack_140,param_1 + 0x18);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar10 + 9;
    plStack_130 = plVar6;
    plStack_128 = plVar4;
    FUN_10a1cda24(plVar5,&PTR_DAT_110c23a30);
    if (plVar5 == (long *)0x0) {
      puVar7 = &UNK_10f64981f;
      goto LAB_10a8696f8;
    }
    pcStack_108 = (code *)&DAT_10f648b9d;
    ppuStack_100 = (undefined **)0xb;
    FUN_10a2677b4(plVar10[0x11],&pcStack_108);
    plVar4 = (long *)plVar5[4];
    if ((plVar4 != (long *)0x0) &&
       (plVar6 = plVar4, ___dynamic_cast(plVar4,&PTR_DAT_110bbadc8,&PTR_DAT_110bbade0,0),
       plVar6 != (long *)0x0)) {
      pcStack_108 = FUN_10a8a6d38;
      ppuStack_100 = &PTR_FUN_110c25078;
      plStack_f0 = plStack_138;
      uStack_f8 = uStack_140;
      if (plStack_138 != (long *)0x0) {
        plVar6 = plStack_138 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_e0 = plStack_128;
      plStack_e8 = plStack_130;
      if (plStack_128 != (long *)0x0) {
        plVar6 = plStack_128 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a2a6cbc();
      (*(code *)*ppuStack_100)(&ppuStack_100);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar4 = (long *)plVar5[4];
      (**(code **)(*plVar4 + 0x18))();
      if ((int)plVar4 != 0) {
        (**(code **)(*(long *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) + 0x28))
                  ((long)plVar10 + *(long *)(*plVar10 + -0x18));
      }
      plVar10 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar4 = plStack_128 + 1;
        do {
          lVar9 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (plStack_138 != (long *)0x0) {
        plVar10 = plStack_138 + 1;
        do {
          lVar9 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_138);
        }
      }
      plVar10 = plStack_110;
      if (plStack_110 != (long *)0x0) {
        plVar4 = plStack_110 + 1;
        do {
          lVar9 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_110 + 0x10))(plStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      goto LAB_10a8696ac;
    }
  }
  puVar7 = &UNK_10f64983a;
LAB_10a8696f8:
  FUN_10a00946c(puVar7);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a869700);
  (*pcVar3)();
}



/* Entry: 10a8693c8; end: 10a869743;  */

void FUN_10a8693c8(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_a8;
  long *plStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x2b8) == '\x01') {
LAB_10a869660:
    if (*(char *)(param_2[1] + 8) == '\x01') {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010a8696a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_2)(param_2);
        return;
      }
    }
    else {
LAB_10a8696ac:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
    }
    ___stack_chk_fail();
  }
  else {
    if ((*(long *)(param_1 + 0x350) == 0) ||
       (plVar10 = *(long **)(*(long *)(param_1 + 0x350) + 0xaa0), plVar10 == (long *)0x0)) {
      ppuVar8 = &PTR_PTR_113303cb8;
      FUN_10ae079a0(0,&PTR_PTR_113303cb8);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_113303cb8);
      goto LAB_10a869660;
    }
    plVar4 = (long *)0x58;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_110c25008;
    plVar6 = plVar4 + 3;
    *plVar6 = *param_2;
    (**(code **)(param_2[1] + 0x10))(plVar4 + 4,param_2 + 1);
    plStack_a8 = plVar6;
    plStack_a0 = plVar4;
    FUN_10a8a41a8(&uStack_d0,param_1 + 0x18);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar10 + 9;
    plStack_c0 = plVar6;
    plStack_b8 = plVar4;
    FUN_10a1cda24(plVar5,&PTR_DAT_110c23a30);
    if (plVar5 == (long *)0x0) {
      puVar7 = &UNK_10f64981f;
      goto LAB_10a8696f8;
    }
    pcStack_98 = (code *)&DAT_10f648b9d;
    ppuStack_90 = (undefined **)0xb;
    FUN_10a2677b4(plVar10[0x11],&pcStack_98);
    plVar4 = (long *)plVar5[4];
    if ((plVar4 != (long *)0x0) &&
       (plVar6 = plVar4, ___dynamic_cast(plVar4,&PTR_DAT_110bbadc8,&PTR_DAT_110bbade0,0),
       plVar6 != (long *)0x0)) {
      pcStack_98 = FUN_10a8a6d38;
      ppuStack_90 = &PTR_FUN_110c25078;
      plStack_80 = plStack_c8;
      uStack_88 = uStack_d0;
      if (plStack_c8 != (long *)0x0) {
        plVar6 = plStack_c8 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_70 = plStack_b8;
      plStack_78 = plStack_c0;
      if (plStack_b8 != (long *)0x0) {
        plVar6 = plStack_b8 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a2a6cbc();
      (*(code *)*ppuStack_90)(&ppuStack_90);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar4 = (long *)plVar5[4];
      (**(code **)(*plVar4 + 0x18))();
      if ((int)plVar4 != 0) {
        (**(code **)(*(long *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) + 0x28))
                  ((long)plVar10 + *(long *)(*plVar10 + -0x18));
      }
      plVar10 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar4 = plStack_b8 + 1;
        do {
          lVar9 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (plStack_c8 != (long *)0x0) {
        plVar10 = plStack_c8 + 1;
        do {
          lVar9 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
        }
      }
      plVar10 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar4 = plStack_a0 + 1;
        do {
          lVar9 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      goto LAB_10a8696ac;
    }
  }
  puVar7 = &UNK_10f64983a;
LAB_10a8696f8:
  FUN_10a00946c(puVar7);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a869700);
  (*pcVar3)();
}



/* Entry: 10a869744; end: 10a869c2f;  */

/* WARNING: Removing unreachable block (ram,0x00010a86a1f4) */
/* WARNING: Removing unreachable block (ram,0x00010a86a100) */
/* WARNING: Removing unreachable block (ram,0x00010a869ff0) */
/* WARNING: Removing unreachable block (ram,0x00010a869888) */
/* WARNING: Removing unreachable block (ram,0x00010a869800) */
/* WARNING: Removing unreachable block (ram,0x00010a8698e4) */
/* WARNING: Removing unreachable block (ram,0x00010a86a07c) */
/* WARNING: Removing unreachable block (ram,0x00010a86a17c) */
/* WARNING: Removing unreachable block (ram,0x00010a86a250) */
/* WARNING: Removing unreachable block (ram,0x00010a869dcc) */

undefined8 ** FUN_10a869744(long param_1,code *param_2)

{
  code *pcVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined5 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  code **ppcVar10;
  code *pcVar11;
  undefined8 **ppuVar12;
  long *plVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 **ppuVar17;
  code *pcVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  undefined8 ***pppuVar24;
  long *plVar25;
  code *pcVar26;
  undefined8 **ppuVar27;
  undefined8 *puVar28;
  long *plVar29;
  code *pcStack_440;
  code *pcStack_438;
  undefined1 uStack_430;
  undefined7 uStack_42f;
  undefined8 **ppuStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  code *pcStack_410;
  undefined1 uStack_408;
  code *pcStack_400;
  undefined1 uStack_3f8;
  code *pcStack_3f0;
  code *pcStack_3e8;
  code *pcStack_3e0;
  undefined8 auStack_3d8 [2];
  long alStack_3c8 [7];
  long *plStack_390;
  undefined8 **ppuStack_388;
  code *pcStack_380;
  undefined8 *apuStack_378 [7];
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined8 *puStack_310;
  long *plStack_300;
  undefined5 uStack_2f8;
  undefined2 uStack_2f3;
  undefined1 uStack_2f1;
  undefined2 uStack_2f0;
  undefined2 uStack_2ee;
  undefined1 uStack_2ec;
  undefined1 uStack_2eb;
  undefined1 uStack_2ea;
  undefined1 uStack_2e9;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  long *plStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  long lStack_2c0;
  code *pcStack_2b8;
  long *plStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 **ppuStack_228;
  undefined8 **ppuStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 **ppuStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined8 **ppuStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  long lStack_1a8;
  code **ppcStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  undefined8 **ppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long lStack_170;
  ulong uStack_168;
  code **ppcStack_160;
  code *pcStack_158;
  code *pcStack_150;
  undefined1 uStack_148;
  code *pcStack_140;
  code *pcStack_138;
  code *pcStack_130;
  undefined8 *apuStack_128 [2];
  long alStack_118 [7];
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined2 uStack_8a;
  undefined1 auStack_88 [7];
  byte bStack_81;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x250);
  lVar22 = *(long *)(param_1 + 0x378);
  pcStack_d8 = (code *)((ulong)pcStack_d8 & 0xffffffffffffff00);
  ppuStack_d0 = (undefined **)0x0;
  pcStack_130 = (code *)0x0;
  pcStack_138._0_1_ = 3;
  func_0x00010938229c();
  bStack_81 = 0xd;
  uStack_98 = 0x6e49707061;
  uStack_93 = 0x617473;
  uStack_90 = 0x4965636e;
  uStack_8c = 100;
  uStack_8b = 0;
  ppcVar10 = &pcStack_d8;
  pcStack_130 = param_2;
  func_0x0001095b7584(ppcVar10,&uStack_98);
  uVar5 = *(undefined1 *)ppcVar10;
  *(undefined1 *)ppcVar10 = 3;
  pcStack_138 = (code *)CONCAT71(pcStack_138._1_7_,uVar5);
  pcVar18 = ppcVar10[1];
  ppcVar10[1] = pcStack_130;
  pcStack_130 = pcVar18;
  func_0x000109380ffc(&pcStack_130,uVar5);
  pcStack_140 = (code *)0x0;
  uStack_148 = 3;
  pcVar18 = (code *)(lVar22 + 0x30);
  func_0x00010938229c();
  bStack_81 = 0xc;
  uStack_90 = 0x64496563;
  uStack_98 = 0x7265707865;
  uStack_93 = 0x6e6569;
  uStack_8c = 0;
  ppcVar10 = &pcStack_d8;
  pcStack_140 = pcVar18;
  func_0x0001095b7584(ppcVar10,&uStack_98);
  uVar5 = *(undefined1 *)ppcVar10;
  *(undefined1 *)ppcVar10 = 3;
  pcVar18 = ppcVar10[1];
  uStack_148 = uVar5;
  ppcVar10[1] = pcStack_140;
  pcStack_140 = pcVar18;
  func_0x000109380ffc(&pcStack_140,uVar5);
  FUN_10a0c32e4(&uStack_98,&pcStack_d8,0xffffffff,0x20,0,1);
  uVar2 = CONCAT26(uStack_8a,CONCAT15(uStack_8b,CONCAT14(uStack_8c,uStack_90)));
  puVar7 = (undefined5 *)CONCAT35(uStack_93,uStack_98);
  if (-1 < (char)bStack_81) {
    uVar2 = (ulong)bStack_81;
    puVar7 = &uStack_98;
  }
  FUN_10a3bf330(apuStack_128,puVar7,uVar2);
  func_0x000109380ffc(&ppuStack_d0,(ulong)pcStack_d8 & 0xff);
  pcVar11 = (code *)0x138;
  __Znwm();
  puVar20 = apuStack_128[0];
  pppuVar24 = (undefined8 ***)(pcVar11 + 8);
  *pppuVar24 = (undefined8 **)0x0;
  *(long *)(pcVar11 + 0x10) = 0;
  *(undefined ***)pcVar11 = &PTR_FUN_110b9f3b0;
  pcVar18 = pcVar11 + 0x18;
  apuStack_128[0] = (undefined8 *)0x0;
  uStack_98 = SUB85(puVar20,0);
  uStack_93 = (undefined3)((ulong)puVar20 >> 0x28);
  uStack_90 = SUB84(apuStack_128[1],0);
  uStack_8c = (undefined1)((ulong)apuStack_128[1] >> 0x20);
  uStack_8b = (undefined1)((ulong)apuStack_128[1] >> 0x28);
  uStack_8a = (undefined2)((ulong)apuStack_128[1] >> 0x30);
  (**(code **)(alStack_118[0] + 0x10))(auStack_88,alStack_118);
  uStack_50 = uStack_e0;
  uStack_168 = *(ulong *)(param_1 + 0x208);
  lStack_170 = *(long *)(param_1 + 0x200);
  if (-1 < (char)*(byte *)(param_1 + 0x217)) {
    uStack_168 = (ulong)*(byte *)(param_1 + 0x217);
    lStack_170 = param_1 + 0x200;
  }
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  ppcVar10 = &pcStack_d8;
  pcStack_d8 = FUN_10a282dc4;
  ppuStack_d0 = &PTR_DAT_110ae9180;
  ppcStack_160 = ppcVar10;
  FUN_10a23708c(pcVar18,&UNK_10e4df463,0x28,&UNK_10f647b49,4,&uStack_98,1);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  FUN_10a042634(&uStack_98);
  uStack_98 = 0;
  uStack_93 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_8b = 0;
  uStack_8a = 0;
  lVar22 = *(long *)(param_1 + 0x360);
  pcStack_138 = pcVar18;
  pcStack_130 = pcVar11;
  if (lVar22 == 0) {
LAB_10a869a8c:
    ppuVar16 = &PTR_PTR_113305bf8;
    ppuVar15 = ppuVar16;
    FUN_10ae079a0(0,&PTR_PTR_113305bf8);
    FUN_10ae07cd4(ppuVar15);
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_90 = (undefined4)lVar22;
    uStack_8c = (undefined1)((ulong)lVar22 >> 0x20);
    uStack_8b = (undefined1)((ulong)lVar22 >> 0x28);
    uStack_8a = (undefined2)((ulong)lVar22 >> 0x30);
    if (lVar22 == 0) goto LAB_10a869a8c;
    puVar20 = *(undefined8 **)(param_1 + 0x358);
    uStack_98 = SUB85(puVar20,0);
    uStack_93 = (undefined3)((ulong)puVar20 >> 0x28);
    if (puVar20 == (undefined8 *)0x0) goto LAB_10a869a8c;
    ppuVar16 = &PTR_PTR_113304660;
    FUN_10ae079a0(0,&PTR_PTR_113304660);
    FUN_10ae07cd4(ppuVar16,&PTR_PTR_113304660);
    do {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppuVar24,0x10);
      if (bVar9) {
        *pppuVar24 = (undefined8 **)((long)*pppuVar24 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    ppuVar16 = &pcStack_158;
    pcStack_158 = pcVar18;
    pcStack_150 = pcVar11;
    (**(code **)*puVar20)(puVar20);
    pcVar26 = pcStack_150;
    ppcVar10 = (code **)&PTR_PTR_113304660;
    if (pcStack_150 != (code *)0x0) {
      pcVar1 = pcStack_150 + 8;
      do {
        lVar22 = *(long *)pcVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar9) {
          *(long *)pcVar1 = lVar22 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*(long *)pcStack_150 + 0x10))(pcStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar26);
        ppcVar10 = (code **)&PTR_PTR_113304660;
      }
    }
  }
  plVar23 = (long *)CONCAT26(uStack_8a,CONCAT15(uStack_8b,CONCAT14(uStack_8c,uStack_90)));
  if (plVar23 != (long *)0x0) {
    plVar13 = plVar23 + 1;
    do {
      lVar22 = *plVar13;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *plVar13 = lVar22 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pcVar26 = pcStack_130;
  if (pcStack_130 != (code *)0x0) {
    pcVar1 = pcStack_130 + 8;
    do {
      lVar22 = *(long *)pcVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar9) {
        *(long *)pcVar1 = lVar22 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*(long *)pcStack_130 + 0x10))(pcStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar26);
    }
  }
  ppuVar27 = apuStack_128;
  FUN_10a042634();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar27;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&pcStack_158);
  func_0x00010a05a8c4(&uStack_98);
  FUN_10a05bd88(&pcStack_138);
  FUN_10a042634(apuStack_128);
  ppuVar12 = ppuVar27;
  __Unwind_Resume();
  pcStack_178 = FUN_10a869c30;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_1a0 = ppcVar10;
  pcStack_198 = pcVar18;
  pcStack_190 = pcVar11;
  ppuStack_188 = ppuVar27;
  puStack_180 = &stack0xfffffffffffffff0;
  if (*(int *)ppuVar12[0x3d] != 4) {
    ppuVar27 = (undefined8 **)ppuVar12[4];
    puVar20 = ppuVar12[3];
    if (ppuVar27 != (undefined8 **)0x0) {
      ppuVar17 = ppuVar27 + 2;
      do {
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar9) {
          *ppuVar17 = (undefined8 *)((long)*ppuVar17 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar19 = ppuVar12[0x6f];
    if (*(char *)((long)puVar19 + 0x5f) < '\0') {
      func_0x000107c3192c(&ppuStack_200,puVar19[9],puVar19[10]);
    }
    else {
      uStack_1f8 = puVar19[10];
      ppuStack_200 = (undefined8 **)puVar19[9];
      uStack_1f0 = puVar19[0xb];
    }
    uVar2 = uStack_1f8;
    if (-1 < (long)uStack_1f0) {
      uVar2 = uStack_1f0 >> 0x38;
    }
    if (uVar2 == 0) {
      ppuVar16 = &PTR_PTR_1133034d8;
      FUN_10ae079a0(0,&PTR_PTR_1133034d8);
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_1133034d8);
      pcStack_1e8 = (code *)CONCAT44(pcStack_1e8._4_4_,1);
      ppuStack_1e0 = (undefined **)&UNK_10f67eeab;
      ppuVar16 = &pcStack_1e8;
      FUN_10a865734();
    }
    else {
      if (ppuVar27 != (undefined8 **)0x0) {
        ppuVar17 = ppuVar27 + 2;
        do {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
          if (bVar9) {
            *ppuVar17 = (undefined8 *)((long)*ppuVar17 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if ((long)uStack_1f0 < 0) {
        func_0x000107c3192c(&ppuStack_220,ppuStack_200);
      }
      else {
        uStack_218 = uStack_1f8;
        ppuStack_220 = ppuStack_200;
        uStack_210 = uStack_1f0;
      }
      pcStack_1e8 = FUN_10a8a1d04;
      ppuStack_1e0 = &PTR_FUN_110c24e30;
      ppuStack_228 = (undefined8 **)0x0;
      uStack_1c0 = uStack_218;
      ppuStack_1c8 = ppuStack_220;
      uStack_1b8 = uStack_210;
      ppuStack_220 = (undefined8 **)0x0;
      uStack_218 = 0;
      uStack_210 = 0;
      ppuVar16 = &pcStack_1e8;
      puStack_1d8 = puVar20;
      ppuStack_1d0 = ppuVar27;
      FUN_10a869e80(ppuVar12);
      (*(code *)*ppuStack_1e0)(&ppuStack_1e0);
      ppuVar12 = ppuStack_228;
      if ((long)uStack_210 < 0) {
        __ZdlPv(ppuStack_220);
      }
    }
    if ((long)uStack_1f0 < 0) {
      ppuVar12 = ppuStack_200;
      __ZdlPv();
    }
    if (ppuVar27 != (undefined8 **)0x0) {
      ppuVar12 = ppuVar27;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  if (ppuStack_228 != (undefined8 **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if ((long)uStack_1f0 < 0) {
    __ZdlPv(ppuStack_200);
  }
  if (ppuVar27 != (undefined8 **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar27);
  }
  __Unwind_Resume();
  puStack_2a8 = *(undefined8 **)PTR____stack_chk_guard_11034bdc0;
  cVar6 = *(char *)((long)ppuVar12[0x6f] + 0x77);
  if (cVar6 < '\0') {
    if (ppuVar12[0x6f][0xd] == 0) goto LAB_10a869f10;
  }
  else if (cVar6 == '\0') {
LAB_10a869f10:
    ppuVar27 = ppuVar12;
    __ZNSt3__16chrono12steady_clock3nowEv();
    pcStack_380 = (code *)*ppuVar16;
    pppuVar24 = &ppuStack_388;
    ppuStack_388 = ppuVar12;
    (**(code **)(ppuVar16[1] + 0x10))(apuStack_378,ppuVar16 + 1);
    pcVar11 = (code *)ppuVar12[0x6f];
    pcVar18 = pcVar11 + 0x30;
    ppuStack_340 = ppuVar27;
    (**(code **)(*(long *)pcVar11 + 0x48))();
    bVar3 = *(byte *)((long)ppuVar12[0x6f] + 0xa9);
    bVar4 = *(byte *)((long)ppuVar12[0x6f] + 0xaa);
    pcStack_338 = (code *)((ulong)pcStack_338 & 0xffffffffffffff00);
    ppuStack_330 = (undefined **)0x0;
    ppuStack_428 = (undefined8 **)0x0;
    uStack_430 = 3;
    ppuVar27 = ppuVar12 + 0x4a;
    func_0x00010938229c();
    uStack_2e8 = (long *)CONCAT17(0xd,(undefined7)uStack_2e8);
    uStack_2f8 = 0x6e49707061;
    uStack_2f3 = 0x7473;
    uStack_2f1 = 0x61;
    uStack_2f0 = 0x636e;
    uStack_2ee = 0x4965;
    uStack_2ec = 100;
    uStack_2eb = 0;
    ppcVar10 = &pcStack_338;
    ppuStack_428 = ppuVar27;
    func_0x0001095b7584(ppcVar10,&uStack_2f8);
    uVar5 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = uStack_430;
    ppuVar27 = (undefined8 **)ppcVar10[1];
    uStack_430 = uVar5;
    ppcVar10[1] = (code *)ppuStack_428;
    ppuStack_428 = ppuVar27;
    func_0x000109380ffc(&ppuStack_428,uVar5);
    pcStack_3e0 = (code *)0x0;
    pcStack_3e8._0_1_ = 3;
    func_0x00010938229c();
    uStack_2e8 = (long *)CONCAT17(0xc,(undefined7)uStack_2e8);
    uStack_2f0 = 0x6563;
    uStack_2ee = 0x6449;
    uStack_2f8 = 0x7265707865;
    uStack_2f3 = 0x6569;
    uStack_2f1 = 0x6e;
    uStack_2ec = 0;
    ppcVar10 = &pcStack_338;
    pcStack_3e0 = pcVar18;
    func_0x0001095b7584(ppcVar10,&uStack_2f8);
    uVar5 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = pcStack_3e8._0_1_;
    pcStack_3e8 = (code *)CONCAT71(pcStack_3e8._1_7_,uVar5);
    pcVar18 = ppcVar10[1];
    ppcVar10[1] = pcStack_3e0;
    pcStack_3e0 = pcVar18;
    func_0x000109380ffc(&pcStack_3e0,uVar5);
    pcStack_3f0 = (code *)0x0;
    uStack_3f8 = 3;
    func_0x00010938229c();
    uStack_2e8 = (long *)CONCAT17(9,(undefined7)uStack_2e8);
    uStack_2f8 = 0x6973736573;
    uStack_2f3 = 0x6e6f;
    uStack_2f1 = 0x49;
    uStack_2f0 = 100;
    ppcVar10 = &pcStack_338;
    pcStack_3f0 = pcVar11;
    func_0x0001095b7584(ppcVar10,&uStack_2f8);
    uVar5 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = 3;
    pcVar18 = ppcVar10[1];
    uStack_3f8 = uVar5;
    ppcVar10[1] = pcStack_3f0;
    pcStack_3f0 = pcVar18;
    func_0x000109380ffc(&pcStack_3f0,uVar5);
    pcStack_400 = (code *)((ulong)bVar3 & 1);
    uStack_408 = 4;
    uStack_2e8 = (long *)CONCAT17(0xd,(undefined7)uStack_2e8);
    uStack_2f8 = 0x7365547369;
    uStack_2f3 = 0x6974;
    uStack_2f1 = 0x6e;
    uStack_2f0 = 0x4d67;
    uStack_2ee = 0x646f;
    uStack_2ec = 0x65;
    uStack_2eb = 0;
    ppcVar10 = &pcStack_338;
    func_0x0001095b7584(ppcVar10,&uStack_2f8);
    uVar5 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = 4;
    pcVar18 = ppcVar10[1];
    uStack_408 = uVar5;
    ppcVar10[1] = pcStack_400;
    pcStack_400 = pcVar18;
    func_0x000109380ffc(&pcStack_400,uVar5);
    pcStack_410 = (code *)((ulong)bVar4 & 1);
    uStack_418 = 4;
    uStack_2e8 = (long *)CONCAT17(0xf,(undefined7)uStack_2e8);
    uStack_2f8 = 0x7461447369;
    uStack_2f3 = 0x5361;
    uStack_2f1 = 0x74;
    uStack_2f0 = 0x6572;
    uStack_2ee = 0x6d61;
    uStack_2ec = 0x69;
    uStack_2eb = 0x6e;
    uStack_2ea = 0x67;
    uStack_2e9 = 0;
    ppcVar10 = &pcStack_338;
    func_0x0001095b7584(ppcVar10,&uStack_2f8);
    uVar5 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = 4;
    pcVar18 = ppcVar10[1];
    uStack_418 = uVar5;
    ppcVar10[1] = pcStack_410;
    pcStack_410 = pcVar18;
    func_0x000109380ffc(&pcStack_410,uVar5);
    FUN_10a0c32e4(&uStack_2f8,&pcStack_338,0xffffffff,0x20,0,1);
    uVar2 = CONCAT17(uStack_2e9,
                     CONCAT16(uStack_2ea,
                              CONCAT15(uStack_2eb,
                                       CONCAT14(uStack_2ec,CONCAT22(uStack_2ee,uStack_2f0)))));
    puVar7 = (undefined5 *)CONCAT17(uStack_2f1,CONCAT25(uStack_2f3,uStack_2f8));
    if (-1 < (long)uStack_2e8) {
      uVar2 = (ulong)uStack_2e8 >> 0x38;
      puVar7 = &uStack_2f8;
    }
    FUN_10a3bf330(auStack_3d8,puVar7,uVar2);
    func_0x000109380ffc(&ppuStack_330,(ulong)pcStack_338 & 0xff);
    FUN_10a872ed8(&uStack_430,ppuVar12[0x71],&ppuStack_388);
    pcVar11 = (code *)0x138;
    __Znwm();
    uVar8 = auStack_3d8[0];
    pcVar26 = pcVar11 + 8;
    *(long *)pcVar26 = 0;
    *(long *)(pcVar11 + 0x10) = 0;
    *(undefined ***)pcVar11 = &PTR_FUN_110b9f3b0;
    pcVar18 = pcVar11 + 0x18;
    auStack_3d8[0] = 0;
    uStack_2f8 = (undefined5)uVar8;
    uStack_2f3 = (undefined2)((ulong)uVar8 >> 0x28);
    uStack_2f1 = (undefined1)((ulong)uVar8 >> 0x38);
    uStack_2f0 = (undefined2)auStack_3d8[1];
    uStack_2ee = (undefined2)((ulong)auStack_3d8[1] >> 0x10);
    uStack_2ec = (undefined1)((ulong)auStack_3d8[1] >> 0x20);
    uStack_2eb = (undefined1)((ulong)auStack_3d8[1] >> 0x28);
    uStack_2ea = (undefined1)((ulong)auStack_3d8[1] >> 0x30);
    uStack_2e9 = (undefined1)((ulong)auStack_3d8[1] >> 0x38);
    (**(code **)(alStack_3c8[0] + 0x10))(&uStack_2e8,alStack_3c8);
    plStack_2b0 = plStack_390;
    pcStack_338 = FUN_10a8a49b8;
    ppuStack_330 = &PTR_FUN_110c24ec8;
    uStack_328 = CONCAT71(uStack_42f,uStack_430);
    pcStack_318 = (code *)uStack_420;
    ppuStack_320 = ppuStack_428;
    ppuStack_428 = (undefined8 **)0x0;
    uStack_420 = 0;
    FUN_10a23708c(pcVar18,&UNK_10e4df48c,0x20,&UNK_10f647b49,4,&uStack_2f8,1);
    (*(code *)*ppuStack_330)(&ppuStack_330);
    FUN_10a042634(&uStack_2f8);
    pcStack_3e8 = pcVar18;
    pcStack_3e0 = pcVar11;
    FUN_10a873048(&uStack_430);
    uStack_2f8 = 0;
    uStack_2f3 = 0;
    uStack_2f1 = 0;
    uStack_2f0 = 0;
    uStack_2ee = 0;
    uStack_2ec = 0;
    uStack_2eb = 0;
    uStack_2ea = 0;
    uStack_2e9 = 0;
    puVar20 = ppuVar12[0x6c];
    if (puVar20 == (undefined8 *)0x0) {
LAB_10a86a414:
      ppuVar16 = &PTR_PTR_113305398;
      FUN_10ae079a0(0,&PTR_PTR_113305398);
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113305398);
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_2f0 = SUB82(puVar20,0);
      uStack_2ee = (undefined2)((ulong)puVar20 >> 0x10);
      uStack_2ec = (undefined1)((ulong)puVar20 >> 0x20);
      uStack_2eb = (undefined1)((ulong)puVar20 >> 0x28);
      uStack_2ea = (undefined1)((ulong)puVar20 >> 0x30);
      uStack_2e9 = (undefined1)((ulong)puVar20 >> 0x38);
      if (puVar20 == (undefined8 *)0x0) goto LAB_10a86a414;
      puVar20 = ppuVar12[0x6b];
      uStack_2f8 = SUB85(puVar20,0);
      uStack_2f3 = (undefined2)((ulong)puVar20 >> 0x28);
      uStack_2f1 = (undefined1)((ulong)puVar20 >> 0x38);
      if (puVar20 == (undefined8 *)0x0) goto LAB_10a86a414;
      ppuVar16 = &PTR_PTR_113304038;
      FUN_10ae079a0(0,&PTR_PTR_113304038);
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113304038);
      do {
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcVar26,0x10);
        if (bVar9) {
          *(long *)pcVar26 = *(long *)pcVar26 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      pcStack_440 = pcVar18;
      pcStack_438 = pcVar11;
      (**(code **)*puVar20)(puVar20,&pcStack_440);
      pcVar18 = pcStack_438;
      if (pcStack_438 != (code *)0x0) {
        pcVar11 = pcStack_438 + 8;
        do {
          lVar22 = *(long *)pcVar11;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar9) {
            *(long *)pcVar11 = lVar22 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*(long *)pcStack_438 + 0x10))(pcStack_438);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar18);
        }
      }
    }
    plVar23 = (long *)CONCAT17(uStack_2e9,
                               CONCAT16(uStack_2ea,
                                        CONCAT15(uStack_2eb,
                                                 CONCAT14(uStack_2ec,CONCAT22(uStack_2ee,uStack_2f0)
                                                         ))));
    if (plVar23 != (long *)0x0) {
      plVar13 = plVar23 + 1;
      do {
        lVar22 = *plVar13;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar9) {
          *plVar13 = lVar22 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    pcVar18 = pcStack_3e0;
    if (pcStack_3e0 != (code *)0x0) {
      pcVar11 = pcStack_3e0 + 8;
      do {
        lVar22 = *(long *)pcVar11;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
        if (bVar9) {
          *(long *)pcVar11 = lVar22 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*(long *)pcStack_3e0 + 0x10))(pcStack_3e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar18);
      }
    }
    FUN_10a042634(auStack_3d8);
    ppuVar12 = apuStack_378;
    (*(code *)*apuStack_378[0])();
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 == puStack_2a8) {
      return ppuVar12;
    }
    goto LAB_10a86a4f4;
  }
  if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 == puStack_2a8) {
    ppuVar27 = ppuVar12;
    if (*(int *)ppuVar12[0x3d] != 4) {
      ppuVar12[0xa6] = (undefined8 *)*ppuVar16;
      (*(code *)*ppuVar12[0xa7])(ppuVar12 + 0xa7);
      (**(code **)(ppuVar16[1] + 0x10))(ppuVar12 + 0xa7,ppuVar16 + 1);
      plVar13 = ppuVar12[0x6f];
      plVar23 = plVar13 + 0xc;
      if (*(char *)((long)plVar13 + 0x77) < '\0') {
        plVar23 = (long *)*plVar23;
      }
      plVar29 = plVar13 + 6;
      if (*(char *)((long)plVar13 + 0x47) < '\0') {
        plVar29 = (long *)*plVar29;
      }
      (**(code **)(*plVar13 + 0x48))();
      plVar25 = (long *)*plVar13;
      if (-1 < *(char *)((long)plVar13 + 0x17)) {
        plVar25 = plVar13;
      }
      ppuVar27 = ppuVar12 + 0x4a;
      if (*(char *)((long)ppuVar12 + 0x267) < '\0') {
        ppuVar27 = (undefined8 **)*ppuVar27;
      }
      puVar19 = ppuVar12[0x6f];
      puVar20 = (undefined8 *)puVar19[0xf];
      uVar2 = puVar19[0x10];
      if (-1 < (char)*(byte *)((long)puVar19 + 0x8f)) {
        puVar20 = puVar19 + 0xf;
        uVar2 = (ulong)*(byte *)((long)puVar19 + 0x8f);
      }
      bVar9 = uVar2 != 8;
      if (7 < uVar2) {
        uVar2 = 8;
      }
      _memcmp(puVar20,"snapchat",uVar2);
      uVar21 = (uint)bVar9;
      if ((int)puVar20 != 0) {
        uVar21 = 1;
      }
      if (ppuVar12[0x7d] == (undefined8 *)0x0) {
        uStack_2f0 = (undefined2)uVar21;
        uStack_2ee = 0;
        uStack_2e8 = plVar25;
        FUN_10ae030a0(0,"gcp.api.snapchat.com");
        ppuVar16 = &PTR_PTR_113303fc0;
        FUN_10ae079a0();
        FUN_10ae030d8();
        FUN_10ae07cd4(ppuVar16,&PTR_PTR_113303fc0);
        (**(code **)(*ppuVar12[0x6d] + 0xa0))(ppuVar12[0x6d],"gcp.api.snapchat.com");
        pcVar18 = (code *)ppuVar12[0x6d];
        plVar13 = ppuVar12[0x6e];
        if (plVar13 != (long *)0x0) {
          plVar25 = plVar13 + 2;
          do {
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar9) {
              *plVar25 = *plVar25 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        puVar20 = ppuVar12[0x77];
        puVar19 = ppuVar12[0x78];
        if (puVar19 != (undefined8 *)0x0) {
          plVar25 = puVar19 + 2;
          do {
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar9) {
              *plVar25 = *plVar25 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_10a86c6f8(&pcStack_2e0,&UNK_10f67efc2,6);
        func_0x00010a21ba78(ppuVar12 + 0x7d,&pcStack_2e0);
        if (plStack_2d8 != (long *)0x0) {
          plVar25 = plStack_2d8 + 1;
          do {
            lVar22 = *plVar25;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar9) {
              *plVar25 = lVar22 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar22 == 0) {
            (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2d8);
          }
        }
        puVar28 = ppuVar12[0x7d];
        if (plVar13 != (long *)0x0) {
          plVar25 = plVar13 + 2;
          do {
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar9) {
              *plVar25 = *plVar25 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (puVar19 != (undefined8 *)0x0) {
          plVar25 = puVar19 + 2;
          do {
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar9) {
              *plVar25 = *plVar25 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        plVar25 = (long *)puVar28[2];
        pcStack_2e0 = pcVar18;
        plStack_2d8 = plVar13;
        puStack_2d0 = puVar20;
        puStack_2c8 = puVar19;
        if (plVar25 == (long *)0x0) {
          plVar25 = (long *)0x30;
          __Znwm();
          *plVar25 = (long)pcVar18;
          plVar25[1] = (long)plVar13;
          plVar25[2] = (long)puVar20;
          plVar25[3] = (long)puVar19;
          plVar25[5] = 0x10a8a5894;
          pcStack_2b8 = FUN_10a8a56f0;
          plStack_2b0 = plVar25;
          puStack_2a8 = puVar28;
          (**(code **)*puVar28)(puVar28,&pcStack_2b8);
        }
        else {
          lStack_2c0 = 0;
          (**(code **)(*plVar25 + 0x28))(plVar25,0,&lStack_2c0);
          if (lStack_2c0 != 0) {
            func_0x0001092af97c(&lStack_2c0);
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x10a872e88);
            (*pcVar18)();
          }
          plVar14 = (long *)0x38;
          __Znwm();
          *plVar14 = (long)pcVar18;
          plVar14[1] = (long)plVar13;
          plVar14[2] = (long)puVar20;
          plVar14[3] = (long)puVar19;
          plVar14[5] = (long)FUN_10a8a5854;
          plVar14[6] = (long)plVar25;
          pcStack_2b8 = FUN_10a8a56c0;
          plStack_2b0 = plVar14;
          puStack_2a8 = puVar28;
          (**(code **)*puVar28)(puVar28,&pcStack_2b8);
          __ZNSt13exception_ptrD1Ev(&lStack_2c0);
        }
        lStack_2c0 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_2c0);
        plVar25 = uStack_2e8;
        uVar21 = CONCAT22(uStack_2ee,uStack_2f0);
        if (puVar19 != (undefined8 *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(puVar19);
        }
        if (plVar13 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      puVar20 = (undefined8 *)0x10;
      __Znwm();
      ppuVar17 = ppuVar12 + 3;
      FUN_10a8a41a8(&pcStack_2b8,ppuVar17);
      if (pcStack_2b8 == (code *)0x0) {
        ppcVar10 = &pcStack_2e0;
      }
      else {
        pcStack_2e0 = pcStack_2b8;
        plStack_2d8 = plStack_2b0;
        ppcVar10 = &pcStack_2b8;
      }
      *ppcVar10 = (code *)0x0;
      ppcVar10[1] = (code *)0x0;
      plVar13 = plStack_2d8;
      if (plStack_2d8 == (long *)0x0) {
        *puVar20 = pcStack_2e0;
        puVar20[1] = 0;
      }
      else {
        plVar14 = plStack_2d8 + 2;
        do {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = *plVar14 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *puVar20 = pcStack_2e0;
        puVar20[1] = plStack_2d8;
        do {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = *plVar14 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2d8);
        plVar14 = plVar13 + 1;
        do {
          lVar22 = *plVar14;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar22 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = plStack_2b0;
      uStack_2e8 = puVar20;
      if (plStack_2b0 != (long *)0x0) {
        plVar14 = plStack_2b0 + 1;
        do {
          lVar22 = *plVar14;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar22 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      FUN_10a86a698(ppuVar12);
      plVar13 = (long *)&UNK_10f67d9eb;
      if (plVar23 != (long *)0x0) {
        plVar13 = plVar23;
      }
      uStack_2f8 = SUB85(ppuVar27,0);
      uStack_2f3 = (undefined2)((ulong)ppuVar27 >> 0x28);
      uStack_2f1 = (undefined1)((ulong)ppuVar27 >> 0x38);
      uStack_2f0 = SUB82(plVar29,0);
      uStack_2ee = (undefined2)((ulong)plVar29 >> 0x10);
      uStack_2ec = (undefined1)((ulong)plVar29 >> 0x20);
      uStack_2eb = (undefined1)((ulong)plVar29 >> 0x28);
      uStack_2ea = (undefined1)((ulong)plVar29 >> 0x30);
      uStack_2e9 = (undefined1)((ulong)plVar29 >> 0x38);
      plStack_300 = plVar23;
      FUN_10ae030a0(0,plVar13);
      FUN_10ae030a0();
      FUN_10ae030a0();
      FUN_10ae030a0();
      func_0x00010ae02f4c();
      func_0x00010ae02ecc();
      func_0x00010ae02ecc();
      ppuVar16 = &PTR_PTR_113303998;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae030d8();
      FUN_10ae030d8();
      FUN_10ae030d8();
      func_0x00010ae02f5c();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113303998);
      ppuVar27 = (undefined8 **)ppuVar12[0x6d];
      puStack_310 = uStack_2e8;
      ppuStack_320 = (undefined8 **)FUN_10a8730c8;
      pcStack_318 = FUN_10a8733a8;
      (*(code *)(*ppuVar27)[0x17])
                (ppuVar27,plStack_300,
                 CONCAT17(uStack_2e9,
                          CONCAT16(uStack_2ea,
                                   CONCAT15(uStack_2eb,
                                            CONCAT14(uStack_2ec,CONCAT22(uStack_2ee,uStack_2f0))))),
                 plVar25,CONCAT17(uStack_2f1,CONCAT25(uStack_2f3,uStack_2f8)),uVar21,
                 *(byte *)((long)ppuVar12[0x6f] + 0xa9) & 1,(ulong)ppuVar17 >> 0x20 & 1);
    }
    return ppuVar27;
  }
LAB_10a86a4f4:
  ___stack_chk_fail();
  FUN_10a05bd88(&pcStack_440);
  func_0x00010a05a8c4(&uStack_2f8);
  FUN_10a05bd88(&pcStack_3e8);
  FUN_10a042634(auStack_3d8);
  (*(code *)*apuStack_378[0])(pppuVar24 + 2);
  __Unwind_Resume();
  if (*(char *)((long)ppuVar12 + 0x27) < '\0') {
    __ZdlPv(ppuVar12[2]);
  }
  if (ppuVar12[1] != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return ppuVar12;
}



/* Entry: 10a869c30; end: 10a869e7f;  */

/* WARNING: Removing unreachable block (ram,0x00010a86a1f4) */
/* WARNING: Removing unreachable block (ram,0x00010a86a100) */
/* WARNING: Removing unreachable block (ram,0x00010a869ff0) */
/* WARNING: Removing unreachable block (ram,0x00010a86a07c) */
/* WARNING: Removing unreachable block (ram,0x00010a86a17c) */
/* WARNING: Removing unreachable block (ram,0x00010a86a250) */
/* WARNING: Removing unreachable block (ram,0x00010a869dcc) */

undefined8 ** FUN_10a869c30(undefined8 **param_1,code **param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined5 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  code *pcVar9;
  code **ppcVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 **unaff_x19;
  uint uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 ***unaff_x23;
  long *plVar21;
  code *pcVar22;
  undefined8 **ppuVar23;
  undefined8 *puVar24;
  long *plVar25;
  code *pcStack_2d0;
  code *pcStack_2c8;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  undefined8 **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  code *pcStack_2a0;
  undefined1 uStack_298;
  code *pcStack_290;
  undefined1 uStack_288;
  code *pcStack_280;
  code *pcStack_278;
  code *pcStack_270;
  undefined8 auStack_268 [2];
  long alStack_258 [7];
  long *plStack_220;
  undefined8 **ppuStack_218;
  code *pcStack_210;
  undefined8 *apuStack_208 [7];
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 *puStack_1a0;
  long *plStack_190;
  undefined5 uStack_188;
  undefined2 uStack_183;
  undefined1 uStack_181;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined8 uStack_178;
  code *pcStack_170;
  long *plStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  code *pcStack_148;
  long *plStack_140;
  undefined8 *puStack_138;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)param_1[0x3d] != 4) {
    unaff_x19 = (undefined8 **)param_1[4];
    puVar19 = param_1[3];
    if (unaff_x19 != (undefined8 **)0x0) {
      ppuVar23 = unaff_x19 + 2;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
        if (bVar8) {
          *ppuVar23 = (undefined8 *)((long)*ppuVar23 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar15 = param_1[0x6f];
    if (*(char *)((long)puVar15 + 0x5f) < '\0') {
      func_0x000107c3192c(&ppuStack_90,puVar15[9],puVar15[10]);
    }
    else {
      uStack_88 = puVar15[10];
      ppuStack_90 = (undefined8 **)puVar15[9];
      uStack_80 = puVar15[0xb];
    }
    uVar1 = uStack_88;
    if (-1 < (long)uStack_80) {
      uVar1 = uStack_80 >> 0x38;
    }
    if (uVar1 == 0) {
      ppuVar13 = &PTR_PTR_1133034d8;
      FUN_10ae079a0(0,&PTR_PTR_1133034d8);
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_1133034d8);
      pcStack_78 = (code *)CONCAT44(pcStack_78._4_4_,1);
      ppuStack_70 = (undefined **)&UNK_10f67eeab;
      param_2 = &pcStack_78;
      FUN_10a865734();
    }
    else {
      if (unaff_x19 != (undefined8 **)0x0) {
        ppuVar23 = unaff_x19 + 2;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
          if (bVar8) {
            *ppuVar23 = (undefined8 *)((long)*ppuVar23 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if ((long)uStack_80 < 0) {
        func_0x000107c3192c(&ppuStack_b0,ppuStack_90);
      }
      else {
        uStack_a8 = uStack_88;
        ppuStack_b0 = ppuStack_90;
        uStack_a0 = uStack_80;
      }
      pcStack_78 = FUN_10a8a1d04;
      ppuStack_70 = &PTR_FUN_110c24e30;
      ppuStack_b8 = (undefined8 **)0x0;
      uStack_50 = uStack_a8;
      ppuStack_58 = ppuStack_b0;
      uStack_48 = uStack_a0;
      ppuStack_b0 = (undefined8 **)0x0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      param_2 = &pcStack_78;
      puStack_68 = puVar19;
      ppuStack_60 = unaff_x19;
      FUN_10a869e80(param_1);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      param_1 = ppuStack_b8;
      if ((long)uStack_a0 < 0) {
        __ZdlPv(ppuStack_b0);
      }
    }
    if ((long)uStack_80 < 0) {
      param_1 = ppuStack_90;
      __ZdlPv();
    }
    if (unaff_x19 != (undefined8 **)0x0) {
      param_1 = unaff_x19;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (ppuStack_b8 != (undefined8 **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if ((long)uStack_80 < 0) {
    __ZdlPv(ppuStack_90);
  }
  if (unaff_x19 != (undefined8 **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
  }
  __Unwind_Resume();
  puStack_138 = *(undefined8 **)PTR____stack_chk_guard_11034bdc0;
  cVar5 = *(char *)((long)param_1[0x6f] + 0x77);
  if (cVar5 < '\0') {
    if (param_1[0x6f][0xd] == 0) goto LAB_10a869f10;
  }
  else if (cVar5 == '\0') {
LAB_10a869f10:
    ppuVar23 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    pcStack_210 = *param_2;
    unaff_x23 = &ppuStack_218;
    ppuStack_218 = param_1;
    (**(code **)(param_2[1] + 0x10))(apuStack_208,param_2 + 1);
    pcVar9 = (code *)param_1[0x6f];
    pcVar18 = pcVar9 + 0x30;
    ppuStack_1d0 = ppuVar23;
    (**(code **)(*(long *)pcVar9 + 0x48))();
    bVar2 = *(byte *)((long)param_1[0x6f] + 0xa9);
    bVar3 = *(byte *)((long)param_1[0x6f] + 0xaa);
    pcStack_1c8 = (code *)((ulong)pcStack_1c8 & 0xffffffffffffff00);
    ppuStack_1c0 = (undefined **)0x0;
    ppuStack_2b8 = (undefined8 **)0x0;
    uStack_2c0 = 3;
    ppuVar23 = param_1 + 0x4a;
    func_0x00010938229c();
    uStack_178 = (long *)CONCAT17(0xd,(undefined7)uStack_178);
    uStack_188 = 0x6e49707061;
    uStack_183 = 0x7473;
    uStack_181 = 0x61;
    uStack_180 = 0x636e;
    uStack_17e = 0x4965;
    uStack_17c = 100;
    uStack_17b = 0;
    ppcVar10 = &pcStack_1c8;
    ppuStack_2b8 = ppuVar23;
    func_0x0001095b7584(ppcVar10,&uStack_188);
    uVar4 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = uStack_2c0;
    ppuVar23 = (undefined8 **)ppcVar10[1];
    uStack_2c0 = uVar4;
    ppcVar10[1] = (code *)ppuStack_2b8;
    ppuStack_2b8 = ppuVar23;
    func_0x000109380ffc(&ppuStack_2b8,uVar4);
    pcStack_270 = (code *)0x0;
    pcStack_278._0_1_ = 3;
    func_0x00010938229c();
    uStack_178 = (long *)CONCAT17(0xc,(undefined7)uStack_178);
    uStack_180 = 0x6563;
    uStack_17e = 0x6449;
    uStack_188 = 0x7265707865;
    uStack_183 = 0x6569;
    uStack_181 = 0x6e;
    uStack_17c = 0;
    ppcVar10 = &pcStack_1c8;
    pcStack_270 = pcVar18;
    func_0x0001095b7584(ppcVar10,&uStack_188);
    uVar4 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = pcStack_278._0_1_;
    pcStack_278 = (code *)CONCAT71(pcStack_278._1_7_,uVar4);
    pcVar18 = ppcVar10[1];
    ppcVar10[1] = pcStack_270;
    pcStack_270 = pcVar18;
    func_0x000109380ffc(&pcStack_270,uVar4);
    pcStack_280 = (code *)0x0;
    uStack_288 = 3;
    func_0x00010938229c();
    uStack_178 = (long *)CONCAT17(9,(undefined7)uStack_178);
    uStack_188 = 0x6973736573;
    uStack_183 = 0x6e6f;
    uStack_181 = 0x49;
    uStack_180 = 100;
    ppcVar10 = &pcStack_1c8;
    pcStack_280 = pcVar9;
    func_0x0001095b7584(ppcVar10,&uStack_188);
    uVar4 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = 3;
    pcVar18 = ppcVar10[1];
    uStack_288 = uVar4;
    ppcVar10[1] = pcStack_280;
    pcStack_280 = pcVar18;
    func_0x000109380ffc(&pcStack_280,uVar4);
    pcStack_290 = (code *)((ulong)bVar2 & 1);
    uStack_298 = 4;
    uStack_178 = (long *)CONCAT17(0xd,(undefined7)uStack_178);
    uStack_188 = 0x7365547369;
    uStack_183 = 0x6974;
    uStack_181 = 0x6e;
    uStack_180 = 0x4d67;
    uStack_17e = 0x646f;
    uStack_17c = 0x65;
    uStack_17b = 0;
    ppcVar10 = &pcStack_1c8;
    func_0x0001095b7584(ppcVar10,&uStack_188);
    uVar4 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = 4;
    pcVar18 = ppcVar10[1];
    uStack_298 = uVar4;
    ppcVar10[1] = pcStack_290;
    pcStack_290 = pcVar18;
    func_0x000109380ffc(&pcStack_290,uVar4);
    pcStack_2a0 = (code *)((ulong)bVar3 & 1);
    uStack_2a8 = 4;
    uStack_178 = (long *)CONCAT17(0xf,(undefined7)uStack_178);
    uStack_188 = 0x7461447369;
    uStack_183 = 0x5361;
    uStack_181 = 0x74;
    uStack_180 = 0x6572;
    uStack_17e = 0x6d61;
    uStack_17c = 0x69;
    uStack_17b = 0x6e;
    uStack_17a = 0x67;
    uStack_179 = 0;
    ppcVar10 = &pcStack_1c8;
    func_0x0001095b7584(ppcVar10,&uStack_188);
    uVar4 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = 4;
    pcVar18 = ppcVar10[1];
    uStack_2a8 = uVar4;
    ppcVar10[1] = pcStack_2a0;
    pcStack_2a0 = pcVar18;
    func_0x000109380ffc(&pcStack_2a0,uVar4);
    FUN_10a0c32e4(&uStack_188,&pcStack_1c8,0xffffffff,0x20,0,1);
    uVar1 = CONCAT17(uStack_179,
                     CONCAT16(uStack_17a,
                              CONCAT15(uStack_17b,
                                       CONCAT14(uStack_17c,CONCAT22(uStack_17e,uStack_180)))));
    puVar6 = (undefined5 *)CONCAT17(uStack_181,CONCAT25(uStack_183,uStack_188));
    if (-1 < (long)uStack_178) {
      uVar1 = (ulong)uStack_178 >> 0x38;
      puVar6 = &uStack_188;
    }
    FUN_10a3bf330(auStack_268,puVar6,uVar1);
    func_0x000109380ffc(&ppuStack_1c0,(ulong)pcStack_1c8 & 0xff);
    FUN_10a872ed8(&uStack_2c0,param_1[0x71],&ppuStack_218);
    pcVar9 = (code *)0x138;
    __Znwm();
    uVar7 = auStack_268[0];
    pcVar22 = pcVar9 + 8;
    *(long *)pcVar22 = 0;
    *(long *)(pcVar9 + 0x10) = 0;
    *(undefined ***)pcVar9 = &PTR_FUN_110b9f3b0;
    pcVar18 = pcVar9 + 0x18;
    auStack_268[0] = 0;
    uStack_188 = (undefined5)uVar7;
    uStack_183 = (undefined2)((ulong)uVar7 >> 0x28);
    uStack_181 = (undefined1)((ulong)uVar7 >> 0x38);
    uStack_180 = (undefined2)auStack_268[1];
    uStack_17e = (undefined2)((ulong)auStack_268[1] >> 0x10);
    uStack_17c = (undefined1)((ulong)auStack_268[1] >> 0x20);
    uStack_17b = (undefined1)((ulong)auStack_268[1] >> 0x28);
    uStack_17a = (undefined1)((ulong)auStack_268[1] >> 0x30);
    uStack_179 = (undefined1)((ulong)auStack_268[1] >> 0x38);
    (**(code **)(alStack_258[0] + 0x10))(&uStack_178,alStack_258);
    plStack_140 = plStack_220;
    pcStack_1c8 = FUN_10a8a49b8;
    ppuStack_1c0 = &PTR_FUN_110c24ec8;
    uStack_1b8 = CONCAT71(uStack_2bf,uStack_2c0);
    pcStack_1a8 = (code *)uStack_2b0;
    ppuStack_1b0 = ppuStack_2b8;
    ppuStack_2b8 = (undefined8 **)0x0;
    uStack_2b0 = 0;
    FUN_10a23708c(pcVar18,&UNK_10e4df48c,0x20,&UNK_10f647b49,4,&uStack_188,1);
    (*(code *)*ppuStack_1c0)(&ppuStack_1c0);
    FUN_10a042634(&uStack_188);
    pcStack_278 = pcVar18;
    pcStack_270 = pcVar9;
    FUN_10a873048(&uStack_2c0);
    uStack_188 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    uStack_180 = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    puVar19 = param_1[0x6c];
    if (puVar19 == (undefined8 *)0x0) {
LAB_10a86a414:
      ppuVar13 = &PTR_PTR_113305398;
      FUN_10ae079a0(0,&PTR_PTR_113305398);
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113305398);
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_180 = SUB82(puVar19,0);
      uStack_17e = (undefined2)((ulong)puVar19 >> 0x10);
      uStack_17c = (undefined1)((ulong)puVar19 >> 0x20);
      uStack_17b = (undefined1)((ulong)puVar19 >> 0x28);
      uStack_17a = (undefined1)((ulong)puVar19 >> 0x30);
      uStack_179 = (undefined1)((ulong)puVar19 >> 0x38);
      if (puVar19 == (undefined8 *)0x0) goto LAB_10a86a414;
      puVar19 = param_1[0x6b];
      uStack_188 = SUB85(puVar19,0);
      uStack_183 = (undefined2)((ulong)puVar19 >> 0x28);
      uStack_181 = (undefined1)((ulong)puVar19 >> 0x38);
      if (puVar19 == (undefined8 *)0x0) goto LAB_10a86a414;
      ppuVar13 = &PTR_PTR_113304038;
      FUN_10ae079a0(0,&PTR_PTR_113304038);
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113304038);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar22,0x10);
        if (bVar8) {
          *(long *)pcVar22 = *(long *)pcVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pcStack_2d0 = pcVar18;
      pcStack_2c8 = pcVar9;
      (**(code **)*puVar19)(puVar19,&pcStack_2d0);
      pcVar18 = pcStack_2c8;
      if (pcStack_2c8 != (code *)0x0) {
        pcVar9 = pcStack_2c8 + 8;
        do {
          lVar16 = *(long *)pcVar9;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
          if (bVar8) {
            *(long *)pcVar9 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*(long *)pcStack_2c8 + 0x10))(pcStack_2c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar18);
        }
      }
    }
    plVar20 = (long *)CONCAT17(uStack_179,
                               CONCAT16(uStack_17a,
                                        CONCAT15(uStack_17b,
                                                 CONCAT14(uStack_17c,CONCAT22(uStack_17e,uStack_180)
                                                         ))));
    if (plVar20 != (long *)0x0) {
      plVar11 = plVar20 + 1;
      do {
        lVar16 = *plVar11;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *plVar11 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    pcVar18 = pcStack_270;
    if (pcStack_270 != (code *)0x0) {
      pcVar9 = pcStack_270 + 8;
      do {
        lVar16 = *(long *)pcVar9;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
        if (bVar8) {
          *(long *)pcVar9 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*(long *)pcStack_270 + 0x10))(pcStack_270);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar18);
      }
    }
    FUN_10a042634(auStack_268);
    param_1 = apuStack_208;
    (*(code *)*apuStack_208[0])();
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 == puStack_138) {
      return param_1;
    }
    goto LAB_10a86a4f4;
  }
  if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 ==
      *(undefined8 **)PTR____stack_chk_guard_11034bdc0) {
    ppuVar23 = param_1;
    if (*(int *)param_1[0x3d] != 4) {
      param_1[0xa6] = (undefined8 *)*param_2;
      (*(code *)*param_1[0xa7])(param_1 + 0xa7);
      (**(code **)(param_2[1] + 0x10))(param_1 + 0xa7,param_2 + 1);
      plVar11 = param_1[0x6f];
      plVar20 = plVar11 + 0xc;
      if (*(char *)((long)plVar11 + 0x77) < '\0') {
        plVar20 = (long *)*plVar20;
      }
      plVar25 = plVar11 + 6;
      if (*(char *)((long)plVar11 + 0x47) < '\0') {
        plVar25 = (long *)*plVar25;
      }
      (**(code **)(*plVar11 + 0x48))();
      plVar21 = (long *)*plVar11;
      if (-1 < *(char *)((long)plVar11 + 0x17)) {
        plVar21 = plVar11;
      }
      ppuVar23 = param_1 + 0x4a;
      if (*(char *)((long)param_1 + 0x267) < '\0') {
        ppuVar23 = (undefined8 **)*ppuVar23;
      }
      puVar15 = param_1[0x6f];
      puVar19 = (undefined8 *)puVar15[0xf];
      uVar1 = puVar15[0x10];
      if (-1 < (char)*(byte *)((long)puVar15 + 0x8f)) {
        puVar19 = puVar15 + 0xf;
        uVar1 = (ulong)*(byte *)((long)puVar15 + 0x8f);
      }
      bVar8 = uVar1 != 8;
      if (7 < uVar1) {
        uVar1 = 8;
      }
      _memcmp(puVar19,"snapchat",uVar1);
      uVar17 = (uint)bVar8;
      if ((int)puVar19 != 0) {
        uVar17 = 1;
      }
      if (param_1[0x7d] == (undefined8 *)0x0) {
        uStack_180 = (undefined2)uVar17;
        uStack_17e = 0;
        uStack_178 = plVar21;
        FUN_10ae030a0(0,"gcp.api.snapchat.com");
        ppuVar13 = &PTR_PTR_113303fc0;
        FUN_10ae079a0();
        FUN_10ae030d8();
        FUN_10ae07cd4(ppuVar13,&PTR_PTR_113303fc0);
        (**(code **)(*param_1[0x6d] + 0xa0))(param_1[0x6d],"gcp.api.snapchat.com");
        pcVar18 = (code *)param_1[0x6d];
        plVar11 = param_1[0x6e];
        if (plVar11 != (long *)0x0) {
          plVar21 = plVar11 + 2;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar19 = param_1[0x77];
        puVar15 = param_1[0x78];
        if (puVar15 != (undefined8 *)0x0) {
          plVar21 = puVar15 + 2;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10a86c6f8(&pcStack_170,&UNK_10f67efc2,6);
        func_0x00010a21ba78(param_1 + 0x7d,&pcStack_170);
        if (plStack_168 != (long *)0x0) {
          plVar21 = plStack_168 + 1;
          do {
            lVar16 = *plVar21;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_168 + 0x10))(plStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
          }
        }
        puVar24 = param_1[0x7d];
        if (plVar11 != (long *)0x0) {
          plVar21 = plVar11 + 2;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (puVar15 != (undefined8 *)0x0) {
          plVar21 = puVar15 + 2;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar21 = (long *)puVar24[2];
        pcStack_170 = pcVar18;
        plStack_168 = plVar11;
        puStack_160 = puVar19;
        puStack_158 = puVar15;
        if (plVar21 == (long *)0x0) {
          plVar21 = (long *)0x30;
          __Znwm();
          *plVar21 = (long)pcVar18;
          plVar21[1] = (long)plVar11;
          plVar21[2] = (long)puVar19;
          plVar21[3] = (long)puVar15;
          plVar21[5] = 0x10a8a5894;
          pcStack_148 = FUN_10a8a56f0;
          plStack_140 = plVar21;
          puStack_138 = puVar24;
          (**(code **)*puVar24)(puVar24,&pcStack_148);
        }
        else {
          lStack_150 = 0;
          (**(code **)(*plVar21 + 0x28))(plVar21,0,&lStack_150);
          if (lStack_150 != 0) {
            func_0x0001092af97c(&lStack_150);
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x10a872e88);
            (*pcVar18)();
          }
          plVar12 = (long *)0x38;
          __Znwm();
          *plVar12 = (long)pcVar18;
          plVar12[1] = (long)plVar11;
          plVar12[2] = (long)puVar19;
          plVar12[3] = (long)puVar15;
          plVar12[5] = (long)FUN_10a8a5854;
          plVar12[6] = (long)plVar21;
          pcStack_148 = FUN_10a8a56c0;
          plStack_140 = plVar12;
          puStack_138 = puVar24;
          (**(code **)*puVar24)(puVar24,&pcStack_148);
          __ZNSt13exception_ptrD1Ev(&lStack_150);
        }
        lStack_150 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_150);
        plVar21 = uStack_178;
        uVar17 = CONCAT22(uStack_17e,uStack_180);
        if (puVar15 != (undefined8 *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(puVar15);
        }
        if (plVar11 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      puVar19 = (undefined8 *)0x10;
      __Znwm();
      ppuVar14 = param_1 + 3;
      FUN_10a8a41a8(&pcStack_148,ppuVar14);
      if (pcStack_148 == (code *)0x0) {
        ppcVar10 = &pcStack_170;
      }
      else {
        pcStack_170 = pcStack_148;
        plStack_168 = plStack_140;
        ppcVar10 = &pcStack_148;
      }
      *ppcVar10 = (code *)0x0;
      ppcVar10[1] = (code *)0x0;
      plVar11 = plStack_168;
      if (plStack_168 == (long *)0x0) {
        *puVar19 = pcStack_170;
        puVar19[1] = 0;
      }
      else {
        plVar12 = plStack_168 + 2;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *puVar19 = pcStack_170;
        puVar19[1] = plStack_168;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
        plVar12 = plVar11 + 1;
        do {
          lVar16 = *plVar12;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_140;
      uStack_178 = puVar19;
      if (plStack_140 != (long *)0x0) {
        plVar12 = plStack_140 + 1;
        do {
          lVar16 = *plVar12;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_140 + 0x10))(plStack_140);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      FUN_10a86a698(param_1);
      plVar11 = (long *)&UNK_10f67d9eb;
      if (plVar20 != (long *)0x0) {
        plVar11 = plVar20;
      }
      uStack_188 = SUB85(ppuVar23,0);
      uStack_183 = (undefined2)((ulong)ppuVar23 >> 0x28);
      uStack_181 = (undefined1)((ulong)ppuVar23 >> 0x38);
      uStack_180 = SUB82(plVar25,0);
      uStack_17e = (undefined2)((ulong)plVar25 >> 0x10);
      uStack_17c = (undefined1)((ulong)plVar25 >> 0x20);
      uStack_17b = (undefined1)((ulong)plVar25 >> 0x28);
      uStack_17a = (undefined1)((ulong)plVar25 >> 0x30);
      uStack_179 = (undefined1)((ulong)plVar25 >> 0x38);
      plStack_190 = plVar20;
      FUN_10ae030a0(0,plVar11);
      FUN_10ae030a0();
      FUN_10ae030a0();
      FUN_10ae030a0();
      func_0x00010ae02f4c();
      func_0x00010ae02ecc();
      func_0x00010ae02ecc();
      ppuVar13 = &PTR_PTR_113303998;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae030d8();
      FUN_10ae030d8();
      FUN_10ae030d8();
      func_0x00010ae02f5c();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113303998);
      ppuVar23 = (undefined8 **)param_1[0x6d];
      puStack_1a0 = uStack_178;
      ppuStack_1b0 = (undefined8 **)FUN_10a8730c8;
      pcStack_1a8 = FUN_10a8733a8;
      (*(code *)(*ppuVar23)[0x17])
                (ppuVar23,plStack_190,
                 CONCAT17(uStack_179,
                          CONCAT16(uStack_17a,
                                   CONCAT15(uStack_17b,
                                            CONCAT14(uStack_17c,CONCAT22(uStack_17e,uStack_180))))),
                 plVar21,CONCAT17(uStack_181,CONCAT25(uStack_183,uStack_188)),uVar17,
                 *(byte *)((long)param_1[0x6f] + 0xa9) & 1,(ulong)ppuVar14 >> 0x20 & 1);
    }
    return ppuVar23;
  }
LAB_10a86a4f4:
  ___stack_chk_fail();
  FUN_10a05bd88(&pcStack_2d0);
  func_0x00010a05a8c4(&uStack_188);
  FUN_10a05bd88(&pcStack_278);
  FUN_10a042634(auStack_268);
  (*(code *)*apuStack_208[0])(unaff_x23 + 2);
  __Unwind_Resume();
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  if (param_1[1] != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a869e80; end: 10a86a65b;  */

/* WARNING: Removing unreachable block (ram,0x00010a86a1f4) */
/* WARNING: Removing unreachable block (ram,0x00010a86a100) */
/* WARNING: Removing unreachable block (ram,0x00010a869ff0) */
/* WARNING: Removing unreachable block (ram,0x00010a86a07c) */
/* WARNING: Removing unreachable block (ram,0x00010a86a17c) */
/* WARNING: Removing unreachable block (ram,0x00010a86a250) */

undefined8 ** FUN_10a869e80(undefined8 **param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined5 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  code *pcVar9;
  code **ppcVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 ***unaff_x23;
  long *plVar21;
  code *pcVar22;
  undefined8 **ppuVar23;
  undefined8 *puVar24;
  long *plVar25;
  code *pcStack_200;
  code *pcStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined8 **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  code *pcStack_1d0;
  undefined1 uStack_1c8;
  code *pcStack_1c0;
  undefined1 uStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  undefined8 auStack_198 [2];
  long alStack_188 [7];
  long *plStack_150;
  undefined8 **ppuStack_148;
  undefined8 uStack_140;
  undefined8 *apuStack_138 [7];
  undefined8 **ppuStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c0;
  undefined5 uStack_b8;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  code *pcStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  
  puStack_68 = *(undefined8 **)PTR____stack_chk_guard_11034bdc0;
  cVar5 = *(char *)((long)param_1[0x6f] + 0x77);
  if (cVar5 < '\0') {
    if (param_1[0x6f][0xd] == 0) goto LAB_10a869f10;
  }
  else if (cVar5 == '\0') {
LAB_10a869f10:
    ppuVar23 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_140 = *param_2;
    unaff_x23 = &ppuStack_148;
    ppuStack_148 = param_1;
    (**(code **)(param_2[1] + 0x10))(apuStack_138,param_2 + 1);
    pcVar9 = (code *)param_1[0x6f];
    pcVar18 = pcVar9 + 0x30;
    ppuStack_100 = ppuVar23;
    (**(code **)(*(long *)pcVar9 + 0x48))();
    bVar2 = *(byte *)((long)param_1[0x6f] + 0xa9);
    bVar3 = *(byte *)((long)param_1[0x6f] + 0xaa);
    pcStack_f8 = (code *)((ulong)pcStack_f8 & 0xffffffffffffff00);
    ppuStack_f0 = (undefined **)0x0;
    ppuStack_1e8 = (undefined8 **)0x0;
    uStack_1f0 = 3;
    ppuVar23 = param_1 + 0x4a;
    func_0x00010938229c();
    uStack_a8 = (long *)CONCAT17(0xd,(undefined7)uStack_a8);
    uStack_b8 = 0x6e49707061;
    uStack_b3 = 0x7473;
    uStack_b1 = 0x61;
    uStack_b0 = 0x636e;
    uStack_ae = 0x4965;
    uStack_ac = 100;
    uStack_ab = 0;
    ppcVar10 = &pcStack_f8;
    ppuStack_1e8 = ppuVar23;
    func_0x0001095b7584(ppcVar10,&uStack_b8);
    uVar4 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = uStack_1f0;
    ppuVar23 = (undefined8 **)ppcVar10[1];
    uStack_1f0 = uVar4;
    ppcVar10[1] = (code *)ppuStack_1e8;
    ppuStack_1e8 = ppuVar23;
    func_0x000109380ffc(&ppuStack_1e8,uVar4);
    pcStack_1a0 = (code *)0x0;
    pcStack_1a8._0_1_ = 3;
    func_0x00010938229c();
    uStack_a8 = (long *)CONCAT17(0xc,(undefined7)uStack_a8);
    uStack_b0 = 0x6563;
    uStack_ae = 0x6449;
    uStack_b8 = 0x7265707865;
    uStack_b3 = 0x6569;
    uStack_b1 = 0x6e;
    uStack_ac = 0;
    ppcVar10 = &pcStack_f8;
    pcStack_1a0 = pcVar18;
    func_0x0001095b7584(ppcVar10,&uStack_b8);
    uVar4 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = pcStack_1a8._0_1_;
    pcStack_1a8 = (code *)CONCAT71(pcStack_1a8._1_7_,uVar4);
    pcVar18 = ppcVar10[1];
    ppcVar10[1] = pcStack_1a0;
    pcStack_1a0 = pcVar18;
    func_0x000109380ffc(&pcStack_1a0,uVar4);
    pcStack_1b0 = (code *)0x0;
    uStack_1b8 = 3;
    func_0x00010938229c();
    uStack_a8 = (long *)CONCAT17(9,(undefined7)uStack_a8);
    uStack_b8 = 0x6973736573;
    uStack_b3 = 0x6e6f;
    uStack_b1 = 0x49;
    uStack_b0 = 100;
    ppcVar10 = &pcStack_f8;
    pcStack_1b0 = pcVar9;
    func_0x0001095b7584(ppcVar10,&uStack_b8);
    uVar4 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = 3;
    pcVar18 = ppcVar10[1];
    uStack_1b8 = uVar4;
    ppcVar10[1] = pcStack_1b0;
    pcStack_1b0 = pcVar18;
    func_0x000109380ffc(&pcStack_1b0,uVar4);
    pcStack_1c0 = (code *)((ulong)bVar2 & 1);
    uStack_1c8 = 4;
    uStack_a8 = (long *)CONCAT17(0xd,(undefined7)uStack_a8);
    uStack_b8 = 0x7365547369;
    uStack_b3 = 0x6974;
    uStack_b1 = 0x6e;
    uStack_b0 = 0x4d67;
    uStack_ae = 0x646f;
    uStack_ac = 0x65;
    uStack_ab = 0;
    ppcVar10 = &pcStack_f8;
    func_0x0001095b7584(ppcVar10,&uStack_b8);
    uVar4 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = 4;
    pcVar18 = ppcVar10[1];
    uStack_1c8 = uVar4;
    ppcVar10[1] = pcStack_1c0;
    pcStack_1c0 = pcVar18;
    func_0x000109380ffc(&pcStack_1c0,uVar4);
    pcStack_1d0 = (code *)((ulong)bVar3 & 1);
    uStack_1d8 = 4;
    uStack_a8 = (long *)CONCAT17(0xf,(undefined7)uStack_a8);
    uStack_b8 = 0x7461447369;
    uStack_b3 = 0x5361;
    uStack_b1 = 0x74;
    uStack_b0 = 0x6572;
    uStack_ae = 0x6d61;
    uStack_ac = 0x69;
    uStack_ab = 0x6e;
    uStack_aa = 0x67;
    uStack_a9 = 0;
    ppcVar10 = &pcStack_f8;
    func_0x0001095b7584(ppcVar10,&uStack_b8);
    uVar4 = *(undefined1 *)ppcVar10;
    *(undefined1 *)ppcVar10 = 4;
    pcVar18 = ppcVar10[1];
    uStack_1d8 = uVar4;
    ppcVar10[1] = pcStack_1d0;
    pcStack_1d0 = pcVar18;
    func_0x000109380ffc(&pcStack_1d0,uVar4);
    FUN_10a0c32e4(&uStack_b8,&pcStack_f8,0xffffffff,0x20,0,1);
    uVar1 = CONCAT17(uStack_a9,
                     CONCAT16(uStack_aa,
                              CONCAT15(uStack_ab,CONCAT14(uStack_ac,CONCAT22(uStack_ae,uStack_b0))))
                    );
    puVar6 = (undefined5 *)CONCAT17(uStack_b1,CONCAT25(uStack_b3,uStack_b8));
    if (-1 < (long)uStack_a8) {
      uVar1 = (ulong)uStack_a8 >> 0x38;
      puVar6 = &uStack_b8;
    }
    FUN_10a3bf330(auStack_198,puVar6,uVar1);
    func_0x000109380ffc(&ppuStack_f0,(ulong)pcStack_f8 & 0xff);
    FUN_10a872ed8(&uStack_1f0,param_1[0x71],&ppuStack_148);
    pcVar9 = (code *)0x138;
    __Znwm();
    uVar7 = auStack_198[0];
    pcVar22 = pcVar9 + 8;
    *(long *)pcVar22 = 0;
    *(long *)(pcVar9 + 0x10) = 0;
    *(undefined ***)pcVar9 = &PTR_FUN_110b9f3b0;
    pcVar18 = pcVar9 + 0x18;
    auStack_198[0] = 0;
    uStack_b8 = (undefined5)uVar7;
    uStack_b3 = (undefined2)((ulong)uVar7 >> 0x28);
    uStack_b1 = (undefined1)((ulong)uVar7 >> 0x38);
    uStack_b0 = (undefined2)auStack_198[1];
    uStack_ae = (undefined2)((ulong)auStack_198[1] >> 0x10);
    uStack_ac = (undefined1)((ulong)auStack_198[1] >> 0x20);
    uStack_ab = (undefined1)((ulong)auStack_198[1] >> 0x28);
    uStack_aa = (undefined1)((ulong)auStack_198[1] >> 0x30);
    uStack_a9 = (undefined1)((ulong)auStack_198[1] >> 0x38);
    (**(code **)(alStack_188[0] + 0x10))(&uStack_a8,alStack_188);
    plStack_70 = plStack_150;
    pcStack_f8 = FUN_10a8a49b8;
    ppuStack_f0 = &PTR_FUN_110c24ec8;
    uStack_e8 = CONCAT71(uStack_1ef,uStack_1f0);
    pcStack_d8 = (code *)uStack_1e0;
    ppuStack_e0 = ppuStack_1e8;
    ppuStack_1e8 = (undefined8 **)0x0;
    uStack_1e0 = 0;
    FUN_10a23708c(pcVar18,&UNK_10e4df48c,0x20,&UNK_10f647b49,4,&uStack_b8,1);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    FUN_10a042634(&uStack_b8);
    pcStack_1a8 = pcVar18;
    pcStack_1a0 = pcVar9;
    FUN_10a873048(&uStack_1f0);
    uStack_b8 = 0;
    uStack_b3 = 0;
    uStack_b1 = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_ac = 0;
    uStack_ab = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    puVar19 = param_1[0x6c];
    if (puVar19 == (undefined8 *)0x0) {
LAB_10a86a414:
      ppuVar13 = &PTR_PTR_113305398;
      FUN_10ae079a0(0,&PTR_PTR_113305398);
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113305398);
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_b0 = SUB82(puVar19,0);
      uStack_ae = (undefined2)((ulong)puVar19 >> 0x10);
      uStack_ac = (undefined1)((ulong)puVar19 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar19 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar19 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar19 >> 0x38);
      if (puVar19 == (undefined8 *)0x0) goto LAB_10a86a414;
      puVar19 = param_1[0x6b];
      uStack_b8 = SUB85(puVar19,0);
      uStack_b3 = (undefined2)((ulong)puVar19 >> 0x28);
      uStack_b1 = (undefined1)((ulong)puVar19 >> 0x38);
      if (puVar19 == (undefined8 *)0x0) goto LAB_10a86a414;
      ppuVar13 = &PTR_PTR_113304038;
      FUN_10ae079a0(0,&PTR_PTR_113304038);
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113304038);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar22,0x10);
        if (bVar8) {
          *(long *)pcVar22 = *(long *)pcVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pcStack_200 = pcVar18;
      pcStack_1f8 = pcVar9;
      (**(code **)*puVar19)(puVar19,&pcStack_200);
      pcVar18 = pcStack_1f8;
      if (pcStack_1f8 != (code *)0x0) {
        pcVar9 = pcStack_1f8 + 8;
        do {
          lVar16 = *(long *)pcVar9;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
          if (bVar8) {
            *(long *)pcVar9 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*(long *)pcStack_1f8 + 0x10))(pcStack_1f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar18);
        }
      }
    }
    plVar20 = (long *)CONCAT17(uStack_a9,
                               CONCAT16(uStack_aa,
                                        CONCAT15(uStack_ab,
                                                 CONCAT14(uStack_ac,CONCAT22(uStack_ae,uStack_b0))))
                              );
    if (plVar20 != (long *)0x0) {
      plVar11 = plVar20 + 1;
      do {
        lVar16 = *plVar11;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *plVar11 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    pcVar18 = pcStack_1a0;
    if (pcStack_1a0 != (code *)0x0) {
      pcVar9 = pcStack_1a0 + 8;
      do {
        lVar16 = *(long *)pcVar9;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
        if (bVar8) {
          *(long *)pcVar9 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*(long *)pcStack_1a0 + 0x10))(pcStack_1a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar18);
      }
    }
    FUN_10a042634(auStack_198);
    param_1 = apuStack_138;
    (*(code *)*apuStack_138[0])();
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 == puStack_68) {
      return param_1;
    }
    goto LAB_10a86a4f4;
  }
  if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 == puStack_68) {
    ppuVar23 = param_1;
    if (*(int *)param_1[0x3d] != 4) {
      param_1[0xa6] = (undefined8 *)*param_2;
      (*(code *)*param_1[0xa7])(param_1 + 0xa7);
      (**(code **)(param_2[1] + 0x10))(param_1 + 0xa7,param_2 + 1);
      plVar11 = param_1[0x6f];
      plVar20 = plVar11 + 0xc;
      if (*(char *)((long)plVar11 + 0x77) < '\0') {
        plVar20 = (long *)*plVar20;
      }
      plVar25 = plVar11 + 6;
      if (*(char *)((long)plVar11 + 0x47) < '\0') {
        plVar25 = (long *)*plVar25;
      }
      (**(code **)(*plVar11 + 0x48))();
      plVar21 = (long *)*plVar11;
      if (-1 < *(char *)((long)plVar11 + 0x17)) {
        plVar21 = plVar11;
      }
      ppuVar23 = param_1 + 0x4a;
      if (*(char *)((long)param_1 + 0x267) < '\0') {
        ppuVar23 = (undefined8 **)*ppuVar23;
      }
      puVar15 = param_1[0x6f];
      puVar19 = (undefined8 *)puVar15[0xf];
      uVar1 = puVar15[0x10];
      if (-1 < (char)*(byte *)((long)puVar15 + 0x8f)) {
        puVar19 = puVar15 + 0xf;
        uVar1 = (ulong)*(byte *)((long)puVar15 + 0x8f);
      }
      bVar8 = uVar1 != 8;
      if (7 < uVar1) {
        uVar1 = 8;
      }
      _memcmp(puVar19,"snapchat",uVar1);
      uVar17 = (uint)bVar8;
      if ((int)puVar19 != 0) {
        uVar17 = 1;
      }
      if (param_1[0x7d] == (undefined8 *)0x0) {
        uStack_b0 = (undefined2)uVar17;
        uStack_ae = 0;
        uStack_a8 = plVar21;
        FUN_10ae030a0(0,"gcp.api.snapchat.com");
        ppuVar13 = &PTR_PTR_113303fc0;
        FUN_10ae079a0();
        FUN_10ae030d8();
        FUN_10ae07cd4(ppuVar13,&PTR_PTR_113303fc0);
        (**(code **)(*param_1[0x6d] + 0xa0))(param_1[0x6d],"gcp.api.snapchat.com");
        pcVar18 = (code *)param_1[0x6d];
        plVar11 = param_1[0x6e];
        if (plVar11 != (long *)0x0) {
          plVar21 = plVar11 + 2;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar19 = param_1[0x77];
        puVar15 = param_1[0x78];
        if (puVar15 != (undefined8 *)0x0) {
          plVar21 = puVar15 + 2;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10a86c6f8(&pcStack_a0,&UNK_10f67efc2,6);
        func_0x00010a21ba78(param_1 + 0x7d,&pcStack_a0);
        if (plStack_98 != (long *)0x0) {
          plVar21 = plStack_98 + 1;
          do {
            lVar16 = *plVar21;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
          }
        }
        puVar24 = param_1[0x7d];
        if (plVar11 != (long *)0x0) {
          plVar21 = plVar11 + 2;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (puVar15 != (undefined8 *)0x0) {
          plVar21 = puVar15 + 2;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar21 = (long *)puVar24[2];
        pcStack_a0 = pcVar18;
        plStack_98 = plVar11;
        puStack_90 = puVar19;
        puStack_88 = puVar15;
        if (plVar21 == (long *)0x0) {
          plVar21 = (long *)0x30;
          __Znwm();
          *plVar21 = (long)pcVar18;
          plVar21[1] = (long)plVar11;
          plVar21[2] = (long)puVar19;
          plVar21[3] = (long)puVar15;
          plVar21[5] = 0x10a8a5894;
          pcStack_78 = FUN_10a8a56f0;
          plStack_70 = plVar21;
          puStack_68 = puVar24;
          (**(code **)*puVar24)(puVar24,&pcStack_78);
        }
        else {
          lStack_80 = 0;
          (**(code **)(*plVar21 + 0x28))(plVar21,0,&lStack_80);
          if (lStack_80 != 0) {
            func_0x0001092af97c(&lStack_80);
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x10a872e88);
            (*pcVar18)();
          }
          plVar12 = (long *)0x38;
          __Znwm();
          *plVar12 = (long)pcVar18;
          plVar12[1] = (long)plVar11;
          plVar12[2] = (long)puVar19;
          plVar12[3] = (long)puVar15;
          plVar12[5] = (long)FUN_10a8a5854;
          plVar12[6] = (long)plVar21;
          pcStack_78 = FUN_10a8a56c0;
          plStack_70 = plVar12;
          puStack_68 = puVar24;
          (**(code **)*puVar24)(puVar24,&pcStack_78);
          __ZNSt13exception_ptrD1Ev(&lStack_80);
        }
        lStack_80 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_80);
        plVar21 = uStack_a8;
        uVar17 = CONCAT22(uStack_ae,uStack_b0);
        if (puVar15 != (undefined8 *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(puVar15);
        }
        if (plVar11 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      puVar19 = (undefined8 *)0x10;
      __Znwm();
      ppuVar14 = param_1 + 3;
      FUN_10a8a41a8(&pcStack_78,ppuVar14);
      if (pcStack_78 == (code *)0x0) {
        ppcVar10 = &pcStack_a0;
      }
      else {
        pcStack_a0 = pcStack_78;
        plStack_98 = plStack_70;
        ppcVar10 = &pcStack_78;
      }
      *ppcVar10 = (code *)0x0;
      ppcVar10[1] = (code *)0x0;
      plVar11 = plStack_98;
      if (plStack_98 == (long *)0x0) {
        *puVar19 = pcStack_a0;
        puVar19[1] = 0;
      }
      else {
        plVar12 = plStack_98 + 2;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *puVar19 = pcStack_a0;
        puVar19[1] = plStack_98;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
        plVar12 = plVar11 + 1;
        do {
          lVar16 = *plVar12;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_70;
      uStack_a8 = puVar19;
      if (plStack_70 != (long *)0x0) {
        plVar12 = plStack_70 + 1;
        do {
          lVar16 = *plVar12;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      FUN_10a86a698(param_1);
      plVar11 = (long *)&UNK_10f67d9eb;
      if (plVar20 != (long *)0x0) {
        plVar11 = plVar20;
      }
      uStack_b8 = SUB85(ppuVar23,0);
      uStack_b3 = (undefined2)((ulong)ppuVar23 >> 0x28);
      uStack_b1 = (undefined1)((ulong)ppuVar23 >> 0x38);
      uStack_b0 = SUB82(plVar25,0);
      uStack_ae = (undefined2)((ulong)plVar25 >> 0x10);
      uStack_ac = (undefined1)((ulong)plVar25 >> 0x20);
      uStack_ab = (undefined1)((ulong)plVar25 >> 0x28);
      uStack_aa = (undefined1)((ulong)plVar25 >> 0x30);
      uStack_a9 = (undefined1)((ulong)plVar25 >> 0x38);
      plStack_c0 = plVar20;
      FUN_10ae030a0(0,plVar11);
      FUN_10ae030a0();
      FUN_10ae030a0();
      FUN_10ae030a0();
      func_0x00010ae02f4c();
      func_0x00010ae02ecc();
      func_0x00010ae02ecc();
      ppuVar13 = &PTR_PTR_113303998;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae030d8();
      FUN_10ae030d8();
      FUN_10ae030d8();
      func_0x00010ae02f5c();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113303998);
      ppuVar23 = (undefined8 **)param_1[0x6d];
      puStack_d0 = uStack_a8;
      ppuStack_e0 = (undefined8 **)FUN_10a8730c8;
      pcStack_d8 = FUN_10a8733a8;
      (*(code *)(*ppuVar23)[0x17])
                (ppuVar23,plStack_c0,
                 CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT15(uStack_ab,
                                            CONCAT14(uStack_ac,CONCAT22(uStack_ae,uStack_b0))))),
                 plVar21,CONCAT17(uStack_b1,CONCAT25(uStack_b3,uStack_b8)),uVar17,
                 *(byte *)((long)param_1[0x6f] + 0xa9) & 1,(ulong)ppuVar14 >> 0x20 & 1);
    }
    return ppuVar23;
  }
LAB_10a86a4f4:
  ___stack_chk_fail();
  FUN_10a05bd88(&pcStack_200);
  func_0x00010a05a8c4(&uStack_b8);
  FUN_10a05bd88(&pcStack_1a8);
  FUN_10a042634(auStack_198);
  (*(code *)*apuStack_138[0])(unaff_x23 + 2);
  __Unwind_Resume();
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  if (param_1[1] != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a86a65c; end: 10a86a697;  */

long FUN_10a86a65c(long param_1)

{
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a86a698; end: 10a86a76f;  */

undefined1  [16] FUN_10a86a698(long param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
  if (*(char *)(param_1 + 0x4b9) == '\x01') {
    lVar6 = *(long *)(*(long *)(param_1 + 0x378) + 0x3b0);
    if (lVar6 != 0) {
      plVar7 = *(long **)(*(long *)(param_1 + 0x378) + 0x3b8);
      if (plVar7 == (long *)0x0) {
        uVar8 = *(uint *)(lVar6 + 0x18);
        iVar9 = *(int *)(lVar6 + 0x1c);
        uVar5 = uVar8;
        if ((*(ulong *)(lVar6 + 0x20) & 0x100000000) != 0) {
          uVar5 = (uint)*(ulong *)(lVar6 + 0x20);
        }
      }
      else {
        plVar1 = plVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar8 = *(uint *)(lVar6 + 0x18);
        iVar9 = *(int *)(lVar6 + 0x1c);
        uVar5 = uVar8;
        if ((*(ulong *)(lVar6 + 0x20) & 0x100000000) != 0) {
          uVar5 = (uint)*(ulong *)(lVar6 + 0x20);
        }
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      goto LAB_10a86a728;
    }
  }
  uVar8 = 0;
  iVar9 = 0;
  uVar5 = 0;
LAB_10a86a728:
  auVar10._4_4_ = iVar9;
  auVar10._0_4_ = uVar8;
  uVar2 = 0x100000000;
  if ((uVar8 == 0 && iVar9 == 0) && uVar5 == 0) {
    uVar2 = 0;
  }
  auVar10._8_8_ = uVar2 | uVar5;
  return auVar10;
}



/* Entry: 10a86a770; end: 10a86ad5f;  */

/* WARNING: Removing unreachable block (ram,0x00010a86a9a8) */
/* WARNING: Removing unreachable block (ram,0x00010a86aa04) */

void FUN_10a86a770(long param_1,undefined8 param_2,long *param_3,undefined **param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  ulong *puVar10;
  long *plVar11;
  undefined1 uVar12;
  undefined8 in_x7;
  undefined **ppuVar13;
  ulong uVar14;
  long lVar15;
  ulong *puStack_170;
  ulong *puStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong *puStack_148;
  ulong *puStack_140;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x388) != 0) {
    FUN_10ae03140(0);
    FUN_10ae03140();
    ppuVar13 = &PTR_PTR_113304d00;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar13,&PTR_PTR_113304d00);
    uStack_160 = 0;
    uStack_158 = 0;
    if ((long *)0x7ffffffffffffff7 < param_3) goto LAB_10a86ac5c;
    if (param_3 < (long *)0x17) {
      uStack_98 = CONCAT17((char)param_3,(undefined7)uStack_98);
      ppppuVar7 = &pppuStack_a8;
      if (param_3 != (long *)0x0) goto LAB_10a86a878;
    }
    else {
      ppppuVar3 = (undefined8 ****)0x19;
      if (((ulong)param_3 | 7) != 0x17) {
        ppppuVar3 = (undefined8 ****)(((ulong)param_3 | 7) + 1);
      }
      ppppuVar7 = ppppuVar3;
      __Znwm();
      uStack_98 = (ulong)ppppuVar3 | 0x8000000000000000;
      pppuStack_a8 = ppppuVar7;
      plStack_a0 = param_3;
LAB_10a86a878:
      _memmove(ppppuVar7,param_2,param_3);
    }
    *(undefined1 *)((long)ppppuVar7 + (long)param_3) = 0;
    puStack_140 = (ulong *)0x0;
    puStack_148._0_1_ = 3;
    puVar8 = (ulong *)0x18;
    __Znwm();
    puVar8[1] = (ulong)plStack_a0;
    *puVar8 = (ulong)pppuStack_a8;
    puVar8[2] = uStack_98;
    uStack_d8._7_1_ = '\x05';
    pcStack_e8 = (code *)CONCAT26(pcStack_e8._6_2_,0x6574617473);
    puVar9 = &uStack_160;
    puStack_140 = puVar8;
    func_0x0001095b7584(puVar9,&pcStack_e8);
    uVar12 = *puVar9;
    *puVar9 = 3;
    puStack_148 = (ulong *)CONCAT71(puStack_148._1_7_,uVar12);
    puVar8 = *(ulong **)(puVar9 + 8);
    *(ulong **)(puVar9 + 8) = puStack_140;
    puStack_140 = puVar8;
    if (uStack_d8._7_1_ < '\0') {
      __ZdlPv(pcStack_e8);
      uVar12 = puStack_148._0_1_;
    }
    func_0x000109380ffc(&puStack_140,uVar12);
    puVar2 = param_4[1];
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      puVar2 = (undefined *)(ulong)*(byte *)((long)param_4 + 0x17);
    }
    if (puVar2 != (undefined *)0x0) {
      ppuStack_e0 = (undefined **)0x0;
      pcStack_e8._0_1_ = 3;
      func_0x00010938229c();
      uStack_98 = CONCAT17(9,(undefined7)uStack_98);
      pppuStack_a8 = (undefined8 ***)0x646f43726f727265;
      plStack_a0 = (long *)CONCAT62(plStack_a0._2_6_,0x65);
      puVar9 = &uStack_160;
      ppuStack_e0 = param_4;
      func_0x0001095b7584(puVar9,&pppuStack_a8);
      uVar12 = *puVar9;
      *puVar9 = 3;
      pcStack_e8 = (code *)CONCAT71(pcStack_e8._1_7_,uVar12);
      ppuVar13 = *(undefined ***)(puVar9 + 8);
      *(undefined ***)(puVar9 + 8) = ppuStack_e0;
      ppuStack_e0 = ppuVar13;
      func_0x000109380ffc(&ppuStack_e0,uVar12);
    }
    FUN_10a0c32e4(&pppuStack_a8,&uStack_160,0xffffffff,0x20,0,1);
    plVar11 = plStack_a0;
    ppppuVar3 = (undefined8 ****)pppuStack_a8;
    if (-1 < (long)uStack_98) {
      plVar11 = (long *)(uStack_98 >> 0x38);
      ppppuVar3 = &pppuStack_a8;
    }
    FUN_10a3bf330(&ppuStack_138,ppppuVar3,plVar11);
    func_0x000109380ffc(&uStack_158,uStack_160);
    FUN_10a874ff8(&uStack_160,*(undefined8 *)(param_1 + 0x388));
    puVar10 = (ulong *)0x138;
    __Znwm();
    pppuStack_a8 = (undefined8 ***)ppuStack_138;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = (ulong)&PTR_FUN_110b9f3b0;
    puVar8 = puVar10 + 3;
    ppuStack_138 = (undefined8 ***)0x0;
    plStack_a0 = (long *)uStack_130;
    (**(code **)(alStack_128[0] + 0x10))(&uStack_98,alStack_128);
    uStack_60 = uStack_f0;
    uVar14 = *(ulong *)(param_1 + 0x208);
    lVar15 = *(long *)(param_1 + 0x200);
    if (-1 < (char)*(byte *)(param_1 + 0x217)) {
      uVar14 = (ulong)*(byte *)(param_1 + 0x217);
      lVar15 = param_1 + 0x200;
    }
    pcStack_e8 = FUN_10a8a6b08;
    ppuStack_e0 = &PTR_FUN_110c24fe0;
    uStack_d8 = CONCAT71(uStack_15f,uStack_160);
    uStack_c8 = uStack_150;
    uStack_d0 = uStack_158;
    uStack_158 = 0;
    uStack_150 = 0;
    FUN_10a23708c(puVar8,&UNK_10e4df55f,0x24,&UNK_10f647b49,4,&pppuStack_a8,1,in_x7,lVar15,uVar14,
                  &pcStack_e8);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a042634(&pppuStack_a8);
    puStack_148 = puVar8;
    puStack_140 = puVar10;
    FUN_10a87509c(&uStack_160);
    pppuStack_a8 = (undefined8 ****)0x0;
    plStack_a0 = (long *)0x0;
    plVar11 = *(long **)(param_1 + 0x360);
    if (((plVar11 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar11, plVar11 == (long *)0x0)) ||
       (pppuStack_a8 = *(undefined8 ****)(param_1 + 0x358),
       (undefined8 ****)pppuStack_a8 == (undefined8 ****)0x0)) {
      ppuVar13 = &PTR_PTR_113305d98;
      FUN_10ae079a0(0,&PTR_PTR_113305d98);
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113305d98);
    }
    else {
      puStack_148 = (ulong *)0x0;
      puStack_140 = (ulong *)0x0;
      puStack_170 = puVar8;
      puStack_168 = puVar10;
      (*(code *)**pppuStack_a8)(pppuStack_a8,&puStack_170);
      puVar8 = puStack_168;
      if (puStack_168 != (ulong *)0x0) {
        puVar10 = puStack_168 + 1;
        do {
          uVar14 = *puVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar10,0x10);
          if (bVar5) {
            *puVar10 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 == 0) {
          (**(code **)(*puStack_168 + 0x10))(puStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(puVar8);
        }
      }
    }
    plVar11 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
      do {
        lVar15 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    puVar8 = puStack_140;
    if (puStack_140 != (ulong *)0x0) {
      puVar10 = puStack_140 + 1;
      do {
        uVar14 = *puVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar5) {
          *puVar10 = uVar14 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar14 == 0) {
        (**(code **)(*puStack_140 + 0x10))(puStack_140);
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar8);
      }
    }
    FUN_10a042634(&ppuStack_138);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_10a86ac5c:
  func_0x000109ffde50();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a86ac64);
  (*pcVar6)();
}



/* Entry: 10a86ad60; end: 10a86add3;  */

void FUN_10a86ad60(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_10a87b7b0(auStack_50,param_1,param_2);
  FUN_10a87c7ec(param_1,auStack_50,auStack_38);
  func_0x00010a8829b0(auStack_38);
  FUN_10a87f1e0(auStack_50);
  return;
}



/* Entry: 10a86add4; end: 10a86b5d3;  */

/* WARNING: Type propagation algorithm not settling */

undefined ********
FUN_10a86add4(undefined ********param_1,undefined ********param_2,undefined ********param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined ********ppppppppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined *******pppppppuVar16;
  undefined *******pppppppuVar17;
  undefined *puVar18;
  undefined *******pppppppuVar19;
  undefined ********ppppppppuVar20;
  undefined *******pppppppuVar21;
  ulong uVar22;
  undefined **unaff_x20;
  undefined ********ppppppppuVar23;
  undefined **ppuVar24;
  undefined ********unaff_x22;
  undefined ******ppppppuVar25;
  undefined **unaff_x23;
  undefined *******pppppppuVar26;
  undefined ******ppppppuVar27;
  undefined ********unaff_x25;
  undefined ********unaff_x26;
  undefined ********unaff_x27;
  code *unaff_x28;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined1 uStack_979;
  undefined *puStack_978;
  undefined **ppuStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined *puStack_938;
  undefined **ppuStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined1 auStack_8f8 [16];
  undefined8 uStack_8e8;
  char cStack_8d1;
  undefined8 *apuStack_8c8 [8];
  undefined8 *apuStack_888 [7];
  undefined8 uStack_850;
  undefined *puStack_848;
  undefined **ppuStack_840;
  undefined8 uStack_838;
  undefined8 *puStack_830;
  undefined *puStack_808;
  undefined *******pppppppuStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined *******pppppppuStack_7c8;
  undefined *puStack_7c0;
  undefined **ppuStack_7b8;
  code *pcStack_780;
  undefined **appuStack_778 [7];
  undefined *******pppppppuStack_740;
  undefined *puStack_738;
  undefined **ppuStack_730;
  undefined1 auStack_6f8 [152];
  undefined8 uStack_660;
  undefined8 *apuStack_658 [7];
  undefined1 auStack_620 [72];
  long alStack_5d8 [2];
  long lStack_5c8;
  undefined ********ppppppppuStack_5c0;
  undefined ********ppppppppuStack_5b8;
  undefined ********ppppppppuStack_5b0;
  undefined ********ppppppppuStack_5a8;
  undefined ********ppppppppuStack_5a0;
  undefined ********ppppppppuStack_598;
  undefined ********ppppppppuStack_590;
  undefined ********ppppppppuStack_588;
  undefined ********ppppppppuStack_580;
  undefined ********ppppppppuStack_578;
  undefined1 ****ppppuStack_570;
  code *pcStack_568;
  undefined ********ppppppppuStack_560;
  undefined ********ppppppppuStack_558;
  long lStack_550;
  uint uStack_548;
  undefined ********ppppppppuStack_540;
  undefined ********ppppppppuStack_538;
  long lStack_530;
  undefined *******pppppppuStack_528;
  undefined *******pppppppuStack_520;
  undefined ********ppppppppuStack_518;
  undefined ********ppppppppuStack_510;
  long lStack_508;
  uint uStack_500;
  long lStack_4e8;
  undefined ********ppppppppuStack_4e0;
  undefined ********ppppppppuStack_4d8;
  undefined ********ppppppppuStack_4d0;
  undefined ********ppppppppuStack_4c8;
  undefined ********ppppppppuStack_4c0;
  undefined ********ppppppppuStack_4b8;
  undefined ********ppppppppuStack_4b0;
  undefined ********ppppppppuStack_4a8;
  undefined ********ppppppppuStack_4a0;
  undefined ********ppppppppuStack_498;
  undefined1 ***pppuStack_490;
  code *pcStack_488;
  undefined *******pppppppuStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined ********ppppppppuStack_460;
  undefined ********ppppppppuStack_458;
  undefined *******pppppppuStack_450;
  undefined ********ppppppppuStack_448;
  undefined ********ppppppppuStack_440;
  undefined ********ppppppppuStack_438;
  ulong uStack_430;
  undefined ********ppppppppuStack_428;
  undefined ********ppppppppuStack_420;
  byte bStack_411;
  undefined ********ppppppppuStack_410;
  undefined ********ppppppppuStack_408;
  undefined *******pppppppuStack_400;
  undefined ********ppppppppuStack_3f8;
  undefined *******pppppppuStack_3f0;
  undefined ********ppppppppuStack_3e8;
  undefined ********ppppppppuStack_3e0;
  undefined ********ppppppppuStack_3d8;
  long lStack_3c0;
  undefined ********ppppppppuStack_3b0;
  undefined ********ppppppppuStack_3a8;
  undefined ********ppppppppuStack_3a0;
  undefined ********ppppppppuStack_398;
  undefined ********ppppppppuStack_390;
  undefined ********ppppppppuStack_388;
  undefined ********ppppppppuStack_380;
  undefined ********ppppppppuStack_378;
  undefined ********ppppppppuStack_370;
  undefined ********ppppppppuStack_368;
  undefined1 **ppuStack_360;
  code *pcStack_358;
  undefined *******pppppppuStack_348;
  undefined ********ppppppppuStack_340;
  undefined ********ppppppppuStack_338;
  long lStack_330;
  undefined ********ppppppppuStack_328;
  undefined ********ppppppppuStack_320;
  undefined ********ppppppppuStack_318;
  undefined ********ppppppppuStack_310;
  undefined ********ppppppppuStack_300;
  undefined ********ppppppppuStack_2f8;
  undefined ********ppppppppuStack_2f0;
  undefined ********ppppppppuStack_2e8;
  undefined *******pppppppuStack_2e0;
  undefined ********ppppppppuStack_2d8;
  undefined ********appppppppuStack_2d0 [2];
  char cStack_2b9;
  undefined ********ppppppppuStack_2b8;
  undefined ********ppppppppuStack_2b0;
  undefined7 uStack_2a8;
  byte bStack_2a1;
  undefined ********ppppppppuStack_2a0;
  undefined ********ppppppppuStack_298;
  undefined *******pppppppuStack_290;
  undefined *******pppppppuStack_288;
  undefined8 *puStack_280;
  long lStack_250;
  undefined ********ppppppppuStack_240;
  undefined ********ppppppppuStack_238;
  undefined ********ppppppppuStack_230;
  undefined ********ppppppppuStack_228;
  undefined ********ppppppppuStack_220;
  undefined ********ppppppppuStack_218;
  undefined ********ppppppppuStack_210;
  undefined ********ppppppppuStack_208;
  undefined ********ppppppppuStack_200;
  undefined ********ppppppppuStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined ********ppppppppuStack_1d8;
  long lStack_1d0;
  undefined *******pppppppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined ********ppppppppuStack_1b0;
  undefined ********ppppppppuStack_1a8;
  undefined ********ppppppppuStack_1a0;
  undefined ********ppppppppuStack_198;
  undefined ********ppppppppuStack_190;
  undefined7 uStack_188;
  char cStack_181;
  undefined ********ppppppppuStack_180;
  undefined ********ppppppppuStack_178;
  undefined ********ppppppppuStack_170;
  undefined ********ppppppppuStack_168;
  undefined ********ppppppppuStack_160;
  undefined ********ppppppppuStack_158;
  undefined ********appppppppuStack_150 [2];
  char cStack_139;
  undefined ********ppppppppuStack_138;
  undefined ********ppppppppuStack_130;
  byte bStack_121;
  undefined *******pppppppuStack_120;
  undefined ********ppppppppuStack_118;
  undefined ********ppppppppuStack_110;
  undefined ********ppppppppuStack_108;
  undefined *******pppppppuStack_100;
  undefined ********ppppppppuStack_f8;
  undefined ********ppppppppuStack_f0;
  undefined ********ppppppppuStack_e8;
  undefined ********ppppppppuStack_e0;
  undefined ********ppppppppuStack_d8;
  undefined ********ppppppppuStack_d0;
  undefined ********ppppppppuStack_c8;
  undefined *******pppppppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar23 = (undefined ********)param_1[0xaf];
  ppppppppuStack_118 = (undefined ********)param_1[0xaf];
  pppppppuStack_120 = param_1[0xae];
  if (ppppppppuVar23 != (undefined ********)0x0) {
    ppppppppuVar12 = ppppppppuVar23 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
      if (bVar6) {
        *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppppppuVar12 = param_1;
  if (0 < *(int *)(param_2 + 1)) {
    lVar15 = 0;
    pppppppuStack_1c8 = param_2[2];
    unaff_x25 = (undefined ********)&ppppppppuStack_110;
    ppppppppuVar23 = param_2;
    ppppppppuStack_1d8 = param_2;
    do {
      if (*(int *)param_1[0x3d] == 4) break;
      pppppppuVar16 = *ppppppppuVar23 + lVar15 * 4;
      unaff_x26 = (undefined ********)pppppppuVar16[1];
      uVar3 = *(uint *)(pppppppuVar16 + 2);
      ppppppuVar25 = pppppppuVar16[3];
      lStack_1d0 = lVar15;
      func_0x000107c2b054(&ppppppppuStack_138,*pppppppuVar16);
      func_0x000107c2b054(appppppppuStack_150,ppppppuVar25);
      param_3 = (undefined ********)appppppppuStack_150;
      FUN_10a87a708(&ppppppppuStack_160,param_1,param_3);
      ppppppppuVar7 = (undefined ********)0x48;
      __Znwm();
      pppppppuVar16 = pppppppuStack_120;
      ppppppppuVar7[1] = (undefined *******)0x0;
      ppppppppuVar7[2] = (undefined *******)0x0;
      ppppppppuStack_170 = ppppppppuVar7 + 3;
      *ppppppppuStack_170 = (undefined *******)&PTR_DAT_110c23c80;
      *ppppppppuVar7 = (undefined *******)&PTR_DAT_110c253b0;
      ppppppppuVar7[4] = (undefined *******)0x0;
      ppppppppuVar7[5] = (undefined *******)0x0;
      ppppppppuVar7[7] = (undefined *******)ppppppppuStack_158;
      ppppppppuVar7[6] = (undefined *******)ppppppppuStack_160;
      if (ppppppppuStack_158 != (undefined ********)0x0) {
        ppppppppuVar23 = ppppppppuStack_158 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
          if (bVar6) {
            *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppppppuVar7[8] = pppppppuStack_1c8;
      pppppppuVar26 = pppppppuStack_120 + 7;
      ppppppppuStack_168 = ppppppppuVar7;
      FUN_10a8abef0(pppppppuVar26,&ppppppppuStack_138);
      if (pppppppuVar26 == (undefined *******)0x0) {
        FUN_10ae03140();
        unaff_x20 = &PTR_PTR_113303f48;
        unaff_x23 = unaff_x20;
        FUN_10ae079a0();
        param_3 = ppppppppuStack_130;
        if (-1 < (char)bStack_121) {
          param_3 = (undefined ********)(ulong)bStack_121;
        }
        FUN_10ae0314c();
        ppppppppuVar12 = (undefined ********)unaff_x23;
        param_2 = (undefined ********)unaff_x20;
        FUN_10ae07cd4();
        ppppppppuVar23 = ppppppppuStack_1d8;
LAB_10a86b398:
        ppppppppuVar10 = ppppppppuVar7 + 1;
        do {
          pppppppuVar16 = *ppppppppuVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
          if (bVar6) {
            *ppppppppuVar10 = (undefined *******)((long)pppppppuVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppppuVar16 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuVar7)[2])(ppppppppuVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar12 = ppppppppuVar7;
        }
      }
      else {
        param_2 = (undefined ********)pppppppuVar26[5];
        ppppppppuVar7 = (undefined ********)pppppppuVar26[6];
        if (ppppppppuVar7 != (undefined ********)0x0) {
          ppppppppuVar23 = ppppppppuVar7 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
            if (bVar6) {
              *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppppppppuVar12 = (undefined ********)(pppppppuVar16 + 0xc);
        ppppppppuStack_180 = param_2;
        ppppppppuStack_178 = ppppppppuVar7;
        FUN_10a8aaad4();
        ppppppppuVar12[4][7] = (undefined ******)pppppppuStack_1c8;
        if (0 < (int)uVar3) {
          uVar22 = 0;
          do {
            ppppppppuVar23 = unaff_x26 + uVar22 * 3;
            pppppppuVar16 = ppppppppuVar23[1];
            pppppppuVar26 = ppppppppuVar23[2];
            func_0x000107c2b054(&ppppppppuStack_198,*ppppppppuVar23);
            ppppppppuStack_1b0 = (undefined ********)0x0;
            ppppppppuStack_1a8 = (undefined ********)0x0;
            ppppppppuStack_1a0 = (undefined ********)0x0;
            param_3 = (undefined ********)((long)pppppppuVar16 + (long)pppppppuVar26);
            func_0x000107c2b048(&ppppppppuStack_1b0,pppppppuVar16,param_3,pppppppuVar26);
            unaff_x23 = (undefined **)ppppppppuStack_158;
            unaff_x20 = (undefined **)ppppppppuStack_160;
            if (ppppppppuStack_1a8 == ppppppppuStack_1b0) {
              ppuVar8 = (undefined **)0x70;
              __Znwm();
              ppuVar24 = ppuVar8 + 1;
              *ppuVar24 = (undefined *)0x0;
              ppuVar8[2] = (undefined *)0x0;
              *ppuVar8 = (undefined *)&PTR_DAT_110c25430;
              ppppppppuStack_110 = (undefined ********)unaff_x20;
              ppppppppuStack_108 = (undefined ********)unaff_x23;
              if ((undefined ********)unaff_x23 != (undefined ********)0x0) {
                ppppppppuVar23 = (undefined ********)(unaff_x23 + 1);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
                  if (bVar6) {
                    *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              ppuVar8[4] = (undefined *)0x0;
              ppuVar8[5] = (undefined *)0x0;
              ppuVar8[3] = (undefined *)&PTR_DAT_110c23dd0;
              ppuVar8[7] = (undefined *)ppppppppuStack_178;
              ppuVar8[6] = (undefined *)ppppppppuStack_180;
              if (ppppppppuStack_178 != (undefined ********)0x0) {
                ppppppppuVar23 = ppppppppuStack_178 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
                  if (bVar6) {
                    *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              if (cStack_181 < '\0') {
                param_3 = ppppppppuStack_190;
                func_0x000107c3192c(ppuVar8 + 8,ppppppppuStack_198,ppppppppuStack_190);
              }
              else {
                ppuVar8[9] = (undefined *)ppppppppuStack_190;
                ppuVar8[8] = (undefined *)ppppppppuStack_198;
                ppuVar8[10] = (undefined *)CONCAT17(cStack_181,uStack_188);
              }
              ppuVar8[0xb] = (undefined *)unaff_x20;
              ppuVar8[0xc] = (undefined *)unaff_x23;
              if ((undefined ********)unaff_x23 == (undefined ********)0x0) {
                ppuVar8[0xd] = (undefined *)pppppppuStack_1c8;
              }
              else {
                ppppppppuVar23 = (undefined ********)(unaff_x23 + 1);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
                  if (bVar6) {
                    *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                ppuVar8[0xd] = (undefined *)pppppppuStack_1c8;
                do {
                  pppppppuVar16 = *ppppppppuVar23;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
                  if (bVar6) {
                    *ppppppppuVar23 = (undefined *******)((long)pppppppuVar16 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (pppppppuVar16 == (undefined *******)0x0) {
                  (*(code *)*(undefined *******)((long)*unaff_x23 + 0x10))(unaff_x23);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x23);
                }
              }
              pppppppuStack_100 = (undefined *******)(ppuVar8 + 3);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
                if (bVar6) {
                  *ppuVar24 = *ppuVar24 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              ppppppppuStack_110 = (undefined ********)FUN_10a8aea14;
              ppppppppuStack_108 = (undefined ********)&PTR_DAT_110c25488;
              uStack_1c0 = 0;
              uStack_1b8 = 0;
              param_2 = (undefined ********)&ppppppppuStack_110;
              ppppppppuStack_f8 = (undefined ********)ppuVar8;
              pppppppuStack_b8 = pppppppuStack_100;
              ppuStack_b0 = ppuVar8;
              FUN_10a860860(param_1);
              (*(code *)*ppppppppuStack_108)(&ppppppppuStack_108);
              do {
                puVar18 = *ppuVar24;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
                if (bVar6) {
                  *ppuVar24 = puVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar18 == (undefined *)0x0) {
                (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
              }
            }
            else {
              if (cStack_181 < '\0') {
                param_3 = ppppppppuStack_190;
                func_0x000107c3192c(&ppppppppuStack_110,ppppppppuStack_198,ppppppppuStack_190);
              }
              else {
                ppppppppuStack_108 = ppppppppuStack_190;
                ppppppppuStack_110 = ppppppppuStack_198;
                pppppppuStack_100 = (undefined *******)CONCAT17(cStack_181,uStack_188);
              }
              unaff_x23 = (undefined **)ppppppppuStack_1a0;
              ppppppppuVar23 = ppppppppuStack_1a8;
              unaff_x20 = (undefined **)ppppppppuStack_1b0;
              ppppppppuStack_f0 = ppppppppuStack_178;
              ppppppppuStack_f8 = ppppppppuStack_180;
              if (ppppppppuStack_178 != (undefined ********)0x0) {
                ppppppppuVar12 = ppppppppuStack_178 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
                  if (bVar6) {
                    *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              ppppppppuStack_e0 = ppppppppuStack_168;
              ppppppppuStack_e8 = ppppppppuStack_170;
              if (ppppppppuStack_168 != (undefined ********)0x0) {
                ppppppppuVar12 = ppppppppuStack_168 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
                  if (bVar6) {
                    *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              ppppppppuStack_d8 = ppppppppuStack_1b0;
              ppppppppuStack_d0 = ppppppppuStack_1a8;
              ppppppppuStack_c8 = ppppppppuStack_1a0;
              ppppppppuStack_1b0 = (undefined ********)0x0;
              ppppppppuStack_1a8 = (undefined ********)0x0;
              ppppppppuStack_1a0 = (undefined ********)0x0;
              pppppppuStack_b8 = (undefined *******)FUN_10a8adf1c;
              ppuStack_b0 = &PTR_FUN_110c25408;
              puVar9 = (undefined8 *)0x50;
              __Znwm();
              puVar9[1] = ppppppppuStack_108;
              *puVar9 = ppppppppuStack_110;
              puVar9[2] = pppppppuStack_100;
              ppppppppuStack_108 = (undefined ********)0x0;
              pppppppuStack_100 = (undefined *******)0x0;
              ppppppppuStack_110 = (undefined ********)0x0;
              puVar9[4] = ppppppppuStack_f0;
              puVar9[3] = ppppppppuStack_f8;
              ppppppppuStack_f8 = (undefined ********)0x0;
              ppppppppuStack_f0 = (undefined ********)0x0;
              puVar9[6] = ppppppppuStack_e0;
              puVar9[5] = ppppppppuStack_e8;
              ppppppppuStack_e8 = (undefined ********)0x0;
              ppppppppuStack_e0 = (undefined ********)0x0;
              puVar9[7] = unaff_x20;
              puVar9[8] = ppppppppuVar23;
              puVar9[9] = unaff_x23;
              ppppppppuStack_d8 = (undefined ********)0x0;
              ppppppppuStack_d0 = (undefined ********)0x0;
              ppppppppuStack_c8 = (undefined ********)0x0;
              param_2 = &pppppppuStack_b8;
              puStack_a8 = puVar9;
              FUN_10a860860(param_1);
              (*(code *)*ppuStack_b0)(&ppuStack_b0);
              if (ppppppppuStack_d8 != (undefined ********)0x0) {
                ppppppppuStack_d0 = ppppppppuStack_d8;
                __ZdlPv();
              }
              ppppppppuVar23 = ppppppppuStack_e0;
              if (ppppppppuStack_e0 != (undefined ********)0x0) {
                plVar1 = (long *)(ppppppppuStack_e0 + 1);
                do {
                  lVar15 = *plVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = lVar15 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar15 == 0) {
                  (**(code **)((long)*ppppppppuStack_e0 + 0x10))(ppppppppuStack_e0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar23);
                }
              }
              ppppppppuVar23 = ppppppppuStack_f0;
              if (ppppppppuStack_f0 != (undefined ********)0x0) {
                plVar1 = (long *)(ppppppppuStack_f0 + 1);
                do {
                  lVar15 = *plVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = lVar15 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar15 == 0) {
                  (**(code **)((long)*ppppppppuStack_f0 + 0x10))(ppppppppuStack_f0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar23);
                }
              }
              if ((long)pppppppuStack_100 < 0) {
                __ZdlPv(ppppppppuStack_110);
              }
            }
            ppppppppuVar12 = ppppppppuStack_1b0;
            if (ppppppppuStack_1b0 != (undefined ********)0x0) {
              ppppppppuStack_1a8 = ppppppppuStack_1b0;
              __ZdlPv();
            }
            if (cStack_181 < '\0') {
              ppppppppuVar12 = ppppppppuStack_198;
              __ZdlPv();
            }
            uVar22 = uVar22 + 1;
            ppppppppuVar7 = ppppppppuStack_178;
          } while (uVar22 != uVar3);
        }
        ppppppppuVar23 = ppppppppuStack_1d8;
        if (ppppppppuVar7 != (undefined ********)0x0) {
          ppppppppuVar10 = ppppppppuVar7 + 1;
          do {
            pppppppuVar16 = *ppppppppuVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
            if (bVar6) {
              *ppppppppuVar10 = (undefined *******)((long)pppppppuVar16 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (pppppppuVar16 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuVar7)[2])(ppppppppuVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuVar7;
          }
        }
        ppppppppuVar7 = ppppppppuStack_168;
        if (ppppppppuStack_168 != (undefined ********)0x0) goto LAB_10a86b398;
      }
      unaff_x22 = ppppppppuStack_158;
      if (ppppppppuStack_158 != (undefined ********)0x0) {
        ppppppppuVar7 = ppppppppuStack_158 + 1;
        do {
          pppppppuVar16 = *ppppppppuVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
          if (bVar6) {
            *ppppppppuVar7 = (undefined *******)((long)pppppppuVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppppuVar16 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_158)[2])(ppppppppuStack_158);
          ppppppppuVar12 = unaff_x22;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (cStack_139 < '\0') {
        ppppppppuVar12 = appppppppuStack_150[0];
        __ZdlPv();
      }
      if ((char)bStack_121 < '\0') {
        ppppppppuVar12 = ppppppppuStack_138;
        __ZdlPv();
      }
      lVar15 = lStack_1d0 + 1;
    } while (lVar15 < *(int *)(ppppppppuVar23 + 1));
    unaff_x27 = (undefined ********)&ppppppppuStack_110;
    unaff_x28 = (code *)0x18;
    ppppppppuVar23 = ppppppppuStack_118;
  }
  if (ppppppppuVar23 != (undefined ********)0x0) {
    ppppppppuVar7 = ppppppppuVar23 + 1;
    do {
      pppppppuVar16 = *ppppppppuVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
      if (bVar6) {
        *ppppppppuVar7 = (undefined *******)((long)pppppppuVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppppuVar16 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuVar23)[2])(ppppppppuVar23);
      ppppppppuVar12 = ppppppppuVar23;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppppppppuVar12;
  }
  ___stack_chk_fail();
  FUN_10a8931d4(&pppppppuStack_120);
  ppppppppuVar7 = ppppppppuVar12;
  __Unwind_Resume();
  ppppppppuStack_240 = (undefined ********)unaff_x28;
  ppppppppuStack_238 = unaff_x27;
  ppppppppuStack_230 = unaff_x26;
  ppppppppuStack_228 = unaff_x25;
  ppppppppuStack_220 = param_1;
  ppppppppuStack_218 = (undefined ********)unaff_x23;
  ppppppppuStack_210 = unaff_x22;
  ppppppppuStack_208 = ppppppppuVar23;
  ppppppppuStack_200 = (undefined ********)unaff_x20;
  ppppppppuStack_1f8 = ppppppppuVar12;
  puStack_1f0 = &stack0xfffffffffffffff0;
  pcStack_1e8 = FUN_10a86b5d4;
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar23 = (undefined ********)ppppppppuVar7[0xaf];
  ppppppppuStack_298 = (undefined ********)ppppppppuVar7[0xaf];
  ppppppppuStack_2a0 = (undefined ********)ppppppppuVar7[0xae];
  if (ppppppppuVar23 != (undefined ********)0x0) {
    ppppppppuVar12 = ppppppppuVar23 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
      if (bVar6) {
        *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppppppuVar12 = ppppppppuVar7;
  ppuVar8 = (undefined **)param_2;
  if (0 < *(int *)(param_2 + 1)) {
    unaff_x26 = (undefined ********)0x0;
    pppppppuStack_348 = param_2[2];
    do {
      ppppppppuVar23 = ppppppppuStack_298;
      if (*(int *)ppppppppuVar7[0x3d] == 4) break;
      ppppppuVar25 = (*param_2 + (long)unaff_x26 * 2)[1];
      func_0x000107c2b054(&ppppppppuStack_2b8,(*param_2)[(long)unaff_x26 * 2]);
      func_0x000107c2b054(appppppppuStack_2d0,ppppppuVar25);
      param_3 = (undefined ********)appppppppuStack_2d0;
      FUN_10a87a708(&pppppppuStack_2e0,ppppppppuVar7,param_3);
      unaff_x25 = (undefined ********)0x48;
      __Znwm();
      unaff_x27 = ppppppppuStack_2a0;
      ppppppppuVar12 = unaff_x25 + 1;
      *ppppppppuVar12 = (undefined *******)0x0;
      unaff_x25[2] = (undefined *******)0x0;
      ppppppppuVar23 = unaff_x25 + 3;
      *ppppppppuVar23 = (undefined *******)&PTR_DAT_110c23cf0;
      *unaff_x25 = (undefined *******)&PTR_DAT_110c25330;
      unaff_x25[4] = (undefined *******)0x0;
      unaff_x25[5] = (undefined *******)0x0;
      unaff_x25[7] = (undefined *******)ppppppppuStack_2d8;
      unaff_x25[6] = pppppppuStack_2e0;
      if (ppppppppuStack_2d8 != (undefined ********)0x0) {
        ppppppppuVar10 = ppppppppuStack_2d8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
          if (bVar6) {
            *ppppppppuVar10 = (undefined *******)((long)*ppppppppuVar10 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      unaff_x25[8] = pppppppuStack_348;
      ppppppppuVar10 = ppppppppuStack_2a0 + 7;
      ppppppppuStack_2f0 = ppppppppuVar23;
      ppppppppuStack_2e8 = unaff_x25;
      FUN_10a8abef0(ppppppppuVar10,&ppppppppuStack_2b8);
      if (ppppppppuVar10 == (undefined ********)0x0) {
        FUN_10ae03140();
        ppuVar8 = &PTR_PTR_113303f48;
        unaff_x23 = ppuVar8;
        FUN_10ae079a0();
        param_3 = ppppppppuStack_2b0;
        if (-1 < (char)bStack_2a1) {
          param_3 = (undefined ********)(ulong)bStack_2a1;
        }
        FUN_10ae0314c();
        ppppppppuVar12 = (undefined ********)unaff_x23;
        FUN_10ae07cd4();
LAB_10a86bb60:
        ppppppppuVar23 = unaff_x25 + 1;
        do {
          pppppppuVar16 = *ppppppppuVar23;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
          if (bVar6) {
            *ppppppppuVar23 = (undefined *******)((long)pppppppuVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppppuVar16 == (undefined *******)0x0) {
          (*(code *)(*unaff_x25)[2])(unaff_x25);
          ppppppppuVar12 = unaff_x25;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      else {
        unaff_x23 = (undefined **)ppppppppuVar10[5];
        unaff_x28 = (code *)ppppppppuVar10[6];
        if ((undefined ********)unaff_x28 != (undefined ********)0x0) {
          ppppppppuVar11 = (undefined ********)((long)unaff_x28 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
            if (bVar6) {
              *ppppppppuVar11 = (undefined *******)((long)*ppppppppuVar11 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pppppppuVar17 = unaff_x27[8];
        pppppppuVar16 = *ppppppppuVar10;
        pppppppuVar26 = ppppppppuVar10[1];
        puVar18 = (undefined *)((long)pppppppuVar17 + -1);
        if (((ulong)pppppppuVar17 & (ulong)puVar18) == 0) {
          pppppppuVar26 = (undefined *******)((ulong)puVar18 & (ulong)pppppppuVar26);
        }
        else if (pppppppuVar17 <= pppppppuVar26) {
          uVar22 = 0;
          if (pppppppuVar17 != (undefined *******)0x0) {
            uVar22 = (ulong)pppppppuVar26 / (ulong)pppppppuVar17;
          }
          pppppppuVar26 = (undefined *******)((long)pppppppuVar26 - uVar22 * (long)pppppppuVar17);
        }
        ppppppppuVar11 = (undefined ********)unaff_x27[7][(long)pppppppuVar26];
        do {
          ppppppppuVar20 = ppppppppuVar11;
          ppppppppuVar11 = (undefined ********)*ppppppppuVar20;
        } while ((undefined ********)*ppppppppuVar20 != ppppppppuVar10);
        if (ppppppppuVar20 == unaff_x27 + 9) {
LAB_10a86b804:
          if (pppppppuVar16 == (undefined *******)0x0) {
LAB_10a86b838:
            unaff_x27[7][(long)pppppppuVar26] = (undefined ******)0x0;
            pppppppuVar16 = *ppppppppuVar10;
            goto LAB_10a86b840;
          }
          pppppppuVar19 = (undefined *******)pppppppuVar16[1];
          if (((ulong)pppppppuVar17 & (ulong)puVar18) == 0) {
            pppppppuVar21 = (undefined *******)((ulong)pppppppuVar19 & (ulong)puVar18);
          }
          else {
            pppppppuVar21 = pppppppuVar19;
            if (pppppppuVar17 <= pppppppuVar19) {
              uVar22 = 0;
              if (pppppppuVar17 != (undefined *******)0x0) {
                uVar22 = (ulong)pppppppuVar19 / (ulong)pppppppuVar17;
              }
              pppppppuVar21 =
                   (undefined *******)((long)pppppppuVar19 - uVar22 * (long)pppppppuVar17);
            }
          }
          if (pppppppuVar21 != pppppppuVar26) goto LAB_10a86b838;
LAB_10a86b848:
          if (((ulong)pppppppuVar17 & (ulong)puVar18) == 0) {
            pppppppuVar19 = (undefined *******)((ulong)pppppppuVar19 & (ulong)puVar18);
          }
          else if (pppppppuVar17 <= pppppppuVar19) {
            uVar22 = 0;
            if (pppppppuVar17 != (undefined *******)0x0) {
              uVar22 = (ulong)pppppppuVar19 / (ulong)pppppppuVar17;
            }
            pppppppuVar19 = (undefined *******)((long)pppppppuVar19 - uVar22 * (long)pppppppuVar17);
          }
          if (pppppppuVar19 != pppppppuVar26) {
            unaff_x27[7][(long)pppppppuVar19] = (undefined ******)ppppppppuVar20;
            pppppppuVar16 = *ppppppppuVar10;
          }
        }
        else {
          pppppppuVar19 = ppppppppuVar20[1];
          if (((ulong)pppppppuVar17 & (ulong)puVar18) == 0) {
            pppppppuVar19 = (undefined *******)((ulong)pppppppuVar19 & (ulong)puVar18);
          }
          else if (pppppppuVar17 <= pppppppuVar19) {
            uVar22 = 0;
            if (pppppppuVar17 != (undefined *******)0x0) {
              uVar22 = (ulong)pppppppuVar19 / (ulong)pppppppuVar17;
            }
            pppppppuVar19 = (undefined *******)((long)pppppppuVar19 - uVar22 * (long)pppppppuVar17);
          }
          if (pppppppuVar19 != pppppppuVar26) goto LAB_10a86b804;
LAB_10a86b840:
          if (pppppppuVar16 != (undefined *******)0x0) {
            pppppppuVar19 = (undefined *******)pppppppuVar16[1];
            goto LAB_10a86b848;
          }
        }
        *ppppppppuVar20 = pppppppuVar16;
        *ppppppppuVar10 = (undefined *******)0x0;
        unaff_x27[10] = (undefined *******)((long)unaff_x27[10] + -1);
        ppppppppuStack_300 = (undefined ********)unaff_x23;
        ppppppppuStack_2f8 = (undefined ********)unaff_x28;
        FUN_10a89313c(ppppppppuVar10 + 2);
        __ZdlPv(ppppppppuVar10);
        ppppppppuVar11 = unaff_x27 + 0xc;
        FUN_10a8aaad4(ppppppppuVar11,unaff_x23);
        param_1 = ppppppppuVar10;
        if (ppppppppuVar11 != (undefined ********)0x0) {
          pppppppuVar26 = unaff_x27[0xd];
          pppppppuVar16 = ppppppppuVar11[1];
          puVar18 = (undefined *)((long)pppppppuVar26 + -1);
          if (((ulong)pppppppuVar26 & (ulong)puVar18) == 0) {
            pppppppuVar16 = (undefined *******)((ulong)puVar18 & (ulong)pppppppuVar16);
          }
          else if (pppppppuVar26 <= pppppppuVar16) {
            uVar22 = 0;
            if (pppppppuVar26 != (undefined *******)0x0) {
              uVar22 = (ulong)pppppppuVar16 / (ulong)pppppppuVar26;
            }
            pppppppuVar16 = (undefined *******)((long)pppppppuVar16 - uVar22 * (long)pppppppuVar26);
          }
          pppppppuVar17 = *ppppppppuVar11;
          ppppppppuVar10 = (undefined ********)unaff_x27[0xc][(long)pppppppuVar16];
          do {
            ppppppppuVar20 = ppppppppuVar10;
            ppppppppuVar10 = (undefined ********)*ppppppppuVar20;
          } while ((undefined ********)*ppppppppuVar20 != ppppppppuVar11);
          if (ppppppppuVar20 == unaff_x27 + 0xe) {
LAB_10a86b934:
            if (pppppppuVar17 == (undefined *******)0x0) {
LAB_10a86b968:
              unaff_x27[0xc][(long)pppppppuVar16] = (undefined ******)0x0;
              pppppppuVar17 = *ppppppppuVar11;
              goto LAB_10a86b970;
            }
            pppppppuVar19 = (undefined *******)pppppppuVar17[1];
            if (((ulong)pppppppuVar26 & (ulong)puVar18) == 0) {
              pppppppuVar21 = (undefined *******)((ulong)pppppppuVar19 & (ulong)puVar18);
            }
            else {
              pppppppuVar21 = pppppppuVar19;
              if (pppppppuVar26 <= pppppppuVar19) {
                uVar22 = 0;
                if (pppppppuVar26 != (undefined *******)0x0) {
                  uVar22 = (ulong)pppppppuVar19 / (ulong)pppppppuVar26;
                }
                pppppppuVar21 =
                     (undefined *******)((long)pppppppuVar19 - uVar22 * (long)pppppppuVar26);
              }
            }
            if (pppppppuVar21 != pppppppuVar16) goto LAB_10a86b968;
LAB_10a86b978:
            if (((ulong)pppppppuVar26 & (ulong)puVar18) == 0) {
              pppppppuVar19 = (undefined *******)((ulong)pppppppuVar19 & (ulong)puVar18);
            }
            else if (pppppppuVar26 <= pppppppuVar19) {
              uVar22 = 0;
              if (pppppppuVar26 != (undefined *******)0x0) {
                uVar22 = (ulong)pppppppuVar19 / (ulong)pppppppuVar26;
              }
              pppppppuVar19 =
                   (undefined *******)((long)pppppppuVar19 - uVar22 * (long)pppppppuVar26);
            }
            if (pppppppuVar19 != pppppppuVar16) {
              unaff_x27[0xc][(long)pppppppuVar19] = (undefined ******)ppppppppuVar20;
              pppppppuVar17 = *ppppppppuVar11;
            }
          }
          else {
            pppppppuVar19 = ppppppppuVar20[1];
            if (((ulong)pppppppuVar26 & (ulong)puVar18) == 0) {
              pppppppuVar19 = (undefined *******)((ulong)pppppppuVar19 & (ulong)puVar18);
            }
            else if (pppppppuVar26 <= pppppppuVar19) {
              uVar22 = 0;
              if (pppppppuVar26 != (undefined *******)0x0) {
                uVar22 = (ulong)pppppppuVar19 / (ulong)pppppppuVar26;
              }
              pppppppuVar19 =
                   (undefined *******)((long)pppppppuVar19 - uVar22 * (long)pppppppuVar26);
            }
            if (pppppppuVar19 != pppppppuVar16) goto LAB_10a86b934;
LAB_10a86b970:
            if (pppppppuVar17 != (undefined *******)0x0) {
              pppppppuVar19 = (undefined *******)pppppppuVar17[1];
              goto LAB_10a86b978;
            }
          }
          *ppppppppuVar20 = pppppppuVar17;
          *ppppppppuVar11 = (undefined *******)0x0;
          unaff_x27[0xf] = (undefined *******)((long)unaff_x27[0xf] + -1);
          func_0x00010a8835b0(ppppppppuVar11 + 4);
          FUN_10a297544(ppppppppuVar11 + 2);
          __ZdlPv(ppppppppuVar11);
          param_1 = ppppppppuVar11;
        }
        if ((char)bStack_2a1 < '\0') {
          param_3 = ppppppppuStack_2b0;
          func_0x000107c3192c(&ppppppppuStack_340,ppppppppuStack_2b8,ppppppppuStack_2b0);
        }
        else {
          ppppppppuStack_338 = ppppppppuStack_2b0;
          ppppppppuStack_340 = ppppppppuStack_2b8;
          lStack_330 = CONCAT17(bStack_2a1,uStack_2a8);
        }
        if ((undefined ********)unaff_x28 != (undefined ********)0x0) {
          ppppppppuVar10 = (undefined ********)((long)unaff_x28 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
            if (bVar6) {
              *ppppppppuVar10 = (undefined *******)((long)*ppppppppuVar10 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
          if (bVar6) {
            *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        pppppppuStack_290 = (undefined *******)FUN_10a8ad478;
        pppppppuStack_288 = (undefined *******)&PTR_FUN_110c25388;
        puVar9 = (undefined8 *)0x38;
        ppppppppuStack_328 = (undefined ********)unaff_x23;
        ppppppppuStack_320 = (undefined ********)unaff_x28;
        ppppppppuStack_318 = ppppppppuVar23;
        ppppppppuStack_310 = unaff_x25;
        __Znwm();
        puVar9[1] = ppppppppuStack_338;
        *puVar9 = ppppppppuStack_340;
        puVar9[2] = lStack_330;
        ppppppppuStack_338 = (undefined ********)0x0;
        lStack_330 = 0;
        ppppppppuStack_340 = (undefined ********)0x0;
        puVar9[4] = ppppppppuStack_320;
        puVar9[3] = ppppppppuStack_328;
        ppppppppuStack_328 = (undefined ********)0x0;
        ppppppppuStack_320 = (undefined ********)0x0;
        puVar9[5] = ppppppppuVar23;
        puVar9[6] = unaff_x25;
        ppppppppuStack_318 = (undefined ********)0x0;
        ppppppppuStack_310 = (undefined ********)0x0;
        ppuVar8 = (undefined **)&pppppppuStack_290;
        puStack_280 = puVar9;
        FUN_10a860860(ppppppppuVar7);
        ppppppppuVar12 = &pppppppuStack_288;
        (*(code *)*pppppppuStack_288)();
        ppppppppuVar23 = ppppppppuStack_310;
        if (ppppppppuStack_310 != (undefined ********)0x0) {
          ppppppppuVar10 = ppppppppuStack_310 + 1;
          do {
            pppppppuVar16 = *ppppppppuVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
            if (bVar6) {
              *ppppppppuVar10 = (undefined *******)((long)pppppppuVar16 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (pppppppuVar16 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_310)[2])(ppppppppuStack_310);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuVar23;
          }
        }
        ppppppppuVar23 = ppppppppuStack_320;
        if (ppppppppuStack_320 != (undefined ********)0x0) {
          ppppppppuVar10 = ppppppppuStack_320 + 1;
          do {
            pppppppuVar16 = *ppppppppuVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
            if (bVar6) {
              *ppppppppuVar10 = (undefined *******)((long)pppppppuVar16 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (pppppppuVar16 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_320)[2])(ppppppppuStack_320);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuVar23;
          }
        }
        if (lStack_330 < 0) {
          ppppppppuVar12 = ppppppppuStack_340;
          __ZdlPv();
        }
        ppppppppuVar23 = ppppppppuStack_2f8;
        if (ppppppppuStack_2f8 != (undefined ********)0x0) {
          ppppppppuVar10 = ppppppppuStack_2f8 + 1;
          do {
            pppppppuVar16 = *ppppppppuVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
            if (bVar6) {
              *ppppppppuVar10 = (undefined *******)((long)pppppppuVar16 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (pppppppuVar16 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_2f8)[2])(ppppppppuStack_2f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuVar23;
          }
        }
        unaff_x25 = ppppppppuStack_2e8;
        if (ppppppppuStack_2e8 != (undefined ********)0x0) goto LAB_10a86bb60;
      }
      unaff_x22 = ppppppppuStack_2d8;
      if (ppppppppuStack_2d8 != (undefined ********)0x0) {
        ppppppppuVar23 = ppppppppuStack_2d8 + 1;
        do {
          pppppppuVar16 = *ppppppppuVar23;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
          if (bVar6) {
            *ppppppppuVar23 = (undefined *******)((long)pppppppuVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppppuVar16 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_2d8)[2])(ppppppppuStack_2d8);
          ppppppppuVar12 = unaff_x22;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (cStack_2b9 < '\0') {
        ppppppppuVar12 = appppppppuStack_2d0[0];
        __ZdlPv();
      }
      if ((char)bStack_2a1 < '\0') {
        ppppppppuVar12 = ppppppppuStack_2b8;
        __ZdlPv();
      }
      unaff_x26 = (undefined ********)((long)unaff_x26 + 1);
      ppppppppuVar23 = ppppppppuStack_298;
    } while ((long)unaff_x26 < (long)*(int *)(param_2 + 1));
  }
  if (ppppppppuVar23 != (undefined ********)0x0) {
    ppppppppuVar10 = ppppppppuVar23 + 1;
    do {
      pppppppuVar16 = *ppppppppuVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
      if (bVar6) {
        *ppppppppuVar10 = (undefined *******)((long)pppppppuVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppppuVar16 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuVar23)[2])(ppppppppuVar23);
      ppppppppuVar12 = ppppppppuVar23;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
    return ppppppppuVar12;
  }
  ___stack_chk_fail();
  FUN_10a297544(&ppppppppuStack_300);
  FUN_10a8ad420(&ppppppppuStack_2f0);
  func_0x00010a5c92ec(&pppppppuStack_2e0);
  if (cStack_2b9 < '\0') {
    __ZdlPv(appppppppuStack_2d0[0]);
  }
  if ((char)bStack_2a1 < '\0') {
    __ZdlPv(ppppppppuStack_2b8);
  }
  FUN_10a8931d4(&ppppppppuStack_2a0);
  ppppppppuVar10 = ppppppppuVar12;
  __Unwind_Resume();
  ppppppppuStack_3b0 = (undefined ********)unaff_x28;
  ppppppppuStack_3a8 = unaff_x27;
  ppppppppuStack_3a0 = unaff_x26;
  ppppppppuStack_398 = unaff_x25;
  ppppppppuStack_390 = param_1;
  ppppppppuStack_388 = (undefined ********)unaff_x23;
  ppppppppuStack_380 = unaff_x22;
  ppppppppuStack_378 = ppppppppuVar23;
  ppppppppuStack_370 = ppppppppuVar7;
  ppppppppuStack_368 = ppppppppuVar12;
  ppuStack_360 = &puStack_1f0;
  pcStack_358 = FUN_10a86bd04;
  lStack_3c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar24 = (undefined **)ppppppppuVar10[0xaf];
  ppppppppuStack_408 = (undefined ********)ppppppppuVar10[0xaf];
  ppppppppuStack_410 = (undefined ********)ppppppppuVar10[0xae];
  if ((undefined ********)ppuVar24 != (undefined ********)0x0) {
    ppppppppuVar23 = (undefined ********)(ppuVar24 + 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
      if (bVar6) {
        *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppppppuVar12 = ppppppppuVar10;
  ppppppppuVar23 = (undefined ********)ppuVar8;
  if (0 < *(int *)(ppuVar8 + 1)) {
    unaff_x27 = (undefined ********)0x0;
    unaff_x28 = (code *)ppuVar8[2];
    do {
      ppuVar24 = (undefined **)ppppppppuStack_408;
      if (*(int *)ppppppppuVar10[0x3d] == 4) break;
      pppppppuVar16 = (undefined *******)((long)*ppuVar8 + (long)unaff_x27 * 4 * 8);
      ppppppuVar27 = pppppppuVar16[2];
      ppppppuVar25 = pppppppuVar16[3];
      func_0x000107c2b054(&ppppppppuStack_428,*pppppppuVar16);
      ppppppppuStack_440 = (undefined ********)0x0;
      ppppppppuStack_438 = (undefined ********)0x0;
      uStack_430 = 0;
      if (ppppppuVar27 != (undefined ******)0x0) {
        func_0x000107c2c4dc(&ppppppppuStack_440,ppppppuVar27);
      }
      unaff_x23 = (undefined **)ppppppppuStack_410;
      ppppppppuVar23 = ppppppppuStack_410 + 7;
      FUN_10a8abef0(ppppppppuVar23,&ppppppppuStack_428);
      if (ppppppppuVar23 == (undefined ********)0x0) {
        unaff_x22 = (undefined ********)&ppppppppuStack_428;
        FUN_10ae03140();
        unaff_x23 = &PTR_PTR_113304890;
        FUN_10ae079a0();
        param_3 = ppppppppuStack_420;
        if (-1 < (char)bStack_411) {
          param_3 = (undefined ********)(ulong)bStack_411;
        }
        FUN_10ae0314c();
        ppppppppuVar12 = (undefined ********)unaff_x23;
        ppppppppuVar23 = (undefined ********)&PTR_PTR_113304890;
        FUN_10ae07cd4();
      }
      else {
        pppppppuStack_450 = ppppppppuVar23[5];
        param_1 = (undefined ********)ppppppppuVar23[6];
        if (param_1 != (undefined ********)0x0) {
          ppppppppuVar23 = param_1 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
            if (bVar6) {
              *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppppppppuVar23 = (undefined ********)(unaff_x23 + 0xc);
        ppppppppuStack_448 = param_1;
        FUN_10a8aaad4();
        if (ppppppppuVar23 == (undefined ********)0x0) {
          ppppppppuVar12 = (undefined ********)&PTR_PTR_1133048c8;
          FUN_10ae079a0();
          ppppppppuVar23 = (undefined ********)&PTR_PTR_1133048c8;
          FUN_10ae07cd4();
          unaff_x22 = (undefined ********)&PTR_PTR_1133048c8;
        }
        else {
          ppppppppuVar12 = ppppppppuStack_438;
          if (-1 < (long)uStack_430) {
            ppppppppuVar12 = (undefined ********)(uStack_430 >> 0x38);
          }
          pppppppuVar16 = ppppppppuVar23[4];
          if (ppppppppuVar12 == (undefined ********)0x0) {
            ppppppppuVar12 = (undefined ********)0xd0;
            __Znwm();
            ppppppppuVar7 = ppppppppuVar12 + 1;
            *ppppppppuVar7 = (undefined *******)0x0;
            ppppppppuVar12[2] = (undefined *******)0x0;
            *ppppppppuVar12 = (undefined *******)&PTR_FUN_110bf8238;
            ppppppppuVar12[0x17] = (undefined *******)0x0;
            ppppppppuVar12[0x16] = (undefined *******)0x0;
            ppppppppuVar12[0x19] = (undefined *******)0x0;
            ppppppppuVar12[0x18] = (undefined *******)0x0;
            ppppppppuVar12[3] = (undefined *******)&PTR_FUN_110c25680;
            ppppppppuVar12[9] = (undefined *******)0x0;
            ppppppppuVar12[8] = (undefined *******)0x0;
            ppppppppuVar12[0xb] = (undefined *******)0x0;
            ppppppppuVar12[10] = (undefined *******)0x0;
            ppppppppuVar12[0xd] = (undefined *******)0x0;
            ppppppppuVar12[0xc] = (undefined *******)0x0;
            ppppppppuVar12[0xf] = (undefined *******)0x0;
            ppppppppuVar12[0xe] = (undefined *******)0x0;
            ppppppppuVar12[5] = (undefined *******)0x0;
            ppppppppuVar12[4] = (undefined *******)0x0;
            ppppppppuVar12[7] = (undefined *******)0x0;
            ppppppppuVar12[6] = (undefined *******)0x0;
            ppppppppuVar12[0xe] = (undefined *******)0x0;
            ppppppppuVar12[0xf] = (undefined *******)0xffffffffffffffff;
            ppppppppuVar12[0x13] = (undefined *******)0x0;
            ppppppppuVar12[0x12] = (undefined *******)0x0;
            ppppppppuVar12[0x15] = (undefined *******)0x0;
            ppppppppuVar12[0x14] = (undefined *******)0x0;
            ppppppppuVar12[0x11] = (undefined *******)0x0;
            ppppppppuVar12[0x10] = (undefined *******)0x0;
            *(undefined1 *)(ppppppppuVar12 + 0x16) = 0;
            FUN_10a8602bc(pppppppuVar16 + 9,ppppppppuVar12 + 3,ppppppppuVar12);
            do {
              pppppppuVar16 = *ppppppppuVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
              if (bVar6) {
                *ppppppppuVar7 = (undefined *******)((long)pppppppuVar16 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            unaff_x25 = ppppppppuVar12;
            if (pppppppuVar16 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuVar12)[2])(ppppppppuVar12);
LAB_10a86bf80:
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar12);
            }
          }
          else {
            FUN_10a87a708(&pppppppuStack_400,ppppppppuVar10,&ppppppppuStack_440);
            ppppppppuVar12 = ppppppppuStack_3f8;
            FUN_10a8602bc(pppppppuVar16 + 9,pppppppuStack_400,ppppppppuStack_3f8);
            if (ppppppppuVar12 != (undefined ********)0x0) {
              ppppppppuVar7 = ppppppppuVar12 + 1;
              do {
                pppppppuVar16 = *ppppppppuVar7;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
                if (bVar6) {
                  *ppppppppuVar7 = (undefined *******)((long)pppppppuVar16 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (pppppppuVar16 == (undefined *******)0x0) {
                (*(code *)(*ppppppppuVar12)[2])(ppppppppuVar12);
                goto LAB_10a86bf80;
              }
            }
          }
          pppppppuVar16 = pppppppuStack_450;
          param_3 = ppppppppuStack_438;
          if (-1 < (long)uStack_430) {
            param_3 = (undefined ********)(uStack_430 >> 0x38);
          }
          uVar2 = 2;
          if (((ulong)ppppppuVar25 & 1) == 0) {
            uVar2 = param_3 == (undefined ********)0x0;
          }
          *(undefined1 *)((long)ppppppppuVar23[4] + 0x35) = uVar2;
          if (param_3 == (undefined ********)0x0) {
            bVar6 = false;
          }
          else {
            pppppppuVar26 = ppppppppuVar10[0x46];
            bVar4 = *(byte *)((long)pppppppuVar26 + 0x47);
            ppppppppuVar23 = (undefined ********)pppppppuVar26[7];
            if (-1 < (char)bVar4) {
              ppppppppuVar23 = (undefined ********)(ulong)bVar4;
            }
            if (param_3 == ppppppppuVar23) {
              ppppppppuVar23 = ppppppppuStack_440;
              if (-1 < (long)uStack_430) {
                ppppppppuVar23 = (undefined ********)&ppppppppuStack_440;
              }
              pppppppuVar17 = (undefined *******)pppppppuVar26[6];
              if (-1 < (char)bVar4) {
                pppppppuVar17 = pppppppuVar26 + 6;
              }
              _memcmp(ppppppppuVar23,pppppppuVar17);
              bVar6 = (int)ppppppppuVar23 != 0;
            }
            else {
              bVar6 = true;
            }
          }
          *(bool *)(pppppppuVar16 + 0xc) = bVar6;
          unaff_x26 = (undefined ********)0x40;
          __Znwm();
          unaff_x23 = (undefined **)(unaff_x26 + 1);
          *unaff_x23 = (undefined *)0x0;
          unaff_x26[2] = (undefined *******)0x0;
          *unaff_x26 = (undefined *******)&PTR_DAT_110c254b0;
          ppppppppuStack_460 = unaff_x26 + 3;
          *ppppppppuStack_460 = (undefined *******)&PTR_DAT_110c23d60;
          unaff_x26[4] = (undefined *******)0x0;
          unaff_x26[5] = (undefined *******)0x0;
          unaff_x26[6] = (undefined *******)unaff_x28;
          *(undefined1 *)(unaff_x26 + 7) = uVar2;
          if (ppppppppuStack_448 != (undefined ********)0x0) {
            ppppppppuVar23 = ppppppppuStack_448 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
              if (bVar6) {
                *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar6) {
              *unaff_x23 = (undefined *)((long)*unaff_x23 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          pppppppuStack_400 = (undefined *******)FUN_10a8af214;
          ppppppppuStack_3f8 = (undefined ********)&PTR_FUN_110c25508;
          pppppppuStack_3f0 = pppppppuVar16;
          ppppppppuStack_3e8 = ppppppppuStack_448;
          pppppppuStack_480 = (undefined *******)0x0;
          uStack_478 = 0;
          uStack_470 = 0;
          uStack_468 = 0;
          ppppppppuVar23 = &pppppppuStack_400;
          ppppppppuStack_458 = unaff_x26;
          ppppppppuStack_3e0 = ppppppppuStack_460;
          ppppppppuStack_3d8 = unaff_x26;
          FUN_10a860860(ppppppppuVar10);
          ppppppppuVar12 = (undefined ********)&ppppppppuStack_3f8;
          (*(code *)*ppppppppuStack_3f8)();
          do {
            pppppppuVar16 = (undefined *******)*unaff_x23;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar6) {
              *unaff_x23 = (undefined *)((long)pppppppuVar16 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          param_1 = ppppppppuStack_448;
          unaff_x22 = &pppppppuStack_480;
          if (pppppppuVar16 == (undefined *******)0x0) {
            (*(code *)(*unaff_x26)[2])(unaff_x26);
            ppppppppuVar12 = unaff_x26;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            param_1 = ppppppppuStack_448;
          }
        }
        if (param_1 != (undefined ********)0x0) {
          ppppppppuVar7 = param_1 + 1;
          do {
            pppppppuVar16 = *ppppppppuVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
            if (bVar6) {
              *ppppppppuVar7 = (undefined *******)((long)pppppppuVar16 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (pppppppuVar16 == (undefined *******)0x0) {
            (*(code *)(*param_1)[2])(param_1);
            ppppppppuVar12 = param_1;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      if ((long)uStack_430 < 0) {
        ppppppppuVar12 = ppppppppuStack_440;
        __ZdlPv();
      }
      if ((char)bStack_411 < '\0') {
        ppppppppuVar12 = ppppppppuStack_428;
        __ZdlPv();
      }
      unaff_x27 = (undefined ********)((long)unaff_x27 + 1);
      ppuVar24 = (undefined **)ppppppppuStack_408;
    } while ((long)unaff_x27 < (long)*(int *)(ppuVar8 + 1));
  }
  if ((undefined ********)ppuVar24 != (undefined ********)0x0) {
    ppppppppuVar7 = (undefined ********)(ppuVar24 + 1);
    do {
      pppppppuVar16 = *ppppppppuVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
      if (bVar6) {
        *ppppppppuVar7 = (undefined *******)((long)pppppppuVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppppuVar16 == (undefined *******)0x0) {
      (*(code *)*(undefined *******)((long)*ppuVar24 + 0x10))(ppuVar24);
      ppppppppuVar12 = (undefined ********)ppuVar24;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c0) {
    return ppppppppuVar12;
  }
  ___stack_chk_fail();
  FUN_10a297544(&pppppppuStack_450);
  if ((long)uStack_430 < 0) {
    __ZdlPv(ppppppppuStack_440);
  }
  if ((char)bStack_411 < '\0') {
    __ZdlPv(ppppppppuStack_428);
  }
  FUN_10a8931d4(&ppppppppuStack_410);
  ppppppppuVar11 = ppppppppuVar12;
  __Unwind_Resume();
  ppppppppuStack_4e0 = (undefined ********)unaff_x28;
  ppppppppuStack_4d8 = unaff_x27;
  ppppppppuStack_4d0 = unaff_x26;
  ppppppppuStack_4c8 = unaff_x25;
  ppppppppuStack_4c0 = param_1;
  ppppppppuStack_4b8 = (undefined ********)unaff_x23;
  ppppppppuStack_4b0 = unaff_x22;
  ppppppppuStack_4a8 = (undefined ********)ppuVar24;
  ppppppppuStack_4a0 = ppppppppuVar10;
  ppppppppuStack_498 = ppppppppuVar12;
  pppuStack_490 = &ppuStack_360;
  pcStack_488 = FUN_10a86c264;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar7 = ppppppppuVar11;
  ppppppppuVar12 = ppppppppuVar23;
  if (0 < *(int *)(ppppppppuVar23 + 1)) {
    unaff_x25 = (undefined ********)0x0;
    unaff_x26 = (undefined ********)0x0;
    unaff_x23 = &PTR_PTR_113303f80;
    unaff_x28 = FUN_10a8b0184;
    ppuVar24 = &PTR_DAT_110c25520;
    param_1 = &pppppppuStack_528;
    do {
      unaff_x27 = (undefined ********)&UNK_10e4df3e8;
      ppppppppuVar10 = ppppppppuVar11;
      if (*(int *)ppppppppuVar11[0x3d] == 4) break;
      uVar3 = *(uint *)((long)*ppppppppuVar23 + (long)unaff_x25);
      unaff_x22 = (undefined ********)(ulong)uVar3;
      ppppppppuStack_540 = (undefined ********)0x0;
      ppppppppuStack_538 = (undefined ********)0x0;
      lStack_530 = 0;
      if (*(long *)((uint *)((long)*ppppppppuVar23 + (long)unaff_x25) + 2) != 0) {
        func_0x000107c2c4dc(&ppppppppuStack_540);
      }
      switch(uVar3) {
      case 1:
      case 2:
      case 3:
      case 0x13:
        if (lStack_530 < 0) {
          param_3 = ppppppppuStack_538;
          func_0x000107c3192c(&ppppppppuStack_560,ppppppppuStack_540,ppppppppuStack_538);
        }
        else {
          ppppppppuStack_558 = ppppppppuStack_538;
          ppppppppuStack_560 = ppppppppuStack_540;
          lStack_550 = lStack_530;
        }
        pppppppuStack_528 = (undefined *******)FUN_10a8b0184;
        pppppppuStack_520 = (undefined *******)&PTR_DAT_110c25520;
        ppppppppuStack_510 = ppppppppuStack_558;
        ppppppppuStack_518 = ppppppppuStack_560;
        lStack_508 = lStack_550;
        ppppppppuStack_560 = (undefined ********)0x0;
        ppppppppuStack_558 = (undefined ********)0x0;
        lStack_550 = 0;
        ppppppppuVar12 = &pppppppuStack_528;
        uStack_548 = uVar3;
        uStack_500 = uVar3;
        FUN_10a860860(ppppppppuVar11,ppppppppuVar12);
        break;
      case 7:
      case 8:
      case 9:
        if (lStack_530 < 0) {
          param_3 = ppppppppuStack_538;
          func_0x000107c3192c(&ppppppppuStack_560,ppppppppuStack_540,ppppppppuStack_538);
        }
        else {
          ppppppppuStack_558 = ppppppppuStack_538;
          ppppppppuStack_560 = ppppppppuStack_540;
          lStack_550 = lStack_530;
        }
        pppppppuStack_528 = (undefined *******)FUN_10a8b041c;
        pppppppuStack_520 = (undefined *******)&PTR_FUN_110c25538;
        ppppppppuStack_510 = ppppppppuStack_558;
        ppppppppuStack_518 = ppppppppuStack_560;
        lStack_508 = lStack_550;
        ppppppppuStack_560 = (undefined ********)0x0;
        ppppppppuStack_558 = (undefined ********)0x0;
        lStack_550 = 0;
        ppppppppuVar12 = &pppppppuStack_528;
        uStack_548 = uVar3;
        uStack_500 = uVar3;
        FUN_10a860860(ppppppppuVar11,ppppppppuVar12);
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0x10:
      case 0x15:
        if (lStack_530 < 0) {
          param_3 = ppppppppuStack_538;
          func_0x000107c3192c(&ppppppppuStack_560,ppppppppuStack_540,ppppppppuStack_538);
        }
        else {
          ppppppppuStack_558 = ppppppppuStack_538;
          ppppppppuStack_560 = ppppppppuStack_540;
          lStack_550 = lStack_530;
        }
        pppppppuStack_528 = (undefined *******)FUN_10a8b0684;
        pppppppuStack_520 = (undefined *******)&PTR_FUN_110c25550;
        ppppppppuStack_510 = ppppppppuStack_558;
        ppppppppuStack_518 = ppppppppuStack_560;
        lStack_508 = lStack_550;
        ppppppppuStack_560 = (undefined ********)0x0;
        ppppppppuStack_558 = (undefined ********)0x0;
        lStack_550 = 0;
        ppppppppuVar12 = &pppppppuStack_528;
        uStack_548 = uVar3;
        uStack_500 = uVar3;
        FUN_10a860860(ppppppppuVar11,ppppppppuVar12);
        break;
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x11:
        if (lStack_530 < 0) {
          param_3 = ppppppppuStack_538;
          func_0x000107c3192c(&ppppppppuStack_560,ppppppppuStack_540,ppppppppuStack_538);
        }
        else {
          ppppppppuStack_558 = ppppppppuStack_538;
          ppppppppuStack_560 = ppppppppuStack_540;
          lStack_550 = lStack_530;
        }
        pppppppuStack_528 = (undefined *******)FUN_10a8b0ea4;
        pppppppuStack_520 = (undefined *******)&PTR_FUN_110c25580;
        ppppppppuStack_510 = ppppppppuStack_558;
        ppppppppuStack_518 = ppppppppuStack_560;
        lStack_508 = lStack_550;
        ppppppppuStack_560 = (undefined ********)0x0;
        ppppppppuStack_558 = (undefined ********)0x0;
        lStack_550 = 0;
        uStack_548 = uVar3;
        uStack_500 = uVar3;
        FUN_10a860860(ppppppppuVar11,&pppppppuStack_528);
        (*(code *)*pppppppuStack_520)(&pppppppuStack_520);
        if (lStack_550 < 0) {
          __ZdlPv(ppppppppuStack_560);
        }
      case 4:
      case 5:
      case 6:
      case 0x12:
      case 0x17:
      case 0x18:
        if (lStack_530 < 0) {
          param_3 = ppppppppuStack_538;
          func_0x000107c3192c(&ppppppppuStack_560,ppppppppuStack_540,ppppppppuStack_538);
        }
        else {
          ppppppppuStack_558 = ppppppppuStack_538;
          ppppppppuStack_560 = ppppppppuStack_540;
          lStack_550 = lStack_530;
        }
        pppppppuStack_528 = (undefined *******)FUN_10a8b12b4;
        pppppppuStack_520 = (undefined *******)&PTR_FUN_110c25598;
        ppppppppuStack_510 = ppppppppuStack_558;
        ppppppppuStack_518 = ppppppppuStack_560;
        lStack_508 = lStack_550;
        ppppppppuStack_560 = (undefined ********)0x0;
        ppppppppuStack_558 = (undefined ********)0x0;
        lStack_550 = 0;
        ppppppppuVar12 = &pppppppuStack_528;
        uStack_548 = uVar3;
        uStack_500 = uVar3;
        FUN_10a860860(ppppppppuVar11,ppppppppuVar12);
        break;
      default:
        func_0x00010ae02ecc(0,unaff_x22);
        ppppppppuVar7 = (undefined ********)unaff_x23;
        FUN_10ae079a0();
        func_0x00010ae02edc();
        ppppppppuVar12 = (undefined ********)unaff_x23;
        FUN_10ae07cd4(ppppppppuVar7,&PTR_PTR_113303f80);
        goto LAB_10a86c628;
      case 0x16:
        if (lStack_530 < 0) {
          param_3 = ppppppppuStack_538;
          func_0x000107c3192c(&ppppppppuStack_560,ppppppppuStack_540,ppppppppuStack_538);
        }
        else {
          ppppppppuStack_558 = ppppppppuStack_538;
          ppppppppuStack_560 = ppppppppuStack_540;
          lStack_550 = lStack_530;
        }
        uStack_548 = 0x16;
        pppppppuStack_528 = (undefined *******)FUN_10a8b0a94;
        pppppppuStack_520 = (undefined *******)&PTR_FUN_110c25568;
        ppppppppuStack_510 = ppppppppuStack_558;
        ppppppppuStack_518 = ppppppppuStack_560;
        lStack_508 = lStack_550;
        ppppppppuStack_560 = (undefined ********)0x0;
        ppppppppuStack_558 = (undefined ********)0x0;
        lStack_550 = 0;
        uStack_500 = 0x16;
        ppppppppuVar12 = &pppppppuStack_528;
        FUN_10a860860(ppppppppuVar11,ppppppppuVar12);
      }
      ppppppppuVar7 = &pppppppuStack_520;
      (*(code *)*pppppppuStack_520)();
      if (lStack_550 < 0) {
        ppppppppuVar7 = ppppppppuStack_560;
        __ZdlPv();
      }
LAB_10a86c628:
      unaff_x27 = (undefined ********)&UNK_10e4df3e8;
      if (lStack_530 < 0) {
        ppppppppuVar7 = ppppppppuStack_540;
        __ZdlPv();
      }
      unaff_x26 = (undefined ********)((long)unaff_x26 + 1);
      unaff_x25 = unaff_x25 + 2;
    } while ((long)unaff_x26 < (long)*(int *)(ppppppppuVar23 + 1));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return ppppppppuVar7;
  }
  ___stack_chk_fail();
  if (lStack_530 < 0) {
    __ZdlPv(ppppppppuStack_540);
  }
  ppppppppuVar23 = ppppppppuVar7;
  __Unwind_Resume();
  pcStack_568 = FUN_10a86c6f8;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar11 = ppppppppuVar23;
  ppppppppuStack_5c0 = (undefined ********)unaff_x28;
  ppppppppuStack_5b8 = unaff_x27;
  ppppppppuStack_5b0 = unaff_x26;
  ppppppppuStack_5a8 = unaff_x25;
  ppppppppuStack_5a0 = param_1;
  ppppppppuStack_598 = (undefined ********)unaff_x23;
  ppppppppuStack_590 = unaff_x22;
  ppppppppuStack_588 = (undefined ********)ppuVar24;
  ppppppppuStack_580 = ppppppppuVar10;
  ppppppppuStack_578 = ppppppppuVar7;
  ppppuStack_570 = &pppuStack_490;
  FUN_109d1a80c();
  pppppppuStack_7c8 = *ppppppppuVar11;
  uStack_7d0 = 0;
  uStack_7d8 = 0;
  uStack_7e0 = 0;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  uStack_7f8 = 0;
  puStack_808 = &UNK_1053a6a3c;
  pppppppuStack_800 = (undefined *******)&PTR_DAT_110ae9180;
  pcStack_780 = FUN_10a062c68;
  appuStack_778[0] = &PTR_DAT_110b9f9f8;
  puStack_738 = &UNK_1053a6a3c;
  ppuStack_730 = &PTR_DAT_110ae9180;
  puStack_7c0 = &UNK_1053a6a3c;
  ppuStack_7b8 = &PTR_DAT_110ae9180;
  pppppppuStack_740 = pppppppuStack_7c8;
  FUN_109d1ba5c();
  uStack_900 = 0;
  uStack_908 = 0;
  uStack_910 = 0;
  uStack_918 = 0;
  uStack_920 = 0;
  uStack_928 = 0;
  puStack_938 = &UNK_1053a6a3c;
  ppuStack_930 = &PTR_DAT_110ae9180;
  uStack_940 = 0;
  uStack_948 = 0;
  uStack_950 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  uStack_968 = 0;
  puStack_978 = &UNK_1053a6a3c;
  ppuStack_970 = &PTR_DAT_110ae9180;
  FUN_109d1b72c(auStack_8f8,ppppppppuVar12,param_3,*(undefined4 *)((long)ppppppppuVar11 + 4),
                &puStack_938,&puStack_978,0);
  uStack_988 = 1;
  FUN_109d1f2ec(&uStack_660,&uStack_979,auStack_8f8,&uStack_988);
  uStack_850 = uStack_660;
  uStack_998 = 0;
  uStack_990 = 0;
  puStack_848 = &UNK_109896774;
  ppuStack_840 = &PTR_DAT_110b17068;
  puStack_830 = apuStack_658[0];
  uStack_838 = uStack_660;
  uVar13 = 0xb8;
  __Znwm(0xb8);
  func_0x000109d18d1c();
  FUN_10a061dc8(&uStack_660,&pcStack_780);
  FUN_10a062bb4(auStack_6f8,uVar13,&uStack_660);
  if (alStack_5d8[0] != 0) {
    func_0x0001092b4274(alStack_5d8);
  }
  func_0x0001092ba41c(auStack_620);
  (*(code *)*apuStack_658[0])(apuStack_658);
  puVar14 = auStack_6f8;
  FUN_10a062f08(ppppppppuVar23);
  FUN_10a062c88(auStack_6f8);
  func_0x0001092ba41c(&uStack_850);
  (*(code *)*apuStack_888[0])(apuStack_888);
  (*(code *)*apuStack_8c8[0])(apuStack_8c8);
  if (cStack_8d1 < '\0') {
    __ZdlPv(uStack_8e8);
  }
  (*(code *)*ppuStack_970)(&ppuStack_970);
  (*(code *)*ppuStack_930)(&ppuStack_930);
  func_0x0001092ba41c(&pppppppuStack_740);
  (*(code *)*appuStack_778[0])(appuStack_778);
  func_0x0001092ba41c(&pppppppuStack_7c8);
  ppppppppuVar23 = &pppppppuStack_800;
  (*(code *)*pppppppuStack_800)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return ppppppppuVar23;
  }
  ___stack_chk_fail();
  FUN_10a062c88(auStack_6f8);
  func_0x0001092ba41c(&uStack_850);
  func_0x00010a06e274(&uStack_998);
  FUN_109d1c850(auStack_8f8);
  (*(code *)*ppuStack_970)(&ppuStack_970);
  (*(code *)*ppuStack_930)(&ppuStack_930);
  func_0x0001092ba41c(&pppppppuStack_740);
  (*(code *)*appuStack_778[0])(appuStack_778);
  func_0x0001092ba41c(&pppppppuStack_7c8);
  (*(code *)*pppppppuStack_800)(&pppppppuStack_800);
  do {
    __Unwind_Resume();
  } while ((int)puVar14 == 0);
  func_0x000104bd46a0();
  if (ppppppppuVar23[5] != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppppppppuVar23[3] != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppppppppuVar23[1] != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return ppppppppuVar23;
}



/* Entry: 10a86b5d4; end: 10a86bd03;  */

/* WARNING: Type propagation algorithm not settling */

undefined ********
FUN_10a86b5d4(undefined ********param_1,undefined *******param_2,undefined ********param_3)

{
  undefined ******ppppppuVar1;
  undefined1 uVar2;
  undefined *****pppppuVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  bool bVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined8 *puVar11;
  undefined ********ppppppppuVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined1 *puVar15;
  undefined *******pppppppuVar16;
  undefined *******pppppppuVar17;
  undefined *******pppppppuVar18;
  undefined *puVar19;
  undefined *******pppppppuVar20;
  undefined ********ppppppppuVar21;
  undefined *******pppppppuVar22;
  undefined ********ppppppppuVar23;
  undefined **ppuVar24;
  undefined ********unaff_x22;
  undefined **unaff_x23;
  undefined *****pppppuVar25;
  undefined ********unaff_x24;
  undefined ********unaff_x25;
  undefined ********unaff_x26;
  undefined *******unaff_x27;
  code *unaff_x28;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined1 uStack_799;
  undefined *puStack_798;
  undefined **ppuStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined *puStack_758;
  undefined **ppuStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 auStack_718 [16];
  undefined8 uStack_708;
  char cStack_6f1;
  undefined8 *apuStack_6e8 [8];
  undefined8 *apuStack_6a8 [7];
  undefined8 uStack_670;
  undefined *puStack_668;
  undefined **ppuStack_660;
  undefined8 uStack_658;
  undefined8 *puStack_650;
  undefined *puStack_628;
  undefined *******pppppppuStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined *******pppppppuStack_5e8;
  undefined *puStack_5e0;
  undefined **ppuStack_5d8;
  code *pcStack_5a0;
  undefined **appuStack_598 [7];
  undefined *******pppppppuStack_560;
  undefined *puStack_558;
  undefined **ppuStack_550;
  undefined1 auStack_518 [152];
  undefined8 uStack_480;
  undefined8 *apuStack_478 [7];
  undefined1 auStack_440 [72];
  long alStack_3f8 [2];
  long lStack_3e8;
  undefined ********ppppppppuStack_3e0;
  undefined *******pppppppuStack_3d8;
  undefined ********ppppppppuStack_3d0;
  undefined ********ppppppppuStack_3c8;
  undefined ********ppppppppuStack_3c0;
  undefined ********ppppppppuStack_3b8;
  undefined ********ppppppppuStack_3b0;
  undefined ********ppppppppuStack_3a8;
  undefined ********ppppppppuStack_3a0;
  undefined ********ppppppppuStack_398;
  undefined1 ***pppuStack_390;
  code *pcStack_388;
  undefined ********ppppppppuStack_380;
  undefined ********ppppppppuStack_378;
  long lStack_370;
  uint uStack_368;
  undefined ********ppppppppuStack_360;
  undefined ********ppppppppuStack_358;
  long lStack_350;
  undefined *******pppppppuStack_348;
  undefined *******pppppppuStack_340;
  undefined ********ppppppppuStack_338;
  undefined ********ppppppppuStack_330;
  long lStack_328;
  uint uStack_320;
  long lStack_308;
  undefined ********ppppppppuStack_300;
  undefined *******pppppppuStack_2f8;
  undefined ********ppppppppuStack_2f0;
  undefined ********ppppppppuStack_2e8;
  undefined ********ppppppppuStack_2e0;
  undefined ********ppppppppuStack_2d8;
  undefined ********ppppppppuStack_2d0;
  undefined ********ppppppppuStack_2c8;
  undefined ********ppppppppuStack_2c0;
  undefined ********ppppppppuStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined *******pppppppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined ********ppppppppuStack_280;
  undefined ********ppppppppuStack_278;
  undefined *******pppppppuStack_270;
  undefined ********ppppppppuStack_268;
  undefined ********ppppppppuStack_260;
  undefined ********ppppppppuStack_258;
  ulong uStack_250;
  undefined ********ppppppppuStack_248;
  undefined ********ppppppppuStack_240;
  byte bStack_231;
  undefined ********ppppppppuStack_230;
  undefined ********ppppppppuStack_228;
  undefined ******ppppppuStack_220;
  undefined ********ppppppppuStack_218;
  undefined *******pppppppuStack_210;
  undefined ********ppppppppuStack_208;
  undefined ********ppppppppuStack_200;
  undefined ********ppppppppuStack_1f8;
  long lStack_1e0;
  undefined ********ppppppppuStack_1d0;
  undefined *******pppppppuStack_1c8;
  undefined ********ppppppppuStack_1c0;
  undefined ********ppppppppuStack_1b8;
  undefined ********ppppppppuStack_1b0;
  undefined ********ppppppppuStack_1a8;
  undefined ********ppppppppuStack_1a0;
  undefined ********ppppppppuStack_198;
  undefined ********ppppppppuStack_190;
  undefined ********ppppppppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *******pppppppuStack_168;
  undefined ********ppppppppuStack_160;
  undefined ********ppppppppuStack_158;
  long lStack_150;
  undefined ********ppppppppuStack_148;
  undefined ********ppppppppuStack_140;
  undefined ********ppppppppuStack_138;
  undefined ********ppppppppuStack_130;
  undefined ********ppppppppuStack_120;
  undefined ********ppppppppuStack_118;
  undefined ********ppppppppuStack_110;
  undefined ********ppppppppuStack_108;
  undefined *******pppppppuStack_100;
  undefined ********ppppppppuStack_f8;
  undefined ********appppppppuStack_f0 [2];
  char cStack_d9;
  undefined ********ppppppppuStack_d8;
  undefined ********ppppppppuStack_d0;
  undefined7 uStack_c8;
  byte bStack_c1;
  undefined *******pppppppuStack_c0;
  undefined ********ppppppppuStack_b8;
  undefined ******ppppppuStack_b0;
  undefined *******pppppppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar23 = (undefined ********)param_1[0xaf];
  ppppppppuStack_b8 = (undefined ********)param_1[0xaf];
  pppppppuStack_c0 = param_1[0xae];
  if (ppppppppuVar23 != (undefined ********)0x0) {
    ppppppppuVar12 = ppppppppuVar23 + 1;
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
      if (bVar8) {
        *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppppppuVar12 = param_1;
  ppuVar14 = (undefined **)param_2;
  if (0 < *(int *)(param_2 + 1)) {
    unaff_x26 = (undefined ********)0x0;
    pppppppuStack_168 = (undefined *******)param_2[2];
    do {
      ppppppppuVar23 = ppppppppuStack_b8;
      if (*(int *)param_1[0x3d] == 4) break;
      pppppuVar3 = (*param_2 + (long)unaff_x26 * 2)[1];
      func_0x000107c2b054(&ppppppppuStack_d8,(*param_2)[(long)unaff_x26 * 2]);
      func_0x000107c2b054(appppppppuStack_f0,pppppuVar3);
      param_3 = (undefined ********)appppppppuStack_f0;
      FUN_10a87a708(&pppppppuStack_100,param_1,param_3);
      unaff_x25 = (undefined ********)0x48;
      __Znwm();
      unaff_x27 = pppppppuStack_c0;
      ppppppppuVar12 = unaff_x25 + 1;
      *ppppppppuVar12 = (undefined *******)0x0;
      unaff_x25[2] = (undefined *******)0x0;
      ppppppppuVar23 = unaff_x25 + 3;
      *ppppppppuVar23 = (undefined *******)&PTR_DAT_110c23cf0;
      *unaff_x25 = (undefined *******)&PTR_DAT_110c25330;
      unaff_x25[4] = (undefined *******)0x0;
      unaff_x25[5] = (undefined *******)0x0;
      unaff_x25[7] = (undefined *******)ppppppppuStack_f8;
      unaff_x25[6] = pppppppuStack_100;
      if (ppppppppuStack_f8 != (undefined ********)0x0) {
        ppppppppuVar9 = ppppppppuStack_f8 + 1;
        do {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
          if (bVar8) {
            *ppppppppuVar9 = (undefined *******)((long)*ppppppppuVar9 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      unaff_x25[8] = pppppppuStack_168;
      ppppppppuVar9 = (undefined ********)(pppppppuStack_c0 + 7);
      ppppppppuStack_110 = ppppppppuVar23;
      ppppppppuStack_108 = unaff_x25;
      FUN_10a8abef0(ppppppppuVar9,&ppppppppuStack_d8);
      if (ppppppppuVar9 == (undefined ********)0x0) {
        FUN_10ae03140();
        ppuVar14 = &PTR_PTR_113303f48;
        unaff_x23 = ppuVar14;
        FUN_10ae079a0();
        param_3 = ppppppppuStack_d0;
        if (-1 < (char)bStack_c1) {
          param_3 = (undefined ********)(ulong)bStack_c1;
        }
        FUN_10ae0314c();
        ppppppppuVar12 = (undefined ********)unaff_x23;
        FUN_10ae07cd4();
LAB_10a86bb60:
        ppppppppuVar23 = unaff_x25 + 1;
        do {
          pppppppuVar16 = *ppppppppuVar23;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
          if (bVar8) {
            *ppppppppuVar23 = (undefined *******)((long)pppppppuVar16 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (pppppppuVar16 == (undefined *******)0x0) {
          (*(code *)(*unaff_x25)[2])(unaff_x25);
          ppppppppuVar12 = unaff_x25;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      else {
        unaff_x23 = (undefined **)ppppppppuVar9[5];
        unaff_x28 = (code *)ppppppppuVar9[6];
        if ((undefined ********)unaff_x28 != (undefined ********)0x0) {
          ppppppppuVar10 = (undefined ********)((long)unaff_x28 + 8);
          do {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
            if (bVar8) {
              *ppppppppuVar10 = (undefined *******)((long)*ppppppppuVar10 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        pppppppuVar18 = (undefined *******)unaff_x27[8];
        pppppppuVar16 = *ppppppppuVar9;
        pppppppuVar17 = ppppppppuVar9[1];
        puVar19 = (undefined *)((long)pppppppuVar18 + -1);
        if (((ulong)pppppppuVar18 & (ulong)puVar19) == 0) {
          pppppppuVar17 = (undefined *******)((ulong)puVar19 & (ulong)pppppppuVar17);
        }
        else if (pppppppuVar18 <= pppppppuVar17) {
          uVar7 = 0;
          if (pppppppuVar18 != (undefined *******)0x0) {
            uVar7 = (ulong)pppppppuVar17 / (ulong)pppppppuVar18;
          }
          pppppppuVar17 = (undefined *******)((long)pppppppuVar17 - uVar7 * (long)pppppppuVar18);
        }
        ppppppppuVar10 = (undefined ********)unaff_x27[7][(long)pppppppuVar17];
        do {
          ppppppppuVar21 = ppppppppuVar10;
          ppppppppuVar10 = (undefined ********)*ppppppppuVar21;
        } while ((undefined ********)*ppppppppuVar21 != ppppppppuVar9);
        if (ppppppppuVar21 == (undefined ********)(unaff_x27 + 9)) {
LAB_10a86b804:
          if (pppppppuVar16 == (undefined *******)0x0) {
LAB_10a86b838:
            unaff_x27[7][(long)pppppppuVar17] = (undefined *****)0x0;
            pppppppuVar16 = *ppppppppuVar9;
            goto LAB_10a86b840;
          }
          pppppppuVar20 = (undefined *******)pppppppuVar16[1];
          if (((ulong)pppppppuVar18 & (ulong)puVar19) == 0) {
            pppppppuVar22 = (undefined *******)((ulong)pppppppuVar20 & (ulong)puVar19);
          }
          else {
            pppppppuVar22 = pppppppuVar20;
            if (pppppppuVar18 <= pppppppuVar20) {
              uVar7 = 0;
              if (pppppppuVar18 != (undefined *******)0x0) {
                uVar7 = (ulong)pppppppuVar20 / (ulong)pppppppuVar18;
              }
              pppppppuVar22 = (undefined *******)((long)pppppppuVar20 - uVar7 * (long)pppppppuVar18)
              ;
            }
          }
          if (pppppppuVar22 != pppppppuVar17) goto LAB_10a86b838;
LAB_10a86b848:
          if (((ulong)pppppppuVar18 & (ulong)puVar19) == 0) {
            pppppppuVar20 = (undefined *******)((ulong)pppppppuVar20 & (ulong)puVar19);
          }
          else if (pppppppuVar18 <= pppppppuVar20) {
            uVar7 = 0;
            if (pppppppuVar18 != (undefined *******)0x0) {
              uVar7 = (ulong)pppppppuVar20 / (ulong)pppppppuVar18;
            }
            pppppppuVar20 = (undefined *******)((long)pppppppuVar20 - uVar7 * (long)pppppppuVar18);
          }
          if (pppppppuVar20 != pppppppuVar17) {
            unaff_x27[7][(long)pppppppuVar20] = (undefined *****)ppppppppuVar21;
            pppppppuVar16 = *ppppppppuVar9;
          }
        }
        else {
          pppppppuVar20 = ppppppppuVar21[1];
          if (((ulong)pppppppuVar18 & (ulong)puVar19) == 0) {
            pppppppuVar20 = (undefined *******)((ulong)pppppppuVar20 & (ulong)puVar19);
          }
          else if (pppppppuVar18 <= pppppppuVar20) {
            uVar7 = 0;
            if (pppppppuVar18 != (undefined *******)0x0) {
              uVar7 = (ulong)pppppppuVar20 / (ulong)pppppppuVar18;
            }
            pppppppuVar20 = (undefined *******)((long)pppppppuVar20 - uVar7 * (long)pppppppuVar18);
          }
          if (pppppppuVar20 != pppppppuVar17) goto LAB_10a86b804;
LAB_10a86b840:
          if (pppppppuVar16 != (undefined *******)0x0) {
            pppppppuVar20 = (undefined *******)pppppppuVar16[1];
            goto LAB_10a86b848;
          }
        }
        *ppppppppuVar21 = pppppppuVar16;
        *ppppppppuVar9 = (undefined *******)0x0;
        unaff_x27[10] = (undefined ******)((long)unaff_x27[10] + -1);
        ppppppppuStack_120 = (undefined ********)unaff_x23;
        ppppppppuStack_118 = (undefined ********)unaff_x28;
        FUN_10a89313c(ppppppppuVar9 + 2);
        __ZdlPv(ppppppppuVar9);
        ppppppppuVar10 = (undefined ********)(unaff_x27 + 0xc);
        FUN_10a8aaad4(ppppppppuVar10,unaff_x23);
        unaff_x24 = ppppppppuVar9;
        if (ppppppppuVar10 != (undefined ********)0x0) {
          pppppppuVar17 = (undefined *******)unaff_x27[0xd];
          pppppppuVar16 = ppppppppuVar10[1];
          puVar19 = (undefined *)((long)pppppppuVar17 + -1);
          if (((ulong)pppppppuVar17 & (ulong)puVar19) == 0) {
            pppppppuVar16 = (undefined *******)((ulong)puVar19 & (ulong)pppppppuVar16);
          }
          else if (pppppppuVar17 <= pppppppuVar16) {
            uVar7 = 0;
            if (pppppppuVar17 != (undefined *******)0x0) {
              uVar7 = (ulong)pppppppuVar16 / (ulong)pppppppuVar17;
            }
            pppppppuVar16 = (undefined *******)((long)pppppppuVar16 - uVar7 * (long)pppppppuVar17);
          }
          pppppppuVar18 = *ppppppppuVar10;
          ppppppppuVar9 = (undefined ********)unaff_x27[0xc][(long)pppppppuVar16];
          do {
            ppppppppuVar21 = ppppppppuVar9;
            ppppppppuVar9 = (undefined ********)*ppppppppuVar21;
          } while ((undefined ********)*ppppppppuVar21 != ppppppppuVar10);
          if (ppppppppuVar21 == (undefined ********)(unaff_x27 + 0xe)) {
LAB_10a86b934:
            if (pppppppuVar18 == (undefined *******)0x0) {
LAB_10a86b968:
              unaff_x27[0xc][(long)pppppppuVar16] = (undefined *****)0x0;
              pppppppuVar18 = *ppppppppuVar10;
              goto LAB_10a86b970;
            }
            pppppppuVar20 = (undefined *******)pppppppuVar18[1];
            if (((ulong)pppppppuVar17 & (ulong)puVar19) == 0) {
              pppppppuVar22 = (undefined *******)((ulong)pppppppuVar20 & (ulong)puVar19);
            }
            else {
              pppppppuVar22 = pppppppuVar20;
              if (pppppppuVar17 <= pppppppuVar20) {
                uVar7 = 0;
                if (pppppppuVar17 != (undefined *******)0x0) {
                  uVar7 = (ulong)pppppppuVar20 / (ulong)pppppppuVar17;
                }
                pppppppuVar22 =
                     (undefined *******)((long)pppppppuVar20 - uVar7 * (long)pppppppuVar17);
              }
            }
            if (pppppppuVar22 != pppppppuVar16) goto LAB_10a86b968;
LAB_10a86b978:
            if (((ulong)pppppppuVar17 & (ulong)puVar19) == 0) {
              pppppppuVar20 = (undefined *******)((ulong)pppppppuVar20 & (ulong)puVar19);
            }
            else if (pppppppuVar17 <= pppppppuVar20) {
              uVar7 = 0;
              if (pppppppuVar17 != (undefined *******)0x0) {
                uVar7 = (ulong)pppppppuVar20 / (ulong)pppppppuVar17;
              }
              pppppppuVar20 = (undefined *******)((long)pppppppuVar20 - uVar7 * (long)pppppppuVar17)
              ;
            }
            if (pppppppuVar20 != pppppppuVar16) {
              unaff_x27[0xc][(long)pppppppuVar20] = (undefined *****)ppppppppuVar21;
              pppppppuVar18 = *ppppppppuVar10;
            }
          }
          else {
            pppppppuVar20 = ppppppppuVar21[1];
            if (((ulong)pppppppuVar17 & (ulong)puVar19) == 0) {
              pppppppuVar20 = (undefined *******)((ulong)pppppppuVar20 & (ulong)puVar19);
            }
            else if (pppppppuVar17 <= pppppppuVar20) {
              uVar7 = 0;
              if (pppppppuVar17 != (undefined *******)0x0) {
                uVar7 = (ulong)pppppppuVar20 / (ulong)pppppppuVar17;
              }
              pppppppuVar20 = (undefined *******)((long)pppppppuVar20 - uVar7 * (long)pppppppuVar17)
              ;
            }
            if (pppppppuVar20 != pppppppuVar16) goto LAB_10a86b934;
LAB_10a86b970:
            if (pppppppuVar18 != (undefined *******)0x0) {
              pppppppuVar20 = (undefined *******)pppppppuVar18[1];
              goto LAB_10a86b978;
            }
          }
          *ppppppppuVar21 = pppppppuVar18;
          *ppppppppuVar10 = (undefined *******)0x0;
          unaff_x27[0xf] = (undefined ******)((long)unaff_x27[0xf] + -1);
          func_0x00010a8835b0(ppppppppuVar10 + 4);
          FUN_10a297544(ppppppppuVar10 + 2);
          __ZdlPv(ppppppppuVar10);
          unaff_x24 = ppppppppuVar10;
        }
        if ((char)bStack_c1 < '\0') {
          param_3 = ppppppppuStack_d0;
          func_0x000107c3192c(&ppppppppuStack_160,ppppppppuStack_d8,ppppppppuStack_d0);
        }
        else {
          ppppppppuStack_158 = ppppppppuStack_d0;
          ppppppppuStack_160 = ppppppppuStack_d8;
          lStack_150 = CONCAT17(bStack_c1,uStack_c8);
        }
        if ((undefined ********)unaff_x28 != (undefined ********)0x0) {
          ppppppppuVar9 = (undefined ********)((long)unaff_x28 + 8);
          do {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
            if (bVar8) {
              *ppppppppuVar9 = (undefined *******)((long)*ppppppppuVar9 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        do {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
          if (bVar8) {
            *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        ppppppuStack_b0 = (undefined ******)FUN_10a8ad478;
        pppppppuStack_a8 = (undefined *******)&PTR_FUN_110c25388;
        puVar11 = (undefined8 *)0x38;
        ppppppppuStack_148 = (undefined ********)unaff_x23;
        ppppppppuStack_140 = (undefined ********)unaff_x28;
        ppppppppuStack_138 = ppppppppuVar23;
        ppppppppuStack_130 = unaff_x25;
        __Znwm();
        puVar11[1] = ppppppppuStack_158;
        *puVar11 = ppppppppuStack_160;
        puVar11[2] = lStack_150;
        ppppppppuStack_158 = (undefined ********)0x0;
        lStack_150 = 0;
        ppppppppuStack_160 = (undefined ********)0x0;
        puVar11[4] = ppppppppuStack_140;
        puVar11[3] = ppppppppuStack_148;
        ppppppppuStack_148 = (undefined ********)0x0;
        ppppppppuStack_140 = (undefined ********)0x0;
        puVar11[5] = ppppppppuVar23;
        puVar11[6] = unaff_x25;
        ppppppppuStack_138 = (undefined ********)0x0;
        ppppppppuStack_130 = (undefined ********)0x0;
        ppuVar14 = (undefined **)&ppppppuStack_b0;
        puStack_a0 = puVar11;
        FUN_10a860860(param_1);
        ppppppppuVar12 = &pppppppuStack_a8;
        (*(code *)*pppppppuStack_a8)();
        ppppppppuVar23 = ppppppppuStack_130;
        if (ppppppppuStack_130 != (undefined ********)0x0) {
          ppppppppuVar9 = ppppppppuStack_130 + 1;
          do {
            pppppppuVar16 = *ppppppppuVar9;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
            if (bVar8) {
              *ppppppppuVar9 = (undefined *******)((long)pppppppuVar16 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppppppuVar16 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_130)[2])(ppppppppuStack_130);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuVar23;
          }
        }
        ppppppppuVar23 = ppppppppuStack_140;
        if (ppppppppuStack_140 != (undefined ********)0x0) {
          ppppppppuVar9 = ppppppppuStack_140 + 1;
          do {
            pppppppuVar16 = *ppppppppuVar9;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
            if (bVar8) {
              *ppppppppuVar9 = (undefined *******)((long)pppppppuVar16 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppppppuVar16 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_140)[2])(ppppppppuStack_140);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuVar23;
          }
        }
        if (lStack_150 < 0) {
          ppppppppuVar12 = ppppppppuStack_160;
          __ZdlPv();
        }
        ppppppppuVar23 = ppppppppuStack_118;
        if (ppppppppuStack_118 != (undefined ********)0x0) {
          ppppppppuVar9 = ppppppppuStack_118 + 1;
          do {
            pppppppuVar16 = *ppppppppuVar9;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
            if (bVar8) {
              *ppppppppuVar9 = (undefined *******)((long)pppppppuVar16 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppppppuVar16 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_118)[2])(ppppppppuStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuVar23;
          }
        }
        unaff_x25 = ppppppppuStack_108;
        if (ppppppppuStack_108 != (undefined ********)0x0) goto LAB_10a86bb60;
      }
      unaff_x22 = ppppppppuStack_f8;
      if (ppppppppuStack_f8 != (undefined ********)0x0) {
        ppppppppuVar23 = ppppppppuStack_f8 + 1;
        do {
          pppppppuVar16 = *ppppppppuVar23;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
          if (bVar8) {
            *ppppppppuVar23 = (undefined *******)((long)pppppppuVar16 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (pppppppuVar16 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_f8)[2])(ppppppppuStack_f8);
          ppppppppuVar12 = unaff_x22;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (cStack_d9 < '\0') {
        ppppppppuVar12 = appppppppuStack_f0[0];
        __ZdlPv();
      }
      if ((char)bStack_c1 < '\0') {
        ppppppppuVar12 = ppppppppuStack_d8;
        __ZdlPv();
      }
      unaff_x26 = (undefined ********)((long)unaff_x26 + 1);
      ppppppppuVar23 = ppppppppuStack_b8;
    } while ((long)unaff_x26 < (long)*(int *)(param_2 + 1));
  }
  if (ppppppppuVar23 != (undefined ********)0x0) {
    ppppppppuVar9 = ppppppppuVar23 + 1;
    do {
      pppppppuVar16 = *ppppppppuVar9;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
      if (bVar8) {
        *ppppppppuVar9 = (undefined *******)((long)pppppppuVar16 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppppppuVar16 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuVar23)[2])(ppppppppuVar23);
      ppppppppuVar12 = ppppppppuVar23;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppppppuVar12;
  }
  ___stack_chk_fail();
  FUN_10a297544(&ppppppppuStack_120);
  FUN_10a8ad420(&ppppppppuStack_110);
  func_0x00010a5c92ec(&pppppppuStack_100);
  if (cStack_d9 < '\0') {
    __ZdlPv(appppppppuStack_f0[0]);
  }
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(ppppppppuStack_d8);
  }
  FUN_10a8931d4(&pppppppuStack_c0);
  ppppppppuVar9 = ppppppppuVar12;
  __Unwind_Resume();
  ppppppppuStack_1d0 = (undefined ********)unaff_x28;
  pppppppuStack_1c8 = unaff_x27;
  ppppppppuStack_1c0 = unaff_x26;
  ppppppppuStack_1b8 = unaff_x25;
  ppppppppuStack_1b0 = unaff_x24;
  ppppppppuStack_1a8 = (undefined ********)unaff_x23;
  ppppppppuStack_1a0 = unaff_x22;
  ppppppppuStack_198 = ppppppppuVar23;
  ppppppppuStack_190 = param_1;
  ppppppppuStack_188 = ppppppppuVar12;
  puStack_180 = &stack0xfffffffffffffff0;
  pcStack_178 = FUN_10a86bd04;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar24 = (undefined **)ppppppppuVar9[0xaf];
  ppppppppuStack_228 = (undefined ********)ppppppppuVar9[0xaf];
  ppppppppuStack_230 = (undefined ********)ppppppppuVar9[0xae];
  if ((undefined ********)ppuVar24 != (undefined ********)0x0) {
    ppppppppuVar23 = (undefined ********)(ppuVar24 + 1);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
      if (bVar8) {
        *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppppppuVar23 = ppppppppuVar9;
  pppppppuVar16 = (undefined *******)ppuVar14;
  if (0 < *(int *)(ppuVar14 + 1)) {
    unaff_x27 = (undefined *******)0x0;
    unaff_x28 = (code *)ppuVar14[2];
    do {
      ppuVar24 = (undefined **)ppppppppuStack_228;
      if (*(int *)ppppppppuVar9[0x3d] == 4) break;
      ppppppuVar1 = (undefined ******)((long)*ppuVar14 + (long)unaff_x27 * 4 * 8);
      pppppuVar25 = ppppppuVar1[2];
      pppppuVar3 = ppppppuVar1[3];
      func_0x000107c2b054(&ppppppppuStack_248,*ppppppuVar1);
      ppppppppuStack_260 = (undefined ********)0x0;
      ppppppppuStack_258 = (undefined ********)0x0;
      uStack_250 = 0;
      if (pppppuVar25 != (undefined *****)0x0) {
        func_0x000107c2c4dc(&ppppppppuStack_260,pppppuVar25);
      }
      unaff_x23 = (undefined **)ppppppppuStack_230;
      ppppppppuVar23 = ppppppppuStack_230 + 7;
      FUN_10a8abef0(ppppppppuVar23,&ppppppppuStack_248);
      if (ppppppppuVar23 == (undefined ********)0x0) {
        unaff_x22 = (undefined ********)&ppppppppuStack_248;
        FUN_10ae03140();
        unaff_x23 = &PTR_PTR_113304890;
        FUN_10ae079a0();
        param_3 = ppppppppuStack_240;
        if (-1 < (char)bStack_231) {
          param_3 = (undefined ********)(ulong)bStack_231;
        }
        FUN_10ae0314c();
        ppppppppuVar23 = (undefined ********)unaff_x23;
        pppppppuVar16 = (undefined *******)&PTR_PTR_113304890;
        FUN_10ae07cd4();
      }
      else {
        pppppppuStack_270 = ppppppppuVar23[5];
        unaff_x24 = (undefined ********)ppppppppuVar23[6];
        if (unaff_x24 != (undefined ********)0x0) {
          ppppppppuVar23 = unaff_x24 + 1;
          do {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
            if (bVar8) {
              *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        ppppppppuVar23 = (undefined ********)(unaff_x23 + 0xc);
        ppppppppuStack_268 = unaff_x24;
        FUN_10a8aaad4();
        if (ppppppppuVar23 == (undefined ********)0x0) {
          ppppppppuVar23 = (undefined ********)&PTR_PTR_1133048c8;
          FUN_10ae079a0();
          pppppppuVar16 = (undefined *******)&PTR_PTR_1133048c8;
          FUN_10ae07cd4();
          unaff_x22 = (undefined ********)&PTR_PTR_1133048c8;
        }
        else {
          ppppppppuVar12 = ppppppppuStack_258;
          if (-1 < (long)uStack_250) {
            ppppppppuVar12 = (undefined ********)(uStack_250 >> 0x38);
          }
          pppppppuVar16 = ppppppppuVar23[4];
          if (ppppppppuVar12 == (undefined ********)0x0) {
            ppppppppuVar12 = (undefined ********)0xd0;
            __Znwm();
            ppppppppuVar10 = ppppppppuVar12 + 1;
            *ppppppppuVar10 = (undefined *******)0x0;
            ppppppppuVar12[2] = (undefined *******)0x0;
            *ppppppppuVar12 = (undefined *******)&PTR_FUN_110bf8238;
            ppppppppuVar12[0x17] = (undefined *******)0x0;
            ppppppppuVar12[0x16] = (undefined *******)0x0;
            ppppppppuVar12[0x19] = (undefined *******)0x0;
            ppppppppuVar12[0x18] = (undefined *******)0x0;
            ppppppppuVar12[3] = (undefined *******)&PTR_FUN_110c25680;
            ppppppppuVar12[9] = (undefined *******)0x0;
            ppppppppuVar12[8] = (undefined *******)0x0;
            ppppppppuVar12[0xb] = (undefined *******)0x0;
            ppppppppuVar12[10] = (undefined *******)0x0;
            ppppppppuVar12[0xd] = (undefined *******)0x0;
            ppppppppuVar12[0xc] = (undefined *******)0x0;
            ppppppppuVar12[0xf] = (undefined *******)0x0;
            ppppppppuVar12[0xe] = (undefined *******)0x0;
            ppppppppuVar12[5] = (undefined *******)0x0;
            ppppppppuVar12[4] = (undefined *******)0x0;
            ppppppppuVar12[7] = (undefined *******)0x0;
            ppppppppuVar12[6] = (undefined *******)0x0;
            ppppppppuVar12[0xe] = (undefined *******)0x0;
            ppppppppuVar12[0xf] = (undefined *******)0xffffffffffffffff;
            ppppppppuVar12[0x13] = (undefined *******)0x0;
            ppppppppuVar12[0x12] = (undefined *******)0x0;
            ppppppppuVar12[0x15] = (undefined *******)0x0;
            ppppppppuVar12[0x14] = (undefined *******)0x0;
            ppppppppuVar12[0x11] = (undefined *******)0x0;
            ppppppppuVar12[0x10] = (undefined *******)0x0;
            *(undefined1 *)(ppppppppuVar12 + 0x16) = 0;
            FUN_10a8602bc(pppppppuVar16 + 9,ppppppppuVar12 + 3,ppppppppuVar12);
            do {
              pppppppuVar16 = *ppppppppuVar10;
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
              if (bVar8) {
                *ppppppppuVar10 = (undefined *******)((long)pppppppuVar16 + -1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            unaff_x25 = ppppppppuVar12;
            if (pppppppuVar16 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuVar12)[2])(ppppppppuVar12);
LAB_10a86bf80:
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar12);
            }
          }
          else {
            FUN_10a87a708(&ppppppuStack_220,ppppppppuVar9,&ppppppppuStack_260);
            ppppppppuVar12 = ppppppppuStack_218;
            FUN_10a8602bc(pppppppuVar16 + 9,ppppppuStack_220,ppppppppuStack_218);
            if (ppppppppuVar12 != (undefined ********)0x0) {
              ppppppppuVar10 = ppppppppuVar12 + 1;
              do {
                pppppppuVar16 = *ppppppppuVar10;
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
                if (bVar8) {
                  *ppppppppuVar10 = (undefined *******)((long)pppppppuVar16 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (pppppppuVar16 == (undefined *******)0x0) {
                (*(code *)(*ppppppppuVar12)[2])(ppppppppuVar12);
                goto LAB_10a86bf80;
              }
            }
          }
          pppppppuVar16 = pppppppuStack_270;
          param_3 = ppppppppuStack_258;
          if (-1 < (long)uStack_250) {
            param_3 = (undefined ********)(uStack_250 >> 0x38);
          }
          uVar2 = 2;
          if (((ulong)pppppuVar3 & 1) == 0) {
            uVar2 = param_3 == (undefined ********)0x0;
          }
          *(undefined1 *)((long)ppppppppuVar23[4] + 0x35) = uVar2;
          if (param_3 == (undefined ********)0x0) {
            bVar8 = false;
          }
          else {
            pppppppuVar17 = ppppppppuVar9[0x46];
            bVar5 = *(byte *)((long)pppppppuVar17 + 0x47);
            ppppppppuVar23 = (undefined ********)pppppppuVar17[7];
            if (-1 < (char)bVar5) {
              ppppppppuVar23 = (undefined ********)(ulong)bVar5;
            }
            if (param_3 == ppppppppuVar23) {
              ppppppppuVar23 = ppppppppuStack_260;
              if (-1 < (long)uStack_250) {
                ppppppppuVar23 = (undefined ********)&ppppppppuStack_260;
              }
              pppppppuVar18 = (undefined *******)pppppppuVar17[6];
              if (-1 < (char)bVar5) {
                pppppppuVar18 = pppppppuVar17 + 6;
              }
              _memcmp(ppppppppuVar23,pppppppuVar18);
              bVar8 = (int)ppppppppuVar23 != 0;
            }
            else {
              bVar8 = true;
            }
          }
          *(bool *)(pppppppuVar16 + 0xc) = bVar8;
          unaff_x26 = (undefined ********)0x40;
          __Znwm();
          unaff_x23 = (undefined **)(unaff_x26 + 1);
          *unaff_x23 = (undefined *)0x0;
          unaff_x26[2] = (undefined *******)0x0;
          *unaff_x26 = (undefined *******)&PTR_DAT_110c254b0;
          ppppppppuStack_280 = unaff_x26 + 3;
          *ppppppppuStack_280 = (undefined *******)&PTR_DAT_110c23d60;
          unaff_x26[4] = (undefined *******)0x0;
          unaff_x26[5] = (undefined *******)0x0;
          unaff_x26[6] = (undefined *******)unaff_x28;
          *(undefined1 *)(unaff_x26 + 7) = uVar2;
          if (ppppppppuStack_268 != (undefined ********)0x0) {
            ppppppppuVar23 = ppppppppuStack_268 + 1;
            do {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
              if (bVar8) {
                *ppppppppuVar23 = (undefined *******)((long)*ppppppppuVar23 + 1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          do {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar8) {
              *unaff_x23 = (undefined *)((long)*unaff_x23 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          ppppppuStack_220 = (undefined ******)FUN_10a8af214;
          ppppppppuStack_218 = (undefined ********)&PTR_FUN_110c25508;
          pppppppuStack_210 = pppppppuVar16;
          ppppppppuStack_208 = ppppppppuStack_268;
          pppppppuStack_2a0 = (undefined *******)0x0;
          uStack_298 = 0;
          uStack_290 = 0;
          uStack_288 = 0;
          pppppppuVar16 = &ppppppuStack_220;
          ppppppppuStack_278 = unaff_x26;
          ppppppppuStack_200 = ppppppppuStack_280;
          ppppppppuStack_1f8 = unaff_x26;
          FUN_10a860860(ppppppppuVar9);
          ppppppppuVar23 = (undefined ********)&ppppppppuStack_218;
          (*(code *)*ppppppppuStack_218)();
          do {
            pppppppuVar17 = (undefined *******)*unaff_x23;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar8) {
              *unaff_x23 = (undefined *)((long)pppppppuVar17 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          unaff_x24 = ppppppppuStack_268;
          unaff_x22 = &pppppppuStack_2a0;
          if (pppppppuVar17 == (undefined *******)0x0) {
            (*(code *)(*unaff_x26)[2])(unaff_x26);
            ppppppppuVar23 = unaff_x26;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            unaff_x24 = ppppppppuStack_268;
          }
        }
        if (unaff_x24 != (undefined ********)0x0) {
          ppppppppuVar12 = unaff_x24 + 1;
          do {
            pppppppuVar17 = *ppppppppuVar12;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
            if (bVar8) {
              *ppppppppuVar12 = (undefined *******)((long)pppppppuVar17 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppppppuVar17 == (undefined *******)0x0) {
            (*(code *)(*unaff_x24)[2])(unaff_x24);
            ppppppppuVar23 = unaff_x24;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      if ((long)uStack_250 < 0) {
        ppppppppuVar23 = ppppppppuStack_260;
        __ZdlPv();
      }
      if ((char)bStack_231 < '\0') {
        ppppppppuVar23 = ppppppppuStack_248;
        __ZdlPv();
      }
      unaff_x27 = (undefined *******)((long)unaff_x27 + 1);
      ppuVar24 = (undefined **)ppppppppuStack_228;
    } while ((long)unaff_x27 < (long)*(int *)(ppuVar14 + 1));
  }
  if ((undefined ********)ppuVar24 != (undefined ********)0x0) {
    ppppppppuVar12 = (undefined ********)(ppuVar24 + 1);
    do {
      pppppppuVar17 = *ppppppppuVar12;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
      if (bVar8) {
        *ppppppppuVar12 = (undefined *******)((long)pppppppuVar17 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppppppuVar17 == (undefined *******)0x0) {
      (*(code *)*(undefined *******)((long)*ppuVar24 + 0x10))(ppuVar24);
      ppppppppuVar23 = (undefined ********)ppuVar24;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return ppppppppuVar23;
  }
  ___stack_chk_fail();
  FUN_10a297544(&pppppppuStack_270);
  if ((long)uStack_250 < 0) {
    __ZdlPv(ppppppppuStack_260);
  }
  if ((char)bStack_231 < '\0') {
    __ZdlPv(ppppppppuStack_248);
  }
  FUN_10a8931d4(&ppppppppuStack_230);
  ppppppppuVar12 = ppppppppuVar23;
  __Unwind_Resume();
  ppppppppuStack_300 = (undefined ********)unaff_x28;
  pppppppuStack_2f8 = unaff_x27;
  ppppppppuStack_2f0 = unaff_x26;
  ppppppppuStack_2e8 = unaff_x25;
  ppppppppuStack_2e0 = unaff_x24;
  ppppppppuStack_2d8 = (undefined ********)unaff_x23;
  ppppppppuStack_2d0 = unaff_x22;
  ppppppppuStack_2c8 = (undefined ********)ppuVar24;
  ppppppppuStack_2c0 = ppppppppuVar9;
  ppppppppuStack_2b8 = ppppppppuVar23;
  ppuStack_2b0 = &puStack_180;
  pcStack_2a8 = FUN_10a86c264;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar23 = ppppppppuVar12;
  pppppppuVar17 = pppppppuVar16;
  if (0 < *(int *)(pppppppuVar16 + 1)) {
    unaff_x25 = (undefined ********)0x0;
    unaff_x26 = (undefined ********)0x0;
    unaff_x23 = &PTR_PTR_113303f80;
    unaff_x28 = FUN_10a8b0184;
    ppuVar24 = &PTR_DAT_110c25520;
    unaff_x24 = &pppppppuStack_348;
    do {
      unaff_x27 = (undefined *******)&UNK_10e4df3e8;
      ppppppppuVar9 = ppppppppuVar12;
      if (*(int *)ppppppppuVar12[0x3d] == 4) break;
      uVar4 = *(uint *)((long)*pppppppuVar16 + (long)unaff_x25);
      unaff_x22 = (undefined ********)(ulong)uVar4;
      ppppppppuStack_360 = (undefined ********)0x0;
      ppppppppuStack_358 = (undefined ********)0x0;
      lStack_350 = 0;
      if (*(long *)((uint *)((long)*pppppppuVar16 + (long)unaff_x25) + 2) != 0) {
        func_0x000107c2c4dc(&ppppppppuStack_360);
      }
      switch(uVar4) {
      case 1:
      case 2:
      case 3:
      case 0x13:
        if (lStack_350 < 0) {
          param_3 = ppppppppuStack_358;
          func_0x000107c3192c(&ppppppppuStack_380,ppppppppuStack_360,ppppppppuStack_358);
        }
        else {
          ppppppppuStack_378 = ppppppppuStack_358;
          ppppppppuStack_380 = ppppppppuStack_360;
          lStack_370 = lStack_350;
        }
        pppppppuStack_348 = (undefined *******)FUN_10a8b0184;
        pppppppuStack_340 = (undefined *******)&PTR_DAT_110c25520;
        ppppppppuStack_330 = ppppppppuStack_378;
        ppppppppuStack_338 = ppppppppuStack_380;
        lStack_328 = lStack_370;
        ppppppppuStack_380 = (undefined ********)0x0;
        ppppppppuStack_378 = (undefined ********)0x0;
        lStack_370 = 0;
        pppppppuVar17 = (undefined *******)&pppppppuStack_348;
        uStack_368 = uVar4;
        uStack_320 = uVar4;
        FUN_10a860860(ppppppppuVar12,pppppppuVar17);
        break;
      case 7:
      case 8:
      case 9:
        if (lStack_350 < 0) {
          param_3 = ppppppppuStack_358;
          func_0x000107c3192c(&ppppppppuStack_380,ppppppppuStack_360,ppppppppuStack_358);
        }
        else {
          ppppppppuStack_378 = ppppppppuStack_358;
          ppppppppuStack_380 = ppppppppuStack_360;
          lStack_370 = lStack_350;
        }
        pppppppuStack_348 = (undefined *******)FUN_10a8b041c;
        pppppppuStack_340 = (undefined *******)&PTR_FUN_110c25538;
        ppppppppuStack_330 = ppppppppuStack_378;
        ppppppppuStack_338 = ppppppppuStack_380;
        lStack_328 = lStack_370;
        ppppppppuStack_380 = (undefined ********)0x0;
        ppppppppuStack_378 = (undefined ********)0x0;
        lStack_370 = 0;
        pppppppuVar17 = (undefined *******)&pppppppuStack_348;
        uStack_368 = uVar4;
        uStack_320 = uVar4;
        FUN_10a860860(ppppppppuVar12,pppppppuVar17);
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0x10:
      case 0x15:
        if (lStack_350 < 0) {
          param_3 = ppppppppuStack_358;
          func_0x000107c3192c(&ppppppppuStack_380,ppppppppuStack_360,ppppppppuStack_358);
        }
        else {
          ppppppppuStack_378 = ppppppppuStack_358;
          ppppppppuStack_380 = ppppppppuStack_360;
          lStack_370 = lStack_350;
        }
        pppppppuStack_348 = (undefined *******)FUN_10a8b0684;
        pppppppuStack_340 = (undefined *******)&PTR_FUN_110c25550;
        ppppppppuStack_330 = ppppppppuStack_378;
        ppppppppuStack_338 = ppppppppuStack_380;
        lStack_328 = lStack_370;
        ppppppppuStack_380 = (undefined ********)0x0;
        ppppppppuStack_378 = (undefined ********)0x0;
        lStack_370 = 0;
        pppppppuVar17 = (undefined *******)&pppppppuStack_348;
        uStack_368 = uVar4;
        uStack_320 = uVar4;
        FUN_10a860860(ppppppppuVar12,pppppppuVar17);
        break;
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x11:
        if (lStack_350 < 0) {
          param_3 = ppppppppuStack_358;
          func_0x000107c3192c(&ppppppppuStack_380,ppppppppuStack_360,ppppppppuStack_358);
        }
        else {
          ppppppppuStack_378 = ppppppppuStack_358;
          ppppppppuStack_380 = ppppppppuStack_360;
          lStack_370 = lStack_350;
        }
        pppppppuStack_348 = (undefined *******)FUN_10a8b0ea4;
        pppppppuStack_340 = (undefined *******)&PTR_FUN_110c25580;
        ppppppppuStack_330 = ppppppppuStack_378;
        ppppppppuStack_338 = ppppppppuStack_380;
        lStack_328 = lStack_370;
        ppppppppuStack_380 = (undefined ********)0x0;
        ppppppppuStack_378 = (undefined ********)0x0;
        lStack_370 = 0;
        uStack_368 = uVar4;
        uStack_320 = uVar4;
        FUN_10a860860(ppppppppuVar12,&pppppppuStack_348);
        (*(code *)*pppppppuStack_340)(&pppppppuStack_340);
        if (lStack_370 < 0) {
          __ZdlPv(ppppppppuStack_380);
        }
      case 4:
      case 5:
      case 6:
      case 0x12:
      case 0x17:
      case 0x18:
        if (lStack_350 < 0) {
          param_3 = ppppppppuStack_358;
          func_0x000107c3192c(&ppppppppuStack_380,ppppppppuStack_360,ppppppppuStack_358);
        }
        else {
          ppppppppuStack_378 = ppppppppuStack_358;
          ppppppppuStack_380 = ppppppppuStack_360;
          lStack_370 = lStack_350;
        }
        pppppppuStack_348 = (undefined *******)FUN_10a8b12b4;
        pppppppuStack_340 = (undefined *******)&PTR_FUN_110c25598;
        ppppppppuStack_330 = ppppppppuStack_378;
        ppppppppuStack_338 = ppppppppuStack_380;
        lStack_328 = lStack_370;
        ppppppppuStack_380 = (undefined ********)0x0;
        ppppppppuStack_378 = (undefined ********)0x0;
        lStack_370 = 0;
        pppppppuVar17 = (undefined *******)&pppppppuStack_348;
        uStack_368 = uVar4;
        uStack_320 = uVar4;
        FUN_10a860860(ppppppppuVar12,pppppppuVar17);
        break;
      default:
        func_0x00010ae02ecc(0,unaff_x22);
        ppppppppuVar23 = (undefined ********)unaff_x23;
        FUN_10ae079a0();
        func_0x00010ae02edc();
        pppppppuVar17 = (undefined *******)unaff_x23;
        FUN_10ae07cd4(ppppppppuVar23,&PTR_PTR_113303f80);
        goto LAB_10a86c628;
      case 0x16:
        if (lStack_350 < 0) {
          param_3 = ppppppppuStack_358;
          func_0x000107c3192c(&ppppppppuStack_380,ppppppppuStack_360,ppppppppuStack_358);
        }
        else {
          ppppppppuStack_378 = ppppppppuStack_358;
          ppppppppuStack_380 = ppppppppuStack_360;
          lStack_370 = lStack_350;
        }
        uStack_368 = 0x16;
        pppppppuStack_348 = (undefined *******)FUN_10a8b0a94;
        pppppppuStack_340 = (undefined *******)&PTR_FUN_110c25568;
        ppppppppuStack_330 = ppppppppuStack_378;
        ppppppppuStack_338 = ppppppppuStack_380;
        lStack_328 = lStack_370;
        ppppppppuStack_380 = (undefined ********)0x0;
        ppppppppuStack_378 = (undefined ********)0x0;
        lStack_370 = 0;
        uStack_320 = 0x16;
        pppppppuVar17 = (undefined *******)&pppppppuStack_348;
        FUN_10a860860(ppppppppuVar12,pppppppuVar17);
      }
      ppppppppuVar23 = &pppppppuStack_340;
      (*(code *)*pppppppuStack_340)();
      if (lStack_370 < 0) {
        ppppppppuVar23 = ppppppppuStack_380;
        __ZdlPv();
      }
LAB_10a86c628:
      unaff_x27 = (undefined *******)&UNK_10e4df3e8;
      if (lStack_350 < 0) {
        ppppppppuVar23 = ppppppppuStack_360;
        __ZdlPv();
      }
      unaff_x26 = (undefined ********)((long)unaff_x26 + 1);
      unaff_x25 = unaff_x25 + 2;
    } while ((long)unaff_x26 < (long)*(int *)(pppppppuVar16 + 1));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return ppppppppuVar23;
  }
  ___stack_chk_fail();
  if (lStack_350 < 0) {
    __ZdlPv(ppppppppuStack_360);
  }
  ppppppppuVar12 = ppppppppuVar23;
  __Unwind_Resume();
  pcStack_388 = FUN_10a86c6f8;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar10 = ppppppppuVar12;
  ppppppppuStack_3e0 = (undefined ********)unaff_x28;
  pppppppuStack_3d8 = unaff_x27;
  ppppppppuStack_3d0 = unaff_x26;
  ppppppppuStack_3c8 = unaff_x25;
  ppppppppuStack_3c0 = unaff_x24;
  ppppppppuStack_3b8 = (undefined ********)unaff_x23;
  ppppppppuStack_3b0 = unaff_x22;
  ppppppppuStack_3a8 = (undefined ********)ppuVar24;
  ppppppppuStack_3a0 = ppppppppuVar9;
  ppppppppuStack_398 = ppppppppuVar23;
  pppuStack_390 = &ppuStack_2b0;
  FUN_109d1a80c();
  pppppppuStack_5e8 = *ppppppppuVar10;
  uStack_5f0 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  uStack_608 = 0;
  uStack_610 = 0;
  uStack_618 = 0;
  puStack_628 = &UNK_1053a6a3c;
  pppppppuStack_620 = (undefined *******)&PTR_DAT_110ae9180;
  pcStack_5a0 = FUN_10a062c68;
  appuStack_598[0] = &PTR_DAT_110b9f9f8;
  puStack_558 = &UNK_1053a6a3c;
  ppuStack_550 = &PTR_DAT_110ae9180;
  puStack_5e0 = &UNK_1053a6a3c;
  ppuStack_5d8 = &PTR_DAT_110ae9180;
  pppppppuStack_560 = pppppppuStack_5e8;
  FUN_109d1ba5c();
  uStack_720 = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  uStack_748 = 0;
  puStack_758 = &UNK_1053a6a3c;
  ppuStack_750 = &PTR_DAT_110ae9180;
  uStack_760 = 0;
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_778 = 0;
  uStack_780 = 0;
  uStack_788 = 0;
  puStack_798 = &UNK_1053a6a3c;
  ppuStack_790 = &PTR_DAT_110ae9180;
  FUN_109d1b72c(auStack_718,pppppppuVar17,param_3,*(undefined4 *)((long)ppppppppuVar10 + 4),
                &puStack_758,&puStack_798,0);
  uStack_7a8 = 1;
  FUN_109d1f2ec(&uStack_480,&uStack_799,auStack_718,&uStack_7a8);
  uStack_670 = uStack_480;
  uStack_7b8 = 0;
  uStack_7b0 = 0;
  puStack_668 = &UNK_109896774;
  ppuStack_660 = &PTR_DAT_110b17068;
  puStack_650 = apuStack_478[0];
  uStack_658 = uStack_480;
  uVar13 = 0xb8;
  __Znwm(0xb8);
  func_0x000109d18d1c();
  FUN_10a061dc8(&uStack_480,&pcStack_5a0);
  FUN_10a062bb4(auStack_518,uVar13,&uStack_480);
  if (alStack_3f8[0] != 0) {
    func_0x0001092b4274(alStack_3f8);
  }
  func_0x0001092ba41c(auStack_440);
  (*(code *)*apuStack_478[0])(apuStack_478);
  puVar15 = auStack_518;
  FUN_10a062f08(ppppppppuVar12);
  FUN_10a062c88(auStack_518);
  func_0x0001092ba41c(&uStack_670);
  (*(code *)*apuStack_6a8[0])(apuStack_6a8);
  (*(code *)*apuStack_6e8[0])(apuStack_6e8);
  if (cStack_6f1 < '\0') {
    __ZdlPv(uStack_708);
  }
  (*(code *)*ppuStack_790)(&ppuStack_790);
  (*(code *)*ppuStack_750)(&ppuStack_750);
  func_0x0001092ba41c(&pppppppuStack_560);
  (*(code *)*appuStack_598[0])(appuStack_598);
  func_0x0001092ba41c(&pppppppuStack_5e8);
  ppppppppuVar23 = &pppppppuStack_620;
  (*(code *)*pppppppuStack_620)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return ppppppppuVar23;
  }
  ___stack_chk_fail();
  FUN_10a062c88(auStack_518);
  func_0x0001092ba41c(&uStack_670);
  func_0x00010a06e274(&uStack_7b8);
  FUN_109d1c850(auStack_718);
  (*(code *)*ppuStack_790)(&ppuStack_790);
  (*(code *)*ppuStack_750)(&ppuStack_750);
  func_0x0001092ba41c(&pppppppuStack_560);
  (*(code *)*appuStack_598[0])(appuStack_598);
  func_0x0001092ba41c(&pppppppuStack_5e8);
  (*(code *)*pppppppuStack_620)(&pppppppuStack_620);
  do {
    __Unwind_Resume();
  } while ((int)puVar15 == 0);
  func_0x000104bd46a0();
  if (ppppppppuVar23[5] != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppppppppuVar23[3] != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppppppppuVar23[1] != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return ppppppppuVar23;
}



/* Entry: 10a86bd04; end: 10a86c263;  */

/* WARNING: Type propagation algorithm not settling */

undefined ********
FUN_10a86bd04(undefined ********param_1,undefined *******param_2,undefined ******param_3)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined *****pppppuVar5;
  bool bVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined ******ppppppuVar12;
  undefined *******pppppppuVar13;
  undefined **ppuVar14;
  undefined ********unaff_x22;
  undefined **unaff_x23;
  undefined *****pppppuVar15;
  undefined ********unaff_x24;
  undefined *******pppppppuVar16;
  undefined *******unaff_x25;
  undefined ********unaff_x26;
  undefined *******pppppppuVar17;
  undefined *unaff_x27;
  code *unaff_x28;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 uStack_629;
  undefined *puStack_628;
  undefined **ppuStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined *puStack_5e8;
  undefined **ppuStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 auStack_5a8 [16];
  undefined8 uStack_598;
  char cStack_581;
  undefined8 *apuStack_578 [8];
  undefined8 *apuStack_538 [7];
  undefined8 uStack_500;
  undefined *puStack_4f8;
  undefined **ppuStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined *puStack_4b8;
  undefined *******pppppppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined *******pppppppuStack_478;
  undefined *puStack_470;
  undefined **ppuStack_468;
  code *pcStack_430;
  undefined **appuStack_428 [7];
  undefined *******pppppppuStack_3f0;
  undefined *puStack_3e8;
  undefined **ppuStack_3e0;
  undefined1 auStack_3a8 [152];
  undefined8 uStack_310;
  undefined8 *apuStack_308 [7];
  undefined1 auStack_2d0 [72];
  long alStack_288 [2];
  long lStack_278;
  undefined *******pppppppuStack_270;
  undefined *puStack_268;
  undefined ********ppppppppuStack_260;
  undefined *******pppppppuStack_258;
  undefined ********ppppppppuStack_250;
  undefined ********ppppppppuStack_248;
  undefined ********ppppppppuStack_240;
  undefined ********ppppppppuStack_238;
  undefined ********ppppppppuStack_230;
  undefined ********ppppppppuStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined ********ppppppppuStack_210;
  undefined ******ppppppuStack_208;
  long lStack_200;
  uint uStack_1f8;
  undefined ********ppppppppuStack_1f0;
  undefined ******ppppppuStack_1e8;
  long lStack_1e0;
  undefined *******pppppppuStack_1d8;
  undefined *******pppppppuStack_1d0;
  undefined ********ppppppppuStack_1c8;
  undefined ******ppppppuStack_1c0;
  long lStack_1b8;
  uint uStack_1b0;
  long lStack_198;
  undefined *******pppppppuStack_190;
  undefined *puStack_188;
  undefined ********ppppppppuStack_180;
  undefined *******pppppppuStack_178;
  undefined ********ppppppppuStack_170;
  undefined ********ppppppppuStack_168;
  undefined ********ppppppppuStack_160;
  undefined ********ppppppppuStack_158;
  undefined ********ppppppppuStack_150;
  undefined ********ppppppppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *******pppppppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined ********ppppppppuStack_110;
  undefined ********ppppppppuStack_108;
  undefined *******pppppppuStack_100;
  undefined ********ppppppppuStack_f8;
  undefined ********ppppppppuStack_f0;
  undefined ******ppppppuStack_e8;
  ulong uStack_e0;
  undefined ********ppppppppuStack_d8;
  undefined ******ppppppuStack_d0;
  byte bStack_c1;
  undefined ********ppppppppuStack_c0;
  undefined ********ppppppppuStack_b8;
  undefined ******ppppppuStack_b0;
  undefined *******pppppppuStack_a8;
  undefined *******pppppppuStack_a0;
  undefined ********ppppppppuStack_98;
  undefined ********ppppppppuStack_90;
  undefined ********ppppppppuStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = (undefined **)param_1[0xaf];
  ppppppppuStack_b8 = (undefined ********)param_1[0xaf];
  ppppppppuStack_c0 = (undefined ********)param_1[0xae];
  if ((undefined ********)ppuVar14 != (undefined ********)0x0) {
    ppppppppuVar7 = (undefined ********)(ppuVar14 + 1);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
      if (bVar6) {
        *ppppppppuVar7 = (undefined *******)((long)*ppppppppuVar7 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppppppppuVar7 = param_1;
  pppppppuVar17 = param_2;
  if (0 < *(int *)(param_2 + 1)) {
    unaff_x27 = (undefined *)0x0;
    unaff_x28 = (code *)param_2[2];
    do {
      ppuVar14 = (undefined **)ppppppppuStack_b8;
      if (*(int *)param_1[0x3d] == 4) break;
      ppppppuVar12 = *param_2 + (long)unaff_x27 * 4;
      pppppuVar15 = ppppppuVar12[2];
      pppppuVar5 = ppppppuVar12[3];
      func_0x000107c2b054(&ppppppppuStack_d8,*ppppppuVar12);
      ppppppppuStack_f0 = (undefined ********)0x0;
      ppppppuStack_e8 = (undefined ******)0x0;
      uStack_e0 = 0;
      if (pppppuVar15 != (undefined *****)0x0) {
        func_0x000107c2c4dc(&ppppppppuStack_f0,pppppuVar15);
      }
      unaff_x23 = (undefined **)ppppppppuStack_c0;
      ppppppppuVar7 = ppppppppuStack_c0 + 7;
      FUN_10a8abef0(ppppppppuVar7,&ppppppppuStack_d8);
      if (ppppppppuVar7 == (undefined ********)0x0) {
        unaff_x22 = (undefined ********)&ppppppppuStack_d8;
        FUN_10ae03140();
        unaff_x23 = &PTR_PTR_113304890;
        FUN_10ae079a0();
        param_3 = ppppppuStack_d0;
        if (-1 < (char)bStack_c1) {
          param_3 = (undefined ******)(ulong)bStack_c1;
        }
        FUN_10ae0314c();
        ppppppppuVar7 = (undefined ********)unaff_x23;
        pppppppuVar17 = (undefined *******)&PTR_PTR_113304890;
        FUN_10ae07cd4();
      }
      else {
        pppppppuStack_100 = ppppppppuVar7[5];
        unaff_x24 = (undefined ********)ppppppppuVar7[6];
        if (unaff_x24 != (undefined ********)0x0) {
          ppppppppuVar7 = unaff_x24 + 1;
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
            if (bVar6) {
              *ppppppppuVar7 = (undefined *******)((long)*ppppppppuVar7 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        ppppppppuVar7 = (undefined ********)(unaff_x23 + 0xc);
        ppppppppuStack_f8 = unaff_x24;
        FUN_10a8aaad4();
        if (ppppppppuVar7 == (undefined ********)0x0) {
          ppppppppuVar7 = (undefined ********)&PTR_PTR_1133048c8;
          FUN_10ae079a0();
          pppppppuVar17 = (undefined *******)&PTR_PTR_1133048c8;
          FUN_10ae07cd4();
          unaff_x22 = (undefined ********)&PTR_PTR_1133048c8;
        }
        else {
          ppppppuVar12 = ppppppuStack_e8;
          if (-1 < (long)uStack_e0) {
            ppppppuVar12 = (undefined ******)(uStack_e0 >> 0x38);
          }
          pppppppuVar17 = ppppppppuVar7[4];
          if (ppppppuVar12 == (undefined ******)0x0) {
            pppppppuVar13 = (undefined *******)0xd0;
            __Znwm();
            pppppppuVar16 = pppppppuVar13 + 1;
            *pppppppuVar16 = (undefined ******)0x0;
            pppppppuVar13[2] = (undefined ******)0x0;
            *pppppppuVar13 = (undefined ******)&PTR_FUN_110bf8238;
            pppppppuVar13[0x17] = (undefined ******)0x0;
            pppppppuVar13[0x16] = (undefined ******)0x0;
            pppppppuVar13[0x19] = (undefined ******)0x0;
            pppppppuVar13[0x18] = (undefined ******)0x0;
            pppppppuVar13[3] = (undefined ******)&PTR_FUN_110c25680;
            pppppppuVar13[9] = (undefined ******)0x0;
            pppppppuVar13[8] = (undefined ******)0x0;
            pppppppuVar13[0xb] = (undefined ******)0x0;
            pppppppuVar13[10] = (undefined ******)0x0;
            pppppppuVar13[0xd] = (undefined ******)0x0;
            pppppppuVar13[0xc] = (undefined ******)0x0;
            pppppppuVar13[0xf] = (undefined ******)0x0;
            pppppppuVar13[0xe] = (undefined ******)0x0;
            pppppppuVar13[5] = (undefined ******)0x0;
            pppppppuVar13[4] = (undefined ******)0x0;
            pppppppuVar13[7] = (undefined ******)0x0;
            pppppppuVar13[6] = (undefined ******)0x0;
            pppppppuVar13[0xe] = (undefined ******)0x0;
            pppppppuVar13[0xf] = (undefined ******)0xffffffffffffffff;
            pppppppuVar13[0x13] = (undefined ******)0x0;
            pppppppuVar13[0x12] = (undefined ******)0x0;
            pppppppuVar13[0x15] = (undefined ******)0x0;
            pppppppuVar13[0x14] = (undefined ******)0x0;
            pppppppuVar13[0x11] = (undefined ******)0x0;
            pppppppuVar13[0x10] = (undefined ******)0x0;
            *(undefined1 *)(pppppppuVar13 + 0x16) = 0;
            FUN_10a8602bc(pppppppuVar17 + 9,pppppppuVar13 + 3,pppppppuVar13);
            do {
              ppppppuVar12 = *pppppppuVar16;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
              if (bVar6) {
                *pppppppuVar16 = (undefined ******)((long)ppppppuVar12 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            unaff_x25 = pppppppuVar13;
            if (ppppppuVar12 == (undefined ******)0x0) {
              (*(code *)(*pppppppuVar13)[2])(pppppppuVar13);
LAB_10a86bf80:
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar13);
            }
          }
          else {
            FUN_10a87a708(&ppppppuStack_b0,param_1,&ppppppppuStack_f0);
            pppppppuVar13 = pppppppuStack_a8;
            FUN_10a8602bc(pppppppuVar17 + 9,ppppppuStack_b0,pppppppuStack_a8);
            if (pppppppuVar13 != (undefined *******)0x0) {
              pppppppuVar17 = pppppppuVar13 + 1;
              do {
                ppppppuVar12 = *pppppppuVar17;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
                if (bVar6) {
                  *pppppppuVar17 = (undefined ******)((long)ppppppuVar12 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (ppppppuVar12 == (undefined ******)0x0) {
                (*(code *)(*pppppppuVar13)[2])(pppppppuVar13);
                goto LAB_10a86bf80;
              }
            }
          }
          pppppppuVar17 = pppppppuStack_100;
          param_3 = ppppppuStack_e8;
          if (-1 < (long)uStack_e0) {
            param_3 = (undefined ******)(uStack_e0 >> 0x38);
          }
          uVar1 = 2;
          if (((ulong)pppppuVar5 & 1) == 0) {
            uVar1 = param_3 == (undefined ******)0x0;
          }
          *(undefined1 *)((long)ppppppppuVar7[4] + 0x35) = uVar1;
          if (param_3 == (undefined ******)0x0) {
            bVar6 = false;
          }
          else {
            pppppppuVar13 = param_1[0x46];
            bVar3 = *(byte *)((long)pppppppuVar13 + 0x47);
            ppppppuVar12 = pppppppuVar13[7];
            if (-1 < (char)bVar3) {
              ppppppuVar12 = (undefined ******)(ulong)bVar3;
            }
            if (param_3 == ppppppuVar12) {
              ppppppppuVar7 = ppppppppuStack_f0;
              if (-1 < (long)uStack_e0) {
                ppppppppuVar7 = (undefined ********)&ppppppppuStack_f0;
              }
              pppppppuVar16 = (undefined *******)pppppppuVar13[6];
              if (-1 < (char)bVar3) {
                pppppppuVar16 = pppppppuVar13 + 6;
              }
              _memcmp(ppppppppuVar7,pppppppuVar16);
              bVar6 = (int)ppppppppuVar7 != 0;
            }
            else {
              bVar6 = true;
            }
          }
          *(bool *)(pppppppuVar17 + 0xc) = bVar6;
          unaff_x26 = (undefined ********)0x40;
          __Znwm();
          unaff_x23 = (undefined **)(unaff_x26 + 1);
          *unaff_x23 = (undefined *)0x0;
          unaff_x26[2] = (undefined *******)0x0;
          *unaff_x26 = (undefined *******)&PTR_DAT_110c254b0;
          ppppppppuStack_110 = unaff_x26 + 3;
          *ppppppppuStack_110 = (undefined *******)&PTR_DAT_110c23d60;
          unaff_x26[4] = (undefined *******)0x0;
          unaff_x26[5] = (undefined *******)0x0;
          unaff_x26[6] = (undefined *******)unaff_x28;
          *(undefined1 *)(unaff_x26 + 7) = uVar1;
          if (ppppppppuStack_f8 != (undefined ********)0x0) {
            ppppppppuVar7 = ppppppppuStack_f8 + 1;
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
              if (bVar6) {
                *ppppppppuVar7 = (undefined *******)((long)*ppppppppuVar7 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar6) {
              *unaff_x23 = (undefined *)((long)*unaff_x23 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppppuStack_b0 = (undefined ******)FUN_10a8af214;
          pppppppuStack_a8 = (undefined *******)&PTR_FUN_110c25508;
          pppppppuStack_a0 = pppppppuVar17;
          ppppppppuStack_98 = ppppppppuStack_f8;
          pppppppuStack_130 = (undefined *******)0x0;
          uStack_128 = 0;
          uStack_120 = 0;
          uStack_118 = 0;
          pppppppuVar17 = &ppppppuStack_b0;
          ppppppppuStack_108 = unaff_x26;
          ppppppppuStack_90 = ppppppppuStack_110;
          ppppppppuStack_88 = unaff_x26;
          FUN_10a860860(param_1);
          ppppppppuVar7 = &pppppppuStack_a8;
          (*(code *)*pppppppuStack_a8)();
          do {
            pppppppuVar13 = (undefined *******)*unaff_x23;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar6) {
              *unaff_x23 = (undefined *)((long)pppppppuVar13 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          unaff_x24 = ppppppppuStack_f8;
          unaff_x22 = &pppppppuStack_130;
          if (pppppppuVar13 == (undefined *******)0x0) {
            (*(code *)(*unaff_x26)[2])(unaff_x26);
            ppppppppuVar7 = unaff_x26;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            unaff_x24 = ppppppppuStack_f8;
          }
        }
        if (unaff_x24 != (undefined ********)0x0) {
          ppppppppuVar8 = unaff_x24 + 1;
          do {
            pppppppuVar13 = *ppppppppuVar8;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar8,0x10);
            if (bVar6) {
              *ppppppppuVar8 = (undefined *******)((long)pppppppuVar13 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppppuVar13 == (undefined *******)0x0) {
            (*(code *)(*unaff_x24)[2])(unaff_x24);
            ppppppppuVar7 = unaff_x24;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      if ((long)uStack_e0 < 0) {
        ppppppppuVar7 = ppppppppuStack_f0;
        __ZdlPv();
      }
      if ((char)bStack_c1 < '\0') {
        ppppppppuVar7 = ppppppppuStack_d8;
        __ZdlPv();
      }
      unaff_x27 = unaff_x27 + 1;
      ppuVar14 = (undefined **)ppppppppuStack_b8;
    } while ((long)unaff_x27 < (long)*(int *)(param_2 + 1));
  }
  if ((undefined ********)ppuVar14 != (undefined ********)0x0) {
    ppppppppuVar8 = (undefined ********)(ppuVar14 + 1);
    do {
      pppppppuVar13 = *ppppppppuVar8;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar8,0x10);
      if (bVar6) {
        *ppppppppuVar8 = (undefined *******)((long)pppppppuVar13 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppppuVar13 == (undefined *******)0x0) {
      (*(code *)*(undefined *******)((long)*ppuVar14 + 0x10))(ppuVar14);
      ppppppppuVar7 = (undefined ********)ppuVar14;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppppppuVar7;
  }
  ___stack_chk_fail();
  FUN_10a297544(&pppppppuStack_100);
  if ((long)uStack_e0 < 0) {
    __ZdlPv(ppppppppuStack_f0);
  }
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(ppppppppuStack_d8);
  }
  FUN_10a8931d4(&ppppppppuStack_c0);
  ppppppppuVar8 = ppppppppuVar7;
  __Unwind_Resume();
  pppppppuStack_190 = (undefined *******)unaff_x28;
  puStack_188 = unaff_x27;
  ppppppppuStack_180 = unaff_x26;
  pppppppuStack_178 = unaff_x25;
  ppppppppuStack_170 = unaff_x24;
  ppppppppuStack_168 = (undefined ********)unaff_x23;
  ppppppppuStack_160 = unaff_x22;
  ppppppppuStack_158 = (undefined ********)ppuVar14;
  ppppppppuStack_150 = param_1;
  ppppppppuStack_148 = ppppppppuVar7;
  puStack_140 = &stack0xfffffffffffffff0;
  pcStack_138 = FUN_10a86c264;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar7 = ppppppppuVar8;
  pppppppuVar13 = pppppppuVar17;
  if (0 < *(int *)(pppppppuVar17 + 1)) {
    unaff_x25 = (undefined *******)0x0;
    unaff_x26 = (undefined ********)0x0;
    unaff_x23 = &PTR_PTR_113303f80;
    unaff_x28 = FUN_10a8b0184;
    ppuVar14 = &PTR_DAT_110c25520;
    unaff_x24 = &pppppppuStack_1d8;
    do {
      unaff_x27 = &UNK_10e4df3e8;
      param_1 = ppppppppuVar8;
      if (*(int *)ppppppppuVar8[0x3d] == 4) break;
      uVar2 = *(uint *)((long)*pppppppuVar17 + (long)unaff_x25);
      unaff_x22 = (undefined ********)(ulong)uVar2;
      ppppppppuStack_1f0 = (undefined ********)0x0;
      ppppppuStack_1e8 = (undefined ******)0x0;
      lStack_1e0 = 0;
      if (*(long *)((uint *)((long)*pppppppuVar17 + (long)unaff_x25) + 2) != 0) {
        func_0x000107c2c4dc(&ppppppppuStack_1f0);
      }
      switch(uVar2) {
      case 1:
      case 2:
      case 3:
      case 0x13:
        if (lStack_1e0 < 0) {
          param_3 = ppppppuStack_1e8;
          func_0x000107c3192c(&ppppppppuStack_210,ppppppppuStack_1f0,ppppppuStack_1e8);
        }
        else {
          ppppppuStack_208 = ppppppuStack_1e8;
          ppppppppuStack_210 = ppppppppuStack_1f0;
          lStack_200 = lStack_1e0;
        }
        pppppppuStack_1d8 = (undefined *******)FUN_10a8b0184;
        pppppppuStack_1d0 = (undefined *******)&PTR_DAT_110c25520;
        ppppppuStack_1c0 = ppppppuStack_208;
        ppppppppuStack_1c8 = ppppppppuStack_210;
        lStack_1b8 = lStack_200;
        ppppppppuStack_210 = (undefined ********)0x0;
        ppppppuStack_208 = (undefined ******)0x0;
        lStack_200 = 0;
        pppppppuVar13 = (undefined *******)&pppppppuStack_1d8;
        uStack_1f8 = uVar2;
        uStack_1b0 = uVar2;
        FUN_10a860860(ppppppppuVar8,pppppppuVar13);
        break;
      case 7:
      case 8:
      case 9:
        if (lStack_1e0 < 0) {
          param_3 = ppppppuStack_1e8;
          func_0x000107c3192c(&ppppppppuStack_210,ppppppppuStack_1f0,ppppppuStack_1e8);
        }
        else {
          ppppppuStack_208 = ppppppuStack_1e8;
          ppppppppuStack_210 = ppppppppuStack_1f0;
          lStack_200 = lStack_1e0;
        }
        pppppppuStack_1d8 = (undefined *******)FUN_10a8b041c;
        pppppppuStack_1d0 = (undefined *******)&PTR_FUN_110c25538;
        ppppppuStack_1c0 = ppppppuStack_208;
        ppppppppuStack_1c8 = ppppppppuStack_210;
        lStack_1b8 = lStack_200;
        ppppppppuStack_210 = (undefined ********)0x0;
        ppppppuStack_208 = (undefined ******)0x0;
        lStack_200 = 0;
        pppppppuVar13 = (undefined *******)&pppppppuStack_1d8;
        uStack_1f8 = uVar2;
        uStack_1b0 = uVar2;
        FUN_10a860860(ppppppppuVar8,pppppppuVar13);
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0x10:
      case 0x15:
        if (lStack_1e0 < 0) {
          param_3 = ppppppuStack_1e8;
          func_0x000107c3192c(&ppppppppuStack_210,ppppppppuStack_1f0,ppppppuStack_1e8);
        }
        else {
          ppppppuStack_208 = ppppppuStack_1e8;
          ppppppppuStack_210 = ppppppppuStack_1f0;
          lStack_200 = lStack_1e0;
        }
        pppppppuStack_1d8 = (undefined *******)FUN_10a8b0684;
        pppppppuStack_1d0 = (undefined *******)&PTR_FUN_110c25550;
        ppppppuStack_1c0 = ppppppuStack_208;
        ppppppppuStack_1c8 = ppppppppuStack_210;
        lStack_1b8 = lStack_200;
        ppppppppuStack_210 = (undefined ********)0x0;
        ppppppuStack_208 = (undefined ******)0x0;
        lStack_200 = 0;
        pppppppuVar13 = (undefined *******)&pppppppuStack_1d8;
        uStack_1f8 = uVar2;
        uStack_1b0 = uVar2;
        FUN_10a860860(ppppppppuVar8,pppppppuVar13);
        break;
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x11:
        if (lStack_1e0 < 0) {
          param_3 = ppppppuStack_1e8;
          func_0x000107c3192c(&ppppppppuStack_210,ppppppppuStack_1f0,ppppppuStack_1e8);
        }
        else {
          ppppppuStack_208 = ppppppuStack_1e8;
          ppppppppuStack_210 = ppppppppuStack_1f0;
          lStack_200 = lStack_1e0;
        }
        pppppppuStack_1d8 = (undefined *******)FUN_10a8b0ea4;
        pppppppuStack_1d0 = (undefined *******)&PTR_FUN_110c25580;
        ppppppuStack_1c0 = ppppppuStack_208;
        ppppppppuStack_1c8 = ppppppppuStack_210;
        lStack_1b8 = lStack_200;
        ppppppppuStack_210 = (undefined ********)0x0;
        ppppppuStack_208 = (undefined ******)0x0;
        lStack_200 = 0;
        uStack_1f8 = uVar2;
        uStack_1b0 = uVar2;
        FUN_10a860860(ppppppppuVar8,&pppppppuStack_1d8);
        (*(code *)*pppppppuStack_1d0)(&pppppppuStack_1d0);
        if (lStack_200 < 0) {
          __ZdlPv(ppppppppuStack_210);
        }
      case 4:
      case 5:
      case 6:
      case 0x12:
      case 0x17:
      case 0x18:
        if (lStack_1e0 < 0) {
          param_3 = ppppppuStack_1e8;
          func_0x000107c3192c(&ppppppppuStack_210,ppppppppuStack_1f0,ppppppuStack_1e8);
        }
        else {
          ppppppuStack_208 = ppppppuStack_1e8;
          ppppppppuStack_210 = ppppppppuStack_1f0;
          lStack_200 = lStack_1e0;
        }
        pppppppuStack_1d8 = (undefined *******)FUN_10a8b12b4;
        pppppppuStack_1d0 = (undefined *******)&PTR_FUN_110c25598;
        ppppppuStack_1c0 = ppppppuStack_208;
        ppppppppuStack_1c8 = ppppppppuStack_210;
        lStack_1b8 = lStack_200;
        ppppppppuStack_210 = (undefined ********)0x0;
        ppppppuStack_208 = (undefined ******)0x0;
        lStack_200 = 0;
        pppppppuVar13 = (undefined *******)&pppppppuStack_1d8;
        uStack_1f8 = uVar2;
        uStack_1b0 = uVar2;
        FUN_10a860860(ppppppppuVar8,pppppppuVar13);
        break;
      default:
        func_0x00010ae02ecc(0,unaff_x22);
        ppppppppuVar7 = (undefined ********)unaff_x23;
        FUN_10ae079a0();
        func_0x00010ae02edc();
        pppppppuVar13 = (undefined *******)unaff_x23;
        FUN_10ae07cd4(ppppppppuVar7,&PTR_PTR_113303f80);
        goto LAB_10a86c628;
      case 0x16:
        if (lStack_1e0 < 0) {
          param_3 = ppppppuStack_1e8;
          func_0x000107c3192c(&ppppppppuStack_210,ppppppppuStack_1f0,ppppppuStack_1e8);
        }
        else {
          ppppppuStack_208 = ppppppuStack_1e8;
          ppppppppuStack_210 = ppppppppuStack_1f0;
          lStack_200 = lStack_1e0;
        }
        uStack_1f8 = 0x16;
        pppppppuStack_1d8 = (undefined *******)FUN_10a8b0a94;
        pppppppuStack_1d0 = (undefined *******)&PTR_FUN_110c25568;
        ppppppuStack_1c0 = ppppppuStack_208;
        ppppppppuStack_1c8 = ppppppppuStack_210;
        lStack_1b8 = lStack_200;
        ppppppppuStack_210 = (undefined ********)0x0;
        ppppppuStack_208 = (undefined ******)0x0;
        lStack_200 = 0;
        uStack_1b0 = 0x16;
        pppppppuVar13 = (undefined *******)&pppppppuStack_1d8;
        FUN_10a860860(ppppppppuVar8,pppppppuVar13);
      }
      ppppppppuVar7 = &pppppppuStack_1d0;
      (*(code *)*pppppppuStack_1d0)();
      if (lStack_200 < 0) {
        ppppppppuVar7 = ppppppppuStack_210;
        __ZdlPv();
      }
LAB_10a86c628:
      unaff_x27 = &UNK_10e4df3e8;
      if (lStack_1e0 < 0) {
        ppppppppuVar7 = ppppppppuStack_1f0;
        __ZdlPv();
      }
      unaff_x26 = (undefined ********)((long)unaff_x26 + 1);
      unaff_x25 = unaff_x25 + 2;
    } while ((long)unaff_x26 < (long)*(int *)(pppppppuVar17 + 1));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppppppppuVar7;
  }
  ___stack_chk_fail();
  if (lStack_1e0 < 0) {
    __ZdlPv(ppppppppuStack_1f0);
  }
  ppppppppuVar8 = ppppppppuVar7;
  __Unwind_Resume();
  pcStack_218 = FUN_10a86c6f8;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar9 = ppppppppuVar8;
  pppppppuStack_270 = (undefined *******)unaff_x28;
  puStack_268 = unaff_x27;
  ppppppppuStack_260 = unaff_x26;
  pppppppuStack_258 = unaff_x25;
  ppppppppuStack_250 = unaff_x24;
  ppppppppuStack_248 = (undefined ********)unaff_x23;
  ppppppppuStack_240 = unaff_x22;
  ppppppppuStack_238 = (undefined ********)ppuVar14;
  ppppppppuStack_230 = param_1;
  ppppppppuStack_228 = ppppppppuVar7;
  ppuStack_220 = &puStack_140;
  FUN_109d1a80c();
  pppppppuStack_478 = *ppppppppuVar9;
  uStack_480 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_4a8 = 0;
  puStack_4b8 = &UNK_1053a6a3c;
  pppppppuStack_4b0 = (undefined *******)&PTR_DAT_110ae9180;
  pcStack_430 = FUN_10a062c68;
  appuStack_428[0] = &PTR_DAT_110b9f9f8;
  puStack_3e8 = &UNK_1053a6a3c;
  ppuStack_3e0 = &PTR_DAT_110ae9180;
  puStack_470 = &UNK_1053a6a3c;
  ppuStack_468 = &PTR_DAT_110ae9180;
  pppppppuStack_3f0 = pppppppuStack_478;
  FUN_109d1ba5c();
  uStack_5b0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5d8 = 0;
  puStack_5e8 = &UNK_1053a6a3c;
  ppuStack_5e0 = &PTR_DAT_110ae9180;
  uStack_5f0 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  uStack_608 = 0;
  uStack_610 = 0;
  uStack_618 = 0;
  puStack_628 = &UNK_1053a6a3c;
  ppuStack_620 = &PTR_DAT_110ae9180;
  FUN_109d1b72c(auStack_5a8,pppppppuVar13,param_3,*(undefined4 *)((long)ppppppppuVar9 + 4),
                &puStack_5e8,&puStack_628,0);
  uStack_638 = 1;
  FUN_109d1f2ec(&uStack_310,&uStack_629,auStack_5a8,&uStack_638);
  uStack_500 = uStack_310;
  uStack_648 = 0;
  uStack_640 = 0;
  puStack_4f8 = &UNK_109896774;
  ppuStack_4f0 = &PTR_DAT_110b17068;
  puStack_4e0 = apuStack_308[0];
  uStack_4e8 = uStack_310;
  uVar10 = 0xb8;
  __Znwm(0xb8);
  func_0x000109d18d1c();
  FUN_10a061dc8(&uStack_310,&pcStack_430);
  FUN_10a062bb4(auStack_3a8,uVar10,&uStack_310);
  if (alStack_288[0] != 0) {
    func_0x0001092b4274(alStack_288);
  }
  func_0x0001092ba41c(auStack_2d0);
  (*(code *)*apuStack_308[0])(apuStack_308);
  puVar11 = auStack_3a8;
  FUN_10a062f08(ppppppppuVar8);
  FUN_10a062c88(auStack_3a8);
  func_0x0001092ba41c(&uStack_500);
  (*(code *)*apuStack_538[0])(apuStack_538);
  (*(code *)*apuStack_578[0])(apuStack_578);
  if (cStack_581 < '\0') {
    __ZdlPv(uStack_598);
  }
  (*(code *)*ppuStack_620)(&ppuStack_620);
  (*(code *)*ppuStack_5e0)(&ppuStack_5e0);
  func_0x0001092ba41c(&pppppppuStack_3f0);
  (*(code *)*appuStack_428[0])(appuStack_428);
  func_0x0001092ba41c(&pppppppuStack_478);
  ppppppppuVar7 = &pppppppuStack_4b0;
  (*(code *)*pppppppuStack_4b0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return ppppppppuVar7;
  }
  ___stack_chk_fail();
  FUN_10a062c88(auStack_3a8);
  func_0x0001092ba41c(&uStack_500);
  func_0x00010a06e274(&uStack_648);
  FUN_109d1c850(auStack_5a8);
  (*(code *)*ppuStack_620)(&ppuStack_620);
  (*(code *)*ppuStack_5e0)(&ppuStack_5e0);
  func_0x0001092ba41c(&pppppppuStack_3f0);
  (*(code *)*appuStack_428[0])(appuStack_428);
  func_0x0001092ba41c(&pppppppuStack_478);
  (*(code *)*pppppppuStack_4b0)(&pppppppuStack_4b0);
  do {
    __Unwind_Resume();
  } while ((int)puVar11 == 0);
  func_0x000104bd46a0();
  if (ppppppppuVar7[5] != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppppppppuVar7[3] != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppppppppuVar7[1] != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return ppppppppuVar7;
}



/* Entry: 10a86c264; end: 10a86c6f7;  */

undefined *** FUN_10a86c264(undefined ***param_1,code **param_2,undefined8 param_3)

{
  uint uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  code **ppcVar6;
  undefined1 *puVar7;
  undefined ***unaff_x20;
  undefined **unaff_x21;
  ulong unaff_x22;
  undefined **unaff_x23;
  code **unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined *unaff_x27;
  code *unaff_x28;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 uStack_4f9;
  undefined *puStack_4f8;
  undefined **ppuStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined *puStack_4b8;
  undefined **ppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 auStack_478 [16];
  undefined8 uStack_468;
  char cStack_451;
  undefined8 *apuStack_448 [8];
  undefined8 *apuStack_408 [7];
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined **ppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 *puStack_3b0;
  undefined *puStack_388;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined **ppuStack_348;
  undefined *puStack_340;
  undefined **ppuStack_338;
  code *pcStack_300;
  undefined **appuStack_2f8 [7];
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined **ppuStack_2b0;
  undefined1 auStack_278 [152];
  undefined8 uStack_1e0;
  undefined8 *apuStack_1d8 [7];
  undefined1 auStack_1a0 [72];
  long alStack_158 [2];
  long lStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  code **ppcStack_120;
  undefined **ppuStack_118;
  ulong uStack_110;
  undefined **ppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  uint uStack_c8;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  undefined8 uStack_90;
  long lStack_88;
  uint uStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar2 = param_1;
  ppcVar6 = param_2;
  if (0 < *(int *)(param_2 + 1)) {
    unaff_x25 = 0;
    unaff_x26 = 0;
    unaff_x23 = &PTR_PTR_113303f80;
    unaff_x28 = FUN_10a8b0184;
    unaff_x21 = &PTR_DAT_110c25520;
    unaff_x24 = &pcStack_a8;
    do {
      unaff_x27 = &UNK_10e4df3e8;
      unaff_x20 = param_1;
      if (*(int *)param_1[0x3d] == 4) break;
      uVar1 = *(uint *)(*param_2 + unaff_x25);
      unaff_x22 = (ulong)uVar1;
      pppuStack_c0 = (undefined ***)0x0;
      uStack_b8 = 0;
      lStack_b0 = 0;
      if (*(long *)(*param_2 + unaff_x25 + 8) != 0) {
        func_0x000107c2c4dc(&pppuStack_c0);
      }
      switch(uVar1) {
      case 1:
      case 2:
      case 3:
      case 0x13:
        if (lStack_b0 < 0) {
          param_3 = uStack_b8;
          func_0x000107c3192c(&pppuStack_e0,pppuStack_c0,uStack_b8);
        }
        else {
          uStack_d8 = uStack_b8;
          pppuStack_e0 = pppuStack_c0;
          lStack_d0 = lStack_b0;
        }
        pcStack_a8 = FUN_10a8b0184;
        ppuStack_a0 = &PTR_DAT_110c25520;
        uStack_90 = uStack_d8;
        pppuStack_98 = pppuStack_e0;
        lStack_88 = lStack_d0;
        pppuStack_e0 = (undefined ***)0x0;
        uStack_d8 = 0;
        lStack_d0 = 0;
        ppcVar6 = &pcStack_a8;
        uStack_c8 = uVar1;
        uStack_80 = uVar1;
        FUN_10a860860(param_1,ppcVar6);
        break;
      case 7:
      case 8:
      case 9:
        if (lStack_b0 < 0) {
          param_3 = uStack_b8;
          func_0x000107c3192c(&pppuStack_e0,pppuStack_c0,uStack_b8);
        }
        else {
          uStack_d8 = uStack_b8;
          pppuStack_e0 = pppuStack_c0;
          lStack_d0 = lStack_b0;
        }
        pcStack_a8 = FUN_10a8b041c;
        ppuStack_a0 = &PTR_FUN_110c25538;
        uStack_90 = uStack_d8;
        pppuStack_98 = pppuStack_e0;
        lStack_88 = lStack_d0;
        pppuStack_e0 = (undefined ***)0x0;
        uStack_d8 = 0;
        lStack_d0 = 0;
        ppcVar6 = &pcStack_a8;
        uStack_c8 = uVar1;
        uStack_80 = uVar1;
        FUN_10a860860(param_1,ppcVar6);
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0x10:
      case 0x15:
        if (lStack_b0 < 0) {
          param_3 = uStack_b8;
          func_0x000107c3192c(&pppuStack_e0,pppuStack_c0,uStack_b8);
        }
        else {
          uStack_d8 = uStack_b8;
          pppuStack_e0 = pppuStack_c0;
          lStack_d0 = lStack_b0;
        }
        pcStack_a8 = FUN_10a8b0684;
        ppuStack_a0 = &PTR_FUN_110c25550;
        uStack_90 = uStack_d8;
        pppuStack_98 = pppuStack_e0;
        lStack_88 = lStack_d0;
        pppuStack_e0 = (undefined ***)0x0;
        uStack_d8 = 0;
        lStack_d0 = 0;
        ppcVar6 = &pcStack_a8;
        uStack_c8 = uVar1;
        uStack_80 = uVar1;
        FUN_10a860860(param_1,ppcVar6);
        break;
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x11:
        if (lStack_b0 < 0) {
          param_3 = uStack_b8;
          func_0x000107c3192c(&pppuStack_e0,pppuStack_c0,uStack_b8);
        }
        else {
          uStack_d8 = uStack_b8;
          pppuStack_e0 = pppuStack_c0;
          lStack_d0 = lStack_b0;
        }
        pcStack_a8 = FUN_10a8b0ea4;
        ppuStack_a0 = &PTR_FUN_110c25580;
        uStack_90 = uStack_d8;
        pppuStack_98 = pppuStack_e0;
        lStack_88 = lStack_d0;
        pppuStack_e0 = (undefined ***)0x0;
        uStack_d8 = 0;
        lStack_d0 = 0;
        uStack_c8 = uVar1;
        uStack_80 = uVar1;
        FUN_10a860860(param_1,&pcStack_a8);
        (*(code *)*ppuStack_a0)(&ppuStack_a0);
        if (lStack_d0 < 0) {
          __ZdlPv(pppuStack_e0);
        }
      case 4:
      case 5:
      case 6:
      case 0x12:
      case 0x17:
      case 0x18:
        if (lStack_b0 < 0) {
          param_3 = uStack_b8;
          func_0x000107c3192c(&pppuStack_e0,pppuStack_c0,uStack_b8);
        }
        else {
          uStack_d8 = uStack_b8;
          pppuStack_e0 = pppuStack_c0;
          lStack_d0 = lStack_b0;
        }
        pcStack_a8 = FUN_10a8b12b4;
        ppuStack_a0 = &PTR_FUN_110c25598;
        uStack_90 = uStack_d8;
        pppuStack_98 = pppuStack_e0;
        lStack_88 = lStack_d0;
        pppuStack_e0 = (undefined ***)0x0;
        uStack_d8 = 0;
        lStack_d0 = 0;
        ppcVar6 = &pcStack_a8;
        uStack_c8 = uVar1;
        uStack_80 = uVar1;
        FUN_10a860860(param_1,ppcVar6);
        break;
      default:
        func_0x00010ae02ecc(0,unaff_x22);
        pppuVar2 = (undefined ***)unaff_x23;
        FUN_10ae079a0();
        func_0x00010ae02edc();
        ppcVar6 = (code **)unaff_x23;
        FUN_10ae07cd4(pppuVar2,&PTR_PTR_113303f80);
        goto LAB_10a86c628;
      case 0x16:
        if (lStack_b0 < 0) {
          param_3 = uStack_b8;
          func_0x000107c3192c(&pppuStack_e0,pppuStack_c0,uStack_b8);
        }
        else {
          uStack_d8 = uStack_b8;
          pppuStack_e0 = pppuStack_c0;
          lStack_d0 = lStack_b0;
        }
        uStack_c8 = 0x16;
        pcStack_a8 = FUN_10a8b0a94;
        ppuStack_a0 = &PTR_FUN_110c25568;
        uStack_90 = uStack_d8;
        pppuStack_98 = pppuStack_e0;
        lStack_88 = lStack_d0;
        pppuStack_e0 = (undefined ***)0x0;
        uStack_d8 = 0;
        lStack_d0 = 0;
        uStack_80 = 0x16;
        ppcVar6 = &pcStack_a8;
        FUN_10a860860(param_1,ppcVar6);
      }
      pppuVar2 = &ppuStack_a0;
      (*(code *)*ppuStack_a0)();
      if (lStack_d0 < 0) {
        pppuVar2 = pppuStack_e0;
        __ZdlPv();
      }
LAB_10a86c628:
      unaff_x27 = &UNK_10e4df3e8;
      if (lStack_b0 < 0) {
        pppuVar2 = pppuStack_c0;
        __ZdlPv();
      }
      unaff_x26 = unaff_x26 + 1;
      unaff_x25 = unaff_x25 + 0x10;
    } while (unaff_x26 < *(int *)(param_2 + 1));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  if (lStack_b0 < 0) {
    __ZdlPv(pppuStack_c0);
  }
  pppuVar3 = pppuVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a86c6f8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = pppuVar3;
  pcStack_140 = unaff_x28;
  puStack_138 = unaff_x27;
  lStack_130 = unaff_x26;
  lStack_128 = unaff_x25;
  ppcStack_120 = unaff_x24;
  ppuStack_118 = unaff_x23;
  uStack_110 = unaff_x22;
  ppuStack_108 = unaff_x21;
  pppuStack_100 = unaff_x20;
  pppuStack_f8 = pppuVar2;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_109d1a80c();
  ppuStack_348 = *pppuVar4;
  uStack_350 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_378 = 0;
  puStack_388 = &UNK_1053a6a3c;
  ppuStack_380 = &PTR_DAT_110ae9180;
  pcStack_300 = FUN_10a062c68;
  appuStack_2f8[0] = &PTR_DAT_110b9f9f8;
  puStack_2b8 = &UNK_1053a6a3c;
  ppuStack_2b0 = &PTR_DAT_110ae9180;
  puStack_340 = &UNK_1053a6a3c;
  ppuStack_338 = &PTR_DAT_110ae9180;
  ppuStack_2c0 = ppuStack_348;
  FUN_109d1ba5c();
  uStack_480 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_4a8 = 0;
  puStack_4b8 = &UNK_1053a6a3c;
  ppuStack_4b0 = &PTR_DAT_110ae9180;
  uStack_4c0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  puStack_4f8 = &UNK_1053a6a3c;
  ppuStack_4f0 = &PTR_DAT_110ae9180;
  FUN_109d1b72c(auStack_478,ppcVar6,param_3,*(undefined4 *)((long)pppuVar4 + 4),&puStack_4b8,
                &puStack_4f8,0);
  uStack_508 = 1;
  FUN_109d1f2ec(&uStack_1e0,&uStack_4f9,auStack_478,&uStack_508);
  uStack_3d0 = uStack_1e0;
  uStack_518 = 0;
  uStack_510 = 0;
  puStack_3c8 = &UNK_109896774;
  ppuStack_3c0 = &PTR_DAT_110b17068;
  puStack_3b0 = apuStack_1d8[0];
  uStack_3b8 = uStack_1e0;
  uVar5 = 0xb8;
  __Znwm(0xb8);
  func_0x000109d18d1c();
  FUN_10a061dc8(&uStack_1e0,&pcStack_300);
  FUN_10a062bb4(auStack_278,uVar5,&uStack_1e0);
  if (alStack_158[0] != 0) {
    func_0x0001092b4274(alStack_158);
  }
  func_0x0001092ba41c(auStack_1a0);
  (*(code *)*apuStack_1d8[0])(apuStack_1d8);
  puVar7 = auStack_278;
  FUN_10a062f08(pppuVar3);
  FUN_10a062c88(auStack_278);
  func_0x0001092ba41c(&uStack_3d0);
  (*(code *)*apuStack_408[0])(apuStack_408);
  (*(code *)*apuStack_448[0])(apuStack_448);
  if (cStack_451 < '\0') {
    __ZdlPv(uStack_468);
  }
  (*(code *)*ppuStack_4f0)(&ppuStack_4f0);
  (*(code *)*ppuStack_4b0)(&ppuStack_4b0);
  func_0x0001092ba41c(&ppuStack_2c0);
  (*(code *)*appuStack_2f8[0])(appuStack_2f8);
  func_0x0001092ba41c(&ppuStack_348);
  pppuVar2 = &ppuStack_380;
  (*(code *)*ppuStack_380)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  FUN_10a062c88(auStack_278);
  func_0x0001092ba41c(&uStack_3d0);
  func_0x00010a06e274(&uStack_518);
  FUN_109d1c850(auStack_478);
  (*(code *)*ppuStack_4f0)(&ppuStack_4f0);
  (*(code *)*ppuStack_4b0)(&ppuStack_4b0);
  func_0x0001092ba41c(&ppuStack_2c0);
  (*(code *)*appuStack_2f8[0])(appuStack_2f8);
  func_0x0001092ba41c(&ppuStack_348);
  (*(code *)*ppuStack_380)(&ppuStack_380);
  do {
    __Unwind_Resume();
  } while ((int)puVar7 == 0);
  func_0x000104bd46a0();
  if (pppuVar2[5] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (pppuVar2[3] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (pppuVar2[1] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return pppuVar2;
}



/* Entry: 10a86c6f8; end: 10a86ca5b;  */

undefined *** FUN_10a86c6f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined1 *puVar4;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 uStack_419;
  undefined *puStack_418;
  undefined **ppuStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [16];
  undefined8 uStack_388;
  char cStack_371;
  undefined8 *apuStack_368 [8];
  undefined8 *apuStack_328 [7];
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined **ppuStack_258;
  code *pcStack_220;
  undefined **appuStack_218 [7];
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined1 auStack_198 [152];
  undefined8 uStack_100;
  undefined8 *apuStack_f8 [7];
  undefined1 auStack_c0 [72];
  long alStack_78 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  FUN_109d1a80c();
  uStack_268 = *puVar1;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  puStack_2a8 = &UNK_1053a6a3c;
  ppuStack_2a0 = &PTR_DAT_110ae9180;
  pcStack_220 = FUN_10a062c68;
  appuStack_218[0] = &PTR_DAT_110b9f9f8;
  puStack_1d8 = &UNK_1053a6a3c;
  ppuStack_1d0 = &PTR_DAT_110ae9180;
  puStack_260 = &UNK_1053a6a3c;
  ppuStack_258 = &PTR_DAT_110ae9180;
  uStack_1e0 = uStack_268;
  FUN_109d1ba5c();
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  puStack_3d8 = &UNK_1053a6a3c;
  ppuStack_3d0 = &PTR_DAT_110ae9180;
  uStack_3e0 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_408 = 0;
  puStack_418 = &UNK_1053a6a3c;
  ppuStack_410 = &PTR_DAT_110ae9180;
  FUN_109d1b72c(auStack_398,param_2,param_3,*(undefined4 *)((long)puVar1 + 4),&puStack_3d8,
                &puStack_418,0);
  uStack_428 = 1;
  FUN_109d1f2ec(&uStack_100,&uStack_419,auStack_398,&uStack_428);
  uStack_2f0 = uStack_100;
  uStack_438 = 0;
  uStack_430 = 0;
  puStack_2e8 = &UNK_109896774;
  ppuStack_2e0 = &PTR_DAT_110b17068;
  puStack_2d0 = apuStack_f8[0];
  uStack_2d8 = uStack_100;
  uVar2 = 0xb8;
  __Znwm(0xb8);
  func_0x000109d18d1c();
  FUN_10a061dc8(&uStack_100,&pcStack_220);
  FUN_10a062bb4(auStack_198,uVar2,&uStack_100);
  if (alStack_78[0] != 0) {
    func_0x0001092b4274(alStack_78);
  }
  func_0x0001092ba41c(auStack_c0);
  (*(code *)*apuStack_f8[0])(apuStack_f8);
  puVar4 = auStack_198;
  FUN_10a062f08(param_1);
  FUN_10a062c88(auStack_198);
  func_0x0001092ba41c(&uStack_2f0);
  (*(code *)*apuStack_328[0])(apuStack_328);
  (*(code *)*apuStack_368[0])(apuStack_368);
  if (cStack_371 < '\0') {
    __ZdlPv(uStack_388);
  }
  (*(code *)*ppuStack_410)(&ppuStack_410);
  (*(code *)*ppuStack_3d0)(&ppuStack_3d0);
  func_0x0001092ba41c(&uStack_1e0);
  (*(code *)*appuStack_218[0])(appuStack_218);
  func_0x0001092ba41c(&uStack_268);
  pppuVar3 = &ppuStack_2a0;
  (*(code *)*ppuStack_2a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  FUN_10a062c88(auStack_198);
  func_0x0001092ba41c(&uStack_2f0);
  func_0x00010a06e274(&uStack_438);
  FUN_109d1c850(auStack_398);
  (*(code *)*ppuStack_410)(&ppuStack_410);
  (*(code *)*ppuStack_3d0)(&ppuStack_3d0);
  func_0x0001092ba41c(&uStack_1e0);
  (*(code *)*appuStack_218[0])(appuStack_218);
  func_0x0001092ba41c(&uStack_268);
  (*(code *)*ppuStack_2a0)(&ppuStack_2a0);
  do {
    __Unwind_Resume();
  } while ((int)puVar4 == 0);
  func_0x000104bd46a0();
  if (pppuVar3[5] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (pppuVar3[3] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (pppuVar3[1] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return pppuVar3;
}



/* Entry: 10a86ca5c; end: 10a86cb77;  */

long FUN_10a86ca5c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a86cb78; end: 10a86cda7;  */

undefined8 * FUN_10a86cb78(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  lVar8 = *(long *)(param_1 + 0x378);
  if (((lVar8 == 0) || (*(char *)(lVar8 + 0xa8) == '\x01')) && (*(long *)(param_1 + 0x368) != 0)) {
    if (**(int **)(param_1 + 0x1e8) == 2) {
      uVar4 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      func_0x00010ae02f70(0,uVar4);
      ppuVar7 = &PTR_PTR_113303650;
      FUN_10ae079a0();
      func_0x00010ae02f80();
      FUN_10ae07cd4(ppuVar7,&PTR_PTR_113303650);
      puVar2 = *(undefined8 **)(param_1 + 0x368);
      plVar1 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar1 = param_2;
      }
                    /* WARNING: Could not recover jumptable at 0x00010a86cc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,plVar1);
      return puVar2;
    }
    lVar8 = *(long *)(param_1 + 0x378);
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(lVar8 + 0xa8));
  func_0x00010ae02ecc();
  ppuVar7 = &PTR_PTR_113303678;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar10 = ppuVar6[0x12];
    puVar9 = ppuVar6[0xb];
    uVar3 = 0;
    _clock_gettime_nsec_np();
    uVar4 = uVar3;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar4 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar2 = (undefined8 *)*ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar9;
    puStack_8d8 = puVar10;
    uStack_8d0 = (ulong)(puVar10 != (undefined *)0x0);
    uStack_8c8 = uVar3;
    FUN_10ae0784c(puVar2,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar2);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10a86cda8; end: 10a86cddf;  */

undefined8 * FUN_10a86cda8(undefined8 *param_1)

{
  func_0x00010a07a8a8(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a86cde0; end: 10a86d5ef;  */

long * FUN_10a86cde0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                    long *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  undefined *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined *puVar25;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [824];
  undefined4 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long *plStack_88;
  int iStack_7c;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  FUN_10a86d5f0(param_3[1],*(undefined1 *)((long)param_3 + 0x17),param_4);
  if ((*(long *)(param_1 + 0x368) == 0) || (**(int **)(param_1 + 0x1e8) != 2)) {
    func_0x00010ae02ecc(0,**(undefined4 **)(param_1 + 0x1e8));
    ppuVar9 = &PTR_PTR_113303730;
    ppuVar8 = ppuVar9;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    plStack_70 = *(long **)PTR____stack_chk_guard_11034bdc0;
    plVar20 = (long *)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar8[0x13],ppuVar8[0xf],
                    ppuVar8 + 0x14,0x400);
      puStack_918 = puStack_890;
      uStack_910 = uStack_888;
      puStack_900 = puStack_8a8;
      uStack_8f8 = uStack_8a0;
      uStack_908 = uStack_880;
      if (iStack_878 != 0) {
        puStack_918 = &UNK_10f6c352e;
        uStack_910 = 0x10;
        puStack_900 = &UNK_10f6c352e;
        uStack_8f8 = 0x10;
        uStack_908 = 0;
        uStack_898 = 0;
      }
      puVar25 = ppuVar8[0x12];
      puVar21 = ppuVar8[0xb];
      uVar7 = 0;
      _clock_gettime_nsec_np();
      uVar10 = uVar7;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar8 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar8 + 0xe);
      uStack_8c0 = uVar10 & 0xffffffff;
      ppuStack_8b0 = ppuVar8 + 0x10;
      plVar20 = (long *)*ppuVar8;
      ppuVar9 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar21;
      puStack_8d8 = puVar25;
      uStack_8d0 = (ulong)(puVar25 != (undefined *)0x0);
      uStack_8c8 = uVar7;
      FUN_10ae0784c(plVar20,ppuVar9,&puStack_900,&puStack_918);
    }
    iVar18 = (int)ppuVar9;
    if ((long *)*(long *)PTR____stack_chk_guard_11034bdc0 == plStack_70) {
      return plVar20;
    }
    ___stack_chk_fail();
    if (iVar18 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(plVar20);
    return plVar20;
  }
  lVar13 = param_1;
  FUN_10a86d630(param_1,param_2,param_3,param_4);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_c0,*param_2,param_2[1]);
  }
  else {
    lStack_b8 = param_2[1];
    plStack_c0 = (long *)*param_2;
    uStack_b0 = param_2[2];
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_a8,*param_3,param_3[1]);
  }
  else {
    lStack_a0 = param_3[1];
    plStack_a8 = (long *)*param_3;
    uStack_98 = param_3[2];
  }
  plStack_88 = (long *)param_5[1];
  lStack_90 = *param_5;
  if (param_5[1] != 0) {
    plVar20 = (long *)(param_5[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_d8 = 0x19;
  uVar1 = *param_6;
  plVar20 = (long *)param_6[1];
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = *plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar22 = *(long **)(param_1 + 0x3a8);
  uStack_d0 = uVar1;
  plStack_c8 = plVar20;
  if ((long)uStack_b0 < 0) {
    func_0x000107c3192c(&plStack_120,plStack_c0,lStack_b8);
  }
  else {
    lStack_118 = lStack_b8;
    plStack_120 = plStack_c0;
    uStack_110 = uStack_b0;
  }
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(&plStack_108,plStack_a8,lStack_a0);
  }
  else {
    lStack_100 = lStack_a0;
    plStack_108 = plStack_a8;
    uStack_f8 = uStack_98;
  }
  plStack_e8 = plStack_88;
  lStack_f0 = lStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar24 = plStack_88 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = *plVar24 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_138 = 0x19;
  if (plVar20 != (long *)0x0) {
    plVar24 = plVar20 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = *plVar24 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar18 = (int)lVar13;
  plVar23 = (long *)(long)iVar18;
  plVar24 = (long *)plVar22[1];
  uStack_130 = uVar1;
  plStack_128 = plVar20;
  iStack_7c = iVar18;
  if (plVar24 != (long *)0x0) {
    uVar10 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar10) == 0) {
      plVar20 = (long *)(uVar10 & (ulong)plVar23);
    }
    else {
      plVar20 = plVar23;
      if (plVar24 <= plVar23) {
        uVar7 = 0;
        if (plVar24 != (long *)0x0) {
          uVar7 = (ulong)plVar23 / (ulong)plVar24;
        }
        plVar20 = (long *)((long)plVar23 - uVar7 * (long)plVar24);
      }
    }
    puVar11 = *(undefined8 **)(*plVar22 + (long)plVar20 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar11; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        plVar12 = (long *)plVar19[1];
        if (plVar12 == plVar23) {
          if ((int)plVar19[2] == iVar18) goto LAB_10a86d338;
        }
        else {
          if (((ulong)plVar24 & uVar10) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar10);
          }
          else if (plVar24 <= plVar12) {
            uVar7 = 0;
            if (plVar24 != (long *)0x0) {
              uVar7 = (ulong)plVar12 / (ulong)plVar24;
            }
            plVar12 = (long *)((long)plVar12 - uVar7 * (long)plVar24);
          }
          if (plVar12 != plVar20) break;
        }
      }
    }
  }
  plVar19 = (long *)0x58;
  __Znwm();
  uStack_68 = 1;
  *plVar19 = 0;
  plVar19[1] = (long)plVar23;
  *(int *)(plVar19 + 2) = iVar18;
  plVar19[4] = 0;
  plVar19[3] = 0;
  plVar19[6] = 0;
  plVar19[5] = 0;
  plVar19[8] = 0;
  plVar19[7] = 0;
  plVar19[10] = 0;
  plVar19[9] = 0;
  plStack_78 = plVar19;
  plStack_70 = plVar22;
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar22 + 4) * (float)plVar24 < (float)(plVar22[3] + 1))) {
    uVar10 = 1;
    if ((long *)0x2 < plVar24) {
      uVar10 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    plVar20 = (long *)(uVar10 | (long)plVar24 << 1);
    plVar12 = (long *)(long)((float)(plVar22[3] + 1) / *(float *)(plVar22 + 4));
    if (plVar20 <= plVar12) {
      plVar20 = plVar12;
    }
    if ((long)plVar20 - 1U == 0) {
      plVar20 = (long *)0x2;
    }
    else if (((ulong)plVar20 & (long)plVar20 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar24 = (long *)plVar22[1];
    }
    if (plVar24 < plVar20) {
LAB_10a86d14c:
      if ((ulong)plVar20 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a86d578);
        (*pcVar4)();
      }
      lVar5 = (long)plVar20 << 3;
      __Znwm();
      lVar6 = *plVar22;
      *plVar22 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      plVar24 = (long *)0x0;
      plVar22[1] = (long)plVar20;
      do {
        *(undefined8 *)(*plVar22 + (long)plVar24 * 8) = 0;
        plVar24 = (long *)((long)plVar24 + 1);
      } while (plVar20 != plVar24);
      plVar12 = (long *)plVar22[2];
      plVar24 = plVar20;
      if (plVar12 != (long *)0x0) {
        plVar14 = (long *)plVar12[1];
        uVar10 = (long)plVar20 - 1;
        if (((ulong)plVar20 & uVar10) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar10);
        }
        else if (plVar20 <= plVar14) {
          uVar7 = 0;
          if (plVar20 != (long *)0x0) {
            uVar7 = (ulong)plVar14 / (ulong)plVar20;
          }
          plVar14 = (long *)((long)plVar14 - uVar7 * (long)plVar20);
        }
        *(long **)(*plVar22 + (long)plVar14 * 8) = plVar22 + 2;
        plVar15 = (long *)*plVar12;
        while (plVar15 != (long *)0x0) {
          plVar17 = (long *)plVar15[1];
          if (((ulong)plVar20 & uVar10) == 0) {
            plVar17 = (long *)((ulong)plVar17 & uVar10);
          }
          else if (plVar20 <= plVar17) {
            uVar7 = 0;
            if (plVar20 != (long *)0x0) {
              uVar7 = (ulong)plVar17 / (ulong)plVar20;
            }
            plVar17 = (long *)((long)plVar17 - uVar7 * (long)plVar20);
          }
          plVar16 = plVar15;
          if (plVar17 != plVar14) {
            lVar5 = *plVar22;
            if (*(long *)(lVar5 + (long)plVar17 * 8) == 0) {
              *(long **)(lVar5 + (long)plVar17 * 8) = plVar12;
              plVar14 = plVar17;
            }
            else {
              *plVar12 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar5 + (long)plVar17 * 8);
              **(long **)(lVar5 + (long)plVar17 * 8) = (long)plVar15;
              plVar16 = plVar12;
            }
          }
          plVar12 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
    }
    else if (plVar20 < plVar24) {
      plVar12 = (long *)(long)((float)(ulong)plVar22[3] / *(float *)(plVar22 + 4));
      if ((plVar24 < (long *)0x3) || (((ulong)plVar24 & (long)plVar24 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar12) {
        plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
      }
      if (plVar20 <= plVar12) {
        plVar20 = plVar12;
      }
      if (plVar20 < plVar24) {
        if (plVar20 != (long *)0x0) goto LAB_10a86d14c;
        lVar5 = *plVar22;
        *plVar22 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        plVar22[1] = 0;
        plVar24 = (long *)0x0;
      }
      else {
        plVar24 = (long *)plVar22[1];
      }
    }
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      plVar20 = (long *)((long)plVar24 - 1U & (ulong)plVar23);
    }
    else {
      plVar20 = plVar23;
      if (plVar24 <= plVar23) {
        uVar10 = 0;
        if (plVar24 != (long *)0x0) {
          uVar10 = (ulong)plVar23 / (ulong)plVar24;
        }
        plVar20 = (long *)((long)plVar23 - uVar10 * (long)plVar24);
      }
    }
  }
  lVar5 = *plVar22;
  plVar23 = *(long **)(lVar5 + (long)plVar20 * 8);
  if (plVar23 == (long *)0x0) {
    plVar23 = plVar22 + 2;
    *plVar19 = *plVar23;
    *plVar23 = (long)plVar19;
    *(long **)(lVar5 + (long)plVar20 * 8) = plVar23;
    if (*plVar19 == 0) goto LAB_10a86d32c;
    plVar20 = *(long **)(*plVar19 + 8);
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      plVar20 = (long *)((ulong)plVar20 & (long)plVar24 - 1U);
    }
    else if (plVar24 <= plVar20) {
      uVar10 = 0;
      if (plVar24 != (long *)0x0) {
        uVar10 = (ulong)plVar20 / (ulong)plVar24;
      }
      plVar20 = (long *)((long)plVar20 - uVar10 * (long)plVar24);
    }
    plVar23 = (long *)(*plVar22 + (long)plVar20 * 8);
  }
  else {
    *plVar19 = *plVar23;
  }
  *plVar23 = (long)plVar19;
LAB_10a86d32c:
  plVar22[3] = plVar22[3] + 1;
LAB_10a86d338:
  if (*(char *)((long)plVar19 + 0x2f) < '\0') {
    __ZdlPv(plVar19[3]);
  }
  plVar19[4] = lStack_118;
  plVar19[3] = (long)plStack_120;
  plVar19[5] = uStack_110;
  uStack_110 = uStack_110 & 0xffffffffffffff;
  plStack_120 = (long *)((ulong)plStack_120 & 0xffffffffffffff00);
  if (*(char *)((long)plVar19 + 0x47) < '\0') {
    __ZdlPv(plVar19[6]);
  }
  plVar20 = plStack_e8;
  lVar5 = lStack_f0;
  plVar19[7] = lStack_100;
  plVar19[6] = (long)plStack_108;
  plVar19[8] = uStack_f8;
  uStack_f8 = uStack_f8 & 0xffffffffffffff;
  plStack_108 = (long *)((ulong)plStack_108 & 0xffffffffffffff00);
  lStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  plVar24 = (long *)plVar19[10];
  plVar19[10] = (long)plVar20;
  plVar19[9] = lVar5;
  if (plVar24 != (long *)0x0) {
    plVar20 = plVar24 + 1;
    do {
      lVar5 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  plVar22 = plVar22 + 0x28;
  FUN_10a87f4f0(plVar22,lVar13,&iStack_7c);
  *(undefined4 *)(plVar22 + 3) = uStack_138;
  plVar22 = plVar22 + 4;
  FUN_10a03c06c(plVar22,&uStack_130);
  plVar20 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar24 = plStack_128 + 1;
    do {
      lVar13 = *plVar24;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      plVar22 = plVar20;
    }
  }
  plVar20 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar24 = plStack_e8 + 1;
    do {
      lVar13 = *plVar24;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      plVar22 = plVar20;
    }
  }
  if ((long)uStack_f8 < 0) {
    plVar22 = plStack_108;
    __ZdlPv(plStack_108);
  }
  if ((long)uStack_110 < 0) {
    plVar22 = plStack_120;
    __ZdlPv(plStack_120);
  }
  plVar20 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar24 = plStack_c8 + 1;
    do {
      lVar13 = *plVar24;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      plVar22 = plVar20;
    }
  }
  plVar20 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar24 = plStack_88 + 1;
    do {
      lVar13 = *plVar24;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      plVar22 = plVar20;
    }
  }
  if ((long)uStack_98 < 0) {
    plVar22 = plStack_a8;
    __ZdlPv(plStack_a8);
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(plStack_c0);
    plVar22 = plStack_c0;
  }
  return plVar22;
}



/* Entry: 10a86d5f0; end: 10a86d62f;  */

long * FUN_10a86d5f0(long *param_1,ulong *param_2,ulong *param_3,undefined4 param_4)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  long lVar11;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  plVar8 = param_1;
  if (-1 < (char)param_2) {
    plVar8 = (long *)((ulong)param_2 & 0xff);
  }
  if (plVar8 == (long *)0x0) {
    FUN_10a00946c(&UNK_10f67f2c3);
  }
  else if ((int)param_3 != 0) {
    return param_1;
  }
  puVar6 = &UNK_10f67f2f7;
  FUN_10a00946c();
  uStack_64 = param_4;
  FUN_10a86e114(puVar6 + 0x2d8,0);
  puVar7 = (ulong *)0x18;
  __Znwm();
  puVar2 = (ulong *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar2 = param_2;
  }
  puVar3 = (ulong *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    puVar3 = param_3;
  }
  *puVar7 = (ulong)puVar2;
  puVar7[1] = (ulong)puVar3;
  puVar7[2] = 0;
  FUN_10a86e53c();
  *(undefined4 *)(puVar7 + 2) = param_4;
  uStack_70 = 1;
  plVar8 = (long *)0x10;
  puStack_78 = puVar7;
  __Znwm();
  FUN_10a8a41a8(&lStack_98,puVar6 + 0x18);
  if (lStack_98 == 0) {
    plVar9 = &lStack_88;
  }
  else {
    lStack_88 = lStack_98;
    plStack_80 = plStack_90;
    plVar9 = &lStack_98;
  }
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9 = plStack_80;
  if (plStack_80 == (long *)0x0) {
    *plVar8 = lStack_88;
    plVar8[1] = 0;
  }
  else {
    plVar1 = plStack_80 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *plVar8 = lStack_88;
    plVar8[1] = (long)plStack_80;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    plVar1 = plVar9 + 1;
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (plStack_90 != (long *)0x0) {
    plVar9 = plStack_90 + 1;
    do {
      lVar11 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  plVar9 = *(long **)(puVar6 + 0x368);
  (**(code **)(*plVar9 + 0x70))(plVar9,&puStack_78,FUN_10a866e74,FUN_10a868058,plVar8);
  FUN_10a8a41e8();
  ppuVar10 = &PTR_PTR_113304b00;
  FUN_10ae079a0();
  func_0x00010a8a425c();
  FUN_10ae07cd4(ppuVar10,&PTR_PTR_113304b00);
  __ZdlPv(puVar7);
  return plVar9;
}



/* Entry: 10a86d630; end: 10a86d853;  */

long * FUN_10a86d630(long param_1,long *param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined4 uStack_54;
  
  uStack_54 = param_4;
  FUN_10a86e114(param_1 + 0x2d8,0);
  plVar4 = (long *)0x18;
  __Znwm();
  plVar5 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar5 = param_2;
  }
  plVar6 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar6 = param_3;
  }
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)plVar6;
  plVar4[2] = 0;
  FUN_10a86e53c();
  *(undefined4 *)(plVar4 + 2) = param_4;
  uStack_60 = 1;
  plVar5 = (long *)0x10;
  plStack_68 = plVar4;
  __Znwm();
  FUN_10a8a41a8(&lStack_88,param_1 + 0x18);
  if (lStack_88 == 0) {
    plVar6 = &lStack_78;
  }
  else {
    lStack_78 = lStack_88;
    plStack_70 = plStack_80;
    plVar6 = &lStack_88;
  }
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6 = plStack_70;
  if (plStack_70 == (long *)0x0) {
    *plVar5 = lStack_78;
    plVar5[1] = 0;
  }
  else {
    plVar1 = plStack_70 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *plVar5 = lStack_78;
    plVar5[1] = (long)plStack_70;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plStack_80 != (long *)0x0) {
    plVar6 = plStack_80 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  plVar6 = *(long **)(param_1 + 0x368);
  (**(code **)(*plVar6 + 0x70))(plVar6,&plStack_68,FUN_10a866e74,FUN_10a868058,plVar5);
  FUN_10a8a41e8();
  ppuVar7 = &PTR_PTR_113304b00;
  FUN_10ae079a0();
  func_0x00010a8a425c();
  FUN_10ae07cd4(ppuVar7,&PTR_PTR_113304b00);
  __ZdlPv(plVar4);
  return plVar6;
}



/* Entry: 10a86d854; end: 10a86d89b;  */

undefined8 * FUN_10a86d854(undefined8 *param_1)

{
  func_0x00010a757f24(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a86d89c; end: 10a86e0cb;  */

long * FUN_10a86d89c(long param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 *param_5
                    )

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined *puVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined *puVar26;
  float fVar27;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [800];
  long *plStack_150;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined1 uStack_aa;
  char cStack_a9;
  long *plStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long *plStack_88;
  int iStack_7c;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  FUN_10a86d5f0(param_2[1],*(undefined1 *)((long)param_2 + 0x17));
  if ((*(long *)(param_1 + 0x368) == 0) || (**(int **)(param_1 + 0x1e8) != 2)) {
    func_0x00010ae02ecc(0,**(undefined4 **)(param_1 + 0x1e8));
    ppuVar9 = &PTR_PTR_113303770;
    ppuVar8 = ppuVar9;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    plStack_70 = *(long **)PTR____stack_chk_guard_11034bdc0;
    plVar20 = (long *)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar8[0x13],ppuVar8[0xf],
                    ppuVar8 + 0x14,0x400);
      puStack_918 = puStack_890;
      uStack_910 = uStack_888;
      puStack_900 = puStack_8a8;
      uStack_8f8 = uStack_8a0;
      uStack_908 = uStack_880;
      if (iStack_878 != 0) {
        puStack_918 = &UNK_10f6c352e;
        uStack_910 = 0x10;
        puStack_900 = &UNK_10f6c352e;
        uStack_8f8 = 0x10;
        uStack_908 = 0;
        uStack_898 = 0;
      }
      puVar26 = ppuVar8[0x12];
      puVar22 = ppuVar8[0xb];
      uVar7 = 0;
      _clock_gettime_nsec_np();
      uVar10 = uVar7;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar8 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar8 + 0xe);
      uStack_8c0 = uVar10 & 0xffffffff;
      ppuStack_8b0 = ppuVar8 + 0x10;
      plVar20 = (long *)*ppuVar8;
      ppuVar9 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar22;
      puStack_8d8 = puVar26;
      uStack_8d0 = (ulong)(puVar26 != (undefined *)0x0);
      uStack_8c8 = uVar7;
      FUN_10ae0784c(plVar20,ppuVar9,&puStack_900,&puStack_918);
    }
    iVar18 = (int)ppuVar9;
    if ((long *)*(long *)PTR____stack_chk_guard_11034bdc0 == plStack_70) {
      return plVar20;
    }
    ___stack_chk_fail();
    if (iVar18 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(plVar20);
    return plVar20;
  }
  uStack_148 = 0x4c4c4f435f524553;
  plStack_150 = (long *)0x555f43494c425550;
  uStack_b8 = 0x4f435f524553;
  plStack_c0 = (long *)0x555f43494c425550;
  uStack_b2 = 0x4c4c;
  uStack_b0 = 0x4e4f49544345;
  uStack_aa = 0;
  cStack_a9 = '\x16';
  lVar13 = param_1;
  FUN_10a86d630(param_1,&plStack_c0,param_2,param_3);
  if (cStack_a9 < '\0') {
    __ZdlPv(plStack_c0);
  }
  uStack_b8 = (undefined6)uStack_148;
  plStack_c0 = plStack_150;
  uStack_b2 = 0x4c4c;
  uStack_b0 = 0x4e4f49544345;
  uStack_aa = 0;
  cStack_a9 = '\x16';
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_a8,*param_2,param_2[1]);
  }
  else {
    lStack_a0 = param_2[1];
    plStack_a8 = (long *)*param_2;
    uStack_98 = param_2[2];
  }
  plStack_88 = (long *)param_4[1];
  lStack_90 = *param_4;
  if (param_4[1] != 0) {
    plVar20 = (long *)(param_4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_d8 = 100;
  uVar1 = *param_5;
  plVar20 = (long *)param_5[1];
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar23 = *(long *)(param_1 + 0x3a8);
  uStack_d0 = uVar1;
  plStack_c8 = plVar20;
  if (cStack_a9 < '\0') {
    func_0x000107c3192c(&plStack_120,plStack_c0,CONCAT26(uStack_b2,uStack_b8));
  }
  else {
    lStack_118 = CONCAT26(uStack_b2,uStack_b8);
    plStack_120 = plStack_c0;
    uStack_110 = CONCAT17(cStack_a9,CONCAT16(uStack_aa,uStack_b0));
  }
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(&plStack_108,plStack_a8,lStack_a0);
  }
  else {
    lStack_100 = lStack_a0;
    plStack_108 = plStack_a8;
    uStack_f8 = uStack_98;
  }
  plStack_e8 = plStack_88;
  lStack_f0 = lStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar21 = plStack_88 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_138 = 100;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar21 = (long *)(lVar23 + 0x28);
  iVar18 = (int)lVar13;
  plVar24 = (long *)(long)iVar18;
  plVar25 = *(long **)(lVar23 + 0x30);
  uStack_130 = uVar1;
  plStack_128 = plVar20;
  iStack_7c = iVar18;
  if (plVar25 != (long *)0x0) {
    uVar10 = (long)plVar25 - 1;
    if (((ulong)plVar25 & uVar10) == 0) {
      plVar20 = (long *)(uVar10 & (ulong)plVar24);
    }
    else {
      plVar20 = plVar24;
      if (plVar25 <= plVar24) {
        uVar7 = 0;
        if (plVar25 != (long *)0x0) {
          uVar7 = (ulong)plVar24 / (ulong)plVar25;
        }
        plVar20 = (long *)((long)plVar24 - uVar7 * (long)plVar25);
      }
    }
    puVar11 = *(undefined8 **)(*plVar21 + (long)plVar20 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar11; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        plVar12 = (long *)plVar19[1];
        if (plVar12 == plVar24) {
          if ((int)plVar19[2] == iVar18) goto LAB_10a86de10;
        }
        else {
          if (((ulong)plVar25 & uVar10) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar10);
          }
          else if (plVar25 <= plVar12) {
            uVar7 = 0;
            if (plVar25 != (long *)0x0) {
              uVar7 = (ulong)plVar12 / (ulong)plVar25;
            }
            plVar12 = (long *)((long)plVar12 - uVar7 * (long)plVar25);
          }
          if (plVar12 != plVar20) break;
        }
      }
    }
  }
  plVar19 = (long *)0x58;
  __Znwm();
  uStack_68 = 1;
  *plVar19 = 0;
  plVar19[1] = (long)plVar24;
  *(int *)(plVar19 + 2) = iVar18;
  plVar19[4] = 0;
  plVar19[3] = 0;
  plVar19[6] = 0;
  plVar19[5] = 0;
  plVar19[8] = 0;
  plVar19[7] = 0;
  plVar19[10] = 0;
  plVar19[9] = 0;
  fVar27 = (float)(*(long *)(lVar23 + 0x40) + 1);
  plStack_78 = plVar19;
  plStack_70 = plVar21;
  if ((plVar25 == (long *)0x0) || (*(float *)(lVar23 + 0x48) * (float)plVar25 < fVar27)) {
    uVar10 = 1;
    if ((long *)0x2 < plVar25) {
      uVar10 = (ulong)(((ulong)plVar25 & (long)plVar25 - 1U) != 0);
    }
    plVar20 = (long *)(uVar10 | (long)plVar25 << 1);
    plVar12 = (long *)(long)(fVar27 / *(float *)(lVar23 + 0x48));
    if (plVar20 <= plVar12) {
      plVar20 = plVar12;
    }
    if ((long)plVar20 - 1U == 0) {
      plVar20 = (long *)0x2;
    }
    else if (((ulong)plVar20 & (long)plVar20 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar25 = *(long **)(lVar23 + 0x30);
    }
    if (plVar25 < plVar20) {
LAB_10a86dc24:
      if ((ulong)plVar20 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a86e050);
        (*pcVar4)();
      }
      lVar5 = (long)plVar20 << 3;
      __Znwm();
      lVar6 = *plVar21;
      *plVar21 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      plVar25 = (long *)0x0;
      *(long **)(lVar23 + 0x30) = plVar20;
      do {
        *(undefined8 *)(*plVar21 + (long)plVar25 * 8) = 0;
        plVar25 = (long *)((long)plVar25 + 1);
      } while (plVar20 != plVar25);
      plVar12 = *(long **)(lVar23 + 0x38);
      plVar25 = plVar20;
      if (plVar12 != (long *)0x0) {
        plVar14 = (long *)plVar12[1];
        uVar10 = (long)plVar20 - 1;
        if (((ulong)plVar20 & uVar10) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar10);
        }
        else if (plVar20 <= plVar14) {
          uVar7 = 0;
          if (plVar20 != (long *)0x0) {
            uVar7 = (ulong)plVar14 / (ulong)plVar20;
          }
          plVar14 = (long *)((long)plVar14 - uVar7 * (long)plVar20);
        }
        *(undefined8 **)(*plVar21 + (long)plVar14 * 8) = (undefined8 *)(lVar23 + 0x38);
        plVar15 = (long *)*plVar12;
        while (plVar15 != (long *)0x0) {
          plVar17 = (long *)plVar15[1];
          if (((ulong)plVar20 & uVar10) == 0) {
            plVar17 = (long *)((ulong)plVar17 & uVar10);
          }
          else if (plVar20 <= plVar17) {
            uVar7 = 0;
            if (plVar20 != (long *)0x0) {
              uVar7 = (ulong)plVar17 / (ulong)plVar20;
            }
            plVar17 = (long *)((long)plVar17 - uVar7 * (long)plVar20);
          }
          plVar16 = plVar15;
          if (plVar17 != plVar14) {
            lVar5 = *plVar21;
            if (*(long *)(lVar5 + (long)plVar17 * 8) == 0) {
              *(long **)(lVar5 + (long)plVar17 * 8) = plVar12;
              plVar14 = plVar17;
            }
            else {
              *plVar12 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar5 + (long)plVar17 * 8);
              **(long **)(lVar5 + (long)plVar17 * 8) = (long)plVar15;
              plVar16 = plVar12;
            }
          }
          plVar12 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
    }
    else if (plVar20 < plVar25) {
      plVar12 = (long *)(long)((float)*(ulong *)(lVar23 + 0x40) / *(float *)(lVar23 + 0x48));
      if ((plVar25 < (long *)0x3) || (((ulong)plVar25 & (long)plVar25 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar12) {
        plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 - 1) & 0x3fU));
      }
      if (plVar20 <= plVar12) {
        plVar20 = plVar12;
      }
      if (plVar20 < plVar25) {
        if (plVar20 != (long *)0x0) goto LAB_10a86dc24;
        lVar5 = *plVar21;
        *plVar21 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(lVar23 + 0x30) = 0;
        plVar25 = (long *)0x0;
      }
      else {
        plVar25 = *(long **)(lVar23 + 0x30);
      }
    }
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      plVar20 = (long *)((long)plVar25 - 1U & (ulong)plVar24);
    }
    else {
      plVar20 = plVar24;
      if (plVar25 <= plVar24) {
        uVar10 = 0;
        if (plVar25 != (long *)0x0) {
          uVar10 = (ulong)plVar24 / (ulong)plVar25;
        }
        plVar20 = (long *)((long)plVar24 - uVar10 * (long)plVar25);
      }
    }
  }
  lVar5 = *plVar21;
  plVar24 = *(long **)(lVar5 + (long)plVar20 * 8);
  if (plVar24 == (long *)0x0) {
    plVar24 = (long *)(lVar23 + 0x38);
    *plVar19 = *plVar24;
    *plVar24 = (long)plVar19;
    *(long **)(lVar5 + (long)plVar20 * 8) = plVar24;
    if (*plVar19 == 0) goto LAB_10a86de04;
    plVar20 = *(long **)(*plVar19 + 8);
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      plVar20 = (long *)((ulong)plVar20 & (long)plVar25 - 1U);
    }
    else if (plVar25 <= plVar20) {
      uVar10 = 0;
      if (plVar25 != (long *)0x0) {
        uVar10 = (ulong)plVar20 / (ulong)plVar25;
      }
      plVar20 = (long *)((long)plVar20 - uVar10 * (long)plVar25);
    }
    plVar24 = (long *)(*plVar21 + (long)plVar20 * 8);
  }
  else {
    *plVar19 = *plVar24;
  }
  *plVar24 = (long)plVar19;
LAB_10a86de04:
  *(long *)(lVar23 + 0x40) = *(long *)(lVar23 + 0x40) + 1;
LAB_10a86de10:
  if (*(char *)((long)plVar19 + 0x2f) < '\0') {
    __ZdlPv(plVar19[3]);
  }
  plVar19[4] = lStack_118;
  plVar19[3] = (long)plStack_120;
  plVar19[5] = uStack_110;
  uStack_110 = uStack_110 & 0xffffffffffffff;
  plStack_120 = (long *)((ulong)plStack_120 & 0xffffffffffffff00);
  if (*(char *)((long)plVar19 + 0x47) < '\0') {
    __ZdlPv(plVar19[6]);
  }
  plVar20 = plStack_e8;
  lVar5 = lStack_f0;
  plVar19[7] = lStack_100;
  plVar19[6] = (long)plStack_108;
  plVar19[8] = uStack_f8;
  uStack_f8 = uStack_f8 & 0xffffffffffffff;
  plStack_108 = (long *)((ulong)plStack_108 & 0xffffffffffffff00);
  lStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  plVar21 = (long *)plVar19[10];
  plVar19[10] = (long)plVar20;
  plVar19[9] = lVar5;
  if (plVar21 != (long *)0x0) {
    plVar20 = plVar21 + 1;
    do {
      lVar5 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  lVar23 = lVar23 + 0x140;
  FUN_10a87f4f0(lVar23,lVar13,&iStack_7c);
  *(undefined4 *)(lVar23 + 0x18) = uStack_138;
  plVar20 = (long *)(lVar23 + 0x20);
  FUN_10a03c06c(plVar20,&uStack_130);
  plVar21 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar25 = plStack_128 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  plVar21 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar25 = plStack_e8 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  if ((long)uStack_f8 < 0) {
    plVar20 = plStack_108;
    __ZdlPv(plStack_108);
  }
  if ((long)uStack_110 < 0) {
    plVar20 = plStack_120;
    __ZdlPv(plStack_120);
  }
  plVar21 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar25 = plStack_c8 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  plVar21 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar25 = plStack_88 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  if ((long)uStack_98 < 0) {
    plVar20 = plStack_a8;
    __ZdlPv(plStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(plStack_c0);
    plVar20 = plStack_c0;
  }
  return plVar20;
}



/* Entry: 10a86e0cc; end: 10a86e113;  */

undefined8 * FUN_10a86e0cc(undefined8 *param_1)

{
  FUN_10a76a5a4(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a86e114; end: 10a86e53b;  */

void FUN_10a86e114(long *param_1,uint param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar5 = uVar15 - 1;
    uVar7 = uVar15 + 3;
    if ((uVar15 & uVar5) != 0) {
      uVar7 = 3;
    }
    plVar11 = *(long **)(*param_1 + (uVar7 & uVar14) * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10a86e1ac;
          uVar13 = plVar11[1];
          if (uVar13 != uVar14) break;
          if (*(uint *)(plVar11 + 2) == param_2) {
            *(int *)((long)plVar11 + 0x14) = *(int *)((long)plVar11 + 0x14) + 1;
            return;
          }
        }
        if ((uVar15 & uVar5) == 0) {
          uVar13 = uVar13 & uVar5;
        }
        else if (uVar15 <= uVar13) {
          uVar12 = 0;
          if (uVar15 != 0) {
            uVar12 = uVar13 / uVar15;
          }
          uVar13 = uVar13 - uVar12 * uVar15;
        }
      } while (uVar13 == (uVar7 & uVar14));
    }
LAB_10a86e1ac:
    if ((uVar15 & uVar5) == 0) {
      unaff_x24 = uVar15 + 3 & uVar14;
    }
    else {
      unaff_x24 = uVar14;
      if (uVar15 <= uVar14) {
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar14 / uVar15;
        }
        unaff_x24 = uVar14 - uVar7 * uVar15;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar11 = (long *)*puVar6; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar7 = plVar11[1];
        if (uVar7 == uVar14) {
          if (*(uint *)(plVar11 + 2) == param_2) goto LAB_10a86e4c8;
        }
        else {
          if ((uVar15 & uVar5) == 0) {
            uVar7 = uVar7 & uVar5;
          }
          else if (uVar15 <= uVar7) {
            uVar13 = 0;
            if (uVar15 != 0) {
              uVar13 = uVar7 / uVar15;
            }
            uVar7 = uVar7 - uVar13 * uVar15;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar11 = (long *)0x18;
  __Znwm();
  *plVar11 = 0;
  plVar11[1] = uVar14;
  *(uint *)(plVar11 + 2) = param_2;
  *(undefined4 *)((long)plVar11 + 0x14) = 0;
  if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar15) {
      uVar7 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar7 = uVar7 | uVar15 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar15 = param_1[1];
    }
    if (uVar15 < uVar7) {
LAB_10a86e2c8:
      if (uVar7 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a86e528);
        (*pcVar2)();
      }
      lVar3 = uVar7 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar15 = 0;
      param_1[1] = uVar7;
      do {
        *(undefined8 *)(*param_1 + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar7 != uVar15);
      plVar8 = (long *)param_1[2];
      uVar15 = uVar7;
      if (plVar8 != (long *)0x0) {
        uVar5 = plVar8[1];
        uVar13 = uVar7 - 1;
        if ((uVar7 & uVar13) == 0) {
          uVar5 = uVar5 & uVar13;
        }
        else if (uVar7 <= uVar5) {
          uVar12 = 0;
          if (uVar7 != 0) {
            uVar12 = uVar5 / uVar7;
          }
          uVar5 = uVar5 - uVar12 * uVar7;
        }
        *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar8;
        while (plVar9 != (long *)0x0) {
          uVar12 = plVar9[1];
          if ((uVar7 & uVar13) == 0) {
            uVar12 = uVar12 & uVar13;
          }
          else if (uVar7 <= uVar12) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar12 / uVar7;
            }
            uVar12 = uVar12 - uVar1 * uVar7;
          }
          plVar10 = plVar9;
          if (uVar12 != uVar5) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar8;
              uVar5 = uVar12;
            }
            else {
              *plVar8 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar9;
              plVar10 = plVar8;
            }
          }
          plVar8 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    else if (uVar7 < uVar15) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar5) {
        uVar7 = uVar5;
      }
      if (uVar7 < uVar15) {
        if (uVar7 != 0) goto LAB_10a86e2c8;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = param_1[1];
      }
    }
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar15 + 3U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar15 <= uVar14) {
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar14 / uVar15;
        }
        unaff_x24 = uVar14 - uVar7 * uVar15;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar11 = *plVar8;
    *plVar8 = (long)plVar11;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar8;
    if (*plVar11 == 0) goto LAB_10a86e4bc;
    uVar14 = *(ulong *)(*plVar11 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar14 = uVar14 & uVar15 - 1;
    }
    else if (uVar15 <= uVar14) {
      uVar7 = 0;
      if (uVar15 != 0) {
        uVar7 = uVar14 / uVar15;
      }
      uVar14 = uVar14 - uVar7 * uVar15;
    }
    plVar8 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar11 = *plVar8;
  }
  *plVar8 = (long)plVar11;
LAB_10a86e4bc:
  param_1[3] = param_1[3] + 1;
LAB_10a86e4c8:
  *(undefined4 *)((long)plVar11 + 0x14) = 1;
  return;
}



/* Entry: 10a86e53c; end: 10a86e5a3;  */

undefined8 FUN_10a86e53c(undefined8 param_1)

{
  undefined **ppuVar1;
  
  if (3 < (uint)param_1) {
    func_0x00010ae02ecc(0,param_1);
    ppuVar1 = &PTR_PTR_1133030b0;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar1,&PTR_PTR_1133030b0);
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a86e5a4; end: 10a86ed8b;  */

long * FUN_10a86e5a4(long param_1,long *param_2,int param_3,undefined8 param_4,undefined8 param_5,
                    long *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined *puVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined *puVar26;
  float fVar27;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [824];
  undefined4 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined7 uStack_98;
  char cStack_91;
  long lStack_90;
  long *plStack_88;
  int iStack_7c;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if (param_3 == 0) {
    FUN_10a00946c(&UNK_10f67f2f7);
    goto LAB_10a86ed0c;
  }
  if ((*(long *)(param_1 + 0x368) == 0) || (**(int **)(param_1 + 0x1e8) != 2)) {
    func_0x00010ae02ecc(0,**(undefined4 **)(param_1 + 0x1e8));
    ppuVar9 = &PTR_PTR_1133037c8;
    ppuVar8 = ppuVar9;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    plStack_70 = *(long **)PTR____stack_chk_guard_11034bdc0;
    plVar20 = (long *)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar8[0x13],ppuVar8[0xf],
                    ppuVar8 + 0x14,0x400);
      puStack_918 = puStack_890;
      uStack_910 = uStack_888;
      puStack_900 = puStack_8a8;
      uStack_8f8 = uStack_8a0;
      uStack_908 = uStack_880;
      if (iStack_878 != 0) {
        puStack_918 = &UNK_10f6c352e;
        uStack_910 = 0x10;
        puStack_900 = &UNK_10f6c352e;
        uStack_8f8 = 0x10;
        uStack_908 = 0;
        uStack_898 = 0;
      }
      puVar26 = ppuVar8[0x12];
      puVar22 = ppuVar8[0xb];
      uVar7 = 0;
      _clock_gettime_nsec_np();
      uVar10 = uVar7;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar8 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar8 + 0xe);
      uStack_8c0 = uVar10 & 0xffffffff;
      ppuStack_8b0 = ppuVar8 + 0x10;
      plVar20 = (long *)*ppuVar8;
      ppuVar9 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar22;
      puStack_8d8 = puVar26;
      uStack_8d0 = (ulong)(puVar26 != (undefined *)0x0);
      uStack_8c8 = uVar7;
      FUN_10ae0784c(plVar20,ppuVar9,&puStack_900,&puStack_918);
    }
    iVar18 = (int)ppuVar9;
    if ((long *)*(long *)PTR____stack_chk_guard_11034bdc0 == plStack_70) {
      return plVar20;
    }
    ___stack_chk_fail();
    if (iVar18 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(plVar20);
    return plVar20;
  }
  lVar13 = param_1;
  FUN_10a86ed8c();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_c0,*param_2,param_2[1]);
  }
  else {
    lStack_b8 = param_2[1];
    plStack_c0 = (long *)*param_2;
    uStack_b0 = param_2[2];
  }
  func_0x000107c2b054(&plStack_a8,&UNK_10f67d9eb);
  plStack_88 = (long *)param_6[1];
  lStack_90 = *param_6;
  if (param_6[1] != 0) {
    plVar20 = (long *)(param_6[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_d8 = 0x19;
  uVar1 = *param_7;
  plVar20 = (long *)param_7[1];
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar23 = *(long *)(param_1 + 0x3a8);
  uStack_d0 = uVar1;
  plStack_c8 = plVar20;
  if ((long)uStack_b0 < 0) {
    func_0x000107c3192c(&plStack_120,plStack_c0,lStack_b8);
  }
  else {
    lStack_118 = lStack_b8;
    plStack_120 = plStack_c0;
    uStack_110 = uStack_b0;
  }
  if (cStack_91 < '\0') {
    func_0x000107c3192c(&plStack_108,plStack_a8,lStack_a0);
  }
  else {
    lStack_100 = lStack_a0;
    plStack_108 = plStack_a8;
    uStack_f8 = CONCAT17(cStack_91,uStack_98);
  }
  plStack_e8 = plStack_88;
  lStack_f0 = lStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar21 = plStack_88 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_138 = 0x19;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar21 = (long *)(lVar23 + 0x50);
  iVar18 = (int)lVar13;
  plVar24 = (long *)(long)iVar18;
  plVar25 = *(long **)(lVar23 + 0x58);
  uStack_130 = uVar1;
  plStack_128 = plVar20;
  iStack_7c = iVar18;
  if (plVar25 != (long *)0x0) {
    uVar10 = (long)plVar25 - 1;
    if (((ulong)plVar25 & uVar10) == 0) {
      plVar20 = (long *)(uVar10 & (ulong)plVar24);
    }
    else {
      plVar20 = plVar24;
      if (plVar25 <= plVar24) {
        uVar7 = 0;
        if (plVar25 != (long *)0x0) {
          uVar7 = (ulong)plVar24 / (ulong)plVar25;
        }
        plVar20 = (long *)((long)plVar24 - uVar7 * (long)plVar25);
      }
    }
    puVar11 = *(undefined8 **)(*plVar21 + (long)plVar20 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar11; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        plVar12 = (long *)plVar19[1];
        if (plVar12 == plVar24) {
          if ((int)plVar19[2] == iVar18) goto LAB_10a86eac8;
        }
        else {
          if (((ulong)plVar25 & uVar10) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar10);
          }
          else if (plVar25 <= plVar12) {
            uVar7 = 0;
            if (plVar25 != (long *)0x0) {
              uVar7 = (ulong)plVar12 / (ulong)plVar25;
            }
            plVar12 = (long *)((long)plVar12 - uVar7 * (long)plVar25);
          }
          if (plVar12 != plVar20) break;
        }
      }
    }
  }
  plVar19 = (long *)0x58;
  __Znwm();
  uStack_68 = 1;
  *plVar19 = 0;
  plVar19[1] = (long)plVar24;
  *(int *)(plVar19 + 2) = iVar18;
  plVar19[4] = 0;
  plVar19[3] = 0;
  plVar19[6] = 0;
  plVar19[5] = 0;
  plVar19[8] = 0;
  plVar19[7] = 0;
  plVar19[10] = 0;
  plVar19[9] = 0;
  fVar27 = (float)(*(long *)(lVar23 + 0x68) + 1);
  plStack_78 = plVar19;
  plStack_70 = plVar21;
  if ((plVar25 == (long *)0x0) || (*(float *)(lVar23 + 0x70) * (float)plVar25 < fVar27)) {
    uVar10 = 1;
    if ((long *)0x2 < plVar25) {
      uVar10 = (ulong)(((ulong)plVar25 & (long)plVar25 - 1U) != 0);
    }
    plVar20 = (long *)(uVar10 | (long)plVar25 << 1);
    plVar12 = (long *)(long)(fVar27 / *(float *)(lVar23 + 0x70));
    if (plVar20 <= plVar12) {
      plVar20 = plVar12;
    }
    if ((long)plVar20 - 1U == 0) {
      plVar20 = (long *)0x2;
    }
    else if (((ulong)plVar20 & (long)plVar20 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar25 = *(long **)(lVar23 + 0x58);
    }
    if (plVar25 < plVar20) {
LAB_10a86e8dc:
      if ((ulong)plVar20 >> 0x3d != 0) {
LAB_10a86ed0c:
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a86ed14);
        (*pcVar4)();
      }
      lVar5 = (long)plVar20 << 3;
      __Znwm();
      lVar6 = *plVar21;
      *plVar21 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      plVar25 = (long *)0x0;
      *(long **)(lVar23 + 0x58) = plVar20;
      do {
        *(undefined8 *)(*plVar21 + (long)plVar25 * 8) = 0;
        plVar25 = (long *)((long)plVar25 + 1);
      } while (plVar20 != plVar25);
      plVar12 = *(long **)(lVar23 + 0x60);
      plVar25 = plVar20;
      if (plVar12 != (long *)0x0) {
        plVar14 = (long *)plVar12[1];
        uVar10 = (long)plVar20 - 1;
        if (((ulong)plVar20 & uVar10) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar10);
        }
        else if (plVar20 <= plVar14) {
          uVar7 = 0;
          if (plVar20 != (long *)0x0) {
            uVar7 = (ulong)plVar14 / (ulong)plVar20;
          }
          plVar14 = (long *)((long)plVar14 - uVar7 * (long)plVar20);
        }
        *(undefined8 **)(*plVar21 + (long)plVar14 * 8) = (undefined8 *)(lVar23 + 0x60);
        plVar15 = (long *)*plVar12;
        while (plVar15 != (long *)0x0) {
          plVar17 = (long *)plVar15[1];
          if (((ulong)plVar20 & uVar10) == 0) {
            plVar17 = (long *)((ulong)plVar17 & uVar10);
          }
          else if (plVar20 <= plVar17) {
            uVar7 = 0;
            if (plVar20 != (long *)0x0) {
              uVar7 = (ulong)plVar17 / (ulong)plVar20;
            }
            plVar17 = (long *)((long)plVar17 - uVar7 * (long)plVar20);
          }
          plVar16 = plVar15;
          if (plVar17 != plVar14) {
            lVar5 = *plVar21;
            if (*(long *)(lVar5 + (long)plVar17 * 8) == 0) {
              *(long **)(lVar5 + (long)plVar17 * 8) = plVar12;
              plVar14 = plVar17;
            }
            else {
              *plVar12 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar5 + (long)plVar17 * 8);
              **(long **)(lVar5 + (long)plVar17 * 8) = (long)plVar15;
              plVar16 = plVar12;
            }
          }
          plVar12 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
    }
    else if (plVar20 < plVar25) {
      plVar12 = (long *)(long)((float)*(ulong *)(lVar23 + 0x68) / *(float *)(lVar23 + 0x70));
      if ((plVar25 < (long *)0x3) || (((ulong)plVar25 & (long)plVar25 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar12) {
        plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 - 1) & 0x3fU));
      }
      if (plVar20 <= plVar12) {
        plVar20 = plVar12;
      }
      if (plVar20 < plVar25) {
        if (plVar20 != (long *)0x0) goto LAB_10a86e8dc;
        lVar5 = *plVar21;
        *plVar21 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(lVar23 + 0x58) = 0;
        plVar25 = (long *)0x0;
      }
      else {
        plVar25 = *(long **)(lVar23 + 0x58);
      }
    }
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      plVar20 = (long *)((long)plVar25 - 1U & (ulong)plVar24);
    }
    else {
      plVar20 = plVar24;
      if (plVar25 <= plVar24) {
        uVar10 = 0;
        if (plVar25 != (long *)0x0) {
          uVar10 = (ulong)plVar24 / (ulong)plVar25;
        }
        plVar20 = (long *)((long)plVar24 - uVar10 * (long)plVar25);
      }
    }
  }
  lVar5 = *plVar21;
  plVar24 = *(long **)(lVar5 + (long)plVar20 * 8);
  if (plVar24 == (long *)0x0) {
    plVar24 = (long *)(lVar23 + 0x60);
    *plVar19 = *plVar24;
    *plVar24 = (long)plVar19;
    *(long **)(lVar5 + (long)plVar20 * 8) = plVar24;
    if (*plVar19 == 0) goto LAB_10a86eabc;
    plVar20 = *(long **)(*plVar19 + 8);
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      plVar20 = (long *)((ulong)plVar20 & (long)plVar25 - 1U);
    }
    else if (plVar25 <= plVar20) {
      uVar10 = 0;
      if (plVar25 != (long *)0x0) {
        uVar10 = (ulong)plVar20 / (ulong)plVar25;
      }
      plVar20 = (long *)((long)plVar20 - uVar10 * (long)plVar25);
    }
    plVar24 = (long *)(*plVar21 + (long)plVar20 * 8);
  }
  else {
    *plVar19 = *plVar24;
  }
  *plVar24 = (long)plVar19;
LAB_10a86eabc:
  *(long *)(lVar23 + 0x68) = *(long *)(lVar23 + 0x68) + 1;
LAB_10a86eac8:
  if (*(char *)((long)plVar19 + 0x2f) < '\0') {
    __ZdlPv(plVar19[3]);
  }
  plVar19[4] = lStack_118;
  plVar19[3] = (long)plStack_120;
  plVar19[5] = uStack_110;
  uStack_110 = uStack_110 & 0xffffffffffffff;
  plStack_120 = (long *)((ulong)plStack_120 & 0xffffffffffffff00);
  if (*(char *)((long)plVar19 + 0x47) < '\0') {
    __ZdlPv(plVar19[6]);
  }
  plVar20 = plStack_e8;
  lVar5 = lStack_f0;
  plVar19[7] = lStack_100;
  plVar19[6] = (long)plStack_108;
  plVar19[8] = uStack_f8;
  uStack_f8 = uStack_f8 & 0xffffffffffffff;
  plStack_108 = (long *)((ulong)plStack_108 & 0xffffffffffffff00);
  lStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  plVar21 = (long *)plVar19[10];
  plVar19[10] = (long)plVar20;
  plVar19[9] = lVar5;
  if (plVar21 != (long *)0x0) {
    plVar20 = plVar21 + 1;
    do {
      lVar5 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  lVar23 = lVar23 + 0x140;
  FUN_10a87f4f0(lVar23,lVar13,&iStack_7c);
  *(undefined4 *)(lVar23 + 0x18) = uStack_138;
  plVar20 = (long *)(lVar23 + 0x20);
  FUN_10a03c06c(plVar20,&uStack_130);
  plVar21 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar25 = plStack_128 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  plVar21 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar25 = plStack_e8 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  if ((long)uStack_f8 < 0) {
    plVar20 = plStack_108;
    __ZdlPv(plStack_108);
  }
  if ((long)uStack_110 < 0) {
    plVar20 = plStack_120;
    __ZdlPv(plStack_120);
  }
  plVar21 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar25 = plStack_c8 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  plVar21 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar25 = plStack_88 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  if (cStack_91 < '\0') {
    __ZdlPv(plStack_a8);
    plVar20 = plStack_a8;
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(plStack_c0);
    plVar20 = plStack_c0;
  }
  return plVar20;
}



/* Entry: 10a86ed8c; end: 10a86f00b;  */

long * FUN_10a86ed8c(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  long *plVar8;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar5 = &lStack_70;
  if ((int)param_4 < 1) {
    plVar5 = (long *)&UNK_10f67ef04;
    FUN_10a00946c();
    __ZdlPv();
    __Unwind_Resume();
    FUN_10a769db8(plVar5 + 6);
    if (*(char *)((long)plVar5 + 0x2f) < '\0') {
      __ZdlPv(plVar5[3]);
    }
    if (*(char *)((long)plVar5 + 0x17) < '\0') {
      __ZdlPv(*plVar5);
    }
    return plVar5;
  }
  plVar4 = (long *)0x10;
  __Znwm();
  FUN_10a8a41a8(&lStack_70,param_1 + 0x18);
  if (lStack_70 == 0) {
    plVar5 = &lStack_60;
  }
  else {
    lStack_60 = lStack_70;
    plStack_58 = plStack_68;
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5 = plStack_58;
  if (plStack_58 == (long *)0x0) {
    *plVar4 = lStack_60;
    plVar4[1] = 0;
  }
  else {
    plVar8 = plStack_58 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *plVar4 = lStack_60;
    plVar4[1] = (long)plStack_58;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    plVar8 = plVar5 + 1;
    do {
      lVar7 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar5 = plStack_68 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  plVar8 = *(long **)(param_1 + 0x368);
  plVar5 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar5 = param_2;
  }
  plVar1 = (long *)*param_5;
  if (-1 < *(char *)((long)param_5 + 0x17)) {
    plVar1 = param_5;
  }
  FUN_10a86e53c(param_3);
  (**(code **)(*plVar8 + 0x78))
            (plVar8,plVar5,plVar1,param_4,param_3,FUN_10a867548,FUN_10a868058,plVar4);
  func_0x00010ae02ecc(0,plVar8);
  FUN_10ae03140();
  func_0x00010ae02ecc();
  func_0x00010ae02ecc();
  FUN_10ae03140();
  ppuVar6 = &PTR_PTR_113303860;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae0314c();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar6,&PTR_PTR_113303860);
  return plVar8;
}



/* Entry: 10a86f00c; end: 10a86f053;  */

undefined8 * FUN_10a86f00c(undefined8 *param_1)

{
  FUN_10a769db8(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a86f054; end: 10a86f86b;  */

long * FUN_10a86f054(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                    undefined8 *param_5)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined *puVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined *puVar26;
  float fVar27;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [800];
  long *plStack_150;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined1 uStack_aa;
  char cStack_a9;
  long *plStack_a8;
  long lStack_a0;
  undefined7 uStack_98;
  char cStack_91;
  long lStack_90;
  long *plStack_88;
  int iStack_7c;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if ((int)param_2 == 0) {
    FUN_10a00946c(&UNK_10f67f2f7);
    goto LAB_10a86f7e8;
  }
  if ((*(long *)(param_1 + 0x368) == 0) || (**(int **)(param_1 + 0x1e8) != 2)) {
    func_0x00010ae02ecc(0,**(undefined4 **)(param_1 + 0x1e8));
    ppuVar9 = &PTR_PTR_113303808;
    ppuVar8 = ppuVar9;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    plStack_70 = *(long **)PTR____stack_chk_guard_11034bdc0;
    plVar20 = (long *)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar8[0x13],ppuVar8[0xf],
                    ppuVar8 + 0x14,0x400);
      puStack_918 = puStack_890;
      uStack_910 = uStack_888;
      puStack_900 = puStack_8a8;
      uStack_8f8 = uStack_8a0;
      uStack_908 = uStack_880;
      if (iStack_878 != 0) {
        puStack_918 = &UNK_10f6c352e;
        uStack_910 = 0x10;
        puStack_900 = &UNK_10f6c352e;
        uStack_8f8 = 0x10;
        uStack_908 = 0;
        uStack_898 = 0;
      }
      puVar26 = ppuVar8[0x12];
      puVar22 = ppuVar8[0xb];
      uVar7 = 0;
      _clock_gettime_nsec_np();
      uVar10 = uVar7;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar8 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar8 + 0xe);
      uStack_8c0 = uVar10 & 0xffffffff;
      ppuStack_8b0 = ppuVar8 + 0x10;
      plVar20 = (long *)*ppuVar8;
      ppuVar9 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar22;
      puStack_8d8 = puVar26;
      uStack_8d0 = (ulong)(puVar26 != (undefined *)0x0);
      uStack_8c8 = uVar7;
      FUN_10ae0784c(plVar20,ppuVar9,&puStack_900,&puStack_918);
    }
    iVar18 = (int)ppuVar9;
    if ((long *)*(long *)PTR____stack_chk_guard_11034bdc0 == plStack_70) {
      return plVar20;
    }
    ___stack_chk_fail();
    if (iVar18 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(plVar20);
    return plVar20;
  }
  uStack_148 = 0x4c4c4f435f524553;
  plStack_150 = (long *)0x555f43494c425550;
  uStack_b8 = 0x4f435f524553;
  plStack_c0 = (long *)0x555f43494c425550;
  uStack_b2 = 0x4c4c;
  uStack_b0 = 0x4e4f49544345;
  uStack_aa = 0;
  cStack_a9 = '\x16';
  lVar13 = param_1;
  FUN_10a86ed8c(param_1,&plStack_c0,param_2,10,param_3);
  if (cStack_a9 < '\0') {
    __ZdlPv(plStack_c0);
  }
  uStack_b8 = (undefined6)uStack_148;
  plStack_c0 = plStack_150;
  uStack_b2 = 0x4c4c;
  uStack_b0 = 0x4e4f49544345;
  uStack_aa = 0;
  cStack_a9 = '\x16';
  func_0x000107c2b054(&plStack_a8,&UNK_10f67d9eb);
  plStack_88 = (long *)param_4[1];
  lStack_90 = *param_4;
  if (param_4[1] != 0) {
    plVar20 = (long *)(param_4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_d8 = 100;
  uVar1 = *param_5;
  plVar20 = (long *)param_5[1];
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar23 = *(long *)(param_1 + 0x3a8);
  uStack_d0 = uVar1;
  plStack_c8 = plVar20;
  if (cStack_a9 < '\0') {
    func_0x000107c3192c(&plStack_120,plStack_c0,CONCAT26(uStack_b2,uStack_b8));
  }
  else {
    lStack_118 = CONCAT26(uStack_b2,uStack_b8);
    plStack_120 = plStack_c0;
    uStack_110 = CONCAT17(cStack_a9,CONCAT16(uStack_aa,uStack_b0));
  }
  if (cStack_91 < '\0') {
    func_0x000107c3192c(&plStack_108,plStack_a8,lStack_a0);
  }
  else {
    lStack_100 = lStack_a0;
    plStack_108 = plStack_a8;
    uStack_f8 = CONCAT17(cStack_91,uStack_98);
  }
  plStack_e8 = plStack_88;
  lStack_f0 = lStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar21 = plStack_88 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_138 = 100;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar21 = (long *)(lVar23 + 0x78);
  iVar18 = (int)lVar13;
  plVar24 = (long *)(long)iVar18;
  plVar25 = *(long **)(lVar23 + 0x80);
  uStack_130 = uVar1;
  plStack_128 = plVar20;
  iStack_7c = iVar18;
  if (plVar25 != (long *)0x0) {
    uVar10 = (long)plVar25 - 1;
    if (((ulong)plVar25 & uVar10) == 0) {
      plVar20 = (long *)(uVar10 & (ulong)plVar24);
    }
    else {
      plVar20 = plVar24;
      if (plVar25 <= plVar24) {
        uVar7 = 0;
        if (plVar25 != (long *)0x0) {
          uVar7 = (ulong)plVar24 / (ulong)plVar25;
        }
        plVar20 = (long *)((long)plVar24 - uVar7 * (long)plVar25);
      }
    }
    puVar11 = *(undefined8 **)(*plVar21 + (long)plVar20 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar11; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        plVar12 = (long *)plVar19[1];
        if (plVar12 == plVar24) {
          if ((int)plVar19[2] == iVar18) goto LAB_10a86f5a4;
        }
        else {
          if (((ulong)plVar25 & uVar10) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar10);
          }
          else if (plVar25 <= plVar12) {
            uVar7 = 0;
            if (plVar25 != (long *)0x0) {
              uVar7 = (ulong)plVar12 / (ulong)plVar25;
            }
            plVar12 = (long *)((long)plVar12 - uVar7 * (long)plVar25);
          }
          if (plVar12 != plVar20) break;
        }
      }
    }
  }
  plVar19 = (long *)0x58;
  __Znwm();
  uStack_68 = 1;
  *plVar19 = 0;
  plVar19[1] = (long)plVar24;
  *(int *)(plVar19 + 2) = iVar18;
  plVar19[4] = 0;
  plVar19[3] = 0;
  plVar19[6] = 0;
  plVar19[5] = 0;
  plVar19[8] = 0;
  plVar19[7] = 0;
  plVar19[10] = 0;
  plVar19[9] = 0;
  fVar27 = (float)(*(long *)(lVar23 + 0x90) + 1);
  plStack_78 = plVar19;
  plStack_70 = plVar21;
  if ((plVar25 == (long *)0x0) || (*(float *)(lVar23 + 0x98) * (float)plVar25 < fVar27)) {
    uVar10 = 1;
    if ((long *)0x2 < plVar25) {
      uVar10 = (ulong)(((ulong)plVar25 & (long)plVar25 - 1U) != 0);
    }
    plVar20 = (long *)(uVar10 | (long)plVar25 << 1);
    plVar12 = (long *)(long)(fVar27 / *(float *)(lVar23 + 0x98));
    if (plVar20 <= plVar12) {
      plVar20 = plVar12;
    }
    if ((long)plVar20 - 1U == 0) {
      plVar20 = (long *)0x2;
    }
    else if (((ulong)plVar20 & (long)plVar20 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar25 = *(long **)(lVar23 + 0x80);
    }
    if (plVar25 < plVar20) {
LAB_10a86f3b8:
      if ((ulong)plVar20 >> 0x3d != 0) {
LAB_10a86f7e8:
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a86f7f0);
        (*pcVar4)();
      }
      lVar5 = (long)plVar20 << 3;
      __Znwm();
      lVar6 = *plVar21;
      *plVar21 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      plVar25 = (long *)0x0;
      *(long **)(lVar23 + 0x80) = plVar20;
      do {
        *(undefined8 *)(*plVar21 + (long)plVar25 * 8) = 0;
        plVar25 = (long *)((long)plVar25 + 1);
      } while (plVar20 != plVar25);
      plVar12 = *(long **)(lVar23 + 0x88);
      plVar25 = plVar20;
      if (plVar12 != (long *)0x0) {
        plVar14 = (long *)plVar12[1];
        uVar10 = (long)plVar20 - 1;
        if (((ulong)plVar20 & uVar10) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar10);
        }
        else if (plVar20 <= plVar14) {
          uVar7 = 0;
          if (plVar20 != (long *)0x0) {
            uVar7 = (ulong)plVar14 / (ulong)plVar20;
          }
          plVar14 = (long *)((long)plVar14 - uVar7 * (long)plVar20);
        }
        *(undefined8 **)(*plVar21 + (long)plVar14 * 8) = (undefined8 *)(lVar23 + 0x88);
        plVar15 = (long *)*plVar12;
        while (plVar15 != (long *)0x0) {
          plVar17 = (long *)plVar15[1];
          if (((ulong)plVar20 & uVar10) == 0) {
            plVar17 = (long *)((ulong)plVar17 & uVar10);
          }
          else if (plVar20 <= plVar17) {
            uVar7 = 0;
            if (plVar20 != (long *)0x0) {
              uVar7 = (ulong)plVar17 / (ulong)plVar20;
            }
            plVar17 = (long *)((long)plVar17 - uVar7 * (long)plVar20);
          }
          plVar16 = plVar15;
          if (plVar17 != plVar14) {
            lVar5 = *plVar21;
            if (*(long *)(lVar5 + (long)plVar17 * 8) == 0) {
              *(long **)(lVar5 + (long)plVar17 * 8) = plVar12;
              plVar14 = plVar17;
            }
            else {
              *plVar12 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar5 + (long)plVar17 * 8);
              **(long **)(lVar5 + (long)plVar17 * 8) = (long)plVar15;
              plVar16 = plVar12;
            }
          }
          plVar12 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
    }
    else if (plVar20 < plVar25) {
      plVar12 = (long *)(long)((float)*(ulong *)(lVar23 + 0x90) / *(float *)(lVar23 + 0x98));
      if ((plVar25 < (long *)0x3) || (((ulong)plVar25 & (long)plVar25 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar12) {
        plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 - 1) & 0x3fU));
      }
      if (plVar20 <= plVar12) {
        plVar20 = plVar12;
      }
      if (plVar20 < plVar25) {
        if (plVar20 != (long *)0x0) goto LAB_10a86f3b8;
        lVar5 = *plVar21;
        *plVar21 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(lVar23 + 0x80) = 0;
        plVar25 = (long *)0x0;
      }
      else {
        plVar25 = *(long **)(lVar23 + 0x80);
      }
    }
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      plVar20 = (long *)((long)plVar25 - 1U & (ulong)plVar24);
    }
    else {
      plVar20 = plVar24;
      if (plVar25 <= plVar24) {
        uVar10 = 0;
        if (plVar25 != (long *)0x0) {
          uVar10 = (ulong)plVar24 / (ulong)plVar25;
        }
        plVar20 = (long *)((long)plVar24 - uVar10 * (long)plVar25);
      }
    }
  }
  lVar5 = *plVar21;
  plVar24 = *(long **)(lVar5 + (long)plVar20 * 8);
  if (plVar24 == (long *)0x0) {
    plVar24 = (long *)(lVar23 + 0x88);
    *plVar19 = *plVar24;
    *plVar24 = (long)plVar19;
    *(long **)(lVar5 + (long)plVar20 * 8) = plVar24;
    if (*plVar19 == 0) goto LAB_10a86f598;
    plVar20 = *(long **)(*plVar19 + 8);
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      plVar20 = (long *)((ulong)plVar20 & (long)plVar25 - 1U);
    }
    else if (plVar25 <= plVar20) {
      uVar10 = 0;
      if (plVar25 != (long *)0x0) {
        uVar10 = (ulong)plVar20 / (ulong)plVar25;
      }
      plVar20 = (long *)((long)plVar20 - uVar10 * (long)plVar25);
    }
    plVar24 = (long *)(*plVar21 + (long)plVar20 * 8);
  }
  else {
    *plVar19 = *plVar24;
  }
  *plVar24 = (long)plVar19;
LAB_10a86f598:
  *(long *)(lVar23 + 0x90) = *(long *)(lVar23 + 0x90) + 1;
LAB_10a86f5a4:
  if (*(char *)((long)plVar19 + 0x2f) < '\0') {
    __ZdlPv(plVar19[3]);
  }
  plVar19[4] = lStack_118;
  plVar19[3] = (long)plStack_120;
  plVar19[5] = uStack_110;
  uStack_110 = uStack_110 & 0xffffffffffffff;
  plStack_120 = (long *)((ulong)plStack_120 & 0xffffffffffffff00);
  if (*(char *)((long)plVar19 + 0x47) < '\0') {
    __ZdlPv(plVar19[6]);
  }
  plVar20 = plStack_e8;
  lVar5 = lStack_f0;
  plVar19[7] = lStack_100;
  plVar19[6] = (long)plStack_108;
  plVar19[8] = uStack_f8;
  uStack_f8 = uStack_f8 & 0xffffffffffffff;
  plStack_108 = (long *)((ulong)plStack_108 & 0xffffffffffffff00);
  lStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  plVar21 = (long *)plVar19[10];
  plVar19[10] = (long)plVar20;
  plVar19[9] = lVar5;
  if (plVar21 != (long *)0x0) {
    plVar20 = plVar21 + 1;
    do {
      lVar5 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  lVar23 = lVar23 + 0x140;
  FUN_10a87f4f0(lVar23,lVar13,&iStack_7c);
  *(undefined4 *)(lVar23 + 0x18) = uStack_138;
  plVar20 = (long *)(lVar23 + 0x20);
  FUN_10a03c06c(plVar20,&uStack_130);
  plVar21 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar25 = plStack_128 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  plVar21 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar25 = plStack_e8 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  if ((long)uStack_f8 < 0) {
    plVar20 = plStack_108;
    __ZdlPv(plStack_108);
  }
  if ((long)uStack_110 < 0) {
    plVar20 = plStack_120;
    __ZdlPv(plStack_120);
  }
  plVar21 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar25 = plStack_c8 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  plVar21 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar25 = plStack_88 + 1;
    do {
      lVar13 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      plVar20 = plVar21;
    }
  }
  if (cStack_91 < '\0') {
    __ZdlPv(plStack_a8);
    plVar20 = plStack_a8;
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(plStack_c0);
    plVar20 = plStack_c0;
  }
  return plVar20;
}



/* Entry: 10a86f86c; end: 10a86f8b3;  */

undefined8 * FUN_10a86f86c(undefined8 *param_1)

{
  FUN_10a76ab8c(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a86f8b4; end: 10a87032f;  */

/* WARNING: Removing unreachable block (ram,0x00010a86f954) */

void FUN_10a86f8b4(long param_1,ulong *param_2,long *param_3,long *param_4,long *param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  undefined ***pppuVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined4 auStack_198 [2];
  undefined8 uStack_190;
  long *plStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined **ppuStack_138;
  long *plStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined1 uStack_aa;
  byte bStack_a9;
  undefined **appuStack_a0 [2];
  undefined **appuStack_90 [3];
  long *plStack_78;
  
  lVar19 = *param_5;
  if (lVar19 == 0) {
    FUN_10a00946c(&UNK_10f67ef25);
LAB_10a8701f0:
    FUN_10a00946c(&UNK_10f67ef46);
  }
  else {
    if (*(int *)(lVar19 + 0x1c) == 0) goto LAB_10a8701f0;
    lVar14 = (long)*(char *)(lVar19 + 0x37);
    if (lVar14 < 0) {
      lVar14 = *(long *)(lVar19 + 0x28);
    }
    if (lVar14 == 0) {
      ppuVar9 = (undefined **)0x28;
      __Znwm();
      uStack_b0 = 0x28;
      uStack_aa = 0;
      bStack_a9 = 0x80;
      uStack_b8 = 0x20;
      uStack_b2 = 0;
      ppuVar9[1] = (undefined *)0x6472335f61746164;
      *ppuVar9 = (undefined *)0x6174656d5f636775;
      ppuVar9[3] = (undefined *)0x7963696c6f705f76;
      ppuVar9[2] = (undefined *)0x65645f7974726170;
      *(undefined1 *)(ppuVar9 + 4) = 0;
      uStack_c0 = ppuVar9;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar19 + 0x20,&uStack_c0);
      lVar19 = *param_5;
    }
    FUN_10a86d5f0(param_3[1],*(undefined1 *)((long)param_3 + 0x17),*(undefined4 *)(lVar19 + 0x18));
    if ((*(long *)(param_1 + 0x368) == 0) || (**(int **)(param_1 + 0x1e8) != 2)) {
      func_0x00010ae02ecc(0,**(undefined4 **)(param_1 + 0x1e8));
      ppuVar9 = &PTR_PTR_113304b40;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar9,&PTR_PTR_113304b40);
      return;
    }
    FUN_10a86e114(param_1 + 0x2d8,1);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_110,*param_2,param_2[1]);
    }
    else {
      uStack_108 = param_2[1];
      uStack_110 = *param_2;
      uStack_100 = param_2[2];
    }
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&lStack_f8,*param_3,param_3[1]);
    }
    else {
      lStack_f0 = param_3[1];
      lStack_f8 = *param_3;
      lStack_e8 = param_3[2];
    }
    plStack_d8 = (long *)param_6[1];
    uStack_e0 = *param_6;
    if (param_6[1] != 0) {
      plVar10 = (long *)(param_6[1] + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = *plVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if ((*(long *)(param_1 + 0x350) == 0) ||
       (0x8f < *(int *)(*(long *)(*(long *)(param_1 + 0x350) + 0xa20) + 0x18))) {
      FUN_10a0f984c(&uStack_c0);
      switch((char)param_4[8]) {
      case '\0':
        uStack_c8 = param_4[1];
        plStack_d0 = (long *)*param_4;
        if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
          uStack_c8 = (ulong)*(byte *)((long)param_4 + 0x17);
          plStack_d0 = param_4;
        }
        func_0x00010a0faca8();
        break;
      case '\x01':
        func_0x00010a0f9ee0(*param_4);
        break;
      case '\x02':
        FUN_10a0f9d88();
        break;
      case '\x03':
        func_0x00010a0f9f88();
        break;
      case '\x04':
        func_0x00010a0fa04c();
        break;
      case '\x05':
        func_0x00010a0fa20c();
        break;
      case '\x06':
        func_0x00010a0faa80();
        break;
      case '\a':
        func_0x00010a0fab38();
        break;
      case '\b':
        func_0x00010a0fabf0();
        break;
      case '\t':
        func_0x00010a0fa8ec();
        break;
      default:
        FUN_10a00946c(&UNK_10f67f337);
        goto LAB_10a870210;
      }
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      func_0x00010a0fb0f4(&uStack_c0,&uStack_128);
      plVar10 = plStack_78;
      uStack_c0 = &PTR_FUN_110ba53b0;
      uStack_b8 = 0x110ba5578;
      uStack_b2 = 0;
      plStack_78 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      appuStack_90[0] = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(appuStack_90);
      appuStack_a0[0] = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(appuStack_a0);
      uStack_b0 = 0x110b01d60;
      uStack_aa = 0;
      bStack_a9 = 0;
      func_0x000107c2acd4(&uStack_b0);
LAB_10a86fc68:
      plVar10 = (long *)0x40;
      __Znwm();
      plVar10[5] = 0;
      plVar10[4] = 0;
      plVar10[7] = 0;
      plVar10[6] = 0;
      plVar10[3] = 0;
      plVar10[2] = 0;
      puVar2 = (ulong *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        puVar2 = param_2;
      }
      plVar15 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar15 = param_3;
      }
      *plVar10 = (long)puVar2;
      plVar10[1] = (long)plVar15;
      uVar13 = *(undefined4 *)(*param_5 + 0x18);
      FUN_10a86e53c();
      *(undefined4 *)(plVar10 + 4) = uVar13;
      uVar13 = *(undefined4 *)(*param_5 + 0x1c);
      FUN_10a870330();
      *(undefined4 *)((long)plVar10 + 0x24) = uVar13;
      plVar15 = (long *)(*param_5 + 0x20);
      if (*(char *)(*param_5 + 0x37) < '\0') {
        plVar15 = (long *)*plVar15;
      }
      plVar10[5] = (long)plVar15;
      plVar10[2] = uStack_128;
      plVar10[3] = uStack_120 - uStack_128;
      uStack_c8 = 1;
      puVar11 = (undefined8 *)0x10;
      plStack_d0 = plVar10;
      __Znwm();
      FUN_10a8a41a8(&ppuStack_138,param_1 + 0x18);
      if (ppuStack_138 == (undefined **)0x0) {
        pppuVar16 = (undefined ***)&uStack_c0;
      }
      else {
        uStack_c0 = ppuStack_138;
        uStack_b8 = SUB86(plStack_130,0);
        uStack_b2 = (undefined2)((ulong)plStack_130 >> 0x30);
        pppuVar16 = &ppuStack_138;
      }
      *pppuVar16 = (undefined **)0x0;
      pppuVar16[1] = (undefined **)0x0;
      plVar15 = (long *)CONCAT26(uStack_b2,uStack_b8);
      if (plVar15 == (long *)0x0) {
        *puVar11 = uStack_c0;
        puVar11[1] = 0;
      }
      else {
        plVar4 = plVar15 + 2;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = *plVar4 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *puVar11 = uStack_c0;
        puVar11[1] = plVar15;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = *plVar4 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        plVar4 = plVar15 + 1;
        do {
          lVar19 = *plVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      if (plStack_130 != (long *)0x0) {
        plVar15 = plStack_130 + 1;
        do {
          lVar19 = *plVar15;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_130 + 0x10))(plStack_130);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_130);
        }
      }
      plVar15 = *(long **)(param_1 + 0x368);
      (**(code **)(*plVar15 + 0x60))(plVar15,&plStack_d0,FUN_10a867cd4,FUN_10a868058,puVar11);
      func_0x00010ae02ecc(0,plVar15);
      FUN_10ae03140();
      FUN_10ae03140();
      func_0x00010ae02ecc();
      func_0x00010ae02ecc();
      func_0x00010ae02f70();
      ppuVar9 = &PTR_PTR_113305c60;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      FUN_10ae0314c();
      FUN_10ae0314c();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      func_0x00010ae02f80();
      FUN_10ae07cd4(ppuVar9,&PTR_PTR_113305c60);
      bVar5 = *(byte *)((long)param_2 + 0x17);
      uVar17 = param_2[1];
      if (-1 < (char)bVar5) {
        uVar17 = (ulong)bVar5;
      }
      if (uVar17 != 0x16) {
        uVar13 = 0x19;
        goto LAB_10a86ffac;
      }
      puVar2 = (ulong *)*param_2;
      if (-1 < (char)bVar5) {
        puVar2 = param_2;
      }
      uVar17 = (*puVar2 & 0xff00ff00ff00ff00) >> 8 | (*puVar2 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
      uVar18 = 0x5055424c49435f55;
      if (uVar17 == 0x5055424c49435f55) {
        uVar17 = (puVar2[1] & 0xff00ff00ff00ff00) >> 8 | (puVar2[1] & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
        uVar18 = 0x5345525f434f4c4c;
        if (uVar17 != 0x5345525f434f4c4c) goto LAB_10a86ff90;
        uVar17 = (*(ulong *)((long)puVar2 + 0xe) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)((long)puVar2 + 0xe) & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
        uVar18 = 0x4c4c454354494f4e;
        if (uVar17 != 0x4c4c454354494f4e) goto LAB_10a86ff90;
        iVar12 = 0;
      }
      else {
LAB_10a86ff90:
        iVar12 = 1;
        if (uVar17 < uVar18) {
          iVar12 = -1;
        }
      }
      uVar13 = 100;
      if (iVar12 != 0) {
        uVar13 = 0x19;
      }
LAB_10a86ffac:
      uStack_c0 = (undefined **)CONCAT44(0x555f4349,uVar13);
      uVar3 = *param_7;
      plVar4 = (long *)param_7[1];
      uStack_b8 = (undefined6)uVar3;
      uStack_b2 = (undefined2)((ulong)uVar3 >> 0x30);
      uStack_b0 = SUB86(plVar4,0);
      uStack_aa = (undefined1)((ulong)plVar4 >> 0x30);
      bStack_a9 = (byte)((ulong)plVar4 >> 0x38);
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar19 = *(long *)(param_1 + 0x3a8);
      if ((long)uStack_100 < 0) {
        func_0x000107c3192c(&uStack_180,uStack_110,uStack_108);
      }
      else {
        uStack_178 = uStack_108;
        uStack_180 = uStack_110;
        uStack_170 = uStack_100;
      }
      if (lStack_e8 < 0) {
        func_0x000107c3192c(&lStack_168,lStack_f8,lStack_f0);
      }
      else {
        lStack_160 = lStack_f0;
        lStack_168 = lStack_f8;
        lStack_158 = lStack_e8;
      }
      plStack_148 = plStack_d8;
      uStack_150 = uStack_e0;
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      auStack_198[0] = uVar13;
      uStack_190 = uVar3;
      plStack_188 = plVar4;
      FUN_10a87fb50(lVar19,plVar15,lVar19 + 0xa0,&uStack_180,auStack_198);
      plVar15 = plStack_188;
      if (plStack_188 != (long *)0x0) {
        plVar4 = plStack_188 + 1;
        do {
          lVar19 = *plVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      plVar15 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar4 = plStack_148 + 1;
        do {
          lVar19 = *plVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      if (lStack_158 < 0) {
        __ZdlPv(lStack_168);
      }
      if ((long)uStack_170 < 0) {
        __ZdlPv(uStack_180);
      }
      plVar15 = (long *)CONCAT17(bStack_a9,CONCAT16(uStack_aa,uStack_b0));
      if (plVar15 != (long *)0x0) {
        plVar4 = plVar15 + 1;
        do {
          lVar19 = *plVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      __ZdlPv(plVar10);
      if (uStack_128 != 0) {
        uStack_120 = uStack_128;
        __ZdlPv();
      }
      plVar10 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar15 = plStack_d8 + 1;
        do {
          lVar19 = *plVar15;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (lStack_e8 < 0) {
        __ZdlPv(lStack_f8);
      }
      if ((long)uStack_100 < 0) {
        __ZdlPv(uStack_110);
      }
      return;
    }
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_c0,*param_4,param_4[1]);
    }
    else {
      uStack_c0 = (undefined **)*param_4;
      uStack_b8 = (undefined6)param_4[1];
      uStack_b2 = (undefined2)((ulong)param_4[1] >> 0x30);
      lVar19 = param_4[2];
      uStack_b0 = (undefined6)lVar19;
      uStack_aa = (undefined1)((ulong)lVar19 >> 0x30);
      bStack_a9 = (byte)((ulong)lVar19 >> 0x38);
    }
    bVar5 = bStack_a9;
    ppuVar9 = uStack_c0;
    uVar17 = CONCAT26(uStack_b2,uStack_b8);
    if (-1 < (char)bStack_a9) {
      uVar17 = (ulong)bStack_a9;
    }
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    if (uVar17 == 0) {
LAB_10a86fb38:
      if ((char)bVar5 < '\0') {
        __ZdlPv(ppuVar9);
      }
      goto LAB_10a86fc68;
    }
    if (-1 < (long)uVar17) {
      uVar18 = uVar17;
      __Znwm();
      uStack_128 = uVar18;
      uStack_120 = uVar18;
      uStack_118 = uVar18 + uVar17;
      _memmove();
      uStack_120 = uVar18 + uVar17;
      goto LAB_10a86fb38;
    }
  }
  FUN_10a0cd644();
LAB_10a870210:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a870214);
  (*pcVar8)();
}



/* Entry: 10a870330; end: 10a870397;  */

undefined8 FUN_10a870330(undefined8 param_1)

{
  undefined **ppuVar1;
  
  if (3 < (uint)param_1) {
    func_0x00010ae02ecc(0,param_1);
    ppuVar1 = &PTR_PTR_1133030e0;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar1,&PTR_PTR_1133030e0);
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a870398; end: 10a8703df;  */

undefined8 * FUN_10a870398(undefined8 *param_1)

{
  func_0x00010a042b54(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a8703e0; end: 10a8705af;  */

void FUN_10a8703e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  short sStack_6a;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uStack_78 = 0x4f435f524553;
  uStack_80 = 0x555f43494c425550;
  uStack_72 = 0x4c4c;
  uStack_70 = 0x4e4f49544345;
  sStack_6a = 0x1600;
  plVar4 = (long *)0x50;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c17118;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_90 = plVar4 + 3;
  *plStack_90 = (long)&PTR_FUN_110c256d8;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  *(undefined4 *)(plVar4 + 6) = *(undefined4 *)(*param_4 + 0x18);
  puVar5 = (undefined8 *)0x28;
  plStack_88 = plVar4;
  __Znwm();
  lStack_58 = -0x7fffffffffffffd8;
  uStack_60 = 0x20;
  puVar5[1] = 0x6472335f61746164;
  *puVar5 = 0x6174656d5f636775;
  puVar5[3] = 0x7963696c6f705f76;
  puVar5[2] = 0x65645f7974726170;
  *(undefined1 *)(puVar5 + 4) = 0;
  puStack_68 = puVar5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4 + 7,&puStack_68);
  if (lStack_58 < 0) {
    __ZdlPv(puStack_68);
  }
  uVar6 = 1;
  if ((int)plVar4[6] != 1) {
    uVar6 = 2;
  }
  *(undefined4 *)((long)plVar4 + 0x34) = uVar6;
  FUN_10a86f8b4(param_1,&uStack_80,param_2,param_3,&plStack_90,param_5,param_6);
  plVar4 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (sStack_6a < 0) {
    __ZdlPv(uStack_80);
  }
  return;
}



/* Entry: 10a8705b0; end: 10a870f33;  */

long * FUN_10a8705b0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                    long *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long **pplVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  int iVar22;
  long *plVar23;
  undefined *puVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined *puVar28;
  long *plVar29;
  float fVar30;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [792];
  undefined4 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  long lStack_138;
  ulong uStack_130;
  long *plStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  long *plStack_108;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long *plStack_98;
  int iStack_8c;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  FUN_10a86d5f0(param_3[1],*(undefined1 *)((long)param_3 + 0x17),param_4);
  if ((*(long *)(param_1 + 0x368) == 0) || (**(int **)(param_1 + 0x1e8) != 2)) {
    func_0x00010ae02ecc(0,**(undefined4 **)(param_1 + 0x1e8));
    ppuVar13 = &PTR_PTR_1133038b0;
    ppuVar12 = ppuVar13;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar6 = (long *)0x0;
    if (ppuVar12 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar12[0x13],ppuVar12[0xf],
                    ppuVar12 + 0x14,0x400);
      puStack_918 = puStack_890;
      uStack_910 = uStack_888;
      puStack_900 = puStack_8a8;
      uStack_8f8 = uStack_8a0;
      uStack_908 = uStack_880;
      if (iStack_878 != 0) {
        puStack_918 = &UNK_10f6c352e;
        uStack_910 = 0x10;
        puStack_900 = &UNK_10f6c352e;
        uStack_8f8 = 0x10;
        uStack_908 = 0;
        uStack_898 = 0;
      }
      puVar28 = ppuVar12[0x12];
      puVar24 = ppuVar12[0xb];
      uVar11 = 0;
      _clock_gettime_nsec_np();
      uVar15 = uVar11;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar12 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar12 + 0xe);
      uStack_8c0 = uVar15 & 0xffffffff;
      ppuStack_8b0 = ppuVar12 + 0x10;
      plVar6 = (long *)*ppuVar12;
      ppuVar13 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar24;
      puStack_8d8 = puVar28;
      uStack_8d0 = (ulong)(puVar28 != (undefined *)0x0);
      uStack_8c8 = uVar11;
      FUN_10ae0784c(plVar6,ppuVar13,&puStack_900,&puStack_918);
    }
    iVar22 = (int)ppuVar13;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
      ___stack_chk_fail();
      if (iVar22 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(plVar6);
      return plVar6;
    }
    return plVar6;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_d0,*param_2,param_2[1]);
  }
  else {
    lStack_c8 = param_2[1];
    plStack_d0 = (long *)*param_2;
    uStack_c0 = param_2[2];
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_b8,*param_3,param_3[1]);
  }
  else {
    lStack_b0 = param_3[1];
    plStack_b8 = (long *)*param_3;
    uStack_a8 = param_3[2];
  }
  plStack_98 = (long *)param_5[1];
  lStack_a0 = *param_5;
  if (param_5[1] != 0) {
    plVar6 = (long *)(param_5[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)0x18;
  __Znwm();
  puVar7 = (undefined8 *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar7 = param_2;
  }
  puVar1 = (undefined8 *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    puVar1 = param_3;
  }
  *plVar6 = (long)puVar7;
  plVar6[1] = (long)puVar1;
  plVar6[2] = 0;
  FUN_10a86e53c();
  *(int *)(plVar6 + 2) = (int)param_4;
  uStack_d8 = 1;
  puVar7 = (undefined8 *)0x10;
  plStack_e0 = plVar6;
  __Znwm();
  FUN_10a8a41a8(&uStack_f8,param_1 + 0x18);
  if ((long *)CONCAT44(uStack_f4,uStack_f8) == (long *)0x0) {
    pplVar14 = &plStack_88;
  }
  else {
    plStack_80 = plStack_f0;
    pplVar14 = (long **)&uStack_f8;
    plStack_88 = (long *)CONCAT44(uStack_f4,uStack_f8);
  }
  *pplVar14 = (long *)0x0;
  pplVar14[1] = (long *)0x0;
  plVar25 = plStack_80;
  if (plStack_80 == (long *)0x0) {
    *puVar7 = plStack_88;
    puVar7[1] = 0;
  }
  else {
    plVar8 = plStack_80 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *puVar7 = plStack_88;
    puVar7[1] = plStack_80;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    plVar8 = plVar25 + 1;
    do {
      lVar16 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  if (plStack_f0 != (long *)0x0) {
    plVar25 = plStack_f0 + 1;
    do {
      lVar16 = *plVar25;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
    }
  }
  plVar8 = *(long **)(param_1 + 0x368);
  (**(code **)(*plVar8 + 0x70))(plVar8,&plStack_e0,FUN_10a866e74,FUN_10a868058,puVar7);
  uStack_f8 = 0x19;
  uVar2 = *param_6;
  plVar25 = (long *)param_6[1];
  if (plVar25 != (long *)0x0) {
    plVar26 = plVar25 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *plVar26 = *plVar26 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar16 = *(long *)(param_1 + 0x3a8);
  plStack_f0 = (long *)uVar2;
  plStack_e8 = plVar25;
  if ((long)uStack_c0 < 0) {
    func_0x000107c3192c(&plStack_140,plStack_d0,lStack_c8);
  }
  else {
    lStack_138 = lStack_c8;
    plStack_140 = plStack_d0;
    uStack_130 = uStack_c0;
  }
  if ((long)uStack_a8 < 0) {
    func_0x000107c3192c(&plStack_128,plStack_b8,lStack_b0);
  }
  else {
    lStack_120 = lStack_b0;
    plStack_128 = plStack_b8;
    uStack_118 = uStack_a8;
  }
  plStack_108 = plStack_98;
  lStack_110 = lStack_a0;
  if (plStack_98 != (long *)0x0) {
    plVar26 = plStack_98 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *plVar26 = *plVar26 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_158 = 0x19;
  if (plVar25 != (long *)0x0) {
    plVar26 = plVar25 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *plVar26 = *plVar26 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar26 = (long *)(lVar16 + 0xf0);
  iVar22 = (int)plVar8;
  plVar27 = (long *)(long)iVar22;
  plVar29 = *(long **)(lVar16 + 0xf8);
  uStack_150 = uVar2;
  plStack_148 = plVar25;
  iStack_8c = iVar22;
  if (plVar29 != (long *)0x0) {
    uVar15 = (long)plVar29 - 1;
    if (((ulong)plVar29 & uVar15) == 0) {
      plVar25 = (long *)(uVar15 & (ulong)plVar27);
    }
    else {
      plVar25 = plVar27;
      if (plVar29 <= plVar27) {
        uVar11 = 0;
        if (plVar29 != (long *)0x0) {
          uVar11 = (ulong)plVar27 / (ulong)plVar29;
        }
        plVar25 = (long *)((long)plVar27 - uVar11 * (long)plVar29);
      }
    }
    puVar7 = *(undefined8 **)(*plVar26 + (long)plVar25 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar23 = (long *)*puVar7; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
        plVar17 = (long *)plVar23[1];
        if (plVar17 == plVar27) {
          if ((int)plVar23[2] == iVar22) goto LAB_10a870c48;
        }
        else {
          if (((ulong)plVar29 & uVar15) == 0) {
            plVar17 = (long *)((ulong)plVar17 & uVar15);
          }
          else if (plVar29 <= plVar17) {
            uVar11 = 0;
            if (plVar29 != (long *)0x0) {
              uVar11 = (ulong)plVar17 / (ulong)plVar29;
            }
            plVar17 = (long *)((long)plVar17 - uVar11 * (long)plVar29);
          }
          if (plVar17 != plVar25) break;
        }
      }
    }
  }
  plVar23 = (long *)0x58;
  __Znwm();
  uStack_78 = 1;
  *plVar23 = 0;
  plVar23[1] = (long)plVar27;
  *(int *)(plVar23 + 2) = iVar22;
  plVar23[4] = 0;
  plVar23[3] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  fVar30 = (float)(*(long *)(lVar16 + 0x108) + 1);
  plStack_88 = plVar23;
  plStack_80 = plVar26;
  if ((plVar29 == (long *)0x0) || (*(float *)(lVar16 + 0x110) * (float)plVar29 < fVar30)) {
    uVar15 = 1;
    if ((long *)0x2 < plVar29) {
      uVar15 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
    }
    plVar25 = (long *)(uVar15 | (long)plVar29 << 1);
    plVar17 = (long *)(long)(fVar30 / *(float *)(lVar16 + 0x110));
    if (plVar25 <= plVar17) {
      plVar25 = plVar17;
    }
    if ((long)plVar25 - 1U == 0) {
      plVar25 = (long *)0x2;
    }
    else if (((ulong)plVar25 & (long)plVar25 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar29 = *(long **)(lVar16 + 0xf8);
    }
    if (plVar29 < plVar25) {
LAB_10a870a5c:
      if ((ulong)plVar25 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a870e90);
        (*pcVar5)();
      }
      lVar9 = (long)plVar25 << 3;
      __Znwm();
      lVar10 = *plVar26;
      *plVar26 = lVar9;
      if (lVar10 != 0) {
        __ZdlPv();
      }
      plVar29 = (long *)0x0;
      *(long **)(lVar16 + 0xf8) = plVar25;
      do {
        *(undefined8 *)(*plVar26 + (long)plVar29 * 8) = 0;
        plVar29 = (long *)((long)plVar29 + 1);
      } while (plVar25 != plVar29);
      plVar17 = *(long **)(lVar16 + 0x100);
      plVar29 = plVar25;
      if (plVar17 != (long *)0x0) {
        plVar18 = (long *)plVar17[1];
        uVar15 = (long)plVar25 - 1;
        if (((ulong)plVar25 & uVar15) == 0) {
          plVar18 = (long *)((ulong)plVar18 & uVar15);
        }
        else if (plVar25 <= plVar18) {
          uVar11 = 0;
          if (plVar25 != (long *)0x0) {
            uVar11 = (ulong)plVar18 / (ulong)plVar25;
          }
          plVar18 = (long *)((long)plVar18 - uVar11 * (long)plVar25);
        }
        *(long *)(*plVar26 + (long)plVar18 * 8) = lVar16 + 0x100;
        plVar19 = (long *)*plVar17;
        while (plVar19 != (long *)0x0) {
          plVar21 = (long *)plVar19[1];
          if (((ulong)plVar25 & uVar15) == 0) {
            plVar21 = (long *)((ulong)plVar21 & uVar15);
          }
          else if (plVar25 <= plVar21) {
            uVar11 = 0;
            if (plVar25 != (long *)0x0) {
              uVar11 = (ulong)plVar21 / (ulong)plVar25;
            }
            plVar21 = (long *)((long)plVar21 - uVar11 * (long)plVar25);
          }
          plVar20 = plVar19;
          if (plVar21 != plVar18) {
            lVar9 = *plVar26;
            if (*(long *)(lVar9 + (long)plVar21 * 8) == 0) {
              *(long **)(lVar9 + (long)plVar21 * 8) = plVar17;
              plVar18 = plVar21;
            }
            else {
              *plVar17 = *plVar19;
              *plVar19 = **(undefined8 **)(lVar9 + (long)plVar21 * 8);
              **(long **)(lVar9 + (long)plVar21 * 8) = (long)plVar19;
              plVar20 = plVar17;
            }
          }
          plVar17 = plVar20;
          plVar19 = (long *)*plVar20;
        }
      }
    }
    else if (plVar25 < plVar29) {
      plVar17 = (long *)(long)((float)*(ulong *)(lVar16 + 0x108) / *(float *)(lVar16 + 0x110));
      if ((plVar29 < (long *)0x3) || (((ulong)plVar29 & (long)plVar29 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar17) {
        plVar17 = (long *)(1L << (-LZCOUNT((long)plVar17 - 1) & 0x3fU));
      }
      if (plVar25 <= plVar17) {
        plVar25 = plVar17;
      }
      if (plVar25 < plVar29) {
        if (plVar25 != (long *)0x0) goto LAB_10a870a5c;
        lVar9 = *plVar26;
        *plVar26 = 0;
        if (lVar9 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(lVar16 + 0xf8) = 0;
        plVar29 = (long *)0x0;
      }
      else {
        plVar29 = *(long **)(lVar16 + 0xf8);
      }
    }
    if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
      plVar25 = (long *)((long)plVar29 - 1U & (ulong)plVar27);
    }
    else {
      plVar25 = plVar27;
      if (plVar29 <= plVar27) {
        uVar15 = 0;
        if (plVar29 != (long *)0x0) {
          uVar15 = (ulong)plVar27 / (ulong)plVar29;
        }
        plVar25 = (long *)((long)plVar27 - uVar15 * (long)plVar29);
      }
    }
  }
  lVar9 = *plVar26;
  plVar27 = *(long **)(lVar9 + (long)plVar25 * 8);
  if (plVar27 == (long *)0x0) {
    *plVar23 = *(long *)(lVar16 + 0x100);
    *(long **)(lVar16 + 0x100) = plVar23;
    *(long *)(lVar9 + (long)plVar25 * 8) = lVar16 + 0x100;
    if (*plVar23 == 0) goto LAB_10a870c3c;
    plVar25 = *(long **)(*plVar23 + 8);
    if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
      plVar25 = (long *)((ulong)plVar25 & (long)plVar29 - 1U);
    }
    else if (plVar29 <= plVar25) {
      uVar15 = 0;
      if (plVar29 != (long *)0x0) {
        uVar15 = (ulong)plVar25 / (ulong)plVar29;
      }
      plVar25 = (long *)((long)plVar25 - uVar15 * (long)plVar29);
    }
    plVar27 = (long *)(*plVar26 + (long)plVar25 * 8);
  }
  else {
    *plVar23 = *plVar27;
  }
  *plVar27 = (long)plVar23;
LAB_10a870c3c:
  *(long *)(lVar16 + 0x108) = *(long *)(lVar16 + 0x108) + 1;
LAB_10a870c48:
  if (*(char *)((long)plVar23 + 0x2f) < '\0') {
    __ZdlPv(plVar23[3]);
  }
  plVar23[4] = lStack_138;
  plVar23[3] = (long)plStack_140;
  plVar23[5] = uStack_130;
  uStack_130 = uStack_130 & 0xffffffffffffff;
  plStack_140 = (long *)((ulong)plStack_140 & 0xffffffffffffff00);
  if (*(char *)((long)plVar23 + 0x47) < '\0') {
    __ZdlPv(plVar23[6]);
  }
  plVar25 = plStack_108;
  lVar9 = lStack_110;
  plVar23[7] = lStack_120;
  plVar23[6] = (long)plStack_128;
  plVar23[8] = uStack_118;
  uStack_118 = uStack_118 & 0xffffffffffffff;
  plStack_128 = (long *)((ulong)plStack_128 & 0xffffffffffffff00);
  lStack_110 = 0;
  plStack_108 = (long *)0x0;
  plVar26 = (long *)plVar23[10];
  plVar23[10] = (long)plVar25;
  plVar23[9] = lVar9;
  if (plVar26 != (long *)0x0) {
    plVar25 = plVar26 + 1;
    do {
      lVar9 = *plVar25;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  lVar16 = lVar16 + 0x140;
  FUN_10a87f4f0(lVar16,plVar8,&iStack_8c);
  *(undefined4 *)(lVar16 + 0x18) = uStack_158;
  FUN_10a03c06c(lVar16 + 0x20,&uStack_150);
  plVar25 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar8 = plStack_148 + 1;
    do {
      lVar16 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar8 = plStack_108 + 1;
    do {
      lVar16 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  if ((long)uStack_118 < 0) {
    __ZdlPv(plStack_128);
  }
  if ((long)uStack_130 < 0) {
    __ZdlPv(plStack_140);
  }
  plVar25 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar8 = plStack_e8 + 1;
    do {
      lVar16 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  __ZdlPv(plVar6);
  plVar25 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar8 = plStack_98 + 1;
    do {
      lVar16 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      plVar6 = plVar25;
    }
  }
  if ((long)uStack_a8 < 0) {
    plVar6 = plStack_b8;
    __ZdlPv(plStack_b8);
  }
  if ((long)uStack_c0 < 0) {
    __ZdlPv(plStack_d0);
    plVar6 = plStack_d0;
  }
  return plVar6;
}



/* Entry: 10a870f34; end: 10a870f7b;  */

undefined8 * FUN_10a870f34(undefined8 *param_1)

{
  FUN_10a76b5cc(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a870f7c; end: 10a8717c7;  */

undefined **
FUN_10a870f7c(long param_1,long *param_2,long *param_3,long *param_4,long *param_5,long *param_6,
             long *param_7)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  code *pcVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined **ppuVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [720];
  code **ppcStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  code *pcStack_150;
  undefined **ppuStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 auStack_128 [2];
  char cStack_111;
  code *pcStack_110;
  undefined **ppuStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_78;
  long lStack_70;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *param_5;
  if (lVar15 == 0) {
    FUN_10a00946c(&UNK_10f67ef25);
LAB_10a871690:
    FUN_10a00946c(&UNK_10f67ef6e);
LAB_10a87169c:
    FUN_10a00946c(&UNK_10f67ef46);
LAB_10a8716a8:
    ___stack_chk_fail();
  }
  else {
    lVar17 = (long)*(char *)(lVar15 + 0x37);
    if (lVar17 < 0) {
      lVar17 = *(long *)(lVar15 + 0x28);
    }
    if (lVar17 == 0) goto LAB_10a871690;
    if (*(int *)(lVar15 + 0x1c) == 0) goto LAB_10a87169c;
    uVar14 = (ulong)*(byte *)((long)param_3 + 0x17);
    FUN_10a86d5f0(param_3[1],uVar14,*(undefined4 *)(lVar15 + 0x18));
    if ((*(long *)(param_1 + 0x368) == 0) || (**(int **)(param_1 + 0x1e8) != 2)) {
      func_0x00010ae02ecc(0,**(undefined4 **)(param_1 + 0x1e8));
      ppuVar9 = &PTR_PTR_113304b80;
      ppuVar7 = ppuVar9;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar12 = (undefined **)0x0;
        if (ppuVar7 != (undefined **)0x0) {
          FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar7[0x13],ppuVar7[0xf],
                        ppuVar7 + 0x14,0x400);
          puStack_918 = puStack_890;
          uStack_910 = uStack_888;
          puStack_900 = puStack_8a8;
          uStack_8f8 = uStack_8a0;
          uStack_908 = uStack_880;
          if (iStack_878 != 0) {
            puStack_918 = &UNK_10f6c352e;
            uStack_910 = 0x10;
            puStack_900 = &UNK_10f6c352e;
            uStack_8f8 = 0x10;
            uStack_908 = 0;
            uStack_898 = 0;
          }
          puVar20 = ppuVar7[0x12];
          puVar18 = ppuVar7[0xb];
          uVar11 = 0;
          _clock_gettime_nsec_np();
          uVar14 = uVar11;
          _pthread_self();
          _pthread_mach_thread_np();
          ppuStack_8e8 = ppuVar7 + 1;
          uStack_8b8 = *(undefined4 *)(ppuVar7 + 0xe);
          uStack_8c0 = uVar14 & 0xffffffff;
          ppuStack_8b0 = ppuVar7 + 0x10;
          ppuVar12 = (undefined **)*ppuVar7;
          ppuVar9 = (undefined **)&ppuStack_8e8;
          uStack_8f0 = uStack_898;
          puStack_8e0 = puVar18;
          puStack_8d8 = puVar20;
          uStack_8d0 = (ulong)(puVar20 != (undefined *)0x0);
          uStack_8c8 = uVar11;
          FUN_10ae0784c(ppuVar12,ppuVar9,&puStack_900,&puStack_918);
        }
        iVar13 = (int)ppuVar9;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
          ___stack_chk_fail();
          if (iVar13 == 0) {
            __Unwind_Resume();
          }
          func_0x000104bd46a0();
          func_0x00010ae087bc();
          FUN_10ae07e54(ppuVar12);
          return ppuVar12;
        }
        return ppuVar12;
      }
      goto LAB_10a8716a8;
    }
    lVar15 = *(long *)(param_1 + 0x350);
    pcVar5 = (code *)*param_4;
    ppuVar9 = (undefined **)param_4[1];
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar7 = ppuVar9 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar3) {
          *ppuVar7 = *ppuVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_150 = pcVar5;
    ppuStack_148 = ppuVar9;
    if ((lVar15 != 0) && (pcVar5 != (code *)0x0)) {
      pcStack_140 = (code *)0x0;
      ppuStack_138 = (undefined **)0x0;
      pcVar6 = pcVar5;
      (**(code **)(*(long *)pcVar5 + 0x38))();
      ppuVar7 = ppuStack_138;
      if ((uVar14 == 0x13) &&
         ((*(long *)pcVar6 == 0x75522e7465737341 && *(long *)(pcVar6 + 8) == 0x6e7542656d69746e) &&
          *(long *)(pcVar6 + 0xb) == 0x656c646e7542656d)) {
        pcStack_140 = pcVar5;
        if (ppuVar9 != (undefined **)0x0) {
          ppuVar12 = ppuVar9 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar3) {
              *ppuVar12 = *ppuVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar3) {
              *ppuVar12 = *ppuVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          ppuVar4 = ppuVar9;
          if (ppuStack_138 != (undefined **)0x0) {
            plVar8 = (long *)(ppuStack_138 + 1);
            do {
              lVar15 = *plVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = lVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar15 == 0) {
              lVar15 = (long)*ppuStack_138;
              ppuStack_138 = ppuVar9;
              (**(code **)(lVar15 + 0x10))(ppuVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
              ppuVar4 = ppuStack_138;
            }
          }
          do {
            ppuStack_138 = ppuVar4;
            puVar18 = *ppuVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar3) {
              *ppuVar12 = puVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            ppuVar4 = ppuStack_138;
          } while (cVar2 != '\0');
joined_r0x00010a871118:
          if (puVar18 == (undefined *)0x0) {
            (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
          }
          goto LAB_10a871134;
        }
        ppuStack_138 = (undefined **)0x0;
      }
      else {
        FUN_10a76dec8(&pcStack_c0,*(undefined8 *)(*(long *)(lVar15 + 0x888) + 0x40),pcVar5);
        ppuVar7 = ppuStack_b8;
        pcStack_140 = pcStack_c0;
        ppuVar9 = ppuStack_138;
        pcStack_c0 = (code *)0x0;
        ppuStack_b8 = (undefined **)0x0;
        ppuStack_138 = ppuVar7;
        if (ppuVar9 != (undefined **)0x0) {
          plVar8 = (long *)(ppuVar9 + 1);
          do {
            lVar15 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar15 == 0) {
            (**(code **)((long)*ppuVar9 + 0x10))(ppuVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
          }
        }
        if (ppuStack_b8 != (undefined **)0x0) {
          ppuVar7 = ppuStack_b8 + 1;
          do {
            puVar18 = *ppuVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar3) {
              *ppuVar7 = puVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            ppuVar9 = ppuStack_b8;
          } while (cVar2 != '\0');
          goto joined_r0x00010a871118;
        }
LAB_10a871134:
        ppuVar9 = ppuStack_148;
        if (pcStack_140 == (code *)0x0) {
          FUN_10a00946c(&UNK_10f67f396);
          goto LAB_10a8716c8;
        }
        if (ppuStack_148 != (undefined **)0x0) {
          ppuVar7 = ppuStack_148 + 1;
          do {
            puVar18 = *ppuVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar3) {
              *ppuVar7 = puVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar18 == (undefined *)0x0) {
            (**(code **)(*ppuStack_148 + 0x10))(ppuStack_148);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
          }
        }
      }
      ppuVar7 = (undefined **)0x88;
      __Znwm();
      ppuVar12 = ppuVar7 + 1;
      *ppuVar12 = (undefined *)0x0;
      ppuVar7[2] = (undefined *)0x0;
      *ppuVar7 = (undefined *)&PTR_FUN_110c24e70;
      ppuVar9 = ppuVar7 + 3;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(ppuVar9,*param_2,param_2[1]);
      }
      else {
        puVar18 = (undefined *)*param_2;
        ppuVar7[4] = (undefined *)param_2[1];
        *ppuVar9 = puVar18;
        ppuVar7[5] = (undefined *)param_2[2];
      }
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(ppuVar7 + 6,*param_3,param_3[1]);
      }
      else {
        puVar18 = (undefined *)*param_3;
        ppuVar7[7] = (undefined *)param_3[1];
        ppuVar7[6] = puVar18;
        ppuVar7[8] = (undefined *)param_3[2];
      }
      lVar15 = *param_5;
      puVar18 = (undefined *)NEON_rev64(*(undefined8 *)(lVar15 + 0x18),4);
      ppuVar7[9] = puVar18;
      if (*(char *)(lVar15 + 0x37) < '\0') {
        func_0x000107c3192c(ppuVar7 + 10,*(undefined8 *)(lVar15 + 0x20),
                            *(undefined8 *)(lVar15 + 0x28));
      }
      else {
        puVar20 = *(undefined **)(lVar15 + 0x28);
        puVar18 = *(undefined **)(lVar15 + 0x20);
        ppuVar7[0xc] = *(undefined **)(lVar15 + 0x30);
        ppuVar7[0xb] = puVar20;
        ppuVar7[10] = puVar18;
      }
      ppuVar4 = ppuStack_138;
      lVar15 = param_6[1];
      puVar18 = (undefined *)*param_6;
      ppuVar7[0xe] = (undefined *)param_6[1];
      ppuVar7[0xd] = puVar18;
      if (lVar15 != 0) {
        plVar8 = (long *)(lVar15 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar15 = param_7[1];
      puVar18 = (undefined *)*param_7;
      ppuVar7[0x10] = (undefined *)param_7[1];
      ppuVar7[0xf] = puVar18;
      if (lVar15 != 0) {
        plVar8 = (long *)(lVar15 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      ppuVar10 = *(undefined ***)(param_1 + 0x20);
      if (ppuVar10 == (undefined **)0x0) {
        ppuStack_178 = (undefined **)0x0;
        ppuVar16 = ppuVar12;
      }
      else {
        ppuVar16 = ppuVar10 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar3) {
            *ppuVar16 = *ppuVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar3) {
            *ppuVar16 = *ppuVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar3) {
            *ppuVar12 = *ppuVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          ppuStack_178 = ppuVar10;
        } while (cVar2 != '\0');
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar3) {
          *ppuVar16 = *ppuVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x350) + 0x888);
      ppuStack_108 = ppuStack_138;
      pcStack_110 = pcStack_140;
      if (ppuStack_138 != (undefined **)0x0) {
        ppuVar16 = ppuStack_138 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar3) {
            *ppuVar16 = *ppuVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_180 = uVar1;
      ppuStack_170 = ppuVar9;
      ppuStack_168 = ppuVar7;
      ppuStack_160 = ppuVar9;
      ppuStack_158 = ppuVar7;
      func_0x000107c2b054(auStack_128,&UNK_10f67d9eb);
      plVar8 = *(long **)(param_1 + 0x378);
      (**(code **)(*plVar8 + 0x48))();
      pcStack_c0 = FUN_10a8800e0;
      ppuStack_b8 = &PTR_FUN_110c24138;
      ppuStack_a8 = ppuStack_178;
      if (ppuStack_178 != (undefined **)0x0) {
        ppuVar9 = ppuStack_178 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
          if (bVar3) {
            *ppuVar9 = *ppuVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppuStack_a0 = ppuStack_170;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar3) {
          *ppuVar12 = *ppuVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pcStack_100 = FUN_10a880bbc;
      ppuStack_f8 = &PTR_FUN_110c24150;
      ppcStack_1a0 = &pcStack_100;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar9 = ppuVar10 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
          if (bVar3) {
            *ppuVar9 = *ppuVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_f0 = uVar1;
      ppuStack_e8 = ppuVar10;
      uStack_b0 = uVar1;
      ppuStack_98 = ppuVar7;
      FUN_10a770218(&uStack_198,uVar19,&pcStack_110,param_1 + 0x408,auStack_128,plVar8,1,5,
                    &pcStack_c0);
      (*(code *)*ppuStack_f8)(&ppuStack_f8);
      (*(code *)*ppuStack_b8)(&ppuStack_b8);
      if (cStack_111 < '\0') {
        __ZdlPv(auStack_128[0]);
      }
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar9 = ppuVar4 + 1;
        do {
          puVar18 = *ppuVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
          if (bVar3) {
            *ppuVar9 = puVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
        }
      }
      if (-1 < (char)bStack_181) {
        uStack_190 = (ulong)bStack_181;
      }
      if (uStack_190 == 0) {
        ppuVar9 = &PTR_PTR_113305848;
        FUN_10ae079a0(0,&PTR_PTR_113305848);
        FUN_10ae07cd4(ppuVar9,&PTR_PTR_113305848);
        if ((char)bStack_181 < '\0') goto LAB_10a871674;
      }
      else if (((uint)(int)(char)bStack_181 >> 7 & 1) != 0) {
LAB_10a871674:
        __ZdlPv(uStack_198);
      }
      if (ppuVar10 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
      }
      ppuVar9 = ppuStack_168;
      if (ppuStack_168 != (undefined **)0x0) {
        ppuVar7 = ppuStack_168 + 1;
        do {
          puVar18 = *ppuVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar3) {
            *ppuVar7 = puVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuStack_168 + 0x10))(ppuStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
        }
      }
      ppuVar9 = ppuStack_178;
      if (ppuStack_178 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (ppuVar10 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        ppuVar9 = ppuVar10;
      }
      ppuVar7 = ppuStack_158;
      if (ppuStack_158 != (undefined **)0x0) {
        ppuVar12 = ppuStack_158 + 1;
        do {
          puVar18 = *ppuVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar3) {
            *ppuVar12 = puVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuStack_158 + 0x10))(ppuStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
          ppuVar9 = ppuVar7;
        }
      }
      ppuVar7 = ppuStack_138;
      if (ppuStack_138 != (undefined **)0x0) {
        ppuVar12 = ppuStack_138 + 1;
        do {
          puVar18 = *ppuVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar3) {
            *ppuVar12 = puVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
          ppuVar9 = ppuVar7;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return ppuVar9;
      }
      goto LAB_10a8716a8;
    }
  }
  FUN_10a00946c(&UNK_10f67f34b);
LAB_10a8716c8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8716cc);
  (*pcVar5)();
}



/* Entry: 10a8717c8; end: 10a871853;  */

long FUN_10a8717c8(long param_1)

{
  func_0x00010a8717fc(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a871854; end: 10a871eab;  */

long * FUN_10a871854(long param_1,ulong *param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 *param_5,undefined8 *param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [792];
  undefined4 auStack_158 [2];
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined6 uStack_f8;
  undefined2 uStack_f2;
  undefined6 uStack_f0;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined4 uStack_74;
  long lStack_70;
  
  uStack_74 = (undefined4)param_4;
  FUN_10a86d5f0(param_3[1],*(undefined1 *)((long)param_3 + 0x17),param_4);
  if ((*(long *)(param_1 + 0x368) == 0) || (**(int **)(param_1 + 0x1e8) != 2)) {
    func_0x00010ae02ecc(0,**(undefined4 **)(param_1 + 0x1e8));
    ppuVar12 = &PTR_PTR_113304fe8;
    ppuVar11 = ppuVar12;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar8 = (long *)0x0;
    if (ppuVar11 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar11[0x13],ppuVar11[0xf],
                    ppuVar11 + 0x14,0x400);
      puStack_918 = puStack_890;
      uStack_910 = uStack_888;
      puStack_900 = puStack_8a8;
      uStack_8f8 = uStack_8a0;
      uStack_908 = uStack_880;
      if (iStack_878 != 0) {
        puStack_918 = &UNK_10f6c352e;
        uStack_910 = 0x10;
        puStack_900 = &UNK_10f6c352e;
        uStack_8f8 = 0x10;
        uStack_908 = 0;
        uStack_898 = 0;
      }
      puVar19 = ppuVar11[0x12];
      puVar18 = ppuVar11[0xb];
      uVar17 = 0;
      _clock_gettime_nsec_np();
      uVar15 = uVar17;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar11 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar11 + 0xe);
      uStack_8c0 = uVar15 & 0xffffffff;
      ppuStack_8b0 = ppuVar11 + 0x10;
      plVar8 = (long *)*ppuVar11;
      ppuVar12 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar18;
      puStack_8d8 = puVar19;
      uStack_8d0 = (ulong)(puVar19 != (undefined *)0x0);
      uStack_8c8 = uVar17;
      FUN_10ae0784c(plVar8,ppuVar12,&puStack_900,&puStack_918);
    }
    iVar13 = (int)ppuVar12;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
      ___stack_chk_fail();
      if (iVar13 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(plVar8);
      return plVar8;
    }
    return plVar8;
  }
  FUN_10a86e114(param_1 + 0x2d8,2);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_c0,*param_2,param_2[1]);
  }
  else {
    uStack_b8 = param_2[1];
    plStack_c0 = (long *)*param_2;
    uStack_b0 = param_2[2];
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_a8,*param_3,param_3[1]);
  }
  else {
    uStack_a0 = param_3[1];
    plStack_a8 = (long *)*param_3;
    lStack_98 = param_3[2];
  }
  plStack_88 = (long *)param_5[1];
  uStack_90 = *param_5;
  if (param_5[1] != 0) {
    plVar8 = (long *)(param_5[1] + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = *plVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar8 = (long *)0x18;
  __Znwm();
  puVar3 = (ulong *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar3 = param_2;
  }
  puVar2 = (undefined8 *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    puVar2 = param_3;
  }
  *plVar8 = (long)puVar3;
  plVar8[1] = (long)puVar2;
  plVar8[2] = 0;
  FUN_10a86e53c();
  *(int *)(plVar8 + 2) = (int)param_4;
  uStack_c8 = 1;
  plVar9 = (long *)0x10;
  plStack_d0 = plVar8;
  __Znwm();
  FUN_10a8a41a8(&lStack_e0,param_1 + 0x18);
  if (lStack_e0 == 0) {
    plVar10 = &uStack_100;
  }
  else {
    uStack_100 = lStack_e0;
    uStack_f8 = SUB86(plStack_d8,0);
    uStack_f2 = (undefined2)((ulong)plStack_d8 >> 0x30);
    plVar10 = &lStack_e0;
  }
  *plVar10 = 0;
  plVar10[1] = 0;
  plVar10 = (long *)CONCAT26(uStack_f2,uStack_f8);
  if (plVar10 == (long *)0x0) {
    *plVar9 = uStack_100;
    plVar9[1] = 0;
  }
  else {
    plVar1 = plVar10 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    *plVar9 = uStack_100;
    plVar9[1] = (long)plVar10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    plVar1 = plVar10 + 1;
    do {
      lVar16 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar10 = plStack_d8 + 1;
    do {
      lVar16 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  plVar10 = *(long **)(param_1 + 0x368);
  (**(code **)(*plVar10 + 0x68))(plVar10,&plStack_d0,FUN_10a867f2c,FUN_10a868058,plVar9);
  FUN_10a8a41e8();
  ppuVar12 = &PTR_PTR_113304b00;
  FUN_10ae079a0();
  func_0x00010a8a425c();
  FUN_10ae07cd4(ppuVar12,&PTR_PTR_113304b00);
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar15 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar15 = (ulong)bVar5;
  }
  if (uVar15 != 0x16) {
    uVar14 = 0x19;
    goto LAB_10a871bf4;
  }
  puVar3 = (ulong *)*param_2;
  if (-1 < (char)bVar5) {
    puVar3 = param_2;
  }
  uVar15 = (*puVar3 & 0xff00ff00ff00ff00) >> 8 | (*puVar3 & 0xff00ff00ff00ff) << 8;
  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
  uVar17 = 0x5055424c49435f55;
  if (uVar15 == 0x5055424c49435f55) {
    uVar15 = (puVar3[1] & 0xff00ff00ff00ff00) >> 8 | (puVar3[1] & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
    uVar17 = 0x5345525f434f4c4c;
    if (uVar15 != 0x5345525f434f4c4c) goto LAB_10a871bd8;
    uVar15 = (*(ulong *)((long)puVar3 + 0xe) & 0xff00ff00ff00ff00) >> 8 |
             (*(ulong *)((long)puVar3 + 0xe) & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
    uVar17 = 0x4c4c454354494f4e;
    if (uVar15 != 0x4c4c454354494f4e) goto LAB_10a871bd8;
    iVar13 = 0;
  }
  else {
LAB_10a871bd8:
    iVar13 = 1;
    if (uVar15 < uVar17) {
      iVar13 = -1;
    }
  }
  uVar14 = 100;
  if (iVar13 != 0) {
    uVar14 = 0x19;
  }
LAB_10a871bf4:
  uStack_100 = CONCAT44(0x555f4349,uVar14);
  uVar4 = *param_6;
  plVar9 = (long *)param_6[1];
  uStack_f8 = (undefined6)uVar4;
  uStack_f2 = (undefined2)((ulong)uVar4 >> 0x30);
  uStack_f0 = SUB86(plVar9,0);
  uStack_ea = (undefined1)((ulong)plVar9 >> 0x30);
  uStack_e9 = (undefined1)((ulong)plVar9 >> 0x38);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar16 = *(long *)(param_1 + 0x3a8);
  if ((long)uStack_b0 < 0) {
    func_0x000107c3192c(&plStack_140,plStack_c0,uStack_b8);
  }
  else {
    uStack_138 = uStack_b8;
    plStack_140 = plStack_c0;
    uStack_130 = uStack_b0;
  }
  if (lStack_98 < 0) {
    func_0x000107c3192c(&plStack_128,plStack_a8,uStack_a0);
  }
  else {
    uStack_120 = uStack_a0;
    plStack_128 = plStack_a8;
    lStack_118 = lStack_98;
  }
  plStack_108 = plStack_88;
  uStack_110 = uStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  auStack_158[0] = uVar14;
  uStack_150 = uVar4;
  plStack_148 = plVar9;
  FUN_10a87fb50(lVar16,plVar10,lVar16 + 200,&plStack_140,auStack_158);
  plVar9 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar10 = plStack_148 + 1;
    do {
      lVar16 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar10 = plStack_108 + 1;
    do {
      lVar16 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (lStack_118 < 0) {
    __ZdlPv(plStack_128);
  }
  if ((long)uStack_130 < 0) {
    __ZdlPv(plStack_140);
  }
  plVar9 = (long *)CONCAT17(uStack_e9,CONCAT16(uStack_ea,uStack_f0));
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 1;
    do {
      lVar16 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  __ZdlPv(plVar8);
  plVar9 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar10 = plStack_88 + 1;
    do {
      lVar16 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      plVar8 = plVar9;
    }
  }
  if (lStack_98 < 0) {
    plVar8 = plStack_a8;
    __ZdlPv(plStack_a8);
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(plStack_c0);
    plVar8 = plStack_c0;
  }
  return plVar8;
}



/* Entry: 10a871eac; end: 10a871f2f;  */

void FUN_10a871eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_40;
  undefined6 uStack_38;
  undefined2 uStack_32;
  undefined6 uStack_30;
  short sStack_2a;
  
  uStack_38 = 0x4f435f524553;
  uStack_40 = 0x555f43494c425550;
  uStack_32 = 0x4c4c;
  uStack_30 = 0x4e4f49544345;
  sStack_2a = 0x1600;
  FUN_10a871854(param_1,&uStack_40,param_2,param_3,param_4,param_5);
  if (sStack_2a < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a871f30; end: 10a8726e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a87233c) */
/* WARNING: Removing unreachable block (ram,0x00010a872264) */
/* WARNING: Removing unreachable block (ram,0x00010a872234) */
/* WARNING: Removing unreachable block (ram,0x00010a872244) */
/* WARNING: Removing unreachable block (ram,0x00010a872274) */
/* WARNING: Removing unreachable block (ram,0x00010a87255c) */

void FUN_10a871f30(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined3 uStack_1b4;
  char cStack_1b1;
  undefined8 ***pppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  undefined8 ***pppuStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined8 ***pppuStack_180;
  ulong uStack_178;
  byte bStack_169;
  undefined8 auStack_168 [2];
  char cStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((*(long *)(param_1 + 0x350) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x350) + 0x100), lVar8 == 0)) {
    puVar7 = (undefined8 *)(param_1 + 0x200);
  }
  else {
    puVar7 = (undefined8 *)(lVar8 + 0x208);
  }
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_70,*puVar7,puVar7[1]);
  }
  else {
    uStack_68 = puVar7[1];
    uStack_70 = *puVar7;
    uStack_60 = puVar7[2];
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_168,&UNK_10f67ef90,&uStack_70);
  puVar7 = auStack_168;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f67ef93,4);
  uStack_148 = puVar7[1];
  uStack_150 = *puVar7;
  lStack_140 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  uVar2 = *(ulong *)(param_1 + 600);
  lVar8 = *(long *)(param_1 + 0x250);
  if (-1 < (char)*(byte *)(param_1 + 0x267)) {
    uVar2 = (ulong)*(byte *)(param_1 + 0x267);
    lVar8 = param_1 + 0x250;
  }
  puVar7 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,lVar8,uVar2);
  uStack_128 = puVar7[1];
  uStack_130 = *puVar7;
  lStack_120 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f67ef98,3);
  uStack_108 = puVar7[1];
  uStack_110 = *puVar7;
  lStack_100 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEi(&pppuStack_180,*(undefined4 *)(param_1 + 0x2d0));
  ppppuVar6 = (undefined8 ****)pppuStack_180;
  if (-1 < (char)bStack_169) {
    uStack_178 = (ulong)bStack_169;
    ppppuVar6 = &pppuStack_180;
  }
  puVar7 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppppuVar6,uStack_178);
  uStack_e8 = puVar7[1];
  uStack_f0 = *puVar7;
  uStack_e0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f67ef9c,4);
  uStack_c8 = puVar7[1];
  uStack_d0 = *puVar7;
  uStack_c0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEi(&pppuStack_198,*(undefined4 *)(param_1 + 0x2d4));
  ppppuVar6 = (undefined8 ****)pppuStack_198;
  if (-1 < (char)bStack_181) {
    uStack_190 = (ulong)bStack_181;
    ppppuVar6 = &pppuStack_198;
  }
  puVar7 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppppuVar6,uStack_190);
  uStack_a8 = puVar7[1];
  uStack_b0 = *puVar7;
  uStack_a0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f67efa1,3);
  uStack_88 = puVar7[1];
  uStack_90 = *puVar7;
  uStack_80 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  plVar1 = (long *)(param_1 + 0x2d8);
  if (*(long *)(param_1 + 0x2f0) == 0) {
    func_0x000107c2b054(&pppuStack_1b0,&UNK_10f67f122);
  }
  else {
    FUN_10a8b1ba0(plVar1,0);
    FUN_10a8b1ba0(plVar1,1);
    FUN_10a8b1ba0(plVar1,2);
    FUN_10a8b1ba0(plVar1,3);
    FUN_10a0ee900(&pppuStack_1b0,&UNK_10f67f12e,0xb);
  }
  ppppuVar6 = (undefined8 ****)pppuStack_1b0;
  if (-1 < (char)bStack_199) {
    uStack_1a8 = (ulong)bStack_199;
    ppppuVar6 = &pppuStack_1b0;
  }
  puVar7 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppppuVar6,uStack_1a8);
  uVar3 = *puVar7;
  uVar4 = puVar7[1];
  uStack_78._0_3_ = (undefined3)*(undefined4 *)(puVar7 + 2);
  uStack_78._3_1_ = (undefined1)*(undefined4 *)((long)puVar7 + 0x13);
  uStack_74 = (undefined3)((uint)*(undefined4 *)((long)puVar7 + 0x13) >> 8);
  cVar5 = *(char *)((long)puVar7 + 0x17);
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)bStack_199 < '\0') {
    __ZdlPv(pppuStack_1b0);
  }
  if ((char)bStack_181 < '\0') {
    __ZdlPv(pppuStack_198);
  }
  if ((char)bStack_169 < '\0') {
    __ZdlPv(pppuStack_180);
  }
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if (cStack_151 < '\0') {
    __ZdlPv(auStack_168[0]);
  }
  lVar8 = *(long *)(param_1 + 0x350);
  func_0x000107c2b054(&uStack_90,&UNK_10f67efa5);
  if (cVar5 < '\0') {
    func_0x000107c3192c(&uStack_1c8,uVar3,uVar4);
  }
  else {
    uStack_1b8 = uStack_78;
    uStack_1b4 = uStack_74;
    uStack_1c8 = uVar3;
    uStack_1c0 = uVar4;
    cStack_1b1 = cVar5;
  }
  if (lVar8 != 0) {
    FUN_10a76bdb0(*(undefined8 *)(lVar8 + 0x8d8),&uStack_90,&uStack_1c8);
  }
  if (cStack_1b1 < '\0') {
    __ZdlPv(uStack_1c8);
  }
  FUN_10a860544(param_1);
  FUN_10a2b6d0c(param_1 + 0x388);
  FUN_10a8726e8(param_1 + 0x398);
  plVar10 = *(long **)(param_1 + 0x3a8);
  if (plVar10[3] != 0) {
    FUN_10a880d7c(plVar10[2]);
    plVar10[2] = 0;
    lVar8 = plVar10[1];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(*plVar10 + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    plVar10[3] = 0;
  }
  if (plVar10[8] != 0) {
    func_0x00010a880db8(plVar10[7]);
    plVar10[7] = 0;
    lVar8 = plVar10[6];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(plVar10[5] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    plVar10[8] = 0;
  }
  if (plVar10[0xd] != 0) {
    func_0x00010a880df4(plVar10[0xc]);
    plVar10[0xc] = 0;
    lVar8 = plVar10[0xb];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(plVar10[10] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    plVar10[0xd] = 0;
  }
  if (plVar10[0x12] != 0) {
    func_0x00010a880e30(plVar10[0x11]);
    plVar10[0x11] = 0;
    lVar8 = plVar10[0x10];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(plVar10[0xf] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    plVar10[0x12] = 0;
  }
  func_0x00010a880e6c(plVar10 + 0x14);
  func_0x00010a880e6c(plVar10 + 0x19);
  if (plVar10[0x21] != 0) {
    func_0x00010a880efc(plVar10[0x20]);
    plVar10[0x20] = 0;
    lVar8 = plVar10[0x1f];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(plVar10[0x1e] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    plVar10[0x21] = 0;
  }
  func_0x00010a880e6c(plVar10 + 0x23);
  if (plVar10[0x2b] != 0) {
    func_0x00010a880f38(plVar10[0x2a]);
    plVar10[0x2a] = 0;
    lVar8 = plVar10[0x29];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(plVar10[0x28] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    plVar10[0x2b] = 0;
  }
  if (plVar10[0x30] != 0) {
    func_0x00010a880f74(plVar10[0x2f]);
    plVar10[0x2f] = 0;
    lVar8 = plVar10[0x2e];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(plVar10[0x2d] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    plVar10[0x30] = 0;
  }
  if (*(long *)(param_1 + 0x2f0) != 0) {
    plVar10 = *(long **)(param_1 + 0x2e8);
    while (plVar10 != (long *)0x0) {
      plVar10 = (long *)*plVar10;
      __ZdlPv();
    }
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    lVar8 = *(long *)(param_1 + 0x2e0);
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(*plVar1 + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    *(undefined8 *)(param_1 + 0x2f0) = 0;
  }
  if (cVar5 < '\0') {
    __ZdlPv(uVar3);
  }
  return;
}



/* Entry: 10a8726e8; end: 10a872743;  */

void FUN_10a8726e8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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



/* Entry: 10a872744; end: 10a8727df;  */

void FUN_10a872744(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code **ppcVar1;
  long *plVar2;
  undefined ***pppuVar3;
  code **ppcVar4;
  undefined **ppuVar5;
  code *pcStack_68;
  undefined **appuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a8a4360;
  appuStack_60[0] = &PTR_FUN_110c24eb0;
  ppcVar4 = &pcStack_68;
  FUN_10a860860();
  pppuVar3 = appuStack_60;
  (*(code *)*appuStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_60[0])(appuStack_60);
  __Unwind_Resume();
  ppcVar1 = (code **)*ppcVar4;
  if (-1 < *(char *)((long)ppcVar4 + 0x17)) {
    ppcVar1 = ppcVar4;
  }
  plVar2 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar2 = param_3;
  }
  FUN_10a8979c4(ppcVar4,param_3);
  ppuVar5 = &PTR_PTR_1133038f0;
  FUN_10ae079a0();
  func_0x00010a897a18();
  FUN_10ae07cd4(ppuVar5,&PTR_PTR_1133038f0);
                    /* WARNING: Could not recover jumptable at 0x00010a872884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*pppuVar3[0x6d] + 0xe8))(pppuVar3[0x6d],ppcVar1,plVar2);
  return;
}



/* Entry: 10a8727e0; end: 10a87292f;  */

void FUN_10a8727e0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  plVar2 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar2 = param_3;
  }
  FUN_10a8979c4(param_2,param_3);
  ppuVar3 = &PTR_PTR_1133038f0;
  FUN_10ae079a0();
  func_0x00010a897a18();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_1133038f0);
                    /* WARNING: Could not recover jumptable at 0x00010a872884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x368) + 0xe8))(*(long **)(param_1 + 0x368),plVar1,plVar2);
  return;
}



/* Entry: 10a872930; end: 10a872ed7;  */

void FUN_10a872930(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  code **ppcVar11;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  code *pcStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  
  if (**(int **)(param_1 + 0x1e8) != 4) {
    *(undefined8 *)(param_1 + 0x530) = *param_2;
    (*(code *)**(undefined8 **)(param_1 + 0x538))(param_1 + 0x538);
    (**(code **)(param_2[1] + 0x10))(param_1 + 0x538,param_2 + 1);
    plVar5 = *(long **)(param_1 + 0x378);
    plVar14 = plVar5 + 0xc;
    if (*(char *)((long)plVar5 + 0x77) < '\0') {
      plVar14 = (long *)*plVar14;
    }
    plVar19 = plVar5 + 6;
    if (*(char *)((long)plVar5 + 0x47) < '\0') {
      plVar19 = (long *)*plVar19;
    }
    (**(code **)(*plVar5 + 0x48))();
    plVar1 = (long *)*plVar5;
    if (-1 < *(char *)((long)plVar5 + 0x17)) {
      plVar1 = plVar5;
    }
    plVar5 = (long *)(param_1 + 0x250);
    if (*(char *)(param_1 + 0x267) < '\0') {
      plVar5 = (long *)*plVar5;
    }
    lVar10 = *(long *)(param_1 + 0x378);
    plVar6 = (long *)*(long *)(lVar10 + 0x78);
    uVar9 = *(ulong *)(lVar10 + 0x80);
    if (-1 < (char)*(byte *)(lVar10 + 0x8f)) {
      plVar6 = (long *)(lVar10 + 0x78);
      uVar9 = (ulong)*(byte *)(lVar10 + 0x8f);
    }
    bVar4 = uVar9 != 8;
    if (7 < uVar9) {
      uVar9 = 8;
    }
    _memcmp(plVar6,"snapchat",uVar9);
    if (*(long *)(param_1 + 1000) == 0) {
      FUN_10ae030a0(0,"gcp.api.snapchat.com");
      ppuVar8 = &PTR_PTR_113303fc0;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_113303fc0);
      (**(code **)(**(long **)(param_1 + 0x368) + 0xa0))
                (*(long **)(param_1 + 0x368),"gcp.api.snapchat.com");
      pcVar13 = *(code **)(param_1 + 0x368);
      plVar16 = *(long **)(param_1 + 0x370);
      if (plVar16 != (long *)0x0) {
        plVar15 = plVar16 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar10 = *(long *)(param_1 + 0x3b8);
      lVar17 = *(long *)(param_1 + 0x3c0);
      if (lVar17 != 0) {
        plVar15 = (long *)(lVar17 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a86c6f8(&pcStack_a0,&UNK_10f67efc2,6);
      func_0x00010a21ba78((undefined8 *)(param_1 + 1000),&pcStack_a0);
      if (plStack_98 != (long *)0x0) {
        plVar15 = plStack_98 + 1;
        do {
          lVar12 = *plVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
        }
      }
      puVar18 = *(undefined8 **)(param_1 + 1000);
      if (plVar16 != (long *)0x0) {
        plVar15 = plVar16 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (lVar17 != 0) {
        plVar15 = (long *)(lVar17 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar15 = (long *)puVar18[2];
      pcStack_a0 = pcVar13;
      plStack_98 = plVar16;
      lStack_90 = lVar10;
      lStack_88 = lVar17;
      puStack_68 = puVar18;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x30;
        __Znwm();
        *plVar15 = (long)pcVar13;
        plVar15[1] = (long)plVar16;
        plVar15[2] = lVar10;
        plVar15[3] = lVar17;
        plVar15[5] = 0x10a8a5894;
        pcStack_78 = FUN_10a8a56f0;
        plStack_70 = plVar15;
        (**(code **)*puVar18)(puVar18,&pcStack_78);
      }
      else {
        lStack_80 = 0;
        (**(code **)(*plVar15 + 0x28))(plVar15,0,&lStack_80);
        if (lStack_80 != 0) {
          func_0x0001092af97c(&lStack_80);
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10a872e88);
          (*pcVar13)();
        }
        plVar7 = (long *)0x38;
        __Znwm();
        *plVar7 = (long)pcVar13;
        plVar7[1] = (long)plVar16;
        plVar7[2] = lVar10;
        plVar7[3] = lVar17;
        plVar7[5] = (long)FUN_10a8a5854;
        plVar7[6] = (long)plVar15;
        pcStack_78 = FUN_10a8a56c0;
        plStack_70 = plVar7;
        (**(code **)*puVar18)(puVar18,&pcStack_78);
        __ZNSt13exception_ptrD1Ev(&lStack_80);
      }
      lStack_80 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_80);
      if (lVar17 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar17);
      }
      if (plVar16 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = (long *)0x10;
    __Znwm();
    uVar9 = param_1 + 0x18;
    FUN_10a8a41a8(&pcStack_78,uVar9);
    if (pcStack_78 == (code *)0x0) {
      ppcVar11 = &pcStack_a0;
    }
    else {
      pcStack_a0 = pcStack_78;
      plStack_98 = plStack_70;
      ppcVar11 = &pcStack_78;
    }
    *ppcVar11 = (code *)0x0;
    ppcVar11[1] = (code *)0x0;
    plVar15 = plStack_98;
    if (plStack_98 == (long *)0x0) {
      *plVar16 = (long)pcStack_a0;
      plVar16[1] = 0;
    }
    else {
      plVar7 = plStack_98 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *plVar16 = (long)pcStack_a0;
      plVar16[1] = (long)plStack_98;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
      plVar7 = plVar15 + 1;
      do {
        lVar10 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    plVar15 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar7 = plStack_70 + 1;
      do {
        lVar10 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    FUN_10a86a698(param_1);
    plVar15 = (long *)&UNK_10f67d9eb;
    if (plVar14 != (long *)0x0) {
      plVar15 = plVar14;
    }
    FUN_10ae030a0(0,plVar15);
    FUN_10ae030a0();
    FUN_10ae030a0();
    FUN_10ae030a0();
    func_0x00010ae02f4c();
    func_0x00010ae02ecc();
    func_0x00010ae02ecc();
    ppuVar8 = &PTR_PTR_113303998;
    FUN_10ae079a0();
    FUN_10ae030d8();
    FUN_10ae030d8();
    FUN_10ae030d8();
    FUN_10ae030d8();
    func_0x00010ae02f5c();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_113303998);
    (**(code **)(**(long **)(param_1 + 0x368) + 0xb8))
              (*(long **)(param_1 + 0x368),plVar14,plVar19,plVar1,plVar5,(int)plVar6 != 0 || bVar4,
               *(byte *)(*(long *)(param_1 + 0x378) + 0xa9) & 1,uVar9 >> 0x20 & 1,FUN_10a8730c8,
               FUN_10a8733a8,plVar16);
  }
  return;
}



/* Entry: 10a872ed8; end: 10a873047;  */

long * FUN_10a872ed8(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *apuStack_78 [7];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  (**(code **)(param_3[2] + 0x10))(apuStack_78);
  uStack_40 = param_3[9];
  puVar6 = (undefined8 *)0x50;
  __Znwm();
  *puVar6 = uVar2;
  puVar6[1] = uVar3;
  (*(code *)apuStack_78[0][2])(puVar6 + 2,apuStack_78);
  puVar6[9] = uStack_40;
  plVar7 = (long *)0x48;
  __Znwm();
  plVar7[2] = (long)&PTR_DAT_110c24168;
  plVar7[3] = (long)puVar6;
  puVar6 = (undefined8 *)param_2[0xb];
  lVar9 = param_2[0xc];
  *plVar7 = (long)(param_2 + 10);
  plVar7[1] = (long)puVar6;
  *puVar6 = plVar7;
  param_2[0xb] = (long)plVar7;
  param_2[0xc] = lVar9 + 1;
  (*(code *)*apuStack_78[0])(apuStack_78);
  lVar9 = param_2[0xb];
  plVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  lVar11 = param_2[1];
  lVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar8 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar9;
  param_1[2] = lVar11;
  param_1[1] = lVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar7;
  }
  ___stack_chk_fail();
  (*(code *)**(undefined8 **)(lVar9 + 0x10))(lVar9 + 0x10);
  __ZdlPv(lVar9);
  (*(code *)*apuStack_78[0])(apuStack_78);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar8 = (long *)plVar7[2];
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar8 != (long *)0x0) {
      if (plVar7[1] != 0) {
        FUN_10a05c0fc(plVar7[1],*plVar7);
      }
      plVar1 = plVar8 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plVar7[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar7;
}



/* Entry: 10a873048; end: 10a8730c7;  */

undefined8 * FUN_10a873048(undefined8 *param_1)

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



/* Entry: 10a8730c8; end: 10a8733a7;  */

code ******* FUN_10a8730c8(code ******param_1,code *****param_2,code *****param_3)

{
  char cVar1;
  bool bVar2;
  code *****pppppcVar3;
  code *****pppppcVar4;
  code *******pppppppcVar5;
  code ******ppppppcVar6;
  undefined **ppuVar7;
  code ****ppppcVar8;
  code ****ppppcVar9;
  code *****unaff_x20;
  undefined **ppuVar10;
  undefined **unaff_x22;
  code *****pppppcStack_150;
  code *****pppppcStack_148;
  code ******ppppppcStack_140;
  code *****pppppcStack_138;
  undefined **appuStack_130 [7];
  long lStack_f8;
  undefined **ppuStack_f0;
  code *****pppppcStack_e8;
  code ****ppppcStack_e0;
  code ******ppppppcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_b0;
  code ****ppppcStack_a8;
  code ****ppppcStack_a0;
  code *****pppppcStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcStack_a0 = (code ****)0x0;
  ppppcStack_a8 = (code ****)0x0;
  pppppcVar3 = param_1[1];
  pppppcVar4 = param_3;
  pppppcStack_98 = (code *****)param_1;
  if ((((pppppcVar3 == (code *****)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), unaff_x20 = param_2,
       ppppcStack_a0 = (code ****)pppppcVar3, pppppcVar3 == (code *****)0x0)) ||
      (ppppcStack_a8 = (code ****)*param_1, (code *****)ppppcStack_a8 == (code *****)0x0)) ||
     (*(int *)ppppcStack_a8[0x3d] == 4)) goto LAB_10a8732c8;
  func_0x000107c2b054(&pcStack_90,param_3[3]);
  func_0x00010ae02ecc(0,param_2);
  FUN_10ae03140();
  func_0x00010ae02ef0();
  unaff_x22 = &PTR_PTR_113303aa0;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae0314c();
  func_0x00010ae02f00();
  FUN_10ae07cd4(unaff_x22,&PTR_PTR_113303aa0);
  if ((long)pcStack_80 < 0) {
    __ZdlPv(pcStack_90);
  }
  unaff_x20 = (code *****)ppppcStack_a8;
  ppppcVar8 = (code ****)(long)*(char *)((long)ppppcStack_a8 + 0x267);
  if ((long)ppppcVar8 < 0) {
    ppppcVar8 = (code ****)ppppcStack_a8[0x4b];
  }
  if (ppppcVar8 == (code ****)0x0) {
LAB_10a8731f4:
    func_0x000107c2b054(&pcStack_c0,param_3[3]);
    pcStack_90 = FUN_10a8a5908;
    ppuStack_88 = &PTR_FUN_110c24ee0;
    ppuStack_78 = ppuStack_b8;
    pcStack_80 = pcStack_c0;
    pcStack_70 = pcStack_b0;
    pcStack_c0 = (code *)0x0;
    ppuStack_b8 = (undefined **)0x0;
    pcStack_b0 = (code *)0x0;
    FUN_10a860860(unaff_x20,&pcStack_90);
    (*(code *)*ppuStack_88)(&ppuStack_88);
    if ((long)pcStack_b0 < 0) {
      __ZdlPv(pcStack_c0);
    }
  }
  else {
    pppppcVar4 = (code *****)(ppppcStack_a8 + 0x4a);
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
              (pppppcVar4,param_3[3]);
    if ((int)pppppcVar4 != 0) goto LAB_10a8731f4;
  }
  func_0x000107c2b054(&pcStack_c0,*param_3);
  ppppcVar8 = param_3[1];
  param_1 = (code ******)unaff_x20[0xa6];
  if ((long)pcStack_b0 < 0) {
    func_0x000107c3192c(&pcStack_90,pcStack_c0,ppuStack_b8);
  }
  else {
    ppuStack_88 = ppuStack_b8;
    pcStack_90 = pcStack_c0;
    pcStack_80 = pcStack_b0;
  }
  pppppcVar4 = unaff_x20 + 0xa6;
  (*(code *)param_1)(&pcStack_90,ppppcVar8);
  if ((long)pcStack_80 < 0) {
    __ZdlPv(pcStack_90);
  }
  if ((long)pcStack_b0 < 0) {
    __ZdlPv(pcStack_c0);
  }
LAB_10a8732c8:
  ppppcVar8 = ppppcStack_a0;
  if ((code *****)ppppcStack_a0 != (code *****)0x0) {
    pppppcVar3 = (code *****)(ppppcStack_a0 + 1);
    do {
      ppppcVar9 = *pppppcVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppppcVar3,0x10);
      if (bVar2) {
        *pppppcVar3 = (code ****)((long)ppppcVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppppcVar9 == (code ****)0x0) {
      (*(code *)(*ppppcStack_a0)[2])(ppppcStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar8);
    }
  }
  pppppppcVar5 = (code *******)&pppppcStack_98;
  FUN_10a89d644();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppppcVar5;
  }
  ___stack_chk_fail();
  if ((long)pcStack_b0 < 0) {
    __ZdlPv(pcStack_c0);
  }
  FUN_10a5ca2e0(&ppppcStack_a8);
  FUN_10a89d644(&pppppcStack_98);
  ppuVar10 = (undefined **)pppppppcVar5;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a8733a8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppcStack_148 = (code *****)0x0;
  pppppcStack_150 = (code *****)0x0;
  ppppppcVar6 = (code ******)ppuVar10[1];
  ppppppcStack_140 = (code ******)ppuVar10;
  ppuStack_f0 = unaff_x22;
  pppppcStack_e8 = (code *****)param_1;
  ppppcStack_e0 = (code ****)unaff_x20;
  ppppppcStack_d8 = (code ******)pppppppcVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (((ppppppcVar6 != (code ******)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), pppppcStack_148 = (code *****)ppppppcVar6,
      ppppppcVar6 != (code ******)0x0)) &&
     ((pppppcStack_150 = (code *****)*ppuVar10, (code ******)pppppcStack_150 != (code ******)0x0 &&
      (*(int *)pppppcStack_150[0x3d] != 4)))) {
    func_0x00010ae02ecc(0,*(undefined4 *)pppppcVar4);
    ppuVar7 = &PTR_PTR_113303ad8;
    ppuVar10 = &PTR_PTR_113303ad8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar7,&PTR_PTR_113303ad8);
    if (((ulong)pppppcStack_150[0x3f] & 1) == 0) {
      *(undefined1 *)(pppppcStack_150 + 0x3f) = 1;
      ppuVar10 = (undefined **)&pppppcStack_138;
      pppppcStack_138 = (code *****)FUN_10a8a59d0;
      appuStack_130[0] = &PTR_FUN_110c24ef8;
      FUN_10a860860(pppppcStack_150,&pppppcStack_138);
      (*(code *)*appuStack_130[0])(appuStack_130);
    }
    else {
      pppppcStack_138 = (code *****)CONCAT44(pppppcStack_138._4_4_,1);
      appuStack_130[0] = (undefined **)&UNK_10f67eeab;
      FUN_10a865734(pppppcStack_150,&pppppcStack_138);
    }
  }
  pppppcVar4 = pppppcStack_148;
  if ((code ******)pppppcStack_148 != (code ******)0x0) {
    ppppppcVar6 = (code ******)(pppppcStack_148 + 1);
    do {
      pppppcVar3 = *ppppppcVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar6,0x10);
      if (bVar2) {
        *ppppppcVar6 = (code *****)((long)pppppcVar3 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppppcVar3 == (code *****)0x0) {
      (*(code *)(*pppppcStack_148)[2])(pppppcStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar4);
    }
  }
  pppppppcVar5 = &ppppppcStack_140;
  FUN_10a89d644();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    (*(code *)*appuStack_130[0])(ppuVar10 + 1);
    FUN_10a5ca2e0(&pppppcStack_150);
    FUN_10a89d644(&ppppppcStack_140);
    __Unwind_Resume();
    if (pppppppcVar5[3] != (code ******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (pppppppcVar5[1] != (code ******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return pppppppcVar5;
  }
  return pppppppcVar5;
}



/* Entry: 10a8733a8; end: 10a873553;  */

code *** FUN_10a8733a8(undefined **param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  code ***pppcVar5;
  undefined **ppuVar6;
  long lVar7;
  code *pcStack_90;
  code *pcStack_88;
  code **ppcStack_80;
  code *pcStack_78;
  undefined **appuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_88 = (code *)0x0;
  pcStack_90 = (code *)0x0;
  pcVar4 = (code *)param_1[1];
  ppcStack_80 = (code **)param_1;
  if (pcVar4 != (code *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    pcStack_88 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      pcStack_90 = (code *)*param_1;
      if ((pcStack_90 != (code *)0x0) && (**(int **)(pcStack_90 + 0x1e8) != 4)) {
        func_0x00010ae02ecc(0,*param_3);
        ppuVar6 = &PTR_PTR_113303ad8;
        param_1 = &PTR_PTR_113303ad8;
        FUN_10ae079a0();
        func_0x00010ae02edc();
        FUN_10ae07cd4(ppuVar6,&PTR_PTR_113303ad8);
        if (((byte)pcStack_90[0x1f8] & 1) == 0) {
          pcStack_90[0x1f8] = (code)0x1;
          param_1 = &pcStack_78;
          pcStack_78 = FUN_10a8a59d0;
          appuStack_70[0] = &PTR_FUN_110c24ef8;
          FUN_10a860860(pcStack_90,&pcStack_78);
          (*(code *)*appuStack_70[0])(appuStack_70);
        }
        else {
          pcStack_78 = (code *)CONCAT44(pcStack_78._4_4_,1);
          appuStack_70[0] = (undefined **)&UNK_10f67eeab;
          FUN_10a865734(pcStack_90,&pcStack_78);
        }
      }
    }
  }
  pcVar4 = pcStack_88;
  if (pcStack_88 != (code *)0x0) {
    pcVar1 = pcStack_88 + 8;
    do {
      lVar7 = *(long *)pcVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *(long *)pcVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)pcStack_88 + 0x10))(pcStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar4);
    }
  }
  pppcVar5 = &ppcStack_80;
  FUN_10a89d644();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppcVar5;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_70[0])(param_1 + 1);
  FUN_10a5ca2e0(&pcStack_90);
  FUN_10a89d644(&ppcStack_80);
  __Unwind_Resume();
  if (pppcVar5[3] != (code **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (pppcVar5[1] != (code **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return pppcVar5;
}



/* Entry: 10a873554; end: 10a87358b;  */

long FUN_10a873554(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a87358c; end: 10a8738b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a873670) */

void FUN_10a87358c(long param_1,undefined4 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  *puVar5 = FUN_10a8b373c;
  puVar5[1] = FUN_10a8b3988;
  func_0x0001092ba17c(puVar5 + 2);
  plVar11 = (long *)puVar5[7];
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5[9] = param_1;
  *(undefined4 *)(puVar5 + 10) = param_2;
  puVar5[0xb] = param_1 + 0x130;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  puVar6 = puVar5 + 0xb;
  func_0x0001092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10a881008(puVar5 + 0xd,puVar5 + 9);
    puVar5[0xb] = puVar5[0xd];
    plVar7 = (long *)(puVar5[0xd] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xe) = 1;
      lVar12 = puVar5[0xb];
      plVar7 = (long *)(lVar12 + 0x10);
      uVar8 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            uStack_38 = uVar8;
            func_0x000109d1b588(lVar12 + 0x18,&uStack_48);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            goto joined_r0x00010a8737b4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0xb];
    if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8737d8);
      (*pcVar4)();
    }
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xd];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar5 + 2);
    func_0x000109d1a1d0(puVar5 + 2);
    __ZdlPv(puVar5);
  }
joined_r0x00010a8737b4:
  if (plVar11 != (long *)0x0) {
    puVar1 = (ulong *)(plVar11 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a873794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar11 + 8))(plVar11);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a8738b4; end: 10a873a27;  */

void FUN_10a8738b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)(param_1 + 0x18);
  FUN_10a8a41a8(&uStack_88);
  while( true ) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x438);
    if (*(long *)(param_1 + 0x4a0) == 0) break;
    puVar6 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x480) + (*(ulong *)(param_1 + 0x498) >> 6) * 8) +
             (*(ulong *)(param_1 + 0x498) & 0x3f) * 0x40);
    uStack_78 = *puVar6;
    (**(code **)(puVar6[1] + 0x10))(apuStack_70);
    FUN_10a8a5a9c(param_1 + 0x478);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x438);
    puVar6 = &uStack_88;
    FUN_10a873a28(&uStack_78);
    (*(code *)*apuStack_70[0])(apuStack_70);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x438);
  plVar4 = *(long **)(param_1 + 0x570);
  if (plVar4 != (long *)0x0) {
    FUN_10a873acc();
  }
  if (plStack_80 != (long *)0x0) {
    plVar5 = plStack_80 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      plVar4 = plStack_80;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a5ca2e0(&uStack_88);
  plVar5 = plVar4;
  __Unwind_Resume();
  plStack_a8 = plStack_80;
  pcStack_98 = FUN_10a873a28;
  pcVar8 = (code *)*plVar5;
  plStack_b8 = (long *)puVar6[1];
  uStack_c0 = *puVar6;
  if (puVar6[1] != 0) {
    plVar1 = (long *)(puVar6[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_b0 = plVar4;
  puStack_a0 = &stack0xfffffffffffffff0;
  (*pcVar8)(&uStack_c0,plVar5);
  plVar4 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar5 = plStack_b8 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a873a28; end: 10a873acb;  */

void FUN_10a873a28(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*pcVar5)(&uStack_30,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a873acc; end: 10a873b17;  */

void FUN_10a873acc(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long **pplStack_70;
  undefined4 uStack_68;
  long **pplStack_60;
  long lStack_58;
  long *plStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_10a87aaf8();
  FUN_10a87ad8c(param_1);
  FUN_10a87afb4(param_1);
  FUN_10a87b110(param_1);
  FUN_10a87b288(param_1);
  FUN_10a87b3e8(param_1);
  lVar6 = *(long *)(param_1 + 0x30);
  __ZNSt3__15mutex4lockEv(lVar6 + 0x328);
  plVar7 = *(long **)(lVar6 + 0x310);
  uStack_38 = *(undefined8 *)(lVar6 + 800);
  lVar3 = *(long *)(lVar6 + 0x318);
  *(undefined8 *)(lVar6 + 0x318) = 0;
  *(undefined8 *)(lVar6 + 0x310) = 0;
  *(undefined8 *)(lVar6 + 800) = 0;
  plStack_48 = plVar7;
  lStack_40 = lVar3;
  __ZNSt3__15mutex6unlockEv(lVar6 + 0x328);
  lVar3 = lVar3 - (long)plVar7;
  if (lVar3 != 0) {
    FUN_10a882768(&pplStack_60,(lVar3 >> 3) * -0x5555555555555555);
    if (lStack_40 - (long)plStack_48 == 0) {
      uVar2 = lStack_58 - (long)pplStack_60;
    }
    else {
      lVar3 = (lStack_40 - (long)plStack_48 >> 3) * -0x5555555555555555;
      uVar2 = lStack_58 - (long)pplStack_60;
      lVar6 = (long)uVar2 >> 3;
      plVar7 = plStack_48;
      pplVar4 = pplStack_60;
      do {
        plVar5 = plVar7;
        if (*(char *)((long)plVar7 + 0x17) < '\0') {
          plVar5 = (long *)*plVar7;
        }
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a87b678);
          (*pcVar1)();
        }
        *pplVar4 = plVar5;
        lVar6 = lVar6 + -1;
        plVar7 = plVar7 + 3;
        lVar3 = lVar3 + -1;
        pplVar4 = pplVar4 + 1;
      } while (lVar3 != 0);
    }
    pplStack_70 = pplStack_60;
    uStack_68 = (undefined4)(uVar2 >> 3);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x130))(*(long **)(param_1 + 0x10),&pplStack_70);
    if (pplStack_60 != (long **)0x0) {
      __ZdlPv(pplStack_60);
    }
  }
  pplStack_60 = &plStack_48;
  FUN_10a0426d8(&pplStack_60);
  return;
}



/* Entry: 10a873b18; end: 10a873d03;  */

/* WARNING: Removing unreachable block (ram,0x00010a873ea0) */
/* WARNING: Removing unreachable block (ram,0x00010a873e20) */
/* WARNING: Removing unreachable block (ram,0x00010a873efc) */
/* WARNING: Type propagation algorithm not settling */

undefined ******** FUN_10a873b18(undefined ********param_1,undefined ******param_2)

{
  undefined ******ppppppuVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *******pppppppuVar6;
  undefined *****pppppuVar7;
  undefined ********ppppppppuVar8;
  code **ppcVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined *******pppppppuVar14;
  undefined *******pppppppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined ********ppppppppuVar18;
  undefined8 *puVar19;
  undefined *****pppppuVar20;
  undefined ****ppppuVar21;
  undefined ******ppppppuVar22;
  undefined *******pppppppuVar23;
  undefined ******ppppppuVar24;
  undefined ********unaff_x20;
  undefined *******pppppppuVar25;
  undefined8 *apuStack_360 [7];
  long lStack_328;
  code **ppcStack_320;
  undefined ********ppppppppuStack_318;
  undefined ********ppppppppuStack_310;
  undefined ********ppppppppuStack_308;
  undefined ********ppppppppuStack_300;
  code *pcStack_2f8;
  undefined *******pppppppuStack_2f0;
  undefined ********ppppppppuStack_2e8;
  undefined *******pppppppuStack_2e0;
  undefined ********ppppppppuStack_2d8;
  undefined *******pppppppuStack_2d0;
  undefined ********ppppppppuStack_2c8;
  undefined *******pppppppuStack_2c0;
  undefined *******pppppppuStack_2b8;
  undefined *******pppppppuStack_2b0;
  undefined ********ppppppppuStack_2a8;
  long lStack_288;
  code **ppcStack_280;
  undefined ********ppppppppuStack_278;
  undefined ******ppppppuStack_270;
  undefined ********ppppppppuStack_268;
  undefined ********ppppppppuStack_260;
  code *pcStack_258;
  undefined ********ppppppppuStack_250;
  undefined *******pppppppuStack_248;
  code **ppcStack_240;
  undefined ********ppppppppuStack_238;
  undefined ******ppppppuStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined *******pppppppuStack_220;
  undefined8 uStack_218;
  undefined ********ppppppppuStack_210;
  undefined *******pppppppuStack_208;
  undefined8 ******ppppppuStack_200;
  undefined8 uStack_1f8;
  long alStack_1f0 [7];
  undefined8 uStack_1b8;
  undefined ********ppppppppuStack_1b0;
  undefined *****pppppuStack_1a8;
  undefined *******apppppppuStack_1a0 [7];
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined ******ppppppuStack_150;
  undefined8 uStack_148;
  undefined8 *******pppppppuStack_128;
  undefined *******pppppppuStack_120;
  undefined1 auStack_118 [7];
  byte bStack_111;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *in_stack_ffffffffffffff30;
  undefined ********in_stack_ffffffffffffff38;
  undefined ********ppppppppuStack_a0;
  undefined ********ppppppppuStack_98;
  undefined ********ppppppppuStack_90;
  undefined ******ppppppuStack_88;
  undefined ******ppppppuStack_80;
  undefined ******ppppppuStack_78;
  undefined *******pppppppuStack_70;
  undefined *****pppppuStack_68;
  undefined *****pppppuStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((param_1[0x6d] == (undefined *******)0x0) || (*(int *)param_1[0x3d] != 2)) ||
     (pppppppuVar23 = param_1[0x46], pppppppuVar23 == (undefined *******)0x0)) {
LAB_10a873bbc:
    pppppuStack_68 = *param_2;
    pppppuVar20 = param_2[1];
    if (pppppuVar20 == (undefined *****)0x0) {
      ppppppuStack_78 = (undefined ******)FUN_10a8a5b60;
      pppppppuStack_70 = (undefined *******)&PTR_DAT_110c24f10;
      pppppuStack_60 = (undefined *****)0x0;
    }
    else {
      pppppuVar7 = pppppuVar20 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar7,0x10);
        if (bVar4) {
          *pppppuVar7 = (undefined ****)((long)*pppppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppppppuStack_78 = (undefined ******)FUN_10a8a5b60;
      pppppppuStack_70 = (undefined *******)&PTR_DAT_110c24f10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar7,0x10);
        if (bVar4) {
          *pppppuVar7 = (undefined ****)((long)*pppppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        ppppuVar21 = *pppppuVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar7,0x10);
        if (bVar4) {
          *pppppuVar7 = (undefined ****)((long)ppppuVar21 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppppuStack_60 = pppppuVar20;
      if (ppppuVar21 == (undefined ****)0x0) {
        (*(code *)(*pppppuVar20)[2])(pppppuVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar20);
      }
    }
    param_2 = (undefined ******)&ppppppuStack_78;
    FUN_10a873d04(param_1);
    unaff_x20 = &pppppppuStack_70;
    param_1 = unaff_x20;
    (*(code *)*pppppppuStack_70)();
LAB_10a873c74:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return param_1;
    }
  }
  else {
    if (*(char *)((long)pppppppuVar23 + 0x2f) < '\0') {
      if (pppppppuVar23[4] == (undefined ******)0x0) goto LAB_10a873bbc;
    }
    else if (*(char *)((long)pppppppuVar23 + 0x2f) == '\0') goto LAB_10a873bbc;
    pppppuVar20 = *param_2;
    if ((pppppuVar20 == (undefined *****)0x0) || (*(char *)(pppppuVar20 + 8) != '\x02')) {
      if ((pppppuVar20 == (undefined *****)0x0) || (*(char *)(pppppuVar20 + 8) != '\x01'))
      goto LAB_10a873c74;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        ppppppppuVar8 = (undefined ********)(pppppppuVar23 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010a873ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*pppppuVar20)(ppppppppuVar8,pppppuVar20);
        return ppppppppuVar8;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      pppppppuVar25 = pppppppuVar23 + 3;
      lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppppuVar7 = pppppuVar20;
      pppppppuVar14 = pppppppuVar25;
      FUN_10a688b40();
      if (pppppuVar7 == (undefined *****)0x0) {
        pppppppuVar15 = (undefined *******)0x0;
        ppppppppuVar8 = (undefined ********)0x0;
        if (pppppppuVar14 != (undefined *******)0x0) {
          ppppppppuStack_98 = (undefined ********)pppppuVar20[1];
          ppppppppuStack_a0 = (undefined ********)*pppppuVar20;
          if (pppppuVar20[1] != (undefined ****)0x0) {
            ppppuVar21 = pppppuVar20[1] + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppuVar21,0x10);
              if (bVar4) {
                *ppppuVar21 = (undefined ***)((long)*ppppuVar21 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (*(char *)((long)pppppppuVar23 + 0x2f) < '\0') {
            func_0x000107c3192c(&ppppppppuStack_90,*pppppppuVar25,pppppppuVar23[4]);
          }
          else {
            ppppppuStack_88 = pppppppuVar23[4];
            ppppppppuStack_90 = (undefined ********)*pppppppuVar25;
            ppppppuStack_80 = pppppppuVar23[5];
          }
          ppppppuStack_78 = (undefined ******)FUN_10a05aec4;
          FUN_10a05af2c(&pppppppuStack_70,&PTR_FUN_110b9f388,&ppppppppuStack_a0);
          pppppppuVar15 = &ppppppuStack_78;
          FUN_10a4634ec(pppppppuVar14,pppppppuVar15);
          ppppppppuVar8 = &pppppppuStack_70;
          (*(code *)*pppppppuStack_70)();
          if ((long)ppppppuStack_80 < 0) {
            ppppppppuVar8 = ppppppppuStack_90;
            __ZdlPv();
          }
          ppppppppuVar11 = ppppppppuStack_98;
          if (ppppppppuStack_98 != (undefined ********)0x0) {
            ppppppppuVar10 = ppppppppuStack_98 + 1;
            do {
              pppppppuVar23 = *ppppppppuVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
              if (bVar4) {
                *ppppppppuVar10 = (undefined *******)((long)pppppppuVar23 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppppuVar23 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_98)[2])(ppppppppuStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppppuVar8 = ppppppppuVar11;
            }
          }
        }
      }
      else {
        *pppppuVar7 = (undefined ****)
                      CONCAT44((int)((ulong)*pppppuVar7 >> 0x20) + 1,(int)*pppppuVar7 + 1);
        ppppppppuVar8 = (undefined ********)*pppppuVar20;
        FUN_10a05aca4(ppppppppuVar8,pppppppuVar25);
        iVar5 = *(int *)((long)pppppuVar7 + 4) + -1;
        *(int *)((long)pppppuVar7 + 4) = iVar5;
        pppppppuVar15 = pppppppuVar25;
        if (iVar5 == 0) {
          *(undefined4 *)pppppuVar7 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return ppppppppuVar8;
      }
      ___stack_chk_fail();
      func_0x00010a004dac(&ppppppppuStack_a0);
      __Unwind_Resume();
      func_0x000109884c0c(&stack0xffffffffffffff30,ppppppppuVar8 + 1,*ppppppppuVar8);
      func_0x000109884820(&stack0xffffffffffffff38,&stack0xffffffffffffff30,*ppppppppuVar8);
      if (in_stack_ffffffffffffff30 != (undefined8 *)0x0) {
        (**(code **)*in_stack_ffffffffffffff30)();
      }
      (*(code *)(**ppppppppuVar8)[6])(&stack0xffffffffffffff30);
      FUN_10a05adc0(*ppppppppuVar8,&stack0xffffffffffffff30,&stack0xffffffffffffff38,pppppppuVar15);
      if (in_stack_ffffffffffffff30 != (undefined8 *)0x0) {
        (**(code **)*in_stack_ffffffffffffff30)();
      }
      if (in_stack_ffffffffffffff38 != (undefined ********)0x0) {
        (*(code *)**in_stack_ffffffffffffff38)();
      }
      return in_stack_ffffffffffffff38;
    }
  }
  ___stack_chk_fail();
  (*(code *)*pppppppuStack_70)(unaff_x20);
  ppppppppuVar8 = param_1;
  __Unwind_Resume();
  ppppppppuStack_a0 = unaff_x20;
  ppppppppuStack_98 = param_1;
  ppppppppuStack_90 = (undefined ********)&stack0xfffffffffffffff0;
  ppppppuStack_88 = (undefined ******)FUN_10a873d04;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010ae02ecc(0,*(undefined4 *)ppppppppuVar8[0x3d]);
  ppuVar16 = &PTR_PTR_1133053e8;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar16,&PTR_PTR_1133053e8);
  ppppppppuStack_1b0 = ppppppppuVar8;
  pppppuStack_1a8 = *param_2;
  (*(code *)param_2[1][3])(apppppppuStack_1a0,param_2 + 1);
  pppppppuVar25 = ppppppppuVar8[0x46];
  pcStack_168 = (code *)((ulong)pcStack_168 & 0xffffffffffffff00);
  ppuStack_160 = (undefined **)0x0;
  pppppppuStack_220 = (undefined *******)0x0;
  uStack_228 = 3;
  pppppppuVar23 = ppppppppuVar8[0x6f] + 6;
  func_0x00010938229c();
  bStack_111 = 0xc;
  pppppppuStack_128 = (undefined8 *******)0x6e65697265707865;
  pppppppuStack_120 = (undefined *******)CONCAT35(pppppppuStack_120._5_3_,0x64496563);
  ppcVar9 = &pcStack_168;
  pppppppuStack_220 = pppppppuVar23;
  func_0x0001095b7584(ppcVar9,&pppppppuStack_128);
  uVar2 = *(undefined1 *)ppcVar9;
  *(undefined1 *)ppcVar9 = 3;
  ppppppuVar22 = (undefined ******)ppcVar9[1];
  uStack_228 = uVar2;
  ppcVar9[1] = (code *)pppppppuStack_220;
  pppppppuStack_220 = (undefined *******)ppppppuVar22;
  func_0x000109380ffc(&pppppppuStack_220,uVar2);
  pppppppuStack_208 = (undefined *******)0x0;
  ppppppppuStack_210._0_1_ = 3;
  pppppppuVar25 = pppppppuVar25 + 0xd;
  func_0x00010938229c();
  bStack_111 = 8;
  pppppppuStack_128 = (undefined8 *******)0x6449726174617661;
  pppppppuStack_120 = (undefined *******)((ulong)pppppppuStack_120 & 0xffffffffffffff00);
  ppcVar9 = &pcStack_168;
  pppppppuStack_208 = pppppppuVar25;
  func_0x0001095b7584(ppcVar9,&pppppppuStack_128);
  uVar2 = *(undefined1 *)ppcVar9;
  *(undefined1 *)ppcVar9 = 3;
  ppppppppuStack_210 = (undefined ********)CONCAT71(ppppppppuStack_210._1_7_,uVar2);
  ppppppuVar22 = (undefined ******)ppcVar9[1];
  ppcVar9[1] = (code *)pppppppuStack_208;
  pppppppuStack_208 = (undefined *******)ppppppuVar22;
  func_0x000109380ffc(&pppppppuStack_208,uVar2);
  FUN_10a0c32e4(&pppppppuStack_128,&pcStack_168,0xffffffff,0x20,0,1);
  pppppppuVar23 = pppppppuStack_120;
  pppppppuVar6 = pppppppuStack_128;
  if (-1 < (char)bStack_111) {
    pppppppuVar23 = (undefined *******)(ulong)bStack_111;
    pppppppuVar6 = &pppppppuStack_128;
  }
  FUN_10a3bf330(&ppppppuStack_200,pppppppuVar6,pppppppuVar23);
  func_0x000109380ffc(&ppuStack_160,(ulong)pcStack_168 & 0xff);
  FUN_10a874520(&uStack_228,ppppppppuVar8[0x71],&ppppppppuStack_1b0);
  ppppppuVar22 = (undefined ******)0x138;
  __Znwm();
  pppppppuStack_128 = (undefined8 *******)ppppppuStack_200;
  ppppppuVar24 = ppppppuVar22 + 1;
  *ppppppuVar24 = (undefined *****)0x0;
  ppppppuVar22[2] = (undefined *****)0x0;
  *ppppppuVar22 = (undefined *****)&PTR_FUN_110b9f3b0;
  ppppppppuVar11 = (undefined ********)(ppppppuVar22 + 3);
  ppppppuStack_200 = (undefined8 ******)0x0;
  pppppppuStack_120 = (undefined *******)uStack_1f8;
  (**(code **)(alStack_1f0[0] + 0x10))(auStack_118,alStack_1f0);
  uStack_e0 = uStack_1b8;
  pppppppuStack_248 = ppppppppuVar8[0x41];
  ppppppppuStack_250 = (undefined ********)ppppppppuVar8[0x40];
  if (-1 < (char)*(byte *)((long)ppppppppuVar8 + 0x217)) {
    pppppppuStack_248 = (undefined *******)(ulong)*(byte *)((long)ppppppppuVar8 + 0x217);
    ppppppppuStack_250 = ppppppppuVar8 + 0x40;
  }
  ppcVar9 = &pcStack_168;
  pcStack_168 = FUN_10a8a5e9c;
  ppuStack_160 = &PTR_FUN_110c24f68;
  uStack_158 = CONCAT71(uStack_227,uStack_228);
  uStack_148 = uStack_218;
  ppppppuStack_150 = (undefined ******)pppppppuStack_220;
  pppppppuStack_220 = (undefined *******)0x0;
  uStack_218 = 0;
  puVar19 = (undefined8 *)0x21;
  ppcStack_240 = ppcVar9;
  FUN_10a23708c(ppppppppuVar11,&UNK_10e4df4ad,0x21,&UNK_10f647b49,4,&pppppppuStack_128,1);
  (*(code *)*ppuStack_160)(&ppuStack_160);
  FUN_10a042634(&pppppppuStack_128);
  ppppppppuStack_210 = ppppppppuVar11;
  pppppppuStack_208 = (undefined *******)ppppppuVar22;
  FUN_10a874680(&uStack_228);
  pppppppuStack_128 = (undefined8 *******)0x0;
  pppppppuStack_120 = (undefined *******)0x0;
  pppppppuVar23 = ppppppppuVar8[0x6c];
  if (pppppppuVar23 == (undefined *******)0x0) {
LAB_10a8740c0:
    ppuVar16 = &PTR_PTR_113305b98;
    ppuVar17 = ppuVar16;
    FUN_10ae079a0(0,&PTR_PTR_113305b98);
    FUN_10ae07cd4(ppuVar17);
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    pppppppuStack_120 = pppppppuVar23;
    if ((pppppppuVar23 == (undefined *******)0x0) ||
       (pppppppuVar23 = ppppppppuVar8[0x6b], pppppppuStack_128 = (undefined8 *******)pppppppuVar23,
       pppppppuVar23 == (undefined *******)0x0)) goto LAB_10a8740c0;
    ppuVar16 = &PTR_PTR_113304708;
    FUN_10ae079a0(0,&PTR_PTR_113304708);
    FUN_10ae07cd4(ppuVar16,&PTR_PTR_113304708);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar24,0x10);
      if (bVar4) {
        *ppppppuVar24 = (undefined *****)((long)*ppppppuVar24 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    ppuVar16 = (undefined **)&ppppppppuStack_238;
    ppppppppuStack_238 = ppppppppuVar11;
    ppppppuStack_230 = ppppppuVar22;
    (*(code *)**pppppppuVar23)(pppppppuVar23);
    ppppppuVar24 = ppppppuStack_230;
    ppcVar9 = (code **)&PTR_PTR_113304708;
    if (ppppppuStack_230 != (undefined ******)0x0) {
      ppppppuVar1 = ppppppuStack_230 + 1;
      do {
        pppppuVar20 = *ppppppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar4) {
          *ppppppuVar1 = (undefined *****)((long)pppppuVar20 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar20 == (undefined *****)0x0) {
        (*(code *)(*ppppppuStack_230)[2])(ppppppuStack_230);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar24);
        ppcVar9 = (code **)&PTR_PTR_113304708;
      }
    }
  }
  pppppppuVar23 = pppppppuStack_120;
  if (pppppppuStack_120 != (undefined *******)0x0) {
    pppppppuVar25 = pppppppuStack_120 + 1;
    do {
      ppppppuVar24 = *pppppppuVar25;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar25,0x10);
      if (bVar4) {
        *pppppppuVar25 = (undefined ******)((long)ppppppuVar24 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppppuVar24 == (undefined ******)0x0) {
      (*(code *)(*pppppppuStack_120)[2])(pppppppuStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar23);
    }
  }
  pppppppuVar23 = pppppppuStack_208;
  if (pppppppuStack_208 != (undefined *******)0x0) {
    ppppppuVar24 = (undefined ******)(pppppppuStack_208 + 1);
    do {
      pppppuVar20 = *ppppppuVar24;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar24,0x10);
      if (bVar4) {
        *ppppppuVar24 = (undefined *****)((long)pppppuVar20 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppuVar20 == (undefined *****)0x0) {
      (*(code *)(*pppppppuStack_208)[2])(pppppppuStack_208);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar23);
    }
  }
  FUN_10a042634(&ppppppuStack_200);
  ppppppppuVar8 = apppppppuStack_1a0;
  (*(code *)*apppppppuStack_1a0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppppppppuVar8;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&ppppppppuStack_238);
  func_0x00010a05a8c4(&pppppppuStack_128);
  FUN_10a05bd88(&ppppppppuStack_210);
  FUN_10a042634(&ppppppuStack_200);
  (*(code *)*apppppppuStack_1a0[0])(apppppppuStack_1a0);
  ppppppppuVar10 = ppppppppuVar8;
  __Unwind_Resume();
  pcStack_258 = FUN_10a8742ac;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_280 = ppcVar9;
  ppppppppuStack_278 = ppppppppuVar11;
  ppppppuStack_270 = ppppppuVar22;
  ppppppppuStack_268 = ppppppppuVar8;
  ppppppppuStack_260 = (undefined ********)&ppppppppuStack_90;
  if ((ppppppppuVar10 == (undefined ********)0x0) || (*(char *)(ppppppppuVar10 + 8) != '\x02')) {
    ppppppppuVar8 = ppppppppuVar10;
    ppppppppuVar18 = (undefined ********)ppuVar16;
    if ((ppppppppuVar10 == (undefined ********)0x0) || (*(char *)(ppppppppuVar10 + 8) != '\x01'))
    goto LAB_10a874498;
    pppppppuVar23 = *ppppppppuVar10;
    ppppppppuStack_2c8 = (undefined ********)ppuVar16[1];
    pppppppuStack_2d0 = (undefined *******)*ppuVar16;
    if ((undefined *******)ppuVar16[1] != (undefined *******)0x0) {
      pppppppuVar25 = (undefined *******)((long)ppuVar16[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar25,0x10);
        if (bVar4) {
          *pppppppuVar25 = (undefined ******)((long)*pppppppuVar25 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppppppuVar8 = &pppppppuStack_2d0;
    ppppppppuVar18 = ppppppppuVar10;
    (*(code *)pppppppuVar23)();
    if (ppppppppuStack_2c8 == (undefined ********)0x0) goto LAB_10a874498;
    ppppppppuVar13 = ppppppppuStack_2c8 + 1;
    do {
      pppppppuVar23 = *ppppppppuVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar13,0x10);
      if (bVar4) {
        *ppppppppuVar13 = (undefined *******)((long)pppppppuVar23 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar12 = ppppppppuStack_2c8;
    } while (cVar3 != '\0');
  }
  else {
    ppppppppuVar11 = ppppppppuVar10;
    ppppppppuVar13 = (undefined ********)ppuVar16;
    FUN_10a688b40();
    if (ppppppppuVar11 != (undefined ********)0x0) {
      *ppppppppuVar11 =
           (undefined *******)
           CONCAT44((int)((ulong)*ppppppppuVar11 >> 0x20) + 1,(int)*ppppppppuVar11 + 1);
      ppppppppuVar8 = (undefined ********)*ppppppppuVar10;
      FUN_10a8a5c14();
      iVar5 = *(int *)((long)ppppppppuVar11 + 4) + -1;
      *(int *)((long)ppppppppuVar11 + 4) = iVar5;
      ppppppppuVar18 = (undefined ********)ppuVar16;
      if (iVar5 == 0) {
        *(undefined4 *)ppppppppuVar11 = 0;
      }
      goto LAB_10a874498;
    }
    ppppppppuVar8 = (undefined ********)0x0;
    ppppppppuVar18 = (undefined ********)0x0;
    if (ppppppppuVar13 == (undefined ********)0x0) goto LAB_10a874498;
    pppppppuStack_2b8 = ppppppppuVar10[1];
    pppppppuStack_2c0 = *ppppppppuVar10;
    if (ppppppppuVar10[1] != (undefined *******)0x0) {
      pppppppuVar23 = ppppppppuVar10[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar23,0x10);
        if (bVar4) {
          *pppppppuVar23 = (undefined ******)((long)*pppppppuVar23 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppuStack_2e0 = (undefined *******)*ppuVar16;
    ppppppppuVar10 = (undefined ********)ppuVar16[1];
    if (ppppppppuVar10 != (undefined ********)0x0) {
      ppppppppuVar8 = ppppppppuVar10 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar8,0x10);
        if (bVar4) {
          *ppppppppuVar8 = (undefined *******)((long)*ppppppppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppuStack_2d0 = (undefined *******)FUN_10a8a5da4;
    ppppppppuStack_2c8 = (undefined ********)&PTR_FUN_110c24f30;
    pppppppuStack_2f0 = (undefined *******)0x0;
    ppppppppuStack_2e8 = (undefined ********)0x0;
    if (ppppppppuVar10 != (undefined ********)0x0) {
      ppppppppuVar8 = ppppppppuVar10 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar8,0x10);
        if (bVar4) {
          *ppppppppuVar8 = (undefined *******)((long)*ppppppppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppppppuVar11 = &pppppppuStack_2d0;
    ppppppppuVar18 = &pppppppuStack_2d0;
    ppppppppuStack_2d8 = ppppppppuVar10;
    pppppppuStack_2b0 = pppppppuStack_2e0;
    ppppppppuStack_2a8 = ppppppppuVar10;
    FUN_10a4634ec();
    ppppppppuVar8 = (undefined ********)&ppppppppuStack_2c8;
    (*(code *)*ppppppppuStack_2c8)();
    if (ppppppppuVar10 != (undefined ********)0x0) {
      ppppppppuVar13 = ppppppppuVar10 + 1;
      do {
        pppppppuVar23 = *ppppppppuVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar13,0x10);
        if (bVar4) {
          *ppppppppuVar13 = (undefined *******)((long)pppppppuVar23 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppppuVar23 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar10)[2])(ppppppppuVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppppuVar8 = ppppppppuVar10;
      }
    }
    ppppppppuVar10 = &pppppppuStack_2f0;
    if (ppppppppuStack_2e8 == (undefined ********)0x0) goto LAB_10a874498;
    ppppppppuVar13 = ppppppppuStack_2e8 + 1;
    do {
      pppppppuVar23 = *ppppppppuVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar13,0x10);
      if (bVar4) {
        *ppppppppuVar13 = (undefined *******)((long)pppppppuVar23 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar12 = ppppppppuStack_2e8;
      ppppppppuVar10 = &pppppppuStack_2f0;
    } while (cVar3 != '\0');
  }
  if (pppppppuVar23 == (undefined *******)0x0) {
    (*(code *)(*ppppppppuVar12)[2])(ppppppppuVar12);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppppuVar8 = ppppppppuVar12;
  }
LAB_10a874498:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return ppppppppuVar8;
  }
  ___stack_chk_fail();
  (*(code *)*ppppppppuStack_2c8)(ppppppppuVar11 + 1);
  func_0x00010a5c92ec(ppppppppuVar10 + 2);
  func_0x00010a004dac(&pppppppuStack_2f0);
  ppppppppuVar13 = ppppppppuVar8;
  __Unwind_Resume();
  pcStack_2f8 = FUN_10a874520;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_320 = ppcVar9;
  ppppppppuStack_318 = ppppppppuVar11;
  ppppppppuStack_310 = ppppppppuVar10;
  ppppppppuStack_308 = ppppppppuVar8;
  ppppppppuStack_300 = (undefined ********)&ppppppppuStack_260;
  __ZNSt3__115recursive_mutex4lockEv(ppppppppuVar18 + 2);
  pppppuVar20 = (undefined *****)*puVar19;
  pppppuVar7 = (undefined *****)puVar19[1];
  (**(code **)(puVar19[2] + 0x10))(apuStack_360,puVar19 + 2);
  ppppppuVar22 = (undefined ******)0x48;
  __Znwm();
  *ppppppuVar22 = pppppuVar20;
  ppppppuVar22[1] = pppppuVar7;
  (*(code *)apuStack_360[0][2])(ppppppuVar22 + 2,apuStack_360);
  pppppppuVar14 = (undefined *******)0x48;
  __Znwm();
  pppppppuVar14[2] = (undefined ******)&PTR_DAT_110c241c8;
  pppppppuVar14[3] = ppppppuVar22;
  pppppppuVar23 = ppppppppuVar18[0xb];
  pppppppuVar25 = ppppppppuVar18[0xc];
  *pppppppuVar14 = (undefined ******)(ppppppppuVar18 + 10);
  pppppppuVar14[1] = (undefined ******)pppppppuVar23;
  *pppppppuVar23 = (undefined ******)pppppppuVar14;
  ppppppppuVar18[0xb] = pppppppuVar14;
  ppppppppuVar18[0xc] = (undefined *******)((long)pppppppuVar25 + 1);
  (*(code *)*apuStack_360[0])(apuStack_360);
  pppppppuVar23 = ppppppppuVar18[0xb];
  ppppppppuVar8 = ppppppppuVar18 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  pppppppuVar14 = ppppppppuVar18[1];
  pppppppuVar25 = *ppppppppuVar18;
  if (ppppppppuVar18[1] != (undefined *******)0x0) {
    pppppppuVar15 = ppppppppuVar18[1] + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar15,0x10);
      if (bVar4) {
        *pppppppuVar15 = (undefined ******)((long)*pppppppuVar15 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *ppppppppuVar13 = pppppppuVar23;
  ppppppppuVar13[2] = pppppppuVar14;
  ppppppppuVar13[1] = pppppppuVar25;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return ppppppppuVar8;
  }
  ___stack_chk_fail();
  (*(code *)*pppppppuVar23[2])(pppppppuVar23 + 2);
  __ZdlPv(pppppppuVar23);
  (*(code *)*apuStack_360[0])(apuStack_360);
  __ZNSt3__115recursive_mutex6unlockEv(ppppppppuVar18 + 2);
  __Unwind_Resume();
  pppppppuVar23 = ppppppppuVar8[2];
  if (pppppppuVar23 != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (pppppppuVar23 != (undefined *******)0x0) {
      if (ppppppppuVar8[1] != (undefined *******)0x0) {
        FUN_10a05c0fc(ppppppppuVar8[1],*ppppppppuVar8);
      }
      pppppppuVar25 = pppppppuVar23 + 1;
      do {
        ppppppuVar22 = *pppppppuVar25;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar25,0x10);
        if (bVar4) {
          *pppppppuVar25 = (undefined ******)((long)ppppppuVar22 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppppuVar22 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar23)[2])(pppppppuVar23);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar23);
      }
    }
    if (ppppppppuVar8[2] != (undefined *******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return ppppppppuVar8;
}



/* Entry: 10a873d04; end: 10a8742ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a873ea0) */
/* WARNING: Removing unreachable block (ram,0x00010a873e20) */
/* WARNING: Removing unreachable block (ram,0x00010a873efc) */

undefined ****** FUN_10a873d04(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined *****pppppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 *****pppppuVar10;
  code **ppcVar11;
  long *plVar12;
  undefined ******ppppppuVar13;
  undefined ******ppppppuVar14;
  undefined ******ppppppuVar15;
  undefined ******ppppppuVar16;
  undefined ******ppppppuVar17;
  undefined ****ppppuVar18;
  undefined *****pppppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined ******ppppppuVar22;
  undefined8 *puVar23;
  code *pcVar24;
  undefined8 ****ppppuVar25;
  long lVar26;
  undefined *****pppppuVar27;
  code *pcVar28;
  undefined *****pppppuVar29;
  undefined8 *apuStack_2e0 [7];
  long lStack_2a8;
  code **ppcStack_2a0;
  undefined *****pppppuStack_298;
  undefined *****pppppuStack_290;
  undefined *****pppppuStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined ****ppppuStack_270;
  undefined *****pppppuStack_268;
  undefined ****ppppuStack_260;
  undefined *****pppppuStack_258;
  undefined ****ppppuStack_250;
  undefined *****pppppuStack_248;
  undefined ****ppppuStack_240;
  undefined ****ppppuStack_238;
  undefined ****ppppuStack_230;
  undefined *****pppppuStack_228;
  long lStack_208;
  code **ppcStack_200;
  undefined *****pppppuStack_1f8;
  code *pcStack_1f0;
  undefined *****pppppuStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  code **ppcStack_1c0;
  undefined *****pppppuStack_1b8;
  code *pcStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined *****pppppuStack_190;
  code *pcStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  long alStack_170 [7];
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined ****appppuStack_120 [7];
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [7];
  byte bStack_91;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010ae02ecc(0,**(undefined4 **)(param_1 + 0x1e8));
  ppuVar20 = &PTR_PTR_1133053e8;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar20,&PTR_PTR_1133053e8);
  uStack_128 = *param_2;
  lStack_130 = param_1;
  (**(code **)(param_2[1] + 0x18))(appppuStack_120,param_2 + 1);
  lVar26 = *(long *)(param_1 + 0x230);
  pcStack_e8 = (code *)((ulong)pcStack_e8 & 0xffffffffffffff00);
  ppuStack_e0 = (undefined **)0x0;
  pcStack_1a0 = (code *)0x0;
  uStack_1a8 = 3;
  pcVar24 = (code *)(*(long *)(param_1 + 0x378) + 0x30);
  func_0x00010938229c();
  bStack_91 = 0xc;
  ppppuStack_a8 = (undefined8 ****)0x6e65697265707865;
  plStack_a0 = (long *)CONCAT35(plStack_a0._5_3_,0x64496563);
  ppcVar11 = &pcStack_e8;
  pcStack_1a0 = pcVar24;
  func_0x0001095b7584(ppcVar11,&ppppuStack_a8);
  uVar6 = *(undefined1 *)ppcVar11;
  *(undefined1 *)ppcVar11 = 3;
  pcVar24 = ppcVar11[1];
  uStack_1a8 = uVar6;
  ppcVar11[1] = pcStack_1a0;
  pcStack_1a0 = pcVar24;
  func_0x000109380ffc(&pcStack_1a0,uVar6);
  pcStack_188 = (code *)0x0;
  pppppuStack_190._0_1_ = 3;
  pcVar24 = (code *)(lVar26 + 0x68);
  func_0x00010938229c();
  bStack_91 = 8;
  ppppuStack_a8 = (undefined8 *****)0x6449726174617661;
  plStack_a0 = (long *)((ulong)plStack_a0 & 0xffffffffffffff00);
  ppcVar11 = &pcStack_e8;
  pcStack_188 = pcVar24;
  func_0x0001095b7584(ppcVar11,&ppppuStack_a8);
  uVar6 = *(undefined1 *)ppcVar11;
  *(undefined1 *)ppcVar11 = 3;
  pppppuStack_190 = (undefined *****)CONCAT71(pppppuStack_190._1_7_,uVar6);
  pcVar24 = ppcVar11[1];
  ppcVar11[1] = pcStack_188;
  pcStack_188 = pcVar24;
  func_0x000109380ffc(&pcStack_188,uVar6);
  FUN_10a0c32e4(&ppppuStack_a8,&pcStack_e8,0xffffffff,0x20,0,1);
  plVar12 = plStack_a0;
  pppppuVar10 = (undefined8 *****)ppppuStack_a8;
  if (-1 < (char)bStack_91) {
    plVar12 = (long *)(ulong)bStack_91;
    pppppuVar10 = &ppppuStack_a8;
  }
  FUN_10a3bf330(&pppuStack_180,pppppuVar10,plVar12);
  func_0x000109380ffc(&ppuStack_e0,(ulong)pcStack_e8 & 0xff);
  FUN_10a874520(&uStack_1a8,*(undefined8 *)(param_1 + 0x388),&lStack_130);
  pcVar24 = (code *)0x138;
  __Znwm();
  ppppuStack_a8 = (undefined8 ****)pppuStack_180;
  pcVar28 = pcVar24 + 8;
  *(long *)pcVar28 = 0;
  *(long *)(pcVar24 + 0x10) = 0;
  *(undefined ***)pcVar24 = &PTR_FUN_110b9f3b0;
  ppppppuVar14 = (undefined ******)(pcVar24 + 0x18);
  pppuStack_180 = (undefined8 ***)0x0;
  plStack_a0 = (long *)uStack_178;
  (**(code **)(alStack_170[0] + 0x10))(auStack_98,alStack_170);
  uStack_60 = uStack_138;
  uStack_1c8 = *(ulong *)(param_1 + 0x208);
  lStack_1d0 = *(long *)(param_1 + 0x200);
  if (-1 < (char)*(byte *)(param_1 + 0x217)) {
    uStack_1c8 = (ulong)*(byte *)(param_1 + 0x217);
    lStack_1d0 = param_1 + 0x200;
  }
  ppcVar11 = &pcStack_e8;
  pcStack_e8 = FUN_10a8a5e9c;
  ppuStack_e0 = &PTR_FUN_110c24f68;
  uStack_d8 = CONCAT71(uStack_1a7,uStack_1a8);
  uStack_c8 = uStack_198;
  pcStack_d0 = pcStack_1a0;
  pcStack_1a0 = (code *)0x0;
  uStack_198 = 0;
  puVar23 = (undefined8 *)0x21;
  ppcStack_1c0 = ppcVar11;
  FUN_10a23708c(ppppppuVar14,&UNK_10e4df4ad,0x21,&UNK_10f647b49,4,&ppppuStack_a8,1);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  FUN_10a042634(&ppppuStack_a8);
  pppppuStack_190 = (undefined *****)ppppppuVar14;
  pcStack_188 = pcVar24;
  FUN_10a874680(&uStack_1a8);
  ppppuStack_a8 = (undefined8 ****)0x0;
  plStack_a0 = (long *)0x0;
  plVar12 = *(long **)(param_1 + 0x360);
  if (((plVar12 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar12, plVar12 == (long *)0x0)) ||
     (ppppuVar25 = *(undefined8 *****)(param_1 + 0x358), ppppuStack_a8 = ppppuVar25,
     ppppuVar25 == (undefined8 ****)0x0)) {
    ppuVar20 = &PTR_PTR_113305b98;
    ppuVar21 = ppuVar20;
    FUN_10ae079a0(0,&PTR_PTR_113305b98);
    FUN_10ae07cd4(ppuVar21);
  }
  else {
    ppuVar20 = &PTR_PTR_113304708;
    FUN_10ae079a0(0,&PTR_PTR_113304708);
    FUN_10ae07cd4(ppuVar20,&PTR_PTR_113304708);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar28,0x10);
      if (bVar8) {
        *(long *)pcVar28 = *(long *)pcVar28 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    ppuVar20 = (undefined **)&pppppuStack_1b8;
    pppppuStack_1b8 = (undefined *****)ppppppuVar14;
    pcStack_1b0 = pcVar24;
    (*(code *)**ppppuVar25)(ppppuVar25);
    pcVar28 = pcStack_1b0;
    ppcVar11 = (code **)&PTR_PTR_113304708;
    if (pcStack_1b0 != (code *)0x0) {
      pcVar1 = pcStack_1b0 + 8;
      do {
        lVar26 = *(long *)pcVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar8) {
          *(long *)pcVar1 = lVar26 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*(long *)pcStack_1b0 + 0x10))(pcStack_1b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar28);
        ppcVar11 = (code **)&PTR_PTR_113304708;
      }
    }
  }
  plVar12 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar2 = plStack_a0 + 1;
    do {
      lVar26 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar26 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  pcVar28 = pcStack_188;
  if (pcStack_188 != (code *)0x0) {
    pcVar1 = pcStack_188 + 8;
    do {
      lVar26 = *(long *)pcVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar8) {
        *(long *)pcVar1 = lVar26 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*(long *)pcStack_188 + 0x10))(pcStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar28);
    }
  }
  FUN_10a042634(&pppuStack_180);
  ppppppuVar15 = (undefined ******)appppuStack_120;
  (*(code *)*appppuStack_120[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppppuVar15;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&pppppuStack_1b8);
  func_0x00010a05a8c4(&ppppuStack_a8);
  FUN_10a05bd88(&pppppuStack_190);
  FUN_10a042634(&pppuStack_180);
  (*(code *)*appppuStack_120[0])(appppuStack_120);
  ppppppuVar13 = ppppppuVar15;
  __Unwind_Resume();
  pcStack_1d8 = FUN_10a8742ac;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_200 = ppcVar11;
  pppppuStack_1f8 = (undefined *****)ppppppuVar14;
  pcStack_1f0 = pcVar24;
  pppppuStack_1e8 = (undefined *****)ppppppuVar15;
  puStack_1e0 = &stack0xfffffffffffffff0;
  if ((ppppppuVar13 == (undefined ******)0x0) || (*(char *)(ppppppuVar13 + 8) != '\x02')) {
    ppppppuVar15 = ppppppuVar13;
    ppppppuVar22 = (undefined ******)ppuVar20;
    if ((ppppppuVar13 == (undefined ******)0x0) || (*(char *)(ppppppuVar13 + 8) != '\x01'))
    goto LAB_10a874498;
    pppppuVar27 = *ppppppuVar13;
    pppppuStack_248 = (undefined *****)ppuVar20[1];
    ppppuStack_250 = (undefined ****)*ppuVar20;
    if ((undefined *****)ppuVar20[1] != (undefined *****)0x0) {
      pppppuVar29 = (undefined *****)((long)ppuVar20[1] + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppuVar29,0x10);
        if (bVar8) {
          *pppppuVar29 = (undefined ****)((long)*pppppuVar29 + 1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    ppppppuVar15 = (undefined ******)&ppppuStack_250;
    ppppppuVar22 = ppppppuVar13;
    (*(code *)pppppuVar27)();
    if ((undefined ******)pppppuStack_248 == (undefined ******)0x0) goto LAB_10a874498;
    ppppppuVar17 = (undefined ******)(pppppuStack_248 + 1);
    do {
      pppppuVar27 = *ppppppuVar17;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
      if (bVar8) {
        *ppppppuVar17 = (undefined *****)((long)pppppuVar27 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
      ppppppuVar16 = (undefined ******)pppppuStack_248;
    } while (cVar7 != '\0');
  }
  else {
    ppppppuVar14 = ppppppuVar13;
    ppppppuVar17 = (undefined ******)ppuVar20;
    FUN_10a688b40();
    if (ppppppuVar14 != (undefined ******)0x0) {
      *ppppppuVar14 =
           (undefined *****)CONCAT44((int)((ulong)*ppppppuVar14 >> 0x20) + 1,(int)*ppppppuVar14 + 1)
      ;
      ppppppuVar15 = (undefined ******)*ppppppuVar13;
      FUN_10a8a5c14();
      iVar9 = *(int *)((long)ppppppuVar14 + 4) + -1;
      *(int *)((long)ppppppuVar14 + 4) = iVar9;
      ppppppuVar22 = (undefined ******)ppuVar20;
      if (iVar9 == 0) {
        *(undefined4 *)ppppppuVar14 = 0;
      }
      goto LAB_10a874498;
    }
    ppppppuVar15 = (undefined ******)0x0;
    ppppppuVar22 = (undefined ******)0x0;
    if (ppppppuVar17 == (undefined ******)0x0) goto LAB_10a874498;
    ppppuStack_238 = (undefined ****)ppppppuVar13[1];
    ppppuStack_240 = (undefined ****)*ppppppuVar13;
    if (ppppppuVar13[1] != (undefined *****)0x0) {
      pppppuVar27 = ppppppuVar13[1] + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppuVar27,0x10);
        if (bVar8) {
          *pppppuVar27 = (undefined ****)((long)*pppppuVar27 + 1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    ppppuStack_260 = (undefined ****)*ppuVar20;
    ppppppuVar13 = (undefined ******)ppuVar20[1];
    if (ppppppuVar13 != (undefined ******)0x0) {
      ppppppuVar14 = ppppppuVar13 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
        if (bVar8) {
          *ppppppuVar14 = (undefined *****)((long)*ppppppuVar14 + 1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    ppppuStack_250 = (undefined ****)FUN_10a8a5da4;
    pppppuStack_248 = (undefined *****)&PTR_FUN_110c24f30;
    ppppuStack_270 = (undefined ****)0x0;
    pppppuStack_268 = (undefined *****)0x0;
    if (ppppppuVar13 != (undefined ******)0x0) {
      ppppppuVar14 = ppppppuVar13 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
        if (bVar8) {
          *ppppppuVar14 = (undefined *****)((long)*ppppppuVar14 + 1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    ppppppuVar14 = (undefined ******)&ppppuStack_250;
    ppppppuVar22 = (undefined ******)&ppppuStack_250;
    pppppuStack_258 = (undefined *****)ppppppuVar13;
    ppppuStack_230 = ppppuStack_260;
    pppppuStack_228 = (undefined *****)ppppppuVar13;
    FUN_10a4634ec();
    ppppppuVar15 = &pppppuStack_248;
    (*(code *)*pppppuStack_248)();
    if (ppppppuVar13 != (undefined ******)0x0) {
      ppppppuVar17 = ppppppuVar13 + 1;
      do {
        pppppuVar27 = *ppppppuVar17;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
        if (bVar8) {
          *ppppppuVar17 = (undefined *****)((long)pppppuVar27 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (pppppuVar27 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar13)[2])(ppppppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar15 = ppppppuVar13;
      }
    }
    ppppppuVar13 = (undefined ******)&ppppuStack_270;
    if ((undefined ******)pppppuStack_268 == (undefined ******)0x0) goto LAB_10a874498;
    ppppppuVar17 = (undefined ******)(pppppuStack_268 + 1);
    do {
      pppppuVar27 = *ppppppuVar17;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
      if (bVar8) {
        *ppppppuVar17 = (undefined *****)((long)pppppuVar27 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
      ppppppuVar16 = (undefined ******)pppppuStack_268;
      ppppppuVar13 = (undefined ******)&ppppuStack_270;
    } while (cVar7 != '\0');
  }
  if (pppppuVar27 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar16)[2])(ppppppuVar16);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar15 = ppppppuVar16;
  }
LAB_10a874498:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return ppppppuVar15;
  }
  ___stack_chk_fail();
  (*(code *)*pppppuStack_248)(ppppppuVar14 + 1);
  func_0x00010a5c92ec(ppppppuVar13 + 2);
  func_0x00010a004dac(&ppppuStack_270);
  ppppppuVar17 = ppppppuVar15;
  __Unwind_Resume();
  pcStack_278 = FUN_10a874520;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_2a0 = ppcVar11;
  pppppuStack_298 = (undefined *****)ppppppuVar14;
  pppppuStack_290 = (undefined *****)ppppppuVar13;
  pppppuStack_288 = (undefined *****)ppppppuVar15;
  ppuStack_280 = &puStack_1e0;
  __ZNSt3__115recursive_mutex4lockEv(ppppppuVar22 + 2);
  pppuVar4 = (undefined ***)*puVar23;
  pppuVar5 = (undefined ***)puVar23[1];
  (**(code **)(puVar23[2] + 0x10))(apuStack_2e0,puVar23 + 2);
  ppppuVar18 = (undefined ****)0x48;
  __Znwm();
  *ppppuVar18 = pppuVar4;
  ppppuVar18[1] = pppuVar5;
  (*(code *)apuStack_2e0[0][2])(ppppuVar18 + 2,apuStack_2e0);
  pppppuVar19 = (undefined *****)0x48;
  __Znwm();
  pppppuVar19[2] = (undefined ****)&PTR_DAT_110c241c8;
  pppppuVar19[3] = ppppuVar18;
  pppppuVar27 = ppppppuVar22[0xb];
  pppppuVar29 = ppppppuVar22[0xc];
  *pppppuVar19 = (undefined ****)(ppppppuVar22 + 10);
  pppppuVar19[1] = (undefined ****)pppppuVar27;
  *pppppuVar27 = (undefined ****)pppppuVar19;
  ppppppuVar22[0xb] = pppppuVar19;
  ppppppuVar22[0xc] = (undefined *****)((long)pppppuVar29 + 1);
  (*(code *)*apuStack_2e0[0])(apuStack_2e0);
  pppppuVar27 = ppppppuVar22[0xb];
  ppppppuVar14 = ppppppuVar22 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  pppppuVar19 = ppppppuVar22[1];
  pppppuVar29 = *ppppppuVar22;
  if (ppppppuVar22[1] != (undefined *****)0x0) {
    pppppuVar3 = ppppppuVar22[1] + 2;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar3,0x10);
      if (bVar8) {
        *pppppuVar3 = (undefined ****)((long)*pppppuVar3 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  *ppppppuVar17 = pppppuVar27;
  ppppppuVar17[2] = pppppuVar19;
  ppppppuVar17[1] = pppppuVar29;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return ppppppuVar14;
  }
  ___stack_chk_fail();
  (*(code *)*pppppuVar27[2])(pppppuVar27 + 2);
  __ZdlPv(pppppuVar27);
  (*(code *)*apuStack_2e0[0])(apuStack_2e0);
  __ZNSt3__115recursive_mutex6unlockEv(ppppppuVar22 + 2);
  __Unwind_Resume();
  pppppuVar27 = ppppppuVar14[2];
  if (pppppuVar27 != (undefined *****)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (pppppuVar27 != (undefined *****)0x0) {
      if (ppppppuVar14[1] != (undefined *****)0x0) {
        FUN_10a05c0fc(ppppppuVar14[1],*ppppppuVar14);
      }
      pppppuVar29 = pppppuVar27 + 1;
      do {
        ppppuVar18 = *pppppuVar29;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppuVar29,0x10);
        if (bVar8) {
          *pppppuVar29 = (undefined ****)((long)ppppuVar18 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (ppppuVar18 == (undefined ****)0x0) {
        (*(code *)(*pppppuVar27)[2])(pppppuVar27);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar27);
      }
    }
    if (ppppppuVar14[2] != (undefined *****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return ppppppuVar14;
}



/* Entry: 10a8742ac; end: 10a87451f;  */

undefined ****** FUN_10a8742ac(undefined ******param_1,undefined ******param_2,undefined8 *param_3)

{
  undefined *****pppppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******unaff_x21;
  undefined *****pppppuVar13;
  undefined *****pppppuVar14;
  undefined8 *apuStack_110 [7];
  long lStack_d8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (undefined ******)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    ppppppuVar7 = param_1;
    ppppppuVar12 = param_2;
    if ((param_1 == (undefined ******)0x0) || (*(char *)(param_1 + 8) != '\x01'))
    goto LAB_10a874498;
    pppppuVar13 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar14 = param_2[1] + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
        if (bVar5) {
          *pppppuVar14 = (undefined ****)((long)*pppppuVar14 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppppppuVar7 = (undefined ******)&ppppuStack_80;
    ppppppuVar12 = param_1;
    (*(code *)pppppuVar13)();
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10a874498;
    ppppppuVar8 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar13 = *ppppppuVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar5) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar13 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
      ppppppuVar9 = (undefined ******)pppppuStack_78;
    } while (cVar4 != '\0');
  }
  else {
    unaff_x21 = param_1;
    ppppppuVar8 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar7 = (undefined ******)*param_1;
      FUN_10a8a5c14();
      iVar6 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar6;
      ppppppuVar12 = param_2;
      if (iVar6 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a874498;
    }
    ppppppuVar7 = (undefined ******)0x0;
    ppppppuVar12 = (undefined ******)0x0;
    if (ppppppuVar8 == (undefined ******)0x0) goto LAB_10a874498;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar13 = param_1[1] + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
        if (bVar5) {
          *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppppuStack_90 = (undefined ****)*param_2;
    ppppppuVar8 = (undefined ******)param_2[1];
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar5) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10a8a5da4;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110c24f30;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar5) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    ppppppuVar12 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar8;
    ppppuStack_60 = ppppuStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar8;
    FUN_10a4634ec();
    ppppppuVar7 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar9 = ppppppuVar8 + 1;
      do {
        pppppuVar13 = *ppppppuVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar5) {
          *ppppppuVar9 = (undefined *****)((long)pppppuVar13 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pppppuVar13 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar7 = ppppppuVar8;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10a874498;
    ppppppuVar8 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar13 = *ppppppuVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar5) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar13 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
      ppppppuVar9 = (undefined ******)pppppuStack_98;
      param_1 = (undefined ******)&ppppuStack_a0;
    } while (cVar4 != '\0');
  }
  if (pppppuVar13 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar9)[2])(ppppppuVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar7 = ppppppuVar9;
  }
LAB_10a874498:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppppuVar7;
  }
  ___stack_chk_fail();
  (*(code *)*pppppuStack_78)(unaff_x21 + 1);
  func_0x00010a5c92ec(param_1 + 2);
  func_0x00010a004dac(&ppppuStack_a0);
  __Unwind_Resume();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(ppppppuVar12 + 2);
  pppuVar2 = (undefined ***)*param_3;
  pppuVar3 = (undefined ***)param_3[1];
  (**(code **)(param_3[2] + 0x10))(apuStack_110,param_3 + 2);
  ppppuVar10 = (undefined ****)0x48;
  __Znwm();
  *ppppuVar10 = pppuVar2;
  ppppuVar10[1] = pppuVar3;
  (*(code *)apuStack_110[0][2])(ppppuVar10 + 2,apuStack_110);
  pppppuVar11 = (undefined *****)0x48;
  __Znwm();
  pppppuVar11[2] = (undefined ****)&PTR_DAT_110c241c8;
  pppppuVar11[3] = ppppuVar10;
  pppppuVar13 = ppppppuVar12[0xb];
  pppppuVar14 = ppppppuVar12[0xc];
  *pppppuVar11 = (undefined ****)(ppppppuVar12 + 10);
  pppppuVar11[1] = (undefined ****)pppppuVar13;
  *pppppuVar13 = (undefined ****)pppppuVar11;
  ppppppuVar12[0xb] = pppppuVar11;
  ppppppuVar12[0xc] = (undefined *****)((long)pppppuVar14 + 1);
  (*(code *)*apuStack_110[0])(apuStack_110);
  pppppuVar13 = ppppppuVar12[0xb];
  ppppppuVar8 = ppppppuVar12 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  pppppuVar11 = ppppppuVar12[1];
  pppppuVar14 = *ppppppuVar12;
  if (ppppppuVar12[1] != (undefined *****)0x0) {
    pppppuVar1 = ppppppuVar12[1] + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
      if (bVar5) {
        *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *ppppppuVar7 = pppppuVar13;
  ppppppuVar7[2] = pppppuVar11;
  ppppppuVar7[1] = pppppuVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*pppppuVar13[2])(pppppuVar13 + 2);
    __ZdlPv(pppppuVar13);
    (*(code *)*apuStack_110[0])(apuStack_110);
    __ZNSt3__115recursive_mutex6unlockEv(ppppppuVar12 + 2);
    __Unwind_Resume();
    pppppuVar13 = ppppppuVar8[2];
    if (pppppuVar13 != (undefined *****)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (pppppuVar13 != (undefined *****)0x0) {
        if (ppppppuVar8[1] != (undefined *****)0x0) {
          FUN_10a05c0fc(ppppppuVar8[1],*ppppppuVar8);
        }
        pppppuVar14 = pppppuVar13 + 1;
        do {
          ppppuVar10 = *pppppuVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
          if (bVar5) {
            *pppppuVar14 = (undefined ****)((long)ppppuVar10 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppuVar10 == (undefined ****)0x0) {
          (*(code *)(*pppppuVar13)[2])(pppppuVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar13);
        }
      }
      if (ppppppuVar8[2] != (undefined *****)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return ppppppuVar8;
  }
  return ppppppuVar8;
}



/* Entry: 10a874520; end: 10a87467f;  */

long * FUN_10a874520(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  (**(code **)(param_3[2] + 0x10))(apuStack_70,param_3 + 2);
  puVar6 = (undefined8 *)0x48;
  __Znwm();
  *puVar6 = uVar2;
  puVar6[1] = uVar3;
  (*(code *)apuStack_70[0][2])(puVar6 + 2,apuStack_70);
  plVar7 = (long *)0x48;
  __Znwm();
  plVar7[2] = (long)&PTR_DAT_110c241c8;
  plVar7[3] = (long)puVar6;
  puVar6 = (undefined8 *)param_2[0xb];
  lVar9 = param_2[0xc];
  *plVar7 = (long)(param_2 + 10);
  plVar7[1] = (long)puVar6;
  *puVar6 = plVar7;
  param_2[0xb] = (long)plVar7;
  param_2[0xc] = lVar9 + 1;
  (*(code *)*apuStack_70[0])(apuStack_70);
  lVar9 = param_2[0xb];
  plVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  lVar11 = param_2[1];
  lVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar8 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar9;
  param_1[2] = lVar11;
  param_1[1] = lVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar7;
  }
  ___stack_chk_fail();
  (*(code *)**(undefined8 **)(lVar9 + 0x10))(lVar9 + 0x10);
  __ZdlPv(lVar9);
  (*(code *)*apuStack_70[0])(apuStack_70);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar8 = (long *)plVar7[2];
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar8 != (long *)0x0) {
      if (plVar7[1] != 0) {
        FUN_10a05c0fc(plVar7[1],*plVar7);
      }
      plVar1 = plVar8 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plVar7[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar7;
}



/* Entry: 10a874680; end: 10a8746ff;  */

undefined8 * FUN_10a874680(undefined8 *param_1)

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



/* Entry: 10a874700; end: 10a8747a3;  */

void FUN_10a874700(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  plVar6[2] = (long)&PTR_FUN_110c241e0;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a8747a4; end: 10a874823;  */

undefined8 * FUN_10a8747a4(undefined8 *param_1)

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



/* Entry: 10a874824; end: 10a8748c7;  */

void FUN_10a874824(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  plVar6[2] = (long)&PTR_DAT_110c241f8;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a8748c8; end: 10a874947;  */

undefined8 * FUN_10a8748c8(undefined8 *param_1)

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



/* Entry: 10a874948; end: 10a8749ef;  */

void FUN_10a874948(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_DAT_110c24210;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a8749f0; end: 10a874a6f;  */

undefined8 * FUN_10a8749f0(undefined8 *param_1)

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



/* Entry: 10a874a70; end: 10a874ae7;  */

void FUN_10a874a70(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a860df0(param_1,*(long *)(param_2 + 0x340) + 1);
  FUN_10a864ca4(param_1,param_2 + 0x230);
  plVar1 = (long *)(param_2 + 0x338);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_10a864ca4(param_1,plVar1 + 5);
  }
  return;
}



/* Entry: 10a874ae8; end: 10a874b07;  */

void FUN_10a874ae8(long param_1,int param_2)

{
  *(bool *)(param_1 + 0x4b8) = param_2 != 0;
  return;
}



/* Entry: 10a874b08; end: 10a874b67;  */

void FUN_10a874b08(undefined8 *param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  if (*(char *)(param_1[1] + 8) == '\x01') {
    (*(code *)*param_1)(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}



/* Entry: 10a874b68; end: 10a874df7;  */

/* WARNING: Removing unreachable block (ram,0x00010a874cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a874d1c) */

undefined1 * FUN_10a874b68(long param_1)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1016];
  undefined1 uStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x50) + 0x378) + 0xa8) & 1) != 0) {
    lVar10 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(param_1 + 0x58) = lVar10;
    *(undefined8 *)(param_1 + 0x60) = 0;
    if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
    ppuVar2 = &PTR_PTR_113304408;
    FUN_10ae079a0(0,&PTR_PTR_113304408);
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_113304408);
    ppuVar2 = &PTR_DAT_110c23a20;
    FUN_10a26a62c();
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    puVar3[1] = 0x45544e495f524559;
    *puVar3 = 0x414c5049544c554d;
    *(undefined8 *)((long)puVar3 + 0x14) = 0x4547415353454d5f;
    *(undefined8 *)((long)puVar3 + 0xc) = 0x4c414e5245544e49;
    *(undefined1 *)((long)puVar3 + 0x1c) = 0;
    puVar4 = &stack0xffffffffffffffc0;
    puStack_68 = puVar3;
    func_0x0001095b7584(puVar4,&puStack_68);
    uVar1 = *puVar4;
    *puVar4 = 3;
    *(undefined ***)(puVar4 + 8) = ppuVar2;
    __ZdlPv(puStack_68);
    func_0x000109380ffc(&stack0xffffffffffffffb8,uVar1);
    uStack_78 = 4;
    lStack_70 = 0;
    puStack_68 = (undefined8 *)0x6f746f68507369;
    puVar4 = &stack0xffffffffffffffc0;
    func_0x0001095b7584(puVar4,&puStack_68);
    uVar1 = *puVar4;
    *puVar4 = 4;
    lVar10 = *(long *)(puVar4 + 8);
    uStack_78 = uVar1;
    *(long *)(puVar4 + 8) = lStack_70;
    lStack_70 = lVar10;
    func_0x000109380ffc(&lStack_70,uVar1);
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    FUN_10a0c32e4(&puStack_68,&stack0xffffffffffffffc0,0xffffffff,0x20,0,0);
    FUN_10a86cb78(uVar11,&puStack_68);
    puVar4 = &stack0xffffffffffffffc8;
    func_0x000109380ffc(puVar4,0);
    return puVar4;
  }
  ppuVar2 = &PTR_PTR_113304170;
  ppuVar9 = ppuVar2;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined *)0x0;
  if (ppuVar9 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar9[0x13],ppuVar9[0xf],
                  ppuVar9 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar13 = ppuVar9[0x12];
    puVar12 = ppuVar9[0xb];
    uVar5 = 0;
    _clock_gettime_nsec_np();
    uVar6 = uVar5;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar9 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar9 + 0xe);
    uStack_8c0 = uVar6 & 0xffffffff;
    ppuStack_8b0 = ppuVar9 + 0x10;
    puVar7 = *ppuVar9;
    ppuVar2 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar12;
    puStack_8d8 = puVar13;
    uStack_8d0 = (ulong)(puVar13 != (undefined *)0x0);
    uStack_8c8 = uVar5;
    FUN_10ae0784c(puVar7,ppuVar2,&puStack_900,&puStack_918);
  }
  iVar8 = (int)ppuVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar8 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar7);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 10a874df8; end: 10a874ed3;  */

void FUN_10a874df8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  double dVar3;
  
  ppuVar2 = &PTR_PTR_1133047e8;
  FUN_10ae079a0(0,&PTR_PTR_1133047e8);
  FUN_10ae07cd4(ppuVar2,&PTR_PTR_1133047e8);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
    }
    dVar3 = (double)(lVar1 - *(long *)(param_1 + 0x58)) / 1000000000.0;
    func_0x00010ae02fdc(dVar3,0);
    func_0x00010ae02ecc();
    ppuVar2 = &PTR_PTR_113304438;
    FUN_10ae079a0();
    func_0x00010ae02fec(dVar3);
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_113304438);
    if (*(char *)(param_1 + 0x68) == '\x01') {
      *(undefined1 *)(param_1 + 0x68) = 0;
    }
  }
  return;
}


