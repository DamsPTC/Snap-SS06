/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b5b794; end: 102b5b7ef;  */

void FUN_102b5b794(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102b5b7f0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100082720("CameraViewControllerEntryPointProvider",0x26,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b5b7f0; end: 102b5c0c3;  */

void FUN_102b5b7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_1105a22d0;
  func_0x000107c613fc(&UNK_1105a22d0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(0x102b5b8f4,puVar1);
  return;
}



/* Entry: 102b5c0c4; end: 102b5c0eb; -[_TtC20CameraViewController20CameraViewController initWithCoder:] */

void FUN_102b5c0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b5d2d0();
  return;
}



/* Entry: 102b5c0ec; end: 102b5c96b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5c0ec(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff50,PTR_s_viewDidLoad_112684cd8);
  lVar10 = _DAT_112ef6da8;
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + _DAT_112ef6da8));
  lVar13 = *(long *)(unaff_x20 + _DAT_112ef6db0);
  func_0x000107c5a050(lVar13);
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0f3440);
  func_0x000107c59e1c(lVar13);
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar4 = puVar3;
  func_0x000107c5c5f0();
  func_0x000107c61180();
  func_0x000107c52b50(lVar13);
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c5e2ac(puVar3);
  func_0x000107c61180();
  func_0x000107c59e34(lVar13);
  func_0x000107c61170(puVar4);
  lVar5 = lVar13;
  func_0x000107c4aba4(lVar13);
  func_0x000107c61180();
  func_0x000107c539d4(0x4020000000000000);
  func_0x000107c61170(lVar5);
  lVar5 = lVar13;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (lVar5 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c5c600(0x4030000000000000,*(undefined8 *)PTR__UIFontWeightMedium_110345c38);
    func_0x000107c61180();
    func_0x000107c54adc(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c3d8b8(lVar13);
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5c948);
    (*pcVar1)();
  }
  func_0x000107c5a050();
  func_0x000107c61170(lVar5);
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5c94c);
    (*pcVar1)();
  }
  func_0x000107c3ea80(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar3);
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5c950);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar5);
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5c954);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 9;
  *(undefined8 *)(lVar6 + 0x10) = 4;
  uVar2 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5c958);
    (*pcVar1)();
  }
  lVar8 = lVar7;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar9 = uVar2;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(lVar6 + 0x20) = uVar9;
  uVar2 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5c95c);
    (*pcVar1)();
  }
  lVar8 = lVar7;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar9 = uVar2;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(lVar6 + 0x28) = uVar9;
  uVar2 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x000107c5e308();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    uVar9 = uVar2;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar8);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    uVar2 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x000107c44d9c();
    func_0x000107c61180();
    lVar10 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5c964);
      (*pcVar1)();
    }
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar7 = lVar10;
    func_0x000107c44d9c(lVar10);
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    uVar9 = uVar2;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar6 + 0x38) = uVar9;
    uVar2 = 0;
    func_0x000102b5d890(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar10 = lVar6;
    func_0x000107c5fc48(lVar6,uVar2);
    func_0x000107c61574(lVar6);
    func_0x000107c3d048(puVar3);
    func_0x000107c61170(lVar10);
    func_0x000107c613fc(lVar5,((ulong)*(uint *)(lVar5 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                        *(ushort *)(lVar5 + 0x34) | 7);
    *(undefined8 *)(lVar5 + 0x18) = 9;
    *(undefined8 *)(lVar5 + 0x10) = 4;
    lVar10 = lVar13;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x000107c3f75c();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      lVar6 = lVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar7);
      *(long *)(lVar5 + 0x20) = lVar6;
      lVar10 = lVar13;
      func_0x000107c3f764();
      func_0x000107c61180();
      lVar6 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar7 = lVar6;
        func_0x000107c3f764();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        lVar6 = lVar10;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar7);
        *(long *)(lVar5 + 0x28) = lVar6;
        lVar10 = lVar13;
        func_0x000107c5e308();
        func_0x000107c61180();
        lVar6 = lVar10;
        func_0x000107c40290(0x4069000000000000);
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        *(long *)(lVar5 + 0x30) = lVar6;
        func_0x000107c44d9c();
        func_0x000107c61180();
        lVar10 = lVar13;
        func_0x000107c40290(0x4049000000000000);
        func_0x000107c61180();
        func_0x000107c61170(lVar13);
        *(long *)(lVar5 + 0x38) = lVar10;
        lVar10 = lVar5;
        func_0x000107c5fc48(lVar5,uVar2);
        func_0x000107c61574(lVar5);
        func_0x000107c3d048(puVar3);
        func_0x000107c61170(lVar10);
        lVar10 = _DAT_112ef6de8;
        uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef6de8);
        func_0x000107c41b80(uVar2);
        func_0x000107c61180();
        puVar3 = &UNK_1105a2340;
        puVar11 = puVar3;
        func_0x000107c613fc(&UNK_1105a2340,0x18,7);
        func_0x000107c61614(puVar11 + 0x10);
        puVar4 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_80 = (code *)0x102b5d3a8;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100c1de60;
        puStack_88 = &UNK_1105a2358;
        ppuVar12 = &puStack_a0;
        puStack_78 = puVar11;
        func_0x000107c60bc4(ppuVar12);
        func_0x000107c61574(puStack_78);
        func_0x000107c5c320(uVar2);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61170(uVar2);
        uVar2 = *(undefined8 *)(unaff_x20 + lVar10);
        func_0x000107c5e3d8(uVar2);
        func_0x000107c61180();
        puVar11 = puVar3;
        func_0x000107c613fc(&UNK_1105a2340,0x18,7);
        func_0x000107c61614(puVar11 + 0x10);
        pcStack_80 = FUN_102b5d48c;
        puStack_a0 = puVar4;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100c1de60;
        puStack_88 = &UNK_1105a2380;
        ppuVar12 = &puStack_a0;
        puStack_78 = puVar11;
        func_0x000107c60bc4(ppuVar12);
        func_0x000107c61574(puStack_78);
        func_0x000107c5c320(uVar2);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61170(uVar2);
        uVar2 = *(undefined8 *)(unaff_x20 + lVar10);
        func_0x000107c5e370(uVar2);
        func_0x000107c61180();
        func_0x000107c613fc(&UNK_1105a2340,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        pcStack_80 = (code *)0x102b5d4f0;
        puStack_a0 = puVar4;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100c1de60;
        puStack_88 = &UNK_1105a23a8;
        ppuVar12 = &puStack_a0;
        puStack_78 = puVar3;
        func_0x000107c60bc4(ppuVar12);
        func_0x000107c61574(puStack_78);
        func_0x000107c5c320(uVar2);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61170(uVar2);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5c96c);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5c968);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5c960);
  (*pcVar1)();
}



/* Entry: 102b5c96c; end: 102b5c993; -[_TtC20CameraViewController20CameraViewController viewDidLoad] */

void FUN_102b5c96c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b5c0ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b5c994; end: 102b5ca43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5c994(uint param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewWillAppear__1126853f0,param_1 & 1);
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112ef6db8) + _DAT_113076470);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112ef6dc0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5ca44);
      (*pcVar1)();
    }
    func_0x000107c4bd3c();
    func_0x000107c615e8(lVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_112ef6dc0) != 0) {
    func_0x000107c3f304();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5ca40);
  (*pcVar1)();
}



