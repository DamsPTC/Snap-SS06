/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10327aa34; end: 10327aa8f; -[_TtC32SettingsDeepLinkPluginEntryPoint24SCSettingsDeepLinkPlugin init] */

void FUN_10327aa34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SettingsDeepLinkPluginEntryPoint.SCSettingsDeepLinkPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327aa60);
  (*pcVar1)();
}



/* Entry: 10327aa90; end: 10327aa9f; -[_TtC32SettingsDeepLinkPluginEntryPoint24SCSettingsDeepLinkPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327aa90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4fc90));
  return;
}



/* Entry: 10327aaa0; end: 10327aabf;  */

void FUN_10327aaa0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4a38);
  return;
}



/* Entry: 10327aac0; end: 10327ab93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327aac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f4fc90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4a280();
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    if ((int)lVar2 == 0) {
      func_0x000107c4ef74(lVar1);
    }
    else {
      func_0x000107c4ef8c();
    }
    func_0x000107c61170(param_2);
    func_0x000107c42808(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10327ab94; end: 10327ac33; -[_TtC32SettingsDeepLinkPluginEntryPoint24SCSettingsDeepLinkPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10327ab94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_10327aac0(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10327ac34; end: 10327ac3b; -[_TtC32SettingsDeepLinkPluginEntryPoint24SCSettingsDeepLinkPlugin shouldForceNavigation] */

undefined8 FUN_10327ac34(void)

{
  return 0;
}



/* Entry: 10327ac3c; end: 10327ac3f; -[_TtC32SettingsDeepLinkPluginEntryPoint24SCSettingsDeepLinkPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_10327ac3c(void)

{
  return;
}



/* Entry: 10327ac40; end: 10327ac8f; -[_TtC32SettingsDeepLinkPluginEntryPoint24SCSettingsDeepLinkPlugin identifier] */

void FUN_10327ac40(undefined8 param_1)

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



/* Entry: 10327ac90; end: 10327ac97; -[_TtC32SettingsDeepLinkPluginEntryPoint24SCSettingsDeepLinkPlugin priority] */

undefined8 FUN_10327ac90(void)

{
  return 1000;
}



/* Entry: 10327ac98; end: 10327acfb; -[_TtC32SettingsDeepLinkPluginEntryPoint24SCSettingsDeepLinkPlugin canProvideProcessorForFeature:] */

uint FUN_10327ac98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10327ad88(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 10327acfc; end: 10327ad83; -[_TtC32SettingsDeepLinkPluginEntryPoint24SCSettingsDeepLinkPlugin isValidDeepLink:] */

undefined8 FUN_10327acfc(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10327ad84; end: 10327ad87; -[_TtC32SettingsDeepLinkPluginEntryPoint24SCSettingsDeepLinkPlugin makeDeepLinkProcessor] */

void FUN_10327ad84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10327ad88; end: 10327af2f;  */

uint FUN_10327ad88(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6acd8;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_1 == ppuVar1 && param_2 == lVar3) {
LAB_10327aea8:
    uVar5 = 1;
  }
  else {
    ppuVar2 = param_1;
    lVar4 = param_2;
    func_0x000107c605b8(param_1,param_2,ppuVar1,lVar3,0);
    func_0x000107c6142c(lVar3);
    if (((ulong)ppuVar2 & 1) != 0) {
LAB_10327ade8:
      uVar5 = 1;
      goto LAB_10327aeb4;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc67f8;
    func_0x000107c5faec();
    lVar3 = lVar4;
    if (param_1 == ppuVar1 && param_2 == lVar4) goto LAB_10327aea8;
    ppuVar2 = param_1;
    lVar3 = param_2;
    func_0x000107c605b8(param_1,param_2,ppuVar1,lVar4,0);
    func_0x000107c6142c(lVar4);
    if (((ulong)ppuVar2 & 1) != 0) goto LAB_10327ade8;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc7958;
    func_0x000107c5faec();
    if (param_1 == ppuVar1 && param_2 == lVar3) goto LAB_10327aea8;
    ppuVar2 = param_1;
    lVar4 = param_2;
    func_0x000107c605b8(param_1,param_2,ppuVar1,lVar3,0);
    func_0x000107c6142c(lVar3);
    if (((ulong)ppuVar2 & 1) != 0) goto LAB_10327ade8;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f83e38;
    func_0x000107c5faec();
    if ((param_1 == ppuVar1) && (lVar3 = lVar4, param_2 == lVar4)) goto LAB_10327aea8;
    ppuVar2 = param_1;
    lVar3 = param_2;
    func_0x000107c605b8(param_1,param_2,ppuVar1,lVar4,0);
    func_0x000107c6142c(lVar4);
    if (((ulong)ppuVar2 & 1) != 0) goto LAB_10327ade8;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd96b8;
    func_0x000107c5faec();
    if ((param_1 == ppuVar1) && (param_2 == lVar3)) goto LAB_10327aea8;
    func_0x000107c605b8(param_1,param_2,ppuVar1,lVar3,0);
    uVar5 = (uint)param_1;
  }
  func_0x000107c6142c(lVar3);
LAB_10327aeb4:
  return uVar5 & 1;
}



/* Entry: 10327af30; end: 10327af7b;  */

void FUN_10327af30(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10327affc,param_1);
  return;
}



/* Entry: 10327af7c; end: 10327affb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327af7c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010451338c();
  func_0x000107c61170(uStack_38);
  lVar1 = 0;
  FUN_10327aaa0();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f4fc90) = param_2;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10327affc; end: 10327b013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327affc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010451338c();
  func_0x000107c61170(uStack_38);
  lVar1 = 0;
  FUN_10327aaa0();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f4fc90) = unaff_x20;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10327b014; end: 10327b05f;  */

void FUN_10327b014(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10327b0f0,param_1);
  return;
}



