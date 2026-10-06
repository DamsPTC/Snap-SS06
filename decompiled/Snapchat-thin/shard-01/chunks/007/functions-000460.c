/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101387ff0; end: 101388103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101387ff0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar2 = PTR_PTR_1126a6be8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = 0;
  FUN_101388358();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112d76f88) = 0;
  lVar5 = lVar4;
  func_0x000104513428();
  *(long *)(lVar4 + _DAT_112d76f60) = lVar5;
  func_0x00010451338c();
  *(long *)(lVar4 + _DAT_112d76f68) = lVar5;
  *(undefined8 *)(lVar4 + _DAT_112d76f70) = uVar7;
  *(undefined8 *)(lVar4 + _DAT_112d76f78) = uVar1;
  *(undefined **)(lVar4 + _DAT_112d76f80) = puVar2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61154(&lStack_60,puVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4e9e4(uVar7);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(plVar6);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 101388104; end: 101388147;  */

void FUN_101388104(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101388148; end: 101388167;  */

void FUN_101388148(void)

{
  FUN_101387ff0();
  return;
}



/* Entry: 101388168; end: 10138816f;  */

undefined8 FUN_101388168(void)

{
  return 0;
}



/* Entry: 101388170; end: 10138818f;  */

void FUN_101388170(void)

{
  func_0x000107c61168(&PTR_PTR_112d76ee0);
  return;
}



/* Entry: 101388190; end: 10138819f; -[_TtC33ThirdPartyLoginDeepLinkEntryPoint32ThirdPartyLoginDeepLinkProcessor identifier] */

void FUN_101388190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110f83e98);
  return;
}



/* Entry: 1013881a0; end: 1013881a7; -[_TtC33ThirdPartyLoginDeepLinkEntryPoint32ThirdPartyLoginDeepLinkProcessor priority] */

undefined8 FUN_1013881a0(void)

{
  return 1000;
}



/* Entry: 1013881a8; end: 10138822f; -[_TtC33ThirdPartyLoginDeepLinkEntryPoint32ThirdPartyLoginDeepLinkProcessor canProvideProcessorForFeature:] */

