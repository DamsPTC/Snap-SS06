/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f472ec; end: 100f472f3;  */

undefined8 FUN_100f472ec(void)

{
  return 1;
}



/* Entry: 100f472f4; end: 100f4737b; -[_TtC32SCMusicLensUnlockActivatorPlugin30MusicLensUnlockActivatorPlugin setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

/* WARNING: Possible PIC construction at 0x000100f47350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f47354) */

void FUN_100f472f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_100f47444(param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f4737c; end: 100f473db; -[_TtC32SCMusicLensUnlockActivatorPlugin30MusicLensUnlockActivatorPlugin init] */

void FUN_100f4737c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicLensUnlockActivatorPlugin.MusicLensUnlockActivatorPlugin",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f473a8);
  (*pcVar1)();
}



/* Entry: 100f473dc; end: 100f47423; -[_TtC32SCMusicLensUnlockActivatorPlugin30MusicLensUnlockActivatorPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f47408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f4740c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f473dc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4d6d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4d6e0));
  return;
}



/* Entry: 100f47424; end: 100f47443;  */

void FUN_100f47424(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3d48);
  return;
}



/* Entry: 100f47444; end: 100f47607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar5 = &puStack_a0;
  func_0x000107c4d6fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d4d6e0);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d4d6e8);
  puVar3 = &UNK_11036c6b0;
  func_0x000107c613fc(&UNK_11036c6b0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100f47608;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100f472b4;
  puStack_88 = &UNK_11036c6c8;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar3 = puStack_78;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar3 = PTR_PTR_1126b0110;
  func_0x000107c610f8(PTR_PTR_1126b0110);
  pcStack_80 = FUN_100f472ec;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1001de374;
  puStack_88 = &UNK_11036c6f0;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c46850(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puStack_78);
  if (*(long *)(unaff_x20 + _DAT_112d4d6d8) != 0) {
    func_0x000107c4972c();
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 100f47608; end: 100f47637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47608(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  FUN_100f46e90();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112d4d5f8;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x0001005f60d4();
  *(undefined8 *)(lVar4 + lVar2) = uVar6;
  *(undefined1 *)(lVar4 + _DAT_112d4d600) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d4d5e0) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112d4d5e8) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112d4d5f0) = uVar7;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f47638; end: 100f47643; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47638(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d718;
  func_0x000107c61428(param_1 + _DAT_112d4d718,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f47644; end: 100f4764f; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47644(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d718;
  func_0x000107c61428(param_1 + _DAT_112d4d718,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f47650; end: 100f4765b; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint chatCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47650(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d720;
  func_0x000107c61428(param_1 + _DAT_112d4d720,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4765c; end: 100f47667; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint setChatCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4765c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d720;
  func_0x000107c61428(param_1 + _DAT_112d4d720,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f47668; end: 100f47673; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint lensCarouselFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47668(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d728;
  func_0x000107c61428(param_1 + _DAT_112d4d728,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f47674; end: 100f476b7;  */

void FUN_100f47674(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f476b8; end: 100f476c3; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint setLensCarouselFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f476b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d728;
  func_0x000107c61428(param_1 + _DAT_112d4d728,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f476c4; end: 100f477f7;  */

void FUN_100f476c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f477f8; end: 100f4787f; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint begin] */

void FUN_100f477f8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000100f47718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f47880; end: 100f478b3; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint end] */

void FUN_100f47880(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100f47820();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f478b4; end: 100f47ac3;  */

void FUN_100f478b4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x656d614374616863;
      if (((param_2 == 0x656d614374616863) && (param_3 == -0x109a8f909cac9e8e)) ||
         (func_0x000107c605b8(0x656d614374616863,0xef65706f63536172,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5333c();
      }
      else {
        uVar2 = 0xd00000000000001b;
        if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10e43b0)) &&
           (func_0x000107c605b8(0xd00000000000001b,0x800000010ef1bc50,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCMusicLensUnlockActivatorPlugin/SCMusicLensUnlockActivatorChatCameraPluginEntryPoint.swift"
                              ,0x5b,2,0x2d,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f47ac4);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55c30();
      }
      goto LAB_100f47948;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_100f47948:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f47ac4; end: 100f47b6f; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint setValue:forIvarName:] */

void FUN_100f47ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f478b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f47b70; end: 100f47bf7; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47b70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4d718,0);
  func_0x000107c61614(param_1 + _DAT_112d4d720,0);
  func_0x000107c61614(param_1 + _DAT_112d4d728,0);
  *(undefined8 *)(param_1 + _DAT_112d4d730) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f47bf8; end: 100f47c2b;  */

void FUN_100f47bf8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f47c2c; end: 100f47c83; -[SCMusicLensUnlockActivatorChatCameraPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47c2c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4d718);
  func_0x000107c61610(param_1 + _DAT_112d4d720);
  func_0x000107c61610(param_1 + _DAT_112d4d728);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4d730));
  return;
}



/* Entry: 100f47c84; end: 100f47ca3;  */

void FUN_100f47c84(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3e18);
  return;
}



/* Entry: 100f47ca4; end: 100f47caf; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47ca4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d760;
  func_0x000107c61428(param_1 + _DAT_112d4d760,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f47cb0; end: 100f47cbb; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d760;
  func_0x000107c61428(param_1 + _DAT_112d4d760,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f47cbc; end: 100f47cc7; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint lensesModularCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47cbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d768;
  func_0x000107c61428(param_1 + _DAT_112d4d768,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f47cc8; end: 100f47cd3; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint setLensesModularCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d768;
  func_0x000107c61428(param_1 + _DAT_112d4d768,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f47cd4; end: 100f47cdf; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint lensCarouselFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47cd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d770;
  func_0x000107c61428(param_1 + _DAT_112d4d770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f47ce0; end: 100f47d23;  */

void FUN_100f47ce0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f47d24; end: 100f47d2f; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint setLensCarouselFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f47d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d770;
  func_0x000107c61428(param_1 + _DAT_112d4d770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f47d30; end: 100f47e63;  */

void FUN_100f47d30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f47e64; end: 100f47eeb; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint begin] */

