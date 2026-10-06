/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0597d0; end: 10a059827;  */

void FUN_10a0597d0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a059828();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a059828; end: 10a0598a3;  */

void FUN_10a059828(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9f608;
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



/* Entry: 10a0598a4; end: 10a0598c3;  */

void FUN_10a0598a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9f608;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0598c4; end: 10a0598eb;  */

undefined1  [16] FUN_10a0598c4(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a0598e8);
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



/* Entry: 10a0598ec; end: 10a059943;  */

long FUN_10a0598ec(long param_1)

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



/* Entry: 10a059944; end: 10a059eeb;  */

/* WARNING: Possible PIC construction at 0x00010a059ee0: Changing call to branch */

void FUN_10a059944(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4,
                  undefined *****param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  uint *puVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  long lVar15;
  long *unaff_x22;
  long lVar16;
  long lVar17;
  undefined *****unaff_x23;
  long lVar18;
  uint *unaff_x24;
  ulong uVar19;
  uint *unaff_x25;
  uint *puVar20;
  ulong uVar21;
  undefined *****unaff_x26;
  undefined *****pppppuVar22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plVar23;
  undefined1 auStack_190 [8];
  long *plStack_188;
  undefined ****ppppuStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined1 auStack_168 [40];
  undefined1 uStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  uint auStack_120 [2];
  undefined8 *puStack_118;
  undefined ****ppppuStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  byte bStack_f8;
  char cStack_f0;
  undefined ****ppppuStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined ****ppppuStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  byte bStack_78;
  char cStack_70;
  long lStack_68;
  
  puVar10 = auStack_190;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar23 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar23[0x59] < 8) {
    plVar23[plVar23[0x59] + 0x4e] = plVar23[0x5a];
    plVar23[0x59] = plVar23[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar23 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a0551fc(param_2,param_3);
  FUN_10a059eec(param_5);
  auStack_120[0] = 0;
  puVar20 = auStack_120;
  if (param_5 != (undefined *****)0x0) {
    puVar20 = param_4;
  }
  func_0x000109898570(auStack_138,param_2,puVar20);
  puVar20 = auStack_120;
  if ((undefined *****)0x1 < param_5) {
    puVar20 = param_4 + 4;
  }
  pppppuVar22 = unaff_x26;
  if (1 < *puVar20) {
    if (*puVar20 == 6) {
      func_0x000109898570(&ppppuStack_e0,param_2,puVar20);
      puVar20 = (uint *)0x0;
      uStack_c8 = 0;
LAB_10a059b28:
      puStack_108 = puStack_d8;
      ppppuStack_110 = ppppuStack_e0;
      lStack_100 = lStack_d0;
      ppppuStack_e0 = (undefined ****)0x0;
      puStack_d8 = (undefined8 *)0x0;
      lStack_d0 = 0;
      bStack_f8 = (byte)puVar20;
      cStack_f0 = '\x01';
      (*(code *)(&PTR_FUN_110b9f188)[(long)puVar20])(&ppppuStack_e0);
      goto LAB_10a059b60;
    }
    func_0x000109884c0c(&ppppuStack_e0,puVar20,param_2);
    func_0x00010988469c(&ppppuStack_180,&ppppuStack_e0,param_2);
    if ((undefined *****)ppppuStack_e0 != (undefined *****)0x0) {
      (*(code *)**ppppuStack_e0)();
    }
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x268))(param_2,&ppppuStack_180);
    if (plVar9 == (long *)0x0) {
      bVar6 = true;
    }
    else {
      (**(code **)(*param_2 + 0x288))(&ppppuStack_e0,param_2,&ppppuStack_180,0);
      bVar6 = (int)ppppuStack_e0 == 6;
      if ((3 < (int)ppppuStack_e0) && (puStack_d8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_d8)();
      }
    }
    if ((undefined *****)ppppuStack_180 != (undefined *****)0x0) {
      (*(code *)**ppppuStack_180)();
    }
    if (bVar6) {
      pppppuVar22 = &ppppuStack_180;
      func_0x000109898f04(&ppppuStack_180,param_2,puVar20);
      puStack_d8 = puStack_178;
      ppppuStack_e0 = ppppuStack_180;
      lStack_d0 = lStack_170;
      puStack_178 = (undefined8 *)0x0;
      lStack_170 = 0;
      ppppuStack_180 = (undefined ****)0x0;
      puVar20 = (uint *)0x1;
      uStack_c8 = 1;
      ppppuStack_90 = (undefined ****)pppppuVar22;
      FUN_10a0426d8(&ppppuStack_90);
      goto LAB_10a059b28;
    }
LAB_10a059de0:
    func_0x00010988bd28(&UNK_10f634795);
LAB_10a059eac:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a059eb0);
    (*pcVar5)();
  }
  ppppuStack_110 = (undefined ****)((ulong)ppppuStack_110 & 0xffffffffffffff00);
  cStack_f0 = '\0';
