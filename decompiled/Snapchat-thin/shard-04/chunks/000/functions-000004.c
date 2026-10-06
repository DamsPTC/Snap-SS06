/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f460c8; end: 102f46113;  */

void FUN_102f460c8(long param_1,long param_2)

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



/* Entry: 102f46114; end: 102f46167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102f46114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x000107c610f8();
  func_0x000107c614f0(param_1);
  puVar3 = auStack_40;
  *(undefined8 *)(unaff_x20 + _DAT_112f29e40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29e60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29e50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29e68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29e48) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29e58);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c615f0();
  func_0x000100b64c10(param_2,param_3);
  uVar2 = param_1;
  func_0x000107c4f068();
  *(undefined8 *)(unaff_x20 + _DAT_112f29e38) = uVar2;
  FUN_102f478d8();
  uStack_38 = uVar2;
  func_0x000107c61154(auStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  func_0x000107c53dec();
  FUN_102f4629c();
  func_0x00010058d43c(param_2,param_3);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_1);
  return puVar3;
}



/* Entry: 102f46168; end: 102f46177; -[SCCalendarPageContainerViewController disablePullDownToDismiss] */

undefined8 FUN_102f46168(void)

{
  return 0;
}



/* Entry: 102f46178; end: 102f46207; -[SCCalendarPageContainerViewController initWithPageProvider:trayDismissalCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102f46178(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  code *pcVar5;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar5 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1105ec2d8;
    func_0x000107c613fc(&UNK_1105ec2d8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_4;
    pcVar5 = FUN_102f47964;
  }
  func_0x000107c614f0(param_3);
  func_0x000107c615f0();
  puVar3 = &stack0xffffffffffffffc0;
  *(undefined8 *)(param_1 + _DAT_112f29e40) = 0;
  *(undefined8 *)(param_1 + _DAT_112f29e60) = 0;
  *(undefined8 *)(param_1 + _DAT_112f29e50) = 0;
  *(undefined8 *)(param_1 + _DAT_112f29e68) = 0;
  *(undefined8 *)(param_1 + _DAT_112f29e48) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f29e58);
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c615f0();
  func_0x000100b64c10(pcVar5,puVar4);
  uVar2 = param_3;
  func_0x000107c4f068();
  *(undefined8 *)(param_1 + _DAT_112f29e38) = uVar2;
  FUN_102f478d8();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  func_0x000107c53dec();
  FUN_102f4629c();
  func_0x00010058d43c(pcVar5,puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 102f46208; end: 102f4628f; -[SCCalendarPageContainerViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f46208(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f29e40) = 0;
  *(undefined8 *)(param_1 + _DAT_112f29e60) = 0;
  *(undefined8 *)(param_1 + _DAT_112f29e50) = 0;
  *(undefined8 *)(param_1 + _DAT_112f29e68) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCCalendarPageImpl/SCCalendarPageContainerViewController.swift",0x3e,2,0x3d,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f46290);
  (*pcVar1)();
}



/* Entry: 102f46290; end: 102f46297; -[SCCalendarPageContainerViewController modalPresentationStyle] */

undefined8 FUN_102f46290(void)

{
  return 4;
}



/* Entry: 102f46298; end: 102f4629b; -[SCCalendarPageContainerViewController setModalPresentationStyle:] */

void FUN_102f46298(void)

{
  return;
}



/* Entry: 102f4629c; end: 102f46337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f4629c(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = _DAT_112f29e60;
  if (*(long *)(unaff_x20 + _DAT_112f29e60) == 0) {
    func_0x000107c30a3c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = param_1;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar2);
    if (param_1 != 0) {
      func_0x000107c53224(param_1);
      func_0x000107c615e8(param_1);
    }
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x000107c54b74(0x3ff0000000000000);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c219b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 102f46338; end: 102f46413;  */

/* WARNING: Possible PIC construction at 0x000102f46394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f46398) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f46338(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (*(int *)(unaff_x20 + _DAT_112f29e38) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  FUN_102f478d8();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_loadView_112604be0);
  return;
}



/* Entry: 102f46414; end: 102f464ab; -[SCCalendarPageContainerViewController loadView] */

void FUN_102f46414(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102f46338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f464ac; end: 102f464d3; -[SCCalendarPageContainerViewController viewDidLoad] */

void FUN_102f464ac(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102f4643c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f464d4; end: 102f46537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102f464d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f29e68;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f29e68);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_102f46538();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102f46538; end: 102f46823;  */

undefined * FUN_102f46538(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f46814);
    (*pcVar1)();
  }
  func_0x000107c3d72c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  puVar4 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f46818);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c515ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar6;
  func_0x000107c5cbe4(lVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puVar7 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar5);
  *(undefined **)(lVar3 + 0x20) = puVar7;
  puVar4 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f4681c);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  puVar7 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar6);
  *(undefined **)(lVar3 + 0x28) = puVar7;
  puVar4 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar3 + 0x30) = puVar7;
    puVar4 = puVar2;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = param_1;
      func_0x000107c5ce8c(param_1);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      puVar8 = puVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar5);
      *(undefined **)(lVar3 + 0x38) = puVar8;
      uVar9 = 0;
      FUN_102f47970(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = lVar3;
      func_0x000107c5fc48(lVar3,uVar9);
      func_0x000107c61574(lVar3);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(lVar5);
      return puVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f46824);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f46820);
  (*pcVar1)();
}



/* Entry: 102f46824; end: 102f46a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f46824(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_70;
  long lStack_68;
  
  lVar1 = _DAT_112f29e50;
  plVar4 = &lStack_70;
  if ((*(long *)(unaff_x20 + _DAT_112f29e50) == 0) &&
     (lVar7 = *(long *)(unaff_x20 + _DAT_112f29e40), lVar7 != 0)) {
    lVar3 = 0;
    FUN_102f47c58();
    lVar9 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar9 + _DAT_112f29ec0) = 0;
    *(long *)(lVar9 + _DAT_112f29ec8) = lVar7;
    puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_70 = lVar9;
    lStack_68 = lVar3;
    func_0x000107c61174(lVar7);
    func_0x000107c61174();
    func_0x000107c61154(&lStack_70,puVar6,0,0);
    func_0x000107c53dec();
    func_0x000107c5a050(*(undefined8 *)((long)plVar4 + _DAT_112f29ec8));
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f29e48);
    uVar5 = 0;
    func_0x000102f44690(0);
    func_0x000107c61480(uVar8,uVar5);
    puVar6 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e8c();
    uVar10 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar6;
    func_0x000107c61174();
    func_0x000107c61170(uVar10);
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c5a074(puVar6);
      func_0x000107c61170(puVar6);
    }
    lVar9 = *(long *)(unaff_x20 + lVar1);
    if (lVar9 == 0) {
      uVar5 = 0;
    }
    else {
      func_0x000107c61480(uVar8,uVar5);
      func_0x000107c52684(lVar9);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    func_0x000107c5a05c(uVar5);
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x000107c5a070();
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f46a50);
      (*pcVar2)();
    }
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(plVar4);
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 102f46a50; end: 102f46e43;  */

