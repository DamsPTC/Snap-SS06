/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013795f8; end: 101379613;  */

void FUN_1013795f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101379614();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101379614; end: 101379747;  */

undefined * FUN_101379614(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101379748);
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
    FUN_10137a834();
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
    func_0x000101379a94(0,0x112d768f8,&PTR_PTR_1126a6b88);
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



/* Entry: 101379748; end: 101379903;  */

ulong FUN_101379748(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10137982c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101379830);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000101379a94(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101379904);
  (*pcVar2)();
}



/* Entry: 101379904; end: 101379a63;  */

undefined * FUN_101379904(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    FUN_1013795f8(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101379a64);
      (*pcVar3)();
    }
    uVar6 = 0;
    do {
      puVar2 = puStack_68;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101379a48);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar6;
        FUN_101379748(uVar6,param_1,&PTR_PTR_1126badc0,0x112d4edd8);
      }
      uStack_78 = uVar4;
      FUN_101378d80(&uStack_70,&uStack_78);
      func_0x000107c61170(uVar4);
      uVar1 = uStack_70;
      uVar4 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        FUN_1013795f8(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar1;
    } while (uVar5 != uVar6);
  }
  return puStack_68;
}



/* Entry: 101379a64; end: 101379a73;  */

void FUN_101379a64(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar6 = &UNK_1103a7fe0;
  puVar2 = puVar6;
  func_0x000107c613fc(&UNK_1103a7fe0,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  puVar4 = &UNK_1103a8148;
  func_0x000107c613fc(&UNK_1103a8148,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x101379a6c;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_101379a74;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x100f6540c;
  puStack_90 = &UNK_1103a8160;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar7 = puStack_80;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar7);
  func_0x000107c613fc(&UNK_1103a7fe0,0x18,7);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar6 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  puVar7 = &UNK_1103a8198;
  func_0x000107c613fc(&UNK_1103a8198,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x101379b38;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_88 = (code *)0x101379b30;
  puStack_a8 = puVar9;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x100e27b38;
  puStack_90 = &UNK_1103a81b0;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_80;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar2);
  puVar9 = puVar4;
  func_0x000107c61544(puVar4,"",0x65,0x2d,0x25,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10137860c);
    (*pcVar1)();
  }
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x65,0x34,0x1c,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101378610);
  (*pcVar1)();
}



/* Entry: 101379a74; end: 101379ad3;  */

void FUN_101379a74(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101379ad4; end: 101379adb;  */

void FUN_101379ad4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x000101379a94(0,0x112d768f8,&PTR_PTR_1126a6b88);
    func_0x000107c5fc48(param_1,uVar1);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101379adc; end: 101379aff;  */

void FUN_101379adc(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 101379b00; end: 101379b3f;  */

void FUN_101379b00(long param_1,long param_2)

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



/* Entry: 101379b40; end: 101379bdf; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101379b40(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  *(undefined8 *)(param_1 + _DAT_112d76940) = 0;
  *(undefined8 *)(param_1 + _DAT_112d76948) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d76950);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  param_1 = param_1 + _DAT_112d76958;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "TemplateExplorerFeature/TemplateExplorerDetailViewController.swift",0x42,2,
                      0x33,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101379be0);
  (*pcVar2)();
}



/* Entry: 101379be0; end: 101379be7; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController preferredStatusBarStyle] */

undefined8 FUN_101379be0(void)

{
  return 1;
}



/* Entry: 101379be8; end: 101379ca3;  */

void FUN_101379be8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_10137a214();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  puVar2 = puVar1;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c4ecbc();
  func_0x000107c517f0(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5a9c4(puVar1);
  func_0x000107c61180();
  func_0x000107c4ecd4();
  func_0x000107c4ecc0();
  func_0x000107c517ec(puVar1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101379ca4; end: 101379ccb; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_101379ca4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101379be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101379ccc; end: 101379d1b; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController loadView] */

/* WARNING: Possible PIC construction at 0x000101379d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101379d0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101379ccc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  FUN_101379e74();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d76940);
  func_0x000107c61174(uVar1);
  func_0x000107c5a568(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101379d1c; end: 101379dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101379d1c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  FUN_10137a214();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  if (*(long *)(unaff_x20 + _DAT_112d76948) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c51750();
    func_0x000107c61170(puVar2);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76950);
    *puVar1 = puVar3;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  return;
}



/* Entry: 101379dac; end: 101379dd3; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController viewDidLoad] */

void FUN_101379dac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101379d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101379dd4; end: 101379e4f; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101379dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_10137a214();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  if (*(long *)(param_1 + _DAT_112d76948) != 0) {
    func_0x000107c56a18(param_1);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101379e50; end: 101379e73;  */

void FUN_101379e50(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 101379e74; end: 10137a143;  */

/* WARNING: Possible PIC construction at 0x000101379edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101379f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101379ff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137a0f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101379f5c) */
/* WARNING: Removing unreachable block (ram,0x000101379ff4) */
/* WARNING: Removing unreachable block (ram,0x00010137a030) */
/* WARNING: Removing unreachable block (ram,0x000101379fdc) */
/* WARNING: Removing unreachable block (ram,0x000101379ee0) */
/* WARNING: Removing unreachable block (ram,0x00010137a0fc) */
/* WARNING: Removing unreachable block (ram,0x00010137a104) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101379e74(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d76940) != 0) {
    return;
  }
  func_0x000107c30a40();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d76948);
  *(undefined8 *)(unaff_x20 + _DAT_112d76948) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10137a144; end: 10137a16f; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController initWithNibName:bundle:] */

void FUN_10137a144(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TemplateExplorerFeature.TemplateExplorerDetailViewController",0x3c,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10137a170);
  (*pcVar1)();
}



/* Entry: 10137a170; end: 10137a17b;  */

void FUN_10137a170(void)

{
  FUN_10137a214();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10137a17c; end: 10137a213; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10137a17c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d76918));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76920));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76928));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76930));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76938));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76940));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d76948));
  param_1 = param_1 + _DAT_112d76958;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10137a214; end: 10137a233;  */