uint FUN_1013881a8(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f83e98;
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



/* Entry: 101388230; end: 10138828b; -[_TtC33ThirdPartyLoginDeepLinkEntryPoint32ThirdPartyLoginDeepLinkProcessor isValidDeepLink:] */

uint FUN_101388230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101388504(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10138828c; end: 10138828f; -[_TtC33ThirdPartyLoginDeepLinkEntryPoint32ThirdPartyLoginDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_10138828c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 101388290; end: 1013882ef; -[_TtC33ThirdPartyLoginDeepLinkEntryPoint32ThirdPartyLoginDeepLinkProcessor init] */

void FUN_101388290(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ThirdPartyLoginDeepLinkEntryPoint.ThirdPartyLoginDeepLinkProcessor",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013882bc);
  (*pcVar1)();
}



/* Entry: 1013882f0; end: 101388357; -[_TtC33ThirdPartyLoginDeepLinkEntryPoint32ThirdPartyLoginDeepLinkProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010138830c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138832c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101388310) */
/* WARNING: Removing unreachable block (ram,0x000101388330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013882f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d76f60));
  return;
}



/* Entry: 101388358; end: 101388377;  */

void FUN_101388358(void)

{
  func_0x000107c61168(&PTR_PTR_1127cc7e8);
  return;
}



/* Entry: 101388378; end: 10138845b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388378(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112d76f60);
    if (lVar1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_112d76f70);
        puVar2 = PTR_PTR_1126aead0;
        func_0x000107c610f8(PTR_PTR_1126aead0);
        func_0x000107c47994();
        func_0x000107c3edc0(uVar3);
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112d76f78));
        func_0x000107c61170(lVar1);
        func_0x000107c61170(uVar3);
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10138845c; end: 1013884f7; -[_TtC33ThirdPartyLoginDeepLinkEntryPoint32ThirdPartyLoginDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10138845c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1013885cc(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1013884f8; end: 1013884ff; -[_TtC33ThirdPartyLoginDeepLinkEntryPoint32ThirdPartyLoginDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1013884f8(void)

{
  return 1;
}



/* Entry: 101388500; end: 101388503; -[_TtC33ThirdPartyLoginDeepLinkEntryPoint32ThirdPartyLoginDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_101388500(void)

{
  return;
}



/* Entry: 101388504; end: 1013885cb;  */

uint FUN_101388504(undefined **param_1,long param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  func_0x000107c42e38();
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f83e98);
    lVar4 = param_2;
  }
  else {
    ppuVar2 = param_1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(param_1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f83e98;
    func_0x000107c5faec();
    if (param_2 != 0) {
      if (ppuVar2 == ppuVar3 && param_2 == lVar4) {
        func_0x000107c6142c(param_2);
        uVar1 = 1;
      }
      else {
        func_0x000107c605b8(ppuVar2,param_2,ppuVar3,lVar4,0);
        uVar1 = (uint)ppuVar2;
        func_0x000107c6142c(param_2);
      }
      goto LAB_1013885b0;
    }
  }
  uVar1 = 0;
LAB_1013885b0:
  func_0x000107c6142c(lVar4);
  return uVar1 & 1;
}



/* Entry: 1013885cc; end: 101388703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013885cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000106a5a148(*(undefined8 *)(unaff_x20 + _DAT_112d76f80),1);
  lVar1 = *(long *)(unaff_x20 + _DAT_112d76f68);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      puVar2 = &UNK_1103a9740;
      func_0x000107c613fc(&UNK_1103a9740,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      pcStack_50 = FUN_101388704;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_1103a9758;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c4ef74(lVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 101388704; end: 101388727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388704(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d76f60);
    if (lVar2 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        uVar4 = *(undefined8 *)(lVar1 + _DAT_112d76f70);
        puVar3 = PTR_PTR_1126aead0;
        func_0x000107c610f8(PTR_PTR_1126aead0);
        func_0x000107c47994();
        func_0x000107c3edc0(uVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c42c1c(*(undefined8 *)(lVar1 + _DAT_112d76f78));
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar4);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101388728; end: 101388733; -[SCThirdPartyLoginDeepLinkEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388728(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76fb8;
  func_0x000107c61428(param_1 + _DAT_112d76fb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101388734; end: 10138873f; -[SCThirdPartyLoginDeepLinkEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76fb8;
  func_0x000107c61428(param_1 + _DAT_112d76fb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101388740; end: 10138874b; -[SCThirdPartyLoginDeepLinkEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388740(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76fc0;
  func_0x000107c61428(param_1 + _DAT_112d76fc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10138874c; end: 101388757; -[SCThirdPartyLoginDeepLinkEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10138874c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76fc0;
  func_0x000107c61428(param_1 + _DAT_112d76fc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101388758; end: 101388763; -[SCThirdPartyLoginDeepLinkEntryPoint adConfigService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388758(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76fc8;
  func_0x000107c61428(param_1 + _DAT_112d76fc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101388764; end: 10138876f; -[SCThirdPartyLoginDeepLinkEntryPoint setAdConfigService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388764(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76fc8;
  func_0x000107c61428(param_1 + _DAT_112d76fc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101388770; end: 10138877b; -[SCThirdPartyLoginDeepLinkEntryPoint thirdPartyLoginScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388770(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76fd0;
  func_0x000107c61428(param_1 + _DAT_112d76fd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10138877c; end: 1013887bf;  */

void FUN_10138877c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1013887c0; end: 1013887cb; -[SCThirdPartyLoginDeepLinkEntryPoint setThirdPartyLoginScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013887c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76fd0;
  func_0x000107c61428(param_1 + _DAT_112d76fd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013887cc; end: 10138881f;  */

void FUN_1013887cc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101388820; end: 101388867; -[SCThirdPartyLoginDeepLinkEntryPoint thirdPartyLoginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388820(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76fd8;
  func_0x000107c61428(param_1 + _DAT_112d76fd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101388868; end: 1013888cb; -[SCThirdPartyLoginDeepLinkEntryPoint setThirdPartyLoginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388868(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76fd8;
  func_0x000107c61428(param_1 + _DAT_112d76fd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013888cc; end: 101388a93;  */

/* WARNING: Possible PIC construction at 0x0001013889cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013889dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013889ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101388a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101388a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101388a3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101388a50) */
/* WARNING: Removing unreachable block (ram,0x000101388a70) */
/* WARNING: Removing unreachable block (ram,0x0001013889f0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001013889e0) */
/* WARNING: Removing unreachable block (ram,0x0001013889d0) */
/* WARNING: Removing unreachable block (ram,0x000101388a40) */

void FUN_1013888cc(void)

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
  func_0x000107c4d52c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d294();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c5c8f0();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c5c8e8();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = 0;
          FUN_101388170();
          func_0x000107c613fc();
          *(long *)(lVar5 + 0x10) = lVar1;
          *(long *)(lVar5 + 0x18) = lVar2;
          *(long *)(lVar5 + 0x20) = lVar3;
          *(long *)(lVar5 + 0x28) = lVar4;
          *(long *)(lVar5 + 0x30) = unaff_x20;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          func_0x000107c61174(unaff_x20);
          FUN_101387ff0();
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



/* Entry: 101388a94; end: 101388abb; -[SCThirdPartyLoginDeepLinkEntryPoint begin] */

void FUN_101388a94(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013888cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101388abc; end: 101388aff; -[SCThirdPartyLoginDeepLinkEntryPoint end] */

void FUN_101388abc(undefined8 param_1)

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



/* Entry: 101388b00; end: 101388de7;  */

void FUN_101388b00(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0x6769666e6f436461;
        if (((param_2 == 0x6769666e6f436461) && (param_3 == -0x109a9c96898d9aad)) ||
           (func_0x000107c605b8(0x6769666e6f436461,0xef65636976726553,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c522b0();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10c63c0)) ||
             (func_0x000107c605b8(0xd00000000000001c,0x800000010ef39c40,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c59ccc();
          }
          else {
            uVar2 = 0xd00000000000001b;
            if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10c63a0)) &&
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef39c60,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "ThirdPartyLoginDeepLinkEntryPoint/SCThirdPartyLoginDeepLinkEntryPoint.swift"
                                  ,0x4b,2,0x35,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101388de8);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c59cc4();
          }
        }
        goto LAB_101388b8c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c569f0();
  }
LAB_101388b8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101388de8; end: 101388e93; -[SCThirdPartyLoginDeepLinkEntryPoint setValue:forIvarName:] */

void FUN_101388de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101388b00(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101388e94; end: 101388f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388e94(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d76fb8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76fc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76fc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76fd0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d76fd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76fe0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101388f3c; end: 101388f5b; -[SCThirdPartyLoginDeepLinkEntryPoint init] */

void FUN_101388f3c(void)

{
  FUN_101388e94();
  return;
}



/* Entry: 101388f5c; end: 101388f8f;  */

void FUN_101388f5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101388f90; end: 101389007; -[SCThirdPartyLoginDeepLinkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101388f90(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d76fb8);
  func_0x000107c61610(param_1 + _DAT_112d76fc0);
  func_0x000107c61610(param_1 + _DAT_112d76fc8);
  func_0x000107c61610(param_1 + _DAT_112d76fd0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76fd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d76fe0));
  return;
}



/* Entry: 101389008; end: 101389027;  */

void FUN_101389008(void)

{
  func_0x000107c61168(&PTR_PTR_1127cc8d0);
  return;
}



/* Entry: 101389028; end: 10138904f;  */

void FUN_101389028(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103a9868;
  if (lRam0000000112d77010 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d77010 = param_1;
  }
  return;
}



/* Entry: 101389050; end: 101389093;  */

void FUN_101389050(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101389094; end: 1013893e3;  */

/* WARNING: Possible PIC construction at 0x0001013894c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101389428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013894c8) */
/* WARNING: Removing unreachable block (ram,0x00010138942c) */

undefined1  [16] FUN_101389094(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 *unaff_x19;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  puVar3 = (undefined1 *)0xed000064695f6b63;
  puVar1 = (undefined1 *)0x61705f6d61657264;
  pcVar4 = (char *)(param_1 & 0xff);
  puVar2 = puVar3;
  switch(pcVar4) {
  default:
    pcVar4 = "er provider cannot be nil";
  case (char *)0x2c:
  case (char *)0x3a:
  case (char *)0xc4:
  case (char *)0xd2:
  case (char *)0xec:
  case (char *)0xfa:
    pcVar4 = pcVar4 + 0xfc0;
  case (char *)0x1f:
  case (char *)0x33:
  case (char *)0xb7:
  case (char *)0xcb:
  case (char *)0xdf:
  case (char *)0xf3:
code_r0x000101389154:
    auVar7._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar7._0_8_ = 0xd000000000000011;
    return auVar7;
  case (char *)0x1:
    puVar3 = (undefined1 *)0x800000010ef39f80;
    pcVar4 = (char *)0x9;
  case (char *)0xa1:
    break;
  case (char *)0x2:
    goto code_r0x0001013893cc;
  case (char *)0x3:
    puVar3 = (undefined1 *)0x695f;
  case (char *)0x50:
  case (char *)0x59:
  case (char *)0x80:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffff0000ffff | 0xeb00000000640000);
  case (char *)0x54:
    puVar1 = (undefined1 *)0x706d6574;
  case (char *)0xae:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff0000ffffffff | 0x616c00000000);
  case (char *)0x55:
  case (char *)0x63:
  case (char *)0x91:
    auVar11._0_8_ = (ulong)puVar1 & 0xffffffffffff | 0x6574000000000000;
    auVar11._8_8_ = puVar3;
    return auVar11;
  case (char *)0x4:
    pcVar4 = "generation_process_type";
    goto code_r0x0001013892a0;
  case (char *)0x5:
  case (char *)0x65:
  case (char *)0x66:
  case (char *)0x6f:
  case (char *)0xad:
    puVar3 = (undefined1 *)0x7275;
  case (char *)0xd8:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffff0000ffff | 0x65630000);
  case (char *)0x60:
  case (char *)0x6b:
  case (char *)0x70:
  case (char *)0x87:
  case (char *)0xab:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffffffff | 0xec00000000000000);
    puVar1 = (undefined1 *)0x67616d69;
  case (char *)0x6d:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff0000ffffffff | 0x5f6500000000);
  case (char *)0x8e:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffffffffffff | 0x6f73000000000000);
  case (char *)0x52:
  case (char *)0x57:
  case (char *)0x5b:
  case (char *)0x62:
  case (char *)0x71:
  case (char *)0x82:
  case (char *)0x89:
  case (char *)0x93:
  case (char *)0xac:
    auVar15._8_8_ = puVar3;
    auVar15._0_8_ = puVar1;
    return auVar15;
  case (char *)0x6:
    puVar3 = (undefined1 *)0x7079;
  case (char *)0x40:
    auVar18._8_8_ = (ulong)puVar3 & 0xffff0000ffff | 0xeb00000000650000;
    auVar18._0_8_ = 0x745f74706d6f7270;
    return auVar18;
  case (char *)0x7:
    puVar3 = (undefined1 *)0x6372756f;
  case (char *)0x6c:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffff | 0xed00006500000000);
    puVar1 = (undefined1 *)0x6d6f7270;
  case (char *)0x41:
  case (char *)0xb8:
  case (char *)0xd9:
    auVar12._0_8_ = (ulong)puVar1 & 0xffffffff | 0x735f747000000000;
    auVar12._8_8_ = puVar3;
    return auVar12;
  case (char *)0x8:
    auVar21._8_8_ = 0xed000064695f6261;
    auVar21._0_8_ = 0x745f74706d6f7270;
    return auVar21;
  case (char *)0x9:
    pcVar4 = "customization_id";
    goto code_r0x000101389328;
  case (char *)0xa:
    pcVar4 = "image_resolution";
code_r0x000101389328:
    puVar1 = (undefined1 *)0xd000000000000010;
    puVar3 = (undefined1 *)((ulong)(pcVar4 + -0x20) | 0x8000000000000000);
code_r0x000101389330:
    auVar20._8_8_ = puVar3;
    auVar20._0_8_ = puVar1;
    return auVar20;
  case (char *)0xb:
    pcVar4 = "er provider cannot be nil";
  case (char *)0xcc:
    puVar3 = (undefined1 *)((ulong)(pcVar4 + 0xf00) | 0x8000000000000000);
    pcVar4 = (char *)0xb;
    break;
  case (char *)0xc:
    pcVar4 = "generation_status";
    goto code_r0x000101389154;
  case (char *)0xd:
    pcVar4 = "remote_Call_Response_Status_Code";
  case (char *)0xb0:
    auVar17._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar17._0_8_ = 0xd000000000000020;
    return auVar17;
  case (char *)0xe:
  case (char *)0xa4:
    auVar6._8_8_ = 0xea00000000006570;
    auVar6._0_8_ = 0x79745f726f727265;
    return auVar6;
  case (char *)0xf:
    pcVar4 = "user_exit_lens_timestamp";
  case (char *)0x53:
  case (char *)0x69:
  case (char *)0x8a:
    puVar3 = (undefined1 *)((ulong)pcVar4 | 0x8000000000000000);
    pcVar4 = (char *)0x10;
  case (char *)0xa8:
    pcVar4 = (char *)((ulong)pcVar4 | 0xd000000000000000);
  case (char *)0x95:
    auVar10._0_8_ = (ulong)pcVar4 | 4;
    auVar10._8_8_ = puVar3;
    return auVar10;
  case (char *)0x10:
  case (char *)0x2a:
  case (char *)0xc2:
  case (char *)0xea:
    puVar3 = (undefined1 *)0x636e6574;
  case (char *)0x43:
  case (char *)0xdb:
    auVar5._8_8_ = (ulong)puVar3 & 0xffffffff | 0xed00007900000000;
    auVar5._0_8_ = 0x616c5f6c61746f74;
    return auVar5;
  case (char *)0x11:
    auVar13._8_8_ = 0x800000010ef39e70;
    auVar13._0_8_ = 0xd000000000000018;
    return auVar13;
  case (char *)0x12:
    pcVar4 = "bolt_asset_upload_start_timestamp";
  case (char *)0xf0:
    auVar19._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar19._0_8_ = 0xd000000000000021;
    return auVar19;
  case (char *)0x13:
    pcVar4 = "er provider cannot be nil";
  case (char *)0x36:
  case (char *)0xce:
  case (char *)0xf6:
    pcVar4 = pcVar4 + 0xe20;
  case (char *)0x1e:
  case (char *)0x32:
  case (char *)0xb6:
  case (char *)0xca:
  case (char *)0xde:
  case (char *)0xf2:
    auVar23._8_8_ = (ulong)pcVar4 | 0x8000000000000000;
    auVar23._0_8_ = 0xd000000000000013;
    return auVar23;
  case (char *)0x14:
    pcVar4 = "backend_request_start_timestamp";
  case (char *)0x5e:
  case (char *)0x85:
  case (char *)0x96:
  case (char *)0x98:
    puVar3 = (undefined1 *)((ulong)(pcVar4 + -0x20) | 0x8000000000000000);
    pcVar4 = (char *)0x10;
  case (char *)0xaa:
    pcVar4 = (char *)((ulong)pcVar4 | 0xd000000000000000);
  case (char *)0x51:
  case (char *)0x56:
  case (char *)0x5a:
  case (char *)0x5c:
  case (char *)0x67:
  case (char *)0x81:
  case (char *)0x83:
  case (char *)0x8d:
  case (char *)0x92:
  case (char *)0xaf:
    auVar14._0_8_ = (ulong)pcVar4 | 0xf;
    auVar14._8_8_ = puVar3;
    return auVar14;
  case (char *)0x15:
  case (char *)0x61:
  case (char *)0x64:
  case (char *)0x88:
  case (char *)0xa9:
    pcVar4 = "er provider cannot be nil";
  case (char *)0x6a:
  case (char *)0x8f:
    pcVar4 = pcVar4 + 0xe00;
code_r0x0001013892a0:
    pcVar4 = pcVar4 + -0x20;
code_r0x0001013892a4:
    puVar3 = (undefined1 *)((ulong)pcVar4 | 0x8000000000000000);
    goto code_r0x0001013892a8;
  case (char *)0x16:
    puVar3 = (undefined1 *)0x800000010ef39db0;
    pcVar4 = (char *)0x10;
  case (char *)0xc8:
    auVar22._8_8_ = puVar3;
    auVar22._0_8_ = ((ulong)pcVar4 | 0xd000000000000000) + 0x13;
    return auVar22;
  case (char *)0x17:
  case (char *)0x21:
  case (char *)0xb9:
  case (char *)0xe1:
    pcVar4 = "er provider cannot be nil";
  case (char *)0xb4:
    puVar3 = (undefined1 *)((ulong)(pcVar4 + 0xd90) | 0x8000000000000000);
  case (char *)0x42:
  case (char *)0xda:
    auVar24._8_8_ = puVar3;
    auVar24._0_8_ = 0xd000000000000016;
    return auVar24;
  case (char *)0x18:
  case (char *)0x1d:
  case (char *)0x31:
    puVar3 = (undefined1 *)0xec0000006e6f6973;
    puVar1 = (undefined1 *)0x736e656c;
  case (char *)0x1c:
  case (char *)0x35:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff0000ffffffff | 0x765f00000000);
  case (char *)0xa0:
    auVar9._0_8_ = (ulong)puVar1 & 0xffffffffffff | 0x7265000000000000;
    auVar9._8_8_ = puVar3;
    return auVar9;
  case (char *)0x19:
  case (char *)0x30:
    puVar3 = (undefined1 *)0x64;
  case (char *)0xf5:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffffffff | 0xe900000000000000);
  case (char *)0xcd:
    puVar1 = (undefined1 *)0x7266;
  case (char *)0xe0:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff | 0x695f646e65690000);
  case (char *)0xb5:
  case (char *)0xc9:
  case (char *)0xdd:
  case (char *)0xf1:
    auVar8._8_8_ = puVar3;
    auVar8._0_8_ = puVar1;
    return auVar8;
  case (char *)0x1a:
    puVar3 = (undefined1 *)0x800000010ef39d70;
    pcVar4 = (char *)0xa;
    break;
  case (char *)0x34:
    puVar2 = (undefined1 *)(ulong)*unaff_x20;
    FUN_101389094(puVar2);
    func_0x000107c5fb58(0x61705f6d61657264,puVar2,puVar3);
    goto code_r0x000107c6142c;
  case (char *)0x58:
  case (char *)0x94:
  case (char *)0xb1:
code_r0x0001013892a8:
    pcVar4 = (char *)0x10;
  case (char *)0x5f:
  case (char *)0x86:
  case (char *)0x8b:
  case (char *)0x8c:
  case (char *)0x90:
  case (char *)0x97:
    pcVar4 = (char *)((ulong)pcVar4 | 0xd000000000000000);
  case (char *)0x6e:
    auVar16._0_8_ = (ulong)pcVar4 | 7;
    auVar16._8_8_ = puVar3;
    return auVar16;
  case (char *)0x5d:
  case (char *)0x68:
  case (char *)0x84:
    goto code_r0x0001013892a4;
  case (char *)0xa2:
    FUN_101389094();
  case (char *)0x37:
  case (char *)0xcf:
  case (char *)0xf7:
    func_0x000107c5fb58(&stack0x00000008,puVar1,puVar3);
    puVar2 = puVar1;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar3);
    auVar26._8_8_ = puVar2;
    auVar26._0_8_ = puVar3;
    return auVar26;
  case (char *)0xdc:
    goto code_r0x000101389330;
  case (char *)0xf4:
    param_3 = (undefined1 *)(ulong)*unaff_x20;
    func_0x000107c6068c(&stack0x00000008,0);
    FUN_101389094(param_3);
    puVar1 = &stack0x00000008;
    unaff_x19 = puVar3;
  case (char *)0x22:
  case (char *)0xba:
  case (char *)0xe2:
    puVar2 = param_3;
  case (char *)0x20:
    puVar3 = unaff_x19;
    func_0x000107c5fb58(puVar1,puVar2,puVar3);
    goto code_r0x000107c6142c;
  }
  puVar1 = (undefined1 *)((ulong)pcVar4 | 0xd000000000000010);
code_r0x0001013893cc:
  auVar25._8_8_ = puVar3;
  auVar25._0_8_ = puVar1;
  return auVar25;
}



