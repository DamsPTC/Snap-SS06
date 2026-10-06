/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10418b2a8; end: 10418b2b7; -[_TtC32AdAttachmentPresenterPluginScope32AdAttachmentPresenterPluginScope context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b2a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067420));
  return;
}



/* Entry: 10418b2b8; end: 10418b2ff; -[_TtC32AdAttachmentPresenterPluginScope32AdAttachmentPresenterPluginScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b2b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113067428;
  _swift_beginAccess(param_1 + _DAT_113067428,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418b300; end: 10418b357; -[_TtC32AdAttachmentPresenterPluginScope32AdAttachmentPresenterPluginScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b300(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113067428;
  _swift_beginAccess(param_1 + _DAT_113067428,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10418b358; end: 10418b367; -[_TtC32AdAttachmentPresenterPluginScope32AdAttachmentPresenterPluginScope disableInternalBrowserPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10418b358(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113067430);
}



/* Entry: 10418b368; end: 10418b377; -[_TtC32AdAttachmentPresenterPluginScope32AdAttachmentPresenterPluginScope useSwiftPresenters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10418b368(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113067438);
}



/* Entry: 10418b378; end: 10418b387; -[_TtC32AdAttachmentPresenterPluginScope32AdAttachmentPresenterPluginScope autoTriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10418b378(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113067440);
}



/* Entry: 10418b388; end: 10418b617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10418b388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113067428;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113067428,0);
  *(undefined8 *)(unaff_x20 + _DAT_113067410) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113067418) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113067420) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_4);
  *(undefined1 *)(unaff_x20 + _DAT_113067430) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113067438) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113067440) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_2);
  _objc_retain(param_3);
  puVar3 = auStack_88;
  _objc_msgSendSuper2(puVar3,puVar1);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_2);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10418b618; end: 10418b64b;  */

void FUN_10418b618(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418b64c; end: 10418b6a3; -[_TtC32AdAttachmentPresenterPluginScope32AdAttachmentPresenterPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10418b64c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113067410));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113067418));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113067420));
  param_1 = param_1 + _DAT_113067428;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10418b6a4; end: 10418b6b3; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope attachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067470));
  return;
}



/* Entry: 10418b6b4; end: 10418b6d3; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b6b4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113067478));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418b6d4; end: 10418b6e3; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b6d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067480));
  return;
}



/* Entry: 10418b6e4; end: 10418b72b; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b6e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113067488;
  _swift_beginAccess(param_1 + _DAT_113067488,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418b72c; end: 10418b783; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113067488;
  _swift_beginAccess(param_1 + _DAT_113067488,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10418b784; end: 10418b793; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope disableInternalBrowserPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10418b784(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113067490);
}



/* Entry: 10418b794; end: 10418b7a3; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope autotriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10418b794(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113067498);
}



/* Entry: 10418b7a4; end: 10418b8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10418b7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113067488;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113067488,0);
  *(undefined8 *)(unaff_x20 + _DAT_113067470) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113067478) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113067480) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_4);
  *(undefined1 *)(unaff_x20 + _DAT_113067490) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113067498) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_2);
  _objc_retain(param_3);
  puVar3 = auStack_88;
  _objc_msgSendSuper2(puVar3,puVar1);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_2);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10418b8dc; end: 10418b993; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope initWithAttachment:uiContainer:context:delegate:disableInternalBrowserPresenter:autotriggered:] */

undefined8
FUN_10418b8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  uVar1 = param_3;
  FUN_10418ba60(param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_6);
  return uVar1;
}



/* Entry: 10418b994; end: 10418b99b; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope initWithAttachment:uiContainer:context:delegate:disableInternalBrowserPresenter:] */

void FUN_10418b994(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff49d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithAttachment_uiContainer_c_1125dac38);
  return;
}



/* Entry: 10418b99c; end: 10418b9a7; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope initWithAttachment:uiContainer:context:delegate:] */

void FUN_10418b99c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff49d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithAttachment_uiContainer_c_1125dac38);
  return;
}



/* Entry: 10418b9a8; end: 10418ba07; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope init] */

void FUN_10418b9a8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdAttachmentHandlerScope.AdAttachmentHandlerScope",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10418b9d4);
  (*pcVar1)();
}



/* Entry: 10418ba08; end: 10418ba5f; -[_TtC24AdAttachmentHandlerScope24AdAttachmentHandlerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10418ba08(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113067470));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113067478));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113067480));
  param_1 = param_1 + _DAT_113067488;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10418ba60; end: 10418bb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418ba60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar2 = _DAT_113067488;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113067488,0);
  *(undefined8 *)(unaff_x20 + _DAT_113067470) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113067478) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113067480) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_4);
  *(undefined1 *)(unaff_x20 + _DAT_113067490) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113067498) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_msgSendSuper2(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 10418bb64; end: 10418bb87;  */

undefined8 FUN_10418bb64(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10418bb88; end: 10418bbf3;  */

void FUN_10418bb88(void)

{
  func_0x00010bf229e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10418bbf4; end: 10418bd23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10418bbf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar4 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100e3aef4(param_1,lVar4);
  FUN_1041b9b38(lVar4);
  lVar5 = 0;
  FUN_1041bb580();
  lVar3 = lVar5;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_113067da0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar5;
  _swift_bridgeObjectRetain(param_4);
  plVar6 = &lStack_70;
  _objc_msgSendSuper2(plVar6,puVar2);
  func_0x00010bf229e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(plVar6);
  return unaff_x20;
}



/* Entry: 10418bd24; end: 10418bd6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418bd24(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130674d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10418bd70; end: 10418bed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10418bd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000100367f30();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113067488;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113067488,0);
  *(undefined8 *)(lVar4 + _DAT_113067470) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113067478) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113067480) = param_3;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_4);
  *(undefined1 *)(lVar4 + _DAT_113067490) = param_5;
  *(undefined1 *)(lVar4 + _DAT_113067498) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_2);
  _objc_retain(param_3);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10418bed4; end: 10418bf9f; -[_TtC24AdAttachmentHandlerScope32AdAttachmentHandlerScopeServices buildWithAttachment:uiContainer:context:delegate:disableInternalBrowserPresenter:autotriggered:] */

void FUN_10418bed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10418bd70(param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10418bfa0; end: 10418bfff; -[_TtC24AdAttachmentHandlerScope32AdAttachmentHandlerScopeServices init] */

void FUN_10418bfa0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdAttachmentHandlerScope.AdAttachmentHandlerScopeServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10418bfcc);
  (*pcVar1)();
}



/* Entry: 10418c000; end: 10418c01f; -[_TtC24AdAttachmentHandlerScope32AdAttachmentHandlerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418c000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130674d0));
  return;
}



/* Entry: 10418c020; end: 10418c09f;  */