void FUN_100f47e64(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000100f47d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f47eec; end: 100f47f1f; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint end] */

void FUN_100f47eec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100f47e8c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f47f20; end: 100f48123;  */

void FUN_100f47f20(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10e4330)) ||
         (func_0x000107c605b8(0xd000000000000018,0x800000010ef1bcd0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55f3c();
      }
      else {
        uVar2 = 0xd00000000000001b;
        if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10e43b0)) &&
           (func_0x000107c605b8(0xd00000000000001b,0x800000010ef1bc50,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCMusicLensUnlockActivatorPlugin/SCMusicLensUnlockActivatorModularCameraPluginEntryPoint.swift"
                              ,0x5e,2,0x2e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f48124);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55c30();
      }
      goto LAB_100f47fb4;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_100f47fb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f48124; end: 100f481cf; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint setValue:forIvarName:] */

void FUN_100f48124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f47f20(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f481d0; end: 100f48257; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f481d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4d760,0);
  func_0x000107c61614(param_1 + _DAT_112d4d768,0);
  func_0x000107c61614(param_1 + _DAT_112d4d770,0);
  *(undefined8 *)(param_1 + _DAT_112d4d778) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f48258; end: 100f4828b;  */

void FUN_100f48258(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f4828c; end: 100f482e3; -[SCMusicLensUnlockActivatorModularCameraPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4828c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4d760);
  func_0x000107c61610(param_1 + _DAT_112d4d768);
  func_0x000107c61610(param_1 + _DAT_112d4d770);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4d778));
  return;
}



/* Entry: 100f482e4; end: 100f48303;  */

void FUN_100f482e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3ee8);
  return;
}



/* Entry: 100f48304; end: 100f48317;  */

