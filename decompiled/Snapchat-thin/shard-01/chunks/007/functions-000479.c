/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013e4f10; end: 1013e4f2b; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView emailEntryExitedWithUnretryableError:] */

void FUN_1013e4f10(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 1013e4f2c; end: 1013e4f83; -[_TtC15COSServicesImpl41COSCommunicationInputNativeViewController initWithCoder:] */

void FUN_1013e4f2c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSCommunicationInputNativeViewController.swift",0x3f,2,0x23,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e4f84);
  (*pcVar1)();
}



/* Entry: 1013e4f84; end: 1013e4f93; -[_TtC15COSServicesImpl41COSCommunicationInputNativeViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e4f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112d7b978));
  return;
}



/* Entry: 1013e4f94; end: 1013e508b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e4f94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  func_0x000107c5676c();
  lVar5 = *(long *)(unaff_x20 + _DAT_112d7b980);
  lVar6 = *(long *)(unaff_x20 + _DAT_112d7b978);
  func_0x000107c61604(lVar5 + 0x30,lVar6);
  lVar6 = lVar6 + _DAT_112d7b748;
  *(undefined ***)(lVar6 + 8) = &PTR_DAT_1103afbc8;
  lVar4 = lVar5;
  func_0x000107c61604(lVar6,lVar5);
  uVar1 = *(undefined8 *)(lVar5 + 0x10);
  func_0x000107c61174(uVar1);
  uVar2 = uVar1;
  FUN_1013dc678();
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  func_0x000107c61174(uVar3);
  uVar1 = uVar3;
  func_0x0001013dc770();
  func_0x000107c61170(uVar3);
  FUN_1013dd46c(uVar2,uVar1,lVar4);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013e508c; end: 1013e50b3; -[_TtC15COSServicesImpl41COSCommunicationInputNativeViewController viewDidLoad] */

void FUN_1013e508c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013e4f94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013e50b4; end: 1013e50f7; -[_TtC15COSServicesImpl41COSCommunicationInputNativeViewController viewDidAppear:] */

void FUN_1013e50b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_viewDidAppear__112684bd0,param_3);
  return;
}



/* Entry: 1013e50f8; end: 1013e51ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e50f8(uint param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidDisappear__112684c48,param_1 & 1);
  lVar4 = unaff_x20;
  func_0x000107c49aa0();
  if ((int)lVar4 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d7b980);
    uVar3 = 4;
    FUN_1013dcfec(4,0,0,0,0);
    if ((*(byte *)(lVar4 + 0x28) & 1) == 0) {
      *(undefined1 *)(lVar4 + 0x28) = 1;
      pcVar1 = *(code **)(lVar4 + 0x18);
      uVar2 = *(undefined8 *)(lVar4 + 0x20);
      func_0x000107c6157c(uVar2);
      (*pcVar1)(uVar3);
      func_0x000107c61574(uVar2);
    }
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1013e51ac; end: 1013e51db; -[_TtC15COSServicesImpl41COSCommunicationInputNativeViewController viewDidDisappear:] */

void FUN_1013e51ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1013e50f8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013e51dc; end: 1013e523b; -[_TtC15COSServicesImpl41COSCommunicationInputNativeViewController initWithNibName:bundle:] */

void FUN_1013e51dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSCommunicationInputNativeViewController",0x39,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e5208);
  (*pcVar1)();
}



/* Entry: 1013e523c; end: 1013e5273; -[_TtC15COSServicesImpl41COSCommunicationInputNativeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e523c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b978));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7b980));
  return;
}



/* Entry: 1013e5274; end: 1013e5293;  */

void FUN_1013e5274(void)

{
  func_0x000107c61168(&PTR_PTR_1127d0ec0);
  return;
}



/* Entry: 1013e5294; end: 1013e52a7;  */

bool FUN_1013e5294(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1013e52a8; end: 1013e5353;  */

void FUN_1013e52a8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013e5354; end: 1013e53fb;  */

void FUN_1013e5354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000107c61614(unaff_x20 + 0x60,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  uVar1 = 0;
  FUN_1013ea9bc(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  lVar2 = 0;
  func_0x0001013f2340();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x3fb999999999999a;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(long *)(unaff_x20 + 0x28) = lVar2;
  return;
}



/* Entry: 1013e53fc; end: 1013e576f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1013e53fc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  plVar8 = &lStack_b0;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = 0;
  FUN_1013e957c();
  lVar7 = lVar3;
  func_0x000107c610f8();
  lVar4 = lVar7 + _DAT_112d7bc60;
  *(undefined8 *)(lVar4 + 8) = 0;
  func_0x000107c61614(lVar4,0);
  *(undefined8 *)(lVar7 + _DAT_112d7bc68) = 0;
  *(undefined1 *)(lVar7 + _DAT_112d7bc70) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d7bc50) = uVar9;
  *(undefined8 *)(lVar7 + _DAT_112d7bc58) = uVar10;
  *(undefined ***)(lVar4 + 8) = &PTR_DAT_1103b0348;
  func_0x000107c61604();
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar7;
  lStack_88 = lVar3;
  func_0x000107c6157c(uVar9);
  func_0x000107c61174();
  plVar5 = &lStack_90;
  func_0x000107c61154(plVar5,puVar2);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  *(long **)(param_1 + 0x38) = plVar5;
  func_0x000107c61174();
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = 0;
  FUN_1013ea128();
  lVar7 = lVar3;
  func_0x000107c610f8();
  lVar4 = lVar7 + _DAT_112d7bcb0;
  *(undefined8 *)(lVar4 + 8) = 0;
  func_0x000107c61614(lVar4,0);
  *(undefined8 *)(lVar7 + _DAT_112d7bcb8) = 0;
  *(undefined1 *)(lVar7 + _DAT_112d7bcc0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d7bca0) = uVar9;
  *(undefined8 *)(lVar7 + _DAT_112d7bca8) = uVar11;
  *(undefined ***)(lVar4 + 8) = &PTR_DAT_1103b0348;
  func_0x000107c61604();
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar7;
  lStack_98 = lVar3;
  func_0x000107c6157c(uVar9);
  func_0x000107c61174();
  plVar6 = &lStack_a0;
  func_0x000107c61154(plVar6,puVar2);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  *(long **)(param_1 + 0x40) = plVar6;
  func_0x000107c61174();
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  lVar7 = 0;
  FUN_1013e8c9c();
  lVar4 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d7bb88) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7bb90) = 0;
  *(undefined1 *)(lVar4 + _DAT_112d7bb98) = 2;
  *(undefined1 *)(lVar4 + _DAT_112d7bba0) = 2;
  *(undefined1 *)(lVar4 + _DAT_112d7bba8) = 2;
  *(undefined1 *)(lVar4 + _DAT_112d7bbb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_112d7bbb8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7bbc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7bbc8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7bbd0) = 0;
  *(undefined1 *)(lVar4 + _DAT_112d7bbd8) = 2;
  *(undefined8 *)(lVar4 + _DAT_112d7bbe0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7bbe8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7bbf0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7bbf8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7bc00) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7bc08) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7bc10) = 0;
  *(undefined1 *)(lVar4 + _DAT_112d7bc18) = 1;
  *(undefined1 *)(lVar4 + _DAT_112d7bc20) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7bb60) = uVar10;
  *(undefined8 *)(lVar4 + _DAT_112d7bb68) = uVar11;
  *(undefined8 *)(lVar4 + _DAT_112d7bb70) = uVar9;
  *(long **)(lVar4 + _DAT_112d7bb78) = plVar5;
  *(long **)(lVar4 + _DAT_112d7bb80) = plVar6;
  puVar2 = PTR_s_initWithFrame__1125e2948;
  lStack_b0 = lVar4;
  lStack_a8 = lVar7;
  func_0x000107c6157c(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar11);
  func_0x000107c61154(uVar12,uVar13,uVar14,uVar15,&lStack_b0,puVar2);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  *(long **)(param_1 + 0x30) = plVar8;
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  return (undefined1 *)plVar8;
}



/* Entry: 1013e5770; end: 1013e5e8b;  */

void FUN_1013e5770(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_a0;
    ppuVar4 = &puStack_a0;
    ppuVar5 = &puStack_a0;
    ppuVar6 = &puStack_a0;
    ppuVar8 = &puStack_a0;
    ppuVar9 = &puStack_a0;
    ppuVar10 = &puStack_a0;
    ppuVar11 = &puStack_a0;
    ppuVar12 = &puStack_a0;
    ppuVar13 = &puStack_a0;
    ppuVar14 = &puStack_a0;
    ppuVar15 = &puStack_a0;
    ppuVar16 = &puStack_a0;
    ppuVar17 = &puStack_a0;
    ppuVar18 = &puStack_a0;
    ppuVar19 = &puStack_a0;
    ppuVar20 = &puStack_a0;
    ppuVar21 = &puStack_a0;
    func_0x000107c615f0();
    uVar2 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef3cc10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1013ea594;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b0380;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar7 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar7);
    pcStack_80 = FUN_1013e5f14;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b03a8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef3cc30);
    pcStack_80 = (code *)0x1013ea5b8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b03d0;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar7 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar7);
    pcStack_80 = FUN_1013e5fa0;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b03f8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar2);
    uVar7 = 0x656c6c6168436e6f;
    func_0x000107c5fadc(0x656c6c6168436e6f,0xef7469784565676e);
    pcStack_80 = (code *)0x1013e5fa4;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b0420;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1013e5fb0;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b0448;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar7);
    uVar7 = 0x655270696b536e6f;
    func_0x000107c5fadc(0x655270696b536e6f,0xed00007473657571);
    pcStack_80 = (code *)0x1013e5fb4;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b0470;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1013e5fc0;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b0498;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(uVar7);
    uVar7 = 0x6863746977536e6f;
    func_0x000107c5fadc(0x6863746977536e6f,0xef6c656e6e616843);
    pcStack_80 = (code *)0x1013e5fc4;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b04c0;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = FUN_1013e6050;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b04e8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(uVar7);
    uVar2 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010ef3cc50);
    pcStack_80 = (code *)0x1013ea5c0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c454;
    puStack_88 = &UNK_1103b0510;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar7 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar7);
    pcStack_80 = FUN_1013e6138;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b0538;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e8f4(param_1);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6954726564616568;
    func_0x000107c5fadc(0x6954726564616568,0xeb00000000656c74);
    pcStack_80 = FUN_1013ea5c8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101137fac;
    puStack_88 = &UNK_1103b0560;
    uStack_78 = param_2;
    func_0x000107c60bc4();
    uVar7 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar7);
    pcStack_80 = FUN_1013e6138;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b0588;
    func_0x000107c60bc4();
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c61170(uVar2);
    uVar2 = 0x7553726564616568;
    func_0x000107c5fadc(0x7553726564616568,0xee00656c74697462);
    pcStack_80 = (code *)0x1013ea5fc;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101137fac;
    puStack_88 = &UNK_1103b05b0;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar7 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar7);
    pcStack_80 = FUN_1013e625c;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b05d8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6972747441736f63;
    func_0x000107c5fadc(0x6972747441736f63,0xed00007365747562);
    pcStack_80 = FUN_1013ea630;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x1013e6cc8;
    puStack_88 = &UNK_1103b0600;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar7 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar7);
    pcStack_80 = FUN_1013e6d84;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b0628;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e904(param_1);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c60bd0(ppuVar20);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1013e5e8c; end: 1013e5f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e5e8c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_1013e8c9c(0);
  func_0x000107c61480(param_1,uVar1);
  if ((param_1 != 0) && (lVar2 = *(long *)(param_3 + 0x40), lVar2 != 0)) {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112d7bcb8);
    *(undefined8 *)(lVar2 + _DAT_112d7bcb8) = param_2;
    func_0x000107c61174();
    func_0x000107c615f0(param_2);
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1013e5f14; end: 1013e5f17;  */

