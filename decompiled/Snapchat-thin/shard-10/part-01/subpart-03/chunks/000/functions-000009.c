/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10782b3ec; end: 10782b3fb;  */

void FUN_10782b3ec(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10782b5d8; end: 10782b66b;  */

long FUN_10782b5d8(long param_1)

{
  return (((long *)**(undefined8 **)(param_1 + 8))[1] - *(long *)**(undefined8 **)(param_1 + 8)) /
         0x70;
}



/* Entry: 10782bdec; end: 10782beff;  */

bool FUN_10782bdec(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar5 = *(long *)(param_1 + 0xe8);
  if (lVar5 == 0) {
    return false;
  }
  if ((*(byte *)(lVar5 + 0x58) & 1) == 0) {
    uVar2 = param_1;
    if (*(char *)(lVar5 + 0x128) != '\x01') {
LAB_10782beac:
      func_0x00010783321c(lVar5);
      uStack_40 = uVar2;
      uStack_38 = param_2;
      while ((bVar1 = uStack_40 != 0, uStack_40 != 0 &&
             (((plVar7 = *(long **)(uStack_38 + 0x38), plVar7 == (long *)0x0 ||
               (plVar3 = plVar7, (**(code **)(*plVar7 + 0x48))(), (int)plVar3 == 0)) ||
              (*(char *)((long)plVar7 + 0x1c) == '\x01'))))) {
        func_0x00010782bcf8(&uStack_40);
      }
      return bVar1;
    }
    uVar4 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0xe8);
      uVar2 = lVar5 + 0x60;
      func_0x00010782bf00();
      uVar6 = (uint)uVar4;
      if ((uint)((*(long *)(lVar5 + 0x68) - *(long *)(lVar5 + 0x60)) / 0x18) <= uVar6) {
        for (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x20);
            lVar5 != *(long *)(*(long *)(param_1 + 8) + 0x28); lVar5 = lVar5 + 0x20) {
          if ((*(char *)(lVar5 + 0x18) == '\x01') &&
             (*(long *)(param_1 + 0x110) != *(long *)(param_1 + 0x118))) {
            return true;
          }
        }
        lVar5 = *(long *)(param_1 + 0xe8);
        goto LAB_10782beac;
      }
      uVar2 = param_1;
      func_0x00010782bf18();
      param_2 = uVar4;
      uVar4 = (ulong)(uVar6 + 1);
    } while ((uVar2 & 1) == 0);
  }
  return true;
}



/* Entry: 10782cb70; end: 10782cb7f;  */

long FUN_10782cb70(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  ulong uStack_90;
  
  puVar6 = *(undefined8 **)(param_1 + 0xe8);
  if (puVar6 == (undefined8 *)0x0) {
    return 0;
  }
  func_0x00010783323c();
  Hint_Prefetch(*puVar6,0,2,0);
  uVar11 = param_2 + 8U;
  func_0x000104c2fe38(*puVar6);
  lVar10 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar9 = *unaff_x20;
  uVar7 = uVar9 >> 0xc ^ uVar11 >> 7;
  bVar3 = (byte)uVar11;
  uVar13 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    uVar14 = *(undefined8 *)(uVar9 + uVar7);
    cVar15 = (char)((ulong)uVar14 >> 8);
    cVar16 = (char)((ulong)uVar14 >> 0x10);
    cVar17 = (char)((ulong)uVar14 >> 0x18);
    cVar18 = (char)((ulong)uVar14 >> 0x20);
    cVar19 = (char)((ulong)uVar14 >> 0x28);
    bVar12 = (byte)((ulong)uVar14 >> 0x30);
    bVar20 = (byte)((ulong)uVar14 >> 0x38);
    for (uVar11 = CONCAT17(-(bVar20 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar12 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                             CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                      CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                               CONCAT12(-(cVar16 ==
                                                                         (char)(uVar13 >> 0x10)),
                                                                        CONCAT11(-(cVar15 ==
                                                                                  (char)(uVar13 >> 8
                                                                                        )),
                                                                                 -((char)uVar14 ==
                                                                                  (char)uVar13))))))
                                   )) & 0x8080808080808080; uVar11 != 0;
        uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar2;
      uVar4 = 0;
      uStack_90 = param_2 + 8U;
      func_0x0001073e0698(&uStack_90,uVar1 + uVar8 * 0x58);
      if ((uVar4 & 1) != 0) {
        lVar10 = unaff_x20[1] + uVar8 * 0x58;
        plVar5 = *(long **)(*(long *)(lVar10 + 0x48) + 8);
        func_0x00010783346c();
        (**(code **)(*unaff_x19 + 0x30))();
        if (plVar5 == unaff_x19) {
          return lVar10 + 0x38;
        }
        return 0;
      }
    }
    bVar12 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                 CONCAT16(-(bVar12 == 0x80),
                                          CONCAT15(-(cVar19 == -0x80),
                                                   CONCAT14(-(cVar18 == -0x80),
                                                            CONCAT13(-(cVar17 == -0x80),
                                                                     CONCAT12(-(cVar16 == -0x80),
                                                                              CONCAT11(-(cVar15 ==
                                                                                        -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
    if ((bVar12 & 1) != 0) break;
    lVar10 = lVar10 + 8;
    uVar7 = lVar10 + uVar7;
  }
  return 0;
}



/* Entry: 10782d3f0; end: 10782d44b;  */

void FUN_10782d3f0(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 uStack_21;
  
  func_0x00010783323c();
  *(undefined1 *)(param_1 + 0x8a) = 1;
  uStack_21 = 0;
  lVar1 = *(long *)(param_1 + 0x220) + 0x2a0;
  func_0x00010724e2c8(lVar1,&uStack_21);
  if ((int)lVar1 != 0) {
    *(undefined1 *)(unaff_x20 + 0x89) = 0;
  }
  (**(code **)(**(long **)(unaff_x20 + 0x90) + 0x18))();
  return;
}



/* Entry: 10782e228; end: 10782eabb;  */

/* WARNING: Possible PIC construction at 0x00010782e5e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010782e5e4) */

long ** FUN_10782e228(long **param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  long **pplVar12;
  long *plVar13;
  long *extraout_x8;
  ulong uVar14;
  code *extraout_x8_00;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int extraout_w11;
  ulong *puVar19;
  long **pplVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  long **pplVar24;
  long *plVar25;
  undefined *puVar26;
  undefined8 in_stack_00000050;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  long **pplStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  ulong uStack_3b0;
  long **pplStack_3a8;
  long **pplStack_3a0;
  undefined1 auStack_398 [24];
  long lStack_380;
  long lStack_378;
  long *plStack_370;
  long *plStack_368;
  long lStack_360;
  undefined4 uStack_358;
  long lStack_350;
  undefined4 uStack_348;
  undefined1 auStack_340 [56];
  undefined1 auStack_308 [56];
  undefined4 auStack_2d0 [6];
  undefined4 uStack_2b8;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_288;
  undefined1 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long *plStack_260;
  long *plStack_258;
  undefined2 uStack_250;
  long *plStack_150;
  undefined1 auStack_148 [256];
  long lStack_48;
  undefined4 uStack_40;
  undefined8 uStack_10;
  
  func_0x000107833360();
  pplVar20 = param_1;
  func_0x000107832d38();
  plStack_150._0_1_ = 0;
  pplVar20 = (long **)(pplVar20[0x44] + 0x11e);
  func_0x00010724e2c8(pplVar20,&plStack_150);
  plVar13 = param_1[0x3d];
  if ((plVar13 == (long *)0x0) || ((char)plVar13[5] != '\x01')) {
    uVar15 = 0;
  }
  else {
    uVar15 = plVar13[4];
  }
  lVar17 = *param_2;
  uVar18 = 0;
  if (lVar17 != 0) {
    if (*(char *)(lVar17 + 0x28) == '\x01') {
      uVar18 = *(ulong *)(lVar17 + 0x20);
    }
    else {
      uVar18 = 0;
    }
  }
  iVar7 = 0;
  if (uVar18 < uVar15) {
    iVar7 = (int)pplVar20;
  }
  if (iVar7 == 1) {
    pplVar12 = (long **)plVar13[0x34];
    uVar6 = pplVar12 == (long **)param_1[0x3c];
    if ((bool)uVar6) {
      pplVar20 = param_1 + 0x3f;
      func_0x0001078321dc();
    }
LAB_10782e96c:
    func_0x000107832c6c(uStack_10);
    if ((bool)uVar6) {
      return pplVar20;
    }
    ___stack_chk_fail();
    __ZNSt3__119__shared_weak_countD2Ev(param_2);
    __ZdlPv();
    FUN_107831640(&plStack_370);
    param_1 = &plStack_150;
    func_0x00010743d7e4();
    puVar26 = &SUB_10782eabc;
    func_0x000107832e28();
  }
  else {
    auStack_2d0[0] = 0x33;
    uStack_2b8 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    func_0x000107832d10();
    uStack_2a8 = 0;
    uStack_288 = 0;
    uStack_284 = 1;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_280 = 0;
    func_0x00010743cc34(&plStack_260,auStack_2d0,7);
    func_0x00010743d7bc(&plStack_150,&plStack_260);
    func_0x000107288cd8(&plStack_260);
    func_0x000107262330(auStack_2d0);
    func_0x000107833254(auStack_308);
    func_0x000107832ecc();
    func_0x000107371bc4(auStack_148);
    func_0x000104c2f714(auStack_308);
    func_0x0001078331a4();
    pplVar24 = param_1 + 0x3d;
    plVar13 = param_1[0x1d];
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)((long)param_1 + 0x8a) = 1;
    (*(code *)(*param_1)[0x1a])(param_1);
    plStack_368 = param_1[0x3e];
    plStack_370 = *pplVar24;
    *pplVar24 = (long *)0x0;
    param_1[0x3e] = (long *)0x0;
    plVar21 = (long *)param_2[1];
    plVar13 = (long *)*param_2;
    *param_2 = 0;
    param_2[1] = 0;
    plStack_258 = param_1[0x3e];
    plStack_260 = *pplVar24;
    param_1[0x3e] = plVar21;
    *pplVar24 = plVar13;
    FUN_107831640(&plStack_260);
    puVar19 = (ulong *)param_1[0x3d];
    plVar13 = (long *)puVar19[0x34];
    if (plVar13 == param_1[0x3c]) {
      *(undefined1 *)((long)param_1 + 0x89) = 0;
      pplVar20 = param_1 + 0x3f;
      func_0x000107832320(pplVar20,plVar13);
      if (pplVar20 != (long **)0x0) {
        puVar19[4] = (ulong)pplVar20[3];
        *(undefined1 *)(puVar19 + 5) = 1;
        plVar13 = param_1[0x3c];
      }
      func_0x0001078321dc(param_1 + 0x3f,plVar13);
      puVar19 = (ulong *)*pplVar24;
    }
    plVar13 = (long *)*puVar19;
    plVar21 = (long *)puVar19[1];
    func_0x00010782bcd0();
    plStack_260 = plVar13;
    plStack_258 = plVar21;
    plVar13 = plStack_370;
    while (plStack_370 = plVar13, plStack_260 != (long *)0x0) {
      plVar13 = param_1[0x46];
      lStack_378 = plStack_258[8];
      lStack_380 = plStack_258[7];
      if (plStack_258[8] != 0) {
        do {
          func_0x000107832d84();
          plVar13 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      func_0x000107508c60(plVar13 + 4,&lStack_380);
      func_0x000107509620(&lStack_380);
      func_0x00010782bcf8(&plStack_260);
      plVar13 = plStack_370;
    }
    if ((plVar13 == (long *)0x0) || ((char)plVar13[0x25] != '\x01')) {
      param_2 = (long *)0x0;
      pplVar20 = (long **)0x0;
    }
    else {
      func_0x00010782bf00(plVar13 + 0xc);
      param_2 = plVar13 + 0xc;
      func_0x0001074613a4();
      pplVar20 = (long **)0x1;
    }
    plVar21 = *pplVar24;
    if ((char)plVar21[0x25] == '\x01') {
      func_0x000107832f10();
      plVar25 = plVar21 + 0xc;
      func_0x0001074613a4();
      plVar21 = *pplVar24;
      if ((plVar13 == (long *)0x0) || (((uint)pplVar20 & (uint)*(byte *)(plVar21 + 0x25)) == 0)) {
        if (*(byte *)(plVar21 + 0x25) == 0) goto LAB_10782e504;
      }
      else if (param_2 == plVar25) goto LAB_10782e504;
      if (param_1[0x53] != (long *)0x0) {
        if ((char)plStack_370[0x25] == '\x01') {
          func_0x000107832f10();
          plVar13 = plStack_370;
          func_0x00010782bf00(plStack_370 + 0xc);
          plVar21 = plVar21 + 0xc;
          func_0x0001074614cc(plVar21,plVar13 + 0xc);
        }
        else {
          plVar21 = (long *)0x3;
        }
        func_0x000107832cd8(0x51);
        func_0x000107833254(auStack_340);
        func_0x000107832ecc();
        pplVar20 = &plStack_260;
        func_0x000107371bc4(pplVar20);
        func_0x000107461014(auStack_398,plVar21);
        func_0x00010726e300(pplVar20,"reason",auStack_398);
        func_0x000107833024();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_398);
        func_0x000104c2f714(auStack_340);
        func_0x00010783325c();
        plVar21 = *pplVar24;
      }
      func_0x000107832f10();
      lVar17 = plVar21[0xc];
      pplVar20 = (long **)plVar21[0xd];
      param_2 = (long *)0x90;
      __Znwm();
      param_2[1] = 0;
      param_2[2] = 0;
      plVar13 = param_2 + 3;
      *param_2 = (long)&PTR_DAT_1109e1328;
      func_0x000107832440(plVar13,((long)pplVar20 - lVar17) / 0x18);
    }
    else {
LAB_10782e504:
      if (((char)plVar21[0xb] != '\x01') || (param_1[0x53] != (long *)0x0)) {
        if (param_1[0x69] != param_1[0x6a]) {
          func_0x00010745f750(&plStack_260,param_1[0x18]);
          func_0x00010750a49c(auStack_2d0,param_1[0x15]);
          (*(code *)(*param_1)[0x17])(param_1,&plStack_260,auStack_2d0);
          func_0x0001073e0338(auStack_2d0);
          func_0x00010726b264(&plStack_260);
        }
        plStack_260 = (long *)((ulong)plStack_260 & 0xffffffffffffff00);
        plVar13 = param_1[0x44] + 0x100;
        func_0x00010724e2c8(plVar13,&plStack_260);
        if ((int)plVar13 != 0) {
          param_2 = *pplVar24;
          if ((char)param_2[0xb] == '\x01') {
            func_0x0001073c802c(&plStack_260,param_2[8]);
            if ((ulong)*(uint *)((long)param_2 + 0x44) * (ulong)*(uint *)(param_2 + 8) != 0) {
              _memmove(plStack_258,param_2[9]);
            }
            uStack_250 = (undefined2)param_2[10];
            func_0x00010782eaf8(param_1[0x53] + 7,&plStack_260);
            func_0x0001073c7fd0(&plStack_260);
            param_2 = *pplVar24;
          }
          if ((char)param_2[0x25] == '\x01') {
            func_0x00010783306c();
            uVar18 = (param_2[0xd] - param_2[0xc]) / 0x18 & 0xffffffff;
            uStack_3b0 = uVar18;
            pplStack_3a8 = pplVar24;
            pplStack_3a0 = param_1;
            for (uVar15 = 0; param_2 = (long *)0x18, uVar15 != uVar18; uVar15 = uVar15 + 1) {
              plVar13 = *pplVar24;
              func_0x00010782bf00(plVar13 + 0xc);
              plVar21 = param_1[0x53];
              func_0x00010724d934(&plStack_260,plVar13[0xc] + uVar15 * 0x18);
              uVar16 = plVar21[0xc];
              if (uVar16 < (ulong)plVar21[0xd]) {
                func_0x00010739f354(uVar16,&plStack_260);
                lVar17 = uVar16 + 0x20;
              }
              else {
                lVar17 = uVar16 - plVar21[0xb];
                uVar18 = (lVar17 >> 5) + 1;
                if (uVar18 >> 0x3b != 0) {
                  func_0x000107831400();
LAB_10782e990:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10782e994);
                  (*pcVar5)();
                }
                uVar14 = plVar21[0xd] - plVar21[0xb];
                uVar16 = (long)uVar14 >> 4;
                if (uVar16 <= uVar18) {
                  uVar16 = uVar18;
                }
                if (0x7fffffffffffffdf < uVar14) {
                  uVar16 = 0x7ffffffffffffff;
                }
                if (uVar16 == 0) {
                  lVar8 = 0;
                }
                else {
                  if (uVar16 >> 0x3b != 0) {
                    func_0x000104bd35f4();
                    goto LAB_10782e990;
                  }
                  lVar8 = uVar16 << 5;
                  __Znwm();
                }
                lVar17 = lVar8 + lVar17;
                func_0x00010739f354(lVar17,&plStack_260);
                lVar23 = plVar21[0xb];
                lVar2 = plVar21[0xc];
                puVar1 = (undefined1 *)(lVar17 + (lVar23 - lVar2));
                puVar9 = puVar1;
                for (lVar10 = lVar23; lVar10 != lVar2; lVar10 = lVar10 + 0x20) {
                  *puVar9 = 0;
                  puVar9[0x18] = 0;
                  if (*(char *)(lVar10 + 0x18) == '\x01') {
                    func_0x00010739f390(puVar9,lVar10);
                    puVar9[0x18] = 1;
                  }
                  puVar9 = puVar9 + 0x20;
                }
                for (; lVar23 != lVar2; lVar23 = lVar23 + 0x20) {
                  func_0x00010739f370(lVar23);
                }
                lVar17 = lVar17 + 0x20;
                lVar10 = plVar21[0xb];
                plVar21[0xb] = (long)puVar1;
                plVar21[0xc] = lVar17;
                plVar21[0xd] = lVar8 + uVar16 * 0x20;
                uVar18 = uStack_3b0;
                pplVar24 = pplStack_3a8;
                param_1 = pplStack_3a0;
                if (lVar10 != 0) {
                  __ZdlPv();
                  uVar18 = uStack_3b0;
                  pplVar24 = pplStack_3a8;
                  param_1 = pplStack_3a0;
                }
              }
              plVar21[0xc] = lVar17;
              func_0x00010724e5f4(&plStack_260);
            }
          }
        }
        func_0x000107833144(param_1[0x12]);
        pplVar12 = param_1;
        (*extraout_x8_00)();
        plVar13 = *pplVar24;
        uVar6 = (char)plVar13[0x25] == '\x01';
        if ((bool)uVar6) {
          param_2 = param_1[0x10];
          func_0x00010782bf00(plVar13 + 0xc);
          plVar25 = *pplVar24;
          func_0x00010782bf00(plVar25 + 0xc);
          lVar17 = 0;
          plVar21 = plVar13 + 0x31;
          while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
            plVar11 = plVar13 + 0x1d;
            func_0x0001078331c4();
            if (((ulong)plVar11 & 1) == 0) {
              uVar22 = (int)plVar25 + 0x100;
              func_0x0001078331c4();
            }
            else {
              uVar22 = 1;
            }
            plVar11 = plVar21 + 2;
            func_0x000107278484(plVar11,"");
            lVar17 = lVar17 + ((ulong)~((uint)plVar11 | uVar22) & 1);
          }
          func_0x000107832cd8(0x54);
          func_0x000107833254(auStack_2d0);
          func_0x000107832ecc();
          func_0x000107371bc4(&plStack_260);
          uStack_40 = 3;
          lStack_350 = *param_2;
          uStack_348 = 3;
          lStack_48 = lVar17;
          func_0x000107833018();
          func_0x000104c2f714(auStack_2d0);
          func_0x00010783325c();
          func_0x000107832cd8(0x54);
          func_0x000107833254(&lStack_48);
          func_0x000107832ecc();
          pplVar12 = &plStack_260;
          func_0x000107371bc4();
          uStack_348 = 3;
          lStack_360 = *param_2;
          uStack_358 = 3;
          lStack_350 = lVar17;
          func_0x000107832e74(param_2,pplVar12,&lStack_350,&lStack_360);
          func_0x000107833184();
          func_0x00010783325c();
        }
        FUN_107831640(&plStack_370);
        pplVar20 = &plStack_150;
        func_0x00010743d7e4();
        goto LAB_10782e96c;
      }
      param_2 = (long *)0x90;
      __Znwm();
      param_2[2] = 0;
      plVar13 = param_2 + 3;
      *param_2 = (long)&PTR_DAT_1109e1328;
      param_2[1] = 0;
      func_0x000107832440(plVar13,0);
    }
    plStack_260 = plVar13;
    plStack_258 = param_2;
    param_1 = param_1 + 0x53;
    pplVar12 = &plStack_260;
    puVar26 = (undefined *)0x10782e5e4;
  }
  plVar21 = pplVar12[1];
  plVar13 = *pplVar12;
  *pplVar12 = (long *)0x0;
  pplVar12[1] = (long *)0x0;
  plStack_3d8 = param_1[1];
  plStack_3e0 = *param_1;
  param_1[1] = plVar21;
  *param_1 = plVar13;
  plStack_3d0 = param_2;
  pplStack_3c8 = pplVar20;
  puStack_3c0 = &stack0x00000050;
  puStack_3b8 = puVar26;
  func_0x00010751838c(&plStack_3e0);
  return param_1;
}



/* Entry: 10782ed78; end: 10782ee03;  */

void FUN_10782ed78(long *param_1)

{
  long lVar1;
  undefined8 uStack_60;
  
  func_0x000107832eb8();
  if (uStack_60 != 0) {
    lVar1 = *param_1;
    func_0x000107833124();
    func_0x00010783278c();
    func_0x000107833224();
    func_0x000107833098();
    if (lVar1 != 0) {
      func_0x000107832c60();
    }
  }
  func_0x000107832ef8();
  return;
}



/* Entry: 10782f42c; end: 10782f6e7;  */

void FUN_10782f42c(void)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long lVar8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long *plVar9;
  ulong *puVar10;
  long extraout_x9;
  int extraout_w10;
  ulong *puVar11;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *unaff_x24;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  func_0x000107833544();
  func_0x000107832fc8();
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,100);
  in_stack_00000048 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  func_0x000107832d10();
  func_0x000107833104();
  func_0x000107833400(&stack0x00000030,7);
  func_0x0001078333d4();
  func_0x000107262330(&stack0x00000030);
  iVar2 = *(int *)(unaff_x20 + 0x48);
  uVar4 = iVar2 + -1 < 0;
  uVar5 = iVar2 == 1;
  if ((bool)uVar5) {
    func_0x000107832fb0(&stack0x000000a0);
    func_0x00010782f3bc(*(undefined1 *)(unaff_x20 + 0x40),&stack0x000000a0);
    puVar7 = *(undefined8 **)(unaff_x19 + 0x80);
    func_0x000107832f38();
    func_0x000107832f20(*puVar7);
    func_0x000107833044();
    func_0x000107832e74();
  }
  else if (iVar2 == 0) {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x80);
    func_0x000107832fd4(&stack0x000000a0,9);
    func_0x000107832f38();
    func_0x000107832f20(**(undefined8 **)(unaff_x19 + 0x80));
    func_0x000107833044();
    func_0x000107832e74(uVar12);
    lVar8 = *(long *)(unaff_x20 + 8);
    in_stack_00000018 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000010 = lVar8;
    if (in_stack_00000018 != 0) {
      do {
        func_0x000107832d84();
        lVar8 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar10 = (ulong *)(lVar8 + 0x58);
    func_0x00010782f9b4();
    lVar8 = in_stack_00000018;
    plVar1 = (long *)(unaff_x19 + 0x2d0);
    puVar13 = *(ulong **)(unaff_x19 + 0x2d8);
    puVar6 = puVar10;
    if (puVar13 != (ulong *)0x0) {
      func_0x0001078334ac();
      if ((bool)uVar5) {
        unaff_x24 = (ulong *)(extraout_x8_00 & (ulong)puVar10);
      }
      else {
        uVar4 = (long)puVar10 - (long)puVar13 < 0;
        unaff_x24 = puVar10;
        if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          unaff_x24 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
      }
      plVar9 = *(long **)(*plVar1 + (long)unaff_x24 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_10782f59c;
            puVar11 = (ulong *)plVar9[1];
            if (puVar11 != puVar10) break;
            uVar4 = plVar9[2] - (long)puVar10 < 0;
            if ((ulong *)plVar9[2] == puVar10) goto LAB_10782f684;
          }
          if (((ulong)puVar13 & extraout_x8_00) == 0) {
            puVar11 = (ulong *)((ulong)puVar11 & extraout_x8_00);
          }
          else if (puVar13 <= puVar11) {
            uVar3 = 0;
            if (puVar13 != (ulong *)0x0) {
              uVar3 = (ulong)puVar11 / (ulong)puVar13;
            }
            puVar11 = (ulong *)((long)puVar11 - uVar3 * (long)puVar13);
          }
          uVar4 = (long)puVar11 - (long)unaff_x24 < 0;
        } while (puVar11 == unaff_x24);
      }
    }
LAB_10782f59c:
    func_0x0001078330fc();
    func_0x00010783315c();
    if (lVar8 != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10 != 0);
    }
    func_0x000107833248(*(undefined8 *)(unaff_x19 + 0x2e8));
    if ((puVar13 == (ulong *)0x0) || (func_0x0001078331cc(), (bool)uVar4)) {
      func_0x000107833390();
      uVar4 = puVar13 == (ulong *)0x3;
      func_0x000107832c80();
      FUN_107831db0(plVar1);
      puVar13 = *(ulong **)(unaff_x19 + 0x2d8);
      func_0x0001078334ac();
      if ((bool)uVar4) {
        unaff_x24 = (ulong *)(extraout_x8_01 & (ulong)puVar10);
      }
      else {
        unaff_x24 = puVar10;
        if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          unaff_x24 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
      }
    }
    puVar10 = *(ulong **)(*plVar1 + (long)unaff_x24 * 8);
    if (puVar10 == (ulong *)0x0) {
      func_0x000107833378();
      if (extraout_x9 != 0) {
        puVar10 = *(ulong **)(extraout_x9 + 8);
        if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
          puVar10 = (ulong *)((ulong)puVar10 & (long)puVar13 - 1U);
        }
        else if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          puVar10 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
        *(ulong **)(extraout_x8_02 + (long)puVar10 * 8) = puVar6;
      }
    }
    else {
      *puVar6 = *puVar10;
      *puVar10 = (ulong)puVar6;
    }
    in_stack_00000030 = 0;
    *(long *)(unaff_x19 + 0x2e8) = *(long *)(unaff_x19 + 0x2e8) + 1;
    func_0x000107831ef4(&stack0x00000030);