bool FUN_100f48304(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f48318; end: 100f48513;  */

void FUN_100f48318(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f48514; end: 100f485df;  */

void FUN_100f48514(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 100f485e0; end: 100f4861f;  */

void FUN_100f485e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d4d7a8;
  func_0x0001000285a8(0x112d4d7a8,&UNK_10d913ec0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 100f48620; end: 100f4865b; +[SCCameraReplyCameraMemoriesPickerExperiment isEnabledWithCircumstanceEngine:] */

uint FUN_100f48620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_100f48730(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 100f4865c; end: 100f48697; -[SCCameraReplyCameraMemoriesPickerExperiment init] */

void FUN_100f4865c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_100f487f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f48698; end: 100f486c7;  */

void FUN_100f48698(void)

{
  FUN_100f487f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f486c8; end: 100f486cb; -[SCCameraReplyCameraMemoriesPickerExperiment .cxx_destruct] */

void FUN_100f486c8(void)

{
  return;
}



/* Entry: 100f486cc; end: 100f4872f;  */

ulong FUN_100f486cc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 100f48730; end: 100f487ef;  */

long FUN_100f48730(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112d4d7b0,auStack_48,0,0);
  if (cRam0000000112d4d7b0 != '\0') {
    if (cRam0000000112d4d7b0 == '\x01') {
      return 1;
    }
    if (param_1 != 0) {
      func_0x000107c615f0(param_1);
      uVar1 = 0xd000000000000023;
      func_0x000107c5fadc(0xd000000000000023,0x800000010ef1bd50);
      lVar2 = param_1;
      func_0x000107c3ebd4(param_1);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(uVar1);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 100f487f0; end: 100f4880f;  */

void FUN_100f487f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3fb8);
  return;
}



/* Entry: 100f48810; end: 100f48813;  */

void FUN_100f48810(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4d7f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d913ed0;
  func_0x000107c61520(&UNK_10d913ed0,&UNK_11036c858);
  puRam0000000112d4d7f0 = puVar1;
  return;
}



/* Entry: 100f48814; end: 100f48853;  */

void FUN_100f48814(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4d7f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d913ed0;
  func_0x000107c61520(&UNK_10d913ed0,&UNK_11036c858);
  puRam0000000112d4d7f0 = puVar1;
  return;
}



/* Entry: 100f48854; end: 100f4887f;  */

void FUN_100f48854(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100f48880();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000100f488c0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100f48880; end: 100f488ff;  */

void FUN_100f48880(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4d7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d913f98;
  func_0x000107c61520(&UNK_10d913f98,&UNK_11036c858);
  puRam0000000112d4d7f8 = puVar1;
  return;
}



/* Entry: 100f48900; end: 100f48903;  */

void FUN_100f48900(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d4d808 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4d810;
  func_0x00010002969c(0x112d4d810,&UNK_10d913f90);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d4d808 = puVar2;
  return;
}



/* Entry: 100f48904; end: 100f48953;  */

void FUN_100f48904(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d4d808 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4d810;
  func_0x00010002969c(0x112d4d810,&UNK_10d913f90);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d4d808 = puVar2;
  return;
}



/* Entry: 100f48954; end: 100f48ac7;  */

undefined1  [16] FUN_100f48954(void)

{
  return ZEXT816(0x11036c7c8);
}



/* Entry: 100f48ac8; end: 100f48b1f;  */

void FUN_100f48ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 100f48b20; end: 100f48f2b;  */

/* WARNING: Possible PIC construction at 0x000100f48b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f48c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f48c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f48eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f48ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f48edc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f48c74) */
/* WARNING: Removing unreachable block (ram,0x000100f48e04) */
/* WARNING: Removing unreachable block (ram,0x000100f48e1c) */
/* WARNING: Removing unreachable block (ram,0x000100f48eb0) */
/* WARNING: Removing unreachable block (ram,0x000100f48e84) */
/* WARNING: Removing unreachable block (ram,0x000100f48c4c) */
/* WARNING: Removing unreachable block (ram,0x000100f48b90) */
/* WARNING: Removing unreachable block (ram,0x000100f48b94) */
/* WARNING: Removing unreachable block (ram,0x000100f48f04) */
/* WARNING: Removing unreachable block (ram,0x000100f48bc4) */
/* WARNING: Removing unreachable block (ram,0x000100f48ed0) */

void FUN_100f48b20(void)

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



/* Entry: 100f48f2c; end: 100f48fdb;  */

/* WARNING: Possible PIC construction at 0x000100f48fc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f48fc4) */

void FUN_100f48f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_100f4937c(0,0x112d4d9a8,&PTR_PTR_1126a6030);
  func_0x000107c5fc54(param_2,uVar3);
  uVar3 = 0;
  FUN_100f4937c(0,0x112d4d9b0,&PTR_PTR_1126a6038);
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100f48fdc; end: 100f491ff;  */

void FUN_100f48fdc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = 0;
    FUN_100f4937c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    lStack_98 = lVar10;
    func_0x000107c5ffdc();
    puVar6 = &UNK_11036c9e0;
    func_0x000107c613fc(&UNK_11036c9e0,0x28,7);
    puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
    *(long *)(puVar6 + 0x10) = lVar4;
    *(long *)(puVar6 + 0x18) = param_1;
    *(undefined **)(puVar6 + 0x20) = puVar1;
    pcStack_70 = FUN_100f49370;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11036c9f8;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_68;
    func_0x000107c615f0(lVar4);
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar6);
    func_0x000107c5f808(lVar12);
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = uVar8;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar11,&puStack_90,uVar8,uVar9,lVar2,puVar6);
    func_0x000107c5ffe8(0,lVar12,puVar11,ppuVar7);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    (**(code **)(lStack_98 + 8))(puVar11,lVar2);
    (**(code **)(lVar13 + 8))(lVar12,lVar3);
  }
  return;
}



/* Entry: 100f49200; end: 100f49277;  */

undefined4 FUN_100f49200(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c3fe30();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c5af1c();
    func_0x000107c615e8(uVar2);
    if ((uint)uVar1 < 5) {
      return *(undefined4 *)(&UNK_10d91410c + (uVar1 & 0xffffffff) * 4);
    }
  }
  return 1;
}



/* Entry: 100f49278; end: 100f4929f;  */

void FUN_100f49278(ulong param_1,byte *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte **ppbVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong uVar25;
  long lVar26;
  undefined *puStack_90;
  byte *pbStack_70;
  ulong uStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar23 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar23 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar23 = param_1;
    }
    func_0x000107c60480();
  }
  pbVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar23 != 0) {
    pbStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar13 = uVar23 & ((long)uVar23 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100f4af50(0,uVar13,0);
    pbVar22 = pbStack_70;
    if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49b8c);
      (*pcVar2)();
    }
    puVar4 = PTR_PTR_1126dc2a0;
    func_0x000107c61168();
    uVar25 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ad4);
          (*pcVar2)();
        }
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ad8);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar25 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar25;
        uVar13 = param_1;
        FUN_100f4b220(uVar25,param_1,&PTR_PTR_1126a6030,0x112d4d9a8);
      }
      uVar6 = uVar5;
      func_0x000107c5bee8();
      func_0x000107c61180();
      uVar9 = uVar13;
      if (uVar6 == 0) {
        func_0x000107c5faec();
        uVar9 = uVar13;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar13);
      }
      uVar7 = uVar5;
      func_0x000107c3f708(uVar5);
      func_0x000107c61180();
      uVar8 = uVar5;
      func_0x000107c42120();
      func_0x000107c61180();
      uVar14 = uVar9;
      if (uVar8 == 0) {
        func_0x000107c5faec();
        uVar14 = uVar9;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar9);
      }
      uVar9 = uVar5;
      func_0x000107c3cfcc();
      func_0x000107c61180();
      uVar13 = uVar14;
      if (uVar9 == 0) {
        func_0x000107c5faec();
        uVar13 = uVar14;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar14);
      }
      puVar12 = puVar4;
      func_0x000107c5bed4();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      uVar6 = *(ulong *)(pbVar22 + 0x10);
      uVar5 = uVar6 + 1;
      pbStack_70 = pbVar22;
      if (*(ulong *)(pbVar22 + 0x18) >> 1 <= uVar6) {
        uVar13 = uVar5;
        func_0x000100f4af50(1 < *(ulong *)(pbVar22 + 0x18),uVar5,1);
      }
      uVar25 = uVar25 + 1;
      *(ulong *)(pbStack_70 + 0x10) = uVar5;
      *(undefined **)(pbStack_70 + uVar6 * 8 + 0x20) = puVar12;
      pbVar22 = pbStack_70;
    } while (uVar23 != uVar25);
  }
  pbVar15 = param_2;
  if ((ulong)param_2 >> 0x3e == 0) {
    pbVar20 = *(byte **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pbVar20 = (byte *)((ulong)param_2 & 0xffffffffffffff8);
    if ((byte *)0x7fffffffffffffff < param_2) {
      pbVar20 = param_2;
    }
    func_0x000107c60480();
  }
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pbVar20 != (byte *)0x0) {
    pbVar21 = (byte *)0x0;
    do {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        if (*(byte **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= pbVar21) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ad0);
          (*pcVar2)();
        }
        pbVar10 = *(byte **)(param_2 + (long)pbVar21 * 8 + 0x20);
        func_0x000107c61174();
        pbVar11 = pbVar15;
      }
      else {
        pbVar10 = pbVar21;
        pbVar11 = param_2;
        FUN_100f4b220(pbVar21,param_2,&PTR_PTR_1126a6038,0x112d4d9b0);
      }
      bVar3 = SCARRY8((long)pbVar21,1);
      pbVar21 = pbVar21 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49acc);
        (*pcVar2)();
      }
      pbVar15 = pbVar10;
      func_0x000107c5b304();
      func_0x000107c61180();
      pbVar17 = pbVar15;
      func_0x000107c5faec();
      func_0x000107c61170(pbVar15);
      pbVar15 = (byte *)((ulong)pbVar17 & 0xffffffffffff);
      pbVar16 = (byte *)((ulong)pbVar11 >> 0x38 & 0xf);
      pbVar24 = pbVar15;
      if (((ulong)pbVar11 & 0x2000000000000000) != 0) {
        pbVar24 = pbVar16;
      }
      if (pbVar24 == (byte *)0x0) {
        func_0x000107c6142c(pbVar11);
LAB_100f49628:
        func_0x000107c61170(pbVar10);
      }
      else {
        if (((ulong)pbVar11 >> 0x3c & 1) == 0) {
          if (((ulong)pbVar11 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar17 >> 0x3c & 1) == 0) {
              pbVar15 = pbVar11;
              func_0x000107c60358();
            }
            else {
              pbVar17 = (byte *)(((ulong)pbVar11 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar17 == 0x2b) {
              if ((long)pbVar15 < 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ae4);
                (*pcVar2)();
              }
              pbVar16 = pbVar15 + -1;
              if (pbVar16 == (byte *)0x0) goto LAB_100f498d4;
              lVar26 = 0;
              do {
                pbVar17 = pbVar17 + 1;
                if (((9 < *pbVar17 - 0x30) ||
                    (lVar19 = lVar26 * 10, SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f
                    )) || (uVar23 = (ulong)(byte)(*pbVar17 - 0x30), lVar26 = lVar19 + uVar23,
                          SCARRY8(lVar19,uVar23))) goto LAB_100f498d4;
                pbVar24 = (byte *)0x0;
                pbVar16 = pbVar16 + -1;
              } while (pbVar16 != (byte *)0x0);
            }
            else if (*pbVar17 == 0x2d) {
              if ((long)pbVar15 < 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ae8);
                (*pcVar2)();
              }
              pbVar16 = pbVar15 + -1;
              if (pbVar16 == (byte *)0x0) {
LAB_100f498d4:
                pbVar24 = (byte *)0x1;
              }
              else {
                lVar26 = 0;
                do {
                  pbVar17 = pbVar17 + 1;
                  if (((9 < *pbVar17 - 0x30) ||
                      (lVar19 = lVar26 * 10,
                      SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
                     (uVar23 = (ulong)(byte)(*pbVar17 - 0x30), lVar26 = lVar19 - uVar23,
                     SBORROW8(lVar19,uVar23))) goto LAB_100f498d4;
                  pbVar24 = (byte *)0x0;
                  pbVar16 = pbVar16 + -1;
                } while (pbVar16 != (byte *)0x0);
              }
            }
            else {
              if (pbVar15 == (byte *)0x0) goto LAB_100f498d4;
              lVar26 = 0;
              if (pbVar17 == (byte *)0x0) {
                pbVar24 = (byte *)0x0;
              }
              else {
                do {
                  if (((9 < *pbVar17 - 0x30) ||
                      (lVar19 = lVar26 * 10,
                      SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
                     (uVar23 = (ulong)(byte)(*pbVar17 - 0x30), lVar26 = lVar19 + uVar23,
                     SCARRY8(lVar19,uVar23))) goto LAB_100f498d4;
                  pbVar24 = (byte *)0x0;
                  pbVar15 = pbVar15 + -1;
                  pbVar17 = pbVar17 + 1;
                } while (pbVar15 != (byte *)0x0);
              }
            }
          }
          else {
            pbStack_70 = pbVar17;
            uStack_68 = (ulong)pbVar11 & 0xffffffffffffff;
            uVar1 = (uint)pbVar17 & 0xff;
            if (uVar1 == 0x2b) {
              if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ae0);
                (*pcVar2)();
              }
              pbVar16 = pbVar16 + -1;
              if (pbVar16 == (byte *)0x0) goto LAB_100f498d4;
              lVar26 = 0;
              pbVar17 = (byte *)((ulong)&pbStack_70 | 1);
              do {
                if (((9 < *pbVar17 - 0x30) ||
                    (lVar19 = lVar26 * 10, SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f
                    )) || (uVar23 = (ulong)(byte)(*pbVar17 - 0x30), lVar26 = lVar19 + uVar23,
                          SCARRY8(lVar19,uVar23))) goto LAB_100f498d4;
                pbVar24 = (byte *)0x0;
                pbVar16 = pbVar16 + -1;
                pbVar17 = pbVar17 + 1;
              } while (pbVar16 != (byte *)0x0);
            }
            else if (uVar1 == 0x2d) {
              if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49adc);
                (*pcVar2)();
              }
              pbVar16 = pbVar16 + -1;
              if (pbVar16 == (byte *)0x0) goto LAB_100f498d4;
              lVar26 = 0;
              pbVar17 = (byte *)((ulong)&pbStack_70 | 1);
              do {
                if (((9 < *pbVar17 - 0x30) ||
                    (lVar19 = lVar26 * 10, SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f
                    )) || (uVar23 = (ulong)(byte)(*pbVar17 - 0x30), lVar26 = lVar19 - uVar23,
                          SBORROW8(lVar19,uVar23))) goto LAB_100f498d4;
                pbVar24 = (byte *)0x0;
                pbVar16 = pbVar16 + -1;
                pbVar17 = pbVar17 + 1;
              } while (pbVar16 != (byte *)0x0);
            }
            else {
              if (pbVar16 == (byte *)0x0) goto LAB_100f498d4;
              lVar26 = 0;
              ppbVar18 = &pbStack_70;
              do {
                if (((9 < *(byte *)ppbVar18 - 0x30) ||
                    (lVar19 = lVar26 * 10, SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f
                    )) || (uVar23 = (ulong)(byte)(*(byte *)ppbVar18 - 0x30),
                          lVar26 = lVar19 + uVar23, SCARRY8(lVar19,uVar23))) goto LAB_100f498d4;
                pbVar24 = (byte *)0x0;
                pbVar16 = pbVar16 + -1;
                ppbVar18 = (byte **)((long)ppbVar18 + 1);
              } while (pbVar16 != (byte *)0x0);
            }
          }
        }
        else {
          pbVar15 = pbVar11;
          FUN_100edba6c(pbVar17,pbVar11,10);
          pbVar24 = pbVar15;
        }
        func_0x000107c6142c(pbVar11);
        if (((uint)pbVar24 & 0xff) == 1) goto LAB_100f49628;
        pbVar11 = pbVar10;
        func_0x000107c5bee8();
        func_0x000107c61180();
        pbVar17 = pbVar15;
        if (pbVar11 == (byte *)0x0) {
          func_0x000107c5faec();
          pbVar17 = pbVar15;
          func_0x000107c5fadc();
          func_0x000107c6142c(pbVar15);
        }
        pbVar24 = pbVar10;
        func_0x000107c42120();
        func_0x000107c61180();
        pbVar16 = pbVar17;
        if (pbVar24 == (byte *)0x0) {
          func_0x000107c5faec();
          pbVar16 = pbVar17;
          func_0x000107c5fadc();
          func_0x000107c6142c(pbVar17);
        }
        pbVar17 = pbVar10;
        func_0x000107c3cfcc();
        func_0x000107c61180();
        pbVar15 = pbVar16;
        if (pbVar17 == (byte *)0x0) {
          func_0x000107c5faec();
          pbVar15 = pbVar16;
          func_0x000107c5fadc();
          func_0x000107c6142c(pbVar16);
        }
        puVar4 = PTR_PTR_1126dc2a0;
        func_0x000107c61168();
        func_0x000107c4f310();
        func_0x000107c61180();
        func_0x000107c61170(pbVar11);
        func_0x000107c61170(pbVar24);
        func_0x000107c61170(pbVar17);
        func_0x000107c61170(pbVar10);
        if (puVar4 != (undefined *)0x0) {
          puVar12 = puStack_90;
          func_0x000107c61550();
          if ((((int)puVar12 == 0) || ((long)puStack_90 < 0)) ||
             (puVar12 = puStack_90, ((ulong)puStack_90 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_90 >> 0x3e == 0) {
              puVar12 = *(undefined **)(((ulong)puStack_90 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar12 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_90) {
                puVar12 = puStack_90;
              }
              func_0x000107c60480();
            }
            pbVar15 = puVar12 + 1;
            puVar12 = (undefined *)0x0;
            func_0x000100f4ac24(0,pbVar15,1,puStack_90);
          }
          uVar13 = (ulong)puVar12 & 0xffffffffffffff8;
          uVar23 = *(ulong *)(uVar13 + 0x10);
          pbVar10 = (byte *)(uVar23 + 1);
          puStack_90 = puVar12;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar23) {
            puStack_90 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
            pbVar15 = pbVar10;
            func_0x000100f4ac24(puStack_90,pbVar10,1,puVar12);
            uVar13 = (ulong)puStack_90 & 0xffffffffffffff8;
          }
          *(byte **)(uVar13 + 0x10) = pbVar10;
          *(undefined **)(uVar13 + uVar23 * 8 + 0x20) = puVar4;
        }
      }
    } while (pbVar21 != pbVar20);
  }
  pbStack_70 = pbVar22;
  FUN_100f49eec(puStack_90);
  pbVar22 = pbStack_70;
  pbVar15 = pbStack_70;
  FUN_100f4b3dc(pbStack_70);
  func_0x000107c6142c(pbVar22);
  func_0x000100f49b8c(pbVar15);
  func_0x000107c6142c(pbVar15);
  return;
}



