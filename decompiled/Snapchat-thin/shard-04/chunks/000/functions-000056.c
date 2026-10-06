/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103053740; end: 10305374f;  */

undefined1  [16] FUN_103053740(void)

{
  return ZEXT816(0x1106019f8);
}



/* Entry: 103053750; end: 10305376f;  */

void FUN_103053750(void)

{
  func_0x000107c61168(&PTR_PTR_112f36178);
  return;
}



/* Entry: 103053770; end: 1030537ef;  */

void FUN_103053770(void)

{
  func_0x0001000285a8(0x112ea4e18,&UNK_10dab8020);
  func_0x0001000823a8(0x1030537b0,0);
  return;
}



/* Entry: 1030537f0; end: 1030537ff;  */

void FUN_1030537f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 103053800; end: 103053827;  */

void FUN_103053800(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 103053828; end: 103053847;  */

void FUN_103053828(void)

{
  func_0x000107c61168(&PTR_PTR_1128b1f40);
  return;
}



/* Entry: 103053848; end: 103053857;  */

void FUN_103053848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103053858; end: 10305392f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103053858(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  code *in_x3;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_50;
  puVar2 = &UNK_110601a78;
  func_0x000107c613fc(&UNK_110601a78,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = in_x5;
  *(undefined8 *)(puVar2 + 0x18) = in_x6;
  puVar3 = puVar2;
  FUN_103053828();
  puVar4 = puVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(puVar4 + _DAT_112f361d8);
  *puVar1 = FUN_103053cd0;
  puVar1[1] = puVar2;
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  puStack_50 = puVar4;
  puStack_48 = puVar3;
  func_0x000107c6157c(in_x6);
  func_0x000107c61154(&puStack_50,puVar2,0,0);
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x000107c483f8();
  (*in_x3)();
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 103053930; end: 103053987; -[_TtC42DeckNavigationTestbedFeatureImplementation40DeckNavigationTestbedEmptyViewController initWithCoder:] */

void FUN_103053930(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "DeckNavigationTestbedFeatureImplementation/DeckNavigationTestbedNavigationPlugin.swift"
                      ,0x56,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103053988);
  (*pcVar1)();
}



/* Entry: 103053988; end: 103053b8b;  */

void FUN_103053988(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  uVar3 = 0x6353207974706d45;
  func_0x000107c5fadc(0x6353207974706d45,0xec0000006e656572);
  func_0x000107c59e18();
  func_0x000107c61170(uVar3);
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5c5e8();
    func_0x000107c61180();
    func_0x000107c52b50(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c4d510();
    func_0x000107c61180();
    func_0x000107c61174();
    uVar3 = 0x65736f6c43;
    func_0x000107c5fadc(0x65736f6c43,0xe500000000000000);
    if (lVar2 == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      func_0x0001006732c8(&stack0xffffffffffffff80,lVar2);
      lVar7 = *(long *)(lVar2 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
      puVar6 = &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar7 + 0x10))(puVar6);
      puVar5 = puVar6;
      func_0x000107c605b0(puVar6,lVar2);
      (**(code **)(lVar7 + 8))(puVar6,lVar2);
      func_0x000100183ab8(&stack0xffffffffffffff80);
    }
    puVar4 = PTR__OBJC_CLASS___UIBarButtonItem_1126b0670;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIBarButtonItem_1126b0670);
    func_0x000107c48d80();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(puVar5);
    func_0x000107c55b80(unaff_x20);
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103053b8c);
  (*pcVar1)();
}



/* Entry: 103053b8c; end: 103053bb3; -[_TtC42DeckNavigationTestbedFeatureImplementation40DeckNavigationTestbedEmptyViewController viewDidLoad] */

void FUN_103053b8c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103053988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103053bb4; end: 103053bf3; -[_TtC42DeckNavigationTestbedFeatureImplementation40DeckNavigationTestbedEmptyViewController didTapClose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103053bb4(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f361d8);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103053bf4; end: 103053c53; -[_TtC42DeckNavigationTestbedFeatureImplementation40DeckNavigationTestbedEmptyViewController initWithNibName:bundle:] */

void FUN_103053bf4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeckNavigationTestbedFeatureImplementation.DeckNavigationTestbedEmptyViewController"
                      ,0x53,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103053c20);
  (*pcVar1)();
}



/* Entry: 103053c54; end: 103053caf; -[_TtC42DeckNavigationTestbedFeatureImplementation40DeckNavigationTestbedEmptyViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103053c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f361d8 + 8));
  return;
}



/* Entry: 103053cb0; end: 103053ccf;  */

void FUN_103053cb0(void)

{
  func_0x000107c61168(&PTR_PTR_112f36258);
  return;
}



/* Entry: 103053cd0; end: 103053f0f;  */

void FUN_103053cd0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 103053f10; end: 103053f3b;  */

void FUN_103053f10(void)

{
  func_0x0001000285a8(0x112f36318,&UNK_10db7e888);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 103053f3c; end: 103053fff;  */

void FUN_103053f3c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f36318;
  func_0x0001000285a8(0x112f36318,&UNK_10db7e888);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103054000; end: 103054003;  */

void FUN_103054000(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e898;
  func_0x000107c61520(&UNK_10db7e898,&UNK_110601b68);
  puRam0000000112f36368 = puVar1;
  return;
}



/* Entry: 103054004; end: 10305406f;  */

void FUN_103054004(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e898;
  func_0x000107c61520(&UNK_10db7e898,&UNK_110601b68);
  puRam0000000112f36368 = puVar1;
  return;
}



/* Entry: 103054070; end: 103054073;  */

void FUN_103054070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e940;
  func_0x000107c61520(&UNK_10db7e940,&UNK_110601bf8);
  puRam0000000112f36380 = puVar1;
  return;
}



/* Entry: 103054074; end: 1030540df;  */

void FUN_103054074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e940;
  func_0x000107c61520(&UNK_10db7e940,&UNK_110601bf8);
  puRam0000000112f36380 = puVar1;
  return;
}



/* Entry: 1030540e0; end: 103054163;  */

void FUN_1030540e0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103054164; end: 103054167;  */

void FUN_103054164(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e9b0;
  func_0x000107c61520(&UNK_10db7e9b0,&UNK_110601bf8);
  puRam0000000112f36398 = puVar1;
  return;
}



/* Entry: 103054168; end: 1030541a7;  */

void FUN_103054168(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e9b0;
  func_0x000107c61520(&UNK_10db7e9b0,&UNK_110601bf8);
  puRam0000000112f36398 = puVar1;
  return;
}



/* Entry: 1030541a8; end: 1030541ab;  */

void FUN_1030541a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f363a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e968;
  func_0x000107c61520(&UNK_10db7e968,&UNK_110601bf8);
  puRam0000000112f363a0 = puVar1;
  return;
}



/* Entry: 1030541ac; end: 1030541eb;  */

void FUN_1030541ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f363a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e968;
  func_0x000107c61520(&UNK_10db7e968,&UNK_110601bf8);
  puRam0000000112f363a0 = puVar1;
  return;
}



/* Entry: 1030541ec; end: 10305438b;  */

void FUN_1030541ec(void)

{
  return;
}



/* Entry: 10305438c; end: 1030543e3; -[_TtC37LegacyNavigationServiceImplementationP33_F6E213E3E461AB4879CC6734BE48810837DeckCompatiblePresentedViewController initWithCoder:] */

void FUN_10305438c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LegacyNavigationServiceImplementation/DeckCompatiblePresentedViewController.swift"
                      ,0x51,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030543e4);
  (*pcVar1)();
}



/* Entry: 1030543e4; end: 1030547b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030543e4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar8 = *(long *)(unaff_x20 + _DAT_112f363d0);
  func_0x000107c3d614();
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10305478c);
    (*pcVar1)();
  }
  func_0x000107c5a050();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103054790);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103054794);
    (*pcVar1)();
  }
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103054798);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10305479c);
    (*pcVar1)();
  }
  lVar5 = lVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  *(long *)(lVar3 + 0x20) = lVar2;
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030547a0);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030547a4);
    (*pcVar1)();
  }
  lVar5 = lVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  *(long *)(lVar3 + 0x28) = lVar2;
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030547ac);
      (*pcVar1)();
    }
    lVar5 = lVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    *(long *)(lVar3 + 0x30) = lVar2;
    lVar2 = lVar8;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar2 = unaff_x20;
        func_0x000107c5ce8c(unaff_x20);
        func_0x000107c61180();
        func_0x000107c61170(unaff_x20);
        lVar5 = lVar4;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar2);
        *(long *)(lVar3 + 0x38) = lVar5;
        uVar7 = 0;
        FUN_103054a30(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar2 = lVar3;
        func_0x000107c5fc48(lVar3,uVar7);
        func_0x000107c61574(lVar3);
        func_0x000107c3d048(puVar6);
        func_0x000107c61170(lVar2);
        func_0x000107c41c30(lVar8);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030547b4);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030547b0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030547a8);
  (*pcVar1)();
}



/* Entry: 1030547b4; end: 1030547db; -[_TtC37LegacyNavigationServiceImplementationP33_F6E213E3E461AB4879CC6734BE48810837DeckCompatiblePresentedViewController viewDidLoad] */

void FUN_1030547b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030543e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030547dc; end: 10305483b; -[_TtC37LegacyNavigationServiceImplementationP33_F6E213E3E461AB4879CC6734BE48810837DeckCompatiblePresentedViewController initWithNibName:bundle:] */

void FUN_1030547dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyNavigationServiceImplementation.DeckCompatiblePresentedViewController",
                      0x4b,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103054808);
  (*pcVar1)();
}



/* Entry: 10305483c; end: 10305484b; -[_TtC37LegacyNavigationServiceImplementationP33_F6E213E3E461AB4879CC6734BE48810837DeckCompatiblePresentedViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10305483c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f363d0));
  return;
}



/* Entry: 10305484c; end: 103054a0f;  */

/* WARNING: Possible PIC construction at 0x000103054888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103054900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030549d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010305488c) */
/* WARNING: Removing unreachable block (ram,0x000103054980) */
/* WARNING: Removing unreachable block (ram,0x000103054988) */
/* WARNING: Removing unreachable block (ram,0x0001030548dc) */
/* WARNING: Removing unreachable block (ram,0x000103054994) */
/* WARNING: Removing unreachable block (ram,0x0001030548e8) */
/* WARNING: Removing unreachable block (ram,0x0001030549fc) */
/* WARNING: Removing unreachable block (ram,0x000103054904) */
/* WARNING: Removing unreachable block (ram,0x000103054944) */
/* WARNING: Removing unreachable block (ram,0x0001030548f0) */
/* WARNING: Removing unreachable block (ram,0x000103054a0c) */
/* WARNING: Removing unreachable block (ram,0x0001030548fc) */
/* WARNING: Removing unreachable block (ram,0x0001030549d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10305484c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c61168(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  lVar2 = param_1;
  func_0x000107c6148c(param_1,puVar1);
  if (lVar2 == 0) {
    puStack_38 = PTR_DAT_11269ceb0;
    lVar2 = param_1;
    func_0x000107c61494(param_1,1,&puStack_38);
    if (lVar2 == 0) {
      lVar2 = 0;
      FUN_103054a10();
      func_0x000107c610f8();
      *(long *)(lVar2 + _DAT_112f363d0) = param_1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 103054a10; end: 103054a2f;  */

void FUN_103054a10(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2000);
  return;
}



/* Entry: 103054a30; end: 103054a6f;  */

void FUN_103054a30(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103054a70; end: 103054a73; -[_TtC37LegacyNavigationServiceImplementationP33_F6E213E3E461AB4879CC6734BE48810837DeckCompatiblePresentedViewController childViewControllerForStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103054a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f363d0));
  return;
}



/* Entry: 103054a74; end: 103054a77; -[_TtC37LegacyNavigationServiceImplementationP33_F6E213E3E461AB4879CC6734BE48810837DeckCompatiblePresentedViewController childViewControllerForStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103054a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f363d0));
  return;
}



/* Entry: 103054a78; end: 103054a7b; -[_TtC37LegacyNavigationServiceImplementationP33_F6E213E3E461AB4879CC6734BE48810837DeckCompatiblePresentedViewController childViewControllerForHomeIndicatorAutoHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103054a78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f363d0));
  return;
}



/* Entry: 103054a7c; end: 103054b37;  */