/* Entry: 1013893e4; end: 101389533;  */

void FUN_1013893e4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_101389094(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101389534; end: 10138953b;  */

/* WARNING: Possible PIC construction at 0x0001013894c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101389428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013894c8) */
/* WARNING: Removing unreachable block (ram,0x00010138942c) */

undefined1  [16] FUN_101389534(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *unaff_x19;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  pcVar3 = (char *)(ulong)*unaff_x20;
  puVar4 = (undefined1 *)0xed000064695f6b63;
  puVar1 = (undefined1 *)0x61705f6d61657264;
  puVar2 = puVar4;
  switch(*unaff_x20) {
  default:
    pcVar3 = "er provider cannot be nil";
  case 0x2c:
  case 0x3a:
  case 0xc4:
  case 0xd2:
  case 0xec:
  case 0xfa:
    pcVar3 = pcVar3 + 0xfc0;
  case 0x1f:
  case 0x33:
  case 0xb7:
  case 0xcb:
  case 0xdf:
  case 0xf3:
code_r0x000101389154:
    auVar7._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar7._0_8_ = 0xd000000000000011;
    return auVar7;
  case 1:
    puVar4 = (undefined1 *)0x800000010ef39f80;
    pcVar3 = (char *)0x9;
  case 0xa1:
    break;
  case 2:
    goto code_r0x0001013893cc;
  case 3:
    puVar4 = (undefined1 *)0x695f;
  case 0x50:
  case 0x59:
  case 0x80:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffff0000ffff | 0xeb00000000640000);
  case 0x54:
    puVar1 = (undefined1 *)0x706d6574;
  case 0xae:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff0000ffffffff | 0x616c00000000);
  case 0x55:
  case 99:
  case 0x91:
    auVar11._0_8_ = (ulong)puVar1 & 0xffffffffffff | 0x6574000000000000;
    auVar11._8_8_ = puVar4;
    return auVar11;
  case 4:
    pcVar3 = "generation_process_type";
    goto code_r0x0001013892a0;
  case 5:
  case 0x65:
  case 0x66:
  case 0x6f:
  case 0xad:
    puVar4 = (undefined1 *)0x7275;
  case 0xd8:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffff0000ffff | 0x65630000);
  case 0x60:
  case 0x6b:
  case 0x70:
  case 0x87:
  case 0xab:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffffffff | 0xec00000000000000);
    puVar1 = (undefined1 *)0x67616d69;
  case 0x6d:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff0000ffffffff | 0x5f6500000000);
  case 0x8e:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffffffffffff | 0x6f73000000000000);
  case 0x52:
  case 0x57:
  case 0x5b:
  case 0x62:
  case 0x71:
  case 0x82:
  case 0x89:
  case 0x93:
  case 0xac:
    auVar15._8_8_ = puVar4;
    auVar15._0_8_ = puVar1;
    return auVar15;
  case 6:
    puVar4 = (undefined1 *)0x7079;
  case 0x40:
    auVar18._8_8_ = (ulong)puVar4 & 0xffff0000ffff | 0xeb00000000650000;
    auVar18._0_8_ = 0x745f74706d6f7270;
    return auVar18;
  case 7:
    puVar4 = (undefined1 *)0x6372756f;
  case 0x6c:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffff | 0xed00006500000000);
    puVar1 = (undefined1 *)0x6d6f7270;
  case 0x41:
  case 0xb8:
  case 0xd9:
    auVar12._0_8_ = (ulong)puVar1 & 0xffffffff | 0x735f747000000000;
    auVar12._8_8_ = puVar4;
    return auVar12;
  case 8:
    auVar21._8_8_ = 0xed000064695f6261;
    auVar21._0_8_ = 0x745f74706d6f7270;
    return auVar21;
  case 9:
    pcVar3 = "customization_id";
    goto code_r0x000101389328;
  case 10:
    pcVar3 = "image_resolution";
