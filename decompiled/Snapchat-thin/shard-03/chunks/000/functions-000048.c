/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10240eb04; end: 10240eb23;  */

void FUN_10240eb04(void)

{
  func_0x000107c61168(&PTR_PTR_11283cbb8);
  return;
}



/* Entry: 10240eb24; end: 10240eb2b;  */

void FUN_10240eb24(long param_1,long param_2)

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



/* Entry: 10240eb2c; end: 10240ed7f;  */

undefined1  [16] FUN_10240eb2c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe8;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f099be0);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f099bc0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10240ebfc);
  (*pcVar1)();
}



/* Entry: 10240ed80; end: 10240edc7; -[SCPromoteSelectionInterceptor uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240ed80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e979d8;
  func_0x000107c61428(param_1 + _DAT_112e979d8,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10240edc8; end: 10240ee2b; -[SCPromoteSelectionInterceptor setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240edc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e979d8;
  func_0x000107c61428(param_1 + _DAT_112e979d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10240ee2c; end: 10240f1af;  */

/* WARNING: Removing unreachable block (ram,0x00010240f1ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10240ee2c(undefined **param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined **ppuVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar7 = param_2;
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar2 = param_1;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  ppuVar9 = ppuVar2;
  func_0x000107c51cec();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  ppuVar2 = ppuVar9;
  func_0x000107c5faec();
  uVar3 = uVar7;
  func_0x000107c61170(ppuVar9);
  ppuVar9 = &PTR____CFConstantStringClassReference_110f52f18;
  func_0x000107c5faec();
  uVar6 = uVar3;
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52f18);
  if (ppuVar2 == ppuVar9 && uVar7 == uVar3) {
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c();
    if ((param_2 & 1) == 0) {
      if ((param_3 & 1) == 0) {
        return 0;
      }
      goto LAB_10240f128;
    }
    if ((param_3 & 1) != 0) {
      return 0;
    }
  }
  else {
    uVar6 = uVar7;
    func_0x000107c605b8(ppuVar2,uVar7,ppuVar9,uVar3,0);
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c();
    if ((param_2 & 1) == 0) {
      if ((param_3 & 1) == 0) {
        return 0;
      }
      if (((ulong)ppuVar2 & 1) == 0) {
        uVar7 = *(long *)(unaff_x20 + _DAT_112e979e0) - 1;
        if (SBORROW8(*(long *)(unaff_x20 + _DAT_112e979e0),1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10240f1a8);
          (*pcVar1)();
        }
        uVar7 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
LAB_10240f19c:
        *(ulong *)(unaff_x20 + _DAT_112e979e0) = uVar7;
        return 0;
      }
LAB_10240f128:
      *(undefined1 *)(unaff_x20 + _DAT_112e979e8) = 0;
      return 0;
    }
    if ((param_3 & 1) != 0) {
      return 0;
    }
    if (((ulong)ppuVar2 & 1) == 0) {
      if (*(char *)(unaff_x20 + _DAT_112e979e8) != '\x01') {
        uVar7 = *(long *)(unaff_x20 + _DAT_112e979e0) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + _DAT_112e979e0),1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10240f1ac);
          (*pcVar1)();
        }
        goto LAB_10240f19c;
      }
      FUN_10240f524();
      lVar8 = _DAT_112e979d8;
      func_0x000107c61428(unaff_x20 + _DAT_112e979d8,auStack_68,0,0);
      lVar8 = *(long *)(unaff_x20 + lVar8);
      if (lVar8 == 0) goto LAB_10240f174;
      func_0x000107c615f0(lVar8);
      pcVar4 = "presentAlert(message:)";
      func_0x0001000c10c0("presentAlert(message:)");
      func_0x000107c61180();
      puVar5 = &UNK_110502e40;
      func_0x000107c613fc(&UNK_110502e40,0x28,7);
      *(ulong *)(puVar5 + 0x10) = uVar3;
      *(ulong *)(puVar5 + 0x18) = uVar6;
      *(long *)(puVar5 + 0x20) = lVar8;
      uStack_78 = 0x10240f49c;
      puStack_80 = &UNK_110502e58;
      puStack_70 = puVar5;
      goto LAB_10240f09c;
    }
  }
  if (*(long *)(unaff_x20 + _DAT_112e979e0) < 1) {
    *(undefined1 *)(unaff_x20 + _DAT_112e979e8) = 1;
    return 0;
  }
  func_0x00010240f5f0();
  lVar8 = _DAT_112e979d8;
  func_0x000107c61428(unaff_x20 + _DAT_112e979d8,auStack_68,0,0);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  if (lVar8 == 0) {
LAB_10240f174:
    func_0x000107c6142c(uVar6);
    return 1;
  }
  func_0x000107c615f0(lVar8);
  pcVar4 = "presentAlert(message:)";
  func_0x0001000c10c0("presentAlert(message:)");
  func_0x000107c61180();
  puVar5 = &UNK_110502e90;
  func_0x000107c613fc(&UNK_110502e90,0x28,7);
  *(ulong *)(puVar5 + 0x10) = uVar3;
  *(ulong *)(puVar5 + 0x18) = uVar6;
  *(long *)(puVar5 + 0x20) = lVar8;
  uStack_78 = 0x10240f520;
  puStack_80 = &UNK_110502ea8;
  puStack_70 = puVar5;
LAB_10240f09c:
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  ppuVar2 = &puStack_98;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c60bc4(ppuVar2);
  puVar5 = puStack_70;
  func_0x000107c615f0(lVar8);
  func_0x000107c61434(uVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(pcVar4);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c6142c(uVar6);
  func_0x000107c615e8(lVar8);
  func_0x000107c615e8(pcVar4);
  return 1;
}



/* Entry: 10240f1b0; end: 10240f21f; -[SCPromoteSelectionInterceptor interceptWithSelectionItem:isSelected:wasSelected:] */

uint FUN_10240f1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10240ee2c(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10240f220; end: 10240f3eb;  */

void FUN_10240f220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  long lStack_58;
  
  ppuVar1 = &puStack_80;
  uVar6 = param_1;
  uVar8 = param_2;
  func_0x00010240f6bc();
  uVar9 = uVar8;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar8);
  pcStack_60 = FUN_10240f3ec;
  lStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100de205c;
  puStack_68 = &UNK_110502ed0;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(uVar6);
  lVar3 = lStack_58;
  func_0x000107c61574();
  func_0x00010240f774();
  lVar4 = lVar3;
  func_0x000100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 0x20) = puVar2;
  puVar5 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar2);
  func_0x000107c5fadc(lVar3,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fadc(param_1,param_2);
  uVar6 = 0;
  func_0x000100dfe1a0(0);
  lVar7 = lVar4;
  func_0x000107c5fc48(lVar4,uVar6);
  func_0x000107c61574(lVar4);
  func_0x000107c48d50(puVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar7);
  func_0x000107c3e2c0(param_3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 10240f3ec; end: 10240f3f7;  */

void FUN_10240f3ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10240f3f8; end: 10240f457; -[SCPromoteSelectionInterceptor init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240f3f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e979d8) = 0;
  *(undefined1 *)(param_1 + _DAT_112e979e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e979e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10240f458; end: 10240f48b;  */

void FUN_10240f458(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10240f48c; end: 10240f4c3; -[SCPromoteSelectionInterceptor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240f48c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e979d8));
  return;
}



/* Entry: 10240f4c4; end: 10240f50f;  */

void FUN_10240f4c4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10240f510; end: 10240f523;  */

void FUN_10240f510(long param_1,long param_2)

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



/* Entry: 10240f524; end: 10240f83f;  */

undefined1  [16] FUN_10240f524(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffda;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f099c70);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f099c30);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10240f5f0);
  (*pcVar1)();
}



/* Entry: 10240f840; end: 10240f987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240f840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e97a18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e97a20) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e97a28);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e97a30);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10240f988; end: 10240fa77; -[SCSendToRankingRecentsDebugScope initWithContainer:contextualSignals:exitTitle:exitAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240f988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  func_0x000107c5faec();
  puVar3 = &UNK_110503058;
  func_0x000107c613fc(&UNK_110503058,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  *(undefined8 *)(param_1 + _DAT_112e97a18) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e97a20) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112e97a28);
  *puVar1 = param_5;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112e97a30);
  *puVar1 = FUN_10240fb2c;
  puVar1[1] = puVar3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 10240fa78; end: 10240faab;  */

void FUN_10240fa78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10240faac; end: 10240fb0b; -[SCSendToRankingRecentsDebugScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240faac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e97a18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e97a20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e97a28 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e97a30 + 8));
  return;
}



/* Entry: 10240fb0c; end: 10240fb2b;  */

void FUN_10240fb0c(void)

{
  func_0x000107c61168(&PTR_PTR_11283cd38);
  return;
}



/* Entry: 10240fb2c; end: 10240fb37;  */

void FUN_10240fb2c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010240fb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10240fb38; end: 10240fb47; -[_TtC28CrossPostingSelectionTracker28CrossPostingSelectionTracker eligibleIdentifiersObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240fb38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e97a60));
  return;
}



/* Entry: 10240fb48; end: 10240fbdb; -[_TtC28CrossPostingSelectionTracker28CrossPostingSelectionTracker eligibleIdentifiers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240fb48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e97a68;
  func_0x000107c61428(param_1 + _DAT_112e97a68,auStack_48,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
  func_0x000102414098();
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fe08();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10240fbdc; end: 10240fc67; -[_TtC28CrossPostingSelectionTracker28CrossPostingSelectionTracker setEligibleIdentifiers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240fbdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
  uVar3 = uVar2;
  func_0x000102414098();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  lVar1 = _DAT_112e97a68;
  func_0x000107c61428(param_1 + _DAT_112e97a68,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 10240fc68; end: 10241003f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10240fc68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             byte param_5)

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uVar5;
  
  puVar6 = auStack_70;
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112e97a70) = 0;
  lVar1 = _DAT_112e97a60;
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112e97a78;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e97a80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e97a88) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e97a90) = 0;
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) &&
     (puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8, func_0x000107c60480(),
     puVar3 = PTR___swiftEmptySetSingleton_11034f1d8, puVar4 != (undefined *)0x0)) {
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10241389c();
  }
  *(undefined **)(unaff_x20 + _DAT_112e97a68) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e97a98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e97aa0) = param_2;
  func_0x000107c615f0(param_1);
  uVar5 = param_2;
  func_0x000107c615f0();
  uVar2 = (undefined1)uVar5;
  func_0x000107c49bd4();
  *(undefined1 *)(unaff_x20 + _DAT_112e97aa8) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e97ab0) = param_3;
  *(byte *)(unaff_x20 + _DAT_112e97ab8) = param_5 & 1;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(auStack_70,puVar3);
  func_0x000107c61180();
  FUN_102410040();
  func_0x000102410160(param_4);
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  return puVar6;
}



/* Entry: 102410040; end: 10241026f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102410040(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e97a98);
  func_0x000107c51c80(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4da8c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar3 = &UNK_110503128;
  func_0x000107c613fc(&UNK_110503128,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_40 = FUN_102414238;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101218f4c;
  puStack_48 = &UNK_110503438;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar1 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102410270; end: 1024102eb; -[_TtC28CrossPostingSelectionTracker28CrossPostingSelectionTracker initWithSelectionTracker:spotlightAutoShareService:performer:selectionStoryObservable:isUserOver18:] */

void FUN_102410270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x00010240fe54(param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1024102ec; end: 10241033b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024102ec(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112e97a78));
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10241033c; end: 1024103a3; -[_TtC28CrossPostingSelectionTracker28CrossPostingSelectionTracker dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241033c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e97a78);
  func_0x000107c61174();
  func_0x000107c42194(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024103a4; end: 102410497; -[_TtC28CrossPostingSelectionTracker28CrossPostingSelectionTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024103a4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e97a98));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e97ab0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e97a60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e97a78));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e97aa0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e97a80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e97a88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e97a68));
  return;
}



/* Entry: 102410498; end: 102410963;  */

