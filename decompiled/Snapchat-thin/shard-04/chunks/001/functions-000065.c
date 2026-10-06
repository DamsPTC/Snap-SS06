/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103089014; end: 103089053;  */

undefined ** FUN_103089014(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 103089054; end: 10308909f;  */

void FUN_103089054(undefined8 param_1)

{
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1030890a0,param_1);
  return;
}



/* Entry: 1030890a0; end: 103089183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030890a0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long alStack_58 [3];
  
  func_0x000100083b20(alStack_58);
  lVar2 = *(long *)(*(long *)(alStack_58[0] + _DAT_113067410) + _DAT_113067d48);
  if (lVar2 != 0) {
    FUN_103089e20(0);
    lVar1 = _DAT_113067428;
    uVar3 = *(undefined8 *)(alStack_58[0] + _DAT_113067418);
    func_0x000107c61428(alStack_58[0] + _DAT_113067428,alStack_58,0,0);
    lVar1 = alStack_58[0] + lVar1;
    func_0x000107c61618(lVar1);
    func_0x000107c61174();
    func_0x000107c615f0(uVar3);
    FUN_1030891e0(lVar2,uVar3,lVar1);
  }
  func_0x000107c61170(alStack_58[0]);
  *param_1 = lVar2;
  return;
}



/* Entry: 103089184; end: 1030891c3;  */

undefined ** FUN_103089184(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 1030891c4; end: 1030891df;  */

void FUN_1030891c4(void)

{
  func_0x000107c614e8();
  func_0x000107c3f438();
  return;
}



/* Entry: 1030891e0; end: 10308933b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030891e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar6 = auStack_60;
  uVar4 = 0;
  FUN_10308933c();
  func_0x0001000285a8(0x112f38700,&UNK_10db83cb0);
  func_0x000107c613fc();
  pcVar5 = FUN_103089380;
  func_0x0001000bdd8c(FUN_103089380,0);
  func_0x000107c610f8();
  lVar3 = _DAT_112f38708;
  func_0x000107c61614(unaff_x20 + _DAT_112f38708,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f38710) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f38718) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f38720);
  *puVar1 = uVar4;
  puVar1[1] = &PTR_DAT_1106066c0;
  *(undefined8 *)(unaff_x20 + _DAT_112f38728) = param_2;
  *(code **)(unaff_x20 + _DAT_112f38730) = pcVar5;
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(pcVar5);
  func_0x000107c61154(auStack_60,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61574(pcVar5);
  func_0x000107c615e8(param_3);
  return puVar6;
}



/* Entry: 10308933c; end: 10308937f;  */

void FUN_10308933c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f386f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f386f8 = puVar1;
  return;
}



/* Entry: 103089380; end: 1030893af;  */

void FUN_103089380(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1030893b0; end: 1030893e3;  */

void FUN_1030893b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030893e4; end: 10308943b; -[_TtC30AdToMessageAttachmentPresenter30AdToMessageAttachmentPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030893e4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f38718));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38728));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f38730));
  param_1 = param_1 + _DAT_112f38708;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10308943c; end: 1030895e7;  */

/* WARNING: Possible PIC construction at 0x00010308958c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103089590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308943c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puStack_60 = *(undefined **)(unaff_x20 + _DAT_112f38710);
  if (puStack_60 == (undefined *)0x1) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f38728);
    puVar2 = &UNK_110606658;
    func_0x000107c613fc(&UNK_110606658,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_103089be4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110606670;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c41864(uVar6);
    func_0x000107c60bd0(ppuVar3);
  }
  else {
    if (puStack_60 != (undefined *)0x0) {
      func_0x000107c60614(&UNK_11074f630,&puStack_60,&UNK_11074f630,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030895e8);
      (*pcVar1)();
    }
    lVar4 = unaff_x20 + _DAT_112f38708;
    func_0x000107c61618();
    if (lVar4 != 0) {
      uVar6 = 0;
      func_0x0001041bb118(0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f38718);
      func_0x0001041b9698(uVar5,uVar6);
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      func_0x0001041bf5c0(0);
      func_0x0001041bf290();
      func_0x000107c3d24c(lVar4);
      func_0x000107c615e8(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 1030895e8; end: 10308963b; -[_TtC30AdToMessageAttachmentPresenter30AdToMessageAttachmentPresenter messageComposeViewController:didFinishWithResult:] */

/* WARNING: Possible PIC construction at 0x000103089624: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103089628) */

