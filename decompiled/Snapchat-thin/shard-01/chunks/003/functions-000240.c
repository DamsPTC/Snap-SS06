/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f22468; end: 100f224db; -[SCCreatorHubDeeplinkPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f22468(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4bff8,0);
  func_0x000107c61614(param_1 + _DAT_112d4c000,0);
  *(undefined8 *)(param_1 + _DAT_112d4c008) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f224dc; end: 100f2250f;  */

void FUN_100f224dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f22510; end: 100f22557; -[SCCreatorHubDeeplinkPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f22510(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4bff8);
  func_0x000107c61610(param_1 + _DAT_112d4c000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4c008));
  return;
}



/* Entry: 100f22558; end: 100f22577;  */

void FUN_100f22558(void)

{
  func_0x000107c61168(&PTR_PTR_1127a1528);
  return;
}



/* Entry: 100f22578; end: 100f225d3; -[_TtC25SnapPromoteDeeplinkPlugin25SnapPromoteDeeplinkPlugin init] */

void FUN_100f22578(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapPromoteDeeplinkPlugin.SnapPromoteDeeplinkPlugin",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f225a4);
  (*pcVar1)();
}



/* Entry: 100f225d4; end: 100f2262b; -[_TtC25SnapPromoteDeeplinkPlugin25SnapPromoteDeeplinkPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f225f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f22610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f225f4) */
/* WARNING: Removing unreachable block (ram,0x000100f22614) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f225d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4c038));
  return;
}



/* Entry: 100f2262c; end: 100f22727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2262c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d4c040);
  puVar1 = &UNK_110369d20;
  func_0x000107c613fc(&UNK_110369d20,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110369d48;
  func_0x000107c613fc(&UNK_110369d48,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  pcStack_50 = FUN_100f231f4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x100f2343c;
  puStack_58 = &UNK_110369d60;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4db94(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 100f22728; end: 100f2278f; -[_TtC25SnapPromoteDeeplinkPlugin25SnapPromoteDeeplinkPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_100f22728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_100f2262c(param_3,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f22790; end: 100f22797; -[_TtC25SnapPromoteDeeplinkPlugin25SnapPromoteDeeplinkPlugin shouldForceNavigation] */

undefined8 FUN_100f22790(void)

{
  return 0;
}



/* Entry: 100f22798; end: 100f2279b; -[_TtC25SnapPromoteDeeplinkPlugin25SnapPromoteDeeplinkPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_100f22798(void)

{
  return;
}



/* Entry: 100f2279c; end: 100f22d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2279c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long lVar11;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar6 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar10,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      lVar2 = param_1;
      func_0x000107c615f0();
      func_0x000100f22adc();
      if (lVar2 == 0) {
        func_0x000107c61170(param_2);
        func_0x000107c615e8(param_1);
      }
      else {
        lVar3 = *(long *)(param_2 + _DAT_112d4c050);
        func_0x000107c4e26c();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 == 0) {
          func_0x000107c61170(param_2);
        }
        else {
          lVar3 = *(long *)(param_2 + _DAT_112d4c048);
          lStack_b0 = lVar4;
          func_0x000107c4d604();
          func_0x000107c61180();
          lVar4 = lVar3;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          lStack_b8 = lVar4;
          if (lVar4 != 0) {
            uVar5 = 0;
            FUN_100f2321c();
            uStack_c0 = uVar5;
            func_0x000107c3abfc();
            func_0x000107c61180();
            func_0x000107c5edb4(lVar6);
            func_0x000107c61170();
            func_0x000107c5ed70();
            (**(code **)(lVar11 + 8))(lVar6,lVar1);
            lVar11 = lStack_b0;
            lVar6 = lStack_b0;
            func_0x000107c614f0(lStack_b0);
            func_0x000107c615f0(lVar11);
            lVar1 = lStack_b8;
            func_0x000107c615f0(lStack_b8);
            FUN_100f23368(param_4,puVar10,lVar11,lVar2,lVar1,uStack_c0,lVar6);
            func_0x000107c615e8(lVar11);
            func_0x000107c615e8(lVar1);
            puVar7 = &UNK_110369d20;
            func_0x000107c613fc(&UNK_110369d20,0x18,7);
            func_0x000107c61614(puVar7 + 0x10,param_2);
            puVar8 = &UNK_110369d98;
            func_0x000107c613fc(&UNK_110369d98,0x28,7);
            *(undefined **)(puVar8 + 0x10) = puVar7;
            *(undefined8 *)(puVar8 + 0x18) = param_3;
            *(undefined8 *)(puVar8 + 0x20) = param_4;
            pcStack_88 = FUN_100f23418;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_100f1c768;
            puStack_90 = &UNK_110369db0;
            ppuVar9 = &puStack_a8;
            puStack_80 = puVar8;
            func_0x000107c60bc4(ppuVar9);
            puVar7 = puStack_80;
            func_0x000107c615f0(param_3);
            func_0x000107c61174(param_4);
            func_0x000107c61574(puVar7);
            func_0x000107c440d8(param_1);
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61170(param_2);
            func_0x000107c615e8(param_1);
            func_0x000107c615e8(lVar11);
            func_0x000107c615e8(lVar1);
            func_0x000107c61170(param_4);
            return;
          }
          func_0x000107c61170(param_2);
          func_0x000107c615e8(param_1);
          param_1 = lStack_b0;
        }
        func_0x000107c615e8(param_1);
        func_0x000107c6142c(lVar2);
      }
    }
  }
  func_0x000107c4bb48(param_3);
  func_0x000107c4bb60(param_3);
  func_0x000107c42808(param_3);
  return;
}



/* Entry: 100f22d14; end: 100f22ecf;  */

