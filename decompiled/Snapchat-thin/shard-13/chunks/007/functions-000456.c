/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aaa3610; end: 10aaa39b3;  */

void FUN_10aaa3610(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aaa39b4(param_5);
  plVar6 = param_2;
  FUN_10aaa39d8(param_2,param_4);
  plVar7 = param_2;
  FUN_10aaa39d8(param_2,param_4 + 0x10);
  plVar8 = param_2;
  FUN_10aaa39d8(param_2,param_4 + 0x20);
  fVar22 = *(float *)(plVar8 + 4);
  if (*(float *)(plVar8 + 4) <= *(float *)(plVar7 + 4)) {
    fVar22 = *(float *)(plVar7 + 4);
  }
  if (fVar22 <= *(float *)(plVar6 + 4)) {
    fVar22 = *(float *)(plVar6 + 4);
  }
  plVar9 = (long *)0x88;
  __Znwm();
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110ba1df8;
  plVar17 = plVar9 + 3;
  *plVar17 = (long)&PTR_FUN_110c3e758;
  plVar9[5] = 0;
  plVar9[4] = 0;
  plVar9[7] = 0;
  plVar9[6] = 0;
  plVar9[9] = 0;
  plVar9[8] = 0;
  *(undefined4 *)(plVar9 + 10) = 0;
  *(undefined8 *)((long)plVar9 + 0x54) = 0x3f800000;
  plVar9[0xc] = (long)&PTR_FUN_110c3e7c0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  plVar9[0xf] = 0;
  plVar9[0x10] = 0;
  plVar9[0xe] = (long)&PTR_FUN_110c3e830;
  plStack_b0 = plVar17;
  plStack_a8 = plVar9;
  if (1 < (int)(fVar22 / 0.033333335)) {
    uVar20 = 0;
    do {
      fVar26 = (float)uVar20 * 0.033333335;
      fVar23 = fVar26;
      (**(code **)*plVar6)(plVar6);
      fVar27 = fVar26;
      (**(code **)*plVar7)(plVar7);
      fVar28 = fVar26;
      (**(code **)*plVar8)(plVar8);
      fVar23 = fVar23 * 0.5;
      fVar27 = fVar27 * 0.5;
      fVar28 = fVar28 * 0.5;
      fVar21 = fVar23;
      ___sincosf_stret();
      fVar24 = fVar23;
      ___sincosf_stret();
      fVar25 = fVar24;
      ___sincosf_stret();
      fStack_b8 = fVar21 * fVar27 * fVar28 + fVar25 * fVar23 * fVar24;
      uStack_c8 = (long *)CONCAT44(-(fVar23 * fVar27 * fVar28) + fVar25 * fVar21 * fVar24,fVar26);
      uStack_c0 = (long *)CONCAT44(-(fVar21 * fVar27 * fVar25) + fVar28 * fVar23 * fVar24,
                                   fVar21 * fVar24 * fVar28 + fVar25 * fVar23 * fVar27);
      FUN_10aa80320(plVar17,&uStack_c8);
      uVar20 = uVar20 + 1;
    } while ((int)(fVar22 / 0.033333335) - 1U != uVar20);
  }
  fVar23 = fVar22;
  (**(code **)*plVar6)(plVar6);
  fVar27 = fVar22;
  (**(code **)*plVar7)(plVar7);
  fVar28 = fVar22;
  (**(code **)*plVar8)(plVar8);
  fVar23 = fVar23 * 0.5;
  fVar27 = fVar27 * 0.5;
  fVar28 = fVar28 * 0.5;
  fVar21 = fVar23;
  ___sincosf_stret();
  fVar24 = fVar23;
  ___sincosf_stret();
  fVar25 = fVar24;
  ___sincosf_stret();
  fStack_b8 = fVar21 * fVar27 * fVar28 + fVar25 * fVar23 * fVar24;
  uStack_c8 = (long *)CONCAT44(-(fVar23 * fVar27 * fVar28) + fVar25 * fVar21 * fVar24,fVar22);
  uStack_c0 = (long *)CONCAT44(-(fVar21 * fVar27 * fVar25) + fVar28 * fVar23 * fVar24,
                               fVar21 * fVar24 * fVar28 + fVar25 * fVar23 * fVar27);
  FUN_10aa80320(plVar17,&uStack_c8);
  uStack_c8 = plVar9 + 0xc;
  uStack_c0 = plVar9;
  func_0x00010aa9dcd4(param_1,param_2,&uStack_c8);
  plVar6 = uStack_c0;
  if (uStack_c0 != (long *)0x0) {
    plVar7 = uStack_c0 + 1;
    do {
      lVar13 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*uStack_c0 + 0x10))(uStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar13 = plVar5[0x59];
  uVar11 = lVar13 - 1;
  plVar5[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar6[lVar13 + 2];
    if (plVar5[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar11) {
      return;
    }
  }
  lVar13 = *plVar6;
  lVar16 = plVar5[0x4c];
  lVar14 = lVar16 - lVar13;
  uVar18 = lVar14 >> 4;
  if (uVar18 < uVar11) {
    uVar19 = uVar11 - uVar18;
    if ((ulong)(plVar5[0x4d] - lVar16 >> 4) < uVar19) {
      if (uVar11 >> 0x3c == 0) {
        uVar10 = plVar5[0x4d] - lVar13;
        uVar12 = (long)uVar10 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar12 = 0xfffffffffffffff;
        }
        if (uVar12 >> 0x3c == 0) {
          lVar4 = uVar12 << 4;
          __Znwm();
          lVar16 = lVar4 + lVar14;
          _bzero(lVar16,uVar19 * 0x10);
          lVar15 = lVar16 + uVar18 * -0x10;
          _memcpy(lVar15,lVar13,lVar14);
          *plVar6 = lVar15;
          plVar5[0x4c] = lVar16 + uVar19 * 0x10;
          plVar5[0x4d] = lVar4 + uVar12 * 0x10;
          func_0x00010988c1b8(&stack0xffffffffffffff78);
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
    _bzero(lVar16,uVar19 * 0x10);
    plVar5[0x4c] = lVar16 + uVar19 * 0x10;
  }
  else if (uVar11 < uVar18) {
    lVar13 = lVar13 + uVar11 * 0x10;
    while (lVar16 != lVar13) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    plVar5[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar11;
  return;
}



/* Entry: 10aaa39b4; end: 10aaa39d7;  */

void FUN_10aaa39b4(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined8 *puVar10;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  long *plVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *plVar12;
  undefined8 unaff_x23;
  long lVar13;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar14;
  undefined8 unaff_x26;
  undefined8 ****ppppuVar15;
  long lVar16;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar5 = (undefined *)0x3;
  FUN_10a052ee0(3,0,param_1);
  puVar4 = &stack0xffffffffffffffd0;
  pcStack_18 = FUN_10aaa39d8;
  ppppuVar15 = &pppuStack_20;
  puVar6 = puVar5;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x000109898688();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = &UNK_10f68f52e;
    pcVar3 = FUN_10aaa3a10;
    func_0x00010988bd28();
  }
  else {
    puVar4 = &stack0xfffffffffffffff0;
    puVar6 = puVar5;
    puVar5 = unaff_x19;
    ppppuVar15 = (undefined8 ****)pppuStack_20;
    pcVar3 = pcStack_18;
  }
  *(undefined8 *****)(puVar4 + -0x10) = ppppuVar15;
  *(code **)(puVar4 + -8) = pcVar3;
  FUN_10a053854();
  if (puVar6 != (undefined *)0x0) {
    param_1 = &PTR_DAT_110c6c4c8;
    param_4 = 0x68;
    ___dynamic_cast();
    if (puVar6 != (undefined *)0x0) {
      return;
    }
  }
  plVar11 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)(puVar4 + -0x60) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x20;
  *(undefined **)(puVar4 + -0x28) = puVar5;
  *(undefined1 **)(puVar4 + -0x20) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x18) = FUN_10aaa3a50;
  plVar7 = plVar11;
  (**(code **)(*plVar11 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10aaa3c4c(param_4);
  plVar12 = plVar11;
  func_0x00010a077264(plVar11,param_1);
  plVar8 = plVar11;
  func_0x00010a077264(plVar11,param_1 + 2);
  FUN_10aa9445c(puVar4 + -0x70,plVar11,param_1 + 4);
  lVar14 = *(long *)(puVar4 + -0x70);
  if (lVar14 != 0) {
    lVar13 = *(long *)(puVar4 + -0x68);
    puVar9 = (undefined8 *)0x78;
    __Znwm();
    *puVar9 = &PTR_DAT_110c40578;
    puVar9[1] = 0;
    puVar10 = puVar9 + 4;
    *puVar10 = &PTR_DAT_110c3e8e8;
    *(undefined1 *)(puVar9 + 5) = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[2] = 0;
    puVar9[3] = &PTR_FUN_110c3e888;
    puVar9[6] = &PTR_FUN_110c3e958;
    lVar16 = *plVar12;
    puVar9[10] = plVar12[1];
    puVar9[9] = lVar16;
    lVar16 = *plVar8;
    puVar9[0xc] = plVar8[1];
    puVar9[0xb] = lVar16;
    puVar9[0xd] = lVar14;
    puVar9[0xe] = lVar13;
    if (lVar13 == 0) {
      *(undefined8 **)(puVar4 + -0x80) = puVar10;
      *(undefined8 **)(puVar4 + -0x78) = puVar9;
    }
    else {
      plVar12 = (long *)(lVar13 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = *plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar12 = *(long **)(puVar4 + -0x68);
      *(undefined8 **)(puVar4 + -0x80) = puVar10;
      *(undefined8 **)(puVar4 + -0x78) = puVar9;
      if (plVar12 != (long *)0x0) {
        plVar8 = plVar12 + 1;
        do {
          lVar14 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
    }
    func_0x00010aa9dcd4(extraout_x8,plVar11,puVar4 + -0x80);
    plVar11 = *(long **)(puVar4 + -0x78);
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        lVar14 = *plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    func_0x00010988c170(plVar7 + 0x4b);
    return;
  }
  FUN_10a00946c(&UNK_10f68cf54);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa3c28);
  (*pcVar3)();
}



/* Entry: 10aaa39d8; end: 10aaa3a0f;  */

void FUN_10aaa39d8(undefined *param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined8 *puVar10;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  long *plVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *plVar12;
  undefined8 unaff_x23;
  long lVar13;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar14;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar15;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar5 = param_1;
  func_0x000109898688();
  puVar6 = param_1;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = &UNK_10f68f52e;
    unaff_x30 = FUN_10aaa3a10;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if (puVar6 != (undefined *)0x0) {
    param_3 = &PTR_DAT_110c6c4c8;
    param_4 = 0x68;
    ___dynamic_cast();
    if (puVar6 != (undefined *)0x0) {
      return;
    }
  }
  plVar11 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10aaa3a50;
  plVar7 = plVar11;
  (**(code **)(*plVar11 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10aaa3c4c(param_4);
  plVar12 = plVar11;
  func_0x00010a077264(plVar11,param_3);
  plVar8 = plVar11;
  func_0x00010a077264(plVar11,param_3 + 2);
  FUN_10aa9445c((undefined1 *)((long)register0x00000008 + -0x70),plVar11,param_3 + 4);
  lVar14 = *(long *)((long)register0x00000008 + -0x70);
  if (lVar14 == 0) {
    FUN_10a00946c(&UNK_10f68cf54);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa3c28);
    (*pcVar4)();
  }
  lVar13 = *(long *)((long)register0x00000008 + -0x68);
  puVar9 = (undefined8 *)0x78;
  __Znwm();
  *puVar9 = &PTR_DAT_110c40578;
  puVar9[1] = 0;
  puVar10 = puVar9 + 4;
  *puVar10 = &PTR_DAT_110c3e8e8;
  *(undefined1 *)(puVar9 + 5) = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[2] = 0;
  puVar9[3] = &PTR_FUN_110c3e888;
  puVar9[6] = &PTR_FUN_110c3e958;
  lVar15 = *plVar12;
  puVar9[10] = plVar12[1];
  puVar9[9] = lVar15;
  lVar15 = *plVar8;
  puVar9[0xc] = plVar8[1];
  puVar9[0xb] = lVar15;
  puVar9[0xd] = lVar14;
  puVar9[0xe] = lVar13;
  if (lVar13 == 0) {
    *(undefined8 **)((long)register0x00000008 + -0x80) = puVar10;
    *(undefined8 **)((long)register0x00000008 + -0x78) = puVar9;
  }
  else {
    plVar12 = (long *)(lVar13 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar12 = *(long **)((long)register0x00000008 + -0x68);
    *(undefined8 **)((long)register0x00000008 + -0x80) = puVar10;
    *(undefined8 **)((long)register0x00000008 + -0x78) = puVar9;
    if (plVar12 != (long *)0x0) {
      plVar8 = plVar12 + 1;
      do {
        lVar14 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  func_0x00010aa9dcd4(extraout_x8,plVar11,(undefined1 *)((long)register0x00000008 + -0x80));
  plVar11 = *(long **)((long)register0x00000008 + -0x78);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      lVar14 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  func_0x00010988c170(plVar7 + 0x4b);
  return;
}



/* Entry: 10aaa3a10; end: 10aaa3a4f;  */

void FUN_10aaa3a10(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long lVar10;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  FUN_10a053854();
  if (param_1 != 0) {
    param_3 = &PTR_DAT_110c6c4c8;
    param_4 = 0x68;
    ___dynamic_cast();
    if (param_1 != 0) {
      return;
    }
  }
  plVar5 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10aaa3c4c(param_4);
  plVar7 = plVar5;
  func_0x00010a077264(plVar5,param_3);
  plVar8 = plVar5;
  func_0x00010a077264(plVar5,param_3 + 2);
  FUN_10aa9445c(&lStack_70,plVar5,param_3 + 4);
  plVar1 = plStack_68;
  if (lStack_70 == 0) {
    FUN_10a00946c(&UNK_10f68cf54);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa3c28);
    (*pcVar4)();
  }
  plVar9 = (long *)0x78;
  __Znwm();
  *plVar9 = (long)&PTR_DAT_110c40578;
  plVar9[1] = 0;
  plStack_80 = plVar9 + 4;
  *plStack_80 = (long)&PTR_DAT_110c3e8e8;
  *(undefined1 *)(plVar9 + 5) = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)&PTR_FUN_110c3e888;
  plVar9[6] = (long)&PTR_FUN_110c3e958;
  lVar10 = *plVar7;
  plVar9[10] = plVar7[1];
  plVar9[9] = lVar10;
  lVar10 = *plVar8;
  plVar9[0xc] = plVar8[1];
  plVar9[0xb] = lVar10;
  plVar9[0xd] = lStack_70;
  plVar9[0xe] = (long)plVar1;
  plStack_78 = plVar9;
  if (plVar1 != (long *)0x0) {
    plVar1 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  func_0x00010aa9dcd4(extraout_x8,plVar5,&plStack_80);
  plVar5 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar6 + 0x4b);
  return;
}



/* Entry: 10aaa3a50; end: 10aaa3c4b;  */

void FUN_10aaa3a50(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aaa3c4c(param_5);
  plVar6 = param_2;
  func_0x00010a077264(param_2,param_4);
  plVar7 = param_2;
  func_0x00010a077264(param_2,param_4 + 0x10);
  FUN_10aa9445c(&lStack_60,param_2,param_4 + 0x20);
  plVar1 = plStack_58;
  if (lStack_60 == 0) {
    FUN_10a00946c(&UNK_10f68cf54);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa3c28);
    (*pcVar4)();
  }
  plVar8 = (long *)0x78;
  __Znwm();
  *plVar8 = (long)&PTR_DAT_110c40578;
  plVar8[1] = 0;
  plStack_70 = plVar8 + 4;
  *plStack_70 = (long)&PTR_DAT_110c3e8e8;
  *(undefined1 *)(plVar8 + 5) = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)&PTR_FUN_110c3e888;
  plVar8[6] = (long)&PTR_FUN_110c3e958;
  lVar9 = *plVar6;
  plVar8[10] = plVar6[1];
  plVar8[9] = lVar9;
  lVar9 = *plVar7;
  plVar8[0xc] = plVar7[1];
  plVar8[0xb] = lVar9;
  plVar8[0xd] = lStack_60;
  plVar8[0xe] = (long)plVar1;
  plStack_68 = plVar8;
  if (plVar1 != (long *)0x0) {
    plVar1 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
  }
  func_0x00010aa9dcd4(param_1,param_2,&plStack_70);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x00010988c170(plVar5 + 0x4b);
  return;
}



/* Entry: 10aaa3c4c; end: 10aaa3c6f;  */

undefined1  [16] FUN_10aaa3c4c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  if ((int)param_1 == 3) {
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  uVar2 = 3;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0();
  *(undefined ***)(uVar2 + 0x1b0) = &PTR_DAT_110c3f228;
  puVar1 = &UNK_10f68c0c1;
  if ((undefined *)*puVar4 != (undefined *)0x0) {
    puVar1 = (undefined *)*puVar4;
  }
  func_0x000107c2c4dc(uVar2 + 0x1b8,puVar1);
  ppuStack_b8 = (undefined **)*puVar4;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = (undefined4)param_1;
  uStack_9c = puVar4[1];
  uStack_94 = *(undefined4 *)(puVar4 + 2);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = puVar4[7];
  uStack_68 = *(undefined4 *)(puVar4 + 8);
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010a052690(uVar2 + 0x168,&ppuStack_b8);
  uVar3 = uVar2;
  FUN_10a0051e8(uVar2,param_1,*(undefined4 *)(puVar4 + 1),*(undefined4 *)(puVar4 + 8),
                *(undefined4 *)((long)puVar4 + 0xc),*(undefined4 *)(puVar4 + 2));
  if ((uVar3 & 1) == 0) {
    ppuStack_50 = &PTR_DAT_110c3f228;
    uStack_48 = 0;
    ppuStack_b8 = &PTR_DAT_110c41a40;
    uStack_b0 = 0;
    uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
    func_0x0001098949cc(uVar2,*puVar4,&ppuStack_50,&ppuStack_b8);
  }
  auVar6._8_8_ = param_1 & 0xffffffff | (ulong)*(uint *)(puVar4 + 1) << 0x20;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 10aaa3c70; end: 10aaa3d6b;  */

undefined1  [16] FUN_10aaa3c70(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f228;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f228;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa3d6c; end: 10aaa3dcf;  */

ulong FUN_10aaa3d6c(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaa3dd0);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10aaa3dd0,3,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10aaa3dd0; end: 10aaa3f4f;  */

void FUN_10aaa3dd0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  code *pcVar4;
  long lVar5;
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
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  FUN_10aaa3f50(param_2,param_3);
  FUN_10a3aaeb0(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa3f24);
    (*pcVar4)();
  }
  fVar3 = (float)*(double *)(param_4 + 0x18);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x18))) {
    fVar3 = 0.0;
  }
  FUN_10aa712a0(&plStack_68,fVar3,plVar7,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10aa92bac(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
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
  lVar10 = *plVar7;
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
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
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



/* Entry: 10aaa3f50; end: 10aaa401b;  */

undefined ** FUN_10aaa3f50(undefined **param_1,undefined **param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = param_1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a053854();
    param_2 = ppuVar2;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar2 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar3 = ppuVar2;
  FUN_10a0051e8();
  if (((ulong)ppuVar3 & 1) == 0) {
    if (((ulong)ppuVar2[0xf] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaa401c);
      (*pcVar1)();
    }
    FUN_10a054dac(ppuVar2,*param_2,FUN_10aaa401c,2,ppuVar2[8]);
  }
  return ppuVar2;
}



/* Entry: 10aaa401c; end: 10aaa40e3;  */

void FUN_10aaa401c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aaa3f50(param_2,param_3);
  FUN_10aaa40e4(param_5);
  FUN_10aa92910(param_2,param_4);
  FUN_10aa71440(plVar4,param_2);
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



/* Entry: 10aaa40e4; end: 10aaa4107;  */

ulong FUN_10aaa40e4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  uVar1 = 1;
  puVar3 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  uVar2 = uVar1;
  FUN_10a0051e8();
  if ((uVar2 & 1) == 0) {
    FUN_10a0605c4(uVar1,*puVar3,FUN_10aaa415c,0);
  }
  return uVar1;
}



/* Entry: 10aaa4108; end: 10aaa415b;  */

ulong FUN_10aaa4108(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10aaa415c,0);
  }
  return param_1;
}



/* Entry: 10aaa415c; end: 10aaa42e7;  */

void FUN_10aaa415c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      if (*(char *)((long)plVar6 + 0xa7) < '\0') {
        func_0x000107c3192c(&stack0xffffffffffffffa0,plVar6[0x12],plVar6[0x13]);
      }
      else {
        in_stack_ffffffffffffffa8 = plVar6[0x13];
        in_stack_ffffffffffffffa0 = (undefined1 *)plVar6[0x12];
        in_stack_ffffffffffffffb0 = plVar6[0x14];
      }
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaa42bc);
  (*pcVar2)();
}



/* Entry: 10aaa42e8; end: 10aaa43a3;  */

void FUN_10aaa42e8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d280,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa43a4);
  (*pcVar4)();
}



/* Entry: 10aaa43a4; end: 10aaa449f;  */

undefined1  [16] FUN_10aaa43a4(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f260;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f260;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa44a0; end: 10aaa455b;  */

void FUN_10aaa44a0(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d293,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa455c);
  (*pcVar4)();
}



/* Entry: 10aaa455c; end: 10aaa4657;  */

undefined1  [16] FUN_10aaa455c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f298;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f298;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa4658; end: 10aaa4713;  */

void FUN_10aaa4658(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d2b3,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa4714);
  (*pcVar4)();
}