/* Entry: 102b5ca44; end: 102b5ca73; -[_TtC20CameraViewController20CameraViewController viewWillAppear:] */

void FUN_102b5ca44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102b5c994(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b5ca74; end: 102b5cbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5ca74(uint param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  lVar5 = _DAT_112ef6dc0;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ef6dc0);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5cbc0);
    (*pcVar1)();
  }
  func_0x000107c615f0(lVar4);
  uVar2 = 0x6143797070616e53;
  func_0x000107c5fadc(0x6143797070616e53,0xec0000006172656d);
  func_0x000107c55b20(lVar4);
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(uVar2);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5cbc4);
    (*pcVar1)();
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112ef6dc8) + _DAT_113074f68);
  func_0x000107c615f0(lVar5);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c3f2d8(lVar5);
  func_0x000107c615e8(lVar5);
  func_0x000107c5bb50(*(undefined8 *)(unaff_x20 + _DAT_112ef6dd0));
  return;
}



/* Entry: 102b5cbc4; end: 102b5cbf3; -[_TtC20CameraViewController20CameraViewController viewDidAppear:] */

void FUN_102b5cbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102b5ca74(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b5cbf4; end: 102b5cc83; -[_TtC20CameraViewController20CameraViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5cbf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillDisappear__112685438;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar3 = *(long *)(param_1 + _DAT_112ef6dc0);
  if (lVar3 != 0) {
    func_0x000107c615f0(lVar3);
    func_0x000107c55b20();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b5cc84);
  (*pcVar2)();
}



/* Entry: 102b5cc84; end: 102b5cd0f; -[_TtC20CameraViewController20CameraViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5cc84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar3 = *(long *)(param_1 + _DAT_112ef6dc0);
  if (lVar3 != 0) {
    func_0x000107c615f0(lVar3);
    func_0x000107c3f2dc();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b5cd10);
  (*pcVar2)();
}



/* Entry: 102b5cd10; end: 102b5cd87; -[_TtC20CameraViewController20CameraViewController launchButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5cd10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ef6df8);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112ef6df8))[1];
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1);
  pcVar4 = *(code **)(lVar2 + 0x48);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(uVar1);
  (*pcVar4)(uVar3,lVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b5cd88; end: 102b5ce47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5cd88(void)

{
  undefined **ppuVar1;
  long unaff_x20;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef6dd8);
  if (lVar2 != 0) {
    uStack_40 = 0x102b5d280;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ab47f8;
    puStack_48 = &UNK_1105a22e8;
    ppuVar1 = &puStack_60;
    func_0x000107c60bc4(ppuVar1);
    func_0x000107c615f0(lVar2);
    func_0x000107c498fc(0);
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b5ce48; end: 102b5ce6b; -[_TtC20CameraViewController20CameraViewController dealloc] */

void FUN_102b5ce48(void)

{
  func_0x000107c61174();
  FUN_102b5cd88();
  return;
}



/* Entry: 102b5ce6c; end: 102b5cf73; -[_TtC20CameraViewController20CameraViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b5ce88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5cea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5cee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5cf08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b5ceec) */
/* WARNING: Removing unreachable block (ram,0x000102b5ceac) */
/* WARNING: Removing unreachable block (ram,0x000102b5ce8c) */
/* WARNING: Removing unreachable block (ram,0x000102b5cf0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5ce6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef6dc8));
  return;
}



/* Entry: 102b5cf74; end: 102b5d243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5cf74(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112ef6dc8) + _DAT_113074f60);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar11 = 0x10c;
    uVar10 = 0x800000010f0f34c0;
    uVar6 = 0xd000000000000025;
  }
  else {
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    puVar7 = &UNK_1105a2340;
    puVar5 = puVar7;
    func_0x000107c613fc(&UNK_1105a2340,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_102b5d540;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_102b5d244;
    puStack_78 = &UNK_1105a23d0;
    puStack_68 = puVar5;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_68);
    func_0x000107c3e4fc(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0();
    func_0x0001044e72c4();
    func_0x000107c61174(puVar4);
    uVar6 = 0x4320797070616e53;
    func_0x000107c5fadc(0x4320797070616e53,0xed00006172656d61);
    func_0x000107c613fc(&UNK_1105a2340,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_70 = FUN_102b5d82c;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_1105a23f8;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_68);
    lVar9 = lVar3;
    func_0x000107c5bba4();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef6dd8);
    *(long *)(unaff_x20 + _DAT_112ef6dd8) = lVar9;
    func_0x000107c615f0(lVar9);
    func_0x000107c615e8(uVar6);
    if (lVar9 != 0) {
      func_0x000107c615e8(lVar9);
      if (*(long *)(unaff_x20 + _DAT_112ef6dc0) != 0) {
        func_0x000107c3f2ec();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b5d1b0);
      (*pcVar2)();
    }
    uVar11 = 0x11d;
    uVar6 = 0x20676e697373694d;
    uVar10 = 0xed00006e656b6f74;
  }
  func_0x000107c60450("Fatal error",0xb,2,uVar6,uVar10,
                      "CameraViewController/CameraViewController.swift",0x2f,2,uVar11,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b5d244);
  (*pcVar2)();
}



/* Entry: 102b5d244; end: 102b5d27b;  */

void FUN_102b5d244(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102b5d27c; end: 102b5d2af;  */

void FUN_102b5d27c(void)

{
  return;
}



/* Entry: 102b5d2b0; end: 102b5d2cf;  */

void FUN_102b5d2b0(void)

{
  func_0x000107c61168(&PTR_PTR_11288e150);
  return;
}



/* Entry: 102b5d2d0; end: 102b5d48b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5d2d0(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ef6e10;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6dc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6dd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6e18) = 0;
  lVar1 = _DAT_112ef6db0;
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "CameraViewController/CameraViewController.swift",0x2f,2,0x59,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b5d3a8);
  (*pcVar2)();
}



/* Entry: 102b5d48c; end: 102b5d53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5d48c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112ef6dc0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5d4f0);
      (*pcVar1)();
    }
    func_0x000107c3dd98();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102b5d540; end: 102b5d82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b5d540(void)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return (undefined *)0x0;
  }
  lVar4 = *(long *)(lVar3 + _DAT_112ef6e08);
  func_0x000107c3f070();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar5;
      func_0x000107c5bca8(lVar5);
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      uVar6 = 0;
      func_0x000102b5d890(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar7 = 0;
      func_0x000102b5d890(0,0x112da0578,&PTR_PTR_1126b7120);
      uVar11 = uVar7;
      func_0x000100120cb0();
      lVar5 = lVar4;
      func_0x000107c5f9e8(lVar4,uVar6,uVar7,uVar11);
      func_0x000107c61170(lVar4);
      lVar4 = _DAT_112ef6dc8;
      lVar8 = *(long *)(*(long *)(lVar3 + _DAT_112ef6dc8) + _DAT_113074f68);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        uVar12 = *(undefined8 *)(lVar3 + _DAT_112ef6de0);
        uVar13 = *(undefined8 *)(*(long *)(lVar3 + lVar4) + _DAT_113074f90);
        puVar9 = PTR_PTR_1126cf798;
        func_0x000107c610f8(PTR_PTR_1126cf798);
        func_0x000107c615f0(uVar12);
        func_0x000107c61174(uVar13);
        lVar4 = lVar5;
        func_0x000107c5f9dc(lVar5,uVar6,uVar7,uVar11);
        lVar10 = lVar5;
        func_0x000107c5f9dc(lVar5,uVar6,uVar7,uVar11);
        func_0x000107c6142c(lVar5);
        uVar11 = 0x6143797070616e53;
        func_0x000107c5fadc(0x6143797070616e53,0xec0000006172656d);
        func_0x000107c45bc8(puVar9);
        func_0x000107c615e8(uVar12);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(lVar3);
        return puVar9;
      }
      pcVar1 = "cameraHardwareResource is empty";
      uVar6 = 0xfc;
      uVar11 = 0xd00000000000001f;
      goto LAB_102b5d81c;
    }
  }
  pcVar1 = "deviceSettingsMap is empty";
  uVar6 = 0xf9;
  uVar11 = 0xd00000000000001a;
LAB_102b5d81c:
  func_0x000107c60450("Fatal error",0xb,2,uVar11,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "CameraViewController/CameraViewController.swift",0x2f,2,uVar6,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b5d82c);
  (*pcVar2)();
}



/* Entry: 102b5d82c; end: 102b5d923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5d82c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112ef6dc0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5d890);
      (*pcVar1)();
    }
    func_0x000107c3f2e0();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102b5d924; end: 102b5d95b;  */

void FUN_102b5d924(long param_1,long param_2)

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



/* Entry: 102b5d95c; end: 102b5d9cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5d95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef6e50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6e58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6e60) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b5d9d0; end: 102b5d9ef;  */

void FUN_102b5d9d0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b5d9f0; end: 102b5da4f; -[_TtC38ViewfinderScopedFactoryServiceProvider26SCViewfinderScopedServices init] */

void FUN_102b5d9f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ViewfinderScopedFactoryServiceProvider.SCViewfinderScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5da1c);
  (*pcVar1)();
}



