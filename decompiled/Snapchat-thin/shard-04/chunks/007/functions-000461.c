/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037bda04; end: 1037bda37; -[SCPayToPromoteServicesSaberServiceProvider provide] */

void FUN_1037bda04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037bd7f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037bda38; end: 1037bda6b; -[SCPayToPromoteServicesSaberServiceProvider __safeProvide] */

void FUN_1037bda38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037bd91c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037bda6c; end: 1037bdaaf; -[SCPayToPromoteServicesSaberServiceProvider end] */

void FUN_1037bda6c(undefined8 param_1)

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



/* Entry: 1037bdab0; end: 1037bdc47;  */

void FUN_1037bdab0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e981e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f167e20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdclUserNavigationScopeGraphBridge/SCPayToPromoteServicesSaberServiceProvider.swift"
                            ,0x53,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037bdc48);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52468();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037bdc48; end: 1037bdcf3; -[SCPayToPromoteServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037bdc48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037bdab0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037bdcf4; end: 1037bdd67; -[SCPayToPromoteServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bdcf4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f94ca0,0);
  func_0x000107c61614(param_1 + _DAT_112f94ca8,0);
  *(undefined8 *)(param_1 + _DAT_112f94cb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037bdd68; end: 1037bdd9b;  */

void FUN_1037bdd68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037bdd9c; end: 1037bdde3; -[SCPayToPromoteServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bdd9c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f94ca0);
  func_0x000107c61610(param_1 + _DAT_112f94ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f94cb0));
  return;
}



/* Entry: 1037bdde4; end: 1037bde03;  */

void FUN_1037bdde4(void)

{
  func_0x000107c61168(&PTR_PTR_112f94cf8);
  return;
}



/* Entry: 1037bde04; end: 1037bde0f; -[SCSCDeepLinkServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bde04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f94d60;
  func_0x000107c61428(param_1 + _DAT_112f94d60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037bde10; end: 1037bde1b; -[SCSCDeepLinkServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bde10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f94d60;
  func_0x000107c61428(param_1 + _DAT_112f94d60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037bde1c; end: 1037bde27; -[SCSCDeepLinkServicesSaberServiceProvider adclUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bde1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f94d68;
  func_0x000107c61428(param_1 + _DAT_112f94d68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037bde28; end: 1037bde6b;  */

void FUN_1037bde28(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037bde6c; end: 1037bde77; -[SCSCDeepLinkServicesSaberServiceProvider setAdclUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bde6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f94d68;
  func_0x000107c61428(param_1 + _DAT_112f94d68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037bde78; end: 1037bdecb;  */

void FUN_1037bde78(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037bdecc; end: 1037be0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037bdecc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d578();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037bb120();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f94848);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f94d70);
      *(long *)(unaff_x20 + _DAT_112f94d70) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "AdclUserNavigationScopeGraphBridge/SCSCDeepLinkServicesSaberServiceProvider.swift"
                      ,0x51,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037bdff8);
  (*pcVar1)();
}



/* Entry: 1037be0e0; end: 1037be113; -[SCSCDeepLinkServicesSaberServiceProvider provide] */

void FUN_1037be0e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037bdecc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037be114; end: 1037be147; -[SCSCDeepLinkServicesSaberServiceProvider __safeProvide] */

void FUN_1037be114(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037bdff8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037be148; end: 1037be18b; -[SCSCDeepLinkServicesSaberServiceProvider end] */

void FUN_1037be148(undefined8 param_1)

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



/* Entry: 1037be18c; end: 1037be323;  */

void FUN_1037be18c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e981e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f167e20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdclUserNavigationScopeGraphBridge/SCSCDeepLinkServicesSaberServiceProvider.swift"
                            ,0x51,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037be324);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52468();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037be324; end: 1037be3cf; -[SCSCDeepLinkServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037be324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037be18c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037be3d0; end: 1037be443; -[SCSCDeepLinkServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be3d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f94d60,0);
  func_0x000107c61614(param_1 + _DAT_112f94d68,0);
  *(undefined8 *)(param_1 + _DAT_112f94d70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037be444; end: 1037be477;  */

void FUN_1037be444(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037be478; end: 1037be4bf; -[SCSCDeepLinkServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be478(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f94d60);
  func_0x000107c61610(param_1 + _DAT_112f94d68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f94d70));
  return;
}



/* Entry: 1037be4c0; end: 1037be4df;  */

void FUN_1037be4c0(void)

{
  func_0x000107c61168(&PTR_PTR_112f94db8);
  return;
}



/* Entry: 1037be4e0; end: 1037be4f7;  */

bool FUN_1037be4e0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1037be4f8; end: 1037be537;  */

void FUN_1037be4f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f94e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0dd00;
  func_0x000107c61520(&UNK_10dc0dd00,&UNK_110695968);
  puRam0000000112f94e20 = puVar1;
  return;
}



/* Entry: 1037be538; end: 1037be5e3;  */

void FUN_1037be538(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037be5e4; end: 1037be61b;  */

void FUN_1037be5e4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1037be61c; end: 1037be62b; -[AdDiscoverSharingServices sharingPresenterProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be61c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f94e28));
  return;
}



