/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013ea67c; end: 1013ea68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea67c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar1 + 0x30);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + _DAT_112d7bbe0) != 0) {
      func_0x000107c54514();
      lVar3 = *(long *)(lVar1 + 0x30);
      if (lVar3 == 0) goto LAB_1013e6e04;
    }
    if (*(long *)(lVar3 + _DAT_112d7bbe0) != 0) {
      func_0x000107c526c0(0);
      lVar3 = *(long *)(lVar1 + 0x30);
    }
  }
LAB_1013e6e04:
  lVar2 = lVar3;
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112d7bc18) = 0;
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1013ea690; end: 1013ea6d7;  */

void FUN_1013ea690(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1013e9bbc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_112d7bcb0,FUN_1013ea6d8,&UNK_1103b07b8,
                &PTR_PTR_1126afb48);
  return;
}



/* Entry: 1013ea6d8; end: 1013ea6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea6d8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar1 + 0x30);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + _DAT_112d7bbe0) != 0) {
      func_0x000107c54514();
      lVar3 = *(long *)(lVar1 + 0x30);
      if (lVar3 == 0) goto LAB_1013e6ec0;
    }
    if (*(long *)(lVar3 + _DAT_112d7bbe0) != 0) {
      func_0x000107c526c0(0x3ff0000000000000);
      lVar3 = *(long *)(lVar1 + 0x30);
    }
  }
LAB_1013e6ec0:
  lVar2 = lVar3;
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112d7bc18) = 1;
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1013ea6ec; end: 1013ea75f;  */

void FUN_1013ea6ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013ea760; end: 1013ea777;  */

void FUN_1013ea760(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001013ea76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1013ea778; end: 1013ea7af;  */

void FUN_1013ea778(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1013e88fc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                &DAT_112d7bb68,&UNK_1103b0ac0,0x1013eab7c,&UNK_1103b0ad8);
  return;
}



/* Entry: 1013ea7b0; end: 1013ea7bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea7b0(void)

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
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  lVar12 = *(long *)(lVar8 + _DAT_112d7bbd0);
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
    *(long *)(puVar4 + 0x10) = lVar8;
    *(undefined8 *)(puVar4 + 0x18) = uVar10;
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
    func_0x000107c61174(lVar8);
    func_0x000107c615f0(uVar10);
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



/* Entry: 1013ea7bc; end: 1013ea81f;  */

void FUN_1013ea7bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013ea820; end: 1013ea853;  */

void FUN_1013ea820(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c30ef0();
  func_0x000107c4e5ec(uVar1);
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b97f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 1013ea854; end: 1013ea863;  */

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

void FUN_1013ea854(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d7bbd0);
    *(long *)(lVar2 + _DAT_112d7bbd0) = param_1;
    func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1013ea864; end: 1013ea9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ea864(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d7bb88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7bb90) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7bb98) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112d7bba0) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112d7bba8) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112d7bbb0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7bbb8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7bbc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7bbc8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7bbd0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7bbd8) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7bbe0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7bbe8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7bbf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7bbf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7bc00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7bc08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7bc10) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7bc18) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112d7bc20) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSCommunicationInputView.swift",0x2f,2,0x1ab,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ea9bc);
  (*pcVar2)();
}



/* Entry: 1013ea9bc; end: 1013ea9fb;  */

void FUN_1013ea9bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013ea9fc; end: 1013eab4b;  */

void FUN_1013ea9fc(long param_1,long param_2)

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



/* Entry: 1013eab4c; end: 1013eab4f; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSPhoneEntryDataSource continueButtonTitleForPhoneEntry] */

void FUN_1013eab4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*(code *)&SUB_105219828)();
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



/* Entry: 1013eab50; end: 1013eab53; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0323COSEmailEntryDataSource continueButtonTitleForEmailEntry] */

void FUN_1013eab50(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*(code *)&SUB_105219828)();
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



/* Entry: 1013eab54; end: 1013eab57; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView phoneEntryExitedWithUnretryableError:] */

void FUN_1013eab54(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 1013eab58; end: 1013eab97; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView emailEntryExitedWithUnretryableError:] */

void FUN_1013eab58(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 1013eab98; end: 1013eab9b; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView phoneEntrySwitchButtonTapped] */