/* Entry: 100f492a0; end: 100f492eb;  */

void FUN_100f492a0(void)

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



/* Entry: 100f492ec; end: 100f4934f;  */

void FUN_100f492ec(void)

{
  FUN_100f48b20();
  return;
}



/* Entry: 100f49350; end: 100f4936f;  */

void FUN_100f49350(void)

{
  func_0x000107c61168(&PTR_PTR_112d4d920);
  return;
}



/* Entry: 100f49370; end: 100f4937b;  */

void FUN_100f49370(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0;
  FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
  uVar3 = uVar2;
  func_0x000100f49e70();
  func_0x000107c5fe08(uVar4,uVar2,uVar3);
  func_0x000107c3e308(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 100f4937c; end: 100f493bb;  */

void FUN_100f4937c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100f493bc; end: 100f493cb;  */

void FUN_100f493bc(long param_1,long param_2)

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



/* Entry: 100f493cc; end: 100f49db7;  */

void FUN_100f493cc(ulong param_1,byte *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte **ppbVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong uVar25;
  long lVar26;
  undefined *puStack_90;
  byte *pbStack_70;
  ulong uStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar23 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar23 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar23 = param_1;
    }
    func_0x000107c60480();
  }
  pbVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar23 != 0) {
    pbStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar13 = uVar23 & ((long)uVar23 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100f4af50(0,uVar13,0);
    pbVar22 = pbStack_70;
    if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49b8c);
      (*pcVar2)();
    }
    puVar4 = PTR_PTR_1126dc2a0;
    func_0x000107c61168();
    uVar25 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ad4);
          (*pcVar2)();
        }
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ad8);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar25 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar25;
        uVar13 = param_1;
        FUN_100f4b220(uVar25,param_1,&PTR_PTR_1126a6030,0x112d4d9a8);
      }
      uVar6 = uVar5;
      func_0x000107c5bee8();
      func_0x000107c61180();
      uVar9 = uVar13;
      if (uVar6 == 0) {
        func_0x000107c5faec();
        uVar9 = uVar13;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar13);
      }
      uVar7 = uVar5;
      func_0x000107c3f708(uVar5);
      func_0x000107c61180();
      uVar8 = uVar5;
      func_0x000107c42120();
      func_0x000107c61180();
      uVar14 = uVar9;
      if (uVar8 == 0) {
        func_0x000107c5faec();
        uVar14 = uVar9;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar9);
      }
      uVar9 = uVar5;
      func_0x000107c3cfcc();
      func_0x000107c61180();
      uVar13 = uVar14;
      if (uVar9 == 0) {
        func_0x000107c5faec();
        uVar13 = uVar14;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar14);
      }
      puVar12 = puVar4;
      func_0x000107c5bed4();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      uVar6 = *(ulong *)(pbVar22 + 0x10);
      uVar5 = uVar6 + 1;
      pbStack_70 = pbVar22;
      if (*(ulong *)(pbVar22 + 0x18) >> 1 <= uVar6) {
        uVar13 = uVar5;
        func_0x000100f4af50(1 < *(ulong *)(pbVar22 + 0x18),uVar5,1);
      }
      uVar25 = uVar25 + 1;
      *(ulong *)(pbStack_70 + 0x10) = uVar5;
      *(undefined **)(pbStack_70 + uVar6 * 8 + 0x20) = puVar12;
      pbVar22 = pbStack_70;
    } while (uVar23 != uVar25);
  }
  pbVar15 = param_2;
  if ((ulong)param_2 >> 0x3e == 0) {
    pbVar20 = *(byte **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pbVar20 = (byte *)((ulong)param_2 & 0xffffffffffffff8);
    if ((byte *)0x7fffffffffffffff < param_2) {
      pbVar20 = param_2;
    }
    func_0x000107c60480();
  }
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pbVar20 != (byte *)0x0) {
    pbVar21 = (byte *)0x0;
    do {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        if (*(byte **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= pbVar21) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ad0);
          (*pcVar2)();
        }
        pbVar10 = *(byte **)(param_2 + (long)pbVar21 * 8 + 0x20);
        func_0x000107c61174();
        pbVar11 = pbVar15;
      }
      else {
        pbVar10 = pbVar21;
        pbVar11 = param_2;
        FUN_100f4b220(pbVar21,param_2,&PTR_PTR_1126a6038,0x112d4d9b0);
      }
      bVar3 = SCARRY8((long)pbVar21,1);
      pbVar21 = pbVar21 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49acc);
        (*pcVar2)();
      }
      pbVar15 = pbVar10;
      func_0x000107c5b304();
      func_0x000107c61180();
      pbVar17 = pbVar15;
      func_0x000107c5faec();
      func_0x000107c61170(pbVar15);
      pbVar15 = (byte *)((ulong)pbVar17 & 0xffffffffffff);
      pbVar16 = (byte *)((ulong)pbVar11 >> 0x38 & 0xf);
      pbVar24 = pbVar15;
      if (((ulong)pbVar11 & 0x2000000000000000) != 0) {
        pbVar24 = pbVar16;
      }
      if (pbVar24 == (byte *)0x0) {
        func_0x000107c6142c(pbVar11);
LAB_100f49628:
        func_0x000107c61170(pbVar10);
      }
      else {
        if (((ulong)pbVar11 >> 0x3c & 1) == 0) {
          if (((ulong)pbVar11 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar17 >> 0x3c & 1) == 0) {
              pbVar15 = pbVar11;
              func_0x000107c60358();
            }
            else {
              pbVar17 = (byte *)(((ulong)pbVar11 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar17 == 0x2b) {
              if ((long)pbVar15 < 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ae4);
                (*pcVar2)();
              }
              pbVar16 = pbVar15 + -1;
              if (pbVar16 == (byte *)0x0) goto LAB_100f498d4;
              lVar26 = 0;
              do {
                pbVar17 = pbVar17 + 1;
                if (((9 < *pbVar17 - 0x30) ||
                    (lVar19 = lVar26 * 10, SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f
                    )) || (uVar23 = (ulong)(byte)(*pbVar17 - 0x30), lVar26 = lVar19 + uVar23,
                          SCARRY8(lVar19,uVar23))) goto LAB_100f498d4;
                pbVar24 = (byte *)0x0;
                pbVar16 = pbVar16 + -1;
              } while (pbVar16 != (byte *)0x0);
            }
            else if (*pbVar17 == 0x2d) {
              if ((long)pbVar15 < 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ae8);
                (*pcVar2)();
              }
              pbVar16 = pbVar15 + -1;
              if (pbVar16 == (byte *)0x0) {
LAB_100f498d4:
                pbVar24 = (byte *)0x1;
              }
              else {
                lVar26 = 0;
                do {
                  pbVar17 = pbVar17 + 1;
                  if (((9 < *pbVar17 - 0x30) ||
                      (lVar19 = lVar26 * 10,
                      SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
                     (uVar23 = (ulong)(byte)(*pbVar17 - 0x30), lVar26 = lVar19 - uVar23,
                     SBORROW8(lVar19,uVar23))) goto LAB_100f498d4;
                  pbVar24 = (byte *)0x0;
                  pbVar16 = pbVar16 + -1;
                } while (pbVar16 != (byte *)0x0);
              }
            }
            else {
              if (pbVar15 == (byte *)0x0) goto LAB_100f498d4;
              lVar26 = 0;
              if (pbVar17 == (byte *)0x0) {
                pbVar24 = (byte *)0x0;
              }
              else {
                do {
                  if (((9 < *pbVar17 - 0x30) ||
                      (lVar19 = lVar26 * 10,
                      SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
                     (uVar23 = (ulong)(byte)(*pbVar17 - 0x30), lVar26 = lVar19 + uVar23,
                     SCARRY8(lVar19,uVar23))) goto LAB_100f498d4;
                  pbVar24 = (byte *)0x0;
                  pbVar15 = pbVar15 + -1;
                  pbVar17 = pbVar17 + 1;
                } while (pbVar15 != (byte *)0x0);
              }
            }
          }
          else {
            pbStack_70 = pbVar17;
            uStack_68 = (ulong)pbVar11 & 0xffffffffffffff;
            uVar1 = (uint)pbVar17 & 0xff;
            if (uVar1 == 0x2b) {
              if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49ae0);
                (*pcVar2)();
              }
              pbVar16 = pbVar16 + -1;
              if (pbVar16 == (byte *)0x0) goto LAB_100f498d4;
              lVar26 = 0;
              pbVar17 = (byte *)((ulong)&pbStack_70 | 1);
              do {
                if (((9 < *pbVar17 - 0x30) ||
                    (lVar19 = lVar26 * 10, SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f
                    )) || (uVar23 = (ulong)(byte)(*pbVar17 - 0x30), lVar26 = lVar19 + uVar23,
                          SCARRY8(lVar19,uVar23))) goto LAB_100f498d4;
                pbVar24 = (byte *)0x0;
                pbVar16 = pbVar16 + -1;
                pbVar17 = pbVar17 + 1;
              } while (pbVar16 != (byte *)0x0);
            }
            else if (uVar1 == 0x2d) {
              if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f49adc);
                (*pcVar2)();
              }
              pbVar16 = pbVar16 + -1;
              if (pbVar16 == (byte *)0x0) goto LAB_100f498d4;
              lVar26 = 0;
              pbVar17 = (byte *)((ulong)&pbStack_70 | 1);
              do {
                if (((9 < *pbVar17 - 0x30) ||
                    (lVar19 = lVar26 * 10, SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f
                    )) || (uVar23 = (ulong)(byte)(*pbVar17 - 0x30), lVar26 = lVar19 - uVar23,
                          SBORROW8(lVar19,uVar23))) goto LAB_100f498d4;
                pbVar24 = (byte *)0x0;
                pbVar16 = pbVar16 + -1;
                pbVar17 = pbVar17 + 1;
              } while (pbVar16 != (byte *)0x0);
            }
            else {
              if (pbVar16 == (byte *)0x0) goto LAB_100f498d4;
              lVar26 = 0;
              ppbVar18 = &pbStack_70;
              do {
                if (((9 < *(byte *)ppbVar18 - 0x30) ||
                    (lVar19 = lVar26 * 10, SUB168(SEXT816(lVar26) * SEXT816(10),8) != lVar19 >> 0x3f
                    )) || (uVar23 = (ulong)(byte)(*(byte *)ppbVar18 - 0x30),
                          lVar26 = lVar19 + uVar23, SCARRY8(lVar19,uVar23))) goto LAB_100f498d4;
                pbVar24 = (byte *)0x0;
                pbVar16 = pbVar16 + -1;
                ppbVar18 = (byte **)((long)ppbVar18 + 1);
              } while (pbVar16 != (byte *)0x0);
            }
          }
        }
        else {
          pbVar15 = pbVar11;
          FUN_100edba6c(pbVar17,pbVar11,10);
          pbVar24 = pbVar15;
        }
        func_0x000107c6142c(pbVar11);
        if (((uint)pbVar24 & 0xff) == 1) goto LAB_100f49628;
        pbVar11 = pbVar10;
        func_0x000107c5bee8();
        func_0x000107c61180();
        pbVar17 = pbVar15;
        if (pbVar11 == (byte *)0x0) {
          func_0x000107c5faec();
          pbVar17 = pbVar15;
          func_0x000107c5fadc();
          func_0x000107c6142c(pbVar15);
        }
        pbVar24 = pbVar10;
        func_0x000107c42120();
        func_0x000107c61180();
        pbVar16 = pbVar17;
        if (pbVar24 == (byte *)0x0) {
          func_0x000107c5faec();
          pbVar16 = pbVar17;
          func_0x000107c5fadc();
          func_0x000107c6142c(pbVar17);
        }
        pbVar17 = pbVar10;
        func_0x000107c3cfcc();
        func_0x000107c61180();
        pbVar15 = pbVar16;
        if (pbVar17 == (byte *)0x0) {
          func_0x000107c5faec();
          pbVar15 = pbVar16;
          func_0x000107c5fadc();
          func_0x000107c6142c(pbVar16);
        }
        puVar4 = PTR_PTR_1126dc2a0;
        func_0x000107c61168();
        func_0x000107c4f310();
        func_0x000107c61180();
        func_0x000107c61170(pbVar11);
        func_0x000107c61170(pbVar24);
        func_0x000107c61170(pbVar17);
        func_0x000107c61170(pbVar10);
        if (puVar4 != (undefined *)0x0) {
          puVar12 = puStack_90;
          func_0x000107c61550();
          if ((((int)puVar12 == 0) || ((long)puStack_90 < 0)) ||
             (puVar12 = puStack_90, ((ulong)puStack_90 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_90 >> 0x3e == 0) {
              puVar12 = *(undefined **)(((ulong)puStack_90 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar12 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_90) {
                puVar12 = puStack_90;
              }
              func_0x000107c60480();
            }
            pbVar15 = puVar12 + 1;
            puVar12 = (undefined *)0x0;
            func_0x000100f4ac24(0,pbVar15,1,puStack_90);
          }
          uVar13 = (ulong)puVar12 & 0xffffffffffffff8;
          uVar23 = *(ulong *)(uVar13 + 0x10);
          pbVar10 = (byte *)(uVar23 + 1);
          puStack_90 = puVar12;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar23) {
            puStack_90 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
            pbVar15 = pbVar10;
            func_0x000100f4ac24(puStack_90,pbVar10,1,puVar12);
            uVar13 = (ulong)puStack_90 & 0xffffffffffffff8;
          }
          *(byte **)(uVar13 + 0x10) = pbVar10;
          *(undefined **)(uVar13 + uVar23 * 8 + 0x20) = puVar4;
        }
      }
    } while (pbVar21 != pbVar20);
  }
  pbStack_70 = pbVar22;
  FUN_100f49eec(puStack_90);
  pbVar22 = pbStack_70;
  pbVar15 = pbStack_70;
  FUN_100f4b3dc(pbStack_70);
  func_0x000107c6142c(pbVar22);
  func_0x000100f49b8c(pbVar15);
  func_0x000107c6142c(pbVar15);
  return;
}