void FUN_1013e5f14(void)

{
  return;
}



/* Entry: 1013e5f18; end: 1013e5f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e5f18(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_1013e8c9c(0);
  func_0x000107c61480(param_1,uVar1);
  if ((param_1 != 0) && (lVar2 = *(long *)(param_3 + 0x38), lVar2 != 0)) {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112d7bc68);
    *(undefined8 *)(lVar2 + _DAT_112d7bc68) = param_2;
    func_0x000107c61174();
    func_0x000107c615f0(param_2);
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1013e5fa0; end: 1013e5fcf;  */

void FUN_1013e5fa0(void)

{
  return;
}



/* Entry: 1013e5fd0; end: 1013e604f;  */

void FUN_1013e5fd0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_1013e8c9c(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + *param_3);
    *(undefined8 *)(lVar2 + *param_3) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1013e6050; end: 1013e6053;  */

void FUN_1013e6050(void)

{
  return;
}



/* Entry: 1013e6054; end: 1013e6137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1013e6054(long param_1,byte param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = 0;
  FUN_1013e8c9c(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    if (*(long *)(param_4 + 0x30) != 0) {
      *(byte *)(*(long *)(param_4 + 0x30) + _DAT_112d7bbb8) = param_2 & 1;
    }
    puVar3 = &UNK_1103b0660;
    func_0x000107c613fc(&UNK_1103b0660,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,param_4);
    puVar4 = &UNK_1103b0700;
    func_0x000107c613fc(&UNK_1103b0700,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = lVar2;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar3);
    FUN_1013f20ec(0x1013eab48,puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
  }
  return lVar2 != 0;
}



/* Entry: 1013e6138; end: 1013e613f;  */

void FUN_1013e6138(void)

{
  return;
}



/* Entry: 1013e6140; end: 1013e625b;  */

bool FUN_1013e6140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar2 = 0;
  FUN_1013e8c9c(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + *param_6);
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000107c61174(param_1);
    func_0x000107c61434(param_3);
    func_0x000107c6142c(uVar2);
    puVar4 = &UNK_1103b0660;
    func_0x000107c613fc(&UNK_1103b0660,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,param_5);
    func_0x000107c613fc(param_7,0x20,7);
    *(undefined **)(param_7 + 0x10) = puVar4;
    *(long *)(param_7 + 0x18) = lVar3;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar4);
    FUN_1013f20ec(param_8,param_7);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(param_7);
    func_0x000107c61170(param_1);
  }
  return lVar3 != 0;
}



/* Entry: 1013e625c; end: 1013e625f;  */

void FUN_1013e625c(void)

{
  return;
}



/* Entry: 1013e6260; end: 1013e6c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e6260(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  undefined *puVar18;
  byte bVar19;
  undefined1 *puVar20;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  long lStack_c0;
  long lStack_b8;
  uint uStack_ac;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  byte bStack_90;
  undefined7 uStack_8f;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_1013e8c9c(0);
  lVar8 = param_1;
  func_0x000107c61480(param_1,uVar3);
  if (lVar8 == 0) {
    return;
  }
  lStack_a0 = lVar8;
  func_0x000100672b50(param_2,&uStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
    return;
  }
  func_0x000107c61174();
  uVar3 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puVar18 = PTR___sypN_11034f1a8;
  pbVar4 = &bStack_90;
  func_0x000107c6147c(pbVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if (((ulong)pbVar4 & 1) == 0) {
    func_0x000107c61170(param_1);
    return;
  }
  lVar8 = CONCAT71(uStack_8f,bStack_90);
  uStack_ac = 0;
  lStack_c0 = param_1;
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    uVar7 = 0;
    lVar5 = -0x2fffffffffffffef;
    func_0x000100029284(0xd000000000000011);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
      func_0x000107c6142c(lVar8);
      pbVar4 = &bStack_90;
      func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
      if (((ulong)pbVar4 & 1) != 0) {
        uStack_ac = (uint)bStack_90;
        goto LAB_1013e63e4;
      }
    }
    uStack_ac = 0;
  }
LAB_1013e63e4:
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_1013e6464:
    uStack_c8 = 0;
  }
  else {
    func_0x000107c61434(lVar8);
    lVar5 = 0x6c62617070696b73;
    uVar7 = 0xe900000000000065;
    func_0x000100029284(0x6c62617070696b73);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e6464;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar4 & 1) == 0) goto LAB_1013e6464;
    uStack_c8 = (uint)bStack_90;
  }
  uStack_c4 = 0;
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar5 = 0x6261686374697773;
    uVar7 = 0;
    func_0x000100029284(0x6261686374697773);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
      func_0x000107c6142c(lVar8);
      pbVar4 = &bStack_90;
      func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
      if (((ulong)pbVar4 & 1) != 0) {
        uStack_c4 = (uint)bStack_90;
        goto LAB_1013e64e4;
      }
    }
    uStack_c4 = 0;
  }
LAB_1013e64e4:
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_1013e655c:
    uStack_cc = 0;
  }
  else {
    func_0x000107c61434(lVar8);
    lVar5 = -0x2fffffffffffffed;
    uVar7 = 0;
    func_0x000100029284(0xd000000000000013);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e655c;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar4 & 1) == 0) goto LAB_1013e655c;
    uStack_cc = (uint)bStack_90;
  }
  lStack_98 = param_4;
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_1013e65ec:
    bVar17 = 0;
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1013e6670;
LAB_1013e65f8:
    func_0x000107c61434(lVar8);
    uVar7 = 0;
    lVar5 = -0x2fffffffffffffef;
    func_0x000100029284(0xd000000000000011);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e6670;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar4 & 1) == 0) goto LAB_1013e6670;
    bVar19 = bStack_90;
    if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1013e667c;
LAB_1013e66fc:
    uStack_d8 = 0;
    uStack_a8 = 0;
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1013e6788;
LAB_1013e670c:
    func_0x000107c61434(lVar8);
    lVar5 = -0x2ffffffffffffff0;
    uVar7 = 0;
    func_0x000100029284(0xd000000000000010);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e6788;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSSN_11034da80,6);
    uVar3 = CONCAT71(uStack_8f,bStack_90);
    uVar7 = uStack_88;
    if ((int)pbVar4 == 0) {
      uVar3 = 0;
      uVar7 = 0;
    }
    if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1013e6798;
LAB_1013e67dc:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(lVar8);
    lVar5 = 0x6d457265646e6572;
    uVar7 = 0xeb000000006c6961;
    func_0x000100029284(0x6d457265646e6572);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e65ec;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar4 & 1) == 0) goto LAB_1013e65ec;
    bVar17 = bStack_90;
    if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1013e65f8;
LAB_1013e6670:
    bVar19 = 0;
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1013e66fc;
LAB_1013e667c:
    func_0x000107c61434(lVar8);
    lVar5 = 0x656e6f6870;
    uVar7 = 0;
    func_0x000100029284(0x656e6f6870);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e66fc;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSSN_11034da80,6);
    uStack_d8 = CONCAT71(uStack_8f,bStack_90);
    uStack_a8 = uStack_88;
    if ((int)pbVar4 == 0) {
      uStack_d8 = 0;
      uStack_a8 = 0;
    }
    if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1013e670c;
LAB_1013e6788:
    uVar3 = 0;
    uVar7 = 0;
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1013e67dc;
LAB_1013e6798:
    func_0x000107c61434(lVar8);
    lVar5 = 0x6c69616d65;
    uVar15 = 0;
    func_0x000100029284(0x6c69616d65);
    if ((uVar15 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e67dc;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c6142c(lVar8);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSSN_11034da80,6);
    uVar15 = CONCAT71(uStack_8f,bStack_90);
    uVar16 = uStack_88;
    if ((int)pbVar4 == 0) {
      uVar15 = 0;
      uVar16 = 0;
    }
  }
  lVar8 = *(long *)(lStack_98 + 0x30);
  if (lVar8 == 0) {
    uVar10 = 1;
  }
  else {
    uVar1 = uStack_c4 ^ *(byte *)(lVar8 + _DAT_112d7bba0);
    uVar9 = (uint)(*(byte *)(lVar8 + _DAT_112d7bba0) == 2);
    uVar10 = uVar9 | uVar1;
    if (uVar9 != 0 || (uVar1 & 1) != 0) {
      *(char *)(lVar8 + _DAT_112d7bba0) = (char)uStack_c4;
    }
    if ((*(byte *)(lVar8 + _DAT_112d7bb98) == 2) ||
       (((uStack_c8 ^ *(byte *)(lVar8 + _DAT_112d7bb98)) & 1) != 0)) {
      *(char *)(lVar8 + _DAT_112d7bb98) = (char)uStack_c8;
      uVar10 = 1;
    }
    if ((*(byte *)(lVar8 + _DAT_112d7bba8) == 2) ||
       (((bVar17 ^ *(byte *)(lVar8 + _DAT_112d7bba8)) & 1) != 0)) {
      *(byte *)(lVar8 + _DAT_112d7bba8) = bVar17;
      uVar10 = 1;
    }
    if (*(byte *)(lVar8 + _DAT_112d7bbd8) != (bVar17 ^ 1)) {
      *(byte *)(lVar8 + _DAT_112d7bbd8) = bVar17 ^ 1;
      uVar10 = 1;
    }
    if (uStack_cc != *(byte *)(lVar8 + _DAT_112d7bbb0)) {
      *(char *)(lVar8 + _DAT_112d7bbb0) = (char)uStack_cc;
      uVar10 = 1;
    }
    if (bVar19 != *(byte *)(lVar8 + _DAT_112d7bbb8)) {
      *(byte *)(lVar8 + _DAT_112d7bbb8) = bVar19;
      uVar10 = 1;
    }
  }
  if (*(long *)(lStack_98 + 0x38) != 0) {
    *(char *)(*(long *)(lStack_98 + 0x38) + _DAT_112d7bc70) = (char)uStack_ac;
  }
  if (*(long *)(lStack_98 + 0x40) != 0) {
    *(char *)(*(long *)(lStack_98 + 0x40) + _DAT_112d7bcc0) = (char)uStack_ac;
  }
  lStack_b8 = lVar2;
  uStack_ac = uVar10;
  if (uVar16 != 0) {
    uVar6 = uVar15 & 0xffffffffffff;
    if ((uVar16 & 0x2000000000000000) != 0) {
      uVar6 = uVar16 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      lVar8 = *(long *)(lStack_98 + 0x50);
      uStack_ac = uVar10 | lVar8 == 0;
      *(ulong *)(lStack_98 + 0x48) = uVar15;
      *(ulong *)(lStack_98 + 0x50) = uVar16;
      func_0x000107c61434(uVar16);
      func_0x000107c6142c(lVar8);
    }
  }
  uVar15 = uStack_a8;
  if (uStack_a8 == 0) {
    puVar20 = (undefined1 *)0x0;
    puVar18 = (undefined *)0xe000000000000000;
    if (uVar7 != 0) goto LAB_1013e6a08;
LAB_1013e6a70:
    func_0x000107c6142c(uStack_a8);
    func_0x000107c6142c(uVar16);
    puVar12 = (undefined1 *)0x0;
    puVar11 = (undefined *)0xe000000000000000;
  }
  else {
    uStack_80 = uStack_d8;
    uStack_78 = uStack_a8;
    uVar6 = uStack_a8;
    func_0x000107c61434();
    func_0x000107c5eb88(puVar13);
    FUN_100e8b654();
    puVar20 = puVar13;
    puVar18 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar13,PTR___sSSN_11034da80,uVar6);
    (**(code **)(lVar14 + 8))(puVar13,lStack_b8);
    func_0x000107c6142c(uVar15);
    if (uVar7 == 0) goto LAB_1013e6a70;
LAB_1013e6a08:
    uStack_80 = uVar3;
    uStack_78 = uVar7;
    func_0x000107c5eb88(puVar13);
    FUN_100e8b654();
    puVar12 = puVar13;
    puVar11 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar13,PTR___sSSN_11034da80,uVar15);
    func_0x000107c6142c(uVar16);
    func_0x000107c6142c(uStack_a8);
    (**(code **)(lVar14 + 8))(puVar13,lStack_b8);
    func_0x000107c6142c(uVar7);
  }
  lVar8 = lStack_98;
  uVar7 = (ulong)puVar20 & 0xffffffffffff;
  if (((ulong)puVar18 & 0x2000000000000000) != 0) {
    uVar7 = (ulong)puVar18 >> 0x38 & 0xf;
  }
  if (uVar7 == 0) {
    uVar15 = (ulong)puVar11 >> 0x38 & 0xf;
    uVar7 = (ulong)puVar12 & 0xffffffffffff;
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar7 = uVar15;
    }
    if (uVar7 == 0) {
      func_0x000107c6142c(puVar18);
      func_0x000107c6142c(puVar11);
      lVar8 = lStack_c0;
      lVar2 = lStack_98;
      uVar10 = uStack_ac;
      goto joined_r0x0001013e6bf8;
    }
    lVar2 = *(long *)(lStack_98 + 0x58);
    func_0x000107c6142c(puVar18);
    puVar20 = (undefined1 *)0x0;
    puVar18 = (undefined *)0x0;
    uVar10 = lVar2 == 0 | uStack_ac;
  }
  else {
    uVar10 = *(long *)(lStack_98 + 0x58) == 0 | uStack_ac;
    uVar15 = (ulong)puVar11 >> 0x38 & 0xf;
  }
  uVar7 = (ulong)puVar12 & 0xffffffffffff;
  if (((ulong)puVar11 & 0x2000000000000000) != 0) {
    uVar7 = uVar15;
  }
  if (uVar7 == 0) {
    func_0x000107c6142c(puVar11);
    puVar12 = (undefined1 *)0x0;
    puVar11 = (undefined *)0x0;
  }
  uVar3 = 0;
  func_0x000104872184(0);
  func_0x000107c610f8();
  func_0x000104871870(puVar20,puVar18,puVar12,puVar11,uVar3);
  uVar3 = *(undefined8 *)(lVar8 + 0x58);
  *(undefined8 *)(lVar8 + 0x58) = puVar20;
  func_0x000107c61170(uVar3);
  lVar8 = lStack_c0;
  lVar2 = lStack_98;
joined_r0x0001013e6bf8:
  lStack_c0 = lVar8;
  lStack_98 = lVar2;
  if ((uVar10 & 1) != 0) {
    puVar18 = &UNK_1103b0660;
    func_0x000107c613fc(&UNK_1103b0660,0x18,7);
    func_0x000107c61644(puVar18 + 0x10,lVar2);
    puVar11 = &UNK_1103b0688;
    func_0x000107c613fc(&UNK_1103b0688,0x20,7);
    *(undefined **)(puVar11 + 0x10) = puVar18;
    *(long *)(puVar11 + 0x18) = lStack_a0;
    lVar8 = lStack_c0;
    func_0x000107c61174(lStack_c0);
    func_0x000107c6157c(puVar18);
    FUN_1013f20ec(0x1013eab40,puVar11);
    func_0x000107c61574(puVar18);
    func_0x000107c61574(puVar11);
  }
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 1013e6c28; end: 1013e6d83;  */