long FUN_103054a7c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x18,0);
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 103054b38; end: 103054ba7;  */

long FUN_103054b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001006c82b4();
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  *(undefined **)(unaff_x20 + 0x50) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x0001008f1af4(param_4,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Entry: 103054ba8; end: 10305511b;  */

void FUN_103054ba8(undefined8 param_1,long param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_138 [40];
  long alStack_110 [3];
  long lStack_f8;
  undefined8 uStack_f0;
  long alStack_e8 [3];
  long lStack_d0;
  undefined **ppuStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  func_0x0001000a8868(unaff_x20 + 0x20,uVar7);
  (**(code **)(lVar2 + 8))(auStack_90,uVar7,lVar2);
  FUN_103056584(param_2,param_3,param_4,param_5);
  if (param_2 != 0) {
    uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x10);
    func_0x000107c6157c(uVar7);
    func_0x000104859498(alStack_110,param_1);
    func_0x000107c61574(uVar7);
    if (alStack_110[0] == 0) {
      func_0x0001048588d4(alStack_110,param_1);
      if (alStack_110[0] == 0) {
        uStack_b0 = param_1;
        func_0x000103c7cd0c(0x10305664c,auStack_c0,
                            "Libraries/Platform/Navigation/LegacyNavigationServiceImplementation/LegacyNavigationServiceImplementation.swift"
                            ,0x6f,2,0x67);
        if (param_4 != (code *)0x0) {
          (*param_4)(2,0,1);
        }
        func_0x000107c61574(param_3);
        func_0x000107c61574(param_2);
        goto LAB_1030550a0;
      }
      func_0x000100083b20(alStack_e8);
      func_0x000107c61574(alStack_110[0]);
      func_0x0001008f1af4(alStack_e8,auStack_c0);
      lVar2 = lStack_a8;
      func_0x0001000a8868(auStack_c0,lStack_a8);
      lStack_d0 = lVar2;
      FUN_103056674(alStack_e8);
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))();
      func_0x0001000bb420(alStack_e8,alStack_110);
      func_0x000107c61428(unaff_x20 + 0x50,auStack_138,0x21,0);
      FUN_1030554ac(alStack_110,param_3);
      func_0x000107c614a8(auStack_138);
      func_0x000103056654(alStack_e8);
      func_0x0001000a8868();
      func_0x0001000a8868(auStack_90,lStack_78);
      lStack_d0 = lStack_78;
      ppuStack_c8 = *(undefined ***)(lStack_70 + 8);
      FUN_103056674(alStack_e8);
      (**(code **)(*(long *)(lStack_78 + -8) + 0x10))();
      puVar5 = &UNK_110601d38;
      puVar3 = puVar5;
      func_0x000107c613fc(&UNK_110601d38,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar4 = &UNK_110601d60;
      func_0x000107c613fc(&UNK_110601d60,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = param_2;
      *(undefined8 *)(puVar4 + 0x20) = param_3;
      *(code **)(puVar4 + 0x28) = param_4;
      *(undefined8 *)(puVar4 + 0x30) = param_5;
      func_0x000107c613fc(&UNK_110601d38,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      func_0x000101f1decc(auStack_90,alStack_110);
      puVar6 = &UNK_110601d88;
      func_0x000107c613fc(&UNK_110601d88,0x50,7);
      func_0x0001008f1af4(alStack_110,puVar6 + 0x10);
      *(long *)(puVar6 + 0x38) = param_2;
      *(undefined **)(puVar6 + 0x40) = puVar5;
      *(undefined8 *)(puVar6 + 0x48) = param_3;
      pcVar8 = *(code **)(lStack_a0 + 8);
      func_0x000107c61580(param_2,2);
      func_0x000107c61580(param_3,2);
      func_0x000100d30a7c(param_4,param_5);
      func_0x000107c6157c(puVar3);
      (*pcVar8)(param_3,&PTR_DAT_110601cf0,alStack_e8,FUN_1030566b0,puVar4,0x1030566c0,puVar6,
                lStack_a8,lStack_a0);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(param_3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(param_2);
    }
    else {
      func_0x000100083b20(alStack_e8);
      func_0x000107c61574(alStack_110[0]);
      func_0x0001008f1af4(alStack_e8,auStack_c0);
      lVar2 = lStack_a8;
      func_0x0001000a8868(auStack_c0,lStack_a8);
      lStack_d0 = lVar2;
      FUN_103056674(alStack_e8);
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))();
      func_0x0001000bb420(alStack_e8,alStack_110);
      func_0x000107c61428(unaff_x20 + 0x50,auStack_138,0x21,0);
      FUN_1030554ac(alStack_110,param_3);
      func_0x000107c614a8(auStack_138);
      func_0x000103056654(alStack_e8);
      lVar1 = 0;
      FUN_1030566d0();
      lVar2 = lVar1;
      func_0x000107c613fc();
      *(long *)(lVar2 + 0x10) = unaff_x20;
      *(long *)(lVar2 + 0x18) = param_2;
      *(undefined8 *)(lVar2 + 0x20) = param_3;
      *(code **)(lVar2 + 0x28) = param_4;
      *(undefined8 *)(lVar2 + 0x30) = param_5;
      func_0x0001000a8868(auStack_c0,lStack_a8);
      ppuStack_c8 = &PTR_DAT_110601e08;
      alStack_e8[0] = lVar2;
      lStack_d0 = lVar1;
      func_0x0001000a8868(auStack_90,lStack_78);
      lStack_f8 = lStack_78;
      uStack_f0 = *(undefined8 *)(lStack_70 + 8);
      FUN_103056674(alStack_110);
      (**(code **)(*(long *)(lStack_78 + -8) + 0x10))();
      puVar5 = &UNK_110601d38;
      func_0x000107c613fc(&UNK_110601d38,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      func_0x000101f1decc(auStack_90,auStack_138);
      puVar4 = &UNK_110601db0;
      func_0x000107c613fc(&UNK_110601db0,0x50,7);
      func_0x0001008f1af4(auStack_138,puVar4 + 0x10);
      *(long *)(puVar4 + 0x38) = param_2;
      *(undefined **)(puVar4 + 0x40) = puVar5;
      *(undefined8 *)(puVar4 + 0x48) = param_3;
      pcVar8 = *(code **)(lStack_a0 + 8);
      func_0x000107c61580(param_2,2);
      func_0x000107c61580(param_3,2);
      func_0x000107c6157c();
      func_0x000100d30a7c(param_4,param_5);
      func_0x000107c6157c(lVar2);
      (*pcVar8)(alStack_e8,param_3,&PTR_DAT_110601cf0,alStack_110,0x10305683c,puVar4,lStack_a8,
                lStack_a0);
      func_0x000107c61574(param_3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(lVar2);
      func_0x000107c61574(param_2);
      func_0x000103056654(alStack_110);
    }
    func_0x000103056654(alStack_e8);
    func_0x000103056654(auStack_c0);
  }
LAB_1030550a0:
  func_0x000103056654(auStack_90);
  return;
}



/* Entry: 10305511c; end: 103055403;  */

void FUN_10305511c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10305484c();
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    puVar1 = PTR_PTR_1126b0320;
    func_0x000107c61168(PTR_PTR_1126b0320);
    func_0x000107c615f0(uVar8);
    func_0x000107c4d044(puVar1);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5e6dc();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    uVar3 = uVar8;
    func_0x000107c4d048();
    func_0x000107c61180();
    func_0x000107c615e8(uVar8);
    func_0x000107c61170(puVar2);
    func_0x000107c61604(param_3 + 0x18,uVar3);
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_4 + 0x10) = uVar3;
    func_0x000107c615f0(uVar3);
    func_0x000107c615e8(uVar8);
    puVar1 = &UNK_110601d38;
    puVar4 = puVar1;
    func_0x000107c613fc(&UNK_110601d38,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,param_2);
    puVar2 = &UNK_110601e28;
    puVar5 = puVar2;
    func_0x000107c613fc(&UNK_110601e28,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,param_3);
    func_0x000107c613fc(&UNK_110601e28,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_4);
    puVar6 = &UNK_110601f40;
    func_0x000107c613fc(&UNK_110601f40,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined **)(puVar6 + 0x18) = puVar2;
    *(undefined **)(puVar6 + 0x20) = puVar4;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x103056840;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1029a6984;
    puStack_a0 = &UNK_110601f58;
    ppuVar7 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_90);
    func_0x000107c4dbd0(uVar3);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c613fc(&UNK_110601d38,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_2);
    puVar2 = &UNK_110601f90;
    func_0x000107c613fc(&UNK_110601f90,0x38,7);
    *(long *)(puVar2 + 0x10) = param_3;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(long *)(puVar2 + 0x20) = param_4;
    *(undefined8 *)(puVar2 + 0x28) = param_5;
    *(undefined8 *)(puVar2 + 0x30) = param_6;
    uStack_98 = 0x103056838;
    puStack_b8 = puVar4;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100ab47f8;
    puStack_a0 = &UNK_110601fa8;
    ppuVar7 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar7);
    puVar1 = puStack_90;
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_4);
    func_0x000100d30a7c(param_5,param_6);
    func_0x000107c61574(puVar1);
    func_0x000107c4f018(uVar3);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 103055404; end: 1030554ab;  */

undefined1  [16] FUN_103055404(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x30);
  func_0x000107c5fb78(0xd00000000000002d,0x800000010f11b540);
  uVar2 = 0x112f36638;
  func_0x0001000285a8(0x112f36638,&UNK_10db7ec10);
  func_0x000107c603d0(param_1,&uStack_30,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 1030554ac; end: 1030556cf;  */

void FUN_1030554ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  lStack_58 = param_1[3];
  uStack_60 = param_1[2];
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_70);
    func_0x000103055544(auStack_50,param_2);
    func_0x00010006e7f4(auStack_50);
  }
  else {
    func_0x000100102924(&uStack_70,auStack_50);
    uVar1 = *unaff_x20;
    func_0x000107c61558(uVar1);
    uStack_70 = *unaff_x20;
    FUN_103055f20(auStack_50,param_2,uVar1);
    *unaff_x20 = uStack_70;
  }
  return;
}



/* Entry: 1030556d0; end: 1030557b3;  */

void FUN_1030556d0(ulong param_1,long param_2,long param_3,long param_4,code *param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  if ((param_1 & 1) == 0) {
    func_0x000107c61604(param_2 + 0x18,0);
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      func_0x000107c61428(param_3 + 0x50,auStack_90,0x21,0);
      func_0x000103055544(auStack_78,param_4);
      func_0x000107c614a8(auStack_90);
      func_0x000107c61574(param_3);
      func_0x00010006e7f4(auStack_78);
      *(undefined1 *)(param_4 + 0x20) = 0;
    }
    if (param_5 == (code *)0x0) {
      return;
    }
    param_4 = 1;
    ppuVar1 = (undefined **)0x0;
    uVar2 = 1;
  }
  else {
    if (param_5 == (code *)0x0) {
      return;
    }
    ppuVar1 = &PTR_DAT_110601cf0;
    uVar2 = 0;
  }
  (*param_5)(param_4,ppuVar1,uVar2);
  return;
}



/* Entry: 1030557b4; end: 103055967;  */