/* Entry: 100f49db8; end: 100f49e2b;  */

void FUN_100f49db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
  uVar2 = uVar1;
  func_0x000100f49e70();
  func_0x000107c5fe08(param_3,uVar1,uVar2);
  func_0x000107c3e308(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f49e2c; end: 100f49ec3;  */

void FUN_100f49e2c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f49ec4; end: 100f49eeb;  */

void FUN_100f49ec4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0;
  FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
  uVar3 = uVar2;
  func_0x000100f49e70();
  func_0x000107c5fe08(uVar4,uVar2,uVar3);
  func_0x000107c3e308(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 100f49eec; end: 100f49fd7;  */

void FUN_100f49eec(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
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
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_100f4ab74(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_100f4b0a0(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f49fd4);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f49fd8);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f49fd0);
  (*pcVar1)();
}



/* Entry: 100f49fd8; end: 100f4a777;  */

undefined8 FUN_100f49fd8(ulong *param_1,ulong param_2)

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
    FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
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
    func_0x000100f4a41c();
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
      FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4a220);
      (*pcVar1)();
    }
    func_0x000100f4a220(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      FUN_100f4a8c8(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_100f4aaf4(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 100f4a778; end: 100f4a8c7;  */

void FUN_100f4a778(void)

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
  
  func_0x0001000285a8(0x112d4da68,&UNK_10d914178);
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
    if (uVar5 == 0) goto LAB_100f4a854;
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
LAB_100f4a854:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100f4a8c8);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_100f4a8a0;
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
LAB_100f4a8a0:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 100f4a8c8; end: 100f4aaf3;  */

void FUN_100f4a8c8(long param_1)

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
  uVar11 = 0x112d4da68;
  func_0x0001000285a8(0x112d4da68,&UNK_10d914178);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_100f4aac4:
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f4aaf0);
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
          goto LAB_100f4aac4;
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f4aaf4);
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



