/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10431ac38; end: 10431ad4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10431ac38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_90;
  _objc_allocWithZone();
  lVar2 = _DAT_11306e168;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e168,0);
  lVar3 = _DAT_11306e170;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e170,0);
  *(undefined8 *)(unaff_x20 + _DAT_11306e160) = param_1;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_2);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_11306e178) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_msgSendSuper2(auStack_90,puVar1);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar4;
}



/* Entry: 10431ad50; end: 10431ade7; -[_TtC19SCDiscoverFeedScope19SCDiscoverFeedScope initWithUiContainer:parentController:discoverPageDeckContainer:footerItem:] */

undefined8
FUN_10431ad50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  uVar2 = param_3;
  FUN_10431b134(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_5);
  return uVar2;
}



/* Entry: 10431ade8; end: 10431ae13; -[_TtC19SCDiscoverFeedScope19SCDiscoverFeedScope init] */

void FUN_10431ade8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDiscoverFeedScope.SCDiscoverFeedScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431ae14);
  (*pcVar1)();
}



/* Entry: 10431ae14; end: 10431aeb7; -[_TtC19SCDiscoverFeedScope19SCDiscoverFeedScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ae14(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e160));
  func_0x000100db5a8c(param_1 + _DAT_11306e168);
  func_0x000100db5a8c(param_1 + _DAT_11306e170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306e178));
  return;
}



/* Entry: 10431aeb8; end: 10431afff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10431aeb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000100386b28();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_11306e168;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306e168,0);
  lVar3 = _DAT_11306e170;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306e170,0);
  *(long *)(lVar5 + _DAT_11306e160) = param_1;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_2);
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_3);
  *(undefined8 *)(lVar5 + _DAT_11306e178) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_4);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 10431b000; end: 10431b0bf; -[_TtC19SCDiscoverFeedScope27SCDiscoverFeedScopeServices buildWithUiContainer:parentController:discoverPageDeckContainer:footerItem:] */

void FUN_10431b000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar2 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_1);
  uVar3 = param_3;
  FUN_10431aeb8(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10431b0c0; end: 10431b0eb; -[_TtC19SCDiscoverFeedScope27SCDiscoverFeedScopeServices init] */

void FUN_10431b0c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDiscoverFeedScope.SCDiscoverFeedScopeServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431b0ec);
  (*pcVar1)();
}



/* Entry: 10431b0ec; end: 10431b0ef;  */

void FUN_10431b0ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431b0f0; end: 10431b123;  */

void FUN_10431b0f0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431b124; end: 10431b133; -[_TtC19SCDiscoverFeedScope27SCDiscoverFeedScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431b124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306e188));
  return;
}



/* Entry: 10431b134; end: 10431b227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431b134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  lVar2 = _DAT_11306e168;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e168,0);
  lVar3 = _DAT_11306e170;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e170,0);
  *(undefined8 *)(unaff_x20 + _DAT_11306e160) = param_1;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_2);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_11306e178) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,puVar1);
  return;
}



/* Entry: 10431b228; end: 10431b39f;  */

undefined1  [16] FUN_10431b228(void)

{
  return ZEXT816(0x110759670);
}



/* Entry: 10431b3a0; end: 10431b3cb;  */

void FUN_10431b3a0(void)

