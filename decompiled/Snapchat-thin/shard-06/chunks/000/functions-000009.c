/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104397344; end: 10439734f; -[_TtC28SCCancelMenuActionSheetScope28SCCancelMenuActionSheetScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397344(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073a20;
  _swift_beginAccess(param_1 + _DAT_113073a20,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104397350; end: 1043973a3;  */

void FUN_104397350(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043973a4; end: 10439742f; -[_TtC28SCCancelMenuActionSheetScope28SCCancelMenuActionSheetScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043973a4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130739f8));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113073a00);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073a10));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073a18));
  param_1 = param_1 + _DAT_113073a20;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104397430; end: 104397497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397430(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033f380();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073a30) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104397498; end: 1043974e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397498(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073a30) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043974e4; end: 10439765b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043974e4(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100334a80();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_113073a00;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113073a00,0);
  lVar3 = _DAT_113073a20;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113073a20,0);
  *(long *)(lVar5 + _DAT_1130739f8) = param_1;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_2);
  *(undefined1 *)(lVar5 + _DAT_113073a08) = param_3;
  *(undefined8 *)(lVar5 + _DAT_113073a10) = param_4;
  *(undefined8 *)(lVar5 + _DAT_113073a18) = param_5;
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_6);
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 10439765c; end: 104397747; -[_TtC28SCCancelMenuActionSheetScope36SCCancelMenuActionSheetScopeServices buildWithRecipient:presentingViewController:showRetrySendOption:friendActionSheetScope:groupActionSheetScope:delegate:] */

void FUN_10439765c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_6;
  _objc_retain(param_6);
  uVar2 = param_7;
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_1);
  uVar3 = param_3;
  FUN_1043974e4(param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104397748; end: 10439774b;  */

void FUN_104397748(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10439774c; end: 10439777f;  */

void FUN_10439774c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104397780; end: 1043977a3; -[_TtC28SCCancelMenuActionSheetScope36SCCancelMenuActionSheetScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073a30));
  return;
}



/* Entry: 1043977a4; end: 1043977f3; -[_TtC22SCChatInputPluginScope22SCChatInputPluginScope enabledFeatureIdentifiers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043977a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113073a88);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043977f4; end: 104397803; -[_TtC22SCChatInputPluginScope22SCChatInputPluginScope context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043977f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073a90);
}



/* Entry: 104397804; end: 104397813; -[_TtC22SCChatInputPluginScope22SCChatInputPluginScope contextMessagingScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073a98));
  return;
}



/* Entry: 104397814; end: 1043978a3; -[_TtC22SCChatInputPluginScope22SCChatInputPluginScope initWithEnabledFeatureIdentifiers:context:] */

undefined8 FUN_104397814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar1 = param_3;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(param_3);
  func_0x00010c00fac0(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043978a4; end: 10439798b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043978a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073a88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113073a90) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113073a98) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439798c; end: 104397a2f; -[_TtC22SCChatInputPluginScope22SCChatInputPluginScope initWithEnabledFeatureIdentifiers:context:contextMessagingScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439798c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined8 *)(param_1 + _DAT_113073a88) = param_3;
  *(undefined8 *)(param_1 + _DAT_113073a90) = param_4;
  *(undefined8 *)(param_1 + _DAT_113073a98) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104397a30; end: 104397a8f; -[_TtC22SCChatInputPluginScope22SCChatInputPluginScope init] */

void FUN_104397a30(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCChatInputPluginScope.SCChatInputPluginScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104397a5c);
  (*pcVar1)();
}



/* Entry: 104397a90; end: 104397ac7; -[_TtC22SCChatInputPluginScope22SCChatInputPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397a90(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073a88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113073a98));
  return;
}



/* Entry: 104397ac8; end: 104397b17;  */

void FUN_104397ac8(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000113073ac8 != 0) {
    return;
  }
  puVar1 = &UNK_110763100;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000113073ac8 = param_1;
  return;
}



/* Entry: 104397b18; end: 104397b23;  */

undefined * FUN_104397b18(void)

{
  return &UNK_110763118;
}



/* Entry: 104397b24; end: 104397b4f; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType textObserver] */