/* Entry: 100f4aaf4; end: 100f4ab73;  */

void FUN_100f4aaf4(undefined8 param_1,long param_2)

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



/* Entry: 100f4ab74; end: 100f4ad4b;  */

void FUN_100f4ab74(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x000100f4ac24();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 100f4ad4c; end: 100f4adcb;  */

undefined * FUN_100f4ad4c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100f4aee4();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100f4adcc; end: 100f4aee3;  */

long FUN_100f4adcc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f4aee0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f4aee4);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f4aedc);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100f4aee4; end: 100f4af6b;  */

void FUN_100f4aee4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d4da70;
  plVar5 = (long *)&UNK_10d914180;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100f4af6c; end: 100f4b09f;  */

undefined * FUN_100f4af6c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f4b0a0);
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
    FUN_100f4aee4();
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
    FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
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



/* Entry: 100f4b0a0; end: 100f4b21f;  */

ulong FUN_100f4b0a0(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4b220);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4b214);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4b218);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4b21c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_100f4b220(uVar7,param_3,&PTR_PTR_1126dc2a0,0x112d4da58);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 100f4b220; end: 100f4b3db;  */

ulong FUN_100f4b220(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f4b304);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f4b308);
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
  FUN_100f4b538(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f4b3dc);
  (*pcVar2)();
}



