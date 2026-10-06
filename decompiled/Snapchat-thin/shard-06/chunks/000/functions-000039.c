/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10441a4d4; end: 10441a6cf; -[_TtC36SCContextOperaEmbeddedComponentScope44SCContextOperaEmbeddedComponentScopeServices buildWithOperaPage:contextSessionParams:eventAnnouncer:container:fullscreenContainer:] */

void FUN_10441a4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10441a3b4(param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10441a6d0; end: 10441a6d3;  */

void FUN_10441a6d0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441a6d4; end: 10441a707;  */

void FUN_10441a6d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441a708; end: 10441a72b; -[_TtC36SCContextOperaEmbeddedComponentScope44SCContextOperaEmbeddedComponentScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113077f38));
  return;
}



/* Entry: 10441a72c; end: 10441a737; -[SCContextPostStoryScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a72c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113077f90;
  _swift_beginAccess(param_1 + _DAT_113077f90,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441a738; end: 10441a743; -[SCContextPostStoryScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a738(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113077f90;
  _swift_beginAccess(param_1 + _DAT_113077f90,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10441a744; end: 10441a74f; -[SCContextPostStoryScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a744(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113077f98;
  _swift_beginAccess(param_1 + _DAT_113077f98,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441a750; end: 10441a793;  */