/* WARNING: Possible PIC construction at 0x000102f46ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f46df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f46d58) */
/* WARNING: Removing unreachable block (ram,0x000102f46d6c) */
/* WARNING: Removing unreachable block (ram,0x000102f46df0) */
/* WARNING: Removing unreachable block (ram,0x000102f46d0c) */
/* WARNING: Removing unreachable block (ram,0x000102f46cec) */
/* WARNING: Removing unreachable block (ram,0x000102f46c84) */
/* WARNING: Removing unreachable block (ram,0x000102f46e40) */
/* WARNING: Removing unreachable block (ram,0x000102f46cb8) */
/* WARNING: Removing unreachable block (ram,0x000102f46c64) */
/* WARNING: Removing unreachable block (ram,0x000102f46c14) */
/* WARNING: Removing unreachable block (ram,0x000102f46e3c) */
/* WARNING: Removing unreachable block (ram,0x000102f46c48) */
/* WARNING: Removing unreachable block (ram,0x000102f46bf4) */
/* WARNING: Removing unreachable block (ram,0x000102f46ba4) */
/* WARNING: Removing unreachable block (ram,0x000102f46e38) */
/* WARNING: Removing unreachable block (ram,0x000102f46bd8) */
/* WARNING: Removing unreachable block (ram,0x000102f46b84) */
/* WARNING: Removing unreachable block (ram,0x000102f46b10) */
/* WARNING: Removing unreachable block (ram,0x000102f46e34) */
/* WARNING: Removing unreachable block (ram,0x000102f46b68) */
/* WARNING: Removing unreachable block (ram,0x000102f46acc) */
/* WARNING: Removing unreachable block (ram,0x000102f46e30) */
/* WARNING: Removing unreachable block (ram,0x000102f46afc) */
/* WARNING: Removing unreachable block (ram,0x000102f46df8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f46a50(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f29e40) == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f46e30);
  (*pcVar1)();
}



/* Entry: 102f46e44; end: 102f46f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f46e44(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long *plVar4;
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar4 = alStack_50;
  if (*(int *)(unaff_x20 + _DAT_112f29e38) == 0) {
    lVar3 = param_1;
    FUN_102f46a50();
  }
  else {
    FUN_102f46824();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f46f30);
      (*pcVar1)();
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar2);
    lVar3 = unaff_x20;
    func_0x000107c49aa8();
    if ((int)lVar3 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112f29e50);
      if (lVar3 != 0) {
        func_0x000107c4ef24();
      }
    }
    plVar4 = alStack_40;
  }
  FUN_102f478d8();
  *plVar4 = unaff_x20;
  plVar4[1] = lVar3;
  func_0x000107c61154(plVar4,PTR_s_viewWillAppear__1126853f0,(uint)param_1 & 1);
  return;
}



/* Entry: 102f46f30; end: 102f47007; -[SCCalendarPageContainerViewController viewWillAppear:] */

void FUN_102f46f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102f46e44(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f47008; end: 102f47037; -[SCCalendarPageContainerViewController viewDidAppear:] */

void FUN_102f47008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000102f46f60(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f47038; end: 102f4712b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f47038(uint param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  FUN_102f478d8();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewWillDisappear__112685438,param_1 & 1);
  lVar3 = unaff_x20;
  func_0x000107c49aa0();
  if ((int)lVar3 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f4712c);
      (*pcVar1)();
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar2);
    if (*(long *)(unaff_x20 + _DAT_112f29e50) != 0) {
      func_0x000107c42018();
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112f29e48);
    func_0x000107c4dff8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))();
      func_0x000107c60bd0(lVar3);
    }
  }
  return;
}



/* Entry: 102f4712c; end: 102f471bf; -[SCCalendarPageContainerViewController viewWillDisappear:] */

void FUN_102f4712c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102f47038(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f471c0; end: 102f4724b; -[SCCalendarPageContainerViewController requestAnimatedDismiss] */

void FUN_102f471c0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102f4715c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f4724c; end: 102f4727b; -[SCCalendarPageContainerViewController viewDidDisappear:] */

void FUN_102f4724c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000102f471e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f4727c; end: 102f47283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f4727c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if ((param_2 == 2) && (*(int *)(unaff_x20 + _DAT_112f29e38) == 1)) {
    pcVar1 = *(code **)(unaff_x20 + _DAT_112f29e58);
    if (pcVar1 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f29e58))[1];
      func_0x000107c6157c(uVar2);
      (*pcVar1)();
      if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar2);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 102f47284; end: 102f472d7; -[SCCalendarPageContainerViewController tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x000102f472c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f472c4) */

void FUN_102f47284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102f478f8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102f472d8; end: 102f4733f;  */

double FUN_102f472d8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long unaff_x20;
  double dVar2;
  double in_d3;
  
  dVar2 = -1.0;
  if (param_2 == 8) {
    func_0x000107c5de64(0xbff0000000000000);
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f47340);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    dVar2 = in_d3 * 0.7;
  }
  return dVar2;
}



/* Entry: 102f47340; end: 102f473b3; -[SCCalendarPageContainerViewController tray:heightForPosition:] */

double FUN_102f47340(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  double dVar3;
  double in_d3;
  
  dVar3 = -1.0;
  if (param_4 == 8) {
    func_0x000107c61174(0xbff0000000000000);
    lVar2 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f473b4);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    dVar3 = in_d3 * 0.7;
  }
  return dVar3;
}



/* Entry: 102f473b4; end: 102f47413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f473b4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f29e48);
  uVar1 = 0;
  func_0x000102f44690(0);
  func_0x000107c61480(lVar2,uVar1);
  if ((lVar2 != 0) && (*(char *)(lVar2 + _DAT_112f29c30) == '\x01')) {
    FUN_102f464d4();
  }
  return;
}



/* Entry: 102f47414; end: 102f47493; -[SCCalendarPageContainerViewController trayHostLayoutGuide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f47414(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112f29e48);
  uVar1 = 0;
  func_0x000102f44690(0);
  func_0x000107c61480(lVar2,uVar1);
  if ((lVar2 != 0) && (*(char *)(lVar2 + _DAT_112f29c30) == '\x01')) {
    func_0x000107c61174(param_1);
    FUN_102f464d4();
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102f47494; end: 102f4749b;  */

void FUN_102f47494(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f4749c; end: 102f4749f; -[SCCalendarPageContainerViewController cardToExpandTransition] */

void FUN_102f4749c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102f474a0; end: 102f474e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102f474a0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112f29e40);
  if ((uVar1 != 0 && param_1 == uVar1) && (func_0x000107c3f42c(uVar1,param_2,1), (uVar1 & 1) != 0))
  {
    return 0;
  }
  return 1;
}



/* Entry: 102f474e8; end: 102f47527; -[SCCalendarPageContainerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102f474e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f29e40);
  if ((lVar1 != 0 && param_3 == lVar1) && (func_0x000107c3f42c(lVar1,param_2,1), (int)lVar1 != 0)) {
    return 0;
  }
  return 1;
}



/* Entry: 102f47528; end: 102f47537;  */

void FUN_102f47528(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102f47538; end: 102f47547; -[SCCalendarPageContainerViewController cardTransitionWillBeginWithView:] */

void FUN_102f47538(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 102f47548; end: 102f47553; -[SCCalendarPageContainerViewController cardTransitionEndedWithView:transitionType:] */

void FUN_102f47548(void)

{
  return;
}



/* Entry: 102f47554; end: 102f4755b; -[SCCalendarPageContainerViewController pageViewName] */

undefined8 FUN_102f47554(void)

{
  return 0xea;
}



/* Entry: 102f4755c; end: 102f475b7; -[SCCalendarPageContainerViewController initWithNibName:bundle:] */

void FUN_102f4755c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPageImpl.CalendarPageContainerViewController",0x36,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f47588);
  (*pcVar1)();
}



/* Entry: 102f475b8; end: 102f4769f; -[SCCalendarPageContainerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102f475e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f47604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f475e8) */
/* WARNING: Removing unreachable block (ram,0x000102f47608) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f475b8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f29e48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f29e40));
  return;
}



/* Entry: 102f476a0; end: 102f47707; -[SCCalendarPageContainerViewController defaultProjectNameV3] */

void FUN_102f476a0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102f47634();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102f47708; end: 102f4777f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102f47708(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f29e48);
  uVar1 = 0;
  func_0x000102f44690(0);
  func_0x000107c61480(lVar3,uVar1);
  if ((lVar3 == 0) || (*(int *)(lVar3 + _DAT_112f29c20) != 5)) {
    uVar2 = 0xe90000000000006e;
    uVar1 = 0x616c502070616e53;
  }
  else {
    uVar1 = 0;
    uVar2 = 0xe000000000000000;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 102f47780; end: 102f478d7; -[SCCalendarPageContainerViewController defaultSubProjectName] */

void FUN_102f47780(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102f47708();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102f478d8; end: 102f478f7;  */

void FUN_102f478d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ad180);
  return;
}



/* Entry: 102f478f8; end: 102f47963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f478f8(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if ((param_1 == 2) && (*(int *)(unaff_x20 + _DAT_112f29e38) == 1)) {
    pcVar1 = *(code **)(unaff_x20 + _DAT_112f29e58);
    if (pcVar1 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f29e58))[1];
      func_0x000107c6157c(uVar2);
      (*pcVar1)();
      if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar2);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 102f47964; end: 102f4796f;  */

void FUN_102f47964(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102f4796c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102f47970; end: 102f479af;  */

void FUN_102f47970(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102f479b0; end: 102f47a27; -[SCCalendarParticipantsViewerViewController initWithValdiView:] */

undefined1 * FUN_102f479b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_30;
  uVar2 = param_1;
  func_0x000102f47adc();
  puVar1 = PTR_s_initWithValdiView__1125f5a88;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_30,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 102f47a28; end: 102f47a7f; -[SCCalendarParticipantsViewerViewController initWithCoder:] */

void FUN_102f47a28(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCCalendarPageImpl/SCCalendarParticipantsViewerViewController.swift",0x43,2,
                      0x11,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f47a80);
  (*pcVar1)();
}



/* Entry: 102f47a80; end: 102f47afb; -[SCCalendarParticipantsViewerViewController initWithNibName:bundle:] */

void FUN_102f47a80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPageImpl.CalendarParticipantsViewerViewController",0x3b,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f47aac);
  (*pcVar1)();
}



/* Entry: 102f47afc; end: 102f47c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102f47afc(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f29ec0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29ec8) = param_1;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c61154(auStack_40,puVar1,0,0);
  func_0x000107c61180();
  func_0x000107c53dec();
  func_0x000107c5a050(*(undefined8 *)(puVar2 + _DAT_112f29ec8));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102f47c58; end: 102f47c77;  */

void FUN_102f47c58(void)

{
  func_0x000107c61168(&PTR_PTR_1128ad408);
  return;
}



/* Entry: 102f47c78; end: 102f47c9f; -[SCCalendarTrayViewController initWithView:] */

void FUN_102f47c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000102f47bac();
  return;
}