void FUN_1030557b4(code *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  ppuVar4 = &puStack_b0;
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar2 = *(long *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  lVar2 = param_4 + 0x18;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61648();
    if (param_5 != 0) {
      func_0x000107c61428(param_5 + 0x50,auStack_80,0x21,0);
      func_0x000103055544(&puStack_b0,param_6);
      func_0x000107c614a8(auStack_80);
      func_0x000107c61574(param_5);
      func_0x00010006e7f4(&puStack_b0);
      *(undefined1 *)(param_6 + 0x20) = 0;
    }
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    puVar3 = &UNK_110601ef0;
    func_0x000107c613fc(&UNK_110601ef0,0x38,7);
    *(long *)(puVar3 + 0x10) = param_4;
    *(long *)(puVar3 + 0x18) = param_6;
    *(long *)(puVar3 + 0x20) = param_5;
    *(code **)(puVar3 + 0x28) = param_1;
    *(undefined8 *)(puVar3 + 0x30) = param_2;
    uStack_90 = 0x103056780;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100288f10;
    puStack_98 = &UNK_110601f08;
    puStack_88 = puVar3;
    func_0x000107c60bc4(&puStack_b0);
    puVar3 = puStack_88;
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(param_5);
    func_0x000100d30a7c(param_1,param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c420a8(lVar2);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 103055968; end: 103055a2f;  */

void FUN_103055968(undefined8 param_1,long param_2,long param_3,long param_4,code *param_5)

{
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  func_0x000107c61604(param_2 + 0x18,0);
  func_0x000107c61604(param_3 + 0x18,0);
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    func_0x000107c61428(param_4 + 0x50,auStack_90,0x21,0);
    func_0x000103055544(auStack_78,param_3);
    func_0x000107c614a8(auStack_90);
    func_0x000107c61574(param_4);
    func_0x00010006e7f4(auStack_78);
    *(undefined1 *)(param_3 + 0x20) = 0;
  }
  if (param_5 != (code *)0x0) {
    (*param_5)();
  }
  return;
}



/* Entry: 103055a30; end: 103055a73;  */

void FUN_103055a30(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000103056654(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103055a74; end: 103055af3;  */

undefined1  [16] FUN_103055a74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4f224();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41408();
  func_0x000107c61180();
  func_0x000107c615e8(uVar1);
  lVar3 = 0;
  func_0x000103054b18();
  func_0x000107c613fc();
  func_0x000107c61614(lVar3 + 0x18,0);
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  auVar4._8_8_ = &PTR_DAT_110601cf0;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 103055af4; end: 103055b5b;  */

uint FUN_103055af4(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x10);
  func_0x000107c6157c(uVar3);
  uVar2 = param_1;
  func_0x000104859768();
  func_0x000107c61574(uVar3);
  if ((uVar2 & 1) == 0) {
    func_0x000104858bd8(param_1);
    uVar1 = (uint)param_1 & 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 103055b5c; end: 103055b5f;  */

void FUN_103055b5c(undefined8 param_1,long param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auStack_138 [40];
  long alStack_110 [3];
  long lStack_f8;
  undefined8 uStack_f0;
  long alStack_e8 [3];
  long lStack_d0;
  undefined **ppuStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  func_0x0001000a8868(unaff_x20 + 0x20,uVar7);
  (**(code **)(lVar2 + 8))(auStack_90,uVar7,lVar2);
  FUN_103056584(param_2,param_3,param_4,param_5);
  if (param_2 != 0) {
    uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x10);
    func_0x000107c6157c(uVar7);
    func_0x000104859498(alStack_110,param_1);
    func_0x000107c61574(uVar7);
    if (alStack_110[0] == 0) {
      func_0x0001048588d4(alStack_110,param_1);
      if (alStack_110[0] == 0) {
        uStack_b0 = param_1;
        func_0x000103c7cd0c(0x10305664c,auStack_c0,
                            "Libraries/Platform/Navigation/LegacyNavigationServiceImplementation/LegacyNavigationServiceImplementation.swift"
                            ,0x6f,2,0x67);
        if (param_4 != (code *)0x0) {
          (*param_4)(2,0,1);
        }
        func_0x000107c61574(param_3);
        func_0x000107c61574(param_2);
        goto LAB_1030550a0;
      }
      func_0x000100083b20(alStack_e8);
      func_0x000107c61574(alStack_110[0]);
      func_0x0001008f1af4(alStack_e8,auStack_c0);
      lVar2 = lStack_a8;
      func_0x0001000a8868(auStack_c0,lStack_a8);
      lStack_d0 = lVar2;
      FUN_103056674(alStack_e8);
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))();
      func_0x0001000bb420(alStack_e8,alStack_110);
      func_0x000107c61428(unaff_x20 + 0x50,auStack_138,0x21,0);
      FUN_1030554ac(alStack_110,param_3);
      func_0x000107c614a8(auStack_138);
      func_0x000103056654(alStack_e8);
      func_0x0001000a8868();
      func_0x0001000a8868(auStack_90,lStack_78);
      lStack_d0 = lStack_78;
      ppuStack_c8 = *(undefined ***)(lStack_70 + 8);
      FUN_103056674(alStack_e8);
      (**(code **)(*(long *)(lStack_78 + -8) + 0x10))();
      puVar5 = &UNK_110601d38;
      puVar3 = puVar5;
      func_0x000107c613fc(&UNK_110601d38,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar4 = &UNK_110601d60;
      func_0x000107c613fc(&UNK_110601d60,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = param_2;
      *(undefined8 *)(puVar4 + 0x20) = param_3;
      *(code **)(puVar4 + 0x28) = param_4;
      *(undefined8 *)(puVar4 + 0x30) = param_5;
      func_0x000107c613fc(&UNK_110601d38,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      func_0x000101f1decc(auStack_90,alStack_110);
      puVar6 = &UNK_110601d88;
      func_0x000107c613fc(&UNK_110601d88,0x50,7);
      func_0x0001008f1af4(alStack_110,puVar6 + 0x10);
      *(long *)(puVar6 + 0x38) = param_2;
      *(undefined **)(puVar6 + 0x40) = puVar5;
      *(undefined8 *)(puVar6 + 0x48) = param_3;
      pcVar8 = *(code **)(lStack_a0 + 8);
      func_0x000107c61580(param_2,2);
      func_0x000107c61580(param_3,2);
      func_0x000100d30a7c(param_4,param_5);
      func_0x000107c6157c(puVar3);
      (*pcVar8)(param_3,&PTR_DAT_110601cf0,alStack_e8,FUN_1030566b0,puVar4,0x1030566c0,puVar6,
                lStack_a8,lStack_a0);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(param_3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(param_2);
    }
    else {
      func_0x000100083b20(alStack_e8);
      func_0x000107c61574(alStack_110[0]);
      func_0x0001008f1af4(alStack_e8,auStack_c0);
      lVar2 = lStack_a8;
      func_0x0001000a8868(auStack_c0,lStack_a8);
      lStack_d0 = lVar2;
      FUN_103056674(alStack_e8);
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))();
      func_0x0001000bb420(alStack_e8,alStack_110);
      func_0x000107c61428(unaff_x20 + 0x50,auStack_138,0x21,0);
      FUN_1030554ac(alStack_110,param_3);
      func_0x000107c614a8(auStack_138);
      func_0x000103056654(alStack_e8);
      lVar1 = 0;
      FUN_1030566d0();
      lVar2 = lVar1;
      func_0x000107c613fc();
      *(long *)(lVar2 + 0x10) = unaff_x20;
      *(long *)(lVar2 + 0x18) = param_2;
      *(undefined8 *)(lVar2 + 0x20) = param_3;
      *(code **)(lVar2 + 0x28) = param_4;
      *(undefined8 *)(lVar2 + 0x30) = param_5;
      func_0x0001000a8868(auStack_c0,lStack_a8);
      ppuStack_c8 = &PTR_DAT_110601e08;
      alStack_e8[0] = lVar2;
      lStack_d0 = lVar1;
      func_0x0001000a8868(auStack_90,lStack_78);
      lStack_f8 = lStack_78;
      uStack_f0 = *(undefined8 *)(lStack_70 + 8);
      FUN_103056674(alStack_110);
      (**(code **)(*(long *)(lStack_78 + -8) + 0x10))();
      puVar5 = &UNK_110601d38;
      func_0x000107c613fc(&UNK_110601d38,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      func_0x000101f1decc(auStack_90,auStack_138);
      puVar4 = &UNK_110601db0;
      func_0x000107c613fc(&UNK_110601db0,0x50,7);
      func_0x0001008f1af4(auStack_138,puVar4 + 0x10);
      *(long *)(puVar4 + 0x38) = param_2;
      *(undefined **)(puVar4 + 0x40) = puVar5;
      *(undefined8 *)(puVar4 + 0x48) = param_3;
      pcVar8 = *(code **)(lStack_a0 + 8);
      func_0x000107c61580(param_2,2);
      func_0x000107c61580(param_3,2);
      func_0x000107c6157c();
      func_0x000100d30a7c(param_4,param_5);
      func_0x000107c6157c(lVar2);
      (*pcVar8)(alStack_e8,param_3,&PTR_DAT_110601cf0,alStack_110,0x10305683c,puVar4,lStack_a8,
                lStack_a0);
      func_0x000107c61574(param_3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(lVar2);
      func_0x000107c61574(param_2);
      func_0x000103056654(alStack_110);
    }
    func_0x000103056654(alStack_e8);
    func_0x000103056654(auStack_c0);
  }
LAB_1030550a0:
  func_0x000103056654(auStack_90);
  return;
}



/* Entry: 103055b60; end: 103055b93;  */

void FUN_103055b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_103055b94(*(undefined8 *)(unaff_x20 + 0x10),param_1,*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),param_2,param_3);
  return;
}



/* Entry: 103055b94; end: 103055e5f;  */

void FUN_103055b94(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  FUN_1030744e4(param_1,param_6,param_7);
  uVar1 = param_1;
  FUN_10305484c();
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  puVar2 = PTR_PTR_1126b0320;
  func_0x000107c61168(PTR_PTR_1126b0320);
  func_0x000107c615f0(uVar9);
  func_0x000107c4d044(puVar2);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5e6dc();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar4 = uVar9;
  func_0x000107c4d048();
  func_0x000107c61180();
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61604(param_2 + 0x18,uVar4);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = uVar4;
  func_0x000107c615f0(uVar4);
  func_0x000107c615e8(uVar9);
  puVar2 = &UNK_110601d38;
  puVar5 = puVar2;
  func_0x000107c613fc(&UNK_110601d38,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar3 = &UNK_110601e28;
  puVar6 = puVar3;
  func_0x000107c613fc(&UNK_110601e28,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,param_2);
  func_0x000107c613fc(&UNK_110601e28,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_3);
  puVar7 = &UNK_110601e50;
  func_0x000107c613fc(&UNK_110601e50,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined **)(puVar7 + 0x18) = puVar3;
  *(undefined **)(puVar7 + 0x20) = puVar5;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10305673c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1029a6984;
  puStack_88 = &UNK_110601e68;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_78);
  func_0x000107c4dbd0(uVar4);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c613fc(&UNK_110601d38,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110601ea0;
  func_0x000107c613fc(&UNK_110601ea0,0x38,7);
  *(long *)(puVar3 + 0x10) = param_2;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(long *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  uStack_80 = 0x103056764;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100ab47f8;
  puStack_88 = &UNK_110601eb8;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar8);
  puVar2 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000100d30a7c(param_4,param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c4f018(uVar4);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 103055e60; end: 103055e9b;  */

void FUN_103055e60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000103056770(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103055e9c; end: 103055f1f;  */

void FUN_103055e9c(void)

{
  FUN_103055b60();
  return;
}



/* Entry: 103055f20; end: 10305601f;  */

/* WARNING: Possible PIC construction at 0x000103055efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103055f00) */
/* WARNING: Removing unreachable block (ram,0x000103055f1c) */
/* WARNING: Removing unreachable block (ram,0x000103055f0c) */

undefined8 * FUN_103055f20(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar4 = param_2;
  func_0x0001000a7158();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103055fec);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x00010305619c(lVar5);
    uVar2 = param_2;
    func_0x0001000a7158();
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSON_11034d8b8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103055fb0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000103056020();
    lVar5 = *unaff_x20;
    goto joined_r0x000103056000;
  }
  lVar5 = *unaff_x20;
joined_r0x000103056000:
  if ((uVar4 & 1) == 0) {
    lVar6 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
    puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 0x20);
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 0x20);
    func_0x000103056654(puVar3);
  }
  uVar9 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  puVar3[1] = param_1[1];
  *puVar3 = uVar9;
  puVar3[3] = uVar11;
  puVar3[2] = uVar10;
  return puVar3;
}



/* Entry: 103056020; end: 103056583;  */

void FUN_103056020(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [32];
  
  func_0x0001000285a8(0x112f36630,&UNK_10dbf88a0);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_103056104;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) = uVar10;
        func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar7 * 0x20);
        if (uVar5 != 0) break;
LAB_103056104:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10305619c);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_10305616c;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_10305616c:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103056584; end: 10305664b;  */

undefined1  [16] FUN_103056584(undefined **param_1,undefined8 param_2,code *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  ppuVar1 = param_1;
  func_0x000107c611b4();
  if ((ppuVar1 == &PTR_PTR_112f36440 && param_1 != (undefined **)0x0) &&
     (*(char *)(param_1 + 4) == '\x01')) {
    ppuVar1 = param_1 + 3;
    func_0x000107c61618();
    if (ppuVar1 == (undefined **)0x0) {
      puVar2 = param_1[2];
      func_0x000103054b18();
      func_0x000107c613fc();
      func_0x000107c61614(ppuVar1 + 3,0);
      *(undefined1 *)(ppuVar1 + 4) = 1;
      ppuVar1[2] = puVar2;
      func_0x000107c615f0(param_1);
      func_0x000107c615f0(puVar2);
      goto LAB_1030565f0;
    }
    func_0x000107c615e8();
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(1,0,1);
  }
  param_1 = (undefined **)0x0;
  ppuVar1 = (undefined **)0x0;
LAB_1030565f0:
  auVar3._8_8_ = ppuVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10305664c; end: 103056673;  */

undefined1  [16] FUN_10305664c(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x30);
  func_0x000107c5fb78(0xd00000000000002d,0x800000010f11b540);
  uVar2 = 0x112f36638;
  func_0x0001000285a8(0x112f36638,&UNK_10db7ec10);
  func_0x000107c603d0(uVar3,&uStack_30,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 103056674; end: 1030566af;  */

long * FUN_103056674(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  plVar1 = param_1;
  if ((*(byte *)(*(long *)(lVar2 + -8) + 0x52) >> 1 & 1) != 0) {
    plVar1 = param_2;
    func_0x000107c613f4();
    *param_1 = lVar2;
  }
  return plVar1;
}



/* Entry: 1030566b0; end: 1030566cf;  */

void FUN_1030566b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_88,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_10305484c();
    uVar13 = *(undefined8 *)(lVar2 + 0x10);
    puVar5 = PTR_PTR_1126b0320;
    func_0x000107c61168(PTR_PTR_1126b0320);
    func_0x000107c615f0(uVar13);
    func_0x000107c4d044(puVar5);
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5e6dc();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    uVar7 = uVar13;
    func_0x000107c4d048();
    func_0x000107c61180();
    func_0x000107c615e8(uVar13);
    func_0x000107c61170(puVar6);
    func_0x000107c61604(lVar2 + 0x18,uVar7);
    uVar13 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = uVar7;
    func_0x000107c615f0(uVar7);
    func_0x000107c615e8(uVar13);
    puVar5 = &UNK_110601d38;
    puVar8 = puVar5;
    func_0x000107c613fc(&UNK_110601d38,0x18,7);
    func_0x000107c61644(puVar8 + 0x10,lVar4);
    puVar6 = &UNK_110601e28;
    puVar9 = puVar6;
    func_0x000107c613fc(&UNK_110601e28,0x18,7);
    func_0x000107c61644(puVar9 + 0x10,lVar2);
    func_0x000107c613fc(&UNK_110601e28,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,lVar1);
    puVar10 = &UNK_110601f40;
    func_0x000107c613fc(&UNK_110601f40,0x28,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined **)(puVar10 + 0x18) = puVar6;
    *(undefined **)(puVar10 + 0x20) = puVar8;
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x103056840;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1029a6984;
    puStack_a0 = &UNK_110601f58;
    ppuVar11 = &puStack_b8;
    puStack_90 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_90);
    func_0x000107c4dbd0(uVar7);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c613fc(&UNK_110601d38,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,lVar4);
    puVar6 = &UNK_110601f90;
    func_0x000107c613fc(&UNK_110601f90,0x38,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(long *)(puVar6 + 0x20) = lVar1;
    *(undefined8 *)(puVar6 + 0x28) = uVar3;
    *(undefined8 *)(puVar6 + 0x30) = uVar12;
    uStack_98 = 0x103056838;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100ab47f8;
    puStack_a0 = &UNK_110601fa8;
    ppuVar11 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar11);
    puVar5 = puStack_90;
    func_0x000107c6157c(lVar2);
    func_0x000107c6157c(lVar1);
    func_0x000100d30a7c(uVar3,uVar12);
    func_0x000107c61574(puVar5);
    func_0x000107c4f018(uVar7);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar7);
  }
  return;
}