LAB_10782f684:
    func_0x000107435084(&stack0x00000010);
    func_0x000107833144(*(undefined8 *)(unaff_x19 + 0x90));
    func_0x000107833410();
  }
  func_0x000107262330(&stack0x000000a0);
  return;
}



/* Entry: 10782fac0; end: 10782fb6b;  */

float FUN_10782fac0(undefined8 param_1,long param_2,long param_3)

{
  float fVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_3;
  func_0x0001074f2a7c();
  lStack_50 = param_3;
  fVar1 = 0.0;
  while (lStack_50 != 0) {
    plVar2 = *(long **)(param_2 + 0x1e8);
    lStack_48 = lVar4;
    func_0x00010782fab4(plVar2,*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x18));
    fVar5 = fVar1;
    if (((plVar2 != (long *)0x0) && (plVar3 = (long *)*plVar2, plVar3 != (long *)0x0)) &&
       ((**(code **)(*plVar3 + 0x48))(), (int)plVar3 != 0)) {
      (**(code **)(*(long *)*plVar2 + 0x50))((long *)*plVar2,*(undefined8 *)(lVar4 + 0x38));
      fVar5 = (float)param_1;
      if ((float)param_1 <= fVar1) {
        fVar5 = fVar1;
      }
    }
    func_0x0001074f2b94(&lStack_50);
    lVar4 = lStack_48;
    fVar1 = fVar5;
  }
  return fVar1;
}



/* Entry: 1078303f4; end: 1078304a3;  */

void FUN_1078303f4(long *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((((param_1[0x3d] != 0) && (lVar1 = *(long *)(param_1[0x3d] + 0x30), lVar1 != 0)) &&
      (*(long *)(lVar1 + 0x128) != 0)) &&
     (((*(byte *)param_1[0x13] & 1) != 0 && (param_1[0x69] != param_1[0x6a])))) {
    func_0x00010745f750(auStack_38,param_1[0x18]);
    func_0x00010750a49c(auStack_50,param_1[0x15]);
    (**(code **)(*param_1 + 0xb8))(param_1,auStack_38,auStack_50);
    func_0x0001073e0338(auStack_50);
    func_0x00010726b264(auStack_38);
  }
  return;
}



/* Entry: 107830f48; end: 107830f73;  */

void FUN_107830f48(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001078333f4();
  *param_1 = &PTR_DAT_1109e1040;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 10783110c; end: 10783115f;  */

void FUN_10783110c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xc0;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  func_0x000107831160(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 107831338; end: 10783133f;  */

void FUN_107831338(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010783323c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -200;
    func_0x0001073f1280();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107831640; end: 107831687;  */

void FUN_107831640(long param_1)

{
  func_0x000107833510();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10783178c; end: 1078317d3;  */

undefined8 * FUN_10783178c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1148;
  func_0x000107831764();
  func_0x000107831664(param_1 + 5);
  func_0x00010724b54c(param_1 + 3);
  func_0x00010724b8b8(param_1 + 1);
  return param_1;
}



/* Entry: 107831a0c; end: 107831a0f;  */

undefined8 * FUN_107831a0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1198;
  func_0x000107831ac4(param_1 + 4);
  return param_1;
}



/* Entry: 107831b78; end: 107831ba3;  */

void FUN_107831b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = *param_4;
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x000107831ba4(param_1,&uStack_20,&uStack_28);
  return;
}



/* Entry: 107831db0; end: 107831edb;  */

/* WARNING: Possible PIC construction at 0x000107831e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107831ec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107831e0c) */
/* WARNING: Removing unreachable block (ram,0x000107831e10) */
/* WARNING: Removing unreachable block (ram,0x000107831e24) */
/* WARNING: Removing unreachable block (ram,0x000107831e2c) */
/* WARNING: Removing unreachable block (ram,0x000107831e34) */
/* WARNING: Removing unreachable block (ram,0x000107831e3c) */
/* WARNING: Removing unreachable block (ram,0x000107831e44) */
/* WARNING: Removing unreachable block (ram,0x000107831e64) */
/* WARNING: Removing unreachable block (ram,0x000107831e50) */
/* WARNING: Removing unreachable block (ram,0x000107831e58) */
/* WARNING: Removing unreachable block (ram,0x000107831e68) */
/* WARNING: Removing unreachable block (ram,0x000107831e70) */
/* WARNING: Removing unreachable block (ram,0x000107831e80) */
/* WARNING: Removing unreachable block (ram,0x000107831e88) */
/* WARNING: Removing unreachable block (ram,0x000107831e78) */
/* WARNING: Removing unreachable block (ram,0x000107831e18) */
/* WARNING: Removing unreachable block (ram,0x000107831ecc) */

void FUN_107831db0(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = param_1;
  if ((long)param_2 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else {
    plVar4 = param_2;
    if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      func_0x00010783343c();
      plVar4 = plVar2;
    }
  }
  plVar5 = (long *)param_1[1];
  uVar1 = plVar5 <= plVar4;
  if (!(bool)uVar1 || plVar4 == plVar5) {
    if ((bool)uVar1) {
      return;
    }
    func_0x000107832e58();
    if (((bool)uVar1) && (((ulong)plVar5 & (long)plVar5 - 1U) == 0)) {
      func_0x000107832da8();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010783326c();
    if ((bool)uVar1) {
      return;
    }
    if (plVar4 == (long *)0x0) {
      param_2 = (long *)0x0;
      goto code_r0x000107831edc;
    }
  }
  if ((ulong)plVar4 >> 0x3d == 0) {
    func_0x0001078333c0();
    param_2 = plVar2;
  }
  else {
    func_0x000104bd35f4();
    param_1 = plVar2;
  }
code_r0x000107831edc:
  lVar3 = *param_1;
  *param_1 = (long)param_2;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078320d8; end: 1078320db;  */

undefined8 * FUN_1078320d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e12a8;
  func_0x00010783218c(param_1 + 4);
  return param_1;
}



/* Entry: 1078323d0; end: 10783243b;  */

long FUN_1078323d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x78);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      func_0x00010739f370();
    }
    *(long *)(param_1 + 0x78) = lVar2;
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  func_0x0001078311e0(param_1 + 0x50);
  lStack_28 = param_1 + 0x38;
  func_0x000107832530(&lStack_28);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010730b0e8(param_1 + 0x28);
  }
  return param_1 + 0x18;
}



/* Entry: 1078326a8; end: 1078326d3;  */

undefined8 FUN_1078326a8(undefined8 param_1)

{
  func_0x000107832fdc(&PTR_DAT_1109e1378);
  func_0x00010780f81c();
  return param_1;
}



/* Entry: 1078328a0; end: 107832937;  */

void FUN_1078328a0(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  long extraout_x11;
  ulong uVar2;
  ulong uVar3;
  
  func_0x0001078332fc();
  if (extraout_x10 != 0) {
    uVar2 = *(ulong *)(extraout_x11 + 8);
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar2 = uVar3 - 1 & uVar2;
    }
    else if (uVar3 <= uVar2) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar2 / uVar3;
      }
      uVar2 = uVar2 - uVar1 * uVar3;
    }
    *(long *)(extraout_x8 + uVar2 * 8) = param_1 + 0x10;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 107832af0; end: 107832af7;  */

void FUN_107832af0(void)

{
  return;
}



/* Entry: 10783387c; end: 1078338db;  */

double FUN_10783387c(long *param_1)

{
  short *psVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3 >> 2;
  psVar1 = (short *)(lVar3 + 2);
  dVar8 = 0.0;
  lVar6 = 0;
  lVar5 = lVar7 + -1;
  for (; lVar4 = lVar6, lVar7 != 0; lVar7 = lVar7 + -1) {
    psVar2 = (short *)(lVar3 + lVar5 * 4);
    dVar8 = dVar8 + (double)(((int)psVar2[1] + (int)*psVar1) * ((int)*psVar2 - (int)psVar1[-1]));
    psVar1 = psVar1 + 2;
    lVar6 = lVar4 + 1;
    lVar5 = lVar4;
  }
  return dVar8;
}



/* Entry: 1078345cc; end: 10783463f;  */

/* WARNING: Possible PIC construction at 0x000107834620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107834630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107834624) */
/* WARNING: Removing unreachable block (ram,0x000107834634) */

void FUN_1078345cc(long *param_1,ulong param_2)

{
  undefined1 **ppuVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar3;
  undefined *puVar4;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  ppuVar1 = (undefined1 **)auStack_50;
  plVar2 = param_1 + 2;
  if ((ulong)(*plVar2 - *param_1 >> 3) < param_2) {
    if (param_2 >> 0x3d == 0) {
      unaff_x20 = param_1[1] - *param_1;
      plStack_28 = plVar2;
      func_0x00010783466c();
      lStack_40 = (long)plVar2 + unaff_x20;
      plStack_30 = plVar2 + param_2;
      plStack_48 = plVar2;
      lStack_38 = lStack_40;
      func_0x000100660238();
      puVar4 = (undefined *)0x107834624;
      ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    }
    else {
      ppuVar1 = &puStack_60;
      ppuVar3 = &puStack_60;
      uStack_58 = 0x107834634;
      puVar4 = &SUB_10783464c;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x0001078423e8();
    }
    *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_x22;
    *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar1 + -0x20) = unaff_x20;
    *(long **)((long)ppuVar1 + -0x18) = param_1;
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar3;
    *(undefined **)((long)ppuVar1 + -8) = puVar4;
    func_0x000107842254();
    func_0x00010784214c();
    return;
  }
  return;
}



/* Entry: 10783473c; end: 1078347d7;  */

long FUN_10783473c(long *param_1,short *param_2,short *param_3)