void FUN_1030895e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103089b40(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10308963c; end: 103089653; -[_TtC30AdToMessageAttachmentPresenter30AdToMessageAttachmentPresenter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10308963c(long param_1)

{
  return *(int *)(param_1 + _DAT_112f38710) == 1;
}



/* Entry: 103089654; end: 10308968f; -[_TtC30AdToMessageAttachmentPresenter30AdToMessageAttachmentPresenter canHandleAttachment:] */

bool FUN_103089654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000104191a9c();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 5;
}



/* Entry: 103089690; end: 103089aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103089690(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [80];
  
  puVar1 = *(undefined8 **)(unaff_x20 + _DAT_112f38720);
  (**(code **)(((undefined8 *)(unaff_x20 + _DAT_112f38720))[1] + 8))();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x0001041b5884();
    uVar8 = *puVar1;
    uVar11 = puVar1[1];
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar12 = auStack_a0;
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    puVar9 = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar4 + 0x28) = puVar12;
    *(undefined8 *)(lVar4 + 0x30) = 0xd000000000000014;
    *(undefined8 *)(lVar4 + 0x38) = 0x800000010f11cae0;
    func_0x000107c61434(uVar11);
    lVar6 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    func_0x000100f15a0c((undefined8 *)(lVar4 + 0x20));
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c5fadc(uVar8,uVar11);
    func_0x000107c6142c(uVar11);
    lVar4 = lVar6;
    func_0x000107c5f9dc(lVar6,puVar9,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar6);
    func_0x000107c466bc(puVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar4);
    lVar4 = unaff_x20 + _DAT_112f38708;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x0001041bb118(0);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f38718);
      func_0x0001041b9698(uVar8);
      puVar9 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c61174(puVar7);
      puVar10 = puVar7;
      func_0x000107c5ed2c();
      func_0x000107c61170(puVar7);
      func_0x000107c42d78(puVar9);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar11 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf290();
      func_0x000107c3d24c(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(uVar11);
    }
    func_0x000107c61170(puVar7);
  }
  else {
    func_0x0001000d224c(&puStack_d8);
    puVar9 = puStack_d8;
    lVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    lVar14 = *(long *)(unaff_x20 + _DAT_112f38718);
    puVar1 = (undefined8 *)(lVar14 + _DAT_113068108);
    uVar8 = puVar1[1];
    *(undefined8 *)(lVar4 + 0x20) = *puVar1;
    *(undefined8 *)(lVar4 + 0x28) = uVar8;
    func_0x000107c61434();
    lVar6 = lVar4;
    func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar4);
    func_0x000107c57bf0(puVar9);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar6);
    func_0x0001000d224c(&puStack_d8);
    puVar9 = puStack_d8;
    puVar1 = (undefined8 *)(lVar14 + _DAT_113068110);
    uVar8 = *puVar1;
    uVar11 = puVar1[1];
    func_0x000107c61434(uVar11);
    func_0x000107c5fadc(uVar8,uVar11);
    func_0x000107c6142c(uVar11);
    func_0x000107c52dcc(puVar9);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar8);
    func_0x0001000d224c(&puStack_d8);
    func_0x000107c56634(puStack_d8);
    func_0x000107c61170(puStack_d8);
    *(undefined8 *)(unaff_x20 + _DAT_112f38710) = 1;
    uVar13 = *(ulong *)(unaff_x20 + _DAT_112f38728);
    uVar2 = uVar13;
    func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_attachUI_completion__1125a0c10);
    if ((uVar2 & 1) != 0) {
      func_0x0001000d224c(&uStack_a8);
      puVar9 = &UNK_110606658;
      func_0x000107c613fc(&UNK_110606658,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      pcStack_b8 = FUN_103089d40;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1000b0c7c;
      puStack_c0 = &UNK_110606698;
      ppuVar3 = &puStack_d8;
      puStack_b0 = puVar9;
      func_0x000107c60bc4(ppuVar3);
      puVar7 = puStack_b0;
      func_0x000107c61580(puVar9,2);
      func_0x000107c61574(puVar7);
      func_0x000107c3e2c4(uVar13);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(uStack_a8);
      func_0x000107c61578(puVar9,2);
    }
  }
  return;
}



/* Entry: 103089af0; end: 103089b17; -[_TtC30AdToMessageAttachmentPresenter30AdToMessageAttachmentPresenter presentAttachment] */

void FUN_103089af0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103089690();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103089b18; end: 103089b3f; -[_TtC30AdToMessageAttachmentPresenter30AdToMessageAttachmentPresenter dismissAttachment] */

void FUN_103089b18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10308943c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103089b40; end: 103089be3;  */

/* WARNING: Possible PIC construction at 0x0001030894dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308958c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030894e0) */
/* WARNING: Removing unreachable block (ram,0x000103089590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103089b40(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112f38718) + _DAT_113068118);
  if (lVar5 == 0) {
    puStack_60 = *(undefined **)(unaff_x20 + _DAT_112f38710);
    if (puStack_60 != (undefined *)0x1) {
      if (puStack_60 != (undefined *)0x0) {
        func_0x000107c60614(&UNK_11074f630,&puStack_60,&UNK_11074f630,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1030895e8);
        (*pcVar2)();
      }
      lVar5 = unaff_x20 + _DAT_112f38708;
      func_0x000107c61618();
      if (lVar5 != 0) {
        uVar6 = 0;
        func_0x0001041bb118(0);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f38718);
        func_0x0001041b9698(uVar4,uVar6);
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c5c3c8();
        func_0x000107c61180();
        func_0x0001041bf5c0(0);
        func_0x0001041bf290();
        func_0x000107c3d24c(lVar5);
        func_0x000107c615e8(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar4);
        return;
      }
      return;
    }
    puVar3 = &UNK_110606658;
    func_0x000107c613fc(&UNK_110606658,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,unaff_x20);
    pcStack_40 = FUN_103089be4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110606670;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    puVar3 = puStack_38;
  }
  else {
    puVar1 = (undefined8 *)(lVar5 + _DAT_113067530);
    pcVar2 = (code *)*puVar1;
    puVar3 = (undefined *)puVar1[1];
    if (param_1 < 3) {
      uVar6 = *(undefined8 *)(&UNK_10db83d30 + param_1 * 8);
    }
    else {
      uVar6 = 0;
    }
    func_0x000107c6157c(puVar3);
    (*pcVar2)(uVar6);
    FUN_10308943c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 103089be4; end: 103089d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103089be4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112f38708;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001041bb118(0);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112f38718);
      func_0x000107c61174(uVar3);
      uVar4 = uVar3;
      func_0x0001041b9698();
      func_0x000107c61170(uVar3);
      puVar5 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      uVar3 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf290();
      func_0x000107c3d24c(lVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + _DAT_112f38710) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103089d24; end: 103089d3f;  */

void FUN_103089d24(long param_1,long param_2)

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



/* Entry: 103089d40; end: 103089e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103089d40(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112f38708;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001041bb118(0);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112f38718);
      func_0x000107c61174(uVar3);
      uVar4 = uVar3;
      func_0x0001041b9698();
      func_0x000107c61170(uVar3);
      uVar3 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf290();
      func_0x000107c3d254(lVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103089e20; end: 103089e3f;  */

void FUN_103089e20(void)

{
  func_0x000107c61168(&PTR_PTR_1128b26f8);
  return;
}



/* Entry: 103089e40; end: 103089e47;  */

void FUN_103089e40(long param_1,long param_2)

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



/* Entry: 103089e48; end: 10308a35f;  */

void FUN_103089e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_110606788;
  func_0x000107c613fc(&UNK_110606788,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x103089f34,puVar1);
  return;
}



/* Entry: 10308a360; end: 10308a39f;  */