/* Entry: 10327b060; end: 10327b0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327b060(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar4 = *(undefined8 *)(lStack_38 + _DAT_112fbd3b8);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(lStack_38);
  lVar1 = 0;
  FUN_10327b178();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f4fcc0) = uVar4;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10327b0f0; end: 10327b107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327b0f0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar4 = *(undefined8 *)(lStack_38 + _DAT_112fbd3b8);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(lStack_38);
  lVar1 = 0;
  FUN_10327b178();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f4fcc0) = uVar4;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10327b108; end: 10327b167; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor init] */

void FUN_10327b108(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ThirdPartyLoginAmazonExternalLoginDeepLinkImpl.ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327b134);
  (*pcVar1)();
}



/* Entry: 10327b168; end: 10327b177; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327b168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4fcc0));
  return;
}



/* Entry: 10327b178; end: 10327b197;  */

void FUN_10327b178(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4af8);
  return;
}



/* Entry: 10327b198; end: 10327b1e7; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor identifier] */

void FUN_10327b198(undefined8 param_1)

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



/* Entry: 10327b1e8; end: 10327b1ef; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor priority] */

undefined8 FUN_10327b1e8(void)

{
  return 1000;
}



/* Entry: 10327b1f0; end: 10327b2df; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor canProvideProcessorForFeature:] */

uint FUN_10327b1f0(undefined8 param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  func_0x000107c5faec();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f840d8;
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
      goto LAB_10327b2c4;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e694b8;
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
LAB_10327b2c4:
  func_0x000107c6142c(param_2);
  return uVar5 & 1;
}



/* Entry: 10327b2e0; end: 10327b33b; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor isValidDeepLink:] */

uint FUN_10327b2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10327b3b8(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10327b33c; end: 10327b33f; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_10327b33c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10327b340; end: 10327b3a3; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10327b340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_10327b53c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10327b3a4; end: 10327b3ab; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_10327b3a4(void)

{
  return 1;
}



/* Entry: 10327b3ac; end: 10327b3b3; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor shouldSkipPrepareNavigation] */

undefined8 FUN_10327b3ac(void)

{
  return 1;
}



/* Entry: 10327b3b4; end: 10327b3b7; -[_TtC46ThirdPartyLoginAmazonExternalLoginDeepLinkImpl51ThirdPartyLoginAmazonExternalLoginDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_10327b3b4(void)

{
  return;
}



/* Entry: 10327b3b8; end: 10327b53b;  */

uint FUN_10327b3b8(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  ppuVar1 = param_1;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (ppuVar1 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f840d8);
    lVar3 = param_2;
LAB_10327b464:
    param_2 = lVar3;
    func_0x000107c6142c(param_2);
LAB_10327b46c:
    func_0x000107c42e38();
    func_0x000107c61180();
    if (param_1 == (undefined **)0x0) {
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e694b8);
      uVar5 = 0;
    }
    else {
      ppuVar1 = param_1;
      func_0x000107c5faec();
      lVar3 = param_2;
      func_0x000107c61170(param_1);
      ppuVar2 = &PTR____CFConstantStringClassReference_110e694b8;
      func_0x000107c5faec();
      if (param_2 == 0) {
        uVar5 = 0;
        param_2 = lVar3;
      }
      else {
        if ((ppuVar1 == ppuVar2) && (param_2 == lVar3)) goto LAB_10327b4ec;
        func_0x000107c605b8(ppuVar1,param_2,ppuVar2,lVar3,0);
        uVar5 = (uint)ppuVar1;
        func_0x000107c6142c(param_2);
        param_2 = lVar3;
      }
    }
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x000107c5faec();
    lVar3 = param_2;
    func_0x000107c61170(ppuVar1);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f840d8;
    func_0x000107c5faec();
    if (param_2 == 0) goto LAB_10327b464;
    if (ppuVar2 != ppuVar1 || param_2 != lVar3) {
      lVar4 = param_2;
      func_0x000107c605b8(ppuVar2,param_2,ppuVar1,lVar3,0);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar3);
      param_2 = lVar4;
      if (((ulong)ppuVar2 & 1) != 0) {
        uVar5 = 1;
        goto LAB_10327b528;
      }
      goto LAB_10327b46c;
    }
LAB_10327b4ec:
    func_0x000107c6142c(param_2);
    uVar5 = 1;
    param_2 = lVar3;
  }
  func_0x000107c6142c(param_2);
LAB_10327b528:
  return uVar5 & 1;
}