void FUN_10441a750(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441a794; end: 10441a79f; -[SCContextPostStoryScope setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a794(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113077f98;
  _swift_beginAccess(param_1 + _DAT_113077f98,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10441a7a0; end: 10441a7f3;  */

void FUN_10441a7a0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10441a7f4; end: 10441a7ff; -[SCContextPostStoryScope userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a7f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077fa0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077fa0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10441a800; end: 10441a80b; -[SCContextPostStoryScope actionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a800(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077fa8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077fa8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10441a80c; end: 10441a853;  */

void FUN_10441a80c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10441a854; end: 10441a8e3; -[SCContextPostStoryScope openOperaInsteadOfChatBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a854(long param_1)

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
  puVar1 = (undefined8 *)(param_1 + _DAT_113077fb0);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11076c088;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10441a8e4; end: 10441a97b; -[SCContextPostStoryScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a8e4(long param_1)

{
  func_0x00010441a958(param_1 + _DAT_113077f90);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113077f98);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077fa0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077fa8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113077fb0 + 8));
  return;
}



/* Entry: 10441a97c; end: 10441a9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a97c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033fd94();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113077fc0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10441a9e4; end: 10441aa2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441a9e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113077fc0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441aa30; end: 10441abaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10441aa30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = param_1;
  func_0x0001003350f8();
  lVar6 = lVar5;
  _objc_allocWithZone();
  lVar3 = _DAT_113077f90;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_113077f90,0);
  lVar4 = _DAT_113077f98;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_113077f98,0);
  _swift_beginAccess(lVar6 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar3,param_8);
  _swift_beginAccess(lVar6 + lVar4,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar4,param_1);
  puVar1 = (undefined8 *)(lVar6 + _DAT_113077fa0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(lVar6 + _DAT_113077fa8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(lVar6 + _DAT_113077fb0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar6;
  lStack_98 = lVar5;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  _swift_retain(param_7);
  plVar7 = &lStack_a0;
  _objc_msgSendSuper2(plVar7,puVar2);
  aplStack_b8[0] = plVar7;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar7;
}



/* Entry: 10441abb0; end: 10441acc7; -[_TtC23SCContextPostStoryScope31SCContextPostStoryScopeServices buildWithPresentingViewController:userId:actionId:openOperaInsteadOfChatBlock:delegate:] */

void FUN_10441abb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __Block_copy();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  puVar1 = &UNK_11076c070;
  _swift_allocObject(&UNK_11076c070,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_10441aa30(param_3,param_4,param_2,param_5,uVar3,0x10441ad20,puVar1,param_7);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10441acc8; end: 10441accb;  */

void FUN_10441acc8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441accc; end: 10441acff;  */

void FUN_10441accc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441ad00; end: 10441ad4b; -[_TtC23SCContextPostStoryScope31SCContextPostStoryScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441ad00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113077fc0));
  return;
}



/* Entry: 10441ad4c; end: 10441aea7;  */

void FUN_10441ad4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10441aea8; end: 10441aeb7; -[SCContextSpotlightParams sessionParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441aea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078018));
  return;
}



/* Entry: 10441aeb8; end: 10441aec7; -[SCContextSpotlightParams operaPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441aeb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078020));
  return;
}



/* Entry: 10441aec8; end: 10441aee7; -[SCContextSpotlightParams logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441aec8(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113078028));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441aee8; end: 10441af5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441aee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078018) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078020) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078028) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441af5c; end: 10441afeb; -[SCContextSpotlightParams initWithSessionParams:operaPage:logger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441af5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113078018) = param_3;
  *(undefined8 *)(param_1 + _DAT_113078020) = param_4;
  *(undefined8 *)(param_1 + _DAT_113078028) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10441afec; end: 10441b04b; -[SCContextSpotlightParams init] */

void FUN_10441afec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextSpotlightScope.ContextSpotlightParams",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441b018);
  (*pcVar1)();
}



/* Entry: 10441b04c; end: 10441b093; -[SCContextSpotlightParams .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b04c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078018));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078020));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113078028));
  return;
}



/* Entry: 10441b094; end: 10441b0b3;  */

void FUN_10441b094(void)

{
  _objc_opt_self(&PTR_PTR_1129b08c8);
  return;
}



/* Entry: 10441b0b4; end: 10441b0d3; -[SCContextSpotlightScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b0b4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113078058));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441b0d4; end: 10441b0e3; -[SCContextSpotlightScope params] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b0d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078060));
  return;
}



/* Entry: 10441b0e4; end: 10441b0f3; -[SCContextSpotlightScope lifecycleEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b0e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078068));
  return;
}



/* Entry: 10441b0f4; end: 10441b113; -[SCContextSpotlightScope interopProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b0f4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113078070));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441b114; end: 10441b11f; -[SCContextSpotlightScope actionHandlerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b114(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113078078;
  _swift_beginAccess(param_1 + _DAT_113078078,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441b120; end: 10441b12b; -[SCContextSpotlightScope setActionHandlerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113078078;
  _swift_beginAccess(param_1 + _DAT_113078078,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10441b12c; end: 10441b13b; -[SCContextSpotlightScope actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078080));
  return;
}



/* Entry: 10441b13c; end: 10441b15b; -[SCContextSpotlightScope operaEventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b13c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113078088));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441b15c; end: 10441b1f7; -[SCContextSpotlightScope profileHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b15c(long param_1)

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
  lVar1 = *(long *)(param_1 + _DAT_113078090);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113078090))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11076c268;
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



/* Entry: 10441b1f8; end: 10441b207; -[SCContextSpotlightScope operaViewProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b1f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078098));
  return;
}



/* Entry: 10441b208; end: 10441b213; -[SCContextSpotlightScope operaPropertyUpdateModerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b208(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130780a0;
  _swift_beginAccess(param_1 + _DAT_1130780a0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441b214; end: 10441b257;  */

void FUN_10441b214(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441b258; end: 10441b263; -[SCContextSpotlightScope setOperaPropertyUpdateModerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441b258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130780a0;
  _swift_beginAccess(param_1 + _DAT_1130780a0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10441b264; end: 10441b2b7;  */

void FUN_10441b264(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10441b2b8; end: 10441b4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10441b2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _objc_allocWithZone();
  lVar3 = _DAT_113078078;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078078,0);
  lVar4 = _DAT_1130780a0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130780a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_113078058) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078060) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078068) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113078070) = param_4;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_113078080) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113078088) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078090);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113078098) = param_10;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_11);
  _swift_unknownObjectRetain(param_1);
  _objc_retain();
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain();
  _swift_unknownObjectRetain(param_7);
  func_0x000100b64c10(param_8,param_9);
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_10);
  puVar5 = auStack_a8;
  _objc_msgSendSuper2(puVar5,puVar2);
  _objc_release(param_10);
  _swift_unknownObjectRelease(param_11);
  func_0x00010058d43c(param_8,param_9);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_7);
  return puVar5;
}



