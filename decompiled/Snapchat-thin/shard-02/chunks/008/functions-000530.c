/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021c9a64; end: 1021c9b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c9a64(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112e60b38;
  ppuVar2 = &puStack_60;
  lVar4 = *(long *)(unaff_x20 + _DAT_112e60b38);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    pcStack_40 = FUN_1021c992c;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_1104dcce0;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61174(lVar4);
    func_0x000107c41864();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1021c9b18; end: 1021c9b27;  */

undefined1  [16] FUN_1021c9b18(void)

{
  return ZEXT816(0x1104dccd0);
}



/* Entry: 1021c9b28; end: 1021c9b47;  */

void FUN_1021c9b28(void)

{
  func_0x000107c61168(&PTR_PTR_112825ab8);
  return;
}



/* Entry: 1021c9b48; end: 1021c9b73;  */

void FUN_1021c9b48(long param_1,long param_2)

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



/* Entry: 1021c9b74; end: 1021c9e27;  */

undefined1  [16] FUN_1021c9b74(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f06c610);
  uVar3 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f06c6c0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c9c40);
  (*pcVar1)();
}



/* Entry: 1021c9e28; end: 1021c9e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c9e28(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1021ca580();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e60b98) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e60ba0) = 0;
  *(long *)(lVar5 + _DAT_112e60ba8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e60bb0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1021c9e30; end: 1021c9eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c9e30(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e60b98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60ba0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60ba8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60bb0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021c9eac; end: 1021c9f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c9eac(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112e60b98;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e60b98);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    func_0x0001000285a8(0x112e60be0,&UNK_10da68e90);
    func_0x000107c610f8();
    uVar4 = uStack_48;
    func_0x00010017da58(uStack_48);
    puVar3 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1021c9f84; end: 1021c9fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021c9f84(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e60ba0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e60ba0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1021c9fe8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1021c9fe8; end: 1021ca283;  */

undefined * FUN_1021c9fe8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  uVar1 = param_1;
  FUN_1021ca5c4();
  puVar2 = PTR_PTR_1126aeaf0;
  func_0x000107c610f8(PTR_PTR_1126aeaf0);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48db0(puVar2);
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126aeae0;
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c3cf30();
  func_0x000107c61180();
  puVar4 = &UNK_1104dce40;
  func_0x000107c613fc(&UNK_1104dce40,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_1);
  puVar5 = PTR_PTR_1126aeae8;
  func_0x000107c610f8(PTR_PTR_1126aeae8);
  pcStack_50 = FUN_1021ca5a0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100ea3124;
  puStack_58 = &UNK_1104dce58;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c(puVar4);
  func_0x000107c48560(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar6);
  puVar2 = puStack_48;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar2);
  return puVar5;
}



/* Entry: 1021ca284; end: 1021ca2af; -[_TtC25SCGenAISettingsEntryPoint30GenAISettingsRowProviderPlugin sectionRow] */

void FUN_1021ca284(void)

{
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c3cf30();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021ca2b0; end: 1021ca2e3; -[_TtC25SCGenAISettingsEntryPoint30GenAISettingsRowProviderPlugin rowViewModel] */

void FUN_1021ca2b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021ca2e4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021ca2e4; end: 1021ca3cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021ca2e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_38;
  
  func_0x000100083b20(&puStack_38);
  puVar1 = puStack_38;
  func_0x000107c43d50();
  func_0x000107c61180();
  func_0x000107c61170(puStack_38);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar2 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar1,param_2,puVar2);
  }
  else {
    func_0x000107c615e8(puVar2);
    FUN_1021c9f84();
    puVar1 = puVar2;
    func_0x000107c5093c();
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1021ca3cc; end: 1021ca42b; -[_TtC25SCGenAISettingsEntryPoint30GenAISettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021ca40c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021ca410) */

void FUN_1021ca3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021c9f84();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021ca42c; end: 1021ca4b7; -[_TtC25SCGenAISettingsEntryPoint30GenAISettingsRowProviderPlugin selfieOnboardingSettingsScopeWantsToDismiss] */

/* WARNING: Possible PIC construction at 0x0001021ca460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ca498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021ca464) */
/* WARNING: Removing unreachable block (ram,0x0001021ca468) */
/* WARNING: Removing unreachable block (ram,0x0001021ca49c) */
/* WARNING: Removing unreachable block (ram,0x0001021ca4a4) */

void FUN_1021ca42c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021c9eac();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021ca4b8; end: 1021ca517; -[_TtC25SCGenAISettingsEntryPoint30GenAISettingsRowProviderPlugin init] */

void FUN_1021ca4b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAISettingsEntryPoint.GenAISettingsRowProviderPlugin",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ca4e4);
  (*pcVar1)();
}