/* Entry: 10aaa4714; end: 10aaa480f;  */

undefined1  [16] FUN_10aaa4714(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f2d0;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f2d0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa4810; end: 10aaa48cb;  */

void FUN_10aaa4810(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d2d3,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa48cc);
  (*pcVar4)();
}



/* Entry: 10aaa48cc; end: 10aaa49c7;  */

undefined1  [16] FUN_10aaa48cc(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f320;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f320;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa49c8; end: 10aaa4a83;  */

void FUN_10aaa49c8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d2f3,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa4a84);
  (*pcVar4)();
}



/* Entry: 10aaa4a84; end: 10aaa4b7f;  */

undefined1  [16] FUN_10aaa4a84(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f358;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f358;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa4b80; end: 10aaa4c3b;  */

void FUN_10aaa4b80(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d30e,0x20);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa4c3c);
  (*pcVar4)();
}



/* Entry: 10aaa4c3c; end: 10aaa4d37;  */

undefined1  [16] FUN_10aaa4c3c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f3a8;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f3a8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa4d38; end: 10aaa4df3;  */

void FUN_10aaa4d38(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d32f,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa4df4);
  (*pcVar4)();
}



/* Entry: 10aaa4df4; end: 10aaa4eef;  */

undefined1  [16] FUN_10aaa4df4(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f3e0;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f3e0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa4ef0; end: 10aaa4fab;  */

void FUN_10aaa4ef0(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d34a,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa4fac);
  (*pcVar4)();
}



/* Entry: 10aaa4fac; end: 10aaa50a7;  */

undefined1  [16] FUN_10aaa4fac(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f548;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f548;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa50a8; end: 10aaa5163;  */

void FUN_10aaa50a8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d36a,0x1b);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa5164);
  (*pcVar4)();
}



/* Entry: 10aaa5164; end: 10aaa525f;  */

undefined1  [16] FUN_10aaa5164(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f598;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f598;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa5260; end: 10aaa531b;  */

void FUN_10aaa5260(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d386,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa531c);
  (*pcVar4)();
}



/* Entry: 10aaa531c; end: 10aaa5417;  */

undefined1  [16] FUN_10aaa531c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f718;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f718;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a40;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa5418; end: 10aaa54d3;  */

void FUN_10aaa5418(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d3a0,0x1d);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa54d4);
  (*pcVar4)();
}



/* Entry: 10aaa54d4; end: 10aaa54e3;  */

void FUN_10aaa54d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c40438;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aaa54e4; end: 10aaa5503;  */

void FUN_10aaa54e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c40438;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa5504; end: 10aaa5547;  */

long FUN_10aaa5504(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar4 = param_1 + 0x58;
  lVar6 = -0x20;
  do {
    FUN_10a493e78(lVar4);
    lVar4 = lVar4 + -0x10;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0);
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x40);
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
  return param_1 + 0x38;
}



/* Entry: 10aaa5548; end: 10aaa555b;  */

void FUN_10aaa5548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa555c; end: 10aaa557b;  */

void FUN_10aaa555c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c40488;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa557c; end: 10aaa55bf;  */

long FUN_10aaa557c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar4 = param_1 + 0x68;
  lVar6 = -0x30;
  do {
    FUN_10a493e78(lVar4);
    lVar4 = lVar4 + -0x10;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0);
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x40);
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
  return param_1 + 0x38;
}



/* Entry: 10aaa55c0; end: 10aaa55d3;  */

void FUN_10aaa55c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa55d4; end: 10aaa55f3;  */

void FUN_10aaa55d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c404d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa55f4; end: 10aaa5637;  */

long FUN_10aaa55f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar4 = param_1 + 0x78;
  lVar6 = -0x40;
  do {
    FUN_10a493e78(lVar4);
    lVar4 = lVar4 + -0x10;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0);
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x40);
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
  return param_1 + 0x38;
}



/* Entry: 10aaa5638; end: 10aaa564b;  */

void FUN_10aaa5638(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa564c; end: 10aaa566b;  */

void FUN_10aaa564c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c40528;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa566c; end: 10aaa569f;  */

long FUN_10aaa566c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a493e78(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x40);
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
  return param_1 + 0x38;
}



/* Entry: 10aaa56a0; end: 10aaa56b3;  */

void FUN_10aaa56a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa56b4; end: 10aaa56d3;  */

void FUN_10aaa56b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c40578;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa56d4; end: 10aaa5707;  */

long FUN_10aaa56d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a493e78(param_1 + 0x68);
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x40);
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
  return param_1 + 0x38;
}



/* Entry: 10aaa5708; end: 10aaa571b;  */

void FUN_10aaa5708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa571c; end: 10aaa573b;  */

void FUN_10aaa571c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c405c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa573c; end: 10aaa574b;  */

void FUN_10aaa573c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aaa5744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aaa574c; end: 10aaa5823;  */

undefined8 * FUN_10aaa574c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10aaa5824; end: 10aaa58bf;  */

long FUN_10aaa5824(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar3);
      puVar2 = (undefined4 *)((long)param_1 + lVar3);
      *puVar1 = *puVar2;
      FUN_10aaa574c(puVar1 + 2,puVar2 + 2);
      if (*(char *)((long)puVar1 + 0x2f) < '\0') {
        __ZdlPv(*(undefined8 *)(puVar1 + 6));
      }
      uVar5 = *(undefined8 *)(puVar2 + 8);
      uVar4 = *(undefined8 *)(puVar2 + 6);
      *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(puVar2 + 10);
      *(undefined8 *)(puVar1 + 8) = uVar5;
      *(undefined8 *)(puVar1 + 6) = uVar4;
      *(undefined1 *)((long)puVar2 + 0x2f) = 0;
      *(undefined1 *)(puVar2 + 6) = 0;
      lVar3 = lVar3 + 0x30;
    } while (puVar2 + 0xc != param_2);
    param_3 = param_3 + lVar3;
  }
  return param_3;
}