void FUN_1013e6c28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c61434(uVar1);
    uVar3 = uVar2;
    func_0x000107c61174(uVar2);
    FUN_1013e6fdc(uVar2,uVar4,uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 1013e6d84; end: 1013e6d87;  */

void FUN_1013e6d84(void)

{
  return;
}



/* Entry: 1013e6d88; end: 1013e6f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e6d88(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112d7bbe0) != 0) {
      func_0x000107c54514();
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) goto LAB_1013e6e04;
    }
    if (*(long *)(lVar2 + _DAT_112d7bbe0) != 0) {
      func_0x000107c526c0(0);
      lVar2 = *(long *)(param_1 + 0x30);
    }
  }
LAB_1013e6e04:
  lVar1 = lVar2;
  func_0x000107c61174();
  func_0x000107c61574(param_1);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112d7bc18) = 0;
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1013e6f04; end: 1013e6fa7;  */

void FUN_1013e6f04(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  FUN_100cb012c(unaff_x20 + 0x60);
  return;
}



/* Entry: 1013e6fa8; end: 1013e6fdb; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView initWithCoder:] */

undefined8 FUN_1013e6fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1013ea864();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1013e6fdc; end: 1013e71e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e6fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = _DAT_112d7bbd8;
  ppuVar7 = &puStack_d0;
  *(byte *)(unaff_x20 + _DAT_112d7bbd8) = (*(byte *)(unaff_x20 + _DAT_112d7bba8) ^ 0xff) & 1;
  puVar3 = &UNK_1103b0d18;
  func_0x000107c613fc(&UNK_1103b0d18,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_1103b0d40;
  func_0x000107c613fc(&UNK_1103b0d40,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar5 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1013ea854;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x100e1779c;
  puStack_88 = &UNK_1103b0d58;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar6);
  uStack_b0 = 0x1013ea85c;
  puStack_d0 = puVar1;
  uStack_c8 = 0x42000000;
  uStack_c0 = 0x100e17304;
  puStack_b8 = &UNK_1103b0d80;
  puStack_a8 = puVar4;
  func_0x000107c60bc4(&puStack_d0);
  lVar8 = unaff_x20;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c47be0();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_a8);
  func_0x000107c61574(puStack_78);
  uVar9 = *(undefined8 *)(lVar8 + _DAT_112d7bbe8);
  *(undefined **)(lVar8 + _DAT_112d7bbe8) = puVar5;
  func_0x000107c61174(puVar5);
  func_0x000107c61170(uVar9);
  if (*(char *)(unaff_x20 + lVar2) == '\0') {
    uVar9 = *(undefined8 *)(lVar8 + _DAT_112d7bb60);
    FUN_1013e7850(param_2,param_3);
  }
  else {
    uVar9 = *(undefined8 *)(lVar8 + _DAT_112d7bb68);
    FUN_1013e7bc8(param_1);
    param_2 = param_1;
  }
  func_0x000107c42c1c(uVar9);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1013e71e4; end: 1013e773f;  */

/* WARNING: Possible PIC construction at 0x0001013e7238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e72e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e7334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e7388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e73dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e742c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e7490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e74dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e750c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e7538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e7558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e7610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e7634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e765c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e7688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e76a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e76e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e76f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e76e4) */
/* WARNING: Removing unreachable block (ram,0x0001013e76ac) */
/* WARNING: Removing unreachable block (ram,0x0001013e768c) */
/* WARNING: Removing unreachable block (ram,0x0001013e7660) */
/* WARNING: Removing unreachable block (ram,0x0001013e7638) */
/* WARNING: Removing unreachable block (ram,0x0001013e7614) */
/* WARNING: Removing unreachable block (ram,0x0001013e755c) */
/* WARNING: Removing unreachable block (ram,0x0001013e753c) */
/* WARNING: Removing unreachable block (ram,0x0001013e7510) */
/* WARNING: Removing unreachable block (ram,0x0001013e74e0) */
/* WARNING: Removing unreachable block (ram,0x0001013e7494) */
/* WARNING: Removing unreachable block (ram,0x0001013e7430) */
/* WARNING: Removing unreachable block (ram,0x0001013e7440) */
/* WARNING: Removing unreachable block (ram,0x0001013e73e0) */
/* WARNING: Removing unreachable block (ram,0x0001013e738c) */
/* WARNING: Removing unreachable block (ram,0x0001013e7338) */
/* WARNING: Removing unreachable block (ram,0x0001013e72e4) */
/* WARNING: Removing unreachable block (ram,0x0001013e723c) */
/* WARNING: Removing unreachable block (ram,0x0001013e76f4) */
/* WARNING: Removing unreachable block (ram,0x0001013e7704) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e71e4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112d7bbd0);
    *(long *)(param_2 + _DAT_112d7bbd0) = param_1;
    func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1013e7740; end: 1013e77d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e7740(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  if (*(long *)(param_3 + _DAT_112d7bbe0) != 0) {
    func_0x000107c4ff34();
  }
  lVar1 = _DAT_112d7bbd0;
  lVar3 = *(long *)(param_3 + _DAT_112d7bbd0);
  if (lVar3 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e77d8);
      (*pcVar2)();
    }
    func_0x000107c4ff34();
    func_0x000107c61170(lVar3);
    if (*(long *)(param_3 + lVar1) != 0) {
      func_0x000107c420a8();
    }
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1013e77d8; end: 1013e784f; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView skipTappedWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e77d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112d7bc00);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar1 = lVar2;
    func_0x000107c615f0(lVar2);
    func_0x000107c30ef0();
    func_0x000107c4e5ec(lVar2,param_2,lVar1);
    func_0x000107c30ef4(lVar1);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013e7850; end: 1013e7bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013e7850(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined1 uVar18;
  undefined *puVar19;
  long *plVar20;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar9 = _DAT_112d7bbb0;
  if ((*(byte *)(unaff_x20 + _DAT_112d7bbb0) & 1) == 0) {
    uVar18 = *(undefined1 *)(unaff_x20 + _DAT_112d7bbb8);
  }
  else {
    uVar18 = 1;
  }
  bVar6 = *(byte *)(unaff_x20 + _DAT_112d7bba0);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d7bbc0);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d7bbc0))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d7bbc8);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d7bbc8))[1];
  lVar10 = 0;
  FUN_1013ea3cc();
  lVar11 = lVar10;
  func_0x000107c610f8();
  lVar8 = _DAT_112d7bd38;
  *(undefined1 *)(lVar11 + _DAT_112d7bd38) = 2;
  lVar15 = _DAT_112d7bd40;
  *(undefined1 *)(lVar11 + _DAT_112d7bd40) = 2;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112d7bd48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(lVar11 + _DAT_112d7bd50);
  *(undefined1 *)(lVar11 + lVar8) = uVar18;
  *(byte *)(lVar11 + lVar15) = bVar6 & 1;
  *puVar1 = uVar17;
  puVar1[1] = uVar4;
  *puVar2 = uVar3;
  puVar2[1] = uVar5;
  puVar12 = PTR_s_init_1125d9248;
  lStack_88 = lVar11;
  lStack_80 = lVar10;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  plVar20 = &lStack_88;
  func_0x000107c61154(plVar20,puVar12);
  lVar8 = _DAT_112d7bb90;
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d7bb90);
  *(long **)(unaff_x20 + _DAT_112d7bb90) = plVar20;
  func_0x000107c61170(uVar17);
  puVar19 = *(undefined **)(unaff_x20 + _DAT_112d7bbe8);
  puVar12 = puVar19;
  if (puVar19 == (undefined *)0x0) {
    puVar12 = PTR_PTR_1126aeaf8;
    func_0x000107c610f8(PTR_PTR_1126aeaf8);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_1013e7bc0;
    uStack_90 = 0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    uStack_a8 = 0x100e1779c;
    puStack_a0 = &UNK_1103b0cb8;
    ppuVar13 = &puStack_b8;
    func_0x000107c60bc4(ppuVar13);
    uStack_c8 = 0x1013e7bc4;
    uStack_c0 = 0;
    puStack_e8 = puVar7;
    uStack_e0 = 0x42000000;
    uStack_d8 = 0x100e17304;
    puStack_d0 = &UNK_1103b0ce0;
    ppuVar14 = &puStack_e8;
    func_0x000107c60bc4(ppuVar14);
    func_0x000107c47be0(puVar12);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61574(uStack_c0);
    func_0x000107c61574(uStack_90);
  }
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d7bb78);
  plVar20 = *(long **)(unaff_x20 + lVar8);
  if (plVar20 == (long *)0x0) {
    if ((*(byte *)(unaff_x20 + lVar9) & 1) == 0) {
      uVar18 = *(undefined1 *)(unaff_x20 + _DAT_112d7bbb8);
    }
    else {
      uVar18 = 1;
    }
    lVar15 = lVar10;
    func_0x000107c610f8();
    lVar9 = _DAT_112d7bd38;
    *(undefined1 *)(lVar15 + _DAT_112d7bd38) = 2;
    lVar8 = _DAT_112d7bd40;
    *(undefined1 *)(lVar15 + _DAT_112d7bd40) = 2;
    puVar1 = (undefined8 *)(lVar15 + _DAT_112d7bd48);
    puVar2 = (undefined8 *)(lVar15 + _DAT_112d7bd50);
    *(undefined1 *)(lVar15 + lVar9) = uVar18;
    *(undefined1 *)(lVar15 + lVar8) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar7 = PTR_s_init_1125d9248;
    lStack_f8 = lVar15;
    lStack_f0 = lVar10;
    func_0x000107c61174(puVar19);
    func_0x000107c61174(uVar17);
    plVar16 = &lStack_f8;
    func_0x000107c61154(plVar16,puVar7);
  }
  else {
    func_0x000107c61174(puVar19);
    func_0x000107c61174(uVar17);
    plVar16 = plVar20;
  }
  if (param_2 == 0) {
    func_0x000107c61174(plVar20);
    func_0x000107c61174();
    param_1 = 0;
  }
  else {
    func_0x000107c61174(plVar20);
    func_0x000107c61174();
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  puVar19 = PTR_PTR_1126d0c18;
  func_0x000107c610f8(PTR_PTR_1126d0c18);
  func_0x000107c49028();
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61170();
  func_0x000107c61170(plVar16);
  func_0x000107c61170(param_1);
  return puVar19;
}



/* Entry: 1013e7bc0; end: 1013e7bc7;  */

void FUN_1013e7bc0(void)

{
  return;
}



/* Entry: 1013e7bc8; end: 1013e7f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013e7bc8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined *puVar19;
  undefined1 uVar20;
  undefined1 *puVar21;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar9 = _DAT_112d7bbb0;
  plVar17 = &lStack_f0;
  if ((*(byte *)(unaff_x20 + _DAT_112d7bbb0) & 1) == 0) {
    uVar20 = *(undefined1 *)(unaff_x20 + _DAT_112d7bbb8);
  }
  else {
    uVar20 = 1;
  }
  bVar6 = *(byte *)(unaff_x20 + _DAT_112d7bba0);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d7bbc0);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d7bbc0))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d7bbc8);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d7bbc8))[1];
  lVar10 = 0;
  FUN_1013ea1e0();
  lVar11 = lVar10;
  func_0x000107c610f8();
  lVar8 = _DAT_112d7bcf0;
  *(undefined1 *)(lVar11 + _DAT_112d7bcf0) = 2;
  lVar16 = _DAT_112d7bcf8;
  *(undefined1 *)(lVar11 + _DAT_112d7bcf8) = 2;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112d7bd00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(lVar11 + _DAT_112d7bd08);
  *(undefined1 *)(lVar11 + lVar8) = uVar20;
  *(byte *)(lVar11 + lVar16) = bVar6 & 1;
  *puVar1 = uVar18;
  puVar1[1] = uVar4;
  *puVar2 = uVar3;
  puVar2[1] = uVar5;
  puVar13 = PTR_s_init_1125d9248;
  lStack_80 = lVar11;
  lStack_78 = lVar10;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  plVar12 = &lStack_80;
  func_0x000107c61154(plVar12,puVar13);
  lVar8 = _DAT_112d7bb88;
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d7bb88);
  *(long **)(unaff_x20 + _DAT_112d7bb88) = plVar12;
  func_0x000107c61170(uVar18);
  puVar19 = *(undefined **)(unaff_x20 + _DAT_112d7bbe8);
  puVar13 = puVar19;
  if (puVar19 == (undefined *)0x0) {
    puVar13 = PTR_PTR_1126aeaf8;
    func_0x000107c610f8(PTR_PTR_1126aeaf8);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = FUN_1013e7f14;
    uStack_88 = 0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    uStack_a0 = 0x100e1779c;
    puStack_98 = &UNK_1103b0c68;
    ppuVar14 = &puStack_b0;
    func_0x000107c60bc4(ppuVar14);
    uStack_c0 = 0x1013e7f18;
    uStack_b8 = 0;
    puStack_e0 = puVar7;
    uStack_d8 = 0x42000000;
    uStack_d0 = 0x100e17304;
    puStack_c8 = &UNK_1103b0c90;
    ppuVar15 = &puStack_e0;
    func_0x000107c60bc4(ppuVar15);
    func_0x000107c47be0(puVar13);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61574(uStack_b8);
    func_0x000107c61574(uStack_88);
  }
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d7bb80);
  puVar21 = *(undefined1 **)(unaff_x20 + lVar8);
  if (puVar21 == (undefined1 *)0x0) {
    if ((*(byte *)(unaff_x20 + lVar9) & 1) == 0) {
      uVar20 = *(undefined1 *)(unaff_x20 + _DAT_112d7bbb8);
    }
    else {
      uVar20 = 1;
    }
    lVar16 = lVar10;
    func_0x000107c610f8();
    lVar9 = _DAT_112d7bcf0;
    *(undefined1 *)(lVar16 + _DAT_112d7bcf0) = 2;
    lVar8 = _DAT_112d7bcf8;
    *(undefined1 *)(lVar16 + _DAT_112d7bcf8) = 2;
    puVar1 = (undefined8 *)(lVar16 + _DAT_112d7bd00);
    puVar2 = (undefined8 *)(lVar16 + _DAT_112d7bd08);
    *(undefined1 *)(lVar16 + lVar9) = uVar20;
    *(undefined1 *)(lVar16 + lVar8) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar7 = PTR_s_init_1125d9248;
    lStack_f0 = lVar16;
    lStack_e8 = lVar10;
    func_0x000107c61174(puVar19);
    func_0x000107c61174(uVar18);
    func_0x000107c61154(&lStack_f0,puVar7);
    puVar21 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c61174(puVar19);
    func_0x000107c61174(uVar18);
    plVar17 = (long *)puVar21;
  }
  puVar19 = PTR_PTR_1126afb20;
  func_0x000107c610f8(PTR_PTR_1126afb20);
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar21);
  func_0x000107c61174();
  func_0x000107c49044(puVar19);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(plVar17);
  return puVar19;
}



/* Entry: 1013e7f14; end: 1013e7f1b;  */

void FUN_1013e7f14(void)

{
  return;
}



/* Entry: 1013e7f1c; end: 1013e7f1f; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView emailEntryFinished:] */

void FUN_1013e7f1c(void)

{
  return;
}



/* Entry: 1013e7f20; end: 1013e811b;  */

/* WARNING: Possible PIC construction at 0x0001013e8020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e8038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e80e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e803c) */
/* WARNING: Removing unreachable block (ram,0x0001013e8024) */
/* WARNING: Removing unreachable block (ram,0x0001013e80e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e7f20(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7bc08);
  if ((lVar3 != 0) && (*(char *)(unaff_x20 + _DAT_112d7bc18) == '\x01')) {
    if (*(char *)(unaff_x20 + _DAT_112d7bbb0) == '\x01') {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d7bb60);
      func_0x000107c615f0(lVar3);
      func_0x000107c4ffe8();
      func_0x000107c61180();
      if (lVar4 != 0) {
        puVar1 = &UNK_1103b0b60;
        func_0x000107c613fc(&UNK_1103b0b60,0x18,7);
        *(long *)(puVar1 + 0x10) = lVar3;
        pcStack_40 = (code *)0x1013ea7b8;
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_1000b0c7c;
        puStack_48 = &UNK_1103b0b78;
        puStack_38 = puVar1;
        func_0x000107c60bc4(&puStack_60);
        puVar1 = puStack_38;
        func_0x000107c615f0(lVar3);
        func_0x000107c615f0(lVar4);
        func_0x000107c61574(puVar1);
        func_0x000107c5e2a4(lVar4);
      }
    }
    else {
      if (*(char *)(unaff_x20 + _DAT_112d7bbb8) != '\x01') {
        return;
      }
      puVar1 = &UNK_1103b0b10;
      func_0x000107c613fc(&UNK_1103b0b10,0x20,7);
      *(long *)(puVar1 + 0x10) = unaff_x20;
      *(long *)(puVar1 + 0x18) = lVar3;
      pcStack_40 = FUN_1013ea7b0;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_1103b0b28;
      puStack_38 = puVar1;
      func_0x000107c60bc4(&puStack_60);
      puVar1 = puStack_38;
      func_0x000107c615f4(lVar3,2);
      func_0x000107c61174();
      func_0x000107c61574(puVar1);
      func_0x0001000d76cc("COS Abandoned",ppuVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 1013e811c; end: 1013e83f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e811c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  lVar12 = *(long *)(param_1 + _DAT_112d7bbd0);
  if (lVar12 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c61174(lVar12);
    func_0x000107c4807c();
    puVar3 = puVar2;
    func_0x000105219810();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e83f0);
      (*pcVar1)();
    }
    puVar4 = &UNK_1103b0bb0;
    func_0x000107c613fc(&UNK_1103b0bb0,0x20,7);
    *(long *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x1013ea7e8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100de205c;
    puStack_88 = &UNK_1103b0bc8;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    puVar6 = puVar4;
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar3);
    puVar3 = puStack_78;
    func_0x000107c61574();
    func_0x0001052198b8();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e83f4);
      (*pcVar1)();
    }
    uStack_80 = 0x1013eab60;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar9;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100de205c;
    puStack_88 = &UNK_1103b0bf0;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar3);
    puVar3 = puStack_78;
    func_0x000107c61574();
    func_0x000105219900();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e83f8);
      (*pcVar1)();
    }
    lVar8 = (long)puVar3;
    FUN_100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 5;
    *(undefined8 *)(lVar8 + 0x10) = 2;
    *(undefined **)(lVar8 + 0x20) = puVar6;
    *(undefined **)(lVar8 + 0x28) = puVar4;
    puVar9 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    uVar10 = 0;
    FUN_1013ea9bc(0,0x112d360a8,&PTR_PTR_1126aed70);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar4);
    lVar11 = lVar8;
    func_0x000107c5fc48(lVar8,uVar10);
    func_0x000107c61574(lVar8);
    func_0x000107c4656c(puVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar11);
    func_0x000107c59bc8(puVar9);
    func_0x000107c3e2c0(puVar2);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar9);
  }
  return;
}



/* Entry: 1013e83f8; end: 1013e841f; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView emailEntryExited] */

void FUN_1013e83f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013e7f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013e8420; end: 1013e8423; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView phoneEntryFinishedWithSuccess:] */