{
  int *piVar1;
  long lVar2;
  short sVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = param_1;
  func_0x0001078347d8(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar6 = *param_1;
  lVar2 = param_1[1];
  plVar5 = param_1 + 2;
  if (plVar4 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    func_0x00010783466c();
  }
  piVar1 = (int *)((long)plVar5 + (lVar2 - lVar6));
  sVar3 = *param_3;
  *piVar1 = (int)*param_2;
  piVar1[1] = (int)sVar3;
  func_0x000100660238();
  func_0x00010783464c();
  lVar6 = param_1[1];
  func_0x000107842a10();
  return lVar6;
}



/* Entry: 1078348ec; end: 10783497f;  */

void FUN_1078348ec(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  func_0x0001078348bc(param_2,param_1);
  iVar1 = (int)uVar2;
  func_0x000107842758();
  func_0x0001078348bc();
  if ((uVar2 & 1) == 0) {
    if (iVar1 == 0) {
      return;
    }
    func_0x000107842764();
    func_0x0001073ec360();
    func_0x0001078348bc(param_2,param_1);
    if ((int)param_2 == 0) {
      return;
    }
    func_0x000107842c0c();
  }
  else if (iVar1 == 0) {
    func_0x000107842c0c();
    func_0x0001073ec360();
    func_0x000107842758();
    func_0x0001078348bc();
    if (iVar1 == 0) {
      return;
    }
  }
  func_0x0001073ec360();
  return;
}



/* Entry: 107834b34; end: 107834b73;  */

long * FUN_107834b34(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107834a08();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    func_0x000107842ff4();
  }
  func_0x000107834ba0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078357b4; end: 1078357db;  */

void FUN_1078357b4(void)

{
  func_0x0001078425f8();
  func_0x000107842a90();
  func_0x000107835858();
  func_0x00010784214c();
  return;
}



/* Entry: 107835990; end: 107835a33;  */

int * FUN_107835990(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
  iVar1 = *param_2;
  iVar4 = param_2[1];
  *param_1 = iVar1;
  param_1[1] = iVar4;
  param_1[2] = iVar1;
  param_1[3] = iVar4;
  iVar5 = *param_3;
  iVar6 = param_3[1];
  if (param_2[1] < iVar6) {
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    iVar3 = iVar4;
    iVar4 = iVar6;
    iVar6 = iVar5;
    iVar5 = iVar1;
  }
  else {
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_3;
    iVar3 = iVar6;
    iVar6 = iVar1;
  }
  piVar2 = param_1;
  func_0x000107835a34((double)(iVar3 - iVar4));
  if (((ulong)piVar2 & 1) == 0) {
    dVar7 = (double)(iVar5 - iVar6) / (double)(iVar3 - iVar4);
  }
  else {
    dVar7 = INFINITY;
  }
  *(double *)(param_1 + 4) = dVar7;
  return param_1;
}



/* Entry: 10783609c; end: 1078360c7;  */

void FUN_10783609c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[2];
  uVar3 = param_1[1];
  uVar2 = *param_1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = uVar3;
  *param_2 = uVar2;
  param_2[2] = uVar1;
  return;
}



/* Entry: 107836398; end: 107836a0b;  */

/* WARNING: Removing unreachable block (ram,0x000107836950) */

void FUN_107836398(long param_1)

{
  uint *puVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  ulong *puVar10;
  int **ppiVar11;
  undefined1 (*pauVar12) [16];
  ulong *puVar13;
  int *piVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  int **ppiVar18;
  ulong *puVar19;
  long unaff_x19;
  int iVar20;
  undefined8 *unaff_x21;
  int **unaff_x22;
  long lVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  undefined8 *puVar25;
  bool bVar26;
  bool bVar27;
  long *plVar28;
  undefined1 auVar29 [16];
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  int *piStack_c0;
  int *piStack_b8;
  undefined8 uStack_b0;
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  func_0x0001078425f8();
  pauStack_a8 = (undefined1 (*) [16])0x0;
  pauStack_a0 = (undefined1 (*) [16])0x0;
  uStack_98 = 0;
  piStack_c0 = (int *)0x0;
  piStack_b8 = (int *)0x0;
  uStack_b0 = 0;
  func_0x000107842f78();
  ppiVar11 = *(int ***)(param_1 + 0x28);
  func_0x000107837810(&puStack_d8);
  func_0x000107834ab0();
  func_0x000107842bac();
  do {
    ppiVar18 = unaff_x22 + -500;
    do {
      if (unaff_x22 == ppiVar11) {
        func_0x000107837864(puStack_d8,puStack_d0);
        ppiVar11 = &piStack_c0;
        func_0x000107837900();
        func_0x000107834ab0();
        func_0x000107842bac();
        pauVar12 = (undefined1 (*) [16])0x0;
        goto LAB_107836450;
      }
      func_0x0001078379c4(&puStack_d8,unaff_x22);
      unaff_x22 = unaff_x22 + 0x19;
      ppiVar18 = ppiVar18 + 0x19;
    } while ((int **)*unaff_x21 != ppiVar18);
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = (int **)*unaff_x21;
  } while( true );
LAB_107836450:
  ppiVar18 = unaff_x22 + -500;
  do {
    if (unaff_x22 == ppiVar11) {
      FUN_1078345cc(unaff_x19 + 0x30);
      iVar20 = 0x7fffffff;
      puVar25 = puStack_d8;
      goto LAB_1078364b0;
    }
    pauVar12 = (undefined1 (*) [16])
               (*pauVar12 +
               ((long)unaff_x22[0xd] - (long)unaff_x22[0xc]) / 0x18 +
               ((long)unaff_x22[1] - (long)*unaff_x22) / 0x18 + 4);
    ppiVar18 = ppiVar18 + 0x19;
    unaff_x22 = unaff_x22 + 0x19;
  } while ((int **)*unaff_x21 != ppiVar18);
  unaff_x21 = unaff_x21 + 1;
  unaff_x22 = (int **)*unaff_x21;
  goto LAB_107836450;
LAB_1078364b0:
  pauVar3 = pauStack_a0;
  pauVar9 = pauStack_a8;
  if (piStack_c0 == piStack_b8) {
    if (puVar25 == puStack_d0) goto LAB_1078367f0;
  }
  else {
    piStack_b8 = piStack_b8 + -1;
    iVar20 = *piStack_b8;
  }
  if (pauStack_a8 != pauStack_a0) {
    func_0x00010784262c();
    func_0x000107838144();
    pauVar12 = pauVar9;
    bVar27 = false;
    do {
      while (bVar26 = bVar27, pauVar22 = pauVar12,
            bVar5 = pauVar22 != (undefined1 (*) [16])(pauVar3[-1] + 8), bVar5) {
        pauVar12 = (undefined1 (*) [16])(*pauVar22 + 8);
        lVar21 = *(long *)*pauVar12;
        uVar24 = *(ulong *)*pauVar22;
        uVar7 = uVar24;
        func_0x0001078381cc(uVar24,lVar21);
        bVar27 = bVar26;
        if ((uVar7 & 1) == 0) {
          uVar7 = *(ulong *)(uVar24 + 0x18);
          uStack_88 = 0;
          lStack_80 = 0;
          func_0x0001078381ec(uVar7,*(undefined8 *)(lVar21 + 0x18),&uStack_88);
          if ((uVar7 & 1) == 0) {
            func_0x000107842698();
            func_0x000107842fd0();
            func_0x0001078421d4();
            goto LAB_1078369bc;
          }
          func_0x000107838294(uStack_88,lStack_80);
          uStack_90 = uVar7;
          func_0x0001078382d0(unaff_x19 + 0x30,&uStack_90);
          auVar29 = NEON_ext(*pauVar22,*pauVar22,8,1);
          *(long *)(*pauVar22 + 8) = auVar29._8_8_;
          *(long *)*pauVar22 = auVar29._0_8_;
          bVar27 = bVar5;
        }
      }
      pauVar12 = pauVar9;
      bVar27 = bVar5;
    } while (bVar26);
  }
  for (; pauVar3 = pauStack_a0, pauVar9 = pauStack_a8, pauVar12 = pauStack_a8, puVar25 != puStack_d0
      ; puVar25 = puVar25 + 1) {
    uVar6 = *(int *)((undefined8 *)*puVar25 + 0x18) == iVar20;
    if (!(bool)uVar6) break;
    func_0x0001078382d0(unaff_x19 + 0x30,*(undefined8 *)*puVar25);
    puVar8 = (undefined8 *)*puVar25;
    piVar14 = (int *)*puVar8;
    puVar8[3] = piVar14;
    iVar2 = *piVar14;
    puVar8[4] = piVar14 + 6;
    puVar8[8] = (double)iVar2;
    piVar14 = (int *)puVar8[0xc];
    puVar8[0xf] = piVar14;
    iVar2 = *piVar14;
    puVar8[0x10] = piVar14 + 6;
    puVar8[0x14] = (double)iVar2;
    FUN_1078383a4(puVar8,puVar8 + 0xc,&pauStack_a8);
    func_0x0001078431b4(*puVar8);
    if (!(bool)uVar6) {
      func_0x0001078430a0();
    }
    func_0x0001078431b4(puVar8[1]);
    if (!(bool)uVar6) {
      func_0x0001078430a0();
    }
  }
  for (; pauVar12 != pauVar3; pauVar12 = (undefined1 (*) [16])(*pauVar12 + lVar21)) {
    lVar21 = *(long *)*pauVar12;
    if (lVar21 == 0) {
      lVar21 = 8;
    }
    else {
      bVar27 = false;
      pauVar22 = pauVar12;
      while (lVar15 = *(long *)(lVar21 + 0x18), lVar15 != *(long *)(lVar21 + 8)) {
        if (*(int *)(lVar15 + 0xc) != iVar20) goto LAB_10783679c;
        func_0x0001078382d0(unaff_x19 + 0x30,lVar15 + 8);
        pauVar23 = pauVar22;
        if ((*(ulong *)(*(long *)(lVar21 + 0x18) + 0x10) & 0x7fffffffffffffff) == 0x7ff0000000000000
           ) {
          lVar15 = *(long *)*pauVar22;
          iVar2 = (*(int **)(lVar15 + 0x18))[2];
          *(double *)(lVar15 + 0x40) = (double)iVar2;
          if (**(int **)(lVar15 + 0x18) < iVar2) {
            while (pauVar22 = (undefined1 (*) [16])(*pauVar23 + 8), pauVar22 != pauVar3) {
              lVar17 = *(long *)*pauVar22;
              if (lVar17 != 0) {
                if (*(double *)(lVar15 + 0x40) <= *(double *)(lVar17 + 0x40)) break;
                if ((*(int *)(*(long *)(lVar17 + 0x18) + 0xc) != iVar20) &&
                   (*(int *)(*(long *)(lVar17 + 0x18) + 4) != iVar20)) {
                  uStack_88._4_4_ = iVar20;
                  uStack_88._0_4_ = (int)(long)*(double *)(lVar17 + 0x40);
                  func_0x000107843058();
                  lVar15 = *(long *)*pauVar23;
                  lVar17 = *(long *)*pauVar22;
                }
              }
              *(long *)*pauVar23 = lVar17;
              *(long *)*pauVar22 = lVar15;
              bVar27 = true;
              pauVar23 = pauVar22;
            }
          }
          else {
            pauVar23 = pauVar9;
            if (pauVar22 != pauVar9) {
              plVar28 = (long *)(pauVar22[-1] + 8);
              pauVar23 = pauVar22;
              while (pauVar23 != pauVar9) {
                lVar17 = *plVar28;
                lVar15 = *(long *)*pauVar23;
                if (lVar17 != 0) {
                  if (*(double *)(lVar17 + 0x40) <= *(double *)(lVar15 + 0x40)) break;
                  if ((*(int *)(*(long *)(lVar17 + 0x18) + 0xc) != iVar20) &&
                     (*(int *)(*(long *)(lVar17 + 0x18) + 4) != iVar20)) {
                    uStack_88._4_4_ = iVar20;
                    uStack_88._0_4_ = (int)(long)*(double *)(lVar17 + 0x40);
                    func_0x000107843058();
                    lVar17 = *plVar28;
                    lVar15 = *(long *)*pauVar23;
                  }
                }
                *(long *)*pauVar23 = lVar17;
                *plVar28 = lVar15;
                lVar15 = 0;
                if ((undefined1 (*) [16])(pauVar23[-1] + 8) != pauVar9) {
                  lVar15 = -8;
                }
                plVar28 = (long *)((long)plVar28 + lVar15);
                pauVar23 = (undefined1 (*) [16])(pauVar23[-1] + 8);
              }
            }
          }
        }
        func_0x00010783899c(lVar21,&piStack_c0);
        pauVar22 = pauVar23;
      }
      *(undefined8 *)*pauVar22 = 0;
LAB_10783679c:
      lVar21 = 0;
      if (!bVar27) {
        lVar21 = 8;
      }
    }
  }
  pauVar12 = pauVar3;
  func_0x0001078389f4();
  if ((long)pauVar3 - (long)pauVar9 != 0) {
    pauVar12 = (undefined1 (*) [16])((long)pauVar9 + ((long)pauVar3 - (long)pauVar9));
    lVar21 = (long)pauVar3 - (long)pauVar12;
    if (lVar21 != 0) {
      _memmove(pauVar9,pauVar12,lVar21);
    }
    pauStack_a0 = (undefined1 (*) [16])((long)pauVar9 + lVar21);
  }
  goto LAB_1078364b0;
LAB_1078367f0:
  lVar21 = *(long *)(unaff_x19 + 0xb0);
  uVar24 = *(long *)(unaff_x19 + 0x38) - *(long *)(unaff_x19 + 0x30);
  uVar7 = (long)uVar24 >> 3;
  if ((ulong)(*(long *)(unaff_x19 + 0xc0) - lVar21 >> 5) < uVar7) {
    if (uVar7 >> 0x3b != 0) {
      func_0x000107838a3c();
      goto LAB_1078369bc;
    }
    func_0x000107838a68(&uStack_88,uVar7,*(long *)(unaff_x19 + 0xb8) - lVar21 >> 5);
    pauVar12 = (undefined1 (*) [16])&uStack_88;
    func_0x000107838a48((long *)(unaff_x19 + 0xb0));
    func_0x000107838ac0(&uStack_88);
  }
  lVar21 = *(long *)(unaff_x19 + 0x18);
  if ((ulong)(*(long *)(unaff_x19 + 0x28) - lVar21) < uVar24) {
    if (uVar7 >> 0x3d != 0) {
      func_0x000107838afc();
LAB_1078369bc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1078369c0);
      (*pcVar4)();
    }
    lVar15 = *(long *)(unaff_x19 + 0x20);
    plStack_68 = (long *)(unaff_x19 + 0x28);
    func_0x000107838b28();
    lStack_80 = uVar7 + (lVar15 - lVar21);
    lStack_70 = uVar7 + (long)pauVar12 * 8;
    lStack_78 = lStack_80;
    func_0x000107838b08((long *)(unaff_x19 + 0x18),&uStack_88);
    func_0x000107838b50(&uStack_88);
  }
  puVar10 = *(ulong **)(unaff_x19 + 0x30);
  puVar13 = *(ulong **)(unaff_x19 + 0x38);
  if (puVar10 != puVar13) {
    FUN_107838b8c(puVar10,puVar13,LZCOUNT((long)puVar13 - (long)puVar10 >> 3) << 1 ^ 0x7e,1);
    puVar10 = *(ulong **)(unaff_x19 + 0x30);
    puVar13 = *(ulong **)(unaff_x19 + 0x38);
  }
  if (puVar10 != puVar13) {
    do {
      puVar19 = puVar10;
      puVar10 = puVar19 + 1;
      if (puVar10 == puVar13) goto LAB_107836964;
      uVar7 = (ulong)(uint)*puVar19;
    } while ((uint)*puVar19 != (uint)puVar19[1] ||
             *(uint *)((long)puVar19 + 4) != *(uint *)((long)puVar19 + 0xc));
    while (puVar16 = puVar10 + 1, puVar16 != puVar13) {
      puVar1 = (uint *)((long)puVar10 + 0xc);
      puVar10 = puVar16;
      if ((uint)uVar7 != (uint)*puVar16 || *(uint *)((long)puVar19 + 4) != *puVar1) {
        uVar7 = *puVar16;
        puVar19 = puVar19 + 1;
        *puVar19 = uVar7;
      }
    }
    if (puVar19 + 1 != *(ulong **)(unaff_x19 + 0x38)) {
      *(ulong **)(unaff_x19 + 0x38) = puVar19 + 1;
    }
  }
LAB_107836964:
  func_0x0001078396e8(&puStack_d8);
  func_0x0001002920a0(&piStack_c0);
  func_0x00010783970c(&pauStack_a8);
  return;
}



/* Entry: 107837bb4; end: 107837bd3;  */

void FUN_107837bb4(void)

{
  func_0x000107842f30();
  func_0x000107837b9c();
  return;
}



/* Entry: 1078383a4; end: 1078385d7;  */

long * FUN_1078383a4(double param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 unaff_x30;
  double dVar17;
  double dVar18;
  undefined1 auStack_e8 [40];
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  long *aplStack_88 [3];
  
  plVar5 = param_2;
  plVar7 = param_3;
  plVar8 = param_4;
  func_0x000107842d2c();
  aplStack_88[2] = (long *)extraout_x8;
  plVar14 = (long *)plVar8[1];
  dVar17 = (double)plVar5[8];
  plVar15 = (long *)plVar5[3];
  plVar8 = (long *)*plVar8;
  for (plVar6 = plVar8; plVar13 = plVar14, plVar6 != plVar14; plVar6 = plVar6 + 1) {
    lVar16 = *plVar6;
    dVar18 = *(double *)(lVar16 + 0x40);
    func_0x000107842eb8();
    func_0x000107835a3c();
    plVar13 = plVar6;
    if ((int)plVar5 == 0) {
      if (dVar17 < dVar18) break;
    }
    else {
      plVar7 = (long *)(ulong)*(uint *)((long)plVar15 + 0xc);
      plVar5 = *(long **)(lVar16 + 0x18);
      plVar9 = (long *)(ulong)*(uint *)((long)plVar5 + 0xc);
      if ((int)*(uint *)((long)plVar5 + 0xc) < (int)*(uint *)((long)plVar15 + 0xc)) {
        dVar18 = (double)(int)plVar15[1];
        func_0x000107838198();
        func_0x000107838634(dVar18,param_1);
        param_1 = dVar18;
      }
      else {
        dVar18 = (double)(int)plVar5[1];
        plVar5 = plVar15;
        func_0x000107838198();
        func_0x000107838660(dVar18,param_1);
        plVar7 = plVar9;
        param_1 = dVar18;
      }
      if (((ulong)plVar5 & 1) != 0) break;
    }
  }
  aplStack_88[0] = param_2;
  aplStack_88[1] = param_3;
  plVar6 = plVar13;
  if (param_4[2] - (long)plVar14 < 0x10) {
    uVar1 = ((long)plVar14 - (long)plVar8 >> 3) + 2;
    if (uVar1 >> 0x3d == 0) {
      uVar10 = param_4[2] - (long)plVar8;
      uVar12 = (long)uVar10 >> 2;
      if ((ulong)((long)uVar10 >> 2) <= uVar1) {
        uVar12 = uVar1;
      }
      uVar4 = uVar10 == 0x7ffffffffffffff8;
      if (0x7ffffffffffffff7 < uVar10) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 == 0) {
        plVar15 = (long *)0x0;
      }
      else {
        if (uVar12 >> 0x3d != 0) goto LAB_1078385d4;
        plVar15 = (long *)(uVar12 << 3);
        __Znwm();
      }
      plVar6 = (long *)((long)plVar15 + ((long)plVar13 - (long)plVar8));
      *plVar6 = (long)param_2;
      plVar6[1] = (long)param_3;
      plVar14 = (long *)((long)plVar14 - (long)plVar13);
      func_0x000107842c0c();
      _memcpy();
      param_2 = (long *)((long)(plVar6 + 2) + (long)plVar14);
      param_4[1] = (long)plVar13;
      plVar5 = plVar15;
      plVar7 = plVar8;
      _memcpy(plVar15,plVar8,(long)plVar13 - (long)plVar8);
      *param_4 = (long)plVar15;
      param_4[1] = (long)param_2;
      param_4[2] = (long)(plVar15 + uVar12);
      if (plVar8 != (long *)0x0) {
        __ZdlPv();
        plVar5 = plVar8;
      }
      goto LAB_1078385a0;
    }
  }
  else {
    lVar11 = (long)plVar14 - (long)plVar13;
    uVar4 = lVar11 == 8;
    plVar8 = plVar14;
    lVar16 = lVar11;
    if (lVar11 < 9) {
      for (; lVar16 != 0x10; lVar16 = lVar16 + 8) {
        *plVar8 = *(long *)((long)aplStack_88 + lVar16);
        plVar8 = plVar8 + 1;
      }
      param_4[1] = (long)plVar8;
      uVar4 = lVar11 == 8;
      if ((bool)uVar4) {
        func_0x000107842758();
        func_0x00010783868c();
        *plVar13 = (long)param_2;
      }
    }
    else {
      func_0x000107842758();
      func_0x00010783868c();
      *plVar13 = (long)param_2;
      plVar13[1] = (long)param_3;
    }
LAB_1078385a0:
    func_0x0001078429fc(aplStack_88[2]);
    if ((bool)uVar4) {
      func_0x000107842b58(plVar6,unaff_x30);
      return plVar6;
    }
    ___stack_chk_fail();
  }
  func_0x0001078386cc();
