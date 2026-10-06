/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f505ec; end: 100f50623; -[_TtC23SCCommerceTopicPageImpl33SCCommerceTopicPageViewController initWithCoder:] */

undefined8 FUN_100f505ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100f5073c();
  func_0x000107c61464(param_1,uVar1,8,7);
  return 0;
}



/* Entry: 100f50624; end: 100f506df; -[_TtC23SCCommerceTopicPageImpl33SCCommerceTopicPageViewController viewDidLoad] */

void FUN_100f50624(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000100f5073c();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar3 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0x61705f6369706f74;
    func_0x000107c5fadc(0x61705f6369706f74,0xed000063765f6567);
    func_0x000107c520f4(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f506e0);
  (*pcVar2)();
}



/* Entry: 100f506e0; end: 100f5075b; -[_TtC23SCCommerceTopicPageImpl33SCCommerceTopicPageViewController initWithNibName:bundle:] */

void FUN_100f506e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceTopicPageImpl.SCCommerceTopicPageViewController",0x39,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5070c);
  (*pcVar1)();
}



/* Entry: 100f5075c; end: 100f50763; -[_TtC23SCCommerceTopicPageImpl33SCCommerceTopicPageViewController pageViewName] */

undefined8 FUN_100f5075c(void)

{
  return 0x35;
}



/* Entry: 100f50764; end: 100f5076f; -[SCCommerceTopicPageEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50764(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de40;
  func_0x000107c61428(param_1 + _DAT_112d4de40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f50770; end: 100f5077b; -[SCCommerceTopicPageEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50770(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de40;
  func_0x000107c61428(param_1 + _DAT_112d4de40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5077c; end: 100f50787; -[SCCommerceTopicPageEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5077c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de48;
  func_0x000107c61428(param_1 + _DAT_112d4de48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f50788; end: 100f50793; -[SCCommerceTopicPageEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50788(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de48;
  func_0x000107c61428(param_1 + _DAT_112d4de48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f50794; end: 100f5079f; -[SCCommerceTopicPageEntryPoint valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50794(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de50;
  func_0x000107c61428(param_1 + _DAT_112d4de50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f507a0; end: 100f507ab; -[SCCommerceTopicPageEntryPoint setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f507a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de50;
  func_0x000107c61428(param_1 + _DAT_112d4de50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f507ac; end: 100f507b7; -[SCCommerceTopicPageEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f507ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de58;
  func_0x000107c61428(param_1 + _DAT_112d4de58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f507b8; end: 100f507c3; -[SCCommerceTopicPageEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f507b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de58;
  func_0x000107c61428(param_1 + _DAT_112d4de58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f507c4; end: 100f507cf; -[SCCommerceTopicPageEntryPoint showcaseServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f507c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de60;
  func_0x000107c61428(param_1 + _DAT_112d4de60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f507d0; end: 100f507db; -[SCCommerceTopicPageEntryPoint setShowcaseServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f507d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de60;
  func_0x000107c61428(param_1 + _DAT_112d4de60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f507dc; end: 100f507e7; -[SCCommerceTopicPageEntryPoint commerceFavoritesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f507dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de68;
  func_0x000107c61428(param_1 + _DAT_112d4de68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f507e8; end: 100f507f3; -[SCCommerceTopicPageEntryPoint setCommerceFavoritesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f507e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de68;
  func_0x000107c61428(param_1 + _DAT_112d4de68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f507f4; end: 100f507ff; -[SCCommerceTopicPageEntryPoint commerceConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f507f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de70;
  func_0x000107c61428(param_1 + _DAT_112d4de70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f50800; end: 100f5080b; -[SCCommerceTopicPageEntryPoint setCommerceConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50800(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de70;
  func_0x000107c61428(param_1 + _DAT_112d4de70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5080c; end: 100f50817; -[SCCommerceTopicPageEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5080c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de78;
  func_0x000107c61428(param_1 + _DAT_112d4de78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f50818; end: 100f50823; -[SCCommerceTopicPageEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de78;
  func_0x000107c61428(param_1 + _DAT_112d4de78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f50824; end: 100f5082f; -[SCCommerceTopicPageEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50824(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de80;
  func_0x000107c61428(param_1 + _DAT_112d4de80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f50830; end: 100f5083b; -[SCCommerceTopicPageEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50830(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de80;
  func_0x000107c61428(param_1 + _DAT_112d4de80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5083c; end: 100f50847; -[SCCommerceTopicPageEntryPoint commerceStaticImageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5083c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de88;
  func_0x000107c61428(param_1 + _DAT_112d4de88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f50848; end: 100f5088b;  */

