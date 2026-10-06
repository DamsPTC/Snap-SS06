/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a11da0; end: 101a11de7;  */

void FUN_101a11da0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 101a11de8; end: 101a11e6b;  */

void FUN_101a11de8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long lVar8;
  long unaff_x20;
  code *pcVar9;
  long *unaff_x22;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[3] = unaff_x20;
  puVar1 = (undefined8 *)0x70;
  func_0x000107c615b8();
  unaff_x22[4] = (long)puVar1;
  *puVar1 = unaff_x22;
  puVar1[1] = FUN_101a11e6c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    puVar1[0xb] = param_1;
    puVar1[0xc] = unaff_x20;
    pcVar9 = FUN_101a11a8c;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *unaff_x22;
  lVar10 = *unaff_x22;
  *(undefined8 **)(lVar8 + 0x28) = puVar1;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0x20));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      pcVar9 = FUN_101a11f18;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101a11ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar10 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = *(code **)(lVar10 + 0x28);
  if (pcVar9 == (code *)0x0) {
    pcVar9 = (code *)0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
    uVar5 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efc8ff0);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(pcVar9);
    func_0x000107c61654();
LAB_101a12260:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101a12298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    pcVar2 = *(code **)(*(long *)(lVar10 + 0x18) + 0x20);
    func_0x000107c4e17c();
    func_0x000107c61180();
    UNRECOVERED_JUMPTABLE = pcVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      uVar5 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      uVar6 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010efc9020);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61654();
      UNRECOVERED_JUMPTABLE = pcVar9;
LAB_101a1225c:
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      goto LAB_101a12260;
    }
    pcVar2 = pcVar9;
    func_0x000107c30a1c();
    func_0x000107c61180();
    if (pcVar2 == (code *)0x0) {
      uVar5 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      uVar6 = 0xd000000000000023;
      func_0x000107c5fadc(0xd000000000000023,0x800000010efc9040);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61654();
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      UNRECOVERED_JUMPTABLE = pcVar9;
      goto LAB_101a1225c;
    }
    pcVar3 = pcVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(pcVar2);
    pcVar2 = pcVar3;
    func_0x000107c5ee20(pcVar3,param_2);
    *(undefined8 *)(lVar10 + 0x10) = 0;
    pcVar4 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4e180();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    uVar5 = *(undefined8 *)(lVar10 + 0x10);
    if (pcVar4 == (code *)0x0) {
      uVar6 = uVar5;
      func_0x000107c61174();
      func_0x000107c5ed30(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61654();
      func_0x000107c615e8(pcVar9);
      func_0x00010006c090(pcVar3,param_2);
      goto LAB_101a1225c;
    }
    func_0x000107c61174();
    pcVar2 = pcVar4;
    func_0x000107c519e8(pcVar4);
    func_0x000107c61180();
    func_0x000107c615e8(pcVar4);
    func_0x00010006c090(pcVar3,param_2);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    UNRECOVERED_JUMPTABLE = pcVar9;
    func_0x000107c615e8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101a1206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar10 + 8))(pcVar2);
      return;
    }
  }
  func_0x000107c60e78();
  *(code **)(lVar10 + 0x28) = UNRECOVERED_JUMPTABLE;
  *(code **)(lVar10 + 0x30) = pcVar9;
  pcVar9 = FUN_101a122b8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar9,0,0);
  return;
}



/* Entry: 101a11e6c; end: 101a11f17;  */

void FUN_101a11e6c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  long unaff_x20;
  code *pcVar8;
  long *unaff_x22;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *unaff_x22;
  lVar9 = *unaff_x22;
  *(undefined8 *)(lVar7 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar7 + 0x20));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      pcVar8 = FUN_101a11f18;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101a11ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = *(code **)(lVar9 + 0x28);
  if (pcVar8 == (code *)0x0) {
    pcVar8 = (code *)0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
    uVar4 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efc8ff0);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(pcVar8);
    func_0x000107c61654();
LAB_101a12260:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101a12298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    pcVar1 = *(code **)(*(long *)(lVar9 + 0x18) + 0x20);
    func_0x000107c4e17c();
    func_0x000107c61180();
    UNRECOVERED_JUMPTABLE = pcVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar1);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      uVar4 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      uVar5 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010efc9020);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61654();
      UNRECOVERED_JUMPTABLE = pcVar8;
LAB_101a1225c:
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      goto LAB_101a12260;
    }
    pcVar1 = pcVar8;
    func_0x000107c30a1c();
    func_0x000107c61180();
    if (pcVar1 == (code *)0x0) {
      uVar4 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      uVar5 = 0xd000000000000023;
      func_0x000107c5fadc(0xd000000000000023,0x800000010efc9040);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61654();
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      UNRECOVERED_JUMPTABLE = pcVar8;
      goto LAB_101a1225c;
    }
    pcVar2 = pcVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(pcVar1);
    pcVar1 = pcVar2;
    func_0x000107c5ee20(pcVar2,param_2);
    *(undefined8 *)(lVar9 + 0x10) = 0;
    pcVar3 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4e180();
    func_0x000107c61180();
    func_0x000107c61170(pcVar1);
    uVar4 = *(undefined8 *)(lVar9 + 0x10);
    if (pcVar3 == (code *)0x0) {
      uVar5 = uVar4;
      func_0x000107c61174();
      func_0x000107c5ed30(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61654();
      func_0x000107c615e8(pcVar8);
      func_0x00010006c090(pcVar2,param_2);
      goto LAB_101a1225c;
    }
    func_0x000107c61174();
    pcVar1 = pcVar3;
    func_0x000107c519e8(pcVar3);
    func_0x000107c61180();
    func_0x000107c615e8(pcVar3);
    func_0x00010006c090(pcVar2,param_2);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    UNRECOVERED_JUMPTABLE = pcVar8;
    func_0x000107c615e8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101a1206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar9 + 8))(pcVar1);
      return;
    }
  }
  func_0x000107c60e78();
  *(code **)(lVar9 + 0x28) = UNRECOVERED_JUMPTABLE;
  *(code **)(lVar9 + 0x30) = pcVar8;
  pcVar8 = FUN_101a122b8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar8,0,0);
  return;
}



/* Entry: 101a11f18; end: 101a1229f;  */

void FUN_101a11f18(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  code *pcVar7;
  long unaff_x22;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = *(code **)(unaff_x22 + 0x28);
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
    uVar4 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efc8ff0);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(pcVar7);
    func_0x000107c61654();
  }
  else {
    pcVar1 = *(code **)(*(long *)(unaff_x22 + 0x18) + 0x20);
    func_0x000107c4e17c();
    func_0x000107c61180();
    UNRECOVERED_JUMPTABLE = pcVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar1);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      uVar4 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      uVar5 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010efc9020);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61654();
      UNRECOVERED_JUMPTABLE = pcVar7;
    }
    else {
      pcVar1 = pcVar7;
      func_0x000107c30a1c();
      func_0x000107c61180();
      if (pcVar1 == (code *)0x0) {
        uVar4 = 0xd000000000000028;
        func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
        uVar5 = 0xd000000000000023;
        func_0x000107c5fadc(0xd000000000000023,0x800000010efc9040);
        func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c42a5c();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar4);
        func_0x000107c61654();
        func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
        UNRECOVERED_JUMPTABLE = pcVar7;
      }
      else {
        pcVar2 = pcVar1;
        func_0x000107c5ee30();
        func_0x000107c61170(pcVar1);
        pcVar1 = pcVar2;
        func_0x000107c5ee20(pcVar2,param_2);
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        pcVar3 = UNRECOVERED_JUMPTABLE;
        func_0x000107c4e180();
        func_0x000107c61180();
        func_0x000107c61170(pcVar1);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
        if (pcVar3 != (code *)0x0) {
          func_0x000107c61174();
          pcVar1 = pcVar3;
          func_0x000107c519e8(pcVar3);
          func_0x000107c61180();
          func_0x000107c615e8(pcVar3);
          func_0x00010006c090(pcVar2,param_2);
          func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
          UNRECOVERED_JUMPTABLE = pcVar7;
          func_0x000107c615e8();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101a1206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x22 + 8))(pcVar1);
            return;
          }
          goto LAB_101a1229c;
        }
        uVar5 = uVar4;
        func_0x000107c61174();
        func_0x000107c5ed30(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61654();
        func_0x000107c615e8(pcVar7);
        func_0x00010006c090(pcVar2,param_2);
      }
    }
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101a12298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_101a1229c:
  func_0x000107c60e78();
  *(code **)(unaff_x22 + 0x28) = UNRECOVERED_JUMPTABLE;
  *(code **)(unaff_x22 + 0x30) = pcVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a122b8,0,0);
  return;
}



/* Entry: 101a122a0; end: 101a122b7;  */

void FUN_101a122a0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a122b8,0,0);
  return;
}



/* Entry: 101a122b8; end: 101a123e7;  */

void FUN_101a122b8(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  iVar2 = (int)*(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c44984();
  if (iVar2 == 0) {
LAB_101a12360:
    iVar2 = (int)*(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c448e4();
    if (iVar2 == 0) {
      plVar7 = (long *)0xe0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x58) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_101a124cc;
      lVar3 = *(long *)(unaff_x22 + 0x30);
      plVar7[0xe] = *(long *)(unaff_x22 + 0x28);
      plVar7[0xf] = lVar3;
      pcVar1 = FUN_101a1361c;
      goto LAB_107c615e0;
    }
    plVar7 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar7;
    pcVar1 = FUN_101a12484;
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0x28);
    lVar8 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x40);
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a123e8);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c4c9b4();
    func_0x000107c61170(lVar3);
    if ((*(long *)(lVar8 + 0x10) == 0) || (func_0x000100f89a68(), (param_2 & 1) == 0))
    goto LAB_101a12360;
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + lVar4 * 8);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
    func_0x000107c61174();
    uVar6 = uVar5;
    func_0x000107c4ca5c();
    if ((int)uVar6 != 2) {
      func_0x000107c61170(uVar5);
      goto LAB_101a12360;
    }
    plVar7 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar7;
    pcVar1 = FUN_101a123e8;
  }
  *plVar7 = unaff_x22;
  plVar7[1] = (long)pcVar1;
  lVar3 = *(long *)(unaff_x22 + 0x30);
  plVar7[6] = *(long *)(unaff_x22 + 0x28);
  plVar7[7] = lVar3;
  pcVar1 = FUN_101a1319c;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a123e8; end: 101a12483;  */