undefined ** FUN_10308a360(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 10308a3a0; end: 10308a877;  */

void FUN_10308a3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_1106068b0;
  func_0x000107c613fc(&UNK_1106068b0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(0x10308a4a4,puVar1);
  return;
}



/* Entry: 10308a878; end: 10308a8b7;  */

undefined ** FUN_10308a878(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 10308a8b8; end: 10308b4af;  */

void FUN_10308a8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_1106069d8;
  func_0x000107c613fc(&UNK_1106069d8,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_8;
  *(undefined8 *)(puVar1 + 0x28) = param_9;
  *(undefined8 *)(puVar1 + 0x30) = param_10;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_4;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_14;
  *(undefined8 *)(puVar1 + 0x70) = param_15;
  *(undefined8 *)(puVar1 + 0x78) = param_13;
  *(undefined8 *)(puVar1 + 0x80) = param_12;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_10308b4b0,puVar1);
  return;
}



/* Entry: 10308b4b0; end: 10308b4f3;  */

void FUN_10308b4b0(void)

{
  long unaff_x20;
  
  func_0x00010308aa1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10308b4f4; end: 10308b533;  */

undefined ** FUN_10308b4f4(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 10308b534; end: 10308b56f;  */

undefined8 FUN_10308b534(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b91acc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10308b570; end: 10308b5fb;  */

void FUN_10308b570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  return;
}



/* Entry: 10308b5fc; end: 10308b627;  */

void FUN_10308b5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  return;
}



/* Entry: 10308b628; end: 10308bf0b;  */

/* WARNING: Possible PIC construction at 0x00010308b794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308ba74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308bc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308bcb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308bcd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308be58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308becc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308b728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308be5c) */
/* WARNING: Removing unreachable block (ram,0x00010308bed0) */
/* WARNING: Removing unreachable block (ram,0x00010308bebc) */
/* WARNING: Removing unreachable block (ram,0x00010308bcd8) */
/* WARNING: Removing unreachable block (ram,0x00010308bc44) */
/* WARNING: Removing unreachable block (ram,0x00010308bcbc) */
/* WARNING: Removing unreachable block (ram,0x00010308bca8) */
/* WARNING: Removing unreachable block (ram,0x00010308ba78) */
/* WARNING: Removing unreachable block (ram,0x00010308b798) */
/* WARNING: Removing unreachable block (ram,0x00010308b72c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308b628(void)

{
  long *plVar1;
  bool bVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_bc;
  long lStack_b8;
  long lStack_78;
  long lStack_70;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  lStack_d0 = *(long *)(lVar4 + -8);
  lStack_c8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar12 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_d8 = auStack_110 + lVar12;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lStack_b8 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113091b70);
  if (*(char *)(lVar4 + _DAT_113067498) == '\x01') {
    func_0x000107c615f0();
    bVar2 = true;
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x40) + _DAT_11304a480);
    func_0x000107c615f0();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c5fadc(0xd00000000000002b,0x800000010f11cb40);
      func_0x000107c3ebdc(lVar5);
      goto code_r0x000107c615e8;
    }
    bVar2 = false;
  }
  lVar14 = *(long *)(unaff_x20 + 0x40);
  lVar5 = *(long *)(lVar14 + _DAT_11304a480);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    uStack_bc = 1;
    puVar6 = PTR_PTR_1126aeea8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_11308b850);
    uVar13 = *(undefined8 *)(lVar4 + _DAT_113067470);
    lVar5 = *(long *)(lVar4 + _DAT_113067480);
    if (bVar2) {
      uVar11 = *(undefined8 *)(lVar14 + _DAT_11304a478);
      lVar7 = 0;
      puStack_108 = puVar6;
      lStack_e8 = lVar4;
      lStack_e0 = *(long *)(unaff_x20 + 0x38);
      FUN_10308f520();
      lStack_f8 = lVar7;
      func_0x000107c610f8();
      lVar12 = lStack_b8;
      lVar4 = _DAT_112f38910;
      puVar6 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar12);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6157c(uVar11);
      func_0x000107c453e4();
      *(undefined **)(lVar7 + lVar4) = puVar6;
      lVar4 = _DAT_112f38918;
      puVar6 = PTR_PTR_1126ae568;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar7 + lVar4) = puVar6;
      lVar4 = _DAT_112f38920;
      puVar6 = PTR_PTR_1126ae568;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar7 + lVar4) = puVar6;
      lVar4 = _DAT_112f38928;
      puVar6 = PTR_PTR_1126ae568;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar7 + lVar4) = puVar6;
      lVar4 = _DAT_112f38930;
      puVar6 = PTR_PTR_1126ae568;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar7 + lVar4) = puVar6;
      lVar4 = _DAT_112f38938;
      puVar8 = PTR_PTR_1126ae568;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar6 = puStack_108;
      *(undefined **)(lVar7 + lVar4) = puVar8;
      *(undefined8 *)(lVar7 + _DAT_112f38950) = 0;
      *(undefined **)(lVar7 + _DAT_112f388e8) = puStack_108;
      *(undefined8 *)(lVar7 + _DAT_112f388f0) = uVar15;
      *(undefined8 *)(lVar7 + _DAT_112f388f8) = uVar13;
      *(long *)(lVar7 + _DAT_112f38900) = lVar12;
      *(undefined8 *)(lVar7 + _DAT_112f38908) = uVar11;
      lVar4 = *(long *)(lVar5 + _DAT_113067da0);
      lVar14 = ((long *)(lVar5 + _DAT_113067da0))[1];
      lStack_100 = lVar5;
      func_0x000107c615f0(lVar12);
      func_0x000107c61174(uVar15);
      func_0x000107c61174(uVar13);
      uStack_f0 = uVar11;
      func_0x000107c6157c(uVar11);
      func_0x000107c61174(puVar6);
      func_0x000107c61434(lVar14);
      func_0x000103c015a4();
      *(long *)(lVar7 + _DAT_112f38940) = lVar4;
      func_0x000104191b2c();
      lVar12 = *(long *)(lVar4 + _DAT_113067ec0);
      lVar5 = ((long *)(lVar4 + _DAT_113067ec0))[1];
      func_0x000107c61434(lVar5);
      func_0x000107c61170();
      puVar3 = puStack_d8;
      if (lVar5 == 0) {
        func_0x000107c5eec4(puStack_d8);
        func_0x000107c5eeac();
        (**(code **)(lStack_d0 + 8))(puVar3,lStack_c8);
        lVar12 = lVar4;
        lVar5 = lVar14;
      }
      plVar1 = (long *)(lVar7 + _DAT_112f38948);
      *plVar1 = lVar12;
      plVar1[1] = lVar5;
      lStack_70 = lStack_f8;
      lStack_78 = lVar7;
      func_0x000107c61154(&lStack_78,PTR_s_init_1125d9248);
      FUN_10308c82c();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(lStack_100);
      lVar5 = lStack_b8;
    }
    else {
      func_0x000107c610f8(PTR_PTR_1126acac8);
      func_0x000107c48d18();
      func_0x000107c61170(puVar6);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
      puVar6 = &UNK_110606b00;
      func_0x000107c613fc(&UNK_110606b00,0x28,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar15;
      *(undefined8 *)(puVar6 + 0x18) = uVar13;
      *(long *)(puVar6 + 0x20) = lVar4;
      func_0x0001000285a8(0x112f387d8,&UNK_10db83f20);
      func_0x000107c613fc();
      func_0x000107c61174(lVar4);
      func_0x000107c61174();
      func_0x000107c61174(uVar11);
      func_0x000107c61174(uVar15);
      func_0x000107c61174(uVar13);
      pcVar9 = FUN_10308c59c;
      func_0x0001000bdd8c(FUN_10308c59c,puVar6);
      pcVar10 = pcVar9;
      func_0x0001003a5b88();
      func_0x000107c61574(pcVar9);
      func_0x00010040de80();
      uVar15 = *(undefined8 *)(unaff_x20 + 0x48);
      puVar6 = PTR_PTR_1126acad0;
      func_0x000107c610f8();
      auStack_118[lVar12] = (char)uStack_bc;
      *(undefined8 *)((long)&uStack_120 + lVar12) = uVar15;
      func_0x000107c484cc();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(pcVar10);
      func_0x000107c61170(pcVar9);
      lVar5 = *(long *)(unaff_x20 + 0x58);
      *(undefined **)(unaff_x20 + 0x58) = puVar6;
      func_0x000107c61174(puVar6);
    }
  }
  else {
    func_0x000107c5fadc(0xd000000000000033,0x800000010f11cb00);
    lVar4 = lVar5;
    func_0x000107c4dfc0();
    uStack_bc = (undefined4)lVar4;
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
  return;
}



/* Entry: 10308bf0c; end: 10308bf9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308bf0c(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = _DAT_112f38a18;
  uVar5 = *(ulong *)(param_3 + _DAT_112f38a18);
  if ((uVar5 == 0) || (func_0x000107c4a214(), (uVar5 & 1) == 0)) {
    (*param_1)();
  }
  else {
    puVar1 = (undefined8 *)(param_3 + _DAT_112f38a20);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000107c6157c(param_2);
    func_0x000100d334d4(uVar2,uVar3);
    if (*(long *)(param_3 + lVar4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf83210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_3 + lVar4),PTR_s_dismissAttachment_1125be628);
      return;
    }
  }
  return;
}



/* Entry: 10308bfa0; end: 10308c033;  */

void FUN_10308bfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_110606c48;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c428ac(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10308c034; end: 10308c137;  */

void FUN_10308c034(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  if (*(long *)(unaff_x20 + 0x70) == 0) {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168();
    func_0x000107c3e26c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined **)(unaff_x20 + 0x70) = puVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    pcVar4 = *(code **)(unaff_x20 + 0x60);
    if (pcVar4 != (code *)0x0) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
      puVar2 = &UNK_110606ba0;
      func_0x000107c613fc(&UNK_110606ba0,0x18,7);
      func_0x000107c61644(puVar2 + 0x10);
      func_0x00010308c788(pcVar4,uVar3);
      func_0x000107c6157c(puVar2);
      (*pcVar4)(0x10308c780,puVar2);
      func_0x000107c61574(puVar2);
      func_0x000100d334d4(pcVar4,uVar3);
      func_0x000107c61574(puVar2);
    }
    func_0x000107c4f3ec(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c4f3ec();
    func_0x000107c61180();
  }
  return;
}



/* Entry: 10308c138; end: 10308c1a7;  */

void FUN_10308c138(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x70);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c4358c();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10308c1a8; end: 10308c437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308c1a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  puVar2 = &UNK_110606be0;
  func_0x000107c613fc(&UNK_110606be0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x0001000285a8(0x112f388d8,&UNK_10db83ff8);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  pcVar3 = FUN_10308c7b8;
  func_0x0001000bdd8c(FUN_10308c7b8,puVar2);
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = 0;
  FUN_10309009c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f38998);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f389a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f389a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_112f38980) = param_4;
  *(undefined **)(lVar5 + _DAT_112f38988) = puVar2;
  *(code **)(lVar5 + _DAT_112f38990) = pcVar3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar2);
  *param_1 = plVar6;
  return;
}