uint FUN_10418c020(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_10418c0a0(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 10418c0a0; end: 10418c1cf;  */

uint FUN_10418c0a0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar5;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puVar4;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar5 = param_1[2];
    uVar2 = param_2[2];
    if (uVar5 == 0) {
      if (uVar2 == 0) {
LAB_10418c140:
        uStack_88 = param_1[10];
        uStack_90 = param_1[9];
        uStack_78 = param_1[0xc];
        uStack_80 = param_1[0xb];
        uStack_68 = param_1[0xe];
        uStack_70 = param_1[0xd];
        uStack_58 = param_1[0x10];
        uStack_60 = param_1[0xf];
        uStack_b8 = param_1[4];
        uStack_c0 = param_1[3];
        uStack_a8 = param_1[6];
        uStack_b0 = param_1[5];
        uStack_98 = param_1[8];
        uStack_a0 = param_1[7];
        uStack_128 = param_2[4];
        uStack_130 = param_2[3];
        uStack_118 = param_2[6];
        uStack_120 = param_2[5];
        uStack_108 = param_2[8];
        uStack_110 = param_2[7];
        uStack_f8 = param_2[10];
        uStack_100 = param_2[9];
        uStack_e8 = param_2[0xc];
        uStack_f0 = param_2[0xb];
        uStack_c8 = param_2[0x10];
        uStack_d0 = param_2[0xf];
        uStack_d8 = param_2[0xe];
        uStack_e0 = param_2[0xd];
        puVar4 = &uStack_c0;
        FUN_104191074(puVar4,&uStack_130);
        uVar1 = (uint)puVar4;
        goto LAB_10418c1b0;
      }
    }
    else if (uVar2 != 0) {
      FUN_10418c7a4(0);
      _objc_retain(uVar2);
      _objc_retain();
      uVar3 = uVar5;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_10418c140;
    }
  }
  uVar1 = 0;
LAB_10418c1b0:
  return uVar1 & 1;
}



/* Entry: 10418c1d0; end: 10418c243;  */

long FUN_10418c1d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10418c244; end: 10418c2ef;  */

undefined8 * FUN_10418c244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  uVar6 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar6;
  uVar5 = param_2[8];
  param_1[8] = uVar5;
  uVar6 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar6;
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar6;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar4;
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _objc_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}



/* Entry: 10418c2f0; end: 10418c403;  */

undefined8 * FUN_10418c2f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_retain();
  _objc_release(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xd] = param_2[0xd];
  uVar1 = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0xe] = uVar1;
  param_1[0x10] = param_2[0x10];
  return param_1;
}



/* Entry: 10418c404; end: 10418c4a7;  */

undefined8 * FUN_10418c404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _objc_release(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_2[0xc];
  uVar2 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0x10] = param_2[0x10];
  return param_1;
}



/* Entry: 10418c4a8; end: 10418c55f;  */

int FUN_10418c4a8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10418c560; end: 10418c6a7; -[SCAdAdToCallAttachmentCallbacks deepLinkResultHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418c560(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113067500);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f3aa0;
  puStack_48 = &UNK_11074e640;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10418c6a8; end: 10418c72f; -[SCAdAdToCallAttachmentCallbacks initWithDeepLinkResultHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418c6a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __Block_copy();
  puVar3 = &UNK_11074e628;
  _swift_allocObject(&UNK_11074e628,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113067500);
  *puVar1 = FUN_10418c7c4;
  puVar1[1] = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10418c730; end: 10418c78f; -[SCAdAdToCallAttachmentCallbacks init] */

void FUN_10418c730(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdAttachmentHandlerScope.AdAdToCallAttachmentCallbacks",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10418c75c);
  (*pcVar1)();
}



/* Entry: 10418c790; end: 10418c7a3; -[SCAdAdToCallAttachmentCallbacks .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418c790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113067500 + 8));
  return;
}



/* Entry: 10418c7a4; end: 10418c7c3;  */

void FUN_10418c7a4(void)

{
  _objc_opt_self(&PTR_PTR_11298da48);
  return;
}



/* Entry: 10418c7c4; end: 10418c7e7;  */

void FUN_10418c7c4(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102421b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10418c7e8; end: 10418c877;  */

uint FUN_10418c7e8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_10418c878(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 10418c878; end: 10418c9c7;  */

uint FUN_10418c878(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar5;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puVar4;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)) &&
     ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)))) {
    uVar5 = param_1[4];
    uVar2 = param_2[4];
    if (uVar5 == 0) {
      if (uVar2 == 0) {
LAB_10418c938:
        uStack_88 = param_1[0xc];
        uStack_90 = param_1[0xb];
        uStack_78 = param_1[0xe];
        uStack_80 = param_1[0xd];
        uStack_68 = param_1[0x10];
        uStack_70 = param_1[0xf];
        uStack_58 = param_1[0x12];
        uStack_60 = param_1[0x11];
        uStack_b8 = param_1[6];
        uStack_c0 = param_1[5];
        uStack_a8 = param_1[8];
        uStack_b0 = param_1[7];
        uStack_98 = param_1[10];
        uStack_a0 = param_1[9];
        uStack_128 = param_2[6];
        uStack_130 = param_2[5];
        uStack_118 = param_2[8];
        uStack_120 = param_2[7];
        uStack_108 = param_2[10];
        uStack_110 = param_2[9];
        uStack_f8 = param_2[0xc];
        uStack_100 = param_2[0xb];
        uStack_e8 = param_2[0xe];
        uStack_f0 = param_2[0xd];
        uStack_c8 = param_2[0x12];
        uStack_d0 = param_2[0x11];
        uStack_d8 = param_2[0x10];
        uStack_e0 = param_2[0xf];
        puVar4 = &uStack_c0;
        FUN_104191074(puVar4,&uStack_130);
        uVar1 = (uint)puVar4;
        goto LAB_10418c9a8;
      }
    }
    else if (uVar2 != 0) {
      FUN_10418d02c(0);
      _objc_retain(uVar2);
      _objc_retain();
      uVar3 = uVar5;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_10418c938;
    }
  }
  uVar1 = 0;
LAB_10418c9a8:
  return uVar1 & 1;
}



/* Entry: 10418c9c8; end: 10418ca43;  */

long FUN_10418c9c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10418ca44; end: 10418cb07;  */

undefined8 * FUN_10418ca44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  uVar4 = param_2[8];
  uVar7 = param_2[9];
  param_1[8] = uVar4;
  param_1[9] = uVar7;
  uVar6 = param_2[10];
  param_1[10] = uVar6;
  uVar7 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar7;
  uVar7 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar7;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  uVar5 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar5;
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _objc_retain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}



/* Entry: 10418cb08; end: 10418cc3b;  */

undefined8 * FUN_10418cb08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _objc_retain();
  _objc_release(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xf] = param_2[0xf];
  uVar1 = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  param_1[0x10] = uVar1;
  param_1[0x12] = param_2[0x12];
  return param_1;
}



/* Entry: 10418cc3c; end: 10418ccef;  */

undefined8 * FUN_10418cc3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _objc_release(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xe];
  uVar1 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  param_1[0x12] = param_2[0x12];
  return param_1;
}



/* Entry: 10418ccf0; end: 10418cdab;  */

int FUN_10418ccf0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10418cdac; end: 10418cf2f; -[SCAdAdToMessageAttachmentCallbacks resultHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418cdac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113067530);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x10418ce3c;
  puStack_48 = &UNK_11074e728;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10418cf30; end: 10418cfb7; -[SCAdAdToMessageAttachmentCallbacks initWithResultHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418cf30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __Block_copy();
  puVar3 = &UNK_11074e710;
  _swift_allocObject(&UNK_11074e710,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113067530);
  *puVar1 = FUN_10418d04c;
  puVar1[1] = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10418cfb8; end: 10418d017; -[SCAdAdToMessageAttachmentCallbacks init] */

void FUN_10418cfb8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdAttachmentHandlerScope.AdAdToMessageAttachmentCallbacks",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10418cfe4);
  (*pcVar1)();
}