code_r0x000101389328:
    puVar1 = (undefined1 *)0xd000000000000010;
    puVar4 = (undefined1 *)((ulong)(pcVar3 + -0x20) | 0x8000000000000000);
code_r0x000101389330:
    auVar20._8_8_ = puVar4;
    auVar20._0_8_ = puVar1;
    return auVar20;
  case 0xb:
    pcVar3 = "er provider cannot be nil";
  case 0xcc:
    puVar4 = (undefined1 *)((ulong)(pcVar3 + 0xf00) | 0x8000000000000000);
    pcVar3 = (char *)0xb;
    break;
  case 0xc:
    pcVar3 = "generation_status";
    goto code_r0x000101389154;
  case 0xd:
    pcVar3 = "remote_Call_Response_Status_Code";
  case 0xb0:
    auVar17._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar17._0_8_ = 0xd000000000000020;
    return auVar17;
  case 0xe:
  case 0xa4:
    auVar6._8_8_ = 0xea00000000006570;
    auVar6._0_8_ = 0x79745f726f727265;
    return auVar6;
  case 0xf:
    pcVar3 = "user_exit_lens_timestamp";
  case 0x53:
  case 0x69:
  case 0x8a:
    puVar4 = (undefined1 *)((ulong)pcVar3 | 0x8000000000000000);
    pcVar3 = (char *)0x10;
  case 0xa8:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
  case 0x95:
    auVar10._0_8_ = (ulong)pcVar3 | 4;
    auVar10._8_8_ = puVar4;
    return auVar10;
  case 0x10:
  case 0x2a:
  case 0xc2:
  case 0xea:
    puVar4 = (undefined1 *)0x636e6574;
  case 0x43:
  case 0xdb:
    auVar5._8_8_ = (ulong)puVar4 & 0xffffffff | 0xed00007900000000;
    auVar5._0_8_ = 0x616c5f6c61746f74;
    return auVar5;
  case 0x11:
    auVar13._8_8_ = 0x800000010ef39e70;
    auVar13._0_8_ = 0xd000000000000018;
    return auVar13;
  case 0x12:
    pcVar3 = "bolt_asset_upload_start_timestamp";
  case 0xf0:
    auVar19._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar19._0_8_ = 0xd000000000000021;
    return auVar19;
  case 0x13:
    pcVar3 = "er provider cannot be nil";
  case 0x36:
  case 0xce:
  case 0xf6:
    pcVar3 = pcVar3 + 0xe20;
  case 0x1e:
  case 0x32:
  case 0xb6:
  case 0xca:
  case 0xde:
  case 0xf2:
    auVar23._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar23._0_8_ = 0xd000000000000013;
    return auVar23;
  case 0x14:
    pcVar3 = "backend_request_start_timestamp";
  case 0x5e:
  case 0x85:
  case 0x96:
  case 0x98:
    puVar4 = (undefined1 *)((ulong)(pcVar3 + -0x20) | 0x8000000000000000);
    pcVar3 = (char *)0x10;
  case 0xaa:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
  case 0x51:
  case 0x56:
  case 0x5a:
  case 0x5c:
  case 0x67:
  case 0x81:
  case 0x83:
  case 0x8d:
  case 0x92:
  case 0xaf:
    auVar14._0_8_ = (ulong)pcVar3 | 0xf;
    auVar14._8_8_ = puVar4;
    return auVar14;
  case 0x15:
  case 0x61:
  case 100:
  case 0x88:
  case 0xa9:
    pcVar3 = "er provider cannot be nil";
  case 0x6a:
  case 0x8f:
    pcVar3 = pcVar3 + 0xe00;
code_r0x0001013892a0:
    pcVar3 = pcVar3 + -0x20;
code_r0x0001013892a4:
    puVar4 = (undefined1 *)((ulong)pcVar3 | 0x8000000000000000);
    goto code_r0x0001013892a8;
  case 0x16:
    puVar4 = (undefined1 *)0x800000010ef39db0;
    pcVar3 = (char *)0x10;
  case 200:
    auVar22._8_8_ = puVar4;
    auVar22._0_8_ = ((ulong)pcVar3 | 0xd000000000000000) + 0x13;
    return auVar22;
  case 0x17:
  case 0x21:
  case 0xb9:
  case 0xe1:
    pcVar3 = "er provider cannot be nil";
  case 0xb4:
    puVar4 = (undefined1 *)((ulong)(pcVar3 + 0xd90) | 0x8000000000000000);
  case 0x42:
  case 0xda:
    auVar24._8_8_ = puVar4;
    auVar24._0_8_ = 0xd000000000000016;
    return auVar24;
  case 0x18:
  case 0x1d:
  case 0x31:
    puVar4 = (undefined1 *)0xec0000006e6f6973;
    puVar1 = (undefined1 *)0x736e656c;
  case 0x1c:
  case 0x35:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff0000ffffffff | 0x765f00000000);
  case 0xa0:
    auVar9._0_8_ = (ulong)puVar1 & 0xffffffffffff | 0x7265000000000000;
    auVar9._8_8_ = puVar4;
    return auVar9;
  case 0x19:
  case 0x30:
    puVar4 = (undefined1 *)0x64;
  case 0xf5:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffffffff | 0xe900000000000000);
  case 0xcd:
    puVar1 = (undefined1 *)0x7266;
  case 0xe0:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff | 0x695f646e65690000);
  case 0xb5:
  case 0xc9:
  case 0xdd:
  case 0xf1:
    auVar8._8_8_ = puVar4;
    auVar8._0_8_ = puVar1;
    return auVar8;
  case 0x1a:
    puVar4 = (undefined1 *)0x800000010ef39d70;
    pcVar3 = (char *)0xa;
    break;
  case 0x34:
    puVar2 = (undefined1 *)(ulong)*unaff_x20;
    FUN_101389094(puVar2);
    func_0x000107c5fb58(0x61705f6d61657264,puVar2,puVar4);
    goto code_r0x000107c6142c;
  case 0x58:
  case 0x94:
  case 0xb1:
code_r0x0001013892a8:
    pcVar3 = (char *)0x10;
  case 0x5f:
  case 0x86:
  case 0x8b:
  case 0x8c:
  case 0x90:
  case 0x97:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
  case 0x6e:
    auVar16._0_8_ = (ulong)pcVar3 | 7;
    auVar16._8_8_ = puVar4;
    return auVar16;
  case 0x5d:
  case 0x68:
  case 0x84:
    goto code_r0x0001013892a4;
  case 0xa2:
    FUN_101389094();
  case 0x37:
  case 0xcf:
  case 0xf7:
    func_0x000107c5fb58(&stack0x00000008,puVar1,puVar4);
    puVar2 = puVar1;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar4);
    auVar26._8_8_ = puVar2;
    auVar26._0_8_ = puVar4;
    return auVar26;
  case 0xdc:
    goto code_r0x000101389330;
  case 0xf4:
    param_3 = (undefined1 *)(ulong)*unaff_x20;
    func_0x000107c6068c(&stack0x00000008,0);
    FUN_101389094(param_3);
    puVar1 = &stack0x00000008;
    unaff_x19 = puVar4;
  case 0x22:
  case 0xba:
  case 0xe2:
    puVar2 = param_3;
  case 0x20:
    puVar4 = unaff_x19;
    func_0x000107c5fb58(puVar1,puVar2,puVar4);
    goto code_r0x000107c6142c;
  }
  puVar1 = (undefined1 *)((ulong)pcVar3 | 0xd000000000000010);