/* Entry: 1021ca518; end: 1021ca527;  */

undefined1  [16] FUN_1021ca518(void)

{
  return ZEXT816(0x1104dce20);
}



/* Entry: 1021ca528; end: 1021ca57f; -[_TtC25SCGenAISettingsEntryPoint30GenAISettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021ca564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021ca568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ca528(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60ba8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60bb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60b98));
  return;
}



/* Entry: 1021ca580; end: 1021ca59f;  */

void FUN_1021ca580(void)

{
  func_0x000107c61168(&PTR_PTR_112825ba8);
  return;
}



/* Entry: 1021ca5a0; end: 1021ca5c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ca5a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 != 0) {
      func_0x000107c4d508();
      func_0x000107c61180();
      if (param_1 != 0) {
        puVar3 = PTR_PTR_1126aead0;
        func_0x000107c610f8(PTR_PTR_1126aead0);
        func_0x000107c47998();
        func_0x000103f30268(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar3);
        puVar4 = puVar3;
        func_0x000103f300c8();
        lVar1 = _DAT_11302f2a0;
        func_0x000107c61428(puVar4 + _DAT_11302f2a0,auStack_70,1,0);
        puVar5 = puVar4 + lVar1;
        func_0x000107c61604(puVar5,lVar2);
        FUN_1021c9eac();
        func_0x000107c42c1c();
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar5);
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1021ca5c4; end: 1021ca68f;  */

undefined1  [16] FUN_1021ca5c4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe8;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f06c730);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f06c750);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ca690);
  (*pcVar1)();
}



/* Entry: 1021ca690; end: 1021ca733;  */

void FUN_1021ca690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dcf38;
  func_0x000107c613fc(&UNK_1104dcf38,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021ca734,puVar1);
  return;
}



/* Entry: 1021ca734; end: 1021caa9b;  */

void FUN_1021ca734(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar14 = 0x6c63617463657073;
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  uVar2 = 0x112e60be8;
  func_0x0001000285a8(0x112e60be8,&UNK_10da81b70);
  func_0x000107c610f8();
  func_0x00010017da58(puVar3,uVar2);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(puVar3);
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  uVar2 = 0x112e60bf0;
  func_0x0001000285a8(0x112e60bf0,&UNK_10da68ed0);
  func_0x000107c610f8();
  func_0x00010017da58(puVar3,uVar2);
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(puVar3);
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  puVar6 = puStack_90;
  func_0x000107c5bd38();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000100083b20(&puStack_90);
  puVar7 = puStack_90;
  func_0x000107c5b73c();
  func_0x000107c61180();
  func_0x000107c61170(puStack_90);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_1104dcf80;
  func_0x000107c613fc(&UNK_1104dcf80,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar7;
  *(undefined **)(puVar3 + 0x18) = puVar6;
  pcStack_70 = FUN_1021caaac;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1021cab84;
  puStack_78 = &UNK_1104dcf98;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar9);
  puVar3 = puStack_68;
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  lVar10 = lVar14;
  func_0x000107c5fadc(0x6c63617463657073,0xea00000000007365);
  lVar11 = lVar10;
  func_0x000107c312f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  if (lVar11 != 0) {
    puVar3 = PTR_PTR_1126aa140;
    func_0x000107c610f8();
    func_0x000107c61174(puVar7);
    func_0x000107c61174(puVar8);
    func_0x000107c61174(puVar4);
    func_0x000107c61174(puVar5);
    func_0x000107c5fadc(0x6c63617463657073,0xea00000000007365);
    func_0x000107c484e4();
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    puVar12 = puVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar12 != (undefined *)0x0) {
      puVar13 = puVar3;
      func_0x000107c61174(puVar3);
      func_0x000107c3d740(puVar12);
      func_0x000107c61170(puVar13);
      func_0x000107c615e8(puVar12);
    }
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar8);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021caa9c);
  (*pcVar1)();
}