/* Entry: 10327b53c; end: 10327bce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327b53c(undefined **param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_88;
  undefined8 uStack_80;
  
  uVar6 = 0;
  uVar10 = 0;
  uVar12 = 0;
  ppuVar3 = param_1;
  func_0x000107c4e434(param_1,param_2,1);
  func_0x000107c61180();
  if (ppuVar3 == (undefined **)0x0) {
    return;
  }
  ppuVar2 = ppuVar3;
  func_0x000107c5faec();
  lVar7 = param_2;
  func_0x000107c61170(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e694b8;
  func_0x000107c5faec();
  if (ppuVar2 == ppuVar3 && param_2 == lVar7) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar7);
  }
  else {
    func_0x000107c605b8(ppuVar2,param_2,ppuVar3,lVar7,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar7);
    if (((ulong)ppuVar2 & 1) == 0) {
      return;
    }
  }
  puVar4 = PTR_PTR_1126a6be8;
  func_0x000107c610f8(PTR_PTR_1126a6be8);
  func_0x000107c453e4();
  func_0x000106a5a238();
  ppuVar3 = param_1;
  func_0x000107c4f778();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  ppuVar2 = ppuVar3;
  func_0x000107c5f9e8();
  func_0x000107c61170(ppuVar3);
  uStack_b0 = 0x726f727265;
  uStack_a8 = 0xe500000000000000;
  puVar13 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&lStack_88,&uStack_b0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (ppuVar2[2] == (undefined *)0x0) {
LAB_10327b6c0:
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c61434(ppuVar2);
    plVar5 = &lStack_88;
    func_0x000100df95d0(plVar5);
    if (((ulong)puVar13 & 1) == 0) {
      func_0x000107c6142c(ppuVar2);
      goto LAB_10327b6c0;
    }
    func_0x0001000bb420(ppuVar2[7] + (long)plVar5 * 0x20,&uStack_b0);
    func_0x000107c6142c(ppuVar2);
  }
  func_0x000107c6142c(ppuVar2);
  func_0x0001007bbff0(&lStack_88);
  lVar7 = lStack_98;
  func_0x00010006e7f4(&uStack_b0);
  if (lVar7 == 0) {
    ppuVar3 = param_1;
    func_0x000107c4f778();
    func_0x000107c61180();
    ppuVar2 = ppuVar3;
    func_0x000107c5f9e8();
    func_0x000107c61170(ppuVar3);
    uStack_b0 = 0x65646f63;
    uStack_a8 = 0xe400000000000000;
    puVar13 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&lStack_88,&uStack_b0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (ppuVar2[2] == (undefined *)0x0) {
LAB_10327b78c:
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x000107c61434(ppuVar2);
      plVar5 = &lStack_88;
      func_0x000100df95d0(plVar5);
      if (((ulong)puVar13 & 1) == 0) {
        func_0x000107c6142c(ppuVar2);
        goto LAB_10327b78c;
      }
      func_0x0001000bb420(ppuVar2[7] + (long)plVar5 * 0x20,&uStack_b0);
      func_0x000107c6142c(ppuVar2);
    }
    func_0x000107c6142c(ppuVar2);
    func_0x0001007bbff0(&lStack_88);
    lVar7 = lStack_98;
    func_0x00010006e7f4(&uStack_b0);
    if (lVar7 != 0) goto LAB_10327b7b4;
    func_0x0001000d224c(&lStack_88);
  }
  else {
LAB_10327b7b4:
    ppuVar3 = param_1;
    func_0x000107c4f778();
    func_0x000107c61180();
    ppuVar2 = ppuVar3;
    func_0x000107c5f9e8();
    func_0x000107c61170(ppuVar3);
    lStack_c0 = 0x726f727265;
    uStack_b8 = 0xe500000000000000;
    puVar13 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&lStack_88,&lStack_c0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (ppuVar2[2] == (undefined *)0x0) {
LAB_10327b850:
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x000107c61434(ppuVar2);
      plVar5 = &lStack_88;
      func_0x000100df95d0(plVar5);
      if (((ulong)puVar13 & 1) == 0) {
        func_0x000107c6142c(ppuVar2);
        goto LAB_10327b850;
      }
      func_0x0001000bb420(ppuVar2[7] + (long)plVar5 * 0x20,&uStack_b0);
      func_0x000107c6142c(ppuVar2);
    }
    func_0x000107c6142c(ppuVar2);
    func_0x0001007bbff0(&lStack_88);
    if (lStack_98 != 0) {
      func_0x000107c6147c(&lStack_c0,&uStack_b0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar8 = uStack_b8;
      if ((uVar6 & 1) == 0) goto LAB_10327b914;
      lVar7 = lStack_c0;
      uVar14 = uStack_b8;
      func_0x000107c5fb1c();
      func_0x000107c6142c(uVar8);
      uStack_b0 = 0x645f737365636361;
      uStack_a8 = 0xed00006465696e65;
      lStack_88 = lVar7;
      uStack_80 = uVar14;
      func_0x000100e8b654();
      puVar9 = &uStack_b0;
      func_0x000107c6022c(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar8,uVar8);
      func_0x000107c6142c(uVar14);
      if (((ulong)puVar9 & 1) == 0) goto LAB_10327b914;
      goto LAB_10327bc68;
    }
    func_0x00010006e7f4(&uStack_b0);
LAB_10327b914:
    ppuVar3 = param_1;
    func_0x000107c4f778();
    func_0x000107c61180();
    ppuVar2 = ppuVar3;
    func_0x000107c5f9e8();
    func_0x000107c61170(ppuVar3);
    lStack_c0 = 0x726f727265;
    uStack_b8 = 0xe500000000000000;
    puVar13 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&lStack_88,&lStack_c0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (ppuVar2[2] == (undefined *)0x0) {
LAB_10327b9b0:
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x000107c61434(ppuVar2);
      plVar5 = &lStack_88;
      func_0x000100df95d0(plVar5);
      if (((ulong)puVar13 & 1) == 0) {
        func_0x000107c6142c(ppuVar2);
        goto LAB_10327b9b0;
      }
      func_0x0001000bb420(ppuVar2[7] + (long)plVar5 * 0x20,&uStack_b0);
      func_0x000107c6142c(ppuVar2);
    }
    func_0x000107c6142c(ppuVar2);
    func_0x0001007bbff0(&lStack_88);
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_b0);
    }
    else {
      func_0x000107c6147c(&lStack_c0,&uStack_b0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar8 = uStack_b8;
      lVar7 = lStack_c0;
      if ((uVar10 & 1) != 0) {
        lVar11 = lStack_c0;
        uVar14 = uStack_b8;
        func_0x000107c5fb1c();
        uStack_b0 = 0x6e61635f72657375;
        uStack_a8 = 0xee0064656c6c6563;
        lStack_88 = lVar11;
        uStack_80 = uVar14;
        func_0x000100e8b654();
        puVar9 = &uStack_b0;
        func_0x000107c6022c(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar11,lVar11);
        func_0x000107c6142c(uVar14);
        if (((ulong)puVar9 & 1) == 0) {
          uVar14 = uVar8;
          func_0x000107c5fb1c();
          func_0x000107c6142c(uVar8);
          uStack_b0 = 0x636e616372657375;
          uStack_a8 = 0xed000064656c6c65;
          puVar9 = &uStack_b0;
          lStack_88 = lVar7;
          uStack_80 = uVar14;
          func_0x000107c6022c(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar11,lVar11);
          func_0x000107c6142c(uVar14);
          if (((ulong)puVar9 & 1) == 0) goto LAB_10327ba78;
        }
        else {
          func_0x000107c6142c(uVar8);
        }
LAB_10327bc68:
        func_0x0001000d224c(&lStack_88);
        goto LAB_10327bcb4;
      }
    }
LAB_10327ba78:
    func_0x000107c4f778();
    func_0x000107c61180();
    ppuVar3 = param_1;
    func_0x000107c5f9e8();
    func_0x000107c61170(param_1);
    lStack_c0 = 0x65646f63;
    uStack_b8 = 0xe400000000000000;
    puVar13 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&lStack_88,&lStack_c0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (ppuVar3[2] == (undefined *)0x0) {
LAB_10327bb1c:
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x000107c61434(ppuVar3);
      plVar5 = &lStack_88;
      func_0x000100df95d0(plVar5);
      if (((ulong)puVar13 & 1) == 0) {
        func_0x000107c6142c(ppuVar3);
        goto LAB_10327bb1c;
      }
      func_0x0001000bb420(ppuVar3[7] + (long)plVar5 * 0x20,&uStack_b0);
      func_0x000107c6142c(ppuVar3);
    }
    func_0x000107c6142c(ppuVar3);
    func_0x0001007bbff0(&lStack_88);
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_b0);
    }
    else {
      func_0x000107c6147c(&lStack_c0,&uStack_b0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar8 = uStack_b8;
      lVar7 = lStack_c0;
      if ((uVar12 & 1) != 0) {
        lVar11 = lStack_c0;
        func_0x000107c5fb5c(lStack_c0,uStack_b8);
        if (0 < lVar11) {
          func_0x0001000d224c(&lStack_88);
          lVar11 = lStack_88;
          func_0x000107c5fadc(lVar7,uVar8);
          func_0x000107c6142c(uVar8);
          func_0x000107c40a7c(lVar11);
          func_0x000107c615e8(lVar11);
          func_0x000107c61170(lVar7);
          goto LAB_10327bcc0;
        }
        func_0x000107c6142c(uVar8);
      }
    }
    func_0x0001000d224c(&lStack_88);
  }
LAB_10327bcb4:
  lVar7 = lStack_88;
  func_0x000107c42d64(lStack_88);
  func_0x000107c615e8(lVar7);
LAB_10327bcc0:
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10327bce8; end: 10327bdef;  */

