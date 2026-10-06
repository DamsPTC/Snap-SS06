/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f4b850; end: 100f4b877; -[SCCommerceAttachmentToolComposerEntryPoint begin] */

void FUN_100f4b850(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f4b688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f4b878; end: 100f4b90b;  */

/* WARNING: Possible PIC construction at 0x000100f4b8c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f4b8c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b878(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4daa0);
  if (lVar1 == 0) {
    func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_end_1125c29d0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c6157c(lVar1);
    func_0x000107c5d17c(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 100f4b90c; end: 100f4b93f; -[SCCommerceAttachmentToolComposerEntryPoint end] */

void FUN_100f4b90c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100f4b878();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f4b940; end: 100f4bc17;  */

void FUN_100f4b940(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_100f4b9cc;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e4280)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef1bd80,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e4260)) ||
         (func_0x000107c605b8(0xd000000000000016,0x800000010ef1bda0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c535bc();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e63d0)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SCCommerceAttachmentToolComposer/SCCommerceAttachmentToolComposerEntryPoint.swift"
                                    ,0x51,2,0x39,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4bc18);
                (*pcVar1)();
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53680();
            goto LAB_100f4b9cc;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c536e0();
      }
      goto LAB_100f4b9cc;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c59278();
LAB_100f4b9cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f4bc18; end: 100f4bcc3; -[SCCommerceAttachmentToolComposerEntryPoint setValue:forIvarName:] */

void FUN_100f4bc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f4b940(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f4bcc4; end: 100f4bd73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4bcc4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4da78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4da80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4da88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4da90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4da98,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4daa0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f4bd74; end: 100f4bd93; -[SCCommerceAttachmentToolComposerEntryPoint init] */

void FUN_100f4bd74(void)

{
  FUN_100f4bcc4();
  return;
}



/* Entry: 100f4bd94; end: 100f4bdc7;  */

void FUN_100f4bd94(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f4bdc8; end: 100f4be3f; -[SCCommerceAttachmentToolComposerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4bdc8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4da78);
  func_0x000107c61610(param_1 + _DAT_112d4da80);
  func_0x000107c61610(param_1 + _DAT_112d4da88);
  func_0x000107c61610(param_1 + _DAT_112d4da90);
  func_0x000107c61610(param_1 + _DAT_112d4da98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4daa0));
  return;
}



/* Entry: 100f4be40; end: 100f4be5f;  */

void FUN_100f4be40(void)

{
  func_0x000107c61168(&PTR_PTR_1127a4068);
  return;
}



/* Entry: 100f4be60; end: 100f4bef7;  */

void FUN_100f4be60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd000000000000016;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010ef1be20;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_6;
  return;
}



/* Entry: 100f4bef8; end: 100f4c4fb;  */

/* WARNING: Possible PIC construction at 0x000100f4bf64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4c058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4c18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4c260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4c27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4c4a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4c4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4c4c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4c108: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f4c4cc) */
/* WARNING: Removing unreachable block (ram,0x000100f4c4bc) */
/* WARNING: Removing unreachable block (ram,0x000100f4c4a8) */
/* WARNING: Removing unreachable block (ram,0x000100f4c280) */
/* WARNING: Removing unreachable block (ram,0x000100f4c294) */
/* WARNING: Removing unreachable block (ram,0x000100f4c28c) */
/* WARNING: Removing unreachable block (ram,0x000100f4c2bc) */
/* WARNING: Removing unreachable block (ram,0x000100f4c264) */
/* WARNING: Removing unreachable block (ram,0x000100f4c190) */
/* WARNING: Removing unreachable block (ram,0x000100f4c1b0) */
/* WARNING: Removing unreachable block (ram,0x000100f4c1c8) */
/* WARNING: Removing unreachable block (ram,0x000100f4c1f4) */
/* WARNING: Removing unreachable block (ram,0x000100f4c20c) */
/* WARNING: Removing unreachable block (ram,0x000100f4c05c) */
/* WARNING: Removing unreachable block (ram,0x000100f4c4f8) */
/* WARNING: Removing unreachable block (ram,0x000100f4c0c0) */
/* WARNING: Removing unreachable block (ram,0x000100f4c134) */
/* WARNING: Removing unreachable block (ram,0x000100f4c0e0) */
/* WARNING: Removing unreachable block (ram,0x000100f4c13c) */
/* WARNING: Removing unreachable block (ram,0x000100f4bf68) */
/* WARNING: Removing unreachable block (ram,0x000100f4bf6c) */
/* WARNING: Removing unreachable block (ram,0x000100f4c0fc) */
/* WARNING: Removing unreachable block (ram,0x000100f4bf90) */
/* WARNING: Removing unreachable block (ram,0x000100f4c104) */
/* WARNING: Removing unreachable block (ram,0x000100f4bfc4) */
/* WARNING: Removing unreachable block (ram,0x000100f4c10c) */
/* WARNING: Removing unreachable block (ram,0x000100f4c110) */

void FUN_100f4bef8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c509b4(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 100f4c4fc; end: 100f4c563;  */

undefined8 FUN_100f4c4fc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(param_1);
  }
  return uVar1;
}



/* Entry: 100f4c564; end: 100f4c587;  */

undefined8 FUN_100f4c564(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x60);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(lVar1);
  }
  return uVar2;
}



/* Entry: 100f4c588; end: 100f4c69b;  */

long FUN_100f4c588(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x50);
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4f7fc(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar3 = *(long *)(unaff_x20 + 0x58);
    func_0x000107c44588();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c5fadc(uVar4,*(undefined8 *)(unaff_x20 + 0x18));
      uVar5 = uVar4;
      FUN_100f4d0c0();
      lVar3 = lVar2;
      func_0x000107c4c1b4(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar1);
      return lVar3;
    }
    func_0x000107c61170(lVar1);
  }
  return 0;
}



/* Entry: 100f4c69c; end: 100f4c86b;  */