void FUN_100f22d14(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
    func_0x000107c61428(param_2 + 0x10,&puStack_88,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000107c61170();
      func_0x000107c4bb48(param_3);
      func_0x000107c4bb60(param_3);
      func_0x000107c42808(param_3);
    }
  }
  else {
    puVar1 = PTR_PTR_1126ce680;
    func_0x000107c61168(PTR_PTR_1126ce680);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar1);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c445cc();
    func_0x000107c61180();
    puVar3 = &UNK_110369d20;
    func_0x000107c613fc(&UNK_110369d20,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618(param_2);
    func_0x000107c61614(puVar3 + 0x10,param_2);
    func_0x000107c61170(param_2);
    puVar4 = &UNK_110369de8;
    func_0x000107c613fc(&UNK_110369de8,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    uStack_68 = 0x100f23424;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_100f22f40;
    puStack_70 = &UNK_110369e00;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_60;
    func_0x000107c615f0(param_3);
    func_0x000107c61574(puVar3);
    func_0x000107c4db80(puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 100f22ed0; end: 100f22f3f;  */

void FUN_100f22ed0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c61170();
    func_0x000107c4bb48(param_4);
    func_0x000107c4bb60(param_4);
    func_0x000107c42808(param_4);
  }
  return;
}



/* Entry: 100f22f40; end: 100f22fb7;  */

/* WARNING: Possible PIC construction at 0x000100f22f9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f22fa0) */

void FUN_100f22f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100f22fb8; end: 100f22fff;  */

void FUN_100f22fb8(long param_1,undefined8 param_2)

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



/* Entry: 100f23000; end: 100f2304f; -[_TtC25SnapPromoteDeeplinkPlugin25SnapPromoteDeeplinkPlugin identifier] */

void FUN_100f23000(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uStack_28 = param_1;
  func_0x000107c614e4();
  puVar1 = &uStack_28;
  func_0x000107c5fb18(puVar1,param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100f23050; end: 100f23057; -[_TtC25SnapPromoteDeeplinkPlugin25SnapPromoteDeeplinkPlugin priority] */

undefined8 FUN_100f23050(void)

{
  return 1000;
}



/* Entry: 100f23058; end: 100f23147; -[_TtC25SnapPromoteDeeplinkPlugin25SnapPromoteDeeplinkPlugin canProvideProcessorForFeature:] */

uint FUN_100f23058(undefined8 param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  func_0x000107c5faec();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd44b8;
  lVar4 = param_2;
  func_0x000107c5faec();
  lVar3 = param_2;
  if (param_3 == ppuVar1 && param_2 == lVar4) {
    uVar5 = 1;
    param_2 = lVar4;
  }
  else {
    ppuVar2 = param_3;
    func_0x000107c605b8(param_3,param_2,ppuVar1,lVar4,0);
    func_0x000107c6142c(lVar4);
    if (((ulong)ppuVar2 & 1) != 0) {
      uVar5 = 1;
      goto LAB_100f2312c;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110f84078;
    func_0x000107c5faec();
    if (param_3 == ppuVar1 && param_2 == lVar3) {
      uVar5 = 1;
    }
    else {
      func_0x000107c605b8(param_3,param_2,ppuVar1,lVar3,0);
      uVar5 = (uint)param_3;
    }
  }
  func_0x000107c6142c(lVar3);
LAB_100f2312c:
  func_0x000107c6142c(param_2);
  return uVar5 & 1;
}



/* Entry: 100f23148; end: 100f231cf; -[_TtC25SnapPromoteDeeplinkPlugin25SnapPromoteDeeplinkPlugin isValidDeepLink:] */

undefined8 FUN_100f23148(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x000107c3f418(param_1,param_2,lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 100f231d0; end: 100f231d3; -[_TtC25SnapPromoteDeeplinkPlugin25SnapPromoteDeeplinkPlugin makeDeepLinkProcessor] */

void FUN_100f231d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100f231d4; end: 100f231f3;  */

void FUN_100f231d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a15f0);
  return;
}



/* Entry: 100f231f4; end: 100f2321b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f231f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long extraout_x8;
  long unaff_x20;
  long lVar14;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar8 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_78;
  func_0x000107c61428(lVar3 + 0x10,puVar12,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      lVar4 = param_1;
      func_0x000107c615f0();
      func_0x000100f22adc();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(param_1);
      }
      else {
        lVar5 = *(long *)(lVar3 + _DAT_112d4c050);
        func_0x000107c4e26c();
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar6 == 0) {
          func_0x000107c61170(lVar3);
        }
        else {
          lVar5 = *(long *)(lVar3 + _DAT_112d4c048);
          lStack_b0 = lVar6;
          func_0x000107c4d604();
          func_0x000107c61180();
          lVar6 = lVar5;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
          lStack_b8 = lVar6;
          if (lVar6 != 0) {
            uVar7 = 0;
            FUN_100f2321c();
            uStack_c0 = uVar7;
            func_0x000107c3abfc();
            func_0x000107c61180();
            func_0x000107c5edb4(lVar8);
            func_0x000107c61170();
            func_0x000107c5ed70();
            (**(code **)(lVar14 + 8))(lVar8,lVar2);
            lVar14 = lStack_b0;
            lVar8 = lStack_b0;
            func_0x000107c614f0(lStack_b0);
            func_0x000107c615f0(lVar14);
            lVar2 = lStack_b8;
            func_0x000107c615f0(lStack_b8);
            FUN_100f23368(uVar13,puVar12,lVar14,lVar4,lVar2,uStack_c0,lVar8);
            func_0x000107c615e8(lVar14);
            func_0x000107c615e8(lVar2);
            puVar9 = &UNK_110369d20;
            func_0x000107c613fc(&UNK_110369d20,0x18,7);
            func_0x000107c61614(puVar9 + 0x10,lVar3);
            puVar10 = &UNK_110369d98;
            func_0x000107c613fc(&UNK_110369d98,0x28,7);
            *(undefined **)(puVar10 + 0x10) = puVar9;
            *(undefined8 *)(puVar10 + 0x18) = uVar1;
            *(undefined8 *)(puVar10 + 0x20) = uVar13;
            pcStack_88 = FUN_100f23418;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_100f1c768;
            puStack_90 = &UNK_110369db0;
            ppuVar11 = &puStack_a8;
            puStack_80 = puVar10;
            func_0x000107c60bc4(ppuVar11);
            puVar9 = puStack_80;
            func_0x000107c615f0(uVar1);
            func_0x000107c61174(uVar13);
            func_0x000107c61574(puVar9);
            func_0x000107c440d8(param_1);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c61170(lVar3);
            func_0x000107c615e8(param_1);
            func_0x000107c615e8(lVar14);
            func_0x000107c615e8(lVar2);
            func_0x000107c61170(uVar13);
            return;
          }
          func_0x000107c61170(lVar3);
          func_0x000107c615e8(param_1);
          param_1 = lStack_b0;
        }
        func_0x000107c615e8(param_1);
        func_0x000107c6142c(lVar4);
      }
    }
  }
  func_0x000107c4bb48(uVar1);
  func_0x000107c4bb60(uVar1);
  func_0x000107c42808(uVar1);
  return;
}



/* Entry: 100f2321c; end: 100f2325f;  */

void FUN_100f2321c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4c080 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a5f58;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4c080 = puVar1;
  return;
}



/* Entry: 100f23260; end: 100f23367;  */

undefined * FUN_100f23260(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f23368);
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
    puVar3 = (undefined *)0x112d4c088;
    func_0x0001000285a8(0x112d4c088,&UNK_10d913a10);
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
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___s10Foundation4DataVN_110350ae0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100f23368; end: 100f23417;  */

undefined8
FUN_100f23368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c614e8(param_6);
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  uVar1 = param_4;
  func_0x000107c5fc48(param_4,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c6142c(param_4);
  func_0x000107c46458(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return param_6;
}



/* Entry: 100f23418; end: 100f2343f;  */

void FUN_100f23418(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 == 0) {
    func_0x000107c61428(lVar7 + 0x10,&puStack_88,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61618();
    if (lVar7 != 0) {
      func_0x000107c61170();
      func_0x000107c4bb48(uVar1);
      func_0x000107c4bb60(uVar1);
      func_0x000107c42808(uVar1);
    }
  }
  else {
    puVar2 = PTR_PTR_1126ce680;
    func_0x000107c61168(PTR_PTR_1126ce680);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar2);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c445cc();
    func_0x000107c61180();
    puVar4 = &UNK_110369d20;
    func_0x000107c613fc(&UNK_110369d20,0x18,7);
    func_0x000107c61428(lVar7 + 0x10,auStack_58,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61618(lVar7);
    func_0x000107c61614(puVar4 + 0x10,lVar7);
    func_0x000107c61170(lVar7);
    puVar5 = &UNK_110369de8;
    func_0x000107c613fc(&UNK_110369de8,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    uStack_68 = 0x100f23424;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_100f22f40;
    puStack_70 = &UNK_110369e00;
    ppuVar6 = &puStack_88;
    puStack_60 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_60;
    func_0x000107c615f0(uVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c4db80(puVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 100f23440; end: 100f2358b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100f23440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  func_0x000107c613fc();
  lVar1 = 0;
  FUN_100f231d4();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112d4c038) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  *(undefined8 *)(lVar2 + _DAT_112d4c040) = uVar3;
  *(undefined8 *)(lVar2 + _DAT_112d4c048) = param_4;
  *(undefined8 *)(lVar2 + _DAT_112d4c050) = param_5;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  uVar3 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 100f2358c; end: 100f235a7;  */

void FUN_100f2358c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f235a8; end: 100f235c7;  */

void FUN_100f235a8(void)

{
  func_0x000107c61168(&PTR_PTR_112d4c0d0);
  return;
}



/* Entry: 100f235c8; end: 100f235d3; -[SCSnapPromoteDeeplinkPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f235c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c128;
  func_0x000107c61428(param_1 + _DAT_112d4c128,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f235d4; end: 100f235df; -[SCSnapPromoteDeeplinkPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f235d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c128;
  func_0x000107c61428(param_1 + _DAT_112d4c128,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f235e0; end: 100f235eb; -[SCSnapPromoteDeeplinkPluginEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f235e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c130;
  func_0x000107c61428(param_1 + _DAT_112d4c130,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f235ec; end: 100f235f7; -[SCSnapPromoteDeeplinkPluginEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f235ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c130;
  func_0x000107c61428(param_1 + _DAT_112d4c130,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f235f8; end: 100f23603; -[SCSnapPromoteDeeplinkPluginEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f235f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c138;
  func_0x000107c61428(param_1 + _DAT_112d4c138,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f23604; end: 100f2360f; -[SCSnapPromoteDeeplinkPluginEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f23604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c138;
  func_0x000107c61428(param_1 + _DAT_112d4c138,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f23610; end: 100f2361b; -[SCSnapPromoteDeeplinkPluginEntryPoint composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f23610(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c140;
  func_0x000107c61428(param_1 + _DAT_112d4c140,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f2361c; end: 100f23627; -[SCSnapPromoteDeeplinkPluginEntryPoint setComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2361c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c140;
  func_0x000107c61428(param_1 + _DAT_112d4c140,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f23628; end: 100f23633; -[SCSnapPromoteDeeplinkPluginEntryPoint pageLauncherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f23628(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c148;
  func_0x000107c61428(param_1 + _DAT_112d4c148,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f23634; end: 100f23677;  */

void FUN_100f23634(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f23678; end: 100f23683; -[SCSnapPromoteDeeplinkPluginEntryPoint setPageLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f23678(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c148;
  func_0x000107c61428(param_1 + _DAT_112d4c148,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f23684; end: 100f236d7;  */

void FUN_100f23684(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f236d8; end: 100f2391f;  */

/* WARNING: Possible PIC construction at 0x000100f23828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2384c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2385c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2386c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2387c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f238e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f238f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f238d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f238fc) */
/* WARNING: Removing unreachable block (ram,0x000100f238ec) */
/* WARNING: Removing unreachable block (ram,0x000100f23880) */
/* WARNING: Removing unreachable block (ram,0x000100f23870) */
/* WARNING: Removing unreachable block (ram,0x000100f23860) */
/* WARNING: Removing unreachable block (ram,0x000100f23850) */
/* WARNING: Removing unreachable block (ram,0x000100f2382c) */
/* WARNING: Removing unreachable block (ram,0x000100f238dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f236d8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5b398();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c40014();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3ffd0();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          func_0x000107c4e270();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_100f235a8(0);
            func_0x000107c613fc();
            lVar5 = 0;
            FUN_100f231d4();
            lVar1 = lVar5;
            func_0x000107c610f8();
            *(long *)(lVar1 + _DAT_112d4c038) = lVar2;
            func_0x000107c61174(lVar2);
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            lVar2 = lVar3;
            func_0x000107c5dbd4();
            func_0x000107c61180();
            *(long *)(lVar1 + _DAT_112d4c040) = lVar2;
            *(long *)(lVar1 + _DAT_112d4c048) = lVar4;
            *(long *)(lVar1 + _DAT_112d4c050) = unaff_x20;
            lStack_70 = lVar1;
            lStack_68 = lVar5;
            func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
            lVar1 = lVar3;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100f23920; end: 100f23947; -[SCSnapPromoteDeeplinkPluginEntryPoint begin] */

void FUN_100f23920(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f236d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f23948; end: 100f2398b; -[SCSnapPromoteDeeplinkPluginEntryPoint end] */

void FUN_100f23948(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f2398c; end: 100f23c73;  */

void FUN_100f2398c(long param_1,long param_2,long param_3)

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
  }
  else {
    uVar2 = 0x536f725070616e73;
    if (((param_2 == 0x536f725070616e73) && (param_3 == -0x108c9a9c96898d9b)) ||
       (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5943c();
    }
    else {
      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e6390)) ||
             (func_0x000107c605b8(0xd000000000000020,0x800000010ef19c70,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c536a8();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e5ad0)) &&
               (func_0x000107c605b8(0xd000000000000014,0x800000010ef1a530,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SnapPromoteDeeplinkPlugin/SCSnapPromoteDeeplinkPluginEntryPoint.swift"
                                  ,0x45,2,0x36,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100f23c74);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c571c8();
          }
          goto LAB_100f23a18;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c536e0();
    }
  }
LAB_100f23a18:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f23c74; end: 100f23d1f; -[SCSnapPromoteDeeplinkPluginEntryPoint setValue:forIvarName:] */

void FUN_100f23c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f2398c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f23d20; end: 100f23dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f23d20(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4c128,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4c130,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4c138,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4c140,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4c148,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4c150) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f23dd0; end: 100f23def; -[SCSnapPromoteDeeplinkPluginEntryPoint init] */

void FUN_100f23dd0(void)

{
  FUN_100f23d20();
  return;
}



/* Entry: 100f23df0; end: 100f23e23;  */

void FUN_100f23df0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f23e24; end: 100f23e9b; -[SCSnapPromoteDeeplinkPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f23e24(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4c128);
  func_0x000107c61610(param_1 + _DAT_112d4c130);
  func_0x000107c61610(param_1 + _DAT_112d4c138);
  func_0x000107c61610(param_1 + _DAT_112d4c140);
  func_0x000107c61610(param_1 + _DAT_112d4c148);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4c150));
  return;
}



/* Entry: 100f23e9c; end: 100f23ebb;  */

void FUN_100f23e9c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a16c8);
  return;
}



/* Entry: 100f23ebc; end: 100f23fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f23ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d4c180) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010451338c();
  FUN_100f24f88(0);
  func_0x000107c610f8();
  uVar2 = param_2;
  FUN_100f24818(param_2,param_3,uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x20 + _DAT_112d4c188) = uVar2;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar3;
}



/* Entry: 100f23fd4; end: 100f24033; -[_TtC31BusinessMediaPickerPageLauncher41BusinessMediaPickerPageLauncherEntryPoint init] */

void FUN_100f23fd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BusinessMediaPickerPageLauncher.BusinessMediaPickerPageLauncherEntryPoint",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f24000);
  (*pcVar1)();
}



/* Entry: 100f24034; end: 100f240af; -[_TtC31BusinessMediaPickerPageLauncher41BusinessMediaPickerPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f24050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f24054) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f24034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4c180));
  return;
}



/* Entry: 100f240b0; end: 100f240b7;  */

undefined8 FUN_100f240b0(void)

{
  return 0;
}



/* Entry: 100f240b8; end: 100f24147; -[_TtC31BusinessMediaPickerPageLauncher41BusinessMediaPickerPageLauncherEntryPoint composerNativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f240b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_100f1b11c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4c188);
  func_0x000107c61174();
  uVar2 = 0x112d4bc30;
  func_0x0001000285a8(0x112d4bc30,&DAT_10d912660);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100f24148; end: 100f2414b; -[_TtC31BusinessMediaPickerPageLauncher41BusinessMediaPickerPageLauncherEntryPoint setComposerNativePayloadHandlers:] */

void FUN_100f24148(void)

{
  return;
}



/* Entry: 100f2414c; end: 100f2416b;  */

void FUN_100f2414c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a17a8);
  return;
}



/* Entry: 100f2416c; end: 100f241d3;  */

undefined8 FUN_100f2416c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_100f24818(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100f241d4; end: 100f2421f; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler composerPayloadClass] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f241d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c1b8;
  func_0x000107c61428(param_1 + _DAT_112d4c1b8,auStack_38,0,0);
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x000107c614e8();
  }
  return;
}



/* Entry: 100f24220; end: 100f24283; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler setComposerPayloadClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f24220(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c614ec();
  }
  lVar1 = _DAT_112d4c1b8;
  func_0x000107c61428(param_1 + _DAT_112d4c1b8,auStack_48,1,0);
  *(long *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 100f24284; end: 100f2428b; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler payloadType] */

undefined8 FUN_100f24284(void)

{
  return 2;
}



/* Entry: 100f2428c; end: 100f2437f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2428c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar4 = *(long *)(param_1 + _DAT_112d4c1c0);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8();
    func_0x000107c61180();
    if (lVar4 != 0) {
      puVar2 = &UNK_110369f50;
      func_0x000107c613fc(&UNK_110369f50,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_1);
      uStack_40 = 0x100f25018;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000b0c7c;
      puStack_48 = &UNK_11036a030;
      puStack_38 = puVar2;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c5e2a4(lVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 100f24380; end: 100f24403; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler launchWithPayload:completion:] */

void FUN_100f24380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  func_0x000100f24c84(auStack_50);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f24404; end: 100f24463; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler init] */

void FUN_100f24404(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BusinessMediaPickerPageLauncher.BusinessMediaPickerPageLauncherHandler",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f24430);
  (*pcVar1)();
}



/* Entry: 100f24464; end: 100f244bb; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f24480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f24484) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f24464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4c1c0));
  return;
}



/* Entry: 100f244bc; end: 100f245ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f244bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar4 = *(long *)(unaff_x20 + _DAT_112d4c1c0);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8();
    func_0x000107c61180();
    if (lVar4 != 0) {
      puVar2 = &UNK_110369f50;
      func_0x000107c613fc(&UNK_110369f50,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000b0c7c;
      uStack_58 = param_2;
      uStack_50 = param_1;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c5e2a4(lVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 100f245ac; end: 100f245e3; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler onBackPressed] */

void FUN_100f245ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f244bc(FUN_100f24f64,&UNK_110369f68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f245e4; end: 100f246bf;  */

/* WARNING: Possible PIC construction at 0x000100f24660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f24664) */
/* WARNING: Removing unreachable block (ram,0x000100f24688) */
/* WARNING: Removing unreachable block (ram,0x000100f2469c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f245e4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4c1c8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4dc4c();
    func_0x000107c61180();
    uVar2 = 0;
    FUN_100f24fb0(0,0x112d4c1d0,&PTR_PTR_1126c66e0);
    func_0x000107c5fc48(param_1,uVar2);
    (**(code **)(lVar1 + 0x10))(lVar1,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100f246c0; end: 100f24727; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler onItemsSelectedWithItems:] */

void FUN_100f246c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100f24fb0(0,0x112d4c1d0,&PTR_PTR_1126c66e0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_100f245e4(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 100f24728; end: 100f2472b; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler onItemClickedWithItem:thumbnailCell:] */

void FUN_100f24728(void)

{
  return;
}



/* Entry: 100f2472c; end: 100f2472f; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler onCameraRollAlbumClickedWithCameraRollAlbumId:] */

void FUN_100f2472c(void)

{
  return;
}



/* Entry: 100f24730; end: 100f24767; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler memoriesPickerV2DidDismiss] */

void FUN_100f24730(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f244bc(0x100f25010,&UNK_110369f90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f24768; end: 100f2476f; -[_TtC31BusinessMediaPickerPageLauncher38BusinessMediaPickerPageLauncherHandler onTrimItemTappedWithItem:remainingDurationMs:selectedItems:disallowDurationChange:] */

void FUN_100f24768(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 100f24770; end: 100f24817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f24770(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d4c1c8;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d4c1c8);
    uVar3 = 0;
    if (lVar2 != 0) {
      func_0x000107c4dbe8();
      func_0x000107c61180();
      (**(code **)(lVar2 + 0x10))();
      func_0x000107c60bd0(lVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar1);
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(param_1 + _DAT_112d4c1d8) = 0;
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f24818; end: 100f24923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f24818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112d4c1b8;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c1b8) = 0;
  lVar3 = _DAT_112d4c1e8;
  func_0x000107c61614(unaff_x20 + _DAT_112d4c1e8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4c1c8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d4c1d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c1c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c1e0) = param_2;
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  uVar4 = 0;
  FUN_100f24fb0(0,0x112d4c218,&PTR_PTR_1126a5f60);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffff88,puVar1);
  return;
}



/* Entry: 100f24924; end: 100f24f63;  */

undefined * FUN_100f24924(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_78;
  
  lVar6 = param_1;
  func_0x000107c3f1f0();
  func_0x000107c61180();
  if (lVar6 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    param_2 = 0x112d38c88;
    FUN_100f24fb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar1 = 10;
    func_0x000107c60110(10);
    puVar4 = PTR_PTR_1126a5f68;
    func_0x000107c610f8();
    func_0x000107c47d30();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar1);
  }
  lVar6 = param_1;
  func_0x000107c44d74();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar5 = 0;
    lVar6 = 0;
    lVar2 = param_2;
  }
  else {
    lVar5 = lVar6;
    func_0x000107c5faec();
    lVar2 = param_2;
    func_0x000107c61170(lVar6);
    lVar6 = param_2;
  }
  lVar9 = param_1;
  func_0x000107c44d70();
  func_0x000107c61180();
  if (lVar9 == 0) {
    lVar7 = 0;
    lVar9 = 0;
    lVar8 = lVar2;
  }
  else {
    lVar7 = lVar9;
    func_0x000107c5faec();
    lVar8 = lVar2;
    func_0x000107c61170(lVar9);
    lVar9 = lVar2;
  }
  func_0x000107c3dc00();
  lVar2 = param_1;
  func_0x000107c5aea8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar2);
  }
  lVar2 = param_1;
  func_0x000107c5ae58();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar2);
  }
  lVar2 = param_1;
  func_0x000107c4f38c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lStack_78 = 0;
    lVar8 = 0;
  }
  else {
    lStack_78 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  lVar2 = param_1;
  func_0x000107c3dc10();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar2);
  }
  lVar2 = param_1;
  func_0x000107c3dc08();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c4c888();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c5fadc(lVar5,lVar6);
    func_0x000107c6142c(lVar6);
  }
  if (lVar9 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c5fadc(lVar7,lVar9);
    func_0x000107c6142c(lVar9);
  }
  if (lVar8 == 0) {
    lStack_78 = 0;
  }
  else {
    func_0x000107c5fadc(lStack_78,lVar8);
    func_0x000107c6142c(lVar8);
  }
  puVar3 = PTR_PTR_1126aff70;
  func_0x000107c610f8(PTR_PTR_1126aff70);
  func_0x000107c48d88();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lStack_78);
  return puVar3;
}