long FUN_10327bce8(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  if (param_1 == '\0') {
    puVar4 = auStack_130;
    uVar5 = 0xd000000000000033;
    pcVar6 = "avigation delegate.";
  }
  else {
    puVar4 = auStack_e0;
    uVar5 = 0xd00000000000001a;
    pcVar6 = "Failed to launch page.";
    if (param_1 != '\x01') {
      puVar4 = auStack_90;
      uVar5 = 0xd000000000000043;
      pcVar6 = "presentSearch(_:)";
    }
  }
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar1 + 0x28) = puVar4;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(ulong *)(lVar1 + 0x38) = (ulong)pcVar6 | 0x8000000000000000;
  lVar3 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  func_0x000100f15a0c((undefined8 *)(lVar1 + 0x20));
  return lVar3;
}



/* Entry: 10327bdf0; end: 10327be03;  */

bool FUN_10327bdf0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10327be04; end: 10327beaf;  */

void FUN_10327be04(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10327beb0; end: 10327bed3;  */

void FUN_10327beb0(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10327bed4; end: 10327bf07;  */

undefined1  [16] FUN_10327bed4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = PTR_DAT_112f4fd70;
  auVar1._0_8_ = uRam0000000112f4fd68;
  func_0x000107c61434(PTR_DAT_112f4fd70);
  return auVar1;
}



/* Entry: 10327bf08; end: 10327bf17;  */

undefined1 FUN_10327bf08(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 10327bf18; end: 10327bf3f;  */

void FUN_10327bf18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010327d0f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 10327bf40; end: 10327bf87;  */

void FUN_10327bf40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010327d0f8();
  uVar2 = uVar1;
  func_0x00010327d138();
  uVar3 = uVar2;
  func_0x000100e2203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_110351338
  )(param_1,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 10327bf88; end: 10327bf8f;  */

void FUN_10327bf88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 10327bf90; end: 10327bff7; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327bf90(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f4fcf0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10327bff8; end: 10327c05f; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor setIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327bff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f4fcf0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 10327c060; end: 10327c0a3; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor priority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10327c060(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4fcf8;
  func_0x000107c61428(param_1 + _DAT_112f4fcf8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10327c0a4; end: 10327c0f3; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor setPriority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327c0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4fcf8;
  func_0x000107c61428(param_1 + _DAT_112f4fcf8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10327c0f4; end: 10327c153; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor init] */

void FUN_10327c0f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchDeepLink.SearchDeepLinkProcessor",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327c120);
  (*pcVar1)();
}



/* Entry: 10327c154; end: 10327c1bf; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10327c154(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f4fcf0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4fd00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4fd10));
  func_0x000107c61610(param_1 + _DAT_112f4fd18);
  param_1 = param_1 + _DAT_112f4fd08;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10327c1c0; end: 10327c247; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor canProvideProcessorForFeature:] */

uint FUN_10327c1c0(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1abf8;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 10327c248; end: 10327c30f; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor isValidDeepLink:] */

uint FUN_10327c248(undefined8 param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  uint uVar4;
  
  func_0x000107c615f0(param_3);
  ppuVar2 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
    func_0x000107c615e8(param_3);
    uVar4 = 0;
  }
  else {
    ppuVar1 = ppuVar2;
    func_0x000107c5faec();
    lVar3 = param_2;
    func_0x000107c61170(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e1abf8;
    func_0x000107c5faec();
    if (ppuVar1 == ppuVar2 && param_2 == lVar3) {
      uVar4 = 1;
    }
    else {
      func_0x000107c605b8(ppuVar1,param_2,ppuVar2,lVar3,0);
      uVar4 = (uint)ppuVar1;
    }
    func_0x000107c6142c(lVar3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(param_2);
  }
  return uVar4 & 1;
}



/* Entry: 10327c310; end: 10327c313; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_10327c310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10327c314; end: 10327c43f;  */

/* WARNING: Possible PIC construction at 0x00010327c388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327c3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327c3fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010327c38c) */
/* WARNING: Removing unreachable block (ram,0x00010327c400) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327c314(undefined1 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112f4fd08;
  puVar2 = (undefined1 *)(unaff_x20 + _DAT_112f4fd08);
  func_0x000107c61618();
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(unaff_x20 + lVar1);
    func_0x000107c61618();
    if (puVar2 == (undefined1 *)0x0) {
      return;
    }
    FUN_10327cf0c();
    puVar3 = &UNK_11062fdd0;
    func_0x000107c613f8(&UNK_11062fdd0,puVar2,0,0);
    *puVar2 = param_1;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    func_0x000107c5ed2c(puVar4);
  }
  else {
    FUN_10327cf0c();
    puVar3 = &UNK_11062fdd0;
    func_0x000107c613f8(&UNK_11062fdd0,puVar2,0,0);
    *puVar2 = param_1;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    func_0x000107c5ed2c(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10327c440; end: 10327c4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327c440(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112f4fd08;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4bb48();
      func_0x000107c615e8(lVar1);
    }
    FUN_10327ccdc(param_2,param_3);
    FUN_10327c4e8();
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_3);
  }
  return;
}



/* Entry: 10327c4e8; end: 10327c64b;  */

/* WARNING: Possible PIC construction at 0x00010327c534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327c388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327c3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327c3fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010327c38c) */
/* WARNING: Removing unreachable block (ram,0x00010327c538) */
/* WARNING: Removing unreachable block (ram,0x00010327c53c) */
/* WARNING: Removing unreachable block (ram,0x00010327c400) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327c4e8(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar4 = (undefined *)(unaff_x20 + _DAT_112f4fd18);
  func_0x000107c61618();
  lVar1 = _DAT_112f4fd08;
  if (puVar4 == (undefined *)0x0) {
    puVar2 = (undefined1 *)(unaff_x20 + _DAT_112f4fd08);
    func_0x000107c61618();
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(unaff_x20 + lVar1);
      func_0x000107c61618();
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      FUN_10327cf0c();
      puVar3 = &UNK_11062fdd0;
      func_0x000107c613f8(&UNK_11062fdd0,puVar2,0,0);
      *puVar2 = 2;
      puVar4 = puVar3;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar3);
      func_0x000107c5ed2c(puVar4);
    }
    else {
      FUN_10327cf0c();
      puVar3 = &UNK_11062fdd0;
      func_0x000107c613f8(&UNK_11062fdd0,puVar2,0,0);
      *puVar2 = 2;
      puVar4 = puVar3;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar3);
      func_0x000107c5ed2c(puVar4);
    }
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10327c64c; end: 10327c6b3; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10327c64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x00010327caf8(param_3,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10327c6b4; end: 10327c6bb; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_10327c6b4(void)

{
  return 0;
}



/* Entry: 10327c6bc; end: 10327c6bf; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_10327c6bc(void)

{
  return;
}



/* Entry: 10327c6c0; end: 10327c863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327c6c0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  uVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar1 == 0) {
    return;
  }
  uVar2 = param_2;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_visibleViewController_112685a88);
  if ((uVar2 & 1) != 0) {
    func_0x000107c5dff4();
    func_0x000107c61180();
    if (param_2 != 0) {
      puVar3 = PTR_PTR_1126b5f80;
      func_0x000107c610f8(PTR_PTR_1126b5f80);
      func_0x000107c4807c();
      uVar4 = *(undefined8 *)(uVar1 + _DAT_112f4fd10);
      func_0x000107c61174(uVar4);
      func_0x000107c61174(puVar3);
      func_0x000107c61174();
      func_0x000107c5fadc(param_3,param_4);
      uVar5 = uVar4;
      func_0x000107c3edac(uVar4);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_3);
      func_0x000107c42c1c(*(undefined8 *)(uVar1 + _DAT_112f4fd00));
      lVar6 = uVar1 + _DAT_112f4fd08;
      func_0x000107c61618();
      if (lVar6 != 0) {
        func_0x000107c4bb60();
        func_0x000107c615e8(lVar6);
      }
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      uVar1 = param_2;
      goto LAB_10327c844;
    }
  }
  FUN_10327c314(2);
LAB_10327c844:
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10327c864; end: 10327c99b;  */

/* WARNING: Possible PIC construction at 0x00010327c93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327c94c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010327c940) */
/* WARNING: Removing unreachable block (ram,0x00010327c950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327c864(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f4fd00);
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = unaff_x20 + _DAT_112f4fd08;
    func_0x000107c61618();
    if (lVar3 == 0) {
      return;
    }
    func_0x000107c42804();
  }
  else {
    func_0x000107c61170();
    func_0x000107c4ffe8();
    func_0x000107c61180();
    if (lVar3 == 0) {
      return;
    }
    puVar2 = &UNK_11062fc48;
    func_0x000107c613fc(&UNK_11062fc48,0x18,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    pcStack_40 = FUN_10327cc8c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_11062fc60;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    puVar2 = puStack_38;
    func_0x000107c615f0(lVar3);
    func_0x000107c61174();
    func_0x000107c61574(puVar2);
    func_0x000107c5e2a4(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 10327c99c; end: 10327c9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327c99c(long param_1)

{
  param_1 = param_1 + _DAT_112f4fd08;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c42804();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10327c9e0; end: 10327ca07; -[_TtC14SearchDeepLink23SearchDeepLinkProcessor searchWorkflowDidEnd] */

void FUN_10327c9e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10327c864();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10327ca08; end: 10327cc8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327ca08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4fcf0);
  *puVar1 = 0xd000000000000010;
  puVar1[1] = 0x800000010f133990;
  *(undefined8 *)(unaff_x20 + _DAT_112f4fcf8) = 0;
  lVar3 = _DAT_112f4fd18;
  func_0x000107c61614(unaff_x20 + _DAT_112f4fd18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f4fd08,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f4fd00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f4fd10) = param_2;
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar2);
  return;
}



/* Entry: 10327cc8c; end: 10327ccaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327cc8c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10) + _DAT_112f4fd08;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42804();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10327ccb0; end: 10327cccf;  */

void FUN_10327ccb0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4bb8);
  return;
}