/* Entry: 10aaa58c0; end: 10aaa594b;  */

undefined4 * FUN_10aaa58c0(undefined4 param_1,undefined4 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = param_1;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)(param_2 + 4) = param_3[1];
  *(undefined8 *)(param_2 + 2) = uVar5;
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
  if (*(char *)((long)param_3 + 0x27) < '\0') {
    func_0x000107c3192c(param_2 + 6,param_3[2],param_3[3]);
  }
  else {
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    *(undefined8 *)(param_2 + 10) = param_3[4];
    *(undefined8 *)(param_2 + 8) = uVar6;
    *(undefined8 *)(param_2 + 6) = uVar5;
  }
  return param_2;
}



/* Entry: 10aaa594c; end: 10aaa5b9b;  */

ulong FUN_10aaa594c(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  ulong uVar10;
  
  iVar4 = *(int *)(param_2 + 0x60);
  if (iVar4 == 0) {
    fVar14 = (float)(ulong)((*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 4) *
                           -0x5555555555555555);
    _logf();
    iVar4 = (int)fVar14;
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    *(int *)(param_2 + 0x60) = iVar4;
  }
  uVar8 = *(uint *)(param_2 + 0x24);
  uVar9 = (ulong)uVar8;
  if (*(float *)(param_2 + 0x28) <= param_1) {
    uVar9 = (long)(int)uVar8 + 1;
    pfVar5 = *(float **)(param_2 + 8);
    lVar7 = *(long *)(param_2 + 0x10);
    uVar6 = (lVar7 - (long)pfVar5 >> 4) * -0x5555555555555555;
    uVar2 = (int)uVar6 - 1;
    uVar12 = (ulong)uVar2;
    uVar8 = (int)uVar9 + iVar4;
    if ((int)uVar2 <= (int)uVar8) {
      uVar8 = uVar2;
    }
    uVar10 = uVar9;
    if ((int)uVar9 < (int)uVar8) {
      pfVar11 = pfVar5 + uVar9 * 0xc;
      lVar13 = 0;
      if (uVar9 <= uVar6) {
        lVar13 = uVar6 - uVar9;
      }
      do {
        if (lVar13 == 0) goto LAB_10aaa5b98;
        uVar10 = uVar9;
        if (param_1 < *pfVar11) break;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        uVar10 = (ulong)uVar8;
        pfVar11 = pfVar11 + 0xc;
        lVar13 = lVar13 + -1;
      } while (uVar8 != uVar1);
    }
    uVar8 = (uint)uVar10;
    if (uVar8 != uVar2) {
      if (uVar6 < (ulong)(long)(int)uVar8 || uVar6 - (long)(int)uVar8 == 0) goto LAB_10aaa5b98;
      uVar12 = uVar10;
      if (pfVar5[(long)(int)uVar8 * 0xc] <= param_1) goto LAB_10aaa5adc;
    }
  }
  else {
    uVar2 = uVar8 - iVar4 & ((int)(uVar8 - iVar4) >> 0x1f ^ 0xffffffffU);
    uVar12 = uVar9;
    if ((int)uVar2 < (int)uVar8) {
      uVar6 = (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 4) * -0x5555555555555555;
      pfVar5 = (float *)(*(long *)(param_2 + 8) + (ulong)uVar8 * 0x30);
      do {
        if (uVar6 < uVar9 || uVar6 - uVar9 == 0) goto LAB_10aaa5b98;
        uVar12 = uVar9;
      } while ((param_1 <= *pfVar5) &&
              (uVar9 = uVar9 - 1, uVar12 = (ulong)uVar2, pfVar5 = pfVar5 + -0xc,
              (long)(ulong)uVar2 < (long)uVar9));
    }
    iVar4 = (int)uVar12;
    if (iVar4 == 0) {
      pfVar5 = *(float **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
    }
    else {
      pfVar5 = *(float **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
      uVar9 = (lVar7 - (long)pfVar5 >> 4) * -0x5555555555555555;
      if (uVar9 < (ulong)(long)iVar4 || uVar9 - (long)iVar4 == 0) goto LAB_10aaa5b98;
      if (param_1 <= pfVar5[(long)iVar4 * 0xc]) {
LAB_10aaa5adc:
        *(float *)(param_2 + 0x30) = param_1;
        lVar13 = (lVar7 + -0x30) - (long)pfVar5;
        pfVar11 = pfVar5;
        if (lVar13 != 0) {
          uVar9 = (lVar13 >> 4) * -0x5555555555555555;
          do {
            uVar6 = uVar9 >> 1;
            uVar12 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
            uVar9 = uVar6;
            if (pfVar11[uVar6 * 0xc] <= param_1) {
              uVar9 = uVar12;
              pfVar11 = pfVar11 + uVar6 * 0xc + 0xc;
            }
          } while (uVar9 != 0);
        }
        uVar12 = (ulong)(uint)((int)((ulong)((long)pfVar11 - (long)pfVar5) >> 4) * -0x55555555);
        goto LAB_10aaa5b50;
      }
    }
    uVar12 = (ulong)(iVar4 + 1);
  }
LAB_10aaa5b50:
  uVar8 = (int)uVar12 - 1;
  uVar9 = (lVar7 - (long)pfVar5 >> 4) * -0x5555555555555555;
  if ((ulong)(long)(int)uVar8 <= uVar9 && uVar9 - (long)(int)uVar8 != 0) {
    fVar14 = pfVar5[(long)(int)uVar8 * 0xc];
    *(uint *)(param_2 + 0x24) = uVar8;
    *(float *)(param_2 + 0x28) = fVar14;
    return (ulong)uVar8 | uVar12 << 0x20;
  }
LAB_10aaa5b98:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa5b9c);
  (*pcVar3)();
}



/* Entry: 10aaa5b9c; end: 10aaa5c43;  */

void FUN_10aaa5b9c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined8 *)0x68;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c42c18;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  puVar4[7] = *(undefined8 *)(param_2 + 0x20);
  puVar4[6] = uVar6;
  puVar4[9] = uVar8;
  puVar4[8] = uVar7;
  *(undefined4 *)(puVar4 + 10) = *(undefined4 *)(param_2 + 0x38);
  lVar5 = *(long *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 8);
  puVar4[5] = *(undefined8 *)(param_2 + 0x10);
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
  puVar4[3] = &PTR_FUN_110c6c628;
  lVar5 = *(long *)(param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  puVar4[0xc] = *(undefined8 *)(param_2 + 0x48);
  puVar4[0xb] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  return;
}



/* Entry: 10aaa5c44; end: 10aaa5c53;  */

void FUN_10aaa5c44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c42c18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aaa5c54; end: 10aaa5c73;  */

void FUN_10aaa5c54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c42c18;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa5c74; end: 10aaa5c83;  */

void FUN_10aaa5c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aaa5c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aaa5c84; end: 10aaa5e8b;  */