/* Entry: 1037be62c; end: 1037be677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be62c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f94e28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037be678; end: 1037be6d3; -[AdDiscoverSharingServices init] */

void FUN_1037be678(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdDiscoverSharingServices.AdDiscoverSharingServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037be6a4);
  (*pcVar1)();
}



/* Entry: 1037be6d4; end: 1037be6e3; -[AdDiscoverSharingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be6d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f94e28));
  return;
}



/* Entry: 1037be6e4; end: 1037be6f3; -[_TtC21AdOperaParserServices21AdOperaParserServices adsOperaParser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be6e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f94e58));
  return;
}



/* Entry: 1037be6f4; end: 1037be73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be6f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f94e58) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037be740; end: 1037be79b; -[_TtC21AdOperaParserServices21AdOperaParserServices init] */

void FUN_1037be740(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaParserServices.AdOperaParserServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037be76c);
  (*pcVar1)();
}



/* Entry: 1037be79c; end: 1037be7ab; -[_TtC21AdOperaParserServices21AdOperaParserServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f94e58));
  return;
}



/* Entry: 1037be7ac; end: 1037be7bb; -[SCAdResponseOperaParserMetadataV2 adSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be7ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f94e88));
  return;
}



/* Entry: 1037be7bc; end: 1037be7cb; -[SCAdResponseOperaParserMetadataV2 adResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be7bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f94e90));
  return;
}



/* Entry: 1037be7cc; end: 1037be7db; -[SCAdResponseOperaParserMetadataV2 adPod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f94e98));
  return;
}



/* Entry: 1037be7dc; end: 1037be7fb; -[SCAdResponseOperaParserMetadataV2 mediaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be7dc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f94ea0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037be7fc; end: 1037be807; -[SCAdResponseOperaParserMetadataV2 commonBasePageProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be7fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f94ea8);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037be808; end: 1037be817; -[SCAdResponseOperaParserMetadataV2 contentDeliveryMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f94eb0));
  return;
}



/* Entry: 1037be818; end: 1037be827; -[SCAdResponseOperaParserMetadataV2 isAdContentLooping] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1037be818(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f94eb8);
}



/* Entry: 1037be828; end: 1037be837; -[SCAdResponseOperaParserMetadataV2 webViewAdPrefetchHints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f94ec0));
  return;
}



/* Entry: 1037be838; end: 1037be843; -[SCAdResponseOperaParserMetadataV2 topSnapPageBaseProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be838(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f94ec8);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037be844; end: 1037be89b;  */

void FUN_1037be844(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037be89c; end: 1037be8ab; -[SCAdResponseOperaParserMetadataV2 operaNavigationStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037be89c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f94ed0);
}



/* Entry: 1037be8ac; end: 1037be8bb; -[SCAdResponseOperaParserMetadataV2 viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037be8ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f94ed8);
}



/* Entry: 1037be8bc; end: 1037be8db; -[SCAdResponseOperaParserMetadataV2 pixelServeItemSyncManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be8bc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f94ee0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037be8dc; end: 1037be8eb; -[SCAdResponseOperaParserMetadataV2 adPodManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be8dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f94ee8));
  return;
}



/* Entry: 1037be8ec; end: 1037be8f7; -[SCAdResponseOperaParserMetadataV2 contextSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be8ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f94ef0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f94ef0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037be8f8; end: 1037be903; -[SCAdResponseOperaParserMetadataV2 indexCookieName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be8f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f94ef8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f94ef8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037be904; end: 1037be94b;  */

