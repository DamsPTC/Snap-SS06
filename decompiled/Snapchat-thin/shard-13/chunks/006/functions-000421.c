/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9a95d0; end: 10a9a96ab;  */

void FUN_10a9a95d0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
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
  plVar6 = param_2;
  FUN_10a9a9138(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar6 = (long *)plVar6[0x1f];
  if ((plVar6 == (long *)0x0) || ((char)plVar6[8] != '\x02')) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*plVar6 + 8);
  }
  plVar6 = plVar3 + 0x4b;
  lVar4 = plVar3[0x59];
  uVar5 = lVar4 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar6[lVar4 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar6;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar4;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar4 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar4)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar4,lVar8);
          *plVar6 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
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
  else if (uVar5 < uVar12) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar10 != lVar4) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar4;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a9a96ac; end: 10a9a997f;  */

void FUN_10a9a96ac(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plVar17;
  
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
  FUN_10a9a8450(param_2,param_3);
  FUN_10a9a9980(param_5);
  if (*param_4 == 7) {
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x228))(param_2,&stack0xffffffffffffffa8);
    plVar17 = plVar9;
    if ((int)plVar7 != 0) {
      plVar17 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar8 = plVar17[0x48];
      if ((lVar8 == 0) ||
         (___dynamic_cast(lVar8,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar8 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a9a993c;
      }
      plVar17 = (long *)0x0;
      plStack_68 = (long *)CONCAT44(plStack_68._4_4_,7);
      plStack_70 = param_2;
      FUN_10a688ac0(&lStack_90,&plStack_70,*(undefined8 *)(lVar8 + 8));
      if ((3 < (int)plStack_68) && (plVar9 != (long *)0x0)) {
        (**(code **)*plVar9)();
      }
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)*plVar17)();
    }
    if (((ulong)plVar7 & 1) != 0) {
      plVar9 = (long *)0x60;
      __Znwm();
      plVar7 = plVar9 + 1;
      *plVar7 = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110c34978;
      plVar9[4] = lStack_88;
      plVar9[3] = lStack_90;
      if (lStack_88 != 0) {
        plVar17 = (long *)(lStack_88 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *plVar17 = *plVar17 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar9[6] = lStack_78;
      plVar9[5] = lStack_80;
      if (lStack_78 != 0) {
        plVar17 = (long *)(lStack_78 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *plVar17 = *plVar17 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(plVar9 + 0xb) = 2;
      FUN_10a688c1c(&lStack_90);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar17 = (long *)plVar6[0x20];
      plVar6[0x1f] = (long)(plVar9 + 3);
      plVar6[0x20] = (long)plVar9;
      if (plVar17 != (long *)0x0) {
        plVar6 = plVar17 + 1;
        do {
          lVar8 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      *param_1 = 0;
      plVar6 = plVar5 + 0x4b;
      lVar8 = plVar5[0x59];
      uVar10 = lVar8 - 1;
      plVar5[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar6[lVar8 + 2];
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
      lVar8 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar8;
      uVar15 = lVar12 >> 4;
      if (uVar15 < uVar10) {
        uVar16 = uVar10 - uVar15;
        plVar9 = (long *)plVar5[0x4d];
        if ((ulong)((long)plVar9 - lVar14 >> 4) < uVar16) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = (long)plVar9 - lVar8 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)((long)plVar9 - lVar8)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar11 >> 0x3c == 0) {
              lVar4 = uVar11 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar16 * 0x10);
              lVar13 = lVar14 + uVar15 * -0x10;
              _memcpy(lVar13,lVar8,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar16 * 0x10;
              plVar5[0x4d] = lVar4 + uVar11 * 0x10;
              lStack_88 = lVar8;
              lStack_80 = lVar8;
              lStack_78 = lVar8;
              plStack_70 = plVar9;
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
        _bzero(lVar14,uVar16 * 0x10);
        plVar5[0x4c] = lVar14 + uVar16 * 0x10;
      }
      else if (uVar10 < uVar15) {
        lVar8 = lVar8 + uVar10 * 0x10;
        while (lVar14 != lVar8) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar8;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar10;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a9a993c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9a9940);
  (*pcVar3)();
}



/* Entry: 10a9a9980; end: 10a9a99a3;  */

void FUN_10a9a9980(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110c34978;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9a99a4; end: 10a9a99b3;  */

void FUN_10a9a99a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34978;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9a99b4; end: 10a9a99d3;  */

void FUN_10a9a99b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34978;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9a99d4; end: 10a9a99fb;  */

undefined1  [16] FUN_10a9a99d4(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a9a99f8);
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



/* Entry: 10a9a99fc; end: 10a9a9ad7;  */

void FUN_10a9a99fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
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
  plVar6 = param_2;
  FUN_10a9a9138(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar6 = (long *)plVar6[0x21];
  if ((plVar6 == (long *)0x0) || ((char)plVar6[8] != '\x02')) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*plVar6 + 8);
  }
  plVar6 = plVar3 + 0x4b;
  lVar4 = plVar3[0x59];
  uVar5 = lVar4 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar6[lVar4 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar6;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar4;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar4 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar4)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar4,lVar8);
          *plVar6 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
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
  else if (uVar5 < uVar12) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar10 != lVar4) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar4;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a9a9ad8; end: 10a9a9dab;  */

void FUN_10a9a9ad8(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plVar17;
  
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
  FUN_10a9a8450(param_2,param_3);
  FUN_10a9a9dac(param_5);
  if (*param_4 == 7) {
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x228))(param_2,&stack0xffffffffffffffa8);
    plVar17 = plVar9;
    if ((int)plVar7 != 0) {
      plVar17 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar8 = plVar17[0x48];
      if ((lVar8 == 0) ||
         (___dynamic_cast(lVar8,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar8 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a9a9d68;
      }
      plVar17 = (long *)0x0;
      plStack_68 = (long *)CONCAT44(plStack_68._4_4_,7);
      plStack_70 = param_2;
      FUN_10a688ac0(&lStack_90,&plStack_70,*(undefined8 *)(lVar8 + 8));
      if ((3 < (int)plStack_68) && (plVar9 != (long *)0x0)) {
        (**(code **)*plVar9)();
      }
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)*plVar17)();
    }
    if (((ulong)plVar7 & 1) != 0) {
      plVar9 = (long *)0x60;
      __Znwm();
      plVar7 = plVar9 + 1;
      *plVar7 = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110c349c8;
      plVar9[4] = lStack_88;
      plVar9[3] = lStack_90;
      if (lStack_88 != 0) {
        plVar17 = (long *)(lStack_88 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *plVar17 = *plVar17 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar9[6] = lStack_78;
      plVar9[5] = lStack_80;
      if (lStack_78 != 0) {
        plVar17 = (long *)(lStack_78 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *plVar17 = *plVar17 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(plVar9 + 0xb) = 2;
      FUN_10a688c1c(&lStack_90);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar17 = (long *)plVar6[0x22];
      plVar6[0x21] = (long)(plVar9 + 3);
      plVar6[0x22] = (long)plVar9;
      if (plVar17 != (long *)0x0) {
        plVar6 = plVar17 + 1;
        do {
          lVar8 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      *param_1 = 0;
      plVar6 = plVar5 + 0x4b;
      lVar8 = plVar5[0x59];
      uVar10 = lVar8 - 1;
      plVar5[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar6[lVar8 + 2];
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
      lVar8 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar8;
      uVar15 = lVar12 >> 4;
      if (uVar15 < uVar10) {
        uVar16 = uVar10 - uVar15;
        plVar9 = (long *)plVar5[0x4d];
        if ((ulong)((long)plVar9 - lVar14 >> 4) < uVar16) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = (long)plVar9 - lVar8 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)((long)plVar9 - lVar8)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar11 >> 0x3c == 0) {
              lVar4 = uVar11 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar16 * 0x10);
              lVar13 = lVar14 + uVar15 * -0x10;
              _memcpy(lVar13,lVar8,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar16 * 0x10;
              plVar5[0x4d] = lVar4 + uVar11 * 0x10;
              lStack_88 = lVar8;
              lStack_80 = lVar8;
              lStack_78 = lVar8;
              plStack_70 = plVar9;
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
        _bzero(lVar14,uVar16 * 0x10);
        plVar5[0x4c] = lVar14 + uVar16 * 0x10;
      }
      else if (uVar10 < uVar15) {
        lVar8 = lVar8 + uVar10 * 0x10;
        while (lVar14 != lVar8) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar8;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar10;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a9a9d68:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9a9d6c);
  (*pcVar3)();
}



/* Entry: 10a9a9dac; end: 10a9a9dcf;  */

void FUN_10a9a9dac(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110c349c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9a9dd0; end: 10a9a9ddf;  */

void FUN_10a9a9dd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c349c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9a9de0; end: 10a9a9dff;  */

void FUN_10a9a9de0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c349c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9a9e00; end: 10a9a9e27;  */

undefined1  [16] FUN_10a9a9e00(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a9a9e24);
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



/* Entry: 10a9a9e28; end: 10a9a9f03;  */

void FUN_10a9a9e28(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
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
  plVar6 = param_2;
  FUN_10a9a9138(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar6 = (long *)plVar6[0x23];
  if ((plVar6 == (long *)0x0) || ((char)plVar6[8] != '\x02')) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*plVar6 + 8);
  }
  plVar6 = plVar3 + 0x4b;
  lVar4 = plVar3[0x59];
  uVar5 = lVar4 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar6[lVar4 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar6;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar4;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar4 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar4)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar4,lVar8);
          *plVar6 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
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
  else if (uVar5 < uVar12) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar10 != lVar4) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar4;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a9a9f04; end: 10a9a9fbb;  */

void FUN_10a9a9f04(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9a94c8(param_1,param_2,FUN_10a9744b4,0,param_3,param_4,param_5);
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



/* Entry: 10a9a9fbc; end: 10a9a9fbf;  */

void FUN_10a9a9fbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9a9fc0; end: 10a9a9fd3;  */

void FUN_10a9a9fc0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9a9fd4; end: 10a9a9feb;  */

void FUN_10a9a9fd4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a9a9fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a9a9fec; end: 10a9aa023;  */

undefined8 FUN_10a9a9fec(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c34a68);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a9aa024; end: 10a9aa027;  */

void FUN_10a9aa024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9aa028; end: 10a9aa07f;  */

long FUN_10a9aa028(long param_1)

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



/* Entry: 10a9aa080; end: 10a9aa0db;  */

long * FUN_10a9aa080(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a9aa0dc(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a9aa0dc; end: 10a9aa23f;  */

void FUN_10a9aa0dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a9aa138();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a9aa240; end: 10a9aad4f;  */

void FUN_10a9aa240(undefined8 *param_1,undefined *******param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined ******ppppppuVar3;
  code *pcVar4;
  bool bVar5;
  undefined *******pppppppuVar6;
  undefined8 *puVar7;
  undefined *******pppppppuVar8;
  undefined1 *puVar9;
  undefined *****pppppuVar10;
  undefined *******pppppppuVar11;
  undefined *******pppppppuVar12;
  undefined *******pppppppuVar13;
  undefined *******pppppppuVar14;
  undefined *******pppppppuVar15;
  undefined ******ppppppuVar16;
  undefined *****pppppuVar17;
  int iVar18;
  undefined ******ppppppuVar19;
  undefined ***pppuVar20;
  undefined *******unaff_x21;
  undefined *******unaff_x22;
  undefined *****pppppuStack_380;
  undefined ******ppppppuStack_378;
  undefined *****pppppuStack_370;
  undefined ******ppppppuStack_368;
  undefined *****pppppuStack_360;
  undefined ******ppppppuStack_358;
  undefined *****pppppuStack_350;
  undefined *****pppppuStack_348;
  undefined *****pppppuStack_340;
  undefined ******ppppppuStack_338;
  long lStack_318;
  undefined ******ppppppuStack_310;
  undefined ******ppppppuStack_308;
  undefined ******ppppppuStack_300;
  undefined ******ppppppuStack_2f8;
  undefined1 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined *****pppppuStack_2e0;
  undefined ******ppppppuStack_2d8;
  undefined *****pppppuStack_2d0;
  undefined ******ppppppuStack_2c8;
  undefined *****pppppuStack_2c0;
  undefined ******ppppppuStack_2b8;
  undefined *****pppppuStack_2b0;
  undefined *****pppppuStack_2a8;
  undefined *****pppppuStack_2a0;
  undefined ******ppppppuStack_298;
  long lStack_278;
  undefined ******ppppppuStack_270;
  undefined ******ppppppuStack_268;
  undefined ******ppppppuStack_260;
  undefined ******ppppppuStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined *****pppppuStack_240;
  undefined ******ppppppuStack_238;
  undefined *****pppppuStack_230;
  undefined ******ppppppuStack_228;
  undefined *****pppppuStack_220;
  undefined ******ppppppuStack_218;
  undefined *****pppppuStack_210;
  undefined *****pppppuStack_208;
  undefined *****pppppuStack_200;
  undefined ******ppppppuStack_1f8;
  long lStack_1d8;
  undefined ******ppppppuStack_1d0;
  undefined ******ppppppuStack_1c8;
  undefined ******ppppppuStack_1c0;
  undefined ******ppppppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined ******ppppppuStack_1a0;
  undefined *****pppppuStack_190;
  undefined ******ppppppuStack_188;
  undefined ******ppppppuStack_180;
  undefined5 uStack_178;
  undefined2 uStack_173;
  undefined1 uStack_171;
  undefined5 uStack_170;
  undefined1 uStack_16b;
  undefined1 uStack_16a;
  char cStack_169;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined ******ppppppuStack_158;
  undefined ******ppppppuStack_150;
  undefined7 uStack_148;
  char cStack_141;
  undefined ******ppppppuStack_140;
  undefined ******ppppppuStack_138;
  undefined ******ppppppuStack_130;
  undefined ******ppppppuStack_128;
  undefined *****pppppuStack_120;
  undefined ******ppppppuStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined ******ppppppuStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  int iStack_e0;
  undefined *****pppppuStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  int iStack_88;
  undefined1 auStack_80 [40];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_190 = (undefined *****)0x0;
  ppppppuStack_188 = (undefined ******)0x0;
  pppppppuVar6 = (undefined *******)param_2[4];
  pppppppuVar8 = param_2;
  if (((pppppppuVar6 != (undefined *******)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuStack_188 = (undefined ******)pppppppuVar6,
      pppppppuVar6 != (undefined *******)0x0)) &&
     (pppppuStack_190 = (undefined *****)param_2[3],
     (undefined ******)pppppuStack_190 != (undefined ******)0x0)) {
    ppppppuVar19 = param_2[2];
    uStack_108 = param_1[1];
    ppppppuStack_110 = (undefined ******)*param_1;
    lStack_100 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    uStack_f0 = param_1[4];
    ppppppuStack_f8 = (undefined ******)param_1[3];
    lStack_e8 = param_1[5];
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    iStack_e0 = *(int *)(param_1 + 6);
    pppppuStack_d8 = (undefined *****)param_1[7];
    uStack_d0 = param_1[8];
    param_1[7] = 0;
    (**(code **)(param_1[9] + 0x10))(auStack_c8,param_1 + 9);
    uStack_90 = param_1[0x10];
    iStack_88 = *(int *)(param_1 + 0x11);
    pppppppuVar8 = (undefined *******)(param_1 + 0x12);
    FUN_10a0424c4(auStack_80);
    pppppuVar17 = ppppppuVar19[3];
    if (iStack_e0 < 2) {
      if (iStack_e0 == 0) {
        *(undefined4 *)((long)pppppuVar17 + 0x2c) = 1;
        puVar7 = (undefined8 *)0x30;
        __Znwm();
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = &PTR_FUN_110c34a90;
        puVar7[4] = 0;
        puVar7[5] = 0;
        ppppppuStack_180 = (undefined ******)(puVar7 + 3);
        *ppppppuStack_180 = (undefined *****)&PTR_FUN_110c32380;
        uStack_178 = SUB85(puVar7,0);
        uStack_173 = (undefined2)((ulong)puVar7 >> 0x28);
        uStack_171 = (undefined1)((ulong)puVar7 >> 0x38);
        pppppuVar10 = pppppuVar17 + 0x18;
        pppppppuVar8 = (undefined *******)0x0;
        func_0x00010a9ab4e4();
        if (pppppuVar10 != (undefined *****)0x0) {
          unaff_x21 = (undefined *******)pppppuVar10[4];
          for (pppppppuVar6 = (undefined *******)pppppuVar10[3]; pppppppuVar6 != unaff_x21;
              pppppppuVar6 = pppppppuVar6 + 2) {
            pppppppuVar8 = &ppppppuStack_180;
            FUN_10a9aad50(*pppppppuVar6);
          }
        }
        if (pppppuVar17[0x1d] != (undefined ****)0x0) {
          pppppppuVar8 = &ppppppuStack_180;
          FUN_10a9aad50();
        }
        pppppppuVar6 = (undefined *******)CONCAT17(uStack_171,CONCAT25(uStack_173,uStack_178));
        if (pppppppuVar6 != (undefined *******)0x0) {
          pppppppuVar11 = pppppppuVar6 + 1;
          do {
            ppppppuVar19 = *pppppppuVar11;
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar5) {
              *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_10a9aa768:
          if (ppppppuVar19 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar6)[2])(pppppppuVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar6);
          }
        }
      }
      else if (iStack_e0 == 1) {
        bVar5 = iStack_88 == 2;
        unaff_x21 = (undefined *******)(ulong)bVar5;
        if (bVar5) {
          puVar7 = (undefined8 *)(ulong)*(uint *)(pppppuVar17 + 5);
          if (*(uint *)(pppppuVar17 + 5) != 0) {
            if ((uRam000000011330a9e8 & 1) != 0) {
              FUN_10a98a0f0();
              ppppppuStack_128 = (undefined ******)puVar7[1];
              ppppppuStack_130 = (undefined ******)*puVar7;
              func_0x0001098998d4(&ppppppuStack_180,&ppppppuStack_130);
              ppppppuStack_1a0 = ppppppuStack_180;
              if (-1 < cStack_169) {
                ppppppuStack_1a0 = (undefined ******)&ppppppuStack_180;
              }
              func_0x00010ae06f08(0,1,&UNK_10f6861ed,&UNK_10f687bed,0xe6,&UNK_10f687ccc);
              if (cStack_169 < '\0') {
                __ZdlPv(ppppppuStack_180);
              }
            }
            FUN_10a00946c(&UNK_10f687cf3);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9aa7a4);
            (*pcVar4)();
          }
          pppuVar20 = pppppuVar17[0x15][0x10e];
          FUN_109ffe064(&ppppppuStack_180,pppppuStack_d8,uStack_90);
          FUN_10a970fc8(&ppppppuStack_130,pppuVar20,&ppppppuStack_180);
          if (cStack_169 < '\0') {
            __ZdlPv(ppppppuStack_180);
          }
          ppppppuVar19 = ppppppuStack_128;
          ppppppuStack_158 = ppppppuStack_130;
          ppppppuStack_150 = ppppppuStack_128;
          if ((undefined *******)ppppppuStack_128 != (undefined *******)0x0) {
            pppppppuVar8 = (undefined *******)(ppppppuStack_128 + 1);
            do {
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
              if (bVar5) {
                *pppppppuVar8 = (undefined ******)((long)*pppppppuVar8 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_10a96d604(&ppppppuStack_180,ppppppuStack_130,ppppppuStack_128);
          pppppppuVar8 = (undefined *******)0x58;
          __Znwm();
          ppppppuVar3 = ppppppuStack_180;
          pppppppuVar8[1] = (undefined ******)0x0;
          pppppppuVar8[2] = (undefined ******)0x0;
          *pppppppuVar8 = (undefined ******)&PTR_FUN_110c34b28;
          ppppppuVar16 = (undefined ******)CONCAT17(uStack_171,CONCAT25(uStack_173,uStack_178));
          ppppppuStack_180 = (undefined ******)0x0;
          uStack_178 = 0;
          uStack_173 = 0;
          uStack_171 = 0;
          pppppppuVar8[4] = (undefined ******)0x0;
          pppppppuVar8[5] = (undefined ******)0x0;
          ppppppuStack_140 = (undefined ******)(pppppppuVar8 + 3);
          *ppppppuStack_140 = (undefined *****)&PTR_FUN_110c323d8;
          *(undefined4 *)(pppppppuVar8 + 6) = 1;
          pppppppuVar8[8] = ppppppuVar16;
          pppppppuVar8[7] = ppppppuVar3;
          *(undefined1 *)(pppppppuVar8 + 10) = 1;
          ppppppuStack_138 = (undefined ******)pppppppuVar8;
          if ((undefined *******)ppppppuVar19 != (undefined *******)0x0) {
            pppppppuVar8 = (undefined *******)(ppppppuVar19 + 1);
            do {
              ppppppuVar16 = *pppppppuVar8;
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
              if (bVar5) {
                *pppppppuVar8 = (undefined ******)((long)ppppppuVar16 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (ppppppuVar16 == (undefined ******)0x0) {
              (*(code *)(*ppppppuVar19)[2])(ppppppuVar19);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar19);
            }
          }
          ppppppuVar19 = ppppppuStack_128;
          if ((undefined *******)ppppppuStack_128 != (undefined *******)0x0) {
            pppppppuVar8 = (undefined *******)(ppppppuStack_128 + 1);
            do {
              ppppppuVar16 = *pppppppuVar8;
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
              if (bVar5) {
                *pppppppuVar8 = (undefined ******)((long)ppppppuVar16 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (ppppppuVar16 == (undefined ******)0x0) {
              (*(code *)(*ppppppuStack_128)[2])(ppppppuStack_128);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar19);
            }
          }
        }
        else {
          FUN_109ffe064(&ppppppuStack_180,pppppuStack_d8,uStack_90);
          pppppppuVar8 = (undefined *******)0x58;
          __Znwm();
          pppppppuVar8[1] = (undefined ******)0x0;
          pppppppuVar8[2] = (undefined ******)0x0;
          *pppppppuVar8 = (undefined ******)&PTR_FUN_110c34b28;
          pppppppuVar8[7] = ppppppuStack_180;
          pppppppuVar8[8] = (undefined ******)CONCAT17(uStack_171,CONCAT25(uStack_173,uStack_178));
          *(ulong *)((long)pppppppuVar8 + 0x47) =
               CONCAT17(uStack_16a,CONCAT16(uStack_16b,CONCAT51(uStack_170,uStack_171)));
          pppppppuVar8[4] = (undefined ******)0x0;
          pppppppuVar8[5] = (undefined ******)0x0;
          ppppppuStack_140 = (undefined ******)(pppppppuVar8 + 3);
          *ppppppuStack_140 = (undefined *****)&PTR_FUN_110c323d8;
          *(uint *)(pppppppuVar8 + 6) = (uint)bVar5;
          *(char *)((long)pppppppuVar8 + 0x4f) = cStack_169;
          *(undefined1 *)(pppppppuVar8 + 10) = 0;
          ppppppuStack_138 = (undefined ******)pppppppuVar8;
        }
        pppppuVar10 = pppppuVar17 + 0x18;
        pppppppuVar8 = (undefined *******)0x1;
        func_0x00010a9ab4e4();
        if (pppppuVar10 != (undefined *****)0x0) {
          unaff_x22 = (undefined *******)pppppuVar10[4];
          for (unaff_x21 = (undefined *******)pppppuVar10[3]; ppppppuVar19 = ppppppuStack_138,
              unaff_x21 != unaff_x22; unaff_x21 = unaff_x21 + 2) {
            ppppppuVar16 = *unaff_x21;
            uStack_178 = SUB85(ppppppuStack_138,0);
            uStack_173 = (undefined2)((ulong)ppppppuStack_138 >> 0x28);
            uStack_171 = (undefined1)((ulong)ppppppuStack_138 >> 0x38);
            ppppppuStack_180 = ppppppuStack_140;
            if ((undefined *******)ppppppuStack_138 != (undefined *******)0x0) {
              pppppppuVar8 = (undefined *******)(ppppppuStack_138 + 1);
              do {
                cVar1 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
                if (bVar5) {
                  *pppppppuVar8 = (undefined ******)((long)*pppppppuVar8 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            pppppppuVar8 = &ppppppuStack_180;
            FUN_10a9aad50(ppppppuVar16);
            if ((undefined *******)ppppppuVar19 != (undefined *******)0x0) {
              pppppppuVar6 = (undefined *******)(ppppppuVar19 + 1);
              do {
                ppppppuVar16 = *pppppppuVar6;
                cVar1 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
                if (bVar5) {
                  *pppppppuVar6 = (undefined ******)((long)ppppppuVar16 + -1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (ppppppuVar16 == (undefined ******)0x0) {
                (*(code *)(*ppppppuVar19)[2])(ppppppuVar19);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar19);
              }
            }
          }
        }
        if (pppppuVar17[0x1f] != (undefined ****)0x0) {
          if ((undefined *******)ppppppuStack_140 == (undefined *******)0x0) {
            ppppppuStack_180 = (undefined ******)0x0;
            uStack_178 = 0;
            uStack_173 = 0;
            uStack_171 = 0;
            pppppppuVar6 = (undefined *******)0x0;
          }
          else {
            ppppppuStack_180 = ppppppuStack_140;
            uStack_178 = SUB85(ppppppuStack_138,0);
            uStack_173 = (undefined2)((ulong)ppppppuStack_138 >> 0x28);
            uStack_171 = (undefined1)((ulong)ppppppuStack_138 >> 0x38);
            pppppppuVar6 = (undefined *******)ppppppuStack_138;
            if ((undefined *******)ppppppuStack_138 != (undefined *******)0x0) {
              pppppppuVar8 = (undefined *******)(ppppppuStack_138 + 1);
              do {
                cVar1 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
                if (bVar5) {
                  *pppppppuVar8 = (undefined ******)((long)*pppppppuVar8 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
          }
          pppppppuVar8 = &ppppppuStack_180;
          FUN_10a9aafc4();
          if (pppppppuVar6 != (undefined *******)0x0) {
            pppppppuVar11 = pppppppuVar6 + 1;
            do {
              ppppppuVar19 = *pppppppuVar11;
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
              if (bVar5) {
                *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (ppppppuVar19 == (undefined ******)0x0) {
              (*(code *)(*pppppppuVar6)[2])(pppppppuVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar6);
            }
          }
        }
        if ((undefined *******)ppppppuStack_138 != (undefined *******)0x0) {
          pppppppuVar11 = (undefined *******)(ppppppuStack_138 + 1);
          do {
            ppppppuVar19 = *pppppppuVar11;
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar5) {
              *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
            pppppppuVar6 = (undefined *******)ppppppuStack_138;
          } while (cVar1 != '\0');
          goto LAB_10a9aa768;
        }
      }
    }
    else if (iStack_e0 == 2) {
      puVar7 = (undefined8 *)0x30;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_FUN_110c34a90;
      puVar7[4] = 0;
      puVar7[5] = 0;
      ppppppuStack_180 = (undefined ******)(puVar7 + 3);
      *ppppppuStack_180 = (undefined *****)&PTR_FUN_110c32380;
      uStack_178 = SUB85(puVar7,0);
      uStack_173 = (undefined2)((ulong)puVar7 >> 0x28);
      uStack_171 = (undefined1)((ulong)puVar7 >> 0x38);
      pppppuVar10 = pppppuVar17 + 0x18;
      pppppppuVar8 = (undefined *******)0x2;
      func_0x00010a9ab4e4();
      if (pppppuVar10 != (undefined *****)0x0) {
        unaff_x21 = (undefined *******)pppppuVar10[4];
        for (pppppppuVar6 = (undefined *******)pppppuVar10[3]; pppppppuVar6 != unaff_x21;
            pppppppuVar6 = pppppppuVar6 + 2) {
          pppppppuVar8 = &ppppppuStack_180;
          FUN_10a9aad50(*pppppppuVar6);
        }
      }
      if (pppppuVar17[0x23] != (undefined ****)0x0) {
        pppppppuVar8 = &ppppppuStack_180;
        FUN_10a9aad50();
      }
      pppppppuVar6 = (undefined *******)CONCAT17(uStack_171,CONCAT25(uStack_173,uStack_178));
      if (pppppppuVar6 != (undefined *******)0x0) {
        pppppppuVar11 = pppppppuVar6 + 1;
        do {
          ppppppuVar19 = *pppppppuVar11;
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
          if (bVar5) {
            *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_10a9aa768;
      }
    }
    else if (iStack_e0 == 3) {
      cStack_169 = '\x15';
      uStack_178 = 0x6c635f7465;
      ppppppuStack_180 = (undefined ******)0x6b636f736265773a;
      uStack_173 = 0x736f;
      uStack_171 = 0x65;
      uStack_170 = 0x65646f635f;
      uStack_16b = 0;
      puVar9 = auStack_80;
      func_0x000104c5e210(puVar9,&ppppppuStack_180);
      if (cStack_169 < '\0') {
        __ZdlPv(ppppppuStack_180);
      }
      if (puVar9 == (undefined1 *)0x0) {
        unaff_x22 = (undefined *******)0x3e8;
      }
      else {
        unaff_x22 = (undefined *******)(puVar9 + 0x28);
        __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                  (unaff_x22,0,10);
      }
      func_0x000107c2b054(&ppppppuStack_158,&UNK_10f68581c);
      ppppppuVar19 = (undefined ******)0x19;
      __Znwm();
      uStack_170 = 0x19;
      uStack_16b = 0;
      uStack_16a = 0;
      cStack_169 = -0x80;
      uStack_178 = 0x17;
      uStack_173 = 0;
      uStack_171 = 0;
      ppppppuVar19[1] = (undefined *****)0x65736f6c635f7465;
      *ppppppuVar19 = (undefined *****)0x6b636f736265773a;
      *(undefined8 *)((long)ppppppuVar19 + 0xf) = 0x6e6f736165725f65;
      *(undefined1 *)((long)ppppppuVar19 + 0x17) = 0;
      puVar9 = auStack_80;
      ppppppuStack_180 = ppppppuVar19;
      func_0x000104c5e210(puVar9,&ppppppuStack_180);
      if (cStack_169 < '\0') {
        __ZdlPv(ppppppuStack_180);
      }
      if (puVar9 != (undefined1 *)0x0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&ppppppuStack_158,puVar9 + 0x28);
      }
      iVar18 = (int)unaff_x22;
      ppppppuStack_180 = (undefined ******)CONCAT44(ppppppuStack_180._4_4_,iVar18);
      if (cStack_141 < '\0') {
        func_0x000107c3192c(&uStack_178,ppppppuStack_158,ppppppuStack_150);
        unaff_x22 = (undefined *******)((ulong)ppppppuStack_180 & 0xffffffff);
      }
      else {
        uStack_170 = SUB85(ppppppuStack_150,0);
        uStack_16b = (undefined1)((ulong)ppppppuStack_150 >> 0x28);
        uStack_16a = (undefined1)((ulong)ppppppuStack_150 >> 0x30);
        cStack_169 = (char)((ulong)ppppppuStack_150 >> 0x38);
        uStack_178 = SUB85(ppppppuStack_158,0);
        uStack_173 = (undefined2)((ulong)ppppppuStack_158 >> 0x28);
        uStack_171 = (undefined1)((ulong)ppppppuStack_158 >> 0x38);
        uStack_168 = (undefined ******)CONCAT17(cStack_141,uStack_148);
      }
      unaff_x21 = (undefined *******)0x58;
      uStack_160 = iVar18 == 1000;
      __Znwm();
      unaff_x21[1] = (undefined ******)0x0;
      unaff_x21[2] = (undefined ******)0x0;
      *unaff_x21 = (undefined ******)&PTR_DAT_110c34b78;
      if ((long)uStack_168 < 0) {
        func_0x000107c3192c(&ppppppuStack_130,CONCAT17(uStack_171,CONCAT25(uStack_173,uStack_178)),
                            CONCAT17(cStack_169,CONCAT16(uStack_16a,CONCAT15(uStack_16b,uStack_170))
                                    ));
        uVar2 = uStack_160;
      }
      else {
        ppppppuStack_128 =
             (undefined ******)
             CONCAT17(cStack_169,CONCAT16(uStack_16a,CONCAT15(uStack_16b,uStack_170)));
        ppppppuStack_130 = (undefined ******)CONCAT17(uStack_171,CONCAT25(uStack_173,uStack_178));
        pppppuStack_120 = (undefined *****)uStack_168;
        uVar2 = iVar18 == 1000;
      }
      unaff_x21[4] = (undefined ******)0x0;
      unaff_x21[5] = (undefined ******)0x0;
      ppppppuStack_140 = (undefined ******)(unaff_x21 + 3);
      *ppppppuStack_140 = (undefined *****)&PTR_FUN_110c32430;
      *(int *)(unaff_x21 + 6) = (int)unaff_x22;
      unaff_x21[8] = ppppppuStack_128;
      unaff_x21[7] = ppppppuStack_130;
      unaff_x21[9] = (undefined ******)pppppuStack_120;
      *(undefined1 *)(unaff_x21 + 10) = uVar2;
      pppppuVar10 = pppppuVar17 + 0x18;
      pppppppuVar8 = (undefined *******)0x3;
      ppppppuStack_138 = (undefined ******)unaff_x21;
      func_0x00010a9ab4e4();
      if (pppppuVar10 != (undefined *****)0x0) {
        unaff_x22 = (undefined *******)pppppuVar10[4];
        for (unaff_x21 = (undefined *******)pppppuVar10[3]; ppppppuVar19 = ppppppuStack_138,
            unaff_x21 != unaff_x22; unaff_x21 = unaff_x21 + 2) {
          ppppppuVar16 = *unaff_x21;
          ppppppuStack_128 = ppppppuStack_138;
          ppppppuStack_130 = ppppppuStack_140;
          if ((undefined *******)ppppppuStack_138 != (undefined *******)0x0) {
            pppppppuVar8 = (undefined *******)(ppppppuStack_138 + 1);
            do {
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
              if (bVar5) {
                *pppppppuVar8 = (undefined ******)((long)*pppppppuVar8 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          pppppppuVar8 = &ppppppuStack_130;
          FUN_10a9aad50(ppppppuVar16);
          if ((undefined *******)ppppppuVar19 != (undefined *******)0x0) {
            pppppppuVar6 = (undefined *******)(ppppppuVar19 + 1);
            do {
              ppppppuVar16 = *pppppppuVar6;
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
              if (bVar5) {
                *pppppppuVar6 = (undefined ******)((long)ppppppuVar16 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (ppppppuVar16 == (undefined ******)0x0) {
              (*(code *)(*ppppppuVar19)[2])(ppppppuVar19);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar19);
            }
          }
        }
      }
      if (pppppuVar17[0x21] != (undefined ****)0x0) {
        if ((undefined *******)ppppppuStack_140 == (undefined *******)0x0) {
          ppppppuStack_130 = (undefined ******)0x0;
          ppppppuStack_128 = (undefined ******)0x0;
        }
        else {
          ppppppuStack_130 = ppppppuStack_140;
          ppppppuStack_128 = ppppppuStack_138;
          if ((undefined *******)ppppppuStack_138 != (undefined *******)0x0) {
            pppppppuVar8 = (undefined *******)(ppppppuStack_138 + 1);
            do {
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
              if (bVar5) {
                *pppppppuVar8 = (undefined ******)((long)*pppppppuVar8 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
        ppppppuVar19 = ppppppuStack_128;
        pppppppuVar8 = &ppppppuStack_130;
        FUN_10a9ab234();
        if ((undefined *******)ppppppuVar19 != (undefined *******)0x0) {
          pppppppuVar6 = (undefined *******)(ppppppuVar19 + 1);
          do {
            ppppppuVar16 = *pppppppuVar6;
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
            if (bVar5) {
              *pppppppuVar6 = (undefined ******)((long)ppppppuVar16 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppppppuVar16 == (undefined ******)0x0) {
            (*(code *)(*ppppppuVar19)[2])(ppppppuVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar19);
          }
        }
      }
      ppppppuVar19 = ppppppuStack_138;
      if ((undefined *******)ppppppuStack_138 != (undefined *******)0x0) {
        pppppppuVar6 = (undefined *******)(ppppppuStack_138 + 1);
        do {
          ppppppuVar16 = *pppppppuVar6;
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
          if (bVar5) {
            *pppppppuVar6 = (undefined ******)((long)ppppppuVar16 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (ppppppuVar16 == (undefined ******)0x0) {
          (*(code *)(*ppppppuStack_138)[2])(ppppppuStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar19);
        }
      }
      if (uStack_168._7_1_ < '\0') {
        __ZdlPv(CONCAT17(uStack_171,CONCAT25(uStack_173,uStack_178)));
      }
      FUN_10a975288(pppppuVar17);
      if (cStack_141 < '\0') {
        __ZdlPv(ppppppuStack_158);
      }
    }
    func_0x000104c4f944(auStack_80);
    pppppppuVar6 = (undefined *******)&pppppuStack_d8;
    FUN_10a042634();
    if (lStack_e8 < 0) {
      pppppppuVar6 = (undefined *******)ppppppuStack_f8;
      __ZdlPv();
    }
    if (lStack_100 < 0) {
      pppppppuVar6 = (undefined *******)ppppppuStack_110;
      __ZdlPv();
    }
  }
  ppppppuVar19 = ppppppuStack_188;
  if ((undefined *******)ppppppuStack_188 != (undefined *******)0x0) {
    pppppppuVar11 = (undefined *******)(ppppppuStack_188 + 1);
    do {
      ppppppuVar16 = *pppppppuVar11;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
      if (bVar5) {
        *pppppppuVar11 = (undefined ******)((long)ppppppuVar16 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppppppuVar16 == (undefined ******)0x0) {
      (*(code *)(*ppppppuStack_188)[2])(ppppppuStack_188);
      pppppppuVar6 = (undefined *******)ppppppuVar19;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_end_catch();
  FUN_10a05bd10(&ppppppuStack_110);
  func_0x00010a05a86c(&pppppuStack_190);
  pppppppuVar11 = pppppppuVar6;
  __Unwind_Resume();
  ppppppuStack_1b8 = ppppppuVar19;
  pcStack_1a8 = FUN_10a9aad50;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuStack_1d0 = (undefined ******)unaff_x22;
  ppppppuStack_1c8 = (undefined ******)unaff_x21;
  ppppppuStack_1c0 = (undefined ******)pppppppuVar6;
  puStack_1b0 = &stack0xfffffffffffffff0;
  if ((pppppppuVar11 == (undefined *******)0x0) || (*(char *)(pppppppuVar11 + 8) != '\x02')) {
    pppppppuVar6 = pppppppuVar11;
    pppppppuVar14 = pppppppuVar8;
    if ((pppppppuVar11 != (undefined *******)0x0) && (*(char *)(pppppppuVar11 + 8) == '\x01')) {
      ppppppuVar19 = *pppppppuVar11;
      ppppppuStack_218 = pppppppuVar8[1];
      pppppuStack_220 = (undefined *****)*pppppppuVar8;
      if (pppppppuVar8[1] != (undefined ******)0x0) {
        ppppppuVar16 = pppppppuVar8[1] + 1;
        do {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar16,0x10);
          if (bVar5) {
            *ppppppuVar16 = (undefined *****)((long)*ppppppuVar16 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppppppuVar6 = (undefined *******)&pppppuStack_220;
      pppppppuVar14 = pppppppuVar11;
      (*(code *)ppppppuVar19)();
      if ((undefined *******)ppppppuStack_218 != (undefined *******)0x0) {
        pppppppuVar8 = (undefined *******)(ppppppuStack_218 + 1);
        do {
          ppppppuVar19 = *pppppppuVar8;
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
          if (bVar5) {
            *pppppppuVar8 = (undefined ******)((long)ppppppuVar19 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
          pppppppuVar12 = (undefined *******)ppppppuStack_218;
        } while (cVar1 != '\0');
LAB_10a9aaf20:
        if (ppppppuVar19 == (undefined ******)0x0) {
          (*(code *)(*pppppppuVar12)[2])(pppppppuVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppppuVar6 = pppppppuVar12;
        }
      }
    }
  }
  else {
    pppppppuVar12 = pppppppuVar11;
    pppppppuVar13 = pppppppuVar8;
    FUN_10a688b40();
    unaff_x21 = pppppppuVar12;
    if (pppppppuVar12 == (undefined *******)0x0) {
      pppppppuVar6 = (undefined *******)0x0;
      pppppppuVar14 = (undefined *******)0x0;
      if (pppppppuVar13 != (undefined *******)0x0) {
        pppppuStack_208 = (undefined *****)pppppppuVar11[1];
        pppppuStack_210 = (undefined *****)*pppppppuVar11;
        if (pppppppuVar11[1] != (undefined ******)0x0) {
          ppppppuVar19 = pppppppuVar11[1] + 1;
          do {
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
            if (bVar5) {
              *ppppppuVar19 = (undefined *****)((long)*ppppppuVar19 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pppppuStack_230 = (undefined *****)*pppppppuVar8;
        pppppppuVar8 = (undefined *******)pppppppuVar8[1];
        if (pppppppuVar8 != (undefined *******)0x0) {
          pppppppuVar6 = pppppppuVar8 + 1;
          do {
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
            if (bVar5) {
              *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pppppuStack_220 = (undefined *****)FUN_10a9ab788;
        ppppppuStack_218 = (undefined ******)&PTR_FUN_110c34ad0;
        pppppuStack_240 = (undefined *****)0x0;
        ppppppuStack_238 = (undefined ******)0x0;
        if (pppppppuVar8 != (undefined *******)0x0) {
          pppppppuVar6 = pppppppuVar8 + 1;
          do {
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
            if (bVar5) {
              *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        unaff_x21 = (undefined *******)&pppppuStack_220;
        pppppppuVar14 = (undefined *******)&pppppuStack_220;
        ppppppuStack_228 = (undefined ******)pppppppuVar8;
        pppppuStack_200 = pppppuStack_230;
        ppppppuStack_1f8 = (undefined ******)pppppppuVar8;
        FUN_10a4634ec();
        pppppppuVar6 = &ppppppuStack_218;
        (*(code *)*ppppppuStack_218)();
        if (pppppppuVar8 != (undefined *******)0x0) {
          pppppppuVar11 = pppppppuVar8 + 1;
          do {
            ppppppuVar19 = *pppppppuVar11;
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar5) {
              *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppppppuVar19 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar8)[2])(pppppppuVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppppuVar6 = pppppppuVar8;
          }
        }
        pppppppuVar11 = (undefined *******)&pppppuStack_240;
        if ((undefined *******)ppppppuStack_238 != (undefined *******)0x0) {
          pppppppuVar8 = (undefined *******)(ppppppuStack_238 + 1);
          do {
            ppppppuVar19 = *pppppppuVar8;
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
            if (bVar5) {
              *pppppppuVar8 = (undefined ******)((long)ppppppuVar19 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
            pppppppuVar12 = (undefined *******)ppppppuStack_238;
            pppppppuVar11 = (undefined *******)&pppppuStack_240;
          } while (cVar1 != '\0');
          goto LAB_10a9aaf20;
        }
      }
    }
    else {
      *pppppppuVar12 =
           (undefined ******)
           CONCAT44((int)((ulong)*pppppppuVar12 >> 0x20) + 1,(int)*pppppppuVar12 + 1);
      pppppppuVar6 = (undefined *******)*pppppppuVar11;
      FUN_10a9ab584();
      iVar18 = *(int *)((long)pppppppuVar12 + 4) + -1;
      *(int *)((long)pppppppuVar12 + 4) = iVar18;
      pppppppuVar14 = pppppppuVar8;
      if (iVar18 == 0) {
        *(undefined4 *)pppppppuVar12 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppppppuStack_218)(unaff_x21 + 1);
  func_0x00010a9abda8(pppppppuVar11 + 2);
  func_0x00010a004dac(&pppppuStack_240);
  pppppppuVar8 = pppppppuVar6;
  __Unwind_Resume();
  pppppppuVar12 = (undefined *******)&pppppuStack_2e0;
  pcStack_248 = FUN_10a9aafc4;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuStack_270 = (undefined ******)unaff_x22;
  ppppppuStack_268 = (undefined ******)unaff_x21;
  ppppppuStack_260 = (undefined ******)pppppppuVar11;
  ppppppuStack_258 = (undefined ******)pppppppuVar6;
  ppuStack_250 = &puStack_1b0;
  if (*(char *)(pppppppuVar8 + 8) == '\x01') {
    ppppppuVar19 = *pppppppuVar8;
    ppppppuStack_2b8 = pppppppuVar14[1];
    pppppuStack_2c0 = (undefined *****)*pppppppuVar14;
    if (pppppppuVar14[1] != (undefined ******)0x0) {
      ppppppuVar16 = pppppppuVar14[1] + 1;
      do {
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar16,0x10);
        if (bVar5) {
          *ppppppuVar16 = (undefined *****)((long)*ppppppuVar16 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppppuVar6 = (undefined *******)&pppppuStack_2c0;
    pppppppuVar11 = pppppppuVar8;
    (*(code *)ppppppuVar19)();
    if ((undefined *******)ppppppuStack_2b8 != (undefined *******)0x0) {
      pppppppuVar14 = (undefined *******)(ppppppuStack_2b8 + 1);
      do {
        ppppppuVar19 = *pppppppuVar14;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
        if (bVar5) {
          *pppppppuVar14 = (undefined ******)((long)ppppppuVar19 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
        pppppppuVar13 = (undefined *******)ppppppuStack_2b8;
        pppppppuVar12 = pppppppuVar8;
      } while (cVar1 != '\0');
LAB_10a9ab098:
      pppppppuVar8 = pppppppuVar12;
      if (ppppppuVar19 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar13)[2])(pppppppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = pppppppuVar13;
      }
    }
  }
  else {
    pppppppuVar6 = pppppppuVar8;
    pppppppuVar11 = pppppppuVar14;
    if (*(char *)(pppppppuVar8 + 8) == '\x02') {
      pppppppuVar13 = pppppppuVar8;
      pppppppuVar15 = pppppppuVar14;
      FUN_10a688b40();
      unaff_x21 = pppppppuVar13;
      if (pppppppuVar13 == (undefined *******)0x0) {
        pppppppuVar11 = (undefined *******)0x0;
        pppppppuVar6 = (undefined *******)0x0;
        if (pppppppuVar15 != (undefined *******)0x0) {
          pppppuStack_2a8 = (undefined *****)pppppppuVar8[1];
          pppppuStack_2b0 = (undefined *****)*pppppppuVar8;
          if (pppppppuVar8[1] != (undefined ******)0x0) {
            ppppppuVar19 = pppppppuVar8[1] + 1;
            do {
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
              if (bVar5) {
                *ppppppuVar19 = (undefined *****)((long)*ppppppuVar19 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          pppppuStack_2d0 = (undefined *****)*pppppppuVar14;
          pppppppuVar8 = (undefined *******)pppppppuVar14[1];
          if (pppppppuVar8 != (undefined *******)0x0) {
            pppppppuVar6 = pppppppuVar8 + 1;
            do {
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
              if (bVar5) {
                *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          pppppuStack_2c0 = (undefined *****)FUN_10a9aba04;
          ppppppuStack_2b8 = (undefined ******)&PTR_FUN_110c34ae8;
          pppppuStack_2e0 = (undefined *****)0x0;
          ppppppuStack_2d8 = (undefined ******)0x0;
          if (pppppppuVar8 != (undefined *******)0x0) {
            pppppppuVar6 = pppppppuVar8 + 1;
            do {
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
              if (bVar5) {
                *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          unaff_x21 = (undefined *******)&pppppuStack_2c0;
          pppppppuVar11 = (undefined *******)&pppppuStack_2c0;
          ppppppuStack_2c8 = (undefined ******)pppppppuVar8;
          pppppuStack_2a0 = pppppuStack_2d0;
          ppppppuStack_298 = (undefined ******)pppppppuVar8;
          FUN_10a4634ec();
          pppppppuVar6 = &ppppppuStack_2b8;
          (*(code *)*ppppppuStack_2b8)();
          if (pppppppuVar8 != (undefined *******)0x0) {
            pppppppuVar14 = pppppppuVar8 + 1;
            do {
              ppppppuVar19 = *pppppppuVar14;
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
              if (bVar5) {
                *pppppppuVar14 = (undefined ******)((long)ppppppuVar19 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (ppppppuVar19 == (undefined ******)0x0) {
              (*(code *)(*pppppppuVar8)[2])(pppppppuVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppppppuVar6 = pppppppuVar8;
            }
          }
          pppppppuVar8 = (undefined *******)&pppppuStack_2e0;
          if ((undefined *******)ppppppuStack_2d8 != (undefined *******)0x0) {
            pppppppuVar8 = (undefined *******)(ppppppuStack_2d8 + 1);
            do {
              ppppppuVar19 = *pppppppuVar8;
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
              if (bVar5) {
                *pppppppuVar8 = (undefined ******)((long)ppppppuVar19 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
              pppppppuVar13 = (undefined *******)ppppppuStack_2d8;
            } while (cVar1 != '\0');
            goto LAB_10a9ab098;
          }
        }
      }
      else {
        *pppppppuVar13 =
             (undefined ******)
             CONCAT44((int)((ulong)*pppppppuVar13 >> 0x20) + 1,(int)*pppppppuVar13 + 1);
        pppppppuVar6 = (undefined *******)*pppppppuVar8;
        FUN_10a9ab800();
        iVar18 = *(int *)((long)pppppppuVar13 + 4) + -1;
        *(int *)((long)pppppppuVar13 + 4) = iVar18;
        pppppppuVar11 = pppppppuVar14;
        if (iVar18 == 0) {
          *(undefined4 *)pppppppuVar13 = 0;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppppppuStack_2b8)(unaff_x21 + 1);
  FUN_10a9aba7c(pppppppuVar8 + 2);
  func_0x00010a004dac(&pppppuStack_2e0);
  pppppppuVar14 = pppppppuVar6;
  __Unwind_Resume();
  pppppppuVar12 = (undefined *******)&pppppuStack_380;
  pcStack_2e8 = FUN_10a9ab234;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuStack_310 = (undefined ******)unaff_x22;
  ppppppuStack_308 = (undefined ******)unaff_x21;
  ppppppuStack_300 = (undefined ******)pppppppuVar8;
  ppppppuStack_2f8 = (undefined ******)pppppppuVar6;
  pppuStack_2f0 = &ppuStack_250;
  if (*(char *)(pppppppuVar14 + 8) == '\x01') {
    ppppppuVar19 = *pppppppuVar14;
    ppppppuStack_358 = pppppppuVar11[1];
    pppppuStack_360 = (undefined *****)*pppppppuVar11;
    if (pppppppuVar11[1] != (undefined ******)0x0) {
      ppppppuVar16 = pppppppuVar11[1] + 1;
      do {
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar16,0x10);
        if (bVar5) {
          *ppppppuVar16 = (undefined *****)((long)*ppppppuVar16 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppppuVar8 = (undefined *******)&pppppuStack_360;
    (*(code *)ppppppuVar19)(pppppppuVar8,pppppppuVar14);
    if ((undefined *******)ppppppuStack_358 == (undefined *******)0x0) goto LAB_10a9ab41c;
    pppppppuVar6 = (undefined *******)(ppppppuStack_358 + 1);
    do {
      ppppppuVar19 = *pppppppuVar6;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
      if (bVar5) {
        *pppppppuVar6 = (undefined ******)((long)ppppppuVar19 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      pppppppuVar11 = (undefined *******)ppppppuStack_358;
      pppppppuVar12 = pppppppuVar14;
    } while (cVar1 != '\0');
  }
  else {
    pppppppuVar8 = pppppppuVar14;
    if (*(char *)(pppppppuVar14 + 8) != '\x02') goto LAB_10a9ab41c;
    pppppppuVar6 = pppppppuVar14;
    pppppppuVar13 = pppppppuVar11;
    FUN_10a688b40();
    unaff_x21 = pppppppuVar6;
    if (pppppppuVar6 != (undefined *******)0x0) {
      *pppppppuVar6 =
           (undefined ******)
           CONCAT44((int)((ulong)*pppppppuVar6 >> 0x20) + 1,(int)*pppppppuVar6 + 1);
      pppppppuVar8 = (undefined *******)*pppppppuVar14;
      FUN_10a9abad4(pppppppuVar8,pppppppuVar11);
      iVar18 = *(int *)((long)pppppppuVar6 + 4) + -1;
      *(int *)((long)pppppppuVar6 + 4) = iVar18;
      if (iVar18 == 0) {
        *(undefined4 *)pppppppuVar6 = 0;
      }
      goto LAB_10a9ab41c;
    }
    pppppppuVar8 = (undefined *******)0x0;
    if (pppppppuVar13 == (undefined *******)0x0) goto LAB_10a9ab41c;
    pppppuStack_348 = (undefined *****)pppppppuVar14[1];
    pppppuStack_350 = (undefined *****)*pppppppuVar14;
    if (pppppppuVar14[1] != (undefined ******)0x0) {
      ppppppuVar19 = pppppppuVar14[1] + 1;
      do {
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
        if (bVar5) {
          *ppppppuVar19 = (undefined *****)((long)*ppppppuVar19 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppuStack_370 = (undefined *****)*pppppppuVar11;
    pppppppuVar6 = (undefined *******)pppppppuVar11[1];
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar8 = pppppppuVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
        if (bVar5) {
          *pppppppuVar8 = (undefined ******)((long)*pppppppuVar8 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppuStack_360 = (undefined *****)FUN_10a9abcd8;
    ppppppuStack_358 = (undefined ******)&PTR_FUN_110c34b00;
    pppppuStack_380 = (undefined *****)0x0;
    ppppppuStack_378 = (undefined ******)0x0;
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar8 = pppppppuVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
        if (bVar5) {
          *pppppppuVar8 = (undefined ******)((long)*pppppppuVar8 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    unaff_x21 = (undefined *******)&pppppuStack_360;
    ppppppuStack_368 = (undefined ******)pppppppuVar6;
    pppppuStack_340 = pppppuStack_370;
    ppppppuStack_338 = (undefined ******)pppppppuVar6;
    FUN_10a4634ec(pppppppuVar13,&pppppuStack_360);
    pppppppuVar8 = &ppppppuStack_358;
    (*(code *)*ppppppuStack_358)();
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar11 = pppppppuVar6 + 1;
      do {
        ppppppuVar19 = *pppppppuVar11;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
        if (bVar5) {
          *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppppppuVar19 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar6)[2])(pppppppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar8 = pppppppuVar6;
      }
    }
    pppppppuVar14 = (undefined *******)&pppppuStack_380;
    if ((undefined *******)ppppppuStack_378 == (undefined *******)0x0) goto LAB_10a9ab41c;
    pppppppuVar6 = (undefined *******)(ppppppuStack_378 + 1);
    do {
      ppppppuVar19 = *pppppppuVar6;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
      if (bVar5) {
        *pppppppuVar6 = (undefined ******)((long)ppppppuVar19 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      pppppppuVar11 = (undefined *******)ppppppuStack_378;
    } while (cVar1 != '\0');
  }
  pppppppuVar14 = pppppppuVar12;
  if (ppppppuVar19 == (undefined ******)0x0) {
    (*(code *)(*pppppppuVar11)[2])(pppppppuVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppppuVar8 = pppppppuVar11;
  }
LAB_10a9ab41c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
    ___stack_chk_fail();
    (*(code *)*ppppppuStack_358)(unaff_x21 + 1);
    func_0x00010a9abd50(pppppppuVar14 + 2);
    func_0x00010a004dac(&pppppuStack_380);
    __Unwind_Resume();
    *pppppppuVar8 = (undefined ******)&PTR_FUN_110c34a90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10a9aad50; end: 10a9aafc3;  */

void FUN_10a9aad50(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ******ppppppuVar10;
  undefined *****pppppuVar11;
  undefined ******unaff_x21;
  undefined ****ppppuStack_1e0;
  undefined *****pppppuStack_1d8;
  undefined ****ppppuStack_1d0;
  undefined *****pppppuStack_1c8;
  undefined ****ppppuStack_1c0;
  undefined *****pppppuStack_1b8;
  undefined ****ppppuStack_1b0;
  undefined ****ppppuStack_1a8;
  undefined ****ppppuStack_1a0;
  undefined *****pppppuStack_198;
  long lStack_178;
  undefined ****ppppuStack_140;
  undefined *****pppppuStack_138;
  undefined ****ppppuStack_130;
  undefined *****pppppuStack_128;
  undefined ****ppppuStack_120;
  undefined *****pppppuStack_118;
  undefined ****ppppuStack_110;
  undefined ****ppppuStack_108;
  undefined ****ppppuStack_100;
  undefined *****pppppuStack_f8;
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
    ppppppuVar5 = param_1;
    ppppppuVar9 = param_2;
    if ((param_1 != (undefined ******)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pppppuVar11 = *param_1;
      pppppuStack_78 = param_2[1];
      ppppuStack_80 = (undefined ****)*param_2;
      if (param_2[1] != (undefined *****)0x0) {
        pppppuVar1 = param_2[1] + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
          if (bVar3) {
            *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppppppuVar5 = (undefined ******)&ppppuStack_80;
      ppppppuVar9 = param_1;
      (*(code *)pppppuVar11)();
      if ((undefined ******)pppppuStack_78 != (undefined ******)0x0) {
        ppppppuVar6 = (undefined ******)(pppppuStack_78 + 1);
        do {
          pppppuVar11 = *ppppppuVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
          if (bVar3) {
            *ppppppuVar6 = (undefined *****)((long)pppppuVar11 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
          ppppppuVar7 = (undefined ******)pppppuStack_78;
        } while (cVar2 != '\0');
LAB_10a9aaf20:
        if (pppppuVar11 == (undefined *****)0x0) {
          (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppuVar5 = ppppppuVar7;
        }
      }
    }
  }
  else {
    unaff_x21 = param_1;
    ppppppuVar6 = param_2;
    FUN_10a688b40();
    if (unaff_x21 == (undefined ******)0x0) {
      ppppppuVar5 = (undefined ******)0x0;
      ppppppuVar9 = (undefined ******)0x0;
      if (ppppppuVar6 != (undefined ******)0x0) {
        ppppuStack_68 = (undefined ****)param_1[1];
        ppppuStack_70 = (undefined ****)*param_1;
        if (param_1[1] != (undefined *****)0x0) {
          pppppuVar11 = param_1[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
            if (bVar3) {
              *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppppuStack_90 = (undefined ****)*param_2;
        ppppppuVar6 = (undefined ******)param_2[1];
        if (ppppppuVar6 != (undefined ******)0x0) {
          ppppppuVar5 = ppppppuVar6 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
            if (bVar3) {
              *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppppuStack_80 = (undefined ****)FUN_10a9ab788;
        pppppuStack_78 = (undefined *****)&PTR_FUN_110c34ad0;
        ppppuStack_a0 = (undefined ****)0x0;
        pppppuStack_98 = (undefined *****)0x0;
        if (ppppppuVar6 != (undefined ******)0x0) {
          ppppppuVar5 = ppppppuVar6 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
            if (bVar3) {
              *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        unaff_x21 = (undefined ******)&ppppuStack_80;
        ppppppuVar9 = (undefined ******)&ppppuStack_80;
        pppppuStack_88 = (undefined *****)ppppppuVar6;
        ppppuStack_60 = ppppuStack_90;
        pppppuStack_58 = (undefined *****)ppppppuVar6;
        FUN_10a4634ec();
        ppppppuVar5 = &pppppuStack_78;
        (*(code *)*pppppuStack_78)();
        if (ppppppuVar6 != (undefined ******)0x0) {
          ppppppuVar7 = ppppppuVar6 + 1;
          do {
            pppppuVar11 = *ppppppuVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
            if (bVar3) {
              *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (pppppuVar11 == (undefined *****)0x0) {
            (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppuVar5 = ppppppuVar6;
          }
        }
        param_1 = (undefined ******)&ppppuStack_a0;
        if ((undefined ******)pppppuStack_98 != (undefined ******)0x0) {
          ppppppuVar6 = (undefined ******)(pppppuStack_98 + 1);
          do {
            pppppuVar11 = *ppppppuVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
            if (bVar3) {
              *ppppppuVar6 = (undefined *****)((long)pppppuVar11 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
            ppppppuVar7 = (undefined ******)pppppuStack_98;
            param_1 = (undefined ******)&ppppuStack_a0;
          } while (cVar2 != '\0');
          goto LAB_10a9aaf20;
        }
      }
    }
    else {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar5 = (undefined ******)*param_1;
      FUN_10a9ab584();
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      ppppppuVar9 = param_2;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*pppppuStack_78)(unaff_x21 + 1);
  func_0x00010a9abda8(param_1 + 2);
  func_0x00010a004dac(&ppppuStack_a0);
  __Unwind_Resume();
  ppppppuVar6 = (undefined ******)&ppppuStack_140;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(ppppppuVar5 + 8) == '\x01') {
    pppppuVar11 = *ppppppuVar5;
    pppppuStack_118 = ppppppuVar9[1];
    ppppuStack_120 = (undefined ****)*ppppppuVar9;
    if (ppppppuVar9[1] != (undefined *****)0x0) {
      pppppuVar1 = ppppppuVar9[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar7 = (undefined ******)&ppppuStack_120;
    ppppppuVar10 = ppppppuVar5;
    (*(code *)pppppuVar11)();
    if ((undefined ******)pppppuStack_118 != (undefined ******)0x0) {
      ppppppuVar9 = (undefined ******)(pppppuStack_118 + 1);
      do {
        pppppuVar11 = *ppppppuVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar3) {
          *ppppppuVar9 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        ppppppuVar8 = (undefined ******)pppppuStack_118;
        ppppppuVar6 = ppppppuVar5;
      } while (cVar2 != '\0');
LAB_10a9ab098:
      ppppppuVar5 = ppppppuVar6;
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar7 = ppppppuVar8;
      }
    }
  }
  else {
    ppppppuVar7 = ppppppuVar5;
    ppppppuVar10 = ppppppuVar9;
    if (*(char *)(ppppppuVar5 + 8) == '\x02') {
      unaff_x21 = ppppppuVar5;
      ppppppuVar8 = ppppppuVar9;
      FUN_10a688b40();
      if (unaff_x21 == (undefined ******)0x0) {
        ppppppuVar10 = (undefined ******)0x0;
        ppppppuVar7 = (undefined ******)0x0;
        if (ppppppuVar8 != (undefined ******)0x0) {
          ppppuStack_108 = (undefined ****)ppppppuVar5[1];
          ppppuStack_110 = (undefined ****)*ppppppuVar5;
          if (ppppppuVar5[1] != (undefined *****)0x0) {
            pppppuVar11 = ppppppuVar5[1] + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
              if (bVar3) {
                *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppppuStack_130 = (undefined ****)*ppppppuVar9;
          ppppppuVar5 = (undefined ******)ppppppuVar9[1];
          if (ppppppuVar5 != (undefined ******)0x0) {
            ppppppuVar9 = ppppppuVar5 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
              if (bVar3) {
                *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppppuStack_120 = (undefined ****)FUN_10a9aba04;
          pppppuStack_118 = (undefined *****)&PTR_FUN_110c34ae8;
          ppppuStack_140 = (undefined ****)0x0;
          pppppuStack_138 = (undefined *****)0x0;
          if (ppppppuVar5 != (undefined ******)0x0) {
            ppppppuVar9 = ppppppuVar5 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
              if (bVar3) {
                *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          unaff_x21 = (undefined ******)&ppppuStack_120;
          ppppppuVar10 = (undefined ******)&ppppuStack_120;
          pppppuStack_128 = (undefined *****)ppppppuVar5;
          ppppuStack_100 = ppppuStack_130;
          pppppuStack_f8 = (undefined *****)ppppppuVar5;
          FUN_10a4634ec();
          ppppppuVar7 = &pppppuStack_118;
          (*(code *)*pppppuStack_118)();
          if (ppppppuVar5 != (undefined ******)0x0) {
            ppppppuVar9 = ppppppuVar5 + 1;
            do {
              pppppuVar11 = *ppppppuVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
              if (bVar3) {
                *ppppppuVar9 = (undefined *****)((long)pppppuVar11 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (pppppuVar11 == (undefined *****)0x0) {
              (*(code *)(*ppppppuVar5)[2])(ppppppuVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppuVar7 = ppppppuVar5;
            }
          }
          ppppppuVar5 = (undefined ******)&ppppuStack_140;
          if ((undefined ******)pppppuStack_138 != (undefined ******)0x0) {
            ppppppuVar5 = (undefined ******)(pppppuStack_138 + 1);
            do {
              pppppuVar11 = *ppppppuVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
              if (bVar3) {
                *ppppppuVar5 = (undefined *****)((long)pppppuVar11 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
              ppppppuVar8 = (undefined ******)pppppuStack_138;
            } while (cVar2 != '\0');
            goto LAB_10a9ab098;
          }
        }
      }
      else {
        *unaff_x21 = (undefined *****)
                     CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
        ppppppuVar7 = (undefined ******)*ppppppuVar5;
        FUN_10a9ab800();
        iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
        *(int *)((long)unaff_x21 + 4) = iVar4;
        ppppppuVar10 = ppppppuVar9;
        if (iVar4 == 0) {
          *(undefined4 *)unaff_x21 = 0;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*pppppuStack_118)(unaff_x21 + 1);
  FUN_10a9aba7c(ppppppuVar5 + 2);
  func_0x00010a004dac(&ppppuStack_140);
  __Unwind_Resume();
  ppppppuVar5 = (undefined ******)&ppppuStack_1e0;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(ppppppuVar7 + 8) == '\x01') {
    pppppuVar11 = *ppppppuVar7;
    pppppuStack_1b8 = ppppppuVar10[1];
    ppppuStack_1c0 = (undefined ****)*ppppppuVar10;
    if (ppppppuVar10[1] != (undefined *****)0x0) {
      pppppuVar1 = ppppppuVar10[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar9 = (undefined ******)&ppppuStack_1c0;
    (*(code *)pppppuVar11)(ppppppuVar9,ppppppuVar7);
    if ((undefined ******)pppppuStack_1b8 == (undefined ******)0x0) goto LAB_10a9ab41c;
    ppppppuVar6 = (undefined ******)(pppppuStack_1b8 + 1);
    do {
      pppppuVar11 = *ppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
      if (bVar3) {
        *ppppppuVar6 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar10 = (undefined ******)pppppuStack_1b8;
      ppppppuVar5 = ppppppuVar7;
    } while (cVar2 != '\0');
  }
  else {
    ppppppuVar9 = ppppppuVar7;
    if (*(char *)(ppppppuVar7 + 8) != '\x02') goto LAB_10a9ab41c;
    unaff_x21 = ppppppuVar7;
    ppppppuVar6 = ppppppuVar10;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar9 = (undefined ******)*ppppppuVar7;
      FUN_10a9abad4(ppppppuVar9,ppppppuVar10);
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a9ab41c;
    }
    ppppppuVar9 = (undefined ******)0x0;
    if (ppppppuVar6 == (undefined ******)0x0) goto LAB_10a9ab41c;
    ppppuStack_1a8 = (undefined ****)ppppppuVar7[1];
    ppppuStack_1b0 = (undefined ****)*ppppppuVar7;
    if (ppppppuVar7[1] != (undefined *****)0x0) {
      pppppuVar11 = ppppppuVar7[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
        if (bVar3) {
          *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_1d0 = (undefined ****)*ppppppuVar10;
    ppppppuVar7 = (undefined ******)ppppppuVar10[1];
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar9 = ppppppuVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar3) {
          *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_1c0 = (undefined ****)FUN_10a9abcd8;
    pppppuStack_1b8 = (undefined *****)&PTR_FUN_110c34b00;
    ppppuStack_1e0 = (undefined ****)0x0;
    pppppuStack_1d8 = (undefined *****)0x0;
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar9 = ppppppuVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar3) {
          *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_1c0;
    pppppuStack_1c8 = (undefined *****)ppppppuVar7;
    ppppuStack_1a0 = ppppuStack_1d0;
    pppppuStack_198 = (undefined *****)ppppppuVar7;
    FUN_10a4634ec(ppppppuVar6,&ppppuStack_1c0);
    ppppppuVar9 = &pppppuStack_1b8;
    (*(code *)*pppppuStack_1b8)();
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar7 + 1;
      do {
        pppppuVar11 = *ppppppuVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar9 = ppppppuVar7;
      }
    }
    ppppppuVar7 = (undefined ******)&ppppuStack_1e0;
    if ((undefined ******)pppppuStack_1d8 == (undefined ******)0x0) goto LAB_10a9ab41c;
    ppppppuVar6 = (undefined ******)(pppppuStack_1d8 + 1);
    do {
      pppppuVar11 = *ppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
      if (bVar3) {
        *ppppppuVar6 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar10 = (undefined ******)pppppuStack_1d8;
    } while (cVar2 != '\0');
  }
  ppppppuVar7 = ppppppuVar5;
  if (pppppuVar11 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar10)[2])(ppppppuVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar9 = ppppppuVar10;
  }
LAB_10a9ab41c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_1b8)(unaff_x21 + 1);
    func_0x00010a9abd50(ppppppuVar7 + 2);
    func_0x00010a004dac(&ppppuStack_1e0);
    __Unwind_Resume();
    *ppppppuVar9 = (undefined *****)&PTR_FUN_110c34a90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10a9aafc4; end: 10a9ab233;  */

void FUN_10a9aafc4(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined *****pppppuVar9;
  undefined ******ppppppuVar10;
  undefined ******unaff_x21;
  undefined ****ppppuStack_140;
  undefined *****pppppuStack_138;
  undefined ****ppppuStack_130;
  undefined *****pppppuStack_128;
  undefined ****ppppuStack_120;
  undefined *****pppppuStack_118;
  undefined ****ppppuStack_110;
  undefined ****ppppuStack_108;
  undefined ****ppppuStack_100;
  undefined *****pppppuStack_f8;
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
  
  ppppppuVar10 = (undefined ******)&ppppuStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    pppppuVar9 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar5 = (undefined ******)&ppppuStack_80;
    ppppppuVar8 = param_1;
    (*(code *)pppppuVar9)();
    if ((undefined ******)pppppuStack_78 != (undefined ******)0x0) {
      ppppppuVar7 = (undefined ******)(pppppuStack_78 + 1);
      do {
        pppppuVar9 = *ppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar3) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        ppppppuVar6 = (undefined ******)pppppuStack_78;
        ppppppuVar10 = param_1;
      } while (cVar2 != '\0');
LAB_10a9ab098:
      param_1 = ppppppuVar10;
      if (pppppuVar9 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar5 = ppppppuVar6;
      }
    }
  }
  else {
    ppppppuVar5 = param_1;
    ppppppuVar8 = param_2;
    if (*(char *)(param_1 + 8) == '\x02') {
      unaff_x21 = param_1;
      ppppppuVar7 = param_2;
      FUN_10a688b40();
      if (unaff_x21 == (undefined ******)0x0) {
        ppppppuVar8 = (undefined ******)0x0;
        ppppppuVar5 = (undefined ******)0x0;
        if (ppppppuVar7 != (undefined ******)0x0) {
          ppppuStack_68 = (undefined ****)param_1[1];
          ppppuStack_70 = (undefined ****)*param_1;
          if (param_1[1] != (undefined *****)0x0) {
            pppppuVar9 = param_1[1] + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppuVar9,0x10);
              if (bVar3) {
                *pppppuVar9 = (undefined ****)((long)*pppppuVar9 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppppuStack_90 = (undefined ****)*param_2;
          ppppppuVar7 = (undefined ******)param_2[1];
          if (ppppppuVar7 != (undefined ******)0x0) {
            ppppppuVar5 = ppppppuVar7 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
              if (bVar3) {
                *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppppuStack_80 = (undefined ****)FUN_10a9aba04;
          pppppuStack_78 = (undefined *****)&PTR_FUN_110c34ae8;
          ppppuStack_a0 = (undefined ****)0x0;
          pppppuStack_98 = (undefined *****)0x0;
          if (ppppppuVar7 != (undefined ******)0x0) {
            ppppppuVar5 = ppppppuVar7 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
              if (bVar3) {
                *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          unaff_x21 = (undefined ******)&ppppuStack_80;
          ppppppuVar8 = (undefined ******)&ppppuStack_80;
          pppppuStack_88 = (undefined *****)ppppppuVar7;
          ppppuStack_60 = ppppuStack_90;
          pppppuStack_58 = (undefined *****)ppppppuVar7;
          FUN_10a4634ec();
          ppppppuVar5 = &pppppuStack_78;
          (*(code *)*pppppuStack_78)();
          if (ppppppuVar7 != (undefined ******)0x0) {
            ppppppuVar6 = ppppppuVar7 + 1;
            do {
              pppppuVar9 = *ppppppuVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
              if (bVar3) {
                *ppppppuVar6 = (undefined *****)((long)pppppuVar9 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (pppppuVar9 == (undefined *****)0x0) {
              (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppuVar5 = ppppppuVar7;
            }
          }
          param_1 = (undefined ******)&ppppuStack_a0;
          if ((undefined ******)pppppuStack_98 != (undefined ******)0x0) {
            ppppppuVar7 = (undefined ******)(pppppuStack_98 + 1);
            do {
              pppppuVar9 = *ppppppuVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
              if (bVar3) {
                *ppppppuVar7 = (undefined *****)((long)pppppuVar9 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
              ppppppuVar6 = (undefined ******)pppppuStack_98;
            } while (cVar2 != '\0');
            goto LAB_10a9ab098;
          }
        }
      }
      else {
        *unaff_x21 = (undefined *****)
                     CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
        ppppppuVar5 = (undefined ******)*param_1;
        FUN_10a9ab800();
        iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
        *(int *)((long)unaff_x21 + 4) = iVar4;
        ppppppuVar8 = param_2;
        if (iVar4 == 0) {
          *(undefined4 *)unaff_x21 = 0;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*pppppuStack_78)(unaff_x21 + 1);
  FUN_10a9aba7c(param_1 + 2);
  func_0x00010a004dac(&ppppuStack_a0);
  __Unwind_Resume();
  ppppppuVar10 = (undefined ******)&ppppuStack_140;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(ppppppuVar5 + 8) == '\x01') {
    pppppuVar9 = *ppppppuVar5;
    pppppuStack_118 = ppppppuVar8[1];
    ppppuStack_120 = (undefined ****)*ppppppuVar8;
    if (ppppppuVar8[1] != (undefined *****)0x0) {
      pppppuVar1 = ppppppuVar8[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar7 = (undefined ******)&ppppuStack_120;
    (*(code *)pppppuVar9)(ppppppuVar7,ppppppuVar5);
    if ((undefined ******)pppppuStack_118 == (undefined ******)0x0) goto LAB_10a9ab41c;
    ppppppuVar8 = (undefined ******)(pppppuStack_118 + 1);
    do {
      pppppuVar9 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar6 = (undefined ******)pppppuStack_118;
      ppppppuVar10 = ppppppuVar5;
    } while (cVar2 != '\0');
  }
  else {
    ppppppuVar7 = ppppppuVar5;
    if (*(char *)(ppppppuVar5 + 8) != '\x02') goto LAB_10a9ab41c;
    unaff_x21 = ppppppuVar5;
    ppppppuVar6 = ppppppuVar8;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar7 = (undefined ******)*ppppppuVar5;
      FUN_10a9abad4(ppppppuVar7,ppppppuVar8);
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a9ab41c;
    }
    ppppppuVar7 = (undefined ******)0x0;
    if (ppppppuVar6 == (undefined ******)0x0) goto LAB_10a9ab41c;
    ppppuStack_108 = (undefined ****)ppppppuVar5[1];
    ppppuStack_110 = (undefined ****)*ppppppuVar5;
    if (ppppppuVar5[1] != (undefined *****)0x0) {
      pppppuVar9 = ppppppuVar5[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar9,0x10);
        if (bVar3) {
          *pppppuVar9 = (undefined ****)((long)*pppppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_130 = (undefined ****)*ppppppuVar8;
    ppppppuVar5 = (undefined ******)ppppppuVar8[1];
    if (ppppppuVar5 != (undefined ******)0x0) {
      ppppppuVar8 = ppppppuVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
        if (bVar3) {
          *ppppppuVar8 = (undefined *****)((long)*ppppppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_120 = (undefined ****)FUN_10a9abcd8;
    pppppuStack_118 = (undefined *****)&PTR_FUN_110c34b00;
    ppppuStack_140 = (undefined ****)0x0;
    pppppuStack_138 = (undefined *****)0x0;
    if (ppppppuVar5 != (undefined ******)0x0) {
      ppppppuVar8 = ppppppuVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
        if (bVar3) {
          *ppppppuVar8 = (undefined *****)((long)*ppppppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_120;
    pppppuStack_128 = (undefined *****)ppppppuVar5;
    ppppuStack_100 = ppppuStack_130;
    pppppuStack_f8 = (undefined *****)ppppppuVar5;
    FUN_10a4634ec(ppppppuVar6,&ppppuStack_120);
    ppppppuVar7 = &pppppuStack_118;
    (*(code *)*pppppuStack_118)();
    if (ppppppuVar5 != (undefined ******)0x0) {
      ppppppuVar8 = ppppppuVar5 + 1;
      do {
        pppppuVar9 = *ppppppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
        if (bVar3) {
          *ppppppuVar8 = (undefined *****)((long)pppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar9 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar5)[2])(ppppppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar7 = ppppppuVar5;
      }
    }
    ppppppuVar5 = (undefined ******)&ppppuStack_140;
    if ((undefined ******)pppppuStack_138 == (undefined ******)0x0) goto LAB_10a9ab41c;
    ppppppuVar5 = (undefined ******)(pppppuStack_138 + 1);
    do {
      pppppuVar9 = *ppppppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
      if (bVar3) {
        *ppppppuVar5 = (undefined *****)((long)pppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar6 = (undefined ******)pppppuStack_138;
    } while (cVar2 != '\0');
  }
  ppppppuVar5 = ppppppuVar10;
  if (pppppuVar9 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar7 = ppppppuVar6;
  }
LAB_10a9ab41c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_118)(unaff_x21 + 1);
    FUN_10a9abd50(ppppppuVar5 + 2);
    func_0x00010a004dac(&ppppuStack_140);
    __Unwind_Resume();
    *ppppppuVar7 = (undefined *****)&PTR_FUN_110c34a90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10a9ab234; end: 10a9ab4a3;  */

void FUN_10a9ab234(undefined ******param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined8 *puVar8;
  undefined *****pppppuVar9;
  undefined ******ppppppuVar10;
  undefined ******unaff_x21;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined8 uStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined8 uStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  ppppppuVar10 = (undefined ******)&ppppuStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    pppppuVar9 = *param_1;
    pppppuStack_78 = (undefined *****)param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar5 = (undefined ******)&ppppuStack_80;
    (*(code *)pppppuVar9)(ppppppuVar5,param_1);
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10a9ab41c;
    ppppppuVar7 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar9 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar6 = (undefined ******)pppppuStack_78;
      ppppppuVar10 = param_1;
    } while (cVar2 != '\0');
  }
  else {
    ppppppuVar5 = param_1;
    if (*(char *)(param_1 + 8) != '\x02') goto LAB_10a9ab41c;
    unaff_x21 = param_1;
    puVar8 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar5 = (undefined ******)*param_1;
      FUN_10a9abad4(ppppppuVar5,param_2);
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a9ab41c;
    }
    ppppppuVar5 = (undefined ******)0x0;
    if (puVar8 == (undefined8 *)0x0) goto LAB_10a9ab41c;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar9 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar9,0x10);
        if (bVar3) {
          *pppppuVar9 = (undefined ****)((long)*pppppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_90 = *param_2;
    ppppppuVar7 = (undefined ******)param_2[1];
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar5 = ppppppuVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar3) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10a9abcd8;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110c34b00;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar5 = ppppppuVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar3) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar7;
    uStack_60 = uStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar7;
    FUN_10a4634ec(puVar8,&ppppuStack_80);
    ppppppuVar5 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar7 + 1;
      do {
        pppppuVar9 = *ppppppuVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)pppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar9 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar5 = ppppppuVar7;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10a9ab41c;
    ppppppuVar7 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar9 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar6 = (undefined ******)pppppuStack_98;
    } while (cVar2 != '\0');
  }
  param_1 = ppppppuVar10;
  if (pppppuVar9 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar5 = ppppppuVar6;
  }
LAB_10a9ab41c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_78)(unaff_x21 + 1);
    FUN_10a9abd50(param_1 + 2);
    func_0x00010a004dac(&ppppuStack_a0);
    __Unwind_Resume();
    *ppppppuVar5 = (undefined *****)&PTR_FUN_110c34a90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10a9ab4a4; end: 10a9ab4b3;  */

void FUN_10a9ab4a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34a90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9ab4b4; end: 10a9ab4d3;  */

void FUN_10a9ab4b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34a90;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9ab4d4; end: 10a9ab583;  */

void FUN_10a9ab4d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9ab4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9ab584; end: 10a9ab787;  */

void FUN_10a9ab584(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c33420;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9ab788; end: 10a9ab797;  */

void FUN_10a9ab788(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c33420;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9ab798; end: 10a9ab7bf;  */

long FUN_10a9ab798(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a9abda8(param_1 + 0x18);
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



/* Entry: 10a9ab7c0; end: 10a9ab7ff;  */

void FUN_10a9ab7c0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c34ad0;
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



/* Entry: 10a9ab800; end: 10a9aba03;  */

void FUN_10a9ab800(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c33438;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9aba04; end: 10a9aba13;  */

void FUN_10a9aba04(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c33438;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9aba14; end: 10a9aba3b;  */

long FUN_10a9aba14(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a9aba7c(param_1 + 0x18);
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



/* Entry: 10a9aba3c; end: 10a9aba7b;  */

void FUN_10a9aba3c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c34ae8;
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



/* Entry: 10a9aba7c; end: 10a9abad3;  */

long FUN_10a9aba7c(long param_1)

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



/* Entry: 10a9abad4; end: 10a9abcd7;  */

void FUN_10a9abad4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c33450;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9abcd8; end: 10a9abce7;  */

void FUN_10a9abcd8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c33450;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9abce8; end: 10a9abd0f;  */

long FUN_10a9abce8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a9abd50(param_1 + 0x18);
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



/* Entry: 10a9abd10; end: 10a9abd4f;  */

void FUN_10a9abd10(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c34b00;
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



/* Entry: 10a9abd50; end: 10a9abdff;  */

long FUN_10a9abd50(long param_1)

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



/* Entry: 10a9abe00; end: 10a9abe0f;  */

void FUN_10a9abe00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34b28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9abe10; end: 10a9abe2f;  */

void FUN_10a9abe10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34b28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9abe30; end: 10a9abe4f;  */

void FUN_10a9abe30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9abe38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9abe50; end: 10a9abe6f;  */

void FUN_10a9abe50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c34b78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9abe70; end: 10a9abeab;  */

void FUN_10a9abe70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9abe78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9abeac; end: 10a9abfa7;  */

undefined1  [16] FUN_10a9abeac(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33420;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c33420;
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



/* Entry: 10a9abfa8; end: 10a9ac063;  */

void FUN_10a9abfa8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f687417,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ac064);
  (*pcVar4)();
}



/* Entry: 10a9ac064; end: 10a9ac15f;  */

undefined1  [16] FUN_10a9ac064(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33438;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c33438;
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



/* Entry: 10a9ac160; end: 10a9ac1b3;  */

ulong FUN_10a9ac160(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9ac1b4,0);
  }
  return param_1;
}



/* Entry: 10a9ac1b4; end: 10a9ac2df;  */

void FUN_10a9ac1b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
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
  FUN_10a9ac2e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar1 = (int)plVar5[3];
  piVar10 = (int *)&UNK_110c32518;
  if (iVar1 < 2) {
    piVar9 = (int *)&UNK_110c32530;
  }
  else {
    piVar9 = piVar10;
    piVar10 = (int *)&UNK_110c32548;
  }
  if (iVar1 < 1) {
    piVar10 = piVar9;
  }
  if ((piVar10 == (int *)&UNK_110c32548) || (iVar1 < *piVar10)) {
    func_0x0001093fd0ac(&UNK_10f61d92d);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9ac2cc);
    (*pcVar2)();
  }
  (**(code **)(*param_2 + 0x128))
            (param_1 + 2,param_2,*(undefined8 *)(piVar10 + 2),*(undefined8 *)(piVar10 + 4));
  *param_1 = 6;
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
  lVar13 = plVar4[0x4c];
  lVar11 = lVar13 - lVar6;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar14 = plVar4[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar14 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar6,lVar11);
          *plVar5 = lVar12;
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
  else if (uVar7 < uVar15) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar13 != lVar6) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a9ac2e0; end: 10a9ac39b;  */

undefined ** FUN_10a9ac2e0(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a9ac39c,0);
  }
  return ppuVar1;
}



/* Entry: 10a9ac39c; end: 10a9ac537;  */

void FUN_10a9ac39c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *plVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffb0;
  
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
  FUN_10a9ac2e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar6[7] == '\x02') {
    func_0x00010988bd28(&UNK_10f634b57);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9ac520);
    (*pcVar3)();
  }
  if ((char)plVar6[7] == '\0') {
    uVar7 = plVar6[5];
    plVar16 = (long *)plVar6[4];
    if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
      uVar7 = (ulong)*(byte *)((long)plVar6 + 0x37);
      plVar16 = plVar6 + 4;
    }
    (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb0,param_2,plVar16,uVar7);
    *param_1 = 6;
    *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb0;
  }
  else {
    plVar16 = (long *)plVar6[5];
    if (plVar6[5] != 0) {
      plVar6 = (long *)(plVar6[5] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
    if (plVar16 != (long *)0x0) {
      plVar6 = plVar16 + 1;
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
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
  }
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



/* Entry: 10a9ac538; end: 10a9ac5f3;  */

void FUN_10a9ac538(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f687426,0x15);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ac5f4);
  (*pcVar4)();
}



/* Entry: 10a9ac5f4; end: 10a9ac6ef;  */

undefined1  [16] FUN_10a9ac5f4(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33450;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c33450;
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



/* Entry: 10a9ac6f0; end: 10a9ac743;  */

ulong FUN_10a9ac6f0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9ac744,0);
  }
  return param_1;
}



/* Entry: 10a9ac744; end: 10a9ac7ff;  */

void FUN_10a9ac744(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ac800(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10a9ac800; end: 10a9ac8bb;  */

undefined ** FUN_10a9ac800(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a9ac8bc,0);
  }
  return ppuVar1;
}



/* Entry: 10a9ac8bc; end: 10a9ac9fb;  */

void FUN_10a9ac8bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  FUN_10a9ac800(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x37) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[4],plVar5[5]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[5];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[4];
    in_stack_ffffffffffffffb0 = plVar5[6];
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
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



/* Entry: 10a9ac9fc; end: 10a9aca4f;  */

ulong FUN_10a9ac9fc(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9aca50,0);
  }
  return param_1;
}



/* Entry: 10a9aca50; end: 10a9acb07;  */

void FUN_10a9aca50(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ac800(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[7];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
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



/* Entry: 10a9acb08; end: 10a9acbc3;  */

void FUN_10a9acb08(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68743c,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9acbc4);
  (*pcVar4)();
}



/* Entry: 10a9acbc4; end: 10a9acbdf;  */

void FUN_10a9acbc4(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a9acbe0; end: 10a9accdb;  */

undefined1  [16] FUN_10a9acbe0(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c353f0;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c353f0;
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



/* Entry: 10a9accdc; end: 10a9acd33;  */

ulong FUN_10a9accdc(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a9acd34,FUN_10a9ace64);
  }
  return param_1;
}



/* Entry: 10a9acd34; end: 10a9ace63;  */

void FUN_10a9acd34(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      FUN_10a052e3c(param_5);
      func_0x000107c2791c(&plStack_68,plVar5 + 3);
      FUN_10a07b380(param_1,param_2,&plStack_68);
      func_0x000104c4f944(&plStack_68);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9ace40);
  (*pcVar1)();
}



/* Entry: 10a9ace64; end: 10a9acfa3;  */

void FUN_10a9ace64(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong *puStack_68;
  
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
  func_0x00010a05a118(param_2,param_3);
  FUN_10a9acfa4(param_5);
  FUN_10a75d1f0(&puStack_90,param_2,param_4);
  uVar7 = uStack_88;
  puStack_68 = puStack_90;
  puStack_90 = (ulong *)0x0;
  uStack_88 = 0;
  if (uStack_78 != 0) {
    uVar9 = *(ulong *)(uStack_80 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar9 = uVar9 & uVar7 - 1;
    }
    else if (uVar7 <= uVar9) {
      uVar12 = 0;
      if (uVar7 != 0) {
        uVar12 = uVar9 / uVar7;
      }
      uVar9 = uVar9 - uVar12 * uVar7;
    }
    puStack_68[uVar9] = (ulong)&stack0xffffffffffffffa8;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  func_0x0001094f977c(plVar5 + 3,&puStack_68);
  func_0x000104c4f944(&puStack_68);
  func_0x000104c4f944(&puStack_90);
  *param_1 = 0;
  puVar1 = (ulong *)(plVar4 + 0x4b);
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = puVar1[lVar6 + 2];
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
  uVar9 = *puVar1;
  lVar6 = plVar4[0x4c];
  lVar10 = lVar6 - uVar9;
  uVar12 = lVar10 >> 4;
  if (uVar12 < uVar7) {
    uVar13 = uVar7 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar6 >> 4) < uVar13) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = (long)(lVar11 - uVar9) >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < lVar11 - uVar9) {
          uVar8 = 0xfffffffffffffff;
        }
        puStack_68 = puVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar6 = lVar3 + lVar10;
          _bzero(lVar6,uVar13 * 0x10);
          uVar12 = lVar6 + uVar12 * -0x10;
          _memcpy(uVar12,uVar9,lVar10);
          *puVar1 = uVar12;
          plVar4[0x4c] = lVar6 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          uStack_88 = uVar9;
          uStack_80 = uVar9;
          uStack_78 = uVar9;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(lVar6,uVar13 * 0x10);
    plVar4[0x4c] = lVar6 + uVar13 * 0x10;
  }
  else if (uVar7 < uVar12) {
    lVar10 = uVar9 + uVar7 * 0x10;
    while (lVar6 != lVar10) {
      lVar6 = lVar6 + -0x10;
      func_0x00010988c204(lVar6);
    }
    plVar4[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a9acfa4; end: 10a9acfc7;  */

void FUN_10a9acfa4(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_40;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar3 = 1;
  FUN_10a052ee0(1,0,param_1);
  *(undefined **)(uVar3 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(uVar3 + 0x170);
  if (*(long *)(uVar3 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    uStack_a0 = *(undefined8 *)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uStack_80 = *(undefined8 *)(lVar1 + -0x48);
    uStack_88 = *(undefined8 *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(undefined8 *)(lVar1 + -0x18);
    *(long *)(uVar3 + 0x170) = lVar1 + -0x68;
    uVar4 = uVar3;
    FUN_10a0051e8();
    if ((uVar4 & 1) == 0) {
      func_0x000109894f40(uVar3,0);
      FUN_10a054234(uVar3,&uStack_a0,uVar3 + 0x1b8,&UNK_10f687450,0x10);
      FUN_10a05431c(uVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9ad084);
  (*pcVar2)();
}



/* Entry: 10a9acfc8; end: 10a9ad083;  */

void FUN_10a9acfc8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f687450,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ad084);
  (*pcVar4)();
}



/* Entry: 10a9ad084; end: 10a9ad17f;  */

undefined1  [16] FUN_10a9ad084(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c353a0;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c353a0;
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



/* Entry: 10a9ad180; end: 10a9ad1d7;  */

ulong FUN_10a9ad180(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a9ad1d8,FUN_10a9ad2a4);
  }
  return param_1;
}



/* Entry: 10a9ad1d8; end: 10a9ad2a3;  */

void FUN_10a9ad1d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a9ad3b4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_48 = plVar2[3];
  FUN_10a07ff64(param_1,param_2,&lStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a9ad2a4; end: 10a9ad3b3;  */

void FUN_10a9ad2a4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      FUN_10a05a384(param_5);
      FUN_10a05a42c(param_2,param_4);
      plVar5[3] = *param_2;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9ad3a0);
  (*pcVar1)();
}



/* Entry: 10a9ad3b4; end: 10a9ad46f;  */

undefined ** FUN_10a9ad3b4(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a9ad470,0);
  }
  return ppuVar1;
}



/* Entry: 10a9ad470; end: 10a9ad5a3;  */

void FUN_10a9ad470(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *plVar16;
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
  FUN_10a9ad3b4(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[5];
  if (plVar6[5] != 0) {
    plVar6 = (long *)(plVar6[5] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
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
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
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



/* Entry: 10a9ad5a4; end: 10a9ad65f;  */

void FUN_10a9ad5a4(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f687461,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ad660);
  (*pcVar4)();
}



/* Entry: 10a9ad660; end: 10a9ad75b;  */

undefined1  [16] FUN_10a9ad660(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33468;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c33468;
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



/* Entry: 10a9ad75c; end: 10a9ad7b3;  */

ulong FUN_10a9ad75c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a9ad7b4,FUN_10a9ad864);
  }
  return param_1;
}



/* Entry: 10a9ad7b4; end: 10a9ad863;  */

void FUN_10a9ad7b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ad91c(param_1,param_2,FUN_10a976810,0,param_3,param_5);
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



/* Entry: 10a9ad864; end: 10a9ad91b;  */

void FUN_10a9ad864(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ada24(param_1,param_2,FUN_10a976838,0,param_3,param_4,param_5);
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



/* Entry: 10a9ad91c; end: 10a9ada23;  */

undefined8 **
FUN_10a9ad91c(undefined8 param_1,undefined **param_2,undefined **param_3,undefined1 **param_4,
             undefined **param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 **ppuStack_b8;
  long lStack_60;
  long lStack_58;
  undefined8 *puStack_48;
  
  ppuVar2 = param_2;
  ppuVar11 = param_3;
  ppuVar9 = param_4;
  ppuVar5 = param_5;
  uVar10 = param_6;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = param_2;
    FUN_10a052c2c();
    param_5 = ppuVar2;
    if (ppuVar3 != (undefined **)0x0) {
      param_5 = &PTR_DAT_110b178e0;
      ppuVar11 = &PTR_DAT_110c33468;
      ppuVar9 = (undefined1 **)0x0;
      ___dynamic_cast();
      if (ppuVar3 != (undefined **)0x0) {
        FUN_10a052e3c(param_6);
        if (((ulong)param_4 & 1) != 0) {
          param_3 = *(undefined ***)
                     (*(long *)((long)ppuVar3 + ((long)param_4 >> 1)) +
                     ((ulong)param_3 & 0xffffffff));
        }
        (*(code *)param_3)(&lStack_60);
        func_0x00010989a420(param_1,param_2,lStack_60,
                            (lStack_58 - lStack_60 >> 3) * -0x5555555555555555);
        ppuVar6 = &puStack_48;
        puStack_48 = &lStack_60;
        FUN_10a0426d8(ppuVar6);
        return ppuVar6;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar4 = (undefined4 *)&UNK_10f68f52e;
  func_0x00010988bd28();
  puStack_48 = param_4;
  FUN_10a0426d8(&puStack_48);
  __Unwind_Resume();
  ppuVar2 = param_5;
  func_0x000109898688(param_5,ppuVar5);
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar5 = param_5;
    FUN_10a053854(param_5,ppuVar2);
    if ((ppuVar5 != (undefined **)0x0) && (___dynamic_cast(), ppuVar5 != (undefined **)0x0)) {
      FUN_10a9adb60(param_7);
      func_0x000109898f04(&puStack_f0,param_5,uVar10);
      plVar1 = (long *)((long)ppuVar5 + ((long)ppuVar9 >> 1));
      if (((ulong)ppuVar9 & 1) != 0) {
        ppuVar11 = *(undefined ***)(*plVar1 + ((ulong)ppuVar11 & 0xffffffff));
      }
      uStack_c8 = uStack_e8;
      puStack_d0 = puStack_f0;
      uStack_c0 = uStack_e0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      puStack_f0 = (undefined1 *)0x0;
      (*(code *)ppuVar11)(plVar1,&puStack_d0);
      ppuStack_b8 = &puStack_d0;
      FUN_10a0426d8(&ppuStack_b8);
      ppuVar6 = (undefined8 **)&puStack_d0;
      puStack_d0 = (undefined1 *)&puStack_f0;
      FUN_10a0426d8(ppuVar6);
      *puVar4 = 0;
      return ppuVar6;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar6 = (undefined8 **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuStack_b8 = ppuVar9;
  FUN_10a0426d8(&ppuStack_b8);
  ppuStack_b8 = &puStack_f0;
  FUN_10a0426d8(&ppuStack_b8);
  __Unwind_Resume();
  if ((int)ppuVar6 == 1) {
    return ppuVar6;
  }
  ppuVar7 = (undefined8 **)0x1;
  puVar8 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,ppuVar6);
  ppuVar6 = ppuVar7;
  FUN_10a0051e8();
  if (((ulong)ppuVar6 & 1) == 0) {
    FUN_10a052828(ppuVar7,*puVar8,FUN_10a9adbdc,FUN_10a9adc8c);
  }
  return ppuVar7;
}



/* Entry: 10a9ada24; end: 10a9adb5f;  */

undefined1 **
FUN_10a9ada24(undefined4 *param_1,long param_2,code *param_3,undefined1 **param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 **ppuStack_58;
  
  lVar2 = param_2;
  func_0x000109898688(param_2,param_5);
  if (lVar2 != 0) {
    lVar3 = param_2;
    FUN_10a053854(param_2,lVar2);
    if ((lVar3 != 0) && (___dynamic_cast(), lVar3 != 0)) {
      FUN_10a9adb60(param_7);
      func_0x000109898f04(&puStack_90,param_2,param_6);
      plVar1 = (long *)(lVar3 + ((long)param_4 >> 1));
      if (((ulong)param_4 & 1) != 0) {
        param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
      }
      uStack_68 = uStack_88;
      puStack_70 = puStack_90;
      uStack_60 = uStack_80;
      uStack_88 = 0;
      uStack_80 = 0;
      puStack_90 = (undefined1 *)0x0;
      (*param_3)(plVar1,&puStack_70);
      ppuStack_58 = &puStack_70;
      FUN_10a0426d8(&ppuStack_58);
      ppuVar4 = &puStack_70;
      puStack_70 = (undefined1 *)&puStack_90;
      FUN_10a0426d8(ppuVar4);
      *param_1 = 0;
      return ppuVar4;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar4 = (undefined1 **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuStack_58 = param_4;
  FUN_10a0426d8(&ppuStack_58);
  ppuStack_58 = &puStack_90;
  FUN_10a0426d8(&ppuStack_58);
  __Unwind_Resume();
  if ((int)ppuVar4 == 1) {
    return ppuVar4;
  }
  ppuVar5 = (undefined1 **)0x1;
  puVar6 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,ppuVar4);
  ppuVar4 = ppuVar5;
  FUN_10a0051e8();
  if (((ulong)ppuVar4 & 1) == 0) {
    FUN_10a052828(ppuVar5,*puVar6,FUN_10a9adbdc,FUN_10a9adc8c);
  }
  return ppuVar5;
}



/* Entry: 10a9adb60; end: 10a9adb83;  */

ulong FUN_10a9adb60(ulong param_1)

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
    FUN_10a052828(uVar1,*puVar3,FUN_10a9adbdc,FUN_10a9adc8c);
  }
  return uVar1;
}



/* Entry: 10a9adb84; end: 10a9adbdb;  */

ulong FUN_10a9adb84(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a9adbdc,FUN_10a9adc8c);
  }
  return param_1;
}



/* Entry: 10a9adbdc; end: 10a9adc8b;  */

void FUN_10a9adbdc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ad91c(param_1,param_2,FUN_10a976878,0,param_3,param_5);
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



/* Entry: 10a9adc8c; end: 10a9add43;  */

void FUN_10a9adc8c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ada24(param_1,param_2,FUN_10a9768a0,0,param_3,param_4,param_5);
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



/* Entry: 10a9add44; end: 10a9addff;  */

void FUN_10a9add44(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f687470,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ade00);
  (*pcVar4)();
}



/* Entry: 10a9ade00; end: 10a9ae13f;  */

undefined8 * FUN_10a9ade00(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  puVar5 = (undefined8 *)param_1[1];
  lVar6 = *param_1;
  lVar10 = (long)puVar5 - lVar6 >> 7;
  uVar16 = lVar10 * -0x5555555555555555;
  uVar13 = ((uint)uVar16 & 0x7fff) << 1;
  if (uVar13 < 0xb) {
    uVar13 = 10;
  }
  if (0x3ffd < uVar13) {
    uVar13 = 0x3ffe;
  }
  uVar17 = (ulong)uVar13;
  uVar8 = uVar17 + lVar10 * 0x5555555555555555;
  if (uVar16 <= uVar17 && uVar8 != 0) {
    if ((ulong)((param_1[2] - (long)puVar5 >> 7) * -0x5555555555555555) < uVar8) {
      lVar7 = param_1[2] - lVar6 >> 7;
      uVar9 = lVar7 * 0x5555555555555556;
      if (uVar9 < uVar17 || uVar9 - uVar17 == 0) {
        uVar9 = uVar17;
      }
      if (0x55555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar9 = 0xaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaa < uVar9) {
        func_0x000109ffded8();
        *(undefined1 *)puVar5 = 0;
        *(undefined2 *)((long)puVar5 + 2) = 0x3fff;
        *(undefined8 *)((long)puVar5 + 4) = 0;
        puVar18 = puVar5;
        func_0x00010a0fda30();
        puVar5[2] = puVar18;
        puVar5[3] = param_2;
        puVar5[4] = 0;
        puVar5[5] = 1;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[0xb] = 0;
        puVar5[10] = 0;
        puVar5[0xd] = 0;
        puVar5[0xc] = 0x3f800000;
        puVar5[0xf] = 0;
        puVar5[0xe] = 0x3f80000000000000;
        puVar5[0x11] = 0x3f800000;
        puVar5[0x10] = 0;
        puVar5[0x13] = 0x3f80000000000000;
        puVar5[0x12] = 0;
        puVar5[0x14] = 0;
        puVar5[0x15] = 0;
        puVar5[0x17] = 0;
        puVar5[0x16] = 0x3f800000;
        puVar5[0x19] = 0;
        puVar5[0x18] = 0x3f80000000000000;
        puVar5[0x1b] = 0x3f800000;
        puVar5[0x1a] = 0;
        puVar5[0x1d] = 0x3f80000000000000;
        puVar5[0x1c] = 0;
        *(undefined1 *)(puVar5 + 0x1e) = 0;
        *(undefined1 *)((long)puVar5 + 0xf4) = 0;
        *(undefined2 *)(puVar5 + 0x1f) = 0;
        *(undefined1 *)((long)puVar5 + 0xfc) = 0;
        *(undefined1 *)(puVar5 + 0x20) = 0;
        *(undefined1 *)((long)puVar5 + 0x104) = 0;
        *(undefined1 *)(puVar5 + 0x21) = 0;
        *(undefined1 *)((long)puVar5 + 0x10c) = 0;
        *(undefined1 *)(puVar5 + 0x22) = 0;
        *(undefined1 *)((long)puVar5 + 0x114) = 0;
        *(undefined1 *)(puVar5 + 0x23) = 0;
        *(undefined1 *)((long)puVar5 + 0x11c) = 0;
        *(undefined1 *)(puVar5 + 0x24) = 0;
        *(undefined1 *)((long)puVar5 + 0x124) = 0;
        *(undefined1 *)((long)puVar5 + 0x164) = 0;
        puVar5[0x2d] = 0;
        puVar5[0x2e] = 0;
        *(undefined2 *)(puVar5 + 0x2f) = 0;
        return puVar5;
      }
      lVar7 = uVar9 * 0x180;
      __Znwm();
      puVar18 = (undefined8 *)(lVar7 + ((long)puVar5 - lVar6));
      lVar6 = uVar17 * 0x180 + lVar10 * -0x80;
      puVar5 = puVar18;
      do {
        puVar5[0x2d] = 0;
        puVar5[0x2c] = 0;
        puVar5[0x2f] = 0;
        puVar5[0x2e] = 0;
        puVar5[0x29] = 0;
        puVar5[0x28] = 0;
        puVar5[0x2b] = 0;
        puVar5[0x2a] = 0;
        puVar5[0x25] = 0;
        puVar5[0x24] = 0;
        puVar5[0x27] = 0;
        puVar5[0x26] = 0;
        puVar5[0x21] = 0;
        puVar5[0x20] = 0;
        puVar5[0x23] = 0;
        puVar5[0x22] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1f] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x19] = 0;
        puVar5[0x18] = 0;
        puVar5[0x1b] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x15] = 0;
        puVar5[0x14] = 0;
        puVar5[0x17] = 0;
        puVar5[0x16] = 0;
        puVar5[0x11] = 0;
        puVar5[0x10] = 0;
        puVar5[0x13] = 0;
        puVar5[0x12] = 0;
        puVar5[0xd] = 0;
        puVar5[0xc] = 0;
        puVar5[0xf] = 0;
        puVar5[0xe] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[0xb] = 0;
        puVar5[10] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        FUN_10a9ae140();
        puVar5 = puVar5 + 0x30;
        lVar6 = lVar6 + -0x180;
      } while (lVar6 != 0);
      puVar15 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)param_1[1];
      puVar1 = (undefined8 *)((long)puVar18 + ((long)puVar15 - (long)puVar3));
      puVar19 = puVar1;
      puVar20 = puVar15;
      if (puVar3 != puVar15) {
        do {
          *puVar19 = *puVar20;
          uVar22 = puVar20[2];
          uVar21 = puVar20[1];
          uVar24 = puVar20[4];
          uVar23 = puVar20[3];
          uVar25 = puVar20[5];
          puVar19[6] = puVar20[6];
          puVar19[5] = uVar25;
          puVar19[4] = uVar24;
          puVar19[3] = uVar23;
          puVar19[2] = uVar22;
          puVar19[1] = uVar21;
          uVar21 = puVar20[7];
          puVar19[8] = puVar20[8];
          puVar19[7] = uVar21;
          puVar19[9] = puVar20[9];
          puVar20[7] = 0;
          puVar20[8] = 0;
          puVar20[9] = 0;
          _memcpy(puVar19 + 10,puVar20 + 10,0x115);
          uVar21 = puVar20[0x2e];
          puVar19[0x2d] = puVar20[0x2d];
          puVar19[0x2e] = uVar21;
          puVar20[0x2d] = 0;
          puVar20[0x2e] = 0;
          *(undefined2 *)(puVar19 + 0x2f) = *(undefined2 *)(puVar20 + 0x2f);
          puVar20 = puVar20 + 0x30;
          puVar19 = puVar19 + 0x30;
        } while (puVar20 != puVar3);
        param_2 = param_2 & 0xffffffff;
        do {
          puVar5 = puVar15;
          FUN_10a3f8eec(puVar15);
          puVar15 = puVar15 + 0x30;
        } while (puVar15 != puVar3);
        puVar15 = (undefined8 *)*param_1;
      }
      *param_1 = (long)puVar1;
      param_1[1] = (long)(puVar18 + (uVar8 & 0xffffffff) * 0x30);
      param_1[2] = lVar7 + uVar9 * 0x180;
      puVar18 = puVar18 + (uVar8 & 0xffffffff) * 0x30;
      if (puVar15 != (undefined8 *)0x0) {
        __ZdlPv(puVar15);
        puVar5 = puVar15;
        puVar18 = (undefined8 *)param_1[1];
      }
      goto LAB_10a9ae078;
    }
    puVar18 = puVar5 + (uVar8 & 0xffffffff) * 0x30;
    lVar6 = uVar17 * 0x180 + lVar10 * -0x80;
    do {
      puVar5[0x2d] = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2f] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x29] = 0;
      puVar5[0x28] = 0;
      puVar5[0x2b] = 0;
      puVar5[0x2a] = 0;
      puVar5[0x25] = 0;
      puVar5[0x24] = 0;
      puVar5[0x27] = 0;
      puVar5[0x26] = 0;
      puVar5[0x21] = 0;
      puVar5[0x20] = 0;
      puVar5[0x23] = 0;
      puVar5[0x22] = 0;
      puVar5[0x1d] = 0;
      puVar5[0x1c] = 0;
      puVar5[0x1f] = 0;
      puVar5[0x1e] = 0;
      puVar5[0x19] = 0;
      puVar5[0x18] = 0;
      puVar5[0x1b] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x15] = 0;
      puVar5[0x14] = 0;
      puVar5[0x17] = 0;
      puVar5[0x16] = 0;
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      FUN_10a9ae140();
      puVar5 = puVar5 + 0x30;
      lVar6 = lVar6 + -0x180;
    } while (lVar6 != 0);
  }
  else {
    puVar18 = puVar5;
    if (uVar16 <= uVar17) goto LAB_10a9ae078;
    puVar18 = (undefined8 *)(lVar6 + uVar17 * 0x180);
    while (puVar5 != puVar18) {
      puVar5 = puVar5 + -0x30;
      FUN_10a3f8eec();
    }
  }
  param_1[1] = (long)puVar18;
LAB_10a9ae078:
  uVar8 = uVar17 - 1;
  lVar6 = *param_1;
  lVar7 = (long)puVar18 - lVar6 >> 7;
  uVar9 = lVar7 * -0x5555555555555555;
  if (uVar16 < uVar8 || uVar16 - uVar8 == 0) {
    uVar2 = uVar16;
    if (uVar16 < uVar9 || uVar16 + lVar7 * 0x5555555555555555 == 0) {
      uVar2 = uVar9;
    }
    puVar12 = (uint *)(lVar6 + lVar10 * 0x80 + 4);
    uVar14 = uVar16;
    uVar11 = uVar16;
    do {
      uVar11 = uVar11 + 1;
      if (uVar11 - uVar2 == 1) goto LAB_10a9ae138;
      uVar13 = (uint)uVar14;
      uVar14 = uVar14 + 1;
      *(short *)((long)puVar12 + -2) = (short)uVar11;
      *puVar12 = uVar13 & 0xbfff | (int)param_2 << 0x1d | 0x4000U;
      puVar12 = puVar12 + 0x60;
    } while (uVar14 != uVar17);
  }
  if (uVar8 <= uVar9 && uVar9 - uVar8 != 0) {
    *(undefined2 *)(lVar6 + (long)(int)uVar8 * 0x180 + 2) = 0x3fff;
    *(short *)(param_1 + 3) = (short)uVar16;
    *(short *)((long)param_1 + 0x1a) = (short)uVar8;
    return puVar5;
  }
LAB_10a9ae138:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ae13c);
  (*pcVar4)();
}



/* Entry: 10a9ae140; end: 10a9ae1ff;  */

undefined1 * FUN_10a9ae140(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0x3fff;
  *(undefined8 *)(param_1 + 4) = 0;
  puVar1 = param_1;
  func_0x00010a0fda30();
  *(undefined1 **)(param_1 + 0x10) = puVar1;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0x3f800000;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xd8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0xf0] = 0;
  param_1[0xf4] = 0;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  param_1[0xfc] = 0;
  param_1[0x100] = 0;
  param_1[0x104] = 0;
  param_1[0x108] = 0;
  param_1[0x10c] = 0;
  param_1[0x110] = 0;
  param_1[0x114] = 0;
  param_1[0x118] = 0;
  param_1[0x11c] = 0;
  param_1[0x120] = 0;
  param_1[0x124] = 0;
  param_1[0x164] = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined2 *)(param_1 + 0x178) = 0;
  return param_1;
}



/* Entry: 10a9ae200; end: 10a9ae537;  */

void FUN_10a9ae200(long *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puStack_68;
  
  puVar15 = (undefined8 *)*param_1;
  puVar21 = (undefined8 *)param_1[1];
  lVar16 = (long)puVar21 - (long)puVar15;
  lVar5 = lVar16 >> 3;
  uVar17 = lVar5 * -0x71c71c71c71c71c7;
  uVar12 = ((uint)uVar17 & 0x7fff) << 1;
  if (uVar12 < 0xb) {
    uVar12 = 10;
  }
  if (0x3ffd < uVar12) {
    uVar12 = 0x3ffe;
  }
  uVar19 = (ulong)uVar12;
  uVar7 = uVar19 + lVar5 * 0x71c71c71c71c71c7;
  if (uVar17 <= uVar19 && uVar7 != 0) {
    if ((ulong)((param_1[2] - (long)puVar21 >> 3) * -0x71c71c71c71c71c7) < uVar7) {
      lVar6 = param_1[2] - (long)puVar15 >> 3;
      uVar8 = lVar6 * 0x1c71c71c71c71c72;
      if (uVar8 < uVar19 || uVar8 - uVar19 == 0) {
        uVar8 = uVar19;
      }
      if (0x1c71c71c71c71c6 < (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
        uVar8 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVar8) {
        func_0x000109ffded8();
        func_0x000104bd46a0();
        *(undefined4 *)*param_1 = *param_2;
        return;
      }
      lVar6 = uVar8 * 0x48;
      __Znwm();
      puVar1 = (undefined8 *)(lVar6 + lVar16);
      puVar20 = puVar1 + (uVar7 & 0xffffffff) * 9;
      puVar9 = puVar1;
      do {
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[7] = 0;
        puVar9[6] = 0;
        puVar9[8] = 0;
        *(undefined2 *)((long)puVar9 + 2) = 0x3fff;
        *(undefined8 *)((long)puVar9 + 0x1c) = 0;
        *(undefined8 *)((long)puVar9 + 0x14) = 0;
        *(undefined8 *)((long)puVar9 + 0x2c) = 0;
        *(undefined8 *)((long)puVar9 + 0x24) = 0;
        puVar9 = puVar9 + 9;
      } while (puVar9 != puVar20);
      if (puVar15 != puVar21) {
        lVar14 = 0;
        do {
          puVar9 = (undefined8 *)((long)puVar15 + lVar14);
          puVar2 = (undefined8 *)(((long)puVar1 - lVar16) + lVar14);
          *puVar2 = *puVar9;
          uVar22 = puVar9[1];
          puVar2[2] = puVar9[2];
          puVar2[1] = uVar22;
          uVar22 = puVar9[3];
          puVar2[4] = puVar9[4];
          puVar2[3] = uVar22;
          puVar2[5] = puVar9[5];
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar18 = puVar2 + 6;
          *(undefined1 *)puVar18 = 0;
          *(undefined4 *)(puVar2 + 8) = 0xffffffff;
          FUN_10a3f9220(puVar18);
          uVar12 = *(uint *)(puVar9 + 8);
          if (uVar12 != 0xffffffff) {
            puStack_68 = puVar18;
            (*(code *)(&PTR_FUN_110c34be8)[uVar12])(&puStack_68,puVar9 + 6);
            *(uint *)(puVar2 + 8) = uVar12;
          }
          lVar14 = lVar14 + 0x48;
        } while (puVar9 + 9 != puVar21);
        do {
          func_0x00010a3f91e8(puVar15);
          puVar15 = puVar15 + 9;
        } while (puVar15 != puVar21);
        puVar15 = (undefined8 *)*param_1;
        param_2 = (undefined4 *)((ulong)param_2 & 0xffffffff);
      }
      *param_1 = (long)puVar1 - lVar16;
      param_1[1] = (long)puVar20;
      param_1[2] = lVar6 + uVar8 * 0x48;
      puVar21 = puVar20;
      if (puVar15 != (undefined8 *)0x0) {
        __ZdlPv(puVar15);
        puVar21 = (undefined8 *)param_1[1];
      }
      goto LAB_10a9ae478;
    }
    puVar9 = puVar21 + (uVar7 & 0xffffffff) * 9;
    do {
      puVar21[1] = 0;
      *puVar21 = 0;
      puVar21[3] = 0;
      puVar21[2] = 0;
      puVar21[5] = 0;
      puVar21[4] = 0;
      puVar21[7] = 0;
      puVar21[6] = 0;
      puVar21[8] = 0;
      *(undefined2 *)((long)puVar21 + 2) = 0x3fff;
      *(undefined8 *)((long)puVar21 + 0x1c) = 0;
      *(undefined8 *)((long)puVar21 + 0x14) = 0;
      *(undefined8 *)((long)puVar21 + 0x2c) = 0;
      *(undefined8 *)((long)puVar21 + 0x24) = 0;
      puVar21 = puVar21 + 9;
    } while (puVar21 != puVar9);
  }
  else {
    if (uVar17 <= uVar19) goto LAB_10a9ae478;
    while (puVar9 = puVar15 + uVar19 * 9, puVar21 != puVar15 + uVar19 * 9) {
      puVar21 = puVar21 + -9;
      func_0x00010a3f91e8(puVar21);
    }
  }
  puVar21 = puVar9;
  param_1[1] = (long)puVar21;
LAB_10a9ae478:
  uVar7 = uVar19 - 1;
  lVar16 = *param_1;
  uVar8 = ((long)puVar21 - lVar16 >> 3) * -0x71c71c71c71c71c7;
  if (uVar17 <= uVar7) {
    uVar3 = uVar17;
    if (uVar17 <= uVar8) {
      uVar3 = uVar8;
    }
    puVar11 = (uint *)(lVar16 + lVar5 * 8 + 4);
    uVar13 = uVar17;
    uVar10 = uVar17;
    do {
      uVar10 = uVar10 + 1;
      if (uVar10 - uVar3 == 1) goto LAB_10a9ae52c;
      uVar12 = (uint)uVar13;
      uVar13 = uVar13 + 1;
      *(short *)((long)puVar11 + -2) = (short)uVar10;
      *puVar11 = uVar12 & 0xbfff | (int)param_2 << 0x1d | 0x4000U;
      puVar11 = puVar11 + 0x12;
    } while (uVar13 != uVar19);
  }
  if (uVar7 <= uVar8 && uVar8 - uVar7 != 0) {
    *(undefined2 *)(lVar16 + (long)(int)uVar7 * 0x48 + 2) = 0x3fff;
    *(short *)(param_1 + 3) = (short)uVar17;
    *(short *)((long)param_1 + 0x1a) = (short)uVar7;
    return;
  }
LAB_10a9ae52c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ae530);
  (*pcVar4)();
}



/* Entry: 10a9ae538; end: 10a9ae55b;  */

void FUN_10a9ae538(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 10a9ae55c; end: 10a9ae8b3;  */

void FUN_10a9ae55c(long *param_1,int param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  puVar18 = (undefined8 *)*param_1;
  puVar21 = (undefined8 *)param_1[1];
  lVar22 = (long)puVar21 - (long)puVar18;
  lVar9 = lVar22 >> 4;
  uVar19 = lVar9 * 0x4ec4ec4ec4ec4ec5;
  uVar16 = ((uint)uVar19 & 0x7fff) << 1;
  if (uVar16 < 0xb) {
    uVar16 = 10;
  }
  if (0x3ffd < uVar16) {
    uVar16 = 0x3ffe;
  }
  uVar20 = (ulong)uVar16;
  uVar11 = uVar20 + lVar9 * -0x4ec4ec4ec4ec4ec5;
  if (uVar19 <= uVar20 && uVar11 != 0) {
    if ((ulong)((param_1[2] - (long)puVar21 >> 4) * 0x4ec4ec4ec4ec4ec5) < uVar11) {
      lVar10 = param_1[2] - (long)puVar18 >> 4;
      uVar12 = lVar10 * -0x6276276276276276;
      if (uVar12 < uVar20 || uVar12 - uVar20 == 0) {
        uVar12 = uVar20;
      }
      if (0x9d89d89d89d89c < (ulong)(lVar10 * 0x4ec4ec4ec4ec4ec5)) {
        uVar12 = 0x13b13b13b13b13b;
      }
      if (0x13b13b13b13b13b < uVar12) {
        func_0x000109ffded8();
        *(undefined8 *)((long)param_1 + 0xc) = 0;
        *(undefined8 *)((long)param_1 + 4) = 0;
        *(undefined8 *)((long)param_1 + 0x1c) = 0;
        *(undefined8 *)((long)param_1 + 0x14) = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[9] = 0;
        param_1[8] = 0;
        param_1[0xb] = 0;
        param_1[10] = 0;
        param_1[0xe] = 0;
        param_1[0xd] = 0x3f800000;
        param_1[0x10] = 0;
        param_1[0xf] = 0x3f80000000000000;
        param_1[0x12] = 0x3f800000;
        param_1[0x11] = 0;
        *(undefined1 *)param_1 = 0;
        *(undefined2 *)((long)param_1 + 2) = 0x3fff;
        *(undefined4 *)((long)param_1 + 0x24) = 0;
        param_1[5] = 1;
        param_1[0xc] = 0;
        param_1[0x14] = 0x3f80000000000000;
        param_1[0x13] = 0;
        param_1[0x15] = 0x1010203000100;
        *(undefined2 *)(param_1 + 0x16) = 0;
        auVar23 = NEON_fmov(0x3f800000,4);
        *(long *)((long)param_1 + 0xbc) = auVar23._8_8_;
        *(long *)((long)param_1 + 0xb4) = auVar23._0_8_;
        *(undefined4 *)((long)param_1 + 0xc4) = 0x3f800000;
        *(undefined1 *)(param_1 + 0x19) = 0;
        return;
      }
      lVar7 = uVar12 * 0xd0;
      __Znwm();
      puVar1 = (undefined8 *)(lVar7 + lVar22);
      lVar10 = uVar20 * 0xd0 + lVar9 * -0x10;
      puVar8 = puVar1;
      do {
        puVar8[0x17] = 0;
        puVar8[0x16] = 0;
        puVar8[0x19] = 0;
        puVar8[0x18] = 0;
        puVar8[0x13] = 0;
        puVar8[0x12] = 0;
        puVar8[0x15] = 0;
        puVar8[0x14] = 0;
        puVar8[0xf] = 0;
        puVar8[0xe] = 0;
        puVar8[0x11] = 0;
        puVar8[0x10] = 0;
        puVar8[0xb] = 0;
        puVar8[10] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        FUN_10a9ae8b4();
        puVar8 = puVar8 + 0x1a;
        lVar10 = lVar10 + -0xd0;
      } while (lVar10 != 0);
      puVar8 = puVar18;
      puVar13 = (undefined8 *)((long)puVar1 - lVar22);
      if (puVar18 != puVar21) {
        do {
          *puVar13 = *puVar8;
          uVar4 = puVar8[1];
          puVar13[2] = puVar8[2];
          puVar13[1] = uVar4;
          puVar8[1] = 0;
          puVar8[2] = 0;
          uVar4 = puVar8[3];
          puVar13[4] = puVar8[4];
          puVar13[3] = uVar4;
          puVar8[3] = 0;
          puVar8[4] = 0;
          uVar4 = puVar8[5];
          puVar13[6] = puVar8[6];
          puVar13[5] = uVar4;
          uVar4 = puVar8[7];
          puVar13[8] = puVar8[8];
          puVar13[7] = uVar4;
          puVar8[7] = 0;
          puVar8[8] = 0;
          uVar4 = puVar8[9];
          puVar13[10] = puVar8[10];
          puVar13[9] = uVar4;
          puVar8[9] = 0;
          puVar8[10] = 0;
          uVar4 = puVar8[0xb];
          puVar13[0xc] = puVar8[0xc];
          puVar13[0xb] = uVar4;
          puVar8[0xb] = 0;
          puVar8[0xc] = 0;
          uVar4 = puVar8[0x15];
          uVar5 = puVar8[0x16];
          uVar25 = puVar8[0x18];
          uVar24 = puVar8[0x17];
          uVar3 = *(undefined1 *)(puVar8 + 0x19);
          uVar26 = puVar8[0x13];
          puVar13[0x14] = puVar8[0x14];
          puVar13[0x13] = uVar26;
          *(undefined1 *)(puVar13 + 0x19) = uVar3;
          puVar13[0x18] = uVar25;
          puVar13[0x17] = uVar24;
          puVar13[0x16] = uVar5;
          puVar13[0x15] = uVar4;
          uVar4 = puVar8[0xf];
          uVar5 = puVar8[0x10];
          uVar25 = puVar8[0x12];
          uVar24 = puVar8[0x11];
          uVar26 = puVar8[0xd];
          puVar13[0xe] = puVar8[0xe];
          puVar13[0xd] = uVar26;
          puVar13[0x12] = uVar25;
          puVar13[0x11] = uVar24;
          puVar13[0x10] = uVar5;
          puVar13[0xf] = uVar4;
          puVar8 = puVar8 + 0x1a;
          puVar13 = puVar13 + 0x1a;
        } while (puVar8 != puVar21);
        do {
          func_0x00010a3f9140(puVar18);
          puVar18 = puVar18 + 0x1a;
        } while (puVar18 != puVar21);
        puVar18 = (undefined8 *)*param_1;
      }
      *param_1 = (long)puVar1 - lVar22;
      param_1[1] = (long)(puVar1 + (uVar11 & 0xffffffff) * 0x1a);
      param_1[2] = lVar7 + uVar12 * 0xd0;
      puVar21 = puVar1 + (uVar11 & 0xffffffff) * 0x1a;
      if (puVar18 != (undefined8 *)0x0) {
        __ZdlPv(puVar18);
        puVar21 = (undefined8 *)param_1[1];
      }
      goto LAB_10a9ae7f8;
    }
    puVar8 = puVar21 + (uVar11 & 0xffffffff) * 0x1a;
    lVar22 = uVar20 * 0xd0 + lVar9 * -0x10;
    do {
      puVar21[0x17] = 0;
      puVar21[0x16] = 0;
      puVar21[0x19] = 0;
      puVar21[0x18] = 0;
      puVar21[0x13] = 0;
      puVar21[0x12] = 0;
      puVar21[0x15] = 0;
      puVar21[0x14] = 0;
      puVar21[0xf] = 0;
      puVar21[0xe] = 0;
      puVar21[0x11] = 0;
      puVar21[0x10] = 0;
      puVar21[0xb] = 0;
      puVar21[10] = 0;
      puVar21[0xd] = 0;
      puVar21[0xc] = 0;
      puVar21[7] = 0;
      puVar21[6] = 0;
      puVar21[9] = 0;
      puVar21[8] = 0;
      puVar21[3] = 0;
      puVar21[2] = 0;
      puVar21[5] = 0;
      puVar21[4] = 0;
      puVar21[1] = 0;
      *puVar21 = 0;
      FUN_10a9ae8b4(puVar21);
      puVar21 = puVar21 + 0x1a;
      lVar22 = lVar22 + -0xd0;
    } while (lVar22 != 0);
  }
  else {
    if (uVar19 <= uVar20) goto LAB_10a9ae7f8;
    while (puVar8 = puVar18 + uVar20 * 0x1a, puVar21 != puVar18 + uVar20 * 0x1a) {
      puVar21 = puVar21 + -0x1a;
      func_0x00010a3f9140(puVar21);
    }
  }
  puVar21 = puVar8;
  param_1[1] = (long)puVar21;
LAB_10a9ae7f8:
  uVar11 = uVar20 - 1;
  lVar22 = *param_1;
  lVar10 = (long)puVar21 - lVar22 >> 4;
  uVar12 = lVar10 * 0x4ec4ec4ec4ec4ec5;
  if (uVar19 < uVar11 || uVar19 - uVar11 == 0) {
    uVar2 = uVar19;
    if (uVar19 < uVar12 || uVar19 + lVar10 * -0x4ec4ec4ec4ec4ec5 == 0) {
      uVar2 = uVar12;
    }
    puVar15 = (uint *)(lVar22 + lVar9 * 0x10 + 4);
    uVar17 = uVar19;
    uVar14 = uVar19;
    do {
      uVar14 = uVar14 + 1;
      if (uVar14 - uVar2 == 1) goto LAB_10a9ae8ac;
      uVar16 = (uint)uVar17;
      uVar17 = uVar17 + 1;
      *(short *)((long)puVar15 + -2) = (short)uVar14;
      *puVar15 = uVar16 & 0xbfff | param_2 << 0x1d | 0x4000U;
      puVar15 = puVar15 + 0x34;
    } while (uVar17 != uVar20);
  }
  if (uVar11 <= uVar12 && uVar12 - uVar11 != 0) {
    *(undefined2 *)(lVar22 + (long)(int)uVar11 * 0xd0 + 2) = 0x3fff;
    *(short *)(param_1 + 3) = (short)uVar19;
    *(short *)((long)param_1 + 0x1a) = (short)uVar11;
    return;
  }
LAB_10a9ae8ac:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9ae8b0);
  (*pcVar6)();
}



/* Entry: 10a9ae8b4; end: 10a9ae92b;  */

void FUN_10a9ae8b4(undefined1 *param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0x3fff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0x1010203000100;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  auVar1 = NEON_fmov(0x3f800000,4);
  *(long *)(param_1 + 0xbc) = auVar1._8_8_;
  *(long *)(param_1 + 0xb4) = auVar1._0_8_;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  param_1[200] = 0;
  return;
}



/* Entry: 10a9ae92c; end: 10a9ae983;  */

long FUN_10a9ae92c(long param_1)

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



/* Entry: 10a9ae984; end: 10a9aea5b;  */

void FUN_10a9ae984(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9aea5c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = (undefined4)param_2[3];
  puVar10 = (undefined8 *)(param_2[4] + 0x88);
  FUN_10a9781b4(uVar2,*puVar10,*(undefined8 *)(param_2[4] + 0x90));
  func_0x00010a976a90(puVar10,uVar2);
  FUN_10a976b94(puVar10,uVar2);
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar12 = plVar5[0x4c];
  lVar9 = lVar12 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar9;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar6,lVar9);
          *plVar1 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar12 != lVar6) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a9aea5c; end: 10a9aeac3;  */

void FUN_10a9aea5c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
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
      param_4 = 0;
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
  FUN_10a9aec90(plVar6,param_2);
  FUN_10a052e3c(param_4);
  uVar1 = *(uint *)(plVar6 + 3);
  lVar12 = plVar6[4];
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar12 + 0x88),*(undefined8 *)(lVar12 + 0x90));
  uVar8 = (ulong)uVar1 & 0x3fff;
  uVar10 = (*(long *)(lVar12 + 0x90) - *(long *)(lVar12 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9aebb4);
    (*pcVar3)();
  }
  cVar2 = *(char *)(*(long *)(lVar12 + 0x88) + uVar8 * 0x180);
  *extraout_x8 = 2;
  *(bool *)(extraout_x8 + 2) = cVar2 == '\0';
  plVar6 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar8 = lVar12 - 1;
  plVar7[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar12 + 2];
    if (plVar7[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar8) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar11 = lVar14 - lVar12;
  uVar10 = lVar11 >> 4;
  if (uVar10 < uVar8) {
    uVar16 = uVar8 - uVar10;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar15 - lVar12 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar12)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar11;
          _bzero(lVar14,uVar16 * 0x10);
          lVar13 = lVar14 + uVar10 * -0x10;
          _memcpy(lVar13,lVar12,lVar11);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar16 * 0x10;
          plVar7[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_a8 = lVar12;
          lStack_a0 = lVar12;
          lStack_98 = lVar12;
          lStack_90 = lVar15;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar14,uVar16 * 0x10);
    plVar7[0x4c] = lVar14 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar10) {
    lVar12 = lVar12 + uVar8 * 0x10;
    while (lVar14 != lVar12) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar8;
  return;
}



/* Entry: 10a9aeac4; end: 10a9aebc7;  */

void FUN_10a9aeac4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
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
  FUN_10a9aec90(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(uint *)(param_2 + 3);
  lVar11 = param_2[4];
  FUN_10a9781b4((ulong)uVar2,*(undefined8 *)(lVar11 + 0x88),*(undefined8 *)(lVar11 + 0x90));
  uVar7 = (ulong)uVar2 & 0x3fff;
  uVar9 = (*(long *)(lVar11 + 0x90) - *(long *)(lVar11 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9aebb4);
    (*pcVar4)();
  }
  cVar3 = *(char *)(*(long *)(lVar11 + 0x88) + uVar7 * 0x180);
  *param_1 = 2;
  *(bool *)(param_1 + 2) = cVar3 == '\0';
  plVar1 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar7 = lVar11 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar11 + 2];
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
  lVar11 = *plVar1;
  lVar13 = plVar6[0x4c];
  lVar10 = lVar13 - lVar11;
  uVar9 = lVar10 >> 4;
  if (uVar9 < uVar7) {
    uVar15 = uVar7 - uVar9;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar14 - lVar11 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar11)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar10;
          _bzero(lVar13,uVar15 * 0x10);
          lVar12 = lVar13 + uVar9 * -0x10;
          _memcpy(lVar12,lVar11,lVar10);
          *plVar1 = lVar12;
          plVar6[0x4c] = lVar13 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
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
    _bzero(lVar13,uVar15 * 0x10);
    plVar6[0x4c] = lVar13 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar9) {
    lVar11 = lVar11 + uVar7 * 0x10;
    while (lVar13 != lVar11) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a9aebc8; end: 10a9aec8f;  */

void FUN_10a9aebc8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9aea5c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10a978210(plVar4,param_2);
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