/* Entry: 1030566d0; end: 10305672b;  */

void FUN_1030566d0(void)

{
  func_0x000107c61168(&PTR_PTR_112f365b8);
  return;
}



/* Entry: 10305672c; end: 10305678b;  */

undefined1  [16] FUN_10305672c(void)

{
  return ZEXT816(0x110601df8);
}



/* Entry: 10305678c; end: 103056803;  */

void FUN_10305678c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103056804; end: 103056843;  */

void FUN_103056804(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103056814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 103056844; end: 10305687b;  */

void FUN_103056844(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000100083b20(&uStack_30);
  uVar1 = *(undefined8 *)(lStack_28 + 8);
  *param_1 = uStack_30;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10305687c; end: 10305689b;  */

undefined1  [16] FUN_10305687c(void)

{
  return ZEXT816(0x110601ff0);
}



/* Entry: 10305689c; end: 103056947;  */

long FUN_10305689c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  code *pcVar2;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(long *)(unaff_x20 + 0x20) = param_3;
  uVar1 = param_2;
  func_0x000107c614f0(param_2);
  pcVar2 = *(code **)(param_3 + 0x18);
  func_0x000107c61580(param_1,2);
  func_0x000107c615f0(param_2);
  (*pcVar2)(param_1,&PTR_DAT_110601dc8,uVar1,param_3);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(param_2);
  return unaff_x20;
}



/* Entry: 103056948; end: 10305695f;  */

void FUN_103056948(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_unknownObjectRelease_11034f530;
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001008f1c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103056960; end: 1030569af;  */

undefined1  [16] FUN_103056960(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x18))(0,0,uVar2,lVar1);
  return ZEXT816(0);
}



/* Entry: 1030569b0; end: 1030569db;  */

undefined ** FUN_1030569b0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1030569dc; end: 103056a0b;  */

void FUN_1030569dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103056a0c; end: 103056a0f;  */

void FUN_103056a0c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x10,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 103056a10; end: 103056a73;  */

long FUN_103056a10(void)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61614(unaff_x20 + 0x10,0);
  return unaff_x20;
}



/* Entry: 103056a74; end: 103056acf;  */

void FUN_103056a74(void)

{
  long unaff_x20;
  
  func_0x000103056a50(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103056ad0; end: 103056cdf;  */

undefined1  [16] FUN_103056ad0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  lVar1 = 0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x30,0xc230);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x28) = unaff_x20;
  func_0x000107c61428(unaff_x20 + 0x10,lVar1,0x21,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(long *)(lVar1 + 0x18) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  auVar4._8_8_ = (long *)(lVar1 + 0x18);
  auVar4._0_8_ = FUN_103056da0;
  return auVar4;
}



/* Entry: 103056ce0; end: 103056d9f;  */

void FUN_103056ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(0,0,1);
    }
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 0x18))(param_1,param_2,param_3,param_4,param_5,lVar2,lVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 103056da0; end: 103056db3;  */

void FUN_103056da0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x10,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 103056db4; end: 10305709f;  */

undefined8 * FUN_103056db4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1030570a0; end: 1030570d3;  */

void FUN_1030570a0(undefined8 param_1)

{
  func_0x000107c5f7c8(0x3fd6666666666666,0x3fe999999999999a,0);
  uRam0000000113806af8 = param_1;
  return;
}



/* Entry: 1030570d4; end: 1030570df;  */

void FUN_1030570d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e741cbc);
  return;
}



/* Entry: 1030570e0; end: 103058273;  */

void FUN_1030570e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x12;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long lStack_d0;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &UNK_10db7f010;
  func_0x000107c61520(&UNK_10db7f010);
  uVar2 = 0xff;
  func_0x000107c5f4d8(0xff,param_3,puVar1);
  uVar6 = 0x112f369b8;
  func_0x00010002969c(0x112f369b8,&UNK_10db7f060);
  uVar4 = 0x112f369c0;
  func_0x00010002969c(0x112f369c0,&UNK_10db7f068);
  uVar12 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = 0xff;
  func_0x000107c61510(0xff,uVar4,uVar12,0,0);
  uVar4 = 0xff;
  func_0x000107c5f7dc(0xff,uVar3);
  puVar7 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  puVar1 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar4);
  uVar3 = 0xff;
  func_0x000107c5f760(0xff,uVar4,puVar1);
  uVar4 = 0x112eff310;
  func_0x00010002969c(0x112eff310,&UNK_10db7f070);
  uVar5 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,uVar4);
  uVar4 = 0x112d500a8;
  func_0x00010002969c(0x112d500a8,&UNK_10d916460);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar5,uVar4);
  puVar1 = PTR___s7SwiftUI14_PaddingLayoutVN_110348a08;
  uVar4 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar4,puVar1);
  uVar4 = 0x112e09088;
  func_0x00010002969c(0x112e09088,&UNK_10db7f080);
  uVar5 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,uVar4);
  uVar4 = 0xff;
  func_0x000107c61510(0xff,uVar6,uVar5,0,0);
  uVar6 = 0xff;
  func_0x000107c5f7dc(0xff,uVar4);
  uVar4 = 0xff;
  func_0x000107c60188(0xff,uVar6);
  func_0x000107c61520(puVar7,uVar6);
  puVar1 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  puStack_68 = puVar7;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,uVar4,&puStack_68);
  uVar3 = 0xff;
  func_0x000107c5f768(0xff,uVar4,puVar1);
  uVar6 = 0x112e02e30;
  func_0x00010002969c(0x112e02e30,&UNK_10da5a740);
  uVar4 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,uVar6);
  puVar1 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910;
  func_0x000107c61520(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910,uVar3);
  uVar6 = 0x112e02e28;
  func_0x000103059ad8(0x112e02e28,0x112e02e30,&UNK_10da5a740,
                      PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_78 = puVar1;
  uStack_70 = uVar6;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar4,&puStack_78);
  uVar3 = 0xff;
  func_0x000107c5f38c(0xff,uVar4,puVar7);
  lVar8 = 0;
  uVar6 = uVar2;
  func_0x000107c5f34c(0,uVar2,uVar3);
  lStack_d0 = *(long *)(lVar8 + -8);
  lVar9 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar11 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar11 - extraout_x12;
  uStack_88 = *(undefined8 *)(param_3 + 0x18);
  uStack_90 = uVar12;
  func_0x000107c5f7ac();
  puVar1 = PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008;
  func_0x000107c61520(PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008,uVar2);
  func_0x000107c5f694(lVar11,lVar9,uVar6,FUN_10305985c,auStack_a0,uVar2,uVar4,puVar1,puVar7);
  puVar7 = PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_110348bf0;
  func_0x000107c61520(PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_110348bf0,uVar3);
  puVar10 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_b0 = puVar1;
  puStack_a8 = puVar7;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar8,&puStack_b0);
  FUN_103061a64(lVar14,lVar11,lVar8,puVar10);
  pcVar13 = *(code **)(lStack_d0 + 8);
  (*pcVar13)(lVar11,lVar8);
  FUN_103061a64(param_1,lVar14,lVar8,puVar10);
  (*pcVar13)(lVar14,lVar8);
  return;
}



/* Entry: 103058274; end: 10305896b;  */

