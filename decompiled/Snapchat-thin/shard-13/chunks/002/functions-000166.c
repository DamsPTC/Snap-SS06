/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2a339c; end: 10a2a3453;  */

void FUN_10a2a339c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a30b0(param_1,param_2,0x10a2a338c,0,param_3,param_4,param_5);
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



/* Entry: 10a2a3454; end: 10a2a3463;  */

void FUN_10a2a3454(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined8 *puVar21;
  undefined *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb8dd0;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a2fd0:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a2fdc:
    FUN_10a2a2fe4();
  }
  else {
    uStack_68 = 0x18;
    puStack_70 = &DAT_10f64975f;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a2f78;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a2fc4:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a2fd0;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bb8c58;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bb8c58,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a2fc4;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a2f60:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a2f78:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a2fdc;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a2f60;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a2fe4;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a2ff8;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a30b0(extraout_x8,plVar6,FUN_10a2a2df4,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a3464; end: 10a2a351b;  */

void FUN_10a2a3464(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a30b0(param_1,param_2,FUN_10a2a3454,0,param_3,param_4,param_5);
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



/* Entry: 10a2a351c; end: 10a2a352b;  */

void FUN_10a2a351c(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined8 *puVar21;
  undefined *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb8e48;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a28a8:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a28b4:
    FUN_10a2a28bc();
  }
  else {
    uStack_68 = 0x17;
    puStack_70 = &DAT_10f649778;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a2850;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a289c:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a28a8;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bbadf8;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bbadf8,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a289c;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a2838:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a2850:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a28b4;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a2838;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a28bc;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a28d0;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a2988(extraout_x8,plVar6,FUN_10a2a26cc,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a352c; end: 10a2a358f;  */

ulong FUN_10a2a352c(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2a3590);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a2a3590,2,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a2a3590; end: 10a2a3647;  */

void FUN_10a2a3590(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a2988(param_1,param_2,FUN_10a2a351c,0,param_3,param_4,param_5);
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



/* Entry: 10a2a3648; end: 10a2a3657;  */

void FUN_10a2a3648(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined8 *puVar21;
  undefined *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb8ec0;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a2fd0:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a2fdc:
    FUN_10a2a2fe4();
  }
  else {
    uStack_68 = 0x1f;
    puStack_70 = &DAT_10f649790;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a2f78;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a2fc4:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a2fd0;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bb8c58;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bb8c58,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a2fc4;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a2f60:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a2f78:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a2fdc;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a2f60;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a2fe4;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a2ff8;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a30b0(extraout_x8,plVar6,FUN_10a2a2df4,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a3658; end: 10a2a370f;  */

void FUN_10a2a3658(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a30b0(param_1,param_2,FUN_10a2a3648,0,param_3,param_4,param_5);
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



/* Entry: 10a2a3710; end: 10a2a371f;  */

void FUN_10a2a3710(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined8 *puVar21;
  undefined *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb8f38;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a28a8:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a28b4:
    FUN_10a2a28bc();
  }
  else {
    uStack_68 = 0x18;
    puStack_70 = &DAT_10f6497b0;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a2850;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a289c:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a28a8;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bbadf8;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bbadf8,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a289c;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a2838:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a2850:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a28b4;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a2838;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a28bc;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a28d0;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a2988(extraout_x8,plVar6,FUN_10a2a26cc,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a3720; end: 10a2a37d7;  */

void FUN_10a2a3720(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a2988(param_1,param_2,FUN_10a2a3710,0,param_3,param_4,param_5);
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



/* Entry: 10a2a37d8; end: 10a2a37e7;  */

void FUN_10a2a37d8(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined8 *puVar21;
  undefined *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb8fb0;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a2fd0:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a2fdc:
    FUN_10a2a2fe4();
  }
  else {
    uStack_68 = 0x20;
    puStack_70 = &DAT_10f6497c9;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a2f78;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a2fc4:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a2fd0;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bb8c58;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bb8c58,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a2fc4;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a2f60:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a2f78:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a2fdc;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a2f60;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a2fe4;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a2ff8;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a30b0(extraout_x8,plVar6,FUN_10a2a2df4,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a37e8; end: 10a2a389f;  */

void FUN_10a2a37e8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a30b0(param_1,param_2,FUN_10a2a37d8,0,param_3,param_4,param_5);
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



/* Entry: 10a2a38a0; end: 10a2a3a8b;  */

void FUN_10a2a38a0(long *param_1,long *param_2,undefined **param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long *unaff_x21;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x23;
  long lVar18;
  long unaff_x24;
  long unaff_x25;
  ulong uVar19;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar11 = &puStack_70;
  ppuVar10 = &PTR_DAT_110bb63a0;
  plVar6 = param_1 + 9;
  FUN_10a1cda24(plVar6,&PTR_DAT_110bb63a0);
  if (plVar6 == (long *)0x0) {
LAB_10a2a3a78:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a3a84:
    FUN_10a2a3a8c();
  }
  else {
    puStack_70 = &DAT_10f648b9d;
    uStack_68 = 0xb;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    unaff_x21 = (long *)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == 0) goto LAB_10a2a3a20;
    ppuVar10 = ppuVar11;
    unaff_x20 = plVar6;
    if (unaff_x21 == (long *)0x0) {
LAB_10a2a3a6c:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a3a78;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    param_3 = &PTR_DAT_110bbade0;
    param_4 = 0;
    plVar7 = unaff_x21;
    ___dynamic_cast(unaff_x21,&PTR_DAT_110bbadc8,&PTR_DAT_110bbade0,0);
    if (plVar7 == (long *)0x0) goto LAB_10a2a3a6c;
    plVar9 = (long *)plVar7[0xc];
    if (plVar9 < (long *)plVar7[0xd]) {
      *plVar9 = unaff_x26;
      plVar9[1] = unaff_x25;
      if (unaff_x25 != 0) {
        plVar1 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9 = plVar9 + 2;
LAB_10a2a3a08:
      plVar7[0xc] = (long)plVar9;
      (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
      unaff_x21 = (long *)plVar6[4];
LAB_10a2a3a20:
      (**(code **)(*unaff_x21 + 0x18))();
      if ((int)unaff_x21 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = plVar7[0xb];
    unaff_x24 = (long)plVar9 - unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = plVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a3a84;
    uVar14 = plVar7[0xd] - unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      plVar1 = (long *)(lVar8 + unaff_x24);
      *plVar1 = unaff_x26;
      plVar1[1] = unaff_x25;
      if (unaff_x25 != 0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = plVar7[0xb];
        unaff_x24 = plVar7[0xc] - unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      plVar9 = plVar1 + 2;
      _memcpy(plVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      plVar7[0xb] = (long)(plVar1 + unaff_x27 * -2);
      plVar7[0xc] = (long)plVar9;
      plVar7[0xd] = lVar8 + unaff_x28 * 0x10;
      if (unaff_x23 != 0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a3a08;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a3a8c;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a3aa0;
  plVar7 = plVar6;
  lStack_c0 = unaff_x24;
  lStack_b8 = unaff_x23;
  plStack_b0 = param_2;
  plStack_a8 = unaff_x21;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar9 = plVar6;
  FUN_10a2a0d08(plVar6,ppuVar10);
  FUN_10a2a3bbc(param_4);
  FUN_10a2a3be0(&lStack_d0,plVar6,param_3);
  FUN_10a2a38a0(plVar9,&lStack_d0);
  if (plStack_c8 != (long *)0x0) {
    plVar6 = plStack_c8 + 1;
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
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar12 = lVar8 - 1;
  plVar7[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar17 = plVar7[0x4c];
  lVar15 = lVar17 - lVar8;
  uVar14 = lVar15 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  lStack_d0 = unaff_x26;
  plStack_c8 = (long *)unaff_x25;
  if (uVar14 < uVar12) {
    uVar19 = uVar12 - uVar14;
    lVar18 = plVar7[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar19) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar5 + lVar15;
          _bzero(lVar17,uVar19 * 0x10);
          lVar16 = lVar17 + uVar14 * -0x10;
          _memcpy(lVar16,lVar8,lVar15);
          *plVar6 = lVar16;
          plVar7[0x4c] = lVar17 + uVar19 * 0x10;
          plVar7[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar18;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar17,uVar19 * 0x10);
    plVar7[0x4c] = lVar17 + uVar19 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar17 != lVar8) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar7[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a3a8c; end: 10a2a3a9f;  */

void FUN_10a2a3a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
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
  
  plVar5 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
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
  FUN_10a2a0d08(plVar5,param_2);
  FUN_10a2a3bbc(param_4);
  FUN_10a2a3be0(&stack0xffffffffffffffa0,plVar5,param_3);
  FUN_10a2a38a0(plVar7,&stack0xffffffffffffffa0);
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



/* Entry: 10a2a3aa0; end: 10a2a3bbb;  */

void FUN_10a2a3aa0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0d08(param_2,param_3);
  FUN_10a2a3bbc(param_5);
  FUN_10a2a3be0(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a2a38a0(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a2a3bbc; end: 10a2a3bdf;  */

void FUN_10a2a3bbc(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  
  if ((int)param_1 == 1) {
    return;
  }
  FUN_10a052ee0(1,0,param_1);
  FUN_10a2a3c38(auStack_58);
  FUN_10a2a3d70(extraout_x8,&uStack_31,auStack_58);
  FUN_10a688c1c(auStack_58);
  return;
}



/* Entry: 10a2a3be0; end: 10a2a3c37;  */

void FUN_10a2a3be0(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a2a3c38(auStack_48);
  FUN_10a2a3d70(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a2a3c38; end: 10a2a3d6f;  */

void FUN_10a2a3c38(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a2a3d40;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a3d40:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2a3d50);
  (*pcVar1)();
}



/* Entry: 10a2a3d70; end: 10a2a3dc7;  */

void FUN_10a2a3d70(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a2a3dc8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a2a3dc8; end: 10a2a3e43;  */

void FUN_10a2a3dc8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bb9920;
  *(undefined1 *)(param_1 + 0xb) = 3;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar5;
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[6] = param_2[3];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}



/* Entry: 10a2a3e44; end: 10a2a3e63;  */

void FUN_10a2a3e44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb9920;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a3e64; end: 10a2a3e9b;  */

undefined1  [16] FUN_10a2a3e64(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a2a3e88);
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



/* Entry: 10a2a3e9c; end: 10a2a407b;  */

void FUN_10a2a3e9c(long *param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *unaff_x23;
  long lVar18;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar19;
  undefined *unaff_x26;
  undefined8 *puVar20;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = param_2;
  ppuVar11 = param_3;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a4068:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a4074:
    FUN_10a2a407c();
  }
  else {
    puStack_68 = param_2[1];
    puStack_70 = *param_2;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    param_2 = (undefined **)plVar6[4];
    unaff_x26 = *param_3;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a4010;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (param_2 == (undefined **)0x0) {
LAB_10a2a405c:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a4068;
    }
    unaff_x25 = param_3[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bb91e8;
    param_4 = 0;
    ppuVar7 = param_2;
    ___dynamic_cast(param_2,&PTR_DAT_110bbadc8,&PTR_DAT_110bb91e8,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a405c;
    puVar20 = (undefined8 *)ppuVar7[0xc];
    if (puVar20 < ppuVar7[0xd]) {
      *puVar20 = unaff_x26;
      puVar20[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar20 = puVar20 + 2;
LAB_10a2a3ff8:
      ppuVar7[0xc] = (undefined *)puVar20;
      (**(code **)(*param_2 + 0x10))(param_2);
      param_2 = (undefined **)plVar6[4];
LAB_10a2a4010:
      (**(code **)(*param_2 + 0x18))();
      if ((int)param_2 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar20 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_3 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a4074;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar20 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar20;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a3ff8;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a407c;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a4090;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_3;
  ppuStack_a8 = param_2;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a4148(extraout_x8,plVar6,0x10a2a3e8c,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar17 = plVar9[0x4c];
  lVar15 = lVar17 - lVar8;
  uVar14 = lVar15 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar19 = uVar12 - uVar14;
    lVar18 = plVar9[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar19) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar5 + lVar15;
          _bzero(lVar17,uVar19 * 0x10);
          lVar16 = lVar17 + uVar14 * -0x10;
          _memcpy(lVar16,lVar8,lVar15);
          *plVar6 = lVar16;
          plVar9[0x4c] = lVar17 + uVar19 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar18;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar17,uVar19 * 0x10);
    plVar9[0x4c] = lVar17 + uVar19 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar17 != lVar8) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a407c; end: 10a2a408f;  */

void FUN_10a2a407c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2a4148(extraout_x8,plVar3,0x10a2a3e8c,0,param_2,param_3,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar3[lVar5 + 2];
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
  lVar5 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar3 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_98 = lVar5;
          lStack_90 = lVar5;
          lStack_88 = lVar5;
          lStack_80 = lVar11;
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



/* Entry: 10a2a4090; end: 10a2a4147;  */

void FUN_10a2a4090(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a4148(param_1,param_2,0x10a2a3e8c,0,param_3,param_4,param_5);
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



/* Entry: 10a2a4148; end: 10a2a4227;  */

void FUN_10a2a4148(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10a2a0d08(param_2,param_5);
  FUN_10a2a4228(param_7);
  FUN_10a2a424c(auStack_60,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60);
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
  *param_1 = 0;
  return;
}



/* Entry: 10a2a4228; end: 10a2a424b;  */

void FUN_10a2a4228(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  
  if ((int)param_1 == 1) {
    return;
  }
  FUN_10a052ee0(1,0,param_1);
  FUN_10a2a42a4(auStack_58);
  FUN_10a2a43dc(extraout_x8,&uStack_31,auStack_58);
  FUN_10a688c1c(auStack_58);
  return;
}



/* Entry: 10a2a424c; end: 10a2a42a3;  */

void FUN_10a2a424c(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a2a42a4(auStack_48);
  FUN_10a2a43dc(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a2a42a4; end: 10a2a43db;  */

void FUN_10a2a42a4(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a2a43ac;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a43ac:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2a43bc);
  (*pcVar1)();
}



/* Entry: 10a2a43dc; end: 10a2a4433;  */

void FUN_10a2a43dc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a2a4434();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a2a4434; end: 10a2a44af;  */

void FUN_10a2a4434(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bb9970;
  *(undefined1 *)(param_1 + 0xb) = 3;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar5;
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[6] = param_2[3];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}



/* Entry: 10a2a44b0; end: 10a2a44cf;  */

void FUN_10a2a44b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb9970;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a44d0; end: 10a2a44f7;  */

undefined1  [16] FUN_10a2a44d0(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a2a44f4);
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



/* Entry: 10a2a44f8; end: 10a2a46e3;  */

void FUN_10a2a44f8(long *param_1,long *param_2,undefined **param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long *unaff_x21;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x23;
  long lVar18;
  long unaff_x24;
  long unaff_x25;
  ulong uVar19;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar11 = &puStack_70;
  ppuVar10 = &PTR_DAT_110bb9028;
  plVar6 = param_1 + 9;
  FUN_10a1cda24(plVar6,&PTR_DAT_110bb9028);
  if (plVar6 == (long *)0x0) {
LAB_10a2a46d0:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a46dc:
    FUN_10a2a46e4();
  }
  else {
    puStack_70 = &DAT_10f6497ea;
    uStack_68 = 8;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    unaff_x21 = (long *)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == 0) goto LAB_10a2a4678;
    ppuVar10 = ppuVar11;
    unaff_x20 = plVar6;
    if (unaff_x21 == (long *)0x0) {
LAB_10a2a46c4:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a46d0;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    param_3 = &PTR_DAT_110bb9088;
    param_4 = 0;
    plVar7 = unaff_x21;
    ___dynamic_cast(unaff_x21,&PTR_DAT_110bbadc8,&PTR_DAT_110bb9088,0);
    if (plVar7 == (long *)0x0) goto LAB_10a2a46c4;
    plVar9 = (long *)plVar7[0xc];
    if (plVar9 < (long *)plVar7[0xd]) {
      *plVar9 = unaff_x26;
      plVar9[1] = unaff_x25;
      if (unaff_x25 != 0) {
        plVar1 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9 = plVar9 + 2;
LAB_10a2a4660:
      plVar7[0xc] = (long)plVar9;
      (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
      unaff_x21 = (long *)plVar6[4];
LAB_10a2a4678:
      (**(code **)(*unaff_x21 + 0x18))();
      if ((int)unaff_x21 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = plVar7[0xb];
    unaff_x24 = (long)plVar9 - unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = plVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a46dc;
    uVar14 = plVar7[0xd] - unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      plVar1 = (long *)(lVar8 + unaff_x24);
      *plVar1 = unaff_x26;
      plVar1[1] = unaff_x25;
      if (unaff_x25 != 0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = plVar7[0xb];
        unaff_x24 = plVar7[0xc] - unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      plVar9 = plVar1 + 2;
      _memcpy(plVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      plVar7[0xb] = (long)(plVar1 + unaff_x27 * -2);
      plVar7[0xc] = (long)plVar9;
      plVar7[0xd] = lVar8 + unaff_x28 * 0x10;
      if (unaff_x23 != 0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a4660;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a46e4;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a46f8;
  plVar7 = plVar6;
  lStack_c0 = unaff_x24;
  lStack_b8 = unaff_x23;
  plStack_b0 = param_2;
  plStack_a8 = unaff_x21;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar9 = plVar6;
  FUN_10a2a0d08(plVar6,ppuVar10);
  FUN_10a2a4818(param_4);
  FUN_10a2a483c(&lStack_d0,plVar6,*(undefined4 *)param_3,param_3[1]);
  FUN_10a2a44f8(plVar9,&lStack_d0);
  if (plStack_c8 != (long *)0x0) {
    plVar6 = plStack_c8 + 1;
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
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar12 = lVar8 - 1;
  plVar7[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar17 = plVar7[0x4c];
  lVar15 = lVar17 - lVar8;
  uVar14 = lVar15 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  lStack_d0 = unaff_x26;
  plStack_c8 = (long *)unaff_x25;
  if (uVar14 < uVar12) {
    uVar19 = uVar12 - uVar14;
    lVar18 = plVar7[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar19) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar5 + lVar15;
          _bzero(lVar17,uVar19 * 0x10);
          lVar16 = lVar17 + uVar14 * -0x10;
          _memcpy(lVar16,lVar8,lVar15);
          *plVar6 = lVar16;
          plVar7[0x4c] = lVar17 + uVar19 * 0x10;
          plVar7[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar18;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar17,uVar19 * 0x10);
    plVar7[0x4c] = lVar17 + uVar19 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar17 != lVar8) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar7[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a46e4; end: 10a2a46f7;  */

void FUN_10a2a46e4(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
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
  
  plVar5 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
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
  FUN_10a2a0d08(plVar5,param_2);
  FUN_10a2a4818(param_4);
  FUN_10a2a483c(&stack0xffffffffffffffa0,plVar5,*param_3,*(undefined8 *)(param_3 + 2));
  FUN_10a2a44f8(plVar7,&stack0xffffffffffffffa0);
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



/* Entry: 10a2a46f8; end: 10a2a4817;  */

void FUN_10a2a46f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
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
  FUN_10a2a0d08(param_2,param_3);
  FUN_10a2a4818(param_5);
  FUN_10a2a483c(&stack0xffffffffffffffb0,param_2,*param_4,*(undefined8 *)(param_4 + 2));
  FUN_10a2a44f8(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a2a4818; end: 10a2a483b;  */

void FUN_10a2a4818(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  int iStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (param_1 == 1) {
    return;
  }
  puVar4 = (undefined8 *)0x1;
  plVar9 = (long *)0x0;
  FUN_10a052ee0();
  if (param_1 == 7) {
    plVar5 = plVar9;
    (**(code **)(*plVar9 + 0x98))(plVar9,param_4);
    plVar6 = plVar9;
    plStack_48 = plVar5;
    (**(code **)(*plVar9 + 0x228))(plVar9,&plStack_48);
    if ((int)plVar6 != 0) {
      plVar5 = plVar9;
      (**(code **)(*plVar9 + 0x58))();
      lVar7 = plVar5[0x48];
      if ((lVar7 == 0) ||
         (___dynamic_cast(lVar7,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar5 = plStack_48,
         lVar7 == 0)) goto LAB_10a2a49c0;
      plStack_48 = (long *)0x0;
      iStack_58 = 7;
      plStack_50 = plVar5;
      plStack_60 = plVar9;
      FUN_10a688ac0(&uStack_80,&plStack_60,*(undefined8 *)(lVar7 + 8));
      if ((3 < iStack_58) && (plStack_50 != (long *)0x0)) {
        (**(code **)*plStack_50)();
      }
    }
    if (plStack_48 != (long *)0x0) {
      (**(code **)*plStack_48)();
    }
    if (((ulong)plVar6 & 1) != 0) {
      puVar8 = (undefined8 *)0x60;
      __Znwm();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110bb99c0;
      puVar8[4] = lStack_78;
      puVar8[3] = uStack_80;
      if (lStack_78 != 0) {
        plVar9 = (long *)(lStack_78 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar8[6] = lStack_68;
      puVar8[5] = uStack_70;
      if (lStack_68 != 0) {
        plVar9 = (long *)(lStack_68 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(puVar8 + 0xb) = 2;
      *puVar4 = puVar8 + 3;
      puVar4[1] = puVar8;
      FUN_10a688c1c(&uStack_80);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a49c0:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2a49d0);
  (*pcVar3)();
}



/* Entry: 10a2a483c; end: 10a2a49ff;  */

void FUN_10a2a483c(undefined8 *param_1,long *param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (param_3 == 7) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,param_4);
    plVar5 = param_2;
    plStack_38 = plVar4;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar5 != 0) {
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar6 = plVar4[0x48];
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar4 = plStack_38,
         lVar6 == 0)) goto LAB_10a2a49c0;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_40 = plVar4;
      plStack_50 = param_2;
      FUN_10a688ac0(&uStack_70,&plStack_50,*(undefined8 *)(lVar6 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar5 & 1) != 0) {
      puVar7 = (undefined8 *)0x60;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_FUN_110bb99c0;
      puVar7[4] = lStack_68;
      puVar7[3] = uStack_70;
      if (lStack_68 != 0) {
        plVar4 = (long *)(lStack_68 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar7[6] = lStack_58;
      puVar7[5] = uStack_60;
      if (lStack_58 != 0) {
        plVar4 = (long *)(lStack_58 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(puVar7 + 0xb) = 2;
      *param_1 = puVar7 + 3;
      param_1[1] = puVar7;
      FUN_10a688c1c(&uStack_70);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a49c0:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2a49d0);
  (*pcVar3)();
}



/* Entry: 10a2a4a00; end: 10a2a4a0f;  */

void FUN_10a2a4a00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb99c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a4a10; end: 10a2a4a2f;  */

void FUN_10a2a4a10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb99c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a4a30; end: 10a2a4a67;  */

undefined1  [16] FUN_10a2a4a30(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a2a4a54);
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



/* Entry: 10a2a4a68; end: 10a2a4b1f;  */

void FUN_10a2a4a68(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a4148(param_1,param_2,0x10a2a4a58,0,param_3,param_4,param_5);
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



/* Entry: 10a2a4b20; end: 10a2a4b33;  */

void FUN_10a2a4b20(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined4 *extraout_x8;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  plVar10 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar6 = plVar10;
  (**(code **)(*plVar10 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar10;
  FUN_10a2a0d08(plVar10,param_2);
  FUN_10a2a4f78(param_4);
  if (*param_3 == 7) {
    plVar13 = plVar10;
    (**(code **)(*plVar10 + 0x98))(plVar10,*(undefined8 *)(param_3 + 2));
    plVar8 = plVar10;
    plStack_78 = plVar13;
    (**(code **)(*plVar10 + 0x228))(plVar10,&plStack_78);
    if ((int)plVar8 != 0) {
      plVar13 = plVar10;
      (**(code **)(*plVar10 + 0x58))();
      lVar9 = plVar13[0x48];
      if ((lVar9 == 0) ||
         (___dynamic_cast(lVar9,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar9 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a2a4f24;
      }
      plStack_80 = plStack_78;
      plStack_78 = (long *)0x0;
      plStack_88 = (long *)CONCAT44(plStack_88._4_4_,7);
      plStack_90 = plVar10;
      FUN_10a688ac0(&puStack_b0,&plStack_90,*(undefined8 *)(lVar9 + 8));
      if ((3 < (int)plStack_88) && (plStack_80 != (long *)0x0)) {
        (**(code **)*plStack_80)();
      }
    }
    if (plStack_78 != (long *)0x0) {
      (**(code **)*plStack_78)();
    }
    if (((ulong)plVar8 & 1) != 0) {
      plVar10 = (long *)0x60;
      __Znwm();
      plVar8 = plVar10 + 1;
      *plVar8 = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_FUN_110bb9a10;
      plVar13 = plVar10 + 3;
      plVar10[4] = lStack_a8;
      *plVar13 = (long)puStack_b0;
      if (lStack_a8 != 0) {
        plVar11 = (long *)(lStack_a8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar10[6] = (long)plStack_98;
      plVar10[5] = lStack_a0;
      if (plStack_98 != (long *)0x0) {
        plStack_98 = plStack_98 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
          if (bVar3) {
            *plStack_98 = *plStack_98 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar10 + 0xb) = 2;
      FUN_10a688c1c(&puStack_b0);
      plVar11 = plVar7 + 9;
      FUN_10a1cda24(plVar11,&PTR_DAT_110bb92e8);
      if (plVar11 == (long *)0x0) {
        puVar14 = &UNK_10f64981f;
      }
      else {
        puStack_b0 = &DAT_10f649804;
        lStack_a8 = 10;
        FUN_10a2677b4(plVar7[0x11],&puStack_b0);
        plVar20 = (long *)plVar11[4];
        if ((plVar20 != (long *)0x0) &&
           (plVar12 = plVar20, ___dynamic_cast(plVar20,&PTR_DAT_110bbadc8,&PTR_DAT_110bb9348,0),
           plVar12 != (long *)0x0)) {
          puVar17 = (undefined8 *)plVar12[0xc];
          if (puVar17 < (undefined8 *)plVar12[0xd]) {
            *puVar17 = plVar13;
            puVar17[1] = plVar10;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar17 = puVar17 + 2;
          }
          else {
            lVar9 = (long)puVar17 - plVar12[0xb];
            uVar15 = (lVar9 >> 4) + 1;
            if (uVar15 >> 0x3c != 0) {
              FUN_10a2a4b20();
              goto LAB_10a2a4f24;
            }
            uVar22 = plVar12[0xd] - plVar12[0xb];
            uVar21 = (long)uVar22 >> 3;
            if (uVar21 <= uVar15) {
              uVar21 = uVar15;
            }
            if (0x7fffffffffffffef < uVar22) {
              uVar21 = 0xfffffffffffffff;
            }
            if (uVar21 >> 0x3c != 0) {
              func_0x000109ffded8();
              goto LAB_10a2a4f24;
            }
            lVar19 = uVar21 << 4;
            __Znwm();
            puVar1 = (undefined8 *)(lVar19 + lVar9);
            *puVar1 = plVar13;
            puVar1[1] = plVar10;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar9 = plVar12[0xb];
            puVar17 = puVar1 + 2;
            lVar23 = (long)puVar1 - (plVar12[0xc] - lVar9);
            _memcpy(lVar23,lVar9);
            plVar12[0xb] = lVar23;
            plVar12[0xc] = (long)puVar17;
            plVar12[0xd] = lVar19 + uVar21 * 0x10;
            if (lVar9 != 0) {
              __ZdlPv(lVar9);
            }
          }
          plVar12[0xc] = (long)puVar17;
          (**(code **)(*plVar20 + 0x10))(plVar20);
          plVar13 = (long *)plVar11[4];
          (**(code **)(*plVar13 + 0x18))();
          if ((int)plVar13 != 0) {
            (**(code **)(*(long *)((long)plVar7 + *(long *)(*plVar7 + -0x18)) + 0x28))
                      ((undefined *)((long)plVar7 + *(long *)(*plVar7 + -0x18)));
          }
          do {
            lVar9 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
          *extraout_x8 = 0;
          plVar10 = plVar6 + 0x4b;
          lVar9 = plVar6[0x59];
          uVar15 = lVar9 - 1;
          plVar6[0x59] = uVar15;
          if (uVar15 < 8) {
            uVar15 = plVar10[lVar9 + 2];
            if (plVar6[0x5a] == uVar15) {
              return;
            }
          }
          else {
            uVar15 = *(ulong *)(plVar6[0x57] + -8);
            plVar6[0x57] = plVar6[0x57] + -8;
            if (plVar6[0x5a] == uVar15) {
              return;
            }
          }
          plVar7 = (long *)*plVar10;
          plVar13 = (long *)plVar6[0x4c];
          lVar9 = (long)plVar13 - (long)plVar7;
          uVar21 = lVar9 >> 4;
          if (uVar21 < uVar15) {
            uVar22 = uVar15 - uVar21;
            lVar19 = plVar6[0x4d];
            if ((ulong)(lVar19 - (long)plVar13 >> 4) < uVar22) {
              if (uVar15 >> 0x3c == 0) {
                uVar16 = lVar19 - (long)plVar7 >> 3;
                if (uVar16 <= uVar15) {
                  uVar16 = uVar15;
                }
                if (0x7fffffffffffffef < (ulong)(lVar19 - (long)plVar7)) {
                  uVar16 = 0xfffffffffffffff;
                }
                plStack_78 = plVar10;
                if (uVar16 >> 0x3c == 0) {
                  lVar5 = uVar16 << 4;
                  __Znwm();
                  lVar23 = lVar5 + lVar9;
                  _bzero(lVar23,uVar22 * 0x10);
                  lVar18 = lVar23 + uVar21 * -0x10;
                  _memcpy(lVar18,plVar7,lVar9);
                  *plVar10 = lVar18;
                  plVar6[0x4c] = lVar23 + uVar22 * 0x10;
                  plVar6[0x4d] = lVar5 + uVar16 * 0x10;
                  plStack_98 = plVar7;
                  plStack_90 = plVar7;
                  plStack_88 = plVar7;
                  plStack_80 = (long *)lVar19;
                  func_0x00010988c1b8(&plStack_98);
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
            _bzero(plVar13,uVar22 * 0x10);
            plVar6[0x4c] = (long)(plVar13 + uVar22 * 2);
          }
          else if (uVar15 < uVar21) {
            while (plVar13 != plVar7 + uVar15 * 2) {
              plVar13 = plVar13 + -2;
              func_0x00010988c204(plVar13);
            }
            plVar6[0x4c] = (long)(plVar7 + uVar15 * 2);
          }
code_r0x00010988c138:
          plVar6[0x5a] = uVar15;
          return;
        }
        puVar14 = &UNK_10f64983a;
      }
      FUN_10a00946c(puVar14);
      goto LAB_10a2a4f24;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a4f24:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2a4f28);
  (*pcVar4)();
}



/* Entry: 10a2a4b34; end: 10a2a4f77;  */

void FUN_10a2a4b34(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a2a0d08(param_2,param_3);
  FUN_10a2a4f78(param_5);
  if (*param_4 == 7) {
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_68 = plVar9;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_68);
    if ((int)plVar12 != 0) {
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar8 = plVar9[0x48];
      if ((lVar8 == 0) ||
         (___dynamic_cast(lVar8,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar8 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a2a4f24;
      }
      plStack_70 = plStack_68;
      plStack_68 = (long *)0x0;
      plStack_78 = (long *)CONCAT44(plStack_78._4_4_,7);
      plStack_80 = param_2;
      FUN_10a688ac0(&puStack_a0,&plStack_80,*(undefined8 *)(lVar8 + 8));
      if ((3 < (int)plStack_78) && (plStack_70 != (long *)0x0)) {
        (**(code **)*plStack_70)();
      }
    }
    if (plStack_68 != (long *)0x0) {
      (**(code **)*plStack_68)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plVar9 = (long *)0x60;
      __Znwm();
      plVar23 = plVar9 + 1;
      *plVar23 = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110bb9a10;
      plVar12 = plVar9 + 3;
      plVar9[4] = lStack_98;
      *plVar12 = (long)puStack_a0;
      if (lStack_98 != 0) {
        plVar10 = (long *)(lStack_98 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9[6] = (long)plStack_88;
      plVar9[5] = lStack_90;
      if (plStack_88 != (long *)0x0) {
        plStack_88 = plStack_88 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_88,0x10);
          if (bVar3) {
            *plStack_88 = *plStack_88 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar9 + 0xb) = 2;
      FUN_10a688c1c(&puStack_a0);
      plVar10 = plVar7 + 9;
      FUN_10a1cda24(plVar10,&PTR_DAT_110bb92e8);
      if (plVar10 == (long *)0x0) {
        puVar13 = &UNK_10f64981f;
      }
      else {
        puStack_a0 = &DAT_10f649804;
        lStack_98 = 10;
        FUN_10a2677b4(plVar7[0x11],&puStack_a0);
        plVar19 = (long *)plVar10[4];
        if ((plVar19 != (long *)0x0) &&
           (plVar11 = plVar19, ___dynamic_cast(plVar19,&PTR_DAT_110bbadc8,&PTR_DAT_110bb9348,0),
           plVar11 != (long *)0x0)) {
          puVar16 = (undefined8 *)plVar11[0xc];
          if (puVar16 < (undefined8 *)plVar11[0xd]) {
            *puVar16 = plVar12;
            puVar16[1] = plVar9;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar3) {
                *plVar23 = *plVar23 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar16 = puVar16 + 2;
          }
          else {
            lVar8 = (long)puVar16 - plVar11[0xb];
            uVar14 = (lVar8 >> 4) + 1;
            if (uVar14 >> 0x3c != 0) {
              FUN_10a2a4b20();
              goto LAB_10a2a4f24;
            }
            uVar21 = plVar11[0xd] - plVar11[0xb];
            uVar20 = (long)uVar21 >> 3;
            if (uVar20 <= uVar14) {
              uVar20 = uVar14;
            }
            if (0x7fffffffffffffef < uVar21) {
              uVar20 = 0xfffffffffffffff;
            }
            if (uVar20 >> 0x3c != 0) {
              func_0x000109ffded8();
              goto LAB_10a2a4f24;
            }
            lVar18 = uVar20 << 4;
            __Znwm();
            puVar1 = (undefined8 *)(lVar18 + lVar8);
            *puVar1 = plVar12;
            puVar1[1] = plVar9;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar3) {
                *plVar23 = *plVar23 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar8 = plVar11[0xb];
            puVar16 = puVar1 + 2;
            lVar22 = (long)puVar1 - (plVar11[0xc] - lVar8);
            _memcpy(lVar22,lVar8);
            plVar11[0xb] = lVar22;
            plVar11[0xc] = (long)puVar16;
            plVar11[0xd] = lVar18 + uVar20 * 0x10;
            if (lVar8 != 0) {
              __ZdlPv(lVar8);
            }
          }
          plVar11[0xc] = (long)puVar16;
          (**(code **)(*plVar19 + 0x10))(plVar19);
          plVar12 = (long *)plVar10[4];
          (**(code **)(*plVar12 + 0x18))();
          if ((int)plVar12 != 0) {
            (**(code **)(*(long *)((long)plVar7 + *(long *)(*plVar7 + -0x18)) + 0x28))
                      ((long)plVar7 + *(long *)(*plVar7 + -0x18));
          }
          do {
            lVar8 = *plVar23;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar3) {
              *plVar23 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
          *param_1 = 0;
          plVar7 = plVar6 + 0x4b;
          lVar8 = plVar6[0x59];
          uVar14 = lVar8 - 1;
          plVar6[0x59] = uVar14;
          if (uVar14 < 8) {
            uVar14 = plVar7[lVar8 + 2];
            if (plVar6[0x5a] == uVar14) {
              return;
            }
          }
          else {
            uVar14 = *(ulong *)(plVar6[0x57] + -8);
            plVar6[0x57] = plVar6[0x57] + -8;
            if (plVar6[0x5a] == uVar14) {
              return;
            }
          }
          plVar9 = (long *)*plVar7;
          plVar12 = (long *)plVar6[0x4c];
          lVar8 = (long)plVar12 - (long)plVar9;
          uVar20 = lVar8 >> 4;
          if (uVar20 < uVar14) {
            uVar21 = uVar14 - uVar20;
            lVar18 = plVar6[0x4d];
            if ((ulong)(lVar18 - (long)plVar12 >> 4) < uVar21) {
              if (uVar14 >> 0x3c == 0) {
                uVar15 = lVar18 - (long)plVar9 >> 3;
                if (uVar15 <= uVar14) {
                  uVar15 = uVar14;
                }
                if (0x7fffffffffffffef < (ulong)(lVar18 - (long)plVar9)) {
                  uVar15 = 0xfffffffffffffff;
                }
                plStack_68 = plVar7;
                if (uVar15 >> 0x3c == 0) {
                  lVar5 = uVar15 << 4;
                  __Znwm();
                  lVar22 = lVar5 + lVar8;
                  _bzero(lVar22,uVar21 * 0x10);
                  lVar17 = lVar22 + uVar20 * -0x10;
                  _memcpy(lVar17,plVar9,lVar8);
                  *plVar7 = lVar17;
                  plVar6[0x4c] = lVar22 + uVar21 * 0x10;
                  plVar6[0x4d] = lVar5 + uVar15 * 0x10;
                  plStack_88 = plVar9;
                  plStack_80 = plVar9;
                  plStack_78 = plVar9;
                  plStack_70 = (long *)lVar18;
                  func_0x00010988c1b8(&plStack_88);
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
            _bzero(plVar12,uVar21 * 0x10);
            plVar6[0x4c] = (long)(plVar12 + uVar21 * 2);
          }
          else if (uVar14 < uVar20) {
            while (plVar12 != plVar9 + uVar14 * 2) {
              plVar12 = plVar12 + -2;
              func_0x00010988c204(plVar12);
            }
            plVar6[0x4c] = (long)(plVar9 + uVar14 * 2);
          }
code_r0x00010988c138:
          plVar6[0x5a] = uVar14;
          return;
        }
        puVar13 = &UNK_10f64983a;
      }
      FUN_10a00946c(puVar13);
      goto LAB_10a2a4f24;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a4f24:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2a4f28);
  (*pcVar4)();
}



/* Entry: 10a2a4f78; end: 10a2a4f9b;  */

void FUN_10a2a4f78(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110bb9a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a4f9c; end: 10a2a4fab;  */

void FUN_10a2a4f9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a4fac; end: 10a2a4fcb;  */

void FUN_10a2a4fac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9a10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a4fcc; end: 10a2a4ff3;  */

undefined1  [16] FUN_10a2a4fcc(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a2a4ff0);
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



/* Entry: 10a2a4ff4; end: 10a2a59bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a2a557c) */
/* WARNING: Removing unreachable block (ram,0x00010a2a5598) */
/* WARNING: Removing unreachable block (ram,0x00010a2a522c) */

void FUN_10a2a4ff4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  code ****ppppcVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  char cStack_199;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  long lStack_170;
  char cStack_161;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  byte bStack_149;
  undefined8 ***pppuStack_140;
  undefined8 *puStack_138;
  byte bStack_129;
  undefined8 uStack_128;
  ulong uStack_120;
  byte bStack_111;
  byte bStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long *plStack_b0;
  code ***pppcStack_a8;
  undefined8 *puStack_a0;
  byte bStack_91;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plStack_68 = *(long **)PTR____stack_chk_guard_11034bdc0;
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
  FUN_10a2a0d08(param_2,param_3);
  FUN_10a2a59bc(param_5);
  FUN_10a2a59e0(&plStack_1c8,param_2,param_4);
  FUN_10a2a483c(&uStack_1d8,param_2,*(undefined4 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18))
  ;
  FUN_10a059354(&puStack_1e8,param_2,param_4 + 0x20);
  plVar12 = plStack_1d0;
  plVar21 = plStack_1e0;
  puStack_b8 = puStack_1e8;
  plStack_b0 = plStack_1e0;
  if (plStack_1e0 != (long *)0x0) {
    plVar11 = plStack_1e0 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_c8 = uStack_1d8;
  plStack_c0 = plStack_1d0;
  if (plStack_1d0 != (long *)0x0) {
    plVar11 = plStack_1d0 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_1c8 == (long *)0x0) {
    func_0x000107c2b054(&uStack_128,&UNK_10f648096);
    if (puStack_1e8 != (undefined8 *)0x0) {
      if (*(char *)(puStack_1e8 + 8) == '\x01') {
        (*(code *)*puStack_1e8)(&uStack_128,puStack_1e8);
      }
      else if (*(char *)(puStack_1e8 + 8) == '\x02') {
        FUN_10a05aad0(puStack_1e8,&uStack_128);
      }
    }
    if ((char)bStack_111 < '\0') {
      __ZdlPv(uStack_128);
    }
LAB_10a2a5624:
    if (plVar12 != (long *)0x0) {
      plVar21 = plVar12 + 1;
      do {
        lVar16 = *plVar21;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar12 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar21 = plStack_b0 + 1;
      do {
        lVar16 = *plVar21;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (plStack_1e0 != (long *)0x0) {
      plVar12 = plStack_1e0 + 1;
      do {
        lVar16 = *plVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1e0);
      }
    }
    if (plStack_1d0 != (long *)0x0) {
      plVar12 = plStack_1d0 + 1;
      do {
        lVar16 = *plVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d0);
      }
    }
    if (plStack_1c0 != (long *)0x0) {
      plVar12 = plStack_1c0 + 1;
      do {
        lVar16 = *plVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c0);
      }
    }
    *param_1 = 0;
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_68) {
      plVar12 = plVar8 + 0x4b;
      lVar16 = plVar8[0x59];
      uVar17 = lVar16 - 1;
      plVar8[0x59] = uVar17;
      if (uVar17 < 8) {
        uVar17 = plVar12[lVar16 + 2];
        if (plVar8[0x5a] == uVar17) {
          return;
        }
      }
      else {
        uVar17 = *(ulong *)(plVar8[0x57] + -8);
        plVar8[0x57] = plVar8[0x57] + -8;
        if (plVar8[0x5a] == uVar17) {
          return;
        }
      }
      lVar16 = *plVar12;
      lVar20 = plVar8[0x4c];
      lVar18 = lVar20 - lVar16;
      uVar23 = lVar18 >> 4;
      if (uVar23 < uVar17) {
        uVar24 = uVar17 - uVar23;
        lVar22 = plVar8[0x4d];
        if ((ulong)(lVar22 - lVar20 >> 4) < uVar24) {
          if (uVar17 >> 0x3c == 0) {
            uVar15 = lVar22 - lVar16 >> 3;
            if (uVar15 <= uVar17) {
              uVar15 = uVar17;
            }
            if (0x7fffffffffffffef < (ulong)(lVar22 - lVar16)) {
              uVar15 = 0xfffffffffffffff;
            }
            plStack_68 = plVar12;
            if (uVar15 >> 0x3c == 0) {
              lVar7 = uVar15 << 4;
              __Znwm();
              lVar20 = lVar7 + lVar18;
              _bzero(lVar20,uVar24 * 0x10);
              lVar19 = lVar20 + uVar23 * -0x10;
              _memcpy(lVar19,lVar16,lVar18);
              *plVar12 = lVar19;
              plVar8[0x4c] = lVar20 + uVar24 * 0x10;
              plVar8[0x4d] = lVar7 + uVar15 * 0x10;
              lStack_88 = lVar16;
              lStack_80 = lVar16;
              lStack_78 = lVar16;
              lStack_70 = lVar22;
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
        _bzero(lVar20,uVar24 * 0x10);
        plVar8[0x4c] = lVar20 + uVar24 * 0x10;
      }
      else if (uVar17 < uVar23) {
        lVar16 = lVar16 + uVar17 * 0x10;
        while (lVar20 != lVar16) {
          lVar20 = lVar20 + -0x10;
          func_0x00010988c204(lVar20);
        }
        plVar8[0x4c] = lVar16;
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar17;
      return;
    }
    ___stack_chk_fail();
  }
  else {
    (**(code **)(*plStack_1c8 + 0x48))(&plStack_d0);
    FUN_109d1a244(&plStack_d0);
    if ((((uint)plStack_d0[2] >> 1 & 1) != 0) && (((uint)plStack_d0[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plStack_d0 + 0x1e) & 1) == 0) goto LAB_10a2a5808;
      FUN_10a26f108(&uStack_128,plStack_d0 + 0x13);
      if (bStack_d8 == 1) {
        uVar17 = uStack_120;
        if (-1 < (char)bStack_111) {
          uVar17 = (ulong)bStack_111;
        }
        if (uVar17 == 0) goto LAB_10a2a51a8;
        func_0x000107c2b054(&pppuStack_140,"app://userContextSystem/getUser/");
        if ((bStack_d8 & 1) == 0) goto LAB_10a2a5808;
        if ((char)bStack_111 < '\0') {
          func_0x000107c3192c(&uStack_160,uStack_128,uStack_120);
        }
        else {
          uStack_158 = uStack_120;
          uStack_160 = uStack_128;
          bStack_149 = bStack_111;
        }
        puVar13 = puStack_138;
        if (-1 < (char)bStack_129) {
          puVar13 = (undefined8 *)(ulong)bStack_129;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&pppcStack_a8,&uStack_160,0,puVar13,&plStack_1b8);
        puVar13 = puStack_a0;
        if (-1 < (char)bStack_91) {
          puVar13 = (undefined8 *)(ulong)bStack_91;
        }
        puVar2 = puStack_138;
        if (-1 < (char)bStack_129) {
          puVar2 = (undefined8 *)(ulong)bStack_129;
        }
        if (puVar13 == puVar2) {
          ppppcVar10 = (code ****)pppcStack_a8;
          if (-1 < (char)bStack_91) {
            ppppcVar10 = &pppcStack_a8;
          }
          ppppuVar3 = (undefined8 ****)pppuStack_140;
          if (-1 < (char)bStack_129) {
            ppppuVar3 = &pppuStack_140;
          }
          _memcmp(ppppcVar10,ppppuVar3);
          bVar6 = (int)ppppcVar10 == 0;
          if (-1 < (char)bStack_91) goto LAB_10a2a52ec;
LAB_10a2a5344:
          __ZdlPv(pppcStack_a8);
          if (!bVar6) goto LAB_10a2a5350;
LAB_10a2a52f0:
          if (-1 < (char)bStack_129) {
            puStack_138 = (undefined8 *)(ulong)bStack_129;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                    (&uStack_178,&uStack_160,puStack_138,0xffffffffffffffff,&pppcStack_a8);
          if (cStack_161 < '\0') {
            if (lStack_170 == 0) goto LAB_10a2a5530;
            plStack_1b8 = plVar9;
            func_0x000107c3192c(&uStack_1b0,uStack_178);
LAB_10a2a53a4:
            uStack_198 = uStack_1d8;
            plStack_190 = plVar12;
            if (plVar12 != (long *)0x0) {
              plVar12 = plVar12 + 1;
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar6) {
                  *plVar12 = *plVar12 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            puStack_188 = puStack_1e8;
            plStack_180 = plVar21;
            if (plVar21 != (long *)0x0) {
              plVar21 = plVar21 + 1;
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar6) {
                  *plVar21 = *plVar21 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            plVar12 = plVar9 + 9;
            FUN_10a1cda24(plVar12,&PTR_DAT_110bb6528);
            if (plVar12 == (long *)0x0) {
              puVar14 = &UNK_10f64981f;
            }
            else {
              pppcStack_a8 = (code ***)&DAT_10f359e34;
              puStack_a0 = (undefined8 *)0xa;
              FUN_10a2677b4(plVar9[0x11],&pppcStack_a8);
              plVar21 = (long *)plVar12[4];
              if ((plVar21 != (long *)0x0) &&
                 (plVar11 = plVar21,
                 ___dynamic_cast(plVar21,&PTR_DAT_110bbadc8,&PTR_DAT_110bbadf8,0),
                 plVar11 != (long *)0x0)) {
                pppcStack_a8 = (code ***)FUN_10a2a68c4;
                FUN_10a2a7358(&puStack_a0,&plStack_1b8);
                FUN_10a2a65b4(plVar11,&pppcStack_a8);
                (*(code *)*puStack_a0)(&puStack_a0);
                (**(code **)(*plVar21 + 0x10))(plVar21);
                plVar12 = (long *)plVar12[4];
                (**(code **)(*plVar12 + 0x18))();
                if ((int)plVar12 != 0) {
                  (**(code **)(*(long *)((long)plVar9 + *(long *)(*plVar9 + -0x18)) + 0x28))
                            ((long)plVar9 + *(long *)(*plVar9 + -0x18));
                }
                plVar12 = plStack_180;
                if (plStack_180 != (long *)0x0) {
                  plVar21 = plStack_180 + 1;
                  do {
                    lVar16 = *plVar21;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                    if (bVar6) {
                      *plVar21 = lVar16 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar16 == 0) {
                    (**(code **)(*plStack_180 + 0x10))(plStack_180);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                  }
                }
                plVar12 = plStack_190;
                if (plStack_190 != (long *)0x0) {
                  plVar21 = plStack_190 + 1;
                  do {
                    lVar16 = *plVar21;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                    if (bVar6) {
                      *plVar21 = lVar16 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar16 == 0) {
                    (**(code **)(*plStack_190 + 0x10))(plStack_190);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                  }
                }
                if (cStack_199 < '\0') {
                  __ZdlPv(uStack_1b0);
                }
                goto LAB_10a2a55a0;
              }
              puVar14 = &UNK_10f64983a;
            }
            FUN_10a00946c(puVar14);
            goto LAB_10a2a5808;
          }
          if (cStack_161 != '\0') {
            lStack_1a8 = lStack_170;
            uStack_1b0 = uStack_178;
            cStack_199 = cStack_161;
            plStack_1b8 = plVar9;
            goto LAB_10a2a53a4;
          }
LAB_10a2a5530:
          func_0x000107c2b054(&pppcStack_a8,&UNK_10f6480ef);
          if (puStack_1e8 != (undefined8 *)0x0) {
            if (*(char *)(puStack_1e8 + 8) == '\x01') {
              (*(code *)*puStack_1e8)();
            }
            else if (*(char *)(puStack_1e8 + 8) == '\x02') {
              FUN_10a05aad0(puStack_1e8,&pppcStack_a8);
            }
          }
LAB_10a2a55a0:
          if (cStack_161 < '\0') {
            __ZdlPv(uStack_178);
          }
        }
        else {
          bVar6 = false;
          if ((char)bStack_91 < '\0') goto LAB_10a2a5344;
LAB_10a2a52ec:
          if (bVar6) goto LAB_10a2a52f0;
LAB_10a2a5350:
          func_0x000107c2b054(&pppcStack_a8,&UNK_10f6480ef);
          if (puStack_1e8 != (undefined8 *)0x0) {
            if (*(char *)(puStack_1e8 + 8) == '\x01') {
              (*(code *)*puStack_1e8)();
            }
            else if (*(char *)(puStack_1e8 + 8) == '\x02') {
              FUN_10a05aad0(puStack_1e8,&pppcStack_a8);
            }
          }
        }
        if ((char)bStack_149 < '\0') {
          __ZdlPv(uStack_160);
        }
        if ((char)bStack_129 < '\0') {
          __ZdlPv(pppuStack_140);
        }
      }
      else {
LAB_10a2a51a8:
        func_0x000107c2b054(&pppcStack_a8,&UNK_10f6480c2);
        if (puStack_1e8 != (undefined8 *)0x0) {
          if (*(char *)(puStack_1e8 + 8) == '\x01') {
            (*(code *)*puStack_1e8)();
          }
          else if (*(char *)(puStack_1e8 + 8) == '\x02') {
            FUN_10a05aad0(puStack_1e8,&pppcStack_a8);
          }
        }
      }
      func_0x00010a1fe790(&uStack_128);
      plVar12 = plStack_c0;
      if (plStack_d0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_d0 + 1);
        do {
          uVar17 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar17 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar17 & 0x1fffffffc) == 4) {
          do {
            uVar17 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar17 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar17 - 1 == 0) {
            (**(code **)(*plStack_d0 + 8))();
            plVar12 = plStack_c0;
          }
        }
      }
      goto LAB_10a2a5624;
    }
    if (((uint)plStack_d0[2] >> 5 & 1) == 0) {
      puVar13 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC2EPKc();
      *puVar13 = &PTR_DAT_110ae85c0;
      ___cxa_throw(puVar13,&PTR_DAT_110ae8598,&DAT_1092af9d8);
      goto LAB_10a2a5808;
    }
  }
  __ZNSt13exception_ptrC1ERKS_(&pppcStack_a8,plStack_d0 + 0x12);
  func_0x0001092af97c();
LAB_10a2a5808:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2a580c);
  (*pcVar5)();
}



/* Entry: 10a2a59bc; end: 10a2a59df;  */

void FUN_10a2a59bc(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  
  if ((int)param_1 == 3) {
    return;
  }
  lVar2 = 3;
  piVar3 = (int *)0x0;
  FUN_10a052ee0(3,0,param_1);
  if (*piVar3 != 1) {
    func_0x000109898688();
    if (lVar2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a2a5a58(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2a5a44);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a2a59e0; end: 10a2a5a57;  */

void FUN_10a2a59e0(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a2a5a58(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2a5a44);
  (*pcVar1)();
}



/* Entry: 10a2a5a58; end: 10a2a5aef;  */

void FUN_10a2a5a58(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c5ef50,0), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
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
  return;
}



/* Entry: 10a2a5af0; end: 10a2a5b63;  */

undefined8 * FUN_10a2a5af0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a2a5b64(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a2a5d70(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a2a5b64; end: 10a2a5c33;  */

undefined1  [16] FUN_10a2a5b64(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong unaff_x22;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong *apuStack_68 [5];
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar2 = param_1;
  puVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (ulong *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar2 = param_2;
  }
  puVar14 = (ulong *)param_1[1];
  if (param_2 >= puVar14 && param_2 != puVar14) {
LAB_10a2a5bac:
    puVar2 = param_2;
    if (param_2 == (ulong *)0x0) {
      uVar4 = *param_1;
      *param_1 = 0;
      if (uVar4 != 0) {
        __ZdlPv();
        puVar2 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        puVar2 = param_1;
        puVar6 = param_2;
        func_0x000109ffded8();
        uVar4 = *puVar6;
        uVar3 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
        uVar3 = (uVar4 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
        uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
        uVar13 = puVar2[1];
        if (uVar13 != 0) {
          uVar8 = uVar13 - 1;
          if ((uVar13 & uVar8) == 0) {
            unaff_x22 = uVar3 & uVar8;
          }
          else {
            unaff_x22 = uVar3;
            if (uVar13 <= uVar3) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar3 / uVar13;
              }
              unaff_x22 = uVar3 - uVar10 * uVar13;
            }
          }
          puVar9 = *(undefined8 **)(*puVar2 + unaff_x22 * 8);
          if (puVar9 != (undefined8 *)0x0) {
            for (puVar6 = (ulong *)*puVar9; puVar6 != (ulong *)0x0; puVar6 = (ulong *)*puVar6) {
              uVar10 = puVar6[1];
              if (uVar10 == uVar3) {
                if (puVar6[2] == uVar4) {
                  uVar5 = 0;
                  goto LAB_10a2a5f7c;
                }
              }
              else {
                if ((uVar13 & uVar8) == 0) {
                  uVar10 = uVar10 & uVar8;
                }
                else if (uVar13 <= uVar10) {
                  uVar1 = 0;
                  if (uVar13 != 0) {
                    uVar1 = uVar10 / uVar13;
                  }
                  uVar10 = uVar10 - uVar1 * uVar13;
                }
                if (uVar10 != unaff_x22) break;
              }
            }
          }
        }
        puStack_40 = param_2;
        puStack_38 = param_1;
        FUN_10a2a5fbc(apuStack_68,puVar2,uVar3);
        if ((uVar13 == 0) || (*(float *)(puVar2 + 4) * (float)uVar13 < (float)(puVar2[3] + 1))) {
          uVar4 = 1;
          if (2 < uVar13) {
            uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
          }
          uVar4 = uVar4 | uVar13 << 1;
          uVar13 = (ulong)((float)(puVar2[3] + 1) / *(float *)(puVar2 + 4));
          if (uVar4 <= uVar13) {
            uVar4 = uVar13;
          }
          FUN_10a2a5b64(puVar2,uVar4);
          uVar13 = puVar2[1];
          if ((uVar13 & uVar13 - 1) == 0) {
            unaff_x22 = uVar13 - 1 & uVar3;
          }
          else {
            unaff_x22 = uVar3;
            if (uVar13 <= uVar3) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar3 / uVar13;
              }
              unaff_x22 = uVar3 - uVar4 * uVar13;
            }
          }
        }
        uVar4 = *puVar2;
        puVar6 = *(ulong **)(uVar4 + unaff_x22 * 8);
        if (puVar6 == (ulong *)0x0) {
          puVar6 = puVar2 + 2;
          *apuStack_68[0] = *puVar6;
          *puVar6 = (ulong)apuStack_68[0];
          *(ulong **)(uVar4 + unaff_x22 * 8) = puVar6;
          if (*apuStack_68[0] != 0) {
            uVar4 = *(ulong *)(*apuStack_68[0] + 8);
            if ((uVar13 & uVar13 - 1) == 0) {
              uVar4 = uVar4 & uVar13 - 1;
            }
            else if (uVar13 <= uVar4) {
              uVar3 = 0;
              if (uVar13 != 0) {
                uVar3 = uVar4 / uVar13;
              }
              uVar4 = uVar4 - uVar3 * uVar13;
            }
            *(ulong **)(*puVar2 + uVar4 * 8) = apuStack_68[0];
          }
        }
        else {
          *apuStack_68[0] = *puVar6;
          *puVar6 = (ulong)apuStack_68[0];
        }
        puVar2[3] = puVar2[3] + 1;
        uVar5 = 1;
        puVar6 = apuStack_68[0];
LAB_10a2a5f7c:
        auVar17._8_8_ = uVar5;
        auVar17._0_8_ = puVar6;
        return auVar17;
      }
      uVar3 = (long)param_2 << 3;
      __Znwm();
      uVar4 = *param_1;
      *param_1 = uVar3;
      if (uVar4 != 0) {
        __ZdlPv();
      }
      puVar6 = (ulong *)0x0;
      param_1[1] = (ulong)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)puVar6 * 8) = 0;
        puVar6 = (ulong *)((long)puVar6 + 1);
      } while (param_2 != puVar6);
      plVar7 = (long *)param_1[2];
      if (plVar7 != (long *)0x0) {
        puVar6 = (ulong *)plVar7[1];
        uVar3 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar3) == 0) {
          puVar6 = (ulong *)((ulong)puVar6 & uVar3);
        }
        else if (param_2 <= puVar6) {
          uVar13 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar13 = (ulong)puVar6 / (ulong)param_2;
          }
          puVar6 = (ulong *)((long)puVar6 - uVar13 * (long)param_2);
        }
        *(ulong **)(*param_1 + (long)puVar6 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar7;
        while (plVar11 != (long *)0x0) {
          puVar14 = (ulong *)plVar11[1];
          if (((ulong)param_2 & uVar3) == 0) {
            puVar14 = (ulong *)((ulong)puVar14 & uVar3);
          }
          else if (param_2 <= puVar14) {
            uVar13 = 0;
            if (param_2 != (ulong *)0x0) {
              uVar13 = (ulong)puVar14 / (ulong)param_2;
            }
            puVar14 = (ulong *)((long)puVar14 - uVar13 * (long)param_2);
          }
          plVar12 = plVar11;
          if (puVar14 != puVar6) {
            uVar13 = *param_1;
            if (*(long *)(uVar13 + (long)puVar14 * 8) == 0) {
              *(long **)(uVar13 + (long)puVar14 * 8) = plVar7;
              puVar6 = puVar14;
            }
            else {
              *plVar7 = *plVar11;
              *plVar11 = **(undefined8 **)(uVar13 + (long)puVar14 * 8);
              **(long **)(uVar13 + (long)puVar14 * 8) = (long)plVar11;
              plVar12 = plVar7;
            }
          }
          plVar7 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    auVar16._8_8_ = puVar2;
    auVar16._0_8_ = uVar4;
    return auVar16;
  }
  if (param_2 < puVar14) {
    puVar2 = (ulong *)(long)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((puVar14 < (ulong *)0x3) || (((ulong)puVar14 & (long)puVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((ulong *)0x1 < puVar2) {
      puVar2 = (ulong *)(1L << (-LZCOUNT((long)puVar2 + -1) & 0x3fU));
    }
    if (param_2 <= puVar2) {
      param_2 = puVar2;
    }
    if (param_2 < puVar14) goto LAB_10a2a5bac;
  }
  auVar15._8_8_ = puVar6;
  auVar15._0_8_ = puVar2;
  return auVar15;
}



/* Entry: 10a2a5c34; end: 10a2a5d6f;  */

undefined1  [16] FUN_10a2a5c34(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong unaff_x22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *aplStack_68 [3];
  
  puVar4 = param_2;
  if (param_2 == (ulong *)0x0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      puVar4 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar7 = *param_2;
      uVar10 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (uVar7 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      uVar16 = param_1[1];
      if (uVar16 != 0) {
        uVar9 = uVar16 - 1;
        if ((uVar16 & uVar9) == 0) {
          unaff_x22 = uVar10 & uVar9;
        }
        else {
          unaff_x22 = uVar10;
          if (uVar16 <= uVar10) {
            uVar12 = 0;
            if (uVar16 != 0) {
              uVar12 = uVar10 / uVar16;
            }
            unaff_x22 = uVar10 - uVar12 * uVar16;
          }
        }
        puVar11 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
        if (puVar11 != (undefined8 *)0x0) {
          for (plVar8 = (long *)*puVar11; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            uVar12 = plVar8[1];
            if (uVar12 == uVar10) {
              if (plVar8[2] == uVar7) {
                uVar5 = 0;
                goto LAB_10a2a5f7c;
              }
            }
            else {
              if ((uVar16 & uVar9) == 0) {
                uVar12 = uVar12 & uVar9;
              }
              else if (uVar16 <= uVar12) {
                uVar1 = 0;
                if (uVar16 != 0) {
                  uVar1 = uVar12 / uVar16;
                }
                uVar12 = uVar12 - uVar1 * uVar16;
              }
              if (uVar12 != unaff_x22) break;
            }
          }
        }
      }
      FUN_10a2a5fbc(aplStack_68,param_1,uVar10);
      if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
        uVar7 = 1;
        if (2 < uVar16) {
          uVar7 = (ulong)((uVar16 & uVar16 - 1) != 0);
        }
        uVar7 = uVar7 | uVar16 << 1;
        uVar16 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar7 <= uVar16) {
          uVar7 = uVar16;
        }
        FUN_10a2a5b64(param_1,uVar7);
        uVar16 = param_1[1];
        if ((uVar16 & uVar16 - 1) == 0) {
          unaff_x22 = uVar16 - 1 & uVar10;
        }
        else {
          unaff_x22 = uVar10;
          if (uVar16 <= uVar10) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar10 / uVar16;
            }
            unaff_x22 = uVar10 - uVar7 * uVar16;
          }
        }
      }
      lVar3 = *param_1;
      plVar8 = *(long **)(lVar3 + unaff_x22 * 8);
      if (plVar8 == (long *)0x0) {
        plVar8 = param_1 + 2;
        *aplStack_68[0] = *plVar8;
        *plVar8 = (long)aplStack_68[0];
        *(long **)(lVar3 + unaff_x22 * 8) = plVar8;
        if (*aplStack_68[0] != 0) {
          uVar7 = *(ulong *)(*aplStack_68[0] + 8);
          if ((uVar16 & uVar16 - 1) == 0) {
            uVar7 = uVar7 & uVar16 - 1;
          }
          else if (uVar16 <= uVar7) {
            uVar10 = 0;
            if (uVar16 != 0) {
              uVar10 = uVar7 / uVar16;
            }
            uVar7 = uVar7 - uVar10 * uVar16;
          }
          *(long **)(*param_1 + uVar7 * 8) = aplStack_68[0];
        }
      }
      else {
        *aplStack_68[0] = *plVar8;
        *plVar8 = (long)aplStack_68[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar5 = 1;
      plVar8 = aplStack_68[0];
LAB_10a2a5f7c:
      auVar18._8_8_ = uVar5;
      auVar18._0_8_ = plVar8;
      return auVar18;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    puVar6 = (ulong *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar6 * 8) = 0;
      puVar6 = (ulong *)((long)puVar6 + 1);
    } while (param_2 != puVar6);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      puVar6 = (ulong *)plVar8[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        puVar6 = (ulong *)((ulong)puVar6 & uVar7);
      }
      else if (param_2 <= puVar6) {
        uVar10 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar10 = (ulong)puVar6 / (ulong)param_2;
        }
        puVar6 = (ulong *)((long)puVar6 - uVar10 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar6 * 8) = param_1 + 2;
      plVar13 = (long *)*plVar8;
      while (plVar13 != (long *)0x0) {
        puVar15 = (ulong *)plVar13[1];
        if (((ulong)param_2 & uVar7) == 0) {
          puVar15 = (ulong *)((ulong)puVar15 & uVar7);
        }
        else if (param_2 <= puVar15) {
          uVar10 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar10 = (ulong)puVar15 / (ulong)param_2;
          }
          puVar15 = (ulong *)((long)puVar15 - uVar10 * (long)param_2);
        }
        plVar14 = plVar13;
        if (puVar15 != puVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)puVar15 * 8) == 0) {
            *(long **)(lVar2 + (long)puVar15 * 8) = plVar8;
            puVar6 = puVar15;
          }
          else {
            *plVar8 = *plVar13;
            *plVar13 = **(undefined8 **)(lVar2 + (long)puVar15 * 8);
            **(long **)(lVar2 + (long)puVar15 * 8) = (long)plVar13;
            plVar14 = plVar8;
          }
        }
        plVar8 = plVar14;
        plVar13 = (long *)*plVar14;
      }
    }
  }
  auVar17._8_8_ = puVar4;
  auVar17._0_8_ = lVar3;
  return auVar17;
}



/* Entry: 10a2a5d70; end: 10a2a5fbb;  */

undefined1  [16] FUN_10a2a5d70(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x22;
  undefined1 auVar11 [16];
  long *aplStack_48 [3];
  
  uVar4 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar4 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x22 = uVar7 & uVar6;
    }
    else {
      unaff_x22 = uVar7;
      if (uVar10 <= uVar7) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar7 / uVar10;
        }
        unaff_x22 = uVar7 - uVar9 * uVar10;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar8; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar9 = plVar2[1];
        if (uVar9 == uVar7) {
          if (plVar2[2] == uVar4) {
            uVar3 = 0;
            goto LAB_10a2a5f7c;
          }
        }
        else {
          if ((uVar10 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar10 <= uVar9) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar1 * uVar10;
          }
          if (uVar9 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10a2a5fbc(aplStack_48,param_1,uVar7);
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_10a2a5b64(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x22 = uVar10 - 1 & uVar7;
    }
    else {
      unaff_x22 = uVar7;
      if (uVar10 <= uVar7) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar7 / uVar10;
        }
        unaff_x22 = uVar7 - uVar4 * uVar10;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar4 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar4 = uVar4 & uVar10 - 1;
      }
      else if (uVar10 <= uVar4) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar4 / uVar10;
        }
        uVar4 = uVar4 - uVar7 * uVar10;
      }
      *(long **)(*param_1 + uVar4 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10a2a5f7c:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar2;
  return auVar11;
}



/* Entry: 10a2a5fbc; end: 10a2a603f;  */

void FUN_10a2a5fbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a2a6040(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a2a6040; end: 10a2a60d7;  */

undefined8 * FUN_10a2a6040(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puStack_28;
  
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
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
  puStack_28 = param_1 + 2;
  *(undefined1 *)(param_1 + 10) = 3;
  if (*(char *)(param_2 + 10) == '\0') {
    uVar4 = 0;
  }
  else {
    FUN_10a005398(&puStack_28,param_2 + 2);
    uVar4 = *(undefined1 *)(param_2 + 10);
  }
  *(undefined1 *)(param_1 + 10) = uVar4;
  return param_1;
}



/* Entry: 10a2a60d8; end: 10a2a6143;  */

void FUN_10a2a60d8(long param_1,long param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2a6144);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a2a6144; end: 10a2a6253;  */

long * FUN_10a2a6144(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a2a6254; end: 10a2a639b;  */

void FUN_10a2a6254(code **param_1,code **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (ppcVar5 == (code **)0x0) {
    pppuVar6 = (undefined ***)0x0;
    ppcVar9 = (code **)0x0;
    if (ppcVar8 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_80 = param_2[1];
      pcStack_88 = *param_2;
      ppcVar5 = &pcStack_78;
      pcStack_78 = FUN_10a2a6578;
      ppuStack_70 = &PTR_DAT_110bbaae8;
      uStack_98 = 0;
      uStack_90 = 0;
      ppcVar9 = &pcStack_78;
      pcStack_58 = pcStack_88;
      pcStack_50 = pcStack_80;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      pppuVar6 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
    }
  }
  else {
    *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    FUN_10a2a639c(pppuVar6,param_2);
    iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
    *(int *)((long)ppcVar5 + 4) = iVar4;
    ppcVar9 = param_2;
    if (iVar4 == 0) {
      *(undefined4 *)ppcVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(ppcVar5 + 1);
  func_0x00010a004dac(&uStack_98);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a2a639c;
  ppcStack_c0 = ppcVar5;
  pppuStack_b8 = pppuVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar7);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_d0);
  FUN_10a2a6488(*pppuVar7,&puStack_d0,&puStack_c8,ppcVar9);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a2a639c; end: 10a2a6487;  */

void FUN_10a2a639c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a2a6488(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a2a6488; end: 10a2a6577;  */

void FUN_10a2a6488(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  (**(code **)(*param_1 + 0x128))(&puStack_68,param_1,*param_4,param_4[1]);
  aiStack_70[0] = 6;
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a2a6578; end: 10a2a65b3;  */

void FUN_10a2a6578(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a2a6488(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a2a65b4; end: 10a2a663b;  */

void FUN_10a2a65b4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 < *(undefined8 **)(param_1 + 0x50)) {
    *puVar1 = *param_2;
    (**(code **)(param_2[1] + 0x18))(puVar1 + 1);
    puVar1 = puVar1 + 8;
    *(undefined8 **)(param_1 + 0x48) = puVar1;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    FUN_10a2a663c();
  }
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  return;
}



/* Entry: 10a2a663c; end: 10a2a6743;  */

long * FUN_10a2a663c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 6) + 1;
  if (uVar1 >> 0x3a != 0) {
    FUN_10a2a6828();
    func_0x00010a2a6870(&plStack_58);
    __Unwind_Resume();
    plVar10 = (long *)*param_1;
    plVar4 = (long *)param_1[1];
    plVar3 = (long *)((long)plVar10 + (param_2[1] - (long)plVar4));
    plVar5 = param_1;
    plVar8 = plVar10;
    plVar11 = plVar3;
    if (plVar4 != plVar10) {
      do {
        *plVar11 = *plVar8;
        (**(code **)(plVar8[1] + 0x10))(plVar11 + 1,plVar8 + 1);
        plVar8 = plVar8 + 8;
        plVar11 = plVar11 + 8;
      } while (plVar8 != plVar4);
      plVar10 = plVar10 + 1;
      do {
        plVar8 = plVar10 + 7;
        plVar5 = plVar10;
        (**(code **)*plVar10)(plVar10);
        plVar10 = plVar10 + 8;
      } while (plVar8 != plVar4);
      plVar10 = (long *)*param_1;
    }
    param_2[1] = plVar3;
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar10;
    param_2[1] = plVar10;
    lVar9 = param_1[1];
    param_1[1] = param_2[2];
    param_2[2] = lVar9;
    lVar9 = param_1[2];
    param_1[2] = param_2[3];
    param_2[3] = lVar9;
    *param_2 = param_2[1];
    return plVar5;
  }
  uVar6 = param_1[2] - *param_1;
  uVar7 = (long)uVar6 >> 5;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffffffffffbf < uVar6) {
    uVar7 = 0x3ffffffffffffff;
  }
  plStack_38 = param_1;
  if (uVar7 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = param_1;
    FUN_10a2a683c();
  }
  puVar2 = (undefined8 *)((long)plVar8 + lVar9);
  plStack_40 = plVar8 + uVar7 * 8;
  *puVar2 = *param_2;
  plStack_58 = plVar8;
  puStack_50 = puVar2;
  puStack_48 = puVar2;
  (**(code **)(param_2[1] + 0x18))(puVar2 + 1,param_2 + 1);
  puStack_48 = puVar2 + 8;
  FUN_10a2a6744(param_1,&plStack_58);
  plVar8 = (long *)param_1[1];
  func_0x00010a2a6870(&plStack_58);
  return plVar8;
}



/* Entry: 10a2a6744; end: 10a2a6827;  */

void FUN_10a2a6744(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
  puVar4 = puVar5;
  puVar6 = puVar1;
  if (puVar2 != puVar5) {
    do {
      *puVar6 = *puVar4;
      (**(code **)(puVar4[1] + 0x10))(puVar6 + 1,puVar4 + 1);
      puVar4 = puVar4 + 8;
      puVar6 = puVar6 + 8;
    } while (puVar4 != puVar2);
    puVar5 = puVar5 + 1;
    do {
      puVar4 = puVar5 + 7;
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar5 + 8;
    } while (puVar4 != puVar2);
    puVar5 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar5;
  param_2[1] = puVar5;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a2a6828; end: 10a2a683b;  */

undefined1  [16] FUN_10a2a6828(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3a == 0) {
    lVar2 = param_2 << 6;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar1[2] = lVar3 + -0x40;
    (*(code *)*puVar4)();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 10a2a683c; end: 10a2a68c3;  */

undefined1  [16] FUN_10a2a683c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3a == 0) {
    lVar1 = param_2 << 6;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = lVar2 + -0x40;
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a2a68c4; end: 10a2a6c7b;  */

void FUN_10a2a68c4(long *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long **pplVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long **pplStack_a8;
  long *aplStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = *(undefined8 **)(param_2 + 0x10);
  plVar13 = (long *)*param_1;
  lStack_f8 = param_1[2];
  plVar12 = (long *)param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar14 = (long *)*puVar11;
  bVar2 = *(byte *)((long)puVar11 + 0x1f);
  plStack_108 = plVar13;
  plStack_100 = plVar12;
  if (plVar13 != plVar12) {
    plVar8 = (long *)puVar11[2];
    if (-1 < (char)bVar2) {
      plVar8 = (long *)(ulong)bVar2;
    }
LAB_10a2a6938:
    pplVar15 = (long **)*plVar13;
    bVar3 = *(byte *)((long)pplVar15 + 0x2f);
    plVar1 = pplVar15[4];
    if (-1 < (char)bVar3) {
      plVar1 = (long *)(ulong)bVar3;
    }
    if (plVar1 != plVar8) goto LAB_10a2a6984;
    pplVar7 = (long **)pplVar15[3];
    if (-1 < (char)bVar3) {
      pplVar7 = pplVar15 + 3;
    }
    plVar1 = (long *)puVar11[1];
    if (-1 < (char)bVar2) {
      plVar1 = puVar11 + 1;
    }
    _memcmp(pplVar7,plVar1,plVar8);
    if ((int)pplVar7 != 0) goto LAB_10a2a6984;
    aplStack_a0[0] = (long *)plVar13[1];
    if (aplStack_a0[0] != (long *)0x0) {
      plVar13 = aplStack_a0[0] + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pplStack_a8 = pplVar15;
    if (puVar11[4] != 0) {
      FUN_10a29cb90(puVar11[4],&pplStack_a8);
    }
    plVar13 = aplStack_a0[0];
    if (aplStack_a0[0] != (long *)0x0) {
      plVar14 = aplStack_a0[0] + 1;
      do {
        lVar10 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*aplStack_a0[0] + 0x10))(aplStack_a0[0]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    goto LAB_10a2a6bc0;
  }
LAB_10a2a6990:
  if ((char)bVar2 < '\0') {
    func_0x000107c3192c(&uStack_f0,puVar11[1],puVar11[2]);
  }
  else {
    uStack_e8 = puVar11[2];
    uStack_f0 = puVar11[1];
    lStack_e0 = puVar11[3];
  }
  plStack_d0 = (long *)puVar11[5];
  uStack_d8 = puVar11[4];
  if (puVar11[5] != 0) {
    plVar13 = (long *)(puVar11[5] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_c0 = (long *)puVar11[7];
  uStack_c8 = puVar11[6];
  if (puVar11[7] != 0) {
    plVar13 = (long *)(puVar11[7] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13 = plVar14 + 9;
  FUN_10a1cda24(plVar13,&PTR_DAT_110bb63a0);
  if (plVar13 != (long *)0x0) {
    pplStack_a8 = (long **)&DAT_10f648b9d;
    aplStack_a0[0] = (long *)0xb;
    FUN_10a2677b4(plVar14[0x11],&pplStack_a8);
    plVar12 = (long *)plVar13[4];
    if ((plVar12 == (long *)0x0) ||
       (plVar8 = plVar12, ___dynamic_cast(plVar12,&PTR_DAT_110bbadc8,&PTR_DAT_110bbade0,0),
       plVar8 == (long *)0x0)) {
      puVar9 = &UNK_10f64983a;
      goto LAB_10a2a6c20;
    }
    pplStack_a8 = (long **)FUN_10a2a6fcc;
    FUN_10a2a721c(aplStack_a0,&uStack_f0);
    FUN_10a2a6cbc(plVar8,&pplStack_a8);
    (*(code *)*aplStack_a0[0])(aplStack_a0);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    plVar13 = (long *)plVar13[4];
    (**(code **)(*plVar13 + 0x18))();
    if ((int)plVar13 != 0) {
      (**(code **)(*(long *)((long)plVar14 + *(long *)(*plVar14 + -0x18)) + 0x28))
                ((long)plVar14 + *(long *)(*plVar14 + -0x18));
    }
    plVar13 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plVar14 = plStack_c0 + 1;
      do {
        lVar10 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_d0;
    if (plStack_d0 != (long *)0x0) {
      plVar14 = plStack_d0 + 1;
      do {
        lVar10 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (lStack_e0 < 0) {
      __ZdlPv(uStack_f0);
    }
LAB_10a2a6bc0:
    pplStack_a8 = &plStack_108;
    FUN_10a26a1e8(&pplStack_a8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar9 = &UNK_10f64981f;
LAB_10a2a6c20:
  FUN_10a00946c(puVar9);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2a6c28);
  (*pcVar6)();
LAB_10a2a6984:
  plVar13 = plVar13 + 2;
  if (plVar13 == plVar12) goto LAB_10a2a6990;
  goto LAB_10a2a6938;
}



/* Entry: 10a2a6c7c; end: 10a2a6cbb;  */

undefined8 * FUN_10a2a6c7c(undefined8 *param_1)

{
  func_0x00010a07a8a8(param_1 + 5);
  FUN_10a26f238(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a2a6cbc; end: 10a2a6d43;  */

void FUN_10a2a6cbc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 < *(undefined8 **)(param_1 + 0x50)) {
    *puVar1 = *param_2;
    (**(code **)(param_2[1] + 0x18))(puVar1 + 1);
    puVar1 = puVar1 + 8;
    *(undefined8 **)(param_1 + 0x48) = puVar1;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    FUN_10a2a6d44();
  }
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  return;
}



/* Entry: 10a2a6d44; end: 10a2a6e4b;  */

long * FUN_10a2a6d44(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 6) + 1;
  if (uVar1 >> 0x3a != 0) {
    FUN_10a2a6f30();
    func_0x00010a2a6f78(&plStack_58);
    __Unwind_Resume();
    plVar10 = (long *)*param_1;
    plVar4 = (long *)param_1[1];
    plVar3 = (long *)((long)plVar10 + (param_2[1] - (long)plVar4));
    plVar5 = param_1;
    plVar8 = plVar10;
    plVar11 = plVar3;
    if (plVar4 != plVar10) {
      do {
        *plVar11 = *plVar8;
        (**(code **)(plVar8[1] + 0x10))(plVar11 + 1,plVar8 + 1);
        plVar8 = plVar8 + 8;
        plVar11 = plVar11 + 8;
      } while (plVar8 != plVar4);
      plVar10 = plVar10 + 1;
      do {
        plVar8 = plVar10 + 7;
        plVar5 = plVar10;
        (**(code **)*plVar10)(plVar10);
        plVar10 = plVar10 + 8;
      } while (plVar8 != plVar4);
      plVar10 = (long *)*param_1;
    }
    param_2[1] = plVar3;
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar10;
    param_2[1] = plVar10;
    lVar9 = param_1[1];
    param_1[1] = param_2[2];
    param_2[2] = lVar9;
    lVar9 = param_1[2];
    param_1[2] = param_2[3];
    param_2[3] = lVar9;
    *param_2 = param_2[1];
    return plVar5;
  }
  uVar6 = param_1[2] - *param_1;
  uVar7 = (long)uVar6 >> 5;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffffffffffbf < uVar6) {
    uVar7 = 0x3ffffffffffffff;
  }
  plStack_38 = param_1;
  if (uVar7 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = param_1;
    FUN_10a2a6f44();
  }
  puVar2 = (undefined8 *)((long)plVar8 + lVar9);
  plStack_40 = plVar8 + uVar7 * 8;
  *puVar2 = *param_2;
  plStack_58 = plVar8;
  puStack_50 = puVar2;
  puStack_48 = puVar2;
  (**(code **)(param_2[1] + 0x18))(puVar2 + 1,param_2 + 1);
  puStack_48 = puVar2 + 8;
  FUN_10a2a6e4c(param_1,&plStack_58);
  plVar8 = (long *)param_1[1];
  func_0x00010a2a6f78(&plStack_58);
  return plVar8;
}



/* Entry: 10a2a6e4c; end: 10a2a6f2f;  */

void FUN_10a2a6e4c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
  puVar4 = puVar5;
  puVar6 = puVar1;
  if (puVar2 != puVar5) {
    do {
      *puVar6 = *puVar4;
      (**(code **)(puVar4[1] + 0x10))(puVar6 + 1,puVar4 + 1);
      puVar4 = puVar4 + 8;
      puVar6 = puVar6 + 8;
    } while (puVar4 != puVar2);
    puVar5 = puVar5 + 1;
    do {
      puVar4 = puVar5 + 7;
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar5 + 8;
    } while (puVar4 != puVar2);
    puVar5 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar5;
  param_2[1] = puVar5;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a2a6f30; end: 10a2a6f43;  */

undefined1  [16] FUN_10a2a6f30(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3a == 0) {
    lVar2 = param_2 << 6;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar1[2] = lVar3 + -0x40;
    (*(code *)*puVar4)();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 10a2a6f44; end: 10a2a6fcb;  */

undefined1  [16] FUN_10a2a6f44(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3a == 0) {
    lVar1 = param_2 << 6;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = lVar2 + -0x40;
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a2a6fcc; end: 10a2a721b;  */

void FUN_10a2a6fcc(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  long lStack_40;
  long *plStack_38;
  
  puVar12 = *(undefined8 **)(param_2 + 0x10);
  lVar9 = *param_1;
  plVar11 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((lVar9 == 0) || (___dynamic_cast(lVar9,&PTR_DAT_110bbacc0,&PTR_DAT_110bbab68,0), lVar9 == 0))
  {
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
  }
  else {
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = *plVar10 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    bVar5 = *(byte *)(lVar9 + 0x2f);
    uVar2 = *(ulong *)(lVar9 + 0x20);
    if (-1 < (char)bVar5) {
      uVar2 = (ulong)bVar5;
    }
    bVar6 = *(byte *)((long)puVar12 + 0x17);
    uVar3 = puVar12[1];
    if (-1 < (char)bVar6) {
      uVar3 = (ulong)bVar6;
    }
    lStack_40 = lVar9;
    plStack_38 = plVar11;
    if (uVar2 == uVar3) {
      plVar10 = (long *)*(long *)(lVar9 + 0x18);
      if (-1 < (char)bVar5) {
        plVar10 = (long *)(lVar9 + 0x18);
      }
      puVar4 = (undefined8 *)*puVar12;
      if (-1 < (char)bVar6) {
        puVar4 = puVar12;
      }
      _memcmp(plVar10,puVar4);
      if ((int)plVar10 == 0) {
        if (plVar11 != (long *)0x0) {
          plVar10 = plVar11 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar8) {
              *plVar10 = *plVar10 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lStack_58 = lVar9;
        plStack_50 = plVar11;
        if (puVar12[3] != 0) {
          FUN_10a29cb90(puVar12[3],&lStack_58);
        }
        plVar10 = plStack_50;
        if (plStack_50 != (long *)0x0) {
          plVar1 = plStack_50 + 1;
          do {
            lVar9 = *plVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = lVar9 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_50 + 0x10))(plStack_50);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        goto LAB_10a2a7154;
      }
    }
  }
  func_0x000107c2b054(&lStack_58,&UNK_10f64986b);
  puVar12 = (undefined8 *)puVar12[5];
  if (puVar12 != (undefined8 *)0x0) {
    if (*(char *)(puVar12 + 8) == '\x01') {
      (*(code *)*puVar12)(&lStack_58,puVar12);
    }
    else if (*(char *)(puVar12 + 8) == '\x02') {
      FUN_10a05aad0(puVar12,&lStack_58);
    }
  }
  if (cStack_41 < '\0') {
    __ZdlPv(lStack_58);
  }
LAB_10a2a7154:
  plVar10 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar9 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      lVar9 = *plVar10;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = lVar9 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return;
}



/* Entry: 10a2a721c; end: 10a2a72e7;  */

undefined8 * FUN_10a2a721c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110bb9a50;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar4,*param_2,param_2[1]);
  }
  else {
    uVar6 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar6;
    puVar4[2] = param_2[2];
  }
  lVar5 = param_2[4];
  uVar6 = param_2[3];
  puVar4[4] = param_2[4];
  puVar4[3] = uVar6;
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
  lVar5 = param_2[6];
  uVar6 = param_2[5];
  puVar4[6] = param_2[6];
  puVar4[5] = uVar6;
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
  param_1[1] = puVar4;
  return param_1;
}



/* Entry: 10a2a72e8; end: 10a2a7337;  */

void FUN_10a2a72e8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010a07a8a8(puVar1 + 5);
    FUN_10a26f238(puVar1 + 3);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a2a7338; end: 10a2a7357;  */

void FUN_10a2a7338(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2a7358; end: 10a2a7427;  */

undefined8 * FUN_10a2a7358(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110bb9a70;
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar4 + 1,param_2[1],param_2[2]);
  }
  else {
    uVar6 = param_2[1];
    puVar4[2] = param_2[2];
    puVar4[1] = uVar6;
    puVar4[3] = param_2[3];
  }
  lVar5 = param_2[5];
  uVar6 = param_2[4];
  puVar4[5] = param_2[5];
  puVar4[4] = uVar6;
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
  lVar5 = param_2[7];
  uVar6 = param_2[6];
  puVar4[7] = param_2[7];
  puVar4[6] = uVar6;
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
  param_1[1] = puVar4;
  return param_1;
}



/* Entry: 10a2a7428; end: 10a2a7477;  */

void FUN_10a2a7428(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010a07a8a8(lVar1 + 0x30);
    FUN_10a26f238(lVar1 + 0x20);
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



/* Entry: 10a2a7478; end: 10a2a7497;  */

void FUN_10a2a7478(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2a7498; end: 10a2a7593;  */

undefined1  [16] FUN_10a2a7498(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb9be0;
  puVar1 = &UNK_10f64697a;
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
    ppuStack_40 = &PTR_DAT_110bb9be0;
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



/* Entry: 10a2a7594; end: 10a2a75f7;  */

ulong FUN_10a2a7594(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2a75f8);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a2a75f8,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a2a75f8; end: 10a2a7767;  */

void FUN_10a2a75f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
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
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar5);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      FUN_10a267ac8(&stack0xffffffffffffffa0,plVar6);
      puVar1 = in_stack_ffffffffffffffa0;
      if (-1 < (long)in_stack_ffffffffffffffb0) {
        in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
        puVar1 = &stack0xffffffffffffffa0;
      }
      (**(code **)(*param_2 + 0x128))
                (&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8);
      *param_1 = 6;
      *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
      if ((long)in_stack_ffffffffffffffb0 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa0);
      }
      plVar5 = plVar4 + 0x4b;
      lVar8 = plVar4[0x59];
      uVar9 = lVar8 - 1;
      plVar4[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar5[lVar8 + 2];
        if (plVar4[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar9) {
          return;
        }
      }
      lVar8 = *plVar5;
      lVar13 = plVar4[0x4c];
      lVar11 = lVar13 - lVar8;
      uVar15 = lVar11 >> 4;
      if (uVar15 < uVar9) {
        uVar16 = uVar9 - uVar15;
        lVar14 = plVar4[0x4d];
        if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar14 - lVar8 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar5;
            if (uVar10 >> 0x3c == 0) {
              lVar3 = uVar10 << 4;
              __Znwm();
              lVar13 = lVar3 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar8,lVar11);
              *plVar5 = lVar12;
              plVar4[0x4c] = lVar13 + uVar16 * 0x10;
              plVar4[0x4d] = lVar3 + uVar10 * 0x10;
              lStack_88 = lVar8;
              lStack_80 = lVar8;
              lStack_78 = lVar8;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar13,uVar16 * 0x10);
        plVar4[0x4c] = lVar13 + uVar16 * 0x10;
      }
      else if (uVar9 < uVar15) {
        lVar8 = lVar8 + uVar9 * 0x10;
        while (lVar13 != lVar8) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar4[0x4c] = lVar8;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar9;
      return;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2a773c);
  (*pcVar2)();
}



/* Entry: 10a2a7768; end: 10a2a77cb;  */

ulong FUN_10a2a7768(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2a77cc);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a2a77cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a2a77cc; end: 10a2a78e3;  */

void FUN_10a2a77cc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      FUN_10a065020(param_5);
      func_0x00010989847c(param_2,param_4);
      *(char *)(*(long *)(*(long *)(plVar5[3] + 0x100) + 0x1d8) + 0x28) = (char)param_2;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2a78d0);
  (*pcVar1)();
}



/* Entry: 10a2a78e4; end: 10a2a799f;  */

void FUN_10a2a78e4(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f648bbd,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2a79a0);
  (*pcVar4)();
}



/* Entry: 10a2a79a0; end: 10a2a7a57;  */

void FUN_10a2a79a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10a2a7a58(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[3];
  *param_1 = 3;
  *(long *)(param_1 + 2) = lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a2a7a58; end: 10a2a7a9b;  */

undefined8 * FUN_10a2a7a58(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bbab10) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a2a7a9c; end: 10a2a7ab3;  */

undefined8 FUN_10a2a7a9c(void)

{
  return 0;
}



/* Entry: 10a2a7ab4; end: 10a2a7ae3;  */

void FUN_10a2a7ab4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10a267e58(param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a2a7ae4; end: 10a2a7b9b;  */

void FUN_10a2a7ae4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10a2a7a58(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[4];
  *param_1 = 3;
  *(long *)(param_1 + 2) = lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a2a7b9c; end: 10a2a7c7b;  */

void FUN_10a2a7b9c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
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
  FUN_10a2a7a58(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[6];
  plVar1 = (long *)plVar5[5];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x3f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x3f);
    plVar1 = plVar5 + 5;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
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



/* Entry: 10a2a7c7c; end: 10a2a7d6f;  */

void FUN_10a2a7c7c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
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
  FUN_10a2a7a58(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar5[0xb] == '\x01') {
    uVar8 = plVar5[9];
    plVar1 = (long *)plVar5[8];
    if (-1 < (char)*(byte *)((long)plVar5 + 0x57)) {
      uVar8 = (ulong)*(byte *)((long)plVar5 + 0x57);
      plVar1 = plVar5 + 8;
    }
    (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar8);
    uVar6 = 6;
  }
  else {
    uVar6 = 1;
  }
  *param_1 = uVar6;
  plVar5 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
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
  lVar7 = *plVar5;
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
        plStack_68 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar3 + uVar9 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
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



/* Entry: 10a2a7d70; end: 10a2a7e27;  */

void FUN_10a2a7d70(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a7a58(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a074bf0(param_1,param_2,plVar4 + 0xc);
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



/* Entry: 10a2a7e28; end: 10a2a845f;  */

/* WARNING: Removing unreachable block (ram,0x00010a2a8270) */
/* WARNING: Removing unreachable block (ram,0x00010a2a8240) */
/* WARNING: Removing unreachable block (ram,0x00010a2a8260) */
/* WARNING: Removing unreachable block (ram,0x00010a2a8290) */

void FUN_10a2a7e28(undefined8 *param_1,long param_2)

{
  undefined8 *****pppppuVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *****pppppuVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 **ppuVar11;
  undefined8 *****pppppuVar12;
  ulong uVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined1 *puStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  undefined8 ****ppppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  undefined8 ****ppppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_178,&UNK_10f6498b6,param_2);
  puVar6 = auStack_178;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&UNK_10f6498be,10);
  uStack_158 = puVar6[1];
  uStack_160 = *puVar6;
  lStack_150 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  uVar9 = *(ulong *)(param_2 + 0x20);
  plVar3 = (long *)*(long *)(param_2 + 0x18);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar9 = (ulong)*(byte *)(param_2 + 0x2f);
    plVar3 = (long *)(param_2 + 0x18);
  }
  puVar6 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar6,plVar3,uVar9);
  uStack_138 = puVar6[1];
  uStack_140 = *puVar6;
  lStack_130 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&UNK_10f6498c9,8);
  uStack_118 = puVar6[1];
  uStack_120 = *puVar6;
  lStack_110 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  __ZNSt3__19to_stringEf(&ppppuStack_190,*(undefined4 *)(param_2 + 0x30));
  bVar14 = bStack_179;
  uVar13 = uStack_188;
  pppppuVar12 = (undefined8 *****)ppppuStack_190;
  uVar10 = (ulong)bStack_179;
  uVar9 = uStack_188;
  if (-1 < (char)bStack_179) {
    uVar9 = uVar10;
  }
  if (uVar9 != 0) {
    pppppuVar1 = (undefined8 *****)ppppuStack_190;
    if (-1 < (char)bStack_179) {
      pppppuVar1 = &ppppuStack_190;
    }
    pppppuVar7 = pppppuVar1;
    _memchr(pppppuVar1,0x2e,uVar9);
    if ((pppppuVar7 != (undefined8 *****)0x0) &&
       ((long)pppppuVar7 - (long)pppppuVar1 != 0xffffffffffffffff)) {
      do {
        if (uVar9 == 0) {
          uVar9 = 0xffffffffffffffff;
          break;
        }
        lVar4 = uVar9 - 1;
        uVar9 = uVar9 - 1;
      } while (*(char *)((long)pppppuVar1 + lVar4) == '0');
      uVar9 = (uVar9 - (uVar9 == (long)pppppuVar7 - (long)pppppuVar1)) + 1;
      if ((char)bVar14 < '\0') {
        uVar10 = uVar9;
        if (uVar13 < uVar9) goto LAB_10a2a8318;
      }
      else {
        if (uVar10 < uVar9) {
LAB_10a2a8318:
          FUN_109ffddc8();
          goto LAB_10a2a832c;
        }
        bStack_179 = (byte)uVar9;
        pppppuVar12 = &ppppuStack_190;
        uVar10 = uStack_188;
      }
      uStack_188 = uVar10;
      *(undefined1 *)((long)pppppuVar12 + uVar9) = 0;
      uVar10 = (ulong)bStack_179;
      pppppuVar12 = (undefined8 *****)ppppuStack_190;
      uVar13 = uStack_188;
      bVar14 = bStack_179;
    }
  }
  if (-1 < (char)bVar14) {
    uVar13 = uVar10;
    pppppuVar12 = &ppppuStack_190;
  }
  puVar6 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,pppppuVar12,uVar13);
  uStack_f8 = puVar6[1];
  uStack_100 = *puVar6;
  lStack_f0 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&UNK_10f6498d2,0xb);
  uStack_d8 = puVar6[1];
  uStack_e0 = *puVar6;
  uStack_d0 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  __ZNSt3__19to_stringEf(&ppppuStack_1a8,*(undefined4 *)(param_2 + 0x34));
  bVar14 = bStack_191;
  uVar13 = uStack_1a0;
  pppppuVar12 = (undefined8 *****)ppppuStack_1a8;
  uVar10 = (ulong)bStack_191;
  uVar9 = uStack_1a0;
  if (-1 < (char)bStack_191) {
    uVar9 = uVar10;
  }
  if (uVar9 != 0) {
    pppppuVar1 = (undefined8 *****)ppppuStack_1a8;
    if (-1 < (char)bStack_191) {
      pppppuVar1 = &ppppuStack_1a8;
    }
    pppppuVar7 = pppppuVar1;
    _memchr(pppppuVar1,0x2e,uVar9);
    if ((pppppuVar7 != (undefined8 *****)0x0) &&
       ((long)pppppuVar7 - (long)pppppuVar1 != 0xffffffffffffffff)) {
      do {
        if (uVar9 == 0) {
          uVar9 = 0xffffffffffffffff;
          break;
        }
        lVar4 = uVar9 - 1;
        uVar9 = uVar9 - 1;
      } while (*(char *)((long)pppppuVar1 + lVar4) == '0');
      uVar9 = (uVar9 - (uVar9 == (long)pppppuVar7 - (long)pppppuVar1)) + 1;
      if ((char)bVar14 < '\0') {
        uVar10 = uVar9;
        if (uVar13 < uVar9) goto LAB_10a2a8320;
      }
      else {
        if (uVar10 < uVar9) {
LAB_10a2a8320:
          FUN_109ffddc8();
          goto LAB_10a2a832c;
        }
        bStack_191 = (byte)uVar9;
        pppppuVar12 = &ppppuStack_1a8;
        uVar10 = uStack_1a0;
      }
      uStack_1a0 = uVar10;
      *(undefined1 *)((long)pppppuVar12 + uVar9) = 0;
      uVar10 = (ulong)bStack_191;
      pppppuVar12 = (undefined8 *****)ppppuStack_1a8;
      uVar13 = uStack_1a0;
      bVar14 = bStack_191;
    }
  }
  if (-1 < (char)bVar14) {
    uVar13 = uVar10;
    pppppuVar12 = &ppppuStack_1a8;
  }
  puVar6 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,pppppuVar12,uVar13);
  uStack_b8 = puVar6[1];
  uStack_c0 = *puVar6;
  uStack_b0 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&UNK_10f573bbb,7);
  uStack_98 = puVar6[1];
  uStack_a0 = *puVar6;
  uStack_90 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  __ZNSt3__19to_stringEf(&puStack_1c0,*(undefined4 *)(param_2 + 0x38));
  bVar14 = bStack_1a9;
  uVar13 = uStack_1b8;
  ppuVar11 = (undefined1 **)puStack_1c0;
  uVar10 = (ulong)bStack_1a9;
  uVar9 = uStack_1b8;
  if (-1 < (char)bStack_1a9) {
    uVar9 = uVar10;
  }
  if (uVar9 == 0) goto LAB_10a2a81d8;
  ppuVar2 = (undefined1 **)puStack_1c0;
  if (-1 < (char)bStack_1a9) {
    ppuVar2 = &puStack_1c0;
  }
  puVar8 = (undefined1 *)ppuVar2;
  _memchr(ppuVar2,0x2e,uVar9);
  if ((puVar8 == (undefined1 *)0x0) || ((long)puVar8 - (long)ppuVar2 == 0xffffffffffffffff))
  goto LAB_10a2a81d8;
  do {
    if (uVar9 == 0) {
      uVar9 = 0xffffffffffffffff;
      break;
    }
    lVar4 = uVar9 - 1;
    uVar9 = uVar9 - 1;
  } while (*(char *)((long)ppuVar2 + lVar4) == '0');
  uVar9 = (uVar9 - (uVar9 == (long)puVar8 - (long)ppuVar2)) + 1;
  if ((char)bVar14 < '\0') {
    uStack_1b8 = uVar9;
    if (uVar13 < uVar9) goto LAB_10a2a8328;
  }
  else {
    if (uVar10 < uVar9) {
LAB_10a2a8328:
      FUN_109ffddc8();
LAB_10a2a832c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2a8330);
      (*pcVar5)();
    }
    bStack_1a9 = (byte)uVar9;
    ppuVar11 = &puStack_1c0;
  }
  *(undefined1 *)((long)ppuVar11 + uVar9) = 0;
  uVar10 = (ulong)bStack_1a9;
  ppuVar11 = (undefined1 **)puStack_1c0;
  uVar13 = uStack_1b8;
  bVar14 = bStack_1a9;
LAB_10a2a81d8:
  if (-1 < (char)bVar14) {
    uVar13 = uVar10;
    ppuVar11 = &puStack_1c0;
  }
  puVar6 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,ppuVar11,uVar13);
  uStack_78 = puVar6[1];
  uStack_80 = *puVar6;
  uStack_70 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&DAT_10f2da10d,1);
  uVar15 = *puVar6;
  param_1[1] = puVar6[1];
  *param_1 = uVar15;
  param_1[2] = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((char)bStack_1a9 < '\0') {
    __ZdlPv(puStack_1c0);
  }
  if ((char)bStack_191 < '\0') {
    __ZdlPv(ppppuStack_1a8);
  }
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  if ((char)bStack_179 < '\0') {
    __ZdlPv(ppppuStack_190);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  return;
}



/* Entry: 10a2a8460; end: 10a2a850f;  */

void FUN_10a2a8460(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a8510(param_1,param_2,FUN_10a2a7e28,0,param_3,param_5);
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



/* Entry: 10a2a8510; end: 10a2a85ef;  */

void FUN_10a2a8510(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  plVar2 = param_2;
  FUN_10a2a85f0(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)((long)plVar2 + ((long)param_4 >> 1)) +
                        ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&puStack_60);
  ppuVar1 = (undefined1 **)puStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuVar1 = &puStack_60;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,ppuVar1,uStack_58);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
  }
  return;
}