void FUN_101a123e8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101a1244c;
  }
  else {
    pcVar1 = FUN_101a12514;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a12484; end: 101a124cb;  */

void FUN_101a12484(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101a124c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a124cc; end: 101a12513;  */

void FUN_101a124cc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000101a12510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a12514; end: 101a12547;  */

void FUN_101a12514(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101a12544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a12548; end: 101a1255f;  */

void FUN_101a12548(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a12560,0,0);
  return;
}



/* Entry: 101a12560; end: 101a12637;  */

void FUN_101a12560(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x10);
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001000285a8(0x112d555b0,&UNK_10d91c610);
    func_0x000107c4ca84();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    uVar3 = uVar5;
    func_0x000100759c94(uVar5,0);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
    func_0x000107c61170(uVar5);
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101a12638;
                    /* WARNING: Could not recover jumptable at 0x000101a12630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_101a155f0();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a12638);
  (*pcVar1)();
}



/* Entry: 101a12638; end: 101a1268b;  */

void FUN_101a12638(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a1268c,0,0);
  return;
}



/* Entry: 101a1268c; end: 101a12a47;  */

void FUN_101a1268c(void)

{
  undefined1 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uStack_60;
  ulong uStack_58;
  
  lVar11 = *(long *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(long *)(unaff_x22 + 0x20) = lVar11;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    if (iVar3 != 0) {
      uVar10 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar10,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar9);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    if (lVar11 != 0) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x58);
      uStack_58 = 0xf000000000000000;
      uStack_60 = 0;
      func_0x000107c5ee2c(uVar9,&uStack_60);
      func_0x000100cc2e24(uVar9,uVar1);
      uVar2 = uStack_58;
      uVar9 = uStack_60;
      if (uStack_58 >> 0x3c < 0xf) {
        lVar11 = 0;
        func_0x000107c5f11c();
        lVar12 = *(long *)(lVar11 + -8);
        uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar5);
        uVar10 = uVar9;
        uVar8 = uVar2;
        func_0x00010006c00c(uVar9,uVar2);
        func_0x000107c5f100(uVar5);
        func_0x000107c5f0f0();
        (**(code **)(lVar12 + 8))(uVar5,lVar11);
        puVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        func_0x000107c610f8();
        uVar4 = uVar9;
        func_0x000107c5ee20(uVar9,uVar2);
        func_0x0001000b44c0(uVar9,uVar2);
        func_0x000107c5fadc(uVar10,uVar8);
        func_0x000107c6142c(uVar8);
        func_0x000107c46360();
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar4);
        func_0x000107c615c0(uVar5);
        if (puVar6 != (undefined *)0x0) {
          puVar7 = PTR_PTR_1126bf698;
          func_0x000107c61168(PTR_PTR_1126bf698);
          func_0x000107c3e24c();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          func_0x0001000b44c0(uVar9,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a129b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(puVar7);
          return;
        }
        uVar10 = 0xd000000000000028;
        func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
        uVar4 = 0xd00000000000002c;
        func_0x000107c5fadc(0xd00000000000002c,0x800000010efc8f10);
        func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c42a5c();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar10);
        func_0x000107c61654();
        func_0x0001000b44c0(uVar9,uVar2);
        goto LAB_101a1286c;
      }
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x28);
    *(undefined8 *)(unaff_x22 + 0x10) = uStack_60;
    *(ulong *)(unaff_x22 + 0x18) = uStack_58;
    func_0x000107c5fb78(0xd000000000000026,0x800000010efc8eb0);
    func_0x000107c4c99c();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
    uVar9 = 0x112deb830;
    func_0x0001000285a8(0x112deb830,&UNK_10d9b7938);
    func_0x000107c603d0(unaff_x22 + 0x28,unaff_x22 + 0x10,uVar9,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c61170(uVar10);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar4 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
    func_0x000107c5fadc(uVar9,uVar10);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(uVar10);
    func_0x000107c61654();
  }
LAB_101a1286c:
                    /* WARNING: Could not recover jumptable at 0x000101a12888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a12a48; end: 101a12a5f;  */

void FUN_101a12a48(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a12a60,0,0);
  return;
}



/* Entry: 101a12a60; end: 101a12b2b;  */

void FUN_101a12a60(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x0001000285a8(0x112deb838,&UNK_10d9b7948);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = uVar3;
  func_0x000107c4d27c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  uVar3 = uVar1;
  func_0x000100759c94(uVar1,0);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  func_0x000107c61170(uVar1);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a12b2c;
                    /* WARNING: Could not recover jumptable at 0x000101a12b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101a15880)();
  return;
}



/* Entry: 101a12b2c; end: 101a12b7f;  */

void FUN_101a12b2c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a12b80,0,0);
  return;
}



/* Entry: 101a12b80; end: 101a12f6b;  */

void FUN_101a12b80(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(long *)(unaff_x22 + 0x18) = lVar9;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar10 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar10,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    if (lVar9 == 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
      func_0x000107c602fc(0x1b);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5cda4();
      *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
      puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      uVar10 = 0xd000000000000019;
      uVar3 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      func_0x000107c5fadc(0xd000000000000019,0x800000010efc8f40);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(0x800000010efc8f40);
      func_0x000107c61654();
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
      func_0x000107c3e3b4(uVar3);
      func_0x000107c61180();
      uVar10 = uVar3;
      func_0x000107c5ee30();
      uVar8 = param_2;
      func_0x000107c61170(uVar3);
      lVar9 = 0;
      func_0x000107c5f11c();
      lVar11 = *(long *)(lVar9 + -8);
      uVar4 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar4);
      uVar5 = uVar4;
      func_0x000107c5f100(uVar4);
      func_0x000107c5f0f0();
      (**(code **)(lVar11 + 8))(uVar4,lVar9);
      puVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      func_0x000107c610f8();
      uVar3 = uVar10;
      func_0x000107c5ee20(uVar10,param_2);
      func_0x00010006c090(uVar10,param_2);
      func_0x000107c5fadc(uVar5,uVar8);
      func_0x000107c6142c(uVar8);
      func_0x000107c46360();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar3);
      func_0x000107c615c0(uVar4);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x58);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
      if (puVar6 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126bf698;
        func_0x000107c61168(PTR_PTR_1126bf698);
        func_0x000107c3e24c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        func_0x000100cc2e24(uVar10,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a12d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(puVar7);
        return;
      }
      uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
      func_0x000107c602fc(0x2c);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5cda4();
      *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
      puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      uVar3 = 0xd00000000000002a;
      uVar8 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      func_0x000107c5fadc(0xd00000000000002a,0x800000010efc8f60);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar8);
      func_0x000107c6142c(0x800000010efc8f60);
      func_0x000107c61654();
      func_0x000100cc2e24(uVar10,uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101a12f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a12f6c; end: 101a12f83;  */

void FUN_101a12f6c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a12f84,0,0);
  return;
}



/* Entry: 101a12f84; end: 101a1306f;  */

void FUN_101a12f84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long unaff_x22;
  
  iVar2 = (int)*(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c44984();
  if (iVar2 == 0) {
LAB_101a12fec:
                    /* WARNING: Could not recover jumptable at 0x000101a13004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  iVar2 = (int)*(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c3e240();
  if (iVar2 != 6) goto LAB_101a12fec;
  plVar9 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x101a13008;
  lVar11 = *(long *)(unaff_x22 + 0x10);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9[3] = lVar1;
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  plVar9[4] = (long)plVar3;
  *plVar3 = (long)plVar9;
  plVar3[1] = (long)FUN_101a11e6c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    plVar3[0xb] = lVar11;
    plVar3[0xc] = lVar1;
    pcVar12 = FUN_101a11a8c;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar9;
  lVar13 = *plVar9;
  *(long **)(lVar10 + 0x28) = plVar3;
  func_0x000107c615c0(*(undefined8 *)(lVar10 + 0x20));
  if (lVar1 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      pcVar12 = FUN_101a11f18;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101a11ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = *(code **)(lVar13 + 0x28);
  if (pcVar12 == (code *)0x0) {
    pcVar12 = (code *)0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
    uVar7 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efc8ff0);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(pcVar12);
    func_0x000107c61654();
LAB_101a12260:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101a12298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    pcVar4 = *(code **)(*(long *)(lVar13 + 0x18) + 0x20);
    func_0x000107c4e17c();
    func_0x000107c61180();
    UNRECOVERED_JUMPTABLE = pcVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar4);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      uVar7 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      uVar8 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010efc9020);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61654();
      UNRECOVERED_JUMPTABLE = pcVar12;
LAB_101a1225c:
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      goto LAB_101a12260;
    }
    pcVar4 = pcVar12;
    func_0x000107c30a1c();
    func_0x000107c61180();
    if (pcVar4 == (code *)0x0) {
      uVar7 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      uVar8 = 0xd000000000000023;
      func_0x000107c5fadc(0xd000000000000023,0x800000010efc9040);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61654();
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      UNRECOVERED_JUMPTABLE = pcVar12;
      goto LAB_101a1225c;
    }
    pcVar5 = pcVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(pcVar4);
    pcVar4 = pcVar5;
    func_0x000107c5ee20(pcVar5,param_2);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    pcVar6 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4e180();
    func_0x000107c61180();
    func_0x000107c61170(pcVar4);
    uVar7 = *(undefined8 *)(lVar13 + 0x10);
    if (pcVar6 == (code *)0x0) {
      uVar8 = uVar7;
      func_0x000107c61174();
      func_0x000107c5ed30(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61654();
      func_0x000107c615e8(pcVar12);
      func_0x00010006c090(pcVar5,param_2);
      goto LAB_101a1225c;
    }
    func_0x000107c61174();
    pcVar4 = pcVar6;
    func_0x000107c519e8(pcVar6);
    func_0x000107c61180();
    func_0x000107c615e8(pcVar6);
    func_0x00010006c090(pcVar5,param_2);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    UNRECOVERED_JUMPTABLE = pcVar12;
    func_0x000107c615e8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101a1206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 8))(pcVar4);
      return;
    }
  }
  func_0x000107c60e78();
  *(code **)(lVar13 + 0x28) = UNRECOVERED_JUMPTABLE;
  *(code **)(lVar13 + 0x30) = pcVar12;
  pcVar12 = FUN_101a122b8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar12,0,0);
  return;
}



/* Entry: 101a13070; end: 101a13183;  */

void FUN_101a13070(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  if (lVar4 != 0) {
    puVar1 = PTR_PTR_1126bf698;
    func_0x000107c61168(PTR_PTR_1126bf698);
    func_0x000107c45144();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x000101a130dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar1);
    return;
  }
  uVar2 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
  uVar3 = 0xd000000000000036;
  func_0x000107c5fadc(0xd000000000000036,0x800000010efc8f90);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101a13180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a13184; end: 101a1319b;  */

void FUN_101a13184(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a1319c,0,0);
  return;
}



/* Entry: 101a1319c; end: 101a13273;  */

void FUN_101a1319c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x10);
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001000285a8(0x112d555b0,&UNK_10d91c610);
    func_0x000107c4ca84();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    uVar3 = uVar5;
    func_0x000100759c94(uVar5,0);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
    func_0x000107c61170(uVar5);
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101a13274;
                    /* WARNING: Could not recover jumptable at 0x000101a1326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_101a155f0();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a13274);
  (*pcVar1)();
}



/* Entry: 101a13274; end: 101a132c7;  */