void FUN_103058274(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar13;
  long extraout_x8_05;
  long lVar14;
  long *unaff_x20;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  long alStack_230 [5];
  undefined8 uStack_208;
  code *pcStack_1f8;
  undefined4 uStack_1ec;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  char cStack_e0;
  
  lVar3 = 0;
  uStack_178 = param_1;
  func_0x000107c5f37c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar16 = (undefined8 *)((long)alStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  puStack_188 = puVar16;
  func_0x000107c5f6c4();
  alStack_230[1] = *(long *)(lVar4 + -8);
  alStack_230[3] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_230[1] + 0x40));
  lVar12 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d50058;
  alStack_230[2] = lVar12;
  func_0x0001000285a8(0x112d50058,&UNK_10d916410);
  lStack_1c8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)(lVar12 - extraout_x8_01);
  uVar6 = 0x112f369c0;
  func_0x00010002969c(0x112f369c0,&UNK_10db7f068);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = 0xff;
  func_0x000107c61510(0xff,uVar6,uVar15,0,0);
  uVar6 = 0xff;
  func_0x000107c5f7dc(0xff,uVar5);
  puVar7 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar6);
  lVar12 = 0;
  func_0x000107c5f760(0,uVar6,puVar7);
  lStack_1d8 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_1d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)puVar16 - extraout_x8_02;
  uVar6 = 0x112eff310;
  func_0x00010002969c(0x112eff310,&UNK_10db7f070);
  lVar4 = 0;
  func_0x000107c5f34c(0,lVar12,uVar6);
  lStack_1c0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_1c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0x112d500a8;
  lStack_1e0 = lVar14 - extraout_x8_03;
  func_0x00010002969c(0x112d500a8,&UNK_10d916460);
  lVar8 = 0;
  lStack_1d0 = lVar4;
  func_0x000107c5f34c(0,lVar4,uVar6);
  lStack_1b0 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_1b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (lVar14 - extraout_x8_03) - extraout_x8_04;
  lVar4 = 0;
  lStack_1b8 = lVar13;
  lStack_1a0 = lVar8;
  func_0x000107c5f34c();
  lStack_198 = *(long *)(lVar4 + -8);
  lStack_190 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_198 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_1a8 = lVar13 - extraout_x8_05;
  uStack_128 = *(undefined8 *)(param_2 + 0x18);
  uStack_130 = uVar15;
  func_0x000107c5f438();
  lStack_1e8 = lVar14;
  func_0x000107c5f75c(lVar14);
  iVar2 = *(int *)(lVar3 + 0x14);
  uVar1 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar8 = 0;
  lStack_180 = lVar3;
  func_0x000107c5f41c();
  pcStack_1f8 = *(code **)(*(long *)(lVar8 + -8) + 0x68);
  uStack_1ec = uVar1;
  (*pcStack_1f8)((long)puVar16 + (long)iVar2,uVar1,lVar8);
  auVar17 = NEON_fmov(0x4024000000000000,8);
  uStack_208 = auVar17._8_8_;
  alStack_230[4] = auVar17._0_8_;
  puVar16[1] = uStack_208;
  *puVar16 = auVar17._0_8_;
  lVar3 = *unaff_x20;
  uVar11 = (ulong)*(byte *)(unaff_x20 + 1);
  FUN_10305fc34(lVar3,uVar11);
  FUN_10307e424(auStack_140);
  uVar6 = uStack_128;
  lVar4 = alStack_230[2];
  if (cStack_e0 == '\x01') {
    func_0x000103080adc();
    FUN_103080684();
    lVar4 = lVar3;
  }
  else {
    uVar11 = (ulong)*(uint *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_1103496a8;
    (**(code **)(alStack_230[1] + 0x68))(alStack_230[2],uVar11,alStack_230[3]);
    func_0x000107c5f6d8(uVar6,unaff_x20,uStack_118,0x3ff0000000000000);
  }
  lVar14 = lStack_1c8;
  *(long *)((long)puVar16 + (long)*(int *)(lStack_1c8 + 0x34)) = lVar4;
  *(undefined2 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  puVar9 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0;
  func_0x000107c61520(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0,lVar12);
  uVar6 = 0x112e57d20;
  func_0x000103059ad8(0x112e57d20,0x112d50058,&UNK_10d916410,
                      PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718);
  lVar13 = lStack_1e0;
  lVar3 = lStack_1e8;
  func_0x000107c5f5f8(lStack_1e0,puVar16,lVar4,uVar11,lVar12,lVar14,puVar9,uVar6);
  func_0x000103059ba0(puVar16,0x112d50058,&UNK_10d916410);
  (**(code **)(lStack_1d8 + 8))(lVar3,lVar12);
  lVar12 = lStack_180;
  puVar16 = puStack_188;
  (*pcStack_1f8)((long)puStack_188 + (long)*(int *)(lStack_180 + 0x14),uStack_1ec,lVar8);
  lVar4 = alStack_230[4];
  puVar16[1] = uStack_208;
  *puVar16 = lVar4;
  uVar6 = 0x112f369d0;
  func_0x000103059ad8(0x112f369d0,0x112eff310,&UNK_10db7f070,
                      PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  lVar4 = lStack_1d0;
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puVar10 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_150 = puVar9;
  uStack_148 = uVar6;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lStack_1d0,&puStack_150);
  uVar6 = 0x112f369f0;
  FUN_1030599d8(0x112f369f0,PTR___s7SwiftUI16RoundedRectangleVMa_110348b60,
                PTR___s7SwiftUI16RoundedRectangleVAA5ShapeAAMc_110348b58);
  lVar3 = lStack_1b8;
  func_0x000107c5f6b8(lStack_1b8,puVar16,0x100,lVar4,lVar12,puVar10,uVar6);
  func_0x000100f8d598(puVar16);
  (**(code **)(lStack_1c0 + 8))(lVar13,lVar4);
  func_0x000107c5f568();
  uVar6 = 0x112e09040;
  func_0x000103059ad8(0x112e09040,0x112d500a8,&UNK_10d916460,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1103487e8);
  lVar12 = lStack_1a0;
  puVar9 = puVar7;
  puStack_160 = puVar10;
  uStack_158 = uVar6;
  func_0x000107c61520(puVar7,lStack_1a0,&puStack_160);
  lVar4 = lStack_1a8;
  func_0x000107c5f6a0(lStack_1a8,lVar13,0x4024000000000000,0,lVar12,puVar9);
  (**(code **)(lStack_1b0 + 8))(lVar3,lVar12);
  func_0x000107c5f574();
  lVar12 = lStack_190;
  puStack_168 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puStack_170 = puVar9;
  func_0x000107c61520(puVar7,lStack_190,&puStack_170);
  func_0x000107c5f6a0(uStack_178,lVar3,0x4024000000000000,0,lVar12,puVar7);
  (**(code **)(lStack_198 + 8))(lVar4,lVar12);
  return;
}



/* Entry: 10305896c; end: 1030589a7;  */

void FUN_10305896c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c60188();
                    /* WARNING: Could not recover jumptable at 0x0001030589a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return;
}



/* Entry: 1030589a8; end: 103059083;  */

void FUN_1030589a8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte **ppbVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_d3;
  undefined8 uStack_cc0;
  undefined1 auStack_cb8 [8];
  undefined8 uStack_cb0;
  undefined1 auStack_ca8 [8];
  ulong auStack_ca0 [2];
  undefined1 auStack_c90 [8];
  long lStack_c88;
  undefined1 *puStack_c80;
  byte *pbStack_c78;
  long lStack_c70;
  undefined8 uStack_c68;
  long lStack_c60;
  undefined8 uStack_c58;
  undefined1 auStack_c50 [264];
  byte *pbStack_b48;
  undefined1 *puStack_b40;
  undefined1 uStack_b38;
  undefined *puStack_b30;
  undefined8 *puStack_b28;
  ulong uStack_b20;
  undefined8 *puStack_b18;
  undefined1 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined1 uStack_ae8;
  byte *pbStack_ae0;
  undefined1 *puStack_ad8;
  undefined8 uStack_ad0;
  undefined *puStack_ac8;
  undefined8 *puStack_ac0;
  ulong uStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  byte *pbStack_a00;
  undefined1 *puStack_9f8;
  undefined8 uStack_9f0;
  undefined *puStack_9e8;
  undefined8 *puStack_9e0;
  ulong uStack_9d8;
  undefined8 *puStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined1 auStack_920 [264];
  byte *pbStack_818;
  undefined8 uStack_810;
  undefined1 *puStack_710;
  undefined1 *puStack_708;
  byte *pbStack_608;
  undefined1 *puStack_600;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined *puStack_5f0;
  undefined8 *puStack_5e8;
  ulong uStack_5e0;
  undefined8 *puStack_5d8;
  undefined1 uStack_5d0;
  undefined7 uStack_5cf;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 uStack_5a8;
  byte *pbStack_5a0;
  undefined1 *puStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined8 *puStack_580;
  ulong uStack_578;
  undefined8 *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  byte *pbStack_4c0;
  undefined1 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_4a8;
  undefined8 *puStack_4a0;
  ulong uStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 auStack_3e8 [64];
  undefined1 auStack_3a8 [264];
  undefined *puStack_2a0;
  undefined1 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  byte *pbStack_248;
  undefined1 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  byte *pbStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  
  lVar14 = *(long *)(param_3 + -8);
  lVar1 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_c90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = (long)puVar13 - extraout_x12;
  puStack_d8 = *(undefined1 **)(lVar1 + 0x30);
  pbStack_e0 = *(byte **)(lVar1 + 0x28);
  uVar19 = *(undefined8 *)(lVar1 + 0x69);
  uStack_a0 = (undefined1)((ulong)*(undefined8 *)(lVar1 + 0x61) >> 0x38);
  uStack_c8 = *(undefined8 *)(lVar1 + 0x40);
  uStack_d0 = *(undefined8 *)(lVar1 + 0x38);
  uStack_b8 = *(undefined8 *)(lVar1 + 0x50);
  uStack_c0 = *(undefined8 *)(lVar1 + 0x48);
  uStack_b0 = *(undefined8 *)(lVar1 + 0x58);
  uStack_a8 = (undefined1)*(undefined8 *)(lVar1 + 0x60);
  uStack_a7 = (undefined7)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 8);
  uStack_9f._7_1_ = (char)((ulong)uVar19 >> 0x38);
  uStack_9f = uVar19;
  if (uStack_9f._7_1_ == -1) {
    FUN_103059a18(&uStack_200);
  }
  else {
    lStack_c88 = param_3;
    lStack_c70 = lVar14;
    uStack_c68 = param_4;
    lStack_c60 = lVar16;
    uStack_c58 = param_1;
    if (uStack_9f._7_1_ == '\x01') {
      uStack_1e8 = *(undefined8 *)(param_2 + 0x40);
      uStack_1f0 = *(undefined8 *)(param_2 + 0x38);
      uStack_1d8 = *(undefined8 *)(param_2 + 0x50);
      uStack_1e0 = *(undefined8 *)(param_2 + 0x48);
      uVar19 = *(undefined8 *)(param_2 + 0x58);
      uStack_1c8 = (undefined1)*(undefined8 *)(param_2 + 0x60);
      uStack_1bf = *(undefined8 *)(param_2 + 0x69);
      uStack_1c7 = (undefined7)*(undefined8 *)(param_2 + 0x61);
      uStack_1c0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x61) >> 0x38);
      uStack_1f8 = *(undefined8 *)(param_2 + 0x30);
      uStack_200 = *(undefined8 *)(param_2 + 0x28);
      puStack_c80 = puStack_d8;
      pbStack_c78 = pbStack_e0;
      uStack_1d0 = uVar19;
      func_0x000103059b58(&pbStack_e0,auStack_3a8,0x112f36930,&UNK_10db7ef80);
      pbVar2 = (byte *)&uStack_200;
      func_0x000103059b1c(pbVar2,auStack_3a8);
    }
    else {
      uStack_230 = *(undefined8 *)(param_2 + 0x40);
      uStack_238 = *(undefined8 *)(param_2 + 0x38);
      uStack_220 = *(undefined8 *)(param_2 + 0x50);
      uStack_228 = *(undefined8 *)(param_2 + 0x48);
      uStack_210 = *(undefined8 *)(param_2 + 0x60);
      uStack_218 = *(undefined8 *)(param_2 + 0x58);
      uStack_208 = *(undefined8 *)(param_2 + 0x68);
      uStack_1e8 = *(undefined8 *)(param_2 + 0x40);
      uStack_1f0 = *(undefined8 *)(param_2 + 0x38);
      uStack_1d8 = *(undefined8 *)(param_2 + 0x50);
      uStack_1e0 = *(undefined8 *)(param_2 + 0x48);
      uVar19 = *(undefined8 *)(param_2 + 0x58);
      uStack_1c8 = (undefined1)*(undefined8 *)(param_2 + 0x60);
      uStack_1bf = *(undefined8 *)(param_2 + 0x69);
      uStack_1c7 = (undefined7)*(undefined8 *)(param_2 + 0x61);
      uStack_1c0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x61) >> 0x38);
      uStack_1f8 = *(undefined8 *)(param_2 + 0x30);
      uStack_200 = *(undefined8 *)(param_2 + 0x28);
      pbVar2 = (byte *)&uStack_200;
      puVar10 = auStack_3a8;
      pbStack_248 = pbStack_e0;
      puStack_240 = puStack_d8;
      uStack_1d0 = uVar19;
      func_0x000103059b1c();
      FUN_10307ff24();
      puStack_c80 = puVar10;
      pbStack_c78 = pbVar2;
    }
    func_0x000103081b44();
    uVar11 = (ulong)pbVar2[0x10];
    uVar3 = (ulong)*pbVar2;
    FUN_103081288(*(undefined8 *)(pbVar2 + 8),*(undefined8 *)(pbVar2 + 0x18));
    puVar4 = (undefined8 *)&UNK_10db7f098;
    func_0x000107c614e0();
    puVar5 = puVar4;
    func_0x000103080bc0();
    uStack_288 = puVar5[1];
    uStack_290 = *puVar5;
    uStack_278 = puVar5[3];
    uStack_280 = puVar5[2];
    uStack_268 = puVar5[5];
    uStack_270 = puVar5[4];
    uStack_258 = puVar5[7];
    uVar18 = puVar5[6];
    uStack_260 = uVar18;
    FUN_103080684();
    puVar6 = puVar5;
    func_0x000107c5f568();
    uVar17 = 0x4030000000000000;
    puVar7 = puVar6;
    func_0x000107c5f280();
    func_0x000107c5f7b0();
    pbVar2 = pbStack_c78;
    puVar10 = puStack_c80;
    pbStack_608 = pbStack_c78;
    puStack_600 = puStack_c80;
    uStack_5f8 = 0;
    puStack_5f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_5a8 = 0;
    puStack_5e8 = puVar4;
    uStack_5e0 = uVar3;
    puStack_5d8 = puVar5;
    uStack_5d0 = (char)puVar6;
    uStack_5c8 = uVar17;
    uStack_5c0 = uVar18;
    uStack_5b8 = uVar19;
    uStack_5b0 = in_d3;
    *(undefined8 **)(lVar16 + -0x10) = puVar7;
    *(ulong *)(lVar16 + -8) = uVar11;
    *(undefined1 *)(lVar16 + -0x18) = 1;
    *(undefined8 *)(lVar16 + -0x20) = 0;
    *(undefined1 *)(lVar16 + -0x28) = 1;
    *(undefined8 *)(lVar16 + -0x30) = 0;
    func_0x000107c5f388(&uStack_538,0,1,0,1,0x7ff0000000000000,0,0,1);
    uStack_558 = uStack_5c0;
    uStack_560 = uStack_5c8;
    uStack_548 = uStack_5b0;
    uStack_550 = uStack_5b8;
    uStack_540 = uStack_5a8;
    uStack_590 = CONCAT71(uStack_5f7,uStack_5f8);
    puStack_598 = puStack_600;
    pbStack_5a0 = pbStack_608;
    puStack_588 = puStack_5f0;
    uStack_568 = CONCAT71(uStack_5cf,uStack_5d0);
    puStack_570 = puStack_5d8;
    uStack_578 = uStack_5e0;
    puStack_580 = puStack_5e8;
    pbStack_b48 = pbVar2;
    puStack_b40 = puVar10;
    uStack_b38 = 0;
    puStack_b30 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_ae8 = 0;
    uVar12 = 0x112f36a10;
    puStack_b28 = puVar4;
    uStack_b20 = uVar3;
    puStack_b18 = puVar5;
    uStack_b10 = (char)puVar6;
    uStack_b08 = uVar17;
    uStack_b00 = uVar18;
    uStack_af8 = uVar19;
    uStack_af0 = in_d3;
    func_0x000103059b58(&pbStack_608,&uStack_200,0x112f36a10,&UNK_10db7f0c8);
    ppbVar8 = &pbStack_b48;
    func_0x000103059ba0(ppbVar8,0x112f36a10,&UNK_10db7f0c8);
    func_0x000107c5f7ac();
    uStack_a38 = uStack_4f8;
    uStack_a40 = uStack_500;
    uStack_a28 = uStack_4e8;
    uStack_a30 = uStack_4f0;
    uStack_a18 = uStack_4d8;
    uStack_a20 = uStack_4e0;
    uStack_a10 = uStack_4d0;
    uStack_a80 = CONCAT71(uStack_53f,uStack_540);
    uStack_a78 = uStack_538;
    uStack_a68 = uStack_528;
    uStack_a70 = uStack_530;
    uStack_a58 = uStack_518;
    uStack_a60 = uStack_520;
    uStack_a48 = uStack_508;
    uStack_a50 = uStack_510;
    uStack_ab8 = uStack_578;
    puStack_ac0 = puStack_580;
    uStack_aa8 = uStack_568;
    puStack_ab0 = puStack_570;
    uStack_a98 = uStack_558;
    uStack_aa0 = uStack_560;
    uStack_a88 = uStack_548;
    uStack_a90 = uStack_550;
    puStack_ad8 = puStack_598;
    pbStack_ae0 = pbStack_5a0;
    puStack_ac8 = puStack_588;
    uStack_ad0 = uStack_590;
    func_0x000107c5f2d4(auStack_3e8,0,1,0x4044000000000000,0,ppbVar8,uVar12);
    uStack_418 = uStack_4f8;
    uStack_420 = uStack_500;
    uStack_408 = uStack_4e8;
    uStack_410 = uStack_4f0;
    uStack_3f8 = uStack_4d8;
    uStack_400 = uStack_4e0;
    uStack_460 = CONCAT71(uStack_53f,uStack_540);
    uStack_9a0 = CONCAT71(uStack_53f,uStack_540);
    uStack_458 = uStack_538;
    uStack_448 = uStack_528;
    uStack_450 = uStack_530;
    uStack_438 = uStack_518;
    uStack_440 = uStack_520;
    uStack_428 = uStack_508;
    uStack_430 = uStack_510;
    uStack_498 = uStack_578;
    puStack_4a0 = puStack_580;
    uStack_488 = uStack_568;
    puStack_490 = puStack_570;
    uStack_478 = uStack_558;
    uStack_480 = uStack_560;
    uStack_468 = uStack_548;
    uStack_470 = uStack_550;
    puStack_4b8 = puStack_598;
    pbStack_4c0 = pbStack_5a0;
    puStack_4a8 = puStack_588;
    uStack_4b0 = uStack_590;
    uStack_958 = uStack_4f8;
    uStack_960 = uStack_500;
    uStack_948 = uStack_4e8;
    uStack_950 = uStack_4f0;
    uStack_938 = uStack_4d8;
    uStack_940 = uStack_4e0;
    uStack_998 = uStack_538;
    uStack_988 = uStack_528;
    uStack_990 = uStack_530;
    uStack_978 = uStack_518;
    uStack_980 = uStack_520;
    uStack_968 = uStack_508;
    uStack_970 = uStack_510;
    uStack_9d8 = uStack_578;
    puStack_9e0 = puStack_580;
    uStack_9c8 = uStack_568;
    puStack_9d0 = puStack_570;
    uStack_9b8 = uStack_558;
    uStack_9c0 = uStack_560;
    uStack_9a8 = uStack_548;
    uStack_9b0 = uStack_550;
    uStack_3f0 = uStack_4d0;
    uStack_930 = uStack_4d0;
    puStack_9f8 = puStack_598;
    pbStack_a00 = pbStack_5a0;
    puStack_9e8 = puStack_588;
    uStack_9f0 = uStack_590;
    func_0x000103059b58(&pbStack_ae0,&uStack_200,0x112f36a18,&UNK_10db7f0d0);
    func_0x000103059ba0(&pbStack_a00,0x112f36a18,&UNK_10db7f0d0);
    func_0x000107c610b4(auStack_920,&pbStack_4c0,0x108);
    func_0x000107c610b4(&pbStack_818,&pbStack_4c0,0x108);
    func_0x000103059b58(auStack_920,&uStack_200,0x112f36a20,&UNK_10db7f0d8);
    func_0x000103059ba0(&pbStack_818,0x112f36a20,&UNK_10db7f0d8);
    puVar9 = &UNK_10db7ef90;
    func_0x000107c614e0();
    func_0x000107c610b4(auStack_c50,auStack_920,0x108);
    func_0x000107c610b4(&puStack_710,auStack_920,0x108);
    func_0x000107c610b4(auStack_3a8,auStack_920,0x108);
    func_0x000103059b58(&puStack_710,&uStack_200,0x112f36a20,&UNK_10db7f0d8);
    func_0x000100d30aac(puVar9,0);
    func_0x000103059ba0(&pbStack_e0,0x112f36930,&UNK_10db7ef80);
    func_0x000100d30abc(puVar9,0);
    func_0x000103059ba0(auStack_c50,0x112f36a20,&UNK_10db7f0d8);
    uStack_298 = 0;
    puStack_2a0 = puVar9;
    FUN_103059be0(auStack_3a8);
    func_0x000107c610b4(&uStack_200,auStack_3a8,0x111);
    param_3 = lStack_c88;
    lVar14 = lStack_c70;
    param_1 = uStack_c58;
    lVar16 = lStack_c60;
    param_4 = uStack_c68;
  }
  (**(code **)(param_2 + 0x78))(puVar13);
  FUN_103061a64(lVar16,puVar13,param_3,param_4);
  pcVar15 = *(code **)(lVar14 + 8);
  (*pcVar15)(puVar13,param_3);
  func_0x000107c610b4(auStack_3a8,&uStack_200,0x111);
  puStack_710 = auStack_3a8;
  (**(code **)(lVar14 + 0x10))(puVar13,lVar16,param_3);
  pbVar2 = (byte *)0x112f369c0;
  puStack_708 = puVar13;
  func_0x000103059b58(&uStack_200,&pbStack_4c0,0x112f369c0,&UNK_10db7f068);
  func_0x0001000285a8(0x112f369c0,&UNK_10db7f068);
  pbStack_4c0 = pbVar2;
  puStack_4b8 = (undefined1 *)param_3;
  func_0x000103059a48();
  pbStack_818 = pbVar2;
  uStack_810 = param_4;
  func_0x000101c14e58(param_1,&puStack_710,2,&pbStack_4c0,&pbStack_818);
  func_0x000103059ba0(&uStack_200,0x112f369c0,&UNK_10db7f068);
  (*pcVar15)(lVar16,param_3);
  (*pcVar15)(puVar13,param_3);
  func_0x000103059ba0(auStack_3a8,0x112f369c0,&UNK_10db7f068);
  return;
}