/* Entry: 10308c438; end: 10308c487;  */

void FUN_10308c438(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10308c488; end: 10308c59b;  */

void FUN_10308c488(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = &UNK_110606c80;
  func_0x000107c613fc(&UNK_110606c80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x0001000285a8(0x112f388d8,&UNK_10db83ff8);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar2 = 0x10308c824;
  func_0x0001000bdd8c(0x10308c824,puVar1);
  uVar3 = uVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar2);
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126acad8;
  func_0x000107c610f8();
  func_0x000107c61174(param_4);
  func_0x000107c484d0();
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 10308c59c; end: 10308c5af;  */

void FUN_10308c59c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = &UNK_110606c80;
  func_0x000107c613fc(&UNK_110606c80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  func_0x0001000285a8(0x112f388d8,&UNK_10db83ff8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar2 = 0x10308c824;
  func_0x0001000bdd8c(0x10308c824,puVar1);
  uVar3 = uVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar2);
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126acad8;
  func_0x000107c610f8();
  func_0x000107c61174(uVar5);
  func_0x000107c484d0();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 10308c5b0; end: 10308c61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308c5b0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c444a4();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126acae0;
  func_0x000107c610f8();
  func_0x000107c46be0();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10308c620; end: 10308c6b3;  */

void FUN_10308c620(void)

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
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000100d334d4(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10308c6b4; end: 10308c6f3;  */

void FUN_10308c6b4(void)

{
  FUN_10308b628();
  return;
}



/* Entry: 10308c6f4; end: 10308c727;  */

void FUN_10308c6f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10308c728; end: 10308c733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308c728(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar8 = &lStack_50;
  puVar4 = &UNK_110606be0;
  func_0x000107c613fc(&UNK_110606be0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  func_0x0001000285a8(0x112f388d8,&UNK_10db83ff8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  pcVar5 = FUN_10308c7b8;
  func_0x0001000bdd8c(FUN_10308c7b8,puVar4);
  puVar4 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar6 = 0;
  FUN_10309009c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f38998);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f389a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f389a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar7 + _DAT_112f38980) = uVar9;
  *(undefined **)(lVar7 + _DAT_112f38988) = puVar4;
  *(code **)(lVar7 + _DAT_112f38990) = pcVar5;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c61174(uVar9);
  func_0x000107c61154(&lStack_50,puVar4);
  *param_1 = plVar8;
  return;
}



/* Entry: 10308c734; end: 10308c777;  */

long FUN_10308c734(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10308c778; end: 10308c797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308c778(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  
  lVar4 = _DAT_112f38a18;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(lVar6 + _DAT_112f38a18);
  if ((uVar5 == 0) || (func_0x000107c4a214(), (uVar5 & 1) == 0)) {
    (*param_1)();
  }
  else {
    puVar1 = (undefined8 *)(lVar6 + _DAT_112f38a20);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000107c6157c(param_2);
    func_0x000100d334d4(uVar2,uVar3);
    if (*(long *)(lVar6 + lVar4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf83210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(lVar6 + lVar4),PTR_s_dismissAttachment_1125be628);
      return;
    }
  }
  return;
}



/* Entry: 10308c798; end: 10308c7b7;  */

void FUN_10308c798(void)

{
  func_0x000107c61168(&PTR_PTR_112f38820);
  return;
}



/* Entry: 10308c7b8; end: 10308c7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308c7b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar7 = &lStack_50;
  puVar2 = &UNK_110606c08;
  func_0x000107c613fc(&UNK_110606c08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  func_0x0001000285a8(0x112f388e0,&UNK_10db84000);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  uVar3 = 0x10308c7c0;
  func_0x0001000bdd8c(0x10308c7c0,puVar2);
  puVar2 = &UNK_110606c30;
  func_0x000107c613fc(&UNK_110606c30,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x0001000285a8(0x112dd0250,&UNK_10dca67b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  pcVar4 = FUN_10308c7c8;
  func_0x0001000bdd8c(FUN_10308c7c8,puVar2);
  lVar5 = 0;
  FUN_1030af9c8();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f395e8) = uVar3;
  *(code **)(lVar6 + _DAT_112f395f0) = pcVar4;
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 10308c7c8; end: 10308c807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308c7c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10308c808; end: 10308c82b;  */

void FUN_10308c808(long param_1,long param_2)

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



/* Entry: 10308c82c; end: 10308ca77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308c82c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar7 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  lVar10 = *(long *)(unaff_x20 + _DAT_112f38900);
  if (lVar10 != 0) {
    func_0x000107c615f0(lVar10);
    func_0x0001000d224c(&puStack_a0);
    puVar2 = puStack_a0;
    func_0x000107c614f0(puStack_a0);
    uVar3 = 0xd000000000000035;
    func_0x00010403c628(0xd000000000000035,0x800000010f11cc30,puVar2,uStack_98);
    func_0x000107c615e8(puStack_a0);
    lVar4 = lVar10;
    lVar5 = lVar10;
    if ((uVar3 & 1) == 0) {
      func_0x000107c5e39c(lVar10);
      func_0x000107c61180();
      func_0x000107c419f0(lVar10);
    }
    else {
      func_0x000107c41b80();
      func_0x000107c61180();
      func_0x000107c5e370(lVar10);
    }
    func_0x000107c61180();
    puVar2 = &UNK_110606cb0;
    puVar6 = puVar2;
    func_0x000107c613fc(&UNK_110606cb0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x10308f608;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100c1de60;
    puStack_88 = &UNK_110606de0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    lVar8 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c3e924(lVar8);
    func_0x000107c61170(lVar8);
    func_0x000107c613fc(&UNK_110606cb0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_80 = 0x10308f610;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100c1de60;
    puStack_88 = &UNK_110606e08;
    puStack_78 = puVar2;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    lVar8 = lVar5;
    func_0x000107c5c320(lVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c3e924(lVar8);
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 10308ca78; end: 10308ca87; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository adLifecycleEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308ca78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f38918));
  return;
}



/* Entry: 10308ca88; end: 10308ca97; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository adPlayableEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308ca88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f38930));
  return;
}



/* Entry: 10308ca98; end: 10308caa7; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository adWebviewNavigationEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308ca98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f38920));
  return;
}



/* Entry: 10308caa8; end: 10308cab7; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository adDeepLinkEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308caa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f38938));
  return;
}



/* Entry: 10308cab8; end: 10308cac7; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository adAppInstallEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308cab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f38928));
  return;
}



/* Entry: 10308cac8; end: 10308cacf; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository streamsType] */

undefined8 FUN_10308cac8(void)

{
  return 2;
}



/* Entry: 10308cad0; end: 10308ccfb;  */

/* WARNING: Possible PIC construction at 0x00010308cbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308cc24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308ccac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308ccd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308ccb0) */
/* WARNING: Removing unreachable block (ram,0x00010308ccb8) */
/* WARNING: Removing unreachable block (ram,0x00010308cccc) */
/* WARNING: Removing unreachable block (ram,0x00010308cc28) */
/* WARNING: Removing unreachable block (ram,0x00010308cc00) */
/* WARNING: Removing unreachable block (ram,0x00010308ccd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308cad0(ulong param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000104191a9c();
  iVar1 = (int)param_1;
  func_0x000104191a9c();
  if (iVar1 == 9 && (param_1 & 0xffffffff) == 2) {
    FUN_10308ccfc(2);
  }
  if (((int)param_1 != 9) &&
     (*(ulong *)(unaff_x20 + _DAT_112f38940) < 0x24 &&
      (1L << (*(ulong *)(unaff_x20 + _DAT_112f38940) & 0x3f) & 0x944048c00U) != 0)) {
    lVar2 = 3;
    FUN_10308cdec();
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c610f8(PTR_PTR_1126b8fa8);
    func_0x000107c30b18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10308ccfc; end: 10308cdeb;  */

/* WARNING: Possible PIC construction at 0x00010308cd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308cdc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308cd74) */
/* WARNING: Removing unreachable block (ram,0x00010308cdcc) */

void FUN_10308ccfc(long param_1,undefined8 param_2)

{
  FUN_10308edcc();
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c610f8(PTR_PTR_1126b9098);
  func_0x000107c30d14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10308cdec; end: 10308cf27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10308cdec(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f388e8));
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x26);
  func_0x000107c5fb78(0xd00000000000001e,0x800000010f11cc10);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112f38948),
                      ((undefined8 *)(unaff_x20 + _DAT_112f38948))[1]);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&uStack_50,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_48;
  uVar2 = uStack_50;
  FUN_10308e238(param_1 * 1000.0,uStack_50,uStack_48);
  func_0x000107c6142c(uVar1);
  return uVar2;
}



/* Entry: 10308cf28; end: 10308cfd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10308cf28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f38940);
  if ((int)uVar2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b8fb0;
    func_0x000107c610f8(PTR_PTR_1126b8fb0);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c30c68(puVar1,param_1,0,0,0,0,0,0,0,0,0,0,uVar2,0,0);
    func_0x000107c61170(param_1);
  }
  return puVar1;
}



/* Entry: 10308cfd4; end: 10308d197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308cfd4(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = 0;
  lVar4 = param_2;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 != 0) {
    lVar2 = param_2;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar4);
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112f388f8) + _DAT_113067d38);
    if (lVar4 == 0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      lVar4 = lVar4 + _DAT_1138131d8;
      puVar6 = puVar5;
      (**(code **)(lVar8 + 0x10))(puVar5,lVar4,lVar1);
      func_0x000107c5ed70();
      (**(code **)(lVar8 + 8))(puVar5,lVar1);
      func_0x000107c5fadc(puVar6,lVar4);
      func_0x000107c6142c(lVar4);
    }
    puVar3 = PTR_PTR_1126b8fc0;
    func_0x000107c610f8(PTR_PTR_1126b8fc0);
    func_0x000107c30b44();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f38938);
    func_0x000104681c70(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar3);
    func_0x000107c61174(param_2);
    func_0x00010468187c();
    func_0x000107c4d664(uVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10308d198; end: 10308d1e7; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository adAttachmentPresenterTriggerAttempt:] */

/* WARNING: Possible PIC construction at 0x00010308d1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308d1d4) */

void FUN_10308d198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10308cad0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10308d1e8; end: 10308d393;  */

/* WARNING: Possible PIC construction at 0x00010308d2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308d348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308d370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308d34c) */
/* WARNING: Removing unreachable block (ram,0x00010308d35c) */
/* WARNING: Removing unreachable block (ram,0x00010308d36c) */
/* WARNING: Removing unreachable block (ram,0x00010308d2ec) */
/* WARNING: Removing unreachable block (ram,0x00010308d374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308d1e8(int param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000104191a9c();
  if ((param_1 != 9) &&
     (*(ulong *)(unaff_x20 + _DAT_112f38940) < 0x24 &&
      (1L << (*(ulong *)(unaff_x20 + _DAT_112f38940) & 0x3f) & 0x944048c00U) != 0)) {
    lVar1 = 4;
    FUN_10308cdec();
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c610f8(PTR_PTR_1126b8fa8);
    func_0x000107c30b18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10308d394; end: 10308d62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308d394(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f388e8));
  lStack_70 = 0;
  lStack_68 = -0x2000000000000000;
  func_0x000107c602fc(0x1a);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f11cbf0);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112f38948),
                      ((undefined8 *)(unaff_x20 + _DAT_112f38948))[1]);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&lStack_70,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  lVar2 = lStack_68;
  lVar1 = lStack_70;
  lVar5 = lStack_68;
  FUN_10308e238(param_1 * 1000.0,lStack_70,lStack_68);
  func_0x000107c6142c();
  lVar6 = 0;
  if (param_3 != 0) {
    func_0x00010419f174();
    lVar6 = lVar2;
  }
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar5);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar6 + _DAT_113067e70);
  }
  PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar3;
  func_0x000107c610f8(puVar3);
  func_0x000107c466c0(uVar7);
  puVar4 = PTR_PTR_1126b8fd0;
  func_0x000107c610f8(PTR_PTR_1126b8fd0);
  func_0x000107c30b58();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f38928);
  func_0x00010467de68(0);
  func_0x000107c610f8();
  func_0x000107c61174(lVar1);
  func_0x000107c61174(puVar4);
  lVar2 = lVar1;
  func_0x00010467da74(lVar1,puVar4);
  func_0x000107c4d664(uVar7);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10308d630; end: 10308d71b; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidTrigger:] */

/* WARNING: Possible PIC construction at 0x00010308d668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308d66c) */

void FUN_10308d630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10308d1e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10308d71c; end: 10308d787; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidLoad:metrics:] */

