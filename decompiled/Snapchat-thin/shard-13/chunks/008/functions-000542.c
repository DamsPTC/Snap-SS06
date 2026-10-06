/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad6d444; end: 10ad6d96f;  */

undefined8 FUN_10ad6d444(undefined8 *param_1)

{
  undefined8 ****ppppuVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined *****pppppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined ***pppuVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 auStack_290 [56];
  undefined8 uStack_258;
  char cStack_241;
  undefined **appuStack_230 [19];
  undefined8 ***pppuStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined1 auStack_180 [8];
  undefined ****ppppuStack_178;
  undefined **ppuStack_170;
  undefined1 auStack_168 [7];
  byte bStack_161;
  undefined8 auStack_150 [4];
  undefined8 uStack_130;
  char cStack_119;
  undefined **appuStack_108 [19];
  undefined1 auStack_70 [16];
  
  puVar5 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  uVar10 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*puVar5,uVar10);
  lVar14 = param_1[1];
  pppuVar6 = &ppuStack_2a0;
  FUN_109fed7e0(pppuVar6);
  _pthread_self();
  pppppuVar7 = &ppppuStack_178;
  FUN_109fed7e0(pppppuVar7);
  pppuVar17 = ppppuStack_178[-3];
  __ZNSt3__16locale7classicEv();
  lVar12 = (long)&ppppuStack_178 + (long)pppuVar17;
  __ZNKSt3__18ios_base6getlocEv(auStack_180,lVar12);
  __ZNSt3__18ios_base5imbueERKNS_6localeE(&pppuStack_198,lVar12,pppppuVar7);
  __ZNSt3__16localeD1Ev(&pppuStack_198);
  plVar18 = *(long **)((long)auStack_150 + (long)pppuVar17);
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x10))(plVar18,pppppuVar7);
    __ZNSt3__16localeC1ERKS0_(auStack_70,plVar18 + 1);
    __ZNSt3__16localeaSERKS0_(plVar18 + 1,pppppuVar7);
    __ZNSt3__16localeD1Ev(auStack_70);
  }
  __ZNSt3__16localeD1Ev(auStack_180);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(&ppppuStack_178,pppuVar6);
  func_0x00010a002480(&pppuStack_198,&ppuStack_170,auStack_70);
  ppppuVar1 = (undefined8 ****)pppuStack_198;
  if (-1 < (char)bStack_181) {
    uStack_190 = (ulong)bStack_181;
    ppppuVar1 = &pppuStack_198;
  }
  FUN_10a002568(&ppuStack_2a0,ppppuVar1,uStack_190);
  if ((char)bStack_181 < '\0') {
    __ZdlPv(pppuStack_198);
  }
  appuStack_108[0] = &PTR_DAT_11088d708;
  ppppuStack_178 = (undefined ****)&PTR_DAT_11088d6e0;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  if (cStack_119 < '\0') {
    __ZdlPv(uStack_130);
  }
  ppuStack_170 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_168);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppppuStack_178,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_108);
  func_0x00010a002480(&ppppuStack_178,&ppuStack_298,&pppuStack_198);
  ppuVar11 = ppuStack_170;
  pppppuVar7 = (undefined *****)ppppuStack_178;
  if (-1 < (char)bStack_161) {
    ppuVar11 = (undefined **)(ulong)bStack_161;
    pppppuVar7 = &ppppuStack_178;
  }
  FUN_10ae03140(0,pppppuVar7,ppuVar11);
  ppuVar11 = &PTR_PTR_1133078e0;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar11,&PTR_PTR_1133078e0);
  if ((char)bStack_161 < '\0') {
    __ZdlPv(ppppuStack_178);
  }
  if ((*(byte *)(lVar14 + 0x208) & 1) == 0) {
    uVar15 = 0;
    uVar20 = 0;
    do {
      if ((*(byte *)(lVar14 + 0x20a) & 1) != 0) break;
      if ((*(byte *)(lVar14 + 0x209) & 1) == 0) {
        __ZNSt3__15mutex4lockEv(lVar14 + 0x148);
        lVar12 = *(long *)(lVar14 + 0x1b8) - (long)*(long **)(lVar14 + 0x1b0);
        if (lVar12 == 0) {
          __ZNSt3__15mutex6unlockEv(lVar14 + 0x148);
          break;
        }
        lVar12 = (lVar12 >> 3) * -0x5555555555555555;
        bVar2 = true;
        plVar18 = *(long **)(lVar14 + 0x1b0);
        do {
          lVar13 = *plVar18;
          if (*(char *)(lVar13 + 0x1c0) == '\x01') {
            bVar4 = *(long *)(lVar13 + 0xc0) == *(long *)(lVar13 + 0x140);
          }
          else {
            bVar4 = true;
          }
          bVar2 = (bool)(bVar2 & bVar4);
          lVar12 = lVar12 + -1;
          plVar18 = plVar18 + 3;
        } while (lVar12 != 0);
        __ZNSt3__15mutex6unlockEv(lVar14 + 0x148);
        if (bVar2) break;
      }
      __ZNSt3__15mutex4lockEv(lVar14 + 0x148);
      lVar12 = *(long *)(lVar14 + 0x1b8) - *(long *)(lVar14 + 0x1b0);
      if (lVar12 == 0) {
        __ZNSt3__15mutex6unlockEv(lVar14 + 0x148);
        uVar16 = uVar15;
LAB_10ad6d80c:
        ppppuStack_178 = (undefined ****)0xf4240;
        __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                  (&ppppuStack_178);
        uVar21 = 0;
      }
      else {
        lVar12 = lVar12 >> 3;
        uVar19 = lVar12 * -0x5555555555555555;
        uVar16 = uVar15 + 1;
        uVar21 = 0;
        if (uVar19 != 0) {
          uVar21 = uVar15 / uVar19;
        }
        uVar15 = uVar15 - uVar21 * uVar19;
        lVar13 = *(long *)(*(long *)(lVar14 + 0x1b0) + uVar15 * 0x18);
        __ZNSt3__15mutex6unlockEv(lVar14 + 0x148);
        if (lVar13 == 0) goto LAB_10ad6d80c;
        FUN_10ad6d970(lVar14 + 0x80);
        lVar8 = lVar13;
        FUN_10ad6da90(lVar13,*(long *)(lVar14 + 0x80),
                      *(long *)(lVar14 + 0x88) - *(long *)(lVar14 + 0x80) >> 5);
        FUN_10ad6db14(lVar14,*(undefined8 *)(lVar14 + 0x80),lVar8);
        __ZNSt3__15mutex4lockEv(lVar14 + 0x148);
        if ((ulong)(*(long *)(lVar14 + 0x1e0) - *(long *)(lVar14 + 0x1d8)) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad6d8dc);
          (*pcVar3)();
        }
        if (*(char *)(*(long *)(lVar14 + 0x1d8) + uVar15) == '\0') {
          while( true ) {
            FUN_10ad6d970(lVar14 + 0x80);
            lVar9 = lVar13;
            FUN_10ad6da90(lVar13,*(long *)(lVar14 + 0x80),
                          *(long *)(lVar14 + 0x88) - *(long *)(lVar14 + 0x80) >> 5);
            if (lVar9 == 0) break;
            FUN_10ad6db14(lVar14,*(undefined8 *)(lVar14 + 0x80),lVar9);
          }
          FUN_10a132c34(lVar14,uVar15);
        }
        __ZNSt3__15mutex6unlockEv(lVar14 + 0x148);
        uVar21 = 0;
        if (lVar8 == 0) {
          uVar21 = uVar20 + 1;
        }
        if ((ulong)(lVar12 * -0x5555555555555550) <= uVar21) {
          ppppuStack_178 = (undefined ****)0xf4240;
          __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                    (&ppppuStack_178);
          uVar21 = 0;
        }
      }
      uVar15 = uVar16;
      uVar20 = uVar21;
    } while ((*(byte *)(lVar14 + 0x208) & 1) == 0);
  }
  appuStack_230[0] = &PTR_DAT_11088d708;
  ppuStack_2a0 = &PTR_DAT_11088d6e0;
  ppuStack_298 = &PTR_DAT_11088d7b0;
  if (cStack_241 < '\0') {
    __ZdlPv(uStack_258);
  }
  ppuStack_298 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_290);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_2a0,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_230);
  FUN_10ad5d13c(param_1,0);
  __ZdlPv(param_1);
  return 0;
}



/* Entry: 10ad6d970; end: 10ad6da8f;  */

void FUN_10ad6d970(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar7 = *param_1;
  lVar4 = param_1[1];
  lVar8 = lVar4 - lVar7;
  if ((ulong)(lVar8 >> 5) < 0x800) {
    uVar9 = 0x800 - (lVar8 >> 5);
    if ((ulong)(param_1[2] - lVar4 >> 5) < uVar9) {
      uVar5 = param_1[2] - lVar7;
      uVar6 = (long)uVar5 >> 4;
      if (uVar6 < 0x801) {
        uVar6 = 0x800;
      }
      if (0x7fffffffffffffdf < uVar5) {
        uVar6 = 0x7ffffffffffffff;
      }
      plVar3 = param_1 + 3;
      FUN_10a152cc8(plVar3,uVar6);
      lVar8 = (long)plVar3 + lVar8;
      _bzero(lVar8,uVar9 * 0x20);
      lVar7 = lVar8 - (param_1[1] - *param_1);
      _memcpy(lVar7);
      lVar4 = *param_1;
      *param_1 = lVar7;
      param_1[1] = lVar8 + uVar9 * 0x20;
      lVar8 = param_1[2];
      param_1[2] = (long)(plVar3 + uVar6 * 4);
      if (lVar4 == 0) {
        return;
      }
      plVar3 = (long *)(param_1[4] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 - (lVar8 - lVar4);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar4,0x20);
      return;
    }
    _bzero(lVar4,uVar9 * 0x20);
    lVar4 = lVar4 + uVar9 * 0x20;
  }
  else {
    if (lVar8 == 0x10000) {
      return;
    }
    lVar4 = lVar7 + 0x10000;
  }
  param_1[1] = lVar4;
  return;
}



/* Entry: 10ad6da90; end: 10ad6db13;  */

long FUN_10ad6da90(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    while ((*(char *)(param_1 + 0x1c0) == '\x01' &&
           ((uVar3 = *(ulong *)(param_1 + 0x140), uVar3 != *(ulong *)(param_1 + 0x180) ||
            (*(ulong *)(param_1 + 0x180) = *(ulong *)(param_1 + 0xc0),
            uVar3 != *(ulong *)(param_1 + 0xc0)))))) {
      puVar1 = (undefined8 *)
               (*(long *)(param_1 + 0x88) + (*(long *)(param_1 + 0x90) - 1U & uVar3) * 0x20);
      uVar4 = puVar1[2];
      param_2[3] = puVar1[3];
      param_2[2] = uVar4;
      uVar4 = *puVar1;
      param_2[1] = puVar1[1];
      *param_2 = uVar4;
      *(ulong *)(param_1 + 0x140) = uVar3 + 1;
      lVar2 = lVar2 + 1;
      param_2 = param_2 + 4;
      if (param_3 == lVar2) {
        return param_3;
      }
    }
  }
  return lVar2;
}



/* Entry: 10ad6db14; end: 10ad6efe7;  */