void FUN_10137a214(void)

{
  func_0x000107c61168(&PTR_PTR_1127cbb90);
  return;
}



/* Entry: 10137a234; end: 10137a26f; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10137a234(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d76940);
  if ((lVar1 != 0) && (param_3 == lVar1)) {
    func_0x000107c3f42c(lVar1,param_2,1);
    return (uint)lVar1 ^ 1;
  }
  return 1;
}



/* Entry: 10137a270; end: 10137a273; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController cardToExpandTransition] */

void FUN_10137a270(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10137a274; end: 10137a27f; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController cardTransitionWillBeginWithView:] */

void FUN_10137a274(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10137a280; end: 10137a28b; -[_TtC23TemplateExplorerFeature36TemplateExplorerDetailViewController cardTransitionEndedWithView:transitionType:] */

void FUN_10137a280(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  return;
}



/* Entry: 10137a28c; end: 10137a393;  */

void FUN_10137a28c(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  func_0x000101e3806c();
  if (param_1 != 0) {
    pcVar1 = "didSelectTemplate(with:)";
    func_0x0001000c10c0("didSelectTemplate(with:)");
    func_0x000107c61180();
    puVar2 = &UNK_1103a8238;
    func_0x000107c613fc(&UNK_1103a8238,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1103a8288;
    func_0x000107c613fc(&UNK_1103a8288,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = param_1;
    uStack_40 = 0x10137a7d4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1103a82a0;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    puVar2 = puStack_38;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 10137a394; end: 10137a4ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137a394(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d76988;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      lVar2 = lVar1 + _DAT_112d769d8;
      func_0x000107c61618();
      if (lVar2 == 0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        puVar3 = &UNK_1103a82d8;
        func_0x000107c613fc(&UNK_1103a82d8,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,lVar1);
        puVar4 = &UNK_1103a8300;
        func_0x000107c613fc(&UNK_1103a8300,0x20,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined8 *)(puVar4 + 0x18) = param_2;
        pcStack_68 = FUN_10137a808;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000f6b44;
        puStack_70 = &UNK_1103a8318;
        ppuVar5 = &puStack_88;
        puStack_60 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        puVar3 = puStack_60;
        func_0x000107c61174(param_2);
        func_0x000107c61574(puVar3);
        func_0x000107c420a8(lVar2);
        func_0x000107c615e8(lVar1);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(lVar2);
      }
    }
  }
  return;
}



/* Entry: 10137a4f0; end: 10137a60b; -[_TtC23TemplateExplorerFeature39TemplateExplorerDetailPageActionHandler didSelectTemplateWithTemplate:] */

/* WARNING: Possible PIC construction at 0x00010137a528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137a52c) */

void FUN_10137a4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10137a28c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10137a60c; end: 10137a68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137a60c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d76990;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c420a8(lVar1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10137a68c; end: 10137a6b3; -[_TtC23TemplateExplorerFeature39TemplateExplorerDetailPageActionHandler onTapDismissDetailPage] */

void FUN_10137a68c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010137a540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10137a6b4; end: 10137a71b; -[_TtC23TemplateExplorerFeature39TemplateExplorerDetailPageActionHandler init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137a6b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1 + _DAT_112d76988;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = param_1 + _DAT_112d76990;
  func_0x000107c61614(lVar1,0);
  FUN_10137a790();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10137a71c; end: 10137a727;  */

void FUN_10137a71c(void)

{
  FUN_10137a790();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10137a728; end: 10137a757;  */

void FUN_10137a728(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10137a758; end: 10137a78f; -[_TtC23TemplateExplorerFeature39TemplateExplorerDetailPageActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137a758(long param_1)

{
  FUN_10137a810(param_1 + _DAT_112d76988);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d76990);
  return;
}



/* Entry: 10137a790; end: 10137a7af;  */

void FUN_10137a790(void)

{
  func_0x000107c61168(&PTR_PTR_1127cbd00);
  return;
}



/* Entry: 10137a7b0; end: 10137a7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137a7b0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d76990;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c420a8(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10137a7dc; end: 10137a807;  */

void FUN_10137a7dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10137a808; end: 10137a80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137a808(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  puVar2 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2 + _DAT_112d769d0;
    func_0x000107c61618();
    puVar6 = puVar2;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126aff58;
      func_0x000107c610f8(PTR_PTR_1126aff58);
      func_0x000107c61174(puVar3);
      func_0x000107c48080(puVar4);
      puVar5 = PTR_PTR_1126b6050;
      func_0x000107c61168(PTR_PTR_1126b6050);
      func_0x000107c61174(puVar4);
      func_0x000107c61174();
      func_0x000107c5c7f0(puVar5);
      func_0x000107c61180();
      func_0x000107c5df20(*(undefined8 *)(puVar2 + _DAT_112d769e0));
      puVar6 = PTR_PTR_1126b6058;
      func_0x000107c610f8(PTR_PTR_1126b6058);
      func_0x000107c48f78();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c42c1c(*(undefined8 *)(puVar2 + _DAT_112d769f0));
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 10137a810; end: 10137a833;  */

undefined8 FUN_10137a810(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10137a834; end: 10137a857;  */

void FUN_10137a834(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d769c0;
  plVar5 = (long *)&UNK_10d936578;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10137a8f4(0,0x112d768f8,&PTR_PTR_1126a6b88);
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



/* Entry: 10137a858; end: 10137a8cf;  */

void FUN_10137a858(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10137a8f4(0,param_1,param_2);
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



/* Entry: 10137a8d0; end: 10137a8f3;  */

void FUN_10137a8d0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d769c8;
  plVar5 = (long *)&UNK_10d936580;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10137a8f4(0,0x112d76900,&PTR_PTR_1126a6b90);
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



/* Entry: 10137a8f4; end: 10137a933;  */

void FUN_10137a8f4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10137a934; end: 10137a943;  */

void FUN_10137a934(long param_1,long param_2)

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



/* Entry: 10137a944; end: 10137ae8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137a944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112d769d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d769d8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d769e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d769e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d769f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d769f8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d76a00) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d76a08) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d76a10) = param_7;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10137ae90; end: 10137af1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137ae90(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d769e0);
    func_0x000107c5d17c(uVar1);
    func_0x000107c61180();
    func_0x000107c3e2c0();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 10137af1c; end: 10137af23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137af1c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d769e0);
    func_0x000107c5d17c(uVar2);
    func_0x000107c61180();
    func_0x000107c3e2c0();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 10137af24; end: 10137af83; -[_TtC23TemplateExplorerFeature33TemplateExplorerFeatureEntryPoint init] */

void FUN_10137af24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TemplateExplorerFeature.TemplateExplorerFeatureEntryPoint",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10137af50);
  (*pcVar1)();
}



/* Entry: 10137af84; end: 10137b04b; -[_TtC23TemplateExplorerFeature33TemplateExplorerFeatureEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010137b010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137b014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137af84(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d769e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d769e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d769f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d769f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76a00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76a08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76a10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d769d0);
  return;
}



/* Entry: 10137b04c; end: 10137b053;  */

undefined8 FUN_10137b04c(void)

{
  return 0;
}



/* Entry: 10137b054; end: 10137b417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137b054(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar10 = &puStack_a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d769e8);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    return;
  }
  lVar2 = lVar3;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  if (lVar2 == 0) {
    return;
  }
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d76a00);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d76a08);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d76a10);
  lVar4 = 0;
  FUN_10137a214();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d76940) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d76948) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d76950);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar3 = lVar5 + _DAT_112d76958;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  *(long *)(lVar5 + _DAT_112d76918) = lVar2;
  *(undefined8 *)(lVar5 + _DAT_112d76920) = param_1;
  *(undefined ***)(lVar3 + 8) = &PTR_DAT_1103a8410;
  func_0x000107c61604();
  *(undefined8 *)(lVar5 + _DAT_112d76928) = uVar14;
  *(undefined8 *)(lVar5 + _DAT_112d76930) = uVar13;
  *(undefined8 *)(lVar5 + _DAT_112d76938) = uVar12;
  puVar7 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar12);
  func_0x000107c615f0(lVar2);
  plVar6 = &lStack_70;
  func_0x000107c61154(plVar6,puVar7,0,0);
  func_0x000107c5677c();
  func_0x000107c61604(unaff_x20 + _DAT_112d769d8,plVar6);
  puVar7 = &UNK_1103a8350;
  func_0x000107c613fc(&UNK_1103a8350,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar8 = &UNK_1103a8430;
  func_0x000107c613fc(&UNK_1103a8430,0x20,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(long **)(puVar8 + 0x18) = plVar6;
  func_0x000107c61580(puVar7,2);
  func_0x000107c61174();
  FUN_101379e74();
  plVar9 = *(long **)((long)plVar6 + _DAT_112d76940);
  if (plVar9 == (long *)0x0) {
    func_0x000107c61428(puVar7 + 0x10,&puStack_a0,0,0);
    plVar9 = (long *)(puVar7 + 0x10);
    func_0x000107c61618();
    if (plVar9 == (long *)0x0) {
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
    }
    else {
      puVar11 = (undefined *)((long)plVar9 + _DAT_112d769d0);
      func_0x000107c61618();
      if (puVar11 != (undefined *)0x0) {
        func_0x000107c4f018();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(plVar6);
        func_0x000107c61578(puVar7,2);
        func_0x000107c61574(puVar8);
        func_0x000107c61170(puVar11);
        plVar6 = plVar9;
        goto LAB_10137b3f0;
      }
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
      func_0x000107c61170(plVar9);
    }
    func_0x000107c61574(puVar7);
    func_0x000107c615e8(lVar2);
  }
  else {
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    puVar11 = &UNK_1103a8458;
    func_0x000107c613fc(&UNK_1103a8458,0x20,7);
    *(code **)(puVar11 + 0x10) = FUN_10137ba04;
    *(undefined **)(puVar11 + 0x18) = puVar8;
    pcStack_80 = FUN_10137ba38;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1103a8470;
    puStack_78 = puVar11;
    func_0x000107c60bc4(&puStack_a0);
    puVar11 = puStack_78;
    func_0x000107c6157c(puVar8);
    func_0x000107c61574(puVar11);
    func_0x000107c5e078(plVar9);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(puVar8);
    func_0x000107c61170(plVar6);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61574(puVar7);
    plVar6 = plVar9;
  }
LAB_10137b3f0:
  func_0x000107c61170(plVar6);
  return;
}



/* Entry: 10137b418; end: 10137b4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137b418(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d769d0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4f018();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10137b4a4; end: 10137b61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137b4a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1 + _DAT_112d769d0;
    func_0x000107c61618();
    puVar5 = puVar1;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126aff58;
      func_0x000107c610f8(PTR_PTR_1126aff58);
      func_0x000107c61174(puVar2);
      func_0x000107c48080(puVar3);
      puVar4 = PTR_PTR_1126b6050;
      func_0x000107c61168(PTR_PTR_1126b6050);
      func_0x000107c61174(puVar3);
      func_0x000107c61174();
      func_0x000107c5c7f0(puVar4);
      func_0x000107c61180();
      func_0x000107c5df20(*(undefined8 *)(puVar1 + _DAT_112d769e0));
      puVar5 = PTR_PTR_1126b6058;
      func_0x000107c610f8(PTR_PTR_1126b6058);
      func_0x000107c48f78();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar4);
      func_0x000107c42c1c(*(undefined8 *)(puVar1 + _DAT_112d769f0));
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 10137b61c; end: 10137b75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137b61c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar4 = &puStack_90;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112d769e0);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lVar1);
    uVar2 = uVar5;
    func_0x000107c5d17c(uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    puVar3 = &UNK_1103a8350;
    func_0x000107c613fc(&UNK_1103a8350,0x18,7);
    func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618(param_1);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    func_0x000107c61170(param_1);
    uStack_70 = 0x10137ba48;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_1103a84c0;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c41864(uVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 10137b75c; end: 10137b7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137b75c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d769e0);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = lVar2;
    func_0x000107c4168c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c5c7d0(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10137b7f4; end: 10137b83f; -[_TtC23TemplateExplorerFeature33TemplateExplorerFeatureEntryPoint useTemplateFlowDidComplete:] */

/* WARNING: Possible PIC construction at 0x00010137b828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137b82c) */

void FUN_10137b7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10137b8e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10137b840; end: 10137b8c3; -[_TtC23TemplateExplorerFeature33TemplateExplorerFeatureEntryPoint useTemplateFlowDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010137b87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137b898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137b880) */
/* WARNING: Removing unreachable block (ram,0x00010137b89c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137b840(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10137b8c4; end: 10137b8e7;  */

void FUN_10137b8c4(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  return;
}



/* Entry: 10137b8e8; end: 10137b9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137b8e8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = unaff_x20 + _DAT_112d769d0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1103a8350;
    func_0x000107c613fc(&UNK_1103a8350,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_40 = 0x10137ba40;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1103a8498;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c420a8(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10137b9b8; end: 10137ba03;  */

void FUN_10137b9b8(void)

{
  func_0x000107c61168(&PTR_PTR_1127cbe00);
  return;
}



/* Entry: 10137ba04; end: 10137ba0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137ba04(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d769d0;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c4f018();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10137ba0c; end: 10137ba37;  */

void FUN_10137ba0c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10137ba38; end: 10137ba67;  */

void FUN_10137ba38(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  return;
}



/* Entry: 10137ba68; end: 10137bb97;  */

undefined8 FUN_10137ba68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  puVar2 = &UNK_1103a8588;
  func_0x000107c613fc(&UNK_1103a8588,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10137dd6c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)0x100f11710;
  puStack_68 = &UNK_1103a85a0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar2);
  pcStack_60 = FUN_10137bbf4;
  puStack_58 = (undefined *)0x0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100f10508;
  puStack_68 = &UNK_1103a85c8;
  func_0x000107c60bc4(&puStack_80);
  FUN_10137db18(0);
  func_0x000107c614e8();
  func_0x000107c4c214(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return param_1;
}



/* Entry: 10137bb98; end: 10137bbf3;  */

void FUN_10137bb98(undefined8 param_1,undefined8 param_2)

{
  FUN_10137db18(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  FUN_10137cb10(param_1,param_2);
  return;
}



/* Entry: 10137bbf4; end: 10137c0f7;  */

void FUN_10137bbf4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_90;
    ppuVar4 = &puStack_90;
    ppuVar5 = &puStack_90;
    ppuVar6 = &puStack_90;
    ppuVar7 = &puStack_90;
    ppuVar8 = &puStack_90;
    ppuVar9 = &puStack_90;
    ppuVar10 = &puStack_90;
    ppuVar11 = &puStack_90;
    ppuVar12 = &puStack_90;
    ppuVar13 = &puStack_90;
    ppuVar14 = &puStack_90;
    ppuVar15 = &puStack_90;
    ppuVar16 = &puStack_90;
    uVar2 = 0x6c7275;
    func_0x000107c5fadc(0x6c7275,0xe300000000000000);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_10137c0f8;
    uStack_68 = 0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_101137fac;
    puStack_78 = &UNK_1103a85f0;
    func_0x000107c60bc4(&puStack_90);
    pcStack_70 = FUN_10137c2e4;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x101138058;
    puStack_78 = &UNK_1103a8618;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar2);
    uVar2 = 0x646574754d7369;
    func_0x000107c5fadc(0x646574754d7369,0xe700000000000000);
    pcStack_70 = FUN_10137c3fc;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10137c454;
    puStack_78 = &UNK_1103a8640;
    func_0x000107c60bc4(&puStack_90);
    pcStack_70 = FUN_10137c4dc;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x101138058;
    puStack_78 = &UNK_1103a8668;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c3e8f4(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6152726564726f62;
    func_0x000107c5fadc(0x6152726564726f62,0xec00000073756964);
    pcStack_70 = (code *)0x10137c52c;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10137c584;
    puStack_78 = &UNK_1103a8690;
    func_0x000107c60bc4(&puStack_90);
    pcStack_70 = FUN_10137c60c;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x101138058;
    puStack_78 = &UNK_1103a86b8;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c3e8fc(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6957726579616c70;
    func_0x000107c5fadc(0x6957726579616c70,0xeb00000000687464);
    pcStack_70 = FUN_10137c65c;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10137c71c;
    puStack_78 = &UNK_1103a86e0;
    func_0x000107c60bc4(&puStack_90);
    pcStack_70 = FUN_10137c7ac;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x101138058;
    puStack_78 = &UNK_1103a8708;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c3e8f8(param_1);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6548726579616c70;
    func_0x000107c5fadc(0x6548726579616c70,0xec00000074686769);
    pcStack_70 = FUN_10137c85c;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10137c71c;
    puStack_78 = &UNK_1103a8730;
    func_0x000107c60bc4();
    pcStack_70 = FUN_10137c91c;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x101138058;
    puStack_78 = &UNK_1103a8758;
    func_0x000107c60bc4();
    func_0x000107c3e8f8(param_1);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(uVar2);
    uVar2 = 0x79654b636e65;
    func_0x000107c5fadc(0x79654b636e65,0xe600000000000000);
    pcStack_70 = FUN_10137c9cc;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_101137fac;
    puStack_78 = &UNK_1103a8780;
    func_0x000107c60bc4();
    pcStack_70 = (code *)0x10137c9d8;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x101138058;
    puStack_78 = &UNK_1103a87a8;
    func_0x000107c60bc4();
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(uVar2);
    uVar2 = 0x7649636e65;
    func_0x000107c5fadc(0x7649636e65,0xe500000000000000);
    pcStack_70 = (code *)0x10137c9e4;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_101137fac;
    puStack_78 = &UNK_1103a87d0;
    func_0x000107c60bc4();
    pcStack_70 = FUN_10137ca84;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x101138058;
    puStack_78 = &UNK_1103a87f8;
    func_0x000107c60bc4();
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10137c0f8; end: 10137c2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10137c0f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar5 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_10137db18(0);
  lVar1 = param_1;
  func_0x000107c61480(param_1,uVar3);
  uVar3 = 0;
  if ((lVar1 != 0) && (param_3 != 0)) {
    func_0x000107c61174(param_1);
    func_0x000107c5edd0(lVar7,param_2,param_3);
    lVar4 = lVar7;
    (**(code **)(lVar8 + 0x30))(lVar7,1,lVar2);
    if ((int)lVar4 == 1) {
      func_0x000107c61170(param_1);
      func_0x0001000293e4(lVar7);
      uVar3 = 0;
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar6,lVar7,lVar2);
      (**(code **)(lVar8 + 0x10))(puVar5,lVar6,lVar2);
      (**(code **)(lVar8 + 0x38))(puVar5,0,1,lVar2);
      lVar7 = _DAT_112d76a80;
      func_0x000107c61428(lVar1 + _DAT_112d76a80,auStack_78,0x21,0);
      FUN_10137dd74(puVar5,lVar1 + lVar7);
      func_0x000107c614a8(auStack_78);
      FUN_10137cd3c();
      func_0x000107c61170(param_1);
      func_0x0001000293e4(puVar5);
      (**(code **)(lVar8 + 8))(lVar6,lVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 10137c2e4; end: 10137c3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137c2e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar2 = 0;
  FUN_10137db18(0);
  lVar1 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar1 != 0) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,1,1,lVar3);
    lVar3 = _DAT_112d76a80;
    func_0x000107c61428(lVar1 + _DAT_112d76a80,auStack_58,0x21,0);
    func_0x000107c61174(param_1);
    FUN_10137dd74(puVar4,lVar1 + lVar3);
    func_0x000107c614a8(auStack_58);
    FUN_10137cd3c();
    func_0x0001000293e4(puVar4);
    func_0x000107c5015c(*(undefined8 *)(lVar1 + _DAT_112d76a50));
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10137c3fc; end: 10137c453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10137c3fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10137db18(0);
  func_0x000107c61480(param_1,uVar1);
  if (param_1 != 0) {
    func_0x000107c568bc(*(undefined8 *)(param_1 + _DAT_112d76a50));
  }
  return param_1 != 0;
}



/* Entry: 10137c454; end: 10137c4db;  */

uint FUN_10137c454(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_4);
  uVar3 = param_2;
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_4);
  return (uint)uVar3 & 1;
}



/* Entry: 10137c4dc; end: 10137c583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137c4dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10137db18(0);
  func_0x000107c61480(param_1,uVar1);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1ca6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112d76a50),PTR_s_setMuted__1126503d0,1);
    return;
  }
  return;
}



/* Entry: 10137c584; end: 10137c60b;  */

uint FUN_10137c584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_4);
  uVar3 = param_2;
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_4);
  return (uint)uVar3 & 1;
}



/* Entry: 10137c60c; end: 10137c65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137c60c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10137db18(0);
  func_0x000107c61480(param_1,uVar1);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1842f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,*(undefined8 *)(param_1 + _DAT_112d76a58),PTR_s_setCornerRadius__11263ead8);
    return;
  }
  return;
}



/* Entry: 10137c65c; end: 10137c71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10137c65c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = 0;
  FUN_10137db18(0);
  lVar3 = param_2;
  func_0x000107c61480(param_2,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d76a70);
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
    if (*(char *)((undefined8 *)(lVar3 + _DAT_112d76a78) + 1) != '\x01') {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112d76a78);
      uVar2 = *(undefined8 *)(lVar3 + _DAT_112d76a58);
      func_0x000107c61174(param_2);
      func_0x000107c54b80(0,0,param_1,uVar4,uVar2);
      func_0x000107c61170(param_2);
    }
  }
  return lVar3 != 0;
}



/* Entry: 10137c71c; end: 10137c7ab;  */

uint FUN_10137c71c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  uVar3 = param_3;
  (*pcVar1)(param_1,param_3,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return (uint)uVar3 & 1;
}



/* Entry: 10137c7ac; end: 10137c85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137c7ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = 0;
  FUN_10137db18(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d76a70);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    if (*(char *)((undefined8 *)(lVar3 + _DAT_112d76a78) + 1) != '\x01') {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112d76a78);
      uVar2 = *(undefined8 *)(lVar3 + _DAT_112d76a58);
      func_0x000107c61174(param_1);
      func_0x000107c54b80(0,0,0,uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10137c85c; end: 10137c91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10137c85c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = 0;
  FUN_10137db18(0);
  lVar3 = param_2;
  func_0x000107c61480(param_2,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d76a78);
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
    if (*(char *)((undefined8 *)(lVar3 + _DAT_112d76a70) + 1) != '\x01') {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112d76a70);
      uVar2 = *(undefined8 *)(lVar3 + _DAT_112d76a58);
      func_0x000107c61174(param_2);
      func_0x000107c54b80(0,0,uVar4,param_1,uVar2);
      func_0x000107c61170(param_2);
    }
  }
  return lVar3 != 0;
}



/* Entry: 10137c91c; end: 10137c9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137c91c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = 0;
  FUN_10137db18(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d76a78);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    if (*(char *)((undefined8 *)(lVar3 + _DAT_112d76a70) + 1) != '\x01') {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112d76a70);
      uVar2 = *(undefined8 *)(lVar3 + _DAT_112d76a58);
      func_0x000107c61174(param_1);
      func_0x000107c54b80(0,0,uVar4,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10137c9cc; end: 10137c9ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10137c9cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  FUN_10137db18(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d76a88);
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000107c61174(param_1);
    func_0x000107c6142c(uVar2);
    func_0x000107c61434(param_3);
    FUN_10137cd3c();
    func_0x000107c61170(param_1);
  }
  return lVar3 != 0;
}



/* Entry: 10137c9f0; end: 10137ca83;  */

bool FUN_10137c9f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  FUN_10137db18(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + *param_5);
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000107c61174(param_1);
    func_0x000107c6142c(uVar2);
    func_0x000107c61434(param_3);
    FUN_10137cd3c();
    func_0x000107c61170(param_1);
  }
  return lVar3 != 0;
}



/* Entry: 10137ca84; end: 10137ca8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137ca84(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  FUN_10137db18(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d76a90);
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61174(param_1);
    func_0x000107c6142c(uVar2);
    FUN_10137cd3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10137ca90; end: 10137cb0f;  */

void FUN_10137ca90(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  FUN_10137db18(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + *param_3);
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61174(param_1);
    func_0x000107c6142c(uVar2);
    FUN_10137cd3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10137cb10; end: 10137cd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10137cb10(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  puVar5 = &stack0xffffffffffffffa0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76a60) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d76a68) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76a70);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76a78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = _DAT_112d76a80;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76a88);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76a90);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76a40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d76a48) = param_2;
  puVar4 = PTR__OBJC_CLASS___AVQueuePlayer_1126de0c0;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c47f64();
  *(undefined **)(unaff_x20 + _DAT_112d76a50) = puVar4;
  puVar4 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168();
  func_0x000107c4e998();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + _DAT_112d76a58) = puVar4;
  FUN_10137db18();
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffa0,PTR_s_initWithFrame__1125e2948);
  lVar2 = _DAT_112d76a58;
  uVar7 = *(undefined8 *)(puVar5 + _DAT_112d76a58);
  puVar6 = puVar5;
  func_0x000107c61174();
  func_0x000107c5a51c(uVar7);
  func_0x000107c562fc(*(undefined8 *)(puVar5 + lVar2));
  puVar5 = puVar6;
  func_0x000107c4aba4(puVar6);
  func_0x000107c61180();
  func_0x000107c3d894();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar5);
  return puVar6;
}