void FUN_1013e8420(void)

{
  return;
}



/* Entry: 1013e8424; end: 1013e861f;  */

/* WARNING: Possible PIC construction at 0x0001013e8524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e853c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e85e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e8540) */
/* WARNING: Removing unreachable block (ram,0x0001013e8528) */
/* WARNING: Removing unreachable block (ram,0x0001013e85ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e8424(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7bc08);
  if ((lVar3 != 0) && (*(char *)(unaff_x20 + _DAT_112d7bc18) == '\x01')) {
    if (*(char *)(unaff_x20 + _DAT_112d7bbb0) == '\x01') {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d7bb68);
      func_0x000107c615f0(lVar3);
      func_0x000107c4ffe8();
      func_0x000107c61180();
      if (lVar4 != 0) {
        puVar1 = &UNK_1103b09f8;
        func_0x000107c613fc(&UNK_1103b09f8,0x18,7);
        *(long *)(puVar1 + 0x10) = lVar3;
        uStack_40 = 0x1013eab80;
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_1000b0c7c;
        puStack_48 = &UNK_1103b0a10;
        puStack_38 = puVar1;
        func_0x000107c60bc4(&puStack_60);
        puVar1 = puStack_38;
        func_0x000107c615f0(lVar3);
        func_0x000107c615f0(lVar4);
        func_0x000107c61574(puVar1);
        func_0x000107c5e2a4(lVar4);
      }
    }
    else {
      if (*(char *)(unaff_x20 + _DAT_112d7bbb8) != '\x01') {
        return;
      }
      puVar1 = &UNK_1103b09a8;
      func_0x000107c613fc(&UNK_1103b09a8,0x20,7);
      *(long *)(puVar1 + 0x10) = unaff_x20;
      *(long *)(puVar1 + 0x18) = lVar3;
      uStack_40 = 0x1013ea770;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_1103b09c0;
      puStack_38 = puVar1;
      func_0x000107c60bc4(&puStack_60);
      puVar1 = puStack_38;
      func_0x000107c615f4(lVar3,2);
      func_0x000107c61174();
      func_0x000107c61574(puVar1);
      func_0x0001000d76cc("COS Abandoned",ppuVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 1013e8620; end: 1013e88fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e8620(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  lVar12 = *(long *)(param_1 + _DAT_112d7bbd0);
  if (lVar12 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c61174(lVar12);
    func_0x000107c4807c();
    puVar3 = puVar2;
    func_0x000105219810();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e88f4);
      (*pcVar1)();
    }
    puVar4 = &UNK_1103b0a48;
    func_0x000107c613fc(&UNK_1103b0a48,0x20,7);
    *(long *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1013ea778;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100de205c;
    puStack_88 = &UNK_1103b0a60;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    puVar6 = puVar4;
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar3);
    puVar3 = puStack_78;
    func_0x000107c61574();
    func_0x0001052198b8();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e88f8);
      (*pcVar1)();
    }
    pcStack_80 = (code *)0x1013eab5c;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar9;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100de205c;
    puStack_88 = &UNK_1103b0a88;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar3);
    puVar3 = puStack_78;
    func_0x000107c61574();
    func_0x000105219900();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e88fc);
      (*pcVar1)();
    }
    lVar8 = (long)puVar3;
    FUN_100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 5;
    *(undefined8 *)(lVar8 + 0x10) = 2;
    *(undefined **)(lVar8 + 0x20) = puVar6;
    *(undefined **)(lVar8 + 0x28) = puVar4;
    puVar9 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    uVar10 = 0;
    FUN_1013ea9bc(0,0x112d360a8,&PTR_PTR_1126aed70);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar4);
    lVar11 = lVar8;
    func_0x000107c5fc48(lVar8,uVar10);
    func_0x000107c61574(lVar8);
    func_0x000107c4656c(puVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar11);
    func_0x000107c59bc8(puVar9);
    func_0x000107c3e2c0(puVar2);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar9);
  }
  return;
}



/* Entry: 1013e88fc; end: 1013e89df;  */