/* Entry: 10327ccd0; end: 10327ccdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327ccd0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_112f4fd08;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c4bb48();
      func_0x000107c615e8(lVar3);
    }
    FUN_10327ccdc(uVar1,uVar4);
    FUN_10327c4e8();
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 10327ccdc; end: 10327ceff;  */

undefined1  [16] FUN_10327ccdc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = param_1;
  func_0x000107c5fb5c();
  if (0 < lVar6) {
    lVar6 = 0;
    do {
      lVar2 = 0xf;
      func_0x000107c5fb6c(0xf,lVar6,param_1,param_2);
      lVar5 = lVar2;
      func_0x000107c5fb60();
      lVar4 = param_1;
      func_0x000107c5fbcc(lVar2,param_1,param_2);
      lVar7 = param_1;
      func_0x000107c5fb5c(param_1,param_2);
      if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10327cf00);
        (*pcVar1)();
      }
      if (lVar6 < lVar7 + -1) {
        lVar7 = param_1;
        func_0x000107c5fbcc(lVar5,param_1,param_2);
        if (lVar2 != 0x2d || lVar4 != -0x1f00000000000000) {
          uVar3 = 0x2d;
          func_0x000107c605b8(0x2d,0xe100000000000000,lVar2,lVar4,0);
          if (((uVar3 & 1) == 0) || (lVar7 == 0)) goto LAB_10327ce20;
        }
        else if (lVar7 == 0) goto LAB_10327cd28;
        if ((lVar5 != 0x2d) || (lVar7 != -0x1f00000000000000)) {
          uVar3 = 0x2d;
          func_0x000107c605b8(0x2d,0xe100000000000000,lVar5,lVar7,0);
          if ((uVar3 & 1) == 0) {
            if (lVar2 != 0x2d || lVar4 != -0x1f00000000000000) goto LAB_10327ce20;
            goto LAB_10327cd28;
          }
        }
        func_0x000107c5fb78(0x2d,0xe100000000000000);
        func_0x000107c6142c(lVar7);
        lVar5 = 2;
      }
      else {
        if ((lVar2 == 0x2d) && (lVar4 == -0x1f00000000000000)) {
          lVar7 = 0;
LAB_10327cd28:
          func_0x000107c5fb78(0x20,0xe100000000000000);
          func_0x000107c6142c(lVar4);
          lVar4 = lVar7;
        }
        else {
          func_0x000107c605b8(0x2d,0xe100000000000000,lVar2,lVar4,0);
          lVar7 = 0;
LAB_10327ce20:
          uVar3 = 0x2d;
          func_0x000107c605b8(0x2d,0xe100000000000000,lVar2,lVar4,0);
          if ((uVar3 & 1) != 0) goto LAB_10327cd28;
          func_0x000107c6142c(lVar7);
          func_0x000107c5fb78(lVar2,lVar4);
        }
        lVar5 = 1;
      }
      func_0x000107c6142c(lVar4);
      lVar6 = lVar6 + lVar5;
      lVar5 = param_1;
      func_0x000107c5fb5c(param_1,param_2);
    } while (lVar6 < lVar5);
  }
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 10327cf00; end: 10327cf0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327cf00(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar8 + 0x10,auStack_58,0,0);
  uVar1 = lVar8 + 0x10;
  func_0x000107c61618();
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar3;
  func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_visibleViewController_112685a88);
  if ((uVar2 & 1) != 0) {
    func_0x000107c5dff4();
    func_0x000107c61180();
    if (uVar3 != 0) {
      puVar4 = PTR_PTR_1126b5f80;
      func_0x000107c610f8(PTR_PTR_1126b5f80);
      func_0x000107c4807c();
      uVar5 = *(undefined8 *)(uVar1 + _DAT_112f4fd10);
      func_0x000107c61174(uVar5);
      func_0x000107c61174(puVar4);
      func_0x000107c61174();
      func_0x000107c5fadc(uVar6,uVar7);
      uVar7 = uVar5;
      func_0x000107c3edac(uVar5);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar6);
      func_0x000107c42c1c(*(undefined8 *)(uVar1 + _DAT_112f4fd00));
      lVar8 = uVar1 + _DAT_112f4fd08;
      func_0x000107c61618();
      if (lVar8 != 0) {
        func_0x000107c4bb60();
        func_0x000107c615e8(lVar8);
      }
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar4);
      uVar1 = uVar3;
      goto LAB_10327c844;
    }
  }
  FUN_10327c314(2);