LAB_10a059b60:
  puVar3 = auStack_120;
  if ((undefined *****)0x2 < param_5) {
    puVar3 = param_4 + 8;
  }
  if (*puVar3 < 2) {
    uStack_140 = 0;
    ppppuStack_180 = (undefined ****)((ulong)ppppuStack_180 & 0xffffffffffffff00);
  }
  else {
    plVar9 = param_2;
    func_0x00010a05a118();
    param_5 = &ppppuStack_180;
    lStack_170 = plVar9[2];
    puStack_178 = (undefined8 *)plVar9[1];
    if (plVar9[2] != 0) {
      plVar2 = (long *)(plVar9[2] + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppppuStack_180 = (undefined ****)&PTR_FUN_110c35298;
    func_0x000107c2791c(auStack_168,plVar9 + 3);
    uStack_140 = 1;
  }
  ppppuStack_90 = (undefined ****)((ulong)ppppuStack_90 & 0xffffffffffffff00);
  cStack_70 = '\0';
  if (cStack_f0 == '\x01') {
    if ((bStack_f8 == 1) || (bStack_f8 == 0)) {
      puStack_88 = puStack_108;
      ppppuStack_90 = ppppuStack_110;
      lStack_80 = lStack_100;
      ppppuStack_110 = (undefined ****)0x0;
      puStack_108 = (undefined8 *)0x0;
      lStack_100 = 0;
    }
    bStack_78 = bStack_f8;
    cStack_70 = '\x01';
  }
  FUN_10a042418(&ppppuStack_e0,&ppppuStack_180);
  FUN_10a00b100(auStack_190,plVar8,auStack_138,&ppppuStack_90,&ppppuStack_e0);
  FUN_10a042530(&ppppuStack_e0);
  if (cStack_70 == '\x01') {
    if (2 < (ulong)bStack_78) goto LAB_10a059eac;
    (*(code *)(&PTR_FUN_110b9f188)[bStack_78])(&ppppuStack_90);
  }
  FUN_10a042530(&ppppuStack_180);
  if (cStack_f0 == '\x01') {
    if (2 < (ulong)bStack_f8) goto LAB_10a059eac;
    (*(code *)(&PTR_FUN_110b9f188)[bStack_f8])(&ppppuStack_110);
  }
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  if ((3 < (int)auStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
    (**(code **)*puStack_118)();
  }
  FUN_10a059f1c(param_1);
  if (plStack_188 != (long *)0x0) {
    plVar9 = plStack_188 + 1;
    do {
      lVar14 = *plVar9;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_2 = plStack_188;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((int)puVar10 == 0) {
      __Unwind_Resume();
      if (((int)param_2 != 3) && (1 < (int)param_2 - 1U)) {
        puVar11 = (undefined8 *)0x2;
        FUN_10a052ee0(3,2,param_2);
        plVar23 = (long *)puVar11[1];
        *puVar11 = 0;
        puVar11[1] = 0;
        func_0x000109899de4();
        if (plVar23 != (long *)0x0) {
          plVar8 = plVar23 + 1;
          do {
            lVar14 = *plVar8;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
          }
        }
        return;
      }
      return;
    }
    if ((undefined *****)ppppuStack_180 != (undefined *****)0x0) {
      (*(code *)**ppppuStack_180)();
    }
    if ((int)puVar10 == 2) {
      ___cxa_begin_catch(param_2);
      ___cxa_end_catch();
      goto LAB_10a059de0;
    }
    func_0x000104bd46a0();
    ppppuStack_180 = (undefined ****)&PTR_DAT_110b17898;
    func_0x00010a004dac(param_5 + 1);
    if (cStack_f0 == '\x01') {
      if (2 < (ulong)bStack_f8) goto LAB_10a059eac;
      (*(code *)(&PTR_FUN_110b9f188)[bStack_f8])(&ppppuStack_110);
    }
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    if ((3 < (int)auStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    unaff_x30 = 0x10a059ee4;
    register0x00000008 = (BADSPACEBASE *)auStack_190;
    unaff_x19 = plVar23;
    unaff_x20 = param_2;
    unaff_x21 = puVar10;
    unaff_x22 = plVar8;
    unaff_x23 = param_5;
    unaff_x24 = param_4;
    unaff_x25 = puVar20;
    unaff_x26 = pppppuVar22;
    unaff_x29 = puVar1;
  }
  plVar8 = plVar23 + 0x4b;
  lVar14 = plVar23[0x59];
  uVar12 = lVar14 - 1;
  plVar23[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar8[lVar14 + 2];
    if (plVar23[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar23[0x57] + -8);
    plVar23[0x57] = plVar23[0x57] + -8;
    if (plVar23[0x5a] == uVar12) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined ******)((long)register0x00000008 + -0x50) = unaff_x26;
  *(uint **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(uint **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined ******)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar14 = *plVar8;
  lVar17 = plVar23[0x4c];
  lVar15 = lVar17 - lVar14;
  uVar19 = lVar15 >> 4;
  if (uVar19 < uVar12) {
    uVar21 = uVar12 - uVar19;
    lVar18 = plVar23[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar21) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar14 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar14)) {
          uVar13 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar8;
        if (uVar13 >> 0x3c == 0) {
          lVar7 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar7 + lVar15;
          _bzero(lVar17,uVar21 * 0x10);
          lVar16 = lVar17 + uVar19 * -0x10;
          _memcpy(lVar16,lVar14,lVar15);
          *plVar8 = lVar16;
          plVar23[0x4c] = lVar17 + uVar21 * 0x10;
          plVar23[0x4d] = lVar7 + uVar13 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar14;
          *(long *)((long)register0x00000008 + -0x70) = lVar18;
          *(long *)((long)register0x00000008 + -0x88) = lVar14;
          *(long *)((long)register0x00000008 + -0x80) = lVar14;
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
    _bzero(lVar17,uVar21 * 0x10);
    plVar23[0x4c] = lVar17 + uVar21 * 0x10;
  }
  else if (uVar12 < uVar19) {
    lVar14 = lVar14 + uVar12 * 0x10;
    while (lVar17 != lVar14) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar23[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar23[0x5a] = uVar12;
  return;
}



/* Entry: 10a059eec; end: 10a059f1b;  */

void FUN_10a059eec(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  if (((int)param_1 != 3) && (1 < (int)param_1 - 1U)) {
    puVar4 = (undefined8 *)0x2;
    FUN_10a052ee0(3,2,param_1);
    plVar6 = (long *)puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    func_0x000109899de4();
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
    return;
  }
  return;
}



/* Entry: 10a059f1c; end: 10a059f9f;  */

void FUN_10a059f1c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  ppuStack_38 = &PTR_DAT_110c353b8;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a059fa0; end: 10a05a0bf;  */

undefined1  [16] FUN_10a059fa0(undefined **param_1,undefined **param_2)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 ***pppuVar13;
  code *pcVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 **ppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < param_1[2]) {
    puVar15 = param_2[1];
    puVar9 = *param_2;
    puVar6[2] = param_2[2];
    puVar6[1] = puVar15;
    *puVar6 = puVar9;
    param_2[1] = (undefined *)0x0;
    param_2[2] = (undefined *)0x0;
    *param_2 = (undefined *)0x0;
    puVar6 = puVar6 + 3;
    ppuVar3 = param_1;
  }
  else {
    lVar12 = (long)puVar6 - (long)*param_1;
    uVar8 = (lVar12 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      ppuVar7 = param_2;
      FUN_10a05a0c0();
      pcStack_68 = FUN_10a05a0c0;
      ppuVar3 = (undefined **)&UNK_10f6334ac;
      puStack_70 = &stack0xfffffffffffffff0;
      FUN_109ffde64();
      pcStack_78 = FUN_10a05a0d4;
      ppuStack_a0 = &puStack_80;
      ppuStack_90 = param_2;
      ppuStack_88 = param_1;
      if (ppuVar7 < (undefined **)0xaaaaaaaaaaaaaab) {
        lVar12 = (long)ppuVar7 * 0x18;
        puStack_80 = &puStack_70;
        __Znwm(lVar12);
        auVar17._8_8_ = ppuVar7;
        auVar17._0_8_ = lVar12;
        return auVar17;
      }
      puStack_80 = &puStack_70;
      func_0x000109ffded8();
      pppuVar2 = &ppuStack_b0;
      pcStack_98 = (code *)0x10a05a118;
      pppuVar13 = &ppuStack_a0;
      ppuVar4 = ppuVar3;
      ppuStack_b0 = param_2;
      ppuStack_a8 = param_1;
      func_0x000109898688();
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f68f52e;
        pcVar14 = FUN_10a05a150;
        func_0x00010988bd28();
      }
      else {
        pppuVar2 = &ppuStack_90;
        ppuVar5 = ppuVar3;
        ppuVar7 = ppuVar4;
        ppuVar3 = ppuStack_a8;
        param_2 = ppuStack_b0;
        pppuVar13 = (undefined8 ***)ppuStack_a0;
        pcVar14 = pcStack_98;
      }
      *(undefined8 ****)((long)pppuVar2 + -0x10) = pppuVar13;
      *(code **)((long)pppuVar2 + -8) = pcVar14;
      FUN_10a053854();
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar7 = &PTR_DAT_110b178e0;
        ___dynamic_cast();
        if (ppuVar5 != (undefined **)0x0) {
          auVar18._8_8_ = ppuVar7;
          auVar18._0_8_ = ppuVar5;
          return auVar18;
        }
      }
      puVar6 = (undefined8 *)&UNK_10f685496;
      func_0x00010988bd28();
      *(undefined ***)((long)pppuVar2 + -0x30) = param_2;
      *(undefined ***)((long)pppuVar2 + -0x28) = ppuVar3;
      *(undefined1 **)((long)pppuVar2 + -0x20) = (undefined1 *)((long)pppuVar2 + -0x10);
      *(code **)((long)pppuVar2 + -0x18) = FUN_10a05a190;
      if (*(char *)((long)ppuVar7 + 0x17) < '\0') {
        ppuVar3 = (undefined **)*ppuVar7;
        func_0x000107c3192c(puVar6,ppuVar3,ppuVar7[1]);
      }
      else {
        puVar15 = ppuVar7[1];
        puVar9 = *ppuVar7;
        puVar6[2] = ppuVar7[2];
        puVar6[1] = puVar15;
        *puVar6 = puVar9;
        ppuVar3 = ppuVar7;
      }
      if (*(char *)((long)ppuVar7 + 0x2f) < '\0') {
        ppuVar3 = (undefined **)ppuVar7[3];
        func_0x000107c3192c(puVar6 + 3,ppuVar3,ppuVar7[4]);
      }
      else {
        puVar15 = ppuVar7[4];
        puVar9 = ppuVar7[3];
        puVar6[5] = ppuVar7[5];
        puVar6[4] = puVar15;
        puVar6[3] = puVar9;
      }
      auVar19._8_8_ = ppuVar3;
      auVar19._0_8_ = puVar6;
      return auVar19;
    }
    lVar10 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar11 = lVar10 * 0x5555555555555556;
    if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
      uVar11 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    ppuVar3 = param_1;
    ppuStack_38 = param_1;
    FUN_10a05a0d4();
    puVar1 = (undefined8 *)((long)ppuVar3 + lVar12);
    puVar9 = param_2[2];
    puVar15 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = puVar15;
    puVar1[2] = puVar9;
    param_2[1] = (undefined *)0x0;
    param_2[2] = (undefined *)0x0;
    *param_2 = (undefined *)0x0;
    puVar6 = puVar1 + 3;
    param_2 = (undefined **)*param_1;
    puVar9 = (undefined *)((long)puVar1 - ((long)param_1[1] - (long)param_2));
    _memcpy(puVar9);
    puStack_58 = *param_1;
    *param_1 = puVar9;
    param_1[1] = (undefined *)puVar6;
    puStack_40 = param_1[2];
    param_1[2] = (undefined *)(ppuVar3 + uVar11 * 3);
    ppuVar3 = &puStack_58;
    puStack_50 = puStack_58;
    puStack_48 = puStack_58;
    func_0x000107c31938(ppuVar3);
  }
  param_1[1] = (undefined *)puVar6;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = ppuVar3;
  return auVar16;
}



/* Entry: 10a05a0c0; end: 10a05a0d3;  */

undefined1  [16] FUN_10a05a0c0(undefined8 param_1,undefined **param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 ***pppuVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 **ppuStack_40;
  code *pcStack_38;
  undefined8 *puStack_20;
  code *pcStack_18;
  
  ppuVar2 = (undefined **)&UNK_10f6334ac;
  FUN_109ffde64();
  pcStack_18 = FUN_10a05a0d4;
  ppuStack_40 = &puStack_20;
  if (param_2 < (undefined **)0xaaaaaaaaaaaaaab) {
    lVar3 = (long)param_2 * 0x18;
    puStack_20 = (undefined8 *)&stack0xfffffffffffffff0;
    __Znwm(lVar3);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar3;
    return auVar11;
  }
  puStack_20 = (undefined8 *)&stack0xfffffffffffffff0;
  func_0x000109ffded8();
  puVar1 = &stack0xffffffffffffffb0;
  pcStack_38 = (code *)0x10a05a118;
  pppuVar7 = &ppuStack_40;
  ppuVar4 = ppuVar2;
  func_0x000109898688();
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar5 = (undefined **)&UNK_10f68f52e;
    pcVar8 = FUN_10a05a150;
    func_0x00010988bd28();
  }
  else {
    puVar1 = &stack0xffffffffffffffd0;
    ppuVar5 = ppuVar2;
    param_2 = ppuVar4;
    ppuVar2 = unaff_x19;
    pppuVar7 = (undefined8 ***)ppuStack_40;
    pcVar8 = pcStack_38;
  }
  *(undefined8 ****)(puVar1 + -0x10) = pppuVar7;
  *(code **)(puVar1 + -8) = pcVar8;
  FUN_10a053854();
  if (ppuVar5 != (undefined **)0x0) {
    param_2 = &PTR_DAT_110b178e0;
    ___dynamic_cast();
    if (ppuVar5 != (undefined **)0x0) {
      auVar12._8_8_ = param_2;
      auVar12._0_8_ = ppuVar5;
      return auVar12;
    }
  }
  puVar6 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)(puVar1 + -0x30) = unaff_x20;
  *(undefined ***)(puVar1 + -0x28) = ppuVar2;
  *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
  *(code **)(puVar1 + -0x18) = FUN_10a05a190;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    ppuVar2 = (undefined **)*param_2;
    func_0x000107c3192c(puVar6,ppuVar2,param_2[1]);
  }
  else {
    puVar10 = param_2[1];
    puVar9 = *param_2;
    puVar6[2] = param_2[2];
    puVar6[1] = puVar10;
    *puVar6 = puVar9;
    ppuVar2 = param_2;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    ppuVar2 = (undefined **)param_2[3];
    func_0x000107c3192c(puVar6 + 3,ppuVar2,param_2[4]);
  }
  else {
    puVar10 = param_2[4];
    puVar9 = param_2[3];
    puVar6[5] = param_2[5];
    puVar6[4] = puVar10;
    puVar6[3] = puVar9;
  }
  auVar13._8_8_ = ppuVar2;
  auVar13._0_8_ = puVar6;
  return auVar13;
}



/* Entry: 10a05a0d4; end: 10a05a14f;  */

undefined1  [16] FUN_10a05a0d4(undefined **param_1,undefined **param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 ***pppuVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 **ppuStack_30;
  code *pcStack_28;
  
  if (param_2 < (undefined **)0xaaaaaaaaaaaaaab) {
    lVar2 = (long)param_2 * 0x18;
    __Znwm(lVar2);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar2;
    return auVar10;
  }
  func_0x000109ffded8();
  puVar1 = &stack0xffffffffffffffc0;
  pcStack_28 = (code *)0x10a05a118;
  pppuVar6 = &ppuStack_30;
  ppuVar3 = param_1;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  func_0x000109898688();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar4 = (undefined **)&UNK_10f68f52e;
    pcVar7 = FUN_10a05a150;
    func_0x00010988bd28();
  }
  else {
    puVar1 = &stack0xffffffffffffffe0;
    ppuVar4 = param_1;
    param_2 = ppuVar3;
    param_1 = unaff_x19;
    pppuVar6 = (undefined8 ***)ppuStack_30;
    pcVar7 = pcStack_28;
  }
  *(undefined8 ****)(puVar1 + -0x10) = pppuVar6;
  *(code **)(puVar1 + -8) = pcVar7;
  FUN_10a053854();
  if (ppuVar4 != (undefined **)0x0) {
    param_2 = &PTR_DAT_110b178e0;
    ___dynamic_cast();
    if (ppuVar4 != (undefined **)0x0) {
      auVar11._8_8_ = param_2;
      auVar11._0_8_ = ppuVar4;
      return auVar11;
    }
  }
  puVar5 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)(puVar1 + -0x30) = unaff_x20;
  *(undefined ***)(puVar1 + -0x28) = param_1;
  *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
  *(code **)(puVar1 + -0x18) = FUN_10a05a190;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    ppuVar3 = (undefined **)*param_2;
    func_0x000107c3192c(puVar5,ppuVar3,param_2[1]);
  }
  else {
    puVar9 = param_2[1];
    puVar8 = *param_2;
    puVar5[2] = param_2[2];
    puVar5[1] = puVar9;
    *puVar5 = puVar8;
    ppuVar3 = param_2;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    ppuVar3 = (undefined **)param_2[3];
    func_0x000107c3192c(puVar5 + 3,ppuVar3,param_2[4]);
  }
  else {
    puVar9 = param_2[4];
    puVar8 = param_2[3];
    puVar5[5] = param_2[5];
    puVar5[4] = puVar9;
    puVar5[3] = puVar8;
  }
  auVar12._8_8_ = ppuVar3;
  auVar12._0_8_ = puVar5;
  return auVar12;
}