void FUN_1013e88fc(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar3 = &puStack_70;
  lVar2 = *(long *)(param_2 + *param_4);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c613fc(param_5,0x18,7);
    *(undefined8 *)(param_5 + 0x10) = param_3;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    uStack_58 = param_7;
    uStack_50 = param_6;
    lStack_48 = param_5;
    func_0x000107c60bc4(&puStack_70);
    lVar1 = lStack_48;
    func_0x000107c615f0(lVar2);
    func_0x000107c615f0(param_3);
    func_0x000107c61574(lVar1);
    func_0x000107c5e2a4(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1013e89e0; end: 1013e8a5b; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView phoneEntryExited] */

void FUN_1013e89e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013e8424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013e8a5c; end: 1013e8b33;  */

/* WARNING: Possible PIC construction at 0x0001013e8ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e8af0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e8a5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7bc10);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d7bb68);
    func_0x000107c615f0(lVar2);
    lVar1 = lVar3;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112d7bb60);
      lVar1 = lVar3;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c30ef0();
        func_0x000107c4e5ec(lVar2,param_2,lVar1);
        func_0x000107c30ef4(lVar1);
      }
      else {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar3);
        func_0x000107c61180();
      }
    }
    else {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar3);
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 1013e8b34; end: 1013e8b5f; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView initWithFrame:] */

void FUN_1013e8b34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSCommunicationInputView",0x29,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e8b60);
  (*pcVar1)();
}



/* Entry: 1013e8b60; end: 1013e8b6b;  */

void FUN_1013e8b60(void)