void FUN_10ad6db14(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 in_x7;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  ulong *puVar28;
  long lVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  ulong uStack_b8;
  long *plStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar2 = *(byte *)(param_1 + 0x42);
  cVar3 = *(char *)(param_1 + 0x43);
  uVar19 = *(undefined8 *)(param_1 + 0x1ef8);
  uVar13 = *(undefined8 *)(param_1 + 0x1f00);
  lVar8 = *(long *)(param_1 + 0xd8);
  lVar29 = *(long *)(param_1 + 0xd0);
  lVar14 = lVar29;
  if (lVar8 != lVar29) {
    do {
      lVar8 = lVar8 + -0x10;
      func_0x00010ad6ce98();
    } while (lVar8 != lVar29);
    lVar14 = *(long *)(param_1 + 0xd0);
  }
  *(long *)(param_1 + 0xd8) = lVar29;
  uVar20 = lVar29 - lVar14 >> 4;
  if (uVar20 < param_3) {
    uVar20 = param_3 - uVar20;
    if (uVar20 <= (ulong)(*(long *)(param_1 + 0xe0) - lVar29 >> 4)) {
      _bzero(lVar29,uVar20 * 0x10);
      *(ulong *)(param_1 + 0xd8) = lVar29 + uVar20 * 0x10;
      goto LAB_10ad6dd3c;
    }
    if (param_3 >> 0x3c == 0) {
      uVar15 = *(long *)(param_1 + 0xe0) - lVar14;
      uVar21 = (long)uVar15 >> 3;
      if (uVar21 <= param_3) {
        uVar21 = param_3;
      }
      if (0x7fffffffffffffef < uVar15) {
        uVar21 = 0xfffffffffffffff;
      }
      puVar16 = *(ulong **)(param_1 + 0xf0);
      uVar30 = uVar21 * 0x10;
      uVar15 = puVar16[1] + uVar21 * 0x10;
      if (uVar15 <= *puVar16) {
        puVar28 = puVar16 + 1;
        uVar22 = puVar16[1];
        do {
          uVar27 = *puVar28;
          if (uVar27 == uVar22) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar7) {
              *puVar28 = uVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              if (uVar21 >> 0x3c != 0) goto LAB_10ad6ee44;
              __Znwm();
              lVar8 = *(long *)(param_1 + 0xd0);
              lVar33 = *(long *)(param_1 + 0xe0);
              lVar32 = *(long *)(param_1 + 0xd8) - lVar8;
              lVar14 = uVar30 + (lVar29 - lVar14);
              _bzero(lVar14,uVar20 * 0x10);
              lVar29 = lVar14 - lVar32;
              _memcpy(lVar29,lVar8,lVar32);
              *(long *)(param_1 + 0xd0) = lVar29;
              *(ulong *)(param_1 + 0xd8) = lVar14 + uVar20 * 0x10;
              *(ulong *)(param_1 + 0xe0) = uVar30 + uVar21 * 0x10;
              if (lVar8 != 0) {
                plVar9 = (long *)(*(long *)(param_1 + 0xf0) + 8);
                do {
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar7) {
                    *plVar9 = *plVar9 - (lVar33 - lVar8);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                __ZdlPv(lVar8);
              }
              goto LAB_10ad6dd3c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          uVar15 = uVar27 + uVar30;
          uVar22 = uVar27;
        } while (uVar15 <= *puVar16);
      }
      uStack_b8 = uVar30;
      func_0x0001098c692c(&uStack_b8);
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10ad6ef98;
    }
LAB_10ad6ee38:
    FUN_10ad6f114();
LAB_10ad6ee3c:
    func_0x00010ad6f128();
  }
  else {
    if (param_3 < uVar20) {
      lVar14 = lVar14 + param_3 * 0x10;
      while (lVar29 != lVar14) {
        lVar29 = lVar29 + -0x10;
        func_0x00010ad6ce98(lVar29);
      }
      *(long *)(param_1 + 0xd8) = lVar14;
    }
LAB_10ad6dd3c:
    lVar8 = *(long *)(param_1 + 0xf8);
    lVar29 = *(long *)(param_1 + 0x100);
    lVar14 = lVar8;
    if (lVar29 != lVar8) {
      do {
        lVar29 = lVar29 + -0x10;
        func_0x00010ad6ce40();
      } while (lVar29 != lVar8);
      lVar14 = *(long *)(param_1 + 0xf8);
    }
    *(long *)(param_1 + 0x100) = lVar8;
    uVar20 = lVar8 - lVar14 >> 4;
    if (uVar20 < param_3) {
      uVar20 = param_3 - uVar20;
      if (uVar20 <= (ulong)(*(long *)(param_1 + 0x108) - lVar8 >> 4)) {
        _bzero(lVar8,uVar20 * 0x10);
        *(ulong *)(param_1 + 0x100) = lVar8 + uVar20 * 0x10;
        goto LAB_10ad6defc;
      }
      if (param_3 >> 0x3c == 0) {
        uVar15 = *(long *)(param_1 + 0x108) - lVar14;
        uVar21 = (long)uVar15 >> 3;
        if (uVar21 <= param_3) {
          uVar21 = param_3;
        }
        if (0x7fffffffffffffef < uVar15) {
          uVar21 = 0xfffffffffffffff;
        }
        puVar16 = *(ulong **)(param_1 + 0x118);
        uVar30 = uVar21 * 0x10;
        uVar15 = puVar16[1] + uVar21 * 0x10;
        if (uVar15 <= *puVar16) {
          puVar28 = puVar16 + 1;
          uVar22 = puVar16[1];
          do {
            uVar27 = *puVar28;
            if (uVar27 == uVar22) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar28,0x10);
              if (bVar7) {
                *puVar28 = uVar15;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                if (uVar21 >> 0x3c != 0) {
                  func_0x000109ffded8();
                  goto LAB_10ad6ef98;
                }
                __Znwm();
                lVar29 = *(long *)(param_1 + 0xf8);
                lVar33 = *(long *)(param_1 + 0x108);
                lVar32 = *(long *)(param_1 + 0x100) - lVar29;
                lVar14 = uVar30 + (lVar8 - lVar14);
                _bzero(lVar14,uVar20 * 0x10);
                lVar8 = lVar14 - lVar32;
                _memcpy(lVar8,lVar29,lVar32);
                *(long *)(param_1 + 0xf8) = lVar8;
                *(ulong *)(param_1 + 0x100) = lVar14 + uVar20 * 0x10;
                *(ulong *)(param_1 + 0x108) = uVar30 + uVar21 * 0x10;
                if (lVar29 != 0) {
                  plVar9 = (long *)(*(long *)(param_1 + 0x118) + 8);
                  do {
                    cVar5 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                    if (bVar7) {
                      *plVar9 = *plVar9 - (lVar33 - lVar29);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  __ZdlPv(lVar29);
                }
                goto LAB_10ad6defc;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            uVar15 = uVar27 + uVar30;
            uVar22 = uVar27;
          } while (uVar15 <= *puVar16);
        }
        uStack_b8 = uVar30;
        func_0x0001098c692c(&uStack_b8);
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10ad6ef98;
      }
      goto LAB_10ad6ee3c;
    }
    if (param_3 < uVar20) {
      lVar14 = lVar14 + param_3 * 0x10;
      while (lVar8 != lVar14) {
        lVar8 = lVar8 + -0x10;
        func_0x00010ad6ce40(lVar8);
      }
      *(long *)(param_1 + 0x100) = lVar14;
    }
LAB_10ad6defc:
    lVar8 = *(long *)(param_1 + 0x120);
    lVar29 = *(long *)(param_1 + 0x128);
    lVar14 = lVar8;
    if (lVar29 != lVar8) {
      do {
        lVar29 = lVar29 + -0x10;
        func_0x00010ad6cde8();
      } while (lVar29 != lVar8);
      lVar14 = *(long *)(param_1 + 0x120);
    }
    *(long *)(param_1 + 0x128) = lVar8;
    uVar20 = lVar8 - lVar14 >> 4;
    if (param_3 <= uVar20) {
      if (param_3 < uVar20) {
        lVar14 = lVar14 + param_3 * 0x10;
        while (lVar8 != lVar14) {
          lVar8 = lVar8 + -0x10;
          func_0x00010ad6cde8(lVar8);
        }
        *(long *)(param_1 + 0x128) = lVar14;
      }
LAB_10ad6e0bc:
      if (param_3 != 0) goto LAB_10ad6e0c0;
LAB_10ad6e8e8:
      if ((bVar2 & 1) != 0) {
        func_0x0001098c5d94(param_1 + 0x1e30,uVar19);
        func_0x0001098c5f58(param_1 + 0x1e30,uVar13);
      }
      if (cVar3 != '\0') {
        lVar14 = *(long *)(param_1 + 0xa8);
        lVar8 = *(long *)(param_1 + 0xb0);
        lVar29 = lVar14;
        if (lVar8 != lVar14) {
          do {
            lVar8 = lVar8 + -0xb0;
            func_0x00010ad6cf48(lVar8);
          } while (lVar8 != lVar14);
          lVar29 = *(long *)(param_1 + 0xa8);
        }
        *(long *)(param_1 + 0xb0) = lVar14;
        lVar8 = lVar14 - lVar29 >> 4;
        bVar7 = param_3 < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3);
        uVar20 = param_3 + lVar8 * -0x2e8ba2e8ba2e8ba3;
        if (bVar7 || uVar20 == 0) {
          if (bVar7) {
            lVar29 = lVar29 + param_3 * 0xb0;
            while (lVar14 != lVar29) {
              lVar14 = lVar14 + -0xb0;
              func_0x00010ad6cf48(lVar14);
            }
            goto LAB_10ad6eaa4;
          }
        }
        else {
          if ((ulong)((*(long *)(param_1 + 0xb8) - lVar14 >> 4) * 0x2e8ba2e8ba2e8ba3) < uVar20) {
            if (param_3 < 0x1745d1745d1745e) {
              lVar8 = *(long *)(param_1 + 0xb8) - lVar29 >> 4;
              uVar21 = lVar8 * 0x5d1745d1745d1746;
              if (uVar21 < param_3 || uVar21 - param_3 == 0) {
                uVar21 = param_3;
              }
              if (0xba2e8ba2e8ba2d < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
                uVar21 = 0x1745d1745d1745d;
              }
              puVar16 = *(ulong **)(param_1 + 200);
              uVar30 = uVar21 * 0xb0;
              uVar15 = puVar16[1] + uVar30;
              if (uVar15 <= *puVar16) {
                puVar28 = puVar16 + 1;
                uVar22 = puVar16[1];
                do {
                  uVar27 = *puVar28;
                  if (uVar27 == uVar22) {
                    cVar5 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar28,0x10);
                    if (bVar7) {
                      *puVar28 = uVar15;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 != '\0') goto LAB_10ad6ea10;
                    if (uVar21 < 0x1745d1745d1745e) {
                      __Znwm();
                      puVar31 = *(undefined8 **)(param_1 + 0xa8);
                      puVar10 = *(undefined8 **)(param_1 + 0xb0);
                      lVar8 = uVar30 + (lVar14 - lVar29);
                      lVar14 = ((uVar20 * 0xb0 - 0xb0) / 0xb0) * 0xb0 + 0xb0;
                      _bzero(lVar8,lVar14);
                      lVar14 = lVar8 + lVar14;
                      puVar34 = (undefined8 *)((long)puVar31 + (lVar8 - (long)puVar10));
                      puVar17 = puVar31;
                      puVar23 = puVar34;
                      if (puVar10 != puVar31) {
                        do {
                          uVar35 = *puVar17;
                          puVar23[1] = puVar17[1];
                          *puVar23 = uVar35;
                          uVar36 = puVar17[3];
                          uVar35 = puVar17[2];
                          uVar38 = puVar17[5];
                          uVar37 = puVar17[4];
                          uVar39 = puVar17[6];
                          uVar41 = puVar17[9];
                          uVar40 = puVar17[8];
                          puVar23[7] = puVar17[7];
                          puVar23[6] = uVar39;
                          puVar23[9] = uVar41;
                          puVar23[8] = uVar40;
                          puVar23[3] = uVar36;
                          puVar23[2] = uVar35;
                          puVar23[5] = uVar38;
                          puVar23[4] = uVar37;
                          uVar35 = puVar17[10];
                          puVar23[0xb] = puVar17[0xb];
                          puVar23[10] = uVar35;
                          puVar17[10] = 0;
                          puVar17[0xb] = 0;
                          uVar35 = puVar17[0xc];
                          puVar23[0xd] = puVar17[0xd];
                          puVar23[0xc] = uVar35;
                          puVar23[0xe] = puVar17[0xe];
                          puVar17[0xc] = 0;
                          puVar17[0xd] = 0;
                          puVar17[0xe] = 0;
                          uVar35 = puVar17[0xf];
                          puVar23[0x10] = puVar17[0x10];
                          puVar23[0xf] = uVar35;
                          puVar17[0xf] = 0;
                          puVar17[0x10] = 0;
                          uVar36 = puVar17[0x12];
                          uVar35 = puVar17[0x11];
                          uVar38 = puVar17[0x14];
                          uVar37 = puVar17[0x13];
                          puVar23[0x15] = puVar17[0x15];
                          puVar23[0x14] = uVar38;
                          puVar23[0x13] = uVar37;
                          puVar23[0x12] = uVar36;
                          puVar23[0x11] = uVar35;
                          puVar17 = puVar17 + 0x16;
                          puVar23 = puVar23 + 0x16;
                        } while (puVar17 != puVar10);
                        do {
                          func_0x00010ad6cf48(puVar31);
                          puVar31 = puVar31 + 0x16;
                        } while (puVar31 != puVar10);
                        puVar31 = *(undefined8 **)(param_1 + 0xa8);
                      }
                      *(undefined8 **)(param_1 + 0xa8) = puVar34;
                      *(long *)(param_1 + 0xb0) = lVar14;
                      lVar8 = *(long *)(param_1 + 0xb8);
                      *(ulong *)(param_1 + 0xb8) = uVar30 + uVar21 * 0xb0;
                      if (puVar31 != (undefined8 *)0x0) {
                        plVar9 = (long *)(*(long *)(param_1 + 200) + 8);
                        do {
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                          if (bVar7) {
                            *plVar9 = *plVar9 - (lVar8 - (long)puVar31);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        __ZdlPv(puVar31);
                        lVar14 = *(long *)(param_1 + 0xb0);
                      }
                      goto LAB_10ad6ebd4;
                    }
                    func_0x000109ffded8();
                    goto LAB_10ad6ef98;
                  }
                  ClearExclusiveLocal();
LAB_10ad6ea10:
                  uVar15 = uVar27 + uVar30;
                  uVar22 = uVar27;
                } while (uVar15 <= *puVar16);
              }
              uStack_b8 = uVar30;
              func_0x0001098c692c(&uStack_b8);
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
            }
            else {
              FUN_10ad6f578();
            }
            goto LAB_10ad6ef98;
          }
          lVar8 = ((uVar20 * 0xb0 - 0xb0) / 0xb0) * 0xb0 + 0xb0;
          _bzero(lVar14,lVar8);
          lVar29 = lVar14 + lVar8;
LAB_10ad6eaa4:
          lVar14 = lVar29;
          *(long *)(param_1 + 0xb0) = lVar14;
        }
LAB_10ad6ebd4:
        func_0x0001098c727c(param_2,param_3,uVar19,uVar13,*(long *)(param_1 + 0xa8),
                            (lVar14 - *(long *)(param_1 + 0xa8) >> 4) * 0x2e8ba2e8ba2e8ba3,
                            param_1 + 0x1f08,in_x7,*(long *)(param_1 + 0xd0),
                            *(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 4,
                            *(long *)(param_1 + 0x120),
                            *(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 4);
        plVar9 = *(long **)(param_1 + 0x60);
        if (plVar9 != (long *)0x0) {
          uStack_b8 = *(ulong *)(param_1 + 0xa8);
          plStack_b0 = (long *)(((long)(*(long *)(param_1 + 0xb0) - uStack_b8) >> 4) *
                               0x2e8ba2e8ba2e8ba3);
          (**(code **)(*plVar9 + 0x30))(plVar9,&uStack_b8);
        }
      }
      if ((cVar3 != '\0' || bVar2 != 0) && (param_3 != 0)) {
        uVar20 = 0;
        plVar9 = (long *)(param_1 + 0x1f10);
        do {
          puVar16 = (ulong *)(param_2 + uVar20 * 0x20);
          if ((*(char *)((long)puVar16 + 0x1e) == '\x02') &&
             (plVar11 = (long *)*plVar9, plVar11 != (long *)0x0)) {
            uVar21 = *puVar16;
            plVar24 = plVar9;
            plVar26 = plVar11;
            do {
              lVar14 = 8;
              if (uVar21 <= (ulong)plVar26[4]) {
                lVar14 = 0;
                plVar24 = plVar26;
              }
              plVar26 = *(long **)((long)plVar26 + lVar14);
            } while (plVar26 != (long *)0x0);
            if ((plVar24 != plVar9) &&
               (plVar25 = plVar11, plVar26 = plVar9, (ulong)plVar24[4] <= uVar21)) {
              do {
                lVar14 = 8;
                if (uVar21 <= (ulong)plVar25[4]) {
                  lVar14 = 0;
                  plVar26 = plVar25;
                }
                puVar17 = (undefined8 *)((long)plVar25 + lVar14);
                plVar25 = (long *)*puVar17;
              } while ((long *)*puVar17 != (long *)0x0);
              if ((plVar26 != plVar9) && ((ulong)plVar26[4] <= uVar21)) {
                plVar24 = (long *)plVar26[1];
                plVar25 = plVar26;
                if ((long *)plVar26[1] == (long *)0x0) {
                  do {
                    plVar18 = (long *)plVar25[2];
                    bVar7 = (long *)*plVar18 != plVar25;
                    plVar25 = plVar18;
                  } while (bVar7);
                }
                else {
                  do {
                    plVar18 = plVar24;
                    plVar24 = (long *)*plVar18;
                  } while ((long *)*plVar18 != (long *)0x0);
                }
                if (*(long **)(param_1 + 0x1f08) == plVar26) {
                  *(long **)(param_1 + 0x1f08) = plVar18;
                }
                *(long *)(param_1 + 0x1f28) = *(long *)(param_1 + 0x1f28) + -1;
                FUN_10a04815c(plVar11,plVar26);
                func_0x00010ad6ce98(plVar26 + 5);
                plVar11 = (long *)(*(long *)(param_1 + 0x1f20) + 8);
                do {
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar7) {
                    *plVar11 = *plVar11 + -0x38;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                __ZdlPv(plVar26);
              }
            }
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != param_3);
      }
      lVar14 = *(long *)(param_1 + 0xd0);
      lVar8 = *(long *)(param_1 + 0xd8);
      while (lVar8 != lVar14) {
        lVar8 = lVar8 + -0x10;
        func_0x00010ad6ce98();
      }
      *(long *)(param_1 + 0xd8) = lVar14;
      lVar14 = *(long *)(param_1 + 0xf8);
      lVar8 = *(long *)(param_1 + 0x100);
      while (lVar8 != lVar14) {
        lVar8 = lVar8 + -0x10;
        func_0x00010ad6ce40();
      }
      *(long *)(param_1 + 0x100) = lVar14;
      lVar14 = *(long *)(param_1 + 0x120);
      lVar8 = *(long *)(param_1 + 0x128);
      while (lVar8 != lVar14) {
        lVar8 = lVar8 + -0x10;
        func_0x00010ad6cde8();
      }
      *(long *)(param_1 + 0x128) = lVar14;
      lVar14 = *(long *)(param_1 + 0xa8);
      lVar8 = *(long *)(param_1 + 0xb0);
      while (lVar8 != lVar14) {
        lVar8 = lVar8 + -0xb0;
        func_0x00010ad6cf48(lVar8);
      }
      *(long *)(param_1 + 0xb0) = lVar14;
      plVar9 = (long *)(param_1 + 0x210);
      do {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
      goto LAB_10ad6ee38;
    }
    uVar20 = param_3 - uVar20;
    if (uVar20 <= (ulong)(*(long *)(param_1 + 0x130) - lVar8 >> 4)) {
      _bzero(lVar8,uVar20 * 0x10);
      *(ulong *)(param_1 + 0x128) = lVar8 + uVar20 * 0x10;
LAB_10ad6e0c0:
      uVar20 = 0;
LAB_10ad6e0dc:
      puVar16 = (ulong *)(param_2 + uVar20 * 0x20);
      if (cVar3 == '\0' && bVar2 == 0) goto LAB_10ad6e520;
      bVar4 = *(byte *)((long)puVar16 + 0x1e);
      uVar12 = (uint)bVar4;
      if (bVar4 < 0x10) {
        if (bVar4 < 0xb) {
          if (uVar12 != 1) {
            if (uVar12 == 4 || uVar12 == 7) goto LAB_10ad6e354;
            goto LAB_10ad6e520;
          }
          uVar21 = *puVar16;
          uStack_88 = *(undefined8 *)(param_1 + 0x78);
          FUN_10ad6f150(&uStack_b8,puVar16[1],uStack_88,&uStack_90);
          puVar17 = (undefined8 *)(param_1 + 0x1f10);
          while (puVar31 = (undefined8 *)*puVar17, puVar34 = puVar17,
                (undefined8 *)*puVar17 != (undefined8 *)0x0) {
            while (puVar10 = puVar31, puVar17 = puVar10, (ulong)puVar10[4] <= uVar21) {
              if (uVar21 <= (ulong)puVar10[4]) goto LAB_10ad6e4d8;
              puVar31 = (undefined8 *)puVar10[1];
              if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) {
                puVar17 = puVar10 + 1;
                puVar34 = puVar10;
                goto LAB_10ad6e3f4;
              }
            }
          }
LAB_10ad6e3f4:
          puVar28 = *(ulong **)(param_1 + 0x1f20);
          uVar15 = puVar28[1] + 0x38;
          if (uVar15 <= *puVar28) {
            puVar1 = puVar28 + 1;
            uVar30 = puVar28[1];
            do {
              uVar22 = *puVar1;
              if (uVar22 == uVar30) {
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar7) {
                  *puVar1 = uVar15;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_10ad6e484;
              }
              else {
                ClearExclusiveLocal();
              }
              uVar15 = uVar22 + 0x38;
              uVar30 = uVar22;
              if (*puVar28 < uVar15) break;
            } while( true );
          }
          uStack_90 = 0x38;
          func_0x0001098c692c(&uStack_90);
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
        }
        else if (uVar12 - 0xd < 3) {
          uVar15 = puVar16[1];
          puVar28 = *(ulong **)(param_1 + 0x78);
          uVar21 = puVar28[1] + 0x38;
          uStack_b8 = uVar15;
          puStack_a8 = puVar28;
          if (uVar21 <= *puVar28) {
            puVar1 = puVar28 + 1;
            uVar30 = puVar28[1];
            do {
              uVar22 = *puVar1;
              if (uVar22 == uVar30) {
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar7) {
                  *puVar1 = uVar21;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_10ad6e2c4;
              }
              else {
                ClearExclusiveLocal();
              }
              uVar21 = uVar22 + 0x38;
              uVar30 = uVar22;
              if (*puVar28 < uVar21) break;
            } while( true );
          }
          uStack_98 = 0x38;
          func_0x0001098c692c(&uStack_98);
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
        }
        else {
          if (uVar12 != 0xb) goto LAB_10ad6e520;
LAB_10ad6e354:
          uStack_78 = *(undefined8 *)(param_1 + 0x78);
          FUN_10ad6f150(&uStack_b8,puVar16[1],uStack_78,auStack_80);
          if (uVar20 < (ulong)(*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 4)) {
            func_0x00010ad6efe8(*(long *)(param_1 + 0xd0) + uVar20 * 0x10,&uStack_b8);
            if (plStack_b0 == (long *)0x0) goto LAB_10ad6e520;
            plVar9 = plStack_b0 + 1;
            do {
              lVar14 = *plVar9;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_10ad6e504;
          }
        }
      }
      else {
        if (3 < uVar12 - 0x10) {
          if (uVar12 != 0x14) goto LAB_10ad6e520;
          if (bVar2 != 0) {
            func_0x0001098c5ef4(param_1 + 0x1e30,(int)puVar16[3],*puVar16);
            goto LAB_10ad6e524;
          }
          goto LAB_10ad6e690;
        }
        uVar15 = puVar16[1];
        puVar28 = *(ulong **)(param_1 + 0x78);
        uVar21 = puVar28[1] + 0x38;
        uStack_b8 = uVar15;
        puStack_a0 = puVar28;
        if (uVar21 <= *puVar28) {
          puVar1 = puVar28 + 1;
          uVar30 = puVar28[1];
          do {
            uVar22 = *puVar1;
            if (uVar22 == uVar30) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar21;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_10ad6e248;
            }
            else {
              ClearExclusiveLocal();
            }
            uVar21 = uVar22 + 0x38;
            uVar30 = uVar22;
            if (*puVar28 < uVar21) break;
          } while( true );
        }
        uStack_98 = 0x38;
        func_0x0001098c692c(&uStack_98);
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
      }
      goto LAB_10ad6ef98;
    }
    if (param_3 >> 0x3c == 0) {
      uVar15 = *(long *)(param_1 + 0x130) - lVar14;
      uVar21 = (long)uVar15 >> 3;
      if (uVar21 <= param_3) {
        uVar21 = param_3;
      }
      if (0x7fffffffffffffef < uVar15) {
        uVar21 = 0xfffffffffffffff;
      }
      puVar16 = *(ulong **)(param_1 + 0x140);
      uVar30 = uVar21 * 0x10;
      uVar15 = puVar16[1] + uVar21 * 0x10;
      if (uVar15 <= *puVar16) {
        puVar28 = puVar16 + 1;
        uVar22 = puVar16[1];
        do {
          uVar27 = *puVar28;
          if (uVar27 == uVar22) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar7) {
              *puVar28 = uVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              if (uVar21 >> 0x3c != 0) {
                func_0x000109ffded8();
                goto LAB_10ad6ef98;
              }
              __Znwm();
              lVar29 = *(long *)(param_1 + 0x120);
              lVar33 = *(long *)(param_1 + 0x130);
              lVar32 = *(long *)(param_1 + 0x128) - lVar29;
              lVar14 = uVar30 + (lVar8 - lVar14);
              _bzero(lVar14,uVar20 * 0x10);
              lVar8 = lVar14 - lVar32;
              _memcpy(lVar8,lVar29,lVar32);
              *(long *)(param_1 + 0x120) = lVar8;
              *(ulong *)(param_1 + 0x128) = lVar14 + uVar20 * 0x10;
              *(ulong *)(param_1 + 0x130) = uVar30 + uVar21 * 0x10;
              if (lVar29 != 0) {
                plVar9 = (long *)(*(long *)(param_1 + 0x140) + 8);
                do {
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar7) {
                    *plVar9 = *plVar9 - (lVar33 - lVar29);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                __ZdlPv(lVar29);
              }
              goto LAB_10ad6e0bc;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          uVar15 = uVar27 + uVar30;
          uVar22 = uVar27;
        } while (uVar15 <= *puVar16);
      }
      uStack_b8 = uVar30;
      func_0x0001098c692c(&uStack_b8);
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10ad6ef98;
    }
  }
  func_0x00010ad6f13c();
LAB_10ad6ee44:
  func_0x000109ffded8();
LAB_10ad6ef98:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad6ef9c);
  (*pcVar6)();
LAB_10ad6e248:
  plVar9 = (long *)0x38;
  __Znwm();
  *plVar9 = (long)&PTR_FUN_110c716f8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = uVar15;
  plVar9[4] = (long)puVar28;
  plVar9[6] = (long)puVar28;
  plStack_b0 = plVar9;
  if ((ulong)(*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 4) <= uVar20)
  goto LAB_10ad6ef98;
  func_0x00010ad6f0b0(*(long *)(param_1 + 0x120) + uVar20 * 0x10,&uStack_b8);
  if (plStack_b0 == (long *)0x0) goto LAB_10ad6e520;
  plVar9 = plStack_b0 + 1;
  do {
    lVar14 = *plVar9;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = lVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_10ad6e504:
  plVar9 = plStack_b0;
  if (lVar14 == 0) {
    (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10ad6e520:
  if (bVar2 != 0) {
LAB_10ad6e524:
    if ((ulong)(*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 4) <= uVar20)
    goto LAB_10ad6ef98;
    puVar17 = (undefined8 *)(*(long *)(param_1 + 0xd0) + uVar20 * 0x10);
    plStack_c8 = (long *)puVar17[1];
    uStack_d0 = *puVar17;
    if (puVar17[1] != 0) {
      plVar9 = (long *)(puVar17[1] + 8);
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if ((ulong)(*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 4) <= uVar20)
    goto LAB_10ad6ef98;
    puVar17 = (undefined8 *)(*(long *)(param_1 + 0xf8) + uVar20 * 0x10);
    plStack_d8 = (long *)puVar17[1];
    uStack_e0 = *puVar17;
    if (puVar17[1] != 0) {
      plVar9 = (long *)(puVar17[1] + 8);
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if ((ulong)(*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 4) <= uVar20)
    goto LAB_10ad6ef98;
    puVar17 = (undefined8 *)(*(long *)(param_1 + 0x120) + uVar20 * 0x10);
    plStack_e8 = (long *)puVar17[1];
    uStack_f0 = *puVar17;
    if (puVar17[1] != 0) {
      plVar9 = (long *)(puVar17[1] + 8);
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    func_0x0001098c2d68(param_1 + 0x1e30,puVar16,&uStack_d0,&uStack_e0,&uStack_f0);
    plVar9 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar11 = plStack_e8 + 1;
      do {
        lVar14 = *plVar11;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar11 = plStack_d8 + 1;
      do {
        lVar14 = *plVar11;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar11 = plStack_c8 + 1;
      do {
        lVar14 = *plVar11;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
LAB_10ad6e690:
  uVar20 = uVar20 + 1;
  if (uVar20 == param_3) goto LAB_10ad6e8e8;
  goto LAB_10ad6e0dc;
LAB_10ad6e484:
  puVar10 = (undefined8 *)0x38;
  __Znwm();
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[4] = uVar21;
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = puVar34;
  *puVar17 = puVar10;
  puVar31 = puVar10;
  if (**(long **)(param_1 + 0x1f08) != 0) {
    *(long *)(param_1 + 0x1f08) = **(long **)(param_1 + 0x1f08);
    puVar31 = (undefined8 *)*puVar17;
  }
  func_0x000107c2b058(*(undefined8 *)(param_1 + 0x1f10),puVar31);
  *(long *)(param_1 + 0x1f28) = *(long *)(param_1 + 0x1f28) + 1;
LAB_10ad6e4d8:
  func_0x00010ad6efe8(puVar10 + 5,&uStack_b8);
  if (plStack_b0 == (long *)0x0) goto LAB_10ad6e520;
  plVar9 = plStack_b0 + 1;
  do {
    lVar14 = *plVar9;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = lVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_10ad6e504;
LAB_10ad6e2c4:
  plVar9 = (long *)0x38;
  __Znwm();
  *plVar9 = (long)&PTR_FUN_110c71698;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = uVar15;
  plVar9[4] = (long)puVar28;
  plVar9[6] = (long)puVar28;
  plStack_b0 = plVar9;
  if ((ulong)(*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 4) <= uVar20)
  goto LAB_10ad6ef98;
  func_0x00010ad6f04c(*(long *)(param_1 + 0xf8) + uVar20 * 0x10,&uStack_b8);
  if (plStack_b0 == (long *)0x0) goto LAB_10ad6e520;
  plVar9 = plStack_b0 + 1;
  do {
    lVar14 = *plVar9;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = lVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_10ad6e504;
}



/* Entry: 10ad6efe8; end: 10ad6f113;  */

undefined8 * FUN_10ad6efe8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ad6f114; end: 10ad6f14f;  */

undefined8 * FUN_10ad6f114(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_78;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar5 = param_2;
  puVar7 = *(ulong **)(param_4 + 8);
  uVar9 = puVar7[1] + 0x38;
  if (uVar9 <= *puVar7) {
    puVar1 = puVar7 + 1;
    uVar11 = puVar7[1];
    do {
      uVar10 = *puVar1;
      if (uVar10 == uVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          puVar6 = (undefined8 *)0x38;
          __Znwm();
          uVar8 = *(undefined8 *)(param_4 + 8);
          *puVar6 = &PTR_FUN_110c71638;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = param_2;
          puVar6[4] = param_3;
          puVar6[6] = uVar8;
          puVar5[1] = puVar6;
          return puVar5;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar9 = uVar10 + 0x38;
      uVar11 = uVar10;
    } while (uVar9 <= *puVar7);
  }
  uStack_78 = 0x38;
  func_0x0001098c692c(&uStack_78);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad6f2b0);
  (*pcVar4)();
}



/* Entry: 10ad6f150; end: 10ad6f2c3;  */

undefined8 * FUN_10ad6f150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_48;
  
  *param_1 = param_2;
  puVar6 = *(ulong **)(param_4 + 8);
  uVar8 = puVar6[1] + 0x38;
  if (uVar8 <= *puVar6) {
    puVar1 = puVar6 + 1;
    uVar10 = puVar6[1];
    do {
      uVar9 = *puVar1;
      if (uVar9 == uVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          puVar5 = (undefined8 *)0x38;
          __Znwm();
          uVar7 = *(undefined8 *)(param_4 + 8);
          *puVar5 = &PTR_FUN_110c71638;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = param_2;
          puVar5[4] = param_3;
          puVar5[6] = uVar7;
          param_1[1] = puVar5;
          return param_1;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar8 = uVar9 + 0x38;
      uVar10 = uVar9;
    } while (uVar8 <= *puVar6);
  }
  uStack_48 = 0x38;
  func_0x0001098c692c(&uStack_48);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad6f2b0);
  (*pcVar4)();
}



/* Entry: 10ad6f2c4; end: 10ad6f323;  */

void FUN_10ad6f2c4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  if ((param_2 != 0) && (*param_1 != 0)) {
    lStack_28 = param_2;
    FUN_10a132f70(&lStack_28);
    plVar1 = (long *)(*param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + -0x28;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10ad6f324; end: 10ad6f327;  */

void FUN_10ad6f324(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6f328; end: 10ad6f33b;  */

void FUN_10ad6f328(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6f33c; end: 10ad6f347;  */

void FUN_10ad6f33c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_28;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if ((lVar4 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    lStack_28 = lVar4;
    FUN_10a132f70(&lStack_28);
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + -0x28;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZdlPv(lVar4);
  }
  return;
}



/* Entry: 10ad6f348; end: 10ad6f383;  */

long FUN_10ad6f348(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c71678);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad6f384; end: 10ad6f39f;  */

void FUN_10ad6f384(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + -0x38;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6f3a0; end: 10ad6f423;  */

void FUN_10ad6f3a0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if ((param_2 != (long *)0x0) && (lVar5 = *param_1, lVar5 != 0)) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      param_2[1] = lVar4;
      lVar5 = param_2[2];
      plVar1 = (long *)(param_2[4] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 - (lVar5 - lVar4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZdlPv();
      lVar5 = *param_1;
    }
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + -0x28;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ad6f424; end: 10ad6f427;  */

void FUN_10ad6f424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6f428; end: 10ad6f43b;  */

void FUN_10ad6f428(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6f43c; end: 10ad6f447;  */

void FUN_10ad6f43c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x18);
  if ((plVar5 != (long *)0x0) && (lVar6 = *(long *)(param_1 + 0x20), lVar6 != 0)) {
    lVar4 = *plVar5;
    if (lVar4 != 0) {
      plVar5[1] = lVar4;
      lVar6 = plVar5[2];
      plVar1 = (long *)(plVar5[4] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 - (lVar6 - lVar4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZdlPv();
      lVar6 = *(long *)(param_1 + 0x20);
    }
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + -0x28;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  return;
}



/* Entry: 10ad6f448; end: 10ad6f483;  */

long FUN_10ad6f448(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c716d8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad6f484; end: 10ad6f49f;  */

void FUN_10ad6f484(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + -0x38;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6f4a0; end: 10ad6f4fb;  */

void FUN_10ad6f4a0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if ((param_2 != 0) && (*param_1 != 0)) {
    FUN_10a1330f0(param_2);
    plVar1 = (long *)(*param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + -200;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ad6f4fc; end: 10ad6f4ff;  */

void FUN_10ad6f4fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6f500; end: 10ad6f513;  */

void FUN_10ad6f500(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6f514; end: 10ad6f51f;  */

void FUN_10ad6f514(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if ((lVar4 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_10a1330f0(lVar4);
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + -200;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10ad6f520; end: 10ad6f55b;  */

long FUN_10ad6f520(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c71738);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad6f55c; end: 10ad6f577;  */

void FUN_10ad6f55c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + -0x38;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6f578; end: 10ad6f58b;  */

void FUN_10ad6f578(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    FUN_10ad5d13c(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10ad6f58c; end: 10ad6f5cb;  */

void FUN_10ad6f58c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10ad5d13c(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad6f5cc; end: 10ad6f5db;  */

void FUN_10ad6f5cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71758;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6f5dc; end: 10ad6f5fb;  */

void FUN_10ad6f5dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71758;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6f5fc; end: 10ad6f613;  */

void FUN_10ad6f5fc(void)

{
  return;
}



/* Entry: 10ad6f614; end: 10ad6f633;  */

void FUN_10ad6f614(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c717a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6f634; end: 10ad6f63b;  */

void FUN_10ad6f634(void)

{
  return;
}



/* Entry: 10ad6f63c; end: 10ad6f6eb;  */

undefined1  [16] FUN_10ad6f63c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  FUN_10ad6f6ec();
  plVar2 = param_1;
  (**(code **)(*param_1 + 0xe8))();
  lVar4 = *plVar2;
  lVar1 = plVar2[1];
  __ZNSt3__115recursive_mutex4lockEv(lVar1);
  ___dynamic_cast(lVar4,&PTR_DAT_110ae26a8,&PTR_DAT_110b989e0,0);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  _objc_retain(uVar3);
  (**(code **)(*param_1 + 0xe0))();
  lVar4 = param_1[0x11b];
  _objc_release(uVar3);
  __ZNSt3__115recursive_mutex6unlockEv(lVar1);
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}



/* Entry: 10ad6f6ec; end: 10ad6f72b;  */

ulong FUN_10ad6f6ec(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uVar2 = (uint)&puStack_20;
  uVar4 = 0;
  FUN_10a2421c8();
  FUN_10a244d68();
  puStack_20 = &UNK_10f6a958b;
  uStack_18 = 0x14;
  if (uVar4 != 0) {
    return uVar4;
  }
  FUN_10a0edfc4();
  if ((bRam00000001138367c8 & 1) == 0) {
    iVar3 = 0x138367c8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_10ad6f7b0();
      bRam00000001138367c0 = (byte)iVar3;
      ___cxa_guard_release(0x1138367c8);
    }
  }
  uVar1 = 0;
  if ((uVar2 == 1 & bRam00000001138367c0) == 0) {
    uVar1 = uVar2;
  }
  return (ulong)uVar1;
}



/* Entry: 10ad6f72c; end: 10ad6f7af;  */

int FUN_10ad6f72c(int param_1)

{
  int iVar1;
  
  if ((bRam00000001138367c8 & 1) == 0) {
    iVar1 = 0x138367c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10ad6f7b0();
      bRam00000001138367c0 = (byte)iVar1;
      ___cxa_guard_release(0x1138367c8);
    }
  }
  iVar1 = 0;
  if ((param_1 == 1 & bRam00000001138367c0) == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}



/* Entry: 10ad6f7b0; end: 10ad6f81b;  */

long FUN_10ad6f7b0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10ad6f6ec();
  (**(code **)(*param_1 + 0xe0))();
  lVar1 = param_1[0x11b];
  func_0x00010c0d4f60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfda7c0();
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10ad6f81c; end: 10ad6f91f;  */

undefined8 * FUN_10ad6f81c(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar2 = &uStack_50;
  puVar5 = (undefined8 *)(param_1 + 0xf0);
  plVar6 = (long *)*puVar5;
  if (plVar6 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = plVar6;
    ___dynamic_cast(plVar6,&PTR_DAT_110bc45d8,&PTR_DAT_110c70c38,0xfffffffffffffffe);
  }
  *(long **)(param_1 + 0x100) = plVar1;
  (**(code **)(*plVar6 + 0x48))();
  *(int *)(param_1 + 0x5c) = (int)plVar6;
  plVar6 = *(long **)(param_1 + 0xf0);
  (**(code **)(*plVar6 + 0x58))();
  *(int *)(param_1 + 0x7c) = (int)plVar6;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x18);
  *(undefined8 *)(param_1 + 0x70) = 0x100000001;
  *(undefined1 *)(param_1 + 0x78) = 1;
  FUN_10a225fb4(param_1 + 0xa8);
  uVar3 = SUB84(puVar5,0);
  *(int *)(param_1 + 0x90) = (int)param_2;
  FUN_10ab99cd4();
  uStack_50 = param_2;
  uStack_48 = uVar3;
  FUN_10a301d18();
  *(undefined8 **)(param_1 + 0x94) = puVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(uint *)(param_1 + 0x80) = param_3;
  if ((1 < param_3) && (*(long *)(param_1 + 0x168) == 0)) {
    puVar2 = (undefined8 *)&UNK_10f6a95c8;
    FUN_10a00946c();
    FUN_10a195bbc(puVar2 + 0x2f);
    func_0x00010a09dbbc(puVar2 + 0x2d);
    _objc_release(puVar2[0x2b]);
    lVar4 = puVar2[0x29];
    puVar2[0x29] = 0;
    if (lVar4 != 0) {
      func_0x00010a159354(puVar2 + 0x29);
    }
    if (puVar2[0x25] != 0) {
      puVar2[0x26] = puVar2[0x25];
      __ZdlPv();
    }
    FUN_10a09d22c(puVar2 + 0x23);
    FUN_10a09d22c(puVar2 + 0x21);
    func_0x00010a09db0c(puVar2 + 0x1e);
    FUN_10ad70e90(puVar2 + 0x1c);
    func_0x00010a276064(puVar2 + 0x1a);
    puVar2[0x17] = &PTR_DAT_110c71980;
    func_0x00010abd8624(puVar2 + 0x18);
    *puVar2 = &PTR_FUN_110c4f858;
    puVar2[7] = &PTR_DAT_110c4f948;
    puVar2[0x14] = &PTR_FUN_110c4f968;
    func_0x00010a09db0c(puVar2 + 0x15);
    *puVar2 = &PTR_DAT_110c4f540;
    puVar2[7] = &PTR_DAT_110c50768;
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10ad6f920; end: 10ad6f9f3;  */

undefined8 * FUN_10ad6f920(undefined8 *param_1)

{
  long lVar1;
  
  FUN_10a195bbc(param_1 + 0x2f);
  func_0x00010a09dbbc(param_1 + 0x2d);
  _objc_release(param_1[0x2b]);
  lVar1 = param_1[0x29];
  param_1[0x29] = 0;
  if (lVar1 != 0) {
    func_0x00010a159354(param_1 + 0x29);
  }
  if (param_1[0x25] != 0) {
    param_1[0x26] = param_1[0x25];
    __ZdlPv();
  }
  FUN_10a09d22c(param_1 + 0x23);
  FUN_10a09d22c(param_1 + 0x21);
  func_0x00010a09db0c(param_1 + 0x1e);
  FUN_10ad70e90(param_1 + 0x1c);
  func_0x00010a276064(param_1 + 0x1a);
  param_1[0x17] = &PTR_DAT_110c71980;
  func_0x00010abd8624(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c4f858;
  param_1[7] = &PTR_DAT_110c4f948;
  param_1[0x14] = &PTR_FUN_110c4f968;
  func_0x00010a09db0c(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c4f540;
  param_1[7] = &PTR_DAT_110c50768;
  return param_1;
}



/* Entry: 10ad6f9f4; end: 10ad6fb73;  */

undefined8 *
FUN_10ad6f9f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  puVar3 = param_1;
  FUN_10ab99e60(param_1,0);
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  *puVar3 = &PTR_FUN_110c717f8;
  puVar3[7] = &PTR_DAT_110c718f8;
  puVar3[0x14] = &PTR_FUN_110c71918;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = &PTR_DAT_110c71940;
  puVar3[0x1b] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x21] = 0;
  puVar3[0x20] = 0;
  puVar3[0x23] = 0;
  puVar3[0x22] = 0;
  puVar3[0x25] = 0;
  puVar3[0x24] = 0;
  puVar3[0x27] = 0;
  puVar3[0x26] = 0;
  *(undefined4 *)(puVar3 + 0x28) = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2b] = 0;
  *(undefined1 *)(puVar3 + 0x2c) = 1;
  puVar3[0x2e] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x30] = 0;
  puVar3[0x2f] = 0;
  FUN_10a15d66c(puVar3 + 0x2d,param_8);
  *(undefined4 *)(param_1 + 0x28) = param_6;
  *(undefined1 *)((long)param_1 + 0x84) = param_7;
  uVar6 = param_4;
  FUN_10ab79b88(param_4);
  FUN_10ad55970(auStack_60,param_2,param_3,uVar6,0);
  func_0x00010a099dfc(param_1 + 0x1e,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar4 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  uVar6 = param_1[8];
  plVar4 = (long *)param_1[0x1e];
  (**(code **)(*plVar4 + 0x58))();
  FUN_10a303840(uVar6,plVar4,0,0);
  FUN_10ad6f81c(param_1,param_4,param_5);
  return param_1;
}



/* Entry: 10ad6fb74; end: 10ad6fb77;  */

undefined8 * FUN_10ad6fb74(undefined8 *param_1)

{
  long lVar1;
  
  FUN_10a195bbc(param_1 + 0x2f);
  func_0x00010a09dbbc(param_1 + 0x2d);
  _objc_release(param_1[0x2b]);
  lVar1 = param_1[0x29];
  param_1[0x29] = 0;
  if (lVar1 != 0) {
    func_0x00010a159354(param_1 + 0x29);
  }
  if (param_1[0x25] != 0) {
    param_1[0x26] = param_1[0x25];
    __ZdlPv();
  }
  FUN_10a09d22c(param_1 + 0x23);
  FUN_10a09d22c(param_1 + 0x21);
  func_0x00010a09db0c(param_1 + 0x1e);
  FUN_10ad70e90(param_1 + 0x1c);
  func_0x00010a276064(param_1 + 0x1a);
  param_1[0x17] = &PTR_DAT_110c71980;
  func_0x00010abd8624(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c4f858;
  param_1[7] = &PTR_DAT_110c4f948;
  param_1[0x14] = &PTR_FUN_110c4f968;
  func_0x00010a09db0c(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c4f540;
  param_1[7] = &PTR_DAT_110c50768;
  return param_1;
}



/* Entry: 10ad6fb78; end: 10ad6fc67;  */

undefined8 * FUN_10ad6fb78(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_10ab99e60(param_1,0);
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  *puVar2 = &PTR_FUN_110c717f8;
  puVar2[7] = &PTR_DAT_110c718f8;
  puVar2[0x14] = &PTR_FUN_110c71918;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = &PTR_DAT_110c71940;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x21] = 0;
  puVar2[0x20] = 0;
  puVar2[0x23] = 0;
  puVar2[0x22] = 0;
  puVar2[0x25] = 0;
  puVar2[0x24] = 0;
  puVar2[0x27] = 0;
  puVar2[0x26] = 0;
  *(undefined4 *)(puVar2 + 0x28) = 0;
  puVar2[0x29] = 0;
  puVar2[0x2a] = 0;
  puVar2[0x2b] = 0;
  *(undefined1 *)(puVar2 + 0x2c) = 1;
  puVar2[0x2e] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x30] = 0;
  puVar2[0x2f] = 0;
  puStack_30 = &UNK_10f6a95a0;
  uStack_28 = 0x27;
  if (*param_2 != 0) {
    func_0x00010a099dfc(param_1 + 0x1e,param_2);
    uVar3 = (ulong)*(uint *)(param_1[0x1e] + 0x34);
    FUN_10a3158cc(uVar3);
    FUN_10ab79c98();
    FUN_10ad6f81c(param_1,uVar3,1);
    return param_1;
  }
  FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad6fc54);
  (*pcVar1)();
}



/* Entry: 10ad6fc68; end: 10ad6fda7;  */

undefined8 *
FUN_10ad6fc68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  puVar3 = param_1;
  FUN_10ab99e60(param_1,0);
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  *puVar3 = &PTR_FUN_110c717f8;
  puVar3[7] = &PTR_DAT_110c718f8;
  puVar3[0x14] = &PTR_FUN_110c71918;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = &PTR_DAT_110c71940;
  puVar3[0x1b] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x21] = 0;
  puVar3[0x20] = 0;
  puVar3[0x23] = 0;
  puVar3[0x22] = 0;
  puVar3[0x25] = 0;
  puVar3[0x24] = 0;
  puVar3[0x27] = 0;
  puVar3[0x26] = 0;
  *(undefined4 *)(puVar3 + 0x28) = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2b] = 0;
  *(undefined1 *)(puVar3 + 0x2c) = 1;
  puVar3[0x2e] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x30] = 0;
  puVar3[0x2f] = 0;
  FUN_10ad55ab4(auStack_40,param_2,param_4);
  func_0x00010a099dfc(param_1 + 0x1e,auStack_40);
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
  uVar6 = param_1[8];
  plVar4 = (long *)param_1[0x1e];
  (**(code **)(*plVar4 + 0x58))();
  FUN_10a303840(uVar6,plVar4,0,0);
  FUN_10ad6f81c(param_1,param_3,1);
  return param_1;
}



/* Entry: 10ad6fda8; end: 10ad6fdc3;  */

void FUN_10ad6fda8(void)

{
  return;
}



/* Entry: 10ad6fdc4; end: 10ad6fe1f;  */

void FUN_10ad6fdc4(void)

{
  FUN_10ad6f920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6fe20; end: 10ad6feaf;  */

undefined8 FUN_10ad6fe20(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x188;
  __Znwm(0x188);
  FUN_10ad6f9f4();
  return uVar1;
}



/* Entry: 10ad6feb0; end: 10ad6ff4b;  */

undefined8 FUN_10ad6feb0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  uVar4 = 0x188;
  __Znwm(0x188);
  plVar6 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10ad6fb78();
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
  return uVar4;
}



/* Entry: 10ad6ff4c; end: 10ad6fff7;  */

/* WARNING: Removing unreachable block (ram,0x00010ad7010c) */
/* WARNING: Removing unreachable block (ram,0x00010ad7015c) */
/* WARNING: Removing unreachable block (ram,0x00010ad70160) */
/* WARNING: Removing unreachable block (ram,0x00010ad70168) */
/* WARNING: Removing unreachable block (ram,0x00010ad70170) */
/* WARNING: Removing unreachable block (ram,0x00010ad70174) */

long * FUN_10ad6ff4c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulong uStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  ulong uStack_38;
  
  if (*(long *)(param_1 + 0x168) == 0) {
    ppuVar4 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    if (*(long *)(param_1 + 0x108) == 0) {
      puVar6 = (ulong *)**(undefined8 **)*ppuVar4;
      plVar3 = *(long **)(param_1 + 0xf0);
      (**(code **)(*plVar3 + 0x30))();
      uStack_60 = *(undefined8 *)((long)plVar3 + 0x34);
      uStack_68 = *(undefined8 *)((long)plVar3 + 0x2c);
      uStack_70 = *(undefined8 *)((long)plVar3 + 0x24);
      uStack_48 = *(undefined8 *)((long)plVar3 + 0x4c);
      uStack_58 = (undefined4)*(undefined8 *)((long)plVar3 + 0x3c);
      iStack_54 = (int)((ulong)*(undefined8 *)((long)plVar3 + 0x3c) >> 0x20);
      uStack_50 = (undefined4)*(undefined8 *)((long)plVar3 + 0x44);
      uStack_4c = (undefined4)((ulong)*(undefined8 *)((long)plVar3 + 0x44) >> 0x20);
      uStack_40 = *(undefined4 *)((long)plVar3 + 0x54);
      if (iStack_54 == 4) {
        iStack_54 = 0x27;
      }
      uVar7 = *puVar6;
      plVar3 = *(long **)(param_1 + 0x100);
      (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined1 *)(param_1 + 0x160));
      FUN_109fcac90(uVar7,&uStack_70);
      uStack_38 = uVar7;
      FUN_109fda62c(auStack_80,uVar7,&uStack_38,plVar3,&uStack_70);
      func_0x00010a169c14(param_1 + 0x108,auStack_80);
      if (plStack_78 != (long *)0x0) {
        plVar3 = plStack_78 + 1;
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
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
      *(undefined1 *)(param_1 + 0x160) = 0;
    }
    return (long *)(param_1 + 0x108);
  }
  plVar3 = *(long **)(param_1 + 0x178);
  if (plVar3 == (long *)0x0) {
    uStack_40 = *(uint *)(param_1 + 0x140) & 0xfffffffd;
    uStack_58 = 0;
    iStack_54 = (int)*(undefined8 *)(param_1 + 0x60);
    uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    uStack_4c = 1;
    uStack_48 = (ulong)*(uint *)(param_1 + 0x90);
    uStack_3c = 1;
    uStack_38 = (ulong)*(uint *)(param_1 + 0x80);
    lVar5 = param_1 + 0x168;
    FUN_10a15c208(lVar5,&uStack_58);
    FUN_10ad701c4(param_1 + 0x178,lVar5);
    plVar3 = *(long **)(param_1 + 0x178);
  }
  (**(code **)(*plVar3 + 0xc0))();
  return plVar3;
}



/* Entry: 10ad6fff8; end: 10ad701a3;  */

long FUN_10ad6fff8(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if (*(long *)(param_1 + 0x108) == 0) {
    puVar6 = (undefined8 *)**(undefined8 **)*ppuVar3;
    plVar4 = *(long **)(param_1 + 0xf0);
    (**(code **)(*plVar4 + 0x30))();
    uVar7 = *(undefined8 *)((long)plVar4 + 0x3c);
    uStack_60 = *(undefined8 *)((long)plVar4 + 0x34);
    uStack_68 = *(undefined8 *)((long)plVar4 + 0x2c);
    uStack_70 = *(undefined8 *)((long)plVar4 + 0x24);
    uStack_48 = *(undefined8 *)((long)plVar4 + 0x4c);
    uStack_50 = *(undefined8 *)((long)plVar4 + 0x44);
    uStack_40 = *(undefined4 *)((long)plVar4 + 0x54);
    uStack_58._4_4_ = (int)((ulong)uVar7 >> 0x20);
    bVar2 = uStack_58._4_4_ == 4;
    uStack_58 = uVar7;
    if (bVar2) {
      uStack_58 = CONCAT44(0x27,(int)uVar7);
    }
    uVar7 = *puVar6;
    plVar4 = *(long **)(param_1 + 0x100);
    uStack_38 = uVar7;
    if (param_2 == 0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,0);
      FUN_109fcac90(uVar7,&uStack_70);
      FUN_109fda62c(auStack_80,uVar7,&uStack_38,plVar4,&uStack_70);
      func_0x00010a169c14(param_1 + 0x108,auStack_80);
      if (plStack_78 != (long *)0x0) {
        plVar4 = plStack_78 + 1;
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
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
    }
    else {
      (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined1 *)(param_1 + 0x160));
      FUN_109fcac90(uVar7,&uStack_70);
      FUN_109fda62c(auStack_80,uVar7,&uStack_38,plVar4,&uStack_70);
      func_0x00010a169c14(param_1 + 0x108,auStack_80);
      if (plStack_78 != (long *)0x0) {
        plVar4 = plStack_78 + 1;
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
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
      *(undefined1 *)(param_1 + 0x160) = 0;
    }
  }
  return param_1 + 0x108;
}



/* Entry: 10ad701a4; end: 10ad701c3;  */

undefined8 FUN_10ad701a4(void)

{
  return 0;
}



/* Entry: 10ad701c4; end: 10ad70237;  */

void FUN_10ad701c4(undefined8 *param_1)

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
  
  FUN_10ad70ee8(&uStack_30);
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
  return;
}



/* Entry: 10ad70238; end: 10ad7024f;  */

undefined8 FUN_10ad70238(undefined8 *param_1)

{
  FUN_10ad70254();
  return *param_1;
}



/* Entry: 10ad70250; end: 10ad70253;  */

long * FUN_10ad70250(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    if (*(long *)(param_1 + 0x118) == 0) {
      ppuVar3 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar6 = *(undefined8 **)(*(long *)*ppuVar3 + 8);
      plVar4 = *(long **)(param_1 + 0xf0);
      (**(code **)(*plVar4 + 0x30))();
      func_0x00010924d934(auStack_30,*puVar6,(long)plVar4 + 0x24,
                          *(undefined4 *)(*(long *)(param_1 + 0xc0) + 0x5c),
                          *(undefined4 *)(*(long *)(param_1 + 0xc0) + 0x7c),0);
      func_0x00010a169c14(param_1 + 0x118,auStack_30);
      if (plStack_28 != (long *)0x0) {
        plVar4 = plStack_28 + 1;
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
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
        }
      }
    }
    return (long *)(param_1 + 0x118);
  }
  plVar4 = *(long **)(param_1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010ad702a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))();
  return plVar4;
}



/* Entry: 10ad70254; end: 10ad7033f;  */

long * FUN_10ad70254(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    if (*(long *)(param_1 + 0x118) == 0) {
      ppuVar3 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar6 = *(undefined8 **)(*(long *)*ppuVar3 + 8);
      plVar4 = *(long **)(param_1 + 0xf0);
      (**(code **)(*plVar4 + 0x30))();
      func_0x00010924d934(auStack_30,*puVar6,(long)plVar4 + 0x24,
                          *(undefined4 *)(*(long *)(param_1 + 0xc0) + 0x5c),
                          *(undefined4 *)(*(long *)(param_1 + 0xc0) + 0x7c),0);
      func_0x00010a169c14(param_1 + 0x118,auStack_30);
      if (plStack_28 != (long *)0x0) {
        plVar4 = plStack_28 + 1;
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
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
        }
      }
    }
    return (long *)(param_1 + 0x118);
  }
  plVar4 = *(long **)(param_1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010ad702a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))();
  return plVar4;
}



/* Entry: 10ad70340; end: 10ad704ef;  */

/* WARNING: Removing unreachable block (ram,0x00010ad703a8) */

void FUN_10ad70340(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *aplStack_c0 [2];
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1 + 0x1a;
  if (*plVar4 == 0) {
    lVar3 = 1;
    FUN_10a303694(1);
    lVar5 = lVar3;
    FUN_10a3048cc();
    func_0x000107c2b054(auStack_60,&UNK_10f6a95f8);
    FUN_10a0f19e0(auStack_90);
    FUN_10a100350(&uStack_a8,auStack_90);
    auStack_58[0] = 1;
    uStack_48 = uStack_a0;
    uStack_50 = uStack_a8;
    uStack_40 = uStack_98;
    FUN_10ab96bac(aplStack_c0,auStack_60,lVar3 + 500);
    FUN_10ab994b8(auStack_58);
    FUN_10a0f1ea0(auStack_90);
    FUN_10a2449b0(auStack_90,lVar5,aplStack_c0,lVar3 + 500,0,0);
    FUN_10a244a54(plVar4,auStack_90);
    param_1 = plVar4;
    if (plStack_88 != (long *)0x0) {
      plVar4 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        param_1 = plStack_88;
      }
    }
    if (cStack_a9 < '\0') {
      param_1 = aplStack_c0[0];
      __ZdlPv(aplStack_c0[0]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (cStack_a9 < '\0') {
      __ZdlPv(aplStack_c0[0]);
    }
    __Unwind_Resume(param_1);
    return;
  }
  return;
}



/* Entry: 10ad704f0; end: 10ad7050f;  */

void FUN_10ad704f0(void)

{
  return;
}



/* Entry: 10ad70510; end: 10ad7057f;  */

void FUN_10ad70510(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined **ppuVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long alStack_108 [4];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  int iStack_c4;
  undefined *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  undefined1 uStack_81;
  
  *(undefined4 *)(param_1 + 0x10) = 2;
  iVar2 = *(int *)(*(long *)(param_2[6] + 0x18) + 0x734);
  if (iVar2 == 2) {
    FUN_10ad6ff4c();
  }
  else {
    if (iVar2 != 1) {
      plVar12 = (long *)&UNK_10f6a9622;
      func_0x000105688514();
      plVar13 = (long *)0x0;
      FUN_10a2421c8();
      FUN_10a244d68();
      if (((plVar13 == (long *)0x0) ||
          (plVar14 = plVar13, (**(code **)(*plVar13 + 0xe0))(), plVar14 == (long *)0x0)) ||
         (*(int *)((long)plVar14 + 0x734) != 2)) {
        ppuVar11 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        puVar16 = *ppuVar11;
        if (((puVar16 != (undefined *)0x0) && (puVar16[0xc0] == '\x01')) &&
           (*(long *)(puVar16 + 0x80) != 0)) {
          FUN_10a08dbac(puVar16 + 0x18);
        }
        lVar19 = plVar12[0x15];
        uVar3 = *(uint *)(lVar19 + 0x18);
        uVar7 = *(uint *)(lVar19 + 0x1c);
        iVar2 = *(int *)(lVar19 + 0x4c);
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d0 = 0;
        uStack_d8 = 0;
        lVar21 = *(long *)plVar12[8];
        plVar13 = plVar12;
        iStack_c4 = iVar2;
        (**(code **)(*plVar12 + 0x28))(plVar12);
        plVar14 = plVar12;
        (**(code **)(*plVar12 + 0x30))(plVar12);
        lVar21 = *(long *)(lVar21 + 0x10);
        puStack_c0 = &UNK_10f635282;
        plStack_b8 = (long *)0x2b;
        if (lVar21 != 0) {
          func_0x00010ab9ca70(&puStack_c0,lVar19,0);
          uVar15 = 0x8ca9;
          if (uStack_98 < 2) {
            uVar15 = 0x8d40;
          }
          FUN_10ab9cbe8(alStack_108,lVar21 + 0x50,uVar15,&puStack_c0,0,
                        (ulong)plVar13 & 0xffffffff | (long)plVar14 << 0x20,0);
          FUN_10ab9b224(&uStack_e8,alStack_108);
          FUN_10ab9ce18(alStack_108);
          lVar19 = *param_2;
          if (((lVar19 == 0) || ((long)*(int *)(lVar19 + 0x10) != (ulong)uVar3)) ||
             (((long)*(int *)(lVar19 + 0x14) != (ulong)uVar7 || (*(int *)(lVar19 + 0x24) != iVar2)))
             ) {
            alStack_108[0] = plVar12[0x15];
            FUN_10a1959b0(&puStack_c0,&uStack_81,alStack_108,&iStack_c4);
            FUN_10a16b1ec(param_2,&puStack_c0);
            plVar12 = plStack_b8;
            if (plStack_b8 != (long *)0x0) {
              plVar13 = plStack_b8 + 1;
              do {
                lVar19 = *plVar13;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar9) {
                  *plVar13 = lVar19 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
          }
          else {
            plVar12 = (long *)plVar12[0x15];
            (**(code **)(*plVar12 + 0x10))
                      (plVar12,*(undefined8 *)(lVar19 + 0x28),*(undefined8 *)(lVar19 + 0x18),0,
                       *(undefined4 *)((long)plVar12 + 0x1c));
          }
          plStack_b8 = (long *)0x0;
          puStack_c0 = (undefined *)0x0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          FUN_10ab9b224(&uStack_e8,&puStack_c0);
          FUN_10ab9ce18(&puStack_c0);
          FUN_10ab9ce18(&uStack_e8);
          return;
        }
        FUN_10a0edfc4(&puStack_c0);
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab9b208);
        (*pcVar10)();
      }
      (**(code **)(*plVar13 + 0xe8))();
      lVar19 = *plVar13;
      lVar21 = plVar13[1];
      __ZNSt3__115recursive_mutex4lockEv(lVar21);
      FUN_10ad6ff4c();
      lVar20 = *plVar12;
      iVar2 = *(int *)(lVar20 + 0x24);
      uVar3 = *(uint *)(lVar20 + 0x40);
      ppuVar11 = &PTR_DAT_110ae4700 + (ulong)uVar3 * 4;
      if (0x56 < uVar3) {
        ppuVar11 = &PTR_DAT_110ae4700;
      }
      bVar5 = *(byte *)((long)ppuVar11 + 0x1b);
      iVar4 = *(int *)(lVar20 + 0x28);
      if ((uVar3 != 4) && (uVar3 != 0x27)) {
        FUN_10a00946c(&UNK_10f47bd8e);
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10ad70798);
        (*pcVar10)();
      }
      uStack_90 = 1;
      lVar17 = *param_2;
      iStack_8c = iVar2;
      iStack_88 = iVar4;
      if ((((lVar17 == 0) || (*(int *)(lVar17 + 0x10) != iVar2)) ||
          (*(int *)(lVar17 + 0x14) != iVar4)) || (*(int *)(lVar17 + 0x24) != 1)) {
        uStack_a8 = uStack_a8 & 0xffffffffffffff;
        FUN_10a195a60(&uStack_a0,&uStack_81,&iStack_8c,&uStack_90,(long)&uStack_a8 + 7);
        FUN_10a16b1ec(param_2,&uStack_a0);
        plVar12 = (long *)CONCAT44(uStack_94,uStack_98);
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 1;
          do {
            lVar17 = *plVar13;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar9) {
              *plVar13 = lVar17 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        lVar17 = *param_2;
      }
      uVar7 = iVar2 * (uint)bVar5 * iVar4;
      uStack_a0 = 0;
      uStack_98 = 0;
      FUN_10a156edc(*(undefined8 *)(lVar19 + 0x18),lVar19,lVar20,&uStack_a0,(int *)(lVar20 + 0x24),
                    *(undefined8 *)(lVar17 + 0x28),(ulong)uVar7);
      if ((uVar3 == 0x27) && (uVar7 != 0)) {
        puVar18 = *(undefined1 **)(*param_2 + 0x28);
        puVar1 = puVar18 + uVar7;
        do {
          uVar6 = *puVar18;
          *puVar18 = puVar18[2];
          puVar18[2] = uVar6;
          puVar18 = puVar18 + 4;
        } while (puVar18 < puVar1);
      }
      __ZNSt3__115recursive_mutex6unlockEv(lVar21);
      return;
    }
    FUN_10ad70254();
  }
                    /* WARNING: Could not recover jumptable at 0x00010ad70570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,*param_1,7,5);
  return;
}



/* Entry: 10ad70580; end: 10ad707b7;  */

void FUN_10ad70580(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined **ppuVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long alStack_e8 [4];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  int iStack_a4;
  undefined *puStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  undefined1 uStack_61;
  
  plVar12 = (long *)0x0;
  FUN_10a2421c8();
  FUN_10a244d68();
  if (((plVar12 == (long *)0x0) ||
      (plVar13 = plVar12, (**(code **)(*plVar12 + 0xe0))(), plVar13 == (long *)0x0)) ||
     (*(int *)((long)plVar13 + 0x734) != 2)) {
    ppuVar11 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar15 = *ppuVar11;
    if (((puVar15 != (undefined *)0x0) && (puVar15[0xc0] == '\x01')) &&
       (*(long *)(puVar15 + 0x80) != 0)) {
      FUN_10a08dbac(puVar15 + 0x18);
    }
    lVar18 = param_1[0x15];
    uVar2 = *(uint *)(lVar18 + 0x18);
    uVar7 = *(uint *)(lVar18 + 0x1c);
    iVar4 = *(int *)(lVar18 + 0x4c);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    lVar20 = *(long *)param_1[8];
    plVar12 = param_1;
    iStack_a4 = iVar4;
    (**(code **)(*param_1 + 0x28))(param_1);
    plVar13 = param_1;
    (**(code **)(*param_1 + 0x30))(param_1);
    lVar20 = *(long *)(lVar20 + 0x10);
    puStack_a0 = &UNK_10f635282;
    plStack_98 = (long *)0x2b;
    if (lVar20 != 0) {
      func_0x00010ab9ca70(&puStack_a0,lVar18,0);
      uVar14 = 0x8ca9;
      if (uStack_78 < 2) {
        uVar14 = 0x8d40;
      }
      FUN_10ab9cbe8(alStack_e8,lVar20 + 0x50,uVar14,&puStack_a0,0,
                    (ulong)plVar12 & 0xffffffff | (long)plVar13 << 0x20,0);
      FUN_10ab9b224(&uStack_c8,alStack_e8);
      FUN_10ab9ce18(alStack_e8);
      lVar18 = *param_2;
      if (((lVar18 == 0) || ((long)*(int *)(lVar18 + 0x10) != (ulong)uVar2)) ||
         (((long)*(int *)(lVar18 + 0x14) != (ulong)uVar7 || (*(int *)(lVar18 + 0x24) != iVar4)))) {
        alStack_e8[0] = param_1[0x15];
        FUN_10a1959b0(&puStack_a0,&uStack_61,alStack_e8,&iStack_a4);
        FUN_10a16b1ec(param_2,&puStack_a0);
        plVar12 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar13 = plStack_98 + 1;
          do {
            lVar18 = *plVar13;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar9) {
              *plVar13 = lVar18 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
      }
      else {
        plVar12 = (long *)param_1[0x15];
        (**(code **)(*plVar12 + 0x10))
                  (plVar12,*(undefined8 *)(lVar18 + 0x28),*(undefined8 *)(lVar18 + 0x18),0,
                   *(undefined4 *)((long)plVar12 + 0x1c));
      }
      plStack_98 = (long *)0x0;
      puStack_a0 = (undefined *)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      FUN_10ab9b224(&uStack_c8,&puStack_a0);
      FUN_10ab9ce18(&puStack_a0);
      FUN_10ab9ce18(&uStack_c8);
      return;
    }
    FUN_10a0edfc4(&puStack_a0);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab9b208);
    (*pcVar10)();
  }
  (**(code **)(*plVar12 + 0xe8))();
  lVar18 = *plVar12;
  lVar20 = plVar12[1];
  __ZNSt3__115recursive_mutex4lockEv(lVar20);
  FUN_10ad6ff4c();
  lVar19 = *param_1;
  iVar4 = *(int *)(lVar19 + 0x24);
  uVar2 = *(uint *)(lVar19 + 0x40);
  ppuVar11 = &PTR_DAT_110ae4700 + (ulong)uVar2 * 4;
  if (0x56 < uVar2) {
    ppuVar11 = &PTR_DAT_110ae4700;
  }
  bVar5 = *(byte *)((long)ppuVar11 + 0x1b);
  iVar3 = *(int *)(lVar19 + 0x28);
  if ((uVar2 != 4) && (uVar2 != 0x27)) {
    FUN_10a00946c(&UNK_10f47bd8e);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10ad70798);
    (*pcVar10)();
  }
  uStack_70 = 1;
  lVar16 = *param_2;
  iStack_6c = iVar4;
  iStack_68 = iVar3;
  if ((((lVar16 == 0) || (*(int *)(lVar16 + 0x10) != iVar4)) || (*(int *)(lVar16 + 0x14) != iVar3))
     || (*(int *)(lVar16 + 0x24) != 1)) {
    uStack_88 = uStack_88 & 0xffffffffffffff;
    FUN_10a195a60(&uStack_80,&uStack_61,&iStack_6c,&uStack_70,(long)&uStack_88 + 7);
    FUN_10a16b1ec(param_2,&uStack_80);
    plVar12 = (long *)CONCAT44(uStack_74,uStack_78);
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 1;
      do {
        lVar16 = *plVar13;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar9) {
          *plVar13 = lVar16 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    lVar16 = *param_2;
  }
  uVar7 = iVar4 * (uint)bVar5 * iVar3;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10a156edc(*(undefined8 *)(lVar18 + 0x18),lVar18,lVar19,&uStack_80,(int *)(lVar19 + 0x24),
                *(undefined8 *)(lVar16 + 0x28),(ulong)uVar7);
  if ((uVar2 == 0x27) && (uVar7 != 0)) {
    puVar17 = *(undefined1 **)(*param_2 + 0x28);
    puVar1 = puVar17 + uVar7;
    do {
      uVar6 = *puVar17;
      *puVar17 = puVar17[2];
      puVar17[2] = uVar6;
      puVar17 = puVar17 + 4;
    } while (puVar17 < puVar1);
  }
  __ZNSt3__115recursive_mutex6unlockEv(lVar20);
  return;
}



/* Entry: 10ad707b8; end: 10ad707bf;  */

void FUN_10ad707b8(long param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined **ppuVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 auStack_e8 [4];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  int iStack_a4;
  undefined *puStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  undefined1 uStack_61;
  
  plVar14 = (long *)(param_1 - 0xa0);
  plVar12 = (long *)0x0;
  FUN_10a2421c8();
  FUN_10a244d68();
  if (((plVar12 == (long *)0x0) ||
      (plVar13 = plVar12, (**(code **)(*plVar12 + 0xe0))(), plVar13 == (long *)0x0)) ||
     (*(int *)((long)plVar13 + 0x734) != 2)) {
    ppuVar11 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar16 = *ppuVar11;
    if (((puVar16 != (undefined *)0x0) && (puVar16[0xc0] == '\x01')) &&
       (*(long *)(puVar16 + 0x80) != 0)) {
      FUN_10a08dbac(puVar16 + 0x18);
    }
    lVar19 = *(long *)(param_1 + 8);
    uVar2 = *(uint *)(lVar19 + 0x18);
    uVar7 = *(uint *)(lVar19 + 0x1c);
    iVar4 = *(int *)(lVar19 + 0x4c);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    lVar21 = **(long **)(param_1 + -0x60);
    plVar12 = plVar14;
    iStack_a4 = iVar4;
    (**(code **)(*plVar14 + 0x28))(plVar14);
    (**(code **)(*plVar14 + 0x30))(plVar14);
    lVar21 = *(long *)(lVar21 + 0x10);
    puStack_a0 = &UNK_10f635282;
    plStack_98 = (long *)0x2b;
    if (lVar21 != 0) {
      func_0x00010ab9ca70(&puStack_a0,lVar19,0);
      uVar15 = 0x8ca9;
      if (uStack_78 < 2) {
        uVar15 = 0x8d40;
      }
      FUN_10ab9cbe8(auStack_e8,lVar21 + 0x50,uVar15,&puStack_a0,0,
                    (ulong)plVar12 & 0xffffffff | (long)plVar14 << 0x20,0);
      FUN_10ab9b224(&uStack_c8,auStack_e8);
      FUN_10ab9ce18(auStack_e8);
      lVar19 = *param_2;
      if (((lVar19 == 0) || ((long)*(int *)(lVar19 + 0x10) != (ulong)uVar2)) ||
         (((long)*(int *)(lVar19 + 0x14) != (ulong)uVar7 || (*(int *)(lVar19 + 0x24) != iVar4)))) {
        auStack_e8[0] = *(undefined8 *)(param_1 + 8);
        FUN_10a1959b0(&puStack_a0,&uStack_61,auStack_e8,&iStack_a4);
        FUN_10a16b1ec(param_2,&puStack_a0);
        plVar12 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar14 = plStack_98 + 1;
          do {
            lVar19 = *plVar14;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar19 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
      }
      else {
        plVar12 = *(long **)(param_1 + 8);
        (**(code **)(*plVar12 + 0x10))
                  (plVar12,*(undefined8 *)(lVar19 + 0x28),*(undefined8 *)(lVar19 + 0x18),0,
                   *(undefined4 *)((long)plVar12 + 0x1c));
      }
      plStack_98 = (long *)0x0;
      puStack_a0 = (undefined *)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      FUN_10ab9b224(&uStack_c8,&puStack_a0);
      FUN_10ab9ce18(&puStack_a0);
      FUN_10ab9ce18(&uStack_c8);
      return;
    }
    FUN_10a0edfc4(&puStack_a0);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab9b208);
    (*pcVar10)();
  }
  (**(code **)(*plVar12 + 0xe8))();
  lVar19 = *plVar12;
  lVar21 = plVar12[1];
  __ZNSt3__115recursive_mutex4lockEv(lVar21);
  FUN_10ad6ff4c();
  lVar20 = *plVar14;
  iVar4 = *(int *)(lVar20 + 0x24);
  uVar2 = *(uint *)(lVar20 + 0x40);
  ppuVar11 = &PTR_DAT_110ae4700 + (ulong)uVar2 * 4;
  if (0x56 < uVar2) {
    ppuVar11 = &PTR_DAT_110ae4700;
  }
  bVar5 = *(byte *)((long)ppuVar11 + 0x1b);
  iVar3 = *(int *)(lVar20 + 0x28);
  if ((uVar2 != 4) && (uVar2 != 0x27)) {
    FUN_10a00946c(&UNK_10f47bd8e);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10ad70798);
    (*pcVar10)();
  }
  uStack_70 = 1;
  lVar17 = *param_2;
  iStack_6c = iVar4;
  iStack_68 = iVar3;
  if ((((lVar17 == 0) || (*(int *)(lVar17 + 0x10) != iVar4)) || (*(int *)(lVar17 + 0x14) != iVar3))
     || (*(int *)(lVar17 + 0x24) != 1)) {
    uStack_88 = uStack_88 & 0xffffffffffffff;
    FUN_10a195a60(&uStack_80,&uStack_61,&iStack_6c,&uStack_70,(long)&uStack_88 + 7);
    FUN_10a16b1ec(param_2,&uStack_80);
    plVar12 = (long *)CONCAT44(uStack_74,uStack_78);
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 1;
      do {
        lVar17 = *plVar14;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *plVar14 = lVar17 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    lVar17 = *param_2;
  }
  uVar7 = iVar4 * (uint)bVar5 * iVar3;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10a156edc(*(undefined8 *)(lVar19 + 0x18),lVar19,lVar20,&uStack_80,(int *)(lVar20 + 0x24),
                *(undefined8 *)(lVar17 + 0x28),(ulong)uVar7);
  if ((uVar2 == 0x27) && (uVar7 != 0)) {
    puVar18 = *(undefined1 **)(*param_2 + 0x28);
    puVar1 = puVar18 + uVar7;
    do {
      uVar6 = *puVar18;
      *puVar18 = puVar18[2];
      puVar18[2] = uVar6;
      puVar18 = puVar18 + 4;
    } while (puVar18 < puVar1);
  }
  __ZNSt3__115recursive_mutex6unlockEv(lVar21);
  return;
}



/* Entry: 10ad707c0; end: 10ad709cb;  */

void FUN_10ad707c0(long param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint uStack_48;
  
  FUN_10ad70340();
  plVar5 = *(long **)(param_1 + 0x40);
  FUN_10a5bbc70(plVar5);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  lVar7 = *(long *)(*plVar5 + 0x10);
  puStack_70 = &UNK_10f635282;
  uStack_68 = 0x2b;
  if (lVar7 == 0) {
    FUN_10a0edfc4(&puStack_70);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad709b0);
    (*pcVar1)();
  }
  func_0x00010ab9ca70(&puStack_70,*(undefined8 *)(param_1 + 0xf0),0);
  uVar4 = 0x8ca9;
  if (uStack_48 < 2) {
    uVar4 = 0x8d40;
  }
  FUN_10ab9cbe8(&fStack_b0,lVar7 + 0x50,uVar4,&puStack_70,0,uVar6,0);
  FUN_10ab9b224(&uStack_90,&fStack_b0);
  FUN_10ab9ce18(&fStack_b0);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x28))();
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x30))();
  fStack_b0 = (float)((ulong)plVar2 & 0xffffffff);
  fStack_ac = (float)((ulong)plVar3 & 0xffffffff);
  plVar2 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0);
  if (plVar2 == (long *)0x0) {
    ___dynamic_cast(param_2,&PTR_DAT_110ba0e18,&PTR_DAT_110baa0a0,0);
    plVar2 = param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0xb8))();
      plVar2 = param_2;
      if (*(int *)(param_2[3] + 0x734) == 1) {
        func_0x00010926dea0(param_2,0);
        uVar4 = *(undefined4 *)((long)param_2 + 0xac);
        goto LAB_10ad70924;
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)((long)plVar2 + 0x5c);
  }
LAB_10ad70924:
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10ab99c24();
  FUN_10ab996d0(uVar6,&UNK_10e4fe8a8,4,*plVar2,plVar2[1] - *plVar2 >> 3,uVar4,&fStack_b0,6,param_3);
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_10ab9b224(&uStack_90,&puStack_70);
  FUN_10ab9ce18(&puStack_70);
  FUN_10ad552c8(plVar5);
  FUN_10ab9ce18(&uStack_90);
  return;
}



/* Entry: 10ad709cc; end: 10ad70dbf;  */

long ** FUN_10ad709cc(long **param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  undefined **ppuVar7;
  undefined8 in_x7;
  undefined *puVar8;
  long *plVar9;
  long unaff_x25;
  long lStack_2a8;
  long **pplStack_2a0;
  long **pplStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined4 uStack_238;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long ***ppplStack_90;
  long **pplStack_88;
  undefined1 uStack_80;
  long *plStack_78;
  long **pplStack_70;
  long **pplStack_68;
  long **pplStack_60;
  char cStack_58;
  
  if ((param_1[0x2d] == (long *)0x0) || (*(int *)((long)param_1[0x2d] + 0x734) == 1)) {
    return param_1;
  }
  pplVar3 = param_1;
  FUN_10a3ca004();
  plVar4 = pplVar3[10];
  if (plVar4 == (long *)0x0) {
    FUN_10a3ca05c(pplVar3,3);
    plVar4 = pplVar3[10];
  }
  FUN_10a244d68();
  if (plVar4 != (long *)0x0) {
    plVar9 = plVar4;
    (**(code **)(*plVar4 + 0xe0))();
    plStack_260 = (long *)&UNK_10f6a9656;
    uStack_258 = 0x20;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xe8))();
      pplVar3 = (long **)*plVar4;
      pplStack_60 = (long **)plVar4[1];
      cStack_58 = '\x01';
      pplStack_68 = pplVar3;
      __ZNSt3__115recursive_mutex4lockEv();
      FUN_10a012fec(&plStack_78,plVar9,pplVar3);
      ppplStack_90 = &pplStack_68;
      uStack_80 = 0;
      pplVar3 = param_1;
      pplStack_88 = &plStack_78;
      FUN_10ad6ff4c();
      pplVar5 = param_1;
      FUN_10ad6fff8(param_1,0);
      plVar4 = param_1[0x20];
      (**(code **)(*plVar4 + 0x10))();
      if ((int)plVar4 == 0) {
        ppuVar7 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        puVar8 = *ppuVar7;
        puVar8[0x160] = 1;
        plVar4 = param_1[0x29];
        plVar9 = (long *)(*pplVar5)[3];
        if ((plVar4 == (long *)0x0) || (param_1[0x2a] != plVar9)) {
          plVar4 = (long *)0xc68;
          __Znwm();
          func_0x000107c2b054(&plStack_260,&UNK_10f63a7c9);
          FUN_10a0e4d58(plVar4,plVar9,0,&plStack_260);
          if (uStack_250 < 0) {
            __ZdlPv(plStack_260);
          }
          plVar9 = param_1[0x29];
          param_1[0x29] = plVar4;
          if (plVar9 != (long *)0x0) {
            func_0x00010a159354(param_1 + 0x29);
            plVar4 = param_1[0x29];
          }
          param_1[0x2a] = (long *)(*pplVar5)[3];
        }
        uStack_b8 = 0;
        uStack_c0 = 0x3f800000;
        uStack_a8 = 0;
        uStack_b0 = 0x3f800000;
        uStack_a0 = 0x3f800000;
        plStack_260 = (long *)((ulong)plStack_260 & 0xffffffffffffff00);
        uStack_c8 = 0;
        FUN_10a0e3928(plVar4,pplVar3,pplVar5,&uStack_c0,&plStack_260);
        FUN_10a09d158(&plStack_260);
        puVar8[0x160] = 0;
      }
      else {
        plVar4 = plStack_78;
        (**(code **)(*plStack_78 + 0x48))();
        (**(code **)(*plVar4 + 0x48))();
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        plStack_240 = param_1[0xc];
        uStack_238 = 1;
        (**(code **)(*plVar4 + 0x70))(plVar4,*pplVar3,*pplVar5,&plStack_260,1,6,7);
        (**(code **)(*plVar4 + 0x40))(plVar4);
        ppuVar7 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
      }
      puVar8 = *ppuVar7;
      if (((puVar8 != (undefined *)0x0) && (puVar8[0xc0] == '\x01')) &&
         (*(long *)(puVar8 + 0x80) != 0)) {
        FUN_10a08dbac(puVar8 + 0x18);
      }
      plStack_260 = plStack_78;
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_268 = 0;
      uStack_270 = 1;
      pplVar3 = pplStack_68;
      (*(code *)(*pplStack_68)[6])(pplStack_68,0,0,0,0,&plStack_260,1);
      if (pplStack_70 != (long **)0x0) {
        pplVar5 = pplStack_70 + 1;
        do {
          plVar4 = *pplVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pplVar5,0x10);
          if (bVar2) {
            *pplVar5 = (long *)((long)plVar4 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (plVar4 == (long *)0x0) {
          (*(code *)(*pplStack_70)[2])(pplStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplStack_70);
          pplVar3 = pplStack_70;
        }
      }
      if (cStack_58 != '\x01') {
        return pplVar3;
      }
      __ZNSt3__115recursive_mutex6unlockEv(pplStack_60);
      return pplStack_60;
    }
  }
  uStack_258 = 0x20;
  plStack_260 = (long *)&UNK_10f6a9656;
  pplVar5 = &plStack_260;
  FUN_10a0edfc4();
  if (uStack_250._7_1_ < '\0') {
    __ZdlPv(plStack_260);
  }
  __ZdlPv();
  *(undefined1 *)(unaff_x25 + 0x160) = 0;
  FUN_10ad70dc0(&ppplStack_90);
  func_0x00010a054cfc(&plStack_78);
  if (cStack_58 == '\x01') {
    __ZNSt3__115recursive_mutex6unlockEv(pplStack_60);
  }
  pplVar6 = pplVar5;
  __Unwind_Resume();
  func_0x000104bd46a0();
  pcStack_288 = FUN_10ad70dc0;
  if (((ulong)pplVar6[2] & 1) == 0) {
    pplStack_2a0 = pplVar3;
    pplStack_298 = pplVar5;
    puStack_290 = &stack0xfffffffffffffff0;
    *(undefined1 *)(pplVar6 + 2) = 1;
    ppuVar7 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar8 = *ppuVar7;
    if (((puVar8 != (undefined *)0x0) && (puVar8[0xc0] == '\x01')) &&
       (*(long *)(puVar8 + 0x80) != 0)) {
      FUN_10a08dbac(puVar8 + 0x18);
    }
    lStack_2a8 = *pplVar6[1];
    (**(code **)(*(long *)**pplVar6 + 0x30))((long *)**pplVar6,0,0,0,0,&lStack_2a8,1,in_x7,0,0,1);
  }
  return pplVar6;
}



/* Entry: 10ad70dc0; end: 10ad70e6b;  */

undefined8 * FUN_10ad70dc0(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined8 in_x7;
  undefined *puVar2;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
    ppuVar1 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar2 = *ppuVar1;
    if (((puVar2 != (undefined *)0x0) && (puVar2[0xc0] == '\x01')) &&
       (*(long *)(puVar2 + 0x80) != 0)) {
      FUN_10a08dbac(puVar2 + 0x18);
    }
    uStack_28 = *(undefined8 *)param_1[1];
    (**(code **)(**(long **)*param_1 + 0x30))(*(long **)*param_1,0,0,0,0,&uStack_28,1,in_x7,0,0,1);
  }
  return param_1;
}



/* Entry: 10ad70e6c; end: 10ad70e8f;  */

undefined8 FUN_10ad70e6c(void)

{
  return 1;
}



/* Entry: 10ad70e90; end: 10ad70ee7;  */

long FUN_10ad70e90(long param_1)

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



/* Entry: 10ad70ee8; end: 10ad70f4b;  */

undefined8 * FUN_10ad70ee8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c719b0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10ad70f4c; end: 10ad70f4f;  */

void FUN_10ad70f4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad70f50; end: 10ad70f63;  */

void FUN_10ad70f50(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad70f64; end: 10ad70f7b;  */

void FUN_10ad70f64(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad70f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10ad70f7c; end: 10ad70fb3;  */

undefined8 FUN_10ad70f7c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c71a00);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad70fb4; end: 10ad70fb7;  */

void FUN_10ad70fb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad70fb8; end: 10ad71167;  */

/* WARNING: Removing unreachable block (ram,0x00010ad71090) */

undefined8 * FUN_10ad70fb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined2 uStack_92;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 *apuStack_48 [3];
  
  *param_1 = &PTR_FUN_110c71a60;
  plVar4 = param_1 + 1;
  *plVar4 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  puVar1 = &uStack_90;
  FUN_10a1805f0(puVar1,&UNK_10f63f410);
  uStack_92 = 3;
  lVar2 = 0x98;
  puStack_88 = puVar1;
  __Znwm();
  func_0x000107c2b054(apuStack_48,&DAT_10f2c5356);
  func_0x000107c2b054(auStack_60,&UNK_10f6a9677);
  FUN_10a19465c(lVar2,&uStack_78,&uStack_90,apuStack_48,auStack_60,0,1,4,0x101010101010101,
                0x1000002000,&uStack_92);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  lVar3 = *plVar4;
  *plVar4 = lVar2;
  if (lVar3 != 0) {
    FUN_10a1944f0(plVar4);
  }
  apuStack_48[0] = &uStack_90;
  FUN_10a0426d8(apuStack_48);
  apuStack_48[0] = &uStack_78;
  FUN_10a0426d8(apuStack_48);
  return param_1;
}



/* Entry: 10ad71168; end: 10ad711af;  */

undefined8 FUN_10ad71168(void)

{
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f6a9684,&UNK_10f6a96c1,0x43,&UNK_10f6a971c);
  }
  return 0;
}



/* Entry: 10ad711b0; end: 10ad711b7;  */

undefined8 FUN_10ad711b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad711b8; end: 10ad7125f;  */

void FUN_10ad711b8(undefined8 *param_1)

{
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f6a9684,&UNK_10f6a9764,0x4c,&UNK_10f6a97ea);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10ad71260; end: 10ad712a7;  */

undefined8 FUN_10ad71260(void)

{
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f6a9684,&UNK_10f6a9995,0x58,&UNK_10f6a9a11);
  }
  return 0;
}



/* Entry: 10ad712a8; end: 10ad71393;  */

ulong FUN_10ad712a8(undefined8 param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  if ((((uVar2 >> 1 & 1) == 0) || (*(int *)(param_2 + 0x20) != 0)) &&
     (((uVar2 >> 4 & 1) == 0 || (*(int *)(param_2 + 0x20) != 1)))) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6a9684,&UNK_10f6a9a64,0x6a,&UNK_10f6a9b00);
    }
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)*(uint *)(param_2 + 4);
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_10ad6fe20(uVar7,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),1,uVar2,0,
                  &uStack_30);
    plVar5 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return uVar7;
}



/* Entry: 10ad71394; end: 10ad71473;  */

undefined1 * FUN_10ad71394(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar4 = &stack0xffffffffffffffd0;
  lVar6 = *param_2;
  if ((lVar6 != 0) &&
     (___dynamic_cast(lVar6,&PTR_DAT_110bc45d8,&PTR_DAT_110c70c38,0xfffffffffffffffe), lVar6 != 0))
  {
    plVar5 = (long *)param_2[1];
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
    }
    FUN_10ad6feb0(&stack0xffffffffffffffd0);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    return puVar4;
  }
  puVar4 = (undefined1 *)0xb8;
  __Znwm(0xb8);
  FUN_10ab9acd0();
  return puVar4;
}



/* Entry: 10ad71474; end: 10ad714c7;  */

void FUN_10ad71474(undefined8 *param_1)

{
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f6a9684,&UNK_10f6a9b52,0x78,&UNK_10f6a9bd7);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10ad714c8; end: 10ad715e7;  */

undefined8 FUN_10ad714c8(void)

{
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f6a9684,&UNK_10f6a9c2a,0x7d,&UNK_10f6a9cb9);
  }
  return 0;
}



/* Entry: 10ad715e8; end: 10ad71647;  */

long FUN_10ad715e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    FUN_10a1944f0();
  }
  return param_1;
}



/* Entry: 10ad71648; end: 10ad716cb;  */

undefined1  [16] FUN_10ad71648(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f6a9f8d;
  return auVar1;
}



/* Entry: 10ad716cc; end: 10ad716df;  */

void FUN_10ad716cc(void)

{
  FUN_10a271e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad716e0; end: 10ad7175b;  */

undefined1  [16] FUN_10ad716e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f6a9fb0;
  return auVar1;
}



/* Entry: 10ad7175c; end: 10ad718a3;  */

void FUN_10ad7175c(undefined8 param_1)

{
  undefined8 uVar1;
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
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f6a9f9e,6);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000040;
  uStack_88 = CONCAT44(uStack_88._4_4_,4);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10ad7196c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a9fa5;
  uStack_78 = 0x4ffffffff;
  uStack_80 = 0x4000000064;
  puStack_70 = &UNK_10f6a9faf;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6a9faf;
  uStack_38 = 0;
  FUN_10ad71b40();
  FUN_10ad71dac(uVar1);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a9fb0;
  uStack_78 = 0x4ffffffff;
  uStack_80 = 0x4000000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a9fbd;
  uStack_78 = 0x4ffffffff;
  uStack_80 = 0x4000000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10ad718a4(param_1,&puStack_98);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10ad718a4; end: 10ad7196b;  */

ulong FUN_10ad718a4(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad7190c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10ad71e68,0,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10ad7196c; end: 10ad71a43;  */

/* WARNING: Removing unreachable block (ram,0x00010ad71a04) */

undefined1  [16] FUN_10ad7196c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6a9fb0,0xc);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ad71a44(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ad71a44; end: 10ad71b3f;  */

undefined1  [16] FUN_10ad71a44(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c71bc0;
  puVar1 = &UNK_10f6a9faf;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
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
    ppuStack_40 = &PTR_DAT_110c71bc0;
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



/* Entry: 10ad71b40; end: 10ad71b97;  */

ulong FUN_10ad71b40(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10ad71b98,FUN_10ad71ca0);
  }
  return param_1;
}



/* Entry: 10ad71b98; end: 10ad71c9f;  */

void FUN_10ad71b98(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
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
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar6 = param_2[3];
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)(int)lVar6;
      plVar4 = plVar3 + 0x4b;
      lVar6 = plVar3[0x59];
      uVar7 = lVar6 - 1;
      plVar3[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar4[lVar6 + 2];
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      else {
        uVar7 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      lVar6 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
        lVar6 = lVar6 + uVar7 * 0x10;
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar6;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar7;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad71c8c);
  (*pcVar1)();
}



/* Entry: 10ad71ca0; end: 10ad71dab;  */

void FUN_10ad71ca0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
    FUN_10a053854(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a076f00(param_5);
      func_0x000109898518(param_2,param_4);
      *(int *)(plVar5 + 3) = (int)param_2;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad71d98);
  (*pcVar1)();
}



/* Entry: 10ad71dac; end: 10ad71e67;  */

void FUN_10ad71dac(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6a9fb0,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad71e68);
  (*pcVar4)();
}



/* Entry: 10ad71e68; end: 10ad71f93;  */

void FUN_10ad71e68(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x38;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c71be8;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_DAT_110c71b78;
  plVar5[4] = 0;
  ppuStack_48 = &PTR_DAT_110c71bc0;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10ad71f94; end: 10ad71fa3;  */

void FUN_10ad71f94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71be8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad71fa4; end: 10ad71fc3;  */

void FUN_10ad71fa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71be8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad71fc4; end: 10ad7205f;  */

long FUN_10ad71fc4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10ad72060; end: 10ad72157;  */

void FUN_10ad72060(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0x200000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,4);
  puStack_80 = &UNK_10f6a9fc4;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_5c = 0x179;
  uStack_58 = 0xffffffff;
  FUN_10ad72158(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a9fc5;
  uStack_78 = 0x400000002;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f6a9fc4;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000179;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ad72f70();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a9fca;
  uStack_78 = 0x400000002;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f6a9fc4;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000179;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ad730e8(param_1,&puStack_98);
  FUN_10ad731f8(param_1);
  return;
}



/* Entry: 10ad72158; end: 10ad7222f;  */

/* WARNING: Removing unreachable block (ram,0x00010ad721f0) */

undefined1  [16] FUN_10ad72158(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6a9fe3,0xd);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ad72e74(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ad72230; end: 10ad7239b;  */

void FUN_10ad72230(ulong param_1)

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
  
  uStack_78 = 0x400000002;
  uStack_80 = 0x100000019;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a9fd6;
  puStack_70 = &UNK_10f6a9fc4;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000179;
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
  puStack_98 = &DAT_10f684ec4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a9fc4;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000179;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ad7239c(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f42ad2b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a9fc4;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000179;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ad7239c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c477;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a9fc4;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000179;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ad7239c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ad7239c; end: 10ad72443;  */

undefined8 * FUN_10ad7239c(undefined8 *param_1,undefined8 *param_2,char param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad72444);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)(int)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10ad72444; end: 10ad72647;  */

undefined8 * FUN_10ad72444(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = param_2;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c71cc0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10ad73530;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar6[3] = &PTR_FUN_110c71d10;
  param_1[1] = puVar6 + 3;
  param_1[2] = puVar6;
  param_1[3] = 0;
  param_1[6] = &PTR_DAT_110ae9180;
  param_1[5] = &UNK_1053a6a3c;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  FUN_10a05a5d4(&pcStack_88,&uStack_a0);
  FUN_10a1eec44(param_1 + 3,&pcStack_88);
  if (ppuStack_80 != (undefined **)0x0) {
    plVar1 = (long *)(ppuStack_80 + 1);
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
      (**(code **)((long)*ppuStack_80 + 0x10))(ppuStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_80);
    }
  }
  FUN_10ad72690(&uStack_a0,param_1[3],param_1);
  uVar5 = uStack_90;
  uVar4 = uStack_98;
  lVar7 = param_1[1];
  pcStack_88 = FUN_10ad735c0;
  ppuStack_80 = &PTR_DAT_110c71da0;
  uStack_78 = uStack_a0;
  uStack_98 = 0;
  uStack_90 = 0;
  puVar8 = (undefined8 *)(lVar7 + 0x48);
  *(code **)(lVar7 + 0x40) = FUN_10ad735c0;
  (**(code **)*puVar8)(puVar8);
  *puVar8 = &PTR_DAT_110c71da0;
  *(undefined8 *)(lVar7 + 0x50) = uStack_a0;
  *(undefined8 *)(lVar7 + 0x60) = uVar5;
  *(undefined8 *)(lVar7 + 0x58) = uVar4;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_10ad72738(&uStack_78);
  puVar6 = &uStack_a0;
  FUN_10ad72738();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a044790(uStack_a0);
  (**(code **)pcStack_88)(&pcStack_88);
  func_0x00010a05a86c(&PTR_DAT_110c71da0);
  FUN_10a400288(puVar8);
  __Unwind_Resume();
  FUN_10a044790(puVar6 + 5);
  (**(code **)puVar6[6])();
  func_0x00010a05a86c(puVar6 + 3);
  FUN_10a400288(puVar6 + 1);
  return puVar6;
}



/* Entry: 10ad72648; end: 10ad7268f;  */

long FUN_10ad72648(long param_1)

{
  FUN_10a044790(param_1 + 0x28);
  (*(code *)**(undefined8 **)(param_1 + 0x30))();
  func_0x00010a05a86c(param_1 + 0x18);
  FUN_10a400288(param_1 + 8);
  return param_1;
}