void FUN_1037be904(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037be94c; end: 1037be95b; -[SCAdResponseOperaParserMetadataV2 expandStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037be94c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f94f00);
}



/* Entry: 1037be95c; end: 1037be96b; -[SCAdResponseOperaParserMetadataV2 verticalNavigationSwipeLeftToAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1037be95c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f94f08);
}



/* Entry: 1037be96c; end: 1037be97b; -[SCAdResponseOperaParserMetadataV2 adPlaybackConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be96c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f94f10));
  return;
}



/* Entry: 1037be97c; end: 1037be98b; -[SCAdResponseOperaParserMetadataV2 operaConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be97c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f94f18));
  return;
}



/* Entry: 1037be98c; end: 1037be9e7; -[SCAdResponseOperaParserMetadataV2 playbackSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be98c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f94f20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f94f20);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037be9e8; end: 1037bea2f; -[SCAdResponseOperaParserMetadataV2 organicEngagementFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037be9e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f94f28;
  func_0x000107c61428(param_1 + _DAT_112f94f28,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1037bea30; end: 1037bea93; -[SCAdResponseOperaParserMetadataV2 setOrganicEngagementFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bea30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f94f28;
  func_0x000107c61428(param_1 + _DAT_112f94f28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1037bea94; end: 1037beeb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bea94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f94f28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f94e88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f94e90) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f94e98) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f94ea0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f94ea8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f94eb0) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112f94eb8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f94ec0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f94ec8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f94ed0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f94ed8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f94ee0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f94ee8) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f94ef0);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f94ef8);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112f94f00) = param_18;
  *(undefined1 *)(unaff_x20 + _DAT_112f94f08) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112f94f10) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112f94f18) = param_22;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f94f20);
  *puVar1 = param_23;
  puVar1[1] = param_24;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037beeb8; end: 1037bf0b3; -[SCAdResponseOperaParserMetadataV2 initWithAdSnap:adResponse:adPod:mediaManager:commonBasePageProperties:contentDeliveryMedia:isAdContentLooping:webViewAdPrefetchHints:topSnapPageBaseProperties:operaNavigationStyle:viewLocation:pixelServeItemSyncManager:adPodManager:contextSessionId:indexCookieName:expandStatus:verticalNavigationSwipeLeftToAttachment:adPlaybackConfig:operaConfigProvider:playbackSessionId:] */

void FUN_1037beeb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long in_stack_00000068;
  
  puVar1 = PTR___sypN_11034f1a8;
  puVar3 = PTR___ss11AnyHashableVSHsWP_11034e450;
  puVar2 = PTR___ss11AnyHashableVN_11034e448;
  func_0x000107c5f9e8(param_7,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c5f9e8(param_12,puVar2,puVar1 + 8,puVar3);
  func_0x000107c5faec();
  puVar3 = puVar2;
  func_0x000107c5faec();
  if (in_stack_00000068 != 0) {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  func_0x000107c615f0(param_15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001037beca4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11,param_12,
                      param_13,param_14,param_15,param_16,param_17,puVar2,param_18,puVar3,param_19,
                      param_20);
  return;
}



/* Entry: 1037bf0b4; end: 1037bf113; -[SCAdResponseOperaParserMetadataV2 init] */

void FUN_1037bf0b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaParserServices.AdResponseOperaParserMetadataV2",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037bf0e0);
  (*pcVar1)();
}



/* Entry: 1037bf114; end: 1037bf237; -[SCAdResponseOperaParserMetadataV2 .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037bf130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037bf150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037bf180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037bf1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037bf1f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037bf1c4) */
/* WARNING: Removing unreachable block (ram,0x0001037bf184) */
/* WARNING: Removing unreachable block (ram,0x0001037bf154) */
/* WARNING: Removing unreachable block (ram,0x0001037bf134) */
/* WARNING: Removing unreachable block (ram,0x0001037bf1fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bf114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f94e88));
  return;
}



/* Entry: 1037bf238; end: 1037bf257;  */

void FUN_1037bf238(void)

{
  func_0x000107c61168(&PTR_PTR_1128ebe00);
  return;
}