{
  func_0x0001000285a8(0x11306e210,&UNK_10dcea4f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 10431b3cc; end: 10431b48f;  */

void FUN_10431b3cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11306e210;
  func_0x0001000285a8(0x11306e210,&UNK_10dcea4f0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10431b490; end: 10431b493;  */

void FUN_10431b490(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea500;
  _swift_getWitnessTable(&UNK_10dcea500,&UNK_1107597a8);
  puRam000000011306e220 = puVar1;
  return;
}



/* Entry: 10431b494; end: 10431b4ff;  */

void FUN_10431b494(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea500;
  _swift_getWitnessTable(&UNK_10dcea500,&UNK_1107597a8);
  puRam000000011306e220 = puVar1;
  return;
}



/* Entry: 10431b500; end: 10431b503;  */

void FUN_10431b500(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea5a8;
  _swift_getWitnessTable(&UNK_10dcea5a8,&UNK_110759700);
  puRam000000011306e238 = puVar1;
  return;
}



/* Entry: 10431b504; end: 10431b56f;  */

void FUN_10431b504(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea5a8;
  _swift_getWitnessTable(&UNK_10dcea5a8,&UNK_110759700);
  puRam000000011306e238 = puVar1;
  return;
}



/* Entry: 10431b570; end: 10431b5f3;  */

void FUN_10431b570(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10431b5f4; end: 10431b5f7;  */

void FUN_10431b5f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea618;
  _swift_getWitnessTable(&UNK_10dcea618,&UNK_110759700);
  puRam000000011306e250 = puVar1;
  return;
}



/* Entry: 10431b5f8; end: 10431b637;  */

void FUN_10431b5f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea618;
  _swift_getWitnessTable(&UNK_10dcea618,&UNK_110759700);
  puRam000000011306e250 = puVar1;
  return;
}



/* Entry: 10431b638; end: 10431b63b;  */

void FUN_10431b638(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea5d0;
  _swift_getWitnessTable(&UNK_10dcea5d0,&UNK_110759700);
  puRam000000011306e258 = puVar1;
  return;
}



/* Entry: 10431b63c; end: 10431b67b;  */

void FUN_10431b63c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea5d0;
  _swift_getWitnessTable(&UNK_10dcea5d0,&UNK_110759700);
  puRam000000011306e258 = puVar1;
  return;
}



/* Entry: 10431b67c; end: 10431b807;  */

int FUN_10431b67c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10431b6f8;
        goto LAB_10431b6dc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10431b6dc:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10431b6f8:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10431b808; end: 10431b847;  */

void FUN_10431b808(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e2e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea6a0;
  _swift_getWitnessTable(&UNK_10dcea6a0,&UNK_1107598a8);
  puRam000000011306e2e8 = puVar1;
  return;
}



/* Entry: 10431b848; end: 10431b8f3;  */

void FUN_10431b848(void)

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



/* Entry: 10431b8f4; end: 10431b92b;  */

void FUN_10431b8f4(ulong *param_1,ulong *param_2)

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



/* Entry: 10431b92c; end: 10431b93b; -[_TtC29SCDiscoverFeedSectionServices29SCDiscoverFeedSectionServices lazyDiscoverFeedSectionsCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431b92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e2f0));
  return;
}



/* Entry: 10431b93c; end: 10431b94b; -[_TtC29SCDiscoverFeedSectionServices29SCDiscoverFeedSectionServices lazyCollapseManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431b93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e2f8));
  return;
}



/* Entry: 10431b94c; end: 10431b9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431b94c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306e2f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306e2f8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431b9b0; end: 10431ba0f; -[_TtC29SCDiscoverFeedSectionServices29SCDiscoverFeedSectionServices init] */

void FUN_10431b9b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDiscoverFeedSectionServices.SCDiscoverFeedSectionServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431b9dc);
  (*pcVar1)();
}



/* Entry: 10431ba10; end: 10431ba47; -[_TtC29SCDiscoverFeedSectionServices29SCDiscoverFeedSectionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ba10(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e2f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306e2f8));
  return;
}



/* Entry: 10431ba48; end: 10431ba5b;  */