undefined1  [16]
FUN_10aaa5c84(float param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x22;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  float fVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  long lStack_19c;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 *puStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  undefined1 **ppuStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar17 = (long *)param_2[1];
  if (plVar17 < (long *)param_2[2]) {
    plVar21 = param_3;
    if (param_3 == plVar17) {
      lVar24 = *param_4;
      plVar17[1] = param_4[1];
      *plVar17 = lVar24;
      param_2[1] = (long)(plVar17 + 2);
    }
    else {
      plVar19 = param_3 + 2;
      plVar13 = plVar17;
      if (plVar17 + -2 < plVar17) {
        plVar17[1] = plVar17[-1];
        *plVar17 = plVar17[-2];
        plVar13 = plVar17 + 2;
      }
      param_2[1] = (long)plVar13;
      if (plVar17 != plVar19) {
        _memmove(plVar19,param_3);
        plVar13 = (long *)param_2[1];
        param_2 = plVar19;
      }
      if (plVar13 < param_3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa5e70);
        (*pcVar4)();
      }
      lVar24 = 0x10;
      if (plVar13 <= param_4 || param_4 < param_3) {
        lVar24 = 0;
      }
      lVar5 = *(long *)((long)param_4 + lVar24);
      param_3[1] = ((long *)((long)param_4 + lVar24))[1];
      *param_3 = lVar5;
    }
LAB_10aaa5e54:
    auVar25._8_8_ = plVar21;
    auVar25._0_8_ = param_2;
    return auVar25;
  }
  plVar21 = (long *)*param_2;
  uVar16 = ((long)plVar17 - (long)plVar21 >> 4) + 1;
  if (uVar16 >> 0x3c == 0) {
    uVar22 = (long)param_3 - (long)plVar21;
    uVar12 = param_2[2] - (long)plVar21;
    uVar14 = (long)uVar12 >> 3;
    if (uVar14 <= uVar16) {
      uVar14 = uVar16;
    }
    if (0x7fffffffffffffef < uVar12) {
      uVar14 = 0xfffffffffffffff;
    }
    if (uVar14 == 0) {
      plVar17 = (long *)0x0;
      uVar14 = 0;
    }
    else {
      plVar17 = param_2;
      FUN_10a0cba0c();
      uVar14 = uVar14 << 4;
    }
    plVar19 = (long *)((long)plVar17 + uVar22);
    plVar13 = (long *)((long)plVar17 + uVar14);
    if (uVar22 == uVar14) {
      if ((long)uVar22 < 1) {
        uVar22 = (long)uVar22 >> 3;
        if (param_3 == plVar21) {
          uVar22 = 1;
        }
        plVar13 = param_2;
        uVar16 = uVar22;
        FUN_10a0cba0c();
        plVar19 = plVar13 + (uVar22 >> 2) * 2;
        plVar13 = plVar13 + uVar16 * 2;
        if (plVar17 != (long *)0x0) {
          __ZdlPv(plVar17);
        }
      }
      else {
        plVar19 = (long *)((long)plVar19 - ((uVar22 >> 1) + 8 & 0xfffffffffffffff0));
      }
    }
    lVar24 = *param_4;
    plVar19[1] = param_4[1];
    *plVar19 = lVar24;
    _memcpy(plVar19 + 2,param_3,param_2[1] - (long)param_3);
    plVar21 = (long *)*param_2;
    lVar24 = param_2[1];
    param_2[1] = (long)param_3;
    lVar15 = (long)plVar19 - ((long)param_3 - (long)plVar21);
    _memcpy(lVar15);
    lVar5 = *param_2;
    *param_2 = lVar15;
    param_2[1] = (long)(plVar19 + 2) + (lVar24 - (long)param_3);
    param_2[2] = (long)plVar13;
    param_2 = (long *)0x0;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar30._8_8_ = plVar21;
      auVar30._0_8_ = lVar5;
      return auVar30;
    }
    goto LAB_10aaa5e54;
  }
  FUN_10a0cb9f8();
  if (unaff_x22 != 0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_58 = FUN_10aaa5e8c;
  puStack_60 = &stack0xfffffffffffffff0;
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68d587);
  }
  else {
    pfVar3 = (float *)param_2[1];
    lVar24 = param_2[2];
    uVar16 = lVar24 - (long)pfVar3;
    if (0x10 < uVar16) {
      if (uVar16 == 0x20) {
        uVar16 = 0x100000000;
        goto LAB_10aaa6054;
      }
      iVar9 = *(int *)((long)param_2 + 0x3c);
      uVar16 = (long)uVar16 >> 4;
      if (iVar9 == 0) {
        fVar23 = (float)uVar16;
        _logf();
        iVar9 = (int)fVar23;
        if (iVar9 < 2) {
          iVar9 = 1;
        }
        *(int *)((long)param_2 + 0x3c) = iVar9;
      }
      uVar11 = *(uint *)((long)param_2 + 0x24);
      uVar14 = (ulong)uVar11;
      if (*(float *)(param_2 + 5) <= param_1) {
        uVar14 = (long)(int)uVar11 + 1;
        uVar2 = (int)uVar16 - 1;
        uVar11 = (int)uVar14 + iVar9;
        if ((int)uVar2 <= (int)uVar11) {
          uVar11 = uVar2;
        }
        uVar22 = uVar14;
        if ((int)uVar14 < (int)uVar11) {
          pfVar10 = pfVar3 + uVar14 * 4;
          lVar5 = 0;
          if (uVar14 <= uVar16) {
            lVar5 = uVar16 - uVar14;
          }
          do {
            if (lVar5 == 0) goto LAB_10aaa6068;
            uVar22 = uVar14;
            if (param_1 < *pfVar10) break;
            uVar1 = (int)uVar14 + 1;
            uVar14 = (ulong)uVar1;
            uVar22 = (ulong)uVar11;
            pfVar10 = pfVar10 + 4;
            lVar5 = lVar5 + -1;
          } while (uVar11 != uVar1);
        }
        uVar11 = (uint)uVar22;
        uVar14 = (ulong)uVar2;
        if (uVar11 != uVar2) {
          if (uVar16 <= (ulong)(long)(int)uVar11) goto LAB_10aaa6068;
          uVar14 = uVar22;
          if (pfVar3[(long)(int)uVar11 * 4] <= param_1) goto LAB_10aaa5fe4;
        }
      }
      else {
        uVar2 = uVar11 - iVar9 & ((int)(uVar11 - iVar9) >> 0x1f ^ 0xffffffffU);
        uVar22 = uVar14;
        if ((int)uVar2 < (int)uVar11) {
          pfVar10 = pfVar3 + uVar14 * 4;
          do {
            if (uVar16 <= uVar14) goto LAB_10aaa6068;
            uVar22 = uVar14;
          } while ((param_1 <= *pfVar10) &&
                  (uVar14 = uVar14 - 1, uVar22 = (ulong)uVar2, pfVar10 = pfVar10 + -4,
                  (long)(ulong)uVar2 < (long)uVar14));
        }
        iVar9 = (int)uVar22;
        if (iVar9 != 0) {
          if (uVar16 <= (ulong)(long)iVar9) goto LAB_10aaa6068;
          if (param_1 <= pfVar3[(long)iVar9 * 4]) {
LAB_10aaa5fe4:
            *(float *)((long)param_2 + 0x2c) = param_1;
            lVar24 = (lVar24 + -0x10) - (long)pfVar3;
            pfVar10 = pfVar3;
            if (lVar24 != 0) {
              uVar14 = lVar24 >> 4;
              do {
                uVar12 = uVar14 >> 1;
                uVar22 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
                uVar14 = uVar12;
                if (pfVar10[uVar12 * 4] <= param_1) {
                  uVar14 = uVar22;
                  pfVar10 = pfVar10 + uVar12 * 4 + 4;
                }
              } while (uVar14 != 0);
            }
            uVar14 = (ulong)((long)pfVar10 - (long)pfVar3) >> 4;
            goto LAB_10aaa6030;
          }
        }
        uVar14 = (ulong)(iVar9 + 1);
      }
LAB_10aaa6030:
      uVar11 = (int)uVar14 - 1;
      if (uVar16 <= (ulong)(long)(int)uVar11) {
LAB_10aaa6068:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa606c);
        (*pcVar4)();
      }
      fVar23 = pfVar3[(long)(int)uVar11 * 4];
      *(uint *)((long)param_2 + 0x24) = uVar11;
      *(float *)(param_2 + 5) = fVar23;
      uVar16 = (ulong)uVar11 | uVar14 << 0x20;
LAB_10aaa6054:
      auVar26._8_8_ = param_3;
      auVar26._0_8_ = uVar16;
      return auVar26;
    }
  }
  puVar6 = &UNK_10f68d5a4;
  FUN_10a00946c();
  uStack_98 = 0x10aaa6084;
  ppuStack_a0 = &puStack_60;
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68d587);
LAB_10aaa62a0:
    puVar7 = (undefined8 *)&UNK_10f68d5a4;
    FUN_10a00946c();
    pcStack_d8 = FUN_10aaa62ac;
    uVar16 = puVar7[2];
    puVar18 = (undefined8 *)*puVar7;
    puVar8 = puVar7;
    pppuStack_e0 = &ppuStack_a0;
    if ((long *)((long)(uVar16 - (long)puVar18) >> 3) < param_5) {
      puVar20 = puVar7;
      plVar17 = param_3;
      plVar21 = param_4;
      if (puVar18 != (undefined8 *)0x0) {
        puVar7[1] = puVar18;
        __ZdlPv();
        uVar16 = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar20 = puVar18;
      }
      if ((ulong)param_5 >> 0x3d != 0) {
        FUN_10a107b28();
        pcStack_118 = FUN_10aaa63d4;
        puVar20[0x36] = &PTR_DAT_110c3f040;
        puVar6 = &UNK_10f68c0c1;
        if ((undefined *)*plVar17 != (undefined *)0x0) {
          puVar6 = (undefined *)*plVar17;
        }
        plStack_140 = param_5;
        plStack_138 = param_4;
        plStack_130 = param_3;
        puStack_128 = puVar7;
        pppuStack_120 = &pppuStack_e0;
        func_0x000107c2c4dc(puVar20 + 0x37,puVar6);
        ppuStack_1b8 = (undefined **)*plVar17;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        uStack_1a0 = SUB84(plVar21,0);
        lStack_19c = plVar17[1];
        uStack_194 = (undefined4)plVar17[2];
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        lStack_170 = plVar17[7];
        uStack_168 = (undefined4)plVar17[8];
        uStack_160 = 0;
        uStack_158 = 0;
        func_0x00010a052690(puVar20 + 0x2d,&ppuStack_1b8);
        puVar7 = puVar20;
        FUN_10a0051e8(puVar20,plVar21,(int)plVar17[1],(int)plVar17[8],
                      *(undefined4 *)((long)plVar17 + 0xc),(int)plVar17[2]);
        if (((ulong)puVar7 & 1) == 0) {
          ppuStack_150 = &PTR_DAT_110c3f040;
          uStack_148 = 0;
          ppuStack_1b8 = &PTR_DAT_110c42c58;
          uStack_1b0 = 0;
          uStack_1a8 = CONCAT71(uStack_1a8._1_7_,1);
          func_0x0001098949cc(puVar20,*plVar17,&ppuStack_150,&ppuStack_1b8);
        }
        auVar29._8_8_ = (ulong)plVar21 & 0xffffffff | (ulong)*(uint *)(plVar17 + 1) << 0x20;
        auVar29._0_8_ = puVar20;
        return auVar29;
      }
      plVar17 = (long *)((long)uVar16 >> 2);
      if ((long *)((long)uVar16 >> 2) <= param_5) {
        plVar17 = param_5;
      }
      if (0x7ffffffffffffff7 < uVar16) {
        plVar17 = (long *)0x1fffffffffffffff;
      }
      func_0x00010a107af0(puVar7,plVar17);
      puVar18 = (undefined8 *)puVar7[1];
      lVar24 = (long)param_4 - (long)param_3;
      if (lVar24 != 0) {
        puVar8 = puVar18;
        _memmove(puVar18,param_3,lVar24);
        plVar17 = param_3;
      }
      lVar24 = (long)puVar18 + lVar24;
    }
    else {
      puVar20 = (undefined8 *)puVar7[1];
      if ((long *)((long)puVar20 - (long)puVar18 >> 3) < param_5) {
        plVar21 = (long *)((long)param_3 + ((long)puVar20 - (long)puVar18));
        if (puVar20 != puVar18) {
          _memmove(puVar18,param_3);
          puVar20 = (undefined8 *)puVar7[1];
          puVar8 = puVar18;
        }
        lVar24 = (long)param_4 - (long)plVar21;
        plVar17 = param_3;
        if (lVar24 != 0) {
          puVar8 = puVar20;
          _memmove(puVar20,plVar21,lVar24);
          plVar17 = plVar21;
        }
        lVar24 = (long)puVar20 + lVar24;
      }
      else {
        lVar24 = (long)param_4 - (long)param_3;
        plVar17 = param_3;
        if (lVar24 != 0) {
          puVar8 = puVar18;
          _memmove(puVar18,param_3,lVar24);
          plVar17 = param_3;
        }
        lVar24 = (long)puVar18 + lVar24;
      }
    }
    puVar7[1] = lVar24;
    auVar28._8_8_ = plVar17;
    auVar28._0_8_ = puVar8;
    return auVar28;
  }
  pfVar3 = *(float **)(puVar6 + 8);
  lVar24 = *(long *)(puVar6 + 0x10);
  lVar5 = lVar24 - (long)pfVar3;
  uVar16 = (lVar5 >> 2) * -0x3333333333333333;
  if (uVar16 < 2) goto LAB_10aaa62a0;
  if (lVar5 == 0x28) {
    uVar16 = 0x100000000;
    goto LAB_10aaa627c;
  }
  iVar9 = *(int *)(puVar6 + 0x40);
  if (iVar9 == 0) {
    fVar23 = (float)uVar16;
    _logf();
    iVar9 = (int)fVar23;
    if (iVar9 < 2) {
      iVar9 = 1;
    }
    *(int *)(puVar6 + 0x40) = iVar9;
  }
  uVar11 = *(uint *)(puVar6 + 0x24);
  uVar14 = (ulong)uVar11;
  if (*(float *)(puVar6 + 0x28) <= param_1) {
    uVar14 = (long)(int)uVar11 + 1;
    uVar2 = (int)uVar16 - 1;
    uVar11 = (int)uVar14 + iVar9;
    if ((int)uVar2 <= (int)uVar11) {
      uVar11 = uVar2;
    }
    uVar22 = uVar14;
    if ((int)uVar14 < (int)uVar11) {
      pfVar10 = pfVar3 + uVar14 * 5;
      lVar5 = 0;
      if (uVar14 <= uVar16) {
        lVar5 = uVar16 - uVar14;
      }
      do {
        if (lVar5 == 0) goto LAB_10aaa6290;
        uVar22 = uVar14;
        if (param_1 < *pfVar10) break;
        uVar1 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar1;
        uVar22 = (ulong)uVar11;
        pfVar10 = pfVar10 + 5;
        lVar5 = lVar5 + -1;
      } while (uVar11 != uVar1);
    }
    uVar11 = (uint)uVar22;
    uVar14 = (ulong)uVar2;
    if (uVar11 != uVar2) {
      if (uVar16 < (ulong)(long)(int)uVar11 || uVar16 - (long)(int)uVar11 == 0) goto LAB_10aaa6290;
      uVar14 = uVar22;
      if (pfVar3[(long)(int)uVar11 * 5] <= param_1) goto LAB_10aaa61f0;
    }
  }
  else {
    uVar2 = uVar11 - iVar9 & ((int)(uVar11 - iVar9) >> 0x1f ^ 0xffffffffU);
    uVar22 = uVar14;
    if ((int)uVar2 < (int)uVar11) {
      pfVar10 = pfVar3 + (ulong)uVar11 * 5;
      do {
        if (uVar16 < uVar14 || uVar16 - uVar14 == 0) goto LAB_10aaa6290;
        uVar22 = uVar14;
      } while ((param_1 <= *pfVar10) &&
              (uVar14 = uVar14 - 1, uVar22 = (ulong)uVar2, pfVar10 = pfVar10 + -5,
              (long)(ulong)uVar2 < (long)uVar14));
    }
    iVar9 = (int)uVar22;
    if (iVar9 != 0) {
      if (uVar16 < (ulong)(long)iVar9 || uVar16 - (long)iVar9 == 0) goto LAB_10aaa6290;
      if (param_1 <= pfVar3[(long)iVar9 * 5]) {
LAB_10aaa61f0:
        *(float *)(puVar6 + 0x2c) = param_1;
        lVar24 = (lVar24 + -0x14) - (long)pfVar3;
        pfVar10 = pfVar3;
        if (lVar24 != 0) {
          uVar14 = (lVar24 >> 2) * -0x3333333333333333;
          do {
            uVar12 = uVar14 >> 1;
            uVar22 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
            uVar14 = uVar12;
            if (pfVar10[uVar12 * 5] <= param_1) {
              uVar14 = uVar22;
              pfVar10 = pfVar10 + uVar12 * 5 + 5;
            }
          } while (uVar14 != 0);
        }
        uVar14 = (ulong)(uint)((int)((ulong)((long)pfVar10 - (long)pfVar3) >> 2) * -0x33333333);
        goto LAB_10aaa6258;
      }
    }
    uVar14 = (ulong)(iVar9 + 1);
  }
LAB_10aaa6258:
  uVar11 = (int)uVar14 - 1;
  if (uVar16 < (ulong)(long)(int)uVar11 || uVar16 - (long)(int)uVar11 == 0) {
LAB_10aaa6290:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa6294);
    (*pcVar4)();
  }
  fVar23 = pfVar3[(long)(int)uVar11 * 5];
  *(uint *)(puVar6 + 0x24) = uVar11;
  *(float *)(puVar6 + 0x28) = fVar23;
  uVar16 = (ulong)uVar11 | uVar14 << 0x20;
LAB_10aaa627c:
  auVar27._8_8_ = param_3;
  auVar27._0_8_ = uVar16;
  return auVar27;
}



/* Entry: 10aaa5e8c; end: 10aaa62ab;  */