/* Entry: 10a05a150; end: 10a05a18f;  */

undefined8 * FUN_10a05a150(undefined8 *param_1,undefined **param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_10a053854();
  if (param_1 != (undefined8 *)0x0) {
    param_2 = &PTR_DAT_110b178e0;
    ___dynamic_cast();
    if (param_1 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  puVar1 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    puVar3 = param_2[1];
    puVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = puVar3;
    *puVar1 = puVar2;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(puVar1 + 3,param_2[3],param_2[4]);
  }
  else {
    puVar3 = param_2[4];
    puVar2 = param_2[3];
    puVar1[5] = param_2[5];
    puVar1[4] = puVar3;
    puVar1[3] = puVar2;
  }
  return puVar1;
}



/* Entry: 10a05a190; end: 10a05a21f;  */

undefined8 * FUN_10a05a190(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 10a05a220; end: 10a05a2df;  */

void FUN_10a05a220(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  pcStack_48 = FUN_10a00b340;
  FUN_10a05a2e0(param_1,param_2,&pcStack_48,param_4,param_5);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a05a2e0; end: 10a05a383;  */

void FUN_10a05a2e0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  FUN_10a05a384(param_5);
  pcVar6 = (code *)*param_3;
  puVar4 = param_2;
  FUN_10a05a42c(param_2,param_4);
  (*pcVar6)(auStack_40,*puVar4,puVar4[1]);
  FUN_10a05a3a8(param_1,param_2,auStack_40);
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
  return;
}



/* Entry: 10a05a384; end: 10a05a3a7;  */

void FUN_10a05a384(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar6 = (long *)puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  func_0x000109899de4();
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
  return;
}



/* Entry: 10a05a3a8; end: 10a05a42b;  */

void FUN_10a05a3a8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  ppuStack_38 = &PTR_DAT_110c353a0;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a05a42c; end: 10a05a46f;  */

undefined8 * FUN_10a05a42c(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110b9fae8) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a05a470; end: 10a05a49b;  */

undefined8 FUN_10a05a470(void)

{
  return 0;
}



/* Entry: 10a05a49c; end: 10a05a5d3;  */

void FUN_10a05a49c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  plVar5 = (long *)0x58;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b9da08;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110c35298;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  *(undefined4 *)(plVar5 + 10) = 0x3f800000;
  ppuStack_48 = &PTR_DAT_110c353f0;
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



/* Entry: 10a05a5d4; end: 10a05a623;  */

void FUN_10a05a5d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0x80;
  __Znwm();
  FUN_10a05a624();
  lVar6 = lVar4 + 0x18;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x20);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x20) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a05a624; end: 10a05a66b;  */

