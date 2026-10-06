/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023f5f8c; end: 1023f5fab;  */

void FUN_1023f5f8c(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1023f5fac; end: 1023f5fe7;  */

void FUN_1023f5fac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1023f4690();
  func_0x000107c613fc();
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110501488;
  return;
}



/* Entry: 1023f5fe8; end: 1023f5ff7;  */

void FUN_1023f5fe8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023f5ff8; end: 1023f6063;  */

void FUN_1023f5ff8(undefined8 param_1)

{
  if (lRam0000000112e95438 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d4c74);
  return;
}



/* Entry: 1023f6064; end: 1023f610b;  */

void FUN_1023f6064(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112e95270,&UNK_10daa06f0);
  func_0x000107c613fc();
  pcVar1 = FUN_1023f5fac;
  func_0x0001000bdd8c(FUN_1023f5fac,0);
  FUN_102428598(0);
  func_0x000107c610f8();
  pcVar2 = pcVar1;
  func_0x000107c6157c();
  func_0x0001024284dc();
  uVar3 = 0;
  FUN_102428a48(0);
  func_0x000107c610f8();
  func_0x000102428934(pcVar2,uVar3);
  func_0x000107c61574(pcVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1023f610c; end: 1023f6153; -[SCSnapEditorPluginScopedContentRecognitionServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f610c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e954d8;
  func_0x000107c61428(param_1 + _DAT_112e954d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023f6154; end: 1023f6407; -[SCSnapEditorPluginScopedContentRecognitionServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6154(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e954d8;
  func_0x000107c61428(param_1 + _DAT_112e954d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023f6408; end: 1023f643b; -[SCSnapEditorPluginScopedContentRecognitionServiceProvider provide] */

void FUN_1023f6408(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023f61ac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023f643c; end: 1023f646f; -[SCSnapEditorPluginScopedContentRecognitionServiceProvider __safeProvide] */

void FUN_1023f643c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023f6300();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023f6470; end: 1023f64b3; -[SCSnapEditorPluginScopedContentRecognitionServiceProvider end] */

void FUN_1023f6470(undefined8 param_1)

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



/* Entry: 1023f64b4; end: 1023f65d3;  */

void FUN_1023f64b4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "ContentRecognitionImpl/SCSnapEditorPluginScopedContentRecognitionServiceProvider.swift"
                        ,0x56,2,0x29,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f65d4);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1023f65d4; end: 1023f667f; -[SCSnapEditorPluginScopedContentRecognitionServiceProvider setValue:forIvarName:] */

void FUN_1023f65d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1023f64b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1023f6680; end: 1023f66df; -[SCSnapEditorPluginScopedContentRecognitionServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6680(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e954d8,0);
  *(undefined8 *)(param_1 + _DAT_112e954e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023f66e0; end: 1023f6713;  */

void FUN_1023f66e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023f6714; end: 1023f674b; -[SCSnapEditorPluginScopedContentRecognitionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6714(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e954d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e954e0));
  return;
}



/* Entry: 1023f674c; end: 1023f676b;  */

void FUN_1023f674c(void)

{
  func_0x000107c61168(&PTR_PTR_112e95528);
  return;
}



/* Entry: 1023f676c; end: 1023f67b3; -[SCModularStickerCutoutScopedContentRecognitionServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f676c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e95588;
  func_0x000107c61428(param_1 + _DAT_112e95588,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023f67b4; end: 1023f6a67; -[SCModularStickerCutoutScopedContentRecognitionServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f67b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e95588;
  func_0x000107c61428(param_1 + _DAT_112e95588,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023f6a68; end: 1023f6a9b; -[SCModularStickerCutoutScopedContentRecognitionServiceProvider provide] */

void FUN_1023f6a68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023f680c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023f6a9c; end: 1023f6acf; -[SCModularStickerCutoutScopedContentRecognitionServiceProvider __safeProvide] */

void FUN_1023f6a9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023f6960();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023f6ad0; end: 1023f6b13; -[SCModularStickerCutoutScopedContentRecognitionServiceProvider end] */

void FUN_1023f6ad0(undefined8 param_1)

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



/* Entry: 1023f6b14; end: 1023f6c33;  */

void FUN_1023f6b14(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "ContentRecognitionImpl/SCModularStickerCutoutScopedContentRecognitionServiceProvider.swift"
                        ,0x5a,2,0x29,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f6c34);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1023f6c34; end: 1023f6cdf; -[SCModularStickerCutoutScopedContentRecognitionServiceProvider setValue:forIvarName:] */

void FUN_1023f6c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1023f6b14(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1023f6ce0; end: 1023f6d3f; -[SCModularStickerCutoutScopedContentRecognitionServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6ce0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e95588,0);
  *(undefined8 *)(param_1 + _DAT_112e95590) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023f6d40; end: 1023f6d73;  */

void FUN_1023f6d40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023f6d74; end: 1023f6dab; -[SCModularStickerCutoutScopedContentRecognitionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6d74(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e95588);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e95590));
  return;
}



/* Entry: 1023f6dac; end: 1023f6dcb;  */

void FUN_1023f6dac(void)

{
  func_0x000107c61168(&PTR_PTR_112e955d8);
  return;
}



/* Entry: 1023f6dcc; end: 1023f6ddb; -[_TtC25SaturnFriendsFeedServices27SCSaturnFriendsFeedServices saturnContextProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e95638));
  return;
}



/* Entry: 1023f6ddc; end: 1023f6deb; -[_TtC25SaturnFriendsFeedServices27SCSaturnFriendsFeedServices saturnFriendsFeedImpressionTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e95640));
  return;
}



/* Entry: 1023f6dec; end: 1023f6eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6dec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e95638) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e95640) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023f6eb4; end: 1023f6f13; -[_TtC25SaturnFriendsFeedServices27SCSaturnFriendsFeedServices init] */

void FUN_1023f6eb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnFriendsFeedServices.SCSaturnFriendsFeedServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f6ee0);
  (*pcVar1)();
}



/* Entry: 1023f6f14; end: 1023f6f4b; -[_TtC25SaturnFriendsFeedServices27SCSaturnFriendsFeedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023f6f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023f6f34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6f14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e95638));
  return;
}



/* Entry: 1023f6f4c; end: 1023f6f6b;  */

void FUN_1023f6f4c(void)

{
  func_0x000107c61168(&PTR_PTR_11283be08);
  return;
}



/* Entry: 1023f6f6c; end: 1023f6fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6f6c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1023f7360();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e95678) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1023f6fd8; end: 1023f7043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f6fd8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e95678) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023f7044; end: 1023f70a3; -[_TtC34SendToScopedFactoryServiceProvider22SCSendToScopedServices init] */

void FUN_1023f7044(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToScopedFactoryServiceProvider.SCSendToScopedServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f7070);
  (*pcVar1)();
}



/* Entry: 1023f70a4; end: 1023f70b3; -[_TtC34SendToScopedFactoryServiceProvider22SCSendToScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f70a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e95678));
  return;
}



/* Entry: 1023f70b4; end: 1023f711f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023f70b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110501898;
  func_0x000107c613fc(&UNK_110501898,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1023f73f8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1023f7120; end: 1023f71bb;  */

void FUN_1023f7120(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105017a8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105017a8;
  return;
}



/* Entry: 1023f71bc; end: 1023f71f3;  */

void FUN_1023f71bc(long *param_1)

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



/* Entry: 1023f71f4; end: 1023f71fb;  */

undefined8 FUN_1023f71f4(void)

{
  return 0x1b;
}



/* Entry: 1023f71fc; end: 1023f732f;  */

void FUN_1023f71fc(undefined8 *param_1)

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
  puVar1 = &UNK_1105018c0;
  func_0x000107c613fc(&UNK_1105018c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1023f73d0;
  func_0x00010058fa64(FUN_1023f73d0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1023f7330; end: 1023f735f;  */

undefined ** FUN_1023f7330(void)

{
  return &PTR_DAT_113034c70;
}



/* Entry: 1023f7360; end: 1023f737f;  */

void FUN_1023f7360(void)

{
  func_0x000107c61168(&PTR_PTR_11283bed0);
  return;
}



/* Entry: 1023f7380; end: 1023f73cf;  */

undefined1  [16] FUN_1023f7380(void)

{
  return ZEXT816(0x1105017f8);
}



/* Entry: 1023f73d0; end: 1023f73f7;  */

void FUN_1023f73d0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1023f73f8; end: 1023f740b;  */

void FUN_1023f73f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1023f740c; end: 1023f8607;  */

void FUN_1023f740c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  code *pcVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  code *pcVar33;
  undefined8 uVar34;
  code *pcVar35;
  code *pcVar36;
  undefined8 uVar37;
  code *pcVar38;
  undefined8 uVar39;
  undefined8 auStack_70 [2];
  
  uVar39 = *param_2;
  func_0x0001000285a8(0x112e956f0,&UNK_10daa0ab0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar39;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e956f8,&UNK_10daa0b70);
  puVar2 = &UNK_110501970;
  func_0x000107c613fc(&UNK_110501970,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  pcVar3 = FUN_1023f86a0;
  func_0x0001000823a8(FUN_1023f86a0,puVar2);
  func_0x000100082720("ComposerListStoreServiceProviderWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e95700,&UNK_10daa0ac0);
  puVar2 = &UNK_110501998;
  func_0x000107c613fc(&UNK_110501998,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  uVar39 = 0x1023f86ac;
  func_0x0001000823a8(0x1023f86ac,puVar2);
  pcVar4 = "ComposerSendToSessionVisibilityLoggerServiceProviderWrapperServiceProvider";
  func_0x000100082720("ComposerSendToSessionVisibilityLoggerServiceProviderWrapperServiceProvider",
                      0x4a,2);
  func_0x0001024015e8();
  pcVar5 = "SCComposerSendToScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCComposerSendToScopeExposerSubjectServiceProvider",0x32,2);
  func_0x000102401668();
  pcVar6 = "SCCustomStoryMembersScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCustomStoryMembersScopeExposerSubjectServiceProvider",0x36,2);
  FUN_1024016b4();
  pcVar7 = "SCSendToInternalScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSendToInternalScopeExposerSubjectServiceProvider",0x32,2);
  FUN_102401700();
  func_0x000100082720("SCSendToPublicProfileOnboardingScopeExposerSubjectServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e95708,&UNK_10daa12e0);
  puVar2 = &UNK_1105019c0;
  func_0x000107c613fc(&UNK_1105019c0,0x58,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_8;
  *(undefined8 *)(puVar2 + 0x30) = param_9;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  *(undefined8 *)(puVar2 + 0x40) = param_10;
  *(undefined8 *)(puVar2 + 0x48) = param_11;
  *(undefined8 *)(puVar2 + 0x50) = param_12;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  pcVar8 = FUN_1023f86b4;
  func_0x0001000823a8(FUN_1023f86b4,puVar2);
  func_0x000100082720("SCPlaceTaggingEntryPointWrapperServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e95710,&UNK_10daa0ad0);
  func_0x000107c6157c(pcVar8);
  pcVar9 = FUN_1023f86e8;
  func_0x0001000823a8(FUN_1023f86e8,pcVar8);
  func_0x000100082720("SCPlaceTaggingServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112e95718,&UNK_10daa1480);
  puVar2 = &UNK_1105019e8;
  func_0x000107c613fc(&UNK_1105019e8,0x98,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_13;
  *(undefined8 *)(puVar2 + 0x20) = param_14;
  *(undefined8 *)(puVar2 + 0x28) = param_15;
  *(undefined8 *)(puVar2 + 0x30) = param_16;
  *(undefined8 *)(puVar2 + 0x38) = param_17;
  *(undefined8 *)(puVar2 + 0x40) = param_18;
  *(undefined8 *)(puVar2 + 0x48) = param_19;
  *(undefined8 *)(puVar2 + 0x50) = param_20;
  *(undefined8 *)(puVar2 + 0x58) = param_21;
  *(undefined8 *)(puVar2 + 0x60) = param_22;
  *(undefined8 *)(puVar2 + 0x68) = param_23;
  *(undefined8 *)(puVar2 + 0x70) = param_24;
  *(undefined8 *)(puVar2 + 0x78) = param_25;
  *(undefined8 *)(puVar2 + 0x80) = param_26;
  *(undefined8 *)(puVar2 + 0x88) = param_27;
  *(undefined8 *)(puVar2 + 0x90) = param_28;
  func_0x000107c6157c();
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
  func_0x000107c6157c(param_28);
  pcVar10 = FUN_1023f86f0;
  func_0x0001000823a8(FUN_1023f86f0,puVar2);
  func_0x000100082720("SCSelectionStoryServicesEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e95720,&UNK_10daa0ae0);
  puVar2 = &UNK_110501a10;
  func_0x000107c613fc(&UNK_110501a10,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_13;
  *(undefined8 *)(puVar2 + 0x20) = param_23;
  *(undefined8 *)(puVar2 + 0x28) = param_29;
  *(undefined8 *)(puVar2 + 0x30) = param_30;
  func_0x000107c6157c();
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  pcVar11 = FUN_1023f8734;
  func_0x0001000823a8(FUN_1023f8734,puVar2);
  func_0x000100082720("SCSendToFirstSnapSectionServicesEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e95728,&UNK_10daa1b60);
  puVar2 = &UNK_110501a38;
  func_0x000107c613fc(&UNK_110501a38,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_26;
  *(undefined8 *)(puVar2 + 0x20) = param_23;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_26);
  uVar12 = 0x1023f8740;
  func_0x0001000823a8(0x1023f8740,puVar2);
  func_0x000100082720("SCSendToScopedOffPlatformShareOnMainCameraPreviewServiceProviderWrapperServiceProvider"
                      ,0x56,2);
  pcVar13 = pcVar4;
  FUN_102401628();
  func_0x000100082720("SCComposerSendToScopeExposerObservableServiceProvider",0x35,2);
  pcVar14 = pcVar5;
  FUN_1024016a8();
  func_0x000100082720("SCCustomStoryMembersScopeExposerObservableServiceProvider",0x39,2);
  pcVar15 = pcVar6;
  FUN_1024016f4();
  func_0x000100082720("SCSendToInternalScopeExposerObservableServiceProvider",0x35,2);
  pcVar16 = pcVar7;
  FUN_10240178c();
  func_0x000100082720("SCSendToPublicProfileOnboardingScopeExposerObservableServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar17 = FUN_1023f71bc;
  func_0x0001000823a8(FUN_1023f71bc,0);
  func_0x000100082720("SCSendToScopedServicesCleanupRelayServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e95730,&UNK_10daa1d90);
  puVar2 = &UNK_110501a60;
  func_0x000107c613fc(&UNK_110501a60,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  func_0x000107c6157c();
  func_0x000107c6157c(param_6);
  uVar18 = 0x1023f874c;
  func_0x0001000823a8(0x1023f874c,puVar2);
  func_0x000100082720("SendToActionMenuLoggerServiceProviderWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e95738,&UNK_10daa0af0);
  func_0x000107c6157c(uVar18);
  uVar19 = 0x1023f8754;
  func_0x0001000823a8(0x1023f8754,uVar18);
  func_0x000100082720("SendToActionMenuLoggerServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112e95740,&UNK_10daa0af8);
  func_0x000107c6157c(pcVar3);
  uVar20 = 0x1023f875c;
  func_0x0001000823a8(0x1023f875c,pcVar3);
  func_0x000100082720("ComposerListStoreServiceServiceProvider",0x27,2);
  func_0x0001000285a8(0x112e95748,&UNK_10daa0b00);
  func_0x000107c6157c(uVar39);
  uVar21 = 0x1023f8764;
  func_0x0001000823a8(0x1023f8764,uVar39);
  func_0x000100082720("ComposerSendToSessionVisibilityLoggerServiceServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e95750,&UNK_10daa10d0);
  puVar2 = &UNK_110501a88;
  func_0x000107c613fc(&UNK_110501a88,0x68,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_14;
  *(undefined8 *)(puVar2 + 0x20) = param_16;
  *(undefined8 *)(puVar2 + 0x28) = param_22;
  *(undefined8 *)(puVar2 + 0x30) = param_23;
  *(undefined8 *)(puVar2 + 0x38) = param_29;
  *(undefined8 *)(puVar2 + 0x40) = param_31;
  *(undefined8 *)(puVar2 + 0x48) = param_32;
  *(undefined8 *)(puVar2 + 0x50) = param_33;
  *(char **)(puVar2 + 0x58) = pcVar16;
  *(char **)(puVar2 + 0x60) = pcVar14;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(pcVar16);
  func_0x000107c6157c(pcVar14);
  pcVar22 = FUN_1023f876c;
  func_0x0001000823a8(FUN_1023f876c,puVar2);
  func_0x000100082720("ComposerSendToStoryOnboardingServiceProviderWrapperServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e95758,&UNK_10daa0b10);
  func_0x000107c6157c(pcVar22);
  pcVar23 = FUN_1023f87a8;
  func_0x0001000823a8(FUN_1023f87a8,pcVar22);
  func_0x000100082720("ComposerSendToStoryOnboardingServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e95760,&UNK_10daa0b18);
  func_0x000107c6157c(pcVar10);
  uVar24 = 0x1023f87b0;
  func_0x0001000823a8(0x1023f87b0,pcVar10);
  func_0x000100082720("SCSelectionStoryServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112e95768,&UNK_10daa0b20);
  func_0x000107c6157c(pcVar11);
  uVar25 = 0x1023f87b8;
  func_0x0001000823a8(0x1023f87b8,pcVar11);
  func_0x000100082720("SCSendToFirstSnapSectionServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e95770,&UNK_10daa0b28);
  func_0x000107c6157c(uVar12);
  uVar26 = 0x1023f87c0;
  func_0x0001000823a8(0x1023f87c0,uVar12);
  func_0x000100082720("SCSendToScopedOffPlatformShareOnMainCameraPreviewServiceServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112e95778,&UNK_10daa0b30);
  puVar2 = &UNK_110501ab0;
  func_0x000107c613fc(&UNK_110501ab0,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar26;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  func_0x000107c6157c();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(uVar26);
  pcVar27 = FUN_1023f87fc;
  func_0x0001000823a8(FUN_1023f87fc,puVar2);
  func_0x000100082720("SendToSharingConfigurationServiceProviderWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e95780,&UNK_10daa0d00);
  puVar2 = &UNK_110501ad8;
  func_0x000107c613fc(&UNK_110501ad8,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_34;
  *(undefined8 *)(puVar2 + 0x28) = param_35;
  *(undefined8 *)(puVar2 + 0x30) = uVar21;
  func_0x000107c6157c();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(uVar21);
  pcVar28 = FUN_1023f884c;
  func_0x0001000823a8(FUN_1023f884c,puVar2);
  func_0x000100082720("ComposerSendToRankedRecipientsStoreServiceProviderWrapperServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112e95788,&UNK_10daa0b40);
  puVar2 = &UNK_110501b00;
  func_0x000107c613fc(&UNK_110501b00,0x50,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_26;
  *(undefined8 *)(puVar2 + 0x20) = param_36;
  *(undefined8 *)(puVar2 + 0x28) = uVar25;
  *(undefined8 *)(puVar2 + 0x30) = param_23;
  *(undefined8 *)(puVar2 + 0x38) = param_37;
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  *(undefined8 *)(puVar2 + 0x48) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(uVar25);
  func_0x000107c6157c(param_37);
  uVar29 = 0x1023f886c;
  func_0x0001000823a8(0x1023f886c,puVar2);
  func_0x000100082720("SCSendToDataServicesEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e95790,&UNK_10daa0b48);
  func_0x000107c6157c(pcVar27);
  uVar30 = 0x1023f8878;
  func_0x0001000823a8(0x1023f8878,pcVar27);
  func_0x000100082720("SendToSharingConfigurationServiceServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e95798,&UNK_10daa0b50);
  func_0x000107c6157c(pcVar28);
  uVar31 = 0x1023f8880;
  func_0x0001000823a8(0x1023f8880,pcVar28);
  func_0x000100082720("ComposerSendToRankedRecipientsStoreServiceServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e957a0,&UNK_10daa0b58);
  func_0x000107c6157c(uVar29);
  uVar32 = 0x1023f8888;
  func_0x0001000823a8(0x1023f8888,uVar29);
  func_0x000100082720("SCSendToDataServicesServiceProvider",0x23,2);
  func_0x0001000285a8(0x112e957a8,&UNK_10daa0b60);
  puVar2 = &UNK_110501b28;
  func_0x000107c613fc(&UNK_110501b28,0x50,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_23;
  *(undefined8 *)(puVar2 + 0x28) = param_38;
  *(undefined8 *)(puVar2 + 0x30) = uVar32;
  *(undefined8 *)(puVar2 + 0x38) = param_37;
  *(char **)(puVar2 + 0x40) = pcVar15;
  *(char **)(puVar2 + 0x48) = pcVar13;
  func_0x000107c6157c();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(uVar32);
  func_0x000107c6157c(pcVar15);
  func_0x000107c6157c(pcVar13);
  pcVar33 = FUN_1023f88ec;
  func_0x0001000823a8(FUN_1023f88ec,puVar2);
  func_0x000100082720("SCSendToEntryPointWrapperServiceProvider",0x28,2);
  uVar34 = uVar20;
  FUN_102400f7c(uVar20,uVar31,uVar21,pcVar23,pcVar4,pcVar5,pcVar9,uVar24,uVar32,uVar25,pcVar6,pcVar7
                ,uVar26,uVar19,uVar30);
  func_0x000100082720("SendToScopeGraphBridgeServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112e957b0,&UNK_10daa0b68);
  puVar2 = &UNK_110501b50;
  func_0x000107c613fc(&UNK_110501b50,0x88,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(code **)(puVar2 + 0x18) = pcVar28;
  *(undefined8 *)(puVar2 + 0x20) = uVar39;
  *(code **)(puVar2 + 0x28) = pcVar22;
  *(code **)(puVar2 + 0x30) = pcVar8;
  *(code **)(puVar2 + 0x38) = pcVar10;
  *(undefined8 *)(puVar2 + 0x40) = uVar29;
  *(code **)(puVar2 + 0x48) = pcVar33;
  *(code **)(puVar2 + 0x50) = pcVar11;
  *(undefined8 *)(puVar2 + 0x58) = uVar12;
  *(undefined8 **)(puVar2 + 0x60) = puVar1;
  *(code **)(puVar2 + 0x68) = pcVar17;
  *(undefined8 *)(puVar2 + 0x70) = uVar18;
  *(undefined8 *)(puVar2 + 0x78) = uVar34;
  *(code **)(puVar2 + 0x80) = pcVar27;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar39);
  func_0x000107c6157c(pcVar22);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(pcVar27);
  func_0x000107c6157c(pcVar28);
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(pcVar33);
  func_0x000107c6157c(pcVar17);
  func_0x000107c6157c(uVar34);
  pcVar35 = FUN_1023f8910;
  func_0x0001000823a8(FUN_1023f8910,puVar2);
  func_0x000100082720("SCSendToScopeInitializationPluginRegistryServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e95680,&UNK_10daa0890);
  func_0x000107c6157c(pcVar35);
  pcVar36 = FUN_1023f8954;
  func_0x0001000823a8(FUN_1023f8954,pcVar35);
  func_0x000100082720("SCSendToScopeInitializationServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112e95670,&UNK_10daa0880);
  func_0x000107c6157c(pcVar36);
  uVar37 = 0x1023f895c;
  func_0x0001000823a8(0x1023f895c,pcVar36);
  func_0x000100082720("SCSendToScopedServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110501b78;
  func_0x000107c613fc(&UNK_110501b78,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar37;
  *(code **)(puVar2 + 0x18) = pcVar17;
  func_0x000107c6157c(pcVar17);
  pcVar38 = FUN_1023f8990;
  func_0x0001000823a8(FUN_1023f8990,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar39);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(uVar25);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar30);
  func_0x000107c61574(uVar31);
  func_0x000107c61574(uVar32);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(uVar34);
  func_0x000107c61574(pcVar35);
  func_0x000107c61574(pcVar36);
  func_0x000100082720("SCSendToScopeEntryPointProvider",0x1f,2);
  *param_1 = pcVar38;
  return;
}



/* Entry: 1023f8608; end: 1023f869f;  */

void FUN_1023f8608(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1023f740c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128));
  return;
}



/* Entry: 1023f86a0; end: 1023f86b3;  */

void FUN_1023f86a0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_1023f8d78();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10241cdf0(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x00010241cb7c();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10241cc10();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 1023f86b4; end: 1023f86e7;  */

void FUN_1023f86b4(void)

{
  long unaff_x20;
  
  FUN_1023f9f60(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1023f86e8; end: 1023f86ef;  */

void FUN_1023f86e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1023f86f0; end: 1023f8733;  */

void FUN_1023f86f0(void)

{
  long unaff_x20;
  
  FUN_1023fad30(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1023f8734; end: 1023f876b;  */

void FUN_1023f8734(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1023fe62c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126aa7b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x63536f54646e6573;
  func_0x000107c5fadc(0x63536f54646e6573,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc46f0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  lVar11 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0986a0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023fe104);
    (*pcVar1)();
  }
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(long *)(lVar2 + 0x40) = lVar11;
  *param_1 = lVar2;
  return;
}



/* Entry: 1023f876c; end: 1023f87a7;  */

void FUN_1023f876c(void)

{
  long unaff_x20;
  
  FUN_1023f96a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1023f87a8; end: 1023f87c7;  */

void FUN_1023f87a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1023f87c8; end: 1023f87fb;  */

void FUN_1023f87c8(void)

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



/* Entry: 1023f87fc; end: 1023f8807;  */

void FUN_1023f87fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1023ff228();
  func_0x000107c613fc();
  FUN_1023ff000(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1023f8808; end: 1023f884b;  */

void FUN_1023f8808(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023f884c; end: 1023f888f;  */

void FUN_1023f884c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1023f9270();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_1024250d8(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_102424b10();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_102424b24();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1023f8890; end: 1023f88eb;  */

void FUN_1023f8890(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023f88ec; end: 1023f890f;  */

void FUN_1023f88ec(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_1023fdcd8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  *(undefined8 *)(lVar1 + 0x38) = uStack_80;
  *(undefined8 *)(lVar1 + 0x40) = uStack_88;
  *(undefined8 *)(lVar1 + 0x48) = uStack_90;
  func_0x0001000285a8(0x112e95f08,&UNK_10daa1848);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar9 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(lVar1 + 0x18) = puVar7;
  func_0x0001000285a8(0x112e95f10,&UNK_10daa1850);
  func_0x000107c610f8();
  uVar9 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(lVar1 + 0x20) = puVar7;
  puVar7 = PTR_PTR_1126aa7b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x63536f54646e6573;
  func_0x000107c5fadc(0x63536f54646e6573,0xeb0000000065706f);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  uVar9 = 0x7672655370616e73;
  func_0x000107c5fadc(0x7672655370616e73,0xec00000073656369);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef35890);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f018ee0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f098660);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  uVar9 = *(undefined8 *)(lVar1 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f098680);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_a0);
  *param_1 = lVar1;
  return;
}



/* Entry: 1023f8910; end: 1023f8953;  */

void FUN_1023f8910(void)

{
  long unaff_x20;
  
  FUN_1023ff2d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 1023f8954; end: 1023f8963;  */

void FUN_1023f8954(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112e956d8,&UNK_10daa0a60);
  uVar1 = 0;
  func_0x000100360b74();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1023f8964; end: 1023f898f;  */

void FUN_1023f8964(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023f8990; end: 1023f8997;  */

void FUN_1023f8990(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105017a8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105017a8;
  return;
}



/* Entry: 1023f8998; end: 1023f8c23;  */

void FUN_1023f8998(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_1023f8d78();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10241cdf0(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x00010241cb7c();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_10241cc10();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 1023f8c24; end: 1023f8c67;  */

void FUN_1023f8c24(void)

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



/* Entry: 1023f8c68; end: 1023f8cbb;  */

void FUN_1023f8c68(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1023f8cbc; end: 1023f8cc3;  */

undefined8 FUN_1023f8cbc(void)

{
  return 0x1b;
}



/* Entry: 1023f8cc4; end: 1023f8d47;  */

void FUN_1023f8cc4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1023f8dc8,param_2,FUN_1023f8dcc,param_2,0x1023f8df4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1023f8d48; end: 1023f8d77;  */

undefined ** FUN_1023f8d48(void)

{
  return &PTR_DAT_113034c70;
}



/* Entry: 1023f8d78; end: 1023f8d97;  */

void FUN_1023f8d78(void)

{
  func_0x000107c61168(&PTR_PTR_112e95820);
  return;
}



/* Entry: 1023f8d98; end: 1023f8dcb;  */

undefined1  [16] FUN_1023f8d98(void)

{
  return ZEXT816(0x110501bd0);
}



/* Entry: 1023f8dcc; end: 1023f8e1f;  */

void FUN_1023f8dcc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1023f8e20; end: 1023f8fc7;  */

void FUN_1023f8e20(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1023f9270();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_1024250d8(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_102424b10();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_102424b24();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1023f8fc8; end: 1023f9113;  */

long FUN_1023f8fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_1024250d8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102424b10();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_102424b24();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 1023f9114; end: 1023f915f;  */

void FUN_1023f9114(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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



/* Entry: 1023f9160; end: 1023f91b3;  */

void FUN_1023f9160(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1023f91b4; end: 1023f91bb;  */

undefined8 FUN_1023f91b4(void)

{
  return 0x1b;
}



/* Entry: 1023f91bc; end: 1023f923f;  */

void FUN_1023f91bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1023f92c0,param_2,FUN_1023f92c4,param_2,0x1023f92ec,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1023f9240; end: 1023f926f;  */

undefined ** FUN_1023f9240(void)

{
  return &PTR_DAT_113034c70;
}



/* Entry: 1023f9270; end: 1023f928f;  */

void FUN_1023f9270(void)

{
  func_0x000107c61168(&PTR_PTR_112e95908);
  return;
}



/* Entry: 1023f9290; end: 1023f92c3;  */

undefined1  [16] FUN_1023f9290(void)

{
  return ZEXT816(0x110501c70);
}



/* Entry: 1023f92c4; end: 1023f9317;  */

void FUN_1023f92c4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1023f9318; end: 1023f94b3;  */

void FUN_1023f9318(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1023f95f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_10241fda4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_10241fc18();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10241fc24();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1023f94b4; end: 1023f94e7;  */

void FUN_1023f94b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023f94e8; end: 1023f953b;  */

void FUN_1023f94e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1023f953c; end: 1023f9543;  */

undefined8 FUN_1023f953c(void)

{
  return 0x1b;
}



/* Entry: 1023f9544; end: 1023f95c7;  */

void FUN_1023f9544(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1023f9648,param_2,FUN_1023f964c,param_2,0x1023f9674,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1023f95c8; end: 1023f95f7;  */

undefined ** FUN_1023f95c8(void)

{
  return &PTR_DAT_113034c70;
}



/* Entry: 1023f95f8; end: 1023f9617;  */

void FUN_1023f95f8(void)

{
  func_0x000107c61168(&PTR_PTR_112e959f8);
  return;
}



/* Entry: 1023f9618; end: 1023f964b;  */

undefined1  [16] FUN_1023f9618(void)

{
  return ZEXT816(0x110501d10);
}



/* Entry: 1023f964c; end: 1023f969f;  */

void FUN_1023f964c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1023f96a0; end: 1023f9d13;  */

void FUN_1023f96a0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  FUN_1023f9eb8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  func_0x0001000285a8(0x112e84d98,&UNK_10da956b0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x18) = puVar10;
  func_0x0001000285a8(0x112e4f090,&UNK_10dbc4da0);
  func_0x000107c610f8();
  uVar9 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x20) = puVar11;
  func_0x000102423088();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = uVar9;
  FUN_102422a04(uVar9,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,puVar10,puVar11);
  *(undefined8 *)(param_2 + 0x10) = uVar12;
  uVar13 = uVar12;
  func_0x000107c6157c();
  FUN_102422a2c();
  func_0x000107c61574(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_c0);
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 1023f9d14; end: 1023f9da7;  */

void FUN_1023f9d14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 1023f9da8; end: 1023f9dfb;  */

void FUN_1023f9da8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1023f9dfc; end: 1023f9e03;  */

undefined8 FUN_1023f9dfc(void)

{
  return 0x1b;
}



/* Entry: 1023f9e04; end: 1023f9e87;  */

void FUN_1023f9e04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1023f9f08,param_2,FUN_1023f9f0c,param_2,0x1023f9f34,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1023f9e88; end: 1023f9eb7;  */

undefined ** FUN_1023f9e88(void)

{
  return &PTR_DAT_113034c70;
}