/* Entry: 102b5da50; end: 102b5da97; -[_TtC38ViewfinderScopedFactoryServiceProvider26SCViewfinderScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b5da6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b5da70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5da50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef6e60));
  return;
}



/* Entry: 102b5da98; end: 102b5db03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5da98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a2660;
  func_0x000107c613fc(&UNK_1105a2660,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102b5db8c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b5db04; end: 102b5db63;  */

undefined1  [16] FUN_102b5db04(void)

{
  return ZEXT816(0x1105a25a0);
}



/* Entry: 102b5db64; end: 102b5db8b;  */

void FUN_102b5db64(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102b5db8c; end: 102b5dbaf;  */

void FUN_102b5db8c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b5dbb0; end: 102b5dbf7;  */

undefined8 FUN_102b5dbb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001006c8558(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102b5dbf8; end: 102b5dc3b;  */

void FUN_102b5dbf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b5dc3c; end: 102b5dc8f;  */

void FUN_102b5dc3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b5dc90; end: 102b5dce3;  */

undefined1  [16] FUN_102b5dc90(void)

{
  return ZEXT816(0x1105a2930);
}



/* Entry: 102b5dce4; end: 102b5dd37;  */

void FUN_102b5dce4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b5dd38; end: 102b5e223;  */

long FUN_102b5dd38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126ac000;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0f3ee0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effce40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0f3f00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f3f20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_8);
    *(undefined **)(unaff_x20 + 0x58) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5e224);
  (*pcVar1)();
}