void FUN_101a13274(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a132c8,0,0);
  return;
}



/* Entry: 101a132c8; end: 101a13603;  */

void FUN_101a132c8(void)

{
  undefined1 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uStack_50;
  ulong uStack_48;
  
  lVar9 = *(long *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(long *)(unaff_x22 + 0x20) = lVar9;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    if (iVar3 != 0) {
      uVar8 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar8,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar7);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    if (lVar9 != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x58);
      uStack_48 = 0xf000000000000000;
      uStack_50 = 0;
      func_0x000107c5ee2c(uVar7,&uStack_50);
      func_0x000100cc2e24(uVar7,uVar1);
      uVar2 = uStack_48;
      uVar7 = uStack_50;
      if (uStack_48 >> 0x3c < 0xf) {
        puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c610f8();
        func_0x00010006c00c(uVar7,uVar2);
        uVar8 = uVar7;
        func_0x000107c5ee20(uVar7,uVar2);
        func_0x000107c4635c();
        func_0x000107c61170(uVar8);
        func_0x0001000b44c0(uVar7,uVar2);
        if (puVar5 != (undefined *)0x0) {
          puVar6 = PTR_PTR_1126bf698;
          func_0x000107c61168(PTR_PTR_1126bf698);
          func_0x000107c45144();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          func_0x0001000b44c0(uVar7,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a1356c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(puVar6);
          return;
        }
        uVar8 = 0xd000000000000028;
        func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
        uVar4 = 0xd000000000000029;
        func_0x000107c5fadc(0xd000000000000029,0x800000010efc90a0);
        func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c42a5c();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar8);
        func_0x000107c61654();
        func_0x0001000b44c0(uVar7,uVar2);
        goto LAB_101a134a4;
      }
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x28);
    *(undefined8 *)(unaff_x22 + 0x10) = uStack_50;
    *(ulong *)(unaff_x22 + 0x18) = uStack_48;
    func_0x000107c5fb78(0xd000000000000026,0x800000010efc9070);
    func_0x000107c4c99c();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
    uVar7 = 0x112deb830;
    func_0x0001000285a8(0x112deb830,&UNK_10d9b7938);
    func_0x000107c603d0(unaff_x22 + 0x28,unaff_x22 + 0x10,uVar7,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c61170(uVar8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar4 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
    func_0x000107c5fadc(uVar7,uVar8);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(uVar8);
    func_0x000107c61654();
  }
LAB_101a134a4:
                    /* WARNING: Could not recover jumptable at 0x000101a134bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a13604; end: 101a1361b;  */

void FUN_101a13604(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a1361c,0,0);
  return;
}



/* Entry: 101a1361c; end: 101a137db;  */

void FUN_101a1361c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar6 = *(long *)(unaff_x22 + 0x70);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  if (*(char *)(lVar1 + 0x38) == '\x01') {
    uVar9 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a137d8);
      (*pcVar2)();
    }
    func_0x0001000285a8(0x112deb958,&UNK_10d9db790);
    func_0x000107c404e0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar7 = uVar9;
    func_0x000100759c94(uVar9,0);
    *(undefined8 *)(unaff_x22 + 0x80) = uVar7;
    func_0x000107c61170(uVar9);
    plVar8 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = FUN_101a15750;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar8;
    pcVar2 = FUN_101a137dc;
  }
  else {
    lVar3 = 0;
    func_0x000107c5ede0();
    *(long *)(unaff_x22 + 0x98) = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    *(long *)(unaff_x22 + 0xa0) = lVar3;
    uVar5 = *(long *)(lVar3 + 0x40) + 0xf;
    uVar4 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0xa8) = uVar4;
    uVar5 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0xb0) = uVar5;
    uVar9 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a137dc);
      (*pcVar2)();
    }
    func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
    func_0x000107c4ca6c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar7 = uVar9;
    func_0x000100759c94(uVar9,0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar7;
    func_0x000107c61170(uVar9);
    plVar8 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_10121ae24;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar8;
    pcVar2 = FUN_101a13c14;
  }
  *plVar8 = unaff_x22;
  plVar8[1] = (long)pcVar2;
                    /* WARNING: Could not recover jumptable at 0x000101a137d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a137dc; end: 101a1382f;  */

void FUN_101a137dc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x90) = param_1;
  *(undefined1 *)(lVar1 + 0xd0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a13830,0,0);
  return;
}



/* Entry: 101a13830; end: 101a13c13;  */

void FUN_101a13830(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x90);
  if (*(char *)(unaff_x22 + 0xd0) == '\x01') {
    *(long *)(unaff_x22 + 0x50) = lVar9;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    if (iVar2 != 0) {
      uVar10 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x50,uVar10,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar7);
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0x80);
    func_0x000107c61574();
    if (lVar9 == 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
      func_0x000107c602fc(0x31);
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0xe000000000000000;
      func_0x000107c5fb78(0xd00000000000002f,0x800000010efc9100);
      func_0x000107c4c99c();
      func_0x000107c61180();
      *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
      uVar7 = 0x112deb830;
      func_0x0001000285a8(0x112deb830,&UNK_10d9b7938);
      func_0x000107c603d0(unaff_x22 + 0x58,unaff_x22 + 0x20,uVar7,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c61170(uVar10);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar6 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      func_0x000107c5fadc(uVar7,uVar10);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uVar10);
      func_0x000107c61654();
    }
    else {
      func_0x0001000d224c(unaff_x22 + 0x60);
      lVar9 = *(long *)(unaff_x22 + 0x60);
      if (lVar9 != 0) {
        func_0x00010011df08();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(param_2);
        }
        uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar1 = *(undefined1 *)(unaff_x22 + 0xd0);
        lVar4 = lVar9;
        func_0x000107c4093c(lVar9);
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(lVar9);
        lVar9 = lVar4;
        func_0x000107c4d444(lVar4);
        func_0x000107c61180();
        puVar5 = PTR_PTR_1126bf698;
        func_0x000107c61168(PTR_PTR_1126bf698);
        func_0x000107c3e24c();
        func_0x000107c61180();
        func_0x000107c61170(lVar9);
        func_0x000107c615e8(lVar4);
        func_0x000101a15a2c(uVar7,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a139b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(puVar5);
        return;
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar1 = *(undefined1 *)(unaff_x22 + 0xd0);
      func_0x000107c602fc(0x1d);
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0xe000000000000000;
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efc9130);
      func_0x000107c4c99c();
      func_0x000107c61180();
      *(undefined8 *)(unaff_x22 + 0x68) = uVar10;
      uVar7 = 0x112deb830;
      func_0x0001000285a8(0x112deb830,&UNK_10d9b7938);
      func_0x000107c603d0(unaff_x22 + 0x68,unaff_x22 + 0x30,uVar7,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c61170(uVar10);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar6 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
      func_0x000107c5fadc(uVar7,uVar10);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uVar10);
      func_0x000107c61654();
      func_0x000101a15a2c(uVar8,uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101a13c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a13c14; end: 101a13c67;  */

void FUN_101a13c14(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 200) = param_1;
  *(undefined1 *)(lVar1 + 0xd1) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a13c68,0,0);
  return;
}



/* Entry: 101a13c68; end: 101a14023;  */