code_r0x0001013893cc:
  auVar25._8_8_ = puVar4;
  auVar25._0_8_ = puVar1;
  return auVar25;
}



/* Entry: 10138953c; end: 10138955f;  */

void FUN_10138953c(undefined1 *param_1,undefined1 param_2)

{
  FUN_10138a018();
  *param_1 = param_2;
  return;
}



/* Entry: 101389560; end: 101389577;  */

undefined1  [16] FUN_101389560(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101389578; end: 1013895c7;  */

void FUN_101389578(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10138ae70();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1013895c8; end: 101389e2b;  */

/* WARNING: Removing unreachable block (ram,0x000101389610) */
/* WARNING: Removing unreachable block (ram,0x00010138963c) */

void FUN_1013895c8(undefined8 param_1,byte param_2)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte **ppbVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte *pbStack_50;
  ulong uStack_48;
  byte bStack_31;
  
  uVar2 = 0x112d77020;
  bStack_31 = param_2;
  func_0x0001000285a8(0x112d77020,&UNK_10d936a60);
  uVar4 = uVar2;
  func_0x000107c604e0(&bStack_31);
  if (((uint)uVar4 & 0xff) != 1) goto LAB_1013898c8;
  pbVar8 = &bStack_31;
  func_0x000107c604d4();
  if (uVar2 == 0) {
    return;
  }
  uVar5 = (ulong)pbVar8 & 0xffffffffffff;
  uVar7 = uVar2 >> 0x38 & 0xf;
  uVar4 = uVar5;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar4 = uVar7;
  }
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar2);
    return;
  }
  if ((uVar2 >> 0x3c & 1) == 0) {
    if ((uVar2 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar8 >> 0x3c & 1) == 0) {
        uVar5 = uVar2;
        func_0x000107c60358();
      }
      else {
        pbVar8 = (byte *)((uVar2 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar8 == 0x2b) {
        if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101389934);
          (*pcVar1)();
        }
        lVar11 = uVar5 - 1;
        if (lVar11 == 0) goto LAB_1013898a0;
        lVar10 = 0;
        do {
          pbVar8 = pbVar8 + 1;
          if (((9 < *pbVar8 - 0x30) ||
              (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
             (uVar4 = (ulong)(byte)(*pbVar8 - 0x30), lVar10 = lVar9 + uVar4, SCARRY8(lVar9,uVar4)))
          goto LAB_1013898a0;
          uVar3 = 0;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      else if (*pbVar8 == 0x2d) {
        if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10138992c);
          (*pcVar1)();
        }
        lVar11 = uVar5 - 1;
        if (lVar11 == 0) {
LAB_1013898a0:
          uVar3 = 1;
        }
        else {
          lVar10 = 0;
          do {
            pbVar8 = pbVar8 + 1;
            if (((9 < *pbVar8 - 0x30) ||
                (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
               (uVar4 = (ulong)(byte)(*pbVar8 - 0x30), lVar10 = lVar9 - uVar4, SBORROW8(lVar9,uVar4)
               )) goto LAB_1013898a0;
            uVar3 = 0;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      else {
        if (uVar5 == 0) goto LAB_1013898a0;
        lVar11 = 0;
        if (pbVar8 == (byte *)0x0) {
          uVar3 = 0;
        }
        else {
          do {
            if (((9 < *pbVar8 - 0x30) ||
                (lVar10 = lVar11 * 10, SUB168(SEXT816(lVar11) * SEXT816(10),8) != lVar10 >> 0x3f))
               || (uVar4 = (ulong)(byte)(*pbVar8 - 0x30), lVar11 = lVar10 + uVar4,
                  SCARRY8(lVar10,uVar4))) goto LAB_1013898a0;
            uVar3 = 0;
            uVar5 = uVar5 - 1;
            pbVar8 = pbVar8 + 1;
          } while (uVar5 != 0);
        }
      }
    }
    else {
      pbStack_50 = pbVar8;
      uStack_48 = uVar2 & 0xffffffffffffff;
      uVar3 = (uint)pbVar8 & 0xff;
      if (uVar3 == 0x2b) {
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101389938);
          (*pcVar1)();
        }
        lVar11 = uVar7 - 1;
        if (lVar11 == 0) goto LAB_1013898a0;
        lVar10 = 0;
        pbVar8 = (byte *)((ulong)&pbStack_50 | 1);
        do {
          if (((9 < *pbVar8 - 0x30) ||
              (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
             (uVar4 = (ulong)(byte)(*pbVar8 - 0x30), lVar10 = lVar9 + uVar4, SCARRY8(lVar9,uVar4)))
          goto LAB_1013898a0;
          uVar3 = 0;
          lVar11 = lVar11 + -1;
          pbVar8 = pbVar8 + 1;
        } while (lVar11 != 0);
      }
      else if (uVar3 == 0x2d) {
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101389930);
          (*pcVar1)();
        }
        lVar11 = uVar7 - 1;
        if (lVar11 == 0) goto LAB_1013898a0;
        lVar10 = 0;
        pbVar8 = (byte *)((ulong)&pbStack_50 | 1);
        do {
          if (((9 < *pbVar8 - 0x30) ||
              (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
             (uVar4 = (ulong)(byte)(*pbVar8 - 0x30), lVar10 = lVar9 - uVar4, SBORROW8(lVar9,uVar4)))
          goto LAB_1013898a0;
          uVar3 = 0;
          lVar11 = lVar11 + -1;
          pbVar8 = pbVar8 + 1;
        } while (lVar11 != 0);
      }
      else {
        if (uVar7 == 0) goto LAB_1013898a0;
        lVar11 = 0;
        ppbVar6 = &pbStack_50;
        do {
          if (((9 < *(byte *)ppbVar6 - 0x30) ||
              (lVar10 = lVar11 * 10, SUB168(SEXT816(lVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
             (uVar4 = (ulong)(byte)(*(byte *)ppbVar6 - 0x30), lVar11 = lVar10 + uVar4,
             SCARRY8(lVar10,uVar4))) goto LAB_1013898a0;
          uVar3 = 0;
          uVar7 = uVar7 - 1;
          ppbVar6 = (byte **)((long)ppbVar6 + 1);
        } while (uVar7 != 0);
      }
    }
  }
  else {
    uVar4 = uVar2;
    FUN_100edba6c();
    uVar3 = (uint)uVar4;
  }
  func_0x000107c6142c(uVar2);
  if ((uVar3 & 0xff) == 1) {
    return;
  }
LAB_1013898c8:
  FUN_10138c828();
  return;
}



/* Entry: 101389e2c; end: 101389fcf;  */

/* WARNING: Removing unreachable block (ram,0x000101389f90) */
/* WARNING: Removing unreachable block (ram,0x000101389eb8) */

undefined1 * FUN_101389e2c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_80 [23];
  undefined1 uStack_69;
  undefined1 *puStack_68;
  long lStack_60;
  
  lVar1 = 0;
  func_0x000107c5fb10();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d77020;
  uStack_69 = param_2;
  func_0x0001000285a8(0x112d77020,&UNK_10d936a60);
  puVar3 = &uStack_69;
  func_0x000107c604d4();
  if (lVar2 != 0) {
    puStack_68 = puVar3;
    lStack_60 = lVar2;
    func_0x000107c5fb04(puVar8);
    FUN_100e8b654();
    uVar7 = 0;
    puVar4 = puVar8;
    func_0x000107c60214(puVar8,0,PTR___sSSN_11034da80,puVar3);
    (**(code **)(lVar9 + 8))(puVar8,lVar1);
    func_0x000107c6142c(lVar2);
    if (uVar7 >> 0x3c < 0xf) {
      uVar5 = 0;
      func_0x000107c5eb24();
      func_0x000107c613fc();
      func_0x000107c5eb20();
      uVar6 = uVar5;
      func_0x00010138aff0();
      func_0x000107c5eb1c(&puStack_68,&UNK_1103a9f48,puVar4,uVar7,&UNK_1103a9f48,uVar6);
      func_0x0001000b44c0(puVar4,uVar7);
      func_0x000107c61574(uVar5);
      return puStack_68;
    }
  }
  return (undefined1 *)0x0;
}



/* Entry: 101389fd0; end: 10138a017;  */

void FUN_101389fd0(undefined8 param_1)

{
  long unaff_x21;
  undefined1 auStack_170 [336];
  
  FUN_10138a084(auStack_170);
  if (unaff_x21 == 0) {
    func_0x000107c610b4(param_1,auStack_170,0x149);
  }
  return;
}



/* Entry: 10138a018; end: 10138a083;  */

ulong FUN_10138a018(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c60608();
  func_0x000107c6142c(param_2);
  if (0x1a < uVar1) {
    uVar1 = 0x1b;
  }
  return uVar1;
}



/* Entry: 10138a084; end: 10138a7c7;  */

/* WARNING: Removing unreachable block (ram,0x00010138a174) */
/* WARNING: Removing unreachable block (ram,0x00010138a444) */
/* WARNING: Removing unreachable block (ram,0x00010138a3b4) */
/* WARNING: Removing unreachable block (ram,0x00010138a304) */
/* WARNING: Removing unreachable block (ram,0x00010138a278) */
/* WARNING: Removing unreachable block (ram,0x00010138a210) */
/* WARNING: Removing unreachable block (ram,0x00010138a1dc) */
/* WARNING: Removing unreachable block (ram,0x00010138a244) */
/* WARNING: Removing unreachable block (ram,0x00010138a2b0) */
/* WARNING: Removing unreachable block (ram,0x00010138a35c) */
/* WARNING: Removing unreachable block (ram,0x00010138a408) */
/* WARNING: Removing unreachable block (ram,0x00010138a4b0) */
/* WARNING: Removing unreachable block (ram,0x00010138a1a8) */

void FUN_10138a084(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_1b0 [12];
  undefined4 uStack_1a4;
  undefined1 *puStack_1a0;
  undefined4 uStack_194;
  undefined1 *puStack_190;
  undefined4 uStack_184;
  undefined1 *puStack_180;
  undefined4 uStack_174;
  undefined1 *puStack_170;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  long lStack_118;
  byte *pbStack_110;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  long lStack_f8;
  byte *pbStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  long lStack_b8;
  byte *pbStack_b0;
  long lStack_a8;
  byte *pbStack_a0;
  long lStack_98;
  byte *pbStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_52;
  byte bStack_51;
  
  lVar1 = 0x112d77020;
  func_0x0001000285a8(0x112d77020,&UNK_10d936a60);
  lVar16 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_1b0 + -extraout_x8;
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  func_0x0001000a8868(param_2,uVar11);
  FUN_10138ae70();
  func_0x000107c606e0(puVar15,&UNK_1103a9a00,&UNK_1103a9a00,lVar2,uVar11,uVar12);
  if (unaff_x21 == 0) {
    uVar9 = 0;
    puVar3 = puVar15;
    FUN_10138da54();
    bStack_51 = 1;
    pbVar4 = &bStack_51;
    lVar2 = lVar1;
    puStack_88 = puVar3;
    func_0x000107c604d4();
    bStack_51 = 2;
    pbVar5 = &bStack_51;
    lVar10 = lVar1;
    lStack_98 = lVar2;
    pbStack_90 = pbVar4;
    func_0x000107c604d4();
    bStack_51 = 3;
    pbVar4 = &bStack_51;
    lVar2 = lVar1;
    lStack_a8 = lVar10;
    pbStack_a0 = pbVar5;
    func_0x000107c604d4();
    bStack_51 = 9;
    pbVar5 = &bStack_51;
    lVar10 = lVar1;
    lStack_b8 = lVar2;
    pbStack_b0 = pbVar4;
    func_0x000107c604d4();
    bStack_51 = 0xf;
    pbVar4 = &bStack_51;
    lVar2 = lVar1;
    lStack_c8 = lVar10;
    pbStack_c0 = pbVar5;
    func_0x000107c604d4();
    bStack_51 = 0x18;
    pbVar5 = &bStack_51;
    lVar10 = lVar1;
    lStack_d8 = lVar2;
    pbStack_d0 = pbVar4;
    func_0x000107c604d4();
    bStack_51 = 0x19;
    pbVar4 = &bStack_51;
    lVar2 = lVar1;
    lStack_e8 = lVar10;
    pbStack_e0 = pbVar5;
    func_0x000107c604d4();
    uStack_52 = 4;
    lStack_f8 = lVar2;
    pbStack_f0 = pbVar4;
    func_0x00010138aeb0();
    puVar6 = &UNK_1103a9b70;
    func_0x000107c604e8(&bStack_51,&UNK_1103a9b70,&uStack_52,lVar1,&UNK_1103a9b70,pbVar4);
    uStack_fc = (uint)bStack_51;
    uStack_52 = 5;
    func_0x00010138aef0();
    puVar7 = &UNK_1103a9c00;
    func_0x000107c604e8(&bStack_51,&UNK_1103a9c00,&uStack_52,lVar1,&UNK_1103a9c00,puVar6);
    uStack_100 = (uint)bStack_51;
    uStack_52 = 6;
    func_0x00010138af30();
    puVar6 = &UNK_1103a9c90;
    func_0x000107c604e8(&bStack_51,&UNK_1103a9c90,&uStack_52,lVar1,&UNK_1103a9c90,puVar7);
    uStack_104 = (uint)bStack_51;
    uStack_52 = 7;
    func_0x00010138af70();
    func_0x000107c604e8(&bStack_51,&UNK_1103a9d20,&uStack_52,lVar1,&UNK_1103a9d20,puVar6);
    uStack_108 = (uint)bStack_51;
    bStack_51 = 8;
    pbVar4 = &bStack_51;
    lVar2 = lVar1;
    func_0x000107c604d4();
    uStack_52 = 0xc;
    lStack_118 = lVar2;
    pbStack_110 = pbVar4;
    func_0x00010138afb0();
    lVar2 = lVar1;
    func_0x000107c604e8(&bStack_51,&UNK_1103a9db0,&uStack_52,lVar1,&UNK_1103a9db0,pbVar4);
    uVar13 = (undefined1)lVar2;
    uStack_11c = (uint)bStack_51;
    puVar3 = puVar15;
    lStack_80 = lVar16;
    lStack_78 = lVar1;
    lStack_70 = param_2;
    FUN_1013895c8(puVar15,0xd);
    uStack_124 = SUB84(puVar3,0);
    puVar3 = puVar15;
    func_0x000101389938(puVar15,0xe);
    uStack_128 = SUB84(puVar3,0);
    puVar3 = puVar15;
    FUN_1013895c8(puVar15,0x1a);
    uStack_120 = SUB84(puVar3,0);
    uStack_134 = 0x10;
    puVar3 = puVar15;
    func_0x000101389ca8();
    uStack_144 = 0x13;
    puVar8 = puVar15;
    puStack_130 = puVar3;
    func_0x000101389ca8();
    uStack_154 = 0x15;
    puVar3 = puVar15;
    puStack_140 = puVar8;
    func_0x000101389ca8();
    uStack_164 = 0x17;
    puVar8 = puVar15;
    puStack_150 = puVar3;
    func_0x000101389ca8();
    uStack_174 = 0x11;
    puVar3 = puVar15;
    puStack_160 = puVar8;
    func_0x00010138da78();
    uStack_184 = 0x12;
    puVar8 = puVar15;
    puStack_170 = puVar3;
    func_0x00010138da78();
    uStack_194 = 0x14;
    puVar3 = puVar15;
    puStack_180 = puVar8;
    func_0x00010138da78();
    uStack_1a4 = 0x16;
    puVar8 = puVar15;
    puStack_190 = puVar3;
    func_0x00010138da78();
    uVar11 = 10;
    puVar3 = puVar15;
    puStack_1a0 = puVar8;
    FUN_101389e2c();
    uVar12 = 0xb;
    puVar8 = puVar15;
    uVar14 = uVar13;
    FUN_101389e2c();
    (**(code **)(lStack_80 + 8))(puVar15,lStack_78);
    func_0x0001000834e4(lStack_70);
    *param_1 = puStack_88;
    *(undefined1 *)(param_1 + 1) = uVar9;
    param_1[2] = pbStack_90;
    param_1[3] = lStack_98;
    param_1[4] = pbStack_a0;
    param_1[5] = lStack_a8;
    param_1[6] = pbStack_b0;
    param_1[7] = lStack_b8;
    *(char *)(param_1 + 8) = (char)uStack_fc;
    *(char *)((long)param_1 + 0x41) = (char)uStack_100;
    *(char *)((long)param_1 + 0x42) = (char)uStack_104;
    *(char *)((long)param_1 + 0x43) = (char)uStack_108;
    param_1[9] = pbStack_110;
    param_1[10] = lStack_118;
    param_1[0xb] = pbStack_c0;
    param_1[0xc] = lStack_c8;
    param_1[0xd] = puVar3;
    param_1[0xe] = uVar11;
    *(undefined1 *)(param_1 + 0xf) = uVar13;
    param_1[0x10] = puVar8;
    param_1[0x11] = uVar12;
    *(undefined1 *)(param_1 + 0x12) = uVar14;
    *(char *)((long)param_1 + 0x91) = (char)uStack_11c;
    *(char *)((long)param_1 + 0x92) = (char)uStack_124;
    *(char *)((long)param_1 + 0x93) = (char)uStack_128;
    param_1[0x13] = pbStack_d0;
    param_1[0x14] = lStack_d8;
    param_1[0x15] = puStack_130;
    *(char *)(param_1 + 0x16) = (char)uStack_134;
    param_1[0x17] = puStack_170;
    *(char *)(param_1 + 0x18) = (char)uStack_174;
    param_1[0x19] = puStack_180;
    *(char *)(param_1 + 0x1a) = (char)uStack_184;
    param_1[0x1b] = puStack_140;
    *(char *)(param_1 + 0x1c) = (char)uStack_144;
    param_1[0x1d] = puStack_190;
    *(char *)(param_1 + 0x1e) = (char)uStack_194;
    param_1[0x1f] = puStack_150;
    *(char *)(param_1 + 0x20) = (char)uStack_154;
    param_1[0x21] = puStack_1a0;
    *(char *)(param_1 + 0x22) = (char)uStack_1a4;
    param_1[0x23] = puStack_160;
    *(char *)(param_1 + 0x24) = (char)uStack_164;
    param_1[0x25] = pbStack_e0;
    param_1[0x26] = lStack_e8;
    param_1[0x27] = pbStack_f0;
    param_1[0x28] = lStack_f8;
    *(char *)(param_1 + 0x29) = (char)uStack_120;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 10138a7c8; end: 10138a84b;  */

long FUN_10138a7c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10138a84c; end: 10138a9cf;  */

undefined8 * FUN_10138a84c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar4;
  uVar7 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar7;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar7 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar7;
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined1 *)((long)param_1 + 0x92) = *(undefined1 *)((long)param_2 + 0x92);
  *(undefined1 *)((long)param_1 + 0x93) = *(undefined1 *)((long)param_2 + 0x93);
  uVar7 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar7;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  param_1[0x19] = param_2[0x19];
  uVar6 = param_2[0x1b];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x1b] = uVar6;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  param_1[0x1d] = param_2[0x1d];
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  param_1[0x1f] = param_2[0x1f];
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  param_1[0x21] = param_2[0x21];
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  param_1[0x23] = param_2[0x23];
  uVar6 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = uVar6;
  uVar5 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = uVar5;
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 10138a9d0; end: 10138abeb;  */

undefined8 * FUN_10138a9d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
  *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xe];
  uVar1 = param_2[0xd];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar1;
  uVar2 = param_2[0x11];
  uVar1 = param_2[0x10];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  *(undefined1 *)((long)param_1 + 0x91) = *(undefined1 *)((long)param_2 + 0x91);
  *(undefined1 *)((long)param_1 + 0x92) = *(undefined1 *)((long)param_2 + 0x92);
  *(undefined1 *)((long)param_1 + 0x93) = *(undefined1 *)((long)param_2 + 0x93);
  param_1[0x13] = param_2[0x13];
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  param_1[0x19] = uVar1;
  uVar1 = param_2[0x1b];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x1b] = uVar1;
  uVar1 = param_2[0x1d];
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  param_1[0x1d] = uVar1;
  uVar1 = param_2[0x1f];
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  param_1[0x1f] = uVar1;
  uVar1 = param_2[0x21];
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  param_1[0x21] = uVar1;
  uVar1 = param_2[0x23];
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  param_1[0x23] = uVar1;
  param_1[0x25] = param_2[0x25];
  uVar1 = param_1[0x26];
  param_1[0x26] = param_2[0x26];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x27] = param_2[0x27];
  uVar1 = param_1[0x28];
  param_1[0x28] = param_2[0x28];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  return param_1;
}



/* Entry: 10138abec; end: 10138abf3;  */

void FUN_10138abec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x149);
  return;
}



/* Entry: 10138abf4; end: 10138ad57;  */

undefined8 * FUN_10138abf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  uVar2 = param_2[0x14];
  uVar1 = param_1[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x19] = param_2[0x19];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x1b] = param_2[0x1b];
  uVar2 = param_2[0x1d];
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  param_1[0x1d] = uVar2;
  param_1[0x1f] = param_2[0x1f];
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  param_1[0x21] = param_2[0x21];
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  param_1[0x23] = param_2[0x23];
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar2 = param_2[0x26];
  uVar1 = param_1[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0x28];
  uVar1 = param_1[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  return param_1;
}



/* Entry: 10138ad58; end: 10138ae6f;  */

int FUN_10138ad58(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x149) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10138ae70; end: 10138b02f;  */

void FUN_10138ae70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936b64;
  func_0x000107c61520(&UNK_10d936b64,&UNK_1103a9a00);
  puRam0000000112d77028 = puVar1;
  return;
}