/* Entry: 102b5e224; end: 102b5e2a7;  */

void FUN_102b5e224(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102b5e2a8; end: 102b5e2f7;  */

undefined8 FUN_102b5e2a8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b5e2f8; end: 102b5e343;  */

undefined1  [16] FUN_102b5e2f8(void)

{
  return ZEXT816(0x1105a29f0);
}



/* Entry: 102b5e344; end: 102b5e3cb;  */

undefined8
FUN_102b5e344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001006e2ce4(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 102b5e3cc; end: 102b5e417;  */

void FUN_102b5e3cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b5e418; end: 102b5e467;  */

undefined8 FUN_102b5e418(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b5e468; end: 102b5e4ab;  */

undefined1  [16] FUN_102b5e468(void)

{
  return ZEXT816(0x1105a2a90);
}



/* Entry: 102b5e4ac; end: 102b5e4d3;  */

void FUN_102b5e4ac(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b5e4d4; end: 102b5e4db;  */

undefined8 FUN_102b5e4d4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b5e4dc; end: 102b5f14b;  */

long FUN_102b5e4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  *(undefined8 *)(unaff_x20 + 0x70) = param_4;
  *(undefined8 *)(unaff_x20 + 0x78) = param_5;
  *(undefined8 *)(unaff_x20 + 0x80) = param_6;
  *(undefined8 *)(unaff_x20 + 0x88) = param_7;
  *(undefined8 *)(unaff_x20 + 0x90) = param_8;
  *(undefined8 *)(unaff_x20 + 0x98) = param_9;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_10;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_11;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_12;
  func_0x0001000285a8(0x112de5bb0,&UNK_10db261b0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = param_13;
  func_0x000107c6157c(param_13);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112ef7288,&UNK_10db261b8);
  func_0x000107c610f8();
  uVar12 = param_14;
  func_0x000107c6157c(param_14);
  func_0x00010025a71c();
  puVar3 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  func_0x0001000285a8(0x112de5ba0,&UNK_10db261c0);
  func_0x000107c610f8();
  uVar12 = param_15;
  func_0x000107c6157c(param_15);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  func_0x0001000285a8(0x112ef7290,&UNK_10db261c8);
  func_0x000107c610f8();
  uVar12 = param_16;
  func_0x000107c6157c(param_16);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  func_0x0001000285a8(0x112ef7298,&UNK_10db261d0);
  func_0x000107c610f8();
  uVar12 = param_17;
  func_0x000107c6157c(param_17);
  func_0x00010025a71c();
  puVar6 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(unaff_x20 + 0x38) = puVar6;
  func_0x0001000285a8(0x112de5ba8,&UNK_10d9b0520);
  func_0x000107c610f8();
  uVar12 = param_18;
  func_0x000107c6157c(param_18);
  func_0x00010025a71c();
  puVar7 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(unaff_x20 + 0x40) = puVar7;
  puVar8 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x48) = puVar8;
  puVar9 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x50) = puVar9;
  puVar10 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x58) = puVar10;
  puVar11 = PTR_PTR_1126ac010;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar11;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000022;
  uVar12 = uVar15;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc71f0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  uVar12 = uVar13;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0f3f70);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  uVar12 = uVar14;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19ca0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0x69767265536f6375;
  func_0x000107c5fadc(0x69767265536f6375,0xeb00000000736563);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(param_12);
  func_0x000107c61174();
  uVar12 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0f3f90);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0f3fb0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0f3fd0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(puVar11);
  func_0x000107c61174();
  uVar12 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0f4000);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar11);
  func_0x000107c61174(puVar2);
  uVar14 = 0xd000000000000017;
  uVar12 = uVar14;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0f4030);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar11);
  func_0x000107c61174();
  uVar12 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0f4050);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efc7240);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0f4080);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(puVar11);
  func_0x000107c61174(puVar6);
  uVar12 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0f40a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar11);
  func_0x000107c61174(puVar7);
  uVar12 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc7270);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(puVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5f144);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0xb8) = puVar8;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar9 != (undefined *)0x0) {
    *(undefined **)(unaff_x20 + 0xc0) = puVar9;
    func_0x000107c52018();
    func_0x000107c61180();
    if (puVar10 != (undefined *)0x0) {
      func_0x000107c61574(param_18);
      *(undefined **)(unaff_x20 + 200) = puVar10;
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_12);
      func_0x000107c61574(param_13);
      func_0x000107c61574(param_14);
      func_0x000107c61574(param_15);
      func_0x000107c61574(param_16);
      func_0x000107c61574(param_17);
      return unaff_x20;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5f14c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5f148);
  (*pcVar1)();
}