/* WARNING: Possible PIC construction at 0x00010308d768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308d76c) */

void FUN_10308d71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x00010308d680(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10308d788; end: 10308da0b;  */

/* WARNING: Possible PIC construction at 0x00010308d7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308d88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308d8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308d9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308d9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308d9c0) */
/* WARNING: Removing unreachable block (ram,0x00010308d8f0) */
/* WARNING: Removing unreachable block (ram,0x00010308d9e4) */
/* WARNING: Removing unreachable block (ram,0x00010308d908) */
/* WARNING: Removing unreachable block (ram,0x00010308d890) */
/* WARNING: Removing unreachable block (ram,0x00010308d7f8) */
/* WARNING: Removing unreachable block (ram,0x00010308d810) */
/* WARNING: Removing unreachable block (ram,0x00010308d834) */
/* WARNING: Removing unreachable block (ram,0x00010308d84c) */
/* WARNING: Removing unreachable block (ram,0x00010308d9ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308d788(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(ulong *)(unaff_x20 + _DAT_112f38940) < 0x24 &&
      (1L << (*(ulong *)(unaff_x20 + _DAT_112f38940) & 0x3f) & 0x944048c00U) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f38950);
    *(undefined8 *)(unaff_x20 + _DAT_112f38950) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10308da0c; end: 10308da77; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidPresent:attachmentMetadata:] */

/* WARNING: Possible PIC construction at 0x00010308da58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308da5c) */

void FUN_10308da0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10308d788(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10308da78; end: 10308dd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308da78(int param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar2 = param_2;
  func_0x000104191a9c();
  if (param_1 != 9) {
    if (*(ulong *)(unaff_x20 + _DAT_112f38940) < 0x24 &&
        (1L << (*(ulong *)(unaff_x20 + _DAT_112f38940) & 0x3f) & 0x944048c00U) != 0) {
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f388f8);
      func_0x000104191a9c();
      if (param_1 == 9) {
        func_0x000107c61174(uVar15);
      }
      else {
        uVar15 = 0;
      }
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f38950);
      *(undefined8 *)(unaff_x20 + _DAT_112f38950) = uVar15;
      func_0x000107c61170(uVar3);
      lVar4 = 8;
      FUN_10308cdec();
      lVar5 = lVar4;
      func_0x000107c30ad8();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar2);
      }
      puVar6 = PTR_PTR_1126b8fa8;
      func_0x000107c610f8(PTR_PTR_1126b8fa8);
      puStack_a0 = (undefined *)0x0;
      uStack_98 = 0;
      lVar8 = lVar5;
      func_0x000107c30b18();
      func_0x000107c61170(lVar5);
      lVar5 = lVar4;
      func_0x000107c30ad8(lVar4);
      func_0x000107c61180();
      lVar7 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
      FUN_10308cf28(lVar7,lVar8);
      func_0x000107c6142c(lVar8);
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f38918);
      func_0x00010468506c(0);
      func_0x000107c610f8();
      lVar5 = lVar7;
      func_0x000107c61174(lVar7);
      func_0x000107c61174(lVar4);
      func_0x000107c61174(puVar6);
      lVar8 = lVar4;
      func_0x000104684b9c(lVar4,puVar6,lVar7);
      func_0x000107c4d664(uVar2);
      func_0x000107c61170(lVar8);
      puVar9 = &UNK_110606cb0;
      func_0x000107c613fc(&UNK_110606cb0,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      puVar10 = &UNK_110606cd8;
      func_0x000107c613fc(&UNK_110606cd8,0x20,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      *(undefined8 *)(puVar10 + 0x18) = param_3;
      puVar9 = &UNK_110606d00;
      func_0x000107c613fc(&UNK_110606d00,0x20,7);
      *(code **)(puVar9 + 0x10) = FUN_10308f540;
      *(undefined **)(puVar9 + 0x18) = puVar10;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_88 = (undefined *)0x42000000;
      uStack_80 = 0x103091b74;
      puStack_78 = &UNK_110606d18;
      ppuVar11 = &puStack_90;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c61174(param_3);
      func_0x000107c61574(puVar9);
      func_0x000107c4c754(param_2);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61574(puVar10);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar5);
    }
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f38950);
  *(undefined8 *)(unaff_x20 + _DAT_112f38950) = 0;
  func_0x000107c61170(uVar2);
  ppuVar11 = &puStack_a0;
  ppuVar13 = &puStack_a0;
  puVar9 = &UNK_110606cb0;
  puVar12 = puVar9;
  func_0x000107c613fc(&UNK_110606cb0,0x18,7);
  func_0x000107c61614(puVar12 + 0x10,unaff_x20);
  puVar10 = &UNK_110606d50;
  func_0x000107c613fc(&UNK_110606d50,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_10308f56c;
  *(undefined **)(puVar10 + 0x18) = puVar12;
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10308f638;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x103091b74;
  puStack_88 = &UNK_110606d68;
  puStack_78 = puVar10;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c613fc(&UNK_110606cb0,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,unaff_x20);
  puVar6 = &UNK_110606da0;
  func_0x000107c613fc(&UNK_110606da0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10308f5a8;
  *(undefined **)(puVar6 + 0x18) = puVar9;
  uStack_80 = 0x10308f5b0;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_110606db8;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar14 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar14);
  func_0x000107c4c754(param_2);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar11);
  FUN_10308ccfc(4);
  func_0x000107c61574(puVar12);
  puVar14 = puVar10;
  func_0x000107c61544(puVar10,"",0x79,0x152,0x1d,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar14 & 1) == 0) {
    puVar9 = puVar6;
    func_0x000107c61544(puVar6,"",0x79,0x158,0x15,1);
    func_0x000107c61574(puVar6);
    if (((ulong)puVar9 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10308dfb4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10308dfb0);
  (*pcVar1)();
}



/* Entry: 10308dd98; end: 10308dfb3;  */

void FUN_10308dd98(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  puVar5 = &UNK_110606cb0;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_110606cb0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110606d50;
  func_0x000107c613fc(&UNK_110606d50,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10308f56c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10308f638;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x103091b74;
  puStack_88 = &UNK_110606d68;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c613fc(&UNK_110606cb0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_110606da0;
  func_0x000107c613fc(&UNK_110606da0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10308f5a8;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  uStack_80 = 0x10308f5b0;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_110606db8;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  FUN_10308ccfc(4);
  func_0x000107c61574(puVar2);
  puVar8 = puVar3;
  func_0x000107c61544(puVar3,"",0x79,0x152,0x1d,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10308dfb0);
    (*pcVar1)();
  }
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x79,0x158,0x15,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10308dfb4);
  (*pcVar1)();
}



/* Entry: 10308dfb4; end: 10308e023;  */

void FUN_10308dfb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10308e024(param_1,param_3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10308e024; end: 10308e1a7;  */

/* WARNING: Possible PIC construction at 0x00010308e844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308e854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308e8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308e8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308d5f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308d604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308d5f8) */
/* WARNING: Removing unreachable block (ram,0x00010308d598) */
/* WARNING: Removing unreachable block (ram,0x00010308e8c8) */
/* WARNING: Removing unreachable block (ram,0x00010308e8b8) */
/* WARNING: Removing unreachable block (ram,0x00010308e858) */
/* WARNING: Removing unreachable block (ram,0x00010308e848) */
/* WARNING: Removing unreachable block (ram,0x00010308d608) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308e024(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar1 = param_2;
  lVar6 = param_3;
  func_0x000104191a9c();
  if (lVar1 == 3) {
    if (param_3 != 0) {
      puVar3 = &UNK_110606cb0;
      puVar2 = puVar3;
      func_0x000107c613fc(&UNK_110606cb0,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      func_0x000107c613fc(&UNK_110606cb0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puStack_70 = puVar3;
      puStack_68 = (undefined *)param_2;
      func_0x0001041bf39c(0x10308ef2c,0,0x10308f5c0,&stack0xffffffffffffffa0,0x10308f5c8,auStack_80,
                          FUN_10308efec,0,0x10308eff0,0,0x10308eff4,0,0x10308eff8,0,0x10308effc,0,
                          0x10308f000,0,0x10308f004,0);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(puVar3);
    }
    return;
  }
  if (lVar1 != 2) {
    if (lVar1 != 1) {
      return;
    }
    lVar4 = 5;
    FUN_10308e57c();
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = lVar4;
      func_0x00010419f174();
    }
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar6);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    if (lVar1 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar1 + _DAT_113067e70);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(uVar8);
    func_0x000107c610f8(PTR_PTR_1126b9060);
    puStack_70 = puVar2;
    puStack_68 = puVar5;
    func_0x000107c30c2c();
    goto code_r0x000107c61170;
  }
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f388e8));
  puStack_70 = (undefined *)0x0;
  puStack_68 = (undefined *)0xe000000000000000;
  func_0x000107c602fc(0x1a);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f11cbf0);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112f38948),
                      ((undefined8 *)(unaff_x20 + _DAT_112f38948))[1]);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  uStack_78 = 3;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&puStack_70,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  puVar3 = puStack_68;
  puVar2 = puStack_70;
  puVar5 = puStack_68;
  FUN_10308e238(param_1 * 1000.0,puStack_70,puStack_68);
  func_0x000107c6142c();
  puVar7 = (undefined *)0x0;
  if (param_2 != 0) {
    func_0x00010419f174();
    puVar7 = puVar3;
  }
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar5);
    if (puVar7 == (undefined *)0x0) goto LAB_10308d51c;
LAB_10308d4ec:
    uVar8 = *(undefined8 *)(puVar7 + _DAT_113067e70);
  }
  else {
    if (puVar7 != (undefined *)0x0) goto LAB_10308d4ec;
LAB_10308d51c:
    uVar8 = 0;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(uVar8);
  func_0x000107c610f8(PTR_PTR_1126b8fd0);
  func_0x000107c30b58();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10308e1a8; end: 10308e237; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidComplete:result:attachmentMetadata:] */

/* WARNING: Possible PIC construction at 0x00010308e20c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308e21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308e210) */
/* WARNING: Removing unreachable block (ram,0x00010308e220) */

void FUN_10308e1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_10308da78(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10308e238; end: 10308e57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10308e238(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  
  lVar5 = param_2;
  uVar7 = param_3;
  func_0x000104191b2c();
  lVar6 = *(long *)(unaff_x20 + _DAT_112f388f0);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f38948);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f38948))[1];
  uVar17 = *(undefined8 *)(lVar5 + _DAT_113067eb8);
  lVar2 = ((undefined8 *)(lVar5 + _DAT_113067eb8))[1];
  uVar18 = *(undefined8 *)(lVar5 + _DAT_113067eb0);
  lVar3 = ((undefined8 *)(lVar5 + _DAT_113067eb0))[1];
  if (lVar6 == 0) {
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_98 = 0;
  }
  else {
    func_0x000107c615f0(lVar6);
    uVar7 = uVar12;
    func_0x000107c5fadc(uVar12,uVar1);
    lStack_a0 = lVar6;
    func_0x000107c5ce1c();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
    if (lStack_a0 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10308e578);
      (*pcVar4)();
    }
    func_0x000107c615f0(lVar6);
    uVar7 = uVar12;
    func_0x000107c5fadc(uVar12,uVar1);
    lStack_a8 = lVar6;
    func_0x000107c5df18();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
    if (lStack_a8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10308e57c);
      (*pcVar4)();
    }
    func_0x000107c615f0(lVar6);
    uVar8 = uVar12;
    uVar7 = uVar1;
    func_0x000107c5fadc(uVar12,uVar1);
    lStack_98 = lVar6;
    func_0x000107c42f50();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar8);
    if (lStack_98 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10308e574);
      (*pcVar4)();
    }
  }
  uVar9 = *(undefined8 *)(lVar5 + _DAT_113067ee8);
  uVar14 = *(undefined8 *)(lVar5 + _DAT_113067ee0);
  uVar15 = *(undefined8 *)(lVar5 + _DAT_113067ec8);
  func_0x000107c61174();
  uVar8 = uVar9;
  FUN_10308e6b8();
  uVar10 = uVar8;
  FUN_10308e6b8();
  uVar16 = *(undefined8 *)(lVar5 + _DAT_113067ed0);
  uVar11 = uVar16;
  func_0x000104840e10();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(uVar12,uVar1);
  if (lVar2 == 0) {
    uVar17 = 0;
  }
  else {
    func_0x000107c5fadc(uVar17);
  }
  if (lVar3 == 0) {
    uVar18 = 0;
  }
  else {
    func_0x000107c5fadc(uVar18);
  }
  puVar13 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  func_0x000107c5fadc(uVar11,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c30ad4(param_1,puVar13,param_2,uVar12,uVar17,uVar18,0,lStack_a0,lStack_a8,lStack_98,
                      uVar9,uVar14,uVar15,uVar8,uVar10,uVar16,uVar11);
  func_0x000107c61170(lVar5);
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar11);
  return puVar13;
}