{
  FUN_1013e8c9c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013e8b6c; end: 1013e8c9b; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013e8c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e8c74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e8b6c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bb60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bb68));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7bb70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bb78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bb80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bb88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bb90));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7bbc0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7bbc8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bbd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bbe0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bbe8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bbf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bbf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d7bc00));
  return;
}



/* Entry: 1013e8c9c; end: 1013e8cbb;  */

void FUN_1013e8c9c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d0f88);
  return;
}



/* Entry: 1013e8cbc; end: 1013e90b7;  */

/* WARNING: Possible PIC construction at 0x0001013e8e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e8f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e8e58) */
/* WARNING: Removing unreachable block (ram,0x0001013e8f30) */
/* WARNING: Removing unreachable block (ram,0x0001013e8e74) */
/* WARNING: Removing unreachable block (ram,0x0001013e8e84) */
/* WARNING: Removing unreachable block (ram,0x0001013e8f84) */
/* WARNING: Removing unreachable block (ram,0x0001013e8ed8) */
/* WARNING: Removing unreachable block (ram,0x0001013e8f9c) */
/* WARNING: Removing unreachable block (ram,0x0001013e8fac) */
/* WARNING: Removing unreachable block (ram,0x0001013e8fb8) */
/* WARNING: Removing unreachable block (ram,0x0001013e9068) */
/* WARNING: Removing unreachable block (ram,0x0001013e9010) */
/* WARNING: Removing unreachable block (ram,0x0001013e9080) */
/* WARNING: Removing unreachable block (ram,0x0001013e8f80) */
/* WARNING: Removing unreachable block (ram,0x0001013e9060) */
/* WARNING: Removing unreachable block (ram,0x0001013e9094) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e8cbc(undefined *param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112d7bc68);
  if ((lVar4 == 0) || ((*(byte *)(unaff_x20 + _DAT_112d7bc70) & 1) != 0)) {
    param_1 = PTR_PTR_1126d0ba8;
    func_0x000107c61168(PTR_PTR_1126d0ba8);
    func_0x000107c4d73c();
    func_0x000107c61180();
    (*param_3)();
  }
  else {
    lVar1 = unaff_x20 + _DAT_112d7bc60;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c615f0(lVar4);
    }
    else {
      puVar2 = &UNK_1103b0660;
      func_0x000107c613fc(&UNK_1103b0660,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,lVar1);
      uStack_70 = 0x1013eab70;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103b0858;
      ppuVar3 = &puStack_90;
      puStack_68 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_68;
      func_0x000107c615f0(lVar4);
      func_0x000107c61574(puVar2);
      func_0x000100162d98("Cos Start Submitting Account Identifier",ppuVar3);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
    }
    puVar2 = param_1;
    FUN_1013e9308(param_1,param_2);
    func_0x000107c30ef0();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c30ef8(puVar2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013e90b8; end: 1013e9223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e90b8(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d7bc58);
    func_0x000107c61174(uVar1);
    uVar2 = uVar1;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar2);
    lVar3 = param_1 + _DAT_112d7bc60;
    func_0x000107c61618();
    if (lVar3 != 0) {
      puVar4 = &UNK_1103b0660;
      func_0x000107c613fc(&UNK_1103b0660,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,lVar3);
      uStack_68 = 0x1013eab78;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1103b0920;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_60);
      func_0x000100162d98("Cos Start Submitting Account Identifier",ppuVar5);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar3);
    }
    puVar4 = PTR_PTR_1126d0ba8;
    func_0x000107c61168(PTR_PTR_1126d0ba8);
    func_0x000107c4d73c();
    func_0x000107c61180();
    (*param_2)();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1013e9224; end: 1013e9307; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0320COSEmailEntryService submitEmail:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001013e92ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e92f0) */

void FUN_1013e9224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1103b0958;
  func_0x000107c613fc(&UNK_1103b0958,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_1103b0980;
  func_0x000107c613fc(&UNK_1103b0980,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_1013e8cbc(param_3,param_2,0x1013eab38,puVar1,FUN_1013ea760,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1013e9308; end: 1013e951f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e9308(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  long unaff_x20;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_68;
  
  if (*(long *)(unaff_x20 + _DAT_112d7bc50) == 0) {
    return;
  }
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    return;
  }
  lVar1 = lStack_68;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar3 = *(ulong **)(lVar1 + _DAT_113093350);
    puVar2 = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    if (puVar3 != (ulong *)0x0) goto LAB_1013e93a8;
  }
  puVar2 = (ulong *)0x0;
  func_0x000104861108();
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_1013e93a8:
  func_0x000104865260(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x000104864afc(param_1,param_2,1);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x158))();
  lVar1 = lStack_68;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_113093358);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(lVar1);
  }
  lVar1 = lStack_68;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_113093360);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lVar1);
  }
  func_0x000104864a24(0);
  func_0x000107c610f8();
  puVar3 = puVar2;
  func_0x000107c61174(puVar2);
  func_0x000104863d8c(puVar2,uVar4,uVar5);
  func_0x000107c57ea4(lStack_68);
  func_0x000107c61170(puVar2);
  lVar1 = unaff_x20 + _DAT_112d7bc60;
  func_0x000107c61618();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(lStack_68);
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x48) = param_1;
    *(undefined8 *)(lVar1 + 0x50) = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c615e8(lVar1);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 1013e9520; end: 1013e954b; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0320COSEmailEntryService init] */

void FUN_1013e9520(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSEmailEntryService",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e954c);
  (*pcVar1)();
}



/* Entry: 1013e954c; end: 1013e9557;  */

void FUN_1013e954c(void)

{
  FUN_1013e957c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013e9558; end: 1013e957b; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0320COSEmailEntryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e9558(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7bc50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bc58));
  FUN_100cb012c(param_1 + _DAT_112d7bc60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d7bc68));
  return;
}



/* Entry: 1013e957c; end: 1013e959b;  */

void FUN_1013e957c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d1350);
  return;
}



/* Entry: 1013e959c; end: 1013e9a23;  */

/* WARNING: Possible PIC construction at 0x0001013e9624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e978c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e97ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e9790) */
/* WARNING: Removing unreachable block (ram,0x0001013e97b8) */
/* WARNING: Removing unreachable block (ram,0x0001013e97ac) */
/* WARNING: Removing unreachable block (ram,0x0001013e97c0) */
/* WARNING: Removing unreachable block (ram,0x0001013e9628) */
/* WARNING: Removing unreachable block (ram,0x0001013e97f0) */
/* WARNING: Removing unreachable block (ram,0x0001013e98d0) */
/* WARNING: Removing unreachable block (ram,0x0001013e980c) */
/* WARNING: Removing unreachable block (ram,0x0001013e9818) */
/* WARNING: Removing unreachable block (ram,0x0001013e98f0) */
/* WARNING: Removing unreachable block (ram,0x0001013e986c) */
/* WARNING: Removing unreachable block (ram,0x0001013e9908) */
/* WARNING: Removing unreachable block (ram,0x0001013e9918) */
/* WARNING: Removing unreachable block (ram,0x0001013e99cc) */
/* WARNING: Removing unreachable block (ram,0x0001013e9924) */
/* WARNING: Removing unreachable block (ram,0x0001013e99d4) */
/* WARNING: Removing unreachable block (ram,0x0001013e997c) */
/* WARNING: Removing unreachable block (ram,0x0001013e99ec) */
/* WARNING: Removing unreachable block (ram,0x0001013e9a00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e959c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7bcb8);
  if ((lVar3 == 0) || ((*(byte *)(unaff_x20 + _DAT_112d7bcc0) & 1) != 0)) {
    puVar4 = PTR_PTR_1126afb38;
    func_0x000107c61168(PTR_PTR_1126afb38);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c610f8(PTR_PTR_1126afb30);
    func_0x000107c494a8();
  }
  else {
    lVar2 = unaff_x20 + _DAT_112d7bcb0;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c615f0(lVar3);
    }
    else {
      puVar4 = &UNK_1103b0660;
      func_0x000107c613fc(&UNK_1103b0660,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,lVar2);
      pcStack_70 = FUN_1013ea67c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103b0718;
      ppuVar1 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar1);
      puVar4 = puStack_68;
      func_0x000107c615f0(lVar3);
      func_0x000107c61574(puVar4);
      func_0x000100162d98("Cos Start Submitting Account Identifier",ppuVar1);
      func_0x000107c60bd0(ppuVar1);
      func_0x000107c615e8(lVar2);
    }
    lVar3 = param_1;
    FUN_1013e9e4c(param_1);
    func_0x000107c30ef0();
    lVar2 = ((undefined8 *)(param_1 + _DAT_1130937e0))[1];
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
      lVar2 = -0x2000000000000000;
    }
    else {
      puVar4 = *(undefined **)(param_1 + _DAT_1130937e0);
    }
    func_0x000107c61434();
    func_0x000107c5fadc(puVar4,lVar2);
    func_0x000107c6142c(lVar2);
    func_0x000107c30ef8(lVar3,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1013e9a24; end: 1013e9bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e9a24(long param_1,code *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d7bcb0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      puVar2 = &UNK_1103b0660;
      func_0x000107c613fc(&UNK_1103b0660,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,lVar1);
      uStack_68 = 0x1013eab6c;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1103b07e0;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_60);
      func_0x000100162d98("Cos Start Submitting Account Identifier",ppuVar3);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112d7bca8);
    func_0x000107c61174(uVar4);
    uVar5 = uVar4;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar5);
    puVar2 = PTR_PTR_1126afb38;
    func_0x000107c61168(PTR_PTR_1126afb38);
    func_0x000107c4d73c();
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126afb30;
    func_0x000107c610f8(PTR_PTR_1126afb30);
    func_0x000107c494a8();
    func_0x000107c61170(puVar2);
    (*param_2)(puVar6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1013e9bbc; end: 1013e9d73;  */