/* Entry: 10418d018; end: 10418d02b; -[SCAdAdToMessageAttachmentCallbacks .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418d018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113067530 + 8));
  return;
}



/* Entry: 10418d02c; end: 10418d04b;  */

void FUN_10418d02c(void)

{
  _objc_opt_self(&PTR_PTR_11298db08);
  return;
}



/* Entry: 10418d04c; end: 10418d07b;  */

void FUN_10418d04c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010418d058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10418d07c; end: 10418d1ef;  */

void FUN_10418d07c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  lVar1 = unaff_x20[2];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
  }
  lVar1 = 0;
  func_0x000100b91790();
  FUN_10418d26c((long)*(int *)(lVar1 + 0x18),param_1);
  lVar3 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x1c));
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x20)));
  FUN_104190e5c(param_1);
  lVar1 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x28));
  if (lVar1 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10418d1f0; end: 10418d22b;  */

void FUN_10418d1f0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10418d07c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10418d22c; end: 10418d22f;  */

void FUN_10418d22c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  lVar1 = unaff_x20[2];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
  }
  lVar1 = 0;
  func_0x000100b91790();
  FUN_10418d26c((long)*(int *)(lVar1 + 0x18),param_1);
  lVar3 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x1c));
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x20)));
  FUN_104190e5c(param_1);
  lVar1 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x28));
  if (lVar1 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10418d230; end: 10418d267;  */

void FUN_10418d230(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10418d07c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10418d268; end: 10418d26b;  */

undefined8 FUN_10418d268(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  lVar4 = 0;
  func_0x000100b918b4();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = (long)&lStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112dd42a0;
  func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = lVar9 - extraout_x8_00;
  lVar8 = 0x113067618;
  func_0x0001000285a8(0x113067618,&UNK_10dcdf340);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = uVar11 - extraout_x8_01;
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar7 = param_2[2];
  if (param_1[2] == 0) {
    if (lVar7 != 0) {
      return 0;
    }
  }
  else {
    if (lVar7 == 0) {
      return 0;
    }
    uVar5 = param_1[1];
    if (((uVar5 != param_2[1]) || (param_1[2] != lVar7)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar5 & 1) == 0)) {
      return 0;
    }
  }
  lVar7 = 0;
  func_0x000100b91790();
  iVar2 = *(int *)(lVar7 + 0x18);
  iVar3 = *(int *)(lVar8 + 0x30);
  lStack_160 = lVar7;
  func_0x00010418f050((long)param_1 + (long)iVar2,lVar10,0x112dd42a0,&UNK_10dcdf270);
  lStack_158 = (long)iVar3;
  func_0x00010418f050((long)param_2 + (long)iVar2,lVar10 + iVar3,0x112dd42a0,&UNK_10dcdf270);
  pcVar12 = *(code **)(lVar13 + 0x30);
  lVar8 = lVar10;
  (*pcVar12)(lVar10,1,lVar4);
  if ((int)lVar8 == 1) {
    lVar8 = lVar10 + lStack_158;
    (*pcVar12)(lVar8,1,lVar4);
    if ((int)lVar8 != 1) {
LAB_10418d8bc:
      func_0x00010418f098(lVar10,0x113067618,&UNK_10dcdf340);
      return 0;
    }
    func_0x00010418f098(lVar10,0x112dd42a0,&UNK_10dcdf270);
  }
  else {
    func_0x00010418f050(lVar10,uVar11,0x112dd42a0,&UNK_10dcdf270);
    lVar13 = lStack_158;
    lVar8 = lVar10 + lStack_158;
    (*pcVar12)(lVar8,1,lVar4);
    if ((int)lVar8 == 1) {
      FUN_10418e8e8(uVar11);
      goto LAB_10418d8bc;
    }
    func_0x00010418efcc(lVar10 + lVar13,lVar9);
    uVar5 = uVar11;
    FUN_10418f92c(uVar11,lVar9);
    FUN_10418e8e8(lVar9);
    FUN_10418e8e8(uVar11);
    func_0x00010418f098(lVar10,0x112dd42a0,&UNK_10dcdf270);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  lVar8 = lStack_160;
  uVar11 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_160 + 0x1c));
  lVar4 = *(long *)((long)param_2 + (long)*(int *)(lStack_160 + 0x1c));
  if (uVar11 == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    func_0x00010418f308(0);
    _objc_retain(lVar4);
    _objc_retain();
    uVar5 = uVar11;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar11);
    _objc_release(lVar4);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  if (*(int *)((long)param_1 + (long)*(int *)(lVar8 + 0x20)) ==
      *(int *)((long)param_2 + (long)*(int *)(lVar8 + 0x20))) {
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
    uStack_108 = puVar6[9];
    uStack_110 = puVar6[8];
    uStack_f8 = puVar6[0xb];
    uStack_100 = puVar6[10];
    uStack_e8 = puVar6[0xd];
    uStack_f0 = puVar6[0xc];
    uStack_148 = puVar6[1];
    uStack_150 = *puVar6;
    uStack_138 = puVar6[3];
    uStack_140 = puVar6[2];
    uStack_128 = puVar6[5];
    uStack_130 = puVar6[4];
    uStack_118 = puVar6[7];
    uStack_120 = puVar6[6];
    uStack_d8 = puVar1[1];
    uStack_e0 = *puVar1;
    uStack_c8 = puVar1[3];
    uStack_d0 = puVar1[2];
    uStack_b8 = puVar1[5];
    uStack_c0 = puVar1[4];
    uStack_a8 = puVar1[7];
    uStack_b0 = puVar1[6];
    uStack_88 = puVar1[0xb];
    uStack_90 = puVar1[10];
    uStack_78 = puVar1[0xd];
    uStack_80 = puVar1[0xc];
    uStack_98 = puVar1[9];
    uStack_a0 = puVar1[8];
    puVar6 = &uStack_150;
    FUN_104191074(puVar6,&uStack_e0);
    if (((ulong)puVar6 & 1) != 0) {
      uVar11 = *(ulong *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
      lVar8 = *(long *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
      if (uVar11 == 0) {
        if (lVar8 == 0) {
          return 1;
        }
      }
      else if (lVar8 != 0) {
        func_0x00010451429c(0);
        _objc_retain(lVar8);
        _objc_retain();
        uVar5 = uVar11;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar11);
        _objc_release(lVar8);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 10418d26c; end: 10418da9b;  */

void FUN_10418d26c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long alStack_70 [2];
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  alStack_70[1] = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_70[1] + 0x40));
  lVar7 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d3bc20;
  alStack_70[0] = lVar7;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_00;
  lVar3 = 0;
  func_0x000100b918b4();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = (undefined8 *)(lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar9 = 0x112dd42a0;
  func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar4 - extraout_x8_02;
  func_0x00010418f050();
  lVar9 = lVar8;
  (**(code **)(lVar5 + 0x30))(lVar8,1,lVar3);
  if ((int)lVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010418efcc(lVar8,puVar4);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,*puVar4,puVar4[1]);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    uVar6 = 0x112d6c668;
    func_0x00010418f010(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar6);
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar3 + 0x20));
    __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
    lVar9 = *(long *)((long)puVar4 + (long)*(int *)(lVar3 + 0x24));
    if (lVar9 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      _objc_retain(lVar9);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
      _objc_release(lVar9);
    }
    lVar9 = alStack_70[1];
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar3 + 0x28));
    lVar5 = puVar1[1];
    if (lVar5 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar1;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
    }
    lVar5 = *(long *)((long)puVar4 + (long)*(int *)(lVar3 + 0x2c));
    if (lVar5 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      _objc_retain(lVar5);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
      _objc_release(lVar5);
    }
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar3 + 0x30));
    lVar5 = puVar1[1];
    if (lVar5 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar1;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
    }
    func_0x00010418f050((long)puVar4 + (long)*(int *)(lVar3 + 0x34),lVar7,0x112d3bc20,&UNK_10d904ef0
                       );
    lVar8 = lVar7;
    (**(code **)(lVar9 + 0x30))(lVar7,1,lVar2);
    lVar5 = alStack_70[0];
    if ((int)lVar8 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      (**(code **)(lVar9 + 0x20))(alStack_70[0],lVar7,lVar2);
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar6);
      (**(code **)(lVar9 + 8))(lVar5,lVar2);
    }
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar3 + 0x38));
    lVar9 = puVar1[1];
    if (lVar9 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar6 = *puVar1;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar9);
    }
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar3 + 0x3c));
    lVar9 = puVar1[1];
    if (lVar9 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar6 = *puVar1;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar9);
    }
    FUN_10418e8e8(puVar4);
  }
  return;
}