/* Entry: 100f24f64; end: 100f24f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f24f64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d4c1c8;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112d4c1c8);
    uVar4 = 0;
    if (lVar3 != 0) {
      func_0x000107c4dbe8();
      func_0x000107c61180();
      (**(code **)(lVar3 + 0x10))();
      func_0x000107c60bd0(lVar3);
      uVar4 = *(undefined8 *)(lVar2 + lVar1);
    }
    *(undefined8 *)(lVar2 + lVar1) = 0;
    func_0x000107c61170(uVar4);
    *(undefined1 *)(lVar2 + _DAT_112d4c1d8) = 0;
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100f24f88; end: 100f24fa7;  */

void FUN_100f24f88(void)

{
  func_0x000107c61168(&PTR_PTR_1127a1870);
  return;
}



/* Entry: 100f24fa8; end: 100f24faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f24fa8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_60;
  lVar5 = *(long *)(lVar4 + _DAT_112d4c1c0);
  lVar1 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8();
    func_0x000107c61180();
    if (lVar5 != 0) {
      puVar2 = &UNK_110369f50;
      func_0x000107c613fc(&UNK_110369f50,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,lVar4);
      uStack_40 = 0x100f25018;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000b0c7c;
      puStack_48 = &UNK_11036a030;
      puStack_38 = puVar2;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c5e2a4(lVar5);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar5);
    }
  }
  return;
}



/* Entry: 100f24fb0; end: 100f24fef;  */