void FUN_101a13c68(void)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  code *pcVar14;
  
  lVar10 = *(long *)(unaff_x22 + 200);
  if (*(char *)(unaff_x22 + 0xd1) == '\x01') {
    *(long *)(unaff_x22 + 0x40) = lVar10;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    if (iVar2 != 0) {
      uVar12 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x40,uVar12,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar9);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
    func_0x000107c615c0(uVar9);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
    if (lVar10 != 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 200);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
      lVar11 = *(long *)(unaff_x22 + 0xa0);
      uVar1 = *(undefined1 *)(unaff_x22 + 0xd1);
      lVar10 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar3 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      uVar4 = uVar3;
      (**(code **)(lVar11 + 0x38))();
      func_0x00010121afd4();
      func_0x000107c604bc(uVar12,uVar3,uVar9,uVar4);
      func_0x000100cc2e24(uVar12,uVar1);
      uVar4 = uVar3;
      (**(code **)(lVar11 + 0x30))(uVar3,1,uVar9);
      if ((int)uVar4 != 1) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar4 = *(ulong *)(unaff_x22 + 0xb0);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
        lVar10 = *(long *)(unaff_x22 + 0x70);
        lVar11 = *(long *)(unaff_x22 + 0x78);
        pcVar14 = *(code **)(*(long *)(unaff_x22 + 0xa0) + 0x20);
        (*pcVar14)(uVar4,uVar3,uVar12);
        func_0x000107c615c0(uVar3);
        uVar3 = uVar4;
        (*pcVar14)(uVar9,uVar4,uVar12);
        func_0x000107c615c0(uVar4);
        lVar11 = *(long *)(lVar11 + 0x40);
        func_0x000107c4c99c();
        func_0x000107c61180();
        if (lVar10 != 0) {
          lVar6 = lVar10;
          func_0x000107c4c9b4();
          func_0x000107c61170(lVar10);
          if ((*(long *)(lVar11 + 0x10) == 0) || (func_0x000100f89a68(), (uVar3 & 1) == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + lVar6 * 8);
            func_0x000107c61174(uVar9);
          }
          lVar10 = *(long *)(unaff_x22 + 0xa0);
          uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
          uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
          uVar5 = uVar9;
          func_0x000107c4b7ec(uVar9);
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar5);
          puVar7 = PTR_PTR_1126bf698;
          func_0x000107c61168(PTR_PTR_1126bf698);
          puVar8 = puVar7;
          func_0x000107c5ed90();
          func_0x000107c3e244(puVar7);
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          (**(code **)(lVar10 + 8))(uVar12,uVar13);
          func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101a1401c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(puVar7);
          return;
        }
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x101a14024);
        (*pcVar14)();
      }
      func_0x000107c615c0(uVar3);
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
    func_0x000107c615c0(uVar9);
    func_0x000107c602fc(0x2b);
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xe000000000000000;
    func_0x000107c5fb78(0xd000000000000029,0x800000010efc90d0);
    func_0x000107c4c99c();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0x48) = uVar12;
    uVar9 = 0x112deb830;
    func_0x0001000285a8(0x112deb830,&UNK_10d9b7938);
    func_0x000107c603d0(unaff_x22 + 0x48,unaff_x22 + 0x10,uVar9,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c61170(uVar12);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
    func_0x000107c5fadc(uVar9,uVar12);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar5);
    func_0x000107c6142c(uVar12);
    func_0x000107c61654();
  }
                    /* WARNING: Could not recover jumptable at 0x000101a13edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a14024; end: 101a1406f;  */

void FUN_101a14024(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a14070; end: 101a14443;  */

void FUN_101a14070(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar3 = 0;
  FUN_101a0782c();
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x0001000285a8(0x112deb800,&UNK_10d9b78e0);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) == 0) {
    func_0x000107c61574(lVar9);
LAB_101a1421c:
    *unaff_x20 = lVar3;
    return;
  }
  lVar1 = lVar9 + 0x40;
  uVar5 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar3 != lVar9) || (lVar1 + uVar5 * 8 <= lVar3 + 0x40U)) {
    func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar5 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
  uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
    uVar5 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(lVar9 + 0x40);
  if (uVar5 == 0) goto LAB_101a14194;
  do {
    uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar5 = uVar5 - 1 & uVar5;
    while( true ) {
      uVar7 = LZCOUNT(uVar7) | lVar11 << 6;
      uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar7 * 8);
      lVar10 = *(long *)(lVar4 + 0x48) * uVar7;
      FUN_101a07e98(*(long *)(lVar9 + 0x38) + lVar10,
                    &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar7 * 8) = uVar8;
      func_0x000101a07edc(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          *(long *)(lVar3 + 0x38) + lVar10);
      if (uVar5 != 0) break;
LAB_101a14194:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a14244);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar9);
          goto LAB_101a1421c;
        }
        uVar5 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar5 == 0);
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Entry: 101a14444; end: 101a1446b;  */

void FUN_101a14444(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112deb7b0,&UNK_10d9b78b0);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_101a14538;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined4 *)(*(long *)(lVar4 + 0x30) + uVar8 * 4) =
             *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar8 * 4);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_101a14538:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a145b8);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_101a14590;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_101a14590:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101a1446c; end: 101a145b7;  */

void FUN_101a1446c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8();
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_101a14538;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined4 *)(*(long *)(lVar4 + 0x30) + uVar8 * 4) =
             *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar8 * 4);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_101a14538:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a145b8);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_101a14590;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_101a14590:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101a145b8; end: 101a14743;  */

void FUN_101a145b8(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  
  func_0x0001000285a8(0x112deb820,&UNK_10d9b7900);
  lVar13 = *unaff_x20;
  lVar9 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13 + 0x40;
    uVar10 = (1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar9 != lVar13 || lVar1 + uVar10 * 8 <= lVar9 + 0x40U) {
      func_0x000107c610b8(lVar9 + 0x40U,lVar1,uVar10 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar11 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(lVar13 + 0x40);
    if (uVar10 == 0) goto LAB_101a14698;
    do {
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      while( true ) {
        uVar12 = LZCOUNT(uVar12) | lVar14 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar12 * 0x20);
        uVar4 = *puVar3;
        uVar6 = puVar3[1];
        uVar5 = puVar3[2];
        uVar7 = puVar3[3];
        *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar12 * 4) =
             *(undefined4 *)(*(long *)(lVar13 + 0x30) + uVar12 * 4);
        puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar12 * 0x20);
        *puVar3 = uVar4;
        puVar3[1] = uVar6;
        puVar3[2] = uVar5;
        puVar3[3] = uVar7;
        func_0x000107c61174();
        func_0x000107c61174(uVar4);
        func_0x000100de78a0(uVar5,uVar7);
        if (uVar10 != 0) break;
LAB_101a14698:
        do {
          lVar2 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101a14744);
            (*pcVar8)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar2) goto LAB_101a14718;
          uVar10 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar10 == 0);
        uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar14 = lVar2;
      }
    } while( true );
  }
LAB_101a14718:
  func_0x000107c61574(lVar13);
  *unaff_x20 = lVar9;
  return;
}



/* Entry: 101a14744; end: 101a1489f;  */

void FUN_101a14744(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112deb808,&UNK_10d9b78e8);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_101a14820;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_101a14820:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a148a0);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_101a14878;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_101a14878:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101a148a0; end: 101a14e5f;  */

void FUN_101a148a0(long param_1,ulong param_2)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_80 [8];
  
  lVar3 = 0;
  FUN_101a0782c();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar14 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *unaff_x20;
  lVar3 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar3 = param_1;
  }
  uVar16 = 0x112deb800;
  func_0x0001000285a8(0x112deb800,&UNK_10d9b78e0);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar3,param_2,uVar16);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101a14b44:
    func_0x000107c61574(lVar12);
LAB_101a14b4c:
    *unaff_x20 = lVar4;
    return;
  }
  puVar15 = (ulong *)(lVar12 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar17 = uVar17 & *puVar15;
  lVar3 = lVar4 + 0x40;
  lVar5 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar18 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a14b74);
          (*pcVar2)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar12);
            goto LAB_101a14b4c;
          }
          uVar17 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar15 = -1L << (uVar17 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_101a14b44;
        }
        uVar17 = puVar15[lVar18];
        lVar5 = lVar5 + 1;
      } while (uVar17 == 0);
      uVar8 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar8 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar18 = lVar5;
    }
    uVar8 = LZCOUNT(uVar8) | lVar18 << 6;
    uVar16 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar8 * 8);
    lVar13 = *(long *)(lVar7 + 0x48);
    lVar5 = *(long *)(lVar12 + 0x38) + lVar13 * uVar8;
    if ((param_2 & 1) == 0) {
      func_0x000101a07e98(lVar5,puVar14);
    }
    else {
      func_0x000101a07edc(lVar5,puVar14);
    }
    uVar6 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar6,uVar16);
    uVar11 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar8 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar3 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar1 = false;
      uVar8 = 0x3f - uVar11 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar8) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a14b78);
          (*pcVar2)();
        }
        uVar9 = 0;
        if (uVar6 != uVar8) {
          uVar9 = uVar6;
        }
        bVar1 = (bool)(uVar6 == uVar8 | bVar1);
        uVar6 = *(ulong *)(lVar3 + uVar9 * 8);
      } while (uVar6 == 0xffffffffffffffff);
      uVar6 = ~uVar6;
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar9 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar3 + uVar9) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar3 + uVar9);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) = uVar16;
    func_0x000101a07edc(puVar14,*(long *)(lVar4 + 0x38) + lVar13 * uVar8);
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar5 = lVar18;
  } while( true );
}



/* Entry: 101a14e60; end: 101a14e87;  */

void FUN_101a14e60(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  uVar14 = 0x112deb7b0;
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112deb7b0,&UNK_10d9b78b0);
  lVar5 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar14);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101a150b4:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar5;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar16 = uVar16 & *puVar13;
  lVar1 = lVar5 + 0x40;
  lVar8 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a150e4);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_101a150b4;
        }
        uVar16 = puVar13[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar16 == 0);
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar15 << 6;
    uVar2 = *(undefined4 *)(*(long *)(lVar12 + 0x30) + uVar7 * 4);
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar7 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar14);
    }
    uVar6 = *(ulong *)(lVar5 + 0x28);
    func_0x000107c60684(uVar6,uVar2,4);
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a150e8);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar6 != uVar7) {
          uVar9 = uVar6;
        }
        bVar3 = (bool)(uVar6 == uVar7 | bVar3);
        uVar6 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar6 == 0xffffffffffffffff);
      uVar6 = ~uVar6;
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(undefined4 *)(*(long *)(lVar5 + 0x30) + uVar7 * 4) = uVar2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar7 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 101a14e88; end: 101a155ef;  */