/* Entry: 10418da9c; end: 10418dac7;  */

void FUN_10418da9c(void)

{
  func_0x00010418f010(0x113067560,&SUB_100b91790,&UNK_10dcdf2b8);
  return;
}



/* Entry: 10418dac8; end: 10418de0f;  */

long * FUN_10418dac8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar8;
    lVar15 = param_2[2];
    param_1[2] = lVar15;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar8 = 0;
    func_0x000100b918b4();
    lVar19 = *(long *)(lVar8 + -8);
    pcVar17 = *(code **)(lVar19 + 0x30);
    _swift_bridgeObjectRetain(lVar15);
    puVar9 = puVar2;
    (*pcVar17)(puVar2,1,lVar8);
    if ((int)puVar9 == 0) {
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      uVar4 = puVar2[2];
      uVar13 = puVar2[3];
      puVar1[2] = uVar4;
      puVar1[3] = uVar13;
      iVar6 = *(int *)(lVar8 + 0x1c);
      lVar10 = 0;
      __s10Foundation4UUIDVMa();
      lVar12 = *(long *)(lVar10 + -8);
      pcVar16 = *(code **)(lVar12 + 0x10);
      _swift_bridgeObjectRetain(uVar5);
      _objc_retain(uVar4);
      _objc_retain(uVar13);
      (*pcVar16)((long)puVar1 + (long)iVar6,(long)puVar2 + (long)iVar6,lVar10);
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x20));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x20));
      uVar4 = puVar3[1];
      *puVar9 = *puVar3;
      puVar9[1] = uVar4;
      uVar13 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x24));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x24)) = uVar13;
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x28));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x28));
      uVar4 = puVar3[1];
      *puVar9 = *puVar3;
      puVar9[1] = uVar4;
      uVar20 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x2c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x2c)) = uVar20;
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x30));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x30));
      uVar5 = puVar3[1];
      *puVar9 = *puVar3;
      puVar9[1] = uVar5;
      lVar18 = (long)*(int *)(lVar8 + 0x34);
      pcVar17 = *(code **)(lVar12 + 0x30);
      _swift_bridgeObjectRetain();
      _objc_retain(uVar13);
      _swift_bridgeObjectRetain(uVar4);
      _objc_retain(uVar20);
      _swift_bridgeObjectRetain(uVar5);
      lVar15 = (long)puVar2 + lVar18;
      (*pcVar17)(lVar15,1,lVar10);
      if ((int)lVar15 == 0) {
        (*pcVar16)((long)puVar1 + lVar18,(long)puVar2 + lVar18,lVar10);
        (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar18,0,1,lVar10);
      }
      else {
        lVar15 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar18,(long)puVar2 + lVar18,
                *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x38));
      uVar4 = puVar3[1];
      *puVar9 = *puVar3;
      puVar9[1] = uVar4;
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x3c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x3c));
      uVar4 = puVar2[1];
      *puVar9 = *puVar2;
      puVar9[1] = uVar4;
      pcVar17 = *(code **)(lVar19 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      (*pcVar17)(puVar1,0,1,lVar8);
    }
    else {
      lVar8 = 0x112dd42a0;
      func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x20);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)iVar6) = *(undefined8 *)((long)param_2 + (long)iVar6);
    iVar6 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    uVar5 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar5;
    uVar13 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar13;
    uVar20 = puVar2[6];
    puVar1[7] = puVar2[7];
    puVar1[6] = uVar20;
    uVar20 = puVar2[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar20;
    *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
    uVar14 = puVar2[0xb];
    puVar1[10] = puVar2[10];
    puVar1[0xb] = uVar14;
    puVar1[0xd] = puVar2[0xd];
    uVar14 = *(undefined8 *)((long)param_2 + (long)iVar6);
    *(undefined8 *)((long)param_1 + (long)iVar6) = uVar14;
    _objc_retain();
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar20);
    _objc_retain(uVar14);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar11 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar8 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10418de10; end: 10418df87;  */

void FUN_10418de10(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  lVar1 = param_1 + *(int *)(param_2 + 0x18);
  lVar3 = 0;
  func_0x000100b918b4();
  lVar4 = lVar1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar1,1,lVar3);
  if ((int)lVar4 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _objc_release(*(undefined8 *)(lVar1 + 0x10));
    _objc_release(*(undefined8 *)(lVar1 + 0x18));
    iVar2 = *(int *)(lVar3 + 0x1c);
    lVar5 = 0;
    __s10Foundation4UUIDVMa();
    lVar7 = *(long *)(lVar5 + -8);
    pcVar6 = *(code **)(lVar7 + 8);
    (*pcVar6)(lVar1 + iVar2,lVar5);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x20) + 8));
    _objc_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24)));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x28) + 8));
    _objc_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x2c)));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x30) + 8));
    iVar2 = *(int *)(lVar3 + 0x34);
    lVar4 = lVar1 + iVar2;
    (**(code **)(lVar7 + 0x30))(lVar4,1,lVar5);
    if ((int)lVar4 == 0) {
      (*pcVar6)(lVar1 + iVar2,lVar5);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x38) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x3c) + 8));
  }
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
  lVar1 = param_1 + *(int *)(param_2 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28)));
  return;
}



/* Entry: 10418df88; end: 10418e8e7;  */