/* WARNING: Possible PIC construction at 0x000102410684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024107b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102410814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241087c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024108ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102410910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102410554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102410668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102410558) */
/* WARNING: Removing unreachable block (ram,0x000102410914) */
/* WARNING: Removing unreachable block (ram,0x0001024108b0) */
/* WARNING: Removing unreachable block (ram,0x000102410880) */
/* WARNING: Removing unreachable block (ram,0x000102410818) */
/* WARNING: Removing unreachable block (ram,0x000102410840) */
/* WARNING: Removing unreachable block (ram,0x000102410844) */
/* WARNING: Removing unreachable block (ram,0x000102410850) */
/* WARNING: Removing unreachable block (ram,0x0001024108dc) */
/* WARNING: Removing unreachable block (ram,0x0001024108e4) */
/* WARNING: Removing unreachable block (ram,0x0001024108ec) */
/* WARNING: Removing unreachable block (ram,0x000102410934) */
/* WARNING: Removing unreachable block (ram,0x00010241093c) */
/* WARNING: Removing unreachable block (ram,0x0001024108f4) */
/* WARNING: Removing unreachable block (ram,0x0001024108fc) */
/* WARNING: Removing unreachable block (ram,0x000102410908) */
/* WARNING: Removing unreachable block (ram,0x00010241090c) */
/* WARNING: Removing unreachable block (ram,0x000102410854) */
/* WARNING: Removing unreachable block (ram,0x0001024107b4) */
/* WARNING: Removing unreachable block (ram,0x000102410688) */
/* WARNING: Removing unreachable block (ram,0x000102410690) */
/* WARNING: Removing unreachable block (ram,0x0001024106b8) */
/* WARNING: Removing unreachable block (ram,0x00010241095c) */
/* WARNING: Removing unreachable block (ram,0x0001024106d0) */
/* WARNING: Removing unreachable block (ram,0x000102410700) */
/* WARNING: Removing unreachable block (ram,0x00010241071c) */
/* WARNING: Removing unreachable block (ram,0x000102410704) */
/* WARNING: Removing unreachable block (ram,0x000102410728) */
/* WARNING: Removing unreachable block (ram,0x0001024106e8) */
/* WARNING: Removing unreachable block (ram,0x000102410770) */
/* WARNING: Removing unreachable block (ram,0x0001024106ec) */
/* WARNING: Removing unreachable block (ram,0x0001024107ac) */
/* WARNING: Removing unreachable block (ram,0x00010241066c) */
/* WARNING: Removing unreachable block (ram,0x0001024107b8) */
/* WARNING: Removing unreachable block (ram,0x000102410940) */
/* WARNING: Removing unreachable block (ram,0x000102410960) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102410498(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined **ppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *****pppppuStack_90;
  undefined8 *****apppppuStack_80 [4];
  
  apppppuStack_80[0] = (undefined8 ******)0x0;
  uVar2 = 0;
  FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
  ppppppuVar7 = apppppuStack_80;
  func_0x000107c5fc50(param_1,ppppppuVar7,uVar2);
  ppppppuVar6 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((undefined8 ******)apppppuStack_80[0] != (undefined8 ******)0x0) {
    ppppppuVar6 = (undefined8 ******)apppppuStack_80[0];
  }
  ppppppuVar9 = (undefined8 ******)((ulong)ppppppuVar6 & 0xffffffffffffff8);
  if ((ulong)ppppppuVar6 >> 0x3e == 0) {
    pppppuStack_90 = ppppppuVar9[2];
  }
  else {
    pppppuStack_90 = ppppppuVar9;
    if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar6) {
      pppppuStack_90 = ppppppuVar6;
    }
    func_0x000107c60480();
  }
  ppuVar8 = &PTR____CFConstantStringClassReference_110f52df8;
  if ((undefined8 ******)pppppuStack_90 != (undefined8 ******)0x0) {
    if (((ulong)ppppppuVar6 & 0xc000000000000001) == 0) {
      if (ppppppuVar9[2] == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102410948);
        (*pcVar1)();
      }
      pppppuVar3 = ppppppuVar6[4];
      func_0x000107c61174();
      ppppppuVar6 = ppppppuVar7;
    }
    else {
      pppppuVar3 = (undefined8 *****)0x0;
      func_0x00010241263c(0,ppppppuVar6,&PTR_PTR_1126b3568,0x112d60fb0);
    }
    pppppuVar4 = pppppuVar3;
    func_0x000107c4fa44();
    func_0x000107c61180();
    pppppuVar5 = pppppuVar4;
    func_0x000107c44fdc();
    func_0x000107c61180();
    func_0x000107c61170(pppppuVar4);
    pppppuVar4 = pppppuVar5;
    func_0x000107c51cec();
    func_0x000107c61180();
    func_0x000107c61170(pppppuVar5);
    pppppuVar5 = pppppuVar4;
    func_0x000107c5faec();
    ppppppuVar7 = ppppppuVar6;
    func_0x000107c61170(pppppuVar4);
    func_0x000107c5faec();
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52df8);
    if ((pppppuVar5 == (undefined8 *****)ppuVar8) && (ppppppuVar6 == ppppppuVar7)) {
      func_0x000107c61170(pppppuVar3);
    }
    else {
      func_0x000107c605b8(pppppuVar5,ppppppuVar6,ppuVar8,ppppppuVar7,0);
      func_0x000107c61170(pppppuVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(ppppppuVar6);
  return;
}



/* Entry: 102410964; end: 102410a0b;  */

void FUN_102410964(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puStack_40 = (undefined *)0x0;
    uVar2 = 0;
    FUN_102414240(0,0x112e3c238,&PTR_PTR_1126c51c8);
    func_0x000107c5fc50(param_1,&puStack_40,uVar2);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puStack_40 != (undefined *)0x0) {
      puVar1 = puStack_40;
    }
    FUN_102410a0c(puVar1);
    func_0x000107c6142c(puVar1);
    FUN_102410e04();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102410a0c; end: 102410e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102410a0c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e97a80);
  *(undefined8 *)(unaff_x20 + _DAT_112e97a80) = 0;
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e97a88);
  *(undefined8 *)(unaff_x20 + _DAT_112e97a88) = 0;
  func_0x000107c61170(uVar3);
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102410e04);
      (*pcVar2)();
    }
    uVar16 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(param_1 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar16;
        func_0x00010241263c(uVar16,param_1,&PTR_PTR_1126c51c8,0x112e3c238);
      }
      puVar6 = &UNK_110503178;
      func_0x000107c613fc(&UNK_110503178,0x20,7);
      *(long *)(puVar6 + 0x10) = unaff_x20;
      *(ulong *)(puVar6 + 0x18) = uVar5;
      puVar7 = &UNK_1105031a0;
      func_0x000107c613fc(&UNK_1105031a0,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_102414118;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = (code *)0x10241414c;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_101eee6c4;
      puStack_88 = &UNK_1105031b8;
      ppuVar8 = &puStack_a0;
      puStack_78 = puVar7;
      func_0x000107c60bc4();
      puVar10 = puStack_78;
      lVar9 = unaff_x20;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar10);
      puVar10 = &UNK_1105031f0;
      func_0x000107c613fc(&UNK_1105031f0,0x20,7);
      *(long *)(puVar10 + 0x10) = lVar9;
      *(ulong *)(puVar10 + 0x18) = uVar5;
      puVar11 = &UNK_110503218;
      func_0x000107c613fc(&UNK_110503218,0x20,7);
      *(code **)(puVar11 + 0x10) = FUN_102414184;
      *(undefined **)(puVar11 + 0x18) = puVar10;
      pcStack_80 = FUN_102414188;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_101eeeca8;
      puStack_88 = &UNK_110503230;
      ppuVar12 = &puStack_a0;
      puStack_78 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      puVar13 = puStack_78;
      func_0x000107c61174();
      func_0x000107c61174(uVar5);
      func_0x000107c6157c(puVar11);
      func_0x000107c61574(puVar13);
      puVar13 = &UNK_110503268;
      func_0x000107c613fc(&UNK_110503268,0x18,7);
      *(long *)(puVar13 + 0x10) = lVar9;
      puVar14 = &UNK_110503290;
      func_0x000107c613fc(&UNK_110503290,0x20,7);
      *(code **)(puVar14 + 0x10) = FUN_1024141c8;
      *(undefined **)(puVar14 + 0x18) = puVar13;
      pcStack_80 = FUN_1024141d0;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_102411350;
      puStack_88 = &UNK_1105032a8;
      ppuVar15 = &puStack_a0;
      puStack_78 = puVar14;
      func_0x000107c60bc4(ppuVar15);
      puVar1 = puStack_78;
      func_0x000107c61174(lVar9);
      func_0x000107c6157c(puVar14);
      func_0x000107c61574(puVar1);
      func_0x000107c4c6a8(uVar5);
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puVar6);
      puVar6 = puVar7;
      func_0x000107c61544(puVar7,"",0x62,0x6e,0xd,1);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar7);
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102410dd8);
        (*pcVar2)();
      }
      puVar6 = puVar11;
      func_0x000107c61544(puVar11,"",0x62,0x72,0x1c,1);
      func_0x000107c61574(puVar13);
      func_0x000107c61574(puVar11);
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102410ddc);
        (*pcVar2)();
      }
      puVar6 = puVar14;
      func_0x000107c61544(puVar14,"",0x62,0x79,0x1f,1);
      func_0x000107c61170(uVar5);
      func_0x000107c61574(puVar14);
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102410de0);
        (*pcVar2)();
      }
      uVar16 = uVar16 + 1;
    } while (uVar4 != uVar16);
  }
  return;
}



/* Entry: 102410e04; end: 102410f83;  */

/* WARNING: Removing unreachable block (ram,0x000102410f80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102410e04(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  if (*(char *)(unaff_x20 + _DAT_112e97a70) == '\x01') {
    iVar4 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e97aa0);
    iVar1 = iVar4;
    func_0x000107c49a78();
    lVar3 = _DAT_112e97a90;
    lVar2 = _DAT_112e97a68;
    if ((iVar1 != 0) && ((*(byte *)(unaff_x20 + _DAT_112e97a90) & 1) == 0)) {
      func_0x000107c61428(unaff_x20 + _DAT_112e97a68,auStack_58,0,0);
      uVar5 = *(ulong *)(unaff_x20 + lVar2);
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar5 + 0x10);
      }
      else {
        uVar6 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar6 = uVar5;
        }
        func_0x000107c61434(uVar5);
        func_0x000107c6029c();
        func_0x000107c6142c(uVar5);
      }
      if ((uVar6 == 0) &&
         ((((func_0x000107c49bd8(), iVar4 != 0 && (*(char *)(unaff_x20 + _DAT_112e97ab8) == '\x01'))
           && (lVar2 = *(long *)(unaff_x20 + _DAT_112e97a88), lVar2 != 0)) ||
          (lVar2 = *(long *)(unaff_x20 + _DAT_112e97a80), lVar2 != 0)))) {
        func_0x000107c61174();
        func_0x000107c61174();
        *(undefined1 *)(unaff_x20 + lVar3) = 1;
        lVar3 = lVar2;
        func_0x000108f42a50();
        func_0x000107c61180();
        func_0x000107c58e38(*(undefined8 *)(unaff_x20 + _DAT_112e97a98));
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110f12a18);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
      }
    }
  }
  return;
}



/* Entry: 102410f84; end: 10241134f;  */

void FUN_102410f84(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102411350);
      (*pcVar2)();
    }
    uVar15 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(param_1 + uVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar15;
        func_0x00010241263c(uVar15,param_1,&PTR_PTR_1126c51c8,0x112e3c238);
      }
      puVar5 = &UNK_1105032e0;
      func_0x000107c613fc(&UNK_1105032e0,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = param_3;
      *(ulong *)(puVar5 + 0x18) = uVar4;
      puVar6 = &UNK_110503308;
      func_0x000107c613fc(&UNK_110503308,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = 0x1024142b0;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x1024142e0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_101eee6c4;
      puStack_88 = &UNK_110503320;
      ppuVar7 = &puStack_a0;
      puStack_78 = puVar6;
      func_0x000107c60bc4();
      puVar9 = puStack_78;
      uVar8 = param_3;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar9);
      puVar9 = &UNK_110503358;
      func_0x000107c613fc(&UNK_110503358,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = uVar8;
      *(ulong *)(puVar9 + 0x18) = uVar4;
      puVar10 = &UNK_110503380;
      func_0x000107c613fc(&UNK_110503380,0x20,7);
      *(undefined8 *)(puVar10 + 0x10) = 0x1024142dc;
      *(undefined **)(puVar10 + 0x18) = puVar9;
      uStack_80 = 0x1024142b4;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_101eeeca8;
      puStack_88 = &UNK_110503398;
      ppuVar11 = &puStack_a0;
      puStack_78 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      puVar12 = puStack_78;
      func_0x000107c61174();
      func_0x000107c61174(uVar4);
      func_0x000107c6157c(puVar10);
      func_0x000107c61574(puVar12);
      puVar12 = &UNK_1105033d0;
      func_0x000107c613fc(&UNK_1105033d0,0x18,7);
      *(undefined8 *)(puVar12 + 0x10) = uVar8;
      puVar13 = &UNK_1105033f8;
      func_0x000107c613fc(&UNK_1105033f8,0x20,7);
      *(undefined8 *)(puVar13 + 0x10) = 0x1024142b8;
      *(undefined **)(puVar13 + 0x18) = puVar12;
      uStack_80 = 0x1024142d8;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_102411350;
      puStack_88 = &UNK_110503410;
      ppuVar14 = &puStack_a0;
      puStack_78 = puVar13;
      func_0x000107c60bc4(ppuVar14);
      puVar1 = puStack_78;
      func_0x000107c61174(uVar8);
      func_0x000107c6157c(puVar13);
      func_0x000107c61574(puVar1);
      func_0x000107c4c6a8(uVar4);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61574(puVar5);
      puVar5 = puVar6;
      func_0x000107c61544(puVar6,"",0x62,0x6e,0xd,1);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar6);
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102411324);
        (*pcVar2)();
      }
      puVar5 = puVar10;
      func_0x000107c61544(puVar10,"",0x62,0x72,0x1c,1);
      func_0x000107c61574(puVar12);
      func_0x000107c61574(puVar10);
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102411328);
        (*pcVar2)();
      }
      puVar5 = puVar13;
      func_0x000107c61544(puVar13,"",0x62,0x79,0x1f,1);
      func_0x000107c61170(uVar4);
      func_0x000107c61574(puVar13);
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10241132c);
        (*pcVar2)();
      }
      uVar15 = uVar15 + 1;
    } while (uVar3 != uVar15);
  }
  return;
}



/* Entry: 102411350; end: 1024113c7;  */