/* Entry: 103059084; end: 10305908f;  */

void FUN_103059084(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI12ViewModifierPAAE05_makeC08modifier6inputs4bodyAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVAiA01_J0V_ANtctFZ_110348800
  )();
  return;
}



/* Entry: 103059090; end: 103059163;  */

void FUN_103059090(void)

{
  FUN_1030570e0();
  return;
}



/* Entry: 103059164; end: 10305916b;  */

void FUN_103059164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 10305916c; end: 103059197;  */

long FUN_10305916c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103059198; end: 1030591f7;  */

/* WARNING: Possible PIC construction at 0x0001030591c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030591d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030591cc) */
/* WARNING: Removing unreachable block (ram,0x0001030591dc) */

void FUN_103059198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char in_stack_00000008;
  
  if (in_stack_00000008 != '\x01') {
    param_2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1030591f8; end: 103059267;  */

/* WARNING: Possible PIC construction at 0x00010305921c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103059220) */
/* WARNING: Removing unreachable block (ram,0x000103059234) */
/* WARNING: Removing unreachable block (ram,0x000103059254) */

void FUN_1030591f8(undefined8 *param_1)

{
  func_0x000100d30abc(*param_1,*(undefined1 *)(param_1 + 1));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103059268; end: 1030592e3;  */

/* WARNING: Possible PIC construction at 0x000103059294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030592c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103059298) */
/* WARNING: Removing unreachable block (ram,0x0001030592b4) */
/* WARNING: Removing unreachable block (ram,0x0001030592a0) */
/* WARNING: Removing unreachable block (ram,0x0001030592c4) */

void FUN_103059268(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030592e4; end: 103059633;  */

undefined8 * FUN_1030592e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *param_2;
  uVar7 = *(undefined1 *)(param_2 + 1);
  func_0x000100d30aac(uVar10,uVar7);
  *param_1 = uVar10;
  *(undefined1 *)(param_1 + 1) = uVar7;
  uVar10 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar10;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  cVar8 = *(char *)(param_2 + 0xe);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar10);
  if (cVar8 == -1) {
    uVar10 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar10;
    uVar10 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar10;
    uVar10 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar10;
    uVar10 = *(undefined8 *)((long)param_2 + 0x61);
    *(undefined8 *)((long)param_1 + 0x69) = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)((long)param_1 + 0x61) = uVar10;
    uVar10 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar10;
  }
  else {
    uVar10 = param_2[5];
    uVar3 = param_2[6];
    uVar11 = param_2[7];
    uVar4 = param_2[8];
    uVar1 = param_2[9];
    uVar5 = param_2[10];
    uVar2 = param_2[0xb];
    uVar6 = param_2[0xc];
    uVar9 = param_2[0xd];
    FUN_103059198(uVar10,uVar3,uVar11,uVar4,uVar1,uVar5,uVar2,uVar6,uVar9,cVar8);
    param_1[5] = uVar10;
    param_1[6] = uVar3;
    param_1[7] = uVar11;
    param_1[8] = uVar4;
    param_1[9] = uVar1;
    param_1[10] = uVar5;
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar6;
    param_1[0xd] = uVar9;
    *(char *)(param_1 + 0xe) = cVar8;
  }
  uVar10 = param_2[0x10];
  uVar11 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar11;
  func_0x000107c6157c(uVar10);
  return param_1;
}