void FUN_104397b24(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f9e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397b50; end: 104397b5b;  */

undefined * FUN_104397b50(void)

{
  return &UNK_110763128;
}



/* Entry: 104397b5c; end: 104397b87; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType pasteObserver] */

void FUN_104397b5c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f9e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397b88; end: 104397b93;  */

undefined * FUN_104397b88(void)

{
  return &UNK_110763138;
}



/* Entry: 104397b94; end: 104397bbf; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType mediaDrawer] */

void FUN_104397b94(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1f9eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397bc0; end: 104397bcb;  */

undefined * FUN_104397bc0(void)

{
  return &UNK_110763148;
}



/* Entry: 104397bcc; end: 104397bf7; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType audioNote] */

void FUN_104397bcc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1f9ee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397bf8; end: 104397c03;  */

undefined * FUN_104397bf8(void)

{
  return &UNK_110763158;
}



/* Entry: 104397c04; end: 104397c2f; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType camera] */

void FUN_104397c04(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f9f10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397c30; end: 104397c3b;  */

undefined * FUN_104397c30(void)

{
  return &UNK_110763168;
}



/* Entry: 104397c3c; end: 104397c67; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType stickerDrawer] */

void FUN_104397c3c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f9f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397c68; end: 104397c73;  */

undefined * FUN_104397c68(void)

{
  return &UNK_110763178;
}



/* Entry: 104397c74; end: 104397c9f; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType scalingText] */

void FUN_104397c74(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1f9f60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397ca0; end: 104397cab;  */

undefined * FUN_104397ca0(void)

{
  return &UNK_110763188;
}



/* Entry: 104397cac; end: 104397cd7; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType chatReaction] */

void FUN_104397cac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f9f90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397cd8; end: 104397ce3;  */

undefined * FUN_104397cd8(void)

{
  return &UNK_110763198;
}



/* Entry: 104397ce4; end: 104397d0f; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType storyReaction] */

void FUN_104397ce4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f9fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397d10; end: 104397d1b;  */

undefined * FUN_104397d10(void)

{
  return &UNK_1107631a8;
}



/* Entry: 104397d1c; end: 104397d47; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType aiStoryReply] */

void FUN_104397d1c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f9ff0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397d48; end: 104397d53;  */

undefined * FUN_104397d48(void)

{
  return &UNK_1107631b8;
}



/* Entry: 104397d54; end: 104397d7f; +[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType stopQuery] */

void FUN_104397d54(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1fa020);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397d80; end: 104397dbb; -[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType init] */

void FUN_104397d80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104397dbc; end: 104397def;  */

void FUN_104397dbc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104397df0; end: 104397df3; -[_TtC22SCChatInputPluginScope33SCChatInputPluginScopeFeatureType .cxx_destruct] */

void FUN_104397df0(void)

{
  return;
}



/* Entry: 104397df4; end: 104397e13;  */

void FUN_104397df4(void)

{
  _objc_opt_self(&PTR_PTR_1129a7c88);
  return;
}



/* Entry: 104397e14; end: 104397e23; -[SCUnreadMessageAlertScope snapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073af8));
  return;
}



/* Entry: 104397e24; end: 104397e33; -[SCUnreadMessageAlertScope didErrorOccur] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104397e24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113073b00);
}



/* Entry: 104397e34; end: 104397e7b; -[SCUnreadMessageAlertScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397e34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073b08;
  _swift_beginAccess(param_1 + _DAT_113073b08,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397e7c; end: 104397ed3; -[SCUnreadMessageAlertScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073b08;
  _swift_beginAccess(param_1 + _DAT_113073b08,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104397ed4; end: 104397ef3; -[SCUnreadMessageAlertScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397ed4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073b10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397ef4; end: 104397f1f; -[SCUnreadMessageAlertScope init] */

void FUN_104397ef4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUnreadMessageAlertScope.SCUnreadMessageAlertScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104397f20);
  (*pcVar1)();
}



/* Entry: 104397f20; end: 104397fd7; -[SCUnreadMessageAlertScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397f20(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073af8));
  func_0x000104397f68(param_1 + _DAT_113073b08);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113073b10));
  return;
}



/* Entry: 104397fd8; end: 104398043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397fd8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1043982f4();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073b20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104398044; end: 10439804b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398044(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1043982f4();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073b20) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10439804c; end: 104398097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439804c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073b20) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104398098; end: 1043981af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104398098(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_104398250();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113073b08;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073b08,0);
  *(long *)(lVar4 + _DAT_113073af8) = param_1;
  *(undefined1 *)(lVar4 + _DAT_113073b00) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  *(undefined8 *)(lVar4 + _DAT_113073b10) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_4);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 1043981b0; end: 10439824f; -[_TtC25SCUnreadMessageAlertScope33SCUnreadMessageAlertScopeServices buildWithSnapchatter:didErrorOccur:delegate:uiContainer:] */

void FUN_1043981b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104398098(param_3,param_4,param_5,param_6);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104398250; end: 10439826f;  */

void FUN_104398250(void)

{
  _objc_opt_self(&PTR_PTR_1129a7d38);
  return;
}



/* Entry: 104398270; end: 10439829b; -[_TtC25SCUnreadMessageAlertScope33SCUnreadMessageAlertScopeServices init] */

void FUN_104398270(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUnreadMessageAlertScope.SCUnreadMessageAlertScopeServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439829c);
  (*pcVar1)();
}



/* Entry: 10439829c; end: 10439829f;  */

void FUN_10439829c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043982a0; end: 1043982d3;  */

void FUN_1043982a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043982d4; end: 1043982f3; -[_TtC25SCUnreadMessageAlertScope33SCUnreadMessageAlertScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043982d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073b20));
  return;
}