/* Entry: 10138b030; end: 10138b0a7;  */

void FUN_10138b030(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  func_0x000107c60eb4(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10138b0a8; end: 10138b20f;  */

int FUN_10138b0a8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x1a) {
      iVar2 = 4;
    }
    if (param_2 + 0x1a >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10138b124;
        goto LAB_10138b108;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10138b108:
      return ((uint)*param_1 | uVar1 << 8) - 0x1a;
    }
  }
LAB_10138b124:
  iVar2 = *param_1 - 0x1b;
  if (*param_1 < 0x1b) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10138b210; end: 10138b24f;  */

void FUN_10138b210(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936b3c;
  func_0x000107c61520(&UNK_10d936b3c,&UNK_1103a9a00);
  puRam0000000112d77060 = puVar1;
  return;
}



/* Entry: 10138b250; end: 10138b253;  */

void FUN_10138b250(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936a9c;
  func_0x000107c61520(&UNK_10d936a9c,&UNK_1103a9a00);
  puRam0000000112d77068 = puVar1;
  return;
}



/* Entry: 10138b254; end: 10138b293;  */

void FUN_10138b254(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936a9c;
  func_0x000107c61520(&UNK_10d936a9c,&UNK_1103a9a00);
  puRam0000000112d77068 = puVar1;
  return;
}