undefined8 * FUN_10418df88(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  
  uVar14 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar14;
  uVar14 = param_2[2];
  param_1[2] = uVar14;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar6 = 0;
  func_0x000100b918b4();
  lVar17 = *(long *)(lVar6 + -8);
  pcVar15 = *(code **)(lVar17 + 0x30);
  _swift_bridgeObjectRetain(uVar14);
  puVar7 = puVar2;
  (*pcVar15)(puVar2,1,lVar6);
  if ((int)puVar7 == 0) {
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    uVar14 = puVar2[2];
    uVar16 = puVar2[3];
    puVar1[2] = uVar14;
    puVar1[3] = uVar16;
    iVar5 = *(int *)(lVar6 + 0x1c);
    lVar8 = 0;
    __s10Foundation4UUIDVMa();
    lVar10 = *(long *)(lVar8 + -8);
    pcVar12 = *(code **)(lVar10 + 0x10);
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(uVar14);
    _objc_retain(uVar16);
    (*pcVar12)((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,lVar8);
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x20));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x20));
    uVar14 = puVar3[1];
    *puVar7 = *puVar3;
    puVar7[1] = uVar14;
    uVar16 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x24));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x24)) = uVar16;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x28));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x28));
    uVar14 = puVar3[1];
    *puVar7 = *puVar3;
    puVar7[1] = uVar14;
    uVar18 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x2c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x2c)) = uVar18;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30));
    uVar4 = puVar3[1];
    *puVar7 = *puVar3;
    puVar7[1] = uVar4;
    lVar13 = (long)*(int *)(lVar6 + 0x34);
    pcVar15 = *(code **)(lVar10 + 0x30);
    _swift_bridgeObjectRetain();
    _objc_retain(uVar16);
    _swift_bridgeObjectRetain(uVar14);
    _objc_retain(uVar18);
    _swift_bridgeObjectRetain(uVar4);
    lVar9 = (long)puVar2 + lVar13;
    (*pcVar15)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      (*pcVar12)((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar8);
      (**(code **)(lVar10 + 0x38))((long)puVar1 + lVar13,0,1,lVar8);
    }
    else {
      lVar9 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar13,(long)puVar2 + lVar13,
              *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
    uVar14 = puVar3[1];
    *puVar7 = *puVar3;
    puVar7[1] = uVar14;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x3c));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x3c));
    uVar14 = puVar2[1];
    *puVar7 = *puVar2;
    puVar7[1] = uVar14;
    pcVar15 = *(code **)(lVar17 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar14);
    (*pcVar15)(puVar1,0,1,lVar6);
  }
  else {
    lVar6 = 0x112dd42a0;
    func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
  iVar5 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar14 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar14;
  uVar4 = puVar2[3];
  puVar1[2] = puVar2[2];
  puVar1[3] = uVar4;
  uVar16 = puVar2[5];
  puVar1[4] = puVar2[4];
  puVar1[5] = uVar16;
  uVar18 = puVar2[6];
  puVar1[7] = puVar2[7];
  puVar1[6] = uVar18;
  uVar18 = puVar2[9];
  puVar1[8] = puVar2[8];
  puVar1[9] = uVar18;
  *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
  uVar11 = puVar2[0xb];
  puVar1[10] = puVar2[10];
  puVar1[0xb] = uVar11;
  puVar1[0xd] = puVar2[0xd];
  uVar11 = *(undefined8 *)((long)param_2 + (long)iVar5);
  *(undefined8 *)((long)param_1 + (long)iVar5) = uVar11;
  _objc_retain();
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar18);
  _objc_retain(uVar11);
  return param_1;
}



/* Entry: 10418e8e8; end: 10418e923;  */

undefined8 FUN_10418e8e8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b918b4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10418e924; end: 10418efb3;  */

undefined8 * FUN_10418e924(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  uVar13 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar13;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar5 = 0;
  func_0x000100b918b4();
  lVar10 = *(long *)(lVar5 + -8);
  puVar6 = puVar2;
  (**(code **)(lVar10 + 0x30))(puVar2,1,lVar5);
  if ((int)puVar6 == 0) {
    uVar13 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar13;
    puVar1[3] = uVar15;
    puVar1[2] = uVar14;
    iVar3 = *(int *)(lVar5 + 0x1c);
    lVar7 = 0;
    __s10Foundation4UUIDVMa();
    lVar11 = *(long *)(lVar7 + -8);
    pcVar9 = *(code **)(lVar11 + 0x20);
    (*pcVar9)((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,lVar7);
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x20));
    uVar13 = *puVar6;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x20));
    puVar4[1] = puVar6[1];
    *puVar4 = uVar13;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x24)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x24));
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x28));
    uVar13 = *puVar6;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x28));
    puVar4[1] = puVar6[1];
    *puVar4 = uVar13;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x2c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x2c));
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x30));
    uVar13 = *puVar6;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x30));
    puVar4[1] = puVar6[1];
    *puVar4 = uVar13;
    lVar12 = (long)*(int *)(lVar5 + 0x34);
    lVar8 = (long)puVar2 + lVar12;
    (**(code **)(lVar11 + 0x30))(lVar8,1,lVar7);
    if ((int)lVar8 == 0) {
      (*pcVar9)((long)puVar1 + lVar12,(long)puVar2 + lVar12,lVar7);
      (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar12,0,1,lVar7);
    }
    else {
      lVar8 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar12,(long)puVar2 + lVar12,
              *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x38));
    uVar13 = *puVar6;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x38));
    puVar4[1] = puVar6[1];
    *puVar4 = uVar13;
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x3c));
    uVar13 = *puVar2;
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x3c));
    puVar6[1] = puVar2[1];
    *puVar6 = uVar13;
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar5);
  }
  else {
    lVar5 = 0x112dd42a0;
    func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar13 = *puVar2;
  uVar15 = puVar2[3];
  uVar14 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar13;
  puVar1[3] = uVar15;
  puVar1[2] = uVar14;
  uVar13 = puVar2[10];
  uVar15 = puVar2[0xd];
  uVar14 = puVar2[0xc];
  puVar1[0xb] = puVar2[0xb];
  puVar1[10] = uVar13;
  puVar1[0xd] = uVar15;
  puVar1[0xc] = uVar14;
  uVar13 = puVar2[6];
  uVar15 = puVar2[9];
  uVar14 = puVar2[8];
  puVar1[7] = puVar2[7];
  puVar1[6] = uVar13;
  puVar1[9] = uVar15;
  puVar1[8] = uVar14;
  uVar13 = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar13;
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  return param_1;
}



/* Entry: 10418efb4; end: 10418efcb;  */

void FUN_10418efb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10418efcc; end: 10418f0d7;  */

undefined8 FUN_10418efcc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b918b4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10418f0d8; end: 10418f0f3; -[SCAdAppInstallAttachmentCallbacks willPresentStoreViewActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418f0d8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_113067620);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113067620))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11074e850;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10418f0f4; end: 10418f10f; -[SCAdAppInstallAttachmentCallbacks didLoadStoreViewActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418f0f4(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_113067628);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113067628))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_10418f110;
    puStack_48 = &UNK_11074e828;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10418f110; end: 10418f167;  */

void FUN_10418f110(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10418f168; end: 10418f183; -[SCAdAppInstallAttachmentCallbacks didCloseStoreViewActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418f168(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_113067630);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113067630))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_10418f110;
    puStack_48 = &UNK_11074e800;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10418f184; end: 10418f20b;  */