/* Entry: 102b5f14c; end: 102b5f23f;  */

void FUN_102b5f14c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  return;
}



/* Entry: 102b5f240; end: 102b5f293;  */

void FUN_102b5f240(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 200);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b5f294; end: 102b5f2e3;  */

undefined8 FUN_102b5f294(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b5f2e4; end: 102b5f347;  */

undefined1  [16] FUN_102b5f2e4(void)

{
  return ZEXT816(0x1105a2b30);
}



/* Entry: 102b5f348; end: 102b5f36f;  */

void FUN_102b5f348(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b5f370; end: 102b5f377;  */

undefined8 FUN_102b5f370(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b5f378; end: 102b5f3e7;  */

undefined8 FUN_102b5f378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001006c1278(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102b5f3e8; end: 102b5f41b;  */

void FUN_102b5f3e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b5f41c; end: 102b5f46b;  */

undefined8 FUN_102b5f41c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b5f46c; end: 102b5f4a7;  */

undefined1  [16] FUN_102b5f46c(void)

{
  return ZEXT816(0x1105a2c10);
}



/* Entry: 102b5f4a8; end: 102b5fb7f;  */

long FUN_102b5f4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c61174(param_12);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126ac020;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0f40d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc6cd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f40f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc6a20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef3a8e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_12);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0f4110);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_12);
    *(undefined **)(unaff_x20 + 0x78) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5fb80);
  (*pcVar1)();
}