/* Entry: 102f47ca0; end: 102f47d03; -[SCCalendarTrayViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f47ca0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f29ec0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCCalendarPageImpl/SCCalendarTrayViewController.swift",0x35,2,0x18,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f47d04);
  (*pcVar1)();
}



/* Entry: 102f47d04; end: 102f4800f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f47d04(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  FUN_102f47c58();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_loadView_112604be0);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f48000);
    (*pcVar1)();
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f29ec8);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  func_0x000107c5a050(uVar8);
  lVar2 = 0x112d360b8;
  FUN_102f480dc(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  uVar7 = uVar8;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f48004);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  uVar7 = uVar8;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f48008);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  uVar7 = uVar8;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar5 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar4);
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = unaff_x20;
      func_0x000107c3ec1c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      uVar7 = uVar8;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar3);
      *(undefined8 *)(lVar2 + 0x38) = uVar7;
      uVar7 = 0;
      FUN_102f4819c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,uVar7);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f48010);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f4800c);
  (*pcVar1)();
}



/* Entry: 102f48010; end: 102f48037; -[SCCalendarTrayViewController loadView] */

void FUN_102f48010(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102f47d04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f48038; end: 102f4803f;  */

undefined8 FUN_102f48038(void)

{
  return 1;
}



/* Entry: 102f48040; end: 102f48047; -[SCCalendarTrayViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_102f48040(void)

{
  return 1;
}



/* Entry: 102f48048; end: 102f480a3; -[SCCalendarTrayViewController initWithNibName:bundle:] */

void FUN_102f48048(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPageImpl.CalendarTrayViewController",0x2d,"init(nibName:bundle:)",
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f48074);
  (*pcVar1)();
}



/* Entry: 102f480a4; end: 102f480db; -[SCCalendarTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102f480c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f480c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f480a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f29ec8));
  return;
}



/* Entry: 102f480dc; end: 102f48153;  */

void FUN_102f480dc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102f4819c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102f48154; end: 102f4819b;  */

void FUN_102f48154(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f29f00;
  plVar5 = (long *)&UNK_10db66070;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102f4819c(0,0x112f29a08,&PTR_PTR_1126cf670);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102f4819c; end: 102f481db;  */

void FUN_102f4819c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102f481dc; end: 102f4843f;  */

undefined1  [16] FUN_102f481dc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffdc;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f114de0);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f114e10);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f482a8);
  (*pcVar1)();
}



/* Entry: 102f48440; end: 102f4847f;  */

undefined8 FUN_102f48440(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c48484();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 102f48480; end: 102f4899b;  */

undefined8 FUN_102f48480(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar2 = param_1;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b28e0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar7 = lVar2;
    func_0x000107c3e978(lVar2);
    func_0x000107c61180();
    func_0x000107c52ae0(puVar6);
    func_0x000107c61170(lVar7);
    lVar7 = lVar2;
    func_0x000107c3ea1c(lVar2);
    func_0x000107c61180();
    func_0x000107c58e54(puVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar2);
  }
  lVar2 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar7 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    lVar7 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  uVar9 = param_2;
  func_0x000107c5fadc(lVar7,param_2);
  func_0x000107c6142c(param_2);
  lVar2 = param_1;
  func_0x000107c5db08();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar8 = 0;
    uVar9 = 0xe000000000000000;
  }
  else {
    lVar8 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c5fadc(lVar8,uVar9);
  func_0x000107c6142c(uVar9);
  lVar2 = param_1;
  func_0x000107c42120(param_1);
  func_0x000107c61180();
  func_0x000107c4a1e8(param_1);
  func_0x00010901d2a0(param_1);
  lVar3 = param_1;
  func_0x000107c5b37c();
  func_0x000107c61180();
  func_0x000107c4ea34(param_1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d0();
  func_0x000107c49ac4(param_1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  func_0x000107c4927c(unaff_x20);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  lVar2 = param_1;
  func_0x000107c40328();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar7 = lVar2;
    func_0x000107c4e6d0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar7 != 0) {
      lVar2 = lVar7;
      func_0x000107c5fc54(lVar7,PTR___sSSN_11034da80);
      func_0x000107c61170(lVar7);
      if (*(long *)(lVar2 + 0x10) == 0) {
        func_0x000107c6142c(lVar2);
      }
      else {
        uVar9 = *(undefined8 *)(lVar2 + 0x20);
        uVar1 = *(undefined8 *)(lVar2 + 0x28);
        func_0x000107c61434(uVar1);
        func_0x000107c6142c(lVar2);
        func_0x000107c5fadc(uVar9,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c57360(unaff_x20);
        func_0x000107c61170(uVar9);
      }
    }
  }
  lVar2 = param_1;
  func_0x000107c40cdc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar7 = lVar2;
    func_0x000107c4f3b8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar7 != 0) goto LAB_102f48790;
  }
  lVar7 = 0;
LAB_102f48790:
  func_0x000107c578f4(unaff_x20);
  func_0x000107c61170(lVar7);
  lVar2 = param_1;
  func_0x000107c4ea60();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar4 = PTR_PTR_1126d5d58;
    func_0x000107c610f8(PTR_PTR_1126d5d58);
    func_0x000107c453e4();
    func_0x000107c4a574(lVar2);
    func_0x000107c55870(puVar4);
    lVar7 = lVar2;
    func_0x000107c4f3cc(lVar2);
    func_0x000107c61180();
    func_0x000107c57908(puVar4);
    func_0x000107c61170(lVar7);
    func_0x000107c5756c(unaff_x20);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar4);
  }
  lVar2 = param_1;
  func_0x000107c40cdc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5c970();
    func_0x000107c61170(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c5790c(unaff_x20);
    func_0x000107c61170(puVar4);
  }
  lVar2 = param_1;
  func_0x000107c3d000();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar4 = PTR_PTR_1126dc9c8;
    func_0x000107c610f8(PTR_PTR_1126dc9c8);
    func_0x000107c453e4();
    lVar7 = lVar2;
    func_0x000107c4e68c(lVar2);
    func_0x000107c61180();
    func_0x000107c5733c(puVar4);
    func_0x000107c61170(lVar7);
    func_0x000107c5aec0(lVar2);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c59238(puVar4);
    func_0x000107c61170(puVar5);
    lVar7 = lVar2;
    func_0x000107c4e690(lVar2);
    func_0x000107c61180();
    func_0x000107c57340(puVar4);
    func_0x000107c61170(lVar7);
    func_0x000107c61174(puVar4);
    func_0x000107c52198(unaff_x20);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar6);
  return unaff_x20;
}



/* Entry: 102f4899c; end: 102f489c3; -[SCCUser initWithScSnapchatter:] */

void FUN_102f4899c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102f48480();
  return;
}