void FUN_1013e9bbc(long param_1,undefined **param_2,long param_3,code *param_4,undefined8 param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *apuStack_78 [3];
  
  ppuVar6 = apuStack_78;
  func_0x000107c61428(param_3 + 0x10,ppuVar6,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar2 = param_3 + *param_6;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar3 = &UNK_1103b0660;
      func_0x000107c613fc(&UNK_1103b0660,0x18,7);
      func_0x000107c61644(puVar3 + 0x10,lVar2);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      ppuVar4 = &puStack_a8;
      uStack_90 = param_8;
      uStack_88 = param_7;
      puStack_80 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_80);
      ppuVar6 = ppuVar4;
      func_0x000100162d98("Cos Start Submitting Account Identifier",ppuVar4);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8();
    }
    ppuVar4 = param_2;
    if (param_2 == (undefined **)0x0) {
      func_0x0001052198e8();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e9d74);
        (*pcVar1)();
      }
      param_1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      ppuVar4 = ppuVar6;
    }
    uVar5 = *param_9;
    func_0x000107c61168(uVar5);
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(param_1,ppuVar4);
    func_0x000107c6142c(ppuVar4);
    func_0x000107c50838(uVar5);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    (*param_4)(uVar5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 1013e9d74; end: 1013e9e4b; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0320COSPhoneEntryService submitPhoneNumber:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001013e9e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e9e34) */

void FUN_1013e9d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1103b0818;
  func_0x000107c613fc(&UNK_1103b0818,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_1103b0840;
  func_0x000107c613fc(&UNK_1103b0840,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1013e959c(param_3,0x1013eab34,puVar1,0x1013eab3c,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1013e9e4c; end: 1013ea06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e9e4c(undefined8 param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_68;
  
  if (*(long *)(unaff_x20 + _DAT_112d7bca0) == 0) {
    return;
  }
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    return;
  }
  lVar1 = lStack_68;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar4 = *(ulong **)(lVar1 + _DAT_113093350);
    puVar2 = puVar4;
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    if (puVar4 != (ulong *)0x0) goto LAB_1013e9ee8;
  }
  puVar2 = (ulong *)0x0;
  func_0x000104861108();
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_1013e9ee8:
  func_0x000104866d7c(0);
  func_0x000107c610f8();
  uVar3 = param_1;
  func_0x000107c61174(param_1);
  func_0x000104865d0c(param_1,1,0,0xf000000000000000,0,0xf000000000000000);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x170))();
  lVar1 = lStack_68;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_113093358);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lVar1);
  }
  lVar1 = lStack_68;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + _DAT_113093360);
    func_0x000107c61174(uVar6);
    func_0x000107c61170(lVar1);
  }
  func_0x000104864a24(0);
  func_0x000107c610f8();
  puVar4 = puVar2;
  func_0x000107c61174(puVar2);
  func_0x000104863d8c(puVar2,uVar5,uVar6);
  func_0x000107c57ea4(lStack_68);
  func_0x000107c61170(puVar2);
  lVar1 = unaff_x20 + _DAT_112d7bcb0;
  func_0x000107c61618();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(lStack_68);
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = param_1;
    func_0x000107c61174(uVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 1013ea070; end: 1013ea09b; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0320COSPhoneEntryService init] */

void FUN_1013ea070(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPhoneEntryService",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ea09c);
  (*pcVar1)();
}



/* Entry: 1013ea09c; end: 1013ea0a7;  */

void FUN_1013ea09c(void)

{
  FUN_1013ea128();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013ea0a8; end: 1013ea0cb; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0320COSPhoneEntryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea0a8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7bca0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bca8));
  FUN_100cb012c(param_1 + _DAT_112d7bcb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d7bcb8));
  return;
}



/* Entry: 1013ea0cc; end: 1013ea127;  */

void FUN_1013ea0cc(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                  long *param_6)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + *param_3));
  func_0x000107c61170(*(undefined8 *)(param_1 + *param_4));
  FUN_100cb012c(param_1 + *param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + *param_6));
  return;
}



/* Entry: 1013ea128; end: 1013ea147;  */

void FUN_1013ea128(void)

{
  func_0x000107c61168(&PTR_PTR_1127d1488);
  return;
}



/* Entry: 1013ea148; end: 1013ea153; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSPhoneEntryDataSource accessoryTextForPhoneEntry] */

void FUN_1013ea148(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*(code *)&SUB_105219858)();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013ea154; end: 1013ea167; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSPhoneEntryDataSource shouldShowBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1013ea154(long param_1)

{
  return *(byte *)(param_1 + _DAT_112d7bcf0) & 1;
}



/* Entry: 1013ea168; end: 1013ea17b; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSPhoneEntryDataSource shouldShowSwitchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1013ea168(long param_1)

{
  return *(byte *)(param_1 + _DAT_112d7bcf8) & 1;
}



/* Entry: 1013ea17c; end: 1013ea187; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSPhoneEntryDataSource headerTitleForPhoneEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea17c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7bd00))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7bd00);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ea188; end: 1013ea193; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSPhoneEntryDataSource headerSubtitleForPhoneEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea188(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7bd08))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7bd08);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ea194; end: 1013ea1bf; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSPhoneEntryDataSource init] */

void FUN_1013ea194(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPhoneEntryDataSource",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ea1c0);
  (*pcVar1)();
}



/* Entry: 1013ea1c0; end: 1013ea1cb;  */

void FUN_1013ea1c0(void)

{
  FUN_1013ea1e0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013ea1cc; end: 1013ea1df; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSPhoneEntryDataSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013ea3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013ea3b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea1cc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112d7bd00 + 8),param_2,&DAT_112d7bd00,&DAT_112d7bd08);
  return;
}



/* Entry: 1013ea1e0; end: 1013ea1ff;  */

void FUN_1013ea1e0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d15c0);
  return;
}



/* Entry: 1013ea200; end: 1013ea213; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSEmailEntryDataSource shouldShowBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1013ea200(long param_1)

{
  return *(byte *)(param_1 + _DAT_112d7bd38) & 1;
}



/* Entry: 1013ea214; end: 1013ea21b; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSEmailEntryDataSource shouldDisplay1TLButton] */

undefined8 FUN_1013ea214(void)

{
  return 0;
}



/* Entry: 1013ea21c; end: 1013ea22f; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSEmailEntryDataSource shouldShowSwitchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1013ea21c(long param_1)

{
  return *(byte *)(param_1 + _DAT_112d7bd40) & 1;
}



/* Entry: 1013ea230; end: 1013ea23b; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSEmailEntryDataSource headerTitleForEmailEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea230(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7bd48))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7bd48);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ea23c; end: 1013ea247; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSEmailEntryDataSource headerSubtitleForEmailEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea23c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7bd50))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7bd50);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ea248; end: 1013ea29f;  */

void FUN_1013ea248(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ea2a0; end: 1013ea30b;  */

void FUN_1013ea2a0(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  (*param_3)();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013ea30c; end: 1013ea337; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSEmailEntryDataSource init] */

void FUN_1013ea30c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSEmailEntryDataSource",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ea338);
  (*pcVar1)();
}



/* Entry: 1013ea338; end: 1013ea343;  */

void FUN_1013ea338(void)

{
  FUN_1013ea3cc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013ea344; end: 1013ea37b;  */

void FUN_1013ea344(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013ea37c; end: 1013ea38f; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSEmailEntryDataSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013ea3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013ea3b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea37c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112d7bd48 + 8),param_2,&DAT_112d7bd48,&DAT_112d7bd50);
  return;
}



/* Entry: 1013ea390; end: 1013ea3cb;  */

/* WARNING: Possible PIC construction at 0x0001013ea3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013ea3b4) */

void FUN_1013ea390(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + *param_3 + 8));
  return;
}



/* Entry: 1013ea3cc; end: 1013ea3eb;  */

void FUN_1013ea3cc(void)

{
  func_0x000107c61168(&PTR_PTR_1127d1728);
  return;
}



/* Entry: 1013ea3ec; end: 1013ea553;  */

int FUN_1013ea3ec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1013ea468;
        goto LAB_1013ea44c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1013ea44c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1013ea468:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1013ea554; end: 1013ea593;  */

void FUN_1013ea554(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7bd80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93b0a0;
  func_0x000107c61520(&UNK_10d93b0a0,&UNK_1103b0338);
  puRam0000000112d7bd80 = puVar1;
  return;
}



/* Entry: 1013ea594; end: 1013ea5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea594(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_1013e8c9c(0);
  func_0x000107c61480(param_1,uVar1);
  if ((param_1 != 0) && (lVar2 = *(long *)(unaff_x20 + 0x40), lVar2 != 0)) {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112d7bcb8);
    *(undefined8 *)(lVar2 + _DAT_112d7bcb8) = param_2;
    func_0x000107c61174();
    func_0x000107c615f0(param_2);
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1013ea5c8; end: 1013ea62f;  */

uint FUN_1013ea5c8(uint param_1)

{
  FUN_1013e6140();
  return param_1 & 1;
}