/* Entry: 10137cd08; end: 10137cd3b; -[_TtC23TemplateExplorerFeature30TemplateExplorerSnapPlayerView initWithCoder:] */

undefined8 FUN_10137cd08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10137dc80();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 10137cd3c; end: 10137d347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137cd3c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long extraout_x12;
  long unaff_x20;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 auStack_130 [2];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar25 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar29 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar29 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = (long)puVar25 - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar23 = *(long *)(lVar2 + -8);
  lVar24 = *(long *)(lVar23 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = lVar27 - (lVar24 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = _DAT_112d76a80;
  lVar22 = lVar30 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_112d76a80,auStack_80,0,0);
  func_0x000100029394(unaff_x20 + lVar29,lVar27);
  lVar29 = lVar27;
  (**(code **)(lVar23 + 0x30))(lVar27,1,lVar2);
  if ((int)lVar29 == 1) {
    func_0x0001000293e4(lVar27);
  }
  else {
    pcVar17 = *(code **)(lVar23 + 0x20);
    (*pcVar17)(lVar22,lVar27,lVar2);
    lVar29 = ((undefined8 *)(unaff_x20 + _DAT_112d76a88))[1];
    if (lVar29 != 0) {
      lVar21 = ((undefined8 *)(unaff_x20 + _DAT_112d76a90))[1];
      if (lVar21 != 0) {
        uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d76a88);
        uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d76a90);
        lVar28 = *(long *)(unaff_x20 + _DAT_112d76a40);
        func_0x000107c61434(lVar29);
        func_0x000107c61434(lVar21);
        func_0x000107c40430();
        func_0x000107c61180();
        lVar3 = lVar28;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar28);
        if (lVar3 == 0) {
          (**(code **)(lVar23 + 8))(lVar22,lVar2);
          func_0x000107c6142c(lVar29);
          func_0x000107c6142c(lVar21);
          return;
        }
        func_0x000107c5ed70();
        puVar4 = PTR_PTR_1126b08b8;
        func_0x000107c610f8();
        lVar13 = lVar27;
        lStack_100 = lVar30;
        func_0x000107c5fadc(lVar28,lVar27);
        func_0x000107c6142c(lVar27);
        func_0x000107c4766c();
        func_0x000107c61170(lVar28);
        func_0x000107c5ed70();
        puVar5 = PTR_PTR_1126b1058;
        func_0x000107c610f8();
        func_0x000107c5fadc(lVar28,lVar13);
        func_0x000107c6142c(lVar13);
        uVar6 = 0xd00000000000001d;
        func_0x000107c5fadc(0xd00000000000001d,0x800000010ef394d0);
        uVar7 = 0x626f6c62;
        uVar14 = 0xe400000000000000;
        func_0x000107c5fadc(0x626f6c62,0xe400000000000000);
        func_0x000107c46d48();
        func_0x000107c61170(lVar28);
        func_0x000107c61170(uVar6);
        func_0x000107c61170();
        func_0x000107c5ed70();
        uVar6 = uVar7;
        uVar15 = uVar14;
        func_0x000107c5ed70();
        puVar8 = PTR_PTR_1126b1050;
        uStack_118 = uVar6;
        func_0x000107c610f8();
        puStack_110 = puVar8;
        func_0x000107c61174();
        puStack_108 = puVar5;
        func_0x000107c5fadc(uVar7,uVar14);
        func_0x000107c6142c(uVar14);
        uVar6 = uStack_118;
        func_0x000107c5fadc(uStack_118,uVar15);
        func_0x000107c6142c(uVar15);
        *(undefined **)(lVar22 + -0x10) = puVar5;
        *(undefined1 *)(lVar22 + -0x18) = 0;
        *(undefined8 *)(lVar22 + -0x20) = uVar6;
        puVar9 = puStack_110;
        func_0x000107c4915c(puStack_110);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar6);
        func_0x000107c61174(puVar9);
        func_0x000107c5fadc(uVar18,lVar29);
        func_0x000107c6142c(lVar29);
        func_0x000107c5fadc(uVar19,lVar21);
        func_0x000107c6142c(lVar21);
        puVar10 = PTR_PTR_1126b1060;
        func_0x000107c610f8();
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        func_0x000107c47d08();
        func_0x000107c61170();
        func_0x000107c5ee80(puVar25,0x40f5180000000000);
        func_0x000107c5ee70();
        (**(code **)(lVar16 + 8))(puVar25,lVar1);
        puVar5 = &UNK_1103a8510;
        func_0x000107c613fc(&UNK_1103a8510,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,unaff_x20);
        lVar29 = lStack_100;
        (**(code **)(lVar23 + 0x10))(lStack_100,lVar22,lVar2);
        uVar20 = (ulong)*(byte *)(lVar23 + 0x50);
        uVar26 = uVar20 + 0x18 & (uVar20 ^ 0xffffffffffffffff);
        puVar8 = &UNK_1103a8538;
        func_0x000107c613fc(&UNK_1103a8538,uVar26 + lVar24,uVar20 | 7);
        *(undefined **)(puVar8 + 0x10) = puVar5;
        (*pcVar17)(puVar8 + uVar26,lVar29,lVar2);
        pcStack_90 = FUN_10137dbfc;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        pcStack_a0 = FUN_10137d3d0;
        puStack_98 = &UNK_1103a8550;
        ppuVar12 = &puStack_b0;
        puStack_88 = puVar8;
        func_0x000107c60bc4();
        func_0x000107c61574(puStack_88);
        *(undefined ***)(lVar22 + -8) = ppuVar12;
        *(undefined1 *)(lVar22 + -0x10) = 0;
        func_0x000107c4fc28(lVar3);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c61170(puVar4);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61170(puStack_108);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar18);
        func_0x000107c61170(uVar19);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar11);
      }
    }
    (**(code **)(lVar23 + 8))(lVar22,lVar2);
  }
  return;
}