/* Entry: 10308e57c; end: 10308e6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10308e57c(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f388e8));
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x24);
  func_0x000107c5fb78(0xd00000000000001c,0x800000010f11cbd0);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112f38948),
                      ((undefined8 *)(unaff_x20 + _DAT_112f38948))[1]);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&uStack_50,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_48;
  uVar2 = uStack_50;
  FUN_10308e238(param_1 * 1000.0,uStack_50,uStack_48);
  func_0x000107c6142c(uVar1);
  return uVar2;
}



/* Entry: 10308e6b8; end: 10308e6ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10308e6b8(long param_1)

{
  undefined8 uVar1;
  
  func_0x000104191a9c();
  if (param_1 - 1U < 9) {
    uVar1 = *(undefined8 *)(&UNK_10db84040 + (param_1 - 1U) * 8);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10308e700; end: 10308e8eb;  */

/* WARNING: Possible PIC construction at 0x00010308e844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308e854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308e8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308e8c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308e8b8) */
/* WARNING: Removing unreachable block (ram,0x00010308e858) */
/* WARNING: Removing unreachable block (ram,0x00010308e848) */
/* WARNING: Removing unreachable block (ram,0x00010308e8c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308e700(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = 5;
  FUN_10308e57c();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = lVar1;
    func_0x00010419f174();
  }
  func_0x000107c30ad8();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar3;
  func_0x000107c610f8(puVar3);
  func_0x000107c45a48();
  func_0x000107c610f8();
  func_0x000107c45a48();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_113067e70);
  }
  func_0x000107c610f8();
  func_0x000107c466c0(uVar4);
  func_0x000107c610f8(PTR_PTR_1126b9060);
  func_0x000107c30c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10308e8ec; end: 10308e8ef;  */