void FUN_102411350(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = 0;
  FUN_102414240(0,0x112e3c238,&PTR_PTR_1126c51c8);
  func_0x000107c5fc54(param_2,uVar2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1024113c8; end: 102411693;  */

/* WARNING: Removing unreachable block (ram,0x00010241168c) */
/* WARNING: Removing unreachable block (ram,0x000102411684) */
/* WARNING: Removing unreachable block (ram,0x000102411680) */
/* WARNING: Removing unreachable block (ram,0x000102411688) */
/* WARNING: Removing unreachable block (ram,0x000102411690) */
/* WARNING: Removing unreachable block (ram,0x00010241167c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024113c8(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined **ppuVar5;
  
  func_0x000107c51cec();
  func_0x000107c61180();
  ppuVar1 = param_1;
  func_0x000107c5faec();
  lVar3 = param_2;
  func_0x000107c61170(param_1);
  ppuVar5 = &PTR____CFConstantStringClassReference_110f52cd8;
  func_0x000107c5faec();
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52cd8);
  if (ppuVar1 != ppuVar5 || param_2 != lVar3) {
    ppuVar2 = ppuVar1;
    lVar4 = param_2;
    func_0x000107c605b8(ppuVar1,param_2,ppuVar5,lVar3,0);
    func_0x000107c6142c(lVar3);
    if (((ulong)ppuVar2 & 1) != 0) goto LAB_1024114f8;
    ppuVar5 = &PTR____CFConstantStringClassReference_110f52cf8;
    func_0x000107c5faec();
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52cf8);
    lVar3 = lVar4;
    if (ppuVar1 != ppuVar5 || param_2 != lVar4) {
      ppuVar2 = ppuVar1;
      lVar3 = param_2;
      func_0x000107c605b8(ppuVar1,param_2,ppuVar5,lVar4,0);
      func_0x000107c6142c(lVar4);
      if (((ulong)ppuVar2 & 1) != 0) goto LAB_1024114f8;
      ppuVar5 = &PTR____CFConstantStringClassReference_110f52d18;
      func_0x000107c5faec();
      func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52d18);
      if ((ppuVar1 != ppuVar5) || (param_2 != lVar3)) {
        ppuVar2 = ppuVar1;
        lVar4 = param_2;
        func_0x000107c605b8(ppuVar1,param_2,ppuVar5,lVar3,0);
        func_0x000107c6142c(lVar3);
        if (((ulong)ppuVar2 & 1) != 0) goto LAB_1024114f8;
        ppuVar5 = &PTR____CFConstantStringClassReference_110f52d98;
        func_0x000107c5faec();
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52d98);
        if ((ppuVar1 != ppuVar5) || (lVar3 = lVar4, param_2 != lVar4)) {
          ppuVar2 = ppuVar1;
          lVar3 = param_2;
          func_0x000107c605b8(ppuVar1,param_2,ppuVar5,lVar4,0);
          func_0x000107c6142c(lVar4);
          if (((ulong)ppuVar2 & 1) != 0) goto LAB_1024114f8;
          ppuVar5 = &PTR____CFConstantStringClassReference_110f52d78;
          func_0x000107c5faec();
          func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52d78);
          if ((ppuVar1 != ppuVar5) || (param_2 != lVar3)) {
            ppuVar2 = ppuVar1;
            lVar4 = param_2;
            func_0x000107c605b8(ppuVar1,param_2,ppuVar5,lVar3,0);
            func_0x000107c6142c(lVar3);
            if (((ulong)ppuVar2 & 1) == 0) {
              ppuVar5 = &PTR____CFConstantStringClassReference_110f52d38;
              func_0x000107c5faec();
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52d38);
              if ((ppuVar1 == ppuVar5) && (param_2 == lVar4)) {
                func_0x000107c6142c(param_2);
                func_0x000107c6142c(lVar4);
              }
              else {
                func_0x000107c605b8(ppuVar1,param_2,ppuVar5,lVar4,0);
                func_0x000107c6142c(param_2);
                func_0x000107c6142c(lVar4);
                if (((ulong)ppuVar1 & 1) == 0) {
                  return;
                }
              }
              func_0x000107c49bd8(*(undefined8 *)(unaff_x20 + _DAT_112e97aa0));
              return;
            }
            goto LAB_1024114f8;
          }
        }
      }
    }
  }
  func_0x000107c6142c(param_2);
  param_2 = lVar3;
LAB_1024114f8:
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 102411694; end: 1024119ef;  */

undefined * FUN_102411694(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_98 [32];
  ulong uStack_78;
  ulong uStack_70;
  char cStack_68;
  
  uVar1 = param_1 & 0xc000000000000001;
  if (uVar1 == 0) {
    uVar14 = *(ulong *)(param_1 + 0x10);
  }
  else {
    uVar14 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar14 = param_1;
    }
    func_0x000107c6029c();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    uVar8 = uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_10240c8a4(0,uVar8,0);
    if (uVar1 == 0) {
      uVar6 = param_1 + 0x38;
      func_0x000107c60268(uVar6,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
      cStack_68 = '\0';
      uVar8 = (ulong)*(uint *)(param_1 + 0x24);
    }
    else {
      uVar6 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar6 = param_1;
      }
      func_0x000107c60284();
      cStack_68 = '\x01';
    }
    uStack_78 = uVar6;
    uStack_70 = uVar8;
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1024119e8);
      (*pcVar5)();
    }
    uVar8 = 0;
    uVar6 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    do {
      cVar4 = cStack_68;
      uVar2 = uStack_70;
      uVar12 = uStack_78;
      if (uVar8 == uVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024119d8);
        (*pcVar5)();
      }
      uVar13 = uStack_78;
      FUN_102413684(uStack_78,uStack_70,cStack_68,param_1);
      func_0x000107c61180();
      uVar9 = uVar13;
      func_0x000107c4fa44();
      func_0x000107c61180();
      uVar10 = uVar9;
      func_0x000107c44fdc();
      func_0x000107c61180();
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar9);
      uVar13 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar13) {
        FUN_10240c8a4(1 < *(ulong *)(puVar3 + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar13 + 1;
      *(ulong *)(puVar3 + uVar13 * 8 + 0x20) = uVar10;
      if (uVar1 == 0) {
        if (cVar4 == '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024119f0);
          (*pcVar5)();
        }
        uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        if (uVar13 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024119dc);
          (*pcVar5)();
        }
        uVar10 = uVar12 >> 6;
        uVar9 = *(ulong *)(param_1 + 0x38 + uVar10 * 8);
        if ((uVar9 >> (uVar12 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024119e0);
          (*pcVar5)();
        }
        if (*(int *)(param_1 + 0x24) != (int)uVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024119e4);
          (*pcVar5)();
        }
        uVar9 = uVar9 & -2L << (uVar12 & 0x3f);
        if (uVar9 == 0) {
          lVar15 = uVar10 << 6;
          puVar11 = (ulong *)(param_1 + 0x40 + uVar10 * 8);
          do {
            uVar10 = uVar10 + 1;
            if (uVar13 + 0x3f >> 6 <= uVar10) {
              FUN_102414280(uVar12,uVar2,cVar4);
              goto LAB_102411968;
            }
            uVar9 = *puVar11;
            lVar15 = lVar15 + 0x40;
            puVar11 = puVar11 + 1;
          } while (uVar9 == 0);
          FUN_102414280(uVar12,uVar2,cVar4);
          uVar12 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar13 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + lVar15;
        }
        else {
          uVar2 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar13 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | uVar12 & 0x7fffffffffffffc0;
        }
LAB_102411968:
        uStack_70 = (ulong)*(uint *)(param_1 + 0x24);
        cStack_68 = '\0';
        uStack_78 = uVar13;
      }
      else {
        if (cVar4 != '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024119ec);
          (*pcVar5)();
        }
        func_0x000107c6028c(uVar12,uVar2);
        if (uVar12 == 0) {
          uVar12 = 1;
        }
        else {
          func_0x000107c61558();
        }
        uVar7 = 0x112e97b00;
        func_0x0001000285a8(0x112e97b00,&UNK_10daa2f58);
        pcVar5 = (code *)auStack_98;
        func_0x000107c5fe1c(pcVar5,uVar7);
        func_0x000107c602b8(uVar7,uVar12,uVar6);
        (*pcVar5)(auStack_98,0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar14);
    FUN_102414280(uStack_78,uStack_70,cStack_68);
  }
  return puVar3;
}



/* Entry: 1024119f0; end: 102411beb;  */

undefined * FUN_1024119f0(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
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
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102411bec);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_102414240(0,0x112e97990,&PTR_PTR_1126b3558);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x00010241263c(uVar7,param_1,&PTR_PTR_1126b3558,0x112e97990);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_102414240(0,0x112e97990,&PTR_PTR_1126b3558);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 102411bec; end: 102411dd7;  */

void FUN_102411bec(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  uVar7 = *param_2;
  uVar1 = uVar7;
  func_0x000107c4fa44();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c51cec();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  FUN_1024142e4();
  func_0x000107c6142c(param_3);
  if ((uVar3 & 0xff00000000) == 0x100000000) {
    func_0x000107c61170(uVar2);
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar3 = uVar2;
    func_0x000107c4fa4c();
    func_0x000107c61180();
    uVar6 = uVar1;
    if (uVar3 == 0) {
      func_0x000107c5faec();
      uVar6 = uVar1;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar1);
    }
    puVar8 = PTR_PTR_1126a69b8;
    func_0x000107c610f8();
    func_0x000107c46d2c();
    func_0x000107c61170(uVar3);
    uVar1 = uVar7;
    func_0x000107c4fa44();
    func_0x000107c61180();
    uVar3 = uVar1;
    func_0x000107c4d3f8();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar3 != 0) {
      uVar1 = uVar3;
      func_0x000107c5faec();
      func_0x000107c6142c(uVar6);
      uVar1 = uVar1 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar1 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x000107c5695c(puVar8);
      }
      func_0x000107c61170(uVar3);
    }
    func_0x000108f43540();
    if (uVar7 != 0) {
      puVar4 = PTR_PTR_1126cf4e8;
      func_0x000107c610f8(PTR_PTR_1126cf4e8);
      func_0x000107c46f1c();
      puVar5 = puVar4;
      FUN_102414818();
      func_0x000107c53d84(puVar8);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(uVar2);
  }
  *param_1 = puVar8;
  return;
}



/* Entry: 102411dd8; end: 1024120bb;  */

undefined * FUN_102411dd8(ulong param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x21;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_58;
  
  if ((param_1 & 0xc000000000000001) == 0) {
    uVar11 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar10 = ~uVar11;
    uVar11 = -uVar11;
    uVar14 = 0xffffffffffffffff;
    if (uVar11 < 0x40) {
      uVar14 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar14 = uVar14 & *puVar12;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    uVar14 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar14 = param_1;
    }
    func_0x000107c61434();
    func_0x000107c60288(uVar14);
    uVar4 = 0;
    FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
    uVar7 = uVar4;
    func_0x000102414098();
    func_0x000107c5fe30(&uStack_88,uVar14,uVar4,uVar7);
    param_1 = uStack_88;
    uVar10 = uStack_78;
    puVar12 = puStack_80;
    uVar14 = uStack_68;
  }
  lVar13 = lStack_70;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    lVar2 = lVar13;
    uVar11 = uVar14;
    if ((long)param_1 < 0) {
      uVar11 = param_1;
      func_0x000107c602ac();
      if (uVar11 == 0) {
LAB_102412044:
        uStack_58 = 0;
        goto LAB_102412048;
      }
      uVar7 = 0;
      uStack_90 = uVar11;
      FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
      func_0x000107c6147c(&uStack_58,&uStack_90,PTR___syXlN_11034f1a0 + 8,uVar7,7);
      uVar11 = uVar14;
      uVar9 = uStack_58;
    }
    else {
      while (uVar11 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1024120bc);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x40 >> 6) <= lVar1) goto LAB_102412044;
        lVar2 = lVar1;
        uVar11 = puVar12[lVar1];
      }
      uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      uVar9 = *(ulong *)(*(long *)(param_1 + 0x30) + LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) * 8 +
                        lVar2 * 0x200);
      uStack_58 = uVar9;
      func_0x000107c61174(uVar9);
    }
    if (uVar9 == 0) {
LAB_102412048:
      FUN_1024140ec();
      return puVar8;
    }
    uStack_90 = uVar9;
    FUN_102411bec(&lStack_98,&uStack_90);
    if (unaff_x21 != 0) {
      func_0x000107c61170(uVar9);
      FUN_1024140ec(param_1,puVar12,uVar10,lVar13,uVar14);
      func_0x000107c6142c(puVar8);
      return puVar8;
    }
    func_0x000107c61170(uVar9);
    lVar1 = lStack_98;
    lVar13 = lVar2;
    uVar14 = uVar11;
    if (lStack_98 != 0) {
      puVar6 = puVar8;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar8 < 0)) ||
         (puVar6 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar8 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar8) {
            puVar5 = puVar8;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_102413424(0,puVar5 + 1,1,puVar8);
      }
      uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar9 + 0x10);
      puVar8 = puVar6;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar11) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_102413424(puVar8,uVar11 + 1,1,puVar6);
        uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar9 + 0x10) = uVar11 + 1;
      *(long *)(uVar9 + uVar11 * 8 + 0x20) = lVar1;
    }
  } while( true );
}



/* Entry: 1024120bc; end: 10241218b; -[_TtC28CrossPostingSelectionTracker28CrossPostingSelectionTracker createStoryConfigsForCreatePost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024120bc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e97a68;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(char *)(param_1 + _DAT_112e97a70) == '\x01') {
    func_0x000107c61428(param_1 + _DAT_112e97a68,auStack_48,0,0);
    puVar4 = *(undefined **)(param_1 + lVar1);
    func_0x000107c61174(param_1);
    puVar2 = puVar4;
    func_0x000107c61434(puVar4);
    FUN_102411dd8();
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(param_1);
  }
  uVar3 = 0;
  FUN_102414240(0,0x112d70b50,&PTR_PTR_1126a69b8);
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,uVar3);
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10241218c; end: 102412237; -[_TtC28CrossPostingSelectionTracker28CrossPostingSelectionTracker createSelectionIdentifiersFrom:] */