/* Entry: 103059634; end: 10305977f;  */

undefined8 FUN_103059634(undefined8 param_1)

{
  (*(code *)(undefined *)0x103071b70)();
  return param_1;
}



/* Entry: 103059780; end: 103059827;  */

int FUN_103059780(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103059828; end: 10305985b;  */

void FUN_103059828(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c614f4(&uStack_20,&UNK_10e741d18,1);
  return;
}



/* Entry: 10305985c; end: 103059873;  */

void FUN_10305985c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_70;
  undefined1 uStack_61;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar6 = 0x112f369b8;
  uStack_b8 = param_1;
  func_0x00010002969c(0x112f369b8,&UNK_10db7f060);
  uVar3 = 0x112f369c0;
  func_0x00010002969c(0x112f369c0,&UNK_10db7f068);
  uVar2 = 0xff;
  func_0x000107c61510(0xff,uVar3,uVar1,0,0);
  uVar3 = 0xff;
  func_0x000107c5f7dc(0xff,uVar2);
  puVar7 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  puVar4 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar3);
  uVar2 = 0xff;
  func_0x000107c5f760(0xff,uVar3,puVar4);
  uVar3 = 0x112eff310;
  func_0x00010002969c(0x112eff310,&UNK_10db7f070);
  uVar5 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,uVar3);
  uVar3 = 0x112d500a8;
  func_0x00010002969c(0x112d500a8,&UNK_10d916460);
  uVar2 = 0xff;
  func_0x000107c5f34c(0xff,uVar5,uVar3);
  puVar4 = PTR___s7SwiftUI14_PaddingLayoutVN_110348a08;
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  uVar2 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,puVar4);
  uVar3 = 0x112e09088;
  func_0x00010002969c(0x112e09088,&UNK_10db7f080);
  uVar5 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,uVar3);
  uVar3 = 0xff;
  func_0x000107c61510(0xff,uVar6,uVar5,0,0);
  uVar6 = 0xff;
  func_0x000107c5f7dc(0xff,uVar3);
  uVar3 = 0xff;
  func_0x000107c60188(0xff,uVar6);
  func_0x000107c61520(puVar7,uVar6);
  puVar4 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  puStack_70 = puVar7;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,uVar3,&puStack_70);
  lVar8 = 0;
  func_0x000107c5f768(0,uVar3,puVar4);
  lVar12 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_d0 + -extraout_x8;
  uVar6 = 0x112e02e30;
  func_0x00010002969c(0x112e02e30,&UNK_10da5a740);
  lVar9 = 0;
  func_0x000107c5f34c(0,lVar8,uVar6);
  lStack_c8 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar14 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12;
  func_0x000107c5f7a8();
  uStack_88 = uStack_c0;
  uStack_90 = uVar1;
  lStack_80 = lVar10;
  func_0x000107c5f764(puVar15);
  if (lRam0000000112f369c8 != -1) {
    func_0x000107c61568(0x112f369c8,FUN_1030570a0);
  }
  uVar6 = uRam0000000113806af8;
  uStack_98 = *(undefined8 *)(lVar10 + 0x18);
  uStack_a0 = *(undefined8 *)(lVar10 + 0x10);
  uStack_90 = CONCAT71(uStack_90._1_7_,*(undefined1 *)(lVar10 + 0x20));
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f770(&uStack_61);
  uStack_a0 = CONCAT71(uStack_a0._1_7_,uStack_61);
  puVar4 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910;
  func_0x000107c61520(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910,lVar8);
  func_0x000107c5f6b4(lVar14,uVar6,&uStack_a0,lVar8,PTR___sSbN_11034dd40,puVar4,
                      PTR___sSbSQsWP_11034dd50);
  (**(code **)(lVar12 + 8))(puVar15,lVar8);
  uVar6 = 0x112e02e28;
  func_0x000103059ad8(0x112e02e28,0x112e02e30,&UNK_10da5a740,
                      PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_b0 = puVar4;
  uStack_a8 = uVar6;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar9,&puStack_b0);
  FUN_103061a64(lVar13,lVar14,lVar9,puVar7);
  pcVar11 = *(code **)(lStack_c8 + 8);
  (*pcVar11)(lVar14,lVar9);
  FUN_103061a64(uStack_b8,lVar13,lVar9,puVar7);
  (*pcVar11)(lVar13,lVar9);
  return;
}



/* Entry: 103059874; end: 1030599cb;  */