/* Entry: 100f4b3dc; end: 100f4b537;  */

void FUN_100f4b3dc(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_70;
  ulong uStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  FUN_100f4b538(0,0x112d4da58,&PTR_PTR_1126dc2a0);
  uVar4 = uVar3;
  func_0x000100f49e70();
  func_0x000107c5fe14(uVar6,uVar3,uVar4);
  uStack_68 = uVar6;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f4b524);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar7;
        FUN_100f4b220(uVar7,param_1,&PTR_PTR_1126dc2a0,0x112d4da58);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f4b520);
        (*pcVar2)();
      }
      FUN_100f49fd8(&uStack_70,uVar5);
      func_0x000107c61170(uStack_70);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



/* Entry: 100f4b538; end: 100f4b577;  */

void FUN_100f4b538(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100f4b578; end: 100f4b583; -[SCCommerceAttachmentToolComposerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b578(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4da78;
  func_0x000107c61428(param_1 + _DAT_112d4da78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4b584; end: 100f4b58f; -[SCCommerceAttachmentToolComposerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b584(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4da78;
  func_0x000107c61428(param_1 + _DAT_112d4da78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4b590; end: 100f4b59b; -[SCCommerceAttachmentToolComposerEntryPoint showcaseServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b590(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4da80;
  func_0x000107c61428(param_1 + _DAT_112d4da80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4b59c; end: 100f4b5a7; -[SCCommerceAttachmentToolComposerEntryPoint setShowcaseServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b59c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4da80;
  func_0x000107c61428(param_1 + _DAT_112d4da80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4b5a8; end: 100f4b5b3; -[SCCommerceAttachmentToolComposerEntryPoint commerceConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b5a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4da88;
  func_0x000107c61428(param_1 + _DAT_112d4da88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4b5b4; end: 100f4b5bf; -[SCCommerceAttachmentToolComposerEntryPoint setCommerceConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4da88;
  func_0x000107c61428(param_1 + _DAT_112d4da88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4b5c0; end: 100f4b5cb; -[SCCommerceAttachmentToolComposerEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b5c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4da90;
  func_0x000107c61428(param_1 + _DAT_112d4da90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4b5cc; end: 100f4b5d7; -[SCCommerceAttachmentToolComposerEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b5cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4da90;
  func_0x000107c61428(param_1 + _DAT_112d4da90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4b5d8; end: 100f4b5e3; -[SCCommerceAttachmentToolComposerEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b5d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4da98;
  func_0x000107c61428(param_1 + _DAT_112d4da98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4b5e4; end: 100f4b627;  */

void FUN_100f4b5e4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f4b628; end: 100f4b633; -[SCCommerceAttachmentToolComposerEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4b628(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4da98;
  func_0x000107c61428(param_1 + _DAT_112d4da98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4b634; end: 100f4b687;  */

void FUN_100f4b634(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4b688; end: 100f4b84f;  */

/* WARNING: Possible PIC construction at 0x000100f4b788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4b798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4b7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4b828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4b808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4b7f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f4b80c) */
/* WARNING: Removing unreachable block (ram,0x000100f4b82c) */
/* WARNING: Removing unreachable block (ram,0x000100f4b7ac) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100f4b79c) */
/* WARNING: Removing unreachable block (ram,0x000100f4b78c) */
/* WARNING: Removing unreachable block (ram,0x000100f4b7fc) */

void FUN_100f4b688(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c5af20();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3fe34();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c40014();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c3ff88();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = 0;
          FUN_100f49350();
          func_0x000107c613fc();
          *(long *)(lVar5 + 0x10) = lVar1;
          *(long *)(lVar5 + 0x18) = lVar2;
          *(long *)(lVar5 + 0x20) = lVar3;
          *(long *)(lVar5 + 0x28) = lVar4;
          *(long *)(lVar5 + 0x30) = unaff_x20;
          *(undefined8 *)(lVar5 + 0x38) = 0;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          func_0x000107c61174(unaff_x20);
          FUN_100f48b20();
          lVar1 = unaff_x20;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


