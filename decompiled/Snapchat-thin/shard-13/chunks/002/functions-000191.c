/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a358d80; end: 10a358dd7;  */

void FUN_10a358d80(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a358e30(auStack_48);
  FUN_10a358f68(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a358dd8; end: 10a358e2f;  */

void FUN_10a358dd8(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a201800(auStack_48);
  FUN_10a359084(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a358e30; end: 10a358f67;  */

void FUN_10a358e30(undefined8 param_1,long *param_2,int *param_3)

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
      goto LAB_10a358f38;
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
LAB_10a358f38:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a358f48);
  (*pcVar1)();
}



/* Entry: 10a358f68; end: 10a358fbf;  */

void FUN_10a358f68(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a358fc0();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a358fc0; end: 10a35903b;  */

void FUN_10a358fc0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bc86c8;
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



/* Entry: 10a35903c; end: 10a35905b;  */

void FUN_10a35903c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc86c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a35905c; end: 10a359083;  */

undefined1  [16] FUN_10a35905c(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a359080);
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



/* Entry: 10a359084; end: 10a3590db;  */

void FUN_10a359084(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a3590dc();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a3590dc; end: 10a359157;  */

void FUN_10a3590dc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bc8718;
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



/* Entry: 10a359158; end: 10a359177;  */

void FUN_10a359158(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc8718;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a359178; end: 10a35919f;  */

undefined1  [16] FUN_10a359178(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a35919c);
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



/* Entry: 10a3591a0; end: 10a35924f;  */

long FUN_10a3591a0(long param_1)

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



/* Entry: 10a359250; end: 10a359763;  */

void FUN_10a359250(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  undefined2 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
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
  FUN_10a2fb124(param_5);
  FUN_10a2eb314(&lStack_c0,param_2,param_4);
  ppuStack_b0 = &PTR_FUN_110bc7b80;
  uStack_a4 = 0;
  uStack_a8 = 0;
  if ((plStack_b8 != (long *)0x0) &&
     (plVar8 = plStack_b8, __ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)) {
    plVar7 = plVar8 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    if (lStack_c0 != 0) {
      lVar6 = *(long *)(lStack_c0 + 0x120);
      func_0x00010a0fda30();
      if (lVar6 == 0) {
        plVar5 = (long *)0x1e8;
        __Znwm();
        plVar5[1] = 0;
        plVar5[2] = 0;
        *plVar5 = (long)&PTR_DAT_110bc6548;
        plVar7 = plVar5 + 3;
        FUN_10a327a1c(plVar7,0,plVar8,param_4,lStack_c0,&ppuStack_b0);
        plStack_70 = plVar7;
        plStack_68 = plVar5;
        FUN_10a3599b8(&plStack_70,plVar5 + 8,plVar7);
        FUN_10a3597bc(&plStack_d0,&plStack_70);
        if (plStack_68 == (long *)0x0) goto LAB_10a359538;
        plVar8 = plStack_68 + 1;
        do {
          lVar6 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          plVar7 = plStack_68;
        } while (cVar1 != '\0');
      }
      else {
        lVar9 = *(long *)(lVar6 + 0x858);
        plVar8 = *(long **)(lVar6 + 0x860);
        if (plVar8 != (long *)0x0) {
          plVar7 = plVar8 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uVar4 = 0x1d0;
        lStack_a0 = lVar9;
        plStack_98 = plVar8;
        __Znwm(0x1d0);
        FUN_10a327a1c();
        lStack_90 = lVar9;
        plStack_88 = plVar8;
        if (plVar8 != (long *)0x0) {
          plVar7 = plVar8 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar7 = plVar8 + 2;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
        lStack_80 = lVar9;
        plStack_78 = plVar8;
        FUN_10a359920(&plStack_70,uVar4,&lStack_80);
        FUN_10a3597bc(&plStack_d0,&plStack_70);
        plVar8 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar7 = plStack_68 + 1;
          do {
            lVar6 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if (plStack_78 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar8 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar7 = plStack_88 + 1;
          do {
            lVar6 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if ((lStack_a0 != 0) && (plStack_d0 != (long *)0x0)) {
          plStack_70 = plStack_d0;
          plStack_68 = plStack_c8;
          if (plStack_c8 != (long *)0x0) {
            plVar8 = plStack_c8 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar2) {
                *plVar8 = *plVar8 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_10aa88c30(lStack_a0,&plStack_70);
          plVar8 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar7 = plStack_68 + 1;
            do {
              lVar6 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
        }
        if (plStack_98 == (long *)0x0) goto LAB_10a359538;
        plVar8 = plStack_98 + 1;
        do {
          lVar6 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          plVar7 = plStack_98;
        } while (cVar1 != '\0');
      }
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      goto LAB_10a359538;
    }
  }
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f64f076,&UNK_10f64f0ae,0x84,&UNK_10f64f185);
  }
  plStack_d0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
LAB_10a359538:
  if (plStack_b8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plStack_68 = plStack_c8;
  plStack_70 = plStack_d0;
  if (plStack_c8 != (long *)0x0) {
    plVar8 = plStack_c8 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a052f68(param_1,param_2,&plStack_70);
  plVar8 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar7 = plStack_68 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar7 = plStack_c8 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  func_0x00010988c170(plVar3 + 0x4b);
  return;
}



/* Entry: 10a359764; end: 10a3597bb;  */

long FUN_10a359764(long param_1)

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



/* Entry: 10a3597bc; end: 10a35991f;  */

void FUN_10a3597bc(long *param_1,long *param_2)

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



/* Entry: 10a359920; end: 10a3599b7;  */

long * FUN_10a359920(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar1 = &PTR_DAT_110bc64e8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  param_1[1] = (long)puVar1;
  FUN_10a3599b8(param_1,param_2 + 0x28,param_2);
  return param_1;
}



/* Entry: 10a3599b8; end: 10a359ad7;  */

void FUN_10a3599b8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 10a359ad8; end: 10a359b17;  */

void FUN_10a359ad8(long param_1)

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



/* Entry: 10a359b18; end: 10a359b53;  */

long FUN_10a359b18(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc6528);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a359b54; end: 10a359b67;  */

void FUN_10a359b54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a359b68; end: 10a359b87;  */

void FUN_10a359b68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc6548;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a359b88; end: 10a359b97;  */

void FUN_10a359b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a359b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a359b98; end: 10a359c5f;  */

void FUN_10a359b98(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a359c60; end: 10a359e2f;  */

long * FUN_10a359c60(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong unaff_x24;
  
  plVar3 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar11 = (long *)param_1[1];
  if (plVar11 > param_2 || param_2 == plVar11) {
    if (plVar11 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar11 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar11 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar11 = (long *)((ulong)plVar11 & uVar5);
      }
      else if (param_2 <= plVar11) {
        uVar6 = 0;
        if (param_2 != (long *)0x0) {
          uVar6 = (ulong)plVar11 / (ulong)param_2;
        }
        plVar11 = (long *)((long)plVar11 - uVar6 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar11 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar4;
      while (plVar8 != (long *)0x0) {
        plVar10 = (long *)plVar8[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar5);
        }
        else if (param_2 <= plVar10) {
          uVar6 = 0;
          if (param_2 != (long *)0x0) {
            uVar6 = (ulong)plVar10 / (ulong)param_2;
          }
          plVar10 = (long *)((long)plVar10 - uVar6 * (long)param_2);
        }
        plVar9 = plVar8;
        if (plVar10 != plVar11) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar4;
            plVar11 = plVar10;
          }
          else {
            *plVar4 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
            **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar8;
            plVar9 = plVar4;
          }
        }
        plVar4 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
    return plVar3;
  }
  func_0x000109ffded8();
  uVar5 = plVar3[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      unaff_x24 = uVar6 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar5 <= param_3) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = param_3 / uVar5;
        }
        unaff_x24 = param_3 - uVar7 * uVar5;
      }
    }
    plVar11 = *(long **)(*plVar3 + unaff_x24 * 8);
    if (plVar11 != (long *)0x0) {
      for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar7 = plVar11[1];
        if (uVar7 == param_3) {
          if ((long *)plVar11[2] == plVar4 && plVar11[3] == param_3) {
            return plVar11;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar7 = uVar7 & uVar6;
          }
          else if (uVar5 <= uVar7) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar7 / uVar5;
            }
            uVar7 = uVar7 - uVar1 * uVar5;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x28;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_3;
  lVar2 = *param_4;
  plVar4[3] = param_4[1];
  plVar4[2] = lVar2;
  *(undefined4 *)(plVar4 + 4) = 0;
  if ((uVar5 == 0) || (*(float *)(plVar3 + 4) * (float)uVar5 < (float)(plVar3[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a359c60(plVar3,uVar6);
    uVar5 = plVar3[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x24 = uVar5 - 1 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar5 <= param_3) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = param_3 / uVar5;
        }
        unaff_x24 = param_3 - uVar6 * uVar5;
      }
    }
  }
  lVar2 = *plVar3;
  plVar11 = *(long **)(lVar2 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = plVar3 + 2;
    *plVar4 = *plVar11;
    *plVar11 = (long)plVar4;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar11;
    if (*plVar4 == 0) goto LAB_10a359ff8;
    uVar6 = *(ulong *)(*plVar4 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar6 = uVar6 & uVar5 - 1;
    }
    else if (uVar5 <= uVar6) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar7 * uVar5;
    }
    plVar11 = (long *)(*plVar3 + uVar6 * 8);
  }
  else {
    *plVar4 = *plVar11;
  }
  *plVar11 = (long)plVar4;
LAB_10a359ff8:
  plVar3[3] = plVar3[3] + 1;
  return plVar4;
}



/* Entry: 10a359e30; end: 10a35a02f;  */

long * FUN_10a359e30(long *param_1,long param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong unaff_x24;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar7 <= param_3) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = param_3 / uVar7;
        }
        unaff_x24 = param_3 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == param_3) {
          if (plVar4[2] == param_2 && plVar4[3] == param_3) {
            return plVar4;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x28;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_3;
  lVar6 = *param_4;
  plVar4[3] = param_4[1];
  plVar4[2] = lVar6;
  *(undefined4 *)(plVar4 + 4) = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10a359c60(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar7 <= param_3) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_3 / uVar7;
        }
        unaff_x24 = param_3 - uVar2 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_10a359ff8;
    uVar2 = *(ulong *)(*plVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar2 = uVar2 & uVar7 - 1;
    }
    else if (uVar7 <= uVar2) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar2 / uVar7;
      }
      uVar2 = uVar2 - uVar5 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar2 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_10a359ff8:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10a35a030; end: 10a35a0d7;  */

long * FUN_10a35a030(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = param_2[1];
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar3 == uVar7) {
            if (plVar6[2] == *param_2 && plVar6[3] == uVar3) {
              return plVar6;
            }
          }
          else {
            if ((uVar2 & uVar4) == 0) {
              uVar7 = uVar7 & uVar4;
            }
            else if (uVar2 <= uVar7) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar1 * uVar2;
            }
            if (uVar7 != uVar5) {
              return (long *)0x0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 10a35a0d8; end: 10a35a1bb;  */

long * FUN_10a35a0d8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar8 = *param_2;
    puVar7 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    plVar3 = param_1;
  }
  else {
    lVar6 = (long)puVar2 - *param_1;
    uVar1 = (lVar6 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a34d61c();
      func_0x00010a35a1ec();
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    plStack_38 = param_1;
    FUN_10a34d630();
    puVar2 = (undefined8 *)((long)plVar3 + lVar6);
    uVar8 = *param_2;
    puVar7 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_58 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar7;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar3 + uVar5 * 2);
    plVar3 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10a35a1bc(plVar3);
  }
  param_1[1] = (long)puVar7;
  return plVar3;
}



/* Entry: 10a35a1bc; end: 10a35a287;  */

long * FUN_10a35a1bc(long *param_1)

{
  func_0x00010a35a1ec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a35a288; end: 10a35a303;  */

void FUN_10a35a288(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar11 = param_1[1];
  uVar8 = lVar11 - *param_1 >> 4;
  if (param_2 <= uVar8) {
    if (param_2 < uVar8) {
      lVar10 = *param_1 + param_2 * 0x10;
      for (; lVar11 != lVar10; lVar11 = lVar11 + -0x10) {
        if (*(long *)(lVar11 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      param_1[1] = lVar10;
    }
    return;
  }
  param_2 = param_2 - uVar8;
  lVar11 = param_1[1];
  if ((ulong)(param_1[2] - lVar11 >> 4) < param_2) {
    lVar11 = lVar11 - *param_1;
    uVar8 = param_2 + (lVar11 >> 4);
    if (uVar8 >> 0x3c != 0) {
      FUN_10a34d61c();
      puVar12 = *(undefined8 **)(param_2 + 0x10);
      lVar11 = *param_1;
      plVar6 = (long *)param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      if ((lVar11 != 0) &&
         ((*(long *)(lVar11 + 0x40) != puVar12[3] || (*(long *)(lVar11 + 0x48) != puVar12[4])))) {
        lVar10 = *(long *)*puVar12;
        if ((ulong)(((long *)*puVar12)[1] - lVar10 >> 4) <= (ulong)*(uint *)(puVar12 + 2)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a35a544);
          (*pcVar5)();
        }
        plVar2 = (long *)(lVar10 + (ulong)*(uint *)(puVar12 + 2) * 0x10);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar10 = plVar2[1];
        *plVar2 = lVar11;
        plVar2[1] = (long)plVar6;
        if (lVar10 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        uVar8 = puVar12[5];
        if ((uVar8 != 0xffffffffffffffff) || (puVar12[6] != -1)) {
          uVar9 = *(ulong *)(lVar11 + 0x40);
          if ((uVar8 != uVar9) || (puVar12[6] != *(long *)(lVar11 + 0x48))) {
            lVar11 = puVar12[1];
            FUN_10a35a558();
            if ((uVar9 & 1) == 0) {
              uVar8 = puVar12[5];
              *(undefined8 *)(lVar11 + 0x28) = puVar12[6];
              *(ulong *)(lVar11 + 0x20) = uVar8;
            }
          }
        }
      }
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar11 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
          return;
        }
      }
      return;
    }
    uVar7 = param_1[2] - *param_1;
    uVar9 = (long)uVar7 >> 3;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar9 = 0xfffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar9 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = param_1;
      FUN_10a34d630();
    }
    lVar11 = (long)plVar6 + lVar11;
    _bzero(lVar11,param_2 * 0x10);
    lVar10 = lVar11 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_68 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar11 + param_2 * 0x10;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar9 * 2);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    FUN_10a35a1bc(&lStack_68);
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar11,param_2 * 0x10);
      lVar11 = lVar11 + param_2 * 0x10;
    }
    param_1[1] = lVar11;
  }
  return;
}



/* Entry: 10a35a304; end: 10a35a407;  */

void FUN_10a35a304(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar11 = param_1[1];
  if ((ulong)(param_1[2] - lVar11 >> 4) < param_2) {
    lVar11 = lVar11 - *param_1;
    uVar8 = param_2 + (lVar11 >> 4);
    if (uVar8 >> 0x3c != 0) {
      FUN_10a34d61c();
      puVar12 = *(undefined8 **)(param_2 + 0x10);
      lVar11 = *param_1;
      plVar6 = (long *)param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      if ((lVar11 != 0) &&
         ((*(long *)(lVar11 + 0x40) != puVar12[3] || (*(long *)(lVar11 + 0x48) != puVar12[4])))) {
        lVar10 = *(long *)*puVar12;
        if ((ulong)(((long *)*puVar12)[1] - lVar10 >> 4) <= (ulong)*(uint *)(puVar12 + 2)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a35a544);
          (*pcVar5)();
        }
        plVar2 = (long *)(lVar10 + (ulong)*(uint *)(puVar12 + 2) * 0x10);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar10 = plVar2[1];
        *plVar2 = lVar11;
        plVar2[1] = (long)plVar6;
        if (lVar10 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        uVar8 = puVar12[5];
        if ((uVar8 != 0xffffffffffffffff) || (puVar12[6] != -1)) {
          uVar9 = *(ulong *)(lVar11 + 0x40);
          if ((uVar8 != uVar9) || (puVar12[6] != *(long *)(lVar11 + 0x48))) {
            lVar11 = puVar12[1];
            FUN_10a35a558();
            if ((uVar9 & 1) == 0) {
              uVar8 = puVar12[5];
              *(undefined8 *)(lVar11 + 0x28) = puVar12[6];
              *(ulong *)(lVar11 + 0x20) = uVar8;
            }
          }
        }
      }
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar11 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
          return;
        }
      }
      return;
    }
    uVar7 = param_1[2] - *param_1;
    uVar9 = (long)uVar7 >> 3;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar9 = 0xfffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar9 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = param_1;
      FUN_10a34d630();
    }
    lVar11 = (long)plVar6 + lVar11;
    _bzero(lVar11,param_2 << 4);
    lVar10 = lVar11 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_68 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar11 + param_2 * 0x10;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar9 * 2);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    FUN_10a35a1bc(&lStack_68);
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar11,param_2 << 4);
      lVar11 = lVar11 + param_2 * 0x10;
    }
    param_1[1] = lVar11;
  }
  return;
}