LAB_10327c844:
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10327cf0c; end: 10327cf4b;  */

void FUN_10327cf0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4fd48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba4244;
  func_0x000107c61520(&UNK_10dba4244,&UNK_11062fdd0);
  puRam0000000112f4fd48 = puVar1;
  return;
}



/* Entry: 10327cf4c; end: 10327d0b7;  */

int FUN_10327cf4c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10327cfc8;
        goto LAB_10327cfac;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10327cfac:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10327cfc8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10327d0b8; end: 10327d177;  */

void FUN_10327d0b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4fd50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba421c;
  func_0x000107c61520(&UNK_10dba421c,&UNK_11062fdd0);
  puRam0000000112f4fd50 = puVar1;
  return;
}



/* Entry: 10327d178; end: 10327d187;  */

void FUN_10327d178(long param_1,long param_2)

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



/* Entry: 10327d188; end: 10327d33b;  */

void FUN_10327d188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_11062fe98;
  func_0x000107c613fc(&UNK_11062fe98,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10327d33c,puVar1);
  return;
}



/* Entry: 10327d33c; end: 10327d36b;  */

void FUN_10327d33c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = uStack_48;
  uVar1 = 0x112e48cb8;
  func_0x0001000285a8(0x112e48cb8,&UNK_10da3faf0);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x00010451338c();
  func_0x000107c61170(uStack_50);
  FUN_10327ccb0(0);
  func_0x000107c610f8();
  puVar5 = puVar3;
  FUN_10327ca08(puVar3,uStack_48,puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(puVar4);
  *param_1 = puVar5;
  return;
}