long FUN_100f4c69c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_b0;
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c3dae4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar5 = &UNK_11036cb08;
  puVar4 = puVar5;
  func_0x000107c613fc(&UNK_11036cb08,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  func_0x000107c613fc(&UNK_11036cb08,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_100f4d088;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x100e1779c;
  puStack_68 = &UNK_11036cbb0;
  ppuVar7 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  uStack_90 = 0x100f4d090;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x100e17304;
  puStack_98 = &UNK_11036cbd8;
  puStack_88 = puVar5;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_88);
  puVar1 = puStack_58;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar1);
  if (lVar3 == 0) {
    func_0x000107c61170(puVar6);
    lVar2 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c4c1e0(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar6);
  }
  return lVar2;
}



/* Entry: 100f4c86c; end: 100f4c933;  */

undefined * FUN_100f4c86c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x48);
  func_0x000107c3fe30();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x000107c40038();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    if (puVar1 != (undefined *)0x0) goto LAB_100f4c8e0;
  }
  puVar1 = PTR_PTR_1126be5a0;
  func_0x000107c610f8(PTR_PTR_1126be5a0);
  func_0x000107c453e4();
LAB_100f4c8e0:
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 100f4c934; end: 100f4c98f;  */

void FUN_100f4c934(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_100f4c998(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100f4c990; end: 100f4c997;  */

void FUN_100f4c990(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_100f4c998(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100f4c998; end: 100f4cb2f;  */

void FUN_100f4c998(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x000107c4b658();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar8 = 0;
      param_2 = 0;
    }
    else {
      lVar8 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    func_0x000107c5b304();
    puVar4 = PTR___ss5Int64VN_11034ee50;
    puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
    func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                        PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
    puVar7 = puVar6;
    func_0x000107c5b078(param_1);
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    if (param_2 == 0) {
      lVar8 = 0;
    }
    else {
      func_0x000107c5fadc(lVar8,param_2);
      func_0x000107c6142c(param_2);
    }
    puVar5 = PTR_PTR_1126a6058;
    func_0x000107c610f8();
    func_0x000107c5fadc(puVar4,puVar6);
    func_0x000107c6142c(puVar6);
    func_0x000107c5fadc(lVar3,puVar7);
    func_0x000107c6142c(puVar7);
    func_0x000107c49494();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar3);
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4cb30);
      (*pcVar1)();
    }
    func_0x000107c41ca0(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 100f4cb30; end: 100f4cbfb;  */

void FUN_100f4cb30(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c31180();
    if (lVar1 == -1) {
      func_0x000107c5eecc(0xd00000000000001e,0x800000010ef1be40,
                          PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c41a9c();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100f4cbfc; end: 100f4cc03;  */

void FUN_100f4cbfc(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = param_1;
    func_0x000107c31180();
    if (lVar2 == -1) {
      func_0x000107c5eecc(0xd00000000000001e,0x800000010ef1be40,
                          PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c41a9c();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100f4cc04; end: 100f4cd87;  */

undefined * FUN_100f4cc04(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c42ac4();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126a6050;
  func_0x000107c610f8(PTR_PTR_1126a6050);
  func_0x000107c453e4();
  lVar4 = lVar2;
  func_0x000107c4f31c(lVar2);
  func_0x000107c61180();
  func_0x000107c57894(puVar3,param_2,lVar4);
  func_0x000107c61170(lVar4);
  lVar4 = lVar2;
  func_0x000107c4e08c();
  func_0x000107c3117c();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4cd84);
    (*pcVar1)();
  }
  func_0x000107c535c8(puVar3,param_2,lVar4);
  func_0x000107c61170(lVar4);
  lVar4 = lVar2;
  func_0x000107c3fe4c(lVar2);
  func_0x000107c61180();
  func_0x000107c535d0(puVar3,param_2,lVar4);
  func_0x000107c61170(lVar4);
  lVar4 = lVar2;
  func_0x000107c5b648(lVar2);
  func_0x000107c61180();
  func_0x000107c59564(puVar3,param_2,lVar4);
  func_0x000107c61170(lVar4);
  lVar4 = lVar2;
  func_0x000107c5b674(lVar2);
  func_0x000107c61180();
  func_0x000107c59584(puVar3,param_2,lVar4);
  func_0x000107c61170(lVar4);
  lVar4 = lVar2;
  func_0x000107c5bee8(lVar2);
  func_0x000107c61180();
  func_0x000107c598e0(puVar3,param_2,lVar4);
  func_0x000107c61170(lVar4);
  lVar4 = lVar2;
  func_0x000107c4f33c();
  func_0x000107c31184();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c535cc(puVar3,param_2,lVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar4);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4cd88);
  (*pcVar1)();
}



/* Entry: 100f4cd88; end: 100f4ce13;  */

void FUN_100f4cd88(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 100f4ce14; end: 100f4ce77;  */

void FUN_100f4ce14(void)

{
  FUN_100f4bef8();
  return;
}



/* Entry: 100f4ce78; end: 100f4ceff;  */

void FUN_100f4ce78(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x60);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c4f018();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100f4cf00; end: 100f4d01b;  */

void FUN_100f4cf00(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lVar3 = *(long *)(param_3 + 0x60);
    if (lVar3 == 0) {
      func_0x000107c61574();
    }
    else {
      puVar1 = &UNK_11036cc10;
      func_0x000107c613fc(&UNK_11036cc10,0x20,7);
      *(undefined8 *)(puVar1 + 0x10) = param_1;
      *(undefined8 *)(puVar1 + 0x18) = param_2;
      pcStack_68 = FUN_100f4d098;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11036cc28;
      ppuVar2 = &puStack_88;
      puStack_60 = puVar1;
      func_0x000107c60bc4(ppuVar2);
      puVar1 = puStack_60;
      func_0x000107c61174(lVar3);
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c61574(puVar1);
      func_0x000107c420a8(lVar3);
      func_0x000107c61574(param_3);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 100f4d01c; end: 100f4d03b;  */

void FUN_100f4d01c(void)

{
  func_0x000107c61168(&PTR_PTR_112d4db10);
  return;
}



/* Entry: 100f4d03c; end: 100f4d087;  */

void FUN_100f4d03c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100f4d088; end: 100f4d097;  */

void FUN_100f4d088(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c4f018();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100f4d098; end: 100f4d0bf;  */

void FUN_100f4d098(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 100f4d0c0; end: 100f4d1ef;  */

undefined * FUN_100f4d0c0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar5 = 0x800000010ef1be60;
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1be60);
  puVar3 = puVar1;
  func_0x000107c545b8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c57f3c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5343c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar3 = PTR_PTR_1126b0380;
  func_0x000107c61168();
  func_0x000107c5d8e4();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  puVar4 = puVar1;
  func_0x000107c5a2ec(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 100f4d1f0; end: 100f4d21f;  */

void FUN_100f4d1f0(long param_1,long param_2)

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



/* Entry: 100f4d220; end: 100f4d29b; -[_TtC23SCCommerceFitFinderImpl33SCCommerceFitFinderViewController initWithValdiView:] */

undefined1 * FUN_100f4d220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_30;
  uVar2 = param_1;
  func_0x000100f4d5b0();
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



/* Entry: 100f4d29c; end: 100f4d2fb; -[_TtC23SCCommerceFitFinderImpl33SCCommerceFitFinderViewController initWithCoder:] */

void FUN_100f4d29c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0x6c706d6920746f4e,0xef6465746e656d65,
                      "SCCommerceFitFinderImpl/SCCommerceFitFinderViewController.swift",0x3f,2,0xc,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4d2fc);
  (*pcVar1)();
}



/* Entry: 100f4d2fc; end: 100f4d497;  */

void FUN_100f4d2fc(undefined8 param_1,uint param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined1 *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  lVar2 = unaff_x20;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar6 = (undefined1 *)0x0;
    if (param_3 != 0) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_11036cc80;
      lStack_60 = param_3;
      uStack_58 = param_4;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c6157c(param_4);
      func_0x000107c61574();
      puVar6 = (undefined1 *)ppuVar5;
    }
    func_0x000100f4d5b0();
    func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_presentViewController_animated_c_112621588,
                        param_1,param_2 & 1,puVar6);
    func_0x000107c60bd0(puVar6);
  }
  else {
    func_0x000107c61170();
    func_0x000107c61174();
    lVar2 = unaff_x20;
    func_0x000107c4f078();
    func_0x000107c61180();
    while (lVar2 != 0) {
      func_0x000107c61170(unaff_x20);
      lVar3 = lVar2;
      func_0x000107c4f078();
      func_0x000107c61180();
      unaff_x20 = lVar2;
      lVar2 = lVar3;
    }
    puVar6 = (undefined1 *)0x0;
    if (param_3 != 0) {
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_11036cca8;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_60 = param_3;
      uStack_58 = param_4;
      func_0x000107c60bc4(&puStack_80);
      uVar1 = uStack_58;
      func_0x000107c6157c(param_4);
      func_0x000107c61574(uVar1);
      puVar6 = (undefined1 *)ppuVar4;
    }
    func_0x000107c4f018(unaff_x20);
    func_0x000107c60bd0(puVar6);
    func_0x000107c61170(unaff_x20);
  }
  return;
}



/* Entry: 100f4d498; end: 100f4d54b; -[_TtC23SCCommerceFitFinderImpl33SCCommerceFitFinderViewController presentViewController:animated:completion:] */

/* WARNING: Possible PIC construction at 0x000100f4d530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f4d534) */

void FUN_100f4d498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_11036cc68;
    func_0x000107c613fc(&UNK_11036cc68,0x18,7);
    *(long *)(puVar1 + 0x10) = param_5;
    pcVar2 = FUN_100f4d5d0;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100f4d2fc(param_3,param_4,pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f4d54c; end: 100f4d553;  */

void FUN_100f4d54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 100f4d554; end: 100f4d5cf; -[_TtC23SCCommerceFitFinderImpl33SCCommerceFitFinderViewController initWithNibName:bundle:] */

void FUN_100f4d554(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceFitFinderImpl.SCCommerceFitFinderViewController",0x39,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4d580);
  (*pcVar1)();
}



/* Entry: 100f4d5d0; end: 100f4d5ff;  */

void FUN_100f4d5d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 100f4d600; end: 100f4d60b; -[SCCommerceFitFinderCellEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d600(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4dbe8;
  func_0x000107c61428(param_1 + _DAT_112d4dbe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4d60c; end: 100f4d617; -[SCCommerceFitFinderCellEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d60c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4dbe8;
  func_0x000107c61428(param_1 + _DAT_112d4dbe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4d618; end: 100f4d623; -[SCCommerceFitFinderCellEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d618(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4dbf0;
  func_0x000107c61428(param_1 + _DAT_112d4dbf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4d624; end: 100f4d62f; -[SCCommerceFitFinderCellEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4dbf0;
  func_0x000107c61428(param_1 + _DAT_112d4dbf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4d630; end: 100f4d63b; -[SCCommerceFitFinderCellEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d630(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4dbf8;
  func_0x000107c61428(param_1 + _DAT_112d4dbf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4d63c; end: 100f4d647; -[SCCommerceFitFinderCellEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d63c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4dbf8;
  func_0x000107c61428(param_1 + _DAT_112d4dbf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4d648; end: 100f4d653; -[SCCommerceFitFinderCellEntryPoint showcaseServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d648(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4dc00;
  func_0x000107c61428(param_1 + _DAT_112d4dc00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4d654; end: 100f4d65f; -[SCCommerceFitFinderCellEntryPoint setShowcaseServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d654(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4dc00;
  func_0x000107c61428(param_1 + _DAT_112d4dc00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4d660; end: 100f4d66b; -[SCCommerceFitFinderCellEntryPoint valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d660(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4dc08;
  func_0x000107c61428(param_1 + _DAT_112d4dc08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4d66c; end: 100f4d677; -[SCCommerceFitFinderCellEntryPoint setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4dc08;
  func_0x000107c61428(param_1 + _DAT_112d4dc08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4d678; end: 100f4d683; -[SCCommerceFitFinderCellEntryPoint composerNetworkBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d678(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4dc10;
  func_0x000107c61428(param_1 + _DAT_112d4dc10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4d684; end: 100f4d68f; -[SCCommerceFitFinderCellEntryPoint setComposerNetworkBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d684(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4dc10;
  func_0x000107c61428(param_1 + _DAT_112d4dc10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4d690; end: 100f4d69b; -[SCCommerceFitFinderCellEntryPoint commerceConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d690(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4dc18;
  func_0x000107c61428(param_1 + _DAT_112d4dc18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4d69c; end: 100f4d6a7; -[SCCommerceFitFinderCellEntryPoint setCommerceConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d69c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4dc18;
  func_0x000107c61428(param_1 + _DAT_112d4dc18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4d6a8; end: 100f4d6b3; -[SCCommerceFitFinderCellEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d6a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4dc20;
  func_0x000107c61428(param_1 + _DAT_112d4dc20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4d6b4; end: 100f4d6f7;  */

void FUN_100f4d6b4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4d6f8; end: 100f4d703; -[SCCommerceFitFinderCellEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d6f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4dc20;
  func_0x000107c61428(param_1 + _DAT_112d4dc20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4d704; end: 100f4d757;  */

void FUN_100f4d704(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4d758; end: 100f4da77;  */

/* WARNING: Possible PIC construction at 0x000100f4d8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4d900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4d910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4d920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4da28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4da38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4da48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4d9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4da08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4da18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4d9d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4d9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4d9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4d998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4d988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f4d99c) */
/* WARNING: Removing unreachable block (ram,0x000100f4d9bc) */
/* WARNING: Removing unreachable block (ram,0x000100f4d9ec) */
/* WARNING: Removing unreachable block (ram,0x000100f4d9dc) */
/* WARNING: Removing unreachable block (ram,0x000100f4da1c) */
/* WARNING: Removing unreachable block (ram,0x000100f4da0c) */
/* WARNING: Removing unreachable block (ram,0x000100f4d9fc) */
/* WARNING: Removing unreachable block (ram,0x000100f4da4c) */
/* WARNING: Removing unreachable block (ram,0x000100f4da3c) */
/* WARNING: Removing unreachable block (ram,0x000100f4da2c) */
/* WARNING: Removing unreachable block (ram,0x000100f4d924) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100f4d914) */
/* WARNING: Removing unreachable block (ram,0x000100f4d904) */
/* WARNING: Removing unreachable block (ram,0x000100f4d8f4) */
/* WARNING: Removing unreachable block (ram,0x000100f4d98c) */

void FUN_100f4d758(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3ff88();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c5af20();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c5dbac();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c3ffc8();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar7 = unaff_x20;
            func_0x000107c3fe34();
            func_0x000107c61180();
            if (lVar7 != 0) {
              func_0x000107c3e274();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar8 = 0;
                FUN_100f4d01c();
                func_0x000107c613fc();
                *(undefined8 *)(lVar8 + 0x10) = 0xd000000000000016;
                *(undefined8 *)(lVar8 + 0x18) = 0x800000010ef1be20;
                *(undefined8 *)(lVar8 + 0x60) = 0;
                *(undefined8 *)(lVar8 + 0x68) = 0;
                *(long *)(lVar8 + 0x20) = lVar1;
                *(long *)(lVar8 + 0x28) = lVar2;
                *(long *)(lVar8 + 0x30) = lVar3;
                *(long *)(lVar8 + 0x38) = lVar4;
                *(long *)(lVar8 + 0x40) = lVar5;
                *(long *)(lVar8 + 0x48) = lVar7;
                *(long *)(lVar8 + 0x50) = unaff_x20;
                *(long *)(lVar8 + 0x58) = lVar6;
                func_0x000107c61174();
                func_0x000107c61174(lVar2);
                func_0x000107c61174(lVar3);
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174(lVar6);
                func_0x000107c61174(lVar7);
                func_0x000107c61174(unaff_x20);
                FUN_100f4bef8();
                lVar1 = unaff_x20;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100f4da78; end: 100f4da9f; -[SCCommerceFitFinderCellEntryPoint begin] */

void FUN_100f4da78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f4d758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f4daa0; end: 100f4db33;  */

/* WARNING: Possible PIC construction at 0x000100f4dae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f4daec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4daa0(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4dc28);
  if (lVar1 == 0) {
    func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_end_1125c29d0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c6157c(lVar1);
    func_0x000107c5d17c(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 100f4db34; end: 100f4db67; -[SCCommerceFitFinderCellEntryPoint end] */

void FUN_100f4db34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100f4daa0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f4db68; end: 100f4df7b;  */

void FUN_100f4db68(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_100f4dbf4;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e63d0)) ||
         (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53680();
        goto LAB_100f4dbf4;
      }
      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e4280)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010ef1bd80,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e4100)) ||
             (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1bf00,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a46c();
          }
          else {
            uVar2 = 0xd00000000000001d;
            if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10e40e0)) ||
               (func_0x000107c605b8(0xd00000000000001d,0x800000010ef1bf20,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c536a0();
            }
            else {
              if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e4260)) {
                uVar2 = 0;
                func_0x000107c605b8(0xd000000000000016,0x800000010ef1bda0,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ed650)) &&
                     (func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "SCCommerceFitFinderImpl/SCCommerceFitFinderCellEntryPoint.swift"
                                        ,0x3f,2,0x4d,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4df7c);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52954();
                  goto LAB_100f4dbf4;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c535bc();
            }
          }
          goto LAB_100f4dbf4;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59278();
      goto LAB_100f4dbf4;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c536e0();
LAB_100f4dbf4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f4df7c; end: 100f4e027; -[SCCommerceFitFinderCellEntryPoint setValue:forIvarName:] */

void FUN_100f4df7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f4db68(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f4e028; end: 100f4e113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4e028(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4dbe8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4dbf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4dbf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4dc00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4dc08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4dc10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4dc18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4dc20,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4dc28) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f4e114; end: 100f4e133; -[SCCommerceFitFinderCellEntryPoint init] */

void FUN_100f4e114(void)

{
  FUN_100f4e028();
  return;
}



/* Entry: 100f4e134; end: 100f4e167;  */

void FUN_100f4e134(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f4e168; end: 100f4e20f; -[SCCommerceFitFinderCellEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4e168(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4dbe8);
  func_0x000107c61610(param_1 + _DAT_112d4dbf0);
  func_0x000107c61610(param_1 + _DAT_112d4dbf8);
  func_0x000107c61610(param_1 + _DAT_112d4dc00);
  func_0x000107c61610(param_1 + _DAT_112d4dc08);
  func_0x000107c61610(param_1 + _DAT_112d4dc10);
  func_0x000107c61610(param_1 + _DAT_112d4dc18);
  func_0x000107c61610(param_1 + _DAT_112d4dc20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4dc28));
  return;
}



/* Entry: 100f4e210; end: 100f4e22f;  */

void FUN_100f4e210(void)

{
  func_0x000107c61168(&PTR_PTR_1127a41f8);
  return;
}



/* Entry: 100f4e230; end: 100f4e9fb;  */

void FUN_100f4e230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  return;
}



/* Entry: 100f4e9fc; end: 100f4eb3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f4e9fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined **)(unaff_x20 + 0x78) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar6);
  lVar5 = *(long *)(unaff_x20 + 0x70);
  if (lVar5 != 0) {
    puVar3 = &UNK_11036cd68;
    func_0x000107c613fc(&UNK_11036cd68,0x18,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    uVar6 = *(undefined8 *)(lVar5 + _DAT_112d4dd70);
    pcStack_50 = FUN_100f4ec20;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_11036cd80;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c61174(puVar2);
    func_0x000107c61174(lVar5);
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c41864(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61574(puVar3);
  }
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 100f4eb3c; end: 100f4ebdf;  */

void FUN_100f4eb3c(void)

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



/* Entry: 100f4ebe0; end: 100f4ec1f;  */

void FUN_100f4ebe0(void)

{
  func_0x000100f4e2d0();
  return;
}



/* Entry: 100f4ec20; end: 100f4ec43;  */

void FUN_100f4ec20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 100f4ec44; end: 100f4ec63;  */

void FUN_100f4ec44(void)

{
  func_0x000107c61168(&PTR_PTR_112d4dc98);
  return;
}



/* Entry: 100f4ec64; end: 100f4f15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4ec64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  ppuVar14 = &puStack_a0;
  puVar3 = PTR_PTR_1126afe50;
  func_0x000107c610f8(PTR_PTR_1126afe50);
  func_0x000107c4842c();
  puVar4 = PTR_PTR_1126a6060;
  func_0x000107c610f8(PTR_PTR_1126a6060);
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126a6068;
  func_0x000107c610f8(PTR_PTR_1126a6068);
  func_0x000107c453e4();
  puVar8 = &UNK_11036cdd8;
  puVar11 = puVar8;
  func_0x000107c613fc(&UNK_11036cdd8,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100f504e4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x100f50560;
  puStack_88 = &UNK_11036ce90;
  puStack_78 = puVar11;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c56fb4(puVar5);
  func_0x000107c60bd0(ppuVar6);
  puVar11 = puVar8;
  func_0x000107c613fc(&UNK_11036cdd8,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  pcStack_80 = FUN_100f50504;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11036ceb8;
  puStack_78 = puVar11;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c534bc(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c613fc(&UNK_11036cdd8,0x18,7);
  lVar10 = unaff_x20;
  func_0x000107c61614(puVar8 + 0x10);
  pcStack_80 = FUN_100f5050c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x100f5055c;
  puStack_88 = &UNK_11036cee0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c548c8(puVar5);
  func_0x000107c60bd0(ppuVar9);
  lVar16 = *(long *)(unaff_x20 + _DAT_112d4dd60);
  lVar17 = lVar16;
  func_0x000107c5cc24();
  func_0x000107c61180();
  lVar15 = lVar10;
  if (lVar17 == 0) {
    func_0x000107c5faec();
    lVar15 = lVar10;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c59efc(puVar4);
  func_0x000107c61170(lVar17);
  func_0x000107c5df88();
  func_0x000107c61180();
  if (lVar16 == 0) {
    lVar17 = 0;
  }
  else {
    lVar10 = lVar16;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar16);
    lVar17 = lVar10;
    func_0x000107c5ee20(lVar10,lVar15);
    func_0x00010006c090(lVar10,lVar15);
  }
  func_0x000107c554ac(puVar4);
  func_0x000107c61170(lVar17);
  func_0x000107c569fc(puVar4);
  func_0x000107c52d78(puVar4);
  func_0x000107c59270(puVar4);
  func_0x000107c56994(puVar4);
  func_0x000107c548d8(puVar4);
  puVar8 = PTR_PTR_1126b0380;
  func_0x000107c61168();
  func_0x000107c3dec4();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar15);
  }
  func_0x000107c527fc(puVar4);
  func_0x000107c61170(puVar8);
  FUN_100f4fb44();
  func_0x000107c535e0(puVar4);
  func_0x000107c61170(puVar8);
  func_0x000107c535d4(puVar4);
  puVar8 = PTR_PTR_1126a6070;
  func_0x000107c610f8(PTR_PTR_1126a6070);
  func_0x000107c49520();
  puVar11 = (undefined *)0x0;
  func_0x000100f5073c();
  func_0x000107c610f8();
  func_0x000107c49460();
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d4dde8);
  *(undefined **)(unaff_x20 + _DAT_112d4dde8) = puVar11;
  func_0x000107c61174();
  func_0x000107c61170(uVar18);
  if (puVar11 != (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    func_0x000107c610f8();
    func_0x000107c483f8();
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d4ddd0);
    *(undefined **)(unaff_x20 + _DAT_112d4ddd0) = puVar12;
    func_0x000107c61174();
    func_0x000107c61170(uVar18);
    puVar13 = puVar5;
    puVar2 = puVar8;
    if (puVar12 != (undefined *)0x0) {
      func_0x000107c5677c(puVar12);
      puVar13 = PTR_PTR_1126aead0;
      func_0x000107c610f8();
      pcStack_80 = FUN_100f4f27c;
      puStack_78 = (undefined *)0x0;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1001de374;
      puStack_88 = &UNK_11036cf08;
      func_0x000107c60bc4(&puStack_a0);
      func_0x000107c4799c();
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c61574(puStack_78);
      uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d4ddd8);
      *(undefined **)(unaff_x20 + _DAT_112d4ddd8) = puVar13;
      func_0x000107c615e8(uVar18);
      func_0x000107c561c0(puVar3);
      func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d4dd70));
      func_0x000107c61170(puVar5);
      puVar13 = puVar8;
      puVar2 = puVar11;
      puVar11 = puVar12;
    }
    puVar8 = puVar11;
    puVar5 = puVar2;
    func_0x000107c61170(puVar13);
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100f4f160; end: 100f4f1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4f160(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c5cc34(*(undefined8 *)(param_1 + _DAT_112d4ddc8));
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f4f1c4; end: 100f4f27b;  */

void FUN_100f4f1c4(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    (*param_3)(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100f4f27c; end: 100f4f283;  */

undefined8 FUN_100f4f27c(void)

{
  return 0;
}



/* Entry: 100f4f284; end: 100f4f48f;  */

/* WARNING: Possible PIC construction at 0x000100f4f350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f4f354) */
/* WARNING: Removing unreachable block (ram,0x000100f4f384) */
/* WARNING: Removing unreachable block (ram,0x000100f4f3a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4f284(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 auStack_80 [48];
  
  lVar2 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5e118(param_1);
  func_0x000107c45124();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  uVar3 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  uVar1 = uVar3 & 0xffffffffffff;
  if (((ulong)puVar4 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000107c5edd0(auStack_80 + -extraout_x8,uVar3,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar4);
  return;
}



/* Entry: 100f4f490; end: 100f4f54f;  */

void FUN_100f4f490(undefined8 param_1,long param_2,uint param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100f4fc14(param_3 & 1,param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100f4f550; end: 100f4fb43;  */

/* WARNING: Possible PIC construction at 0x000100f4f5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4f914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4f9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4f9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4f9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4fa14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4fa88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4fa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4f88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4fad4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f4f890) */
/* WARNING: Removing unreachable block (ram,0x000100f4fa9c) */
/* WARNING: Removing unreachable block (ram,0x000100f4faa0) */
/* WARNING: Removing unreachable block (ram,0x000100f4fa8c) */
/* WARNING: Removing unreachable block (ram,0x000100f4fa18) */
/* WARNING: Removing unreachable block (ram,0x000100f4f9e4) */
/* WARNING: Removing unreachable block (ram,0x000100f4f9d4) */
/* WARNING: Removing unreachable block (ram,0x000100f4f9c4) */
/* WARNING: Removing unreachable block (ram,0x000100f4f918) */
/* WARNING: Removing unreachable block (ram,0x000100f4fad8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4f550(byte *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte **ppbVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  byte *pbStack_70;
  ulong uStack_68;
  
  pbVar12 = param_1;
  func_0x000107c4f31c();
  func_0x000107c61180();
  uVar9 = param_2;
  if (pbVar12 == (byte *)0x0) {
    func_0x000107c5faec();
    uVar9 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c5faec();
  lVar16 = *(long *)(unaff_x20 + _DAT_112d4dd80);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar16 != 0) goto code_r0x000107c61170;
  lVar16 = *(long *)(unaff_x20 + _DAT_112d4ddd8);
  if (lVar16 != 0) {
    func_0x000107c615f0(lVar16);
    func_0x000107c5bee8();
    func_0x000107c61180();
    if (param_1 != (byte *)0x0) {
      uVar10 = (ulong)pbVar12 & 0xffffffffffff;
      uVar11 = uVar9 >> 0x38 & 0xf;
      uVar18 = uVar10;
      if ((uVar9 & 0x2000000000000000) != 0) {
        uVar18 = uVar11;
      }
      if (uVar18 == 0) {
        func_0x000107c6142c(uVar9);
        goto code_r0x000107c61170;
      }
      if ((uVar9 >> 0x3c & 1) == 0) {
        if ((uVar9 >> 0x3d & 1) != 0) {
          pbStack_70 = pbVar12;
          uStack_68 = uVar9 & 0xffffffffffffff;
          uVar19 = (uint)pbVar12 & 0xff;
          if (uVar19 == 0x2b) {
            if (uVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100f4fb44);
              (*pcVar7)();
            }
            lVar16 = uVar11 - 1;
            if (lVar16 == 0) goto LAB_100f4f878;
            uVar18 = 0;
            pbVar12 = (byte *)((ulong)&pbStack_70 | 1);
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (auVar4._8_8_ = 0, auVar4._0_8_ = uVar18, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
                 (uVar14 = uVar18 * 10, uVar11 = (ulong)(byte)(*pbVar12 - 0x30),
                 uVar18 = uVar14 + uVar11, CARRY8(uVar14,uVar11))) goto LAB_100f4f878;
              uVar19 = 0;
              lVar16 = lVar16 + -1;
              pbVar12 = pbVar12 + 1;
            } while (lVar16 != 0);
          }
          else if (uVar19 == 0x2d) {
            if (uVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100f4fb3c);
              (*pcVar7)();
            }
            lVar16 = uVar11 - 1;
            if (lVar16 == 0) {
LAB_100f4f878:
              uVar19 = 1;
            }
            else {
              uVar18 = 0;
              pbVar12 = (byte *)((ulong)&pbStack_70 | 1);
              do {
                if (((9 < *pbVar12 - 0x30) ||
                    (auVar2._8_8_ = 0, auVar2._0_8_ = uVar18, SUB168(auVar2 * ZEXT816(10),8) != 0))
                   || (uVar14 = uVar18 * 10, uVar11 = (ulong)(byte)(*pbVar12 - 0x30),
                      uVar18 = uVar14 - uVar11, uVar14 < uVar11)) goto LAB_100f4f878;
                uVar19 = 0;
                lVar16 = lVar16 + -1;
                pbVar12 = pbVar12 + 1;
              } while (lVar16 != 0);
            }
          }
          else {
            if (uVar11 == 0) goto LAB_100f4f878;
            uVar18 = 0;
            ppbVar13 = &pbStack_70;
            do {
              if (((9 < *(byte *)ppbVar13 - 0x30) ||
                  (auVar6._8_8_ = 0, auVar6._0_8_ = uVar18, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
                 (uVar15 = uVar18 * 10, uVar14 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30),
                 uVar18 = uVar15 + uVar14, CARRY8(uVar15,uVar14))) goto LAB_100f4f878;
              uVar19 = 0;
              uVar11 = uVar11 - 1;
              ppbVar13 = (byte **)((long)ppbVar13 + 1);
            } while (uVar11 != 0);
          }
          goto LAB_100f4f880;
        }
        if (((ulong)pbVar12 >> 0x3c & 1) == 0) {
          uVar10 = uVar9;
          func_0x000107c60358();
        }
        else {
          pbVar12 = (byte *)((uVar9 & 0xfffffffffffffff) + 0x20);
        }
        if (*pbVar12 == 0x2b) {
          lVar16 = uVar10 - 1;
          if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100f4fb40);
            (*pcVar7)();
          }
          if (lVar16 == 0) goto code_r0x000107c61170;
          uVar18 = 0;
          do {
            pbVar12 = pbVar12 + 1;
            if (((9 < *pbVar12 - 0x30) ||
                (auVar3._8_8_ = 0, auVar3._0_8_ = uVar18, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
               (uVar14 = uVar18 * 10, uVar11 = (ulong)(byte)(*pbVar12 - 0x30),
               uVar18 = uVar14 + uVar11, CARRY8(uVar14,uVar11))) goto code_r0x000107c61170;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        else if (*pbVar12 == 0x2d) {
          lVar16 = uVar10 - 1;
          if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100f4fb38);
            (*pcVar7)();
          }
          if (lVar16 == 0) goto code_r0x000107c61170;
          uVar18 = 0;
          do {
            pbVar12 = pbVar12 + 1;
            if (((9 < *pbVar12 - 0x30) ||
                (auVar1._8_8_ = 0, auVar1._0_8_ = uVar18, SUB168(auVar1 * ZEXT816(10),8) != 0)) ||
               (uVar14 = uVar18 * 10, uVar11 = (ulong)(byte)(*pbVar12 - 0x30),
               uVar18 = uVar14 - uVar11, uVar14 < uVar11)) goto code_r0x000107c61170;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        else {
          if (uVar10 == 0) goto code_r0x000107c61170;
          uVar18 = 0;
          if (pbVar12 != (byte *)0x0) {
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (auVar5._8_8_ = 0, auVar5._0_8_ = uVar18, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
                 (uVar14 = uVar18 * 10, uVar11 = (ulong)(byte)(*pbVar12 - 0x30),
                 uVar18 = uVar14 + uVar11, CARRY8(uVar14,uVar11))) goto code_r0x000107c61170;
              uVar10 = uVar10 - 1;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
            uVar10 = 0;
          }
        }
      }
      else {
        func_0x000107c61434(uVar9);
        uVar10 = uVar9;
        FUN_100f5015c(pbVar12,uVar9,10);
        uVar19 = (uint)uVar10;
        func_0x000107c6142c(uVar9);
LAB_100f4f880:
        if ((uVar19 & 0xff) == 1) goto code_r0x000107c61170;
      }
      lVar20 = *(long *)(unaff_x20 + _DAT_112d4dd60);
      lVar16 = lVar20;
      func_0x000107c5cc24();
      func_0x000107c61180();
      if (lVar16 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar10);
      }
      func_0x000107c5df88();
      func_0x000107c61180();
      if (lVar20 == 0) {
        func_0x000107c6142c(uVar9);
        puVar8 = PTR_PTR_1126b0840;
        func_0x000107c61168(PTR_PTR_1126b0840);
        uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d4ddb0);
        func_0x000107c61174(param_1);
        func_0x000107c5b648(uVar17);
        func_0x000107c61180();
        func_0x000107c5cc20(puVar8);
        func_0x000107c61180();
      }
      else {
        func_0x000107c5ee30();
      }
      goto code_r0x000107c61170;
    }
    func_0x000107c615e8(lVar16);
  }
  func_0x000107c6142c(uVar9);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f4fb44; end: 100f4fc13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f4fb44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d4dda8);
  func_0x000107c3fe30();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x000107c40038();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    if (puVar1 != (undefined *)0x0) goto LAB_100f4fbc0;
  }
  puVar1 = PTR_PTR_1126be5a0;
  func_0x000107c610f8(PTR_PTR_1126be5a0);
  func_0x000107c453e4();
LAB_100f4fbc0:
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 100f4fc14; end: 100f4febb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4fc14(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar4 = &puStack_70;
  if (param_2 != 0) {
    puVar2 = &UNK_11036cdd8;
    func_0x000107c613fc(&UNK_11036cdd8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4ddb8);
    puStack_48 = puVar2;
    if ((param_1 & 1) == 0) {
      pcStack_50 = FUN_100f50138;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11036cdf0;
      func_0x000107c60bc4(&puStack_70);
      puVar1 = puStack_48;
      func_0x000107c61174(param_2);
      func_0x000107c61174();
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c5ae7c(uVar5);
    }
    else {
      pcStack_50 = FUN_100f50138;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11036ce18;
      func_0x000107c60bc4(&puStack_70);
      puVar1 = puStack_48;
      func_0x000107c61174(param_2);
      func_0x000107c61174();
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c5ae78(uVar5);
      ppuVar4 = ppuVar3;
    }
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100f4febc; end: 100f4fee7; -[_TtC23SCCommerceTopicPageImpl25SCCommerceTopicPageRouter init] */

void FUN_100f4febc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceTopicPageImpl.SCCommerceTopicPageRouter",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4fee8);
  (*pcVar1)();
}



/* Entry: 100f4fee8; end: 100f4ff43; -[_TtC23SCCommerceTopicPageImpl25SCCommerceTopicPageRouter initWithObjectRegistry:storage:] */

void FUN_100f4fee8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceTopicPageImpl.SCCommerceTopicPageRouter",0x31,
                      "init(objectRegistry:storage:)",0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4ff14);
  (*pcVar1)();
}



/* Entry: 100f4ff44; end: 100f5007b; -[_TtC23SCCommerceTopicPageImpl25SCCommerceTopicPageRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f4ff60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4ffe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f50044) */
/* WARNING: Removing unreachable block (ram,0x000100f50014) */
/* WARNING: Removing unreachable block (ram,0x000100f4ffe4) */
/* WARNING: Removing unreachable block (ram,0x000100f4ffa4) */
/* WARNING: Removing unreachable block (ram,0x000100f4ff64) */
/* WARNING: Removing unreachable block (ram,0x000100f50064) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4ff44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4dd60));
  return;
}



/* Entry: 100f5007c; end: 100f5009b;  */

void FUN_100f5007c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a42f0);
  return;
}



/* Entry: 100f5009c; end: 100f5009f; -[_TtC23SCCommerceTopicPageImpl25SCCommerceTopicPageRouter commerceBrowserWillPresent] */

void FUN_100f5009c(void)

{
  return;
}



/* Entry: 100f500a0; end: 100f500ab; -[_TtC23SCCommerceTopicPageImpl25SCCommerceTopicPageRouter commerceBrowserWillDismiss] */

/* WARNING: Possible PIC construction at 0x000100f500f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5010c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f500f4) */
/* WARNING: Removing unreachable block (ram,0x000100f50110) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f500a0(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f500ac; end: 100f500b7; -[_TtC23SCCommerceTopicPageImpl25SCCommerceTopicPageRouter favoritesBrowserWillDismiss] */

/* WARNING: Possible PIC construction at 0x000100f500f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5010c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f500f4) */
/* WARNING: Removing unreachable block (ram,0x000100f50110) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f500ac(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f500b8; end: 100f50137;  */

/* WARNING: Possible PIC construction at 0x000100f500f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5010c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f500f4) */
/* WARNING: Removing unreachable block (ram,0x000100f50110) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_100f500b8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f50138; end: 100f5015b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50138(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  puVar4 = *(undefined **)(puVar1 + _DAT_112d4dd88);
  puVar2 = puVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    lVar5 = *(long *)(puVar1 + _DAT_112d4ddd8);
    if (lVar5 == 0) goto LAB_100f4fea0;
    puVar3 = PTR_PTR_1126b07a8;
    func_0x000107c61168(PTR_PTR_1126b07a8);
    func_0x000107c615f0(lVar5);
    func_0x000107c4e200(puVar3);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126b07a0;
    func_0x000107c610f8(PTR_PTR_1126b07a0);
    func_0x000107c46058();
    func_0x000107c42c1c(puVar4);
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(lVar5);
    puVar1 = puVar3;
  }
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
LAB_100f4fea0:
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100f5015c; end: 100f5025b;  */

/* WARNING: Removing unreachable block (ram,0x000100f50250) */

undefined1  [16] FUN_100f5015c(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_100f5025c(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_100f5025c(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 100f5025c; end: 100f504e3;  */

undefined1  [16] FUN_100f5025c(byte *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  code *pcVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  char cVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  iVar13 = (int)param_3;
  uVar16 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100f504d8);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) goto LAB_100f504c8;
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_100f504c8;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_3;
      if ((SUB168(auVar5 * auVar8,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
         CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) goto LAB_100f504ac;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar13 + 0x30;
        uVar2 = 0x61;
        if (10 < (long)param_3) {
          uVar2 = iVar13 + 0x57;
        }
        uVar11 = 0x41;
        if (10 < (long)param_3) {
          uVar1 = 0x3a;
          uVar11 = iVar13 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar15 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar17 = (uint)bVar3;
            if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
              uVar16 = 1;
              if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_100f504c8;
              cVar18 = -0x57;
            }
            else {
              cVar18 = -0x37;
            }
          }
          else {
            cVar18 = -0x30;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar15;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = param_3;
          if ((SUB168(auVar6 * auVar9,8) != 0) ||
             (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
             CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar15;
            return auVar20;
          }
        } while( true );
      }
LAB_100f504ac:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100f504d4);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) {
LAB_100f504c8:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar16;
      return auVar10 << 0x40;
    }
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_100f504c8;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_3;
      if ((SUB168(auVar4 * auVar7,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 - (byte)(bVar3 + cVar18),
         uVar16 < (byte)(bVar3 + cVar18))) goto LAB_100f504ac;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar15;
  return auVar19;
}



/* Entry: 100f504e4; end: 100f50503;  */

void FUN_100f504e4(void)

{
  FUN_100f4f1c4();
  return;
}



/* Entry: 100f50504; end: 100f5050b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50504(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5cc34(*(undefined8 *)(lVar1 + _DAT_112d4ddc8));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100f5050c; end: 100f5052b;  */

void FUN_100f5050c(void)

{
  FUN_100f4f1c4();
  return;
}



/* Entry: 100f5052c; end: 100f50563;  */

void FUN_100f5052c(long param_1,long param_2)

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



/* Entry: 100f50564; end: 100f505eb; -[_TtC23SCCommerceTopicPageImpl33SCCommerceTopicPageViewController initWithValdiView:] */

undefined1 * FUN_100f50564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_30;
  uVar2 = param_1;
  func_0x000100f5073c();
  puVar1 = PTR_s_initWithValdiView__1125f5a88;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_30,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c53dec();
  func_0x000107c5677c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar3;
}