/* Entry: 1013ea630; end: 1013ea637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea630(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  undefined *puVar18;
  byte bVar19;
  undefined1 *puVar20;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  long lStack_c0;
  long lStack_b8;
  uint uStack_ac;
  ulong uStack_a8;
  long lStack_a0;
  byte bStack_90;
  undefined7 uStack_8f;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_1013e8c9c(0);
  lVar8 = param_1;
  func_0x000107c61480(param_1,uVar3);
  if (lVar8 == 0) {
    return;
  }
  lStack_a0 = lVar8;
  func_0x000100672b50(param_2,&uStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
    return;
  }
  func_0x000107c61174();
  uVar3 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puVar18 = PTR___sypN_11034f1a8;
  pbVar4 = &bStack_90;
  func_0x000107c6147c(pbVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if (((ulong)pbVar4 & 1) == 0) {
    func_0x000107c61170(param_1);
    return;
  }
  lVar8 = CONCAT71(uStack_8f,bStack_90);
  uStack_ac = 0;
  lStack_c0 = param_1;
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    uVar7 = 0;
    lVar5 = -0x2fffffffffffffef;
    func_0x000100029284(0xd000000000000011);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
      func_0x000107c6142c(lVar8);
      pbVar4 = &bStack_90;
      func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
      if (((ulong)pbVar4 & 1) != 0) {
        uStack_ac = (uint)bStack_90;
        goto LAB_1013e63e4;
      }
    }
    uStack_ac = 0;
  }
LAB_1013e63e4:
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_1013e6464:
    uStack_c8 = 0;
  }
  else {
    func_0x000107c61434(lVar8);
    lVar5 = 0x6c62617070696b73;
    uVar7 = 0xe900000000000065;
    func_0x000100029284(0x6c62617070696b73);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e6464;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar4 & 1) == 0) goto LAB_1013e6464;
    uStack_c8 = (uint)bStack_90;
  }
  uStack_c4 = 0;
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar5 = 0x6261686374697773;
    uVar7 = 0;
    func_0x000100029284(0x6261686374697773);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
      func_0x000107c6142c(lVar8);
      pbVar4 = &bStack_90;
      func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
      if (((ulong)pbVar4 & 1) != 0) {
        uStack_c4 = (uint)bStack_90;
        goto LAB_1013e64e4;
      }
    }
    uStack_c4 = 0;
  }
LAB_1013e64e4:
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_1013e655c:
    uStack_cc = 0;
  }
  else {
    func_0x000107c61434(lVar8);
    lVar5 = -0x2fffffffffffffed;
    uVar7 = 0;
    func_0x000100029284(0xd000000000000013);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e655c;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar4 & 1) == 0) goto LAB_1013e655c;
    uStack_cc = (uint)bStack_90;
  }
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_1013e65ec:
    bVar17 = 0;
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1013e6670;
LAB_1013e65f8:
    func_0x000107c61434(lVar8);
    uVar7 = 0;
    lVar5 = -0x2fffffffffffffef;
    func_0x000100029284(0xd000000000000011);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e6670;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar4 & 1) == 0) goto LAB_1013e6670;
    bVar19 = bStack_90;
    if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1013e667c;
LAB_1013e66fc:
    uStack_d8 = 0;
    uStack_a8 = 0;
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1013e6788;
LAB_1013e670c:
    func_0x000107c61434(lVar8);
    lVar5 = -0x2ffffffffffffff0;
    uVar7 = 0;
    func_0x000100029284(0xd000000000000010);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e6788;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSSN_11034da80,6);
    uVar3 = CONCAT71(uStack_8f,bStack_90);
    uVar7 = uStack_88;
    if ((int)pbVar4 == 0) {
      uVar3 = 0;
      uVar7 = 0;
    }
    if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1013e6798;
LAB_1013e67dc:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(lVar8);
    lVar5 = 0x6d457265646e6572;
    uVar7 = 0xeb000000006c6961;
    func_0x000100029284(0x6d457265646e6572);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e65ec;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar4 & 1) == 0) goto LAB_1013e65ec;
    bVar17 = bStack_90;
    if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1013e65f8;
LAB_1013e6670:
    bVar19 = 0;
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1013e66fc;
LAB_1013e667c:
    func_0x000107c61434(lVar8);
    lVar5 = 0x656e6f6870;
    uVar7 = 0;
    func_0x000100029284(0x656e6f6870);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e66fc;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSSN_11034da80,6);
    uStack_d8 = CONCAT71(uStack_8f,bStack_90);
    uStack_a8 = uStack_88;
    if ((int)pbVar4 == 0) {
      uStack_d8 = 0;
      uStack_a8 = 0;
    }
    if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1013e670c;
LAB_1013e6788:
    uVar3 = 0;
    uVar7 = 0;
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1013e67dc;
LAB_1013e6798:
    func_0x000107c61434(lVar8);
    lVar5 = 0x6c69616d65;
    uVar15 = 0;
    func_0x000100029284(0x6c69616d65);
    if ((uVar15 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013e67dc;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c6142c(lVar8);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    pbVar4 = &bStack_90;
    func_0x000107c6147c(pbVar4,&uStack_80,puVar18 + 8,PTR___sSSN_11034da80,6);
    uVar15 = CONCAT71(uStack_8f,bStack_90);
    uVar16 = uStack_88;
    if ((int)pbVar4 == 0) {
      uVar15 = 0;
      uVar16 = 0;
    }
  }
  lVar8 = *(long *)(unaff_x20 + 0x30);
  if (lVar8 == 0) {
    uVar10 = 1;
  }
  else {
    uVar1 = uStack_c4 ^ *(byte *)(lVar8 + _DAT_112d7bba0);
    uVar9 = (uint)(*(byte *)(lVar8 + _DAT_112d7bba0) == 2);
    uVar10 = uVar9 | uVar1;
    if (uVar9 != 0 || (uVar1 & 1) != 0) {
      *(char *)(lVar8 + _DAT_112d7bba0) = (char)uStack_c4;
    }
    if ((*(byte *)(lVar8 + _DAT_112d7bb98) == 2) ||
       (((uStack_c8 ^ *(byte *)(lVar8 + _DAT_112d7bb98)) & 1) != 0)) {
      *(char *)(lVar8 + _DAT_112d7bb98) = (char)uStack_c8;
      uVar10 = 1;
    }
    if ((*(byte *)(lVar8 + _DAT_112d7bba8) == 2) ||
       (((bVar17 ^ *(byte *)(lVar8 + _DAT_112d7bba8)) & 1) != 0)) {
      *(byte *)(lVar8 + _DAT_112d7bba8) = bVar17;
      uVar10 = 1;
    }
    if (*(byte *)(lVar8 + _DAT_112d7bbd8) != (bVar17 ^ 1)) {
      *(byte *)(lVar8 + _DAT_112d7bbd8) = bVar17 ^ 1;
      uVar10 = 1;
    }
    if (uStack_cc != *(byte *)(lVar8 + _DAT_112d7bbb0)) {
      *(char *)(lVar8 + _DAT_112d7bbb0) = (char)uStack_cc;
      uVar10 = 1;
    }
    if (bVar19 != *(byte *)(lVar8 + _DAT_112d7bbb8)) {
      *(byte *)(lVar8 + _DAT_112d7bbb8) = bVar19;
      uVar10 = 1;
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(char *)(*(long *)(unaff_x20 + 0x38) + _DAT_112d7bc70) = (char)uStack_ac;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(char *)(*(long *)(unaff_x20 + 0x40) + _DAT_112d7bcc0) = (char)uStack_ac;
  }
  lStack_b8 = lVar2;
  uStack_ac = uVar10;
  if (uVar16 != 0) {
    uVar6 = uVar15 & 0xffffffffffff;
    if ((uVar16 & 0x2000000000000000) != 0) {
      uVar6 = uVar16 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      lVar8 = *(long *)(unaff_x20 + 0x50);
      uStack_ac = uVar10 | lVar8 == 0;
      *(ulong *)(unaff_x20 + 0x48) = uVar15;
      *(ulong *)(unaff_x20 + 0x50) = uVar16;
      func_0x000107c61434(uVar16);
      func_0x000107c6142c(lVar8);
    }
  }
  uVar15 = uStack_a8;
  if (uStack_a8 == 0) {
    puVar20 = (undefined1 *)0x0;
    puVar18 = (undefined *)0xe000000000000000;
    if (uVar7 != 0) goto LAB_1013e6a08;
LAB_1013e6a70:
    func_0x000107c6142c(uStack_a8);
    func_0x000107c6142c(uVar16);
    puVar12 = (undefined1 *)0x0;
    puVar11 = (undefined *)0xe000000000000000;
  }
  else {
    uStack_80 = uStack_d8;
    uStack_78 = uStack_a8;
    uVar6 = uStack_a8;
    func_0x000107c61434();
    func_0x000107c5eb88(puVar13);
    FUN_100e8b654();
    puVar20 = puVar13;
    puVar18 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar13,PTR___sSSN_11034da80,uVar6);
    (**(code **)(lVar14 + 8))(puVar13,lStack_b8);
    func_0x000107c6142c(uVar15);
    if (uVar7 == 0) goto LAB_1013e6a70;
LAB_1013e6a08:
    uStack_80 = uVar3;
    uStack_78 = uVar7;
    func_0x000107c5eb88(puVar13);
    FUN_100e8b654();
    puVar12 = puVar13;
    puVar11 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar13,PTR___sSSN_11034da80,uVar15);
    func_0x000107c6142c(uVar16);
    func_0x000107c6142c(uStack_a8);
    (**(code **)(lVar14 + 8))(puVar13,lStack_b8);
    func_0x000107c6142c(uVar7);
  }
  uVar7 = (ulong)puVar20 & 0xffffffffffff;
  if (((ulong)puVar18 & 0x2000000000000000) != 0) {
    uVar7 = (ulong)puVar18 >> 0x38 & 0xf;
  }
  if (uVar7 == 0) {
    uVar15 = (ulong)puVar11 >> 0x38 & 0xf;
    uVar7 = (ulong)puVar12 & 0xffffffffffff;
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar7 = uVar15;
    }
    if (uVar7 == 0) {
      func_0x000107c6142c(puVar18);
      func_0x000107c6142c(puVar11);
      lVar8 = lStack_c0;
      uVar10 = uStack_ac;
      goto joined_r0x0001013e6bf8;
    }
    lVar8 = *(long *)(unaff_x20 + 0x58);
    func_0x000107c6142c(puVar18);
    puVar20 = (undefined1 *)0x0;
    puVar18 = (undefined *)0x0;
    uVar10 = lVar8 == 0 | uStack_ac;
  }
  else {
    uVar10 = *(long *)(unaff_x20 + 0x58) == 0 | uStack_ac;
    uVar15 = (ulong)puVar11 >> 0x38 & 0xf;
  }
  uVar7 = (ulong)puVar12 & 0xffffffffffff;
  if (((ulong)puVar11 & 0x2000000000000000) != 0) {
    uVar7 = uVar15;
  }
  if (uVar7 == 0) {
    func_0x000107c6142c(puVar11);
    puVar12 = (undefined1 *)0x0;
    puVar11 = (undefined *)0x0;
  }
  uVar3 = 0;
  func_0x000104872184(0);
  func_0x000107c610f8();
  func_0x000104871870(puVar20,puVar18,puVar12,puVar11,uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = puVar20;
  func_0x000107c61170(uVar3);
  lVar8 = lStack_c0;
joined_r0x0001013e6bf8:
  lStack_c0 = lVar8;
  if ((uVar10 & 1) != 0) {
    puVar18 = &UNK_1103b0660;
    func_0x000107c613fc(&UNK_1103b0660,0x18,7);
    func_0x000107c61644(puVar18 + 0x10,unaff_x20);
    puVar11 = &UNK_1103b0688;
    func_0x000107c613fc(&UNK_1103b0688,0x20,7);
    *(undefined **)(puVar11 + 0x10) = puVar18;
    *(long *)(puVar11 + 0x18) = lStack_a0;
    lVar8 = lStack_c0;
    func_0x000107c61174(lStack_c0);
    func_0x000107c6157c(puVar18);
    FUN_1013f20ec(0x1013eab40,puVar11);
    func_0x000107c61574(puVar18);
    func_0x000107c61574(puVar11);
  }
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 1013ea638; end: 1013ea67b;  */

void FUN_1013ea638(void)

{
  long unaff_x20;
  
  FUN_1013e6c28(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