/* Entry: 10327d36c; end: 10327d417;  */

void FUN_10327d36c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10327d418; end: 10327d427;  */

void FUN_10327d418(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10327d428; end: 10327d487; -[_TtC25ContactsMessagingDeepLink31ContactsMessagingDeepLinkPlugin init] */

void FUN_10327d428(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactsMessagingDeepLink.ContactsMessagingDeepLinkPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327d454);
  (*pcVar1)();
}



/* Entry: 10327d488; end: 10327d497; -[_TtC25ContactsMessagingDeepLink31ContactsMessagingDeepLinkPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327d488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f4fd78));
  return;
}



/* Entry: 10327d498; end: 10327d4b7;  */

void FUN_10327d498(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4ca0);
  return;
}



/* Entry: 10327d4b8; end: 10327d4bb;  */

void FUN_10327d4b8(void)

{
  return;
}



/* Entry: 10327d4bc; end: 10327d523; -[_TtC25ContactsMessagingDeepLink31ContactsMessagingDeepLinkPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10327d4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x00010327d9e8(param_3,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10327d524; end: 10327d52b; -[_TtC25ContactsMessagingDeepLink31ContactsMessagingDeepLinkPlugin shouldForceNavigation] */

undefined8 FUN_10327d524(void)

{
  return 0;
}



/* Entry: 10327d52c; end: 10327d5bf; -[_TtC25ContactsMessagingDeepLink31ContactsMessagingDeepLinkPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_10327d52c(undefined1 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  
  FUN_10327dc38();
  puVar1 = &UNK_11062fff8;
  func_0x000107c613f8(&UNK_11062fff8,param_1,0,0);
  *param_1 = 1;
  func_0x000107c615f0(in_x4);
  puVar2 = puVar1;
  func_0x000107c5ed2c(puVar1);
  func_0x000107c614ac(puVar1);
  puVar1 = puVar2;
  func_0x000107c5ed2c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c42808(in_x4);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(in_x4);
  return;
}



/* Entry: 10327d5c0; end: 10327d60f; -[_TtC25ContactsMessagingDeepLink31ContactsMessagingDeepLinkPlugin identifier] */

void FUN_10327d5c0(undefined8 param_1)

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



/* Entry: 10327d610; end: 10327d617; -[_TtC25ContactsMessagingDeepLink31ContactsMessagingDeepLinkPlugin priority] */

undefined8 FUN_10327d610(void)

{
  return 1000;
}



/* Entry: 10327d618; end: 10327d69f; -[_TtC25ContactsMessagingDeepLink31ContactsMessagingDeepLinkPlugin canProvideProcessorForFeature:] */