bool FUN_10431ba48(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10431ba5c; end: 10431bb33;  */

void FUN_10431ba5c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10431bb34; end: 10431bb3f;  */

void FUN_10431bb34(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10431bb40; end: 10431bb4f; -[SCDiscoverFeedPage pageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10431bb40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e328);
}



/* Entry: 10431bb50; end: 10431bba3; -[SCDiscoverFeedPage feedTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431bb50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306e330);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10431bba4; end: 10431bc07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431bba4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306e328) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306e330) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431bc08; end: 10431bc8b; -[SCDiscoverFeedPage initWithPageType:feedTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431bc08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_4,PTR___ss5Int32VN_11034ee20);
  }
  *(undefined8 *)(param_1 + _DAT_11306e328) = param_3;
  *(long *)(param_1 + _DAT_11306e330) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431bc8c; end: 10431bd4b; -[SCDiscoverFeedPage hash] */

undefined8 FUN_10431bc8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010431bcc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10431bd4c; end: 10431be8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10431bd4c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11306e328);
      iVar2 = *(int *)(lStack_58 + _DAT_11306e328);
      lVar5 = *(long *)(unaff_x20 + _DAT_11306e330);
      lVar9 = *(long *)(lStack_58 + _DAT_11306e330);
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(lVar9);
        _objc_release(lStack_58);
        if (lVar9 == 0) {
          bVar3 = true;
        }
        else {
          _swift_bridgeObjectRelease(lVar9);
          bVar3 = false;
        }
      }
      else {
        bVar3 = false;
        if (lVar9 != 0) {
          lVar8 = *(long *)(lVar5 + 0x10);
          if (lVar8 == *(long *)(lVar9 + 0x10)) {
            if ((lVar8 == 0) || (lVar5 == lVar9)) {
              bVar3 = true;
            }
            else {
              piVar6 = (int *)(lVar5 + 0x20);
              piVar7 = (int *)(lVar9 + 0x20);
              do {
                lVar8 = lVar8 + -1;
                bVar3 = *piVar6 == *piVar7;
                if (!bVar3) break;
                piVar6 = piVar6 + 1;
                piVar7 = piVar7 + 1;
              } while (lVar8 != 0);
            }
          }
          else {
            bVar3 = false;
          }
        }
        _objc_release(lStack_58);
      }
      if (iVar1 != iVar2) {
        return false;
      }
      return bVar3;
    }
  }
  return false;
}



/* Entry: 10431be8c; end: 10431bf0b; -[SCDiscoverFeedPage isEqual:] */

uint FUN_10431be8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10431bd4c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10431bf0c; end: 10431bf0f; -[SCDiscoverFeedPage copyWithZone:] */

void FUN_10431bf0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10431bf10; end: 10431bf8b; -[SCDiscoverFeedPage init] */

void FUN_10431bf10(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedSectionServices/Page.swift",
             0x28,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431bf58);
  (*pcVar1)();
}



/* Entry: 10431bf8c; end: 10431bf9b; -[SCDiscoverFeedPage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431bf8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306e330));
  return;
}



/* Entry: 10431bf9c; end: 10431c1df;  */

uint FUN_10431bf9c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10431c1e0);
          (*pcVar1)();
        }
        FUN_10431e998(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10431c180);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10431c184);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10431c188);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_10431c0a8;
LAB_10431c078:
              FUN_10431c1e0(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              FUN_10431c1e0(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_10431c078;
LAB_10431c0a8:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10431c18c);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_10431c1b8;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_10431c1b8:
  return uVar8 & 1;
}



/* Entry: 10431c1e0; end: 10431c37b;  */

ulong FUN_10431c1e0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10431c2b0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10431c2b4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_10431e998(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    FUN_10431e998(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd00000000000001d,0x800000010f1f5b40);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10431c37c);
  (*pcVar2)();
}



/* Entry: 10431c37c; end: 10431c38f;  */

undefined1  [16] FUN_10431c37c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xc) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xb < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10431c390; end: 10431c3cf;  */

void FUN_10431c390(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e338 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea7b8;
  _swift_getWitnessTable(&UNK_10dcea7b8,&UNK_110759920);
  puRam000000011306e338 = puVar1;
  return;
}



/* Entry: 10431c3d0; end: 10431c3df;  */

undefined1  [16] FUN_10431c3d0(void)

{
  return ZEXT816(0x110759920);
}



/* Entry: 10431c3e0; end: 10431c3ff;  */

void FUN_10431c3e0(void)

{
  _objc_opt_self(&PTR_PTR_11299b5f8);
  return;
}



/* Entry: 10431c400; end: 10431c457;  */