void FUN_10241218c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_102414240(0,0x112d70b50,&PTR_PTR_1126a69b8);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000102413bb4(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  uVar2 = 0;
  FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102412238; end: 102412263; -[_TtC28CrossPostingSelectionTracker28CrossPostingSelectionTracker init] */

void FUN_102412238(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CrossPostingSelectionTracker.CrossPostingSelectionTracker",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102412264);
  (*pcVar1)();
}



/* Entry: 102412264; end: 1024124bf;  */

ulong FUN_102412264(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_70;
  
  if ((param_1 & 0xc000000000000001) == 0) {
    if ((param_2 & 0xc000000000000001) == 0) {
      if (param_1 == param_2) {
LAB_102412488:
        uVar9 = 1;
      }
      else {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
          uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
          uStack_70 = 0xffffffffffffffff;
          if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
            uStack_70 = ~(-1L << (uVar9 & 0x3f));
          }
          uStack_70 = uStack_70 & *(ulong *)(param_1 + 0x38);
          FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
          lVar8 = 0;
          if (uStack_70 == 0) goto LAB_1024123b0;
LAB_102412394:
          uVar6 = (uStack_70 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_70 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
          uStack_70 = uStack_70 - 1 & uStack_70;
          do {
            uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar6) | lVar8 << 6) * 8);
            uVar6 = *(ulong *)(param_2 + 0x28);
            func_0x000107c61174(uVar2);
            func_0x000107c60114();
            uVar5 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
            uVar6 = uVar6 & (uVar5 ^ 0xffffffffffffffff);
            if ((*(ulong *)(param_2 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
LAB_102412490:
              func_0x000107c61170(uVar2);
              break;
            }
            while( true ) {
              uVar3 = *(ulong *)(*(long *)(param_2 + 0x30) + uVar6 * 8);
              func_0x000107c61174();
              uVar4 = uVar3;
              func_0x000107c60118();
              func_0x000107c61170(uVar3);
              if ((uVar4 & 1) != 0) break;
              uVar6 = uVar6 + 1 & ~uVar5;
              if ((*(ulong *)(param_2 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0)
              goto LAB_102412490;
            }
            func_0x000107c61170(uVar2);
            if (uStack_70 != 0) goto LAB_102412394;
LAB_1024123b0:
            do {
              lVar7 = lVar8 + 1;
              if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1024124c0);
                (*pcVar1)();
              }
              if ((long)(uVar9 + 0x3f >> 6) <= lVar7) goto LAB_102412488;
              uStack_70 = ((ulong *)(param_1 + 0x38))[lVar7];
              lVar8 = lVar8 + 1;
            } while (uStack_70 == 0);
            uVar6 = (uStack_70 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_70 & 0x5555555555555555) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
            uStack_70 = uStack_70 - 1 & uStack_70;
            lVar8 = lVar7;
          } while( true );
        }
        uVar9 = 0;
      }
      return uVar9;
    }
    uVar9 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar9 = param_2;
    }
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    param_1 = param_2;
    if ((param_2 & 0xc000000000000001) != 0) {
      uVar9 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar9 = param_2;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss10__CocoaSetV7isEqual2toSbAB_tF_11034e3e8)(uVar9);
      return uVar9;
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  func_0x000107c6029c();
  if (uVar6 == uVar9) {
    uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(param_1 + 0x38);
    lVar8 = 0;
    do {
      if (uVar9 == 0) {
        do {
          lVar7 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1024125c4);
            (*pcVar1)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar7) {
            return 1;
          }
          uVar9 = ((ulong *)(param_1 + 0x38))[lVar7];
          lVar8 = lVar8 + 1;
        } while (uVar9 == 0);
        uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
      }
      else {
        uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar7 = lVar8;
      }
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar5) | lVar7 << 6) * 8);
      func_0x000107c61174();
      uVar5 = uVar4;
      func_0x000107c602b0();
      func_0x000107c61170(uVar4);
      lVar8 = lVar7;
    } while ((uVar5 & 1) != 0);
  }
  return 0;
}



/* Entry: 1024124c0; end: 1024125c3;  */

undefined8 FUN_1024124c0(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_2 + 0x10);
  func_0x000107c6029c();
  if (lVar5 == param_1) {
    uVar4 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar4 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(param_2 + 0x38);
    lVar5 = 0;
    do {
      if (uVar7 == 0) {
        do {
          lVar6 = lVar5 + 1;
          if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1024125c4);
            (*pcVar1)();
          }
          if ((long)(uVar4 + 0x3f >> 6) <= lVar6) {
            return 1;
          }
          uVar7 = ((ulong *)(param_2 + 0x38))[lVar6];
          lVar5 = lVar5 + 1;
        } while (uVar7 == 0);
        uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
      }
      else {
        uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar6 = lVar5;
      }
      uVar2 = *(ulong *)(*(long *)(param_2 + 0x30) + (LZCOUNT(uVar3) | lVar6 << 6) * 8);
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c602b0();
      func_0x000107c61170(uVar2);
      lVar5 = lVar6;
    } while ((uVar3 & 1) != 0);
  }
  return 0;
}



/* Entry: 1024125c4; end: 1024127f7;  */

void FUN_1024125c4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102414240(0,param_1,param_2);
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



/* Entry: 1024127f8; end: 102412f97;  */

undefined8 FUN_1024127f8(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x000102412c3c();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102412a40);
      (*pcVar1)();
    }
    func_0x000102412a40(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      FUN_1024130e8(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_102413314(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 102412f98; end: 1024130e7;  */

void FUN_102412f98(void)

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
  
  func_0x0001000285a8(0x112e97af8,&UNK_10daa2f48);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_102413074;
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
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_102413074:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1024130e8);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1024130c0;
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
LAB_1024130c0:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1024130e8; end: 102413313;  */

void FUN_1024130e8(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112e97af8;
  func_0x0001000285a8(0x112e97af8,&UNK_10daa2f48);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1024132e4:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102413310);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_1024132e4;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102413314);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 102413314; end: 102413393;  */

void FUN_102413314(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 102413394; end: 102413423;  */

undefined *
FUN_102413394(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1024125c4(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 102413424; end: 102413683;  */

ulong FUN_102413424(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10241356c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102413394(uVar2,uVar4,0x112d70b50,&PTR_PTR_1126a69b8,0x112e97af0,&UNK_10daa2f40);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102413568);
      (*pcVar1)();
    }
    func_0x00010241356c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102413684; end: 10241389b;  */

/* WARNING: Possible PIC construction at 0x0001024137e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024137e8) */
/* WARNING: Removing unreachable block (ram,0x000102413860) */
/* WARNING: Removing unreachable block (ram,0x000102413808) */

undefined8 FUN_102413684(ulong param_1,undefined8 param_2,char param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_3 == '\x01') {
      uVar3 = param_4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_4) {
        uVar3 = param_4;
      }
      func_0x000107c602a4(param_1,param_2,uVar3);
      uVar2 = 0;
      uStack_60 = param_1;
      FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
      func_0x000107c6147c(&uStack_58,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return uStack_58;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10241389c);
    (*pcVar1)();
  }
  if (param_3 == '\x01') {
    uVar2 = 0;
    FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
    uVar3 = param_1;
    func_0x000107c60294(param_1,param_2);
    if ((int)uVar3 != *(int *)(param_4 + 0x24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102413890);
      (*pcVar1)();
    }
    func_0x000107c60298(param_1,param_2);
    uStack_60 = param_1;
    func_0x000107c6147c(&uStack_58,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,7);
    uVar3 = *(ulong *)(param_4 + 0x28);
    func_0x000107c60114();
    uVar3 = uVar3 & (-1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) ^ 0xffffffffffffffffU);
    if ((*(ulong *)(param_4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) {
      func_0x000107c61170(uStack_58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10241382c);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + uVar3 * 8);
  }
  else {
    if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102413894);
      (*pcVar1)();
    }
    if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xffffffffffffff8) + 0x38) >> (param_1 & 0x3f) & 1) ==
        0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102413898);
      (*pcVar1)();
    }
    if (*(int *)(param_4 + 0x24) != (int)param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102413860);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return uVar2;
}



/* Entry: 10241389c; end: 102414077;  */

undefined * FUN_10241389c(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e97af8,&UNK_10daa2f48);
    func_0x000107c602e8();
    puVar1 = puVar11;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar11 != (undefined *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar12 = (undefined *)0x0;
      puVar7 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      do {
        if (puVar12 == puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102413bb0);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(param_1 + (long)puVar12 * 8 + 0x20);
        uVar4 = *(ulong *)(puVar1 + 0x28);
        func_0x000107c61174();
        func_0x000107c60114();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c60118();
            func_0x000107c61170(uVar8);
            if ((uVar6 & 1) != 0) {
              func_0x000107c61170(uVar5);
              goto LAB_102413abc;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined8 *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar5;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102413bb4);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
LAB_102413abc:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar11);
    }
    else {
      puVar12 = (undefined *)0x0;
      do {
        puVar7 = puVar12;
        func_0x00010241263c(puVar12,param_1,&PTR_PTR_1126b3568,0x112d60fb0);
        bVar3 = SCARRY8((long)puVar12,1);
        puVar12 = puVar12 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102413ba8);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar1 + 0x28);
        func_0x000107c60114();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          FUN_102414240(0,0x112d60fb0,&PTR_PTR_1126b3568);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c60118();
            func_0x000107c61170(uVar8);
            if ((uVar6 & 1) != 0) {
              func_0x000107c615e8(puVar7);
              goto joined_r0x000102413984;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined **)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = puVar7;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102413bac);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
joined_r0x000102413984:
      } while (puVar12 != puVar11);
    }
  }
  return puVar1;
}



/* Entry: 102414078; end: 1024140eb;  */

void FUN_102414078(void)

{
  func_0x000107c61168(&PTR_PTR_11283ce10);
  return;
}



/* Entry: 1024140ec; end: 102414117;  */

void FUN_1024140ec(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102414118; end: 102414183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102414118(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e97a80);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e97a80) = uVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 102414184; end: 102414187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102414184(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  byte in_stack_00000020;
  
  if ((in_stack_00000020 & 1) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e97a88);
    *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e97a88) = uVar1;
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
    return;
  }
  return;
}



/* Entry: 102414188; end: 1024141c7;  */

void FUN_102414188(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024141c8; end: 1024141cf;  */

void FUN_1024141c8(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102411350);
      (*pcVar2)();
    }
    uVar16 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(param_1 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar16;
        func_0x00010241263c(uVar16,param_1,&PTR_PTR_1126c51c8,0x112e3c238);
      }
      puVar5 = &UNK_1105032e0;
      func_0x000107c613fc(&UNK_1105032e0,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar15;
      *(ulong *)(puVar5 + 0x18) = uVar4;
      puVar6 = &UNK_110503308;
      func_0x000107c613fc(&UNK_110503308,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = 0x1024142b0;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x1024142e0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_101eee6c4;
      puStack_88 = &UNK_110503320;
      ppuVar7 = &puStack_a0;
      puStack_78 = puVar6;
      func_0x000107c60bc4();
      puVar9 = puStack_78;
      uVar8 = uVar15;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar9);
      puVar9 = &UNK_110503358;
      func_0x000107c613fc(&UNK_110503358,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = uVar8;
      *(ulong *)(puVar9 + 0x18) = uVar4;
      puVar10 = &UNK_110503380;
      func_0x000107c613fc(&UNK_110503380,0x20,7);
      *(undefined8 *)(puVar10 + 0x10) = 0x1024142dc;
      *(undefined **)(puVar10 + 0x18) = puVar9;
      uStack_80 = 0x1024142b4;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_101eeeca8;
      puStack_88 = &UNK_110503398;
      ppuVar11 = &puStack_a0;
      puStack_78 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      puVar12 = puStack_78;
      func_0x000107c61174();
      func_0x000107c61174(uVar4);
      func_0x000107c6157c(puVar10);
      func_0x000107c61574(puVar12);
      puVar12 = &UNK_1105033d0;
      func_0x000107c613fc(&UNK_1105033d0,0x18,7);
      *(undefined8 *)(puVar12 + 0x10) = uVar8;
      puVar13 = &UNK_1105033f8;
      func_0x000107c613fc(&UNK_1105033f8,0x20,7);
      *(undefined8 *)(puVar13 + 0x10) = 0x1024142b8;
      *(undefined **)(puVar13 + 0x18) = puVar12;
      uStack_80 = 0x1024142d8;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_102411350;
      puStack_88 = &UNK_110503410;
      ppuVar14 = &puStack_a0;
      puStack_78 = puVar13;
      func_0x000107c60bc4(ppuVar14);
      puVar1 = puStack_78;
      func_0x000107c61174(uVar8);
      func_0x000107c6157c(puVar13);
      func_0x000107c61574(puVar1);
      func_0x000107c4c6a8(uVar4);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61574(puVar5);
      puVar5 = puVar6;
      func_0x000107c61544(puVar6,"",0x62,0x6e,0xd,1);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar6);
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102411324);
        (*pcVar2)();
      }
      puVar5 = puVar10;
      func_0x000107c61544(puVar10,"",0x62,0x72,0x1c,1);
      func_0x000107c61574(puVar12);
      func_0x000107c61574(puVar10);
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102411328);
        (*pcVar2)();
      }
      puVar5 = puVar13;
      func_0x000107c61544(puVar13,"",0x62,0x79,0x1f,1);
      func_0x000107c61170(uVar4);
      func_0x000107c61574(puVar13);
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10241132c);
        (*pcVar2)();
      }
      uVar16 = uVar16 + 1;
    } while (uVar3 != uVar16);
  }
  return;
}



/* Entry: 1024141d0; end: 102414237;  */

void FUN_1024141d0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102414238; end: 10241423f;  */