LAB_1078385d4:
  func_0x000104bd35f4();
  piVar3 = (int *)*plVar5;
  uVar1 = plVar5[1] - *plVar5 >> 2;
  while (piVar2 = piVar3, uVar1 != 0) {
    uVar12 = uVar1 >> 1;
    piVar3 = piVar2 + uVar12 + 1;
    uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
    if ((int)*plVar7 <= piVar2[uVar12]) {
      piVar3 = piVar2;
      uVar1 = uVar12;
    }
  }
  if (((int *)plVar5[1] != piVar2) && (*piVar2 <= (int)*plVar7)) {
    return plVar5;
  }
  puStack_98 = &UNK_1078385d8;
  plStack_c0 = plVar14;
  plStack_b8 = param_2;
  plStack_b0 = param_4;
  plStack_a8 = plVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001078425f8();
  plVar8 = (long *)plVar5[1];
  if (plVar8 < (long *)plVar5[2]) {
    if (plVar6 == plVar8) {
      *(int *)plVar8 = (int)*plVar7;
      param_4[1] = (long)plVar8 + 4;
    }
    else {
      func_0x000107842758();
      func_0x0001078387bc();
      lVar16 = 4;
      if ((long *)param_4[1] <= plVar7 || plVar7 < plVar6) {
        lVar16 = 0;
      }
      *(undefined4 *)plVar6 = *(undefined4 *)((long)plVar7 + lVar16);
    }
  }
  else {
    plVar14 = param_4;
    func_0x0001006601e8(param_4,((long)plVar8 - *param_4 >> 2) + 1);
    func_0x000100161bec(auStack_e8,plVar14,(long)plVar6 - *param_4 >> 2,plVar5 + 2);
    func_0x0001078387fc(auStack_e8,plVar7);
    FUN_1078388c8(param_4,auStack_e8,plVar6);
    func_0x0001078426b0();
    func_0x000100161cc4();
  }
  return plVar6;
}



/* Entry: 1078388c8; end: 107838967;  */

undefined8 FUN_1078388c8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  lVar2 = param_3;
  func_0x000107842888();
  uVar1 = *(undefined8 *)(param_2 + 8);
  _memcpy(*(undefined8 *)(param_2 + 0x10),param_3,*(long *)(param_1 + 8) - lVar2);
  lVar2 = *unaff_x21;
  lVar3 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - param_3);
  unaff_x21[1] = param_3;
  lVar3 = lVar3 - (param_3 - lVar2);
  _memcpy(lVar3);
  unaff_x20[1] = lVar3;
  lVar2 = *unaff_x21;
  unaff_x21[1] = lVar2;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar2;
  lVar2 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar2;
  lVar2 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar2;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 107838b8c; end: 107839207;  */

/* WARNING: Possible PIC construction at 0x000107838c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107838c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010783938c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078392fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107839390) */
/* WARNING: Removing unreachable block (ram,0x0001078393a8) */
/* WARNING: Removing unreachable block (ram,0x0001078393b4) */
/* WARNING: Removing unreachable block (ram,0x0001078393d0) */
/* WARNING: Removing unreachable block (ram,0x0001078393dc) */
/* WARNING: Removing unreachable block (ram,0x0001078393e8) */
/* WARNING: Removing unreachable block (ram,0x0001078393f4) */
/* WARNING: Removing unreachable block (ram,0x000107839414) */
/* WARNING: Removing unreachable block (ram,0x000107839420) */
/* WARNING: Removing unreachable block (ram,0x000107839424) */
/* WARNING: Removing unreachable block (ram,0x000107842290) */
/* WARNING: Removing unreachable block (ram,0x000107838c2c) */
/* WARNING: Removing unreachable block (ram,0x000107838c0c) */
/* WARNING: Removing unreachable block (ram,0x000107839300) */
/* WARNING: Removing unreachable block (ram,0x00010783930c) */
/* WARNING: Removing unreachable block (ram,0x000107839318) */
/* WARNING: Removing unreachable block (ram,0x000107839324) */
/* WARNING: Removing unreachable block (ram,0x000107839330) */
/* WARNING: Removing unreachable block (ram,0x000107839350) */
/* WARNING: Removing unreachable block (ram,0x00010783935c) */
/* WARNING: Removing unreachable block (ram,0x000107839360) */
/* WARNING: Removing unreachable block (ram,0x000107842348) */

void FUN_107838b8c(undefined8 param_1,undefined8 param_2,int *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int extraout_w8;
  uint uVar13;
  int iVar14;
  int extraout_w8_00;
  undefined8 uVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  uint extraout_w9;
  int iVar16;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  uint extraout_w9_05;
  int iVar17;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int *extraout_x10;
  int *extraout_x10_00;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  long lVar18;
  int *piVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  int *unaff_x19;
  int *unaff_x20;
  ulong uVar23;
  ulong uVar24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  int *piStack_40;
  int *piStack_38;
  int *piStack_30;
  int *piStack_28;
  int *piStack_20;
  int *piStack_18;
  undefined1 auStack_10 [16];
  
  func_0x000107843308();
  func_0x0001078425f8();
LAB_107838bac:
  piVar10 = unaff_x19 + -2;
  piVar9 = unaff_x20;
LAB_107838bbc:
  unaff_x20 = piVar9;
  uVar24 = (long)unaff_x19 - (long)unaff_x20 >> 3;
  piVar9 = unaff_x20;
  switch(uVar24) {
  case 0:
  case 1:
    goto LAB_1078428e8;
  case 2:
    func_0x000107842894(unaff_x19[-1]);
    uVar13 = extraout_w9_05;
    if (extraout_w8_00 != extraout_w10_02) {
      uVar13 = (uint)(extraout_w10_02 < extraout_w8_00);
    }
    if (uVar13 != 1) {
      return;
    }
    uVar15 = *(undefined8 *)unaff_x20;
    *(undefined8 *)unaff_x20 = *(undefined8 *)(unaff_x19 + -2);
    *(undefined8 *)(unaff_x19 + -2) = uVar15;
    return;
  case 3:
    piVar7 = unaff_x20 + 2;
    func_0x000107842d04();
    goto code_r0x000107839208;
  case 4:
    piVar7 = unaff_x20 + 2;
    piVar11 = unaff_x20 + 4;
    func_0x000107842d04();
    piVar8 = piVar10;
    break;
  case 5:
    piVar7 = unaff_x20 + 2;
    piVar8 = unaff_x20 + 4;
    piVar12 = unaff_x20 + 6;
    func_0x000107842d04();
    unaff_x29 = auStack_10;
    piVar11 = piVar8;
    piStack_40 = unaff_x19 + -6;
    piStack_38 = unaff_x19 + -4;
    piStack_30 = param_3;
    piStack_28 = piVar10;
    piStack_20 = unaff_x20;
    piStack_18 = unaff_x19;
    func_0x0001078425f8();
    unaff_x30 = &UNK_107839390;
    register0x00000008 = (BADSPACEBASE *)&piStack_40;
    param_3 = piVar12;
    break;
  default:
    goto code_r0x000107838bd0;
  }
  piVar10 = piVar11;
  *(int **)((long)register0x00000008 + -0x30) = param_3;
  *(int **)((long)register0x00000008 + -0x28) = piVar8;
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001078425f8();
  unaff_x20 = piVar9;
code_r0x000107839208:
  iVar17 = piVar7[1];
  bVar4 = *piVar7 < *unaff_x20;
  if (iVar17 != unaff_x20[1]) {
    bVar4 = unaff_x20[1] < iVar17;
  }
  bVar5 = *piVar10 < *piVar7;
  if (piVar10[1] != iVar17) {
    bVar5 = iVar17 < piVar10[1];
  }
  if (bVar4) {
    uVar15 = *(undefined8 *)unaff_x20;
    if (bVar5) {
      *(undefined8 *)unaff_x20 = *(undefined8 *)piVar10;
    }
    else {
      *(undefined8 *)unaff_x20 = *(undefined8 *)piVar7;
      *(undefined8 *)piVar7 = uVar15;
      iVar17 = (int)((ulong)uVar15 >> 0x20);
      bVar4 = *piVar10 < (int)uVar15;
      if (piVar10[1] != iVar17) {
        bVar4 = iVar17 < piVar10[1];
      }
      if (!bVar4) {
        return;
      }
      *(undefined8 *)piVar7 = *(undefined8 *)piVar10;
    }
    *(undefined8 *)piVar10 = uVar15;
  }
  else if (bVar5) {
    uVar15 = *(undefined8 *)piVar7;
    *(undefined8 *)piVar7 = *(undefined8 *)piVar10;
    *(undefined8 *)piVar10 = uVar15;
    bVar4 = *piVar7 < *unaff_x20;
    if (piVar7[1] != unaff_x20[1]) {
      bVar4 = unaff_x20[1] < piVar7[1];
    }
    if (bVar4) {
      uVar15 = *(undefined8 *)unaff_x20;
      *(undefined8 *)unaff_x20 = *(undefined8 *)piVar7;
      *(undefined8 *)piVar7 = uVar15;
      return;
    }
  }
  return;
code_r0x000107838bd0:
  if ((long)uVar24 < 0x18) {
    if ((param_4 & 1) == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      while( true ) {
        unaff_x20 = unaff_x20 + 2;
        piVar10 = piVar9 + 2;
        if (piVar10 == unaff_x19) break;
        bVar4 = piVar9[2] < *piVar9;
        if (piVar9[3] != piVar9[1]) {
          bVar4 = piVar9[1] < piVar9[3];
        }
        piVar9 = piVar10;
        if (bVar4) {
          uVar15 = *(undefined8 *)piVar10;
          piVar10 = unaff_x20;
          do {
            piVar7 = piVar10 + -2;
            *(undefined8 *)piVar10 = *(undefined8 *)piVar7;
            iVar17 = (int)((ulong)uVar15 >> 0x20);
            bVar4 = (int)uVar15 < piVar10[-4];
            if (piVar10[-3] != iVar17) {
              bVar4 = piVar10[-3] < iVar17;
            }
            piVar10 = piVar7;
          } while (bVar4);
          *(undefined8 *)piVar7 = uVar15;
        }
      }
      return;
    }
    if (unaff_x20 == unaff_x19) {
      return;
    }
    lVar18 = 0;
    goto LAB_107838f94;
  }
  if (param_3 == (int *)0x0) {
    if (unaff_x20 == unaff_x19) {
      return;
    }
    uVar23 = uVar24 - 2 >> 1;
    piVar9 = unaff_x20 + uVar23 * 2;
    do {
      func_0x0001078395b8(unaff_x20,uVar24,piVar9);
      uVar23 = uVar23 - 1;
      piVar9 = piVar9 + -2;
    } while (-1 < (long)uVar23);
    do {
      if ((long)uVar24 < 2) {
        return;
      }
      uVar15 = *(undefined8 *)unaff_x20;
      piVar9 = unaff_x20;
      uVar23 = 0;
      do {
        uVar3 = uVar23 << 1 | 1;
        uVar1 = uVar23 * 2 + 2;
        piVar10 = piVar9 + uVar23 * 2 + 2;
        uVar21 = uVar3;
        if ((long)uVar1 < (long)uVar24) {
          bVar4 = piVar9[uVar23 * 2 + 2] < piVar9[uVar23 * 2 + 4];
          if (piVar9[uVar23 * 2 + 3] != piVar9[uVar23 * 2 + 5]) {
            bVar4 = piVar9[uVar23 * 2 + 5] < piVar9[uVar23 * 2 + 3];
          }
          piVar10 = piVar9 + uVar23 * 2 + 4;
          uVar21 = uVar1;
          if (!bVar4) {
            piVar10 = piVar9 + uVar23 * 2 + 2;
            uVar21 = uVar3;
          }
        }
        *(undefined8 *)piVar9 = *(undefined8 *)piVar10;
        piVar9 = piVar10;
        uVar23 = uVar21;
      } while ((long)uVar21 <= (long)(uVar24 - 2 >> 1));
      unaff_x19 = unaff_x19 + -2;
      if (piVar10 == unaff_x19) {
        *(undefined8 *)piVar10 = uVar15;
      }
      else {
        *(undefined8 *)piVar10 = *(undefined8 *)unaff_x19;
        *(undefined8 *)unaff_x19 = uVar15;
        lVar18 = (long)piVar10 + (8 - (long)unaff_x20) >> 3;
        if (1 < lVar18) {
          uVar23 = lVar18 - 2U >> 1;
          piVar9 = unaff_x20 + uVar23 * 2;
          bVar4 = *piVar9 < *piVar10;
          if (piVar9[1] != piVar10[1]) {
            bVar4 = piVar10[1] < piVar9[1];
          }
          if (bVar4) {
            uVar15 = *(undefined8 *)piVar10;
            do {
              piVar7 = piVar9;
              *(undefined8 *)piVar10 = *(undefined8 *)piVar7;
              if (uVar23 == 0) break;
              uVar23 = uVar23 - 1 >> 1;
              piVar9 = unaff_x20 + uVar23 * 2;
              iVar17 = (int)((ulong)uVar15 >> 0x20);
              bVar4 = *piVar9 < (int)uVar15;
              if (piVar9[1] != iVar17) {
                bVar4 = iVar17 < piVar9[1];
              }
              piVar10 = piVar7;
            } while (bVar4);
            *(undefined8 *)piVar7 = uVar15;
          }
        }
      }
      uVar24 = uVar24 - 1;
    } while( true );
  }
  piVar7 = unaff_x20 + (uVar24 & 0xfffffffffffffffe);
  if (0x80 < uVar24) {
    func_0x000107842ffc(unaff_x20,piVar7);
    piVar7 = piVar7 + -2;
    unaff_x20 = unaff_x20 + 2;
    piVar10 = unaff_x19 + -4;
    goto code_r0x000107839208;
  }
  func_0x000107842ffc(piVar7,unaff_x20);
  param_3 = (int *)((long)param_3 + -1);
  if ((param_4 & 1) == 0) {
    func_0x000107842894(unaff_x20[-1]);
    uVar13 = extraout_w9;
    if (extraout_w8 != extraout_w10) {
      uVar13 = (uint)(extraout_w10 < extraout_w8);
    }
    if ((uVar13 & 1) == 0) {
      func_0x000107842e94(*(undefined8 *)unaff_x20);
      uVar13 = extraout_w11;
      if (extraout_w10_00 != extraout_w9_00) {
        uVar13 = (uint)(extraout_w10_00 < extraout_w9_00);
      }
      uVar15 = extraout_x8;
      piVar7 = unaff_x20;
      if ((uVar13 & 1) == 0) {
        do {
          piVar9 = piVar9 + 2;
          if (unaff_x19 <= piVar9) break;
          func_0x000107842e94();
          uVar13 = extraout_w11_00;
          if (extraout_w10_01 != extraout_w9_01) {
            uVar13 = (uint)(extraout_w10_01 < extraout_w9_01);
          }
          uVar15 = extraout_x8_00;
        } while (uVar13 != 1);
      }
      else {
        do {
          piVar9 = piVar7 + 2;
          bVar4 = (int)extraout_x8 < *piVar9;
          if (piVar7[3] != extraout_w9_00) {
            bVar4 = piVar7[3] < extraout_w9_00;
          }
          piVar7 = piVar9;
        } while (!bVar4);
      }
      piVar7 = unaff_x19;
      if (piVar9 < unaff_x19) {
        do {
          func_0x000107842e94();
          uVar13 = extraout_w11_01;
          if (extraout_w12 != extraout_w9_02) {
            uVar13 = (uint)(extraout_w12 < extraout_w9_02);
          }
          uVar15 = extraout_x8_01;
          piVar7 = extraout_x10;
        } while ((uVar13 & 1) != 0);
      }
      while (piVar9 < piVar7) {
        uVar15 = *(undefined8 *)piVar9;
        *(undefined8 *)piVar9 = *(undefined8 *)piVar7;
        *(undefined8 *)piVar7 = uVar15;
        do {
          piVar9 = piVar9 + 2;
          func_0x000107842e94();
          uVar13 = extraout_w11_02;
          if (extraout_w12_00 != extraout_w9_03) {
            uVar13 = (uint)(extraout_w12_00 < extraout_w9_03);
          }
        } while (uVar13 != 1);
        do {
          func_0x000107842e94();
          uVar13 = extraout_w11_03;
          if (extraout_w12_01 != extraout_w9_04) {
            uVar13 = (uint)(extraout_w12_01 < extraout_w9_04);
          }
          uVar15 = extraout_x8_02;
          piVar7 = extraout_x10_00;
        } while ((uVar13 & 1) != 0);
      }
      piVar7 = piVar9 + -2;
      if (unaff_x20 != piVar7) {
        *(undefined8 *)unaff_x20 = *(undefined8 *)piVar7;
      }
      param_4 = 0;
      *(undefined8 *)piVar7 = uVar15;
      goto LAB_107838bbc;
    }
  }
  lVar18 = 0;
  uVar15 = *(undefined8 *)unaff_x20;
  do {
    iVar17 = *(int *)((long)unaff_x20 + lVar18 + 0xc);
    iVar14 = (int)uVar15;
    iVar16 = (int)((ulong)uVar15 >> 0x20);
    bVar4 = *(int *)((long)unaff_x20 + lVar18 + 8) < iVar14;
    if (iVar17 != iVar16) {
      bVar4 = iVar16 < iVar17;
    }
    lVar18 = lVar18 + 8;
  } while (bVar4);
  piVar7 = (int *)((long)unaff_x20 + lVar18);
  piVar8 = unaff_x19;
  piVar9 = piVar7;
  if (lVar18 == 8) {
    do {
      piVar12 = piVar8;
      if (piVar8 <= piVar7) break;
      piVar12 = piVar8 + -2;
      bVar4 = *piVar12 < iVar14;
      if (piVar8[-1] != iVar16) {
        bVar4 = iVar16 < piVar8[-1];
      }
      piVar8 = piVar12;
    } while (!bVar4);
  }
  else {
    do {
      piVar12 = piVar8 + -2;
      bVar4 = *piVar12 < iVar14;
      if (piVar8[-1] != iVar16) {
        bVar4 = iVar16 < piVar8[-1];
      }
      piVar8 = piVar12;
    } while (!bVar4);
  }
  while (piVar9 < piVar12) {
    uVar22 = *(undefined8 *)piVar9;
    *(undefined8 *)piVar9 = *(undefined8 *)piVar12;
    *(undefined8 *)piVar12 = uVar22;
    piVar11 = piVar9;
    do {
      piVar9 = piVar11 + 2;
      bVar4 = *piVar9 < iVar14;
      if (piVar11[3] != iVar16) {
        bVar4 = iVar16 < piVar11[3];
      }
      piVar19 = piVar12;
      piVar11 = piVar9;
    } while (bVar4);
    do {
      piVar12 = piVar19 + -2;
      bVar4 = *piVar12 < iVar14;
      if (piVar19[-1] != iVar16) {
        bVar4 = iVar16 < piVar19[-1];
      }
      piVar19 = piVar12;
    } while (!bVar4);
  }
  piVar12 = piVar9 + -2;
  if (unaff_x20 != piVar12) {
    *(undefined8 *)unaff_x20 = *(undefined8 *)piVar12;
  }
  *(undefined8 *)piVar12 = uVar15;
  if (piVar7 < piVar8) goto LAB_107838d98;
  piVar7 = unaff_x20;
  func_0x00010783942c(unaff_x20,piVar12);
  piVar8 = piVar9;
  func_0x00010783942c(piVar9,unaff_x19);
  if ((int)piVar8 == 0) goto code_r0x000107838d94;
  unaff_x19 = piVar12;
  if (((ulong)piVar7 & 1) != 0) {
    return;
  }
  goto LAB_107838bac;
LAB_107838f94:
  piVar10 = piVar9 + 2;
  if (piVar10 == unaff_x19) {
LAB_1078428e8:
    return;
  }
  bVar4 = piVar9[2] < *piVar9;
  if (piVar9[3] != piVar9[1]) {
    bVar4 = piVar9[1] < piVar9[3];
  }
  if (bVar4) {
    uVar15 = *(undefined8 *)piVar10;
    lVar6 = lVar18;
    do {
      lVar20 = lVar6;
      puVar2 = (undefined8 *)((long)unaff_x20 + lVar20);
      puVar2[1] = *puVar2;
      piVar9 = unaff_x20;
      if (lVar20 == 0) goto LAB_107839010;
      iVar17 = (int)((ulong)uVar15 >> 0x20);
      bVar4 = (int)uVar15 < *(int *)(puVar2 + -1);
      if (*(int *)((long)puVar2 + -4) != iVar17) {
        bVar4 = *(int *)((long)puVar2 + -4) < iVar17;
      }
      lVar6 = lVar20 + -8;
    } while (bVar4);
    piVar9 = (int *)((long)unaff_x20 + lVar20);
LAB_107839010:
    *(undefined8 *)piVar9 = uVar15;
  }
  lVar18 = lVar18 + 8;
  piVar9 = piVar10;
  goto LAB_107838f94;
code_r0x000107838d94:
  if (((ulong)piVar7 & 1) == 0) {
LAB_107838d98:
    FUN_107838b8c(unaff_x20,piVar12,param_3,(uint)param_4 & 1);
    param_4 = 0;
  }
  goto LAB_107838bbc;
}