void FUN_101a14e88(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar5 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,param_3);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101a150b4:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar5;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar16 = uVar16 & *puVar13;
  lVar1 = lVar5 + 0x40;
  lVar8 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a150e4);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_101a150b4;
        }
        uVar16 = puVar13[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar16 == 0);
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar15 << 6;
    uVar2 = *(undefined4 *)(*(long *)(lVar12 + 0x30) + uVar7 * 4);
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar7 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar14);
    }
    uVar6 = *(ulong *)(lVar5 + 0x28);
    func_0x000107c60684(uVar6,uVar2,4);
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a150e8);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar6 != uVar7) {
          uVar9 = uVar6;
        }
        bVar3 = (bool)(uVar6 == uVar7 | bVar3);
        uVar6 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar6 == 0xffffffffffffffff);
      uVar6 = ~uVar6;
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(undefined4 *)(*(long *)(lVar5 + 0x30) + uVar7 * 4) = uVar2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar7 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 101a155f0; end: 101a15607;  */

void FUN_101a155f0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a15608,0,0);
  return;
}



/* Entry: 101a15608; end: 101a156cf;  */

void FUN_101a15608(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101a15650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a156d0;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11042c9f8;
  func_0x000107c613fc(&UNK_11042c9f8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101a15a20,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a156d0; end: 101a1574f;  */

void FUN_101a156d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a15ab0,0,0);
  return;
}



/* Entry: 101a15750; end: 101a15767;  */

void FUN_101a15750(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a15768,0,0);
  return;
}



/* Entry: 101a15768; end: 101a1582f;  */

void FUN_101a15768(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101a157b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a15830;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11042ca20;
  func_0x000107c613fc(&UNK_11042ca20,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101a15a40,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a15830; end: 101a1586f;  */

void FUN_101a15830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a15870,0,0);
  return;
}



/* Entry: 101a15870; end: 101a15897;  */

void FUN_101a15870(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a1587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101a15898; end: 101a1595f;  */

void FUN_101a15898(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101a158e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a15960;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11042c9d0;
  func_0x000107c613fc(&UNK_11042c9d0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101a15a14,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a15960; end: 101a159bf;  */

void FUN_101a15960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a15ab8,0,0);
  return;
}



/* Entry: 101a159c0; end: 101a159f7;  */

void FUN_101a159c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c43fb4();
  func_0x000107c61180();
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 101a159f8; end: 101a15a5f;  */

void FUN_101a159f8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101a15a60; end: 101a15aaf;  */

void FUN_101a15a60(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101a15ab0; end: 101a15ac3;  */

void FUN_101a15ab0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a1587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101a15ac4; end: 101a162c3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a15ac4(undefined8 *param_1,byte param_2,byte param_3)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *******pppppppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *******pppppppuVar17;
  ulong uVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  long unaff_x20;
  undefined8 uVar21;
  undefined8 ******ppppppuVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 *****pppppuVar25;
  undefined8 *******pppppppuVar26;
  undefined8 *******pppppppuVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *******apppppppuStack_98 [7];
  
  puVar3 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000032;
  func_0x0001000a9a18(0xd000000000000032,0x800000010efc92c0);
  func_0x000107c61170(uVar4);
  lVar6 = *(long *)(unaff_x20 + _DAT_112deb960);
  lVar23 = lVar6;
  func_0x000107c42d48();
  func_0x000107c61180();
  lVar14 = lVar23;
  func_0x000107c42428();
  func_0x000107c61180();
  func_0x000107c615e8(lVar23);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112deb968);
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112deb970);
  uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112deb998);
  uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112deb9a0);
  lVar7 = 0;
  func_0x000101a159a0();
  func_0x000107c613fc();
  *(long *)(lVar7 + 0x10) = lVar14;
  *(undefined8 *)(lVar7 + 0x18) = uVar4;
  *(undefined8 *)(lVar7 + 0x20) = uVar21;
  *(undefined8 *)(lVar7 + 0x28) = uVar24;
  *(undefined8 *)(lVar7 + 0x30) = uVar28;
  *(byte *)(lVar7 + 0x38) = param_3;
  pppppppuVar8 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101a10cfc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61580(uVar24,2);
  func_0x000107c61580(uVar28,2);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar23 = lVar14;
  func_0x000107c615f0();
  func_0x000107c5b198();
  func_0x000107c61180();
  lVar9 = lVar23;
  func_0x000107c4ca10();
  func_0x000107c61180();
  func_0x000107c61170(lVar23);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a16294);
    (*pcVar2)();
  }
  apppppppuStack_98[0] = (undefined8 *******)0x0;
  uVar10 = 0;
  FUN_101a18384(0,0x112d512f8,&PTR_PTR_1126b25d8);
  pppppppuVar17 = apppppppuStack_98;
  func_0x000107c5fc4c(lVar9,pppppppuVar17,uVar10);
  pppppppuVar1 = apppppppuStack_98[0];
  if (apppppppuStack_98[0] == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a16298);
    (*pcVar2)();
  }
  func_0x000107c61170(lVar9);
  pppppppuVar19 = (undefined8 *******)((ulong)pppppppuVar1 & 0xffffffffffffff8);
  if ((ulong)pppppppuVar1 >> 0x3e == 0) {
    pppppppuVar27 = (undefined8 *******)pppppppuVar19[2];
  }
  else {
    pppppppuVar27 = pppppppuVar1;
    if (-1 < (long)pppppppuVar1) {
      pppppppuVar27 = pppppppuVar19;
    }
    func_0x000107c60480();
  }
  if (pppppppuVar27 != (undefined8 *******)0x0) {
    lVar23 = 4;
    do {
      ppppppuVar22 = (undefined8 ******)(lVar23 + -4);
      if (((ulong)pppppppuVar1 & 0xc000000000000001) == 0) {
        if (pppppppuVar19[2] <= ppppppuVar22) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a161e4);
          (*pcVar2)();
        }
        ppppppuVar16 = pppppppuVar1[lVar23];
        func_0x000107c61174();
      }
      else {
        ppppppuVar16 = ppppppuVar22;
        pppppppuVar17 = pppppppuVar1;
        func_0x000100fb10dc();
      }
      if (SCARRY8((long)ppppppuVar22,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a161cc);
        (*pcVar2)();
      }
      pppppppuVar20 = (undefined8 *******)(lVar23 + -3);
      ppppppuVar11 = ppppppuVar16;
      func_0x000107c4c9b4();
      func_0x000107c61174();
      pppppppuVar12 = pppppppuVar8;
      func_0x000107c61558();
      ppppppuVar22 = ppppppuVar11;
      apppppppuStack_98[0] = pppppppuVar8;
      func_0x000100f89a68();
      uVar18 = (ulong)~(uint)pppppppuVar17 & 1;
      if (SCARRY8((long)pppppppuVar8[2],uVar18)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a161d0);
        (*pcVar2)();
      }
      if ((long)pppppppuVar8[3] < (long)((long)pppppppuVar8[2] + uVar18)) {
        func_0x000101a1538c();
        ppppppuVar22 = ppppppuVar11;
        func_0x000100f89a68();
        if (((uint)pppppppuVar17 & 1) != ((uint)pppppppuVar12 & 1)) {
          func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a162b4);
          (*pcVar2)();
        }
joined_r0x000101a15e3c:
        uVar18 = (ulong)pppppppuVar17 & 1;
        pppppppuVar17 = pppppppuVar12;
        if (uVar18 != 0) goto LAB_101a15cd8;