undefined1  [16]
FUN_10aaa5e8c(float param_1,long param_2,undefined8 *param_3,ulong param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  ulong uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68d587);
  }
  else {
    pfVar3 = *(float **)(param_2 + 8);
    lVar15 = *(long *)(param_2 + 0x10);
    uVar18 = lVar15 - (long)pfVar3;
    if (0x10 < uVar18) {
      if (uVar18 == 0x20) {
        uVar18 = 0x100000000;
        goto LAB_10aaa6054;
      }
      iVar10 = *(int *)(param_2 + 0x3c);
      uVar18 = (long)uVar18 >> 4;
      if (iVar10 == 0) {
        fVar21 = (float)uVar18;
        _logf();
        iVar10 = (int)fVar21;
        if (iVar10 < 2) {
          iVar10 = 1;
        }
        *(int *)(param_2 + 0x3c) = iVar10;
      }
      uVar16 = *(uint *)(param_2 + 0x24);
      uVar11 = (ulong)uVar16;
      if (*(float *)(param_2 + 0x28) <= param_1) {
        uVar11 = (long)(int)uVar16 + 1;
        uVar2 = (int)uVar18 - 1;
        uVar16 = (int)uVar11 + iVar10;
        if ((int)uVar2 <= (int)uVar16) {
          uVar16 = uVar2;
        }
        uVar13 = uVar11;
        if ((int)uVar11 < (int)uVar16) {
          pfVar14 = pfVar3 + uVar11 * 4;
          lVar12 = 0;
          if (uVar11 <= uVar18) {
            lVar12 = uVar18 - uVar11;
          }
          do {
            if (lVar12 == 0) goto LAB_10aaa6068;
            uVar13 = uVar11;
            if (param_1 < *pfVar14) break;
            uVar1 = (int)uVar11 + 1;
            uVar11 = (ulong)uVar1;
            uVar13 = (ulong)uVar16;
            pfVar14 = pfVar14 + 4;
            lVar12 = lVar12 + -1;
          } while (uVar16 != uVar1);
        }
        uVar16 = (uint)uVar13;
        uVar11 = (ulong)uVar2;
        if (uVar16 != uVar2) {
          if (uVar18 <= (ulong)(long)(int)uVar16) goto LAB_10aaa6068;
          uVar11 = uVar13;
          if (pfVar3[(long)(int)uVar16 * 4] <= param_1) goto LAB_10aaa5fe4;
        }
      }
      else {
        uVar2 = uVar16 - iVar10 & ((int)(uVar16 - iVar10) >> 0x1f ^ 0xffffffffU);
        uVar13 = uVar11;
        if ((int)uVar2 < (int)uVar16) {
          pfVar14 = pfVar3 + uVar11 * 4;
          do {
            if (uVar18 <= uVar11) goto LAB_10aaa6068;
            uVar13 = uVar11;
          } while ((param_1 <= *pfVar14) &&
                  (uVar11 = uVar11 - 1, uVar13 = (ulong)uVar2, pfVar14 = pfVar14 + -4,
                  (long)(ulong)uVar2 < (long)uVar11));
        }
        iVar10 = (int)uVar13;
        if (iVar10 != 0) {
          if (uVar18 <= (ulong)(long)iVar10) goto LAB_10aaa6068;
          if (param_1 <= pfVar3[(long)iVar10 * 4]) {
LAB_10aaa5fe4:
            *(float *)(param_2 + 0x2c) = param_1;
            lVar15 = (lVar15 + -0x10) - (long)pfVar3;
            pfVar14 = pfVar3;
            if (lVar15 != 0) {
              uVar11 = lVar15 >> 4;
              do {
                uVar17 = uVar11 >> 1;
                uVar13 = uVar11 + (uVar11 >> 1 ^ 0xffffffffffffffff);
                uVar11 = uVar17;
                if (pfVar14[uVar17 * 4] <= param_1) {
                  uVar11 = uVar13;
                  pfVar14 = pfVar14 + uVar17 * 4 + 4;
                }
              } while (uVar11 != 0);
            }
            uVar11 = (ulong)((long)pfVar14 - (long)pfVar3) >> 4;
            goto LAB_10aaa6030;
          }
        }
        uVar11 = (ulong)(iVar10 + 1);
      }
LAB_10aaa6030:
      uVar16 = (int)uVar11 - 1;
      if (uVar18 <= (ulong)(long)(int)uVar16) {
LAB_10aaa6068:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa606c);
        (*pcVar4)();
      }
      fVar21 = pfVar3[(long)(int)uVar16 * 4];
      *(uint *)(param_2 + 0x24) = uVar16;
      *(float *)(param_2 + 0x28) = fVar21;
      uVar18 = (ulong)uVar16 | uVar11 << 0x20;
LAB_10aaa6054:
      auVar22._8_8_ = param_3;
      auVar22._0_8_ = uVar18;
      return auVar22;
    }
  }
  puVar5 = &UNK_10f68d5a4;
  FUN_10a00946c();
  uStack_48 = 0x10aaa6084;
  puStack_50 = &stack0xfffffffffffffff0;
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68d587);
LAB_10aaa62a0:
    puVar6 = (undefined8 *)&UNK_10f68d5a4;
    FUN_10a00946c();
    pcStack_88 = FUN_10aaa62ac;
    uVar18 = puVar6[2];
    puVar19 = (undefined8 *)*puVar6;
    puVar7 = puVar6;
    ppuStack_90 = &puStack_50;
    if ((undefined8 *)((long)(uVar18 - (long)puVar19) >> 3) < param_5) {
      puVar20 = puVar6;
      puVar8 = param_3;
      uVar11 = param_4;
      if (puVar19 != (undefined8 *)0x0) {
        puVar6[1] = puVar19;
        __ZdlPv();
        uVar18 = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar20 = puVar19;
      }
      if ((ulong)param_5 >> 0x3d != 0) {
        FUN_10a107b28();
        pcStack_c8 = FUN_10aaa63d4;
        puVar20[0x36] = &PTR_DAT_110c3f040;
        puVar5 = &UNK_10f68c0c1;
        if ((undefined *)*puVar8 != (undefined *)0x0) {
          puVar5 = (undefined *)*puVar8;
        }
        puStack_f0 = param_5;
        uStack_e8 = param_4;
        puStack_e0 = param_3;
        puStack_d8 = puVar6;
        pppuStack_d0 = &ppuStack_90;
        func_0x000107c2c4dc(puVar20 + 0x37,puVar5);
        ppuStack_168 = (undefined **)*puVar8;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_150 = (undefined4)uVar11;
        uStack_14c = puVar8[1];
        uStack_144 = *(undefined4 *)(puVar8 + 2);
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_120 = puVar8[7];
        uStack_118 = *(undefined4 *)(puVar8 + 8);
        uStack_110 = 0;
        uStack_108 = 0;
        func_0x00010a052690(puVar20 + 0x2d,&ppuStack_168);
        puVar6 = puVar20;
        FUN_10a0051e8(puVar20,uVar11,*(undefined4 *)(puVar8 + 1),*(undefined4 *)(puVar8 + 8),
                      *(undefined4 *)((long)puVar8 + 0xc),*(undefined4 *)(puVar8 + 2));
        if (((ulong)puVar6 & 1) == 0) {
          ppuStack_100 = &PTR_DAT_110c3f040;
          uStack_f8 = 0;
          ppuStack_168 = &PTR_DAT_110c42c58;
          uStack_160 = 0;
          uStack_158 = CONCAT71(uStack_158._1_7_,1);
          func_0x0001098949cc(puVar20,*puVar8,&ppuStack_100,&ppuStack_168);
        }
        auVar25._8_8_ = uVar11 & 0xffffffff | (ulong)*(uint *)(puVar8 + 1) << 0x20;
        auVar25._0_8_ = puVar20;
        return auVar25;
      }
      puVar8 = (undefined8 *)((long)uVar18 >> 2);
      if ((undefined8 *)((long)uVar18 >> 2) <= param_5) {
        puVar8 = param_5;
      }
      if (0x7ffffffffffffff7 < uVar18) {
        puVar8 = (undefined8 *)0x1fffffffffffffff;
      }
      func_0x00010a107af0(puVar6,puVar8);
      puVar19 = (undefined8 *)puVar6[1];
      lVar15 = param_4 - (long)param_3;
      if (lVar15 != 0) {
        puVar7 = puVar19;
        _memmove(puVar19,param_3,lVar15);
        puVar8 = param_3;
      }
      lVar15 = (long)puVar19 + lVar15;
    }
    else {
      puVar20 = (undefined8 *)puVar6[1];
      if ((undefined8 *)((long)puVar20 - (long)puVar19 >> 3) < param_5) {
        puVar9 = (undefined8 *)((long)param_3 + ((long)puVar20 - (long)puVar19));
        if (puVar20 != puVar19) {
          _memmove(puVar19,param_3);
          puVar20 = (undefined8 *)puVar6[1];
          puVar7 = puVar19;
        }
        lVar15 = param_4 - (long)puVar9;
        puVar8 = param_3;
        if (lVar15 != 0) {
          puVar7 = puVar20;
          _memmove(puVar20,puVar9,lVar15);
          puVar8 = puVar9;
        }
        lVar15 = (long)puVar20 + lVar15;
      }
      else {
        lVar15 = param_4 - (long)param_3;
        puVar8 = param_3;
        if (lVar15 != 0) {
          puVar7 = puVar19;
          _memmove(puVar19,param_3,lVar15);
          puVar8 = param_3;
        }
        lVar15 = (long)puVar19 + lVar15;
      }
    }
    puVar6[1] = lVar15;
    auVar24._8_8_ = puVar8;
    auVar24._0_8_ = puVar7;
    return auVar24;
  }
  pfVar3 = *(float **)(puVar5 + 8);
  lVar15 = *(long *)(puVar5 + 0x10);
  lVar12 = lVar15 - (long)pfVar3;
  uVar18 = (lVar12 >> 2) * -0x3333333333333333;
  if (uVar18 < 2) goto LAB_10aaa62a0;
  if (lVar12 == 0x28) {
    uVar18 = 0x100000000;
    goto LAB_10aaa627c;
  }
  iVar10 = *(int *)(puVar5 + 0x40);
  if (iVar10 == 0) {
    fVar21 = (float)uVar18;
    _logf();
    iVar10 = (int)fVar21;
    if (iVar10 < 2) {
      iVar10 = 1;
    }
    *(int *)(puVar5 + 0x40) = iVar10;
  }
  uVar16 = *(uint *)(puVar5 + 0x24);
  uVar11 = (ulong)uVar16;
  if (*(float *)(puVar5 + 0x28) <= param_1) {
    uVar11 = (long)(int)uVar16 + 1;
    uVar2 = (int)uVar18 - 1;
    uVar16 = (int)uVar11 + iVar10;
    if ((int)uVar2 <= (int)uVar16) {
      uVar16 = uVar2;
    }
    uVar13 = uVar11;
    if ((int)uVar11 < (int)uVar16) {
      pfVar14 = pfVar3 + uVar11 * 5;
      lVar12 = 0;
      if (uVar11 <= uVar18) {
        lVar12 = uVar18 - uVar11;
      }
      do {
        if (lVar12 == 0) goto LAB_10aaa6290;
        uVar13 = uVar11;
        if (param_1 < *pfVar14) break;
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar1;
        uVar13 = (ulong)uVar16;
        pfVar14 = pfVar14 + 5;
        lVar12 = lVar12 + -1;
      } while (uVar16 != uVar1);
    }
    uVar16 = (uint)uVar13;
    uVar11 = (ulong)uVar2;
    if (uVar16 != uVar2) {
      if (uVar18 < (ulong)(long)(int)uVar16 || uVar18 - (long)(int)uVar16 == 0) goto LAB_10aaa6290;
      uVar11 = uVar13;
      if (pfVar3[(long)(int)uVar16 * 5] <= param_1) goto LAB_10aaa61f0;
    }
  }
  else {
    uVar2 = uVar16 - iVar10 & ((int)(uVar16 - iVar10) >> 0x1f ^ 0xffffffffU);
    uVar13 = uVar11;
    if ((int)uVar2 < (int)uVar16) {
      pfVar14 = pfVar3 + (ulong)uVar16 * 5;
      do {
        if (uVar18 < uVar11 || uVar18 - uVar11 == 0) goto LAB_10aaa6290;
        uVar13 = uVar11;
      } while ((param_1 <= *pfVar14) &&
              (uVar11 = uVar11 - 1, uVar13 = (ulong)uVar2, pfVar14 = pfVar14 + -5,
              (long)(ulong)uVar2 < (long)uVar11));
    }
    iVar10 = (int)uVar13;
    if (iVar10 != 0) {
      if (uVar18 < (ulong)(long)iVar10 || uVar18 - (long)iVar10 == 0) goto LAB_10aaa6290;
      if (param_1 <= pfVar3[(long)iVar10 * 5]) {
LAB_10aaa61f0:
        *(float *)(puVar5 + 0x2c) = param_1;
        lVar15 = (lVar15 + -0x14) - (long)pfVar3;
        pfVar14 = pfVar3;
        if (lVar15 != 0) {
          uVar11 = (lVar15 >> 2) * -0x3333333333333333;
          do {
            uVar17 = uVar11 >> 1;
            uVar13 = uVar11 + (uVar11 >> 1 ^ 0xffffffffffffffff);
            uVar11 = uVar17;
            if (pfVar14[uVar17 * 5] <= param_1) {
              uVar11 = uVar13;
              pfVar14 = pfVar14 + uVar17 * 5 + 5;
            }
          } while (uVar11 != 0);
        }
        uVar11 = (ulong)(uint)((int)((ulong)((long)pfVar14 - (long)pfVar3) >> 2) * -0x33333333);
        goto LAB_10aaa6258;
      }
    }
    uVar11 = (ulong)(iVar10 + 1);
  }
LAB_10aaa6258:
  uVar16 = (int)uVar11 - 1;
  if (uVar18 < (ulong)(long)(int)uVar16 || uVar18 - (long)(int)uVar16 == 0) {
LAB_10aaa6290:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa6294);
    (*pcVar4)();
  }
  fVar21 = pfVar3[(long)(int)uVar16 * 5];
  *(uint *)(puVar5 + 0x24) = uVar16;
  *(float *)(puVar5 + 0x28) = fVar21;
  uVar18 = (ulong)uVar16 | uVar11 << 0x20;
LAB_10aaa627c:
  auVar23._8_8_ = param_3;
  auVar23._0_8_ = uVar18;
  return auVar23;
}



/* Entry: 10aaa62ac; end: 10aaa63d3;  */