/* Entry: 102f489c4; end: 102f48af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102f489c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  
  func_0x0001000285a8(0x112f29f38,&UNK_10db660c8);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  FUN_102f48ec8(unaff_x20 + _DAT_112f29f08,auStack_68);
  puVar2 = &UNK_1105ec408;
  func_0x000107c613fc(&UNK_1105ec408,0x50,7);
  FUN_102f48f0c(auStack_68,puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 0x38) = param_1;
  *(undefined8 *)(puVar2 + 0x40) = param_2;
  *(long *)(puVar2 + 0x48) = lVar1;
  func_0x000107c61434(param_2);
  func_0x000107c6157c(lVar1);
  uVar3 = 0x14;
  func_0x0001001ca524(0x14,0,0x28,4,0,0,&UNK_10db660d8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  uVar3 = uVar4;
  func_0x000107c6157c(uVar4);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar1);
  func_0x000107c61574(uVar4);
  return uVar3;
}



/* Entry: 102f48af4; end: 102f48b0f;  */

void FUN_102f48af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f48b10,0,0);
  return;
}



/* Entry: 102f48b10; end: 102f48b93;  */

void FUN_102f48b10(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f48b94;
                    /* WARNING: Could not recover jumptable at 0x000102f48b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x70),
             *(undefined8 *)(unaff_x22 + 0x78),uVar2,lVar3);
  return;
}



/* Entry: 102f48b94; end: 102f48bef;  */

void FUN_102f48b94(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f48bf0;
  }
  else {
    pcVar1 = FUN_102f48d90;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f48bf0; end: 102f48d8f;  */

void FUN_102f48bf0(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3 = PTR_PTR_1126ac888;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c48d40();
  func_0x000107c61170(uVar6);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x20);
  cVar2 = *(char *)(unaff_x22 + 0x30);
  *(char *)(unaff_x22 + 0x58) = cVar2;
  lVar5 = *(long *)(unaff_x22 + 0x48);
  if (cVar2 == '\0') {
    puVar4 = PTR_PTR_1126ac898;
    func_0x000107c610f8(PTR_PTR_1126ac898);
    func_0x000107c48984((double)lVar5);
    func_0x000107c53e38(puVar3);
  }
  else {
    if (cVar2 != '\x01') goto LAB_102f48cec;
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar4 = PTR_PTR_1126ac890;
    func_0x000107c610f8(PTR_PTR_1126ac890);
    func_0x000107c5fadc(lVar5,uVar6);
    func_0x000107c48978(puVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c52620(puVar3);
  }
  func_0x000107c61170(puVar4);
LAB_102f48cec:
  lVar5 = *(long *)(unaff_x22 + 0x40);
  if (lVar5 == 0) {
    func_0x000107c6142c(uVar1);
    FUN_102f48fd8(unaff_x22 + 0x48);
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar6,lVar5);
    func_0x000107c6142c(uVar1);
    FUN_102f48fd8(unaff_x22 + 0x48);
    func_0x000107c61430(lVar5,2);
  }
  func_0x000107c53af8(puVar3);
  func_0x000107c61170(uVar6);
  *(undefined **)(unaff_x22 + 0x60) = puVar3;
  func_0x000100b60084();
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000102f48d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f48d90; end: 102f48dcf;  */

void FUN_102f48d90(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x00010488ade0(uVar1);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102f48dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f48dd0; end: 102f48e37; -[_TtC26KronosCalendarServicesImpl39CalendarEventDataFetcherComposerWrapper fetchEventDataWithEventId:] */

void FUN_102f48dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102f489c4(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102f48e38; end: 102f48e97; -[_TtC26KronosCalendarServicesImpl39CalendarEventDataFetcherComposerWrapper init] */

void FUN_102f48e38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("KronosCalendarServicesImpl.CalendarEventDataFetcherComposerWrapper",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f48e64);
  (*pcVar1)();
}



/* Entry: 102f48e98; end: 102f48ea7; -[_TtC26KronosCalendarServicesImpl39CalendarEventDataFetcherComposerWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f48e98(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112f29f08))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f29f08));
  return;
}



/* Entry: 102f48ea8; end: 102f48ec7;  */

void FUN_102f48ea8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ad4f0);
  return;
}



/* Entry: 102f48ec8; end: 102f48f0b;  */

long FUN_102f48ec8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102f48f0c; end: 102f48f23;  */

undefined8 * FUN_102f48f0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102f48f24; end: 102f48f9b;  */

void FUN_102f48f24(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f48f9c;
  plVar3[0xf] = lVar2;
  plVar3[0x10] = lVar4;
  plVar3[0xd] = unaff_x20 + 0x10;
  plVar3[0xe] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f48b10,0,0);
  return;
}



/* Entry: 102f48f9c; end: 102f48fd7;  */

void FUN_102f48f9c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102f48fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102f48fd8; end: 102f4900b;  */

undefined8 FUN_102f48fd8(undefined8 param_1)

{
  (*(code *)&DAT_103be8444)();
  return param_1;
}



/* Entry: 102f4900c; end: 102f49173;  */

void FUN_102f4900c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c61474();
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c539f8();
  *(undefined **)(unaff_x20 + 0x78) = puVar2;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102f549f0();
  *(undefined **)(unaff_x20 + 0x80) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610f8();
  func_0x000107c6157c(param_1);
  func_0x000107c453e4();
  uVar3 = 0x4f505f53555f6e65;
  func_0x000107c5eed0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      0x4f505f53555f6e65,0xeb00000000584953);
  func_0x000107c5ef00();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c5601c(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef33bf0);
  func_0x000107c53e28(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(param_1);
  *(undefined **)(unaff_x20 + 0x88) = puVar2;
  return;
}



/* Entry: 102f49174; end: 102f49197;  */

void FUN_102f49174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x7e8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x7e0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x7d8) = param_2;
  *(undefined8 *)(unaff_x22 + 2000) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f49198);
  return;
}



/* Entry: 102f49198; end: 102f49473;  */

void FUN_102f49198(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  
  lVar9 = *(long *)(unaff_x22 + 0x7e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x7d8);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x22 + 0x7e0));
  *(undefined8 *)(unaff_x22 + 0x7f0) = uVar2;
  lVar9 = *(long *)(lVar9 + 0x78);
  *(long *)(unaff_x22 + 0x7f8) = lVar9;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  if (lVar9 != 0) {
    *(long *)(unaff_x22 + 0x7c8) = lVar9;
    lVar9 = unaff_x22 + 0x748;
    func_0x000107c6147c(lVar9,(long *)(unaff_x22 + 0x7c8),PTR___syXlN_11034f1a0 + 8,&UNK_1106e5de8,6
                       );
    if ((int)lVar9 != 0) {
      func_0x000107c61170(uVar2);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x750);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x768);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x760);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x758);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x778);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x770);
      puVar8 = *(undefined8 **)(unaff_x22 + 2000);
      *puVar8 = *(undefined8 *)(unaff_x22 + 0x748);
      puVar8[1] = uVar2;
      puVar8[3] = uVar5;
      puVar8[2] = uVar11;
      *(undefined1 *)(puVar8 + 4) = uVar1;
      puVar8[6] = uVar12;
      puVar8[5] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x000102f4926c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  lVar15 = *(long *)(unaff_x22 + 0x7e8);
  func_0x000107c61428(lVar15 + 0x80,unaff_x22 + 0x780,0,0);
  lVar9 = *(long *)(lVar15 + 0x80);
  if (*(long *)(lVar9 + 0x10) != 0) {
    uVar10 = *(ulong *)(unaff_x22 + 0x7e0);
    lVar13 = *(long *)(unaff_x22 + 0x7d8);
    func_0x000107c61434(lVar9);
    func_0x000100029284();
    if ((uVar10 & 1) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + lVar13 * 8);
      *(undefined8 *)(unaff_x22 + 0x800) = uVar11;
      func_0x000107c6157c(uVar11);
      func_0x000107c6142c(lVar9);
      plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x808) = plVar3;
      uVar2 = 0x112f2a030;
      func_0x0001000285a8(0x112f2a030,&UNK_10db66180);
      pcVar6 = FUN_102f49474;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_102f49474;
      lVar9 = unaff_x22 + 0x470;
      goto LAB_102f49458;
    }
    func_0x000107c6142c(lVar9);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x7e0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x7d8);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x7e8) + 0x70);
  puVar4 = &UNK_1105ec440;
  func_0x000107c613fc(&UNK_1105ec440,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar14;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(uVar12);
  uVar2 = 0x112f2a030;
  func_0x0001000285a8(0x112f2a030,&UNK_10db66180);
  uVar11 = 0x14;
  func_0x0001001ca524(0x14,0,0x28,4,0,0,&UNK_10db66178,puVar4,uVar2);
  *(undefined8 *)(unaff_x22 + 0x810) = uVar11;
  func_0x000107c61574(puVar4);
  func_0x000107c61428(lVar15 + 0x80,unaff_x22 + 0x798,0x21,0);
  func_0x000107c61434(uVar12);
  func_0x000107c6157c(uVar11);
  uVar5 = *(undefined8 *)(lVar15 + 0x80);
  func_0x000107c61558(uVar5);
  uVar7 = *(undefined8 *)(lVar15 + 0x80);
  *(undefined8 *)(lVar15 + 0x80) = 0x8000000000000000;
  FUN_102f4a994(uVar11,uVar14,uVar12,uVar5);
  func_0x000107c6142c(uVar12);
  *(undefined8 *)(lVar15 + 0x80) = uVar7;
  func_0x000107c614a8(unaff_x22 + 0x798);
  pcVar6 = (code *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(code **)(unaff_x22 + 0x818) = pcVar6;
  *(long *)pcVar6 = unaff_x22;
  *(code **)(pcVar6 + 8) = FUN_102f4974c;
  lVar9 = unaff_x22 + 0xf0;
LAB_102f49458:
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(pcVar6,lVar9,uVar11,uVar2);
  return;
}



/* Entry: 102f49474; end: 102f494bf;  */

void FUN_102f49474(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x7e8);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x808));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f494c0,uVar1,0);
  return;
}