/* Entry: 102b5fb80; end: 102b5fc23;  */

void FUN_102b5fb80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 102b5fc24; end: 102b5fc73;  */

undefined8 FUN_102b5fc24(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b5fc74; end: 102b5fcbf;  */

undefined1  [16] FUN_102b5fc74(void)

{
  return ZEXT816(0x1105a2c90);
}



/* Entry: 102b5fcc0; end: 102b601a3;  */

long FUN_102b5fcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  puVar1 = PTR_PTR_1126ac028;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc6cd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc6a20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f40f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  return unaff_x20;
}



/* Entry: 102b601a4; end: 102b60227;  */

void FUN_102b601a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102b60228; end: 102b60277;  */

undefined8 FUN_102b60228(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b60278; end: 102b602bb;  */

undefined1  [16] FUN_102b60278(void)

{
  return ZEXT816(0x1105a2d30);
}



/* Entry: 102b602bc; end: 102b602e3;  */

void FUN_102b602bc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b602e4; end: 102b602eb;  */

undefined8 FUN_102b602e4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b602ec; end: 102b6063b;  */

long FUN_102b602ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126ac030;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6de0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 102b6063c; end: 102b60687;  */

void FUN_102b6063c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b60688; end: 102b606d7;  */

undefined8 FUN_102b60688(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b606d8; end: 102b60713;  */

undefined1  [16] FUN_102b606d8(void)

{
  return ZEXT816(0x1105a2dd0);
}



/* Entry: 102b60714; end: 102b60c97;  */

long FUN_102b60714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar4 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  puVar5 = PTR_PTR_1126ac038;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar6 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar5);
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar5);
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar5);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0f4130);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar5);
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0f4150);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(puVar5);
  func_0x000107c61174();
  uVar6 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0f4170);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(puVar5);
  func_0x000107c61174();
  uVar6 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0f41a0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(puVar5);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f41d0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(puVar5);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b60c90);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x60) = puVar2;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    *(undefined **)(unaff_x20 + 0x68) = puVar3;
    func_0x000107c52018();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c61170(param_7);
      *(undefined **)(unaff_x20 + 0x70) = puVar4;
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      return unaff_x20;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b60c98);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b60c94);
  (*pcVar1)();
}