/* Entry: 10138b294; end: 10138b297;  */

void FUN_10138b294(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936a74;
  func_0x000107c61520(&UNK_10d936a74,&UNK_1103a9a00);
  puRam0000000112d77070 = puVar1;
  return;
}



/* Entry: 10138b298; end: 10138b2d7;  */

void FUN_10138b298(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936a74;
  func_0x000107c61520(&UNK_10d936a74,&UNK_1103a9a00);
  puRam0000000112d77070 = puVar1;
  return;
}



/* Entry: 10138b2d8; end: 10138b93b;  */

void FUN_10138b2d8(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xeb00000000617265;
  uVar4 = 0x6d61635f6b636162;
  if (param_1 != 4) {
    uVar1 = 0xeb00000000726165;
    uVar4 = 0x725f6172656d6163;
  }
  uVar3 = 0xec000000746e6f72;
  uVar5 = 0x665f6172656d6163;
  if (param_1 != 3) {
    uVar3 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0xe900000000000045;
  uVar4 = 0x49464c45535f594d;
  if (param_1 != 1) {
    uVar1 = 0xeb00000000617265;
    uVar4 = 0x6d61635f65636166;
  }
  uVar2 = 0xeb000000006c6c6f;
  uVar6 = 0x725f6172656d6163;
  if (param_1 != 0) {
    uVar2 = uVar1;
    uVar6 = uVar4;
  }
  if (param_1 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10138b93c; end: 10138b993;  */

void FUN_10138b93c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x434e595341;
  if (cVar4 != '\x01') {
    uVar3 = 0x43495645445f4e4f;
  }
  uVar1 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe900000000000045;
  }
  uVar2 = 0x434e5953;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe400000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10138b994; end: 10138b9ef;  */

void FUN_10138b994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010138d710();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 10138b9f0; end: 10138b9f7;  */

void FUN_10138b9f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xeb00000000617265;
  uVar5 = 0x6d61635f6b636162;
  if (bVar4 != 4) {
    uVar1 = 0xeb00000000726165;
    uVar5 = 0x725f6172656d6163;
  }
  uVar3 = 0xec000000746e6f72;
  uVar6 = 0x665f6172656d6163;
  if (bVar4 != 3) {
    uVar3 = uVar1;
    uVar6 = uVar5;
  }
  uVar1 = 0xe900000000000045;
  uVar5 = 0x49464c45535f594d;
  if (bVar4 != 1) {
    uVar1 = 0xeb00000000617265;
    uVar5 = 0x6d61635f65636166;
  }
  uVar2 = 0xeb000000006c6c6f;
  uVar7 = 0x725f6172656d6163;
  if (bVar4 != 0) {
    uVar2 = uVar1;
    uVar7 = uVar5;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar6 = uVar7;
  }
  func_0x000107c5fb58(auStack_68,uVar6,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10138b9f8; end: 10138baef;  */

void FUN_10138b9f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0xeb00000000617265;
  uVar5 = 0x6d61635f6b636162;
  if (bVar4 != 4) {
    uVar1 = 0xeb00000000726165;
    uVar5 = 0x725f6172656d6163;
  }
  uVar3 = 0xec000000746e6f72;
  uVar6 = 0x665f6172656d6163;
  if (bVar4 != 3) {
    uVar3 = uVar1;
    uVar6 = uVar5;
  }
  uVar1 = 0xe900000000000045;
  uVar5 = 0x49464c45535f594d;
  if (bVar4 != 1) {
    uVar1 = 0xeb00000000617265;
    uVar5 = 0x6d61635f65636166;
  }
  uVar2 = 0xeb000000006c6c6f;
  uVar7 = 0x725f6172656d6163;
  if (bVar4 != 0) {
    uVar2 = uVar1;
    uVar7 = uVar5;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar6 = uVar7;
  }
  func_0x000107c5fb58(param_1,uVar6,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 10138baf0; end: 10138baf7;  */

void FUN_10138baf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar1 = 0xeb00000000617265;
  uVar5 = 0x6d61635f6b636162;
  if (bVar4 != 4) {
    uVar1 = 0xeb00000000726165;
    uVar5 = 0x725f6172656d6163;
  }
  uVar3 = 0xec000000746e6f72;
  uVar6 = 0x665f6172656d6163;
  if (bVar4 != 3) {
    uVar3 = uVar1;
    uVar6 = uVar5;
  }
  uVar1 = 0xe900000000000045;
  uVar5 = 0x49464c45535f594d;
  if (bVar4 != 1) {
    uVar1 = 0xeb00000000617265;
    uVar5 = 0x6d61635f65636166;
  }
  uVar2 = 0xeb000000006c6c6f;
  uVar7 = 0x725f6172656d6163;
  if (bVar4 != 0) {
    uVar2 = uVar1;
    uVar7 = uVar5;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar6 = uVar7;
  }
  func_0x000107c5fb58(auStack_68,uVar6,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10138baf8; end: 10138bb23;  */

void FUN_10138baf8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010138c8c0(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10138bb24; end: 10138bc0f;  */

void FUN_10138bb24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0xeb00000000617265;
  uVar5 = 0x6d61635f6b636162;
  if (bVar4 != 4) {
    uVar1 = 0xeb00000000726165;
    uVar5 = 0x725f6172656d6163;
  }
  uVar3 = 0xec000000746e6f72;
  uVar6 = 0x665f6172656d6163;
  if (bVar4 != 3) {
    uVar3 = uVar1;
    uVar6 = uVar5;
  }
  uVar1 = 0xe900000000000045;
  uVar5 = 0x49464c45535f594d;
  if (bVar4 != 1) {
    uVar1 = 0xeb00000000617265;
    uVar5 = 0x6d61635f65636166;
  }
  uVar2 = 0xeb000000006c6c6f;
  uVar7 = 0x725f6172656d6163;
  if (bVar4 != 0) {
    uVar2 = uVar1;
    uVar7 = uVar5;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar6 = uVar7;
  }
  *param_1 = uVar6;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10138bc10; end: 10138bc6b;  */

void FUN_10138bc10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010138d6d0();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 10138bc6c; end: 10138bdb7;  */

void FUN_10138bc6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x4d4f54535543;
  if (cVar3 != '\x01') {
    uVar1 = 0x474e49444e455254;
  }
  uVar2 = 0xe600000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10138bdb8; end: 10138be2f;  */

void FUN_10138bdb8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10138be30; end: 10138be6b;  */

void FUN_10138be30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x4d4f54535543;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x474e49444e455254;
  }
  uVar2 = 0xe600000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10138be6c; end: 10138bec7;  */

void FUN_10138be6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010138d690();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 10138bec8; end: 10138bee3;  */

void FUN_10138bec8(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xeb00000000424154;
  uVar3 = 0x5f4e574f4e4b4e55;
  if (bVar2 != 6) {
    uVar5 = 0xea00000000004445;
    uVar3 = 0x4e49464544455250;
  }
  uVar6 = 0xe900000000000053;
  uVar1 = 0x455449524f564146;
  if (bVar2 != 4) {
    uVar6 = 0xe600000000000000;
    uVar1 = 0x544e45434552;
  }
  if (bVar2 < 6) {
    uVar5 = uVar6;
    uVar3 = uVar1;
  }
  uVar6 = 0x4d4f54535543;
  if (bVar2 != 2) {
    uVar6 = 0x4d4f444e4152;
  }
  uVar1 = 0xe600000000000000;
  uVar4 = 0x44454b434f4c4e55;
  if (bVar2 != 0) {
    uVar4 = 0x474e49444e455254;
  }
  if (bVar2 < 2) {
    uVar1 = 0xe800000000000000;
    uVar6 = uVar4;
  }
  if (bVar2 < 4) {
    uVar5 = uVar1;
    uVar3 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c606a8();
  return;
}



/* Entry: 10138bee4; end: 10138bf0f;  */

void FUN_10138bee4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010138c924(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10138bf10; end: 10138c00f;  */

void FUN_10138bf10(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar5 = 0xeb00000000424154;
  uVar3 = 0x5f4e574f4e4b4e55;
  if (bVar2 != 6) {
    uVar5 = 0xea00000000004445;
    uVar3 = 0x4e49464544455250;
  }
  uVar6 = 0xe900000000000053;
  uVar1 = 0x455449524f564146;
  if (bVar2 != 4) {
    uVar6 = 0xe600000000000000;
    uVar1 = 0x544e45434552;
  }
  if (bVar2 < 6) {
    uVar5 = uVar6;
    uVar3 = uVar1;
  }
  uVar6 = 0x4d4f54535543;
  if (bVar2 != 2) {
    uVar6 = 0x4d4f444e4152;
  }
  uVar1 = 0xe600000000000000;
  uVar4 = 0x44454b434f4c4e55;
  if (bVar2 != 0) {
    uVar4 = 0x474e49444e455254;
  }
  if (bVar2 < 2) {
    uVar1 = 0xe800000000000000;
    uVar6 = uVar4;
  }
  if (bVar2 < 4) {
    uVar5 = uVar1;
    uVar3 = uVar6;
  }
  *param_1 = uVar3;
  param_1[1] = uVar5;
  return;
}



/* Entry: 10138c010; end: 10138c06b;  */

void FUN_10138c010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010138d650();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 10138c06c; end: 10138c31b;  */

void FUN_10138c06c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xee004c4c41575941;
  uVar3 = 0x505f4c45434e4143;
  if (bVar4 != 3) {
    uVar5 = 0xe700000000000000;
    uVar3 = 0x44455452415453;
  }
  uVar1 = 0x4c45434e4143;
  if (bVar4 != 2) {
    uVar1 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar4 != 2) {
    uVar3 = uVar5;
  }
  uVar5 = 0x53534543435553;
  if (bVar4 != 0) {
    uVar5 = 0x524f525245;
  }
  uVar2 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe500000000000000;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar1 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10138c31c; end: 10138c3bf;  */

void FUN_10138c31c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar5 = 0xee004c4c41575941;
  uVar3 = 0x505f4c45434e4143;
  if (bVar4 != 3) {
    uVar5 = 0xe700000000000000;
    uVar3 = 0x44455452415453;
  }
  uVar1 = 0x4c45434e4143;
  if (bVar4 != 2) {
    uVar1 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar4 != 2) {
    uVar3 = uVar5;
  }
  uVar5 = 0x53534543435553;
  if (bVar4 != 0) {
    uVar5 = 0x524f525245;
  }
  uVar2 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe500000000000000;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10138c3c0; end: 10138c41b;  */

void FUN_10138c3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010138d610();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 10138c41c; end: 10138c443;  */

void FUN_10138c41c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_10138c828();
  *param_1 = uVar1;
  return;
}



/* Entry: 10138c444; end: 10138c44f;  */

void FUN_10138c444(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10138c450; end: 10138c4ab;  */

void FUN_10138c450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010138d5d0();
  func_0x000107c5fc44(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 10138c4ac; end: 10138c59b;  */

void FUN_10138c4ac(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(*(undefined8 *)(&UNK_10d937348 + (ulong)bVar1 * 8));
  func_0x000107c606a8();
  return;
}



/* Entry: 10138c59c; end: 10138c5b3;  */

void FUN_10138c59c(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&UNK_10d937348 + (ulong)*unaff_x20 * 8);
  return;
}



/* Entry: 10138c5b4; end: 10138c60f;  */

void FUN_10138c5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10138d590();
  func_0x000107c5fc44(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 10138c610; end: 10138c693;  */

void FUN_10138c610(void)

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



/* Entry: 10138c694; end: 10138c6c7;  */

undefined1  [16] FUN_10138c694(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x746867696568;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6874646977;
  }
  uVar2 = 0xe600000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe500000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10138c6c8; end: 10138c797;  */

void FUN_10138c6c8(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x6874646977;
  if ((param_2 == 0x6874646977 && param_3 == -0x1b00000000000000) ||
     (func_0x000107c605b8(0x6874646977,0xe500000000000000,param_2,param_3,0), (uVar1 & 1) != 0)) {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_2 == 0x746867696568) && (param_3 == -0x1a00000000000000)) {
      func_0x000107c6142c(0xe600000000000000);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x746867696568,0xe600000000000000,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 10138c798; end: 10138c7af;  */

undefined1  [16] FUN_10138c798(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10138c7b0; end: 10138c7ff;  */

void FUN_10138c7b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010138d750();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}