void FUN_102414238(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102410498(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102414240; end: 10241427f;  */

void FUN_102414240(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102414280; end: 1024142e3;  */

void FUN_102414280(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1024142e4; end: 102414817;  */

/* WARNING: Removing unreachable block (ram,0x000102414810) */
/* WARNING: Removing unreachable block (ram,0x000102414808) */
/* WARNING: Removing unreachable block (ram,0x000102414800) */
/* WARNING: Removing unreachable block (ram,0x0001024147f8) */
/* WARNING: Removing unreachable block (ram,0x0001024147f0) */
/* WARNING: Removing unreachable block (ram,0x0001024147f4) */
/* WARNING: Removing unreachable block (ram,0x0001024147fc) */
/* WARNING: Removing unreachable block (ram,0x000102414804) */
/* WARNING: Removing unreachable block (ram,0x00010241480c) */
/* WARNING: Removing unreachable block (ram,0x000102414814) */
/* WARNING: Removing unreachable block (ram,0x00010241476c) */

ulong FUN_1024142e4(undefined **param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  ppuVar6 = &PTR____CFConstantStringClassReference_110f52cd8;
  lVar2 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52cd8);
  if (ppuVar6 == param_1 && lVar2 == param_2) {
    func_0x000107c6142c(lVar2);
  }
  else {
    lVar3 = lVar2;
    func_0x000107c605b8(ppuVar6,lVar2,param_1,param_2,0);
    func_0x000107c6142c(lVar2);
    if (((ulong)ppuVar6 & 1) == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110f52cf8;
      func_0x000107c5faec();
      func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52cf8);
      if (ppuVar6 == param_1 && lVar3 == param_2) {
        func_0x000107c6142c(lVar3);
      }
      else {
        lVar2 = lVar3;
        func_0x000107c605b8(ppuVar6,lVar3,param_1,param_2,0);
        func_0x000107c6142c(lVar3);
        if (((ulong)ppuVar6 & 1) == 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110f52d18;
          func_0x000107c5faec();
          func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52d18);
          if ((ppuVar6 == param_1) && (lVar2 == param_2)) {
            func_0x000107c6142c(lVar2);
          }
          else {
            lVar3 = lVar2;
            func_0x000107c605b8(ppuVar6,lVar2,param_1,param_2,0);
            func_0x000107c6142c(lVar2);
            if (((ulong)ppuVar6 & 1) == 0) {
              ppuVar6 = &PTR____CFConstantStringClassReference_110f52d98;
              func_0x000107c5faec();
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52d98);
              if ((ppuVar6 == param_1) && (lVar3 == param_2)) {
                func_0x000107c6142c(lVar3);
              }
              else {
                lVar2 = lVar3;
                func_0x000107c605b8(ppuVar6,lVar3,param_1,param_2,0);
                func_0x000107c6142c(lVar3);
                if (((ulong)ppuVar6 & 1) == 0) {
                  ppuVar6 = &PTR____CFConstantStringClassReference_110f52db8;
                  func_0x000107c5faec();
                  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52db8);
                  if ((ppuVar6 == param_1) && (lVar2 == param_2)) {
                    func_0x000107c6142c(lVar2);
                  }
                  else {
                    lVar3 = lVar2;
                    func_0x000107c605b8(ppuVar6,lVar2,param_1,param_2,0);
                    func_0x000107c6142c(lVar2);
                    if (((ulong)ppuVar6 & 1) == 0) {
                      ppuVar6 = &PTR____CFConstantStringClassReference_110f52d78;
                      func_0x000107c5faec();
                      func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52d78);
                      if ((ppuVar6 == param_1) && (lVar3 == param_2)) {
                        func_0x000107c6142c(lVar3);
                      }
                      else {
                        lVar2 = lVar3;
                        func_0x000107c605b8(ppuVar6,lVar3,param_1,param_2,0);
                        func_0x000107c6142c(lVar3);
                        if (((ulong)ppuVar6 & 1) == 0) {
                          ppuVar6 = &PTR____CFConstantStringClassReference_110f52d38;
                          func_0x000107c5faec();
                          func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52d38);
                          if ((ppuVar6 == param_1) && (lVar2 == param_2)) {
                            func_0x000107c6142c(lVar2);
                          }
                          else {
                            lVar3 = lVar2;
                            func_0x000107c605b8(ppuVar6,lVar2,param_1,param_2,0);
                            func_0x000107c6142c(lVar2);
                            if (((ulong)ppuVar6 & 1) == 0) {
                              ppuVar6 = &PTR____CFConstantStringClassReference_110f52d58;
                              func_0x000107c5faec();
                              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52d58);
                              if ((ppuVar6 == param_1) && (lVar3 == param_2)) {
                                func_0x000107c6142c(lVar3);
                              }
                              else {
                                lVar2 = lVar3;
                                func_0x000107c605b8(ppuVar6,lVar3,param_1,param_2,0);
                                func_0x000107c6142c(lVar3);
                                if (((ulong)ppuVar6 & 1) == 0) {
                                  ppuVar6 = &PTR____CFConstantStringClassReference_110f52df8;
                                  func_0x000107c5faec();
                                  func_0x000107c61170(&
                                                  PTR____CFConstantStringClassReference_110f52df8);
                                  if ((ppuVar6 == param_1) && (lVar2 == param_2)) {
                                    func_0x000107c6142c(lVar2);
                                  }
                                  else {
                                    lVar3 = lVar2;
                                    func_0x000107c605b8(ppuVar6,lVar2,param_1,param_2,0);
                                    func_0x000107c6142c(lVar2);
                                    if (((ulong)ppuVar6 & 1) == 0) {
                                      ppuVar6 = &PTR____CFConstantStringClassReference_110f52dd8;
                                      func_0x000107c5faec();
                                      func_0x000107c61170(&
                                                  PTR____CFConstantStringClassReference_110f52dd8);
                                      if ((ppuVar6 == param_1) && (lVar3 == param_2)) {
                                        func_0x000107c6142c(lVar3);
                                      }
                                      else {
                                        lVar2 = lVar3;
                                        func_0x000107c605b8(ppuVar6,lVar3,param_1,param_2,0);
                                        func_0x000107c6142c(lVar3);
                                        if (((ulong)ppuVar6 & 1) == 0) {
                                          ppuVar6 = &PTR____CFConstantStringClassReference_110f52f38
                                          ;
                                          func_0x000107c5faec();
                                          func_0x000107c61170(&
                                                  PTR____CFConstantStringClassReference_110f52f38);
                                          if ((ppuVar6 == param_1) && (lVar2 == param_2)) {
                                            func_0x000107c6142c(lVar2);
                                            uVar4 = 0;
                                            uVar5 = 0xb;
                                          }
                                          else {
                                            func_0x000107c605b8(ppuVar6,lVar2,param_1,param_2,0);
                                            func_0x000107c6142c(lVar2);
                                            bVar1 = ((ulong)ppuVar6 & 1) == 0;
                                            uVar4 = 0;
                                            if (bVar1) {
                                              uVar4 = 0x100000000;
                                            }
                                            uVar5 = 0xb;
                                            if (bVar1) {
                                              uVar5 = 0;
                                            }
                                          }
                                          goto LAB_1024143fc;
                                        }
                                      }
                                      uVar4 = 0;
                                      uVar5 = 8;
                                      goto LAB_1024143fc;
                                    }
                                  }
                                  uVar4 = 0;
                                  uVar5 = 9;
                                  goto LAB_1024143fc;
                                }
                              }
                              uVar4 = 0;
                              uVar5 = 4;
                              goto LAB_1024143fc;
                            }
                          }
                          uVar4 = 0;
                          uVar5 = 3;
                          goto LAB_1024143fc;
                        }
                      }
                      uVar4 = 0;
                      uVar5 = 5;
                      goto LAB_1024143fc;
                    }
                  }
                  uVar4 = 0;
                  uVar5 = 7;
                  goto LAB_1024143fc;
                }
              }
              uVar4 = 0;
              uVar5 = 6;
              goto LAB_1024143fc;
            }
          }
          uVar4 = 0;
          uVar5 = 2;
          goto LAB_1024143fc;
        }
      }
      uVar4 = 0;
      uVar5 = 1;
      goto LAB_1024143fc;
    }
  }
  uVar5 = 0;
  uVar4 = 0;
LAB_1024143fc:
  return uVar4 | uVar5;
}



/* Entry: 102414818; end: 102414863;  */

void FUN_102414818(void)

{
  func_0x000107c49a7c();
  func_0x000107c41158();
  func_0x000107c610f8(PTR_PTR_1126aa7c8);
                    /* WARNING: Could not recover jumptable at 0x00010c01ecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102414864; end: 102414aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102414864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_b0 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102415848();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x102415ca8;
  uStack_78 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10117fbac;
  puStack_88 = &UNK_1105034e0;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  uVar5 = param_1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  pcStack_80 = (code *)0x102415cac;
  uStack_78 = 0;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10117fbac;
  puStack_88 = &UNK_110503508;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  uVar5 = param_2;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined8 *)(lVar3 + 0x28) = uVar5;
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  uVar5 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  lVar7 = lVar3;
  func_0x000107c5fc48(lVar3,uVar5);
  func_0x000107c61574(lVar3);
  pcStack_80 = FUN_102414aa8;
  uStack_78 = 0;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102414bac;
  puStack_88 = &UNK_110503530;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c3fe00();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar7);
  *(undefined **)(unaff_x20 + _DAT_112e97b08) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112e97b10) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e97b18);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar8 = auStack_b0;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar8;
}



/* Entry: 102414aa8; end: 102414bab;  */

undefined * FUN_102414aa8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_68;
  undefined *apuStack_60 [4];
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102414ba8);
    (*pcVar3)();
  }
  func_0x0001000bb420(param_1 + 0x20,apuStack_60);
  uVar4 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  puVar2 = PTR___sypN_11034f1a8;
  ppuVar5 = &puStack_68;
  func_0x000107c6147c(ppuVar5,apuStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar7 != 1) {
    puVar1 = puStack_68;
    if ((int)ppuVar5 == 0) {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x0001000bb420(param_1 + 0x40,apuStack_60);
    ppuVar5 = &puStack_68;
    func_0x000107c6147c(ppuVar5,apuStack_60,puVar2 + 8,uVar4,6);
    if ((int)ppuVar5 == 0) {
      puStack_68 = puVar6;
    }
    apuStack_60[0] = puVar1;
    func_0x00010109a32c(puStack_68);
    puVar2 = apuStack_60[0];
    puVar6 = apuStack_60[0];
    func_0x000107c5fc48(apuStack_60[0],PTR___sSSN_11034da80);
    func_0x000107c6142c(puVar2);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102414bac);
  (*pcVar3)();
}



/* Entry: 102414bac; end: 102414c13;  */

void FUN_102414bac(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5fc54(param_2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102414c14; end: 102414cb7; -[SCSendToSnappableDataSourceImpl initWithFriendsInThisSnapObservable:createPostMentionsObservable:snapchatterObservableRepository:currentUserId:] */

undefined8
FUN_102414c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_3;
  FUN_1024159e0(param_3,param_4,param_5,param_6,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 102414cb8; end: 102414e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102414cb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e97b10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    FUN_102415c38(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c4a8a4(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e97b18);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e97b18))[1];
    puVar6 = *(undefined **)(unaff_x20 + _DAT_112e97b08);
    puVar5 = &UNK_110503568;
    func_0x000107c613fc(&UNK_110503568,0x30,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar1;
    *(undefined8 *)(puVar5 + 0x18) = uVar2;
    *(long *)(puVar5 + 0x20) = lVar3;
    *(undefined8 *)(puVar5 + 0x28) = param_1;
    pcStack_50 = FUN_102415c0c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1024156e4;
    puStack_58 = &UNK_110503580;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61434(uVar2);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c436a8(puVar6);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar3);
  }
  return puVar6;
}



/* Entry: 102414e3c; end: 102415363;  */

undefined8
FUN_102414e3c(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long extraout_x8;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined *puVar18;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined1 auStack_e8 [32];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [32];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  uVar4 = 0;
  lStack_110 = param_3;
  uStack_108 = param_4;
  uStack_100 = param_5;
  func_0x000107c5ed50();
  puStack_f8 = *(undefined **)(uVar4 - 8);
  uVar14 = uVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puStack_f8 + 0x40));
  lVar16 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c600f4(lVar16);
  func_0x000100e15a08();
  func_0x000107c601c0(&puStack_98,uVar4,uVar14);
  puVar18 = PTR___sypN_11034f1a8;
  puVar9 = PTR___sSSN_11034da80;
  uVar15 = uVar14;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = uStack_f0;
  while (uStack_f0 = uVar15, puStack_80 != (undefined *)0x0) {
    func_0x000100102924(&puStack_98,auStack_b8);
    func_0x000100102924(auStack_b8,auStack_e8);
    puVar5 = &uStack_c8;
    func_0x000107c6147c(puVar5,auStack_e8,puVar18 + 8,puVar9,6);
    lVar2 = lStack_c0;
    uVar10 = uStack_c8;
    if ((((ulong)puVar5 & 1) != 0) && (lStack_c0 != 0)) {
      puVar6 = puVar7;
      func_0x000107c61558();
      puVar8 = puVar7;
      if (((ulong)puVar6 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_1024158cc(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,
                      PTR__swift_bridgeObjectRelease_11034f258);
      }
      uVar14 = *(ulong *)(puVar8 + 0x10);
      puVar7 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_1024158cc(puVar7,uVar14 + 1,1,puVar8,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(puVar7 + 0x10) = uVar14 + 1;
      *(undefined8 *)(puVar7 + uVar14 * 0x10 + 0x20) = uVar10;
      *(long *)(puVar7 + uVar14 * 0x10 + 0x28) = lVar2;
      uVar14 = uStack_f0;
    }
    func_0x000107c601c0(&puStack_98,uVar4,uVar14);
    uVar15 = uStack_f0;
    uVar13 = uStack_f0;
  }
  uStack_f0 = uVar13;
  (**(code **)(puStack_f8 + 8))(lVar16,uVar4);
  lVar16 = lStack_110;
  uVar14 = *(ulong *)(puVar7 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    uVar13 = 0;
    uStack_f0 = uVar14 - 1;
    puVar18 = puVar7 + 0x28;
    do {
      plVar17 = (long *)(puVar18 + uVar13 * 0x10);
      uVar15 = uVar13;
      while( true ) {
        if (*(ulong *)(puVar7 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1024151fc);
          (*pcVar3)();
        }
        uVar4 = plVar17[-1];
        lVar2 = *plVar17;
        if ((uVar4 != param_2 || lVar2 != lVar16) &&
           (uVar13 = uVar4, func_0x000107c605b8(uVar4,lVar2,param_2,lVar16,0), (uVar13 & 1) == 0))
        break;
        uVar15 = uVar15 + 1;
        plVar17 = plVar17 + 2;
        if (uVar14 == uVar15) goto LAB_102415110;
      }
      func_0x000107c61434(lVar2);
      puVar6 = puVar9;
      func_0x000107c61558();
      puStack_f8 = puVar18;
      puStack_98 = puVar9;
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar9 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(puStack_98 + 0x10);
      if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puStack_98 + 0x18),uVar1 + 1,1);
      }
      uVar13 = uVar15 + 1;
      *(ulong *)(puStack_98 + 0x10) = uVar1 + 1;
      *(ulong *)(puStack_98 + uVar1 * 0x10 + 0x20) = uVar4;
      *(long *)(puStack_98 + uVar1 * 0x10 + 0x28) = lVar2;
      puVar9 = puStack_98;
      puVar18 = puStack_f8;
    } while (uStack_f0 != uVar15);
  }