void FUN_10308e8ec(void)

{
  return;
}



/* Entry: 10308e8f0; end: 10308e95f;  */

void FUN_10308e8f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_38 [24];
  
  if (param_2 != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_38,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      func_0x000107c61174(param_2);
      FUN_10308e960();
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10308e960; end: 10308ebf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308e960(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_80;
  undefined8 uStack_78;
  
  lVar4 = *(long *)(param_2 + _DAT_113067f20);
  if ((lVar4 != 0) && (func_0x000107c49820(), 0 < lVar4)) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f388e8);
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f38948);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f38948))[1];
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f38930);
    lVar4 = lVar4 + 1;
    do {
      func_0x000107c3ceac(uVar9);
      param_1 = param_1 * 1000.0;
      lStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x17);
      func_0x000107c5fb78(0x656c626179616c70,0xef5f746e6576655f);
      func_0x000107c5fb78(uVar1,uVar2);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      puVar5 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x000107c5fddc(param_1,&lStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar3 = uStack_78;
      lVar6 = lStack_80;
      uVar8 = uStack_78;
      FUN_10308e238(lStack_80,uStack_78);
      func_0x000107c6142c(uVar3);
      lVar7 = lVar6;
      func_0x000107c30ad8();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar8);
      }
      puVar5 = PTR_PTR_1126b9098;
      func_0x000107c610f8(PTR_PTR_1126b9098);
      func_0x000107c30d14();
      func_0x000107c61170(lVar7);
      func_0x00010468cd6c(0);
      func_0x000107c610f8();
      func_0x000107c61174(lVar6);
      func_0x000107c61174(puVar5);
      lVar7 = lVar6;
      func_0x00010468c60c(lVar6,puVar5);
      func_0x000107c4d664(uVar10);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar7);
      lVar4 = lVar4 + -1;
    } while (1 < lVar4);
  }
  lVar4 = *(long *)(param_2 + _DAT_113067f28);
  if ((lVar4 != 0) && (func_0x000107c3ebcc(), (int)lVar4 != 0)) {
    FUN_10308ccfc(7);
  }
  return;
}