/* Entry: 10441b4f4; end: 10441b693; -[SCContextSpotlightScope initWithUiContainer:params:lifecycleEvent:interopProvider:actionHandlerDelegate:actionHandler:operaEventAnnouncer:profileHandler:operaViewProperies:operaPropertyUpdateModerator:] */

undefined8
FUN_10441b4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  __Block_copy();
  if (param_10 == 0) {
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0;
  }
  else {
    puStack_90 = &UNK_11076c250;
    _swift_allocObject(&UNK_11076c250,0x18,7);
    *(long *)(puStack_90 + 0x10) = param_10;
    uStack_88 = 0x10441bdd4;
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain();
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_8);
  _swift_unknownObjectRetain(param_9);
  _objc_retain();
  _swift_unknownObjectRetain(param_12);
  uVar1 = param_3;
  FUN_10441bbec(param_3,param_4,param_5,param_6,param_7,param_8,param_9,uStack_88,puStack_90,
                param_11,param_12);
  _objc_release(param_11);
  _swift_unknownObjectRelease(param_12);
  func_0x00010058d43c(uStack_88,puStack_90);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_8);
  _swift_unknownObjectRelease(param_9);
  return uVar1;
}



/* Entry: 10441b694; end: 10441b6bf; -[SCContextSpotlightScope init] */

void FUN_10441b694(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextSpotlightScope.SCContextSpotlightScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441b6c0);
  (*pcVar1)();
}



/* Entry: 10441b6c0; end: 10441b7c7; -[SCContextSpotlightScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010441b71c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010441b720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10441b6c0(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113078058));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078060));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078068));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113078070));
  param_1 = param_1 + _DAT_113078078;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10441b7c8; end: 10441b9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10441b7c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *aplStack_c0 [2];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = param_1;
  func_0x000100349e28();
  lVar6 = lVar5;
  _objc_allocWithZone();
  lVar3 = _DAT_113078078;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_113078078,0);
  lVar4 = _DAT_1130780a0;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_1130780a0,0);
  *(long *)(lVar6 + _DAT_113078058) = param_1;
  *(undefined8 *)(lVar6 + _DAT_113078060) = param_2;
  *(undefined8 *)(lVar6 + _DAT_113078068) = param_3;
  *(undefined8 *)(lVar6 + _DAT_113078070) = param_4;
  _swift_beginAccess(lVar6 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar3,param_5);
  *(undefined8 *)(lVar6 + _DAT_113078080) = param_6;
  *(undefined8 *)(lVar6 + _DAT_113078088) = param_7;
  puVar1 = (undefined8 *)(lVar6 + _DAT_113078090);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(lVar6 + _DAT_113078098) = param_10;
  _swift_beginAccess(lVar6 + lVar4,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar4,param_11);
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  func_0x000100b64c10(param_8,param_9);
  puVar2 = PTR_s_init_1125d9248;
  lStack_a8 = lVar6;
  lStack_a0 = lVar5;
  _objc_retain(param_10);
  plVar7 = &lStack_a8;
  _objc_msgSendSuper2(plVar7,puVar2);
  aplStack_c0[0] = plVar7;
  func_0x00010008a7c8(&uStack_b0,aplStack_c0);
  func_0x000100083b20(aplStack_c0);
  _swift_release(uStack_b0);
  _swift_unknownObjectRelease(aplStack_c0[0]);
  return plVar7;
}



/* Entry: 10441b9c4; end: 10441bb77; -[_TtC23SCContextSpotlightScope31SCContextSpotlightScopeServices buildWithUiContainer:params:lifecycleEvent:interopProvider:actionHandlerDelegate:actionHandler:operaEventAnnouncer:profileHandler:operaViewProperties:operaPropertyUpdateModerator:] */

void FUN_10441b9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_88;
  
  __Block_copy();
  if (param_10 == 0) {
    uStack_88 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076c228;
    _swift_allocObject(&UNK_11076c228,0x18,7);
    *(long *)(puVar2 + 0x10) = param_10;
    uStack_88 = 0x10441bdac;
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain();
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_8);
  _swift_unknownObjectRetain(param_9);
  _objc_retain();
  _swift_unknownObjectRetain(param_12);
  _objc_retain();
  uVar1 = param_3;
  FUN_10441b7c8(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,uStack_88,puVar2,
                param_11,param_12);
  func_0x00010058d43c(uStack_88,puVar2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_8);
  _swift_unknownObjectRelease(param_9);
  _objc_release(param_11);
  _swift_unknownObjectRelease(param_12);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10441bb78; end: 10441bba3; -[_TtC23SCContextSpotlightScope31SCContextSpotlightScopeServices init] */