/* Entry: 1037bf258; end: 1037bf293; -[SCAdOrganicEngagementPrefetchPolicy init] */

void FUN_1037bf258(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037bf294; end: 1037bf2fb; +[SCAdOrganicEngagementPrefetchPolicy prefetchWithAdResponse:configProvider:fetcher:] */

/* WARNING: Possible PIC construction at 0x0001037bf2e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037bf2e8) */

void FUN_1037bf294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  FUN_1037bf330(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
  return;
}



/* Entry: 1037bf2fc; end: 1037bf32f;  */

void FUN_1037bf2fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037bf330; end: 1037bf65b;  */

/* WARNING: Possible PIC construction at 0x0001037bf5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037bf598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037bf59c) */
/* WARNING: Removing unreachable block (ram,0x0001037bf5cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bf330(long param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar4;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return;
  }
  puVar9 = *(undefined **)(param_1 + _DAT_113815208);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar9 != (undefined *)0x0) {
    puVar6 = puVar9;
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar8 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61434(puVar9);
  }
  else {
    if ((long)puVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037bf65c);
      (*pcVar1)();
    }
    func_0x000107c615f0(param_2);
    func_0x000107c615f0(param_3);
    func_0x000107c61434(puVar9);
    puVar9 = (undefined *)0x0;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        puVar3 = *(undefined **)(puVar6 + (long)puVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar9;
        func_0x000100e471e4(puVar9,puVar6);
      }
      puVar10 = *(undefined **)((long)(puVar3 + _DAT_11308f2b8) + 8);
      if (puVar10 != (undefined *)0x0) {
        uVar11 = *(ulong *)(puVar3 + _DAT_11308f2b8);
        uVar4 = uVar11 & 0xffffffffffff;
        if (((ulong)puVar10 & 0x2000000000000000) != 0) {
          uVar4 = (ulong)puVar10 >> 0x38 & 0xf;
        }
        if (uVar4 != 0) {
          if (((*(long *)(puVar3 + _DAT_11308f208) == 0) ||
              (lVar7 = *(long *)(*(long *)(puVar3 + _DAT_11308f208) + _DAT_113091068), lVar7 == 0))
             || (*(char *)(lVar7 + _DAT_113090640) != '\x01')) {
            if (puVar3[_DAT_11308f210] != '\x01') goto LAB_1037bf3f4;
            func_0x000107c61434(puVar10);
            uVar2 = 0;
LAB_1037bf514:
            uVar5 = 0xd000000000000023;
            func_0x000107c5fadc(0xd000000000000023,0x800000010f168130);
            uVar4 = param_2;
            func_0x000107c3ebdc();
            func_0x000107c61170(uVar5);
            if ((uVar4 & 1) == 0) {
              uVar5 = 0xd000000000000022;
              func_0x000107c5fadc(0xd000000000000022,0x800000010f168160);
              func_0x000107c3ebdc();
              func_0x000107c61170(uVar5);
              if (((uVar2 | (uint)param_2) & 1) == 0) goto LAB_1037bf5bc;
            }
          }
          else {
            func_0x000107c61434(puVar10);
            uVar5 = 0xd000000000000025;
            func_0x000107c5fadc(0xd000000000000025,0x800000010f168190);
            uVar4 = param_2;
            func_0x000107c3ebdc();
            uVar2 = (uint)uVar4;
            func_0x000107c61170(uVar5);
            if ((puVar3[_DAT_11308f210] & 1) != 0) goto LAB_1037bf514;
            if ((uVar4 & 1) == 0) {
LAB_1037bf5bc:
              func_0x000107c61170(puVar3);
              puVar6 = puVar10;
              goto code_r0x000107c6142c;
            }
          }
          func_0x000107c5fadc(uVar11,puVar10);
          puVar6 = puVar10;
          goto code_r0x000107c6142c;
        }
      }
LAB_1037bf3f4:
      func_0x000107c61170();
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar9);
    func_0x000107c615e8(param_3);
    func_0x000107c615e8(param_2);
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar6);
  return;
}



/* Entry: 1037bf65c; end: 1037bf67b;  */

void FUN_1037bf65c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ebf60);
  return;
}



/* Entry: 1037bf67c; end: 1037bf6af; -[AdOrganicEngagementServices organicEngagementFetcher] */