void FUN_100f24fb0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100f24ff0; end: 100f2501b;  */

void FUN_100f24ff0(long param_1,long param_2)

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



/* Entry: 100f2501c; end: 100f25027; -[SCBusinessMediaPickerPageLauncherEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2501c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c220;
  func_0x000107c61428(param_1 + _DAT_112d4c220,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f25028; end: 100f25033; -[SCBusinessMediaPickerPageLauncherEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f25028(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c220;
  func_0x000107c61428(param_1 + _DAT_112d4c220,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f25034; end: 100f2503f; -[SCBusinessMediaPickerPageLauncherEntryPoint memoriesPickerV2ScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f25034(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c228;
  func_0x000107c61428(param_1 + _DAT_112d4c228,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f25040; end: 100f2504b; -[SCBusinessMediaPickerPageLauncherEntryPoint setMemoriesPickerV2ScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f25040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c228;
  func_0x000107c61428(param_1 + _DAT_112d4c228,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f2504c; end: 100f25057; -[SCBusinessMediaPickerPageLauncherEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2504c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c230;
  func_0x000107c61428(param_1 + _DAT_112d4c230,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f25058; end: 100f2509b;  */

void FUN_100f25058(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f2509c; end: 100f250a7; -[SCBusinessMediaPickerPageLauncherEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2509c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c230;
  func_0x000107c61428(param_1 + _DAT_112d4c230,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f250a8; end: 100f250fb;  */

void FUN_100f250a8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f250fc; end: 100f25143; -[SCBusinessMediaPickerPageLauncherEntryPoint memoriesPickerV2ScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f250fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c238;
  func_0x000107c61428(param_1 + _DAT_112d4c238,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f25144; end: 100f251a7; -[SCBusinessMediaPickerPageLauncherEntryPoint setMemoriesPickerV2ScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f25144(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c238;
  func_0x000107c61428(param_1 + _DAT_112d4c238,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f251a8; end: 100f253b7;  */

/* WARNING: Possible PIC construction at 0x000100f252b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f252c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f252ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f25314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f25324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f25334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f25388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f25378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f2538c) */
/* WARNING: Removing unreachable block (ram,0x000100f25338) */
/* WARNING: Removing unreachable block (ram,0x000100f25328) */
/* WARNING: Removing unreachable block (ram,0x000100f25318) */
/* WARNING: Removing unreachable block (ram,0x000100f252f0) */
/* WARNING: Removing unreachable block (ram,0x000100f252c4) */
/* WARNING: Removing unreachable block (ram,0x000100f252b4) */
/* WARNING: Removing unreachable block (ram,0x000100f2537c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f251a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4cc24();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4cc2c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4d52c();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar4 = 0;
        FUN_100f2414c();
        func_0x000107c610f8();
        *(long *)(lVar4 + _DAT_112d4c180) = lVar1;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c61174(unaff_x20);
        func_0x00010451338c();
        FUN_100f24f88(0);
        func_0x000107c610f8();
        FUN_100f24818(lVar2,lVar3,unaff_x20);
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100f253b8; end: 100f253df; -[SCBusinessMediaPickerPageLauncherEntryPoint begin] */

void FUN_100f253b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f251a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f253e0; end: 100f25423; -[SCBusinessMediaPickerPageLauncherEntryPoint end] */

void FUN_100f253e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f25424; end: 100f25693;  */

void FUN_100f25424(long param_1,long param_2,long param_3)

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
  }
  else {
    uVar2 = 0xd00000000000001d;
    if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10e5620)) ||
       (func_0x000107c605b8(0xd00000000000001d,0x800000010ef1a9e0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c565a0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10e5600)) &&
             (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1aa00,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "BusinessMediaPickerPageLauncher/SCBusinessMediaPickerPageLauncherEntryPoint.swift"
                                ,0x51,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f25694);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56598();
          goto LAB_100f254b0;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c569f0();
    }
  }
LAB_100f254b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f25694; end: 100f2573f; -[SCBusinessMediaPickerPageLauncherEntryPoint setValue:forIvarName:] */

void FUN_100f25694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f25424(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f25740; end: 100f257d3; -[SCBusinessMediaPickerPageLauncherEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f25740(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4c220,0);
  func_0x000107c61614(param_1 + _DAT_112d4c228,0);
  func_0x000107c61614(param_1 + _DAT_112d4c230,0);
  *(undefined8 *)(param_1 + _DAT_112d4c238) = 0;
  *(undefined8 *)(param_1 + _DAT_112d4c240) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f257d4; end: 100f25807;  */

void FUN_100f257d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f25808; end: 100f2586f; -[SCBusinessMediaPickerPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f25854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f25858) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f25808(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4c220);
  func_0x000107c61610(param_1 + _DAT_112d4c228);
  func_0x000107c61610(param_1 + _DAT_112d4c230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4c238));
  return;
}