LAB_102415110:
  func_0x000107c6142c(puVar7);
  puVar7 = puVar9;
  func_0x0001024151fc(puVar9);
  func_0x000107c61574(puVar9);
  puVar9 = puVar7;
  func_0x000107c5fc48(puVar7,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar7);
  uVar10 = uStack_108;
  func_0x000107c5b480(uStack_108);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  pcStack_78 = FUN_102415364;
  uStack_70 = 0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_10117fbac;
  puStack_80 = &UNK_1105035a8;
  ppuVar11 = &puStack_98;
  func_0x000107c60bc4(ppuVar11);
  uVar12 = uVar10;
  func_0x000107c4c280(uVar10);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uVar10);
  return uVar12;
}



/* Entry: 102415364; end: 1024156e3;  */

void FUN_102415364(long *param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  undefined *puVar12;
  long lStack_110;
  long *plStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  byte bStack_c1;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined *puStack_80;
  
  lVar3 = 0;
  plStack_108 = param_1;
  func_0x000107c5ed50();
  lStack_110 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lVar11 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c600f4(lVar11);
  func_0x000100e15a08();
  func_0x000107c601c0(&puStack_f8,lVar3,lVar4);
  puVar8 = PTR___sypN_11034f1a8;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    if (puStack_e0 == (undefined *)0x0) {
      (**(code **)(lStack_110 + 8))(lVar11,lVar3);
      func_0x00010006e7f4(&puStack_f8);
      lVar4 = 0x112daafe8;
      func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
      plStack_108[3] = lVar4;
      *plStack_108 = (long)puVar12;
      return;
    }
    func_0x000100102924(&puStack_f8,auStack_a0);
    func_0x0001000bb420(auStack_a0,auStack_c0);
    uVar5 = 0;
    FUN_102415c38(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    ppuVar6 = &puStack_f8;
    func_0x000107c6147c(ppuVar6,auStack_c0,puVar8 + 8,uVar5,6);
    puVar10 = puStack_f8;
    if ((int)ppuVar6 == 0) {
LAB_10241542c:
      func_0x000100183ab8(auStack_a0);
    }
    else {
      puVar7 = puStack_f8;
      func_0x000107c49ac4();
      if ((int)puVar7 != 0) {
        func_0x000107c61170(puVar10);
        goto LAB_10241542c;
      }
      bStack_c1 = 0;
      puVar8 = puVar10;
      func_0x000107c439a8();
      func_0x000107c61180();
      puVar7 = puVar8;
      func_0x000107c5c3a4();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61170(puVar10);
        puVar8 = PTR___sypN_11034f1a8;
        bVar2 = bStack_c1;
      }
      else {
        puVar8 = &UNK_1105035e0;
        func_0x000107c613fc(&UNK_1105035e0,0x18,7);
        *(byte **)(puVar8 + 0x10) = &bStack_c1;
        puVar9 = &UNK_110503608;
        puStack_100 = puVar8;
        func_0x000107c613fc(&UNK_110503608,0x20,7);
        *(code **)(puVar9 + 0x10) = FUN_102415c78;
        *(undefined **)(puVar9 + 0x18) = puVar8;
        uStack_d8 = 0x102415c80;
        puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f0 = 0x42000000;
        puStack_e8 = &UNK_101a7ff60;
        puStack_e0 = &UNK_110503620;
        ppuVar6 = &puStack_f8;
        puStack_d0 = puVar9;
        func_0x000107c60bc4(ppuVar6);
        puVar8 = puStack_d0;
        func_0x000107c61174(puVar7);
        func_0x000107c61574(puVar8);
        func_0x000107c4c628(puVar7);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar10);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(puVar7);
        bVar2 = bStack_c1;
        func_0x000107c61574(puStack_100);
        puVar8 = PTR___sypN_11034f1a8;
      }
      PTR___sypN_11034f1a8 = puVar8;
      if ((bVar2 & 1) == 0) goto LAB_10241542c;
      puVar10 = puVar12;
      func_0x000107c61558();
      puStack_80 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        func_0x000100c077e4(0,*(long *)(puVar12 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(puStack_80 + 0x10);
      if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar1) {
        func_0x000100c077e4(1 < *(ulong *)(puStack_80 + 0x18),uVar1 + 1,1);
      }
      puVar12 = puStack_80;
      *(ulong *)(puStack_80 + 0x10) = uVar1 + 1;
      func_0x000100102924(auStack_a0,puStack_80 + uVar1 * 0x20 + 0x20);
    }
    func_0x000107c601c0(&puStack_f8,lVar3,lVar4);
  } while( true );
}



/* Entry: 1024156e4; end: 10241573b;  */

void FUN_1024156e4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10241573c; end: 10241579b; -[SCSendToSnappableDataSourceImpl snappableRecipientsWithQueue:] */

void FUN_10241573c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102414cb8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10241579c; end: 1024157fb; -[SCSendToSnappableDataSourceImpl init] */

void FUN_10241579c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToSnappableDataSource.SendToSnappableDataSourceImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024157c8);
  (*pcVar1)();
}



/* Entry: 1024157fc; end: 102415847; -[SCSendToSnappableDataSourceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024157fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e97b08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e97b10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e97b18 + 8))
  ;
  return;
}



/* Entry: 102415848; end: 1024158af;  */

/* WARNING: Possible PIC construction at 0x000102415878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241587c) */
/* WARNING: Removing unreachable block (ram,0x000102415880) */

void FUN_102415848(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d5b228;
    plVar5 = (long *)&UNK_10d9223b0;
  }
  else {
    puVar3 = (ulong *)0x112d5b0a0;
    plVar5 = (long *)&UNK_10d97aac0;
    unaff_x30 = 0x10241587c;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1024158b0; end: 1024158cb;  */

void FUN_1024158b0(long param_1,long param_2)

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



/* Entry: 1024158cc; end: 1024159df;  */

undefined *
FUN_1024158cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024159e0);
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
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1024159e0; end: 102415c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024159e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  FUN_102415848();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x102415ca8;
  uStack_78 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10117fbac;
  puStack_88 = &UNK_110503648;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  pcStack_80 = (code *)0x102415cac;
  uStack_78 = 0;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10117fbac;
  puStack_88 = &UNK_110503670;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  uVar6 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  lVar7 = lVar3;
  func_0x000107c5fc48(lVar3,uVar6);
  func_0x000107c61574(lVar3);
  pcStack_80 = FUN_102414aa8;
  uStack_78 = 0;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102414bac;
  puStack_88 = &UNK_110503698;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c3fe00();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar7);
  *(undefined **)(unaff_x20 + _DAT_112e97b08) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112e97b10) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e97b18);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61154(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102415c0c; end: 102415c17;  */

undefined8 FUN_102415c0c(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long extraout_x8;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  undefined *puVar19;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined1 auStack_e8 [32];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [32];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lStack_110 = *(long *)(unaff_x20 + 0x18);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = 0;
  func_0x000107c5ed50();
  puStack_f8 = *(undefined **)(uVar5 - 8);
  uVar15 = uVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puStack_f8 + 0x40));
  lVar17 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c600f4(lVar17);
  func_0x000100e15a08();
  func_0x000107c601c0(&puStack_98,uVar5,uVar15);
  puVar19 = PTR___sypN_11034f1a8;
  puVar10 = PTR___sSSN_11034da80;
  uVar16 = uVar15;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar14 = uStack_f0;
  while (uStack_f0 = uVar16, puStack_80 != (undefined *)0x0) {
    func_0x000100102924(&puStack_98,auStack_b8);
    func_0x000100102924(auStack_b8,auStack_e8);
    puVar6 = &uStack_c8;
    func_0x000107c6147c(puVar6,auStack_e8,puVar19 + 8,puVar10,6);
    lVar3 = lStack_c0;
    uVar11 = uStack_c8;
    if ((((ulong)puVar6 & 1) != 0) && (lStack_c0 != 0)) {
      puVar7 = puVar8;
      func_0x000107c61558();
      puVar9 = puVar8;
      if (((ulong)puVar7 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_1024158cc(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8,
                      PTR__swift_bridgeObjectRelease_11034f258);
      }
      uVar15 = *(ulong *)(puVar9 + 0x10);
      puVar8 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar15) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_1024158cc(puVar8,uVar15 + 1,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(puVar8 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar8 + uVar15 * 0x10 + 0x20) = uVar11;
      *(long *)(puVar8 + uVar15 * 0x10 + 0x28) = lVar3;
      uVar15 = uStack_f0;
    }
    func_0x000107c601c0(&puStack_98,uVar5,uVar15);
    uVar16 = uStack_f0;
    uVar14 = uStack_f0;
  }
  uStack_f0 = uVar14;
  (**(code **)(puStack_f8 + 8))(lVar17,uVar5);
  lVar17 = lStack_110;
  uVar15 = *(ulong *)(puVar8 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar14 = 0;
    uStack_f0 = uVar15 - 1;
    puVar19 = puVar8 + 0x28;
    do {
      plVar18 = (long *)(puVar19 + uVar14 * 0x10);
      uVar16 = uVar14;
      while( true ) {
        if (*(ulong *)(puVar8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1024151fc);
          (*pcVar4)();
        }
        uVar5 = plVar18[-1];
        lVar3 = *plVar18;
        if ((uVar5 != uVar2 || lVar3 != lVar17) &&
           (uVar14 = uVar5, func_0x000107c605b8(uVar5,lVar3,uVar2,lVar17,0), (uVar14 & 1) == 0))
        break;
        uVar16 = uVar16 + 1;
        plVar18 = plVar18 + 2;
        if (uVar15 == uVar16) goto LAB_102415110;
      }
      func_0x000107c61434(lVar3);
      puVar7 = puVar10;
      func_0x000107c61558();
      puStack_f8 = puVar19;
      puStack_98 = puVar10;
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar10 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(puStack_98 + 0x10);
      if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puStack_98 + 0x18),uVar1 + 1,1);
      }
      uVar14 = uVar16 + 1;
      *(ulong *)(puStack_98 + 0x10) = uVar1 + 1;
      *(ulong *)(puStack_98 + uVar1 * 0x10 + 0x20) = uVar5;
      *(long *)(puStack_98 + uVar1 * 0x10 + 0x28) = lVar3;
      puVar10 = puStack_98;
      puVar19 = puStack_f8;
    } while (uStack_f0 != uVar16);
  }
LAB_102415110:
  func_0x000107c6142c(puVar8);
  puVar8 = puVar10;
  func_0x0001024151fc(puVar10);
  func_0x000107c61574(puVar10);
  puVar10 = puVar8;
  func_0x000107c5fc48(puVar8,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar8);
  uVar11 = uStack_108;
  func_0x000107c5b480(uStack_108);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  pcStack_78 = FUN_102415364;
  uStack_70 = 0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_10117fbac;
  puStack_80 = &UNK_1105035a8;
  ppuVar12 = &puStack_98;
  func_0x000107c60bc4(ppuVar12);
  uVar13 = uVar11;
  func_0x000107c4c280(uVar11);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61170(uVar11);
  return uVar13;
}



/* Entry: 102415c18; end: 102415c37;  */

void FUN_102415c18(void)

{
  func_0x000107c61168(&PTR_PTR_11283cf28);
  return;
}



/* Entry: 102415c38; end: 102415c77;  */