/* Entry: 1021caa9c; end: 1021caaab;  */

undefined1  [16] FUN_1021caa9c(void)

{
  return ZEXT816(0x1104dcf60);
}



/* Entry: 1021caaac; end: 1021cab83;  */

undefined * FUN_1021caaac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_1104dcfd0;
  func_0x000107c613fc(&UNK_1104dcfd0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  puVar3 = PTR_PTR_1126b6a08;
  func_0x000107c610f8(PTR_PTR_1126b6a08);
  pcStack_50 = FUN_1021cabd8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1021cac5c;
  puStack_58 = &UNK_1104dcfe8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c45670(puVar3);
  func_0x000107c60bd0(ppuVar4);
  return puVar3;
}



/* Entry: 1021cab84; end: 1021cabbb;  */

void FUN_1021cab84(long param_1)

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



/* Entry: 1021cabbc; end: 1021cabd7;  */

void FUN_1021cabbc(long param_1,long param_2)

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



/* Entry: 1021cabd8; end: 1021caccb;  */

undefined * FUN_1021cabd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000107c4197c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    uVar3 = 0x112e60bf8;
    func_0x0001000285a8(0x112e60bf8,&UNK_10da68ed8);
    puVar4 = puVar2;
    func_0x000107c5fc54(puVar2,uVar3);
    func_0x000107c61170(puVar2);
  }
  return puVar4;
}



/* Entry: 1021caccc; end: 1021cacd3;  */

void FUN_1021caccc(long param_1,long param_2)

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



/* Entry: 1021cacd4; end: 1021cb153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1021cacd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1021cc328();
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_2;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_3;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_4;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_5;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_6;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_7;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_8;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_9;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_10;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_11;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_12;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_13;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_14;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_15;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uStack_78 = param_16;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112e60c00) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e60c08) = param_17;
    puVar4 = auStack_88;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
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
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021cb154);
  (*pcVar2)();
}



/* Entry: 1021cb154; end: 1021cb1b3; -[_TtC24SettingsScopeGraphBridge39SettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1021cb154(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SettingsScopeGraphBridge.SettingsScopeGraphBridgeSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021cb180);
  (*pcVar1)();
}



/* Entry: 1021cb1b4; end: 1021cb1eb; -[_TtC24SettingsScopeGraphBridge39SettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021cb1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021cb1d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021cb1b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60c00));
  return;
}



/* Entry: 1021cb1ec; end: 1021cb213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021cb1ec(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e60c08),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e60c00));
  return;
}



/* Entry: 1021cb214; end: 1021cb233;  */

void FUN_1021cb214(void)

{
  func_0x000107c61168(&PTR_PTR_112825c80);
  return;
}



/* Entry: 1021cb234; end: 1021cb2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021cb234(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e61630);
  *(undefined8 *)(unaff_x20 + _DAT_112e60c38) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e60c40) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1021cb2d0; end: 1021cb32f; -[_TtC24SettingsScopeGraphBridge42SCLogoutInterceptorServicesSaberEntryPoint init] */

void FUN_1021cb2d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SettingsScopeGraphBridge.SCLogoutInterceptorServicesSaberEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021cb2fc);
  (*pcVar1)();
}



/* Entry: 1021cb330; end: 1021cb3c3; -[_TtC24SettingsScopeGraphBridge42SCLogoutInterceptorServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021cb330(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60c38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60c40));
  return;
}



/* Entry: 1021cb3c4; end: 1021cb3cb;  */