/* Entry: 1043982f4; end: 104398313;  */

void FUN_1043982f4(void)

{
  _objc_opt_self(&PTR_PTR_1129a7e10);
  return;
}



/* Entry: 104398314; end: 104398317;  */

void FUN_104398314(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104398318; end: 104398337; -[_TtC37SCBitmojiCameraPermissionRequestScope37SCBitmojiCameraPermissionRequestScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398318(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073b78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104398338; end: 10439837f; -[_TtC37SCBitmojiCameraPermissionRequestScope37SCBitmojiCameraPermissionRequestScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398338(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073b80;
  _swift_beginAccess(param_1 + _DAT_113073b80,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104398380; end: 1043983d7; -[_TtC37SCBitmojiCameraPermissionRequestScope37SCBitmojiCameraPermissionRequestScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073b80;
  _swift_beginAccess(param_1 + _DAT_113073b80,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043983d8; end: 104398403; -[_TtC37SCBitmojiCameraPermissionRequestScope37SCBitmojiCameraPermissionRequestScope init] */

void FUN_1043983d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiCameraPermissionRequestScope.SCBitmojiCameraPermissionRequestScope",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104398404);
  (*pcVar1)();
}



/* Entry: 104398404; end: 1043984ab; -[_TtC37SCBitmojiCameraPermissionRequestScope37SCBitmojiCameraPermissionRequestScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104398404(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113073b78));
  param_1 = param_1 + _DAT_113073b80;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043984ac; end: 104398517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043984ac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10439876c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073b90) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104398518; end: 10439851f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398518(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10439876c();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073b90) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104398520; end: 10439856b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398520(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073b90) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439856c; end: 104398653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10439856c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  FUN_1043986c8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113073b80;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073b80,0);
  *(long *)(lVar4 + _DAT_113073b78) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_1);
  plVar5 = &lStack_68;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(aplStack_80[0]);
  return plVar5;
}



/* Entry: 104398654; end: 1043986c7; -[_TtC37SCBitmojiCameraPermissionRequestScope45SCBitmojiCameraPermissionRequestScopeServices buildWithUIContainer:delegate:] */

void FUN_104398654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10439856c(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043986c8; end: 1043986e7;  */

void FUN_1043986c8(void)

{
  _objc_opt_self(&PTR_PTR_1129a7ed0);
  return;
}



/* Entry: 1043986e8; end: 104398713; -[_TtC37SCBitmojiCameraPermissionRequestScope45SCBitmojiCameraPermissionRequestScopeServices init] */

void FUN_1043986e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiCameraPermissionRequestScope.SCBitmojiCameraPermissionRequestScopeServices",
             0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104398714);
  (*pcVar1)();
}



/* Entry: 104398714; end: 104398717;  */

void FUN_104398714(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104398718; end: 10439874b;  */

void FUN_104398718(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10439874c; end: 10439876b; -[_TtC37SCBitmojiCameraPermissionRequestScope45SCBitmojiCameraPermissionRequestScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439874c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073b90));
  return;
}



/* Entry: 10439876c; end: 10439878b;  */

void FUN_10439876c(void)

{
  _objc_opt_self(&PTR_PTR_1129a7f98);
  return;
}



/* Entry: 10439878c; end: 10439878f;  */

void FUN_10439878c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104398790; end: 1043987d7; -[_TtC23SCPostRegistrationScope23SCPostRegistrationScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398790(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073be8;
  _swift_beginAccess(param_1 + _DAT_113073be8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043987d8; end: 10439882f; -[_TtC23SCPostRegistrationScope23SCPostRegistrationScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043987d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073be8;
  _swift_beginAccess(param_1 + _DAT_113073be8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104398830; end: 10439884f; -[_TtC23SCPostRegistrationScope23SCPostRegistrationScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398830(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073bf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104398850; end: 10439887b; -[_TtC23SCPostRegistrationScope23SCPostRegistrationScope init] */

void FUN_104398850(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCPostRegistrationScope.SCPostRegistrationScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439887c);
  (*pcVar1)();
}



/* Entry: 10439887c; end: 104398923; -[_TtC23SCPostRegistrationScope23SCPostRegistrationScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439887c(long param_1)

{
  func_0x0001043988b4(param_1 + _DAT_113073be8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113073bf0));
  return;
}



/* Entry: 104398924; end: 104398a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104398924(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000100235904();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113073be8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073be8,0);
  _swift_beginAccess(lVar4 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_1);
  *(undefined8 *)(lVar4 + _DAT_113073bf0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_2);
  plVar5 = &lStack_68;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(aplStack_80[0]);
  return plVar5;
}



/* Entry: 104398a0c; end: 104398a7f; -[_TtC23SCPostRegistrationScope31SCPostRegistrationScopeServices buildWithDelegate:uiContainer:] */

void FUN_104398a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104398924(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104398a80; end: 104398aab; -[_TtC23SCPostRegistrationScope31SCPostRegistrationScopeServices init] */

void FUN_104398a80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCPostRegistrationScope.SCPostRegistrationScopeServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104398aac);
  (*pcVar1)();
}



/* Entry: 104398aac; end: 104398aaf;  */

void FUN_104398aac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104398ab0; end: 104398ae3;  */

void FUN_104398ab0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104398ae4; end: 104398b07; -[_TtC23SCPostRegistrationScope31SCPostRegistrationScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073c00));
  return;
}



/* Entry: 104398b08; end: 104398b27; -[_TtC18PlusSubscribeScope18PlusSubscribeScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398b08(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073c58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104398b28; end: 104398b37; -[_TtC18PlusSubscribeScope18PlusSubscribeScope loggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073c60));
  return;
}



/* Entry: 104398b38; end: 104398b47; -[_TtC18PlusSubscribeScope18PlusSubscribeScope funnelLoggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073c68));
  return;
}



/* Entry: 104398b48; end: 104398b57; -[_TtC18PlusSubscribeScope18PlusSubscribeScope context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073c70));
  return;
}



/* Entry: 104398b58; end: 104398be3; -[_TtC18PlusSubscribeScope18PlusSubscribeScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398b58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073c78;
  _swift_beginAccess(param_1 + _DAT_113073c78,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104398be4; end: 104398d87; -[_TtC18PlusSubscribeScope18PlusSubscribeScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104398be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073c78;
  _swift_beginAccess(param_1 + _DAT_113073c78,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104398d88; end: 104398d97; -[_TtC18PlusSubscribeScope18PlusSubscribeScope presentationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104398d88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073c80);
}



/* Entry: 104398d98; end: 104398df3; -[_TtC18PlusSubscribeScope18PlusSubscribeScope init] */

void FUN_104398d98(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PlusSubscribeScope.PlusSubscribeScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104398dc4);
  (*pcVar1)();
}