/* Entry: 10a35a408; end: 10a35a557;  */

void FUN_10a35a408(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  puVar11 = *(undefined8 **)(param_2 + 0x10);
  lVar8 = *param_1;
  plVar3 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((lVar8 != 0) &&
     ((*(long *)(lVar8 + 0x40) != puVar11[3] || (*(long *)(lVar8 + 0x48) != puVar11[4])))) {
    lVar7 = *(long *)*puVar11;
    if ((ulong)(((long *)*puVar11)[1] - lVar7 >> 4) <= (ulong)*(uint *)(puVar11 + 2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a35a544);
      (*pcVar6)();
    }
    plVar2 = (long *)(lVar7 + (ulong)*(uint *)(puVar11 + 2) * 0x10);
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar7 = plVar2[1];
    *plVar2 = lVar8;
    plVar2[1] = (long)plVar3;
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uVar10 = puVar11[5];
    if ((uVar10 != 0xffffffffffffffff) || (puVar11[6] != -1)) {
      uVar9 = *(ulong *)(lVar8 + 0x40);
      if ((uVar10 != uVar9) || (puVar11[6] != *(long *)(lVar8 + 0x48))) {
        lVar8 = puVar11[1];
        FUN_10a35a558();
        if ((uVar9 & 1) == 0) {
          uVar10 = puVar11[5];
          *(undefined8 *)(lVar8 + 0x28) = puVar11[6];
          *(ulong *)(lVar8 + 0x20) = uVar10;
        }
      }
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 10a35a558; end: 10a35a76f;  */

undefined1  [16] FUN_10a35a558(long *param_1,long param_2,ulong param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x25;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x25 = uVar3 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar9 <= param_3) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = param_3 / uVar9;
        }
        unaff_x25 = param_3 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == param_3) {
          if (plVar8[2] == param_2 && plVar8[3] == param_3) {
            uVar2 = 0;
            goto LAB_10a35a738;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = param_3;
  lVar7 = *param_4;
  lVar11 = param_5[1];
  lVar10 = *param_5;
  plVar8[3] = param_4[1];
  plVar8[2] = lVar7;
  plVar8[5] = lVar11;
  plVar8[4] = lVar10;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a10d18c(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar9 <= param_3) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = param_3 / uVar9;
        }
        unaff_x25 = param_3 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a35a728;
    uVar3 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar3 = uVar3 & uVar9 - 1;
    }
    else if (uVar9 <= uVar3) {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar3 / uVar9;
      }
      uVar3 = uVar3 - uVar6 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10a35a728:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a35a738:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 10a35a770; end: 10a35a797;  */

void FUN_10a35a770(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a35a798; end: 10a35a8b7;  */

void FUN_10a35a798(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lStack_40;
  long *plStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar9 = *(undefined8 **)(param_2 + 0x10);
  lStack_40 = *param_1;
  plStack_38 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((lStack_40 != 0) &&
     ((*(long *)(lStack_40 + 0x40) != puVar9[3] || (*(long *)(lStack_40 + 0x48) != puVar9[4])))) {
    lVar6 = *(long *)*puVar9;
    if ((ulong)(((long *)*puVar9)[1] - lVar6 >> 4) <= (ulong)*(uint *)(puVar9 + 2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a35a8a4);
      (*pcVar5)();
    }
    func_0x00010a34d270(lVar6 + (ulong)*(uint *)(puVar9 + 2) * 0x10,&lStack_40);
    uVar8 = puVar9[5];
    if ((uVar8 != 0xffffffffffffffff) || (puVar9[6] != -1)) {
      uVar7 = *(ulong *)(lStack_40 + 0x40);
      if ((uVar8 != uVar7) || (puVar9[6] != *(long *)(lStack_40 + 0x48))) {
        lVar6 = puVar9[1];
        uStack_30 = uVar7;
        lStack_28 = *(long *)(lStack_40 + 0x48);
        FUN_10a35a558();
        if ((uVar7 & 1) == 0) {
          uVar8 = puVar9[5];
          *(undefined8 *)(lVar6 + 0x28) = puVar9[6];
          *(ulong *)(lVar6 + 0x20) = uVar8;
        }
      }
    }
  }
  plVar4 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a35a8b8; end: 10a35a97f;  */

void FUN_10a35a8b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a35a980; end: 10a35ac9b;  */

long * FUN_10a35a980(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  
  plVar18 = (long *)param_1[1];
  if ((plVar18 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar18)) goto LAB_10a35ab8c;
  uVar8 = 1;
  if ((long *)0x2 < plVar18) {
    uVar8 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
  }
  plVar6 = (long *)(uVar8 | (long)plVar18 << 1);
  plVar7 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar7) {
    plVar6 = plVar7;
  }
  plVar7 = param_1;
  plVar10 = param_2;
  plVar15 = param_3;
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar18 = (long *)param_1[1];
    plVar7 = plVar6;
  }
  if (plVar18 > plVar6 || plVar6 == plVar18) {
    if (plVar18 <= plVar6) goto LAB_10a35ab8c;
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar18 <= plVar6) {
      plVar18 = (long *)param_1[1];
      goto LAB_10a35ab8c;
    }
    if (plVar6 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar18 = (long *)0x0;
      goto LAB_10a35ab8c;
    }
  }
  if ((ulong)plVar6 >> 0x3d == 0) {
    lVar4 = (long)plVar6 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar18 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar18 * 8) = 0;
      plVar18 = (long *)((long)plVar18 + 1);
    } while (plVar6 != plVar18);
    plVar7 = (long *)param_1[2];
    plVar18 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar10 = (long *)plVar7[1];
      uVar8 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar8) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar8);
      }
      else if (plVar6 <= plVar10) {
        uVar9 = 0;
        if (plVar6 != (long *)0x0) {
          uVar9 = (ulong)plVar10 / (ulong)plVar6;
        }
        plVar10 = (long *)((long)plVar10 - uVar9 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      while (plVar15 = plVar7, plVar7 = (long *)*plVar15, plVar7 != (long *)0x0) {
        plVar14 = (long *)plVar7[1];
        if (((ulong)plVar6 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar8);
        }
        else if (plVar6 <= plVar14) {
          uVar9 = 0;
          if (plVar6 != (long *)0x0) {
            uVar9 = (ulong)plVar14 / (ulong)plVar6;
          }
          plVar14 = (long *)((long)plVar14 - uVar9 * (long)plVar6);
        }
        if (plVar14 != plVar10) {
          lVar4 = *param_1;
          plVar17 = plVar7;
          if (*(long *)(lVar4 + (long)plVar14 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar14 * 8) = plVar15;
            plVar10 = plVar14;
          }
          else {
            do {
              plVar16 = plVar17;
              plVar17 = (long *)*plVar16;
              if (plVar17 == (long *)0x0) break;
            } while (plVar7[2] == plVar17[2] && plVar7[3] == plVar17[3]);
            *plVar15 = (long)plVar17;
            *plVar16 = **(long **)(lVar4 + (long)plVar14 * 8);
            **(long **)(lVar4 + (long)plVar14 * 8) = (long)plVar7;
            plVar7 = plVar15;
          }
        }
      }
    }
LAB_10a35ab8c:
    uVar8 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar8) == 0) {
      plVar6 = (long *)(uVar8 & (ulong)param_2);
    }
    else {
      plVar6 = param_2;
      if (plVar18 <= param_2) {
        uVar9 = 0;
        if (plVar18 != (long *)0x0) {
          uVar9 = (ulong)param_2 / (ulong)plVar18;
        }
        plVar6 = (long *)((long)param_2 - uVar9 * (long)plVar18);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)plVar6 * 8);
    if (plVar7 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      bVar12 = false;
      bVar1 = 0;
      do {
        plVar10 = plVar7;
        plVar7 = (long *)*plVar10;
        if (plVar7 == (long *)0x0) {
          return plVar10;
        }
        plVar15 = (long *)plVar7[1];
        if (((ulong)plVar18 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar15 & uVar8);
        }
        else {
          plVar14 = plVar15;
          if (plVar18 <= plVar15) {
            uVar9 = 0;
            if (plVar18 != (long *)0x0) {
              uVar9 = (ulong)plVar15 / (ulong)plVar18;
            }
            plVar14 = (long *)((long)plVar15 - uVar9 * (long)plVar18);
          }
        }
        if (plVar14 != plVar6) {
          return plVar10;
        }
        if (plVar15 == param_2) {
          bVar2 = plVar7[2] == *param_3 && plVar7[3] == param_3[1];
        }
        else {
          bVar2 = false;
        }
        bVar3 = bVar2 != bVar12;
        bVar2 = (bool)(bVar1 & bVar3);
        bVar12 = (bool)(bVar12 | bVar3);
        bVar1 = bVar1 | bVar3;
      } while (!bVar2);
    }
    return plVar10;
  }
  func_0x000109ffded8();
  uVar8 = plVar7[1];
  uVar9 = plVar10[1];
  uVar11 = uVar8 - 1;
  if ((uVar8 & uVar11) == 0) {
    uVar9 = uVar11 & uVar9;
    if (plVar15 != (long *)0x0) goto LAB_10a35acc4;
LAB_10a35ad00:
    plVar18 = plVar7 + 2;
    *plVar10 = *plVar18;
    *plVar18 = (long)plVar10;
    *(long **)(*plVar7 + uVar9 * 8) = plVar18;
    if (*plVar10 == 0) goto LAB_10a35ad5c;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar8 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar8 <= uVar13) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar9 * uVar8;
    }
  }
  else {
    if (uVar8 <= uVar9) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar13 * uVar8;
    }
    if (plVar15 == (long *)0x0) goto LAB_10a35ad00;