/* Entry: 10783973c; end: 1078398b7;  */

/* WARNING: Possible PIC construction at 0x000107839d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107839d14) */
/* WARNING: Removing unreachable block (ram,0x000107839d28) */

void FUN_10783973c(long *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *extraout_x8;
  long lVar10;
  long *plVar11;
  long extraout_x9;
  long lVar12;
  long *plVar13;
  long extraout_x10;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long extraout_x11;
  long *plVar18;
  long lVar19;
  undefined8 extraout_x12;
  undefined8 *extraout_x13;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *plVar20;
  undefined8 *unaff_x29;
  long *unaff_x30;
  undefined8 *in_stack_00000070;
  long *in_stack_00000078;
  
  func_0x0001078430f4();
  cVar1 = SBORROW8((long)param_3,2);
  cVar2 = (long)param_3 + -2 < 0;
  bVar3 = param_3 == (long *)0x2;
  if (param_3 < (long *)0x2) {
    return;
  }
  if (bVar3) {
    lVar10 = *param_1;
    if (*(ulong *)(lVar10 + 0x48) <= *(ulong *)(param_2[-1] + 0x48)) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = lVar10;
    return;
  }
  plVar4 = param_1;
  plVar5 = param_2;
  plVar7 = unaff_x30;
  func_0x000107842b4c();
  if (!bVar3 && cVar2 == cVar1) {
    func_0x000107842190();
    if (bVar3 || cVar2 != cVar1) {
      func_0x0001078398f0();
      func_0x0001078422fc();
      func_0x0001078398f0();
      plVar4 = unaff_x21 + unaff_x23;
      plVar5 = unaff_x22;
      while( true ) {
        if (unaff_x21 == unaff_x22) {
          for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
            *param_1 = *plVar5;
            param_1 = param_1 + 1;
          }
          return;
        }
        if (plVar5 == plVar4) break;
        bVar3 = *(ulong *)(*unaff_x21 + 0x48) <= *(ulong *)(*plVar5 + 0x48);
        lVar10 = *plVar5;
        if (bVar3) {
          lVar10 = *unaff_x21;
        }
        lVar19 = 0;
        if (bVar3) {
          lVar19 = 8;
        }
        unaff_x21 = (long *)((long)unaff_x21 + lVar19);
        lVar19 = 8;
        if (bVar3) {
          lVar19 = 0;
        }
        plVar5 = (long *)((long)plVar5 + lVar19);
        *param_1 = lVar10;
        param_1 = param_1 + 1;
      }
      while (unaff_x21 != unaff_x22) {
        func_0x000107842b20();
      }
      return;
    }
    FUN_10783973c();
    func_0x000107842314();
    FUN_10783973c();
    func_0x00010784220c();
    func_0x000107842f84();
    do {
      func_0x0001078427d4();
      plVar6 = param_3;
      plVar9 = plVar5;
      plVar18 = unaff_x22;
      in_stack_00000070 = unaff_x29;
      in_stack_00000078 = unaff_x30;
      while( true ) {
        if (plVar18 == (long *)0x0) {
          return;
        }
        lVar10 = param_4;
        if ((long)plVar18 <= param_7 || param_4 <= param_7) {
          if (param_4 <= (long)plVar18) {
            lVar10 = -(long)plVar7;
            plVar5 = plVar7;
            for (plVar18 = plVar4; plVar18 != plVar9; plVar18 = plVar18 + 1) {
              *plVar5 = *plVar18;
              lVar10 = lVar10 + -8;
              plVar5 = plVar5 + 1;
            }
            while( true ) {
              if (plVar5 == plVar7) {
                return;
              }
              if (plVar9 == plVar6) break;
              bVar3 = *(ulong *)(*plVar7 + 0x48) <= *(ulong *)(*plVar9 + 0x48);
              lVar19 = *plVar9;
              if (bVar3) {
                lVar19 = *plVar7;
              }
              lVar12 = 8;
              if (bVar3) {
                lVar12 = 0;
              }
              plVar9 = (long *)((long)plVar9 + lVar12);
              lVar12 = 0;
              if (bVar3) {
                lVar12 = 8;
              }
              plVar7 = (long *)((long)plVar7 + lVar12);
              *plVar4 = lVar19;
              plVar4 = plVar4 + 1;
            }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memmove_11034c660)(plVar4,plVar7,-(long)((long)plVar7 + lVar10));
            return;
          }
          for (lVar10 = 0; (long *)((long)plVar9 + lVar10) != plVar6; lVar10 = lVar10 + 8) {
            *(long *)((long)plVar7 + lVar10) = *(long *)((long)plVar9 + lVar10);
          }
          plVar5 = (long *)((long)plVar7 + lVar10);
          while( true ) {
            plVar6 = plVar6 + -1;
            if (plVar5 == plVar7) {
              return;
            }
            if (plVar9 == plVar4) break;
            lVar19 = plVar5[-1];
            lVar10 = plVar9[-1];
            plVar18 = plVar9 + -1;
            if (*(ulong *)(lVar10 + 0x48) <= *(ulong *)(lVar19 + 0x48)) {
              plVar5 = plVar5 + -1;
              plVar18 = plVar9;
              lVar10 = lVar19;
            }
            plVar9 = plVar18;
            *plVar6 = lVar10;
          }
          while (plVar5 != plVar7) {
            plVar5 = plVar5 + -1;
            *plVar6 = *plVar5;
            plVar6 = plVar6 + -1;
          }
          return;
        }
        while( true ) {
          if (lVar10 == 0) {
            return;
          }
          lVar19 = *plVar4;
          if (*(ulong *)(*plVar9 + 0x48) < *(ulong *)(lVar19 + 0x48)) break;
          plVar4 = plVar4 + 1;
          lVar10 = lVar10 + -1;
        }
        if (lVar10 < (long)plVar18) {
          unaff_x22 = (long *)((long)plVar18 / 2);
          plVar20 = plVar9 + (long)unaff_x22;
          uVar14 = (long)plVar9 - (long)plVar4 >> 3;
          plVar5 = plVar4;
          while (uVar14 != 0) {
            uVar15 = uVar14 >> 1;
            uVar16 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
            uVar14 = uVar15;
            if (*(ulong *)(plVar5[uVar15] + 0x48) <= *(ulong *)(*plVar20 + 0x48)) {
              uVar14 = uVar16;
              plVar5 = plVar5 + uVar15 + 1;
            }
          }
          param_4 = (long)plVar5 - (long)plVar4 >> 3;
        }
        else {
          if (lVar10 == 1) {
            *plVar4 = *plVar9;
            *plVar9 = lVar19;
            return;
          }
          param_4 = lVar10 / 2;
          plVar5 = plVar4 + param_4;
          uVar14 = (long)plVar6 - (long)plVar9 >> 3;
          plVar11 = plVar9;
          while (plVar20 = plVar11, uVar14 != 0) {
            uVar16 = uVar14 >> 1;
            uVar14 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
            plVar11 = plVar20 + uVar16 + 1;
            if (*(ulong *)(*plVar5 + 0x48) <= *(ulong *)(plVar20[uVar16] + 0x48)) {
              uVar14 = uVar16;
              plVar11 = plVar20;
            }
          }
          unaff_x22 = (long *)((long)plVar20 - (long)plVar9 >> 3);
        }
        param_3 = plVar20;
        if ((plVar5 != plVar9) && (param_3 = plVar5, plVar9 != plVar20)) {
          if (plVar5 + 1 == plVar9) {
            lVar19 = *plVar5;
            func_0x000107842ce4(plVar5);
            param_3 = (long *)((long)plVar5 + ((long)plVar20 - (long)plVar9));
            *param_3 = lVar19;
          }
          else if (plVar9 + 1 == plVar20) {
            plVar9 = plVar20 + -1;
            lVar19 = *plVar9;
            param_3 = (long *)((long)plVar20 - ((long)plVar9 - (long)plVar5));
            if ((long)plVar9 - (long)plVar5 != 0) {
              _memmove(param_3,plVar5,(long)plVar9 - (long)plVar5);
            }
            *plVar5 = lVar19;
          }
          else {
            lVar17 = (long)plVar9 - (long)plVar5 >> 3;
            lVar12 = (long)plVar20 - (long)plVar9;
            lVar19 = lVar12 >> 3;
            plVar11 = plVar9;
            plVar13 = plVar5;
            if (lVar17 == lVar12 >> 3) {
              for (; param_3 = plVar9, plVar13 != plVar9 && plVar11 != plVar20;
                  plVar13 = plVar13 + 1) {
                lVar19 = *plVar13;
                *plVar13 = *plVar11;
                *plVar11 = lVar19;
                plVar11 = plVar11 + 1;
              }
            }
            else {
              do {
                lVar8 = lVar19;
                lVar19 = 0;
                if (lVar8 != 0) {
                  lVar19 = lVar17 / lVar8;
                }
                lVar19 = lVar17 - lVar19 * lVar8;
                lVar17 = lVar8;
              } while (lVar19 != 0);
              plVar9 = plVar5 + lVar8;
              while (plVar9 != plVar5) {
                do {
                  func_0x000107842a18();
                  lVar19 = (long)plVar20 - (long)extraout_x13 >> 3;
                  plVar9 = (long *)((long)extraout_x13 + extraout_x9);
                  if (lVar19 <= extraout_x11) {
                    plVar9 = plVar5 + (extraout_x11 - lVar19);
                  }
                } while (plVar9 != extraout_x8);
                *extraout_x13 = extraout_x12;
                plVar9 = extraout_x8;
                lVar12 = extraout_x10;
              }
              param_3 = (long *)(lVar12 + (long)plVar5);
            }
          }
        }
        if (param_4 + (long)unaff_x22 < (lVar10 - param_4) + ((long)plVar18 - (long)unaff_x22))
        break;
        func_0x000107839a74(param_3,plVar20,plVar6,lVar10 - param_4,(long)plVar18 - (long)unaff_x22)
        ;
        plVar6 = param_3;
        plVar9 = plVar5;
        plVar18 = unaff_x22;
      }
      unaff_x30 = (long *)&UNK_107839d14;
      unaff_x29 = &stack0x00000070;
    } while( true );
  }
  if (param_1 == param_2) {
    return;
  }
  lVar10 = 0;
  plVar4 = param_1;
  do {
    if (plVar4 + 1 == param_2) {
      return;
    }
    lVar19 = *plVar4;
    lVar12 = plVar4[1];
    uVar14 = *(ulong *)(lVar12 + 0x48);
    lVar17 = lVar10;
    if (uVar14 < *(ulong *)(lVar19 + 0x48)) {
      do {
        lVar8 = lVar17;
        *(long *)((long)param_1 + lVar8 + 8) = lVar19;
        plVar5 = param_1;
        if (lVar8 == 0) goto LAB_1078397fc;
        lVar19 = *(long *)((long)param_1 + lVar8 + -8);
        lVar17 = lVar8 + -8;
      } while (uVar14 < *(ulong *)(lVar19 + 0x48));
      plVar5 = (long *)((long)param_1 + lVar8);
LAB_1078397fc:
      *plVar5 = lVar12;
    }
    lVar10 = lVar10 + 8;
    plVar4 = plVar4 + 1;
  } while( true );
}



/* Entry: 10783a134; end: 10783a73f;  */

void FUN_10783a134(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 in_register_00005008;
  undefined8 uVar10;
  
  func_0x000107843308();
  if (param_4 != 0) {
    uVar5 = param_4;
    func_0x000107842888();
    if (uVar5 == 2) {
      iVar2 = (int)unaff_x20 + -0x20;
      func_0x000107842bfc();
      if (iVar2 == 0) {
        func_0x0001078422e4();
        param_5[3] = in_register_00005008;
        param_5[2] = param_1;
        param_5[4] = unaff_x20[-4];
        param_5[5] = unaff_x20[-3];
        uVar10 = unaff_x20[-1];
        uVar9 = unaff_x20[-2];
      }
      else {
        *param_5 = unaff_x20[-4];
        param_5[1] = unaff_x20[-3];
        uVar9 = unaff_x20[-2];
        param_5[3] = unaff_x20[-1];
        param_5[2] = uVar9;
        param_5[4] = *unaff_x21;
        param_5[5] = unaff_x21[1];
        uVar10 = unaff_x21[3];
        uVar9 = unaff_x21[2];
      }
      param_5[7] = uVar10;
      param_5[6] = uVar9;
    }
    else if (param_4 == 1) {
      func_0x0001078422e4();
      param_5[3] = in_register_00005008;
      param_5[2] = param_1;
    }
    else if ((long)param_4 < 9) {
      if (unaff_x21 != unaff_x20) {
        lVar7 = 0;
        func_0x0001078422e4();
        param_5[3] = in_register_00005008;
        param_5[2] = param_1;
        puVar6 = param_5;
        while (puVar1 = unaff_x21 + 4, puVar1 != unaff_x20) {
          puVar4 = puVar1;
          func_0x00010783a0d0(puVar1,puVar6);
          if ((int)puVar4 == 0) {
            puVar6[4] = unaff_x21[4];
            puVar6[5] = unaff_x21[5];
            uVar9 = unaff_x21[6];
            puVar6[7] = unaff_x21[7];
            puVar6[6] = uVar9;
          }
          else {
            puVar6[5] = puVar6[1];
            puVar6[4] = *puVar6;
            puVar6[7] = puVar6[3];
            puVar6[6] = puVar6[2];
            for (lVar8 = lVar7; puVar4 = param_5, lVar8 != 0; lVar8 = lVar8 + -0x20) {
              puVar4 = (undefined8 *)((long)param_5 + lVar8);
              puVar3 = puVar1;
              func_0x00010783a0d0(puVar1,puVar4 + -4);
              if ((int)puVar3 == 0) break;
              puVar4[1] = puVar4[-3];
              *puVar4 = puVar4[-4];
              puVar4[3] = puVar4[-1];
              puVar4[2] = puVar4[-2];
            }
            *puVar4 = unaff_x21[4];
            puVar4[1] = unaff_x21[5];
            uVar9 = unaff_x21[6];
            puVar4[3] = unaff_x21[7];
            puVar4[2] = uVar9;
          }
          puVar6 = puVar6 + 4;
          lVar7 = lVar7 + 0x20;
          unaff_x21 = puVar1;
        }
      }
    }
    else {
      puVar1 = unaff_x21 + (param_4 >> 1) * 4;
      func_0x00010784262c();
      func_0x000107839e70();
      func_0x000107839e70(puVar1);
      puVar6 = puVar1;
      while (unaff_x21 != puVar1) {
        if (puVar6 == unaff_x20) {
          for (; unaff_x21 != puVar1; unaff_x21 = unaff_x21 + 4) {
            func_0x0001078422e4();
            param_5[3] = in_register_00005008;
            param_5[2] = param_1;
            param_5 = param_5 + 4;
          }
          return;
        }
        puVar4 = puVar6;
        func_0x000107842bfc();
        if ((int)puVar4 == 0) {
          func_0x0001078422e4();
          param_5[3] = in_register_00005008;
          param_5[2] = param_1;
          unaff_x21 = unaff_x21 + 4;
        }
        else {
          func_0x000107842f0c();
          param_5[3] = in_register_00005008;
          param_5[2] = param_1;
          puVar6 = puVar6 + 4;
        }
        param_5 = param_5 + 4;
      }
      for (; puVar6 != unaff_x20; puVar6 = puVar6 + 4) {
        func_0x000107842f0c();
        param_5[3] = in_register_00005008;
        param_5[2] = param_1;
        param_5 = param_5 + 4;
      }
    }
  }
  return;
}