/* Entry: 10137d348; end: 10137d3cf;  */

void FUN_10137d348(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    if ((param_3 & 1) != 0) {
      FUN_10137d464(param_1,param_2,param_6);
    }
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 10137d3d0; end: 10137d463;  */

void FUN_10137d3d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c5ee30(param_2);
  func_0x000107c61170(uVar3);
  (*pcVar1)(param_2,uVar4,param_3,param_4);
  func_0x00010006c090(param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10137d464; end: 10137d95b;  */

/* WARNING: Possible PIC construction at 0x00010137d59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137d64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137d6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137d7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137d824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137d850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137d9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137d9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137d758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137d9f4) */
/* WARNING: Removing unreachable block (ram,0x00010137d9a4) */
/* WARNING: Removing unreachable block (ram,0x00010137d854) */
/* WARNING: Removing unreachable block (ram,0x00010137d828) */
/* WARNING: Removing unreachable block (ram,0x00010137d858) */
/* WARNING: Removing unreachable block (ram,0x00010137d8d8) */
/* WARNING: Removing unreachable block (ram,0x00010137d8c0) */
/* WARNING: Removing unreachable block (ram,0x00010137d82c) */
/* WARNING: Removing unreachable block (ram,0x00010137d7f4) */
/* WARNING: Removing unreachable block (ram,0x00010137d6fc) */
/* WARNING: Removing unreachable block (ram,0x00010137d650) */
/* WARNING: Removing unreachable block (ram,0x00010137d658) */
/* WARNING: Removing unreachable block (ram,0x00010137d674) */
/* WARNING: Removing unreachable block (ram,0x00010137d708) */
/* WARNING: Removing unreachable block (ram,0x00010137d6ec) */
/* WARNING: Removing unreachable block (ram,0x00010137d5a0) */
/* WARNING: Removing unreachable block (ram,0x00010137d5a4) */
/* WARNING: Removing unreachable block (ram,0x00010137d75c) */
/* WARNING: Removing unreachable block (ram,0x00010137d790) */
/* WARNING: Removing unreachable block (ram,0x00010137d7a0) */
/* WARNING: Removing unreachable block (ram,0x00010137d768) */
/* WARNING: Removing unreachable block (ram,0x00010137d910) */
/* WARNING: Removing unreachable block (ram,0x00010137d91c) */
/* WARNING: Removing unreachable block (ram,0x00010137d920) */
/* WARNING: Removing unreachable block (ram,0x00010137d958) */
/* WARNING: Removing unreachable block (ram,0x00010137d938) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137d464(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d76a48);
  func_0x000107c5c800(uVar2);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10137d95c; end: 10137da0f;  */

/* WARNING: Possible PIC construction at 0x00010137d9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137d9f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137d9a4) */
/* WARNING: Removing unreachable block (ram,0x00010137d9f4) */

void FUN_10137d95c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c48fbc(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10137da10; end: 10137da6f; -[_TtC23TemplateExplorerFeature30TemplateExplorerSnapPlayerView initWithFrame:] */

void FUN_10137da10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TemplateExplorerFeature.TemplateExplorerSnapPlayerView",0x36,"init(frame:)",
                      0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10137da3c);
  (*pcVar1)();
}



/* Entry: 10137da70; end: 10137db0f; -[_TtC23TemplateExplorerFeature30TemplateExplorerSnapPlayerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010137daf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137daf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137da70(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76a40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76a48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76a50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76a58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76a60));
  func_0x0001000293e4(param_1 + _DAT_112d76a80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d76a88 + 8))
  ;
  return;
}



/* Entry: 10137db10; end: 10137db17;  */

void FUN_10137db10(void)

{
  if (lRam0000000112d76ac0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6311f4);
  return;
}



/* Entry: 10137db18; end: 10137db4f;  */

void FUN_10137db18(undefined8 param_1)

{
  if (lRam0000000112d76ac0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6311f4);
  return;
}



/* Entry: 10137db50; end: 10137dbfb;  */

void FUN_10137db50(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_78 = PTR___sBOWV_11034d658 + 0x40;
  puStack_58 = &UNK_10d936610;
  puStack_50 = &UNK_10d936628;
  puStack_48 = &UNK_10d936640;
  puStack_40 = &UNK_10d936640;
  lVar1 = 0x13f;
  puStack_70 = puStack_78;
  puStack_68 = puStack_78;
  puStack_60 = puStack_78;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10d936658;
    puStack_28 = &UNK_10d936658;
    func_0x000107c61630(param_1,0x100,0xb,&puStack_78,param_1 + 0x50);
  }
  return;
}



/* Entry: 10137dbfc; end: 10137dc63;  */

void FUN_10137dbfc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      FUN_10137d464(param_1,param_2,unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10137dc64; end: 10137dc7f;  */

void FUN_10137dc64(long param_1,long param_2)

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



/* Entry: 10137dc80; end: 10137dd6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137dc80(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d76a60) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d76a68) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76a70);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76a78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = _DAT_112d76a80;
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76a88);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76a90);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "TemplateExplorerFeature/TemplateExplorerSnapPlayerView.swift",0x3c,2,0xa4,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10137dd6c);
  (*pcVar3)();
}



/* Entry: 10137dd6c; end: 10137dd73;  */

void FUN_10137dd6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10137db18(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  FUN_10137cb10(uVar1,uVar2);
  return;
}