/* Entry: 102f494c0; end: 102f4974b;  */

void FUN_102f494c0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined1 uVar11;
  
  puVar7 = (undefined8 *)(unaff_x22 + 0x390);
  *(undefined8 *)(unaff_x22 + 0x438) = *(undefined8 *)(unaff_x22 + 0x518);
  *(undefined8 *)(unaff_x22 + 0x430) = *(undefined8 *)(unaff_x22 + 0x510);
  *(undefined8 *)(unaff_x22 + 0x448) = *(undefined8 *)(unaff_x22 + 0x528);
  *(undefined8 *)(unaff_x22 + 0x440) = *(undefined8 *)(unaff_x22 + 0x520);
  *(undefined8 *)(unaff_x22 + 0x458) = *(undefined8 *)(unaff_x22 + 0x538);
  *(undefined8 *)(unaff_x22 + 0x450) = *(undefined8 *)(unaff_x22 + 0x530);
  *(undefined8 *)(unaff_x22 + 0x3f8) = *(undefined8 *)(unaff_x22 + 0x4d8);
  *(undefined8 *)(unaff_x22 + 0x3f0) = *(undefined8 *)(unaff_x22 + 0x4d0);
  *(undefined8 *)(unaff_x22 + 0x408) = *(undefined8 *)(unaff_x22 + 0x4e8);
  *(undefined8 *)(unaff_x22 + 0x400) = *(undefined8 *)(unaff_x22 + 0x4e0);
  *(undefined8 *)(unaff_x22 + 0x418) = *(undefined8 *)(unaff_x22 + 0x4f8);
  *(undefined8 *)(unaff_x22 + 0x410) = *(undefined8 *)(unaff_x22 + 0x4f0);
  *(undefined8 *)(unaff_x22 + 0x428) = *(undefined8 *)(unaff_x22 + 0x508);
  *(undefined8 *)(unaff_x22 + 0x420) = *(undefined8 *)(unaff_x22 + 0x500);
  *(undefined8 *)(unaff_x22 + 0x3b8) = *(undefined8 *)(unaff_x22 + 0x498);
  *(undefined8 *)(unaff_x22 + 0x3b0) = *(undefined8 *)(unaff_x22 + 0x490);
  *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(unaff_x22 + 0x4a8);
  *(undefined8 *)(unaff_x22 + 0x3c0) = *(undefined8 *)(unaff_x22 + 0x4a0);
  *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x4b8);
  *(undefined8 *)(unaff_x22 + 0x3d0) = *(undefined8 *)(unaff_x22 + 0x4b0);
  *(undefined8 *)(unaff_x22 + 1000) = *(undefined8 *)(unaff_x22 + 0x4c8);
  *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x4c0);
  *(undefined8 *)(unaff_x22 + 0x398) = *(undefined8 *)(unaff_x22 + 0x478);
  *(undefined8 *)(unaff_x22 + 0x390) = *(undefined8 *)(unaff_x22 + 0x470);
  *(undefined8 *)(unaff_x22 + 0x3a8) = *(undefined8 *)(unaff_x22 + 0x488);
  *(undefined8 *)(unaff_x22 + 0x3a0) = *(undefined8 *)(unaff_x22 + 0x480);
  *(undefined8 *)(unaff_x22 + 0x461) = *(undefined8 *)(unaff_x22 + 0x541);
  *(undefined8 *)(unaff_x22 + 0x459) = *(undefined8 *)(unaff_x22 + 0x539);
  puVar2 = puVar7;
  FUN_102f4aae4();
  if ((int)puVar2 == 1) {
    puVar2 = (undefined8 *)(unaff_x22 + 0x550);
    *(undefined8 *)(unaff_x22 + 0x5f8) = *(undefined8 *)(unaff_x22 + 0x438);
    *(undefined8 *)(unaff_x22 + 0x5f0) = *(undefined8 *)(unaff_x22 + 0x430);
    *(undefined8 *)(unaff_x22 + 0x608) = *(undefined8 *)(unaff_x22 + 0x448);
    *(undefined8 *)(unaff_x22 + 0x600) = *(undefined8 *)(unaff_x22 + 0x440);
    *(undefined8 *)(unaff_x22 + 0x618) = *(undefined8 *)(unaff_x22 + 0x458);
    *(undefined8 *)(unaff_x22 + 0x610) = *(undefined8 *)(unaff_x22 + 0x450);
    *(undefined8 *)(unaff_x22 + 0x621) = *(undefined8 *)(unaff_x22 + 0x461);
    *(undefined8 *)(unaff_x22 + 0x619) = *(undefined8 *)(unaff_x22 + 0x459);
    *(undefined8 *)(unaff_x22 + 0x5b8) = *(undefined8 *)(unaff_x22 + 0x3f8);
    *(undefined8 *)(unaff_x22 + 0x5b0) = *(undefined8 *)(unaff_x22 + 0x3f0);
    *(undefined8 *)(unaff_x22 + 0x5c8) = *(undefined8 *)(unaff_x22 + 0x408);
    *(undefined8 *)(unaff_x22 + 0x5c0) = *(undefined8 *)(unaff_x22 + 0x400);
    *(undefined8 *)(unaff_x22 + 0x5d8) = *(undefined8 *)(unaff_x22 + 0x418);
    *(undefined8 *)(unaff_x22 + 0x5d0) = *(undefined8 *)(unaff_x22 + 0x410);
    *(undefined8 *)(unaff_x22 + 0x5e8) = *(undefined8 *)(unaff_x22 + 0x428);
    *(undefined8 *)(unaff_x22 + 0x5e0) = *(undefined8 *)(unaff_x22 + 0x420);
    *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x3b8);
    *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x3b0);
    *(undefined8 *)(unaff_x22 + 0x588) = *(undefined8 *)(unaff_x22 + 0x3c8);
    *(undefined8 *)(unaff_x22 + 0x580) = *(undefined8 *)(unaff_x22 + 0x3c0);
    *(undefined8 *)(unaff_x22 + 0x598) = *(undefined8 *)(unaff_x22 + 0x3d8);
    *(undefined8 *)(unaff_x22 + 0x590) = *(undefined8 *)(unaff_x22 + 0x3d0);
    *(undefined8 *)(unaff_x22 + 0x5a8) = *(undefined8 *)(unaff_x22 + 1000);
    *(undefined8 *)(unaff_x22 + 0x5a0) = *(undefined8 *)(unaff_x22 + 0x3e0);
    *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x398);
    *puVar2 = *puVar7;
    *(undefined8 *)(unaff_x22 + 0x568) = *(undefined8 *)(unaff_x22 + 0x3a8);
    *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x3a0);
    func_0x000102f4aaec();
    uVar11 = *(undefined1 *)puVar2;
    *(undefined1 *)(unaff_x22 + 0xea) = uVar11;
    puVar3 = (undefined1 *)0x2;
    func_0x000100029b9c(2,0x12,0,0);
    puVar4 = puVar3;
    if ((int)puVar3 != 0) {
      FUN_102f4aaf0();
      puVar4 = (undefined1 *)(unaff_x22 + 0xea);
      func_0x000107c61658(puVar4,&UNK_1106e5e88,puVar3);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x800);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x7f0);
    FUN_102f4aaf0();
    func_0x000107c613f8(&UNK_1106e5e88,puVar4,0,0);
    *puVar4 = uVar11;
    func_0x000107c61170(uVar9);
    func_0x000107c61574(uVar10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar2 = (undefined8 *)(unaff_x22 + 0x630);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x800);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x7f0);
    *(undefined8 *)(unaff_x22 + 0x6d8) = *(undefined8 *)(unaff_x22 + 0x438);
    *(undefined8 *)(unaff_x22 + 0x6d0) = *(undefined8 *)(unaff_x22 + 0x430);
    *(undefined8 *)(unaff_x22 + 0x6e8) = *(undefined8 *)(unaff_x22 + 0x448);
    *(undefined8 *)(unaff_x22 + 0x6e0) = *(undefined8 *)(unaff_x22 + 0x440);
    *(undefined8 *)(unaff_x22 + 0x6f8) = *(undefined8 *)(unaff_x22 + 0x458);
    *(undefined8 *)(unaff_x22 + 0x6f0) = *(undefined8 *)(unaff_x22 + 0x450);
    *(undefined8 *)(unaff_x22 + 0x701) = *(undefined8 *)(unaff_x22 + 0x461);
    *(undefined8 *)(unaff_x22 + 0x6f9) = *(undefined8 *)(unaff_x22 + 0x459);
    *(undefined8 *)(unaff_x22 + 0x698) = *(undefined8 *)(unaff_x22 + 0x3f8);
    *(undefined8 *)(unaff_x22 + 0x690) = *(undefined8 *)(unaff_x22 + 0x3f0);
    *(undefined8 *)(unaff_x22 + 0x6a8) = *(undefined8 *)(unaff_x22 + 0x408);
    *(undefined8 *)(unaff_x22 + 0x6a0) = *(undefined8 *)(unaff_x22 + 0x400);
    *(undefined8 *)(unaff_x22 + 0x6b8) = *(undefined8 *)(unaff_x22 + 0x418);
    *(undefined8 *)(unaff_x22 + 0x6b0) = *(undefined8 *)(unaff_x22 + 0x410);
    *(undefined8 *)(unaff_x22 + 0x6c8) = *(undefined8 *)(unaff_x22 + 0x428);
    *(undefined8 *)(unaff_x22 + 0x6c0) = *(undefined8 *)(unaff_x22 + 0x420);
    *(undefined8 *)(unaff_x22 + 0x658) = *(undefined8 *)(unaff_x22 + 0x3b8);
    *(undefined8 *)(unaff_x22 + 0x650) = *(undefined8 *)(unaff_x22 + 0x3b0);
    *(undefined8 *)(unaff_x22 + 0x668) = *(undefined8 *)(unaff_x22 + 0x3c8);
    *(undefined8 *)(unaff_x22 + 0x660) = *(undefined8 *)(unaff_x22 + 0x3c0);
    *(undefined8 *)(unaff_x22 + 0x678) = *(undefined8 *)(unaff_x22 + 0x3d8);
    *(undefined8 *)(unaff_x22 + 0x670) = *(undefined8 *)(unaff_x22 + 0x3d0);
    *(undefined8 *)(unaff_x22 + 0x688) = *(undefined8 *)(unaff_x22 + 1000);
    *(undefined8 *)(unaff_x22 + 0x680) = *(undefined8 *)(unaff_x22 + 0x3e0);
    *(undefined8 *)(unaff_x22 + 0x638) = *(undefined8 *)(unaff_x22 + 0x398);
    *puVar2 = *puVar7;
    *(undefined8 *)(unaff_x22 + 0x648) = *(undefined8 *)(unaff_x22 + 0x3a8);
    *(undefined8 *)(unaff_x22 + 0x640) = *(undefined8 *)(unaff_x22 + 0x3a0);
    FUN_102f4ab30();
    uVar9 = puVar2[8];
    uVar1 = puVar2[9];
    uVar10 = puVar2[0x13];
    uVar5 = puVar2[0x14];
    uVar11 = (undefined1)puVar2[0x15];
    func_0x000107c61434();
    FUN_102f49e0c();
    func_0x000107c61170(uVar6);
    func_0x000107c61574(uVar8);
    if (puVar2[0x18] == 0) {
      uVar6 = 0;
      uVar8 = 0;
    }
    else {
      uVar6 = puVar2[0x19];
      uVar8 = puVar2[0x1a];
      func_0x000107c61434(uVar8);
    }
    FUN_102f4ab34(puVar7,0x112f2a030,&UNK_10db66180);
    puVar7 = *(undefined8 **)(unaff_x22 + 2000);
    *puVar7 = uVar9;
    puVar7[1] = uVar1;
    puVar7[2] = uVar10;
    puVar7[3] = uVar5;
    *(undefined1 *)(puVar7 + 4) = uVar11;
    puVar7[5] = uVar6;
    puVar7[6] = uVar8;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f49748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102f4974c; end: 102f49797;  */