void FUN_1013eab98(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000100cb0034();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013eab9c; end: 1013eab9f; -[_TtC15COSServicesImplP33_65485955B5BBE978B34A695CD3A10B0325COSCommunicationInputView emailEntrySwitchButtonTapped] */

void FUN_1013eab9c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000100cb0034();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013eaba0; end: 1013eace7; -[_TtC15COSServicesImpl13COSDataSource blizzardClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013eaba0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x000107c61170(param_1);
    lVar2 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c43f7c(lStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    lVar2 = lVar1;
    func_0x000107c5faec(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c5fadc(lVar2,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1013eace8; end: 1013eacf3; -[_TtC15COSServicesImpl13COSDataSource registrationFlowSessionId] */

void FUN_1013eace8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*(code *)0x1013eac58)();
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



/* Entry: 1013eacf4; end: 1013ead83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1013eacf4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  long lStack_38;
  
  if (*(long *)(unaff_x20 + _DAT_112d7bd98) != 0) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      lVar1 = lStack_38;
      func_0x000107c44114(lStack_38);
      func_0x000107c61180();
      func_0x000107c615e8(lStack_38);
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
      goto LAB_1013ead70;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_1013ead70:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 1013ead84; end: 1013ead8f; -[_TtC15COSServicesImpl13COSDataSource loginFlowSessionId] */

void FUN_1013ead84(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013eacf4();
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



/* Entry: 1013ead90; end: 1013eaddb; -[_TtC15COSServicesImpl13COSDataSource clientNetworkRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ead90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7bdd8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7bdd8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013eaddc; end: 1013eae6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1013eaddc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  long lStack_38;
  
  if (*(long *)(unaff_x20 + _DAT_112d7bd98) != 0) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      lVar1 = lStack_38;
      func_0x000107c43f78(lStack_38);
      func_0x000107c61180();
      func_0x000107c615e8(lStack_38);
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
      goto LAB_1013eae58;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_1013eae58:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 1013eae6c; end: 1013eae77; -[_TtC15COSServicesImpl13COSDataSource loginAttemptId] */

void FUN_1013eae6c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013eaddc();
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



/* Entry: 1013eae78; end: 1013eaf2f; -[_TtC15COSServicesImpl13COSDataSource clientAuthenticationSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013eae78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x000107c61170(param_1);
    lVar2 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c52060(lStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    lVar2 = lVar1;
    func_0x000107c5faec(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c5fadc(lVar2,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1013eaf30; end: 1013eafab; -[_TtC15COSServicesImpl13COSDataSource persistentAttestationDeviceId] */

void FUN_1013eaf30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  func_0x000107c2bc20();
  puVar1 = PTR___ss5Int64VN_11034ee50;
  puVar2 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(puVar1,puVar2);
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1013eafac; end: 1013eb26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013eafac(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar1 = (undefined4)*(undefined8 *)(unaff_x20 + _DAT_112d7bdb8);
  func_0x000107c4affc();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d7bdb0);
  puVar3 = &UNK_1103b0df0;
  func_0x000107c613fc(&UNK_1103b0df0,0x28,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(undefined4 *)(puVar3 + 0x18) = uVar1;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  pcStack_50 = FUN_1013ebf08;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1013ef96c;
  puStack_58 = &UNK_1103b0e08;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c4010c(uVar5);
  func_0x000107c60bd0(ppuVar4);
  return puVar2;
}



/* Entry: 1013eb270; end: 1013eb2a3; -[_TtC15COSServicesImpl13COSDataSource cofTags] */

void FUN_1013eb270(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013eafac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013eb2a4; end: 1013eb41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013eb2a4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112d7bdb0);
  uVar2 = uVar8;
  func_0x000107c44298(uVar8,param_2,0x60);
  func_0x000107c61180();
  if (uVar2 != 0) {
    func_0x000107c44298();
    func_0x000107c61180();
    if (uVar8 != 0) {
      uVar3 = uVar2;
      func_0x000107c40808();
      uVar4 = uVar8;
      func_0x000107c40808();
      if (CARRY8(uVar3,uVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013eb41c);
        (*pcVar1)();
      }
      puVar5 = PTR_PTR_1126b7828;
      func_0x000107c610f8(PTR_PTR_1126b7828);
      func_0x000107c45cd4();
      uVar3 = uVar2;
      func_0x000107c40808();
      if (uVar3 != 0) {
        func_0x000107c3d944(puVar5);
      }
      uVar3 = uVar8;
      func_0x000107c40808();
      if (uVar3 != 0) {
        func_0x000107c3d944(puVar5);
      }
      puVar6 = PTR_PTR_1126b7820;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c58f6c();
      puVar7 = puVar6;
      func_0x000107c41214();
      func_0x000107c61180();
      if (puVar7 != (undefined *)0x0) {
        func_0x000107c5ee30();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar2);
        return;
      }
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1013eb41c; end: 1013eb427; -[_TtC15COSServicesImpl13COSDataSource cofConfigData] */

void FUN_1013eb41c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013eb2a4();
  func_0x000107c61170(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    func_0x000107c5ee20(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013eb428; end: 1013eb943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1013eb428(void)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined *puStack_70;
  long lStack_68;
  
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    lVar4 = lStack_68;
    func_0x000107c3fb98();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c615e8(lStack_68);
    }
    else {
      lVar17 = *(long *)(lVar4 + _DAT_11305b228);
      uVar20 = ((undefined8 *)(lVar17 + _DAT_11305b1d0))[1];
      if (uVar20 != 0) {
        lVar19 = *(long *)(lVar4 + _DAT_11305b230);
        uVar15 = ((undefined8 *)(lVar17 + _DAT_11305b1e0))[1];
        if (uVar15 >> 0x3c < 0xf) {
          uVar18 = *(undefined8 *)(lVar17 + _DAT_11305b1e0);
          uVar21 = ((undefined8 *)(lVar17 + _DAT_11305b1f8))[1];
          if (uVar21 != 0) {
            uVar13 = *(undefined8 *)(lVar17 + _DAT_11305b1d0);
            uVar16 = *(undefined8 *)(lVar17 + _DAT_11305b1f8);
            puVar6 = PTR_PTR_1126b8c30;
            func_0x000107c610f8();
            func_0x000107c61434(lVar19);
            func_0x000107c61174();
            func_0x000107c61434(uVar20);
            FUN_100de78a0(uVar18,uVar15);
            func_0x000107c61434(uVar21);
            func_0x000107c453e4();
            uVar7 = uVar21;
            func_0x000107c5ee08(uVar16,uVar21,0);
            func_0x000107c6142c(uVar21);
            uVar22 = 0;
            if (uVar7 >> 0x3c < 0xf) {
              uVar22 = uVar16;
              func_0x000107c5ee20(uVar16,uVar7);
              func_0x0001000b44c0(uVar16,uVar7);
            }
            func_0x000107c5506c(puVar6);
            func_0x000107c61170(uVar22);
            uVar21 = uVar20;
            func_0x000107c5ee08(uVar13,uVar20,0);
            func_0x000107c6142c(uVar20);
            uVar22 = 0;
            if (uVar21 >> 0x3c < 0xf) {
              uVar22 = uVar13;
              func_0x000107c5ee20(uVar13,uVar21);
              func_0x0001000b44c0(uVar13,uVar21);
            }
            func_0x000107c5593c(puVar6);
            func_0x000107c61170(uVar22);
            uVar22 = uVar18;
            func_0x000107c5ee20(uVar18,uVar15);
            func_0x000107c579fc(puVar6);
            func_0x000107c61170(uVar22);
            if (*(long *)(lVar17 + _DAT_11305b1f0) < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1013eb944);
              (*pcVar3)();
            }
            func_0x000107c5a4e0(puVar6);
            uVar20 = 0;
            uVar21 = *(ulong *)(lVar19 + 0x10);
            puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
            do {
              puVar14 = (ulong *)(lVar19 + 0x28 + uVar20 * 0x10);
              do {
                if (uVar21 == uVar20) {
                  func_0x000107c6142c(lVar19);
                  puVar8 = PTR_PTR_1126b8c38;
                  func_0x000107c610f8();
                  func_0x000107c453e4();
                  puVar9 = puStack_70;
                  FUN_1013eb944(puStack_70);
                  func_0x000107c6142c(puStack_70);
                  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                  puVar11 = PTR___sypN_11034f1a8 + 8;
                  puVar10 = puVar9;
                  func_0x000107c5fc48(puVar9,puVar11);
                  func_0x000107c6142c(puVar9);
                  func_0x000107c45788(puVar5);
                  func_0x000107c61170(puVar10);
                  func_0x000107c55070(puVar8);
                  func_0x000107c61170(puVar5);
                  func_0x000107c59c5c(puVar8);
                  puVar9 = puVar8;
                  func_0x000107c41214();
                  func_0x000107c61180();
                  if (puVar9 != (undefined *)0x0) {
                    puVar5 = puVar9;
                    func_0x000107c5ee30();
                    func_0x0001000b44c0(uVar18,uVar15);
                    func_0x000107c61170(puVar9);
                    func_0x000107c615e8(lStack_68);
                    func_0x000107c61170(lVar4);
                    func_0x000107c61170(lVar17);
                    func_0x000107c61170(puVar8);
                    func_0x000107c61170(puVar6);
                    goto LAB_1013eb504;
                  }
                  func_0x0001000b44c0(uVar18,uVar15);
                  func_0x000107c615e8(lStack_68);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar17);
                  func_0x000107c61170(puVar8);
                  func_0x000107c61170(puVar6);
                  goto LAB_1013eb4fc;
                }
                if (*(ulong *)(lVar19 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1013eb940);
                  (*pcVar3)();
                }
                uVar20 = uVar20 + 1;
                uVar7 = puVar14[-1];
                uVar2 = *puVar14;
                func_0x000107c61434(uVar2);
                uVar12 = uVar2;
                func_0x000107c5ee08(uVar7,uVar2,0);
                func_0x000107c6142c(uVar2);
                puVar14 = puVar14 + 2;
              } while (0xe < uVar12 >> 0x3c);
              puVar11 = puStack_70;
              func_0x000107c61558();
              if (((ulong)puVar11 & 1) == 0) {
                plVar1 = (long *)(puStack_70 + 0x10);
                puStack_70 = (undefined *)0x0;
                FUN_100f23260(0,*plVar1 + 1,1);
              }
              uVar2 = *(ulong *)(puStack_70 + 0x10);
              if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar2) {
                puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_70 + 0x18));
                FUN_100f23260(puVar11,uVar2 + 1,1,puStack_70);
                puStack_70 = puVar11;
              }
              *(ulong *)(puStack_70 + 0x10) = uVar2 + 1;
              *(ulong *)(puStack_70 + uVar2 * 0x10 + 0x20) = uVar7;
              *(ulong *)(puStack_70 + uVar2 * 0x10 + 0x28) = uVar12;
            } while( true );
          }
          func_0x000107c61434(lVar19);
          func_0x000107c61174(lVar17);
          func_0x000107c61434(uVar20);
          FUN_100de78a0(uVar18,uVar15);
          func_0x000107c61170(lVar17);
          func_0x000107c6142c(lVar19);
          func_0x000107c6142c(uVar20);
          func_0x000107c615e8(lStack_68);
          func_0x000107c61170(lVar4);
          func_0x0001000b44c0(uVar18,uVar15);
          goto LAB_1013eb4fc;
        }
        func_0x000107c61434(lVar19);
        func_0x000107c6142c();
      }
      func_0x000107c615e8(lStack_68);
      func_0x000107c61170(lVar4);
    }
  }
LAB_1013eb4fc:
  puVar5 = (undefined *)0x0;
  puVar11 = (undefined *)0xf000000000000000;
LAB_1013eb504:
  auVar23._8_8_ = puVar11;
  auVar23._0_8_ = puVar5;
  return auVar23;
}



/* Entry: 1013eb944; end: 1013eba3f;  */