undefined8 FUN_1021cb3c4(void)

{
  return 0;
}



/* Entry: 1021cb3cc; end: 1021cb3eb;  */

void FUN_1021cb3cc(void)

{
  func_0x000107c61168(&PTR_PTR_112825d48);
  return;
}



/* Entry: 1021cb3ec; end: 1021cb44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cb3ec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e615b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cb450; end: 1021cb457;  */

void FUN_1021cb450(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cb458; end: 1021cb4f7;  */

void FUN_1021cb458(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cb4f8; end: 1021cb517;  */

void FUN_1021cb4f8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cb518; end: 1021cb57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cb518(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e615c0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cb57c; end: 1021cb583;  */

void FUN_1021cb57c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cb584; end: 1021cb623;  */

void FUN_1021cb584(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cb624; end: 1021cb643;  */

void FUN_1021cb624(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cb644; end: 1021cb6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cb644(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e615d0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cb6a8; end: 1021cb6af;  */

void FUN_1021cb6a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cb6b0; end: 1021cb74f;  */

void FUN_1021cb6b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cb750; end: 1021cb76f;  */

void FUN_1021cb750(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cb770; end: 1021cb7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cb770(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e615d8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cb7d4; end: 1021cb7db;  */

void FUN_1021cb7d4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cb7dc; end: 1021cb87b;  */

void FUN_1021cb7dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cb87c; end: 1021cb89b;  */

void FUN_1021cb87c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cb89c; end: 1021cb8ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cb89c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e615f8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cb900; end: 1021cb907;  */

void FUN_1021cb900(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cb908; end: 1021cb9a7;  */

void FUN_1021cb908(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cb9a8; end: 1021cb9c7;  */

void FUN_1021cb9a8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cb9c8; end: 1021cba2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cb9c8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e61608);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cba2c; end: 1021cba33;  */

void FUN_1021cba2c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cba34; end: 1021cbad3;  */

void FUN_1021cba34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cbad4; end: 1021cbaf3;  */

void FUN_1021cbad4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cbaf4; end: 1021cbb57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cbaf4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e61618);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cbb58; end: 1021cbb5f;  */

void FUN_1021cbb58(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cbb60; end: 1021cbbff;  */

void FUN_1021cbb60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cbc00; end: 1021cbc1f;  */

void FUN_1021cbc00(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cbc20; end: 1021cbc83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cbc20(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e61628);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cbc84; end: 1021cbc8b;  */

void FUN_1021cbc84(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cbc8c; end: 1021cbd2b;  */

void FUN_1021cbc8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cbd2c; end: 1021cbd4b;  */

void FUN_1021cbd2c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cbd4c; end: 1021cbdaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cbd4c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e61640);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cbdb0; end: 1021cbdb7;  */

void FUN_1021cbdb0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cbdb8; end: 1021cbe57;  */

void FUN_1021cbdb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cbe58; end: 1021cbe77;  */

void FUN_1021cbe58(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cbe78; end: 1021cbedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cbe78(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e61650);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cbedc; end: 1021cbee3;  */

void FUN_1021cbedc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cbee4; end: 1021cbf83;  */

void FUN_1021cbee4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cbf84; end: 1021cbfa3;  */

void FUN_1021cbf84(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cbfa4; end: 1021cc007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021cbfa4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e61678);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021cc008; end: 1021cc00f;  */

void FUN_1021cc008(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021cc010; end: 1021cc0af;  */

void FUN_1021cc010(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021cc0b0; end: 1021cc0cf;  */

void FUN_1021cc0b0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1021cc0d0; end: 1021cc157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021cc0d0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e61560) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e61568);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021cc158);
  (*pcVar2)();
}



/* Entry: 1021cc158; end: 1021cc23f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021cc158(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e61560);
  *(undefined **)(unaff_x20 + _DAT_112e61560) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e61568);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e61568))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104dd240;
  func_0x000107c613fc(&UNK_1104dd240,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1021cc244,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021cc240; end: 1021cc24b;  */

void FUN_1021cc240(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021cc24c; end: 1021cc2ab; -[_TtC24SettingsScopeGraphBridge39SCSettingsScopedServicesSaberEntryPoint init] */

void FUN_1021cc24c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SettingsScopeGraphBridge.SCSettingsScopedServicesSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021cc278);
  (*pcVar1)();
}



/* Entry: 1021cc2ac; end: 1021cc2e3; -[_TtC24SettingsScopeGraphBridge39SCSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021cc2ac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e61568));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e61560));
  return;
}



/* Entry: 1021cc2e4; end: 1021cc2e7;  */

void FUN_1021cc2e4(void)

{
  return;
}



/* Entry: 1021cc2e8; end: 1021cc307;  */

void FUN_1021cc2e8(void)

{
  FUN_1021cc158();
  return;
}



/* Entry: 1021cc308; end: 1021cc327;  */

void FUN_1021cc308(void)

{
  func_0x000107c61168(&PTR_PTR_112825e10);
  return;
}



/* Entry: 1021cc328; end: 1021cc3f7;  */

undefined8 FUN_1021cc328(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e61598,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1021cc3f8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1021cc3f8; end: 1021cc417;  */

void FUN_1021cc3f8(void)

{
  func_0x000107c61168(&PTR_PTR_112825ed8);
  return;
}



/* Entry: 1021cc418; end: 1021cc99b;  */

void FUN_1021cc418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e615a0,&UNK_10da692e8);
  puVar1 = &UNK_1104dd288;
  func_0x000107c613fc(&UNK_1104dd288,0xe8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x0001000823a8(FUN_1021cc99c,puVar1);
  return;
}



/* Entry: 1021cc99c; end: 1021cc9f7;  */

void FUN_1021cc99c(void)

{
  long unaff_x20;
  
  func_0x0001021cc650(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 1021cc9f8; end: 1021ccc67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021cc9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e615a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e615b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e615b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e615c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e615c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e615d0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e615d8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e615e0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e615e8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e615f0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e615f8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e61600) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112e61608) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112e61610) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112e61618) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112e61620) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112e61628) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112e61630) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112e61638) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112e61640) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112e61648) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112e61650) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112e61658) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112e61660) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112e61668) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_112e61670) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112e61678) = param_27;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021ccc68; end: 1021cccc7; -[_TtC24SettingsScopeGraphBridge32SettingsScopeGraphBridgeServices init] */