void FUN_10441bb78(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextSpotlightScope.SCContextSpotlightScopeServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441bba4);
  (*pcVar1)();
}



/* Entry: 10441bba4; end: 10441bba7;  */

void FUN_10441bba4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441bba8; end: 10441bbdb;  */

void FUN_10441bba8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441bbdc; end: 10441bbeb; -[_TtC23SCContextSpotlightScope31SCContextSpotlightScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441bbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130780b0));
  return;
}



/* Entry: 10441bbec; end: 10441bd9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441bbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar3 = _DAT_113078078;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078078,0);
  lVar4 = _DAT_1130780a0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130780a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_113078058) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078060) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078068) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113078070) = param_4;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_113078080) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113078088) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078090);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113078098) = param_10;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_11);
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  func_0x000100b64c10(param_8,param_9);
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_10);
  _objc_msgSendSuper2(&stack0xffffffffffffff60,puVar2);
  return;
}



/* Entry: 10441bd9c; end: 10441bddb;  */

undefined1  [16] FUN_10441bd9c(void)

{
  return ZEXT816(0x11076c208);
}



/* Entry: 10441bddc; end: 10441be87;  */

void FUN_10441bddc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10441be88; end: 10441bec7;  */

void FUN_10441be88(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10441bec8; end: 10441bee3; -[SCContextSpotlightLifecycleEvent description] */

void FUN_10441bec8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441bee4; end: 10441bf2b; -[SCContextSpotlightLifecycleEvent init] */

void FUN_10441bee4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextSpotlightScope/SCContextSpotlightLifecycleEventWrapper.swift",0x45,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441bf2c);
  (*pcVar1)();
}



/* Entry: 10441bf2c; end: 10441bf2f; -[SCContextSpotlightLifecycleEvent copyWithZone:] */

void FUN_10441bf2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10441bf30; end: 10441bfa3; +[SCContextSpotlightLifecycleEvent showMetadataViewsWithOperaPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441bf30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113078108) = 0;
  *(undefined8 *)(lVar2 + _DAT_113078110) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113078118) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441bfa4; end: 10441c01b; +[SCContextSpotlightLifecycleEvent hideMetadataViewsWithOperaPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441bfa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113078108) = 1;
  *(undefined8 *)(lVar2 + _DAT_113078110) = 0;
  *(undefined8 *)(lVar2 + _DAT_113078118) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441c01c; end: 10441c057; -[SCContextSpotlightLifecycleEvent matchShowMetadataViews:hideMetadataViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c01c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 + _DAT_113078108) != '\x01';
  if (bVar2) {
    param_4 = param_3;
  }
  plVar1 = (long *)&DAT_113078118;
  if (bVar2) {
    plVar1 = (long *)&DAT_113078110;
  }
                    /* WARNING: Could not recover jumptable at 0x00010441c054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + *plVar1));
  return;
}



/* Entry: 10441c058; end: 10441c08b;  */

void FUN_10441c058(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441c08c; end: 10441c0c3; -[SCContextSpotlightLifecycleEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c08c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078110));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113078118));
  return;
}



/* Entry: 10441c0c4; end: 10441c0e3;  */

void FUN_10441c0c4(void)

{
  _objc_opt_self(&PTR_PTR_1129b0b60);
  return;
}



/* Entry: 10441c0e4; end: 10441c24b;  */

int FUN_10441c0e4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10441c160;
        goto LAB_10441c144;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10441c144:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10441c160:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10441c24c; end: 10441c28b;  */

void FUN_10441c24c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfc1a8;
  _swift_getWitnessTable(&UNK_10dcfc1a8,&UNK_11076c318);
  puRam0000000113078148 = puVar1;
  return;
}



/* Entry: 10441c28c; end: 10441c2b7; +[SCContextViewPerformanceLoggingConstants presenterInitializedTimestampKey] */