LAB_101a15de8:
        pppppppuVar8 = apppppppuStack_98[0];
        apppppppuStack_98[0][((ulong)ppppppuVar22 >> 6) + 8] =
             (undefined8 ******)
             ((ulong)apppppppuStack_98[0][((ulong)ppppppuVar22 >> 6) + 8] |
             1L << ((ulong)ppppppuVar22 & 0x3f));
        apppppppuStack_98[0][6][(long)ppppppuVar22] = ppppppuVar11;
        apppppppuStack_98[0][7][(long)ppppppuVar22] = ppppppuVar16;
        func_0x000107c61170(ppppppuVar16);
        if (SCARRY8((long)pppppppuVar8[2],1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a161dc);
          (*pcVar2)();
        }
        pppppppuVar8[2] = (undefined8 ******)((long)pppppppuVar8[2] + 1);
        pppppppuVar17 = pppppppuVar12;
      }
      else {
        if (((ulong)pppppppuVar12 & 1) == 0) {
          pppppppuVar12 = pppppppuVar17;
          FUN_101a14744();
          goto joined_r0x000101a15e3c;
        }
        pppppppuVar12 = pppppppuVar17;
        if (((ulong)pppppppuVar17 & 1) == 0) goto LAB_101a15de8;
LAB_101a15cd8:
        pppppppuVar8 = apppppppuStack_98[0];
        pppppuVar25 = apppppppuStack_98[0][7][(long)ppppppuVar22];
        apppppppuStack_98[0][7][(long)ppppppuVar22] = ppppppuVar16;
        func_0x000107c61170(ppppppuVar16);
        func_0x000107c61170(pppppuVar25);
      }
      lVar23 = lVar23 + 1;
    } while (pppppppuVar20 != pppppppuVar27);
  }
  func_0x000107c61574(uVar24);
  func_0x000107c61574(uVar28);
  func_0x000107c6142c(pppppppuVar1);
  func_0x000107c615e8(lVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar21);
  *(undefined8 ********)(lVar7 + 0x40) = pppppppuVar8;
  func_0x000107c42d48();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112deb980);
  lVar23 = 0;
  func_0x000101a045f4();
  func_0x000107c613fc();
  puVar13 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar23 + 0x20) = puVar13;
  *(undefined8 *)(lVar23 + 0x28) = 0;
  *(undefined8 *)(lVar23 + 0x30) = 0;
  *(undefined8 *)(lVar23 + 0x38) = 0;
  *(undefined8 **)(lVar23 + 0x10) = param_1;
  *(undefined8 *)(lVar23 + 0x18) = uVar4;
  uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112deb988);
  uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112deb990);
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112deb9a8);
  uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112deb9b0);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112deb9b8);
  lVar14 = 0;
  FUN_101a11430();
  func_0x000107c613fc();
  *(undefined8 **)(lVar14 + 0x10) = param_1;
  *(long *)(lVar14 + 0x18) = lVar7;
  *(long *)(lVar14 + 0x20) = lVar6;
  *(undefined8 *)(lVar14 + 0x38) = 0;
  *(undefined8 *)(lVar14 + 0x40) = uVar4;
  *(long *)(lVar14 + 0x48) = lVar23;
  *(undefined ***)(lVar14 + 0x50) = &PTR_DAT_11042c730;
  *(undefined8 *)(lVar14 + 0x58) = uVar28;
  *(undefined8 *)(lVar14 + 0x60) = uVar24;
  *(byte *)(lVar14 + 0x68) = param_2 & 1;
  *(byte *)(lVar14 + 0x69) = param_3 & 1;
  *(undefined8 *)(lVar14 + 0x70) = uVar21;
  *(undefined8 *)(lVar14 + 0x78) = uVar29;
  *(undefined8 *)(lVar14 + 0x80) = uVar10;
  pppppppuVar8 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101a10aac();
  func_0x000107c615f0(uVar29);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar28);
  func_0x000107c6157c(uVar24);
  func_0x000107c6157c(uVar10);
  func_0x000107c615f0(uVar21);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a1629c);
    (*pcVar2)();
  }
  puVar15 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c6157c(lVar7);
  func_0x000107c61170(param_1);
  if (puVar15 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a162a0);
    (*pcVar2)();
  }
  apppppppuStack_98[0] = (undefined8 *******)0x0;
  uVar4 = 0;
  FUN_101a18384(0,0x112d55598,&PTR_PTR_1126b25d0);
  pppppppuVar17 = apppppppuStack_98;
  func_0x000107c5fc4c(puVar15,pppppppuVar17,uVar4);
  pppppppuVar1 = apppppppuStack_98[0];
  if (apppppppuStack_98[0] == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a162a4);
    (*pcVar2)();
  }
  func_0x000107c61170(puVar15);
  pppppppuVar19 = (undefined8 *******)((ulong)pppppppuVar1 & 0xffffffffffffff8);
  if ((ulong)pppppppuVar1 >> 0x3e == 0) {
    pppppppuVar27 = (undefined8 *******)pppppppuVar19[2];
  }
  else {
    pppppppuVar27 = pppppppuVar1;
    if (-1 < (long)pppppppuVar1) {
      pppppppuVar27 = pppppppuVar19;
    }
    func_0x000107c60480();
  }
  if (pppppppuVar27 != (undefined8 *******)0x0) {
    lVar23 = 4;
    do {
      ppppppuVar22 = (undefined8 ******)(lVar23 + -4);
      if (((ulong)pppppppuVar1 & 0xc000000000000001) == 0) {
        if (pppppppuVar19[2] <= ppppppuVar22) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a161e8);
          (*pcVar2)();
        }
        ppppppuVar16 = pppppppuVar1[lVar23];
        func_0x000107c61174();
        pppppppuVar12 = pppppppuVar17;
      }
      else {
        ppppppuVar16 = ppppppuVar22;
        pppppppuVar12 = pppppppuVar1;
        func_0x00010121c1ac();
      }
      if (SCARRY8((long)ppppppuVar22,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a161d4);
        (*pcVar2)();
      }
      pppppppuVar26 = (undefined8 *******)(lVar23 + -3);
      ppppppuVar22 = ppppppuVar16;
      func_0x000107c4e920();
      func_0x000107c61174();
      pppppppuVar20 = pppppppuVar8;
      func_0x000107c61558();
      ppppppuVar11 = ppppppuVar22;
      apppppppuStack_98[0] = pppppppuVar8;
      func_0x00010149a22c();
      uVar18 = (ulong)~(uint)pppppppuVar12 & 1;
      lVar9 = (long)pppppppuVar8[2] + uVar18;
      if (SCARRY8((long)pppppppuVar8[2],uVar18)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a161d8);
        (*pcVar2)();
      }
      if ((long)pppppppuVar8[3] < lVar9) {
        FUN_101a14e60(lVar9);
        ppppppuVar11 = ppppppuVar22;
        func_0x00010149a22c();
        pppppppuVar17 = pppppppuVar20;
        if (((uint)pppppppuVar12 & 1) != ((uint)pppppppuVar20 & 1)) {
          func_0x000107c60624(PTR___ss6UInt32VN_11034f020);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a162c4);
          (*pcVar2)();
        }
LAB_101a1615c:
        if (((ulong)pppppppuVar12 & 1) == 0) goto LAB_101a16164;
LAB_101a1606c:
        pppppppuVar8 = apppppppuStack_98[0];
        pppppuVar25 = apppppppuStack_98[0][7][(long)ppppppuVar11];
        apppppppuStack_98[0][7][(long)ppppppuVar11] = ppppppuVar16;
        func_0x000107c61170(ppppppuVar16);
        func_0x000107c61170(pppppuVar25);
      }
      else {
        pppppppuVar17 = pppppppuVar12;
        if (((ulong)pppppppuVar20 & 1) != 0) goto LAB_101a1615c;
        FUN_101a14444();
        if (((ulong)pppppppuVar12 & 1) != 0) goto LAB_101a1606c;
LAB_101a16164:
        pppppppuVar8 = apppppppuStack_98[0];
        apppppppuStack_98[0][((ulong)ppppppuVar11 >> 6) + 8] =
             (undefined8 ******)
             ((ulong)apppppppuStack_98[0][((ulong)ppppppuVar11 >> 6) + 8] |
             1L << ((ulong)ppppppuVar11 & 0x3f));
        *(int *)((long)apppppppuStack_98[0][6] + (long)ppppppuVar11 * 4) = (int)ppppppuVar22;
        apppppppuStack_98[0][7][(long)ppppppuVar11] = ppppppuVar16;
        func_0x000107c61170(ppppppuVar16);
        if (SCARRY8((long)pppppppuVar8[2],1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a161e0);
          (*pcVar2)();
        }
        pppppppuVar8[2] = (undefined8 ******)((long)pppppppuVar8[2] + 1);
      }
      lVar23 = lVar23 + 1;
    } while (pppppppuVar26 != pppppppuVar27);
  }
  func_0x000107c6142c(pppppppuVar1);
  *(undefined8 ********)(lVar14 + 0x28) = pppppppuVar8;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101a10ac0();
  *(undefined **)(lVar14 + 0x30) = puVar13;
  func_0x000107c61428(puVar3,apppppppuStack_98,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  func_0x0001000aa0a8(uVar5);
  func_0x000107c61574(lVar7);
  func_0x000107c61170(uVar4);
  return lVar14;
}



/* Entry: 101a162c4; end: 101a1631f; -[_TtC44SCSnapRenderNGSMESnapDocConverterServiceImpl31SnapRenderNGSMESnapDocConverter init] */

void FUN_101a162c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapRenderNGSMESnapDocConverterServiceImpl.SnapRenderNGSMESnapDocConverter"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a162f0);
  (*pcVar1)();
}



/* Entry: 101a16320; end: 101a163f7; -[_TtC44SCSnapRenderNGSMESnapDocConverterServiceImpl31SnapRenderNGSMESnapDocConverter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a1638c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a163ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a16390) */
/* WARNING: Removing unreachable block (ram,0x000101a163b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a16320(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112deb960));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112deb968));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112deb970));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112deb978));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112deb980));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112deb988));
  return;
}



/* Entry: 101a163f8; end: 101a16413;  */

void FUN_101a163f8(undefined8 param_1,undefined1 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a16414,0,0);
  return;
}



/* Entry: 101a16414; end: 101a16547;  */

/* WARNING: Removing unreachable block (ram,0x000101a16490) */

void FUN_101a16414(undefined8 *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x50) = param_1;
  func_0x000107c61428();
  uVar4 = *param_1;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000034;
  func_0x0001000a9a18(0xd000000000000034,0x800000010efc9280);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  func_0x000107c61170(uVar4);
  FUN_101a17e70(uVar10);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x98);
  lVar6 = *(long *)(unaff_x22 + 0x40);
  func_0x000109127d20();
  FUN_101a15ac4(lVar6,uVar1,uVar10);
  *(long *)(unaff_x22 + 0x60) = lVar6;
  lVar7 = lVar6;
  func_0x000109128660();
  lVar8 = 0x112deb9e8;
  func_0x0001000285a8(0x112deb9e8,&UNK_10d9b7a70);
  func_0x000107c61538();
  plVar9 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101a16548;
  bVar2 = (byte)lVar7;
  *(undefined1 *)((long)plVar9 + 0x57) = 1;
  *(byte *)((long)plVar9 + 0x56) = bVar2;
  plVar9[0x15] = lVar8;
  plVar9[0x16] = lVar6;
  *(byte *)((long)plVar9 + 0x55) = bVar2 ^ 1;
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  plVar9[0x17] = (long)plVar3;
  *plVar3 = (long)plVar9;
  plVar3[1] = (long)FUN_101a08428;
  plVar3[3] = lVar6;
  *(byte *)(plVar3 + 0xd) = bVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c770,0,0);
  return;
}



/* Entry: 101a16548; end: 101a165cb;  */

void FUN_101a16548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x78) = param_4;
    *(undefined8 *)(lVar2 + 0x80) = param_3;
    *(undefined8 *)(lVar2 + 0x88) = param_2;
    *(undefined8 *)(lVar2 + 0x90) = param_1;
    pcVar1 = FUN_101a165cc;
  }
  else {
    pcVar1 = FUN_101a1664c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a165cc; end: 101a1664b;  */

void FUN_101a165cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x50);
  func_0x000107c61428(puVar4,unaff_x22 + 0x28,0,0);
  uVar3 = *puVar4;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a16648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x88),
             *(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101a1664c; end: 101a1667f;  */

void FUN_101a1664c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101a1667c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a16680; end: 101a1669f;  */

void FUN_101a16680(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x99) = param_3;
  *(undefined1 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a166a0,0,0);
  return;
}



/* Entry: 101a166a0; end: 101a1679f;  */

/* WARNING: Removing unreachable block (ram,0x000101a1671c) */