undefined * FUN_1013eb944(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,lVar4,0);
    puVar3 = PTR___s10Foundation4DataVN_110350ae0;
    puVar2 = PTR___sypN_11034f1a8;
    puVar6 = (undefined8 *)(param_1 + 0x28);
    puVar5 = puStack_58;
    do {
      uStack_88 = puVar6[-1];
      uStack_80 = *puVar6;
      func_0x00010006c00c();
      func_0x000107c6147c(auStack_78,&uStack_88,puVar3,puVar2 + 8,7);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puStack_58 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_100c077e4(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = puStack_58;
      puVar6 = puVar6 + 2;
      *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
      func_0x000100102924(auStack_78,puStack_58 + uVar1 * 0x20 + 0x20);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar5;
}



/* Entry: 1013eba40; end: 1013eba4b; -[_TtC15COSServicesImpl13COSDataSource fideliusClientInit] */

void FUN_1013eba40(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013eb428();
  func_0x000107c61170(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    func_0x000107c5ee20(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013eba4c; end: 1013ebb77;  */

void FUN_1013eba4c(undefined8 param_1,ulong param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*param_3)();
  func_0x000107c61170(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    func_0x000107c5ee20(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ebb78; end: 1013ebb83; -[_TtC15COSServicesImpl13COSDataSource predictedPhoneNumberCountryCode] */

void FUN_1013ebb78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*(code *)0x1013ebac4)();
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



/* Entry: 1013ebb84; end: 1013ebcab;  */

void FUN_1013ebb84(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*param_3)();
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



/* Entry: 1013ebcac; end: 1013ebcfb; -[_TtC15COSServicesImpl13COSDataSource userAgentString] */

void FUN_1013ebcac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0380;
  func_0x000107c61168();
  func_0x000107c5d8e4();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013ebcfc; end: 1013ebd0b; -[_TtC15COSServicesImpl13COSDataSource networkContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1013ebcfc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112d7bdd0);
}



/* Entry: 1013ebd0c; end: 1013ebd47; -[_TtC15COSServicesImpl13COSDataSource setClientNetworkRequestIdWithNetworkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ebd0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7bdd8);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1013ebd48; end: 1013ebd57; -[_TtC15COSServicesImpl13COSDataSource routeTag] */

void FUN_1013ebd48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112d7cf28,auStack_38,0,0);
  uVar1 = uRam0000000112d7cf30;
  uVar2 = uRam0000000112d7cf28;
  func_0x000107c61434(uRam0000000112d7cf30);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ebd58; end: 1013ebd67; -[_TtC15COSServicesImpl13COSDataSource tivRouteTag] */

void FUN_1013ebd58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112d7cf70,auStack_38,0,0);
  uVar1 = uRam0000000112d7cf78;
  uVar2 = uRam0000000112d7cf70;
  func_0x000107c61434(uRam0000000112d7cf78);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ebd68; end: 1013ebdcf;  */

void FUN_1013ebd68(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3,auStack_38,0,0);
  uVar2 = *param_3;
  uVar1 = *param_4;
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ebdd0; end: 1013ebe2b; -[_TtC15COSServicesImpl13COSDataSource init] */

void FUN_1013ebdd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSDataSource",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ebdfc);
  (*pcVar1)();
}



/* Entry: 1013ebe2c; end: 1013ebee7; -[_TtC15COSServicesImpl13COSDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ebe2c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7bd88));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7bd90));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7bd98));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7bda0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7bda8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7bdb0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7bdb8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7bdc0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7bdc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7bdd8 + 8))
  ;
  return;
}



/* Entry: 1013ebee8; end: 1013ebf07;  */

void FUN_1013ebee8(void)

{
  func_0x000107c61168(&PTR_PTR_1127d1890);
  return;
}



/* Entry: 1013ebf08; end: 1013ebf33;  */

void FUN_1013ebf08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = PTR_PTR_1126b8c40;
  func_0x000107c610f8(PTR_PTR_1126b8c40,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c54398(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61428(0x112d7cf28,auStack_58,0,0);
  uVar1 = uRam0000000112d7cf30;
  uVar5 = uRam0000000112d7cf28;
  func_0x000107c61434(uRam0000000112d7cf30);
  uVar7 = uVar1;
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c57f30(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c55f1c(puVar2);
  puVar3 = puVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010ef3ce00);
    func_0x000107c466bc(puVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61174(puVar3);
    puVar6 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar3);
    func_0x000107c43b70(uVar8);
    func_0x000107c61170(puVar2);
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    puVar6 = puVar4;
    func_0x000107c5ee20(puVar4,uVar7);
    func_0x00010006c090(puVar4,uVar7);
    func_0x000107c43b74(uVar8);
    puVar3 = puVar2;
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1013ebf34; end: 1013ebf37; -[_TtC15COSServicesImpl13COSDataSource deviceTokenId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ebf34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c5c198();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      goto LAB_1013ebc80;
    }
  }
  func_0x000107c61170(param_1);
  lVar2 = 0;
  param_2 = 0xe000000000000000;
LAB_1013ebc80:
  func_0x000107c5fadc(lVar2,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1013ebf38; end: 1013ebf3b; -[_TtC15COSServicesImpl13COSDataSource cofDeviceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ebf38(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c5c198();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      goto LAB_1013ebc80;
    }
  }
  func_0x000107c61170(param_1);
  lVar2 = 0;
  param_2 = 0xe000000000000000;
LAB_1013ebc80:
  func_0x000107c5fadc(lVar2,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1013ebf3c; end: 1013ec0ab;  */

undefined * FUN_1013ebf3c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c3fefc(puVar1);
    puVar5 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  else {
    puVar5 = &UNK_1103b0e90;
    func_0x000107c613fc(&UNK_1103b0e90,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar3 = &UNK_1103b12f0;
    func_0x000107c613fc(&UNK_1103b12f0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar5;
    *(undefined **)(puVar3 + 0x18) = puVar1;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    uStack_50 = 0x1013ef8ac;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100f1c768;
    puStack_58 = &UNK_1103b1308;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c61174(puVar1);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar5);
    func_0x000107c440d8(lVar2);
    func_0x000107c60bd0(ppuVar4);
    puVar5 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(lVar2);
  }
  return puVar5;
}



/* Entry: 1013ec0ac; end: 1013ed0cf;  */

void FUN_1013ec0ac(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  ppuVar6 = &puStack_b0;
  puVar7 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar7,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 != 0) {
      puVar1 = PTR_PTR_1126d0cd8;
      func_0x000107c61168();
      func_0x000107c615f0(param_1);
      func_0x000107c43be4();
      func_0x000107c61180();
      func_0x0001000d224c(&puStack_b0);
      puVar3 = puStack_b0;
      puVar2 = puStack_b0;
      func_0x000107c5d8ec();
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      puVar8 = puVar7;
      if (puVar2 == (undefined *)0x0) {
        puVar2 = (undefined *)0x0;
        func_0x000107c5faec(0);
        puVar8 = puVar7;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar7);
      }
      func_0x0001000d224c(&puStack_b0);
      puVar3 = puStack_b0;
      func_0x000107c50920();
      func_0x000107c61180();
      func_0x000107c615e8(puStack_b0);
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)0x0;
        func_0x000107c5faec(0);
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar8);
      }
      puVar4 = puVar1;
      func_0x000107c40954();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x0001000d224c(&uStack_80);
      uVar5 = uStack_80;
      func_0x000107c3fd30(uStack_80);
      func_0x000107c61180();
      func_0x000107c615e8(uStack_80);
      puVar3 = &UNK_1103b0e90;
      func_0x000107c613fc(&UNK_1103b0e90,0x18,7);
      func_0x000107c61644(puVar3 + 0x10,param_2);
      puVar2 = &UNK_1103b1340;
      func_0x000107c613fc(&UNK_1103b1340,0x30,7);
      *(undefined **)(puVar2 + 0x10) = puVar3;
      *(undefined8 *)(puVar2 + 0x18) = param_3;
      *(undefined8 *)(puVar2 + 0x20) = param_4;
      *(undefined **)(puVar2 + 0x28) = puVar4;
      uStack_90 = 0x1013ef8b8;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      uStack_a0 = 0x1010ffbc4;
      puStack_98 = &UNK_1103b1358;
      puStack_88 = puVar2;
      func_0x000107c60bc4(&puStack_b0);
      puVar3 = puStack_88;
      func_0x000107c61174(param_3);
      func_0x000107c61174(param_4);
      func_0x000107c615f0(puVar4);
      func_0x000107c61574(puVar3);
      func_0x000107c4db80(uVar5);
      func_0x000107c61574(param_2);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(puVar4);
      func_0x000107c615e8(param_1);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(uVar5);
      return;
    }
    func_0x000107c61574(param_2);
  }
  func_0x000107c3fefc(param_3);
  return;
}



/* Entry: 1013ed0d0; end: 1013ed127; -[_TtC15COSServicesImpl7COSImpl getResumedChallengeDataWithLocalPersistedChallengeData:] */

void FUN_1013ed0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1013ebf3c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013ed128; end: 1013ee44f;  */