/* Entry: 10308ebf4; end: 10308edcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308ebf4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [24];
  
  puVar7 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar7,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2;
    if (param_1 != 0) {
      func_0x000107c5ed2c(param_1);
      lVar1 = 6;
      FUN_10308edcc();
      lVar2 = lVar1;
      func_0x000107c30ad8();
      func_0x000107c61180();
      puVar8 = puVar7;
      if (lVar2 == 0) {
        func_0x000107c5faec();
        puVar8 = puVar7;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar7);
      }
      lVar3 = param_1;
      func_0x000107c42210(param_1);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      func_0x000107c3fcb0(param_1);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      puVar6 = PTR_PTR_1126b9098;
      func_0x000107c610f8(PTR_PTR_1126b9098);
      func_0x000107c5fadc(lVar4,puVar8);
      func_0x000107c6142c(puVar8);
      func_0x000107c30d14(puVar6,lVar2,6,lVar4,puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar4);
      uVar9 = *(undefined8 *)(param_2 + _DAT_112f38930);
      func_0x00010468cd6c(0);
      func_0x000107c610f8();
      func_0x000107c61174(lVar1);
      func_0x000107c61174(puVar6);
      lVar2 = lVar1;
      func_0x00010468c60c(lVar1,puVar6);
      func_0x000107c4d664(uVar9);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10308edcc; end: 10308ef0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10308edcc(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f388e8));
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x17);
  func_0x000107c5fb78(0x656c626179616c70,0xef5f746e6576655f);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112f38948),
                      ((undefined8 *)(unaff_x20 + _DAT_112f38948))[1]);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar3 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&uStack_50,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_48;
  uVar2 = uStack_50;
  FUN_10308e238(param_1 * 1000.0,uStack_50,uStack_48);
  func_0x000107c6142c(uVar1);
  return uVar2;
}



/* Entry: 10308ef10; end: 10308ef2f;  */

void FUN_10308ef10(void)

{
  return;
}



/* Entry: 10308ef30; end: 10308efeb;  */

void FUN_10308ef30(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10308e700(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10308efec; end: 10308f007;  */

void FUN_10308efec(void)

{
  return;
}



/* Entry: 10308f008; end: 10308f05b;  */

void FUN_10308f008(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10308f05c();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10308f05c; end: 10308f3d3;  */

/* WARNING: Possible PIC construction at 0x00010308f14c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308f174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308f1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308f20c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308f200) */
/* WARNING: Removing unreachable block (ram,0x00010308f178) */
/* WARNING: Removing unreachable block (ram,0x00010308f150) */
/* WARNING: Removing unreachable block (ram,0x00010308f210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308f05c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f38950);
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000104191a9c();
    if ((int)lVar2 == 9) {
      FUN_10308ccfc(8);
    }
    else {
      lVar1 = 10;
      FUN_10308cdec();
      func_0x000107c30ad8();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      func_0x000107c610f8(PTR_PTR_1126b8fa8);
      func_0x000107c30b18();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10308f3d4; end: 10308f433; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository init] */

void FUN_10308f3d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdAttachmentHandlerEventStreamsRepository"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10308f400);
  (*pcVar1)();
}



/* Entry: 10308f434; end: 10308f51f; -[_TtC40SCAdAttachmentHandlerImplementationSwift41AdAttachmentHandlerEventStreamsRepository .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010308f460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308f4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308f4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010308f4e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308f4c4) */
/* WARNING: Removing unreachable block (ram,0x00010308f4a4) */
/* WARNING: Removing unreachable block (ram,0x00010308f464) */
/* WARNING: Removing unreachable block (ram,0x00010308f4e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308f434(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f388e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f388f0));
  return;
}



/* Entry: 10308f520; end: 10308f53f;  */

void FUN_10308f520(void)

{
  func_0x000107c61168(&PTR_PTR_1128b27e0);
  return;
}



/* Entry: 10308f540; end: 10308f56b;  */

void FUN_10308f540(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10308e024(param_1,uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10308f56c; end: 10308f5a7;  */

void FUN_10308f56c(long param_1)

{
  if (param_1 != 0) {
    func_0x0001041bc240(FUN_10308e8ec,0,0x10308f5b8);
  }
  return;
}



/* Entry: 10308f5a8; end: 10308f63b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308f5a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_68 [24];
  
  puVar8 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = lVar1;
    if (param_1 != 0) {
      func_0x000107c5ed2c(param_1);
      lVar2 = 6;
      FUN_10308edcc();
      lVar3 = lVar2;
      func_0x000107c30ad8();
      func_0x000107c61180();
      puVar9 = puVar8;
      if (lVar3 == 0) {
        func_0x000107c5faec();
        puVar9 = puVar8;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar8);
      }
      lVar4 = param_1;
      func_0x000107c42210(param_1);
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      func_0x000107c3fcb0(param_1);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      puVar7 = PTR_PTR_1126b9098;
      func_0x000107c610f8(PTR_PTR_1126b9098);
      func_0x000107c5fadc(lVar5,puVar9);
      func_0x000107c6142c(puVar9);
      func_0x000107c30d14(puVar7,lVar3,6,lVar5,puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar5);
      uVar10 = *(undefined8 *)(lVar1 + _DAT_112f38930);
      func_0x00010468cd6c(0);
      func_0x000107c610f8();
      func_0x000107c61174(lVar2);
      func_0x000107c61174(puVar7);
      lVar3 = lVar2;
      func_0x00010468c60c(lVar2,puVar7);
      func_0x000107c4d664(uVar10);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10308f63c; end: 10308f713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10308f63c(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000100b91acc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + _DAT_112f38980) + _DAT_113067470) +
                   _DAT_113067d38);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = *(long *)(lVar1 + _DAT_1138131e0);
    lVar1 = lVar2;
    if (lVar2 != 0) {
      func_0x000107c61174();
      func_0x000107c61174();
      lVar1 = lVar2;
      func_0x0001041c25dc(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x00010419e438();
      func_0x000107c61170(lVar2);
      FUN_10308b534(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    }
  }
  return lVar1;
}



/* Entry: 10308f714; end: 10308f823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308f714(undefined8 param_1)

{
  long unaff_x20;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112f38998) + 1) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f38998);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar4);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112f389a0) + 1) == '\x01') {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f389a0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar4);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112f389a8) + 1) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f389a8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar4);
  }
  func_0x0001041bbb84(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x0001041bb674(puVar2,puVar3,puVar1,param_1);
  return;
}



/* Entry: 10308f824; end: 10308f883; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAttachmentHandlerEventTracker dismissContextWithLoadingMetrics:] */

void FUN_10308f824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10308f714(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}