/* Entry: 102b60c98; end: 102b60d33;  */

void FUN_102b60c98(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102b60d34; end: 102b60d83;  */

undefined8 FUN_102b60d34(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102b60d84; end: 102b60def;  */

undefined1  [16] FUN_102b60d84(void)

{
  return ZEXT816(0x1105a2e50);
}



/* Entry: 102b60df0; end: 102b60e97;  */

long FUN_102b60df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x0001006c614c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x0001006c616c(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102b60e98; end: 102b60ed3;  */

void FUN_102b60e98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b60ed4; end: 102b60f07;  */

undefined1  [16] FUN_102b60ed4(void)

{
  return ZEXT816(0x1105a2f30);
}



/* Entry: 102b60f08; end: 102b60f33;  */

undefined8 FUN_102b60f08(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102b60f34; end: 102b60f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b60f34(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102b61328();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ef7a48) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102b60fa0; end: 102b6100b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b60fa0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef7a48) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b6100c; end: 102b6106b; -[_TtC49LensProcessingTouchesScopedFactoryServiceProvider37SCLensProcessingTouchesScopedServices init] */

void FUN_102b6100c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensProcessingTouchesScopedFactoryServiceProvider.SCLensProcessingTouchesScopedServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b61038);
  (*pcVar1)();
}



/* Entry: 102b6106c; end: 102b6107b; -[_TtC49LensProcessingTouchesScopedFactoryServiceProvider37SCLensProcessingTouchesScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6106c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef7a48));
  return;
}



/* Entry: 102b6107c; end: 102b610e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6107c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a31f8;
  func_0x000107c613fc(&UNK_1105a31f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102b61404,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b610e8; end: 102b61183;  */

void FUN_102b610e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a3108;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a3108;
  return;
}



/* Entry: 102b61184; end: 102b611bb;  */