void FUN_1013ed128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,byte param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uStack_180;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [80];
  undefined1 auStack_b8 [88];
  
  uVar10 = *unaff_x20;
  lVar1 = unaff_x20[0xe];
  uVar9 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = unaff_x20[2];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_1;
      func_0x000107c41214();
      func_0x000107c61180();
      if (lVar2 == 0) {
        lVar2 = 0x112d4b5e8;
        func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
        puVar11 = auStack_108;
        func_0x000107c61534();
        *(undefined8 *)(lVar2 + 0x18) = 2;
        *(undefined8 *)(lVar2 + 0x10) = 1;
        lVar6 = *(long *)PTR__NSLocalizedDescriptionKey_110345568;
        func_0x000107c5faec();
        *(long *)(lVar2 + 0x20) = lVar6;
        *(undefined1 **)(lVar2 + 0x28) = puVar11;
        func_0x000105219840();
        func_0x000107c61180();
        if (lVar6 == 0) {
          *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
LAB_1013ed660:
          *(undefined8 *)(lVar2 + 0x30) = 0;
          puVar11 = (undefined1 *)0xe000000000000000;
        }
        else {
          lVar7 = lVar6;
          func_0x000107c5faec();
          func_0x000107c61170(lVar6);
          *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
          if (puVar11 == (undefined1 *)0x0) goto LAB_1013ed660;
          *(long *)(lVar2 + 0x30) = lVar7;
        }
        *(undefined1 **)(lVar2 + 0x38) = puVar11;
        lVar6 = lVar2;
        func_0x000100214a84(lVar2);
        func_0x000107c61588(lVar2);
        FUN_100f15a0c((long *)(lVar2 + 0x20));
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
        uVar9 = 0xd000000000000010;
        func_0x000107c5fadc(0xd000000000000010,0x800000010ef3ce40);
        lVar2 = lVar6;
        func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(lVar6);
        func_0x000107c466bc(puVar4);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar2);
        if (param_16 != 0) {
          func_0x000107c61174(puVar4);
          puVar5 = puVar4;
          func_0x000107c5ed2c();
          func_0x000107c61170(puVar4);
          func_0x000107c3ab54(param_16);
          func_0x000107c61170(puVar5);
        }
        func_0x000107c61170(puVar4);
      }
      else {
        lVar6 = lVar2;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar2);
        func_0x0001000d224c(&puStack_138);
        puVar4 = puStack_138;
        func_0x000107c5fadc(param_4,param_5);
        func_0x000107c53470(puVar4);
        func_0x000107c615e8(puVar4);
        func_0x000107c61170(param_4);
        uStack_180 = param_8;
        if (unaff_x20[4] != 0) {
          func_0x0001000d224c(&puStack_138);
          puVar4 = puStack_138;
          uVar12 = *(undefined8 *)(puStack_138 + 0x38);
          *(undefined8 *)(puStack_138 + 0x30) = param_6;
          *(undefined8 *)(puStack_138 + 0x38) = param_7;
          func_0x000107c61434(param_7);
          func_0x000107c61574(puVar4);
          func_0x000107c6142c(uVar12);
          func_0x0001000d224c(&puStack_138);
          uVar12 = *(undefined8 *)(puStack_138 + 0x40);
          *(undefined8 *)(puStack_138 + 0x40) = param_8;
          func_0x000107c61174();
          func_0x000107c61574(puStack_138);
          func_0x000107c61170(uVar12);
        }
        lVar2 = param_1;
        func_0x000107c5d8b0();
        puVar4 = &UNK_1103b0e40;
        func_0x000107c613fc(&UNK_1103b0e40,0xb0,7);
        *(undefined8 **)(puVar4 + 0x10) = unaff_x20;
        puVar4[0x18] = (char)lVar2;
        *(long *)(puVar4 + 0x20) = param_1;
        *(long *)(puVar4 + 0x28) = lVar3;
        *(long *)(puVar4 + 0x30) = lVar6;
        *(undefined8 *)(puVar4 + 0x38) = uVar9;
        *(undefined8 *)(puVar4 + 0x40) = param_2;
        *(undefined8 *)(puVar4 + 0x48) = param_3;
        *(undefined8 *)(puVar4 + 0x50) = param_6;
        *(undefined8 *)(puVar4 + 0x58) = param_7;
        *(undefined8 *)(puVar4 + 0x60) = param_8;
        puVar4[0x68] = param_10 & 1;
        *(undefined8 *)(puVar4 + 0x70) = param_12;
        *(undefined8 *)(puVar4 + 0x78) = param_13;
        *(undefined8 *)(puVar4 + 0x80) = param_14;
        *(undefined8 *)(puVar4 + 0x88) = param_15;
        *(undefined8 *)(puVar4 + 0x90) = param_9;
        *(long *)(puVar4 + 0x98) = param_16;
        *(long *)(puVar4 + 0xa0) = lVar1;
        *(undefined8 *)(puVar4 + 0xa8) = uVar10;
        uStack_118 = 0x1013ef66c;
        puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_130 = 0x42000000;
        puStack_128 = &UNK_1000f6b44;
        puStack_120 = &UNK_1103b0e58;
        ppuVar8 = &puStack_138;
        puStack_110 = puVar4;
        func_0x000107c60bc4(ppuVar8);
        puVar4 = puStack_110;
        func_0x000107c61434(param_7);
        func_0x000107c61174(uStack_180);
        func_0x000107c6157c();
        func_0x000107c61174(param_1);
        func_0x000107c615f0(lVar3);
        func_0x00010006c00c(lVar6,uVar9);
        func_0x00010006c00c(param_2,param_3);
        func_0x000107c615f0(param_16);
        func_0x000107c615f0(lVar1);
        func_0x000107c61434(param_13);
        func_0x000107c61434(param_15);
        func_0x000107c61174(param_9);
        func_0x000107c61574(puVar4);
        func_0x0001000d76cc("COS Answer",ppuVar8);
        func_0x000107c60bd0(ppuVar8);
        func_0x00010006c090(lVar6,uVar9);
      }
      func_0x000107c615e8(lVar1);
      lVar1 = lVar3;
      goto LAB_1013ed758;
    }
  }
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar11 = auStack_b8;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  lVar3 = *(long *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(long *)(lVar2 + 0x20) = lVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar11;
  func_0x000105219840();
  func_0x000107c61180();
  if (lVar3 == 0) {
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
LAB_1013ed35c:
    *(undefined8 *)(lVar2 + 0x30) = 0;
    puVar11 = (undefined1 *)0xe000000000000000;
  }
  else {
    lVar6 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    if (puVar11 == (undefined1 *)0x0) goto LAB_1013ed35c;
    *(long *)(lVar2 + 0x30) = lVar6;
  }
  *(undefined1 **)(lVar2 + 0x38) = puVar11;
  lVar3 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  FUN_100f15a0c((long *)(lVar2 + 0x20));
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef3ce40);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  func_0x000107c466bc(puVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar2);
  if (param_16 != 0) {
    func_0x000107c61174(puVar4);
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar4);
    func_0x000107c3ab54(param_16);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar4);
LAB_1013ed758:
  func_0x000107c615e8(lVar1);
  return;
}



/* Entry: 1013ee450; end: 1013ee4df;  */