void FUN_10418f184(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + *param_3))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = param_4;
    uStack_48 = param_5;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10418f20c; end: 10418f2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418f20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067620);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067628);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067630);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10418f2a8; end: 10418f327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418f2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067620);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067628);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067630);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x00010418f308();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10418f328; end: 10418f463; -[SCAdAppInstallAttachmentCallbacks initWithWillPresentStoreViewActionHandler:didLoadStoreViewActionHandler:didCloseStoreViewActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418f328(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lStack_50;
  undefined *puStack_48;
  
  __Block_copy();
  __Block_copy();
  __Block_copy();
  if (param_3 == 0) {
    uVar7 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &UNK_11074e7e8;
    _swift_allocObject(&UNK_11074e7e8,0x18,7);
    *(long *)(puVar5 + 0x10) = param_3;
    uVar7 = 0x10418f530;
  }
  if (param_4 == 0) {
    puVar6 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar6 = &UNK_11074e7c0;
    _swift_allocObject(&UNK_11074e7c0,0x18,7);
    *(long *)(puVar6 + 0x10) = param_4;
    uVar1 = 0x10418f564;
  }
  if (param_5 == 0) {
    pcVar4 = (code *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_11074e798;
    _swift_allocObject(&UNK_11074e798,0x18,7);
    *(long *)(puVar3 + 0x10) = param_5;
    pcVar4 = FUN_10418f514;
  }
  puVar2 = (undefined8 *)(param_1 + _DAT_113067620);
  *puVar2 = uVar7;
  puVar2[1] = puVar5;
  puVar2 = (undefined8 *)(param_1 + _DAT_113067628);
  *puVar2 = uVar1;
  puVar2[1] = puVar6;
  puVar2 = (undefined8 *)(param_1 + _DAT_113067630);
  *puVar2 = pcVar4;
  puVar2[1] = puVar3;
  func_0x00010418f308();
  lStack_50 = param_1;
  puStack_48 = puVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10418f464; end: 10418f4bf; -[SCAdAppInstallAttachmentCallbacks init] */

void FUN_10418f464(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdAttachmentHandlerScope.AdAppInstallAttachmentCallbacks",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10418f490);
  (*pcVar1)();
}



/* Entry: 10418f4c0; end: 10418f513; -[SCAdAppInstallAttachmentCallbacks .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010418f4e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010418f4e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418f4c0(long param_1)

{
  if (*(long *)(param_1 + _DAT_113067620) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_113067620))[1]);
    return;
  }
  return;
}



/* Entry: 10418f514; end: 10418f56b;  */

void FUN_10418f514(uint param_1,uint param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010418f52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))
            (*(long *)(unaff_x20 + 0x10),param_1 & 1,param_2 & 1);
  return;
}



/* Entry: 10418f56c; end: 10418f8af;  */

void FUN_10418f56c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  puVar2 = PTR___s10Foundation4UUIDVMa_110350c38;
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar5 - extraout_x8_00;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
  lVar4 = 0;
  func_0x000100b918b4();
  uVar9 = 0x112d6c668;
  func_0x000104190908(0x112d6c668,puVar2,PTR___s10Foundation4UUIDVSHAAMc_110350c48);
  uStack_68 = uVar9;
  __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar3);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x20));
  __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
  lVar8 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x24));
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar8);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar8);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x28));
  lVar8 = puVar1[1];
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar9 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar8);
  }
  lVar8 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x2c));
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar8);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar8);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x30));
  lVar8 = puVar1[1];
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar9 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar8);
  }
  func_0x0001000c78e8((long)unaff_x20 + (long)*(int *)(lVar4 + 0x34),lVar6);
  lVar8 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,lVar3);
  if ((int)lVar8 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar5,lVar6,lVar3);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar3,uStack_68);
    (**(code **)(lVar7 + 8))(puVar5,lVar3);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x38));
  lVar3 = puVar1[1];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar9 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar3);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x3c));
  lVar4 = puVar1[1];
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar9 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar4);
  }
  return;
}



/* Entry: 10418f8b0; end: 10418f8eb;  */

void FUN_10418f8b0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10418f56c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10418f8ec; end: 10418f8ef;  */

void FUN_10418f8ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  puVar2 = PTR___s10Foundation4UUIDVMa_110350c38;
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar5 - extraout_x8_00;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
  lVar4 = 0;
  func_0x000100b918b4();
  uVar9 = 0x112d6c668;
  func_0x000104190908(0x112d6c668,puVar2,PTR___s10Foundation4UUIDVSHAAMc_110350c48);
  uStack_68 = uVar9;
  __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar3);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x20));
  __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
  lVar8 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x24));
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar8);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar8);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x28));
  lVar8 = puVar1[1];
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar9 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar8);
  }
  lVar8 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x2c));
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar8);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar8);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x30));
  lVar8 = puVar1[1];
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar9 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar8);
  }
  func_0x0001000c78e8((long)unaff_x20 + (long)*(int *)(lVar4 + 0x34),lVar6);
  lVar8 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,lVar3);
  if ((int)lVar8 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar5,lVar6,lVar3);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar3,uStack_68);
    (**(code **)(lVar7 + 8))(puVar5,lVar3);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x38));
  lVar3 = puVar1[1];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar9 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar3);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x3c));
  lVar4 = puVar1[1];
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar9 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar4);
  }
  return;
}



/* Entry: 10418f8f0; end: 10418f927;  */

void FUN_10418f8f0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10418f56c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10418f928; end: 10418f92b;  */