void FUN_10431c400(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10431e978();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10431c458; end: 10431c473; -[SCDiscoverFeedHorizontalSectionStyle type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10431c458(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e368);
}



/* Entry: 10431c474; end: 10431c47f; -[SCDiscoverFeedHorizontalSectionStyle initWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431c474(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306e368) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431c480; end: 10431c48b; -[SCDiscoverFeedHorizontalSectionStyle hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431c480(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(param_1 + _DAT_11306e368));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10431c48c; end: 10431c497; -[SCDiscoverFeedHorizontalSectionStyle isEqual:] */

uint FUN_10431c48c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10431c604(&uStack_50,&DAT_11306e368);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10431c498; end: 10431c4df; -[SCDiscoverFeedHorizontalSectionStyle init] */

void FUN_10431c498(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedSectionServices/Section.swift",
             0x2b,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431c4e0);
  (*pcVar1)();
}



/* Entry: 10431c4e0; end: 10431c4fb; -[SCDiscoverFeedVerticalSectionStyle type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10431c4e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e370);
}



/* Entry: 10431c4fc; end: 10431c54f;  */

void FUN_10431c4fc(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431c550; end: 10431c55b; -[SCDiscoverFeedVerticalSectionStyle initWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431c550(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306e370) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431c55c; end: 10431c5af;  */

void FUN_10431c55c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + *param_4) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431c5b0; end: 10431c5bb; -[SCDiscoverFeedVerticalSectionStyle hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431c5b0(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(param_1 + _DAT_11306e370));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10431c5bc; end: 10431c603;  */

void FUN_10431c5bc(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(param_1 + *param_3));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10431c604; end: 10431c6a3;  */

bool FUN_10431c604(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + *param_2);
      iVar2 = *(int *)(lStack_58 + *param_2);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 10431c6a4; end: 10431c6af; -[SCDiscoverFeedVerticalSectionStyle isEqual:] */

uint FUN_10431c6a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10431c604(&uStack_50,&DAT_11306e370);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10431c6b0; end: 10431c73f;  */

uint FUN_10431c6b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10431c604(&uStack_50,param_4);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10431c740; end: 10431c787; -[SCDiscoverFeedVerticalSectionStyle init] */

void FUN_10431c740(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedSectionServices/Section.swift",
             0x2b,2,0x65,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431c788);
  (*pcVar1)();
}



/* Entry: 10431c788; end: 10431c793;  */

void FUN_10431c788(void)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  puVar1 = PTR___ss6HasherV8_combineyySuF_11034ef38;
  uVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  (*(code *)puVar1)(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10431c794; end: 10431c7e3;  */

void FUN_10431c794(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  (*param_3)(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10431c7e4; end: 10431c80b;  */

void FUN_10431c7e4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 10431c80c; end: 10431c817;  */

void FUN_10431c80c(void)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  puVar1 = PTR___ss6HasherV8_combineyySuF_11034ef38;
  uVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  (*(code *)puVar1)(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10431c818; end: 10431c863;  */

void FUN_10431c818(void)

{
  code *in_x3;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  (*in_x3)(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10431c864; end: 10431c873; -[SCDiscoverFeedSectionLayoutStyle subtype] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10431c864(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e378);
}



/* Entry: 10431c874; end: 10431c8bb; -[SCDiscoverFeedSectionLayoutStyle init] */

void FUN_10431c874(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedSectionServices/Section.swift",
             0x2b,2,0x83,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431c8bc);
  (*pcVar1)();
}



/* Entry: 10431c8bc; end: 10431c92f; +[SCDiscoverFeedSectionLayoutStyle verticalSectionStyleWithVerticalSectionStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431c8bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11306e378) = 0;
  *(undefined8 *)(lVar2 + _DAT_11306e380) = param_3;
  *(undefined8 *)(lVar2 + _DAT_11306e388) = 0;
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



/* Entry: 10431c930; end: 10431ca43; +[SCDiscoverFeedSectionLayoutStyle horizontalSectionStyleWithHorizontalSectionStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431c930(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11306e378) = 1;
  *(undefined8 *)(lVar2 + _DAT_11306e380) = 0;
  *(undefined8 *)(lVar2 + _DAT_11306e388) = param_3;
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



/* Entry: 10431ca44; end: 10431ca97; -[SCDiscoverFeedSectionLayoutStyle matchVerticalSectionStyle:horizontalSectionStyle:] */

void FUN_10431ca44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00010431c9a8(0x10431ebf4,auStack_40,FUN_10431ebc8,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 10431ca98; end: 10431cacf; -[SCDiscoverFeedSectionLayoutStyle .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ca98(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e380));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306e388));
  return;
}



/* Entry: 10431cad0; end: 10431cadf; -[SCDiscoverFeedSectionLayout shouldShowHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10431cad0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306e390);
}



/* Entry: 10431cae0; end: 10431caef; -[SCDiscoverFeedSectionLayout secondaryAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10431cae0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e398);
}



/* Entry: 10431caf0; end: 10431caff; -[SCDiscoverFeedSectionLayout topInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10431caf0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306e3a0);
}



/* Entry: 10431cb00; end: 10431cb0f; -[SCDiscoverFeedSectionLayout leftInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10431cb00(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306e3a8);
}



/* Entry: 10431cb10; end: 10431cb1f; -[SCDiscoverFeedSectionLayout bottomInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10431cb10(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306e3b0);
}



/* Entry: 10431cb20; end: 10431cb2f; -[SCDiscoverFeedSectionLayout rightInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10431cb20(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306e3b8);
}



/* Entry: 10431cb30; end: 10431cb3f; -[SCDiscoverFeedSectionLayout layoutStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431cb30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e3c0));
  return;
}



/* Entry: 10431cb40; end: 10431cc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431cb40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306e390) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306e398) = param_6;
  *(undefined4 *)(unaff_x20 + _DAT_11306e3a0) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11306e3a8) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_11306e3b0) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_11306e3b8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306e3c0) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431cc04; end: 10431ccd3; -[SCDiscoverFeedSectionLayout initWithShouldShowHeader:secondaryAction:topInset:leftInset:bottomInset:rightInset:layoutStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431cc04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_5;
  _swift_getObjectType();
  *(undefined1 *)(param_5 + _DAT_11306e390) = param_7;
  *(undefined8 *)(param_5 + _DAT_11306e398) = param_8;
  *(undefined4 *)(param_5 + _DAT_11306e3a0) = param_1;
  *(undefined4 *)(param_5 + _DAT_11306e3a8) = param_2;
  *(undefined4 *)(param_5 + _DAT_11306e3b0) = param_3;
  *(undefined4 *)(param_5 + _DAT_11306e3b8) = param_4;
  *(undefined8 *)(param_5 + _DAT_11306e3c0) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_5;
  lStack_58 = lVar2;
  _objc_retain(param_9);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 10431ccd4; end: 10431cd07; -[SCDiscoverFeedSectionLayout hash] */

undefined8 FUN_10431ccd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10431cd08();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10431cd08; end: 10431ce2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431cd08(void)

{
  long lVar1;
  long unaff_x20;
  float fVar2;
  float fVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306e390));
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11306e398));
  fVar3 = 0.0;
  fVar2 = fVar3;
  if (*(float *)(unaff_x20 + _DAT_11306e3a0) != 0.0) {
    fVar2 = *(float *)(unaff_x20 + _DAT_11306e3a0);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar2);
  fVar2 = fVar3;
  if (*(float *)(unaff_x20 + _DAT_11306e3a8) != 0.0) {
    fVar2 = *(float *)(unaff_x20 + _DAT_11306e3a8);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar2);
  fVar2 = fVar3;
  if (*(float *)(unaff_x20 + _DAT_11306e3b0) != 0.0) {
    fVar2 = *(float *)(unaff_x20 + _DAT_11306e3b0);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar2);
  if (*(float *)(unaff_x20 + _DAT_11306e3b8) != 0.0) {
    fVar3 = *(float *)(unaff_x20 + _DAT_11306e3b8);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar3);
  lVar1 = *(long *)(unaff_x20 + _DAT_11306e3c0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10431ce2c; end: 10431cfc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10431ce2c(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long unaff_x20;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_a0);
  if (lStack_88 == 0) {
    func_0x00010006e7f4(auStack_a0);
    return 0;
  }
  plVar7 = &lStack_a8;
  _swift_dynamicCast(plVar7,auStack_a0,PTR___sypN_11034f1a8 + 8,lVar8,6);
  if (((ulong)plVar7 & 1) == 0) {
    return 0;
  }
  bVar5 = *(byte *)(unaff_x20 + _DAT_11306e390);
  bVar6 = *(byte *)(lStack_a8 + _DAT_11306e390);
  iVar3 = *(int *)(unaff_x20 + _DAT_11306e398);
  iVar4 = *(int *)(lStack_a8 + _DAT_11306e398);
  fVar11 = *(float *)(unaff_x20 + _DAT_11306e3a0);
  fVar12 = *(float *)(lStack_a8 + _DAT_11306e3a0);
  fVar13 = *(float *)(unaff_x20 + _DAT_11306e3a8);
  fVar14 = *(float *)(lStack_a8 + _DAT_11306e3a8);
  fVar15 = *(float *)(unaff_x20 + _DAT_11306e3b0);
  fVar16 = *(float *)(lStack_a8 + _DAT_11306e3b0);
  fVar17 = *(float *)(unaff_x20 + _DAT_11306e3b8);
  fVar18 = *(float *)(lStack_a8 + _DAT_11306e3b8);
  lVar8 = *(long *)(unaff_x20 + _DAT_11306e3c0);
  if (lVar8 == 0) {
    lVar10 = *(long *)(lStack_a8 + _DAT_11306e3c0);
    lVar8 = lVar10;
    _objc_retain(lVar10);
    _objc_release(lStack_a8);
    if (lVar10 == 0) {
      uVar9 = 1;
      goto LAB_10431cf64;
    }
    uVar9 = 0;
  }
  else {
    func_0x00010c071ae0();
    uVar9 = (uint)lVar8;
    lVar8 = lStack_a8;
  }
  _objc_release(lVar8);
LAB_10431cf64:
  uVar1 = 0;
  if (fVar11 == fVar12) {
    uVar1 = ((bVar5 ^ bVar6) ^ 1) & (uint)(iVar3 == iVar4);
  }
  uVar2 = 0;
  if (fVar13 == fVar14) {
    uVar2 = uVar1;
  }
  uVar1 = 0;
  if (fVar15 == fVar16) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (fVar17 == fVar18) {
    uVar2 = uVar1;
  }
  return uVar2 & uVar9;
}