undefined1  [16]
FUN_10aaa62ac(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar6 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  puVar2 = param_1;
  if ((undefined8 *)((long)(uVar6 - (long)puVar8) >> 3) < param_4) {
    puVar9 = param_1;
    puVar3 = param_2;
    uVar5 = param_3;
    if (puVar8 != (undefined8 *)0x0) {
      param_1[1] = puVar8;
      __ZdlPv();
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar9 = puVar8;
    }
    if ((ulong)param_4 >> 0x3d != 0) {
      FUN_10a107b28();
      pcStack_48 = FUN_10aaa63d4;
      puVar9[0x36] = &PTR_DAT_110c3f040;
      puVar1 = &UNK_10f68c0c1;
      if ((undefined *)*puVar3 != (undefined *)0x0) {
        puVar1 = (undefined *)*puVar3;
      }
      puStack_70 = param_4;
      uStack_68 = param_3;
      puStack_60 = param_2;
      puStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      func_0x000107c2c4dc(puVar9 + 0x37,puVar1);
      ppuStack_e8 = (undefined **)*puVar3;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = (undefined4)uVar5;
      uStack_cc = puVar3[1];
      uStack_c4 = *(undefined4 *)(puVar3 + 2);
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = puVar3[7];
      uStack_98 = *(undefined4 *)(puVar3 + 8);
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010a052690(puVar9 + 0x2d,&ppuStack_e8);
      puVar2 = puVar9;
      FUN_10a0051e8(puVar9,uVar5,*(undefined4 *)(puVar3 + 1),*(undefined4 *)(puVar3 + 8),
                    *(undefined4 *)((long)puVar3 + 0xc),*(undefined4 *)(puVar3 + 2));
      if (((ulong)puVar2 & 1) == 0) {
        ppuStack_80 = &PTR_DAT_110c3f040;
        uStack_78 = 0;
        ppuStack_e8 = &PTR_DAT_110c42c58;
        uStack_e0 = 0;
        uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
        func_0x0001098949cc(puVar9,*puVar3,&ppuStack_80,&ppuStack_e8);
      }
      auVar11._8_8_ = uVar5 & 0xffffffff | (ulong)*(uint *)(puVar3 + 1) << 0x20;
      auVar11._0_8_ = puVar9;
      return auVar11;
    }
    puVar3 = (undefined8 *)((long)uVar6 >> 2);
    if ((undefined8 *)((long)uVar6 >> 2) <= param_4) {
      puVar3 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      puVar3 = (undefined8 *)0x1fffffffffffffff;
    }
    func_0x00010a107af0(param_1,puVar3);
    puVar8 = (undefined8 *)param_1[1];
    lVar7 = param_3 - (long)param_2;
    if (lVar7 != 0) {
      puVar2 = puVar8;
      _memmove(puVar8,param_2,lVar7);
      puVar3 = param_2;
    }
    lVar7 = (long)puVar8 + lVar7;
  }
  else {
    puVar9 = (undefined8 *)param_1[1];
    if ((undefined8 *)((long)puVar9 - (long)puVar8 >> 3) < param_4) {
      puVar4 = (undefined8 *)((long)param_2 + ((long)puVar9 - (long)puVar8));
      if (puVar9 != puVar8) {
        _memmove(puVar8,param_2);
        puVar9 = (undefined8 *)param_1[1];
        puVar2 = puVar8;
      }
      lVar7 = param_3 - (long)puVar4;
      puVar3 = param_2;
      if (lVar7 != 0) {
        puVar2 = puVar9;
        _memmove(puVar9,puVar4,lVar7);
        puVar3 = puVar4;
      }
      lVar7 = (long)puVar9 + lVar7;
    }
    else {
      lVar7 = param_3 - (long)param_2;
      puVar3 = param_2;
      if (lVar7 != 0) {
        puVar2 = puVar8;
        _memmove(puVar8,param_2,lVar7);
        puVar3 = param_2;
      }
      lVar7 = (long)puVar8 + lVar7;
    }
  }
  param_1[1] = lVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = puVar2;
  return auVar10;
}



/* Entry: 10aaa63d4; end: 10aaa64cf;  */

undefined1  [16] FUN_10aaa63d4(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f040;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f040;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa64d0; end: 10aaa658b;  */

void FUN_10aaa64d0(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d400,0x14);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa658c);
  (*pcVar4)();
}



/* Entry: 10aaa658c; end: 10aaa6687;  */

undefined1  [16] FUN_10aaa658c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f750;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f750;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c3f040;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa6688; end: 10aaa6743;  */

void FUN_10aaa6688(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d415,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa6744);
  (*pcVar4)();
}



/* Entry: 10aaa6744; end: 10aaa683f;  */

undefined1  [16] FUN_10aaa6744(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f768;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f768;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c3f040;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa6840; end: 10aaa68fb;  */

void FUN_10aaa6840(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d42f,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa68fc);
  (*pcVar4)();
}



/* Entry: 10aaa68fc; end: 10aaa69f7;  */

undefined1  [16] FUN_10aaa68fc(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f058;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f058;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c3f040;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa69f8; end: 10aaa6ab3;  */

void FUN_10aaa69f8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d448,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa6ab4);
  (*pcVar4)();
}



/* Entry: 10aaa6ab4; end: 10aaa6baf;  */

undefined1  [16] FUN_10aaa6ab4(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f780;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f780;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c3f040;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa6bb0; end: 10aaa6c6b;  */

void FUN_10aaa6bb0(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d461,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa6c6c);
  (*pcVar4)();
}



/* Entry: 10aaa6c6c; end: 10aaa6d67;  */

undefined1  [16] FUN_10aaa6c6c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f0b8;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f0b8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c3f040;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa6d68; end: 10aaa6e23;  */

void FUN_10aaa6d68(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d47a,0x1e);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa6e24);
  (*pcVar4)();
}



/* Entry: 10aaa6e24; end: 10aaa6f1f;  */

undefined1  [16] FUN_10aaa6e24(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f798;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f798;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c3f040;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa6f20; end: 10aaa6fdb;  */

void FUN_10aaa6f20(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d499,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa6fdc);
  (*pcVar4)();
}



/* Entry: 10aaa6fdc; end: 10aaa709f;  */

void FUN_10aaa6fdc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aaa70a0(param_2,param_3);
  FUN_10a052e3c(param_5);
  param_2[0x1e] = param_2[0x1d];
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x21) = 0x7f7fffff;
  *(undefined4 *)((long)param_2 + 0x114) = 0;
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



/* Entry: 10aaa70a0; end: 10aaa7107;  */

void FUN_10aaa70a0(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
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
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c3f7e8;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10aaa70a0(plVar4,param_2);
  FUN_10a076f00(param_4);
  func_0x000109898518(plVar4,param_3);
  FUN_10aa83c94(plVar6 + 0x1c,(long)(int)plVar4);
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
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
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
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
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10aaa7108; end: 10aaa71cf;  */

void FUN_10aaa7108(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aaa70a0(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  FUN_10aa83c94(plVar4 + 0x1c,(long)(int)param_2);
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



/* Entry: 10aaa71d0; end: 10aaa72f7;  */

void FUN_10aaa71d0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10aaa70a0(param_2,param_3);
  FUN_10a1ff918(param_5);
  if ((*param_4 != 3) || (param_4[4] != 3)) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaa72e4);
    (*pcVar2)();
  }
  FUN_10aa8398c(param_2 + 0x1c,&stack0xffffffffffffffb8);
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



/* Entry: 10aaa72f8; end: 10aaa73bb;  */

void FUN_10aaa72f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aaa73bc(param_2,param_3);
  FUN_10a052e3c(param_5);
  param_2[0x1e] = param_2[0x1d];
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x21) = 0x7f7fffff;
  *(undefined4 *)(param_2 + 0x23) = 0;
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



/* Entry: 10aaa73bc; end: 10aaa7423;  */