LAB_10a35acc4:
    *plVar10 = *plVar15;
    *plVar15 = (long)plVar10;
    if (*plVar10 == 0) goto LAB_10a35ad5c;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar8 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar8 <= uVar13) {
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar11 * uVar8;
    }
    if (uVar13 == uVar9) goto LAB_10a35ad5c;
  }
  *(long **)(*plVar7 + uVar13 * 8) = plVar10;
LAB_10a35ad5c:
  plVar7[3] = plVar7[3] + 1;
  return plVar7;
}



/* Entry: 10a35ac9c; end: 10a35ad6b;  */

void FUN_10a35ac9c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a35acc4;
LAB_10a35ad00:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a35ad5c;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a35ad00;
LAB_10a35acc4:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a35ad5c;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a35ad5c;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a35ad5c:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a35ad6c; end: 10a35ae77;  */

void FUN_10a35ad6c(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    while (plVar3 != (long *)0x0) {
      if (param_2 == param_3) goto LAB_10a35ae00;
      uVar5 = param_2[2];
      plVar3[3] = param_2[3];
      plVar3[2] = uVar5;
      lVar1 = *plVar3;
      plVar3[1] = plVar3[3];
      plVar4 = param_1;
      FUN_10a35ae78(param_1,plVar3[3],plVar3 + 2);
      FUN_10a35afc4(param_1,plVar3,plVar4);
      param_2 = (long *)*param_2;
      plVar3 = (long *)lVar1;
    }
  }
LAB_10a35ae28:
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a35b2b4(param_1,param_2 + 2);
  }
  return;
LAB_10a35ae00:
  do {
    plVar4 = (long *)*plVar3;
    __ZdlPv(plVar3);
    plVar3 = plVar4;
  } while (plVar4 != (long *)0x0);
  goto LAB_10a35ae28;
}



/* Entry: 10a35ae78; end: 10a35afc3;  */

long * FUN_10a35ae78(long *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a35b094(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = plVar8[2] == *param_3 && plVar8[3] == param_3[1];
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 10a35afc4; end: 10a35b093;  */

void FUN_10a35afc4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a35afec;
LAB_10a35b028:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a35b084;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a35b028;
LAB_10a35afec:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a35b084;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a35b084;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a35b084:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a35b094; end: 10a35b163;  */

long * FUN_10a35b094(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 < param_2) {
LAB_10a35b0dc:
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        plVar10 = (long *)0x20;
        __Znwm();
        lVar2 = *param_2;
        plVar10[3] = param_2[1];
        plVar10[2] = lVar2;
        *plVar10 = 0;
        plVar10[1] = plVar10[3];
        plVar3 = param_1;
        FUN_10a35ae78(param_1,plVar10[3],plVar10 + 2);
        FUN_10a35afc4(param_1,plVar10,plVar3);
        return plVar10;
      }
      lVar2 = (long)param_2 << 3;
      __Znwm();
      plVar3 = (long *)*param_1;
      *param_1 = lVar2;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      plVar10 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar10 * 8) = 0;
        plVar10 = (long *)((long)plVar10 + 1);
      } while (param_2 != plVar10);
      plVar10 = (long *)param_1[2];
      if (plVar10 != (long *)0x0) {
        plVar6 = (long *)plVar10[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
        while (plVar4 = plVar10, plVar10 = (long *)*plVar4, plVar10 != (long *)0x0) {
          plVar7 = (long *)plVar10[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar5);
          }
          else if (param_2 <= plVar7) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)param_2;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
          }
          if (plVar7 != plVar6) {
            lVar2 = *param_1;
            plVar9 = plVar10;
            if (*(long *)(lVar2 + (long)plVar7 * 8) == 0) {
              *(long **)(lVar2 + (long)plVar7 * 8) = plVar4;
              plVar6 = plVar7;
            }
            else {
              do {
                plVar8 = plVar9;
                plVar9 = (long *)*plVar8;
                if (plVar9 == (long *)0x0) break;
                plVar3 = (long *)plVar9[2];
              } while ((long *)plVar10[2] == plVar3 && plVar10[3] == plVar9[3]);
              *plVar4 = (long)plVar9;
              *plVar8 = **(long **)(lVar2 + (long)plVar7 * 8);
              **(long **)(lVar2 + (long)plVar7 * 8) = (long)plVar10;
              plVar10 = plVar4;
            }
          }
        }
      }
    }
    return plVar3;
  }
  if (param_2 < plVar10) {
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (param_2 < plVar10) goto LAB_10a35b0dc;
  }
  return plVar3;
}



/* Entry: 10a35b164; end: 10a35b2b3;  */