void FUN_101a166a0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x50) = param_1;
  func_0x000107c61428();
  uVar4 = *param_1;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000029;
  func_0x0001000a9a18(0xd000000000000029,0x800000010efc9230);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  func_0x000107c61170(uVar4);
  FUN_101a17e70(uVar8);
  lVar6 = *(long *)(unaff_x22 + 0x40);
  FUN_101a15ac4(lVar6,*(undefined1 *)(unaff_x22 + 0x99),0);
  *(long *)(unaff_x22 + 0x60) = lVar6;
  plVar7 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101a167a0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar1 = *(undefined1 *)(unaff_x22 + 0x98);
  *(undefined1 *)((long)plVar7 + 0x57) = 0;
  *(undefined1 *)((long)plVar7 + 0x56) = 0;
  plVar7[0x15] = (long)puVar2;
  plVar7[0x16] = lVar6;
  *(undefined1 *)((long)plVar7 + 0x55) = uVar1;
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  plVar7[0x17] = (long)plVar3;
  *plVar3 = (long)plVar7;
  plVar3[1] = (long)FUN_101a08428;
  plVar3[3] = lVar6;
  *(undefined1 *)(plVar3 + 0xd) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c770,0,0);
  return;
}



/* Entry: 101a167a0; end: 101a16823;  */

void FUN_101a167a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x78) = param_4;
    *(undefined8 *)(lVar2 + 0x80) = param_3;
    *(undefined8 *)(lVar2 + 0x88) = param_2;
    *(undefined8 *)(lVar2 + 0x90) = param_1;
    uVar1 = 0x101a183dc;
  }
  else {
    uVar1 = 0x101a183c8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101a16824; end: 101a16847;  */

void FUN_101a16824(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xa1) = param_3;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a16848,0,0);
  return;
}



/* Entry: 101a16848; end: 101a16947;  */

/* WARNING: Removing unreachable block (ram,0x000101a168c4) */

void FUN_101a16848(undefined8 *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x58) = param_1;
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000029;
  func_0x0001000a9a18(0xd000000000000029,0x800000010efc9230);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  func_0x000107c61170(uVar3);
  FUN_101a17e70(uVar8);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  FUN_101a15ac4(lVar5,*(undefined1 *)(unaff_x22 + 0xa1),0);
  *(long *)(unaff_x22 + 0x68) = lVar5;
  plVar6 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101a16948;
  lVar7 = *(long *)(unaff_x22 + 0x48);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xa0);
  *(undefined1 *)((long)plVar6 + 0x57) = 0;
  *(undefined1 *)((long)plVar6 + 0x56) = 0;
  plVar6[0x15] = lVar7;
  plVar6[0x16] = lVar5;
  *(undefined1 *)((long)plVar6 + 0x55) = uVar1;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  plVar6[0x17] = (long)plVar2;
  *plVar2 = (long)plVar6;
  plVar2[1] = (long)FUN_101a08428;
  plVar2[3] = lVar5;
  *(undefined1 *)(plVar2 + 0xd) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c770,0,0);
  return;
}



/* Entry: 101a16948; end: 101a169cb;  */

void FUN_101a16948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x80) = param_4;
    *(undefined8 *)(lVar2 + 0x88) = param_3;
    *(undefined8 *)(lVar2 + 0x90) = param_2;
    *(undefined8 *)(lVar2 + 0x98) = param_1;
    pcVar1 = FUN_101a169cc;
  }
  else {
    pcVar1 = FUN_101a16a4c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a169cc; end: 101a16a4b;  */

void FUN_101a169cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x58);
  func_0x000107c61428(puVar4,unaff_x22 + 0x28,0,0);
  uVar3 = *puVar4;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a16a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x90),
             *(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 101a16a4c; end: 101a16a7f;  */

void FUN_101a16a4c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x000101a16a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a16a80; end: 101a16a97;  */

void FUN_101a16a80(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a16a98,0,0);
  return;
}



/* Entry: 101a16a98; end: 101a16b7f;  */

/* WARNING: Removing unreachable block (ram,0x000101a16b14) */

void FUN_101a16a98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x50) = param_1;
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000041;
  func_0x0001000a9a18(0xd000000000000041,0x800000010efc9150);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000107c61170(uVar1);
  FUN_101a17e70(uVar5);
  lVar3 = *(long *)(unaff_x22 + 0x40);
  FUN_101a15ac4(lVar3,1,0);
  *(long *)(unaff_x22 + 0x60) = lVar3;
  plVar4 = (long *)0x4b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101a16b80;
  plVar4[0x31] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a08e3c,0,0);
  return;
}



/* Entry: 101a16b80; end: 101a16beb;  */

void FUN_101a16b80(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    pcVar1 = FUN_101a16bec;
  }
  else {
    pcVar1 = FUN_101a16c68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a16bec; end: 101a16c67;  */

void FUN_101a16bec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x50);
  func_0x000107c61428(puVar4,unaff_x22 + 0x28,0,0);
  uVar3 = *puVar4;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a16c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101a16c68; end: 101a16c9b;  */

void FUN_101a16c68(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101a16c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a16c9c; end: 101a16d03;  */

void FUN_101a16c9c(long param_1,undefined1 param_2,undefined1 param_3)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101a183cc;
  *(undefined1 *)((long)plVar1 + 0x99) = param_3;
  *(undefined1 *)(plVar1 + 0x13) = param_2;
  plVar1[8] = param_1;
  plVar1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a166a0,0,0);
  return;
}



/* Entry: 101a16d04; end: 101a16d7b;  */

void FUN_101a16d04(long param_1,undefined1 param_2,undefined1 param_3,long param_4)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a16d7c;
  plVar1[9] = param_4;
  plVar1[10] = lVar2;
  *(undefined1 *)((long)plVar1 + 0xa1) = param_3;
  *(undefined1 *)(plVar1 + 0x14) = param_2;
  plVar1[8] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a16848,0,0);
  return;
}



/* Entry: 101a16d7c; end: 101a16deb;  */

void FUN_101a16d7c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a16de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a16dec; end: 101a16e3b;  */

void FUN_101a16dec(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a16e3c;
  plVar1[8] = param_1;
  plVar1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a16a98,0,0);
  return;
}



/* Entry: 101a16e3c; end: 101a16e83;  */

void FUN_101a16e3c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a16e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a16e84; end: 101a1715f;  */

undefined * FUN_101a16e84(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 unaff_x20;
  undefined1 auStack_c8 [80];
  undefined *puStack_78;
  undefined1 auStack_70 [32];
  
  uVar5 = unaff_x20;
  func_0x000107c614f0();
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c40794(param_1);
  func_0x000107c60234(auStack_70);
  func_0x000107c615e8(param_1);
  uVar2 = 0;
  FUN_101a18384(0,0x112d50c78,&PTR_PTR_1126b25c0);
  puVar10 = PTR___sypN_11034f1a8;
  ppuVar3 = &puStack_78;
  func_0x000107c6147c(ppuVar3,auStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if ((int)ppuVar3 == 0) {
    func_0x000107c614e4(uVar5);
    puVar6 = auStack_70;
    func_0x000107c5fb18(puVar6,uVar5);
    lVar7 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar11 = auStack_c8;
    func_0x000107c61534();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar7 + 0x20) = uVar2;
    puVar4 = PTR___sSSN_11034da80;
    *(undefined **)(lVar7 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar7 + 0x28) = puVar11;
    *(undefined8 *)(lVar7 + 0x30) = 0xd000000000000016;
    *(undefined8 *)(lVar7 + 0x38) = 0x800000010efc9260;
    lVar8 = lVar7;
    func_0x000100214a84(lVar7);
    func_0x000107c61588(lVar7);
    func_0x000100f15a0c((undefined8 *)(lVar7 + 0x20));
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c5fadc(puVar6,uVar5);
    func_0x000107c6142c(uVar5);
    lVar7 = lVar8;
    func_0x000107c5f9dc(lVar8,puVar4,puVar10 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar8);
    func_0x000107c466bc(puVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar7);
    puVar10 = puVar9;
    func_0x000107c5ed2c(puVar9);
    func_0x000107c61170(puVar9);
    func_0x000107c3fef8(puVar1);
    func_0x000107c61170(puVar10);
    puVar10 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
  }
  else {
    puVar10 = &UNK_11042cab8;
    func_0x000107c613fc(&UNK_11042cab8,0x30,7);
    *(undefined8 *)(puVar10 + 0x10) = unaff_x20;
    *(undefined **)(puVar10 + 0x18) = puStack_78;
    puVar10[0x20] = param_2 & 1;
    *(undefined **)(puVar10 + 0x28) = puVar1;
    func_0x000107c61174();
    puVar4 = puStack_78;
    func_0x000107c61174(puStack_78);
    func_0x000107c61174(puVar1);
    uVar5 = 0xb2;
    func_0x0001001ca524(0xb2,2,0x40,4,0,0,&UNK_10d9b7a90,puVar10,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(uVar5);
    puVar10 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = puVar4;
  }
  func_0x000107c61170(puVar1);
  return puVar10;
}



/* Entry: 101a17160; end: 101a171c7;  */

void FUN_101a17160(undefined8 param_1,long param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_5;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a171c8;
  *(undefined1 *)(plVar1 + 0x13) = param_4;
  plVar1[8] = param_3;
  plVar1[9] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a16414,0,0);
  return;
}



/* Entry: 101a171c8; end: 101a1724b;  */