/* Entry: 10783b528; end: 10783b54f;  */

int FUN_10783b528(int param_1)

{
  int iVar1;
  double unaff_d8;
  
  func_0x000107842954();
  iVar1 = (int)unaff_d8;
  if (param_1 == 0) {
    iVar1 = (int)(long)unaff_d8;
  }
  return iVar1;
}



/* Entry: 10783b9d8; end: 10783b9ff;  */

void FUN_10783b9d8(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001078429a8();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10783be1c; end: 10783beb3;  */

double FUN_10783be1c(long param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  
  lVar3 = 0;
  uVar7 = *(ulong *)(param_1 + 8);
  dVar5 = 0.0;
  lVar4 = param_1;
  uVar8 = uVar7;
  do {
    uVar9 = *(undefined8 *)(lVar4 + 8);
    iVar6 = (int)uVar7;
    uVar2 = uVar7 >> 0x20;
    iVar10 = (int)((ulong)uVar9 >> 0x20);
    uVar11 = NEON_smin(uVar9,uVar8,4);
    uVar7 = NEON_smax(uVar9,uVar7,4);
    plVar1 = (long *)(lVar4 + 0x10);
    lVar3 = lVar3 + 1;
    uVar8 = uVar8 ^ (uVar8 ^ uVar11) &
                    ~CONCAT44(-(uint)((int)uVar2 < iVar10),-(uint)(iVar6 < (int)uVar9));
    dVar5 = dVar5 + (double)(*(int *)(*(long *)(lVar4 + 0x18) + 0xc) - iVar10) *
                    (double)(*(int *)(*(long *)(lVar4 + 0x18) + 8) + (int)uVar9);
    lVar4 = *plVar1;
  } while (*plVar1 != param_1);
  *param_2 = lVar3;
  *param_3 = uVar8;
  param_3[1] = uVar7;
  return dVar5 * 0.5;
}



/* Entry: 10783c05c; end: 10783c0db;  */

void FUN_10783c05c(long param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010783adc8();
  lVar2 = *(long *)(param_1 + 0x30);
  lVar3 = *(long *)(lVar2 + 0x48);
  cVar1 = *(char *)(param_1 + 0x5a);
  if (cVar1 == '\0') {
    if (*param_2 == *(int *)(lVar3 + 8) && param_2[1] == *(int *)(lVar3 + 0xc)) {
      return;
    }
  }
  else if (*param_2 == *(int *)(*(long *)(lVar3 + 0x18) + 8) &&
           param_2[1] == *(int *)(*(long *)(lVar3 + 0x18) + 0xc)) {
    return;
  }
  func_0x00010783b400(lVar2,param_2,lVar3,param_3);
  if (cVar1 == '\0') {
    *(long *)(*(long *)(param_1 + 0x30) + 0x48) = lVar2;
  }
  return;
}



/* Entry: 10783c8f8; end: 10783c917;  */

void FUN_10783c8f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x00010783d8e8(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10783d9c8; end: 10783db2b;  */

void FUN_10783d9c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *unaff_x21;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *unaff_x22;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x23;
  long lVar16;
  undefined8 *unaff_x25;
  undefined8 *puVar17;
  long unaff_x26;
  undefined8 *puVar18;
  undefined8 *unaff_x30;
  undefined8 *puStack0000000000000028;
  
  func_0x0001078430f4();
  cVar1 = SBORROW8((long)param_3,2);
  cVar2 = (long)param_3 + -2 < 0;
  bVar3 = param_3 == (undefined8 *)0x2;
  if (param_3 < (undefined8 *)0x2) {
    return;
  }
  if (bVar3) {
    uVar12 = param_2[-1];
    uVar14 = *param_1;
    puVar6 = param_1;
    func_0x00010784262c();
    iVar5 = (int)puVar6;
    func_0x00010783db64();
    if (iVar5 == 0) {
      return;
    }
    *param_1 = uVar12;
    param_2[-1] = uVar14;
    return;
  }
  puVar6 = param_1;
  puStack0000000000000028 = param_2;
  func_0x000107842b4c();
  if (!bVar3 && cVar2 == cVar1) {
    func_0x000107842190();
    if (bVar3 || cVar2 != cVar1) {
      func_0x00010783dbcc();
      func_0x0001078422fc();
      func_0x00010783dbcc();
      puVar15 = unaff_x21 + (long)unaff_x23;
      func_0x000107843194();
      while( true ) {
        if (unaff_x21 == unaff_x22) {
          while (unaff_x25 != puVar15) {
            func_0x000107843174();
          }
          return;
        }
        if (unaff_x25 == puVar15) break;
        func_0x000107843180();
        func_0x00010783db64();
        bVar3 = (int)puVar6 == 0;
        lVar16 = 0;
        if (bVar3) {
          lVar16 = unaff_x26;
        }
        unaff_x21 = (undefined8 *)((long)unaff_x21 + lVar16);
        lVar16 = unaff_x26;
        if (bVar3) {
          lVar16 = 0;
        }
        unaff_x25 = (undefined8 *)((long)unaff_x25 + lVar16);
        puVar8 = param_2;
        if (bVar3) {
          puVar8 = unaff_x23;
        }
        *param_1 = puVar8;
        param_1 = param_1 + 1;
      }
      while (unaff_x21 != unaff_x22) {
        func_0x000107842b20();
      }
      return;
    }
    FUN_10783d9c8();
    func_0x000107842314();
    FUN_10783d9c8();
    func_0x00010784220c();
    func_0x000107842f84();
    func_0x000107842e6c();
    puVar15 = puVar6;
    while( true ) {
      if (unaff_x22 == (undefined8 *)0x0) {
        return;
      }
      if ((long)unaff_x22 <= param_7 || param_4 <= param_7) break;
      lVar16 = 0;
      puVar7 = puVar15;
      puVar8 = puVar15;
      while( true ) {
        puVar17 = (undefined8 *)(param_4 - lVar16);
        if (puVar17 == (undefined8 *)0x0) {
          return;
        }
        uVar12 = *puStack0000000000000028;
        uVar14 = puVar15[lVar16];
        func_0x000107842764();
        func_0x00010783db64();
        if (((ulong)puVar6 & 1) != 0) break;
        puVar8 = puVar8 + 1;
        lVar16 = lVar16 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar4 = puVar17 == unaff_x22;
      if ((long)puVar17 < (long)unaff_x22) {
        puVar15 = (undefined8 *)((long)unaff_x22 / 2);
        puVar18 = puStack0000000000000028 + (long)puVar15;
        uVar12 = *puVar18;
        uVar10 = (long)puStack0000000000000028 - (long)puVar7 >> 3;
        puVar17 = puVar8;
        while (uVar10 != 0) {
          uVar10 = uVar10 >> 1;
          puVar6 = puVar17 + uVar10;
          func_0x00010783db64(uVar12,*puVar6);
          func_0x00010784323c();
          if ((bool)uVar4) {
            uVar10 = extraout_x8;
            puVar17 = puVar6 + 1;
          }
        }
        lVar11 = (long)puVar17 - (long)puVar7 >> 3;
      }
      else {
        if (param_4 + -1 == lVar16) {
          puVar15[lVar16] = uVar12;
          *puStack0000000000000028 = uVar14;
          return;
        }
        lVar11 = (long)puVar17 / 2;
        puVar17 = puVar8 + lVar11;
        uVar12 = puVar15[lVar11 + lVar16];
        uVar4 = 0;
        uVar10 = (long)param_3 - (long)puStack0000000000000028 >> 3;
        puVar6 = puStack0000000000000028;
        while (puVar18 = puVar6, uVar10 != 0) {
          uVar13 = uVar10 >> 1;
          func_0x00010783db64(puVar18[uVar13],uVar12);
          func_0x00010784323c();
          uVar10 = extraout_x8_00;
          puVar6 = puVar18 + uVar13 + 1;
          if ((bool)uVar4) {
            uVar10 = uVar13;
            puVar6 = puVar18;
          }
        }
        puVar15 = (undefined8 *)((long)puVar18 - (long)puStack0000000000000028 >> 3);
      }
      lVar9 = (param_4 - lVar11) - lVar16;
      puVar7 = puVar17;
      func_0x00010783e04c(puVar17,puStack0000000000000028,puVar18);
      unaff_x30 = unaff_x22;
      if (lVar11 + (long)puVar15 < (long)unaff_x22 + ((param_4 - (lVar11 + (long)puVar15)) - lVar16)
         ) {
        func_0x000107843044(puVar8,puVar17,puVar7,lVar11,puVar15);
        puVar6 = puVar8;
        unaff_x22 = (undefined8 *)((long)unaff_x22 - (long)puVar15);
        puVar15 = puVar7;
        param_4 = lVar9;
        puStack0000000000000028 = puVar18;
      }
      else {
        puVar6 = puVar7;
        func_0x000107843044(puVar7,puVar18,param_3,lVar9,
                            (undefined8 *)((long)unaff_x22 - (long)puVar15));
        unaff_x22 = puVar15;
        puVar15 = puVar8;
        param_4 = lVar11;
        puStack0000000000000028 = puVar17;
        param_3 = puVar7;
      }
    }
    if ((long)unaff_x22 < param_4) {
      for (lVar16 = 0; (undefined8 *)((long)puStack0000000000000028 + lVar16) != param_3;
          lVar16 = lVar16 + 8) {
        *(undefined8 *)((long)unaff_x30 + lVar16) =
             *(undefined8 *)((long)puStack0000000000000028 + lVar16);
      }
      puVar8 = (undefined8 *)((long)unaff_x30 + lVar16);
      while( true ) {
        param_3 = param_3 + -1;
        if (puVar8 == unaff_x30) {
          return;
        }
        if (puStack0000000000000028 == puVar15) break;
        uVar12 = puStack0000000000000028[-1];
        uVar14 = puVar8[-1];
        func_0x000107842758();
        func_0x00010783db64();
        puVar7 = puStack0000000000000028 + -1;
        if ((int)puVar6 == 0) {
          uVar12 = uVar14;
          puVar8 = puVar8 + -1;
          puVar7 = puStack0000000000000028;
        }
        puStack0000000000000028 = puVar7;
        *param_3 = uVar12;
      }
      while (puVar8 != unaff_x30) {
        puVar8 = puVar8 + -1;
        *param_3 = *puVar8;
        param_3 = param_3 + -1;
      }
      return;
    }
    lVar16 = -(long)unaff_x30;
    puVar7 = unaff_x30;
    for (puVar8 = puVar15; puVar8 != puStack0000000000000028; puVar8 = puVar8 + 1) {
      *puVar7 = *puVar8;
      lVar16 = lVar16 + -8;
      puVar7 = puVar7 + 1;
    }
    while( true ) {
      if (puVar7 == unaff_x30) {
        return;
      }
      if (puStack0000000000000028 == param_3) break;
      uVar12 = *puStack0000000000000028;
      uVar14 = *unaff_x30;
      func_0x000107842764();
      func_0x00010783db64();
      bVar3 = (int)puVar6 == 0;
      lVar11 = 8;
      if (bVar3) {
        lVar11 = 0;
      }
      puStack0000000000000028 = (undefined8 *)((long)puStack0000000000000028 + lVar11);
      lVar11 = 0;
      if (bVar3) {
        lVar11 = 8;
      }
      unaff_x30 = (undefined8 *)((long)unaff_x30 + lVar11);
      if (bVar3) {
        uVar12 = uVar14;
      }
      *puVar15 = uVar12;
      puVar15 = puVar15 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(puVar15,unaff_x30,-((long)unaff_x30 + lVar16));
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  lVar16 = 0;
  puVar15 = param_1;
  do {
    if (puVar15 + 1 == param_2) {
      return;
    }
    uVar12 = *puVar15;
    uVar14 = puVar15[1];
    func_0x00010784262c();
    func_0x00010783db64();
    lVar11 = lVar16;
    if ((int)puVar6 != 0) {
      do {
        lVar9 = lVar11;
        *(undefined8 *)((long)param_1 + lVar9 + 8) = uVar12;
        puVar8 = param_1;
        if (lVar9 == 0) goto LAB_10783da80;
        uVar12 = *(undefined8 *)((long)param_1 + lVar9 + -8);
        func_0x00010784262c();
        func_0x00010783db64();
        lVar11 = lVar9 + -8;
      } while (((ulong)puVar6 & 1) != 0);
      puVar8 = (undefined8 *)((long)param_1 + lVar9);
LAB_10783da80:
      *puVar8 = uVar14;
    }
    lVar16 = lVar16 + 8;
    puVar15 = puVar15 + 1;
  } while( true );
}



/* Entry: 10783e1dc; end: 10783e243;  */

void FUN_10783e1dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar1 = *(long **)(param_1 + 0x38);
  for (plVar2 = *(long **)(param_1 + 0x30); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*plVar2 != 0) {
      *plVar2 = 0;
    }
  }
  func_0x000107842778();
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(puVar3[3] + 0x10) = 0;
    while (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)puVar3[2];
      *puVar3 = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3 = puVar4;
    }
  }
  func_0x0001078426ec();
  return;
}



/* Entry: 10783ed7c; end: 10783eddf;  */

void FUN_10783ed7c(long param_1)

{
  long lVar1;
  undefined1 in_CY;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar2;
  
  func_0x000107843250();
  func_0x00010066015c();
  func_0x00010784314c();
  if ((bool)in_CY) {
    func_0x0001078429c8();
    lVar1 = *unaff_x19;
    puVar2 = (undefined8 *)unaff_x19[1];
    if (param_1 != 0) {
      func_0x00010783bff8();
    }
    func_0x0001078425a4((long)puVar2 + (param_1 - lVar1));
    func_0x00010783bfcc();
    func_0x000107842fe8();
  }
  else {
    puVar2 = unaff_x21 + 1;
    *unaff_x21 = unaff_x20;
  }
  unaff_x19[1] = (long)puVar2;
  return;
}



/* Entry: 10783f16c; end: 10783f317;  */

void FUN_10783f16c(ulong param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long extraout_x8;
  ulong *extraout_x8_00;
  ulong *puVar10;
  ulong *extraout_x8_01;
  long extraout_x9;
  ulong *extraout_x10;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  long unaff_x23;
  ulong *unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  long unaff_x27;
  ulong *unaff_x28;
  ulong *in_stack_00000010;
  
  func_0x0001078427d4();
  func_0x0001078424cc();
  do {
    func_0x00010784292c();
    if (unaff_x23 == 0) {
      return;
    }
    while( true ) {
      if ((long)unaff_x24 <= (long)unaff_x22 || (long)unaff_x25 <= (long)unaff_x22) {
        if ((long)unaff_x25 <= (long)unaff_x24) {
          func_0x000107842e4c();
          puVar10 = extraout_x8_00;
          while (puVar10 != unaff_x21) {
            func_0x000107842e3c();
            puVar10 = extraout_x8_01;
          }
          while( true ) {
            bVar7 = unaff_x22 == unaff_x26;
            if (bVar7) {
              return;
            }
            func_0x0001078431fc();
            if (bVar7) break;
            iVar8 = (int)*unaff_x21;
            func_0x00010783efdc();
            puVar10 = unaff_x21;
            if (iVar8 == 0) {
              puVar10 = unaff_x26;
            }
            lVar9 = 8;
            if (iVar8 == 0) {
              lVar9 = 0;
            }
            unaff_x21 = (ulong *)((long)unaff_x21 + lVar9);
            func_0x000107842d3c(puVar10);
          }
          func_0x000107842604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)();
          return;
        }
        lVar9 = 0;
        while ((ulong *)((long)unaff_x21 + lVar9) != in_stack_00000010) {
          func_0x0001078429ec();
          lVar9 = extraout_x8;
          in_stack_00000010 = extraout_x10;
        }
        puVar10 = (ulong *)((long)unaff_x26 + lVar9);
        while( true ) {
          in_stack_00000010 = in_stack_00000010 + -1;
          if (puVar10 == unaff_x26) {
            return;
          }
          if (unaff_x21 == unaff_x20) break;
          func_0x0001078427f0();
          func_0x00010783efdc();
          puVar1 = puVar10;
          puVar3 = unaff_x22;
          puVar2 = unaff_x21;
          if ((int)param_1 == 0) {
            puVar1 = unaff_x24;
            puVar3 = unaff_x21;
            puVar2 = puVar10;
          }
          unaff_x21 = puVar3;
          *in_stack_00000010 = puVar2[-1];
          puVar10 = puVar1;
        }
        while (puVar10 != unaff_x26) {
          func_0x000107843278();
        }
        return;
      }
      while( true ) {
        if (unaff_x25 == (ulong *)0x0) {
          return;
        }
        param_1 = *unaff_x21;
        func_0x000107843070();
        if ((param_1 & 1) != 0) break;
        unaff_x20 = unaff_x20 + 1;
        unaff_x25 = (ulong *)((long)unaff_x25 + -1);
      }
      cVar4 = SBORROW8((long)unaff_x25,(long)unaff_x24);
      cVar5 = (long)unaff_x25 - (long)unaff_x24 < 0;
      uVar6 = unaff_x25 == unaff_x24;
      if ((long)unaff_x25 < (long)unaff_x24) {
        func_0x0001078424ac();
        while (unaff_x23 != 0) {
          func_0x000107842840();
          func_0x00010783efdc();
          func_0x0001078426d4();
          unaff_x23 = unaff_x27;
          if ((bool)uVar6) {
            unaff_x23 = extraout_x9;
          }
        }
        func_0x000107842d4c();
      }
      else {
        cVar4 = SBORROW8((long)unaff_x25,1);
        cVar5 = (long)unaff_x25 + -1 < 0;
        uVar6 = unaff_x25 == (ulong *)0x1;
        if ((bool)uVar6) {
          func_0x00010784296c();
          return;
        }
        func_0x00010784245c();
        puVar10 = unaff_x22;
        while (unaff_x22 = puVar10, unaff_x27 != 0) {
          func_0x00010784282c();
          func_0x00010783efdc();
          func_0x000107842818();
          puVar10 = unaff_x28;
          if ((bool)uVar6) {
            puVar10 = unaff_x22;
          }
        }
        func_0x000107842e2c();
      }
      func_0x000107842444();
      func_0x000107842874();
      if (cVar5 == cVar4) break;
      func_0x00010784241c();
      FUN_10783f16c();
      func_0x000107842dbc();
      if (unaff_x24 == (ulong *)0x0) {
        return;
      }
    }
    func_0x0001078424fc();
    FUN_10783f16c();
    in_stack_00000010 = unaff_x21;
  } while( true );
}