void FUN_102415c38(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102415c78; end: 102415cdb;  */

void FUN_102415c78(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 102415cdc; end: 102415cfb;  */

void FUN_102415cdc(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 102415cfc; end: 102415d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102415cfc(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e97b88);
  if (lVar2 != 0) {
    lVar3 = ((long *)(unaff_x20 + _DAT_112e97b88))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102415d94; end: 102415e3b; -[_TtC32ComposerListStoreServiceProvider17ComposerListStore dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102415d94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112e97b88);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar4 = ((long *)(param_1 + _DAT_112e97b88))[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
    func_0x000107c615e8(lVar3);
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102415e3c; end: 102415ee3; -[_TtC32ComposerListStoreServiceProvider17ComposerListStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102415e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102415e98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102415e5c) */
/* WARNING: Removing unreachable block (ram,0x000102415e9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102415e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e97b48));
  return;
}



/* Entry: 102415ee4; end: 1024163fb;  */

/* WARNING: Removing unreachable block (ram,0x0001024163d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102415ee4(int param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_68;
  
  lVar2 = unaff_x20;
  uVar7 = param_2;
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112e97b48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
  }
  else {
    if (param_1 == 0) {
      uVar16 = 0;
    }
    else {
      if (param_1 != 1) {
        FUN_10241c318(0);
        puStack_68 = (undefined *)CONCAT44(puStack_68._4_4_,param_1);
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024163fc);
        (*pcVar1)();
      }
      uVar16 = 1;
    }
    ppuVar14 = &PTR____CFConstantStringClassReference_110dbb718;
    ppuVar6 = ppuVar14;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110dbb718);
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar6);
    if ((param_1 == 0) && (lVar15 = *(long *)(unaff_x20 + _DAT_112e97b58), lVar15 != 0)) {
      func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
      uVar8 = uVar16;
      FUN_102416a88(uVar16,lVar3);
      uVar9 = uVar8;
      func_0x0001000b637c();
      func_0x000107c61170(uVar8);
      uVar8 = 0x112e97bd8;
      func_0x0001000285a8(0x112e97bd8,&UNK_10daa3040);
      pcVar1 = FUN_102416bb4;
      func_0x0001000d5158(FUN_102416bb4,0,uVar8);
      func_0x000107c61574(uVar9);
      func_0x000107c5dc0c();
      func_0x000107c61180();
      lVar10 = lVar15;
      func_0x000107c3ebcc();
      func_0x000107c61170(lVar15);
      if ((int)lVar10 == 0) {
        func_0x0001000285a8(0x112e97be0,&UNK_10daa3048);
        puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_10241b65c(PTR___swiftEmptyArrayStorage_11034f1c8,0x112e550f8,&UNK_10da57230);
        ppuVar6 = &puStack_68;
        puStack_68 = puVar4;
        func_0x000100854cb0(ppuVar6);
        func_0x000107c6142c(puVar4);
      }
      else {
        lVar15 = lVar3;
        func_0x000107c4fcf4(lVar3);
        func_0x000107c61180();
        lVar11 = lVar15;
        func_0x0001000b637c();
        func_0x000107c61170(lVar15);
        puVar4 = &UNK_110503b60;
        func_0x000107c613fc(&UNK_110503b60,0x18,7);
        *(undefined8 *)(puVar4 + 0x10) = uVar16;
        uVar16 = 0x112e97be8;
        func_0x0001000285a8(0x112e97be8,&UNK_10daa3050);
        pcVar12 = FUN_10241c410;
        func_0x0001000bfde0(FUN_10241c410,puVar4,uVar16);
        func_0x000107c61574(lVar11);
        func_0x000107c61574(puVar4);
        uVar16 = 0x112e97bf0;
        func_0x0001000285a8(0x112e97bf0,&UNK_10dafe540);
        uVar8 = 0x102419648;
        func_0x00010068b194(0x102419648,0,uVar16);
        func_0x000107c61574(pcVar12);
        puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_10241b65c(PTR___swiftEmptyArrayStorage_11034f1c8,0x112e550f8,&UNK_10da57230);
        ppuVar6 = &puStack_68;
        puStack_68 = puVar4;
        func_0x0001006c71a4(ppuVar6);
        func_0x000107c6142c(puVar4);
        func_0x000107c61574(uVar8);
      }
      ppuVar13 = ppuVar6;
      func_0x0001006c733c(ppuVar6);
      puVar4 = &UNK_110503ae8;
      func_0x000107c613fc(&UNK_110503ae8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,unaff_x20);
      puVar5 = &UNK_110503b10;
      func_0x000107c613fc(&UNK_110503b10,0x38,7);
      *(undefined ***)(puVar5 + 0x10) = ppuVar14;
      *(undefined8 *)(puVar5 + 0x18) = uVar7;
      puVar5[0x20] = (byte)param_2 & 1;
      puVar5[0x21] = (char)lVar10;
      *(undefined **)(puVar5 + 0x28) = puVar4;
      *(long *)(puVar5 + 0x30) = lVar2;
      puVar4 = &UNK_110503b38;
      func_0x000107c613fc(&UNK_110503b38,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = 0x10241c3cc;
      *(undefined **)(puVar4 + 0x18) = puVar5;
      uVar7 = 0;
      FUN_10241c8d0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      pcVar12 = FUN_10241c3e0;
      func_0x0001000bfde0(FUN_10241c3e0,puVar4,uVar7);
      func_0x000107c61574(ppuVar13);
      func_0x000107c61574(puVar4);
      func_0x0001004575f0();
      func_0x000107c61574(pcVar12);
      puVar5 = puVar4;
      func_0x000107c5cb24(puVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c61574(pcVar1);
      func_0x000107c61574(ppuVar6);
    }
    else {
      func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
      FUN_1024163fc(uVar16,lVar3);
      uVar8 = uVar16;
      func_0x0001000b637c();
      func_0x000107c61170(uVar16);
      puVar4 = &UNK_110503ac0;
      func_0x000107c613fc(&UNK_110503ac0,0x30,7);
      *(undefined ***)(puVar4 + 0x10) = ppuVar14;
      *(undefined8 *)(puVar4 + 0x18) = uVar7;
      puVar4[0x20] = (byte)param_2 & 1;
      *(long *)(puVar4 + 0x28) = lVar2;
      uVar7 = 0;
      FUN_10241c8d0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      pcVar1 = FUN_10241c3bc;
      func_0x0001000bfde0(FUN_10241c3bc,puVar4,uVar7);
      func_0x000107c61574(uVar8);
      func_0x000107c61574(puVar4);
      func_0x0001004575f0();
      func_0x000107c61574(pcVar1);
      puVar5 = puVar4;
      func_0x000107c5cb24(puVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(puVar4);
  }
  return puVar5;
}



/* Entry: 1024163fc; end: 102416527;  */

/* WARNING: Possible PIC construction at 0x0001024164b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024164c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024164b8) */
/* WARNING: Removing unreachable block (ram,0x0001024164c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024163fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_48;
  
  if (*(char *)(unaff_x20 + _DAT_112e97b60) == '\x01' && param_1 == 0) {
    uVar1 = 0x112e7c6e8;
    func_0x0001000285a8(0x112e7c6e8,&UNK_10daa3020);
    func_0x000100087bd4(&lStack_48,FUN_10241c910,auStack_70,uVar1);
    if (lStack_48 != 0) {
      return;
    }
    func_0x000107c5ab1c(param_2);
  }
  else {
    func_0x000107c5ab1c(param_2,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102416528; end: 102416a87;  */

void FUN_102416528(undefined8 *param_1,undefined8 *param_2,undefined8 *****param_3,
                  undefined8 *****param_4,uint param_5)

{
  undefined8 *****pppppuVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined *puStack_88;
  undefined8 ****ppppuStack_68;
  
  uVar16 = *param_2;
  ppppuStack_68 = (undefined8 *****)0x0;
  uVar5 = 0;
  FUN_10241c8d0(0,0x112e97c20,&PTR_PTR_1126b1498);
  pppppuVar13 = &ppppuStack_68;
  func_0x000107c5fc50(uVar16,pppppuVar13,uVar5);
  ppppuVar3 = ppppuStack_68;
  if ((undefined8 *****)ppppuStack_68 == (undefined8 *****)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    pppppuVar18 = (undefined8 *****)((ulong)ppppuStack_68 & 0xffffffffffffff8);
    if ((ulong)ppppuStack_68 >> 0x3e == 0) {
      pppppuVar17 = (undefined8 *****)pppppuVar18[2];
    }
    else {
      pppppuVar17 = (undefined8 *****)ppppuStack_68;
      if (-1 < (long)ppppuStack_68) {
        pppppuVar17 = pppppuVar18;
      }
      func_0x000107c60480();
    }
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppuVar17 != (undefined8 *****)0x0) {
      pppppuVar9 = (undefined8 *****)0x0;
      do {
        while( true ) {
          if (((ulong)ppppuVar3 & 0xc000000000000001) == 0) {
            if (pppppuVar18[2] <= pppppuVar9) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1024167d8);
              (*pcVar4)();
            }
            pppppuVar6 = (undefined8 *****)ppppuVar3[(long)((long)pppppuVar9 + 4)];
            func_0x000107c61174();
            pppppuVar14 = pppppuVar13;
          }
          else {
            pppppuVar6 = pppppuVar9;
            pppppuVar14 = (undefined8 *****)ppppuVar3;
            FUN_10241a250(pppppuVar9,ppppuVar3,&PTR_PTR_1126b1498,0x112e97c20);
          }
          pppppuVar1 = (undefined8 *****)((long)pppppuVar9 + 1);
          if (SCARRY8((long)pppppuVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1024167d4);
            (*pcVar4)();
          }
          pppppuVar7 = pppppuVar6;
          func_0x000107c5aaf8();
          func_0x000107c61180();
          pppppuVar8 = pppppuVar7;
          func_0x000107c5faec();
          pppppuVar13 = pppppuVar14;
          func_0x000107c61170(pppppuVar7);
          if (pppppuVar8 == param_3 && pppppuVar14 == param_4) break;
          pppppuVar13 = pppppuVar14;
          func_0x000107c605b8(pppppuVar8,pppppuVar14,param_3,param_4,0);
          func_0x000107c6142c(pppppuVar14);
          if ((((ulong)pppppuVar8 & 1) == 0) || ((param_5 & 1) != 0)) goto LAB_1024166b4;
LAB_102416674:
          func_0x000107c61170(pppppuVar6);
          pppppuVar9 = (undefined8 *****)((long)pppppuVar9 + 1);
          if (pppppuVar1 == pppppuVar17) goto LAB_1024167fc;
        }
        func_0x000107c6142c(pppppuVar14);
        if ((param_5 & 1) == 0) goto LAB_102416674;
LAB_1024166b4:
        pppppuVar9 = pppppuVar6;
        FUN_10241ba98();
        func_0x000107c61170(pppppuVar6);
        puVar10 = puStack_88;
        func_0x000107c61550();
        if ((((int)puVar10 == 0) || ((long)puStack_88 < 0)) ||
           (puVar10 = puStack_88, ((ulong)puStack_88 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_88 >> 0x3e == 0) {
            puVar10 = *(undefined **)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_88) {
              puVar10 = puStack_88;
            }
            func_0x000107c60480();
          }
          pppppuVar13 = (undefined8 *****)(puVar10 + 1);
          puVar10 = (undefined *)0x0;
          FUN_10241a770(0,pppppuVar13,1,puStack_88,0x112e97c10,&PTR_PTR_1126aa7e8,0x112e97c18,
                        &UNK_10daa3070);
        }
        uVar15 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar15 + 0x10);
        pppppuVar6 = (undefined8 *****)(uVar2 + 1);
        puStack_88 = puVar10;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar2) {
          puStack_88 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
          pppppuVar13 = pppppuVar6;
          FUN_10241a770(puStack_88,pppppuVar6,1,puVar10,0x112e97c10,&PTR_PTR_1126aa7e8,0x112e97c18,
                        &UNK_10daa3070);
          uVar15 = (ulong)puStack_88 & 0xffffffffffffff8;
        }
        *(undefined8 ******)(uVar15 + 0x10) = pppppuVar6;
        *(undefined8 ******)(uVar15 + uVar2 * 8 + 0x20) = pppppuVar9;
        pppppuVar9 = pppppuVar1;
      } while (pppppuVar1 != pppppuVar17);
    }
LAB_1024167fc:
    func_0x000107c6142c(ppppuVar3);
    puVar11 = puStack_88;
    func_0x00010241689c(puStack_88,&PTR_PTR_1126aa7e8,0x112e97c10);
    func_0x000107c6142c(puStack_88);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar12 = puVar11;
    func_0x000107c5fc48(puVar11,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar11);
    func_0x000107c45788();
    func_0x000107c61170(puVar12);
  }
  *param_1 = puVar10;
  return;
}



/* Entry: 102416a88; end: 102416bb3;  */

/* WARNING: Possible PIC construction at 0x000102416b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102416b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102416b44) */
/* WARNING: Removing unreachable block (ram,0x000102416b54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102416a88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_48;
  
  if (*(char *)(unaff_x20 + _DAT_112e97b60) == '\x01' && param_1 == 0) {
    uVar1 = 0x112e7c6e8;
    func_0x0001000285a8(0x112e7c6e8,&UNK_10daa3020);
    func_0x000100087bd4(&lStack_48,FUN_10241c878,auStack_70,uVar1);
    if (lStack_48 != 0) {
      return;
    }
    func_0x000107c5ab04(param_2);
  }
  else {
    func_0x000107c5ab04(param_2,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102416bb4; end: 102416c0f;  */

void FUN_102416bb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uStack_28 = 0;
  uVar1 = 0;
  FUN_10241c8d0(0,0x112e551a8,&PTR_PTR_1126ce438);
  func_0x000107c5fc50(uVar2,&uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102416c10; end: 1024171ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102416c10(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             uint param_5,uint param_6,long param_7)

{
  undefined *puVar1;
  ulong uVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  long lStack_108;
  undefined *puStack_f8;
  undefined *puStack_e8;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined auStack_90 [32];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar15 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar15 == (undefined *)0x0) {
    bVar3 = false;
  }
  else {
    uStack_c8 = (ulong)param_1 & 0xffffffffffffff8;
    bVar3 = false;
    puVar11 = param_2;
    puVar12 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined **)(uStack_c8 + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1024170d4);
            (*pcVar4)();
          }
          puVar5 = *(undefined **)(param_1 + (long)puVar12 * 8 + 0x20);
          func_0x000107c61174();
          puVar9 = puVar11;
        }
        else {
          puVar5 = puVar12;
          puVar9 = param_1;
          FUN_10241a250(puVar12,param_1,&PTR_PTR_1126ce438,0x112e551a8);
        }
        puVar1 = puVar12 + 1;
        if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1024170d0);
          (*pcVar4)();
        }
        puVar6 = puVar5;
        func_0x000107c5aaf0();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c5aaf8();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5faec();
        puVar11 = puVar9;
        func_0x000107c61170(puVar7);
        if (puVar8 == param_3 && puVar9 == param_4) break;
        puVar11 = puVar9;
        func_0x000107c605b8(puVar8,puVar9,param_3,param_4,0);
        func_0x000107c6142c(puVar9);
        if ((((ulong)puVar8 & 1) == 0) || ((param_5 & 1) != 0)) goto LAB_102416d88;
LAB_102416d48:
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        puVar12 = puVar12 + 1;
        if (puVar1 == puVar15) goto LAB_102417108;
      }
      func_0x000107c6142c(puVar9);
      if ((param_5 & 1) == 0) goto LAB_102416d48;