undefined8 * FUN_10a35b164(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      uVar11 = *param_2;
      puVar3[3] = param_2[1];
      puVar3[2] = uVar11;
      *puVar3 = 0;
      puVar3[1] = puVar3[3];
      plVar5 = param_1;
      FUN_10a35ae78(param_1,puVar3[3],puVar3 + 2);
      FUN_10a35afc4(param_1,puVar3,plVar5);
      return puVar3;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    puVar3 = (undefined8 *)*param_1;
    *param_1 = lVar2;
    if (puVar3 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    puVar4 = (undefined8 *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar4 * 8) = 0;
      puVar4 = (undefined8 *)((long)puVar4 + 1);
    } while (param_2 != puVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      puVar4 = (undefined8 *)plVar5[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        puVar4 = (undefined8 *)((ulong)puVar4 & uVar7);
      }
      else if (param_2 <= puVar4) {
        uVar1 = 0;
        if (param_2 != (undefined8 *)0x0) {
          uVar1 = (ulong)puVar4 / (ulong)param_2;
        }
        puVar4 = (undefined8 *)((long)puVar4 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar4 * 8) = param_1 + 2;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        puVar8 = (undefined8 *)plVar5[1];
        if (((ulong)param_2 & uVar7) == 0) {
          puVar8 = (undefined8 *)((ulong)puVar8 & uVar7);
        }
        else if (param_2 <= puVar8) {
          uVar1 = 0;
          if (param_2 != (undefined8 *)0x0) {
            uVar1 = (ulong)puVar8 / (ulong)param_2;
          }
          puVar8 = (undefined8 *)((long)puVar8 - uVar1 * (long)param_2);
        }
        if (puVar8 != puVar4) {
          lVar2 = *param_1;
          plVar10 = plVar5;
          if (*(long *)(lVar2 + (long)puVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)puVar8 * 8) = plVar6;
            puVar4 = puVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
              puVar3 = (undefined8 *)plVar10[2];
            } while ((undefined8 *)plVar5[2] == puVar3 && plVar5[3] == plVar10[3]);
            *plVar6 = (long)plVar10;
            *plVar9 = **(long **)(lVar2 + (long)puVar8 * 8);
            **(long **)(lVar2 + (long)puVar8 * 8) = (long)plVar5;
            plVar5 = plVar6;
          }
        }
      }
    }
  }
  return puVar3;
}



/* Entry: 10a35b2b4; end: 10a35b32b;  */

undefined8 * FUN_10a35b2b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  uVar2 = *param_2;
  puVar1[3] = param_2[1];
  puVar1[2] = uVar2;
  *puVar1 = 0;
  puVar1[1] = puVar1[3];
  uVar2 = param_1;
  FUN_10a35ae78(param_1,puVar1[3],puVar1 + 2);
  FUN_10a35afc4(param_1,puVar1,uVar2);
  return puVar1;
}



/* Entry: 10a35b32c; end: 10a35b647;  */

long * FUN_10a35b32c(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  
  plVar18 = (long *)param_1[1];
  if ((plVar18 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar18)) goto LAB_10a35b538;
  uVar8 = 1;
  if ((long *)0x2 < plVar18) {
    uVar8 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
  }
  plVar6 = (long *)(uVar8 | (long)plVar18 << 1);
  plVar7 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar7) {
    plVar6 = plVar7;
  }
  plVar7 = param_1;
  plVar10 = param_2;
  plVar15 = param_3;
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar18 = (long *)param_1[1];
    plVar7 = plVar6;
  }
  if (plVar18 > plVar6 || plVar6 == plVar18) {
    if (plVar18 <= plVar6) goto LAB_10a35b538;
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar18 <= plVar6) {
      plVar18 = (long *)param_1[1];
      goto LAB_10a35b538;
    }
    if (plVar6 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar18 = (long *)0x0;
      goto LAB_10a35b538;
    }
  }
  if ((ulong)plVar6 >> 0x3d == 0) {
    lVar4 = (long)plVar6 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar18 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar18 * 8) = 0;
      plVar18 = (long *)((long)plVar18 + 1);
    } while (plVar6 != plVar18);
    plVar7 = (long *)param_1[2];
    plVar18 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar10 = (long *)plVar7[1];
      uVar8 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar8) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar8);
      }
      else if (plVar6 <= plVar10) {
        uVar9 = 0;
        if (plVar6 != (long *)0x0) {
          uVar9 = (ulong)plVar10 / (ulong)plVar6;
        }
        plVar10 = (long *)((long)plVar10 - uVar9 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      while (plVar15 = plVar7, plVar7 = (long *)*plVar15, plVar7 != (long *)0x0) {
        plVar14 = (long *)plVar7[1];
        if (((ulong)plVar6 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar8);
        }
        else if (plVar6 <= plVar14) {
          uVar9 = 0;
          if (plVar6 != (long *)0x0) {
            uVar9 = (ulong)plVar14 / (ulong)plVar6;
          }
          plVar14 = (long *)((long)plVar14 - uVar9 * (long)plVar6);
        }
        if (plVar14 != plVar10) {
          lVar4 = *param_1;
          plVar17 = plVar7;
          if (*(long *)(lVar4 + (long)plVar14 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar14 * 8) = plVar15;
            plVar10 = plVar14;
          }
          else {
            do {
              plVar16 = plVar17;
              plVar17 = (long *)*plVar16;
              if (plVar17 == (long *)0x0) break;
            } while (plVar7[2] == plVar17[2] && plVar7[3] == plVar17[3]);
            *plVar15 = (long)plVar17;
            *plVar16 = **(long **)(lVar4 + (long)plVar14 * 8);
            **(long **)(lVar4 + (long)plVar14 * 8) = (long)plVar7;
            plVar7 = plVar15;
          }
        }
      }
    }
LAB_10a35b538:
    uVar8 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar8) == 0) {
      plVar6 = (long *)(uVar8 & (ulong)param_2);
    }
    else {
      plVar6 = param_2;
      if (plVar18 <= param_2) {
        uVar9 = 0;
        if (plVar18 != (long *)0x0) {
          uVar9 = (ulong)param_2 / (ulong)plVar18;
        }
        plVar6 = (long *)((long)param_2 - uVar9 * (long)plVar18);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)plVar6 * 8);
    if (plVar7 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      bVar12 = false;
      bVar1 = 0;
      do {
        plVar10 = plVar7;
        plVar7 = (long *)*plVar10;
        if (plVar7 == (long *)0x0) {
          return plVar10;
        }
        plVar15 = (long *)plVar7[1];
        if (((ulong)plVar18 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar15 & uVar8);
        }
        else {
          plVar14 = plVar15;
          if (plVar18 <= plVar15) {
            uVar9 = 0;
            if (plVar18 != (long *)0x0) {
              uVar9 = (ulong)plVar15 / (ulong)plVar18;
            }
            plVar14 = (long *)((long)plVar15 - uVar9 * (long)plVar18);
          }
        }
        if (plVar14 != plVar6) {
          return plVar10;
        }
        if (plVar15 == param_2) {
          bVar2 = plVar7[2] == *param_3 && plVar7[3] == param_3[1];
        }
        else {
          bVar2 = false;
        }
        bVar3 = bVar2 != bVar12;
        bVar2 = (bool)(bVar1 & bVar3);
        bVar12 = (bool)(bVar12 | bVar3);
        bVar1 = bVar1 | bVar3;
      } while (!bVar2);
    }
    return plVar10;
  }
  func_0x000109ffded8();
  uVar8 = plVar7[1];
  uVar9 = plVar10[1];
  uVar11 = uVar8 - 1;
  if ((uVar8 & uVar11) == 0) {
    uVar9 = uVar11 & uVar9;
    if (plVar15 != (long *)0x0) goto LAB_10a35b670;
LAB_10a35b6ac:
    plVar18 = plVar7 + 2;
    *plVar10 = *plVar18;
    *plVar18 = (long)plVar10;
    *(long **)(*plVar7 + uVar9 * 8) = plVar18;
    if (*plVar10 == 0) goto LAB_10a35b708;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar8 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar8 <= uVar13) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar9 * uVar8;
    }
  }
  else {
    if (uVar8 <= uVar9) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar13 * uVar8;
    }
    if (plVar15 == (long *)0x0) goto LAB_10a35b6ac;
LAB_10a35b670:
    *plVar10 = *plVar15;
    *plVar15 = (long)plVar10;
    if (*plVar10 == 0) goto LAB_10a35b708;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar8 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar8 <= uVar13) {
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar11 * uVar8;
    }
    if (uVar13 == uVar9) goto LAB_10a35b708;
  }
  *(long **)(*plVar7 + uVar13 * 8) = plVar10;
LAB_10a35b708:
  plVar7[3] = plVar7[3] + 1;
  return plVar7;
}



/* Entry: 10a35b648; end: 10a35b717;  */