ulong FUN_1013ee450(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar1 = 0x100000000;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(param_1);
    func_0x0001000d224c(&uStack_40);
    func_0x000107c61574(uVar2);
    uVar1 = uStack_40;
    func_0x000107c4d5b0(uStack_40);
    func_0x000107c615e8(uStack_40);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



/* Entry: 1013ee4e0; end: 1013ee6b3;  */

void FUN_1013ee4e0(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    (*param_1)();
  }
  else {
    lVar3 = *(long *)(param_3 + 0x88);
    if (lVar3 == 0) {
      (*param_1)();
      func_0x000107c61574(param_3);
    }
    else {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_1103b1038;
      ppuVar2 = &puStack_88;
      pcStack_68 = param_1;
      uStack_60 = param_2;
      func_0x000107c60bc4(ppuVar2);
      uVar1 = uStack_60;
      func_0x000107c615f0(lVar3);
      func_0x000107c6157c(param_2);
      func_0x000107c61574(uVar1);
      func_0x000107c41864(lVar3);
      func_0x000107c61574(param_3);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1013ee6b4; end: 1013ee81b;  */

void FUN_1013ee6b4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    puVar2 = &UNK_1103b12a0;
    func_0x000107c613fc(&UNK_1103b12a0,0x20,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 == 0) {
      if (param_2 == 0) {
        func_0x000107c61174(param_3);
      }
      else {
        func_0x000107c61174(param_3);
        func_0x000107c615f0(param_2);
        func_0x000107c3ab50();
      }
      func_0x000107c61574(puVar2);
      func_0x000107c61574(param_1);
    }
    else {
      uStack_78 = 0x1013ef898;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000b0c7c;
      puStack_80 = &UNK_1103b12b8;
      ppuVar3 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_70;
      func_0x000107c615f0(param_2);
      func_0x000107c615f0(lVar4);
      func_0x000107c6157c(puVar2);
      func_0x000107c61174(param_3);
      func_0x000107c61574(puVar1);
      func_0x000107c41864(lVar4);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(param_1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1013ee81c; end: 1013ee8ff;  */

void FUN_1013ee81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1103b1110;
  func_0x000107c613fc(&UNK_1103b1110,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  uStack_50 = 0x1013ef7f0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103b1128;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c614b0(param_1);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc("COS Answer failure",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1013ee900; end: 1013eecbf;  */

void FUN_1013ee900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    puVar2 = &UNK_1103b1160;
    func_0x000107c613fc(&UNK_1103b1160,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 == 0) {
      func_0x000107c614b0(param_4);
      func_0x000107c615f0(param_3);
      func_0x000107c61174(param_2);
      func_0x0001013eea74();
      func_0x000107c61574(puVar2);
      func_0x000107c61574(param_1);
    }
    else {
      uStack_78 = 0x1013ef7fc;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000b0c7c;
      puStack_80 = &UNK_1103b1178;
      ppuVar3 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_70;
      func_0x000107c614b0(param_4);
      func_0x000107c615f0(param_3);
      func_0x000107c61174(param_2);
      func_0x000107c615f0(lVar4);
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c41864(lVar4);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(param_1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1013eecc0; end: 1013eed87;  */

void FUN_1013eecc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1103b1200;
  func_0x000107c613fc(&UNK_1103b1200,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  pcStack_50 = FUN_1013ef884;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_1103b1218;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f0(param_3);
  func_0x000107c614b0(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1013eed88; end: 1013eedc7;  */

void FUN_1013eed88(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x000107c5ed2c(param_2);
    func_0x000107c3ab54(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1013eedc8; end: 1013eee87;  */

void FUN_1013eedc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1103b1070;
  func_0x000107c613fc(&UNK_1103b1070,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  uStack_40 = 0x1013ef7d8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103b1088;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc("COS Abandoned",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1013eee88; end: 1013eefc3;  */

void FUN_1013eee88(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    puVar2 = &UNK_1103b10c0;
    func_0x000107c613fc(&UNK_1103b10c0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_2;
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 == 0) {
      if (param_2 != 0) {
        func_0x000107c615f0(param_2);
        func_0x000107c3ab4c();
      }
      func_0x000107c61574();
      func_0x000107c61574(param_1);
    }
    else {
      uStack_68 = 0x1013ef7e0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_1103b10d8;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_60;
      func_0x000107c615f0(param_2);
      func_0x000107c615f0(lVar4);
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c41864(lVar4);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(param_1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1013eefc4; end: 1013ef09f;  */

void FUN_1013eefc4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 auStack_60 [3];
  undefined1 auStack_48 [24];
  
  if (param_2 != 0) {
    func_0x000107c4bd2c(param_2,param_2,param_1);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x50);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_3);
    func_0x0001000d224c(auStack_60);
    func_0x000107c61574(uVar1);
    func_0x000107c4d5b0(auStack_60[0]);
    func_0x000107c615e8(auStack_60[0]);
    func_0x000107c61428(param_4 + 0x10,auStack_60,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      func_0x000107c4bd30();
      func_0x000107c615e8(param_4);
    }
  }
  return;
}



/* Entry: 1013ef0a0; end: 1013ef18f;  */

void FUN_1013ef0a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 auStack_70 [3];
  undefined1 auStack_58 [24];
  
  if (param_3 != 0) {
    func_0x000107c4bd24(param_3,param_2,param_1,param_2);
  }
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x50);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_4);
    func_0x0001000d224c(auStack_70);
    func_0x000107c61574(uVar1);
    func_0x000107c4d5b0(auStack_70[0]);
    func_0x000107c615e8(auStack_70[0]);
    func_0x000107c61428(param_5 + 0x10,auStack_70,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61618();
    if (param_5 != 0) {
      func_0x000107c4bd28();
      func_0x000107c615e8(param_5);
    }
  }
  return;
}



/* Entry: 1013ef190; end: 1013ef2ab;  */

void FUN_1013ef190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [24];
  
  if (param_6 != 0) {
    func_0x000107c4bd34(param_6,param_2,param_1,param_2,param_3,param_4,param_5);
  }
  func_0x000107c61428(param_7 + 0x10,auStack_68,0,0);
  param_7 = param_7 + 0x10;
  func_0x000107c61648();
  if (param_7 != 0) {
    uVar1 = *(undefined8 *)(param_7 + 0x50);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_7);
    func_0x0001000d224c(auStack_80);
    func_0x000107c61574(uVar1);
    func_0x000107c4d5b0(auStack_80[0]);
    func_0x000107c615e8(auStack_80[0]);
    func_0x000107c61428(param_8 + 0x10,auStack_80,0,0);
    param_8 = param_8 + 0x10;
    func_0x000107c61618();
    if (param_8 != 0) {
      func_0x000107c4bd38();
      func_0x000107c615e8(param_8);
    }
  }
  return;
}



/* Entry: 1013ef2ac; end: 1013ef363;  */

void FUN_1013ef2ac(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (param_1 == 0x11) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000107c4bd40();
      func_0x000107c615e8(param_2);
    }
  }
  return;
}



/* Entry: 1013ef364; end: 1013ef58f; -[_TtC15COSServicesImpl7COSImpl answerChallenge:authSessionPayload:clientNetworkId:email:phone:uiContainer:shouldAllowAbandon:headerTitle:headerSubtitle:cosDelegate:] */

void FUN_1013ef364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,long param_11,long param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  
  func_0x000107c61174();
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_13);
  func_0x000107c5ee30(param_4);
  uVar3 = param_2;
  func_0x000107c61170(uVar2);
  uVar2 = param_5;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c61170(param_5);
  if (param_6 == 0) {
    uStack_a0 = 0;
    uVar1 = 0;
    uVar5 = uVar4;
  }
  else {
    uStack_a0 = param_6;
    func_0x000107c5faec();
    uVar5 = uVar4;
    func_0x000107c61170(param_6);
    uVar1 = uVar4;
  }
  if (param_11 == 0) {
    uVar4 = 0;
    uVar6 = uVar5;
  }
  else {
    func_0x000107c5faec();
    uVar6 = uVar5;
    func_0x000107c61170(param_11);
    uVar4 = uVar5;
  }
  if (param_12 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(param_12);
  }
  FUN_1013ed128(param_3,param_4,param_2,uVar2,uVar3,uStack_a0,uVar1,param_7,param_8,param_9);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar1);
  func_0x00010006c090(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c615e8(param_13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1013ef590; end: 1013ef6cb;  */

void FUN_1013ef590(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1013ef6cc; end: 1013ef71b;  */

void FUN_1013ef6cc(long param_1,long param_2)

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



/* Entry: 1013ef71c; end: 1013ef74f;  */

void FUN_1013ef71c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013ef750; end: 1013ef797;  */

void FUN_1013ef750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c4bd34(*(long *)(unaff_x20 + 0x10),param_2,param_1,param_2,param_3,param_4,param_5)
    ;
  }
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar1);
    func_0x0001000d224c(auStack_80);
    func_0x000107c61574(uVar3);
    func_0x000107c4d5b0(auStack_80[0]);
    func_0x000107c615e8(auStack_80[0]);
    func_0x000107c61428(lVar2 + 0x10,auStack_80,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c4bd38();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1013ef798; end: 1013ef7cb;  */

void FUN_1013ef798(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013ef7cc; end: 1013ef807;  */

void FUN_1013ef7cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar6 = &puStack_70;
  puVar5 = &UNK_1103b2838;
  func_0x000107c613fc(&UNK_1103b2838,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  pcStack_50 = FUN_1013ff21c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103b2850;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c615f0(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar5);
  func_0x0001000d76cc("COS Abandoned",ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 1013ef808; end: 1013ef83b;  */

void FUN_1013ef808(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013ef83c; end: 1013ef847;  */

void FUN_1013ef83c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_70;
  puVar3 = &UNK_1103b1200;
  func_0x000107c613fc(&UNK_1103b1200,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  pcStack_50 = FUN_1013ef884;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_1103b1218;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c615f0(uVar2);
  func_0x000107c614b0(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c41864(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1013ef848; end: 1013ef883;  */

void FUN_1013ef848(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013ef884; end: 1013ef8cb;  */

void FUN_1013ef884(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    func_0x000107c5ed2c(uVar2);
    func_0x000107c3ab54(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1013ef8cc; end: 1013ef90b;  */

void FUN_1013ef8cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013ef90c; end: 1013ef96b;  */

void FUN_1013ef90c(long param_1,long param_2)

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



/* Entry: 1013ef96c; end: 1013ef9bf;  */

void FUN_1013ef96c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1013ef9c0; end: 1013efc27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013ef9c0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (*(long *)(unaff_x20 + _DAT_112d7bf48) != 0) {
    func_0x0001000d224c(&puStack_70);
    puVar5 = puStack_70;
    if (puStack_70 != (undefined *)0x0) {
      puVar2 = puStack_70;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) {
        param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
        uVar6 = 0xd00000000000001e;
        func_0x000107c5fadc(0xd00000000000001e,0x800000010ef3cfb0);
        func_0x000107c466bc(param_1);
        func_0x000107c61170(uVar6);
        func_0x000107c61174(param_1);
        puVar2 = param_1;
        func_0x000107c5ed2c();
        func_0x000107c61170(param_1);
        func_0x000107c43b70(puVar1);
        func_0x000107c61170(puVar2);
        func_0x000107c615e8(puVar5);
      }
      else {
        if (*(char *)(unaff_x20 + _DAT_112d7bf58) == '\x01') {
          func_0x000107c43dbc(puVar2);
        }
        func_0x000107c5ee20(param_1,param_2);
        puVar3 = &UNK_1103b13e0;
        func_0x000107c613fc(&UNK_1103b13e0,0x18,7);
        *(undefined **)(puVar3 + 0x10) = puVar1;
        pcStack_50 = FUN_1013effc4;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        pcStack_60 = FUN_1013efd24;
        puStack_58 = &UNK_1103b13f8;
        puStack_48 = puVar3;
        func_0x000107c60bc4(&puStack_70);
        puVar3 = puStack_48;
        func_0x000107c61174(puVar1);
        func_0x000107c61574(puVar3);
        func_0x000107c43d98(puVar2);
        func_0x000107c615e8(puVar5);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c615e8(puVar2);
      }
      goto LAB_1013efb78;
    }
  }
  param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar6 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef3cfb0);
  func_0x000107c466bc(param_1);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(param_1);
  puVar5 = param_1;
  func_0x000107c5ed2c();
  func_0x000107c61170(param_1);
  func_0x000107c43b70(puVar1);
  func_0x000107c61170(puVar5);
LAB_1013efb78:
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1013efc28; end: 1013efd23;  */

/* WARNING: Possible PIC construction at 0x0001013efc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013efcb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013efcc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013efd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013efcc8) */
/* WARNING: Removing unreachable block (ram,0x0001013efcb4) */
/* WARNING: Removing unreachable block (ram,0x0001013efc98) */
/* WARNING: Removing unreachable block (ram,0x0001013efd0c) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */

void FUN_1013efc28(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (param_2 >> 0x3c < 0xf) {
    func_0x00010006c00c();
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c43b74(param_3);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    param_1 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef3cfb0);
    func_0x000107c466bc(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013efd24; end: 1013efdab;  */

void FUN_1013efd24(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    func_0x000107c6157c(uVar2);
    lVar4 = -0x1000000000000000;
  }
  else {
    lVar4 = param_2;
    func_0x000107c6157c(uVar2);
    lVar3 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    func_0x000107c61170(lVar3);
  }
  (*pcVar1)(param_2,lVar4);
  func_0x0001000b44c0(param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1013efdac; end: 1013efe97; -[_TtC15COSServicesImpl20COSIntegrityProvider appAttestWithNonce:] */

void FUN_1013efdac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  FUN_1013ef9c0(param_3,param_2);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013efe98; end: 1013eff0f; -[_TtC15COSServicesImpl20COSIntegrityProvider deviceCheckWithNonce:] */

void FUN_1013efe98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar1);
  FUN_1013effe8();
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013eff10; end: 1013eff6b; -[_TtC15COSServicesImpl20COSIntegrityProvider init] */

void FUN_1013eff10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSIntegrityProvider",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013eff3c);
  (*pcVar1)();
}



/* Entry: 1013eff6c; end: 1013effa3; -[_TtC15COSServicesImpl20COSIntegrityProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013eff88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013eff8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013eff6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7bf48));
  return;
}



/* Entry: 1013effa4; end: 1013effc3;  */

void FUN_1013effa4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d1a48);
  return;
}



/* Entry: 1013effc4; end: 1013effe7;  */

/* WARNING: Possible PIC construction at 0x0001013efc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013efcb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013efcc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013efd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013efcc8) */
/* WARNING: Removing unreachable block (ram,0x0001013efcb4) */
/* WARNING: Removing unreachable block (ram,0x0001013efc98) */
/* WARNING: Removing unreachable block (ram,0x0001013efd0c) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */

void FUN_1013effc4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x00010006c00c();
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c43b74(uVar2);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    param_1 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef3cfb0);
    func_0x000107c466bc(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013effe8; end: 1013f015f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013effe8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if ((*(long *)(unaff_x20 + _DAT_112d7bf50) != 0) &&
     (func_0x0001000d224c(&puStack_60), puVar3 = puStack_60, puStack_60 != (undefined *)0x0)) {
    puVar5 = &UNK_1103b1430;
    func_0x000107c613fc(&UNK_1103b1430,0x18,7);
    *(undefined **)(puVar5 + 0x10) = puVar1;
    pcStack_40 = FUN_1013f0160;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1013ef96c;
    puStack_48 = &UNK_1103b1448;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    puVar5 = puStack_38;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar5);
    func_0x000107c43080(puVar3);
    func_0x000107c615e8(puVar3);
    func_0x000107c60bd0(ppuVar2);
    return puVar1;
  }
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef3cfb0);
  func_0x000107c466bc(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  puVar5 = puVar3;
  func_0x000107c5ed2c();
  func_0x000107c61170(puVar3);
  func_0x000107c43b70(puVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 1013f0160; end: 1013f016f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1013f0160(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61434(param_2);
  FUN_100e35e30(param_1);
  uVar1 = param_1;
  func_0x000107c5ee20();
  func_0x000107c43b74(uVar2);
  func_0x000107c61170(uVar1);
  uVar3 = (uint)(param_2 >> 0x3e);
  if (uVar3 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1013f0170; end: 1013f03ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1013f0170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112d7bf88;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112d7bf90;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d7bf98;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d7bfa0;
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d7bfa8;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d7bfb0;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d7bfb8;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d7bfc0;
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d7bfc8;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112d7bfd0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5af90(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  FUN_1013f03ac();
  func_0x000107c3d8b8(*(undefined8 *)(puVar4 + _DAT_112d7bfa0));
  func_0x000107c3d8b8(*(undefined8 *)(puVar4 + _DAT_112d7bfc0));
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 1013f03ac; end: 1013f108b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f03ac(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4030000000000000,puVar4);
  func_0x000107c61174();
  func_0x000107c5a050();
  uVar20 = *(ulong *)(unaff_x20 + _DAT_112d7bf98);
  func_0x000107c52b2c(uVar20);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c3d5b4(uVar20);
  uVar6 = uVar20;
  func_0x000107c3d5b4();
  FUN_10140e1bc();
  func_0x000107c61534();
  *(undefined8 *)(uVar6 + 0x18) = 7;
  *(undefined8 *)(uVar6 + 0x10) = 3;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfa8);
  *(undefined8 *)(uVar6 + 0x20) = uVar7;
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfb0);
  *(undefined8 *)(uVar6 + 0x28) = uVar16;
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfb8);
  *(undefined8 *)(uVar6 + 0x30) = uVar18;
  uVar19 = uVar6 & 0xc000000000000001;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  if (uVar19 == 0) {
    uVar8 = uVar7;
    func_0x000107c61174(uVar7);
  }
  else {
    uVar8 = 0;
    FUN_1013e410c(0,uVar6);
  }
  func_0x000107c56ba8();
  func_0x000107c5a050(uVar8);
  func_0x000107c61170(uVar8);
  if (uVar19 == 0) {
    if (*(ulong *)(uVar6 + 0x10) < 2) goto LAB_1013f0f68;
    uVar8 = *(undefined8 *)(uVar6 + 0x28);
    func_0x000107c61174(uVar8);
  }
  else {
    uVar8 = 1;
    FUN_1013e410c(1,uVar6);
  }
  func_0x000107c56ba8();
  func_0x000107c5a050(uVar8);
  func_0x000107c61170(uVar8);
  if (uVar19 == 0) {
    if (*(ulong *)(uVar6 + 0x10) < 3) {
LAB_1013f0f68:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f0f6c);
      (*pcVar1)();
    }
    uVar8 = *(undefined8 *)(uVar6 + 0x30);
    func_0x000107c61174(uVar8);
  }
  else {
    uVar8 = 2;
    FUN_1013e410c(2,uVar6);
  }
  func_0x000107c56ba8();
  func_0x000107c5a050(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61588(uVar6);
  uVar17 = *(undefined8 *)(uVar6 + 0x10);
  uVar8 = 0;
  FUN_1013f1d58(0,0x112d7b960,&PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c61408((undefined8 *)(uVar6 + 0x20),uVar17,uVar8);
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  puVar10 = puVar9;
  func_0x000107c4eca4();
  func_0x000107c61180();
  func_0x000107c54adc(uVar7);
  func_0x000107c61170(puVar10);
  puVar10 = puVar9;
  func_0x000107c4eca4(puVar9);
  func_0x000107c61180();
  func_0x000107c54adc(uVar16);
  func_0x000107c61170(puVar10);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar11 = puVar10;
  func_0x000107c51b24();
  func_0x000107c61180();
  func_0x000107c59c78(uVar16);
  func_0x000107c61170(puVar11);
  func_0x000107c4eca4(puVar9);
  func_0x000107c61180();
  func_0x000107c54adc(uVar18);
  func_0x000107c61170(puVar9);
  func_0x000107c5c630(puVar10);
  func_0x000107c61180();
  func_0x000107c59c78(uVar18);
  func_0x000107c61170(puVar10);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d7bf90);
  func_0x000107c52b2c(uVar17);
  func_0x000107c59594(0x4028000000000000,uVar17);
  func_0x000107c5a050(uVar17);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfc8);
  func_0x000107c52b2c(uVar8);
  func_0x000107c59594(0x4020000000000000,uVar8);
  func_0x000107c5a050(uVar8);
  uVar19 = *(ulong *)(unaff_x20 + _DAT_112d7bfc0);
  uVar6 = uVar19;
  FUN_1013f1ad4();
  func_0x0001008479c8();
  func_0x000107c61534();
  *(undefined8 *)(uVar6 + 0x18) = 0xf;
  *(undefined8 *)(uVar6 + 0x10) = 7;
  *(ulong *)(uVar6 + 0x20) = uVar20;
  *(undefined8 *)(uVar6 + 0x28) = uVar7;
  *(undefined8 *)(uVar6 + 0x30) = uVar16;
  *(undefined8 *)(uVar6 + 0x38) = uVar18;
  *(undefined8 *)(uVar6 + 0x40) = uVar17;
  *(ulong *)(uVar6 + 0x48) = uVar19;
  *(undefined8 *)(uVar6 + 0x50) = uVar8;
  func_0x000107c61174(uVar20);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  if ((uVar6 & 0xc000000000000001) == 0) {
    func_0x000107c61174(uVar20);
    func_0x000107c3d5b4(puVar4);
    func_0x000107c61170(uVar20);
    if (1 < *(ulong *)(uVar6 + 0x10)) {
      uVar7 = *(undefined8 *)(uVar6 + 0x28);
      func_0x000107c61174(uVar7);
      func_0x000107c3d5b4(puVar4);
      func_0x000107c61170(uVar7);
      if (2 < *(ulong *)(uVar6 + 0x10)) {
        uVar7 = *(undefined8 *)(uVar6 + 0x30);
        func_0x000107c61174(uVar7);
        func_0x000107c3d5b4(puVar4);
        func_0x000107c61170(uVar7);
        if (3 < *(ulong *)(uVar6 + 0x10)) {
          uVar7 = *(undefined8 *)(uVar6 + 0x38);
          func_0x000107c61174(uVar7);
          func_0x000107c3d5b4(puVar4);
          func_0x000107c61170(uVar7);
          if (4 < *(ulong *)(uVar6 + 0x10)) {
            uVar7 = *(undefined8 *)(uVar6 + 0x40);
            func_0x000107c61174(uVar7);
            func_0x000107c3d5b4(puVar4);
            func_0x000107c61170(uVar7);
            if (5 < *(ulong *)(uVar6 + 0x10)) {
              uVar7 = *(undefined8 *)(uVar6 + 0x48);
              func_0x000107c61174(uVar7);
              func_0x000107c3d5b4(puVar4);
              func_0x000107c61170(uVar7);
              if (6 < *(ulong *)(uVar6 + 0x10)) {
                uVar7 = *(undefined8 *)(uVar6 + 0x50);
                func_0x000107c61174(uVar7);
                goto LAB_1013f08f8;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f0f68);
    (*pcVar1)();
  }
  uVar7 = 0;
  func_0x000100f040d0(0,uVar6);
  func_0x000107c3d5b4(puVar4);
  func_0x000107c61170(uVar7);
  uVar7 = 1;
  func_0x000100f040d0(1,uVar6);
  func_0x000107c3d5b4(puVar4);
  func_0x000107c61170(uVar7);
  uVar7 = 2;
  func_0x000100f040d0(2,uVar6);
  func_0x000107c3d5b4(puVar4);
  func_0x000107c61170(uVar7);
  uVar7 = 3;
  func_0x000100f040d0(3,uVar6);
  func_0x000107c3d5b4(puVar4);
  func_0x000107c61170(uVar7);
  uVar7 = 4;
  func_0x000100f040d0(4,uVar6);
  func_0x000107c3d5b4(puVar4);
  func_0x000107c61170(uVar7);
  uVar7 = 5;
  func_0x000100f040d0(5,uVar6);
  func_0x000107c3d5b4(puVar4);
  func_0x000107c61170(uVar7);
  uVar7 = 6;
  func_0x000100f040d0(6,uVar6);
LAB_1013f08f8:
  func_0x000107c3d5b4(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61588(uVar6);
  uVar16 = *(undefined8 *)(uVar6 + 0x10);
  uVar7 = 0;
  FUN_1013f1d58(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61408((ulong *)(uVar6 + 0x20),uVar16,uVar7);
  func_0x000107c3d89c();
  func_0x000107c3d89c(puVar2);
  func_0x000107c3d89c(puVar3);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar10 = puVar9;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar10 + 0x18) = 0x1d;
  *(undefined8 *)(puVar10 + 0x10) = 0xe;
  puVar11 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c515ac();
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar13);
  *(undefined **)(puVar10 + 0x20) = puVar14;
  puVar11 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar12);
  *(undefined **)(puVar10 + 0x28) = puVar14;
  puVar11 = puVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar12);
  *(undefined **)(puVar10 + 0x30) = puVar14;
  puVar11 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(unaff_x20);
  *(undefined **)(puVar10 + 0x38) = puVar14;
  puVar11 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar14 = puVar2;
  func_0x000107c40478(puVar2);
  func_0x000107c61180();
  puVar15 = puVar14;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar15);
  *(undefined **)(puVar10 + 0x40) = puVar14;
  puVar11 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar14 = puVar2;
  func_0x000107c40478(puVar2);
  func_0x000107c61180();
  puVar15 = puVar14;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar15);
  *(undefined **)(puVar10 + 0x48) = puVar14;
  puVar11 = puVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar14 = puVar2;
  func_0x000107c40478(puVar2);
  func_0x000107c61180();
  puVar15 = puVar14;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar15);
  *(undefined **)(puVar10 + 0x50) = puVar14;
  puVar11 = puVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar14 = puVar2;
  func_0x000107c40478(puVar2);
  func_0x000107c61180();
  puVar15 = puVar14;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar15);
  *(undefined **)(puVar10 + 0x58) = puVar14;
  puVar11 = puVar3;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar14 = puVar2;
  func_0x000107c438ec(puVar2);
  func_0x000107c61180();
  puVar15 = puVar14;
  func_0x000107c5e308();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar15);
  *(undefined **)(puVar10 + 0x60) = puVar14;
  puVar11 = puVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar14 = puVar3;
  func_0x000107c5cbe4(puVar3);
  func_0x000107c61180();
  puVar15 = puVar11;
  func_0x000107c40284(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar14);
  *(undefined **)(puVar10 + 0x68) = puVar15;
  puVar11 = puVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar14 = puVar3;
  func_0x000107c4acb0(puVar3);
  func_0x000107c61180();
  puVar15 = puVar11;
  func_0x000107c40284(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar14);
  *(undefined **)(puVar10 + 0x70) = puVar15;
  puVar11 = puVar4;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar14 = puVar3;
  func_0x000107c5ce8c(puVar3);
  func_0x000107c61180();
  puVar15 = puVar11;
  func_0x000107c40284(0xc038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar14);
  *(undefined **)(puVar10 + 0x78) = puVar15;
  puVar11 = puVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar14 = puVar3;
  func_0x000107c3ec1c(puVar3);
  func_0x000107c61180();
  puVar15 = puVar11;
  func_0x000107c402a8(0xc038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar14);
  *(undefined **)(puVar10 + 0x80) = puVar15;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar6 = uVar19;
  func_0x000107c40290(0x4048000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar19);
  *(ulong *)(puVar10 + 0x88) = uVar6;
  uVar7 = 0;
  FUN_1013f1d58(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar11 = puVar10;
  func_0x000107c5fc48(puVar10,uVar7);
  func_0x000107c61574(puVar10);
  func_0x000107c3d048(puVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar11);
  return;
}



/* Entry: 1013f108c; end: 1013f10ab; -[_TtC15COSServicesImpl30COSNativeChallengeScaffoldView initWithFrame:] */

void FUN_1013f108c(void)

{
  FUN_1013f0170();
  return;
}



/* Entry: 1013f10ac; end: 1013f10d3; -[_TtC15COSServicesImpl30COSNativeChallengeScaffoldView initWithCoder:] */

void FUN_1013f10ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1013f1be4();
  return;
}



/* Entry: 1013f10d4; end: 1013f135b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f10d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfa0);
  lVar14 = param_1[1];
  if (lVar14 == 0) {
    func_0x000107c59e1c(uVar15,param_2,0,0);
    func_0x000107c550d8(uVar15);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d7bf98);
  }
  else {
    uVar16 = *param_1;
    func_0x000107c61438(lVar14,2);
    func_0x000107c5fadc(uVar16,lVar14);
    func_0x000107c59e1c(uVar15);
    func_0x000107c6142c(lVar14);
    func_0x000107c61170(uVar16);
    func_0x000107c550d8(uVar15);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d7bf98);
    func_0x000107c6142c(lVar14);
  }
  func_0x000107c550d8(uVar15);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfa8);
  if (param_1[3] == 0) {
    func_0x000107c59c6c(uVar15);
  }
  else {
    uVar16 = param_1[2];
    func_0x000107c5fadc(uVar16,param_1[3]);
    func_0x000107c59c6c(uVar15);
    func_0x000107c61170(uVar16);
  }
  func_0x000107c550d8(uVar15);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfb0);
  if (param_1[5] == 0) {
    func_0x000107c59c6c(uVar15);
  }
  else {
    uVar16 = param_1[4];
    func_0x000107c5fadc(uVar16,param_1[5]);
    func_0x000107c59c6c(uVar15);
    func_0x000107c61170(uVar16);
  }
  func_0x000107c550d8(uVar15);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfb8);
  if (param_1[7] == 0) {
    func_0x000107c59c6c(uVar15);
  }
  else {
    uVar16 = param_1[6];
    func_0x000107c5fadc(uVar16,param_1[7]);
    func_0x000107c59c6c(uVar15);
    func_0x000107c61170(uVar16);
  }
  func_0x000107c550d8(uVar15);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfc0);
  uVar15 = param_1[8];
  func_0x000107c5fadc(uVar15,param_1[9]);
  func_0x000107c59e1c(uVar16);
  func_0x000107c61170(uVar15);
  cVar2 = *(char *)(param_1 + 10);
  func_0x000107c54514(uVar16);
  uVar15 = 0x3ff0000000000000;
  if (cVar2 == '\0') {
    uVar15 = 0x3fe0000000000000;
  }
  func_0x000107c526c0(uVar15,uVar16);
  lVar14 = _DAT_112d7bfd0;
  lVar4 = param_1[0xb];
  uVar17 = *(ulong *)(lVar4 + 0x10);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfc8);
  func_0x000107c61428(unaff_x20 + _DAT_112d7bfd0,auStack_78,0,0);
  while( true ) {
    uVar10 = *(ulong *)(unaff_x20 + lVar14);
    if (uVar10 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
      puVar6 = PTR__OBJC_CLASS___UIButton_1126aec48;
    }
    else {
      uVar5 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar5 = uVar10;
      }
      func_0x000107c60480();
      puVar6 = PTR__OBJC_CLASS___UIButton_1126aec48;
    }
    PTR__OBJC_CLASS___UIButton_1126aec48 = puVar6;
    if ((long)uVar17 <= (long)uVar5) break;
    func_0x000107c61168();
    func_0x000107c3ee98();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c4a954();
    func_0x000107c61180();
    func_0x000107c59e34(puVar6);
    func_0x000107c61170(puVar7);
    puVar7 = puVar6;
    func_0x000107c5cac0();
    func_0x000107c61180();
    if (puVar7 != (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
      func_0x000107c4eca4();
      func_0x000107c61180();
      func_0x000107c54adc(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
    }
    func_0x000107c53818(puVar6);
    uVar10 = *(ulong *)(unaff_x20 + lVar14);
    if (uVar10 >> 0x3e != 0) {
      uVar5 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar5 = uVar10;
      }
      func_0x000107c60480(uVar5);
    }
    func_0x000107c59ba8(puVar6);
    func_0x000107c3d8b8(puVar6);
    func_0x000107c61428(unaff_x20 + lVar14,auStack_90,0x21,0);
    uVar5 = *(ulong *)(unaff_x20 + lVar14);
    func_0x000107c61174();
    uVar10 = uVar5;
    func_0x000107c61550();
    *(ulong *)(unaff_x20 + lVar14) = uVar5;
    if ((((int)uVar10 == 0) || ((long)uVar5 < 0)) || (uVar10 = uVar5, (uVar5 >> 0x3e & 1) != 0)) {
      if (uVar5 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar9 = uVar5;
        }
        func_0x000107c60480(uVar9);
      }
      uVar10 = 0;
      func_0x000101136bfc(0,uVar9 + 1,1,uVar5);
      *(ulong *)(unaff_x20 + lVar14) = uVar10;
    }
    uVar11 = uVar10 & 0xffffffffffffff8;
    uVar5 = *(ulong *)(uVar11 + 0x10);
    uVar9 = uVar10;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      func_0x000101136bfc(uVar9,uVar5 + 1,1,uVar10);
      uVar11 = uVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar5 + 1;
    *(undefined **)(uVar11 + uVar5 * 8 + 0x20) = puVar6;
    *(ulong *)(unaff_x20 + lVar14) = uVar9;
    func_0x000107c614a8(auStack_90);
    func_0x000107c3d5b4(uVar15);
    func_0x000107c61170(puVar6);
  }
  while( true ) {
    uVar10 = *(ulong *)(unaff_x20 + lVar14);
    if (uVar10 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar5 = uVar10;
      }
      func_0x000107c60480();
    }
    if ((long)uVar5 <= (long)uVar17) break;
    func_0x000107c61428(unaff_x20 + lVar14,auStack_90,0x21,0);
    uVar10 = *(ulong *)(unaff_x20 + lVar14);
    if (uVar10 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar5 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f16b8);
      (*pcVar3)();
    }
    uVar5 = uVar10;
    func_0x000107c61550();
    *(ulong *)(unaff_x20 + lVar14) = uVar10;
    if ((uVar10 >> 0x3e != 0) || ((uVar5 & 1) == 0)) {
      FUN_1013f1a84();
    }
    uVar5 = uVar10 & 0xffffffffffffff8;
    if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f17e4);
      (*pcVar3)();
    }
    lVar12 = *(long *)(uVar5 + 0x10) + -1;
    uVar16 = *(undefined8 *)(uVar5 + lVar12 * 8 + 0x20);
    *(long *)(uVar5 + 0x10) = lVar12;
    *(ulong *)(unaff_x20 + lVar14) = uVar10;
    func_0x000107c614a8(auStack_90);
    func_0x000107c4fe94(uVar15);
    func_0x000107c4ff34(uVar16);
    func_0x000107c61170(uVar16);
  }
  uVar10 = *(ulong *)(unaff_x20 + lVar14);
  if (uVar10 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar5 = uVar10;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar10);
  if (uVar5 != 0) {
    uVar9 = 0;
    puVar13 = (undefined8 *)(lVar4 + 0x28);
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f17ec);
          (*pcVar3)();
        }
        uVar11 = *(ulong *)(uVar10 + uVar9 * 8 + 0x20);
        func_0x000107c61174(uVar11);
      }
      else {
        uVar11 = uVar9;
        func_0x00010111c594(uVar9,uVar10);
      }
      func_0x000107c61174();
      func_0x000107c59ba8();
      if (uVar17 == uVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f17e8);
        (*pcVar3)();
      }
      uVar9 = uVar9 + 1;
      uVar16 = puVar13[-1];
      uVar1 = *puVar13;
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar16,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c59e1c(uVar11);
      func_0x000107c61170(uVar16);
      func_0x000107c54514(uVar11);
      func_0x000107c526c0(0x3ff0000000000000,uVar11);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar11);
      puVar13 = puVar13 + 2;
    } while (uVar5 != uVar9);
  }
  func_0x000107c6142c(uVar10);
  func_0x000107c550d8(uVar15);
  return;
}



/* Entry: 1013f135c; end: 1013f1803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f135c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112d7bfd0;
  uVar15 = *(ulong *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d7bfc8);
  func_0x000107c61428(unaff_x20 + _DAT_112d7bfd0,auStack_78,0,0);
  while( true ) {
    uVar10 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar10 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
      puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
    }
    else {
      uVar4 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar4 = uVar10;
      }
      func_0x000107c60480();
      puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
    }
    PTR__OBJC_CLASS___UIButton_1126aec48 = puVar5;
    if ((long)uVar15 <= (long)uVar4) break;
    func_0x000107c61168();
    func_0x000107c3ee98();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c4a954();
    func_0x000107c61180();
    func_0x000107c59e34(puVar5);
    func_0x000107c61170(puVar6);
    puVar6 = puVar5;
    func_0x000107c5cac0();
    func_0x000107c61180();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
      func_0x000107c4eca4();
      func_0x000107c61180();
      func_0x000107c54adc(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c53818(puVar5);
    uVar10 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar10 >> 0x3e != 0) {
      uVar4 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar4 = uVar10;
      }
      func_0x000107c60480(uVar4);
    }
    func_0x000107c59ba8(puVar5);
    func_0x000107c3d8b8(puVar5);
    func_0x000107c61428(unaff_x20 + lVar2,auStack_90,0x21,0);
    uVar4 = *(ulong *)(unaff_x20 + lVar2);
    func_0x000107c61174();
    uVar10 = uVar4;
    func_0x000107c61550();
    *(ulong *)(unaff_x20 + lVar2) = uVar4;
    if ((((int)uVar10 == 0) || ((long)uVar4 < 0)) || (uVar10 = uVar4, (uVar4 >> 0x3e & 1) != 0)) {
      if (uVar4 >> 0x3e == 0) {
        uVar8 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar8 = uVar4 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar4) {
          uVar8 = uVar4;
        }
        func_0x000107c60480(uVar8);
      }
      uVar10 = 0;
      func_0x000101136bfc(0,uVar8 + 1,1,uVar4);
      *(ulong *)(unaff_x20 + lVar2) = uVar10;
    }
    uVar11 = uVar10 & 0xffffffffffffff8;
    uVar4 = *(ulong *)(uVar11 + 0x10);
    uVar8 = uVar10;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar4) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      func_0x000101136bfc(uVar8,uVar4 + 1,1,uVar10);
      uVar11 = uVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar4 + 1;
    *(undefined **)(uVar11 + uVar4 * 8 + 0x20) = puVar5;
    *(ulong *)(unaff_x20 + lVar2) = uVar8;
    func_0x000107c614a8(auStack_90);
    func_0x000107c3d5b4(uVar9);
    func_0x000107c61170(puVar5);
  }
  while( true ) {
    uVar10 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar10 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar4 = uVar10;
      }
      func_0x000107c60480();
    }
    if ((long)uVar4 <= (long)uVar15) break;
    func_0x000107c61428(unaff_x20 + lVar2,auStack_90,0x21,0);
    uVar10 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar10 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar4 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f16b8);
      (*pcVar3)();
    }
    uVar4 = uVar10;
    func_0x000107c61550();
    *(ulong *)(unaff_x20 + lVar2) = uVar10;
    if ((uVar10 >> 0x3e != 0) || ((uVar4 & 1) == 0)) {
      FUN_1013f1a84();
    }
    uVar4 = uVar10 & 0xffffffffffffff8;
    if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f17e4);
      (*pcVar3)();
    }
    lVar12 = *(long *)(uVar4 + 0x10) + -1;
    uVar14 = *(undefined8 *)(uVar4 + lVar12 * 8 + 0x20);
    *(long *)(uVar4 + 0x10) = lVar12;
    *(ulong *)(unaff_x20 + lVar2) = uVar10;
    func_0x000107c614a8(auStack_90);
    func_0x000107c4fe94(uVar9);
    func_0x000107c4ff34(uVar14);
    func_0x000107c61170(uVar14);
  }
  uVar10 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar10 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar4 = uVar10;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar10);
  if (uVar4 != 0) {
    uVar8 = 0;
    puVar13 = (undefined8 *)(param_1 + 0x28);
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f17ec);
          (*pcVar3)();
        }
        uVar11 = *(ulong *)(uVar10 + uVar8 * 8 + 0x20);
        func_0x000107c61174(uVar11);
      }
      else {
        uVar11 = uVar8;
        func_0x00010111c594(uVar8,uVar10);
      }
      func_0x000107c61174();
      func_0x000107c59ba8();
      if (uVar15 == uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f17e8);
        (*pcVar3)();
      }
      uVar8 = uVar8 + 1;
      uVar14 = puVar13[-1];
      uVar1 = *puVar13;
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar14,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c59e1c(uVar11);
      func_0x000107c61170(uVar14);
      func_0x000107c54514(uVar11);
      func_0x000107c526c0(0x3ff0000000000000,uVar11);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar11);
      puVar13 = puVar13 + 2;
    } while (uVar4 != uVar8);
  }
  func_0x000107c6142c(uVar10);
  func_0x000107c550d8(uVar9);
  return;
}



/* Entry: 1013f1804; end: 1013f18c7; -[_TtC15COSServicesImpl30COSNativeChallengeScaffoldView onTopActionTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f1804(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112d7bf88;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_1013f427c();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013f18c8; end: 1013f18ef; -[_TtC15COSServicesImpl30COSNativeChallengeScaffoldView onPrimaryActionTapped] */

void FUN_1013f18c8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001013f1860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