void FUN_10441c28c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1fc770);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441c2b8; end: 10441c2e3; +[SCContextViewPerformanceLoggingConstants responseReceivedTimestampKey] */

void FUN_10441c2b8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1fc7a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441c2e4; end: 10441c30f; +[SCContextViewPerformanceLoggingConstants initialContextLoadedTimestampKey] */

void FUN_10441c2e4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1fc7c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441c310; end: 10441c33b; +[SCContextViewPerformanceLoggingConstants fullContextLoadedTimestampKey] */

void FUN_10441c310(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1fc7f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441c33c; end: 10441c367; +[SCContextViewPerformanceLoggingConstants didShowActionBarTimestampKey] */

void FUN_10441c33c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1fc810);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441c368; end: 10441c393; +[SCContextViewPerformanceLoggingConstants didRegisterActionItemPluginsTimestampKey] */

void FUN_10441c368(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f1fc830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441c394; end: 10441c3df; +[SCContextViewPerformanceLoggingConstants didRegisterRendererPluginsTimestampKey] */

void FUN_10441c394(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1fc860);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441c3e0; end: 10441c41b; -[SCContextViewPerformanceLoggingConstants init] */

void FUN_10441c3e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010441c3c0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441c41c; end: 10441c44b;  */

void FUN_10441c41c(void)

{
  func_0x00010441c3c0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441c44c; end: 10441c44f; -[SCContextViewPerformanceLoggingConstants .cxx_destruct] */

void FUN_10441c44c(void)

{
  return;
}



/* Entry: 10441c450; end: 10441c49b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c450(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078178) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441c49c; end: 10441c4fb; -[SCContextViewLoggingServices init] */

void FUN_10441c49c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextViewLoggingServices.SCContextViewLoggingServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441c4c8);
  (*pcVar1)();
}



/* Entry: 10441c4fc; end: 10441c50b; -[SCContextViewLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113078178));
  return;
}



/* Entry: 10441c50c; end: 10441c51b; -[SCContextOperaPluginServices pluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130781a8));
  return;
}



/* Entry: 10441c51c; end: 10441c567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c51c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130781a8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441c568; end: 10441c5bf; -[SCContextOperaPluginServices initWithPluginProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130781a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10441c5c0; end: 10441c61f; -[SCContextOperaPluginServices init] */

void FUN_10441c5c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextOperaPluginServices.SCContextOperaPluginServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441c5ec);
  (*pcVar1)();
}



/* Entry: 10441c620; end: 10441c62f; -[SCContextOperaPluginServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130781a8));
  return;
}



/* Entry: 10441c630; end: 10441c6d7; -[SCContextTopLevelReactionsTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10441c630(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130781d8));
  param_1 = param_1 + _DAT_1130781e0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10441c6d8; end: 10441c73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c6d8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10441c960();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130781f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10441c740; end: 10441c78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c740(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130781f0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441c78c; end: 10441c873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10441c78c(long param_1,undefined8 param_2)

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
  FUN_10441c8e8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_1130781e0;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_1130781e0,0);
  *(long *)(lVar4 + _DAT_1130781d8) = param_1;
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



/* Entry: 10441c874; end: 10441c8e7; -[_TtC35SCContextTopLevelReactionsTrayScope43SCContextTopLevelReactionsTrayScopeServices buildWithContainer:delegate:] */

void FUN_10441c874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10441c78c(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10441c8e8; end: 10441c907;  */

void FUN_10441c8e8(void)

{
  _objc_opt_self(&PTR_PTR_1129b0e60);
  return;
}



/* Entry: 10441c908; end: 10441c90b;  */

void FUN_10441c908(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441c90c; end: 10441c93f;  */

void FUN_10441c90c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441c940; end: 10441c95f; -[_TtC35SCContextTopLevelReactionsTrayScope43SCContextTopLevelReactionsTrayScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130781f0));
  return;
}



/* Entry: 10441c960; end: 10441c97f;  */

void FUN_10441c960(void)

{
  _objc_opt_self(&PTR_PTR_1129b0f28);
  return;
}



/* Entry: 10441c980; end: 10441c983;  */

void FUN_10441c980(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441c984; end: 10441c99f; -[SCContextActionPerformerScope providerRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078248));
  return;
}