void FUN_102f4974c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x7e8);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x818));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f49798,uVar1,0);
  return;
}



/* Entry: 102f49798; end: 102f49ab3;  */

void FUN_102f49798(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x7e0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x7d8);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0xe1) = *(undefined8 *)(unaff_x22 + 0x1c1);
  *(undefined8 *)(unaff_x22 + 0xd9) = *(undefined8 *)(unaff_x22 + 0x1b9);
  func_0x000107c61428(*(long *)(unaff_x22 + 0x7e8) + 0x80,unaff_x22 + 0x7b0,0x21,0);
  FUN_102f4a31c(uVar12,uVar11);
  func_0x000107c614a8(unaff_x22 + 0x7b0);
  func_0x000107c61574(uVar12);
  iVar3 = (int)unaff_x22 + 0x10;
  FUN_102f4aae4();
  if (iVar3 == 1) {
    puVar9 = (undefined8 *)(unaff_x22 + 0x1d0);
    *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x2a1) = *(undefined8 *)(unaff_x22 + 0xe1);
    *(undefined8 *)(unaff_x22 + 0x299) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x248) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x240) = *(undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x18);
    *puVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000102f4aaec();
    uVar2 = *(undefined1 *)puVar9;
    *(undefined1 *)(unaff_x22 + 0xe9) = uVar2;
    puVar4 = (undefined1 *)0x2;
    func_0x000100029b9c(2,0x12,0,0);
    puVar5 = puVar4;
    if ((int)puVar4 != 0) {
      FUN_102f4aaf0();
      puVar5 = (undefined1 *)(unaff_x22 + 0xe9);
      func_0x000107c61658(puVar5,&UNK_1106e5e88,puVar4);
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x810);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x7f0);
    FUN_102f4aaf0();
    func_0x000107c613f8(&UNK_1106e5e88,puVar5,0,0);
    *puVar5 = uVar2;
    func_0x000107c61170(uVar12);
    func_0x000107c61574(uVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar9 = (undefined8 *)(unaff_x22 + 0x2b0);
    *(undefined8 *)(unaff_x22 + 0x358) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x368) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x360) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x381) = *(undefined8 *)(unaff_x22 + 0xe1);
    *(undefined8 *)(unaff_x22 + 0x379) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x310) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x2e8) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x2e0) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x2f8) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x18);
    *puVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x20);
    FUN_102f4ab30();
    uVar12 = puVar9[8];
    uVar1 = puVar9[9];
    uVar11 = puVar9[0x13];
    uVar7 = puVar9[0x14];
    uVar13 = puVar9[0x15];
    func_0x000107c61434(uVar1);
    FUN_102f49e0c();
    if (puVar9[0x18] == 0) {
      uVar15 = 0;
      uVar14 = 0;
    }
    else {
      uVar15 = puVar9[0x19];
      uVar14 = puVar9[0x1a];
      func_0x000107c61434(uVar14);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x810);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x7f8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x7f0);
    FUN_102f4ab34(unaff_x22 + 0x10,0x112f2a030,&UNK_10db66180);
    *(undefined8 *)(unaff_x22 + 0x710) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x718) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x720) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x728) = uVar7;
    *(char *)(unaff_x22 + 0x730) = (char)uVar13;
    *(undefined8 *)(unaff_x22 + 0x738) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x740) = uVar14;
    func_0x000107c61434(uVar1);
    FUN_102f4ab74(uVar11,uVar7,uVar13);
    func_0x000107c61434(uVar14);
    lVar6 = unaff_x22 + 0x710;
    func_0x000107c6061c(lVar6,&UNK_1106e5de8);
    func_0x000107c56bcc(uVar8);
    func_0x000107c61170(uVar16);
    func_0x000107c615e8(lVar6);
    func_0x000107c61574(uVar10);
    puVar9 = *(undefined8 **)(unaff_x22 + 2000);
    *puVar9 = uVar12;
    puVar9[1] = uVar1;
    puVar9[2] = uVar11;
    puVar9[3] = uVar7;
    *(char *)(puVar9 + 4) = (char)uVar13;
    puVar9[5] = uVar15;
    puVar9[6] = uVar14;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f49ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102f49ab4; end: 102f49ad7;  */