undefined8 * FUN_10a05a624(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9f948;
  FUN_10a05a6a8(param_1 + 3);
  return param_1;
}



/* Entry: 10a05a66c; end: 10a05a67b;  */

void FUN_10a05a66c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a05a67c; end: 10a05a69b;  */

void FUN_10a05a67c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f948;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05a69c; end: 10a05a6a7;  */

void FUN_10a05a69c(long param_1)

{
  FUN_10a05a748(param_1 + 0x68);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a05a6a8; end: 10a05a707;  */

undefined8 * FUN_10a05a6a8(undefined8 *param_1)

{
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  __ZNSt3__115recursive_mutexC1Ev();
  param_1[10] = param_1 + 10;
  param_1[0xb] = param_1 + 10;
  param_1[0xc] = 0;
  return param_1;
}



/* Entry: 10a05a708; end: 10a05a747;  */

void FUN_10a05a708(long param_1)

{
  FUN_10a05a748(param_1 + 0x50);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a05a748; end: 10a05a7bb;  */

void FUN_10a05a748(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      (**(code **)plVar1[2])();
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a05a7bc; end: 10a05a91b;  */

void FUN_10a05a7bc(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a05a91c; end: 10a05a92b;  */

void FUN_10a05a91c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9da08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a05a92c; end: 10a05a94b;  */

void FUN_10a05a92c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9da08;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05a94c; end: 10a05a97f;  */

long FUN_10a05a94c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x000104c4f944(param_1 + 0x30);
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



/* Entry: 10a05a980; end: 10a05a993;  */

void FUN_10a05a980(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05a994; end: 10a05a9b3;  */

void FUN_10a05a994(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9da58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05a9b4; end: 10a05aa0b;  */

void FUN_10a05a9b4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x48;
  FUN_10a0426d8(&lStack_28);
  lStack_28 = param_1 + 0x30;
  FUN_10a0426d8(&lStack_28);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return;
}



/* Entry: 10a05aa0c; end: 10a05aa0f;  */

void FUN_10a05aa0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05aa10; end: 10a05aa67;  */

long FUN_10a05aa10(long param_1)

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



/* Entry: 10a05aa68; end: 10a05aa77;  */

void FUN_10a05aa68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9daa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a05aa78; end: 10a05aa97;  */

void FUN_10a05aa78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9daa8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05aa98; end: 10a05aacb;  */

long FUN_10a05aa98(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a05aa10(param_1 + 0x38);
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



/* Entry: 10a05aacc; end: 10a05aacf;  */

void FUN_10a05aacc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05aad0; end: 10a05aca3;  */

void FUN_10a05aad0(long *param_1,code **param_2)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    ppcVar9 = (code **)0x0;
    ppuVar6 = (undefined8 **)0x0;
    if (ppcVar8 != (code **)0x0) {
      ppuStack_98 = (undefined8 **)param_1[1];
      lStack_a0 = *param_1;
      if (param_1[1] != 0) {
        plVar5 = (long *)(param_1[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_90,*param_2,param_2[1]);
      }
      else {
        pcStack_88 = param_2[1];
        ppuStack_90 = (undefined8 **)*param_2;
        pcStack_80 = param_2[2];
      }
      pcStack_78 = FUN_10a05aec4;
      param_2 = &pcStack_78;
      FUN_10a05af2c(apuStack_70,&PTR_FUN_110b9f388,&lStack_a0);
      ppcVar9 = &pcStack_78;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      ppuVar6 = apuStack_70;
      (*(code *)*apuStack_70[0])();
      if ((long)pcStack_80 < 0) {
        ppuVar6 = ppuStack_90;
        __ZdlPv();
      }
      ppuVar7 = ppuStack_98;
      if (ppuStack_98 != (undefined8 **)0x0) {
        ppuVar1 = ppuStack_98 + 1;
        do {
          puVar10 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = (undefined8 *)((long)puVar10 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar10 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_98)[2])(ppuStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar7;
        }
      }
    }
  }
  else {
    *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
    ppuVar6 = (undefined8 **)*param_1;
    ppcVar9 = param_2;
    FUN_10a05aca4(ppuVar6,param_2);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a004dac(&lStack_a0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a05aca4;
  ppcStack_c0 = param_2;
  ppuStack_b8 = ppuVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,ppuVar7 + 1,*ppuVar7);
  func_0x000109884820(&puStack_c8,&puStack_d0,*ppuVar7);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**ppuVar7 + 0x30))(&puStack_d0);
  FUN_10a05adc0(*ppuVar7,&puStack_d0,&puStack_c8,ppcVar9);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a05aca4; end: 10a05ad8f;  */

void FUN_10a05aca4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a05adc0(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a05ad90; end: 10a05adbf;  */

long FUN_10a05ad90(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
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



/* Entry: 10a05adc0; end: 10a05aec3;  */

void FUN_10a05adc0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
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
  
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*param_1 + 0x128))(&puStack_68,param_1,puVar2,uVar1);
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



/* Entry: 10a05aec4; end: 10a05aecf;  */

void FUN_10a05aec4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a05adc0(*puVar1,&puStack_30,&puStack_28,puVar2 + 2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a05aed0; end: 10a05af13;  */

void FUN_10a05aed0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a05af14; end: 10a05af2b;  */

void FUN_10a05af14(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a05af2c; end: 10a05afb3;  */

undefined8 * FUN_10a05af2c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  uVar2 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  if (*(char *)((long)param_3 + 0x27) < '\0') {
    func_0x000107c3192c(puVar1 + 2,param_3[2],param_3[3]);
  }
  else {
    uVar2 = param_3[2];
    puVar1[3] = param_3[3];
    puVar1[2] = uVar2;
    puVar1[4] = param_3[4];
  }
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a05afb4; end: 10a05afc3;  */

void FUN_10a05afb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9daf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a05afc4; end: 10a05afe3;  */

void FUN_10a05afc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9daf8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05afe4; end: 10a05aff3;  */

void FUN_10a05afe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a05afec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a05aff4; end: 10a05b04b;  */

long FUN_10a05aff4(long param_1)

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



/* Entry: 10a05b04c; end: 10a05b1af;  */

void FUN_10a05b04c(long *param_1,long *param_2)

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
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a05b1b0; end: 10a05b207;  */

long FUN_10a05b1b0(long param_1)

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



/* Entry: 10a05b208; end: 10a05b2a7;  */

long * FUN_10a05b208(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110b9fd40;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a05b2a8(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a05b2a8; end: 10a05b3cb;  */

void FUN_10a05b2a8(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a05b3cc; end: 10a05b40b;  */

void FUN_10a05b3cc(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a05b40c; end: 10a05b447;  */

long FUN_10a05b40c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9fd80);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a05b448; end: 10a05b45b;  */

void FUN_10a05b448(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05b45c; end: 10a05b47b;  */

void FUN_10a05b45c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9fda0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05b47c; end: 10a05b4c3;  */

void FUN_10a05b47c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a05b484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a05b4c4; end: 10a05b567;  */

void FUN_10a05b4c4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a05b568; end: 10a05b757;  */

void FUN_10a05b568(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  undefined **ppuVar11;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a05b9a8;
      ppuStack_70 = &PTR_FUN_110b9f3f0;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a05b758(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a05248c(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a05b758;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a05b844(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a05b758; end: 10a05b843;  */

void FUN_10a05b758(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a05b844(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a05b844; end: 10a05b923;  */

void FUN_10a05b844(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  FUN_10a05b924(aiStack_70,param_1,param_4);
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



/* Entry: 10a05b924; end: 10a05b9a7;  */

void FUN_10a05b924(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a052f68(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a05b9a8; end: 10a05b9b7;  */

void FUN_10a05b9a8(long param_1)

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
  FUN_10a05b844(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a05b9b8; end: 10a05b9df;  */

long FUN_10a05b9b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a05248c(param_1 + 0x18);
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



/* Entry: 10a05b9e0; end: 10a05ba1f;  */

void FUN_10a05b9e0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b9f3f0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
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
  return;
}



/* Entry: 10a05ba20; end: 10a05ba77;  */

long FUN_10a05ba20(long param_1)

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



/* Entry: 10a05ba78; end: 10a05ba87;  */

void FUN_10a05ba78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f1b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a05ba88; end: 10a05baa7;  */

void FUN_10a05ba88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f1b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05baa8; end: 10a05bab7;  */

void FUN_10a05baa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a05bab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a05bab8; end: 10a05bb07;  */

void FUN_10a05bab8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_10a05bb08();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110b9f148,FUN_10a05bb28);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar2 = &PTR_FUN_110b9f170;
  return;
}



/* Entry: 10a05bb08; end: 10a05bb27;  */

void FUN_10a05bb08(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_FUN_110b9f170;
  return;
}



/* Entry: 10a05bb28; end: 10a05bb2b;  */

void FUN_10a05bb28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a05bb2c; end: 10a05bb3f;  */

void FUN_10a05bb2c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05bb40; end: 10a05bd0f;  */

long * FUN_10a05bb40(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [56];
  long lStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_e8 = param_1[1];
  plStack_f0 = (long *)*param_1;
  lStack_e0 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_d0 = param_1[4];
  plStack_d8 = (long *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  lStack_c8 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_c0 = (undefined4)param_1[6];
  lStack_b8 = param_1[7];
  lStack_b0 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_a8,param_1 + 9);
  lStack_70 = param_1[0x10];
  uStack_68 = (undefined4)param_1[0x11];
  FUN_10a0424c4(auStack_60,param_1 + 0x12);
  FUN_10a971a74(&uStack_100,&plStack_f0);
  lVar6 = *(long *)(param_2 + 0x10);
  plVar4 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar6 + 0xa8) == '\x01') {
          func_0x00010a056464(lVar6 + 0x98);
        }
        *(long **)(lVar6 + 0xa0) = plStack_f8;
        *(undefined8 *)(lVar6 + 0x98) = uStack_100;
        uStack_100 = 0;
        plStack_f8 = (long *)0x0;
        *(undefined1 *)(lVar6 + 0xa8) = 1;
        *(undefined8 *)(lVar6 + 0x10) = 2;
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a05bc64;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a05bc64:
      plVar4 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar1 = plStack_f8 + 1;
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
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      func_0x000104c4f944(auStack_60);
      plVar4 = &lStack_b8;
      FUN_10a042634();
      if (lStack_c8 < 0) {
        plVar4 = plStack_d8;
        __ZdlPv();
      }
      if (lStack_e0 < 0) {
        plVar4 = plStack_f0;
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return plVar4;
      }
      ___stack_chk_fail();
      FUN_10a05bd10(&plStack_f0);
      __Unwind_Resume();
      func_0x000104c4f944(plVar4 + 0x12);
      FUN_10a042634(plVar4 + 7);
      if (*(char *)((long)plVar4 + 0x2f) < '\0') {
        __ZdlPv(plVar4[3]);
      }
      if (*(char *)((long)plVar4 + 0x17) < '\0') {
        __ZdlPv(*plVar4);
      }
      return plVar4;
    }
  } while( true );
}



/* Entry: 10a05bd10; end: 10a05bd5f;  */

undefined8 * FUN_10a05bd10(undefined8 *param_1)

{
  func_0x000104c4f944(param_1 + 0x12);
  FUN_10a042634(param_1 + 7);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a05bd60; end: 10a05bd87;  */

void FUN_10a05bd60(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a05bd88; end: 10a05bddf;  */

long FUN_10a05bd88(long param_1)

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



/* Entry: 10a05bde0; end: 10a05be6f;  */

void FUN_10a05bde0(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,param_1 + 0x10,0x110);
  *puVar2 = &PTR_FUN_110b99e70;
  ___cxa_throw(puVar2,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a05be4c);
  (*pcVar1)();
}



/* Entry: 10a05be70; end: 10a05bf03;  */

void FUN_10a05be70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_109ce5028();
  if (lVar1 != 0) {
    func_0x00010a05bea4(param_1,lVar1);
  }
  return;
}



/* Entry: 10a05bf04; end: 10a05c023;  */

void FUN_10a05bf04(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a05bfb8;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a05bfb8;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a05bfb8:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a05c024; end: 10a05c0fb;  */

long FUN_10a05c024(long param_1)

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



/* Entry: 10a05c0fc; end: 10a05c137;  */

void FUN_10a05c0fc(long param_1,undefined8 param_2)

{
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x10);
  FUN_10a05c138(param_1 + 0x50,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x10);
  return;
}



/* Entry: 10a05c138; end: 10a05c193;  */

long * FUN_10a05c138(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    plVar2 = (long *)param_2[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    param_1[2] = param_1[2] + -1;
    (**(code **)param_2[2])();
    __ZdlPv(param_2);
    return plVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a05c194);
  (*pcVar3)();
}



/* Entry: 10a05c194; end: 10a05c35f;  */

void FUN_10a05c194(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_128 [40];
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x138;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110b9f3b0;
  uVar1 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  uStack_c0 = *param_5;
  uStack_b8 = param_5[1];
  *param_5 = 0;
  (**(code **)(param_5[2] + 0x10))(auStack_b0);
  uStack_78 = param_5[9];
  FUN_10a0424c4(auStack_128,param_7);
  uVar2 = param_8[1];
  puVar3 = (undefined8 *)*param_8;
  if (-1 < (char)*(byte *)((long)param_8 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_8 + 0x17);
    puVar3 = param_8;
  }
  uStack_100 = 0x10a05c39c;
  ppuStack_f8 = &PTR_FUN_110b9f370;
  uStack_f0 = *param_9;
  uStack_e0 = param_9[2];
  uStack_e8 = param_9[1];
  param_9[1] = 0;
  param_9[2] = 0;
  FUN_10a05c494(puVar4 + 3,puVar5,uVar1,param_3,param_4,&uStack_c0,param_6,auStack_128,puVar3,uVar2,
                &uStack_100);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  func_0x000104c4f944(auStack_128);
  puVar5 = &uStack_c0;
  FUN_10a042634();
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    func_0x000104c4f944(auStack_128);
    FUN_10a042634(&uStack_c0);
    __ZNSt3__119__shared_weak_countD2Ev(puVar4);
    __ZdlPv();
    __Unwind_Resume();
    *puVar5 = &PTR_FUN_110b9f3b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10a05c360; end: 10a05c36f;  */

void FUN_10a05c360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f3b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a05c370; end: 10a05c38f;  */

void FUN_10a05c370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f3b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05c390; end: 10a05c3ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a05c750) */

void FUN_10a05c390(long param_1)

{
  func_0x000104c4f944(param_1 + 0x110);
  (*(code *)**(undefined8 **)(param_1 + 0xd0))((undefined8 *)(param_1 + 0xd0));
  FUN_10a042634(param_1 + 0x60);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x2f) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



/* Entry: 10a05c3ac; end: 10a05c467;  */

void FUN_10a05c3ac(long *param_1,undefined8 param_2)

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
        (*(code *)**(undefined8 **)(*param_1 + 0x18))(param_2);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a05c468; end: 10a05c493;  */

undefined8 * FUN_10a05c468(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
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
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a05c494; end: 10a05c71b;  */

long FUN_10a05c494(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 *param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                  ulong param_10,undefined8 *param_11)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113835388,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000113835388 = lRam0000000113835388 + 1;
    }
  } while (cVar1 != '\0');
  __ZNSt3__19to_stringEy(param_1);
  if (0x7ffffffffffffff7 < param_10) {
    func_0x000109ffde50();
    goto LAB_10a05c6c0;
  }
  uVar4 = param_1 + 0x18;
  if (param_10 < 0x17) {
    *(char *)(param_1 + 0x2f) = (char)param_10;
    if (param_10 != 0) goto LAB_10a05c554;
  }
  else {
    uVar5 = 0x19;
    if ((param_10 | 7) != 0x17) {
      uVar5 = (param_10 | 7) + 1;
    }
    uVar4 = uVar5;
    __Znwm();
    *(ulong *)(param_1 + 0x20) = param_10;
    *(ulong *)(param_1 + 0x28) = uVar5 | 0x8000000000000000;
    *(ulong *)(param_1 + 0x18) = uVar4;
LAB_10a05c554:
    _memmove(uVar4,param_9,param_10);
  }
  *(undefined1 *)(uVar4 + param_10) = 0;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    goto LAB_10a05c6c0;
  }
  uVar4 = param_1 + 0x30;
  if (param_3 < 0x17) {
    *(char *)(param_1 + 0x47) = (char)param_3;
    if (param_3 != 0) goto LAB_10a05c5b4;
  }
  else {
    uVar5 = 0x19;
    if ((param_3 | 7) != 0x17) {
      uVar5 = (param_3 | 7) + 1;
    }
    uVar4 = uVar5;
    __Znwm();
    *(ulong *)(param_1 + 0x38) = param_3;
    *(ulong *)(param_1 + 0x40) = uVar5 | 0x8000000000000000;
    *(ulong *)(param_1 + 0x30) = uVar4;
LAB_10a05c5b4:
    _memmove(uVar4,param_2,param_3);
  }
  *(undefined1 *)(uVar4 + param_3) = 0;
  uVar6 = *param_6;
  *param_6 = 0;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = param_6[1];
  (**(code **)(param_6[2] + 0x10))(param_1 + 0x58,param_6 + 2);
  *(undefined8 *)(param_1 + 0x90) = param_6[9];
  if (0x7ffffffffffffff7 < param_5) {
    func_0x000109ffde50();
LAB_10a05c6c0:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a05c6c4);
    (*pcVar3)();
  }
  if (param_5 < 0x17) {
    uVar5 = param_1 + 0x98;
    *(char *)(param_1 + 0xaf) = (char)param_5;
    if (param_5 == 0) goto LAB_10a05c654;
  }
  else {
    uVar4 = 0x19;
    if ((param_5 | 7) != 0x17) {
      uVar4 = (param_5 | 7) + 1;
    }
    uVar5 = uVar4;
    __Znwm();
    *(ulong *)(param_1 + 0xa0) = param_5;
    *(ulong *)(param_1 + 0xa8) = uVar4 | 0x8000000000000000;
    *(ulong *)(param_1 + 0x98) = uVar5;
  }
  _memmove(uVar5,param_4,param_5);
LAB_10a05c654:
  *(undefined1 *)(uVar5 + param_5) = 0;
  *(undefined8 *)(param_1 + 0xb0) = *param_11;
  (**(code **)(param_11[1] + 0x10))(param_1 + 0xb8,param_11 + 1);
  *(undefined4 *)(param_1 + 0xf0) = param_7;
  FUN_10a0424c4(param_1 + 0xf8,param_8);
  return param_1;
}



/* Entry: 10a05c71c; end: 10a05c7a3;  */

/* WARNING: Removing unreachable block (ram,0x00010a05c750) */

void FUN_10a05c71c(undefined8 *param_1)

{
  func_0x000104c4f944(param_1 + 0x1f);
  (**(code **)param_1[0x17])(param_1 + 0x17);
  FUN_10a042634(param_1 + 9);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10a05c7a4; end: 10a05c803;  */

void FUN_10a05c7a4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  FUN_10a05c804();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a05c804; end: 10a05c85f;  */

undefined8 * FUN_10a05c804(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9f658;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_10a05c8ac();
  return param_1;
}



/* Entry: 10a05c860; end: 10a05c86f;  */

void FUN_10a05c860(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f658;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a05c870; end: 10a05c88f;  */

void FUN_10a05c870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f658;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