void FUN_101a171c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    *(undefined8 *)(lVar2 + 0x30) = param_3;
    *(undefined8 *)(lVar2 + 0x38) = param_2;
    *(undefined8 *)(lVar2 + 0x40) = param_1;
    pcVar1 = FUN_101a1724c;
  }
  else {
    pcVar1 = FUN_101a17318;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a1724c; end: 101a17317;  */

void FUN_101a1724c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000103fb0954(0);
  func_0x000107c610f8();
  uVar4 = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  func_0x000100de78a0(uVar3,uVar2);
  uVar6 = uVar5;
  func_0x000103fb0724(uVar5,uVar1,uVar3,uVar2);
  func_0x000107c3fefc(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x0001000b44c0(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a17314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a17318; end: 101a17377;  */

void FUN_101a17318(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c3fef8(uVar2,param_2,uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a17374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a17378; end: 101a173db; -[_TtC44SCSnapRenderNGSMESnapDocConverterServiceImpl31SnapRenderNGSMESnapDocConverter convertForPlaybackWithSnapDoc:isVideo:] */

void FUN_101a17378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a16e84(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a173dc; end: 101a1744b;  */

void FUN_101a173dc(undefined8 param_1,long param_2,long param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_6;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a1744c;
  *(undefined1 *)((long)plVar1 + 0x99) = param_5;
  *(undefined1 *)(plVar1 + 0x13) = param_4;
  plVar1[8] = param_3;
  plVar1[9] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a166a0,0,0);
  return;
}



/* Entry: 101a1744c; end: 101a174cf;  */

void FUN_101a1744c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    *(undefined8 *)(lVar2 + 0x30) = param_3;
    *(undefined8 *)(lVar2 + 0x38) = param_2;
    *(undefined8 *)(lVar2 + 0x40) = param_1;
    pcVar1 = (code *)0x101a183d0;
  }
  else {
    pcVar1 = FUN_101a183c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a174d0; end: 101a1760b; -[_TtC44SCSnapRenderNGSMESnapDocConverterServiceImpl31SnapRenderNGSMESnapDocConverter convertWithSnapDoc:bakeInAllEdits:isVideo:] */

void FUN_101a174d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  puVar2 = &UNK_11042ca90;
  func_0x000107c613fc(&UNK_11042ca90,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar2[0x20] = param_4;
  puVar2[0x21] = param_5;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  uVar3 = 0xb2;
  func_0x0001001ca524(0xb2,2,0x40,4,0,0,&UNK_10d9b7a80,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  puVar2 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101a1760c; end: 101a17833;  */

undefined * FUN_101a1760c(undefined8 param_1,byte param_2,byte param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  if (param_4 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar8 = param_4;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    func_0x000101a17c30(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a17834);
      (*pcVar3)();
    }
    if ((param_4 & 0xc000000000000001) == 0) {
      uVar9 = *(ulong *)(puVar7 + 0x10);
      do {
        uVar2 = uVar9 + 1;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
          func_0x000101a17c30(1 < *(ulong *)(puVar7 + 0x18),uVar2,1);
        }
        *(ulong *)(puVar7 + 0x10) = uVar2;
        uVar8 = uVar8 - 1;
        uVar9 = uVar2;
      } while (uVar8 != 0);
    }
    else {
      uVar9 = 0;
      do {
        FUN_101a0ff98(uVar9,param_4);
        func_0x000107c615e8();
        lVar1 = *(ulong *)(puVar7 + 0x10) + 1;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= *(ulong *)(puVar7 + 0x10)) {
          func_0x000101a17c30(1 < *(ulong *)(puVar7 + 0x18),lVar1,1);
        }
        uVar9 = uVar9 + 1;
        *(long *)(puVar7 + 0x10) = lVar1;
      } while (uVar8 != uVar9);
    }
  }
  puVar4 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = &UNK_11042ca68;
  func_0x000107c613fc(&UNK_11042ca68,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  puVar5[0x20] = param_2 & 1;
  puVar5[0x21] = param_3 & 1;
  *(undefined **)(puVar5 + 0x28) = puVar7;
  *(undefined **)(puVar5 + 0x30) = puVar4;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar4);
  uVar6 = 0xb2;
  func_0x0001001ca524(0xb2,2,0x40,4,0,0,&UNK_10d9b7a68,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar6);
  puVar7 = puVar4;
  func_0x000107c43bf4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar7;
}



/* Entry: 101a17834; end: 101a17857;  */

void FUN_101a17834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa9) = param_5;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a17858,0,0);
  return;
}



/* Entry: 101a17858; end: 101a1797b;  */

/* WARNING: Removing unreachable block (ram,0x000101a178d4) */

void FUN_101a17858(undefined8 *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x60) = param_1;
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000029;
  func_0x0001000a9a18(0xd000000000000029,0x800000010efc9230);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  func_0x000107c61170(uVar3);
  FUN_101a17e70(uVar8);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  FUN_101a15ac4(lVar5,*(undefined1 *)(unaff_x22 + 0xa9),0);
  *(long *)(unaff_x22 + 0x70) = lVar5;
  plVar6 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101a1797c;
  lVar7 = *(long *)(unaff_x22 + 0x50);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xa8);
  *(undefined1 *)((long)plVar6 + 0x57) = 0;
  *(undefined1 *)((long)plVar6 + 0x56) = 0;
  plVar6[0x15] = lVar7;
  plVar6[0x16] = lVar5;
  *(undefined1 *)((long)plVar6 + 0x55) = uVar1;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  plVar6[0x17] = (long)plVar2;
  *plVar2 = (long)plVar6;
  plVar2[1] = (long)FUN_101a08428;
  plVar2[3] = lVar5;
  *(undefined1 *)(plVar2 + 0xd) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c770,0,0);
  return;
}



/* Entry: 101a1797c; end: 101a179ff;  */

void FUN_101a1797c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x88) = param_4;
    *(undefined8 *)(lVar2 + 0x90) = param_3;
    *(undefined8 *)(lVar2 + 0x98) = param_2;
    *(undefined8 *)(lVar2 + 0xa0) = param_1;
    pcVar1 = FUN_101a17a00;
  }
  else {
    pcVar1 = FUN_101a17b08;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a17a00; end: 101a17b07;  */

void FUN_101a17a00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x60);
  func_0x000107c61428(puVar5,unaff_x22 + 0x28,0,0);
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  func_0x0001000aa0a8(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000103fb0954(0);
  func_0x000107c610f8();
  uVar7 = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar8);
  func_0x000100de78a0(uVar4,uVar2);
  uVar9 = uVar8;
  func_0x000103fb0724(uVar8,uVar1,uVar4,uVar2);
  func_0x000107c3fefc(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x0001000b44c0(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a17b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a17b08; end: 101a17b6f;  */

void FUN_101a17b08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c3fef8(uVar2,param_2,uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a17b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a17b70; end: 101a17c13; -[_TtC44SCSnapRenderNGSMESnapDocConverterServiceImpl31SnapRenderNGSMESnapDocConverter convertWithSnapDoc:bakeInAllEdits:isVideo:ignoringEdits:] */

void FUN_101a17b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103fb0314(0);
  func_0x000107c5fc54(param_6,uVar1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a1760c(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a17c14; end: 101a17c4b;  */

void FUN_101a17c14(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101a17c4c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101a17c4c; end: 101a17d7f;  */

undefined * FUN_101a17c4c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a17d80);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_101a0fcbc();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101a18384(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101a17d80; end: 101a17e6f;  */

undefined * FUN_101a17d80(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a17e70);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112deb9e8;
    func_0x0001000285a8(0x112deb9e8,&UNK_10d9b7a70);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101a17e70; end: 101a18183;  */

void FUN_101a17e70(undefined *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long lVar12;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  ulong uStack_58;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a1817c);
    (*pcVar2)();
  }
  puVar4 = param_1;
  lStack_c8 = lVar3;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar4 == (undefined *)0x0) {
    FUN_101a18384(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  func_0x000107c600f4(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(puVar4);
  func_0x000107c5ed4c(auStack_80);
  puVar4 = PTR___sypN_11034f1a8;
  do {
    if (lStack_68 == 0) {
LAB_101a18144:
      (**(code **)(lVar12 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_c8);
      return;
    }
    func_0x000100102924(auStack_80,auStack_a0);
    func_0x0001000bb420(auStack_a0,&uStack_c0);
    uVar5 = 0;
    FUN_101a18384(0,0x112d55598,&PTR_PTR_1126b25d0);
    puVar6 = &uStack_58;
    func_0x000107c6147c(puVar6,&uStack_c0,puVar4 + 8,uVar5,6);
    uVar9 = uStack_58;
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000100183ab8(auStack_a0);
    }
    else {
      uVar7 = uStack_58;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar7 == 0) {
        func_0x000100183ab8(auStack_a0);
      }
      else {
        uVar8 = uVar7;
        func_0x000107c44978();
        if ((uVar8 & 1) != 0) {
          uStack_c0 = 0;
          uStack_b8 = 0xe000000000000000;
          func_0x000107c602fc(0x76);
          func_0x000107c5fb78(0xd000000000000043,0x800000010efc91a0);
          uVar8 = uVar9;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (uVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101a18180);
            (*pcVar2)();
          }
          uVar10 = uVar8;
          func_0x000107c4c99c();
          func_0x000107c61180();
          func_0x000107c61170(uVar8);
          if (uVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101a18184);
            (*pcVar2)();
          }
          func_0x000107c4c9b4();
          func_0x000107c61170(uVar10);
          puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
          func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                              PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar4);
          puVar11 = (undefined8 *)0xd000000000000031;
          func_0x000107c5fb78(0xd000000000000031,0x800000010efc91f0);
          uVar1 = uStack_b8;
          uVar5 = uStack_c0;
          func_0x000101a058d8();
          func_0x000107c613f8(&UNK_11042c930,puVar11,0,0);
          *puVar11 = uVar5;
          puVar11[1] = uVar1;
          *(undefined1 *)(puVar11 + 2) = 3;
          func_0x000107c61654();
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar9);
          func_0x000100183ab8(auStack_a0);
          goto LAB_101a18144;
        }
        func_0x000100183ab8(auStack_a0);
        func_0x000107c61170(uVar9);
        uVar9 = uVar7;
      }
      func_0x000107c61170(uVar9);
    }
    func_0x000107c5ed4c(auStack_80);
  } while( true );
}



/* Entry: 101a18184; end: 101a18213;  */

void FUN_101a18184(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x21);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar7 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x101a183d8;
  plVar7[10] = lVar2;
  plVar7[0xb] = lVar4;
  *(undefined1 *)((long)plVar7 + 0xa9) = uVar6;
  *(undefined1 *)(plVar7 + 0x15) = uVar5;
  plVar7[8] = lVar1;
  plVar7[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a17858,0,0);
  return;
}