void FUN_102f49ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x568) = param_4;
  *(undefined8 *)(unaff_x22 + 0x560) = param_3;
  *(undefined8 *)(unaff_x22 + 0x558) = param_2;
  *(undefined8 *)(unaff_x22 + 0x550) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f49ad8,0,0);
  return;
}



/* Entry: 102f49ad8; end: 102f49be7;  */

void FUN_102f49ad8(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x0001000d224c(unaff_x22 + 0x540);
  lVar6 = *(long *)(unaff_x22 + 0x540);
  *(long *)(unaff_x22 + 0x570) = lVar6;
  if (lVar6 != 0) {
    lVar4 = *(long *)(unaff_x22 + 0x548);
    func_0x000107c614f0(lVar6);
    piVar3 = *(int **)(lVar4 + 0x38);
    iVar1 = *piVar3;
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x578) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102f49be8;
                    /* WARNING: Could not recover jumptable at 0x000102f49b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar3))
              (plVar2,unaff_x22 + 0x390,*(undefined8 *)(unaff_x22 + 0x560),
               *(undefined8 *)(unaff_x22 + 0x568),0,lVar6,lVar4);
    return;
  }
  puVar5 = *(undefined8 **)(unaff_x22 + 0x550);
  puVar7 = (undefined8 *)(unaff_x22 + 0x10);
  *(undefined1 *)puVar7 = 0;
  func_0x000102f4ab8c(puVar7);
  uVar8 = *puVar7;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar5[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar5 = uVar8;
  puVar5[3] = uVar10;
  puVar5[2] = uVar9;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar5[9] = *(undefined8 *)(unaff_x22 + 0x58);
  puVar5[8] = uVar12;
  puVar5[0xb] = uVar14;
  puVar5[10] = uVar13;
  puVar5[5] = uVar9;
  puVar5[4] = uVar8;
  puVar5[7] = uVar11;
  puVar5[6] = uVar10;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
  puVar5[0x11] = *(undefined8 *)(unaff_x22 + 0x98);
  puVar5[0x10] = uVar12;
  puVar5[0x13] = uVar14;
  puVar5[0x12] = uVar13;
  puVar5[0xd] = uVar9;
  puVar5[0xc] = uVar8;
  puVar5[0xf] = uVar11;
  puVar5[0xe] = uVar10;
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 200);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd9);
  *(undefined8 *)((long)puVar5 + 0xd1) = *(undefined8 *)(unaff_x22 + 0xe1);
  *(undefined8 *)((long)puVar5 + 0xc9) = uVar14;
  puVar5[0x17] = uVar11;
  puVar5[0x16] = uVar10;
  puVar5[0x19] = uVar13;
  puVar5[0x18] = uVar12;
  puVar5[0x15] = uVar9;
  puVar5[0x14] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x000102f49be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f49be8; end: 102f49c93;  */

void FUN_102f49be8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x578));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x510) = *(undefined8 *)(lVar2 + 0x438);
    *(undefined8 *)(lVar2 + 0x508) = *(undefined8 *)(lVar2 + 0x430);
    *(undefined8 *)(lVar2 + 0x520) = *(undefined8 *)(lVar2 + 0x448);
    *(undefined8 *)(lVar2 + 0x518) = *(undefined8 *)(lVar2 + 0x440);
    *(undefined8 *)(lVar2 + 0x530) = *(undefined8 *)(lVar2 + 0x458);
    *(undefined8 *)(lVar2 + 0x528) = *(undefined8 *)(lVar2 + 0x450);
    *(undefined8 *)(lVar2 + 0x538) = *(undefined8 *)(lVar2 + 0x460);
    *(undefined8 *)(lVar2 + 0x4d0) = *(undefined8 *)(lVar2 + 0x3f8);
    *(undefined8 *)(lVar2 + 0x4c8) = *(undefined8 *)(lVar2 + 0x3f0);
    *(undefined8 *)(lVar2 + 0x4e0) = *(undefined8 *)(lVar2 + 0x408);
    *(undefined8 *)(lVar2 + 0x4d8) = *(undefined8 *)(lVar2 + 0x400);
    *(undefined8 *)(lVar2 + 0x4f0) = *(undefined8 *)(lVar2 + 0x418);
    *(undefined8 *)(lVar2 + 0x4e8) = *(undefined8 *)(lVar2 + 0x410);
    *(undefined8 *)(lVar2 + 0x500) = *(undefined8 *)(lVar2 + 0x428);
    *(undefined8 *)(lVar2 + 0x4f8) = *(undefined8 *)(lVar2 + 0x420);
    *(undefined8 *)(lVar2 + 0x490) = *(undefined8 *)(lVar2 + 0x3b8);
    *(undefined8 *)(lVar2 + 0x488) = *(undefined8 *)(lVar2 + 0x3b0);
    *(undefined8 *)(lVar2 + 0x4a0) = *(undefined8 *)(lVar2 + 0x3c8);
    *(undefined8 *)(lVar2 + 0x498) = *(undefined8 *)(lVar2 + 0x3c0);
    *(undefined8 *)(lVar2 + 0x4b0) = *(undefined8 *)(lVar2 + 0x3d8);
    *(undefined8 *)(lVar2 + 0x4a8) = *(undefined8 *)(lVar2 + 0x3d0);
    *(undefined8 *)(lVar2 + 0x4c0) = *(undefined8 *)(lVar2 + 1000);
    *(undefined8 *)(lVar2 + 0x4b8) = *(undefined8 *)(lVar2 + 0x3e0);
    *(undefined8 *)(lVar2 + 0x470) = *(undefined8 *)(lVar2 + 0x398);
    *(undefined8 *)(lVar2 + 0x468) = *(undefined8 *)(lVar2 + 0x390);
    *(undefined8 *)(lVar2 + 0x480) = *(undefined8 *)(lVar2 + 0x3a8);
    *(undefined8 *)(lVar2 + 0x478) = *(undefined8 *)(lVar2 + 0x3a0);
    pcVar1 = FUN_102f49c94;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_102f49d80;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f49c94; end: 102f49d7f;  */