void FUN_100f50848(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f5088c; end: 100f50897; -[SCCommerceTopicPageEntryPoint setCommerceStaticImageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5088c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de88;
  func_0x000107c61428(param_1 + _DAT_112d4de88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f50898; end: 100f508eb;  */

void FUN_100f50898(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f508ec; end: 100f50933; -[SCCommerceTopicPageEntryPoint productCatalogScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f508ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de90;
  func_0x000107c61428(param_1 + _DAT_112d4de90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f50934; end: 100f5093f; -[SCCommerceTopicPageEntryPoint setProductCatalogScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de90;
  func_0x000107c61428(param_1 + _DAT_112d4de90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f50940; end: 100f50987; -[SCCommerceTopicPageEntryPoint favoritesCatalogScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50940(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4de98;
  func_0x000107c61428(param_1 + _DAT_112d4de98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f50988; end: 100f50993; -[SCCommerceTopicPageEntryPoint setFavoritesCatalogScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50988(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4de98;
  func_0x000107c61428(param_1 + _DAT_112d4de98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f50994; end: 100f509f3;  */

void FUN_100f50994(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100f509f4; end: 100f50ef3;  */

/* WARNING: Possible PIC construction at 0x000100f50c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f50cd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f50ce8) */
/* WARNING: Removing unreachable block (ram,0x000100f50d08) */
/* WARNING: Removing unreachable block (ram,0x000100f50d38) */
/* WARNING: Removing unreachable block (ram,0x000100f50d28) */
/* WARNING: Removing unreachable block (ram,0x000100f50d68) */
/* WARNING: Removing unreachable block (ram,0x000100f50d58) */
/* WARNING: Removing unreachable block (ram,0x000100f50d48) */
/* WARNING: Removing unreachable block (ram,0x000100f50d98) */
/* WARNING: Removing unreachable block (ram,0x000100f50d88) */
/* WARNING: Removing unreachable block (ram,0x000100f50d78) */
/* WARNING: Removing unreachable block (ram,0x000100f50dd8) */
/* WARNING: Removing unreachable block (ram,0x000100f50dc8) */
/* WARNING: Removing unreachable block (ram,0x000100f50db8) */
/* WARNING: Removing unreachable block (ram,0x000100f50e28) */
/* WARNING: Removing unreachable block (ram,0x000100f50e18) */
/* WARNING: Removing unreachable block (ram,0x000100f50e08) */
/* WARNING: Removing unreachable block (ram,0x000100f50df8) */
/* WARNING: Removing unreachable block (ram,0x000100f50e78) */
/* WARNING: Removing unreachable block (ram,0x000100f50e68) */
/* WARNING: Removing unreachable block (ram,0x000100f50e58) */
/* WARNING: Removing unreachable block (ram,0x000100f50e48) */
/* WARNING: Removing unreachable block (ram,0x000100f50e38) */
/* WARNING: Removing unreachable block (ram,0x000100f50ec8) */
/* WARNING: Removing unreachable block (ram,0x000100f50eb8) */
/* WARNING: Removing unreachable block (ram,0x000100f50ea8) */
/* WARNING: Removing unreachable block (ram,0x000100f50e98) */
/* WARNING: Removing unreachable block (ram,0x000100f50e88) */
/* WARNING: Removing unreachable block (ram,0x000100f50c70) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100f50c60) */
/* WARNING: Removing unreachable block (ram,0x000100f50c50) */
/* WARNING: Removing unreachable block (ram,0x000100f50c40) */
/* WARNING: Removing unreachable block (ram,0x000100f50c30) */
/* WARNING: Removing unreachable block (ram,0x000100f50c20) */
/* WARNING: Removing unreachable block (ram,0x000100f50cd8) */

void FUN_100f509f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
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
    func_0x000107c5dbac();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c5d900();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c5af20();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c3fe38();
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
              lVar8 = unaff_x20;
              func_0x000107c444a8();
              func_0x000107c61180();
              if (lVar8 != 0) {
                lVar9 = unaff_x20;
                func_0x000107c4d840();
                func_0x000107c61180();
                if (lVar9 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar10 = unaff_x20;
                  func_0x000107c3fe54();
                  func_0x000107c61180();
                  if (lVar10 == 0) {
                    func_0x000107c61170(lVar1);
                    lVar1 = lVar2;
                  }
                  else {
                    lVar11 = unaff_x20;
                    func_0x000107c4f314();
                    func_0x000107c61180();
                    if (lVar11 != 0) {
                      func_0x000107c42e24();
                      func_0x000107c61180();
                      if (unaff_x20 != 0) {
                        lVar12 = 0;
                        FUN_100f4ec44();
                        func_0x000107c613fc();
                        *(undefined8 *)(lVar12 + 0x70) = 0;
                        *(undefined8 *)(lVar12 + 0x78) = 0;
                        *(long *)(lVar12 + 0x10) = lVar1;
                        *(long *)(lVar12 + 0x18) = lVar2;
                        *(long *)(lVar12 + 0x20) = lVar3;
                        *(long *)(lVar12 + 0x28) = lVar4;
                        *(long *)(lVar12 + 0x30) = lVar5;
                        *(long *)(lVar12 + 0x38) = lVar6;
                        *(long *)(lVar12 + 0x40) = lVar7;
                        *(long *)(lVar12 + 0x48) = lVar8;
                        *(long *)(lVar12 + 0x50) = lVar9;
                        *(long *)(lVar12 + 0x58) = lVar10;
                        *(long *)(lVar12 + 0x60) = lVar11;
                        *(long *)(lVar12 + 0x68) = unaff_x20;
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174(lVar6);
                        func_0x000107c61174(lVar7);
                        func_0x000107c61174(lVar8);
                        func_0x000107c61174(lVar9);
                        func_0x000107c61174(lVar10);
                        func_0x000107c61174(lVar11);
                        func_0x000107c61174(unaff_x20);
                        func_0x000100f4e2d0();
                        lVar1 = unaff_x20;
                      }
                    }
                  }
                }
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



/* Entry: 100f50ef4; end: 100f50f1b; -[SCCommerceTopicPageEntryPoint begin] */

void FUN_100f50ef4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f509f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f50f1c; end: 100f50fcf; -[SCCommerceTopicPageEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f50f1c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112d4dea0);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_100f4e9fc();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_100f50fb0;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_100f50fb0:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100f50fd0; end: 100f51583;  */

void FUN_100f50fd0(long param_1,long param_2,long param_3)

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
    goto LAB_100f51060;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
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
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610)) ||
           (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a2fc();
        }
        else {
          if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e4280)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000010,0x800000010ef1bd80,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000019;
              if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10e3fe0)) ||
                 (func_0x000107c605b8(0xd000000000000019,0x800000010ef1c020,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c535c0();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e4260)) ||
                   (func_0x000107c605b8(0xd000000000000016,0x800000010ef1bda0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c535bc();
                }
                else {
                  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e3fc0)) {
                    uVar2 = 0;
                    func_0x000107c605b8(0xd000000000000010,0x800000010ef1c040,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10eec60)) {
                        uVar2 = 0;
                        func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          uVar2 = 0xd00000000000001b;
                          if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10e3fa0))
                             || (func_0x000107c605b8(0xd00000000000001b,0x800000010ef1c060,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c535dc();
                          }
                          else {
                            uVar2 = 0;
                            if (((param_2 == -0x2fffffffffffffe6) &&
                                (param_3 == -0x7ffffffef10e3f80)) ||
                               (func_0x000107c605b8(0xd00000000000001a,0x800000010ef1c080,param_2,
                                                    param_3,0), (uVar2 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c57890();
                            }
                            else {
                              if ((param_2 != -0x2fffffffffffffe4) ||
                                 (param_3 != -0x7ffffffef10e3f60)) {
                                uVar2 = 0;
                                func_0x000107c605b8(0xd00000000000001c,0x800000010ef1c0a0,param_2,
                                                    param_3,0);
                                if ((uVar2 & 1) == 0) {
                                  func_0x000107c602fc(0x15);
                                  func_0x000107c6142c(0xe000000000000000);
                                  func_0x000107c5fb78(param_2,param_3);
                                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                      0x800000010ef0fc20,
                                                                                                            
                                                  "SCCommerceTopicPageImpl/SCCommerceTopicPageEntryPoint.swift"
                                                  ,0x3b,2,0x5b,0);
                    /* WARNING: Does not return */
                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f51584);
                                  (*pcVar1)();
                                }
                              }
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c548cc();
                            }
                          }
                          goto LAB_100f51060;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c56b34();
                      goto LAB_100f51060;
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c54f40();
                }
              }
              goto LAB_100f51060;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59278();
        }
      }
      goto LAB_100f51060;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c536e0();
LAB_100f51060:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f51584; end: 100f5162f; -[SCCommerceTopicPageEntryPoint setValue:forIvarName:] */

void FUN_100f51584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f50fd0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f51630; end: 100f5175b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f51630(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4de40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4de48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4de50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4de58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4de60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4de68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4de70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4de78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4de80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4de88,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4de90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4de98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4dea0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f5175c; end: 100f5177b; -[SCCommerceTopicPageEntryPoint init] */

void FUN_100f5175c(void)

{
  FUN_100f51630();
  return;
}



/* Entry: 100f5177c; end: 100f517af;  */

void FUN_100f5177c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f517b0; end: 100f51897; -[SCCommerceTopicPageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f517b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4de40);
  func_0x000107c61610(param_1 + _DAT_112d4de48);
  func_0x000107c61610(param_1 + _DAT_112d4de50);
  func_0x000107c61610(param_1 + _DAT_112d4de58);
  func_0x000107c61610(param_1 + _DAT_112d4de60);
  func_0x000107c61610(param_1 + _DAT_112d4de68);
  func_0x000107c61610(param_1 + _DAT_112d4de70);
  func_0x000107c61610(param_1 + _DAT_112d4de78);
  func_0x000107c61610(param_1 + _DAT_112d4de80);
  func_0x000107c61610(param_1 + _DAT_112d4de88);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4de90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4de98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4dea0));
  return;
}



/* Entry: 100f51898; end: 100f518b7;  */

void FUN_100f51898(void)

{
  func_0x000107c61168(&PTR_PTR_1127a4570);
  return;
}



/* Entry: 100f518b8; end: 100f524c3;  */

void FUN_100f518b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0x50) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  return;
}



/* Entry: 100f524c4; end: 100f52903;  */

undefined * FUN_100f524c4(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  
  uStack_88 = 0xffffffffffffffff;
  auStack_80[0] = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c429a4();
  func_0x000107c61180();
  puVar4 = &UNK_11036d030;
  func_0x000107c613fc(&UNK_11036d030,0x40,7);
  *(undefined8 **)(puVar4 + 0x10) = auStack_80;
  *(undefined8 **)(puVar4 + 0x18) = &uStack_88;
  *(undefined8 **)(puVar4 + 0x20) = &uStack_90;
  *(undefined8 **)(puVar4 + 0x28) = &uStack_a8;
  *(undefined8 **)(puVar4 + 0x30) = &uStack_b8;
  *(undefined8 **)(puVar4 + 0x38) = &uStack_c0;
  puVar5 = &UNK_11036d058;
  func_0x000107c613fc(&UNK_11036d058,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x100f52d1c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_d0 = (code *)0x100f52d50;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_100f533b4;
  puStack_d8 = &UNK_11036d070;
  ppuVar6 = &puStack_f0;
  puStack_c8 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_c8;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11036d0a8;
  func_0x000107c613fc(&UNK_11036d0a8,0x28,7);
  *(undefined8 **)(puVar7 + 0x10) = auStack_80;
  *(undefined8 **)(puVar7 + 0x18) = &uStack_88;
  *(undefined8 **)(puVar7 + 0x20) = &uStack_90;
  puVar8 = &UNK_11036d0d0;
  func_0x000107c613fc(&UNK_11036d0d0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x100f52d98;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_d0 = (code *)0x100f52dbc;
  puStack_f0 = puVar13;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_100f534e0;
  puStack_d8 = &UNK_11036d0e8;
  ppuVar9 = &puStack_f0;
  puStack_c8 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_c8;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_11036d120;
  func_0x000107c613fc(&UNK_11036d120,0x38,7);
  *(undefined8 **)(puVar10 + 0x10) = auStack_80;
  *(undefined8 **)(puVar10 + 0x18) = &uStack_88;
  *(undefined8 **)(puVar10 + 0x20) = &uStack_90;
  *(undefined8 **)(puVar10 + 0x28) = &uStack_98;
  *(undefined8 **)(puVar10 + 0x30) = &uStack_b8;
  puVar11 = &UNK_11036d148;
  func_0x000107c613fc(&UNK_11036d148,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_100f52dc4;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_d0 = FUN_100f52e28;
  puStack_f0 = puVar13;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_100f53570;
  puStack_d8 = &UNK_11036d160;
  ppuVar12 = &puStack_f0;
  puStack_c8 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_c8;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  func_0x000107c4c714(uVar3);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar3);
  puVar13 = PTR_PTR_1126b0308;
  func_0x000107c610f8(PTR_PTR_1126b0308);
  func_0x000107c488b8();
  func_0x000107c5788c();
  lVar1 = lStack_a0;
  uVar3 = uStack_a8;
  if (lStack_a0 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(lStack_a0);
    func_0x000107c5fadc(uVar3,lVar1);
    func_0x000107c6142c(lVar1);
  }
  func_0x000107c59564(puVar13);
  func_0x000107c61170(uVar3);
  lVar1 = lStack_b0;
  uVar3 = uStack_b8;
  if (lStack_b0 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(lStack_b0);
    func_0x000107c5fadc(uVar3,lVar1);
    func_0x000107c6142c(lVar1);
  }
  func_0x000107c59584(puVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c538ec(puVar13);
  func_0x000107c61170(uStack_c0);
  func_0x000107c6142c(lStack_b0);
  lVar1 = lStack_a0;
  func_0x000107c61574(puVar4);
  func_0x000107c6142c(lVar1);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x77,0xab,0x2d,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f528fc);
    (*pcVar2)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x77,0xb7,0x1c,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f52900);
    (*pcVar2)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x77,0xbb,0x16,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) == 0) {
    return puVar13;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f52904);
  (*pcVar2)();
}



/* Entry: 100f52904; end: 100f52a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f52904(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  
  puVar3 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined **)(unaff_x20 + 0xa8) = puVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar6);
  if (puVar3 != (undefined *)0x0) {
    lVar7 = *(long *)(unaff_x20 + 0xa0);
    if (lVar7 != 0) {
      puVar4 = &UNK_11036cfc8;
      func_0x000107c613fc(&UNK_11036cfc8,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar5 = &UNK_11036cff0;
      func_0x000107c613fc(&UNK_11036cff0,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      puVar1 = (undefined8 *)(lVar7 + _DAT_112d4e108);
      uVar6 = *puVar1;
      uVar2 = puVar1[1];
      *puVar1 = FUN_100f52cf4;
      puVar1[1] = puVar5;
      func_0x000107c61174(puVar3);
      func_0x000107c61174();
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(puVar5);
      func_0x00010058d43c(uVar6,uVar2);
      func_0x000107c41864(*(undefined8 *)(lVar7 + _DAT_112d4e070));
      func_0x000107c61574(puVar5);
      uVar6 = *(undefined8 *)(lVar7 + _DAT_112d4e100);
      *(undefined8 *)(lVar7 + _DAT_112d4e100) = 0;
      func_0x000107c61574(puVar4);
      func_0x000107c61170(uVar6);
      puVar4 = puVar3;
      func_0x000107c4f3ec(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puVar3);
      return puVar4;
    }
    func_0x000107c61170(puVar3);
  }
  return (undefined *)0x0;
}



/* Entry: 100f52a74; end: 100f52aef;  */

void FUN_100f52a74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    func_0x000107c4358c(param_2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    func_0x000107c61174(uVar1);
    func_0x000107c4358c();
    func_0x000107c61170(uVar1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100f52af0; end: 100f52bdf;  */

/* WARNING: Possible PIC construction at 0x000100f52bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f52bb8) */

void FUN_100f52af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  *in_stack_00000010 = 0x2a;
  *in_stack_00000018 = 0x1e;
  *in_stack_00000020 = 0x27;
  uVar2 = in_stack_00000028[1];
  *in_stack_00000028 = param_5;
  in_stack_00000028[1] = param_6;
  func_0x000107c61438(param_6,2);
  func_0x000107c6142c(uVar2);
  uVar2 = in_stack_00000030[1];
  *in_stack_00000030 = param_5;
  in_stack_00000030[1] = param_6;
  func_0x000107c6142c(uVar2);
  puVar1 = PTR_PTR_1126cace8;
  func_0x000107c610f8(PTR_PTR_1126cace8);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c46140(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100f52be0; end: 100f52cb3;  */

void FUN_100f52be0(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 100f52cb4; end: 100f52cf3;  */

void FUN_100f52cb4(void)

{
  func_0x000100f51990();
  return;
}



/* Entry: 100f52cf4; end: 100f52cfb;  */

void FUN_100f52cf4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    func_0x000107c4358c(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0xa8);
    func_0x000107c61174(uVar2);
    func_0x000107c4358c();
    func_0x000107c61170(uVar2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100f52cfc; end: 100f52d7b;  */

void FUN_100f52cfc(void)

{
  func_0x000107c61168(&PTR_PTR_112d4df10);
  return;
}



/* Entry: 100f52d7c; end: 100f52dc3;  */

void FUN_100f52d7c(long param_1,long param_2)

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



/* Entry: 100f52dc4; end: 100f52e27;  */

void FUN_100f52dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x18);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x20);
  puVar4 = *(undefined8 **)(unaff_x20 + 0x28);
  puVar5 = *(undefined8 **)(unaff_x20 + 0x30);
  **(long **)(unaff_x20 + 0x10) = param_1;
  uVar6 = 0xe;
  if (param_1 != 0x9f) {
    uVar6 = 0x14;
  }
  uVar1 = 0x31;
  if (param_1 == 0x9f) {
    uVar1 = 0x32;
  }
  *puVar3 = uVar6;
  *puVar2 = uVar1;
  *puVar4 = 5;
  uVar6 = puVar5[1];
  *puVar5 = param_2;
  puVar5[1] = param_3;
  func_0x000107c61434(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 100f52e28; end: 100f52e7f;  */

void FUN_100f52e28(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100f52e80; end: 100f52ec3;  */

void FUN_100f52e80(long param_1,long *param_2,long param_3)

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



/* Entry: 100f52ec4; end: 100f52ed3;  */

void FUN_100f52ec4(long param_1,long param_2)

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



/* Entry: 100f52ed4; end: 100f52ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f52ed4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4e028;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4e028);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000107c30a40();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    lVar3 = 0;
  }
  func_0x000107c615f0(lVar3);
  return lVar2;
}



/* Entry: 100f52ff8; end: 100f53057; -[_TtC32SCCommerceComposerScreenshopImpl48SCCommerceComposerScreenshopNavigationController initWithNibName:bundle:] */

void FUN_100f52ff8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  func_0x000100f52f3c(param_3,param_2,param_4);
  return;
}



/* Entry: 100f53058; end: 100f530db; -[_TtC32SCCommerceComposerScreenshopImpl48SCCommerceComposerScreenshopNavigationController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f53058(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _DAT_112d4e028;
  *(undefined8 *)(param_1 + _DAT_112d4e028) = 0;
  lVar2 = _DAT_112d4e030;
  *(undefined8 *)(param_1 + _DAT_112d4e030) = 0;
  lVar3 = _DAT_112d4e038;
  func_0x000107c61614(param_1 + _DAT_112d4e038,0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c61170(*(undefined8 *)(param_1 + lVar2));
  lVar3 = param_1 + lVar3;
  func_0x000100f53360(lVar3);
  FUN_100f531ac();
  func_0x000107c61464(param_1,lVar3,0x20,7);
  return 0;
}



/* Entry: 100f530dc; end: 100f53107; -[_TtC32SCCommerceComposerScreenshopImpl48SCCommerceComposerScreenshopNavigationController initWithNavigationBarClass:toolbarClass:] */

void FUN_100f530dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceComposerScreenshopImpl.SCCommerceComposerScreenshopNavigationController"
                      ,0x51,"init(navigationBarClass:toolbarClass:)",0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f53108);
  (*pcVar1)();
}



/* Entry: 100f53108; end: 100f53163; -[_TtC32SCCommerceComposerScreenshopImpl48SCCommerceComposerScreenshopNavigationController initWithRootViewController:] */

void FUN_100f53108(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceComposerScreenshopImpl.SCCommerceComposerScreenshopNavigationController"
                      ,0x51,"init(rootViewController:)",0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f53134);
  (*pcVar1)();
}



/* Entry: 100f53164; end: 100f531ab; -[_TtC32SCCommerceComposerScreenshopImpl48SCCommerceComposerScreenshopNavigationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f53164(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4e028));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4e030));
  param_1 = param_1 + _DAT_112d4e038;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100f531ac; end: 100f531cb;  */

void FUN_100f531ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127a4688);
  return;
}



/* Entry: 100f531cc; end: 100f53297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f531cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112d4e030);
  if (uVar2 != 0) {
    func_0x000107c5dbdc();
    func_0x000107c61180();
    if (uVar2 != 0) {
      func_0x0001007bbbf8(0);
      func_0x000107c61174();
      func_0x000107c60118(param_3,uVar2);
      func_0x000107c61170(uVar2);
      if ((param_3 & 1) == 0) {
        func_0x000107c61170(uVar2);
      }
      else {
        uVar1 = uVar2;
        func_0x000107c3f42c(param_1,param_2);
        func_0x000107c61170(uVar2);
        if ((uVar1 & 1) != 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}



/* Entry: 100f53298; end: 100f5330b; -[_TtC32SCCommerceComposerScreenshopImpl48SCCommerceComposerScreenshopNavigationController cardTransitionShouldBeginWithView:touchLocation:] */

uint FUN_100f53298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_5;
  FUN_100f531cc(param_1,param_2,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 100f5330c; end: 100f5330f; -[_TtC32SCCommerceComposerScreenshopImpl48SCCommerceComposerScreenshopNavigationController cardTransitionWillBeginWithView:] */

void FUN_100f5330c(void)

{
  return;
}



/* Entry: 100f53310; end: 100f53313; -[_TtC32SCCommerceComposerScreenshopImpl48SCCommerceComposerScreenshopNavigationController cardToExpandTransition] */

void FUN_100f53310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100f53314; end: 100f533b3; -[_TtC32SCCommerceComposerScreenshopImpl48SCCommerceComposerScreenshopNavigationController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f53314(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 1) {
    param_1 = param_1 + _DAT_112d4e038;
    func_0x000107c61618();
    if (param_1 != 0) {
      func_0x000107c51a1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 100f533b4; end: 100f534bf;  */

/* WARNING: Possible PIC construction at 0x000100f53480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f53484) */
/* WARNING: Removing unreachable block (ram,0x000100f53494) */

void FUN_100f533b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar4 = uVar3;
  func_0x000107c5faec(param_3);
  uVar5 = uVar4;
  func_0x000107c5faec(param_4);
  uVar6 = uVar5;
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    uVar2 = uVar6;
  }
  if (param_6 == 0) {
    param_6 = 0;
    uVar6 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  (*pcVar1)(param_2,uVar3,param_3,uVar4,param_4,uVar5,param_5,uVar2,param_6,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 100f534c0; end: 100f534df;  */

void FUN_100f534c0(void)

{
  code *in_x3;
  
  (*in_x3)();
  return;
}



/* Entry: 100f534e0; end: 100f5354f;  */

/* WARNING: Possible PIC construction at 0x000100f53534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f53538) */

void FUN_100f534e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  (*pcVar1)(param_2,uVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100f53550; end: 100f5356f;  */

void FUN_100f53550(void)

{
  code *in_x4;
  
  (*in_x4)();
  return;
}



/* Entry: 100f53570; end: 100f535e7;  */

/* WARNING: Possible PIC construction at 0x000100f535cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f535d0) */

void FUN_100f53570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_3);
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  (*pcVar1)(param_2,param_3,uVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100f535e8; end: 100f538eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f535e8(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d4e068);
  puVar3 = &UNK_11036d410;
  func_0x000107c613fc(&UNK_11036d410,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_11036d438;
  func_0x000107c613fc(&UNK_11036d438,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100f55ce8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100f55d14;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100f533b4;
  puStack_88 = &UNK_11036d450;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11036d488;
  func_0x000107c613fc(&UNK_11036d488,0x18,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  puVar7 = &UNK_11036d4b0;
  func_0x000107c613fc(&UNK_11036d4b0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_100f55d44;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_100f55d4c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100f534e0;
  puStack_88 = &UNK_11036d4c8;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_11036d500;
  func_0x000107c613fc(&UNK_11036d500,0x18,7);
  *(long *)(puVar9 + 0x10) = unaff_x20;
  puVar10 = &UNK_11036d528;
  func_0x000107c613fc(&UNK_11036d528,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_100f55d6c;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_80 = FUN_100f55d74;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100f53570;
  puStack_88 = &UNK_11036d540;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c714(uVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x75,0x73,0x1d,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f538e4);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x75,0x76,0x1c,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar10;
    func_0x000107c61544(puVar10,"",0x75,0x7f,0x16,1);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f538ec);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f538e8);
  (*pcVar2)();
}



/* Entry: 100f538ec; end: 100f53ae7;  */

/* WARNING: Possible PIC construction at 0x000100f53950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f539b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f539d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53a8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f53a78) */
/* WARNING: Removing unreachable block (ram,0x000100f539b8) */
/* WARNING: Removing unreachable block (ram,0x000100f5398c) */
/* WARNING: Removing unreachable block (ram,0x000100f53990) */
/* WARNING: Removing unreachable block (ram,0x000100f539dc) */
/* WARNING: Removing unreachable block (ram,0x000100f53ab0) */
/* WARNING: Removing unreachable block (ram,0x000100f53ab8) */
/* WARNING: Removing unreachable block (ram,0x000100f539f8) */
/* WARNING: Removing unreachable block (ram,0x000100f53a00) */
/* WARNING: Removing unreachable block (ram,0x000100f53ac4) */
/* WARNING: Removing unreachable block (ram,0x000100f53a30) */
/* WARNING: Removing unreachable block (ram,0x000100f53994) */
/* WARNING: Removing unreachable block (ram,0x000100f53954) */
/* WARNING: Removing unreachable block (ram,0x000100f53a90) */

void FUN_100f538ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100f5494c();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c593e4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f53ae8; end: 100f53c3f;  */

/* WARNING: Possible PIC construction at 0x000100f53b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f53be8) */
/* WARNING: Removing unreachable block (ram,0x000100f53ba8) */
/* WARNING: Removing unreachable block (ram,0x000100f53b84) */
/* WARNING: Removing unreachable block (ram,0x000100f53bfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f53ae8(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    FUN_100f5494c();
    puVar2 = PTR_PTR_1126a6088;
    func_0x000107c610f8(PTR_PTR_1126a6088);
    func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
    func_0x000107c47948(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 100f53c40; end: 100f53d43;  */

/* WARNING: Possible PIC construction at 0x000100f53cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f53d08) */
/* WARNING: Removing unreachable block (ram,0x000100f53cbc) */
/* WARNING: Removing unreachable block (ram,0x000100f53d1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f53c40(void)

{
  undefined *puVar1;
  long in_x3;
  
  if (*(long *)(in_x3 + 0x10) != 0) {
    FUN_100f5494c();
    puVar1 = PTR_PTR_1126a6088;
    func_0x000107c610f8(PTR_PTR_1126a6088);
    func_0x000107c5fc48(in_x3,PTR___sSSN_11034da80);
    func_0x000107c47948(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(in_x3);
    return;
  }
  return;
}



/* Entry: 100f53d44; end: 100f53f4f;  */

/* WARNING: Possible PIC construction at 0x000100f53e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f53e14) */
/* WARNING: Removing unreachable block (ram,0x000100f53e44) */
/* WARNING: Removing unreachable block (ram,0x000100f53e68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f53d44(ulong param_1)

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



/* Entry: 100f53f50; end: 100f53fbf;  */

void FUN_100f53f50(undefined8 param_1,long param_2,uint param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100f546a4(param_3 & 1,param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100f53fc0; end: 100f546a3;  */

/* WARNING: Possible PIC construction at 0x000100f54310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f545c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f54480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f54430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f54610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f54140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f54614) */
/* WARNING: Removing unreachable block (ram,0x000100f54634) */
/* WARNING: Removing unreachable block (ram,0x000100f54434) */
/* WARNING: Removing unreachable block (ram,0x000100f54484) */
/* WARNING: Removing unreachable block (ram,0x000100f545cc) */
/* WARNING: Removing unreachable block (ram,0x000100f545e4) */
/* WARNING: Removing unreachable block (ram,0x000100f54314) */
/* WARNING: Removing unreachable block (ram,0x000100f5432c) */
/* WARNING: Removing unreachable block (ram,0x000100f5442c) */
/* WARNING: Removing unreachable block (ram,0x000100f54340) */
/* WARNING: Removing unreachable block (ram,0x000100f54440) */
/* WARNING: Removing unreachable block (ram,0x000100f543b8) */
/* WARNING: Removing unreachable block (ram,0x000100f543d0) */
/* WARNING: Removing unreachable block (ram,0x000100f54490) */
/* WARNING: Removing unreachable block (ram,0x000100f543f4) */
/* WARNING: Removing unreachable block (ram,0x000100f54494) */
/* WARNING: Removing unreachable block (ram,0x000100f54320) */
/* WARNING: Removing unreachable block (ram,0x000100f545c4) */
/* WARNING: Removing unreachable block (ram,0x000100f54144) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f53fc0(byte *param_1,byte *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte **ppbVar14;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  ulong uVar17;
  byte *pbStack_80;
  ulong uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar10 = param_1;
  func_0x000107c4f31c();
  func_0x000107c61180();
  pbVar13 = pbVar10;
  func_0x000107c5faec();
  func_0x000107c61170(pbVar10);
  lVar16 = *(long *)(unaff_x20 + _DAT_112d4e080);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar16 == 0) {
    lVar16 = *(long *)(unaff_x20 + _DAT_112d4e0f0);
    if (lVar16 != 0) {
      func_0x000107c615f0(lVar16);
      func_0x000107c5bee8();
      func_0x000107c61180();
      if (param_1 == (byte *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar16);
        return;
      }
      pbVar11 = (byte *)((ulong)pbVar13 & 0xffffffffffff);
      pbVar12 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
      pbVar10 = pbVar11;
      if (((ulong)param_2 & 0x2000000000000000) != 0) {
        pbVar10 = pbVar12;
      }
      if (pbVar10 != (byte *)0x0) {
        if (((ulong)param_2 >> 0x3c & 1) == 0) {
          if (((ulong)param_2 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar13 >> 0x3c & 1) == 0) {
              pbVar11 = param_2;
              func_0x000107c60358();
            }
            else {
              pbVar13 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar13 == 0x2b) {
              if ((long)pbVar11 < 1) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x100f54690);
                (*pcVar9)();
              }
              pbVar11 = pbVar11 + -1;
              if (pbVar11 != (byte *)0x0) {
                uVar17 = 0;
                do {
                  pbVar13 = pbVar13 + 1;
                  if (((9 < *pbVar13 - 0x30) ||
                      (auVar5._8_8_ = 0, auVar5._0_8_ = uVar17, SUB168(auVar5 * ZEXT816(10),8) != 0)
                      ) || (uVar15 = uVar17 * 10, uVar1 = (ulong)(byte)(*pbVar13 - 0x30),
                           uVar17 = uVar15 + uVar1, CARRY8(uVar15,uVar1))) break;
                  pbVar11 = pbVar11 + -1;
                } while (pbVar11 != (byte *)0x0);
              }
            }
            else if (*pbVar13 == 0x2d) {
              if ((long)pbVar11 < 1) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x100f54688);
                (*pcVar9)();
              }
              pbVar11 = pbVar11 + -1;
              if (pbVar11 != (byte *)0x0) {
                uVar17 = 0;
                while( true ) {
                  pbVar13 = pbVar13 + 1;
                  if ((9 < *pbVar13 - 0x30) ||
                     (auVar3._8_8_ = 0, auVar3._0_8_ = uVar17, SUB168(auVar3 * ZEXT816(10),8) != 0))
                  break;
                  uVar15 = uVar17 * 10;
                  uVar1 = (ulong)(byte)(*pbVar13 - 0x30);
                  uVar17 = uVar15 - uVar1;
                  if ((uVar15 < uVar1) || (pbVar11 = pbVar11 + -1, pbVar11 == (byte *)0x0)) break;
                }
              }
            }
            else if (pbVar11 != (byte *)0x0) {
              uVar17 = 0;
              pbVar10 = pbVar13;
              while (pbVar10 != (byte *)0x0) {
                if (((9 < *pbVar13 - 0x30) ||
                    (auVar7._8_8_ = 0, auVar7._0_8_ = uVar17, SUB168(auVar7 * ZEXT816(10),8) != 0))
                   || (uVar15 = uVar17 * 10, uVar1 = (ulong)(byte)(*pbVar13 - 0x30),
                      uVar17 = uVar15 + uVar1, CARRY8(uVar15,uVar1))) break;
                pbVar11 = pbVar11 + -1;
                pbVar13 = pbVar13 + 1;
                pbVar10 = pbVar11;
              }
            }
          }
          else {
            pbStack_80 = pbVar13;
            uStack_78 = (ulong)param_2 & 0xffffffffffffff;
            uVar2 = (uint)pbVar13 & 0xff;
            if (uVar2 == 0x2b) {
              if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x100f54694);
                (*pcVar9)();
              }
              pbVar12 = pbVar12 + -1;
              if (pbVar12 != (byte *)0x0) {
                uVar17 = 0;
                pbVar13 = (byte *)((ulong)&pbStack_80 | 1);
                do {
                  if (((9 < *pbVar13 - 0x30) ||
                      (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17, SUB168(auVar6 * ZEXT816(10),8) != 0)
                      ) || (uVar15 = uVar17 * 10, uVar1 = (ulong)(byte)(*pbVar13 - 0x30),
                           uVar17 = uVar15 + uVar1, CARRY8(uVar15,uVar1))) break;
                  pbVar12 = pbVar12 + -1;
                  pbVar13 = pbVar13 + 1;
                } while (pbVar12 != (byte *)0x0);
              }
            }
            else if (uVar2 == 0x2d) {
              if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x100f5468c);
                (*pcVar9)();
              }
              pbVar12 = pbVar12 + -1;
              if (pbVar12 != (byte *)0x0) {
                uVar17 = 0;
                pbVar13 = (byte *)((ulong)&pbStack_80 | 1);
                while( true ) {
                  if ((9 < *pbVar13 - 0x30) ||
                     (auVar4._8_8_ = 0, auVar4._0_8_ = uVar17, SUB168(auVar4 * ZEXT816(10),8) != 0))
                  break;
                  uVar15 = uVar17 * 10;
                  uVar1 = (ulong)(byte)(*pbVar13 - 0x30);
                  uVar17 = uVar15 - uVar1;
                  if ((uVar15 < uVar1) ||
                     (pbVar12 = pbVar12 + -1, pbVar13 = pbVar13 + 1, pbVar12 == (byte *)0x0)) break;
                }
              }
            }
            else if (pbVar12 != (byte *)0x0) {
              uVar17 = 0;
              ppbVar14 = &pbStack_80;
              while( true ) {
                if ((9 < *(byte *)ppbVar14 - 0x30) ||
                   (auVar8._8_8_ = 0, auVar8._0_8_ = uVar17, SUB168(auVar8 * ZEXT816(10),8) != 0))
                break;
                uVar15 = uVar17 * 10;
                uVar1 = (ulong)(byte)(*(byte *)ppbVar14 - 0x30);
                uVar17 = uVar15 + uVar1;
                if ((CARRY8(uVar15,uVar1)) ||
                   (pbVar12 = pbVar12 + -1, ppbVar14 = (byte **)((long)ppbVar14 + 1),
                   pbVar12 == (byte *)0x0)) break;
              }
            }
          }
        }
        else {
          FUN_100f5015c(pbVar13,param_2,10);
        }
      }
      goto code_r0x000107c6142c;
    }
  }
  else {
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x000107c61170();
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100f546a4);
    (*pcVar9)();
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100f546a4; end: 100f5494b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f546a4(ulong param_1,long param_2)

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
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar4 = &puStack_70;
  if (param_2 != 0) {
    puVar2 = &UNK_11036d258;
    func_0x000107c613fc(&UNK_11036d258,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4e0c0);
    puStack_48 = puVar2;
    if ((param_1 & 1) == 0) {
      uStack_50 = 0x100f55cd4;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11036d360;
      func_0x000107c60bc4(&puStack_70);
      puVar1 = puStack_48;
      func_0x000107c61174(param_2);
      func_0x000107c61174();
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c5ae7c(uVar5);
    }
    else {
      uStack_50 = 0x100f55cd4;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11036d388;
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



/* Entry: 100f5494c; end: 100f54ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f5494c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long unaff_x20;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar14 = &puStack_e0;
  puVar2 = PTR_PTR_1126a6080;
  func_0x000107c610f8(PTR_PTR_1126a6080);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a6068;
  func_0x000107c610f8(PTR_PTR_1126a6068);
  func_0x000107c453e4();
  puVar6 = &UNK_11036d258;
  puVar4 = puVar6;
  func_0x000107c613fc(&UNK_11036d258,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100f55c74;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x100f50560;
  puStack_88 = &UNK_11036d270;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_78);
  func_0x000107c56fb4(puVar3);
  func_0x000107c60bd0(ppuVar5);
  puVar4 = puVar6;
  func_0x000107c613fc(&UNK_11036d258,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcStack_80 = FUN_100f55c94;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11036d298;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_78);
  func_0x000107c534bc(puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c613fc(&UNK_11036d258,0x18,7);
  lVar10 = unaff_x20;
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_80 = FUN_100f55c9c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x100f5055c;
  puStack_88 = &UNK_11036d2c0;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_78);
  func_0x000107c548c8(puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c52d78(puVar2);
  func_0x000107c59270(puVar2);
  func_0x000107c56990(puVar2);
  func_0x000107c548d8(puVar2);
  puVar6 = PTR_PTR_1126b0380;
  func_0x000107c61168();
  func_0x000107c3dec4();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c527fc(puVar2);
  func_0x000107c61170(puVar6);
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112d4e0b0);
  func_0x000107c40038();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126be5a0;
    func_0x000107c610f8(PTR_PTR_1126be5a0);
    func_0x000107c453e4();
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c535e0(puVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c535d4(puVar2);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d4e098);
  func_0x000107c51a08(uVar8);
  func_0x000107c61180();
  func_0x000107c572e8(puVar2);
  func_0x000107c615e8(uVar8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d4e0f8);
  lVar9 = 0;
  FUN_100f56864();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112d4e188) = uVar8;
  puVar6 = PTR_s_init_1125d9248;
  lStack_b0 = lVar10;
  lStack_a8 = lVar9;
  func_0x000107c61174(uVar8);
  plVar11 = &lStack_b0;
  func_0x000107c61154(plVar11,puVar6);
  func_0x000107c58cc0(puVar2);
  func_0x000107c61170(plVar11);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d4e110);
  func_0x000107c5cb24(uVar8);
  func_0x000107c61180();
  func_0x000107c551d0(puVar2);
  func_0x000107c61170(uVar8);
  puVar6 = &UNK_11036d258;
  puVar7 = puVar6;
  func_0x000107c613fc(&UNK_11036d258,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar12 = puVar6;
  func_0x000107c613fc(&UNK_11036d258,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  puVar13 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  pcStack_80 = FUN_100f55cbc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x100e1779c;
  puStack_88 = &UNK_11036d2e8;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar5);
  uStack_c0 = 0x100f55cc4;
  puStack_e0 = puVar1;
  uStack_d8 = 0x42000000;
  uStack_d0 = 0x100e17304;
  puStack_c8 = &UNK_11036d310;
  puStack_b8 = puVar12;
  func_0x000107c60bc4(&puStack_e0);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar12);
  func_0x000107c47be0(puVar13);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puStack_b8);
  puVar4 = puStack_78;
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar4);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d4e0e0);
  func_0x000107c4c1e0(uVar8);
  func_0x000107c61180();
  func_0x000107c52604(puVar2);
  func_0x000107c615e8(uVar8);
  func_0x000107c613fc(&UNK_11036d258,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_80 = (code *)0x100f55ccc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11036d338;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_78);
  func_0x000107c54a18(puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar13);
  return puVar2;
}



/* Entry: 100f54ee8; end: 100f54f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f54ee8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c51a1c(*(undefined8 *)(param_1 + _DAT_112d4e0d8));
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f54f4c; end: 100f5508b;  */

void FUN_100f54f4c(undefined8 param_1,long param_2,code *param_3)

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



/* Entry: 100f5508c; end: 100f5517f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5508c(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar2 = *(long *)(param_3 + _DAT_112d4e100);
    if ((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + _DAT_112d4e030), lVar1 != 0)) {
      func_0x000107c61174(lVar1);
      func_0x000107c61174(lVar2);
      func_0x000107c420a8(lVar1);
      if (param_1 == (code *)0x0) {
        func_0x000107c61170(lVar2);
      }
      else {
        func_0x000107c6157c(param_2);
        (*param_1)();
        func_0x000107c61170(param_3);
        func_0x00010058d43c(param_1,param_2);
        lVar1 = lVar2;
      }
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100f55180; end: 100f55207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55180(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + _DAT_112d4e108);
    uVar2 = ((undefined8 *)(param_1 + _DAT_112d4e108))[1];
    func_0x000100b64c10(pcVar1,uVar2);
    func_0x000107c61170(param_1);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
      func_0x00010058d43c(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 100f55208; end: 100f553d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55208(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_70;
  puVar1 = PTR_PTR_1126afe50;
  func_0x000107c610f8(PTR_PTR_1126afe50);
  func_0x000107c4842c();
  func_0x000107c569fc(param_1);
  puVar2 = PTR_PTR_1126a6078;
  func_0x000107c610f8();
  func_0x000107c49520();
  uVar3 = 0;
  FUN_100f531ac(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar4 = puVar2;
  FUN_100f559f8(puVar2,unaff_x20,uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d4e100);
  *(undefined **)(unaff_x20 + _DAT_112d4e100) = puVar4;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126aead0;
  func_0x000107c610f8();
  pcStack_50 = FUN_100f553d8;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1001de374;
  puStack_58 = &UNK_11036d220;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c4799c();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(uStack_48);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d4e0f0);
  *(undefined **)(unaff_x20 + _DAT_112d4e0f0) = puVar5;
  func_0x000107c615e8(uVar3);
  func_0x000107c61604(puVar4 + _DAT_112d4e038,*(undefined8 *)(unaff_x20 + _DAT_112d4e0d8));
  func_0x000107c561c0(puVar1);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d4e070));
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100f553d8; end: 100f553df;  */

undefined8 FUN_100f553d8(void)

{
  return 0;
}



/* Entry: 100f553e0; end: 100f5540b; -[_TtC32SCCommerceComposerScreenshopImpl34SCCommerceComposerScreenshopRouter init] */

void FUN_100f553e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceComposerScreenshopImpl.SCCommerceComposerScreenshopRouter",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5540c);
  (*pcVar1)();
}



/* Entry: 100f5540c; end: 100f55467; -[_TtC32SCCommerceComposerScreenshopImpl34SCCommerceComposerScreenshopRouter initWithObjectRegistry:storage:] */

void FUN_100f5540c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceComposerScreenshopImpl.SCCommerceComposerScreenshopRouter",0x43,
                      "init(objectRegistry:storage:)",0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f55438);
  (*pcVar1)();
}



/* Entry: 100f55468; end: 100f555e3; -[_TtC32SCCommerceComposerScreenshopImpl34SCCommerceComposerScreenshopRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f55484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f554b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f55504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f55534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f55584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f555a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f55588) */
/* WARNING: Removing unreachable block (ram,0x000100f55538) */
/* WARNING: Removing unreachable block (ram,0x000100f55508) */
/* WARNING: Removing unreachable block (ram,0x000100f554b8) */
/* WARNING: Removing unreachable block (ram,0x000100f55488) */
/* WARNING: Removing unreachable block (ram,0x000100f555a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4e068));
  return;
}



/* Entry: 100f555e4; end: 100f55603;  */

void FUN_100f555e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a47a0);
  return;
}



/* Entry: 100f55604; end: 100f55607; -[_TtC32SCCommerceComposerScreenshopImpl34SCCommerceComposerScreenshopRouter commerceBrowserWillPresent] */

void FUN_100f55604(void)

{
  return;
}



/* Entry: 100f55608; end: 100f55613; -[_TtC32SCCommerceComposerScreenshopImpl34SCCommerceComposerScreenshopRouter commerceBrowserWillDismiss] */

/* WARNING: Possible PIC construction at 0x000100f55658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f55674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5565c) */
/* WARNING: Removing unreachable block (ram,0x000100f55678) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55608(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f55614; end: 100f5561f; -[_TtC32SCCommerceComposerScreenshopImpl34SCCommerceComposerScreenshopRouter favoritesBrowserWillDismiss] */

/* WARNING: Possible PIC construction at 0x000100f55658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f55674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5565c) */
/* WARNING: Removing unreachable block (ram,0x000100f55678) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55614(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f55620; end: 100f55717;  */

/* WARNING: Possible PIC construction at 0x000100f55658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f55674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5565c) */
/* WARNING: Removing unreachable block (ram,0x000100f55678) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_100f55620(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f55718; end: 100f5583f;  */

ulong FUN_100f55718(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f55840);
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
  FUN_100f55840(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5583c);
      (*pcVar1)();
    }
    FUN_100f558e0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 100f55840; end: 100f558df;  */

undefined * FUN_100f55840(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d4e148;
    func_0x000100f556a0(0x112d4e148,&PTR_PTR_1126a6090,0x112d4e150,&UNK_10d914628);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100f558e0; end: 100f559f7;  */

long FUN_100f558e0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f559f4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f559f8);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000100f55d94(0,0x112d4e148,&PTR_PTR_1126a6090);
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
      func_0x000100f55d94(0,0x112d4e148,&PTR_PTR_1126a6090);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f559f0);
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



/* Entry: 100f559f8; end: 100f55c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100f559f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  undefined8 uStack_58;
  
  plVar2 = &lStack_60;
  *(undefined8 *)(param_3 + _DAT_112d4e028) = 0;
  lVar5 = _DAT_112d4e030;
  *(undefined8 *)(param_3 + _DAT_112d4e030) = 0;
  func_0x000107c61614(param_3 + _DAT_112d4e038,0);
  lVar1 = 0;
  FUN_100f562e8();
  func_0x000107c610f8();
  func_0x000107c49460();
  lVar4 = lVar1 + _DAT_112d4e158;
  *(undefined ***)(lVar4 + 8) = &PTR_DAT_11036d210;
  func_0x000107c61604(lVar4,param_2);
  func_0x000107c53dec(lVar1);
  func_0x000107c5677c(lVar1);
  uVar6 = *(undefined8 *)(param_3 + lVar5);
  *(long *)(param_3 + lVar5) = lVar1;
  func_0x000107c61174(lVar1);
  func_0x000107c61170(uVar6);
  uVar6 = 0;
  FUN_100f531ac();
  lStack_60 = param_3;
  uStack_58 = uVar6;
  func_0x000107c61154(&lStack_60,PTR_s_initWithRootViewController__1125edab8,lVar1);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c53dec();
  func_0x000107c5677c(plVar2);
  func_0x000107c61174();
  puVar3 = (undefined1 *)plVar2;
  FUN_100f52ed4();
  func_0x000107c5a048(plVar2);
  func_0x000107c61170(plVar2);
  func_0x000107c615e8(puVar3);
  lVar4 = _DAT_112d4e028;
  uVar6 = *(undefined8 *)((long)plVar2 + _DAT_112d4e028);
  func_0x000107c615f0(uVar6);
  func_0x000107c53224();
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(plVar2);
  uVar7 = *(undefined8 *)((long)plVar2 + lVar4);
  lVar4 = 0x112d360b0;
  func_0x000100f556a0(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = param_1;
  uVar6 = 0;
  func_0x000100f55d94(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c615f0(uVar7);
  func_0x000107c61174(param_1);
  lVar5 = lVar4;
  func_0x000107c5fc48(lVar4,uVar6);
  func_0x000107c61574(lVar4);
  func_0x000107c497d0(uVar7);
  func_0x000107c61170(plVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar1);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(lVar5);
  return (undefined1 *)plVar2;
}



/* Entry: 100f55c58; end: 100f55c73;  */

void FUN_100f55c58(long param_1,long param_2)

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