void FUN_1021ccc68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SettingsScopeGraphBridge.SettingsScopeGraphBridgeServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ccc94);
  (*pcVar1)();
}



/* Entry: 1021cccc8; end: 1021ccecf; -[_TtC24SettingsScopeGraphBridge32SettingsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021ccce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ccd04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ccd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ccd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ccd64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ccd84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ccda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ccdc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ccde4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021cce04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021cce24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021cce44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021cce64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021cce48) */
/* WARNING: Removing unreachable block (ram,0x0001021cce28) */
/* WARNING: Removing unreachable block (ram,0x0001021cce08) */
/* WARNING: Removing unreachable block (ram,0x0001021ccde8) */
/* WARNING: Removing unreachable block (ram,0x0001021ccdc8) */
/* WARNING: Removing unreachable block (ram,0x0001021ccda8) */
/* WARNING: Removing unreachable block (ram,0x0001021ccd88) */
/* WARNING: Removing unreachable block (ram,0x0001021ccd68) */
/* WARNING: Removing unreachable block (ram,0x0001021ccd48) */
/* WARNING: Removing unreachable block (ram,0x0001021ccd28) */
/* WARNING: Removing unreachable block (ram,0x0001021ccd08) */
/* WARNING: Removing unreachable block (ram,0x0001021ccce8) */
/* WARNING: Removing unreachable block (ram,0x0001021cce68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021cccc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e61630));
  return;
}



/* Entry: 1021cced0; end: 1021cceeb;  */

void FUN_1021cced0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021cceec,param_1);
  return;
}



/* Entry: 1021cceec; end: 1021ccf5f;  */

void FUN_1021cceec(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}