void FUN_10aaa73bc(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 *extraout_x8;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c3f850;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10aaa73bc(plVar6,param_2);
  FUN_10a076f00(param_4);
  func_0x000109898518(plVar6,param_3);
  puVar10 = (undefined4 *)plVar8[0x1d];
  puVar1 = (undefined4 *)plVar8[0x1e];
  uVar12 = ((long)puVar1 - (long)puVar10 >> 2) * -0x5555555555555555;
  iVar3 = (int)plVar6;
  if (uVar12 < (ulong)(long)iVar3 || uVar12 - (long)iVar3 == 0) {
    FUN_10a00946c(&UNK_10f68d56a);
  }
  else {
    puVar14 = puVar10 + (long)iVar3 * 3;
    if (puVar1 != puVar14) {
      lVar9 = (long)puVar1 - (long)(puVar14 + 3);
      if (lVar9 != 0) {
        _memmove(puVar14,puVar14 + 3,lVar9);
        puVar10 = (undefined4 *)plVar8[0x1d];
      }
      puVar14 = (undefined4 *)((long)puVar14 + lVar9);
      plVar8[0x1e] = (long)puVar14;
      if (puVar10 == puVar14) {
        uVar20 = 0;
        uVar21 = 0x7f7fffff;
      }
      else {
        uVar20 = puVar14[-3];
        uVar21 = *puVar10;
      }
      *(undefined4 *)(plVar8 + 0x20) = uVar20;
      *(undefined4 *)((long)plVar8 + 0x104) = 0;
      *(undefined4 *)(plVar8 + 0x21) = uVar21;
      *(undefined4 *)(plVar8 + 0x23) = 0;
      plVar6 = plVar7 + 0x4b;
      *extraout_x8 = 0;
      lVar9 = plVar7[0x59];
      uVar12 = lVar9 - 1;
      plVar7[0x59] = uVar12;
      if (uVar12 < 8) {
        uVar12 = plVar6[lVar9 + 2];
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
      lVar9 = *plVar6;
      lVar16 = plVar7[0x4c];
      lVar13 = lVar16 - lVar9;
      uVar18 = lVar13 >> 4;
      if (uVar18 < uVar12) {
        uVar19 = uVar12 - uVar18;
        lVar17 = plVar7[0x4d];
        if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
          if (uVar12 >> 0x3c == 0) {
            uVar11 = lVar17 - lVar9 >> 3;
            if (uVar11 <= uVar12) {
              uVar11 = uVar12;
            }
            if (0x7fffffffffffffef < (ulong)(lVar17 - lVar9)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_88 = plVar6;
            if (uVar11 >> 0x3c == 0) {
              lVar4 = uVar11 << 4;
              __Znwm();
              lVar16 = lVar4 + lVar13;
              _bzero(lVar16,uVar19 * 0x10);
              lVar15 = lVar16 + uVar18 * -0x10;
              _memcpy(lVar15,lVar9,lVar13);
              *plVar6 = lVar15;
              plVar7[0x4c] = lVar16 + uVar19 * 0x10;
              plVar7[0x4d] = lVar4 + uVar11 * 0x10;
              lStack_a8 = lVar9;
              lStack_a0 = lVar9;
              lStack_98 = lVar9;
              lStack_90 = lVar17;
              func_0x00010988c1b8(&lStack_a8);
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
        _bzero(lVar16,uVar19 * 0x10);
        plVar7[0x4c] = lVar16 + uVar19 * 0x10;
      }
      else if (uVar12 < uVar18) {
        lVar9 = lVar9 + uVar12 * 0x10;
        while (lVar16 != lVar9) {
          lVar16 = lVar16 + -0x10;
          func_0x00010988c204(lVar16);
        }
        plVar7[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar12;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaa7560);
  (*pcVar2)();
}



/* Entry: 10aaa7424; end: 10aaa7573;  */

void FUN_10aaa7424(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10aaa73bc(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  puVar8 = (undefined4 *)plVar6[0x1d];
  puVar1 = (undefined4 *)plVar6[0x1e];
  uVar10 = ((long)puVar1 - (long)puVar8 >> 2) * -0x5555555555555555;
  iVar3 = (int)param_2;
  if (uVar10 < (ulong)(long)iVar3 || uVar10 - (long)iVar3 == 0) {
    FUN_10a00946c(&UNK_10f68d56a);
  }
  else {
    puVar12 = puVar8 + (long)iVar3 * 3;
    if (puVar1 != puVar12) {
      lVar7 = (long)puVar1 - (long)(puVar12 + 3);
      if (lVar7 != 0) {
        _memmove(puVar12,puVar12 + 3,lVar7);
        puVar8 = (undefined4 *)plVar6[0x1d];
      }
      puVar12 = (undefined4 *)((long)puVar12 + lVar7);
      plVar6[0x1e] = (long)puVar12;
      if (puVar8 == puVar12) {
        uVar18 = 0;
        uVar19 = 0x7f7fffff;
      }
      else {
        uVar18 = puVar12[-3];
        uVar19 = *puVar8;
      }
      *(undefined4 *)(plVar6 + 0x20) = uVar18;
      *(undefined4 *)((long)plVar6 + 0x104) = 0;
      *(undefined4 *)(plVar6 + 0x21) = uVar19;
      *(undefined4 *)(plVar6 + 0x23) = 0;
      plVar6 = plVar5 + 0x4b;
      *param_1 = 0;
      lVar7 = plVar5[0x59];
      uVar10 = lVar7 - 1;
      plVar5[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar6[lVar7 + 2];
        if (plVar5[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar10) {
          return;
        }
      }
      lVar7 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar11 = lVar14 - lVar7;
      uVar16 = lVar11 >> 4;
      if (uVar16 < uVar10) {
        uVar17 = uVar10 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar10 >> 0x3c == 0) {
            uVar9 = lVar15 - lVar7 >> 3;
            if (uVar9 <= uVar10) {
              uVar9 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar9 >> 0x3c == 0) {
              lVar4 = uVar9 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar11;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar7,lVar11);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar10 < uVar16) {
        lVar7 = lVar7 + uVar10 * 0x10;
        while (lVar14 != lVar7) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar10;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaa7560);
  (*pcVar2)();
}



/* Entry: 10aaa7574; end: 10aaa7863;  */

void FUN_10aaa7574(float param_1,undefined4 param_2,float param_3,long *param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7)

{
  float *pfVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined4 *extraout_x8;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  long unaff_x22;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  double dVar21;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  float afStack_5c [3];
  
  afStack_5c[0] = param_1;
  afStack_5c[1] = (float)param_2;
  afStack_5c[2] = param_3;
  plVar4 = param_4 + 0x1d;
  pfVar6 = (float *)*plVar4;
  pfVar1 = (float *)param_4[0x1e];
  lVar7 = (long)pfVar1 - (long)pfVar6 >> 2;
  pfVar11 = pfVar1;
  if ((long)pfVar1 - (long)pfVar6 != 0) {
    uVar8 = lVar7 * -0x5555555555555555;
    pfVar10 = pfVar6;
    do {
      uVar9 = uVar8 >> 1;
      pfVar11 = pfVar10 + uVar9 * 3 + 3;
      uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
      if (param_1 <= pfVar10[uVar9 * 3]) {
        pfVar11 = pfVar10;
        uVar8 = uVar9;
      }
      pfVar10 = pfVar11;
    } while (uVar8 != 0);
  }
  if (pfVar1 < (float *)param_4[0x1f]) {
    if (pfVar11 == pfVar1) {
      *(ulong *)pfVar1 = CONCAT44(param_2,param_1);
      pfVar1[2] = param_3;
      param_4[0x1e] = (long)(pfVar1 + 3);
    }
    else {
      pfVar6 = pfVar1;
      if (pfVar1 + -3 < pfVar1) {
        pfVar1[2] = pfVar1[-1];
        *(undefined8 *)pfVar1 = *(undefined8 *)(pfVar1 + -3);
        pfVar6 = pfVar1 + 3;
      }
      param_4[0x1e] = (long)pfVar6;
      if (pfVar1 != pfVar11 + 3) {
        _memmove(pfVar11 + 3,pfVar11);
        pfVar6 = (float *)param_4[0x1e];
      }
      if (pfVar6 < pfVar11) goto LAB_10aaa7844;
      lVar7 = 0xc;
      if (pfVar6 <= afStack_5c || afStack_5c < pfVar11) {
        lVar7 = 0;
      }
      *(undefined8 *)pfVar11 = *(undefined8 *)((long)afStack_5c + lVar7);
      pfVar11[2] = *(float *)((long)afStack_5c + lVar7 + 8);
    }
  }
  else {
    uVar8 = lVar7 * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar8) {
      FUN_10a107a00();
      if (unaff_x22 != 0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      plVar4 = param_4;
      (**(code **)(*param_4 + 0x58))();
      if ((ulong)plVar4[0x59] < 8) {
        plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
        plVar4[0x59] = plVar4[0x59] + 1;
      }
      else {
        func_0x00010988bfcc(plVar4 + 0x4b);
      }
      plVar13 = param_4;
      FUN_10aaa73bc(param_4,param_5);
      FUN_10aaa7970(param_7);
      if (*param_6 != 3) {
        func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaa795c);
        (*pcVar2)();
      }
      dVar21 = *(double *)(param_6 + 2);
      FUN_10a05a42c(param_4,param_6 + 4);
      fVar20 = (float)dVar21;
      if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
        fVar20 = 0.0;
      }
      FUN_10aaa7574(fVar20,(int)*param_4,*(undefined4 *)((long)param_4 + 4),plVar13);
      *extraout_x8 = 0;
      plVar13 = plVar4 + 0x4b;
      lVar7 = plVar4[0x59];
      uVar8 = lVar7 - 1;
      plVar4[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar13[lVar7 + 2];
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
      lVar7 = *plVar13;
      lVar18 = plVar4[0x4c];
      lVar15 = lVar18 - lVar7;
      uVar9 = lVar15 >> 4;
      if (uVar9 < uVar8) {
        uVar17 = uVar8 - uVar9;
        lVar12 = plVar4[0x4d];
        if ((ulong)(lVar12 - lVar18 >> 4) < uVar17) {
          if (uVar8 >> 0x3c == 0) {
            uVar5 = lVar12 - lVar7 >> 3;
            if (uVar5 <= uVar8) {
              uVar5 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
              uVar5 = 0xfffffffffffffff;
            }
            plStack_c8 = plVar13;
            if (uVar5 >> 0x3c == 0) {
              lVar3 = uVar5 << 4;
              __Znwm();
              lVar18 = lVar3 + lVar15;
              _bzero(lVar18,uVar17 * 0x10);
              lVar14 = lVar18 + uVar9 * -0x10;
              _memcpy(lVar14,lVar7,lVar15);
              *plVar13 = lVar14;
              plVar4[0x4c] = lVar18 + uVar17 * 0x10;
              plVar4[0x4d] = lVar3 + uVar5 * 0x10;
              lStack_e8 = lVar7;
              lStack_e0 = lVar7;
              lStack_d8 = lVar7;
              lStack_d0 = lVar12;
              func_0x00010988c1b8(&lStack_e8);
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
        _bzero(lVar18,uVar17 * 0x10);
        plVar4[0x4c] = lVar18 + uVar17 * 0x10;
      }
      else if (uVar8 < uVar9) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar18 != lVar7) {
          lVar18 = lVar18 + -0x10;
          func_0x00010988c204(lVar18);
        }
        plVar4[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar8;
      return;
    }
    lVar18 = (long)pfVar11 - (long)pfVar6;
    lVar7 = param_4[0x1f] - (long)pfVar6 >> 2;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0x1555555555555555;
    }
    if (uVar9 == 0) {
      plVar13 = (long *)0x0;
      lVar7 = 0;
    }
    else {
      plVar13 = plVar4;
      FUN_10a107a14();
      lVar7 = uVar9 * 0xc;
    }
    puVar16 = (undefined8 *)((long)plVar13 + lVar18);
    lVar15 = (long)plVar13 + lVar7;
    if (lVar18 == lVar7) {
      if (lVar18 < 1) {
        uVar8 = 1;
        if (pfVar11 != pfVar6) {
          uVar8 = ((ulong)-lVar18 >> 2) * -0x5555555555555556;
        }
        uVar9 = uVar8;
        FUN_10a107a14();
        puVar16 = (undefined8 *)((long)plVar4 + (uVar8 >> 2) * 0xc);
        lVar15 = (long)plVar4 + uVar9 * 0xc;
        if (plVar13 != (long *)0x0) {
          __ZdlPv(plVar13);
        }
      }
      else {
        lVar7 = ((long)puVar16 - (long)plVar13 >> 2) * -0x5555555555555555 + 1;
        puVar16 = (undefined8 *)((long)puVar16 + ((ulong)(lVar7 - (lVar7 >> 0x3f)) >> 1) * -0xc);
      }
    }
    *(float *)(puVar16 + 1) = afStack_5c[2];
    *puVar16 = CONCAT44(afStack_5c[1],afStack_5c[0]);
    _memcpy((long)puVar16 + 0xc,pfVar11,param_4[0x1e] - (long)pfVar11);
    lVar7 = param_4[0x1e];
    param_4[0x1e] = (long)pfVar11;
    lVar12 = (long)puVar16 - ((long)pfVar11 - param_4[0x1d]);
    _memcpy(lVar12);
    lVar18 = param_4[0x1d];
    param_4[0x1d] = lVar12;
    param_4[0x1e] = (long)puVar16 + 0xc + (lVar7 - (long)pfVar11);
    param_4[0x1f] = lVar15;
    if (lVar18 != 0) {
      __ZdlPv();
    }
  }
  if ((undefined4 *)param_4[0x1d] != (undefined4 *)param_4[0x1e]) {
    *(undefined4 *)(param_4 + 0x20) = ((undefined4 *)param_4[0x1e])[-3];
    uVar19 = *(undefined4 *)param_4[0x1d];
    *(undefined4 *)((long)param_4 + 0x104) = 0;
    *(undefined4 *)(param_4 + 0x21) = uVar19;
    *(undefined4 *)(param_4 + 0x23) = 0;
    return;
  }
LAB_10aaa7844:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaa7848);
  (*pcVar2)();
}



/* Entry: 10aaa7864; end: 10aaa796f;  */

void FUN_10aaa7864(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  float fVar14;
  double dVar15;
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
  FUN_10aaa73bc(param_2,param_3);
  FUN_10aaa7970(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaa795c);
    (*pcVar1)();
  }
  dVar15 = *(double *)(param_4 + 2);
  FUN_10a05a42c(param_2,param_4 + 4);
  fVar14 = (float)dVar15;
  if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
    fVar14 = 0.0;
  }
  FUN_10aaa7574(fVar14,(int)*param_2,*(undefined4 *)((long)param_2 + 4),plVar4);
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



/* Entry: 10aaa7970; end: 10aaa7993;  */

void FUN_10aaa7970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10aaa7a58(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  plVar3[0x1e] = plVar3[0x1d];
  plVar3[0x20] = 0;
  *(undefined4 *)(plVar3 + 0x21) = 0x7f7fffff;
  *(undefined4 *)((long)plVar3 + 0x11c) = 0;
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



/* Entry: 10aaa7994; end: 10aaa7a57;  */

void FUN_10aaa7994(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aaa7a58(param_2,param_3);
  FUN_10a052e3c(param_5);
  param_2[0x1e] = param_2[0x1d];
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x21) = 0x7f7fffff;
  *(undefined4 *)((long)param_2 + 0x11c) = 0;
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



/* Entry: 10aaa7a58; end: 10aaa7abf;  */

void FUN_10aaa7a58(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
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
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c3f8a0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10aaa7a58(plVar4,param_2);
  FUN_10a076f00(param_4);
  func_0x000109898518(plVar4,param_3);
  FUN_10aa825a4(plVar6 + 0x1c,(long)(int)plVar4);
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
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
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
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
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10aaa7ac0; end: 10aaa7b87;  */

void FUN_10aaa7ac0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aaa7a58(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  FUN_10aa825a4(plVar4 + 0x1c,(long)(int)param_2);
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



/* Entry: 10aaa7b88; end: 10aaa7caf;  */

void FUN_10aaa7b88(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  double dVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
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
  FUN_10aaa7a58(param_2,param_3);
  FUN_10aaa7cb0(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaa7c9c);
    (*pcVar1)();
  }
  dVar14 = *(double *)(param_4 + 2);
  func_0x00010a0655d8(param_2,param_4 + 4);
  fStack_60 = (float)dVar14;
  if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
    fStack_60 = 0.0;
  }
  uStack_54 = (undefined4)param_2[1];
  uStack_5c = (undefined4)*param_2;
  uStack_58 = (undefined4)((ulong)*param_2 >> 0x20);
  FUN_10aa82470(plVar4 + 0x1c,&fStack_60);
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
  fStack_60 = (float)unaff_x28;
  uStack_5c = (undefined4)((ulong)unaff_x28 >> 0x20);
  uStack_58 = (undefined4)unaff_x27;
  uStack_54 = (undefined4)((ulong)unaff_x27 >> 0x20);
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



/* Entry: 10aaa7cb0; end: 10aaa7cd3;  */

void FUN_10aaa7cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10aaa7d98(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  plVar3[0x1e] = plVar3[0x1d];
  plVar3[0x20] = 0;
  *(undefined4 *)(plVar3 + 0x21) = 0x7f7fffff;
  *(undefined4 *)(plVar3 + 0x24) = 0;
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



/* Entry: 10aaa7cd4; end: 10aaa7d97;  */

void FUN_10aaa7cd4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aaa7d98(param_2,param_3);
  FUN_10a052e3c(param_5);
  param_2[0x1e] = param_2[0x1d];
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x21) = 0x7f7fffff;
  *(undefined4 *)(param_2 + 0x24) = 0;
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



/* Entry: 10aaa7d98; end: 10aaa7dff;  */

void FUN_10aaa7d98(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 *extraout_x8;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c3f920;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10aaa7d98(plVar6,param_2);
  FUN_10a076f00(param_4);
  func_0x000109898518(plVar6,param_3);
  puVar10 = (undefined4 *)plVar8[0x1d];
  puVar1 = (undefined4 *)plVar8[0x1e];
  uVar12 = ((long)puVar1 - (long)puVar10 >> 2) * -0x3333333333333333;
  iVar3 = (int)plVar6;
  if (uVar12 < (ulong)(long)iVar3 || uVar12 - (long)iVar3 == 0) {
    FUN_10a00946c(&UNK_10f68d56a);
  }
  else {
    puVar14 = puVar10 + (long)iVar3 * 5;
    if (puVar1 != puVar14) {
      lVar9 = (long)puVar1 - (long)(puVar14 + 5);
      if (lVar9 != 0) {
        _memmove(puVar14,puVar14 + 5,lVar9);
        puVar10 = (undefined4 *)plVar8[0x1d];
      }
      puVar14 = (undefined4 *)((long)puVar14 + lVar9);
      plVar8[0x1e] = (long)puVar14;
      if (puVar10 == puVar14) {
        uVar20 = 0;
        uVar21 = 0x7f7fffff;
      }
      else {
        uVar20 = puVar14[-5];
        uVar21 = *puVar10;
      }
      *(undefined4 *)(plVar8 + 0x20) = uVar20;
      *(undefined4 *)((long)plVar8 + 0x104) = 0;
      *(undefined4 *)(plVar8 + 0x21) = uVar21;
      *(undefined4 *)(plVar8 + 0x24) = 0;
      plVar6 = plVar7 + 0x4b;
      *extraout_x8 = 0;
      lVar9 = plVar7[0x59];
      uVar12 = lVar9 - 1;
      plVar7[0x59] = uVar12;
      if (uVar12 < 8) {
        uVar12 = plVar6[lVar9 + 2];
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
      lVar9 = *plVar6;
      lVar16 = plVar7[0x4c];
      lVar13 = lVar16 - lVar9;
      uVar18 = lVar13 >> 4;
      if (uVar18 < uVar12) {
        uVar19 = uVar12 - uVar18;
        lVar17 = plVar7[0x4d];
        if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
          if (uVar12 >> 0x3c == 0) {
            uVar11 = lVar17 - lVar9 >> 3;
            if (uVar11 <= uVar12) {
              uVar11 = uVar12;
            }
            if (0x7fffffffffffffef < (ulong)(lVar17 - lVar9)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_88 = plVar6;
            if (uVar11 >> 0x3c == 0) {
              lVar4 = uVar11 << 4;
              __Znwm();
              lVar16 = lVar4 + lVar13;
              _bzero(lVar16,uVar19 * 0x10);
              lVar15 = lVar16 + uVar18 * -0x10;
              _memcpy(lVar15,lVar9,lVar13);
              *plVar6 = lVar15;
              plVar7[0x4c] = lVar16 + uVar19 * 0x10;
              plVar7[0x4d] = lVar4 + uVar11 * 0x10;
              lStack_a8 = lVar9;
              lStack_a0 = lVar9;
              lStack_98 = lVar9;
              lStack_90 = lVar17;
              func_0x00010988c1b8(&lStack_a8);
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
        _bzero(lVar16,uVar19 * 0x10);
        plVar7[0x4c] = lVar16 + uVar19 * 0x10;
      }
      else if (uVar12 < uVar18) {
        lVar9 = lVar9 + uVar12 * 0x10;
        while (lVar16 != lVar9) {
          lVar16 = lVar16 + -0x10;
          func_0x00010988c204(lVar16);
        }
        plVar7[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar12;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaa7f3c);
  (*pcVar2)();
}



/* Entry: 10aaa7e00; end: 10aaa7f4f;  */

void FUN_10aaa7e00(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10aaa7d98(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  puVar8 = (undefined4 *)plVar6[0x1d];
  puVar1 = (undefined4 *)plVar6[0x1e];
  uVar10 = ((long)puVar1 - (long)puVar8 >> 2) * -0x3333333333333333;
  iVar3 = (int)param_2;
  if (uVar10 < (ulong)(long)iVar3 || uVar10 - (long)iVar3 == 0) {
    FUN_10a00946c(&UNK_10f68d56a);
  }
  else {
    puVar12 = puVar8 + (long)iVar3 * 5;
    if (puVar1 != puVar12) {
      lVar7 = (long)puVar1 - (long)(puVar12 + 5);
      if (lVar7 != 0) {
        _memmove(puVar12,puVar12 + 5,lVar7);
        puVar8 = (undefined4 *)plVar6[0x1d];
      }
      puVar12 = (undefined4 *)((long)puVar12 + lVar7);
      plVar6[0x1e] = (long)puVar12;
      if (puVar8 == puVar12) {
        uVar18 = 0;
        uVar19 = 0x7f7fffff;
      }
      else {
        uVar18 = puVar12[-5];
        uVar19 = *puVar8;
      }
      *(undefined4 *)(plVar6 + 0x20) = uVar18;
      *(undefined4 *)((long)plVar6 + 0x104) = 0;
      *(undefined4 *)(plVar6 + 0x21) = uVar19;
      *(undefined4 *)(plVar6 + 0x24) = 0;
      plVar6 = plVar5 + 0x4b;
      *param_1 = 0;
      lVar7 = plVar5[0x59];
      uVar10 = lVar7 - 1;
      plVar5[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar6[lVar7 + 2];
        if (plVar5[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar10) {
          return;
        }
      }
      lVar7 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar11 = lVar14 - lVar7;
      uVar16 = lVar11 >> 4;
      if (uVar16 < uVar10) {
        uVar17 = uVar10 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar10 >> 0x3c == 0) {
            uVar9 = lVar15 - lVar7 >> 3;
            if (uVar9 <= uVar10) {
              uVar9 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar9 >> 0x3c == 0) {
              lVar4 = uVar9 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar11;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar7,lVar11);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar10 < uVar16) {
        lVar7 = lVar7 + uVar10 * 0x10;
        while (lVar14 != lVar7) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar10;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaa7f3c);
  (*pcVar2)();
}



/* Entry: 10aaa7f50; end: 10aaa8243;  */

void FUN_10aaa7f50(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,long *param_6,undefined8 param_7,int *param_8,undefined8 param_9)

{
  float *pfVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined4 *extraout_x8;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  long unaff_x22;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  double dVar22;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  float afStack_64 [2];
  undefined8 uStack_5c;
  float fStack_54;
  
  afStack_64[0] = param_1;
  afStack_64[1] = (float)param_2;
  uStack_5c._0_4_ = param_3;
  uStack_5c._4_4_ = param_4;
  fStack_54 = param_5;
  plVar4 = param_6 + 0x1d;
  pfVar6 = (float *)*plVar4;
  pfVar1 = (float *)param_6[0x1e];
  lVar7 = (long)pfVar1 - (long)pfVar6 >> 2;
  pfVar11 = pfVar1;
  if ((long)pfVar1 - (long)pfVar6 != 0) {
    uVar8 = lVar7 * -0x3333333333333333;
    pfVar10 = pfVar6;
    do {
      uVar9 = uVar8 >> 1;
      pfVar11 = pfVar10 + uVar9 * 5 + 5;
      uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
      if (param_1 <= pfVar10[uVar9 * 5]) {
        pfVar11 = pfVar10;
        uVar8 = uVar9;
      }
      pfVar10 = pfVar11;
    } while (uVar8 != 0);
  }
  if (pfVar1 < (float *)param_6[0x1f]) {
    if (pfVar11 == pfVar1) {
      *(ulong *)(pfVar1 + 2) = CONCAT44(param_4,param_3);
      *(ulong *)pfVar1 = CONCAT44(param_2,param_1);
      pfVar1[4] = param_5;
      param_6[0x1e] = (long)(pfVar1 + 5);
    }
    else {
      pfVar6 = pfVar1;
      if (pfVar1 + -5 < pfVar1) {
        pfVar1[4] = pfVar1[-1];
        *(undefined8 *)(pfVar1 + 2) = *(undefined8 *)(pfVar1 + -3);
        *(undefined8 *)pfVar1 = *(undefined8 *)(pfVar1 + -5);
        pfVar6 = pfVar1 + 5;
      }
      param_6[0x1e] = (long)pfVar6;
      if (pfVar1 != pfVar11 + 5) {
        _memmove(pfVar11 + 5,pfVar11);
        pfVar6 = (float *)param_6[0x1e];
      }
      if (pfVar6 < pfVar11) goto LAB_10aaa8224;
      lVar7 = 0x14;
      if (pfVar6 <= afStack_64 || afStack_64 < pfVar11) {
        lVar7 = 0;
      }
      uVar21 = *(undefined8 *)((long)afStack_64 + lVar7);
      *(undefined8 *)(pfVar11 + 2) = *(undefined8 *)((long)&uStack_5c + lVar7);
      *(undefined8 *)pfVar11 = uVar21;
      pfVar11[4] = *(float *)((long)&fStack_54 + lVar7);
    }
  }
  else {
    uVar8 = lVar7 * -0x3333333333333333 + 1;
    if (0xccccccccccccccc < uVar8) {
      FUN_10a107a9c();
      if (unaff_x22 != 0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      plVar4 = param_6;
      (**(code **)(*param_6 + 0x58))();
      if ((ulong)plVar4[0x59] < 8) {
        plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
        plVar4[0x59] = plVar4[0x59] + 1;
      }
      else {
        func_0x00010988bfcc(plVar4 + 0x4b);
      }
      plVar13 = param_6;
      FUN_10aaa7d98(param_6,param_7);
      FUN_10a213388(param_9);
      if (*param_8 != 3) {
        func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaa8340);
        (*pcVar2)();
      }
      dVar22 = *(double *)(param_8 + 2);
      func_0x00010a1fba38(param_6,param_8 + 4);
      fVar20 = (float)dVar22;
      if (0x7fefffffffffffff < (ulong)ABS(dVar22)) {
        fVar20 = 0.0;
      }
      FUN_10aaa7f50(fVar20,(int)*param_6,*(undefined4 *)((long)param_6 + 4),(int)param_6[1],
                    *(undefined4 *)((long)param_6 + 0xc),plVar13);
      *extraout_x8 = 0;
      plVar13 = plVar4 + 0x4b;
      lVar7 = plVar4[0x59];
      uVar8 = lVar7 - 1;
      plVar4[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar13[lVar7 + 2];
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
      lVar7 = *plVar13;
      lVar18 = plVar4[0x4c];
      lVar15 = lVar18 - lVar7;
      uVar9 = lVar15 >> 4;
      if (uVar9 < uVar8) {
        uVar17 = uVar8 - uVar9;
        lVar12 = plVar4[0x4d];
        if ((ulong)(lVar12 - lVar18 >> 4) < uVar17) {
          if (uVar8 >> 0x3c == 0) {
            uVar5 = lVar12 - lVar7 >> 3;
            if (uVar5 <= uVar8) {
              uVar5 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
              uVar5 = 0xfffffffffffffff;
            }
            plStack_d8 = plVar13;
            if (uVar5 >> 0x3c == 0) {
              lVar3 = uVar5 << 4;
              __Znwm();
              lVar18 = lVar3 + lVar15;
              _bzero(lVar18,uVar17 * 0x10);
              lVar14 = lVar18 + uVar9 * -0x10;
              _memcpy(lVar14,lVar7,lVar15);
              *plVar13 = lVar14;
              plVar4[0x4c] = lVar18 + uVar17 * 0x10;
              plVar4[0x4d] = lVar3 + uVar5 * 0x10;
              lStack_f8 = lVar7;
              lStack_f0 = lVar7;
              lStack_e8 = lVar7;
              lStack_e0 = lVar12;
              func_0x00010988c1b8(&lStack_f8);
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
        _bzero(lVar18,uVar17 * 0x10);
        plVar4[0x4c] = lVar18 + uVar17 * 0x10;
      }
      else if (uVar8 < uVar9) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar18 != lVar7) {
          lVar18 = lVar18 + -0x10;
          func_0x00010988c204(lVar18);
        }
        plVar4[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar8;
      return;
    }
    lVar18 = (long)pfVar11 - (long)pfVar6;
    lVar7 = param_6[0x1f] - (long)pfVar6 >> 2;
    uVar9 = lVar7 * -0x6666666666666666;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x666666666666665 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar9 = 0xccccccccccccccc;
    }
    if (uVar9 == 0) {
      plVar13 = (long *)0x0;
      lVar7 = 0;
    }
    else {
      plVar13 = plVar4;
      FUN_10a107ab0();
      lVar7 = uVar9 * 0x14;
    }
    puVar16 = (undefined8 *)((long)plVar13 + lVar18);
    lVar15 = (long)plVar13 + lVar7;
    if (lVar18 == lVar7) {
      if (lVar18 < 1) {
        uVar8 = 1;
        if (pfVar11 != pfVar6) {
          uVar8 = ((ulong)-lVar18 >> 2) * 0x6666666666666666;
        }
        uVar9 = uVar8;
        FUN_10a107ab0();
        puVar16 = (undefined8 *)((long)plVar4 + (uVar8 >> 2) * 0x14);
        lVar15 = (long)plVar4 + uVar9 * 0x14;
        if (plVar13 != (long *)0x0) {
          __ZdlPv(plVar13);
        }
      }
      else {
        lVar7 = ((long)puVar16 - (long)plVar13 >> 2) * -0x3333333333333333 + 1;
        puVar16 = (undefined8 *)((long)puVar16 + ((ulong)(lVar7 - (lVar7 >> 0x3f)) >> 1) * -0x14);
      }
    }
    *(float *)(puVar16 + 2) = fStack_54;
    puVar16[1] = CONCAT44(uStack_5c._4_4_,(undefined4)uStack_5c);
    *puVar16 = CONCAT44(afStack_64[1],afStack_64[0]);
    _memcpy((long)puVar16 + 0x14,pfVar11,param_6[0x1e] - (long)pfVar11);
    lVar7 = param_6[0x1e];
    param_6[0x1e] = (long)pfVar11;
    lVar12 = (long)puVar16 - ((long)pfVar11 - param_6[0x1d]);
    _memcpy(lVar12);
    lVar18 = param_6[0x1d];
    param_6[0x1d] = lVar12;
    param_6[0x1e] = (long)puVar16 + 0x14 + (lVar7 - (long)pfVar11);
    param_6[0x1f] = lVar15;
    if (lVar18 != 0) {
      __ZdlPv();
    }
  }
  if ((undefined4 *)param_6[0x1d] != (undefined4 *)param_6[0x1e]) {
    *(undefined4 *)(param_6 + 0x20) = ((undefined4 *)param_6[0x1e])[-5];
    uVar19 = *(undefined4 *)param_6[0x1d];
    *(undefined4 *)((long)param_6 + 0x104) = 0;
    *(undefined4 *)(param_6 + 0x21) = uVar19;
    *(undefined4 *)(param_6 + 0x24) = 0;
    return;
  }
LAB_10aaa8224:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaa8228);
  (*pcVar2)();
}



/* Entry: 10aaa8244; end: 10aaa8353;  */

void FUN_10aaa8244(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  float fVar14;
  double dVar15;
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
  FUN_10aaa7d98(param_2,param_3);
  FUN_10a213388(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaa8340);
    (*pcVar1)();
  }
  dVar15 = *(double *)(param_4 + 2);
  func_0x00010a1fba38(param_2,param_4 + 4);
  fVar14 = (float)dVar15;
  if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
    fVar14 = 0.0;
  }
  FUN_10aaa7f50(fVar14,(int)*param_2,*(undefined4 *)((long)param_2 + 4),(int)param_2[1],
                *(undefined4 *)((long)param_2 + 0xc),plVar4);
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



/* Entry: 10aaa8354; end: 10aaa8417;  */

void FUN_10aaa8354(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aaa8418(param_2,param_3);
  FUN_10a052e3c(param_5);
  param_2[0x1e] = param_2[0x1d];
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x21) = 0x7f7fffff;
  *(undefined4 *)(param_2 + 0x24) = 0;
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



/* Entry: 10aaa8418; end: 10aaa847f;  */

void FUN_10aaa8418(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
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
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c3f970;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10aaa8418(plVar4,param_2);
  FUN_10a076f00(param_4);
  func_0x000109898518(plVar4,param_3);
  FUN_10aa8306c(plVar6 + 0x1c,(long)(int)plVar4);
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
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
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
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
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}