LAB_102416d88:
      puVar12 = puVar6;
      func_0x000107c5d0f0();
      if ((puVar12 == (undefined *)0x8) &&
         (puVar12 = puVar5, func_0x000107c4fa48(), puVar12 != (undefined *)0x0)) {
        bVar3 = true;
      }
      if ((param_6 & 1) == 0) {
        puStack_f8 = puVar6;
        FUN_10241ba98();
      }
      else {
        puVar12 = puVar6;
        func_0x000107c5aaf8();
        func_0x000107c61180();
        puVar9 = puVar12;
        func_0x000107c5faec();
        func_0x000107c61170(puVar12);
        if (*(long *)(param_2 + 0x10) == 0) {
          lStack_108 = 0;
        }
        else {
          func_0x000107c61434(param_2);
          puVar12 = puVar11;
          func_0x000100029284();
          if (((ulong)puVar12 & 1) == 0) {
            lStack_108 = 0;
          }
          else {
            lStack_108 = *(long *)(*(long *)(param_2 + 0x38) + (long)puVar9 * 8);
            func_0x000107c61174();
          }
          func_0x000107c6142c(puVar11);
          puVar11 = param_2;
        }
        func_0x000107c6142c(puVar11);
        puVar11 = puVar5;
        func_0x000107c5aaf0();
        func_0x000107c61180();
        puStack_f8 = puVar11;
        FUN_10241ba98();
        func_0x000107c61170(puVar11);
        puVar11 = puVar5;
        func_0x000107c4fa48();
        puVar9 = PTR_PTR_1126aa7e0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar12 = &UNK_110503bb0;
        func_0x000107c613fc(&UNK_110503bb0,0x18,7);
        *(undefined8 *)(puVar12 + 0x10) = 0;
        if (lStack_108 != 0) {
          puVar7 = &UNK_110503bd8;
          func_0x000107c613fc(&UNK_110503bd8,0x28,7);
          *(undefined **)(puVar7 + 0x10) = puVar12;
          *(undefined **)(puVar7 + 0x18) = puVar9;
          *(undefined **)(puVar7 + 0x20) = puVar11;
          pcStack_a0 = FUN_10241c688;
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0x42000000;
          puStack_b0 = &UNK_10208ddac;
          puStack_a8 = &UNK_110503bf0;
          ppuVar10 = &puStack_c0;
          puStack_98 = puVar7;
          func_0x000107c60bc4();
          puVar11 = puStack_98;
          lVar14 = lStack_108;
          func_0x000107c61174(lStack_108);
          func_0x000107c6157c(puVar12);
          func_0x000107c61174(puVar9);
          func_0x000107c61574(puVar11);
          func_0x000107c4c6bc(lVar14);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c61170(lVar14);
        }
        puVar11 = auStack_90;
        func_0x000107c61428(puVar12 + 0x10,puVar11,0,0);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c490d4();
        func_0x000107c52b98(puVar9);
        func_0x000107c61574(puVar12);
        func_0x000107c61170(puVar7);
        func_0x000107c52ba4(puStack_f8);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lStack_108);
        puVar5 = puVar6;
        puVar6 = puVar9;
      }
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      puVar12 = puStack_e8;
      func_0x000107c61550();
      if ((((int)puVar12 == 0) || ((long)puStack_e8 < 0)) ||
         (puVar12 = puStack_e8, ((ulong)puStack_e8 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_e8 >> 0x3e == 0) {
          puVar11 = *(undefined **)(((ulong)puStack_e8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puStack_e8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_e8) {
            puVar11 = puStack_e8;
          }
          func_0x000107c60480();
        }
        puVar11 = puVar11 + 1;
        puVar12 = (undefined *)0x0;
        FUN_10241a770(0,puVar11,1,puStack_e8,0x112e97c10,&PTR_PTR_1126aa7e8,0x112e97c18,
                      &UNK_10daa3070);
      }
      uVar13 = (ulong)puVar12 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar13 + 0x10);
      puVar5 = (undefined *)(uVar2 + 1);
      puStack_e8 = puVar12;
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar2) {
        puStack_e8 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        puVar11 = puVar5;
        FUN_10241a770(puStack_e8,puVar5,1,puVar12,0x112e97c10,&PTR_PTR_1126aa7e8,0x112e97c18,
                      &UNK_10daa3070);
        uVar13 = (ulong)puStack_e8 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar13 + 0x10) = puVar5;
      *(undefined **)(uVar13 + uVar2 * 8 + 0x20) = puStack_f8;
      puVar12 = puVar1;
    } while (puVar1 != puVar15);
  }
LAB_102417108:
  if (bVar3) {
    func_0x000107c61428(param_7 + 0x10,&puStack_c0,0,0);
    param_7 = param_7 + 0x10;
    func_0x000107c61618();
    if (param_7 != 0) {
      lVar14 = *(long *)(param_7 + _DAT_112e97b58);
      func_0x000107c615f0(lVar14);
      func_0x000107c61170(param_7);
      if (lVar14 != 0) {
        func_0x000107c42c04(lVar14);
        func_0x000107c615e8(lVar14);
      }
    }
  }
  puVar15 = puStack_e8;
  func_0x00010241689c(puStack_e8,&PTR_PTR_1126aa7e8,0x112e97c10);
  func_0x000107c6142c(puStack_e8);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar12 = puVar15;
  func_0x000107c5fc48(puVar15,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar15);
  func_0x000107c45788(puVar11);
  func_0x000107c61170(puVar12);
  return puVar11;
}



/* Entry: 102417200; end: 10241724f; -[_TtC32ComposerListStoreServiceProvider17ComposerListStore fetchListPickerItemsWithSource:includeContacts:] */

void FUN_102417200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_102415ee4(param_3,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102417250; end: 1024173cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102417250(undefined *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined4 uVar6;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e97b48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      if (param_3 != 1) {
        FUN_10241c318(0);
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024173d0);
        (*pcVar1)();
      }
      uVar6 = 1;
    }
    func_0x0001000285a8(0x112e97bc8,&UNK_10daa3000);
    FUN_1024173d0(param_1,param_2,uVar6,lVar2);
    puVar3 = param_1;
    func_0x0001000b637c();
    func_0x000107c61170(param_1);
    uVar5 = 0;
    FUN_10241c8d0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    pcVar1 = FUN_102417544;
    func_0x0001000bfde0(FUN_102417544,0,uVar5);
    func_0x000107c61574(puVar3);
    func_0x0001004575f0();
    func_0x000107c61574(pcVar1);
    puVar4 = puVar3;
    func_0x000107c5cb24(puVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 1024173d0; end: 102417543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024173d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_90 [16];
  long lStack_58;
  
  if (*(char *)(unaff_x20 + _DAT_112e97b60) == '\x01' && param_3 == 0) {
    uVar1 = 0x112e7c6e8;
    func_0x0001000285a8(0x112e7c6e8,&UNK_10daa3020);
    func_0x000100087bd4(&lStack_58,FUN_10241c384,auStack_90,uVar1);
    if (lStack_58 == 0) {
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c5ab00();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar2 = param_4;
      func_0x000107c4f63c();
      func_0x000107c61180();
      func_0x000107c61170(param_4);
      uVar1 = 0x112d5b0a0;
      func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
      func_0x000100087bd4(&lStack_58,0x10241c3a0,auStack_90,uVar1);
      func_0x000107c61170(lVar2);
    }
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c5ab00(param_4);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lStack_58 = param_4;
  }
  return lStack_58;
}



/* Entry: 102417544; end: 102417aab;  */

void FUN_102417544(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uStack_c8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  uVar5 = *param_2;
  func_0x000107c4fa70();
  func_0x000107c61180();
  uVar6 = 0;
  FUN_10241c8d0(0,0x112d61f60,&PTR_PTR_1126b14a0);
  uVar7 = uVar5;
  func_0x000107c5fc54(uVar5,uVar6);
  func_0x000107c61170(uVar5);
  if (uVar7 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar5 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar5 = uVar7;
    }
    func_0x000107c60480();
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar18;
  if (uVar5 != 0) {
    uStack_c8 = uVar7 & 0xffffffffffffff8;
    uVar19 = 0;
    do {
      while( true ) {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_c8 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1024179dc);
            (*pcVar4)();
          }
          uVar8 = *(ulong *)(uVar7 + uVar19 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar19;
          FUN_10241a250(uVar19,uVar7,&PTR_PTR_1126b14a0,0x112d61f60);
        }
        uVar1 = uVar19 + 1;
        if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1024179d8);
          (*pcVar4)();
        }
        lStack_78 = 0;
        puVar17 = &UNK_110503958;
        func_0x000107c613fc(&UNK_110503958,0x18,7);
        *(long **)(puVar17 + 0x10) = &lStack_78;
        puVar16 = &UNK_110503980;
        func_0x000107c613fc(&UNK_110503980,0x20,7);
        *(undefined8 *)(puVar16 + 0x10) = 0x10241c32c;
        *(undefined **)(puVar16 + 0x18) = puVar17;
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_88 = FUN_10241c334;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = (code *)&UNK_100de6bdc;
        puStack_90 = &UNK_110503998;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar16;
        func_0x000107c60bc4();
        puVar10 = puStack_80;
        func_0x000107c6157c(puVar16);
        func_0x000107c61574(puVar10);
        puVar10 = &UNK_1105039d0;
        func_0x000107c613fc(&UNK_1105039d0,0x18,7);
        *(long **)(puVar10 + 0x10) = &lStack_78;
        puVar11 = &UNK_1105039f8;
        func_0x000107c613fc(&UNK_1105039f8,0x20,7);
        *(code **)(puVar11 + 0x10) = FUN_10241c354;
        *(undefined **)(puVar11 + 0x18) = puVar10;
        pcStack_88 = (code *)0x10241cab8;
        puStack_a8 = puVar2;
        uStack_a0 = 0x42000000;
        pcStack_98 = (code *)&UNK_100de6bdc;
        puStack_90 = &UNK_110503a10;
        ppuVar12 = &puStack_a8;
        puStack_80 = puVar11;
        func_0x000107c60bc4(ppuVar12);
        puVar13 = puStack_80;
        func_0x000107c6157c(puVar11);
        func_0x000107c61574(puVar13);
        puVar13 = &UNK_110503a48;
        func_0x000107c613fc(&UNK_110503a48,0x18,7);
        *(long **)(puVar13 + 0x10) = &lStack_78;
        puVar14 = &UNK_110503a70;
        func_0x000107c613fc(&UNK_110503a70,0x20,7);
        *(undefined8 *)(puVar14 + 0x10) = 0x10241c35c;
        *(undefined **)(puVar14 + 0x18) = puVar13;
        pcStack_88 = FUN_10241c364;
        puStack_a8 = puVar2;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_102417bfc;
        puStack_90 = &UNK_110503a88;
        ppuVar15 = &puStack_a8;
        puStack_80 = puVar14;
        func_0x000107c60bc4(ppuVar15);
        puVar2 = puStack_80;
        func_0x000107c6157c(puVar14);
        func_0x000107c61574(puVar2);
        func_0x000107c4c724(uVar8);
        func_0x000107c60bd0(ppuVar15);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61574(puVar17);
        puVar17 = puVar16;
        func_0x000107c61544(puVar16,"",0x56,0x87,0x2c,1);
        func_0x000107c61574(puVar10);
        func_0x000107c61574(puVar16);
        if (((ulong)puVar17 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1024179e0);
          (*pcVar4)();
        }
        puVar17 = puVar11;
        func_0x000107c61544(puVar11,"",0x56,0x89,0x1a,1);
        func_0x000107c61574(puVar13);
        func_0x000107c61574(puVar11);
        if (((ulong)puVar17 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1024179e4);
          (*pcVar4)();
        }
        puVar17 = puVar14;
        func_0x000107c61544(puVar14,"",0x56,0x8b,0x2a,1);
        func_0x000107c61170(uVar8);
        func_0x000107c61574(puVar14);
        lVar3 = lStack_78;
        if (((ulong)puVar17 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1024179e8);
          (*pcVar4)();
        }
        if (lStack_78 != 0) break;
        uVar19 = uVar19 + 1;
        if (uVar1 == uVar5) goto LAB_102417a0c;
      }
      puVar17 = puVar18;
      func_0x000107c61550();
      if ((((int)puVar17 == 0) || ((long)puVar18 < 0)) ||
         (puVar17 = puVar18, ((ulong)puVar18 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar18 >> 0x3e == 0) {
          puVar16 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar16 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar18) {
            puVar16 = puVar18;
          }
          func_0x000107c60480(puVar16);
        }
        puVar17 = (undefined *)0x0;
        FUN_10241a770(0,puVar16 + 1,1,puVar18,0x112e97bc0,&PTR_PTR_1126aa7d8,0x112e97bd0,
                      &UNK_10daa3010);
      }
      uVar8 = (ulong)puVar17 & 0xffffffffffffff8;
      uVar19 = *(ulong *)(uVar8 + 0x10);
      puVar18 = puVar17;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar19) {
        puVar18 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_10241a770(puVar18,uVar19 + 1,1,puVar17,0x112e97bc0,&PTR_PTR_1126aa7d8,0x112e97bd0,
                      &UNK_10daa3010);
        uVar8 = (ulong)puVar18 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar8 + 0x10) = uVar19 + 1;
      *(long *)(uVar8 + uVar19 * 8 + 0x20) = lVar3;
      uVar19 = uVar1;
    } while (uVar1 != uVar5);
  }
LAB_102417a0c:
  func_0x000107c6142c(uVar7);
  puVar17 = puVar18;
  func_0x00010241689c(puVar18,&PTR_PTR_1126aa7d8,0x112e97bc0);
  func_0x000107c6142c(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  puVar16 = puVar17;
  func_0x000107c5fc48(puVar17,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar17);
  func_0x000107c45788();
  func_0x000107c61170(puVar16);
  *param_1 = puVar18;
  return;
}