/* Entry: 10783fc08; end: 10783fc8b;  */

void FUN_10783fc08(uint param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 != 0) {
    param_3 = (undefined8 *)(param_2 + 0x30);
  }
  plVar4 = (long *)*param_3;
  plVar1 = (long *)param_3[1];
  do {
    if (plVar4 == plVar1) {
      return;
    }
    if (*plVar4 != 0) {
      plVar2 = (long *)*param_4;
      do {
        if (plVar2 == (long *)param_4[1]) {
          func_0x00010784274c();
          func_0x00010783fd3c();
          if ((param_1 & 1) != 0) {
            func_0x00010784274c();
            func_0x00010783fff0();
          }
          break;
        }
        lVar3 = *plVar2;
        plVar2 = plVar2 + 1;
      } while (lVar3 != *plVar4);
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



/* Entry: 107840350; end: 10784048f;  */

void FUN_107840350(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar6;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar7;
  undefined8 unaff_x30;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001078430f4();
  func_0x0001078422cc();
  if ((bool)in_ZR) {
    iVar4 = (int)unaff_x21[-1];
    func_0x000107843078();
    if (iVar4 == 0) {
      func_0x0001078426c8();
      uVar5 = unaff_x21[-1];
    }
    else {
      func_0x000107842d6c();
      uVar5 = extraout_x8;
    }
    unaff_x19[1] = uVar5;
  }
  else if (unaff_x23 == (undefined8 *)0x1) {
    func_0x0001078426c8();
  }
  else if ((long)unaff_x23 < 9) {
    uVar3 = unaff_x20 == unaff_x21;
    if (!(bool)uVar3) {
      lVar6 = 0;
      func_0x0001078426c8();
      while (func_0x000107842b14(), !(bool)uVar3) {
        func_0x000107842d5c();
        func_0x000107840328();
        if ((int)param_1 == 0) {
          *unaff_x24 = *unaff_x20;
        }
        else {
          func_0x000107842e0c();
          lVar2 = lVar6;
          while (puVar7 = unaff_x19, lVar2 != 0) {
            func_0x000107842854();
            func_0x000107840328();
            puVar7 = unaff_x26;
            if ((int)param_1 == 0) break;
            func_0x000107842e1c();
            lVar2 = unaff_x25;
          }
          *puVar7 = *unaff_x20;
          unaff_x26 = puVar7;
        }
        lVar6 = lVar6 + 8;
      }
    }
  }
  else {
    func_0x0001078421ec();
    func_0x0001078401d4();
    func_0x0001078422b4();
    func_0x0001078401d4();
    func_0x000107842c9c();
    for (; unaff_x20 != unaff_x22; unaff_x20 = (undefined8 *)((long)unaff_x20 + (long)puVar7)) {
      if (unaff_x23 == unaff_x21) goto LAB_107840474;
      iVar4 = (int)*unaff_x23;
      func_0x000107843078();
      puVar7 = unaff_x24;
      puVar1 = unaff_x23;
      if (iVar4 == 0) {
        puVar7 = (undefined8 *)0x0;
        puVar1 = unaff_x20;
      }
      unaff_x23 = (undefined8 *)((long)unaff_x23 + (long)puVar7);
      puVar7 = (undefined8 *)0x0;
      if (iVar4 == 0) {
        puVar7 = unaff_x24;
      }
      func_0x000107842b70(puVar1);
    }
    while (unaff_x23 != unaff_x21) {
      func_0x000107842b88();
    }
  }
LAB_10784047c:
  func_0x000107842f84(unaff_x30);
  return;
LAB_107840474:
  while (unaff_x20 != unaff_x22) {
    func_0x000107842b08();
  }
  goto LAB_10784047c;
}



/* Entry: 107840afc; end: 107840cbb;  */

/* WARNING: Possible PIC construction at 0x000107840b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107840ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107840b60) */
/* WARNING: Removing unreachable block (ram,0x000107840b6c) */
/* WARNING: Removing unreachable block (ram,0x000107840b80) */
/* WARNING: Removing unreachable block (ram,0x000107840b88) */
/* WARNING: Removing unreachable block (ram,0x000107840bf8) */
/* WARNING: Removing unreachable block (ram,0x000107840b98) */
/* WARNING: Removing unreachable block (ram,0x000107840ba0) */
/* WARNING: Removing unreachable block (ram,0x000107840bfc) */
/* WARNING: Removing unreachable block (ram,0x000107840c00) */
/* WARNING: Removing unreachable block (ram,0x000107840c08) */
/* WARNING: Removing unreachable block (ram,0x000107840c28) */
/* WARNING: Removing unreachable block (ram,0x000107840c14) */
/* WARNING: Removing unreachable block (ram,0x000107840c1c) */
/* WARNING: Removing unreachable block (ram,0x000107840c2c) */
/* WARNING: Removing unreachable block (ram,0x000107840c34) */
/* WARNING: Removing unreachable block (ram,0x000107840c78) */
/* WARNING: Removing unreachable block (ram,0x000107840c80) */
/* WARNING: Removing unreachable block (ram,0x000107840c40) */
/* WARNING: Removing unreachable block (ram,0x000107840c4c) */
/* WARNING: Removing unreachable block (ram,0x000107840c5c) */
/* WARNING: Removing unreachable block (ram,0x000107840b74) */
/* WARNING: Removing unreachable block (ram,0x000107840cac) */

void FUN_107840afc(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = param_1;
  plVar1 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 > param_2 || param_2 == plVar4) {
    if (plVar4 <= param_2) {
      return;
    }
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar4 < (long *)0x3) || (((ulong)plVar4 & (long)plVar4 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar2) {
      plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (plVar4 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto code_r0x000107840cbc;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)((long)param_2 << 3);
    __Znwm();
  }
  else {
    func_0x000104bd35f4();
    param_1 = plVar2;
  }
code_r0x000107840cbc:
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078410e8; end: 1078412b7;  */

long FUN_1078410e8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  uVar5 = param_1[1];
  lVar1 = *param_2;
  uVar4 = param_2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar10 = 0;
    if (uVar5 != 0) {
      uVar10 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar10 * uVar5;
  }
  lVar8 = *param_1;
  plVar3 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar3;
    plVar3 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  plStack_30 = param_1 + 2;
  lVar9 = lVar1;
  if (plVar6 == plStack_30) {
LAB_107841178:
    if (lVar1 == 0) {
LAB_1078411ac:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar9 = *param_2;
      goto LAB_1078411b4;
    }
    uVar10 = *(ulong *)(lVar1 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar2 * uVar5;
    }
    if (uVar10 != uVar4) goto LAB_1078411ac;
  }
  else {
    uVar10 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar2 * uVar5;
    }
    if (uVar10 != uVar4) goto LAB_107841178;
LAB_1078411b4:
    if (lVar9 == 0) goto LAB_1078411ec;
  }
  uVar10 = *(ulong *)(lVar9 + 8);
  if ((uVar5 & uVar7) == 0) {
    uVar10 = uVar10 & uVar7;
  }
  else if (uVar5 <= uVar10) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar10 / uVar5;
    }
    uVar10 = uVar10 - uVar7 * uVar5;
  }
  if (uVar10 != uVar4) {
    *(long **)(lVar8 + uVar10 * 8) = plVar6;
    lVar9 = *param_2;
  }
LAB_1078411ec:
  *plVar6 = lVar9;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_38 = param_2;
  func_0x000107841230(&plStack_38);
  return lVar1;
}



/* Entry: 1078419bc; end: 1078419fb;  */

long * FUN_1078419bc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x0001078419fc();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    func_0x000107842ff4();
  }
  func_0x000107841abc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107841bf4; end: 107841bf7;  */

void FUN_107841bf4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 107841e20; end: 107841e27;  */

void FUN_107841e20(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078425f8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x0001072977d0();
  }
  return;
}



/* Entry: 107842080; end: 10784211b;  */

void FUN_107842080(long param_1)

{
  ulong uVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 uStack_48;
  
  func_0x00010066015c();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010784211c();
    lVar2 = uVar1 + 0x18;
    unaff_x19[1] = lVar2;
  }
  else {
    func_0x000107842ab4((long)(uVar1 - *unaff_x19) / 0x18);
    func_0x00010737ccb4();
    func_0x000100660228();
    func_0x0001078430bc();
    func_0x00010784211c(uStack_48);
    func_0x0001078424ec();
    func_0x000100660238();
    func_0x00010737c9f4();
    lVar2 = unaff_x19[1];
    func_0x000107842770();
  }
  unaff_x19[1] = lVar2;
  return;
}



/* Entry: 107844f18; end: 107844fa3;  */

void FUN_107844f18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lStack_30;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  func_0x00010784806c();
  if (lStack_30 != 0) {
    uVar2 = *param_1;
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    *puVar1 = &PTR_DAT_1109e15c8;
    puVar1[1] = uVar2;
    puVar1[2] = FUN_107846414;
    puVar1[3] = 0;
    func_0x000107848044();
    func_0x000107848180();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x000107847c68();
    }
  }
  func_0x000107847f38();
  return;
}



/* Entry: 107846414; end: 1078464b3;  */

void FUN_107846414(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if (iVar1 == 3) {
    if (*(long *)(param_1 + 0x98) != 0) {
      func_0x000107848088();
      goto LAB_107846460;
    }
  }
  else if (iVar1 != 2) {
    if (iVar1 != 1) {
      return;
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    return;
  }
  func_0x000107847ed8();
LAB_107846460:
  func_0x000107847e4c();
  return;
}



/* Entry: 107846de4; end: 107846e1b;  */

void FUN_107846de4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    func_0x000107847440();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 107846fa8; end: 107846fef;  */

long * FUN_107846fa8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    func_0x0001074f4f04();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107847174; end: 107847193;  */

void FUN_107847174(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x000107847194();
  }
  return;
}



/* Entry: 107847564; end: 1078475a3;  */

void FUN_107847564(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  func_0x0001078474fc();
  *param_1 = puVar1;
  return;
}



/* Entry: 1078476a0; end: 10784778f;  */

void FUN_1078476a0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1[3] != 0) {
    func_0x000107473b74(param_1,param_1[2]);
    param_1[2] = 0;
    lVar4 = param_1[1];
    for (lVar3 = 0; lVar4 != lVar3; lVar3 = lVar3 + 1) {
      *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
    }
    param_1[3] = 0;
  }
  uVar2 = *param_2;
  *param_2 = 0;
  func_0x000107474e60(param_1,uVar2);
  lVar3 = param_2[2];
  lVar4 = param_2[1];
  param_1[2] = lVar3;
  param_1[1] = lVar4;
  param_2[1] = 0;
  lVar4 = param_2[3];
  param_1[3] = lVar4;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(lVar3 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1078478d4; end: 1078478ff;  */

undefined8 * FUN_1078478d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1648;
  func_0x0001074701f4(param_1 + 4);
  return param_1;
}



/* Entry: 1078479c8; end: 1078479db;  */

void FUN_1078479c8(void)

{
  func_0x000107847a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107847af8; end: 107847b27;  */

void FUN_107847af8(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[200] = 0;
  if (*(char *)(param_2 + 200) == '\x01') {
    func_0x000107847358();
    param_1[200] = 1;
  }
  return;
}



/* Entry: 107847c04; end: 107847c2f;  */

undefined8 * FUN_107847c04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e17d8;
  FUN_107831640(param_1 + 4);
  return param_1;
}



/* Entry: 10784887c; end: 107848957;  */

void FUN_10784887c(long param_1,uint param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  long lVar4;
  undefined1 auStack_78 [8];
  long alStack_70 [3];
  undefined1 auStack_58 [16];
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010784a94c();
  uVar1 = param_2 == *(byte *)(param_1 + 0x130);
  if (!(bool)uVar1) {
    *(char *)(param_1 + 0x130) = (char)param_2;
    if (param_2 == 0) {
      if ((*(char *)(param_1 + 0x139) == '\x02') &&
         (plVar2 = *(long **)(param_1 + 0x340), plVar2 != (long *)0x0)) {
        *(undefined8 *)(param_1 + 0x340) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001078488e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
    else if (*(long *)(param_1 + 0x340) == 0) {
      param_1 = param_1 + 0x128;
      func_0x0001078496c0();
      plVar2 = *(long **)(param_1 + 0x208);
      uStack_28 = extraout_x8;
      if (plVar2 == (long *)0x0) {
        lVar4 = *unaff_x19;
        func_0x00010002b838(alStack_70,&UNK_10f42b2a8);
        func_0x0001078489f8(auStack_78);
        func_0x0001073787c0(auStack_58,auStack_78);
        *(undefined1 *)(lVar4 + 0x8a) = 1;
        (**(code **)(**(long **)(lVar4 + 0x90) + 0x18))(*(long **)(lVar4 + 0x90),lVar4,alStack_70);
        func_0x0001073787dc(alStack_70);
        func_0x000107849760();
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0x11) = 2;
        unaff_x19[0x2e] = unaff_x19[0x44];
        *(char *)(unaff_x19 + 0x2f) = (char)unaff_x19[0x45];
        ppuStack_48 = &PTR_DAT_1109e19b8;
        uStack_40 = 0;
        pppuStack_30 = &ppuStack_48;
        (**(code **)(*plVar2 + 0x10))(alStack_70,plVar2,unaff_x19 + 2,&ppuStack_48);
        lVar4 = alStack_70[0];
        alStack_70[0] = 0;
        lVar3 = unaff_x19[0x43];
        unaff_x19[0x43] = lVar4;
        if (lVar3 != 0) {
          func_0x000107849690();
          lVar4 = alStack_70[0];
          alStack_70[0] = 0;
          if (lVar4 != 0) {
            func_0x000107849690();
          }
        }
        func_0x0001072ad0c8(&ppuStack_48);
      }
      func_0x0001078496ac(uStack_28);
      if ((bool)uVar1) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001073787dc(alStack_70);
      func_0x000107849760();
      func_0x000107849708();
      func_0x000104c03f28(&DAT_10f62a4d8);
      return;
    }
  }
  return;
}



/* Entry: 107848bd4; end: 107848bef;  */

void FUN_107848bd4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109e1938;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107849124; end: 1078492ab;  */

/* WARNING: Possible PIC construction at 0x000107848f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107848f34) */
/* WARNING: Removing unreachable block (ram,0x000107848fd4) */
/* WARNING: Removing unreachable block (ram,0x000107848fe8) */
/* WARNING: Removing unreachable block (ram,0x000107848ffc) */
/* WARNING: Removing unreachable block (ram,0x00010784906c) */
/* WARNING: Removing unreachable block (ram,0x000107848fb4) */

undefined8 * FUN_107849124(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_208 [24];
  long lStack_1f0;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined4 uStack_128;
  long lStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long alStack_b0 [2];
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = *(long *)(param_1 + 0x10);
  auStack_a0[0] = 0x2b;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_DAT_110996720;
  uStack_78 = 0;
  func_0x000107849794(auStack_a0);
  if (*(undefined1 **)(param_2 + 0x10) == (undefined1 *)0x0) {
    uVar4 = 1;
  }
  else {
    uVar4 = **(undefined1 **)(param_2 + 0x10);
  }
  func_0x0001072a0318(auStack_a0,&DAT_10f40aef2,uVar4);
  uStack_110 = **(undefined8 **)(lVar6 + 0x270);
  uStack_108 = 3;
  func_0x00010743f9dc(*(undefined8 **)(lVar6 + 0x270),auStack_a0,param_2 + 8,&uStack_110,7);
  if ((*(long *)(param_2 + 0x20) != 0) && ((*(byte *)(param_2 + 0x18) & 1) == 0)) {
    uStack_110 = CONCAT44(uStack_110._4_4_,0x58);
    uStack_f8 = 0;
    lStack_e0 = 0;
    uStack_d8 = 0;
    ppuStack_f0 = &PTR_DAT_110996720;
    uStack_e8 = 0;
    uStack_d0 = 0x58;
    lStack_c8 = CONCAT35((int3)((ulong)lStack_c8 >> 0x28),0x100000000);
    uStack_b8 = 0;
    alStack_b0[0] = 0;
    uStack_c0 = 0;
    func_0x000107849794(&uStack_110);
    lStack_120 = (long)*(char *)(*(long *)(param_2 + 0x20) + 0x17);
    if (lStack_120 < 0) {
      lStack_120 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    }
    uStack_118 = 3;
    uStack_130 = **(undefined8 **)(lVar6 + 0x270);
    uStack_128 = 3;
    func_0x00010743fa44(*(undefined8 **)(lVar6 + 0x270),&uStack_110,&lStack_120,&uStack_130,7);
    func_0x000107262330(&uStack_110);
  }
  func_0x000107262330(auStack_a0);
  lVar8 = param_2;
  func_0x0001078496c0(lVar6);
  if ((*(char **)(lVar8 + 0x10) == (char *)0x0) || (**(char **)(lVar8 + 0x10) == '\x02')) {
    if (*(char *)(param_2 + 0x19) == '\x01') {
      lVar6 = *(long *)(param_2 + 0x40);
      *(undefined1 *)(unaff_x19 + 0x27) = *(undefined1 *)(param_2 + 0x48);
      unaff_x19[0x26] = lVar6;
      func_0x000107849710();
    }
    else {
      func_0x0001078496d4();
      func_0x000107849710();
      lVar6 = *unaff_x19;
      if (*(char *)(param_2 + 0x18) == '\x01') {
        lVar8 = 0;
        uVar7 = 0;
        uStack_e8 = 0;
        lStack_e0 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        lVar8 = *(long *)(param_2 + 0x28);
        uStack_e8 = uVar7;
        lStack_e0 = lVar8;
        if (lVar8 != 0) {
          do {
            func_0x00010784969c();
          } while (extraout_w10 != 0);
        }
      }
      *(undefined1 *)(lVar6 + 0x89) = 1;
      *(long *)(lVar6 + 0x3b8) = *(long *)(lVar6 + 0x3b8) + 1;
      lStack_c8 = *(long *)(lVar6 + 0x3b0) + 0x20;
      puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x3b0) + 0x10);
      uStack_b8 = puVar5[1];
      uStack_c0 = *puVar5;
      if (puVar5[1] != 0) {
        do {
          func_0x00010784969c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010724bb70(alStack_b0,&uStack_c0);
      lVar3 = alStack_b0[0];
      lVar2 = lStack_c8;
      if (alStack_b0[0] != 0) {
        uStack_1c8 = uVar7;
        lStack_1c0 = lVar8;
        if (lVar8 != 0) {
          do {
            func_0x00010784969c();
          } while (extraout_w10_01 != 0);
        }
        uVar9 = *(undefined8 *)(lVar6 + 0x3b8);
        puVar5 = (undefined8 *)0x38;
        uStack_1b8 = uVar9;
        __Znwm();
        uStack_1c8 = 0;
        lStack_1c0 = 0;
        *puVar5 = &PTR_DAT_1109e1b18;
        puVar5[1] = lVar2;
        puVar5[2] = &UNK_107849814;
        puVar5[3] = 0;
        puVar5[4] = uVar7;
        puVar5[5] = lVar8;
        puStack_158 = (undefined8 *)0x0;
        uStack_150 = 0;
        puVar5[6] = uVar9;
        uStack_148 = uVar9;
        func_0x000104c33970(&puStack_158);
        puStack_158 = puVar5;
        func_0x000104c33970(&uStack_1c8);
        func_0x0001073ae140(lVar3,&puStack_158);
        puVar5 = puStack_158;
        puStack_158 = (undefined8 *)0x0;
        if (puVar5 != (undefined8 *)0x0) {
          func_0x000107849690();
        }
      }
      func_0x00010724bcd8(alStack_b0);
      func_0x00010724ae28(&uStack_c0);
      func_0x000104c33970(&uStack_e8);
    }
  }
  else {
    lVar6 = *unaff_x19;
    func_0x0001073070f0(&puStack_158);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (&uStack_d8,*(long *)(param_2 + 0x10) + 8);
    func_0x0001052b2bd0(&uStack_1c8);
    func_0x0001073787c0(auStack_140,&uStack_1c8);
    *(undefined1 *)(lVar6 + 0x8a) = 1;
    (**(code **)(**(long **)(lVar6 + 0x90) + 0x18))(*(long **)(lVar6 + 0x90),lVar6,&puStack_158);
    func_0x0001073787dc(&puStack_158);
    func_0x000107849760();
    __ZNSt13runtime_errorD1Ev(&uStack_d8);
  }
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,0x2a);
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  ppuStack_1a8 = &PTR_DAT_110996720;
  uStack_1a0 = 0;
  uStack_188 = 0x2a;
  uStack_180 = 0;
  uStack_17c = 1;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_178 = 0;
  func_0x000104c2fe00(auStack_a0,unaff_x19 + 0x46);
  puVar5 = &uStack_1c8;
  func_0x000107371bc4(puVar5,"source",auStack_a0);
  cVar1 = *(char *)((long)unaff_x19 + 0xd4);
  puStack_1d8 = &UNK_107848f34;
  lStack_1f0 = param_2;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x00010002b838(auStack_208,&DAT_10f34b835);
  func_0x0001072a0374(puVar5 + 4,auStack_208,(long)cVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
  *(undefined1 *)((long)puVar5 + 0x4c) = 1;
  return puVar5;
}



/* Entry: 107849448; end: 10784947f;  */

long * FUN_107849448(long *param_1)

{
  func_0x0001073ada2c(*(undefined8 *)*param_1);
  func_0x000107849480(*param_1 + 0x10);
  return param_1;
}



/* Entry: 1078495a0; end: 1078495b3;  */

void FUN_1078495a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1a38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107849670; end: 107849673;  */

void FUN_107849670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107849da8; end: 107849def;  */

void FUN_107849da8(long *param_1)

{
  code *extraout_x9;
  code *pcVar1;
  uint extraout_w11;
  
  func_0x00010784a004();
  pcVar1 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    pcVar1 = *(code **)(*param_1 + ((ulong)extraout_x9 & 0xffffffff));
  }
  (*pcVar1)();
  func_0x000107849f78();
  return;
}