/* Entry: 10431cfc4; end: 10431cfcf; -[SCDiscoverFeedSectionLayout isEqual:] */

uint FUN_10431cfc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10431ce2c(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10431cfd0; end: 10431d05b;  */

uint FUN_10431cfd0(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*param_4)(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10431d05c; end: 10431d0a3; -[SCDiscoverFeedSectionLayout init] */

void FUN_10431d05c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedSectionServices/Section.swift",
             0x2b,2,0xe7,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431d0a4);
  (*pcVar1)();
}



/* Entry: 10431d0a4; end: 10431d0b3; -[SCDiscoverFeedSectionLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d0a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306e3c0));
  return;
}



/* Entry: 10431d0b4; end: 10431d0bf; -[SCDiscoverFeedSectionRerankingInfo astVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d0b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306e3c8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306e3c8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10431d0c0; end: 10431d0cf; -[SCDiscoverFeedSectionRerankingInfo meanStoryScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10431d0c0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306e3d0);
}



/* Entry: 10431d0d0; end: 10431d0df; -[SCDiscoverFeedSectionRerankingInfo storyScoreVariance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10431d0d0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306e3d8);
}



/* Entry: 10431d0e0; end: 10431d0ef; -[SCDiscoverFeedSectionRerankingInfo ageDecayWeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10431d0e0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306e3e0);
}



/* Entry: 10431d0f0; end: 10431d0ff; -[SCDiscoverFeedSectionRerankingInfo shouldReorderLocally] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10431d0f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306e3e8);
}



/* Entry: 10431d100; end: 10431d1ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306e3c8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined4 *)(unaff_x20 + _DAT_11306e3d0) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11306e3d8) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_11306e3e0) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11306e3e8) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}