void FUN_102b61184(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102b611bc; end: 102b611c3;  */

undefined8 FUN_102b611bc(void)

{
  return 0x1b;
}



/* Entry: 102b611c4; end: 102b612f7;  */

void FUN_102b611c4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105a3220;
  func_0x000107c613fc(&UNK_1105a3220,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b613dc;
  func_0x00010058fa64(FUN_102b613dc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b612f8; end: 102b61327;  */

undefined ** FUN_102b612f8(void)

{
  return &PTR_DAT_11302a520;
}



/* Entry: 102b61328; end: 102b61347;  */

void FUN_102b61328(void)

{
  func_0x000107c61168(&PTR_PTR_11288e350);
  return;
}



/* Entry: 102b61348; end: 102b61397;  */

undefined1  [16] FUN_102b61348(void)

{
  return ZEXT816(0x1105a3158);
}



/* Entry: 102b61398; end: 102b613db;  */

void FUN_102b61398(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef7ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126db4a0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ef7ab0 = puVar1;
  return;
}



/* Entry: 102b613dc; end: 102b61403;  */

void FUN_102b613dc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102b61404; end: 102b61417;  */

void FUN_102b61404(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b61418; end: 102b6172f;  */

void FUN_102b61418(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ef7ac8,&UNK_10db27160);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102b626e4();
  func_0x000100082720("LensProcessingTouchesScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ef7ad0,&UNK_10db27170);
  puVar3 = &UNK_1105a32d0;
  func_0x000107c613fc(&UNK_1105a32d0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x102b6173c;
  func_0x0001000823a8(0x102b6173c,puVar3);
  func_0x000100082720("SCLensProcessingTouchesEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102b61184;
  func_0x0001000823a8(FUN_102b61184,0);
  func_0x000100082720("SCLensProcessingTouchesScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ef7ad8,&UNK_10db27168);
  puVar3 = &UNK_1105a32f8;
  func_0x000107c613fc(&UNK_1105a32f8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_102b61784;
  func_0x0001000823a8(FUN_102b61784,puVar3);
  func_0x000100082720("SCLensProcessingTouchesScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112ef7a50,&UNK_10db26eb0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x102b61790;
  func_0x0001000823a8(0x102b61790,pcVar5);
  func_0x000100082720("SCLensProcessingTouchesScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ef7a40,&UNK_10db26ea0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102b61798;
  func_0x0001000823a8(0x102b61798,uVar6);
  func_0x000100082720("SCLensProcessingTouchesScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1105a3320;
  func_0x000107c613fc(&UNK_1105a3320,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102b617a0;
  func_0x0001000823a8(0x102b617a0,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLensProcessingTouchesScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102b61730; end: 102b61747;  */

void FUN_102b61730(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ef7ac8,&UNK_10db27160);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102b626e4();
  func_0x000100082720("LensProcessingTouchesScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ef7ad0,&UNK_10db27170);
  puVar3 = &UNK_1105a32d0;
  func_0x000107c613fc(&UNK_1105a32d0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar4 = 0x102b6173c;
  func_0x0001000823a8(0x102b6173c,puVar3);
  func_0x000100082720("SCLensProcessingTouchesEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_102b61184;
  func_0x0001000823a8(FUN_102b61184,0);
  func_0x000100082720("SCLensProcessingTouchesScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ef7ad8,&UNK_10db27168);
  puVar3 = &UNK_1105a32f8;
  func_0x000107c613fc(&UNK_1105a32f8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_102b61784;
  func_0x0001000823a8(FUN_102b61784,puVar3);
  func_0x000100082720("SCLensProcessingTouchesScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112ef7a50,&UNK_10db26eb0);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x102b61790;
  func_0x0001000823a8(0x102b61790,pcVar6);
  func_0x000100082720("SCLensProcessingTouchesScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ef7a40,&UNK_10db26ea0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102b61798;
  func_0x0001000823a8(0x102b61798,uVar7);
  func_0x000100082720("SCLensProcessingTouchesScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1105a3320;
  func_0x000107c613fc(&UNK_1105a3320,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x102b617a0;
  func_0x0001000823a8(0x102b617a0,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCLensProcessingTouchesScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 102b61748; end: 102b61783;  */

void FUN_102b61748(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b61784; end: 102b617a7;  */

void FUN_102b61784(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102b61ea0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCLensProcessingTouchesScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b617a8; end: 102b61a53;  */

void FUN_102b617a8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_102b61df0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126ac040;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0x5373656863756f74;
  func_0x000107c5fadc(0x5373656863756f74,0xec00000065706f63);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar6);
  uVar7 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0f4bd0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}