undefined8 FUN_10418f928(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar12 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)puVar12 - extraout_x8_00;
  lVar10 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = uVar13 - extraout_x8_01;
  uVar5 = *param_1;
  if (((uVar5 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar5 & 1) == 0)) {
    return 0;
  }
  func_0x000104190948(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar5 = param_1[2];
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,param_2[2]);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar5 = param_1[3];
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,param_2[3]);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  lVar6 = 0;
  func_0x000100b918b4();
  uVar5 = (long)param_1 + (long)*(int *)(lVar6 + 0x1c);
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar5,(long)param_2 + (long)*(int *)(lVar6 + 0x1c));
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  uVar5 = *puVar1;
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
  if (((uVar5 != *puVar2) || (puVar1[1] != puVar2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar5 & 1) == 0)) {
    return 0;
  }
  uVar5 = *(ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  lVar16 = *(long *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
  lStack_68 = lVar6;
  if (uVar5 == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    uVar7 = 0;
    func_0x000104190948(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uStack_78 = uVar7;
    _objc_retain();
    lStack_70 = lVar16;
    _objc_retain();
    uVar9 = uVar5;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar5);
    _objc_release(lStack_70);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  lVar6 = lStack_68;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_68 + 0x28));
  uVar5 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_68 + 0x28));
  uVar9 = puVar2[1];
  if (uVar5 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar8 = *puVar1;
    if (((uVar8 != *puVar2) || (uVar5 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  uVar5 = *(ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c));
  lVar6 = *(long *)((long)param_2 + (long)*(int *)(lVar6 + 0x2c));
  if (uVar5 == 0) {
    if (lVar6 != 0) {
      return 0;
    }
  }
  else {
    if (lVar6 == 0) {
      return 0;
    }
    uVar7 = 0;
    func_0x000104190948(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uStack_78 = uVar7;
    _objc_retain();
    lStack_70 = lVar6;
    _objc_retain();
    uVar9 = uVar5;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar5);
    _objc_release(lStack_70);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  lVar6 = lStack_68;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_68 + 0x30));
  uVar5 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_68 + 0x30));
  uVar9 = puVar2[1];
  if (uVar5 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar8 = *puVar1;
    if (((uVar8 != *puVar2) || (uVar5 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  iVar3 = *(int *)(lVar6 + 0x34);
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x0001000c78e8((long)param_1 + (long)iVar3,lVar11);
  func_0x0001000c78e8((long)param_2 + (long)iVar3,lVar11 + lVar10);
  pcVar15 = *(code **)(lVar14 + 0x30);
  lVar6 = lVar11;
  (*pcVar15)(lVar11,1,lVar4);
  if ((int)lVar6 == 1) {
    lVar10 = lVar11 + lVar10;
    (*pcVar15)(lVar10,1,lVar4);
    if ((int)lVar10 != 1) {
LAB_10418fcd8:
      func_0x0001041908c8(lVar11,0x112d68090,&UNK_10da24400);
      return 0;
    }
    func_0x0001041908c8(lVar11,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x0001000c78e8(lVar11,uVar13);
    lVar6 = lVar11 + lVar10;
    (*pcVar15)(lVar6,1,lVar4);
    if ((int)lVar6 == 1) {
      (**(code **)(lVar14 + 8))(uVar13,lVar4);
      goto LAB_10418fcd8;
    }
    (**(code **)(lVar14 + 0x20))(puVar12,lVar11 + lVar10,lVar4);
    uVar7 = 0x112d68098;
    func_0x000104190908(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    uVar5 = uVar13;
    __sSQ2eeoiySbx_xtFZTj(uVar13,puVar12,lVar4,uVar7);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(puVar12,lVar4);
    (*pcVar15)(uVar13,lVar4);
    func_0x0001041908c8(lVar11,0x112d3bc20,&UNK_10d904ef0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  lVar10 = lStack_68;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_68 + 0x38));
  uVar5 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_68 + 0x38));
  uVar13 = puVar2[1];
  if (uVar5 == 0) {
    if (uVar13 != 0) {
      return 0;
    }
  }
  else {
    if (uVar13 == 0) {
      return 0;
    }
    uVar9 = *puVar1;
    if (((uVar9 != *puVar2) || (uVar5 != uVar13)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar10 + 0x3c));
  uVar5 = param_1[1];
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar10 + 0x3c));
  uVar13 = param_2[1];
  if (uVar5 == 0) {
    if (uVar13 == 0) {
      return 1;
    }
  }
  else if ((uVar13 != 0) &&
          (((uVar9 = *param_1, uVar9 == *param_2 && (uVar5 == uVar13)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar9 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 10418f92c; end: 10418fe33;  */

undefined8 FUN_10418f92c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar12 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)puVar12 - extraout_x8_00;
  lVar10 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = uVar13 - extraout_x8_01;
  uVar5 = *param_1;
  if (((uVar5 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar5 & 1) == 0)) {
    return 0;
  }
  func_0x000104190948(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar5 = param_1[2];
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,param_2[2]);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar5 = param_1[3];
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,param_2[3]);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  lVar6 = 0;
  func_0x000100b918b4();
  uVar5 = (long)param_1 + (long)*(int *)(lVar6 + 0x1c);
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar5,(long)param_2 + (long)*(int *)(lVar6 + 0x1c));
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  uVar5 = *puVar1;
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
  if (((uVar5 != *puVar2) || (puVar1[1] != puVar2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar5 & 1) == 0)) {
    return 0;
  }
  uVar5 = *(ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  lVar16 = *(long *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
  lStack_68 = lVar6;
  if (uVar5 == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    uVar7 = 0;
    func_0x000104190948(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uStack_78 = uVar7;
    _objc_retain();
    lStack_70 = lVar16;
    _objc_retain();
    uVar9 = uVar5;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar5);
    _objc_release(lStack_70);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  lVar6 = lStack_68;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_68 + 0x28));
  uVar5 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_68 + 0x28));
  uVar9 = puVar2[1];
  if (uVar5 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar8 = *puVar1;
    if (((uVar8 != *puVar2) || (uVar5 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  uVar5 = *(ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c));
  lVar6 = *(long *)((long)param_2 + (long)*(int *)(lVar6 + 0x2c));
  if (uVar5 == 0) {
    if (lVar6 != 0) {
      return 0;
    }
  }
  else {
    if (lVar6 == 0) {
      return 0;
    }
    uVar7 = 0;
    func_0x000104190948(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uStack_78 = uVar7;
    _objc_retain();
    lStack_70 = lVar6;
    _objc_retain();
    uVar9 = uVar5;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar5);
    _objc_release(lStack_70);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  lVar6 = lStack_68;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_68 + 0x30));
  uVar5 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_68 + 0x30));
  uVar9 = puVar2[1];
  if (uVar5 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar8 = *puVar1;
    if (((uVar8 != *puVar2) || (uVar5 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  iVar3 = *(int *)(lVar6 + 0x34);
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x0001000c78e8((long)param_1 + (long)iVar3,lVar11);
  func_0x0001000c78e8((long)param_2 + (long)iVar3,lVar11 + lVar10);
  pcVar15 = *(code **)(lVar14 + 0x30);
  lVar6 = lVar11;
  (*pcVar15)(lVar11,1,lVar4);
  if ((int)lVar6 == 1) {
    lVar10 = lVar11 + lVar10;
    (*pcVar15)(lVar10,1,lVar4);
    if ((int)lVar10 != 1) {
LAB_10418fcd8:
      func_0x0001041908c8(lVar11,0x112d68090,&UNK_10da24400);
      return 0;
    }
    func_0x0001041908c8(lVar11,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x0001000c78e8(lVar11,uVar13);
    lVar6 = lVar11 + lVar10;
    (*pcVar15)(lVar6,1,lVar4);
    if ((int)lVar6 == 1) {
      (**(code **)(lVar14 + 8))(uVar13,lVar4);
      goto LAB_10418fcd8;
    }
    (**(code **)(lVar14 + 0x20))(puVar12,lVar11 + lVar10,lVar4);
    uVar7 = 0x112d68098;
    func_0x000104190908(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    uVar5 = uVar13;
    __sSQ2eeoiySbx_xtFZTj(uVar13,puVar12,lVar4,uVar7);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(puVar12,lVar4);
    (*pcVar15)(uVar13,lVar4);
    func_0x0001041908c8(lVar11,0x112d3bc20,&UNK_10d904ef0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  lVar10 = lStack_68;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_68 + 0x38));
  uVar5 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_68 + 0x38));
  uVar13 = puVar2[1];
  if (uVar5 == 0) {
    if (uVar13 != 0) {
      return 0;
    }
  }
  else {
    if (uVar13 == 0) {
      return 0;
    }
    uVar9 = *puVar1;
    if (((uVar9 != *puVar2) || (uVar5 != uVar13)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar10 + 0x3c));
  uVar5 = param_1[1];
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar10 + 0x3c));
  uVar13 = param_2[1];
  if (uVar5 == 0) {
    if (uVar13 == 0) {
      return 1;
    }
  }
  else if ((uVar13 != 0) &&
          (((uVar9 = *param_1, uVar9 == *param_2 && (uVar5 == uVar13)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar9 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 10418fe34; end: 10418fe5f;  */

void FUN_10418fe34(void)

{
  func_0x000104190908(0x113067660,&SUB_100b918b4,&UNK_10dcdf3b8);
  return;
}



/* Entry: 10418fe60; end: 104190047;  */

long * FUN_10418fe60(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  code *pcVar16;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    lVar10 = param_2[2];
    lVar4 = param_2[3];
    param_1[2] = lVar10;
    param_1[3] = lVar4;
    iVar8 = *(int *)(param_3 + 0x1c);
    lVar9 = 0;
    __s10Foundation4UUIDVMa();
    lVar14 = *(long *)(lVar9 + -8);
    pcVar16 = *(code **)(lVar14 + 0x10);
    _swift_bridgeObjectRetain(lVar3);
    _objc_retain(lVar10);
    _objc_retain(lVar4);
    (*pcVar16)((long)param_1 + (long)iVar8,(long)param_2 + (long)iVar8,lVar9);
    iVar8 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar5 = puVar2[1];
    uVar12 = *(undefined8 *)((long)param_2 + (long)iVar8);
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined8 *)((long)param_1 + (long)iVar8) = uVar12;
    iVar8 = *(int *)(param_3 + 0x2c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar5 = puVar2[1];
    uVar13 = *(undefined8 *)((long)param_2 + (long)iVar8);
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined8 *)((long)param_1 + (long)iVar8) = uVar13;
    lVar3 = (long)*(int *)(param_3 + 0x34);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    pcVar15 = *(code **)(lVar14 + 0x30);
    _swift_bridgeObjectRetain();
    _objc_retain(uVar12);
    _swift_bridgeObjectRetain(uVar5);
    _objc_retain(uVar13);
    _swift_bridgeObjectRetain(uVar6);
    lVar10 = (long)param_2 + lVar3;
    (*pcVar15)(lVar10,1,lVar9);
    if ((int)lVar10 == 0) {
      (*pcVar16)((long)param_1 + lVar3,(long)param_2 + lVar3,lVar9);
      (**(code **)(lVar14 + 0x38))((long)param_1 + lVar3,0,1,lVar9);
    }
    else {
      lVar10 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    iVar8 = *(int *)(param_3 + 0x3c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar11 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar10 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104190048; end: 10419013f;  */

void FUN_104190048(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar2 + -8);
  pcVar4 = *(code **)(lVar5 + 8);
  (*pcVar4)(param_1 + iVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  iVar1 = *(int *)(param_2 + 0x34);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (*pcVar4)(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  return;
}



/* Entry: 104190140; end: 104190583;  */

undefined8 * FUN_104190140(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar3 = param_2[2];
  uVar9 = param_2[3];
  param_1[2] = uVar3;
  param_1[3] = uVar9;
  iVar6 = *(int *)(param_3 + 0x1c);
  lVar7 = 0;
  __s10Foundation4UUIDVMa();
  lVar11 = *(long *)(lVar7 + -8);
  pcVar13 = *(code **)(lVar11 + 0x10);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar3);
  _objc_retain(uVar9);
  (*pcVar13)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar7);
  iVar6 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar3 = puVar2[1];
  uVar9 = *(undefined8 *)((long)param_2 + (long)iVar6);
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)((long)param_1 + (long)iVar6) = uVar9;
  iVar6 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar3 = puVar2[1];
  uVar10 = *(undefined8 *)((long)param_2 + (long)iVar6);
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)((long)param_1 + (long)iVar6) = uVar10;
  lVar5 = (long)*(int *)(param_3 + 0x34);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  pcVar12 = *(code **)(lVar11 + 0x30);
  _swift_bridgeObjectRetain();
  _objc_retain(uVar9);
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain(uVar10);
  _swift_bridgeObjectRetain(uVar4);
  lVar8 = (long)param_2 + lVar5;
  (*pcVar12)(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    (*pcVar13)((long)param_1 + lVar5,(long)param_2 + lVar5,lVar7);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar5,0,1,lVar7);
  }
  else {
    lVar8 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  iVar6 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar3 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 104190584; end: 1041906a7;  */

undefined8 * FUN_104190584(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  iVar2 = *(int *)(param_3 + 0x1c);
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar5 + -8);
  pcVar8 = *(code **)(lVar7 + 0x20);
  (*pcVar8)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar5);
  iVar2 = *(int *)(param_3 + 0x24);
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 0x2c);
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
  lVar1 = (long)*(int *)(param_3 + 0x34);
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  lVar6 = (long)param_2 + lVar1;
  (**(code **)(lVar7 + 0x30))(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (*pcVar8)((long)param_1 + lVar1,(long)param_2 + lVar1,lVar5);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar1,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar1,(long)param_2 + lVar1,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x3c);
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar2);
  uVar9 = *param_2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar2);
  puVar3[1] = param_2[1];
  *puVar3 = uVar9;
  return param_1;
}



/* Entry: 1041906a8; end: 1041908af;  */

undefined8 * FUN_1041906a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  
  uVar5 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_1[2];
  param_1[2] = param_2[2];
  _objc_release(uVar5);
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  _objc_release(uVar5);
  iVar3 = *(int *)(param_3 + 0x1c);
  lVar6 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar6 + -8);
  pcVar10 = *(code **)(lVar9 + 0x28);
  (*pcVar10)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar5 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  lVar8 = (long)*(int *)(param_3 + 0x24);
  uVar5 = *(undefined8 *)((long)param_1 + lVar8);
  *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _objc_release(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar5 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  lVar8 = (long)*(int *)(param_3 + 0x2c);
  uVar5 = *(undefined8 *)((long)param_1 + lVar8);
  *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _objc_release(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar5 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  lVar11 = (long)*(int *)(param_3 + 0x34);
  pcVar12 = *(code **)(lVar9 + 0x30);
  lVar8 = (long)param_1 + lVar11;
  (*pcVar12)(lVar8,1,lVar6);
  lVar7 = (long)param_2 + lVar11;
  (*pcVar12)(lVar7,1,lVar6);
  if ((int)lVar8 == 0) {
    if ((int)lVar7 == 0) {
      (*pcVar10)((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
      goto LAB_104190844;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar11,lVar6);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar6);
    goto LAB_104190844;
  }
  lVar8 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  _memcpy((long)param_1 + lVar11,(long)param_2 + lVar11,
          *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
LAB_104190844:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar5 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar5 = param_2[1];
  uVar4 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 1041908b0; end: 1041908c7;  */

void FUN_1041908b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1041908c8; end: 104190987;  */

undefined8 FUN_1041908c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104190988; end: 10419099b;  */

bool FUN_104190988(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10419099c; end: 104190a73;  */

void FUN_10419099c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104190a74; end: 104190a93;  */

void FUN_104190a74(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104190a94; end: 104190ad3;  */

void FUN_104190a94(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdf460;
  _swift_getWitnessTable(&UNK_10dcdf460,&UNK_11074e8c0);
  puRam0000000113067720 = puVar1;
  return;
}