void FUN_102f49c94(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x570));
  puVar1 = *(undefined8 **)(unaff_x22 + 0x550);
  if (*(long *)(unaff_x22 + 0x3b0) == 0) {
    puVar2 = (undefined8 *)(unaff_x22 + 0x2b0);
    *(undefined8 *)(unaff_x22 + 0x358) = *(undefined8 *)(unaff_x22 + 0x510);
    *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0x508);
    *(undefined8 *)(unaff_x22 + 0x368) = *(undefined8 *)(unaff_x22 + 0x520);
    *(undefined8 *)(unaff_x22 + 0x360) = *(undefined8 *)(unaff_x22 + 0x518);
    *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x530);
    *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x528);
    *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x538);
    *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 0x4d0);
    *(undefined8 *)(unaff_x22 + 0x310) = *(undefined8 *)(unaff_x22 + 0x4c8);
    *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x4e0);
    *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0x4d8);
    *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x4f0);
    *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x4e8);
    *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(unaff_x22 + 0x500);
    *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(unaff_x22 + 0x4f8);
    *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0x490);
    *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 0x488);
    *(undefined8 *)(unaff_x22 + 0x2e8) = *(undefined8 *)(unaff_x22 + 0x4a0);
    *(undefined8 *)(unaff_x22 + 0x2e0) = *(undefined8 *)(unaff_x22 + 0x498);
    *(undefined8 *)(unaff_x22 + 0x2f8) = *(undefined8 *)(unaff_x22 + 0x4b0);
    *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0x4a8);
    *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 0x4c0);
    *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0x4b8);
    *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x470);
    *(undefined8 *)(unaff_x22 + 0x2b0) = *(undefined8 *)(unaff_x22 + 0x468);
    *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x480);
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x478);
    func_0x000102f4ab98(puVar2);
  }
  else {
    puVar2 = (undefined8 *)(unaff_x22 + 0x1d0);
    func_0x0001012b6798(unaff_x22 + 0x390);
    *(undefined1 *)(unaff_x22 + 0x1d0) = 2;
    func_0x000102f4ab8c(puVar2);
  }
  uVar3 = *puVar2;
  uVar5 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  uVar4 = puVar2[5];
  uVar3 = puVar2[4];
  uVar6 = puVar2[7];
  uVar5 = puVar2[6];
  uVar7 = puVar2[8];
  uVar9 = puVar2[0xb];
  uVar8 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar7;
  puVar1[0xb] = uVar9;
  puVar1[10] = uVar8;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  uVar4 = puVar2[0xd];
  uVar3 = puVar2[0xc];
  uVar6 = puVar2[0xf];
  uVar5 = puVar2[0xe];
  uVar7 = puVar2[0x10];
  uVar9 = puVar2[0x13];
  uVar8 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar7;
  puVar1[0x13] = uVar9;
  puVar1[0x12] = uVar8;
  puVar1[0xd] = uVar4;
  puVar1[0xc] = uVar3;
  puVar1[0xf] = uVar6;
  puVar1[0xe] = uVar5;
  uVar4 = puVar2[0x15];
  uVar3 = puVar2[0x14];
  uVar6 = puVar2[0x17];
  uVar5 = puVar2[0x16];
  uVar8 = puVar2[0x19];
  uVar7 = puVar2[0x18];
  uVar9 = *(undefined8 *)((long)puVar2 + 0xc9);
  *(undefined8 *)((long)puVar1 + 0xd1) = *(undefined8 *)((long)puVar2 + 0xd1);
  *(undefined8 *)((long)puVar1 + 0xc9) = uVar9;
  puVar1[0x17] = uVar6;
  puVar1[0x16] = uVar5;
  puVar1[0x19] = uVar8;
  puVar1[0x18] = uVar7;
  puVar1[0x15] = uVar4;
  puVar1[0x14] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000102f49d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f49d80; end: 102f49e0b;  */

void FUN_102f49d80(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x550);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x570));
  puVar2 = (undefined8 *)(unaff_x22 + 0xf0);
  *(undefined1 *)puVar2 = 1;
  func_0x000102f4ab8c(puVar2);
  uVar3 = *puVar2;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xf8);
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0x138);
  puVar1[8] = uVar7;
  puVar1[0xb] = uVar9;
  puVar1[10] = uVar8;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar1[0x11] = *(undefined8 *)(unaff_x22 + 0x178);
  puVar1[0x10] = uVar7;
  puVar1[0x13] = uVar9;
  puVar1[0x12] = uVar8;
  puVar1[0xd] = uVar4;
  puVar1[0xc] = uVar3;
  puVar1[0xf] = uVar6;
  puVar1[0xe] = uVar5;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b9);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar4 = *(undefined8 *)(unaff_x22 + 400);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)((long)puVar1 + 0xd1) = *(undefined8 *)(unaff_x22 + 0x1c1);
  *(undefined8 *)((long)puVar1 + 0xc9) = uVar3;
  puVar1[0x17] = uVar7;
  puVar1[0x16] = uVar6;
  puVar1[0x19] = uVar9;
  puVar1[0x18] = uVar8;
  puVar1[0x15] = uVar5;
  puVar1[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102f49e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f49e0c; end: 102f4a13f;  */

long FUN_102f49e0c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,char param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  uStack_80 = param_6;
  uStack_78 = param_7;
  func_0x000107c5eea4();
  lStack_90 = *(long *)(lVar1 + -8);
  lStack_88 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar2 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12;
  lVar1 = 0x112d48c78;
  lStack_98 = lVar2;
  func_0x0001000285a8(0x112d48c78,&UNK_10d90f8c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar2 = lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar2 - extraout_x12_00;
  lVar1 = 0;
  func_0x000107c5efa8();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_5 == '\x01') {
    FUN_102f4a26c(param_2,param_3,param_4,1);
  }
  else {
    if (param_5 != -1) {
      lVar6 = *(long *)(unaff_x20 + 0x88);
      func_0x000107c5ef90(lVar7,uStack_80,uStack_78);
      func_0x0001012b67cc(lVar7,lVar2);
      pcVar4 = *(code **)(lVar5 + 0x30);
      lVar7 = lVar2;
      (*pcVar4)(lVar2,1,lVar1);
      if ((int)lVar7 == 1) {
        func_0x000107c5efa4(lVar3);
        lVar7 = lVar2;
        (*pcVar4)(lVar2,1,lVar1);
        if ((int)lVar7 != 1) {
          FUN_102f4ab34(lVar2,0x112d48c78,&UNK_10d90f8c0);
          lVar7 = lVar2;
        }
      }
      else {
        lVar7 = lVar3;
        (**(code **)(lVar5 + 0x20))(lVar3,lVar2,lVar1);
      }
      func_0x000107c5ef9c();
      (**(code **)(lVar5 + 8))(lVar3,lVar1);
      func_0x000107c59d94(lVar6);
      func_0x000107c61170(lVar7);
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c41344();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      lVar1 = lStack_a0;
      if (lVar6 != 0) {
        func_0x000107c5ee94(lStack_a0,lVar6);
        func_0x000107c61170(lVar6);
        lVar5 = lStack_88;
        lVar3 = lStack_90;
        lVar2 = lStack_98;
        (**(code **)(lStack_90 + 0x20))(lStack_98,lVar1,lStack_88);
        func_0x000107c5ee8c();
        (**(code **)(lVar3 + 8))(lVar2,lVar5);
        param_1 = param_1 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f4a138);
          (*pcVar4)();
        }
        if (-9.223372036854778e+18 < param_1) {
          if (param_1 < 9.223372036854776e+18) {
            return (long)param_1;
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f4a140);
          (*pcVar4)();
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f4a13c);
        (*pcVar4)();
      }
    }
    param_2 = 0;
  }
  return param_2;
}



/* Entry: 102f4a140; end: 102f4a19b;  */

void FUN_102f4a140(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 102f4a19c; end: 102f4a1a7;  */

void FUN_102f4a19c(void)

{
  return;
}



/* Entry: 102f4a1a8; end: 102f4a213;  */

void FUN_102f4a1a8(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x820;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102f4a214;
  plVar1[0xfd] = lVar2;
  plVar1[0xfc] = param_3;
  plVar1[0xfb] = param_2;
  plVar1[0xfa] = unaff_x22 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f49198,lVar2,0);
  return;
}



/* Entry: 102f4a214; end: 102f4a26b;  */

void FUN_102f4a214(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    uVar9 = *(undefined8 *)(lVar2 + 0x38);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    puVar1 = *(undefined8 **)(lVar2 + 0x48);
    puVar1[6] = *(undefined8 *)(lVar2 + 0x40);
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000102f4a268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 102f4a26c; end: 102f4a273;  */

void FUN_102f4a26c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 102f4a274; end: 102f4a2df;  */

void FUN_102f4a274(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x580;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f4a2e0;
  plVar3[0xad] = lVar4;
  plVar3[0xac] = lVar2;
  plVar3[0xab] = lVar1;
  plVar3[0xaa] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f49ad8,0,0);
  return;
}



/* Entry: 102f4a2e0; end: 102f4a31b;  */

void FUN_102f4a2e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102f4a318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