uint FUN_10327d618(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f81858;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 10327d6a0; end: 10327d6fb; -[_TtC25ContactsMessagingDeepLink31ContactsMessagingDeepLinkPlugin isValidDeepLink:] */

uint FUN_10327d6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010327db74(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10327d6fc; end: 10327d6ff; -[_TtC25ContactsMessagingDeepLink31ContactsMessagingDeepLinkPlugin makeDeepLinkProcessor] */

void FUN_10327d6fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10327d700; end: 10327d803;  */

bool FUN_10327d700(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_48 [40];
  
  func_0x000107c4f778();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  uStack_70 = 0x6e65697069636572;
  uStack_68 = 0xe900000000000074;
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_48,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c61434(lVar2);
    puVar3 = auStack_48;
    func_0x000100df95d0(puVar3);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)puVar3 * 0x20,&uStack_70);
      func_0x000107c6142c(lVar2);
      goto LAB_10327d7cc;
    }
    func_0x000107c6142c(lVar2);
  }
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
LAB_10327d7cc:
  func_0x000107c6142c(lVar2);
  func_0x0001007bbff0(auStack_48);
  bVar1 = lStack_58 != 0;
  func_0x00010006e7f4(&uStack_70);
  return bVar1;
}



/* Entry: 10327d804; end: 10327dc37;  */

undefined1  [16] FUN_10327d804(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  ulong uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c4f778();
  func_0x000107c61180();
  puVar9 = PTR___sypN_11034f1a8;
  lVar2 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  uStack_88 = 0x6e65697069636572;
  puStack_80 = (undefined *)0xe900000000000074;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_78,&uStack_88,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar2 + 0x10) == 0) {
LAB_10327d8cc:
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    puVar3 = &uStack_78;
    func_0x000100df95d0(puVar3);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107c6142c(lVar2);
      goto LAB_10327d8cc;
    }
    func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)puVar3 * 0x20,&uStack_50);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c6142c(lVar2);
  func_0x0001007bbff0(&uStack_78);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    puVar3 = &uStack_88;
    func_0x000107c6147c(puVar3,&uStack_50,puVar9 + 8,PTR___sSSN_11034da80,6);
    puVar9 = puStack_80;
    uVar5 = uStack_88;
    if (((ulong)puVar3 & 1) != 0) {
      uStack_78 = uStack_88;
      puStack_70 = puStack_80;
      uStack_50 = 0x40;
      uStack_48 = 0xe100000000000000;
      func_0x000100e8b654();
      puVar4 = &uStack_50;
      puVar7 = PTR___sSSN_11034da80;
      func_0x000107c6022c(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar3,puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        uStack_78 = uVar5;
        puStack_70 = puVar9;
        uStack_60 = uVar5 & 0xffffffffffff;
        if (((ulong)puVar9 & 0x2000000000000000) != 0) {
          uStack_60 = (ulong)puVar9 >> 0x38 & 0xf;
        }
        uStack_68 = 0;
        puVar6 = puVar9;
        func_0x000107c61434();
        do {
          func_0x000107c5fb84();
          if (puVar7 == (undefined *)0x0) {
            func_0x000107c6142c(puVar9);
            func_0x000107c6142c(puStack_70);
            goto LAB_10327d960;
          }
          puVar8 = puVar7;
          func_0x000107c5fa70();
          func_0x000107c6142c();
          uVar1 = (ulong)puVar6 & 1;
          puVar6 = puVar7;
          puVar7 = puVar8;
        } while (uVar1 == 0);
        func_0x000107c6142c(puStack_70);
        goto LAB_10327d968;
      }
      func_0x000107c6142c(puVar9);
    }
  }
LAB_10327d960:
  uVar5 = 0;
  puVar9 = (undefined *)0x0;
LAB_10327d968:
  auVar10._8_8_ = puVar9;
  auVar10._0_8_ = uVar5;
  return auVar10;
}



/* Entry: 10327dc38; end: 10327dc77;  */

void FUN_10327dc38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4fda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba4388;
  func_0x000107c61520(&UNK_10dba4388,&UNK_11062fff8);
  puRam0000000112f4fda8 = puVar1;
  return;
}



/* Entry: 10327dc78; end: 10327ddfb;  */

void FUN_10327dc78(long param_1,long param_2)

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



/* Entry: 10327ddfc; end: 10327de3b;  */

void FUN_10327ddfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4fdb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba4360;
  func_0x000107c61520(&UNK_10dba4360,&UNK_11062fff8);
  puRam0000000112f4fdb0 = puVar1;
  return;
}



/* Entry: 10327de3c; end: 10327de87;  */

void FUN_10327de3c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10327def8,param_1);
  return;
}



/* Entry: 10327de88; end: 10327def7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327de88(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_10327d498();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f4fd78) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10327def8; end: 10327df0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327def8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_10327d498();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f4fd78) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10327df10; end: 10327dfeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10327df10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10327e450();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f4fdb8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f4fdc0) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327dfec);
  (*pcVar1)();
}



/* Entry: 10327dfec; end: 10327e04b; -[_TtC54DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge69DeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint init] */

void FUN_10327dfec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge.DeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint"
                      ,0x7c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327e018);
  (*pcVar1)();
}



/* Entry: 10327e04c; end: 10327e083; -[_TtC54DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge69DeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010327e068: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010327e06c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327e04c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4fdb8));
  return;
}



/* Entry: 10327e084; end: 10327e0ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327e084(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f4fdc0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f4fdb8));
  return;
}



/* Entry: 10327e0ac; end: 10327e0cb;  */

void FUN_10327e0ac(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4d60);
  return;
}