void FUN_103059874(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f369d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f369b8;
  func_0x00010002969c(0x112f369b8,&UNK_10db7f060);
  uVar2 = uVar1;
  func_0x000103059904();
  uVar3 = 0x112d500b8;
  FUN_1030599d8(0x112d500b8,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_110349210,
                PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f369d8 = puVar4;
  return;
}



/* Entry: 1030599cc; end: 1030599d7;  */

void FUN_1030599cc(undefined8 param_1)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte **ppbVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 in_d3;
  undefined8 uStack_cc0;
  undefined1 auStack_cb8 [8];
  undefined8 uStack_cb0;
  undefined1 auStack_ca8 [8];
  ulong auStack_ca0 [2];
  undefined1 auStack_c90 [8];
  long lStack_c88;
  undefined1 *puStack_c80;
  byte *pbStack_c78;
  long lStack_c70;
  undefined8 uStack_c68;
  long lStack_c60;
  undefined8 uStack_c58;
  undefined1 auStack_c50 [264];
  byte *pbStack_b48;
  undefined1 *puStack_b40;
  undefined1 uStack_b38;
  undefined *puStack_b30;
  undefined8 *puStack_b28;
  ulong uStack_b20;
  undefined8 *puStack_b18;
  undefined1 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined1 uStack_ae8;
  byte *pbStack_ae0;
  undefined1 *puStack_ad8;
  undefined8 uStack_ad0;
  undefined *puStack_ac8;
  undefined8 *puStack_ac0;
  ulong uStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  byte *pbStack_a00;
  undefined1 *puStack_9f8;
  undefined8 uStack_9f0;
  undefined *puStack_9e8;
  undefined8 *puStack_9e0;
  ulong uStack_9d8;
  undefined8 *puStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined1 auStack_920 [264];
  byte *pbStack_818;
  undefined8 uStack_810;
  undefined1 *puStack_710;
  undefined1 *puStack_708;
  byte *pbStack_608;
  undefined1 *puStack_600;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined *puStack_5f0;
  undefined8 *puStack_5e8;
  ulong uStack_5e0;
  undefined8 *puStack_5d8;
  undefined1 uStack_5d0;
  undefined7 uStack_5cf;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 uStack_5a8;
  byte *pbStack_5a0;
  undefined1 *puStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined8 *puStack_580;
  ulong uStack_578;
  undefined8 *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  byte *pbStack_4c0;
  undefined1 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_4a8;
  undefined8 *puStack_4a0;
  ulong uStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 auStack_3e8 [64];
  undefined1 auStack_3a8 [264];
  undefined *puStack_2a0;
  undefined1 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  byte *pbStack_248;
  undefined1 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  byte *pbStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  lVar15 = *(long *)(lVar13 + -8);
  lVar1 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar14 = auStack_c90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (long)puVar14 - extraout_x12;
  puStack_d8 = *(undefined1 **)(lVar1 + 0x30);
  pbStack_e0 = *(byte **)(lVar1 + 0x28);
  uVar20 = *(undefined8 *)(lVar1 + 0x69);
  uStack_a0 = (undefined1)((ulong)*(undefined8 *)(lVar1 + 0x61) >> 0x38);
  uStack_c8 = *(undefined8 *)(lVar1 + 0x40);
  uStack_d0 = *(undefined8 *)(lVar1 + 0x38);
  uStack_b8 = *(undefined8 *)(lVar1 + 0x50);
  uStack_c0 = *(undefined8 *)(lVar1 + 0x48);
  uStack_b0 = *(undefined8 *)(lVar1 + 0x58);
  uStack_a8 = (undefined1)*(undefined8 *)(lVar1 + 0x60);
  uStack_a7 = (undefined7)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 8);
  uStack_9f._7_1_ = (char)((ulong)uVar20 >> 0x38);
  uStack_9f = uVar20;
  if (uStack_9f._7_1_ == -1) {
    FUN_103059a18(&uStack_200);
  }
  else {
    lStack_c88 = lVar13;
    lStack_c70 = lVar15;
    uStack_c68 = uVar21;
    lStack_c60 = lVar17;
    uStack_c58 = param_1;
    if (uStack_9f._7_1_ == '\x01') {
      uStack_1e8 = *(undefined8 *)(lVar10 + 0x40);
      uStack_1f0 = *(undefined8 *)(lVar10 + 0x38);
      uStack_1d8 = *(undefined8 *)(lVar10 + 0x50);
      uStack_1e0 = *(undefined8 *)(lVar10 + 0x48);
      uVar21 = *(undefined8 *)(lVar10 + 0x58);
      uStack_1c8 = (undefined1)*(undefined8 *)(lVar10 + 0x60);
      uStack_1bf = *(undefined8 *)(lVar10 + 0x69);
      uStack_1c7 = (undefined7)*(undefined8 *)(lVar10 + 0x61);
      uStack_1c0 = (undefined1)((ulong)*(undefined8 *)(lVar10 + 0x61) >> 0x38);
      uStack_1f8 = *(undefined8 *)(lVar10 + 0x30);
      uStack_200 = *(undefined8 *)(lVar10 + 0x28);
      puStack_c80 = puStack_d8;
      pbStack_c78 = pbStack_e0;
      uStack_1d0 = uVar21;
      func_0x000103059b58(&pbStack_e0,auStack_3a8,0x112f36930,&UNK_10db7ef80);
      pbVar2 = (byte *)&uStack_200;
      func_0x000103059b1c(pbVar2,auStack_3a8);
    }
    else {
      uStack_230 = *(undefined8 *)(lVar10 + 0x40);
      uStack_238 = *(undefined8 *)(lVar10 + 0x38);
      uStack_220 = *(undefined8 *)(lVar10 + 0x50);
      uStack_228 = *(undefined8 *)(lVar10 + 0x48);
      uStack_210 = *(undefined8 *)(lVar10 + 0x60);
      uStack_218 = *(undefined8 *)(lVar10 + 0x58);
      uStack_208 = *(undefined8 *)(lVar10 + 0x68);
      uStack_1e8 = *(undefined8 *)(lVar10 + 0x40);
      uStack_1f0 = *(undefined8 *)(lVar10 + 0x38);
      uStack_1d8 = *(undefined8 *)(lVar10 + 0x50);
      uStack_1e0 = *(undefined8 *)(lVar10 + 0x48);
      uVar21 = *(undefined8 *)(lVar10 + 0x58);
      uStack_1c8 = (undefined1)*(undefined8 *)(lVar10 + 0x60);
      uStack_1bf = *(undefined8 *)(lVar10 + 0x69);
      uStack_1c7 = (undefined7)*(undefined8 *)(lVar10 + 0x61);
      uStack_1c0 = (undefined1)((ulong)*(undefined8 *)(lVar10 + 0x61) >> 0x38);
      uStack_1f8 = *(undefined8 *)(lVar10 + 0x30);
      uStack_200 = *(undefined8 *)(lVar10 + 0x28);
      pbVar2 = (byte *)&uStack_200;
      puVar11 = auStack_3a8;
      pbStack_248 = pbStack_e0;
      puStack_240 = puStack_d8;
      uStack_1d0 = uVar21;
      func_0x000103059b1c();
      FUN_10307ff24();
      puStack_c80 = puVar11;
      pbStack_c78 = pbVar2;
    }
    func_0x000103081b44();
    uVar12 = (ulong)pbVar2[0x10];
    uVar3 = (ulong)*pbVar2;
    FUN_103081288(*(undefined8 *)(pbVar2 + 8),*(undefined8 *)(pbVar2 + 0x18));
    puVar4 = (undefined8 *)&UNK_10db7f098;
    func_0x000107c614e0();
    puVar5 = puVar4;
    func_0x000103080bc0();
    uStack_288 = puVar5[1];
    uStack_290 = *puVar5;
    uStack_278 = puVar5[3];
    uStack_280 = puVar5[2];
    uStack_268 = puVar5[5];
    uStack_270 = puVar5[4];
    uStack_258 = puVar5[7];
    uVar19 = puVar5[6];
    uStack_260 = uVar19;
    FUN_103080684();
    puVar6 = puVar5;
    func_0x000107c5f568();
    uVar18 = 0x4030000000000000;
    puVar7 = puVar6;
    func_0x000107c5f280();
    func_0x000107c5f7b0();
    pbVar2 = pbStack_c78;
    puVar11 = puStack_c80;
    pbStack_608 = pbStack_c78;
    puStack_600 = puStack_c80;
    uStack_5f8 = 0;
    puStack_5f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_5a8 = 0;
    puStack_5e8 = puVar4;
    uStack_5e0 = uVar3;
    puStack_5d8 = puVar5;
    uStack_5d0 = (char)puVar6;
    uStack_5c8 = uVar18;
    uStack_5c0 = uVar19;
    uStack_5b8 = uVar21;
    uStack_5b0 = in_d3;
    *(undefined8 **)(lVar17 + -0x10) = puVar7;
    *(ulong *)(lVar17 + -8) = uVar12;
    *(undefined1 *)(lVar17 + -0x18) = 1;
    *(undefined8 *)(lVar17 + -0x20) = 0;
    *(undefined1 *)(lVar17 + -0x28) = 1;
    *(undefined8 *)(lVar17 + -0x30) = 0;
    func_0x000107c5f388(&uStack_538,0,1,0,1,0x7ff0000000000000,0,0,1);
    uStack_558 = uStack_5c0;
    uStack_560 = uStack_5c8;
    uStack_548 = uStack_5b0;
    uStack_550 = uStack_5b8;
    uStack_540 = uStack_5a8;
    uStack_590 = CONCAT71(uStack_5f7,uStack_5f8);
    puStack_598 = puStack_600;
    pbStack_5a0 = pbStack_608;
    puStack_588 = puStack_5f0;
    uStack_568 = CONCAT71(uStack_5cf,uStack_5d0);
    puStack_570 = puStack_5d8;
    uStack_578 = uStack_5e0;
    puStack_580 = puStack_5e8;
    pbStack_b48 = pbVar2;
    puStack_b40 = puVar11;
    uStack_b38 = 0;
    puStack_b30 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_ae8 = 0;
    uVar20 = 0x112f36a10;
    puStack_b28 = puVar4;
    uStack_b20 = uVar3;
    puStack_b18 = puVar5;
    uStack_b10 = (char)puVar6;
    uStack_b08 = uVar18;
    uStack_b00 = uVar19;
    uStack_af8 = uVar21;
    uStack_af0 = in_d3;
    func_0x000103059b58(&pbStack_608,&uStack_200,0x112f36a10,&UNK_10db7f0c8);
    ppbVar8 = &pbStack_b48;
    func_0x000103059ba0(ppbVar8,0x112f36a10,&UNK_10db7f0c8);
    func_0x000107c5f7ac();
    uStack_a38 = uStack_4f8;
    uStack_a40 = uStack_500;
    uStack_a28 = uStack_4e8;
    uStack_a30 = uStack_4f0;
    uStack_a18 = uStack_4d8;
    uStack_a20 = uStack_4e0;
    uStack_a10 = uStack_4d0;
    uStack_a80 = CONCAT71(uStack_53f,uStack_540);
    uStack_a78 = uStack_538;
    uStack_a68 = uStack_528;
    uStack_a70 = uStack_530;
    uStack_a58 = uStack_518;
    uStack_a60 = uStack_520;
    uStack_a48 = uStack_508;
    uStack_a50 = uStack_510;
    uStack_ab8 = uStack_578;
    puStack_ac0 = puStack_580;
    uStack_aa8 = uStack_568;
    puStack_ab0 = puStack_570;
    uStack_a98 = uStack_558;
    uStack_aa0 = uStack_560;
    uStack_a88 = uStack_548;
    uStack_a90 = uStack_550;
    puStack_ad8 = puStack_598;
    pbStack_ae0 = pbStack_5a0;
    puStack_ac8 = puStack_588;
    uStack_ad0 = uStack_590;
    func_0x000107c5f2d4(auStack_3e8,0,1,0x4044000000000000,0,ppbVar8,uVar20);
    uStack_418 = uStack_4f8;
    uStack_420 = uStack_500;
    uStack_408 = uStack_4e8;
    uStack_410 = uStack_4f0;
    uStack_3f8 = uStack_4d8;
    uStack_400 = uStack_4e0;
    uStack_460 = CONCAT71(uStack_53f,uStack_540);
    uStack_9a0 = CONCAT71(uStack_53f,uStack_540);
    uStack_458 = uStack_538;
    uStack_448 = uStack_528;
    uStack_450 = uStack_530;
    uStack_438 = uStack_518;
    uStack_440 = uStack_520;
    uStack_428 = uStack_508;
    uStack_430 = uStack_510;
    uStack_498 = uStack_578;
    puStack_4a0 = puStack_580;
    uStack_488 = uStack_568;
    puStack_490 = puStack_570;
    uStack_478 = uStack_558;
    uStack_480 = uStack_560;
    uStack_468 = uStack_548;
    uStack_470 = uStack_550;
    puStack_4b8 = puStack_598;
    pbStack_4c0 = pbStack_5a0;
    puStack_4a8 = puStack_588;
    uStack_4b0 = uStack_590;
    uStack_958 = uStack_4f8;
    uStack_960 = uStack_500;
    uStack_948 = uStack_4e8;
    uStack_950 = uStack_4f0;
    uStack_938 = uStack_4d8;
    uStack_940 = uStack_4e0;
    uStack_998 = uStack_538;
    uStack_988 = uStack_528;
    uStack_990 = uStack_530;
    uStack_978 = uStack_518;
    uStack_980 = uStack_520;
    uStack_968 = uStack_508;
    uStack_970 = uStack_510;
    uStack_9d8 = uStack_578;
    puStack_9e0 = puStack_580;
    uStack_9c8 = uStack_568;
    puStack_9d0 = puStack_570;
    uStack_9b8 = uStack_558;
    uStack_9c0 = uStack_560;
    uStack_9a8 = uStack_548;
    uStack_9b0 = uStack_550;
    uStack_3f0 = uStack_4d0;
    uStack_930 = uStack_4d0;
    puStack_9f8 = puStack_598;
    pbStack_a00 = pbStack_5a0;
    puStack_9e8 = puStack_588;
    uStack_9f0 = uStack_590;
    func_0x000103059b58(&pbStack_ae0,&uStack_200,0x112f36a18,&UNK_10db7f0d0);
    func_0x000103059ba0(&pbStack_a00,0x112f36a18,&UNK_10db7f0d0);
    func_0x000107c610b4(auStack_920,&pbStack_4c0,0x108);
    func_0x000107c610b4(&pbStack_818,&pbStack_4c0,0x108);
    func_0x000103059b58(auStack_920,&uStack_200,0x112f36a20,&UNK_10db7f0d8);
    func_0x000103059ba0(&pbStack_818,0x112f36a20,&UNK_10db7f0d8);
    puVar9 = &UNK_10db7ef90;
    func_0x000107c614e0();
    func_0x000107c610b4(auStack_c50,auStack_920,0x108);
    func_0x000107c610b4(&puStack_710,auStack_920,0x108);
    func_0x000107c610b4(auStack_3a8,auStack_920,0x108);
    func_0x000103059b58(&puStack_710,&uStack_200,0x112f36a20,&UNK_10db7f0d8);
    func_0x000100d30aac(puVar9,0);
    func_0x000103059ba0(&pbStack_e0,0x112f36930,&UNK_10db7ef80);
    func_0x000100d30abc(puVar9,0);
    func_0x000103059ba0(auStack_c50,0x112f36a20,&UNK_10db7f0d8);
    uStack_298 = 0;
    puStack_2a0 = puVar9;
    FUN_103059be0(auStack_3a8);
    func_0x000107c610b4(&uStack_200,auStack_3a8,0x111);
    lVar13 = lStack_c88;
    lVar15 = lStack_c70;
    param_1 = uStack_c58;
    lVar17 = lStack_c60;
    uVar21 = uStack_c68;
  }
  (**(code **)(lVar10 + 0x78))(puVar14);
  FUN_103061a64(lVar17,puVar14,lVar13,uVar21);
  pcVar16 = *(code **)(lVar15 + 8);
  (*pcVar16)(puVar14,lVar13);
  func_0x000107c610b4(auStack_3a8,&uStack_200,0x111);
  puStack_710 = auStack_3a8;
  (**(code **)(lVar15 + 0x10))(puVar14,lVar17,lVar13);
  pbVar2 = (byte *)0x112f369c0;
  puStack_708 = puVar14;
  func_0x000103059b58(&uStack_200,&pbStack_4c0,0x112f369c0,&UNK_10db7f068);
  func_0x0001000285a8(0x112f369c0,&UNK_10db7f068);
  pbStack_4c0 = pbVar2;
  puStack_4b8 = (undefined1 *)lVar13;
  func_0x000103059a48();
  pbStack_818 = pbVar2;
  uStack_810 = uVar21;
  func_0x000101c14e58(param_1,&puStack_710,2,&pbStack_4c0,&pbStack_818);
  func_0x000103059ba0(&uStack_200,0x112f369c0,&UNK_10db7f068);
  (*pcVar16)(lVar17,lVar13);
  (*pcVar16)(puVar14,lVar13);
  func_0x000103059ba0(auStack_3a8,0x112f369c0,&UNK_10db7f068);
  return;
}