void FUN_1037bf67c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037bf6b0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037bf6b0; end: 1037bf723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037bf6b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f94f88;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f94f88);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001003a5b88(*(undefined8 *)(unaff_x20 + _DAT_112f94f80));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1037bf724; end: 1037bf7af; -[AdOrganicEngagementServices setOrganicEngagementFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bf724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f94f88);
  *(undefined8 *)(param_1 + _DAT_112f94f88) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1037bf7b0; end: 1037bf80f; -[AdOrganicEngagementServices init] */

void FUN_1037bf7b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOrganicEngagementServices.AdOrganicEngagementServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037bf7dc);
  (*pcVar1)();
}



/* Entry: 1037bf810; end: 1037bf847; -[AdOrganicEngagementServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bf810(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f94f80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f94f88));
  return;
}



/* Entry: 1037bf848; end: 1037bf8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037bf848(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100acb764();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f94fb8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f94fc0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037bf8d0);
  (*pcVar1)();
}



/* Entry: 1037bf8d0; end: 1037bf92f; -[_TtC33AdlUserNavigationScopeGraphBridge48AdlUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037bf8d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdlUserNavigationScopeGraphBridge.AdlUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037bf8fc);
  (*pcVar1)();
}



/* Entry: 1037bf930; end: 1037bf967; -[_TtC33AdlUserNavigationScopeGraphBridge48AdlUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037bf94c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037bf950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bf930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f94fb8));
  return;
}



/* Entry: 1037bf968; end: 1037bf98f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bf968(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f94fc0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f94fb8));
  return;
}



/* Entry: 1037bf990; end: 1037bfa2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037bf990(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f952e0);
  *(undefined8 *)(unaff_x20 + _DAT_112f94ff0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f94ff8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1037bfa2c; end: 1037bfa8b; -[_TtC33AdlUserNavigationScopeGraphBridge38CallUILaunchingServicesSaberEntryPoint init] */

void FUN_1037bfa2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdlUserNavigationScopeGraphBridge.CallUILaunchingServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037bfa58);
  (*pcVar1)();
}



/* Entry: 1037bfa8c; end: 1037bfb1f; -[_TtC33AdlUserNavigationScopeGraphBridge38CallUILaunchingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bfa8c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f94ff0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f94ff8));
  return;
}



/* Entry: 1037bfb20; end: 1037bfb27;  */

undefined8 FUN_1037bfb20(void)

{
  return 0;
}



/* Entry: 1037bfb28; end: 1037bfbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037bfb28(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f952f8);
  *(undefined8 *)(unaff_x20 + _DAT_112f95028) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f95030) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1037bfbc4; end: 1037bfc23; -[_TtC33AdlUserNavigationScopeGraphBridge52SCCustomStatusBarStyleContextServicesSaberEntryPoint init] */

void FUN_1037bfbc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdlUserNavigationScopeGraphBridge.SCCustomStatusBarStyleContextServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037bfbf0);
  (*pcVar1)();
}



/* Entry: 1037bfc24; end: 1037bfcb7; -[_TtC33AdlUserNavigationScopeGraphBridge52SCCustomStatusBarStyleContextServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037bfc24(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f95028));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95030));
  return;
}



/* Entry: 1037bfcb8; end: 1037bfcbf;  */

undefined8 FUN_1037bfcb8(void)

{
  return 0;
}



/* Entry: 1037bfcc0; end: 1037bfd23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037bfcc0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f95300);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037bfd24; end: 1037bfd2b;  */

void FUN_1037bfd24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037bfd2c; end: 1037bfdcb;  */

void FUN_1037bfd2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037bfdcc; end: 1037bfdeb;  */

void FUN_1037bfdcc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037bfdec; end: 1037bfe4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037bfdec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f952e8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037bfe50; end: 1037bfe57;  */

void FUN_1037bfe50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037bfe58; end: 1037bfef7;  */

void FUN_1037bfe58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037bfef8; end: 1037bff17;  */

void FUN_1037bfef8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037bff18; end: 1037bff7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037bff18(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f952f0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037bff7c; end: 1037bff83;  */

void FUN_1037bff7c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037bff84; end: 1037c0023;  */

void FUN_1037bff84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037c0024; end: 1037c0043;  */

void FUN_1037c0024(void)

{
  func_0x000100083b20();
  return;
}