void FUN_10a35b648(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a35b670;
LAB_10a35b6ac:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a35b708;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a35b6ac;
LAB_10a35b670:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a35b708;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a35b708;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a35b708:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a35b718; end: 10a35b7ef;  */

void FUN_10a35b718(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a009538(appuStack_150,&DAT_10f64fbc6);
  appuStack_150[0] = &PTR_FUN_110bc65e0;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bc65e0;
  ___cxa_throw(puVar2,&PTR_DAT_110bc65b8,FUN_10a35b7f0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a35b7d4);
  (*pcVar1)();
}



/* Entry: 10a35b7f0; end: 10a35b7f3;  */

void FUN_10a35b7f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a35b7f4; end: 10a35b807;  */

void FUN_10a35b7f4(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a35b808; end: 10a35b817;  */

void FUN_10a35b808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc6608;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a35b818; end: 10a35b837;  */

void FUN_10a35b818(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc6608;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a35b838; end: 10a35b83f;  */

void FUN_10a35b838(void)

{
  return;
}



/* Entry: 10a35b840; end: 10a35bae7;  */

long FUN_10a35b840(long param_1)

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



/* Entry: 10a35bae8; end: 10a35bb1b;  */

void FUN_10a35bae8(long param_1)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  code **ppcVar9;
  code **ppcVar10;
  long lVar11;
  undefined8 *puVar12;
  code **ppcVar13;
  code *pcVar14;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined8 *apuStack_70 [6];
  code *pcStack_40;
  long lStack_38;
  long in_stack_ffffffffffffffd0;
  
  lVar11 = *(long *)(param_1 + 0x10);
  plVar8 = *(long **)(lVar11 + 0x48);
  if (plVar8 == (long *)0x0) {
    return;
  }
  ppcVar13 = (code **)(lVar11 + 8);
  if ((plVar8 != (long *)0x0) && ((char)plVar8[8] == '\x02')) {
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = plVar8;
    ppcVar9 = ppcVar13;
    FUN_10a688b40();
    if (plVar5 == (long *)0x0) {
      ppcVar10 = (code **)0x0;
      ppuVar6 = (undefined8 **)0x0;
      if (ppcVar9 != (code **)0x0) {
        ppuStack_98 = (undefined8 **)plVar8[1];
        lStack_a0 = *plVar8;
        if (plVar8[1] != 0) {
          plVar8 = (long *)(plVar8[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(char *)(lVar11 + 0x1f) < '\0') {
          func_0x000107c3192c(&ppuStack_90,*ppcVar13,*(undefined8 *)(lVar11 + 0x10));
        }
        else {
          uStack_88 = *(undefined8 *)(lVar11 + 0x10);
          ppuStack_90 = (undefined8 **)*ppcVar13;
          lStack_80 = *(long *)(lVar11 + 0x18);
        }
        pcStack_78 = FUN_10a05aec4;
        ppcVar13 = &pcStack_78;
        FUN_10a05af2c(apuStack_70,&PTR_FUN_110b9f388,&lStack_a0);
        ppcVar10 = &pcStack_78;
        FUN_10a4634ec(ppcVar9,ppcVar10);
        ppuVar6 = apuStack_70;
        (*(code *)*apuStack_70[0])();
        if (lStack_80 < 0) {
          ppuVar6 = ppuStack_90;
          __ZdlPv();
        }
        ppuVar7 = ppuStack_98;
        if (ppuStack_98 != (undefined8 **)0x0) {
          ppuVar1 = ppuStack_98 + 1;
          do {
            puVar12 = *ppuVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar3) {
              *ppuVar1 = (undefined8 *)((long)puVar12 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar12 == (undefined8 *)0x0) {
            (*(code *)(*ppuStack_98)[2])(ppuStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar6 = ppuVar7;
          }
        }
      }
    }
    else {
      *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
      ppuVar6 = (undefined8 **)*plVar8;
      ppcVar10 = ppcVar13;
      FUN_10a05aca4(ppuVar6,ppcVar13);
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
    ppcStack_c0 = ppcVar13;
    ppuStack_b8 = ppuVar6;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&puStack_d0,ppuVar7 + 1,*ppuVar7);
    func_0x000109884820(&puStack_c8,&puStack_d0,*ppuVar7);
    if (puStack_d0 != (undefined8 *)0x0) {
      (**(code **)*puStack_d0)();
    }
    (**(code **)(**ppuVar7 + 0x30))(&puStack_d0);
    FUN_10a05adc0(*ppuVar7,&puStack_d0,&puStack_c8,ppcVar10);
    if (puStack_d0 != (undefined8 *)0x0) {
      (**(code **)*puStack_d0)();
    }
    if (puStack_c8 != (undefined8 *)0x0) {
      (**(code **)*puStack_c8)();
    }
    return;
  }
  if ((plVar8 != (long *)0x0) && ((char)plVar8[8] == '\x01')) {
    pcVar14 = (code *)*plVar8;
    if (*(char *)(lVar11 + 0x1f) < '\0') {
      func_0x000107c3192c(&pcStack_40,*ppcVar13,*(undefined8 *)(lVar11 + 0x10));
    }
    else {
      lStack_38 = *(undefined8 *)(lVar11 + 0x10);
      pcStack_40 = *ppcVar13;
      in_stack_ffffffffffffffd0 = *(long *)(lVar11 + 0x18);
    }
    (*pcVar14)(&pcStack_40,plVar8);
    if (in_stack_ffffffffffffffd0 < 0) {
      __ZdlPv(pcStack_40);
    }
    return;
  }
  return;
}



/* Entry: 10a35bb1c; end: 10a35bb97;  */

void FUN_10a35bb1c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  pcVar4 = (code *)*param_1;
  lStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (*pcVar4)(&uStack_30,param_1);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a35bb98; end: 10a35bd1b;  */

void FUN_10a35bb98(code **param_1,code **param_2)

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
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (ppcVar5 == (code **)0x0) {
    ppcVar9 = (code **)0x0;
    pppuStack_b8 = (undefined ***)0x0;
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
      pcStack_88 = *param_2;
      pppuVar6 = (undefined ***)param_2[1];
      if (pppuVar6 != (undefined ***)0x0) {
        pppuVar7 = pppuVar6 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar3) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_78 = FUN_10a35bf14;
      ppuStack_70 = &PTR_FUN_110bc87c0;
      uStack_98 = 0;
      uStack_90 = 0;
      if (pppuVar6 != (undefined ***)0x0) {
        pppuVar7 = pppuVar6 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar3) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppcVar5 = &pcStack_78;
      ppcVar9 = &pcStack_78;
      pppuStack_80 = pppuVar6;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar6;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      pppuStack_b8 = pppuVar7;
      if (pppuVar6 != (undefined ***)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuStack_b8 = pppuVar6;
      }
    }
  }
  else {
    *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    FUN_10a35bd1c(pppuVar6,param_2);
    iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
    *(int *)((long)ppcVar5 + 4) = iVar4;
    pppuStack_b8 = pppuVar6;
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
  FUN_10a35be08(&uStack_98);
  pppuVar6 = pppuStack_b8;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a35bd1c;
  ppcStack_c0 = ppcVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar6 + 1,*pppuVar6);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar6);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar6 + 0x30))(&puStack_d0);
  FUN_10a35be34(*pppuVar6,&puStack_d0,&puStack_c8,ppcVar9);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a35bd1c; end: 10a35be07;  */

void FUN_10a35bd1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a35be34(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a35be08; end: 10a35be33;  */

long FUN_10a35be08(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10a35be34; end: 10a35bf13;  */

void FUN_10a35be34(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  FUN_10a26f500(aiStack_70,param_1,param_4);
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



/* Entry: 10a35bf14; end: 10a35bf23;  */

void FUN_10a35bf14(long param_1)

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
  FUN_10a35be34(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a35bf24; end: 10a35bf4f;  */

long FUN_10a35bf24(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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



/* Entry: 10a35bf50; end: 10a35c037;  */

void FUN_10a35bf50(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc87c0;
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
  return;
}



/* Entry: 10a35c038; end: 10a35c253;  */

undefined1  [16] FUN_10a35c038(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  uVar10 = param_2[1];
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x25 = uVar3 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar7 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0)) {
      do {
        uVar7 = plVar8[1];
        if (uVar7 == uVar10) {
          if (plVar8[2] == *param_2 && plVar8[3] == uVar10) {
            uVar2 = 0;
            goto LAB_10a35c21c;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x25) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  lVar6 = *param_3;
  lVar12 = param_4[1];
  lVar11 = *param_4;
  plVar8[3] = param_3[1];
  plVar8[2] = lVar6;
  plVar8[5] = lVar12;
  plVar8[4] = lVar11;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a10d18c(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a35c20c;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10a35c20c:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a35c21c:
  auVar13._8_8_ = uVar2;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 10a35c254; end: 10a35c2fb;  */

long * FUN_10a35c254(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = param_2[1];
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar3) {
            if (plVar6[2] == *param_2 && plVar6[3] == uVar3) {
              return plVar6;
            }
          }
          else {
            if ((uVar2 & uVar4) == 0) {
              uVar7 = uVar7 & uVar4;
            }
            else if (uVar2 <= uVar7) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar1 * uVar2;
            }
            if (uVar7 != uVar5) {
              return (long *)0x0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 10a35c2fc; end: 10a35c353;  */

long FUN_10a35c2fc(long param_1)

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



/* Entry: 10a35c354; end: 10a35c427;  */

void FUN_10a35c354(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a35c4e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a32c8a0(plVar4);
  func_0x00010989a420(param_1,param_2,plVar4[0x26],
                      (plVar4[0x27] - plVar4[0x26] >> 3) * -0x5555555555555555);
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



/* Entry: 10a35c428; end: 10a35c4df;  */

void FUN_10a35c428(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a35c548(param_1,param_2,0x10a32cbc8,0,param_3,param_4,param_5);
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



/* Entry: 10a35c4e0; end: 10a35c547;  */

void FUN_10a35c4e0(undefined **param_1,undefined **param_2,undefined **param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined1 auStack_90 [24];
  undefined1 *puStack_78;
  
  ppuVar2 = param_1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar2;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bc8020;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = (undefined4 *)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = param_2;
  FUN_10a35c604(param_2,param_5);
  FUN_10a35c66c(param_7);
  func_0x000109898f04(auStack_90,param_2,param_6);
  plVar1 = (long *)((long)ppuVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(undefined ***)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*(code *)param_3)(plVar1,auStack_90);
  puStack_78 = auStack_90;
  FUN_10a0426d8(&puStack_78);
  *puVar3 = 0;
  return;
}



/* Entry: 10a35c548; end: 10a35c603;  */

void FUN_10a35c548(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 *puStack_58;
  
  lVar2 = param_2;
  FUN_10a35c604(param_2,param_5);
  FUN_10a35c66c(param_7);
  func_0x000109898f04(auStack_70,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_70);
  puStack_58 = auStack_70;
  FUN_10a0426d8(&puStack_58);
  *param_1 = 0;
  return;
}



/* Entry: 10a35c604; end: 10a35c66b;  */

void FUN_10a35c604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar8 = param_1;
  func_0x000109898688();
  if (lVar8 != 0) {
    FUN_10a053854(param_1,lVar8);
    if (param_1 != 0) {
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0,puVar3);
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
  FUN_10a35c4e0(plVar4,uVar7);
  FUN_10a052e3c(param_4);
  func_0x00010a32c8a0(plVar6);
  func_0x00010989a420(extraout_x8,plVar4,plVar6[0x23],
                      (plVar6[0x24] - plVar6[0x23] >> 3) * -0x5555555555555555);
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_98 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_b8 = lVar8;
          lStack_b0 = lVar8;
          lStack_a8 = lVar8;
          lStack_a0 = lVar14;
          func_0x00010988c1b8(&lStack_b8);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a35c66c; end: 10a35c68f;  */

void FUN_10a35c66c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
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
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
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
  FUN_10a35c4e0(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  func_0x00010a32c8a0(plVar5);
  func_0x00010989a420(extraout_x8,plVar3,plVar5[0x23],
                      (plVar5[0x24] - plVar5[0x23] >> 3) * -0x5555555555555555);
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



/* Entry: 10a35c690; end: 10a35c763;  */

void FUN_10a35c690(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a35c4e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a32c8a0(plVar4);
  func_0x00010989a420(param_1,param_2,plVar4[0x23],
                      (plVar4[0x24] - plVar4[0x23] >> 3) * -0x5555555555555555);
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



/* Entry: 10a35c764; end: 10a35c81b;  */

void FUN_10a35c764(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a35c548(param_1,param_2,FUN_10a32cb38,0,param_3,param_4,param_5);
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



/* Entry: 10a35c81c; end: 10a35c8ef;  */

void FUN_10a35c81c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a35c4e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a32c8a0(plVar4);
  func_0x00010989a420(param_1,param_2,plVar4[0x29],
                      (plVar4[0x2a] - plVar4[0x29] >> 3) * -0x5555555555555555);
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



/* Entry: 10a35c8f0; end: 10a35c9a7;  */

void FUN_10a35c8f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a35c548(param_1,param_2,0x10a32cb68,0,param_3,param_4,param_5);
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



/* Entry: 10a35c9a8; end: 10a35ca7b;  */

void FUN_10a35c9a8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a35c4e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a32c8a0(plVar4);
  func_0x00010989a420(param_1,param_2,plVar4[0x2c],
                      (plVar4[0x2d] - plVar4[0x2c] >> 3) * -0x5555555555555555);
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



/* Entry: 10a35ca7c; end: 10a35cb33;  */

void FUN_10a35ca7c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a35c548(param_1,param_2,0x10a32cb98,0,param_3,param_4,param_5);
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



/* Entry: 10a35cb34; end: 10a35cbf7;  */

void FUN_10a35cb34(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a35c4e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a32c8a0(param_2);
  iVar2 = *(int *)((long)param_2 + 0x10c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
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
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a35cbf8; end: 10a35ccb7;  */

void FUN_10a35cbf8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a35c604(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x10c) = (int)param_2;
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



/* Entry: 10a35ccb8; end: 10a35ce87;  */

void FUN_10a35ccb8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x00010a34e8b4(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a35ce88; end: 10a35cf23;  */

void FUN_10a35ce88(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a34e8b4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a35cf24; end: 10a35d1c7;  */

void FUN_10a35cf24(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  plVar2 = (long *)0x70;
  __Znwm();
  *plVar2 = 0;
  plVar2[1] = 0;
  func_0x000107c2b054(plVar2 + 2,&UNK_10f64f517);
  lVar8 = *param_2;
  plVar2[6] = param_2[1];
  plVar2[5] = lVar8;
  plVar2[7] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  lVar8 = param_2[3];
  plVar2[9] = param_2[4];
  plVar2[8] = lVar8;
  plVar2[10] = param_2[5];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  lVar8 = param_2[6];
  plVar2[0xc] = param_2[7];
  plVar2[0xb] = lVar8;
  plVar2[0xd] = param_2[8];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  plVar7 = param_1;
  func_0x000107c2b05c(param_1,plVar2 + 2);
  plVar2[1] = (long)plVar7;
  plVar7 = param_1;
  func_0x000107c2b05c(param_1,plVar2 + 2);
  plVar2[1] = (long)plVar7;
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      plVar11 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      plVar11 = plVar7;
      if (plVar9 <= plVar7) {
        uVar5 = 0;
        if (plVar9 != (long *)0x0) {
          uVar5 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar11 = (long *)((long)plVar7 - uVar5 * (long)plVar9);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar11 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar7) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,plVar2 + 2);
          if (((ulong)plVar4 & 1) != 0) {
            func_0x00010a34e8b4(plVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(plVar2);
            return;
          }
        }
        else {
          if (((ulong)plVar9 & uVar10) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar10);
          }
          else if (plVar9 <= plVar4) {
            uVar5 = 0;
            if (plVar9 != (long *)0x0) {
              uVar5 = (ulong)plVar4 / (ulong)plVar9;
            }
            plVar4 = (long *)((long)plVar4 - uVar5 * (long)plVar9);
          }
          if (plVar4 != plVar11) break;
        }
      }
    }
  }
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar10 = 1;
    if ((long *)0x2 < plVar9) {
      uVar10 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar9 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    FUN_10a35ccb8(param_1,uVar10);
  }
  uVar10 = param_1[1];
  uVar6 = plVar2[1];
  uVar5 = uVar10 - 1;
  if ((uVar10 & uVar5) == 0) {
    uVar6 = uVar5 & uVar6;
  }
  else if (uVar10 <= uVar6) {
    uVar1 = 0;
    if (uVar10 != 0) {
      uVar1 = uVar6 / uVar10;
    }
    uVar6 = uVar6 - uVar1 * uVar10;
  }
  lVar8 = *param_1;
  plVar7 = *(long **)(lVar8 + uVar6 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar2 = *plVar7;
    *plVar7 = (long)plVar2;
    *(long **)(lVar8 + uVar6 * 8) = plVar7;
    if (*plVar2 == 0) goto LAB_10a35d160;
    uVar6 = *(ulong *)(*plVar2 + 8);
    if ((uVar10 & uVar5) == 0) {
      uVar6 = uVar6 & uVar5;
    }
    else if (uVar10 <= uVar6) {
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = uVar6 / uVar10;
      }
      uVar6 = uVar6 - uVar5 * uVar10;
    }
    plVar7 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar2 = *plVar7;
  }
  *plVar7 = (long)plVar2;
LAB_10a35d160:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a35d1c8; end: 10a35d1d7;  */

void FUN_10a35d1c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc66a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a35d1d8; end: 10a35d1f7;  */

void FUN_10a35d1d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc66a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a35d1f8; end: 10a35d1ff;  */

void FUN_10a35d1f8(void)

{
  return;
}



/* Entry: 10a35d200; end: 10a35d3c7;  */

long FUN_10a35d200(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a35d3c8; end: 10a35d7ff;  */

void FUN_10a35d3c8(long *param_1,long *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long extraout_x8;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  byte bVar18;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  long *plStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  plVar9 = param_2 + 2;
  plVar13 = param_1;
  func_0x000107c2b05c();
  param_2[1] = (long)plVar13;
  plVar14 = (long *)param_1[1];
  if ((plVar14 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar14 < (float)(param_1[3] + 1))) {
    uVar15 = 1;
    if ((long *)0x2 < plVar14) {
      uVar15 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
    }
    plVar8 = (long *)(uVar15 | (long)plVar14 << 1);
    plVar12 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar8 <= plVar12) {
      plVar8 = plVar12;
    }
    plVar12 = plVar13;
    if ((long)plVar8 - 1U == 0) {
      plVar8 = (long *)0x2;
    }
    else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar14 = (long *)param_1[1];
      plVar12 = plVar8;
    }
    if (plVar14 < plVar8) {
LAB_10a35d484:
      if ((ulong)plVar8 >> 0x3d != 0) {
        func_0x000109ffded8();
        pcStack_68 = FUN_10a35d800;
        uVar15 = plVar12[2];
        plVar13 = (long *)*plVar12;
        puStack_70 = &stack0xfffffffffffffff0;
        if ((ulong)((long)(uVar15 - (long)plVar13) >> 6) < param_4) {
          plVar14 = plVar12;
          plVar8 = plVar9;
          if (plVar13 != (long *)0x0) {
            plVar12[1] = (long)plVar13;
            __ZdlPv();
            uVar15 = 0;
            *plVar12 = 0;
            plVar12[1] = 0;
            plVar12[2] = 0;
            plVar14 = plVar13;
          }
          if (param_4 >> 0x3a != 0) {
            FUN_10a0435cc();
            pcStack_a8 = FUN_10a35d928;
            plStack_c0 = plVar9;
            plStack_b8 = plVar12;
            ppuStack_b0 = &puStack_70;
            (**(code **)(*plVar14 + 0x1d8))(extraout_x8);
            if (*(char *)(extraout_x8 + 0x10) == '\x01') {
              uVar15 = *(ulong *)(extraout_x8 + 8);
              if ((uVar15 == 0) || (0x3f < uVar15 && (uVar15 & 0x3f) == 0)) {
                return;
              }
              FUN_109ffe064(auStack_108,*plVar8,plVar8[1]);
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_f0,&UNK_10f6854a8,auStack_108);
              FUN_10a012db0(auStack_d8,auStack_f0,&UNK_10f6854b4);
              FUN_10a0029c0(auStack_d8);
            }
            else {
              FUN_109ffe064(auStack_108,*plVar8,plVar8[1]);
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_f0,&UNK_10f6854a8,auStack_108);
              FUN_10a012db0(auStack_d8,auStack_f0,&UNK_10f63cc0e);
              FUN_10a0029c0(auStack_d8);
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a35da04);
            (*pcVar2)();
          }
          uVar1 = (long)uVar15 >> 5;
          if ((ulong)((long)uVar15 >> 5) <= param_4) {
            uVar1 = param_4;
          }
          if (0x7fffffffffffffbf < uVar15) {
            uVar1 = 0x3ffffffffffffff;
          }
          FUN_10a1871b8(plVar12,uVar1);
          lVar5 = plVar12[1];
          param_3 = param_3 - (long)plVar9;
          if (param_3 != 0) {
            _memmove(lVar5,plVar9,param_3);
          }
          lVar5 = lVar5 + param_3;
        }
        else {
          plVar14 = (long *)plVar12[1];
          if ((ulong)((long)plVar14 - (long)plVar13 >> 6) < param_4) {
            lVar5 = (long)plVar9 + ((long)plVar14 - (long)plVar13);
            if (plVar14 != plVar13) {
              _memmove(plVar13,plVar9);
              plVar14 = (long *)plVar12[1];
            }
            param_3 = param_3 - lVar5;
            if (param_3 != 0) {
              _memmove(plVar14,lVar5,param_3);
            }
            lVar5 = (long)plVar14 + param_3;
          }
          else {
            param_3 = param_3 - (long)plVar9;
            if (param_3 != 0) {
              _memmove(plVar13,plVar9,param_3);
            }
            lVar5 = (long)plVar13 + param_3;
          }
        }
        plVar12[1] = lVar5;
        return;
      }
      lVar5 = (long)plVar8 << 3;
      __Znwm();
      lVar6 = *param_1;
      *param_1 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      plVar9 = (long *)0x0;
      param_1[1] = (long)plVar8;
      do {
        *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
        plVar9 = (long *)((long)plVar9 + 1);
      } while (plVar8 != plVar9);
      plVar9 = (long *)param_1[2];
      if (plVar9 != (long *)0x0) {
        plVar14 = (long *)plVar9[1];
        uVar15 = (long)plVar8 - 1;
        if (((ulong)plVar8 & uVar15) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar15);
        }
        else if (plVar8 <= plVar14) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)plVar14 / (ulong)plVar8;
          }
          plVar14 = (long *)((long)plVar14 - uVar1 * (long)plVar8);
        }
        *(long **)(*param_1 + (long)plVar14 * 8) = param_1 + 2;
        while (plVar12 = plVar9, plVar9 = (long *)*plVar12, plVar9 != (long *)0x0) {
          plVar17 = (long *)plVar9[1];
          if (((ulong)plVar8 & uVar15) == 0) {
            plVar17 = (long *)((ulong)plVar17 & uVar15);
          }
          else if (plVar8 <= plVar17) {
            uVar1 = 0;
            if (plVar8 != (long *)0x0) {
              uVar1 = (ulong)plVar17 / (ulong)plVar8;
            }
            plVar17 = (long *)((long)plVar17 - uVar1 * (long)plVar8);
          }
          if (plVar17 != plVar14) {
            lVar5 = *param_1;
            if (*(long *)(lVar5 + (long)plVar17 * 8) == 0) {
              *(long **)(lVar5 + (long)plVar17 * 8) = plVar12;
              plVar14 = plVar17;
            }
            else {
              lVar6 = *plVar9;
              plVar11 = plVar9;
              if (lVar6 == 0) {
                plVar10 = (long *)0x0;
              }
              else {
                do {
                  plVar7 = param_1;
                  func_0x000107c2b068(param_1,plVar9 + 2,lVar6 + 0x10);
                  plVar10 = (long *)*plVar11;
                  if ((int)plVar7 == 0) goto LAB_10a35d5e8;
                  lVar6 = *plVar10;
                  plVar11 = plVar10;
                } while (lVar6 != 0);
                plVar10 = (long *)0x0;
LAB_10a35d5e8:
                lVar5 = *param_1;
              }
              *plVar12 = (long)plVar10;
              *plVar11 = **(long **)(lVar5 + (long)plVar17 * 8);
              **(undefined8 **)(lVar5 + (long)plVar17 * 8) = plVar9;
              plVar9 = plVar12;
            }
          }
        }
      }
    }
    else if (plVar8 < plVar14) {
      plVar12 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar12) {
        plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
      }
      if (plVar8 <= plVar12) {
        plVar8 = plVar12;
      }
      if (plVar8 < plVar14) {
        if (plVar8 != (long *)0x0) goto LAB_10a35d484;
        lVar5 = *param_1;
        *param_1 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
      }
    }
    plVar14 = (long *)param_1[1];
  }
  bVar18 = POPCOUNT((char)plVar14) + POPCOUNT((char)((ulong)plVar14 >> 8)) +
           POPCOUNT((char)((ulong)plVar14 >> 0x10)) + POPCOUNT((char)((ulong)plVar14 >> 0x18)) +
           POPCOUNT((char)((ulong)plVar14 >> 0x20)) + POPCOUNT((char)((ulong)plVar14 >> 0x28)) +
           POPCOUNT((char)((ulong)plVar14 >> 0x30)) + POPCOUNT((char)((ulong)plVar14 >> 0x38));
  uVar15 = (long)plVar14 - 1;
  if (((ulong)plVar14 & uVar15) == 0) {
    plVar9 = (long *)(uVar15 & (ulong)plVar13);
  }
  else {
    plVar9 = plVar13;
    if (plVar14 <= plVar13) {
      uVar1 = 0;
      if (plVar14 != (long *)0x0) {
        uVar1 = (ulong)plVar13 / (ulong)plVar14;
      }
      plVar9 = (long *)((long)plVar13 - uVar1 * (long)plVar14);
    }
  }
  plVar8 = *(long **)(*param_1 + (long)plVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = *plVar8, lVar5 != 0)) {
    uVar16 = 0;
    bVar18 = 0;
    do {
      plVar12 = *(long **)(lVar5 + 8);
      if (((ulong)plVar14 & uVar15) == 0) {
        plVar17 = (long *)((ulong)plVar12 & uVar15);
      }
      else {
        plVar17 = plVar12;
        if (plVar14 <= plVar12) {
          uVar1 = 0;
          if (plVar14 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar14;
          }
          plVar17 = (long *)((long)plVar12 - uVar1 * (long)plVar14);
        }
      }
      if (plVar17 != plVar9) break;
      if (plVar12 == plVar13) {
        plVar12 = param_1;
        func_0x000107c2b068(param_1,lVar5 + 0x10,param_2 + 2);
        uVar4 = (uint)plVar12;
      }
      else {
        uVar4 = 0;
      }
      bVar3 = uVar4 != uVar16;
      if ((bool)(bVar18 & bVar3)) break;
      uVar16 = uVar16 | bVar3;
      bVar18 = bVar18 | bVar3;
      plVar8 = (long *)*plVar8;
      lVar5 = *plVar8;
    } while (lVar5 != 0);
    plVar14 = (long *)param_1[1];
    bVar18 = POPCOUNT((char)plVar14) + POPCOUNT((char)((ulong)plVar14 >> 8)) +
             POPCOUNT((char)((ulong)plVar14 >> 0x10)) + POPCOUNT((char)((ulong)plVar14 >> 0x18)) +
             POPCOUNT((char)((ulong)plVar14 >> 0x20)) + POPCOUNT((char)((ulong)plVar14 >> 0x28)) +
             POPCOUNT((char)((ulong)plVar14 >> 0x30)) + POPCOUNT((char)((ulong)plVar14 >> 0x38));
  }
  plVar9 = (long *)param_2[1];
  if (bVar18 < 2) {
    plVar9 = (long *)((long)plVar14 - 1U & (ulong)plVar9);
  }
  else if (plVar14 <= plVar9) {
    uVar15 = 0;
    if (plVar14 != (long *)0x0) {
      uVar15 = (ulong)plVar9 / (ulong)plVar14;
    }
    plVar9 = (long *)((long)plVar9 - uVar15 * (long)plVar14);
  }
  if (plVar8 == (long *)0x0) {
    plVar13 = param_1 + 2;
    *param_2 = *plVar13;
    *plVar13 = (long)param_2;
    *(long **)(*param_1 + (long)plVar9 * 8) = plVar13;
    if (*param_2 == 0) goto LAB_10a35d7d4;
    plVar13 = *(long **)(*param_2 + 8);
    if (bVar18 < 2) {
      plVar13 = (long *)((ulong)plVar13 & (long)plVar14 - 1U);
    }
    else if (plVar14 <= plVar13) {
      uVar15 = 0;
      if (plVar14 != (long *)0x0) {
        uVar15 = (ulong)plVar13 / (ulong)plVar14;
      }
      plVar13 = (long *)((long)plVar13 - uVar15 * (long)plVar14);
    }
  }
  else {
    *param_2 = *plVar8;
    *plVar8 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a35d7d4;
    plVar13 = *(long **)(*param_2 + 8);
    if (bVar18 < 2) {
      plVar13 = (long *)((ulong)plVar13 & (long)plVar14 - 1U);
    }
    else if (plVar14 <= plVar13) {
      uVar15 = 0;
      if (plVar14 != (long *)0x0) {
        uVar15 = (ulong)plVar13 / (ulong)plVar14;
      }
      plVar13 = (long *)((long)plVar13 - uVar15 * (long)plVar14);
    }
    if (plVar13 == plVar9) goto LAB_10a35d7d4;
  }
  *(long **)(*param_1 + (long)plVar13 * 8) = param_2;
LAB_10a35d7d4:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a35d800; end: 10a35d927;  */

void FUN_10a35d800(long *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 *puStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar4 = param_1[2];
  plVar6 = (long *)*param_1;
  if ((ulong)((long)(uVar4 - (long)plVar6) >> 6) < param_4) {
    plVar7 = param_1;
    puVar3 = param_2;
    if (plVar6 != (long *)0x0) {
      param_1[1] = (long)plVar6;
      __ZdlPv();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar7 = plVar6;
    }
    if (param_4 >> 0x3a != 0) {
      FUN_10a0435cc();
      pcStack_48 = FUN_10a35d928;
      puStack_60 = param_2;
      plStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      (**(code **)(*plVar7 + 0x1d8))(extraout_x8);
      if (*(char *)(extraout_x8 + 0x10) == '\x01') {
        uVar4 = *(ulong *)(extraout_x8 + 8);
        if ((uVar4 == 0) || (0x3f < uVar4 && (uVar4 & 0x3f) == 0)) {
          return;
        }
        FUN_109ffe064(auStack_a8,*puVar3,puVar3[1]);
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_90,&UNK_10f6854a8,auStack_a8);
        FUN_10a012db0(auStack_78,auStack_90,&UNK_10f6854b4);
        FUN_10a0029c0(auStack_78);
      }
      else {
        FUN_109ffe064(auStack_a8,*puVar3,puVar3[1]);
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_90,&UNK_10f6854a8,auStack_a8);
        FUN_10a012db0(auStack_78,auStack_90,&UNK_10f63cc0e);
        FUN_10a0029c0(auStack_78);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a35da04);
      (*pcVar2)();
    }
    uVar1 = (long)uVar4 >> 5;
    if ((ulong)((long)uVar4 >> 5) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar1 = 0x3ffffffffffffff;
    }
    FUN_10a1871b8(param_1,uVar1);
    lVar5 = param_1[1];
    param_3 = param_3 - (long)param_2;
    if (param_3 != 0) {
      _memmove(lVar5,param_2,param_3);
    }
    lVar5 = lVar5 + param_3;
  }
  else {
    plVar7 = (long *)param_1[1];
    if ((ulong)((long)plVar7 - (long)plVar6 >> 6) < param_4) {
      lVar5 = (long)param_2 + ((long)plVar7 - (long)plVar6);
      if (plVar7 != plVar6) {
        _memmove(plVar6,param_2);
        plVar7 = (long *)param_1[1];
      }
      param_3 = param_3 - lVar5;
      if (param_3 != 0) {
        _memmove(plVar7,lVar5,param_3);
      }
      lVar5 = (long)plVar7 + param_3;
    }
    else {
      param_3 = param_3 - (long)param_2;
      if (param_3 != 0) {
        _memmove(plVar6,param_2,param_3);
      }
      lVar5 = (long)plVar6 + param_3;
    }
  }
  param_1[1] = lVar5;
  return;
}



/* Entry: 10a35d928; end: 10a35da5b;  */

void FUN_10a35d928(long param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(*param_2 + 0x1d8))(param_1);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 == 0) || (0x3f < uVar2 && (uVar2 & 0x3f) == 0)) {
      return;
    }
    FUN_109ffe064(auStack_68,*param_3,param_3[1]);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,auStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
    FUN_10a0029c0(auStack_38);
  }
  else {
    FUN_109ffe064(auStack_68,*param_3,param_3[1]);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,auStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a35da04);
  (*pcVar1)();
}



/* Entry: 10a35da5c; end: 10a35daf3;  */

undefined8 * FUN_10a35da5c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  *param_1 = *param_2;
  if (lVar5 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      return param_1;
    }
  }
  puVar4 = (undefined8 *)0x0;
  FUN_10a043ecc();
  plVar6 = (long *)puVar4[1];
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
  return puVar4;
}



/* Entry: 10a35daf4; end: 10a35dbef;  */

undefined1  [16] FUN_10a35daf4(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc8520;
  puVar1 = &UNK_10f64efef;
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
    ppuStack_40 = &PTR_DAT_110bc8520;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c48fb0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a35dbf0; end: 10a35dc53;  */

ulong FUN_10a35dbf0(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a35dc54);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a35dc54,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a35dc54; end: 10a35dd37;  */

void FUN_10a35dc54(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a35dd38(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a32e63c();
  uVar7 = plVar5[1];
  plVar1 = (long *)*plVar5;
  if (-1 < (char)*(byte *)((long)plVar5 + 0x17)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x17);
    plVar1 = plVar5;
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



/* Entry: 10a35dd38; end: 10a35de03;  */

undefined ** FUN_10a35dd38(undefined **param_1,undefined **param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = param_1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a052c2c();
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a35de04);
      (*pcVar1)();
    }
    FUN_10a054dac(ppuVar2,*param_2,FUN_10a35de04,2,ppuVar2[8]);
  }
  return ppuVar2;
}



/* Entry: 10a35de04; end: 10a35e28f;  */

void FUN_10a35de04(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
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
  FUN_10a35dd38(param_2,param_3);
  FUN_10a0743b0(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
LAB_10a35e1a0:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a35e1a4);
    (*pcVar3)();
  }
  uVar19 = *(ulong *)(param_4 + 2);
  if (0x7fefffffffffffff < (uVar19 & 0x7fffffffffffffff)) {
    uVar19 = 0;
  }
  lVar11 = plVar6[0x16];
  plStack_a8 = *(long **)(lVar11 + 0x30);
  ppuStack_b0 = *(undefined8 ***)(lVar11 + 0x28);
  uStack_98 = *(undefined8 *)(lVar11 + 0x40);
  uStack_a0 = *(undefined8 *)(lVar11 + 0x38);
  uStack_90 = *(undefined8 *)(lVar11 + 0x48);
  FUN_10a54c8bc(&puStack_88,uVar19,&ppuStack_b0);
  FUN_10a54cbac(&puStack_d0,&puStack_88,0);
  puVar7 = puStack_c8;
  for (puVar14 = puStack_d0; puVar14 != puVar7; puVar14 = puVar14 + 0xb) {
    FUN_10a54d45c(0,uVar19,puVar14);
    lVar16 = puVar14[9];
    for (lVar11 = puVar14[8]; lVar11 != lVar16; lVar11 = lVar11 + 0x40) {
      FUN_10a54d45c(0,uVar19,lVar11);
    }
  }
  ppuStack_b0 = &puStack_88;
  FUN_10a34ef08(&ppuStack_b0);
  lVar11 = ((long)puStack_c8 - (long)puStack_d0 >> 3) * 0x2e8ba2e8ba2e8ba3;
  (**(code **)(*param_2 + 600))(&ppuStack_b0,param_2,lVar11);
  puVar2 = PTR___ZSt7nothrow_1103469d8;
  ppuStack_b8 = ppuStack_b0;
  if (puStack_c8 != puStack_d0) {
    lVar16 = 0;
    puVar14 = puStack_d0 + 6;
    do {
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x58))();
      if ((*(byte *)(plVar6 + 0x3c) & 1) == 0) goto LAB_10a35e1a0;
      puVar7 = (undefined8 *)0x60;
      __ZnwmRKSt9nothrow_t(0x60,puVar2);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_110bc7c40;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        FUN_10a35e32c(puVar7 + 1,puVar14[-6],puVar14[-5],(long)(puVar14[-5] - puVar14[-6]) >> 5);
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        FUN_10a35e454();
        uVar12 = *puVar14;
        uVar1 = *(undefined4 *)(puVar14 + 1);
        puVar7[9] = 0;
        *(undefined4 *)(puVar7 + 8) = uVar1;
        puVar7[7] = uVar12;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        FUN_10a35e518();
      }
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))();
      plVar6 = plVar8;
      FUN_10a065534();
      if (plVar6 == (long *)0x0) {
        if ((*(byte *)(plVar8 + 0x3c) & 1) == 0) goto LAB_10a35e1a0;
        plVar6 = plVar8 + 0x1b;
      }
      ppuStack_b0 = (undefined8 **)CONCAT44(ppuStack_b0._4_4_,7);
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x98))(param_2,*plVar6);
      plStack_a8 = plVar9;
      (**(code **)(*param_2 + 0x2f8))(&puStack_80,param_2,puVar7,plVar8,&UNK_10989ba24,&ppuStack_b0)
      ;
      puStack_88 = (undefined8 *)CONCAT44(puStack_88._4_4_,7);
      if ((3 < (int)ppuStack_b0) && (plStack_a8 != (long *)0x0)) {
        (**(code **)*plStack_a8)();
      }
      (**(code **)(*param_2 + 0x290))(param_2,&ppuStack_b8,lVar16,&puStack_88);
      if ((3 < (int)puStack_88) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)();
      }
      lVar16 = lVar16 + 1;
      puVar14 = puVar14 + 0xb;
    } while (lVar11 - lVar16 != 0);
  }
  *param_1 = 7;
  *(undefined8 ***)(param_1 + 2) = ppuStack_b8;
  ppuStack_b0 = &puStack_d0;
  FUN_10a34ee04(&ppuStack_b0);
  plVar6 = plVar5 + 0x4b;
  lVar11 = plVar5[0x59];
  uVar19 = lVar11 - 1;
  plVar5[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar6[lVar11 + 2];
    if (plVar5[0x5a] == uVar19) {
      return;
    }
  }
  else {
    uVar19 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar19) {
      return;
    }
  }
  puVar14 = (undefined8 *)*plVar6;
  puVar7 = (undefined8 *)plVar5[0x4c];
  lVar11 = (long)puVar7 - (long)puVar14;
  uVar17 = lVar11 >> 4;
  if (uVar17 < uVar19) {
    uVar18 = uVar19 - uVar17;
    if ((ulong)(plVar5[0x4d] - (long)puVar7 >> 4) < uVar18) {
      if (uVar19 >> 0x3c == 0) {
        uVar10 = plVar5[0x4d] - (long)puVar14;
        uVar13 = (long)uVar10 >> 3;
        if (uVar13 <= uVar19) {
          uVar13 = uVar19;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar13 = 0xfffffffffffffff;
        }
        if (uVar13 >> 0x3c == 0) {
          lVar4 = uVar13 << 4;
          __Znwm();
          lVar16 = lVar4 + lVar11;
          _bzero(lVar16,uVar18 * 0x10);
          lVar15 = lVar16 + uVar17 * -0x10;
          _memcpy(lVar15,puVar14,lVar11);
          *plVar6 = lVar15;
          plVar5[0x4c] = lVar16 + uVar18 * 0x10;
          plVar5[0x4d] = lVar4 + uVar13 * 0x10;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar14;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar7,uVar18 * 0x10);
    plVar5[0x4c] = (long)(puVar7 + uVar18 * 2);
  }
  else if (uVar19 < uVar17) {
    while (puVar7 != puVar14 + uVar19 * 2) {
      puVar7 = puVar7 + -2;
      func_0x00010988c204(puVar7);
    }
    plVar5[0x4c] = (long)(puVar14 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar19;
  return;
}



/* Entry: 10a35e290; end: 10a35e2a7;  */

undefined8 FUN_10a35e290(void)

{
  return 0;
}



/* Entry: 10a35e2a8; end: 10a35e32b;  */

void FUN_10a35e2a8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010a35e2d8(param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a35e32c; end: 10a35e3ab;  */

void FUN_10a35e32c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    FUN_10a35e3ac(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 4) {
      uVar2 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar2;
      uVar2 = param_2[2];
      puVar1[3] = param_2[3];
      puVar1[2] = uVar2;
      puVar1 = puVar1 + 4;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a35e3ac; end: 10a35e3eb;  */

void FUN_10a35e3ac(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10a35e400(param_1,param_2,0);
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 4);
    return;
  }
  FUN_10a35e3ec();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x3b == 0) {
    lVar2 = param_2 << 5;
    _malloc();
    if ((param_2 == 0) || (lVar2 != 0)) {
      return;
    }
  }
  lVar2 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar3 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
  puVar4 = (undefined8 *)PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  if (param_4 != 0) {
    FUN_10a35e4c4();
    puVar5 = *(undefined8 **)(lVar2 + 8);
    for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
      uVar6 = *puVar3;
      puVar5[1] = puVar3[1];
      *puVar5 = uVar6;
      puVar5 = puVar5 + 2;
    }
    *(undefined8 **)(lVar2 + 8) = puVar5;
  }
  return;
}



/* Entry: 10a35e3ec; end: 10a35e3ff;  */

void FUN_10a35e3ec(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
    _malloc();
    if ((param_2 == 0) || (lVar1 != 0)) {
      return;
    }
  }
  lVar1 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar2 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
  puVar3 = (undefined8 *)PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  if (param_4 != 0) {
    FUN_10a35e4c4();
    puVar4 = *(undefined8 **)(lVar1 + 8);
    for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
      uVar5 = *puVar2;
      puVar4[1] = puVar2[1];
      *puVar4 = uVar5;
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(lVar1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10a35e400; end: 10a35e453;  */

void FUN_10a35e400(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
    _malloc();
    if ((param_2 == 0) || (lVar1 != 0)) {
      return;
    }
  }
  lVar1 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar2 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
  puVar3 = (undefined8 *)PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  if (param_4 != 0) {
    FUN_10a35e4c4();
    puVar4 = *(undefined8 **)(lVar1 + 8);
    for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
      uVar5 = *puVar2;
      puVar4[1] = puVar2[1];
      *puVar4 = uVar5;
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(lVar1 + 8) = puVar4;
  }
  return;
}