/* Entry: 107849ec8; end: 107849eef;  */

void FUN_107849ec8(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000107849eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 10784a4fc; end: 10784a50f;  */

void FUN_10784a4fc(void)

{
  func_0x00010784a5b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784a70c; end: 10784a74f;  */

undefined8 * FUN_10784a70c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e1cf0;
  func_0x00010784a778(param_1 + 3);
  return param_1;
}



/* Entry: 10784a864; end: 10784a90b;  */

undefined8 *
FUN_10784a864(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_1109e1d40;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined8 *)((long)param_1 + 0xc) = param_3;
  *(undefined8 *)((long)param_1 + 0x14) = param_4;
  puVar1 = param_1 + 4;
  func_0x000104c2fe00(puVar1,param_5);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  func_0x0001077f3c4c();
  FUN_1077f3790();
  param_1[0x10] = puVar1 + 1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = &PTR_PTR_1131ada60;
  func_0x000107846cc0(param_1 + 0x13,param_6);
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return param_1;
}



/* Entry: 10784ac9c; end: 10784ad73;  */

undefined8 FUN_10784ac9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 ***pppuStack_48;
  undefined8 ***pppuStack_40;
  undefined8 uStack_38;
  
  pppuStack_48 = &pppuStack_48;
  uStack_38 = 0;
  lVar3 = param_1;
  pppuStack_40 = pppuStack_48;
  do {
    lVar3 = *(long *)(lVar3 + 8);
    do {
      uVar1 = uStack_38;
      if (lVar3 == param_1) {
        func_0x0001075161c0(&pppuStack_48);
        return uVar1;
      }
      lVar4 = lVar3 + 0x10;
      func_0x0001073bc1c0(lVar4,param_2);
      if ((int)lVar4 == 0) break;
      lVar4 = lVar3;
      func_0x00010784afc8(lVar3,1);
      for (; lVar4 != param_1; lVar4 = *(long *)(lVar4 + 8)) {
        lVar2 = lVar4 + 0x10;
        func_0x0001073bc1c0(lVar2,param_2);
        if ((int)lVar2 == 0) break;
      }
      func_0x00010784aff0(&pppuStack_48,&pppuStack_48,param_1,lVar3,lVar4);
      lVar3 = lVar4;
    } while (lVar4 == param_1);
  } while( true );
}



/* Entry: 10784b0dc; end: 10784b11b;  */

bool FUN_10784b0dc(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107517028();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    func_0x000107517d44(param_1,lVar2);
  }
  return bVar1;
}



/* Entry: 10784b344; end: 10784b463;  */

void FUN_10784b344(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x00010784b464(auStack_80,*param_2);
  func_0x00010048a6c8(auStack_68,auStack_80,&UNK_10f42b311);
  FUN_107878f74(auStack_98,*(undefined4 *)(param_2 + 4));
  func_0x00010533a9c0(auStack_50,auStack_68,auStack_98);
  func_0x00010048a6c8(auStack_38,auStack_50,&UNK_10f42b311);
  FUN_107878f74(auStack_b0,*(undefined4 *)(param_2 + 8));
  func_0x00010533a9c0(param_1,auStack_38,auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  func_0x00010784b510();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  return;
}



/* Entry: 10784b780; end: 10784b8a7;  */

void FUN_10784b780(long param_1,double *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined1 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = *(long *)(param_1 + 0x10) + 400;
  uStack_38 = 1;
  func_0x000107279a5c();
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(double *)(lVar1 + 0x188) != *param_2) {
    *(double *)(lVar1 + 0x188) = *param_2;
    func_0x0001072ab574(lVar1 + 0x268);
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x260) = 1;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x268);
  }
  if (*(long *)(*param_4 + 0x18) != 0) {
    func_0x00010784d97c();
    lStack_50 = *(long *)(param_1 + 0x10) + 0xe0;
    uStack_48 = 1;
    func_0x00010724e404();
    if (*(char *)(*(long *)(param_1 + 0x10) + 0xd8) == '\x01') {
      func_0x0001077b4700(auStack_68);
      func_0x0001077506b8(param_4,auStack_68);
      *(char *)(*(long *)(param_1 + 0x10) + 0x260) = (char)param_4;
      func_0x0001073ebb78(auStack_68);
    }
    func_0x00010724e49c(&lStack_50);
    func_0x00010784d8cc();
  }
  func_0x000107279ee0(&lStack_40);
  return;
}



/* Entry: 10784bdf0; end: 10784be03;  */

undefined1 *
FUN_10784bdf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  puVar2 = auStack_80;
  puVar3 = param_2;
  func_0x00010784d84c();
  uStack_48 = extraout_x8;
  func_0x0001072684ec(puVar3);
  uVar4 = *param_2;
  func_0x000100060964(auStack_80,param_3);
  func_0x0001072c7824(puVar1,uVar4,auStack_80,param_4);
  func_0x000104c2f714(auStack_80);
  func_0x00010784d810(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010784d934();
  func_0x000104c2f714();
  func_0x00010784d874();
  func_0x000107269e3c(puVar2 + 0x178);
  func_0x0001006393ec(puVar2 + 0x148);
  func_0x000107269e60(puVar2 + 0x58);
  func_0x000104c2f714(puVar2);
  return puVar2;
}



/* Entry: 10784bfe8; end: 10784bfeb;  */

void FUN_10784bfe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1e98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10784c154; end: 10784c163;  */

void FUN_10784c154(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10784c2d8; end: 10784c2e7;  */

void FUN_10784c2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010784c2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10784cb44; end: 10784cb7b;  */

long FUN_10784cb44(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e1f98);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10784cf74; end: 10784d09b;  */

uint FUN_10784cf74(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  
  lVar7 = *(long *)(*(long *)*param_1 + 0xb0);
  lVar6 = *(long *)(*(long *)*param_1 + 0xb8);
  if ((int)((lVar6 - lVar7) / 0x38) == 0) {
    uVar2 = 0;
  }
  else {
    lVar10 = 0;
    uVar9 = 0;
    while( true ) {
      lVar8 = lVar6 - lVar7;
      uVar1 = lVar8 / 0x38;
      if ((uVar1 & 0xffffffff) <= uVar9) break;
      pfVar5 = (float *)(*(long *)(param_2 + 0x178) + lVar10);
      if ((*(char *)(pfVar5 + 1) == '\x01') &&
         (pfVar4 = (float *)(*(long *)(param_3 + 0x178) + lVar10), *(char *)(pfVar4 + 1) == '\x01'))
      {
        pfVar3 = pfVar5;
        func_0x00010726a954();
        fVar11 = *pfVar3;
        pfVar3 = pfVar4;
        func_0x00010726a954();
        if (*pfVar3 < fVar11) {
          lVar8 = 1;
          break;
        }
        func_0x00010726a954();
        fVar11 = *pfVar4;
        func_0x00010726a954();
        if (*pfVar5 < fVar11) {
          lVar8 = 0;
          break;
        }
        lVar7 = *(long *)(*(long *)*param_1 + 0xb0);
        lVar6 = *(long *)(*(long *)*param_1 + 0xb8);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    }
    uVar2 = (uint)(uVar9 < (uVar1 & 0xffffffff)) & (uint)lVar8;
  }
  return uVar2;
}



/* Entry: 10784dbac; end: 10784dbe3;  */

undefined8 * FUN_10784dbac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010784e34c();
  return param_1;
}



/* Entry: 10784e004; end: 10784e097;  */

void FUN_10784e004(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10784e30c; end: 10784e383;  */

void FUN_10784e30c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1fb8;
  param_1[0x25] = &PTR_DAT_1109e20c8;
  param_1[0x26] = &PTR_DAT_1109e20f0;
  param_1[0x31] = &PTR_DAT_1109e2118;
  param_1[0x33] = &PTR_DAT_1109e2140;
  param_1[0x35] = &PTR_DAT_1109e2168;
  return;
}



/* Entry: 10784e6ac; end: 10784e6e7;  */

undefined8 * FUN_10784e6ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e2238;
  func_0x0001072c9240(param_1 + 5);
  FUN_1077c1d38(param_1 + 1);
  return param_1;
}



/* Entry: 10784e8a0; end: 10784e8ab;  */

void FUN_10784e8a0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,param_2 + 8);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10784eaa0; end: 10784eab3;  */

void FUN_10784eaa0(void)

{
  func_0x00010784eb04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784eec0; end: 10784ef8b;  */

void FUN_10784eec0(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  undefined1 auStack_78 [8];
  long alStack_70 [9];
  undefined8 uStack_28;
  
  plVar5 = *(long **)(param_1 + 0x10);
  lVar3 = plVar5[0x43];
  plVar5[0x43] = 0;
  if (lVar3 != 0) {
    func_0x00010784f4d0();
  }
  lVar3 = *plVar5;
  *(undefined1 *)(lVar3 + 0x88) = 1;
  (**(code **)(**(long **)(lVar3 + 0x90) + 0x10))();
  if ((*(char **)(param_2 + 0x10) == (char *)0x0) || (**(char **)(param_2 + 0x10) != '\x02')) {
    func_0x00010784ef98(plVar5,param_2);
  }
  else {
    func_0x00010784f4ec();
    func_0x0001072631dc(plVar5 + 0x2c,param_2 + 0x20);
  }
  uVar1 = (char)plVar5[1] == '\x01';
  if (!(bool)uVar1) {
    return;
  }
  func_0x00010784f54c();
  uStack_28 = extraout_x8;
  if (plVar5[0x41] == 0) {
    uVar4 = *unaff_x19;
    func_0x00010784f4dc();
    func_0x0001078489f8(auStack_78);
    func_0x00010784f5ac();
    FUN_10782d3f0(uVar4,alStack_70);
    func_0x00010784f560();
    __ZNSt13exception_ptrD1Ev(auStack_78);
  }
  else {
    *(undefined1 *)((long)unaff_x19 + 0x11) = 2;
    unaff_x19[0x2e] = unaff_x19[0x44];
    *(undefined1 *)(unaff_x19 + 0x2f) = *(undefined1 *)(unaff_x19 + 0x45);
    func_0x00010784f5fc(&PTR_DAT_1109e25a8);
    func_0x00010784f59c();
    lVar3 = alStack_70[0];
    alStack_70[0] = 0;
    lVar2 = unaff_x19[0x43];
    unaff_x19[0x43] = lVar3;
    if (lVar2 != 0) {
      func_0x00010784f4d0();
      lVar3 = alStack_70[0];
      alStack_70[0] = 0;
      if (lVar3 != 0) {
        func_0x00010784f4d0();
      }
    }
    func_0x00010784f5e4();
  }
  func_0x00010784f568(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010784f560();
  __ZNSt13exception_ptrD1Ev(auStack_78);
  func_0x00010784f62c();
  return;
}



/* Entry: 10784f4c4; end: 10784f677;  */

undefined ** FUN_10784f4c4(void)

{
  return &PTR_DAT_1109e2608;
}



/* Entry: 1078504f4; end: 10785066b;  */

void FUN_1078504f4(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    lStack_48 = CONCAT71(lStack_48._1_7_,1);
    lStack_50 = param_2 + 0x98;
    func_0x000107851e38();
    plVar4 = (long *)(*(long *)(param_2 + 0x140) + param_3 * 0x10);
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      plVar4 = &lStack_50;
      func_0x00010724e49c(plVar4);
      uStack_58 = 1;
      lStack_60 = param_2 + 0x98;
      func_0x000107851e40();
      lVar5 = *(long *)(param_2 + 0x140);
      lVar6 = *(long *)(lVar5 + param_3 * 0x10);
      if (lVar6 == 0) {
        func_0x000107851dec(*(undefined8 *)(param_2 + 0x20));
        FUN_107851798(&uStack_70,param_2 + 0x10,(undefined8 *)(param_2 + 0x20),plVar4,param_2 + 0x68
                      ,*(undefined4 *)(param_2 + 0x90));
        uVar3 = uStack_68;
        uVar2 = uStack_70;
        uStack_70 = 0;
        uStack_68 = 0;
        plVar4 = (long *)(*(long *)(param_2 + 0x140) + param_3 * 0x10);
        lStack_48 = plVar4[1];
        lStack_50 = *plVar4;
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x140) + param_3 * 0x10);
        puVar1[1] = uVar3;
        *puVar1 = uVar2;
        func_0x000107330fdc(&lStack_50);
        func_0x000107851a3c(&uStack_70);
        lVar5 = *(long *)(param_2 + 0x140);
        lVar6 = *(long *)(lVar5 + param_3 * 0x10);
      }
      lVar5 = *(long *)(lVar5 + param_3 * 0x10 + 8);
      *param_1 = lVar6;
      param_1[1] = lVar5;
      if (lVar5 != 0) {
        do {
          func_0x000107851c94();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107851d6c();
    }
    else {
      lVar5 = plVar4[1];
      *param_1 = lVar6;
      param_1[1] = lVar5;
      if (lVar5 != 0) {
        do {
          func_0x000107851c94();
        } while (extraout_w10 != 0);
      }
      func_0x00010724e49c(&lStack_50);
    }
  }
  else {
    lVar6 = param_2;
    func_0x000107851dec(*(undefined8 *)(param_2 + 0x20));
    FUN_107851798(&lStack_50,param_2 + 0x10,(undefined8 *)(param_2 + 0x20),lVar6,param_2 + 0x68,
                  *(undefined4 *)(param_2 + 0x90));
    param_1[1] = lStack_48;
    *param_1 = lStack_50;
    lStack_50 = 0;
    lStack_48 = 0;
    func_0x000107851a3c(&lStack_50);
  }
  return;
}



/* Entry: 107850e98; end: 107850eeb;  */

void FUN_107850e98(undefined8 param_1,long param_2)

{
  func_0x000107850880();
  func_0x000107851cb4(*(undefined8 *)(param_2 + 0x38));
  func_0x000107299490(param_1,*(long *)(param_2 + 0x38) + 0xb0);
  func_0x000107851cf8();
  return;
}



/* Entry: 107851150; end: 10785115b;  */

void FUN_107851150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107851e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107851328; end: 10785134f;  */

void FUN_107851328(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107851db4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109e2790;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10785148c; end: 107851497;  */

undefined ** FUN_10785148c(void)

{
  return &PTR_DAT_1109e2870;
}


