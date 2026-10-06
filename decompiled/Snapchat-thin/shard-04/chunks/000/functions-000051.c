/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10302bfb4; end: 10302bfd7; -[_TtC33SCDiscoverFeedActionHandlingScope46SCDiscoverFeedActionHandlingPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302bfb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f352a0));
  return;
}



/* Entry: 10302bfd8; end: 10302c0ff;  */

ulong FUN_10302bfd8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10302c100);
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
  FUN_10302c110(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10302c0fc);
      (*pcVar1)();
    }
    FUN_10302c190(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10302c100; end: 10302c10f;  */

undefined1  [16] FUN_10302c100(void)

{
  return ZEXT816(0x1105ff998);
}



/* Entry: 10302c110; end: 10302c18f;  */

undefined * FUN_10302c110(undefined *param_1,undefined *param_2)

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
    func_0x00010302bfc4();
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



/* Entry: 10302c190; end: 10302c2b3;  */

long FUN_10302c190(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10302c2b0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10302c2b4);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f352d0;
        func_0x0001000285a8(0x112f352d0,&UNK_10db7d860);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f352d0;
      func_0x0001000285a8(0x112f352d0,&UNK_10db7d860);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10302c2ac);
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



/* Entry: 10302c2b4; end: 10302c2c3; -[_TtC33SCDiscoverFeedActionHandlingScope33SCDiscoverFeedActionHandlingScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302c2b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f352e0));
  return;
}



/* Entry: 10302c2c4; end: 10302c2e3; -[_TtC33SCDiscoverFeedActionHandlingScope33SCDiscoverFeedActionHandlingScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302c2c4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f352e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10302c2e4; end: 10302c347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302c2e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f352e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f352e8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10302c348; end: 10302c3bf; -[_TtC33SCDiscoverFeedActionHandlingScope33SCDiscoverFeedActionHandlingScope initInRegistry:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302c348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f352e0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f352e8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10302c3c0; end: 10302c41f; -[_TtC33SCDiscoverFeedActionHandlingScope33SCDiscoverFeedActionHandlingScope init] */

void FUN_10302c3c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDiscoverFeedActionHandlingScope.SCDiscoverFeedActionHandlingScope",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10302c3ec);
  (*pcVar1)();
}



/* Entry: 10302c420; end: 10302c457; -[_TtC33SCDiscoverFeedActionHandlingScope33SCDiscoverFeedActionHandlingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302c420(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f352e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f352e8));
  return;
}



/* Entry: 10302c458; end: 10302c477;  */

void FUN_10302c458(void)

{
  func_0x000107c61168(&PTR_PTR_1128b0cf8);
  return;
}



/* Entry: 10302c478; end: 10302c487; -[_TtC58ContentFeedRepositoryServicesForSCDiscoverFeedDataServices58ContentFeedRepositoryServicesForSCDiscoverFeedDataServices repository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302c478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f35318));
  return;
}



/* Entry: 10302c488; end: 10302c4f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10302c488(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001003a5b88();
  *(long *)(unaff_x20 + _DAT_112f35318) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 10302c4f8; end: 10302c557; -[_TtC58ContentFeedRepositoryServicesForSCDiscoverFeedDataServices58ContentFeedRepositoryServicesForSCDiscoverFeedDataServices init] */

void FUN_10302c4f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentFeedRepositoryServicesForSCDiscoverFeedDataServices.ContentFeedRepositoryServicesForSCDiscoverFeedDataServices"
                      ,0x75,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10302c524);
  (*pcVar1)();
}



/* Entry: 10302c558; end: 10302c567; -[_TtC58ContentFeedRepositoryServicesForSCDiscoverFeedDataServices58ContentFeedRepositoryServicesForSCDiscoverFeedDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302c558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f35318));
  return;
}



/* Entry: 10302c568; end: 10302c5e7; +[_TtC38ChatConversationSubtypeMetadataHelpers38ChatConversationSubtypeMetadataHelpers buildChatConversationSubtypeMetadataFor:adResponse:serveItemId:] */

void FUN_10302c568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  FUN_10302c658(param_3,param_4,param_5,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10302c5e8; end: 10302c623; -[_TtC38ChatConversationSubtypeMetadataHelpers38ChatConversationSubtypeMetadataHelpers init] */

void FUN_10302c5e8(undefined8 param_1)

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



/* Entry: 10302c624; end: 10302c657;  */

void FUN_10302c624(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10302c658; end: 10302c8e3;  */

undefined * FUN_10302c658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  func_0x000107c4065c();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c406d8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61174();
  lVar2 = lVar1;
  func_0x000107c3f374();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c3ec08();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0 && lVar3 == 0) {
    func_0x000107c61170(lVar1);
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126e0440;
    func_0x000107c610f8(PTR_PTR_1126e0440);
    func_0x000107c453e4();
    if (lVar2 != 0) {
      lVar6 = lVar2;
      func_0x000107c61174();
      lVar7 = lVar6;
      func_0x000107c4a0f0();
      if ((int)lVar7 == 0) {
        puVar4 = PTR_PTR_1126e0430;
        func_0x000107c610f8(PTR_PTR_1126e0430);
        func_0x000107c453e4();
        puVar8 = puVar4;
        func_0x000107c5e424();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c5fadc(param_3,param_4);
        puVar4 = puVar8;
        func_0x000107c5e794(puVar8);
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(param_3);
        puVar8 = puVar4;
        func_0x000107c3ecc8(puVar4);
        func_0x000107c61180();
        func_0x000107c5e48c(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar8);
      }
      else {
        func_0x000107c5e5e4(puVar5);
        func_0x000107c61180();
      }
      func_0x000107c61170();
      func_0x000107c61170(lVar6);
    }
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126e0420;
      func_0x000107c610f8(PTR_PTR_1126e0420);
      lVar6 = lVar3;
      func_0x000107c61174(lVar3);
      func_0x000107c453e4(puVar4);
      func_0x000107c49c00(lVar6);
      puVar8 = puVar4;
      func_0x000107c5e5b8(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puVar4 = puVar8;
      func_0x000107c3ecc8(puVar8);
      func_0x000107c61180();
      puVar9 = puVar5;
      func_0x000107c5e46c(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar9);
    }
    puVar4 = puVar5;
    func_0x000107c3ecc8(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar1);
  }
  return puVar4;
}



/* Entry: 10302c8e4; end: 10302c903;  */

void FUN_10302c8e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128b0e80);
  return;
}



/* Entry: 10302c904; end: 10302ca2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302c904(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112f35370,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f35378,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f35380,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f35388) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10302ca2c; end: 10302cacb; -[_TtC28PartnershipAdCodeOperaPlugin28PartnershipAdCodeOperaPlugin initWithPageLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302ca2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f35370,0);
  func_0x000107c61614(param_1 + _DAT_112f35378,0);
  func_0x000107c61614(param_1 + _DAT_112f35380,0);
  *(undefined8 *)(param_1 + _DAT_112f35388) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10302cacc; end: 10302cadf; -[_TtC28PartnershipAdCodeOperaPlugin28PartnershipAdCodeOperaPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302cacc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f35378,param_3);
  return;
}



/* Entry: 10302cae0; end: 10302cb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302cae0(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c61604(unaff_x20 + _DAT_112f35380,param_1);
  lVar1 = param_1;
  if (param_1 != 0) {
    func_0x000107c5d1b8();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x000107c5d1b4();
      func_0x000107c61180();
      func_0x000107c615e8(param_1);
    }
  }
  func_0x000107c61604(unaff_x20 + _DAT_112f35370,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10302cb6c; end: 10302cbb3; -[_TtC28PartnershipAdCodeOperaPlugin28PartnershipAdCodeOperaPlugin setOperaControlling:] */

void FUN_10302cb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10302cae0(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10302cbb4; end: 10302cc2b; -[_TtC28PartnershipAdCodeOperaPlugin28PartnershipAdCodeOperaPlugin registeredEventsForOperaSession] */

void FUN_10302cbb4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103bb49c0();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
  func_0x000107c61434();
  puVar3 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10302cc2c; end: 10302cc2f;  */

void FUN_10302cc2c(void)

{
  return;
}



/* Entry: 10302cc30; end: 10302cce7; -[_TtC28PartnershipAdCodeOperaPlugin28PartnershipAdCodeOperaPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x00010302cccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010302ccd0) */

void FUN_10302cc30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x00010302d0a8(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10302cce8; end: 10302cd1b;  */

void FUN_10302cce8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10302cd1c; end: 10302cd73; -[_TtC28PartnershipAdCodeOperaPlugin28PartnershipAdCodeOperaPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302cd1c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f35370);
  func_0x000100d3017c(param_1 + _DAT_112f35378);
  func_0x000100d3017c(param_1 + _DAT_112f35380);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f35388));
  return;
}



/* Entry: 10302cd74; end: 10302d7d3;  */

undefined *
FUN_10302cd74(undefined8 param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,
             undefined *param_6,ulong param_7)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  puVar3 = PTR_PTR_1126b0ea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c548e4();
  puVar4 = PTR_PTR_1126d7fc8;
  func_0x000107c610f8(PTR_PTR_1126d7fc8);
  func_0x000107c453e4();
  func_0x000107c56774(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c4d050();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10302d090);
    (*pcVar2)();
  }
  func_0x000107c5fadc(param_1);
  func_0x000107c578cc(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  puVar4 = puVar3;
  func_0x000107c4d050();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10302d094);
    (*pcVar2)();
  }
  uVar5 = param_3;
  func_0x000107c5c060(param_3);
  func_0x000107c61180();
  func_0x000107c593e4(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  puVar4 = puVar3;
  func_0x000107c4d050();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10302d098);
    (*pcVar2)();
  }
  uVar5 = param_3;
  func_0x000107c5bfec(param_3);
  func_0x000107c61180();
  func_0x000107c59950(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  puVar4 = puVar3;
  func_0x000107c4d050();
  func_0x000107c61180();
  if ((param_4 & 1) != 0) {
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10302d09c);
      (*pcVar2)();
    }
    func_0x000107c599b4();
    param_6 = puVar4;
    goto LAB_10302d064;
  }
  if ((param_5 & 1) != 0) {
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10302d0a0);
      (*pcVar2)();
    }
    func_0x000107c599b4();
    param_6 = puVar4;
    goto LAB_10302d064;
  }
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10302d0a4);
    (*pcVar2)();
  }
  func_0x000107c599b4();
  func_0x000107c61170(puVar4);
  uVar5 = param_3;
  func_0x000107c5bfec();
  func_0x000107c61180();
  if (uVar5 != 0) {
    func_0x000107c61170();
    uVar5 = param_3;
    func_0x000107c5c060();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar8 = 0;
      lVar7 = 0;
      lVar6 = param_2;
    }
    else {
      uVar8 = uVar5;
      func_0x000107c5faec();
      lVar6 = param_2;
      func_0x000107c61170(uVar5);
      lVar7 = param_2;
    }
    func_0x000107c5bfec();
    func_0x000107c61180();
    lVar1 = lVar7;
    if (param_3 != 0) {
      uVar5 = param_3;
      func_0x000107c5faec();
      func_0x000107c61170(param_3);
      lVar1 = lVar6;
      if (lVar7 != 0) {
        if (lVar6 == 0) goto LAB_10302cfd8;
        if ((uVar8 == uVar5) && (lVar7 == lVar6)) {
          func_0x000107c6142c(lVar7);
          func_0x000107c6142c(lVar6);
        }
        else {
          func_0x000107c605b8(uVar8,lVar7,uVar5,lVar6,0);
          func_0x000107c6142c(lVar7);
          func_0x000107c6142c(lVar6);
          if ((uVar8 & 1) == 0) {
            return puVar3;
          }
        }
        goto LAB_10302d010;
      }
    }
    lVar7 = lVar1;
    if (lVar7 != 0) {
LAB_10302cfd8:
      func_0x000107c6142c(lVar7);
      return puVar3;
    }
  }
LAB_10302d010:
  if (param_7 == 0) {
    return puVar3;
  }
  uVar5 = (ulong)param_6 & 0xffffffffffff;
  if ((param_7 & 0x2000000000000000) != 0) {
    uVar5 = param_7 >> 0x38 & 0xf;
  }
  if (uVar5 == 0) {
    return puVar3;
  }
  puVar4 = puVar3;
  func_0x000107c4d050();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10302d0a8);
    (*pcVar2)();
  }
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c59950(puVar4);
  func_0x000107c61170(puVar4);
LAB_10302d064:
  func_0x000107c61170(param_6);
  return puVar3;
}



/* Entry: 10302d7d4; end: 10302d7f3;  */

void FUN_10302d7d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128b0f30);
  return;
}



/* Entry: 10302d7f4; end: 10302d80f;  */

void FUN_10302d7f4(long param_1,long param_2)

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



/* Entry: 10302d810; end: 10302d857; -[_TtC33SCContentNotInterestedOperaPlugin33SCContentNotInterestedOperaPlugin delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302d810(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f353b8;
  func_0x000107c61428(param_1 + _DAT_112f353b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10302d858; end: 10302d8af; -[_TtC33SCContentNotInterestedOperaPlugin33SCContentNotInterestedOperaPlugin setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302d858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f353b8;
  func_0x000107c61428(param_1 + _DAT_112f353b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10302d8b0; end: 10302dae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302d8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112f353b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f353c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f353c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f353d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f353d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f353e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f353e8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f353f0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f353f8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f35400) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f35408) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10302dae8; end: 10302dbbb; -[_TtC33SCContentNotInterestedOperaPlugin33SCContentNotInterestedOperaPlugin initWithDislikeRequester:discoverFeedEventLogger:interactionHistoryManager:dataFetcher:storiesConfigProvider:sectionKey:pageSessionId:notificationPool:] */

void FUN_10302dae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x00010302d9cc(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 10302dbbc; end: 10302dbcf; -[_TtC33SCContentNotInterestedOperaPlugin33SCContentNotInterestedOperaPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302dbbc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f353c0,param_3);
  return;
}



/* Entry: 10302dbd0; end: 10302dbe3; -[_TtC33SCContentNotInterestedOperaPlugin33SCContentNotInterestedOperaPlugin setOperaControlling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302dbd0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f353c8,param_3);
  return;
}



/* Entry: 10302dbe4; end: 10302dc6b; -[_TtC33SCContentNotInterestedOperaPlugin33SCContentNotInterestedOperaPlugin registeredEventsForOperaSession] */

void FUN_10302dbe4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb4744();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bad6b0();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10302dc6c; end: 10302e237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302dc6c(long param_1,undefined **param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  long unaff_x20;
  long lVar10;
  undefined **ppuVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR_PTR_1126c9310;
  ppuVar6 = param_2;
  func_0x000107c61168();
  func_0x000107c5bfdc();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  if (param_1 == 0) {
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    puStack_70 = (undefined *)0x0;
LAB_10302dd98:
    ppuVar5 = &puStack_80;
    func_0x00010006e7f4();
LAB_10302dda0:
    uVar12 = 0;
    if (param_2 == (undefined **)0x0) goto LAB_10302ddfc;
LAB_10302dda8:
    func_0x000103bad884();
    if (param_2[2] == (undefined *)0x0) goto LAB_10302ddfc;
    puVar4 = *ppuVar5;
    ppuVar5 = (undefined **)ppuVar5[1];
    func_0x000107c61434(ppuVar5);
    func_0x000107c61434(param_2);
    ppuVar6 = ppuVar5;
    func_0x000100029284(puVar4);
    if (((ulong)ppuVar6 & 1) == 0) {
      func_0x000107c6142c(param_2);
      uStack_78 = 0;
      puStack_80 = (undefined *)0x0;
      puStack_68 = (undefined *)0x0;
      puStack_70 = (undefined *)0x0;
    }
    else {
      ppuVar6 = &puStack_80;
      func_0x0001000bb420(param_2[7] + (long)puVar4 * 0x20);
      func_0x000107c6142c(ppuVar5);
      ppuVar5 = param_2;
    }
    func_0x000107c6142c(ppuVar5);
    if (puStack_68 == (undefined *)0x0) goto LAB_10302de04;
    ppuVar5 = &puStack_88;
    ppuVar6 = &puStack_80;
    func_0x000107c6147c(ppuVar5,ppuVar6,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    bVar13 = (byte)puStack_88;
    if ((int)ppuVar5 == 0) goto LAB_10302de0c;
  }
  else {
    lVar10 = *(long *)(param_1 + _DAT_11307abc8);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dcadf8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcadf8);
    ppuVar11 = ppuVar6;
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_10302dd88:
      uStack_78 = 0;
      puStack_80 = (undefined *)0x0;
      puStack_68 = (undefined *)0x0;
      puStack_70 = (undefined *)0x0;
      func_0x000107c6142c(ppuVar6);
      ppuVar6 = ppuVar11;
      goto LAB_10302dd98;
    }
    func_0x000107c61434(lVar10);
    func_0x000100029284(ppuVar5);
    if (((ulong)ppuVar11 & 1) == 0) {
      func_0x000107c6142c(lVar10);
      goto LAB_10302dd88;
    }
    ppuVar11 = &puStack_80;
    func_0x0001000bb420(*(long *)(lVar10 + 0x38) + (long)ppuVar5 * 0x20);
    func_0x000107c6142c(ppuVar6);
    func_0x000107c6142c(lVar10);
    ppuVar6 = ppuVar11;
    if (puStack_68 == (undefined *)0x0) goto LAB_10302dd98;
    uVar3 = 0;
    func_0x0001044b8ee8(0);
    ppuVar5 = &puStack_88;
    ppuVar6 = &puStack_80;
    func_0x000107c6147c(ppuVar5,ppuVar6,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)ppuVar5 & 1) == 0) goto LAB_10302dda0;
    ppuVar5 = (undefined **)CONCAT71(puStack_88._1_7_,(byte)puStack_88);
    uVar12 = *(undefined1 *)((long)ppuVar5 + _DAT_11307f670);
    func_0x000107c61170();
    if (param_2 != (undefined **)0x0) goto LAB_10302dda8;
LAB_10302ddfc:
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    puStack_70 = (undefined *)0x0;
LAB_10302de04:
    func_0x00010006e7f4(&puStack_80);
LAB_10302de0c:
    bVar13 = 0;
  }
  ppuVar5 = *(undefined ***)(unaff_x20 + _DAT_112f353e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (ppuVar5 != (undefined **)0x0) {
    func_0x000107c5d38c(puVar2);
    ppuVar11 = ppuVar5;
    func_0x000107c5c08c();
    func_0x000107c61180();
    func_0x000107c615e8(ppuVar5);
    if (ppuVar11 != (undefined **)0x0) {
      lVar10 = *(long *)(unaff_x20 + _DAT_112f353d0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 != 0) {
        func_0x000107c5c2dc();
        func_0x000107c615e8(lVar10);
      }
      FUN_10302e6ec(ppuVar11,uVar12);
      if ((bVar13 & 1) == 0) {
        ppuVar6 = ppuVar11;
        func_0x000107c5c000();
        func_0x000107c61180();
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar5 = ppuVar6;
          func_0x000107c4f8d8();
          func_0x000107c61180();
          func_0x000107c61170(ppuVar6);
          if (ppuVar5 == (undefined **)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10302e238);
            (*pcVar1)();
          }
          ppuVar6 = ppuVar5;
          func_0x000107c45028(ppuVar5);
          func_0x000107c61170(ppuVar5);
          puVar4 = puVar2;
          func_0x000107c5d38c(puVar2);
          uVar3 = 0;
          func_0x000103f03f1c(0);
          func_0x000107c610f8();
          func_0x000103f03abc(puVar4,ppuVar6,uVar3);
          lVar10 = *(long *)(unaff_x20 + _DAT_112f353e0);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar10 != 0) {
            uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f353f8);
            puVar7 = puVar4;
            func_0x000107c61174(puVar4);
            func_0x000107c42f58(uVar3);
            func_0x000107c61180();
            func_0x000107c5d4ac(lVar10);
            func_0x000107c615e8(lVar10);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(puVar7);
          }
          func_0x000107c61170(puVar4);
        }
      }
      FUN_10302e350(ppuVar11);
      func_0x000107c61170();
      goto LAB_10302e114;
    }
  }
  if (param_1 == 0) {
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    puStack_70 = (undefined *)0x0;
  }
  else {
    ppuVar11 = *(undefined ***)(param_1 + _DAT_11307abc8);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dcadf8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcadf8);
    if (ppuVar11[2] == (undefined *)0x0) {
LAB_10302e074:
      uStack_78 = 0;
      puStack_80 = (undefined *)0x0;
      puStack_68 = (undefined *)0x0;
      puStack_70 = (undefined *)0x0;
    }
    else {
      func_0x000107c61434(ppuVar11);
      ppuVar9 = ppuVar6;
      func_0x000100029284(ppuVar5);
      if (((ulong)ppuVar9 & 1) == 0) {
        func_0x000107c6142c(ppuVar11);
        goto LAB_10302e074;
      }
      func_0x0001000bb420(ppuVar11[7] + (long)ppuVar5 * 0x20,&puStack_80);
      func_0x000107c6142c(ppuVar6);
      ppuVar6 = ppuVar11;
    }
    func_0x000107c6142c(ppuVar6);
    if (puStack_68 != (undefined *)0x0) {
      uVar3 = 0;
      func_0x0001044b8ee8(0);
      ppuVar11 = &puStack_88;
      func_0x000107c6147c(ppuVar11,&puStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)ppuVar11 & 1) != 0) {
        ppuVar11 = (undefined **)CONCAT71(puStack_88._1_7_,(byte)puStack_88);
        lVar10 = *(long *)(unaff_x20 + _DAT_112f353d0);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar10 != 0) {
          func_0x000107c5c2d8();
          func_0x000107c615e8(lVar10);
        }
        FUN_10302e6ec(0,uVar12);
        func_0x000107c61170();
      }
      goto LAB_10302e114;
    }
  }
  ppuVar11 = &puStack_80;
  func_0x00010006e7f4();
LAB_10302e114:
  func_0x000108f5866c();
  func_0x000107c61180();
  if (ppuVar11 != (undefined **)0x0) {
    puVar7 = PTR_PTR_1126afde0;
    func_0x000107c61168();
    func_0x000107c40b14();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar11);
    pcVar8 = "showNotInterestedBanner()";
    func_0x0001000c10c0("showNotInterestedBanner()");
    func_0x000107c61180();
    puVar4 = &UNK_1105ffc38;
    func_0x000107c613fc(&UNK_1105ffc38,0x20,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(undefined **)(puVar4 + 0x18) = puVar7;
    uStack_60 = 0x10302ea88;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105ffc50;
    ppuVar6 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_58;
    func_0x000107c61174();
    func_0x000107c61174(puVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(pcVar8);
    func_0x000107c61170(puVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10302e234);
  (*pcVar1)();
}



/* Entry: 10302e238; end: 10302e34f; -[_TtC33SCContentNotInterestedOperaPlugin33SCContentNotInterestedOperaPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x00010302e2f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010302e2fc) */

void FUN_10302e238(long *param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long *plVar2;
  
  func_0x000107c5faec();
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000103bb4744();
  if ((param_3 == (long *)*param_1 && param_2 == param_1[1]) ||
     (plVar2 = param_3, func_0x000107c605b8(param_3,param_2,(long *)*param_1,param_1[1],0),
     ((ulong)plVar2 & 1) != 0)) {
    FUN_10302dc6c(param_4,param_5);
  }
  else {
    func_0x000103bad6b0();
    if (((param_3 == (long *)*plVar2) && (param_2 == plVar2[1])) ||
       (func_0x000107c605b8(param_3,param_2,(long *)*plVar2,plVar2[1],0), ((ulong)param_3 & 1) != 0)
       ) {
      FUN_10302e96c(param_4);
    }
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10302e350; end: 10302e5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302e350(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = param_1;
  func_0x000108f4d2a4();
  func_0x000107c61180();
  if (lVar8 == 0) {
    return;
  }
  lVar1 = lVar8;
  func_0x000107c5faec();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f353f0);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000103f1e694();
      lVar3 = lVar2;
      func_0x000107c3ebc0();
      func_0x000107c615e8(lVar2);
      lVar2 = _DAT_112f353b8;
      if ((int)lVar3 != 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112f353b8,auStack_90,0,0);
        lVar3 = unaff_x20 + lVar2;
        func_0x000107c61618();
        if (lVar3 != 0) {
          lVar4 = lVar3;
          func_0x000107c50648();
          func_0x000107c615e8(lVar3);
          if ((int)lVar4 != 0) {
            func_0x000107c61170(lVar8);
            uVar5 = unaff_x20 + lVar2;
            func_0x000107c61618();
            if (uVar5 == 0) {
              func_0x000107c6142c(param_2);
              return;
            }
            uVar6 = uVar5;
            func_0x000107c61150();
            if ((uVar6 & 1) == 0) {
              func_0x000107c6142c(param_2);
              func_0x000107c615e8(uVar5);
              return;
            }
            func_0x000107c5b030();
            func_0x000107c61180();
            if (param_1 == 0) {
              lVar2 = 0;
            }
            else {
              uVar7 = 0;
              FUN_10302ea48(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              lVar2 = param_1;
              func_0x000107c5fc54(param_1,uVar7);
              func_0x000107c61170(param_1);
            }
            lVar3 = unaff_x20 + _DAT_112f353c0;
            func_0x000107c61618(lVar3);
            func_0x000107c5fadc(lVar1,param_2);
            if (lVar2 == 0) {
              lVar8 = 0;
            }
            else {
              uVar7 = 0;
              FUN_10302ea48(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              lVar8 = lVar2;
              func_0x000107c5fc48(lVar2,uVar7);
            }
            func_0x000107c4fed0(uVar5);
            func_0x000107c6142c(param_2);
            func_0x000107c615e8(uVar5);
            func_0x000107c6142c(lVar2);
            func_0x000107c615e8(lVar3);
            func_0x000107c61170(lVar1);
            goto LAB_10302e50c;
          }
        }
      }
    }
  }
  lVar1 = _DAT_112f353b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f353b8,auStack_78,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  func_0x000107c6142c(param_2);
  if (lVar1 != 0) {
    lVar2 = unaff_x20 + _DAT_112f353c0;
    func_0x000107c61618(lVar2);
    func_0x000107c4fecc(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar8);
    func_0x000107c615e8(lVar2);
    return;
  }
LAB_10302e50c:
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 10302e5f0; end: 10302e623;  */

void FUN_10302e5f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10302e624; end: 10302e6eb; -[_TtC33SCContentNotInterestedOperaPlugin33SCContentNotInterestedOperaPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010302e6c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010302e6c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10302e624(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f353d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f353d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f353e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f353e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f353f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f353f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f35400));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f35408));
  param_1 = param_1 + _DAT_112f353b8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10302e6ec; end: 10302e96b;  */

/* WARNING: Removing unreachable block (ram,0x00010302e968) */
/* WARNING: Removing unreachable block (ram,0x00010302e964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302e6ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined **ppuVar7;
  undefined *apuStack_c0 [3];
  long lStack_a8;
  undefined **appuStack_a0 [4];
  undefined1 auStack_80 [40];
  undefined *puStack_58;
  
  puVar2 = (undefined *)0x4f;
  func_0x000107cb57e8(0x4f,param_1,*(undefined8 *)(unaff_x20 + _DAT_112f353f8),4,5);
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    puVar3 = puVar2;
    func_0x000107c5f9e8();
    func_0x000107c61170(puVar2);
  }
  ppuVar7 = &PTR____CFConstantStringClassReference_110f42818;
  appuStack_a0[0] = &PTR____CFConstantStringClassReference_110f42818;
  uVar4 = 0;
  puStack_58 = puVar3;
  FUN_10302ea48(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar4;
  func_0x000101fd99f8();
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f42818);
  func_0x000107c602d4(auStack_80,appuStack_a0,uVar4,uVar6);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  lVar5 = 0;
  FUN_10302ea48(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  apuStack_c0[0] = puVar2;
  lStack_a8 = lVar5;
  if (lVar5 == 0) {
    func_0x00010006e7f4(apuStack_c0);
    func_0x00010192bcf8(appuStack_a0,auStack_80);
    func_0x0001007bbff0(auStack_80);
    func_0x00010006e7f4(appuStack_a0);
    func_0x000107c61170(ppuVar7);
  }
  else {
    func_0x000100102924(apuStack_c0,appuStack_a0);
    puVar2 = puVar3;
    func_0x000107c61558(puVar3);
    apuStack_c0[0] = puVar3;
    func_0x00010192c094(appuStack_a0,auStack_80,puVar2);
    func_0x0001007bbff0(auStack_80);
    func_0x000107c61170(ppuVar7);
    puStack_58 = apuStack_c0[0];
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f353d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = puStack_58;
  if (lVar5 != 0) {
    uVar6 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f11a610);
    puVar2 = puStack_58;
    puVar3 = puStack_58;
    func_0x000107c5f9dc(puStack_58,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c41dbc(lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41518);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c6142c(puVar2);
  return;
}



/* Entry: 10302e96c; end: 10302ea27;  */

/* WARNING: Possible PIC construction at 0x00010302e9fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010302ea00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302e96c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126c9310;
  func_0x000107c61168();
  func_0x000107c5bfdc();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f353e8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar3 = puVar1;
      func_0x000107c5d38c(puVar1);
      lVar4 = lVar2;
      func_0x000107c5c08c(lVar2,param_2,puVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar4 != 0) {
        FUN_10302e350(lVar4);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10302ea28; end: 10302ea47;  */

void FUN_10302ea28(void)

{
  func_0x000107c61168(&PTR_PTR_1128b1008);
  return;
}



/* Entry: 10302ea48; end: 10302eadb;  */

void FUN_10302ea48(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10302eadc; end: 10302eaf7;  */

void FUN_10302eadc(long param_1,long param_2)

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



/* Entry: 10302eaf8; end: 10302eb07; -[_TtC25SCSharedStoryProfileScope25SCSharedStoryProfileScope customStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302eaf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f35438));
  return;
}



/* Entry: 10302eb08; end: 10302eb27; -[_TtC25SCSharedStoryProfileScope25SCSharedStoryProfileScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302eb08(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f35440));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10302eb28; end: 10302eb6f; -[_TtC25SCSharedStoryProfileScope25SCSharedStoryProfileScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302eb28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f35448;
  func_0x000107c61428(param_1 + _DAT_112f35448,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10302eb70; end: 10302ebc7; -[_TtC25SCSharedStoryProfileScope25SCSharedStoryProfileScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302eb70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f35448;
  func_0x000107c61428(param_1 + _DAT_112f35448,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10302ebc8; end: 10302ebd7; -[_TtC25SCSharedStoryProfileScope25SCSharedStoryProfileScope sourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10302ebc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f35450);
}



/* Entry: 10302ebd8; end: 10302edcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10302ebd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f35448;
  func_0x000107c61614(unaff_x20 + _DAT_112f35448,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f35438) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f35440) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112f35450) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 10302edd0; end: 10302eea3; -[_TtC25SCSharedStoryProfileScope25SCSharedStoryProfileScope initWithCustomStory:uiContainer:delegate:sourcePage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302edd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f35448;
  func_0x000107c61614(param_1 + _DAT_112f35448,0);
  *(undefined8 *)(param_1 + _DAT_112f35438) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f35440) = param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar2,param_5);
  *(undefined8 *)(param_1 + _DAT_112f35450) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_78,puVar1);
  return;
}



/* Entry: 10302eea4; end: 10302ef03; -[_TtC25SCSharedStoryProfileScope25SCSharedStoryProfileScope init] */

void FUN_10302eea4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSharedStoryProfileScope.SCSharedStoryProfileScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10302eed0);
  (*pcVar1)();
}



/* Entry: 10302ef04; end: 10302ef4b; -[_TtC25SCSharedStoryProfileScope25SCSharedStoryProfileScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10302ef04(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f35438));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f35440));
  param_1 = param_1 + _DAT_112f35448;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10302ef4c; end: 10302ef87; -[SCStoriesG2SImprovementConfigKeys init] */

void FUN_10302ef4c(undefined8 param_1)

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



/* Entry: 10302ef88; end: 10302efbb;  */

void FUN_10302ef88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10302efbc; end: 10302efbf; -[SCStoriesG2SImprovementConfigKeys .cxx_destruct] */

void FUN_10302efbc(void)

{
  return;
}



/* Entry: 10302efc0; end: 10302efdf;  */

void FUN_10302efc0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b11f0);
  return;
}



/* Entry: 10302efe0; end: 10302f077;  */

void FUN_10302efe0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x112f35598;
  func_0x0001000285a8(0x112f35598,&UNK_10db7da58);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 1;
  uVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar3 = uVar2;
  func_0x000107c61538();
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  *(undefined8 *)(lVar1 + 0x30) = 3;
  func_0x000107c61538(uVar2,0x112f355f0);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  lRam0000000112f35508 = lVar1;
  return;
}



/* Entry: 10302f078; end: 10302f147; -[_TtC40SCSpotlightInterstitialResponseProcessor39SCSpotlightInterstitialMockDataInjector initWithRepository:responseProcessor:networkRequester:networkConnectivityMonitor:locationProvider:completionQueue:] */

undefined8
FUN_10302f078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  FUN_10303248c(param_3,param_4,param_5,param_6,param_7,param_8,param_8);
  uVar1 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar1,0x49,7);
  return param_3;
}



/* Entry: 10302f148; end: 10302f353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302f148(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + _DAT_112f354a8);
  puVar3 = &UNK_1105ffde8;
  func_0x000107c613fc(&UNK_1105ffde8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1105ffe10;
  func_0x000107c613fc(&UNK_1105ffe10,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcStack_70 = FUN_1030325dc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1105ffe28;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(param_2);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar6;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar8,&puStack_98,uVar6,uVar7,lVar1,param_2);
  func_0x000107c5ffe8(0,lVar9,lVar8,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lVar11 + 8))(lVar8,lVar1);
  (**(code **)(lVar10 + 8))(lVar9,lVar2);
  puVar4 = puStack_68;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 10302f354; end: 10302f5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302f354(long param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _DAT_112f354c8) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112f354c8) = 1;
      uVar4 = *(undefined8 *)(param_1 + _DAT_112f354b0);
      uVar5 = *(undefined8 *)(param_1 + _DAT_112f354a8);
      puVar1 = &UNK_1105ffde8;
      func_0x000107c613fc(&UNK_1105ffde8,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_1);
      puVar2 = &UNK_1106001f8;
      func_0x000107c613fc(&UNK_1106001f8,0x28,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(code **)(puVar2 + 0x18) = param_2;
      *(undefined8 *)(puVar2 + 0x20) = param_3;
      pcStack_68 = FUN_103034944;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f3aa0;
      puStack_70 = &UNK_110600210;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_60;
      func_0x000107c615f0(uVar4);
      func_0x000107c61174(uVar5);
      func_0x000107c6157c(param_3);
      func_0x000107c61574(puVar1);
      func_0x000107c5abf4(uVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(uVar4);
      func_0x000107c61170(uVar5);
      return;
    }
    func_0x000107c61170();
  }
  (*param_2)(0);
  return;
}



/* Entry: 10302f5fc; end: 10302f66f; -[_TtC40SCSpotlightInterstitialResponseProcessor39SCSpotlightInterstitialMockDataInjector seedRepositoryIfEmptyWithCompletion:] */

void FUN_10302f5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105fff00;
  func_0x000107c613fc(&UNK_1105fff00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_10302f148(0x103034cd8,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10302f670; end: 10302f7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302f670(ulong param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_1 & 1) == 0) {
      *(undefined1 *)(param_2 + _DAT_112f354c8) = 0;
      (*param_3)(0);
      func_0x000107c61170(param_2);
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + _DAT_112f354b8);
      puVar1 = &UNK_1105ffde8;
      func_0x000107c613fc(&UNK_1105ffde8,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_2);
      puVar2 = &UNK_110600270;
      func_0x000107c613fc(&UNK_110600270,0x28,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(code **)(puVar2 + 0x18) = param_3;
      *(undefined8 *)(puVar2 + 0x20) = param_4;
      func_0x000107c61174(uVar3);
      func_0x000107c6157c(puVar1);
      func_0x000107c6157c(param_4);
      FUN_103034cdc(param_5,FUN_1030349c8,puVar2);
      func_0x000107c61170(param_2);
      func_0x000107c61574(puVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(puVar2);
    }
  }
  return;
}



/* Entry: 10302f7b0; end: 10302fd6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302f7b0(byte param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar3 = &UNK_110600298;
    lStack_b8 = lVar9;
    func_0x000107c613fc(&UNK_110600298,0x30,7);
    *(long *)(puVar3 + 0x10) = param_2;
    puVar3[0x18] = param_1 & 1;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_4;
    pcStack_88 = FUN_1030349d4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_1106002b0;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_4);
    func_0x000107c5f808(lVar8);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar5 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar6 = uVar5;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar7,&puStack_b0,uVar5,uVar6,lVar1,param_4);
    func_0x000107c5ffe8(0,lVar8,puVar7,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    (**(code **)(lStack_b8 + 8))(puVar7,lVar1);
    (**(code **)(lVar10 + 8))(lVar8,lVar2);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puStack_80);
  }
  return;
}



/* Entry: 10302fd70; end: 10302fd83; +[_TtC40SCSpotlightInterstitialResponseProcessor39SCSpotlightInterstitialMockDataInjector makeSeedStoriesBatchResponse] */

void FUN_10302fd70(void)

{
  FUN_10303272c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10302fd84; end: 10302fefb;  */

void FUN_10302fd84(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    (*param_4)();
  }
  else {
    FUN_10303463c(param_1,param_2,param_6);
    lVar5 = 0;
    lVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar4 = -lVar6;
    uVar7 = 0xffffffffffffffff;
    if (uVar4 < 0x40) {
      uVar7 = ~(-1L << (uVar4 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(param_2 + 0x40);
    while( true ) {
      while (uVar7 != 0) {
        uVar4 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 - 1 & uVar7;
        uVar4 = *(ulong *)(*(long *)(param_2 + 0x38) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 8 +
                          lVar5 * 0x200);
        if (uVar4 >> 0x3e != 0) {
          uVar1 = uVar4 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar1 = uVar4;
          }
          func_0x000107c60480(uVar1);
        }
      }
      bVar3 = SCARRY8(lVar5,1);
      lVar5 = lVar5 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10302fefc);
        (*pcVar2)();
      }
      if ((long)(0x3fU - lVar6 >> 6) <= lVar5) break;
      uVar7 = ((ulong *)(param_2 + 0x40))[lVar5];
    }
    func_0x000107c61434(param_2);
    FUN_1030348fc();
    (*param_4)((uint)param_1 & 1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10302fefc; end: 103030987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302fefc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  long lVar22;
  long extraout_x8;
  undefined1 *puVar23;
  long lVar24;
  long extraout_x8_00;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  long unaff_x20;
  ulong uVar30;
  long lVar31;
  undefined8 uVar32;
  ulong uVar33;
  undefined *puVar34;
  ulong uVar35;
  long *plVar36;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar4 = 0;
  uStack_178 = param_1;
  uStack_170 = param_2;
  func_0x000107c5f7fc();
  lVar22 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  puVar23 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5f824();
  lVar24 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar25 = (long)puVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0x112f354f8;
  func_0x0001000285a8(0x112f354f8,&UNK_10db7da28);
  lVar7 = 4;
  func_0x000107c5fc70(4,uVar6);
  *(undefined8 *)(lVar7 + 0x10) = 4;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  puVar8 = &UNK_1105fff28;
  puVar10 = (undefined *)0x0;
  func_0x000107c613fc(&UNK_1105fff28,0x18,7);
  *(long *)(puVar8 + 0x10) = lVar7;
  if (lRam0000000112f35500 != -1) {
    puVar10 = (undefined *)0x0;
    func_0x000107c61568(0x112f35500);
  }
  lVar7 = lRam0000000112f35508;
  uVar27 = *(ulong *)(lRam0000000112f35508 + 0x10);
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (uVar27 != 0) {
    uVar35 = 0;
    plVar36 = (long *)(lRam0000000112f35508 + 0x28);
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103030954);
        (*pcVar3)();
      }
      uVar30 = plVar36[-1];
      lVar31 = *plVar36;
      puVar34 = *(undefined **)(lVar31 + 0x10);
      func_0x000107c61434(lVar31);
      puVar12 = puVar10;
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar34 != (undefined *)0x0) {
        puVar9 = puVar34;
        func_0x000107c5fc70(puVar34,uVar6);
        *(undefined **)(puVar9 + 0x10) = puVar34;
        puVar12 = (undefined *)0x0;
        func_0x000107c60ee4(puVar9 + 0x20);
      }
      puVar34 = puVar11;
      func_0x000107c61558();
      uVar33 = uVar30;
      puStack_a8 = puVar11;
      func_0x00010035a314();
      uVar28 = (ulong)~(uint)puVar12 & 1;
      lVar1 = *(long *)(puVar11 + 0x10) + uVar28;
      if (SCARRY8(*(long *)(puVar11 + 0x10),uVar28)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103030958);
        (*pcVar3)();
      }
      if (*(long *)(puVar11 + 0x18) < lVar1) {
        FUN_1030318fc(lVar1);
        uVar33 = uVar30;
        func_0x00010035a314();
        puVar10 = puVar34;
        if (((uint)puVar12 & 1) != ((uint)puVar34 & 1)) {
          func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103030988);
          (*pcVar3)();
        }
LAB_103030164:
        if (((ulong)puVar12 & 1) != 0) goto LAB_10303006c;
LAB_10303016c:
        puVar11 = puStack_a8;
        *(ulong *)(puStack_a8 + (uVar33 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_a8 + (uVar33 >> 6) * 8 + 0x40) | 1L << (uVar33 & 0x3f);
        *(ulong *)(*(long *)(puStack_a8 + 0x30) + uVar33 * 8) = uVar30;
        *(undefined **)(*(long *)(puStack_a8 + 0x38) + uVar33 * 8) = puVar9;
        func_0x000107c6142c(lVar31);
        if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103030960);
          (*pcVar3)();
        }
        *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
      }
      else {
        puVar10 = puVar12;
        if (((ulong)puVar34 & 1) != 0) goto LAB_103030164;
        FUN_1030317a0();
        if (((ulong)puVar12 & 1) == 0) goto LAB_10303016c;
LAB_10303006c:
        puVar11 = puStack_a8;
        uVar32 = *(undefined8 *)(*(long *)(puStack_a8 + 0x38) + uVar33 * 8);
        *(undefined **)(*(long *)(puStack_a8 + 0x38) + uVar33 * 8) = puVar9;
        func_0x000107c6142c(lVar31);
        func_0x000107c6142c(uVar32);
      }
      uVar35 = uVar35 + 1;
      plVar36 = plVar36 + 2;
    } while (uVar27 != uVar35);
  }
  puVar10 = &UNK_1105fff50;
  func_0x000107c613fc(&UNK_1105fff50,0x18,7);
  *(undefined **)(puVar10 + 0x10) = puVar11;
  puVar11 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar12 = puVar11;
  func_0x000107c60f34();
  plVar36 = (long *)(unaff_x20 + _DAT_112f354c0);
  ppuVar16 = &PTR_s_MockDataInjector_10f11a6e0_0x40_112f35540;
  lVar31 = 0;
  do {
    lVar1 = lVar31 + 1;
    puVar34 = ppuVar16[-1];
    puVar2 = *ppuVar16;
    func_0x000107c61434(puVar2);
    func_0x000107c60f38(puVar12);
    plVar13 = plVar36;
    func_0x0001000a8868(plVar36,plVar36[3]);
    puVar9 = &UNK_1105fff78;
    func_0x000107c613fc(&UNK_1105fff78,0x30,7);
    *(undefined **)(puVar9 + 0x10) = puVar11;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    *(long *)(puVar9 + 0x20) = lVar31;
    *(undefined **)(puVar9 + 0x28) = puVar12;
    lVar31 = *plVar13;
    lVar17 = plVar13[1];
    lVar19 = plVar13[2];
    lVar18 = plVar13[3];
    puVar14 = puVar11;
    func_0x000107c61174();
    func_0x000107c6157c(puVar8);
    puVar15 = puVar12;
    func_0x000107c61174();
    FUN_1030311b8(puVar34,puVar2,0x1030345b0,puVar9,lVar31,lVar17,lVar19,lVar18);
    func_0x000107c6142c(puVar2);
    func_0x000107c61574(puVar9);
    ppuVar16 = ppuVar16 + 2;
    lVar31 = lVar1;
  } while (lVar1 != 4);
  if (uVar27 != 0) {
    uVar35 = 0;
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10303095c);
        (*pcVar3)();
      }
      puVar29 = (undefined8 *)(lVar7 + 0x20 + uVar35 * 0x10);
      uVar6 = *puVar29;
      lVar31 = puVar29[1];
      uVar30 = *(ulong *)(lVar31 + 0x10);
      func_0x000107c61438(lVar31,2);
      if (uVar30 != 0) {
        uVar33 = 0;
        puVar29 = (undefined8 *)(lVar31 + 0x28);
        do {
          if (*(ulong *)(lVar31 + 0x10) <= uVar33) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103030950);
            (*pcVar3)();
          }
          lVar1 = puVar29[-1];
          uVar32 = *puVar29;
          func_0x000107c61434(uVar32);
          func_0x000107c60f38(puVar15);
          plVar13 = plVar36;
          func_0x0001000a8868(plVar36,plVar36[3]);
          puVar11 = &UNK_1105fffa0;
          func_0x000107c613fc(&UNK_1105fffa0,0x40,7);
          *(undefined **)(puVar11 + 0x10) = puVar14;
          *(undefined **)(puVar11 + 0x18) = puVar10;
          *(undefined8 *)(puVar11 + 0x20) = uVar6;
          *(long *)(puVar11 + 0x28) = lVar31;
          *(ulong *)(puVar11 + 0x30) = uVar33;
          *(undefined **)(puVar11 + 0x38) = puVar15;
          lVar19 = *plVar13;
          func_0x000107c61174(puVar14);
          func_0x000107c61174(puVar15);
          func_0x000107c61434(lVar31);
          func_0x000107c6157c(puVar10);
          lVar17 = lVar1;
          func_0x000107c5fadc(lVar1,uVar32);
          lVar18 = lVar17;
          func_0x00010846da84();
          func_0x000107c61180();
          func_0x000107c61170(lVar17);
          if (lVar18 == 0) {
            puVar12 = &UNK_1105fffc8;
            func_0x000107c613fc(&UNK_1105fffc8,0x20,7);
            *(undefined8 *)(puVar12 + 0x10) = 0x1030345bc;
            *(undefined **)(puVar12 + 0x18) = puVar11;
            pcStack_88 = FUN_1030345cc;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = (code *)&UNK_1000b0c7c;
            puStack_90 = &UNK_1105fffe0;
            ppuVar16 = &puStack_a8;
            puStack_80 = puVar12;
            func_0x000107c60bc4(ppuVar16);
            puVar12 = puVar11;
            func_0x000107c6157c(puVar11);
            func_0x000107c5f808(lVar25);
            puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x0001001c7eec();
            uVar20 = 0x112d4af90;
            func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
            uVar26 = uVar20;
            func_0x0001001c7f30();
            func_0x000107c60264(puVar23,&puStack_b0,uVar20,uVar26,lVar4,puVar12);
            func_0x000107c5ffe8(0,lVar25,puVar23,ppuVar16);
            func_0x000107c60bd0(ppuVar16);
            func_0x000107c6142c(uVar32);
            func_0x000107c61574(puVar11);
            (**(code **)(lVar22 + 8))(puVar23,lVar4);
            (**(code **)(lVar24 + 8))(lVar25,lVar5);
            puVar11 = puStack_80;
LAB_103030504:
            func_0x000107c61574(puVar11);
          }
          else {
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar19 == 0) {
              func_0x000107c61170(lVar18);
              func_0x000107c6142c(uVar32);
              goto LAB_103030504;
            }
            uVar20 = 0xd000000000000021;
            func_0x000107c5fadc(0xd000000000000021,0x800000010f11a820);
            puVar12 = &UNK_110600018;
            func_0x000107c613fc(&UNK_110600018,0x18,7);
            *(long *)(puVar12 + 0x10) = lVar18;
            puVar9 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_88 = FUN_1030345f0;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_103031570;
            puStack_90 = &UNK_110600030;
            ppuVar16 = &puStack_a8;
            puStack_80 = puVar12;
            func_0x000107c60bc4(ppuVar16);
            puVar12 = puStack_80;
            func_0x000107c61174(lVar18);
            func_0x000107c61574(puVar12);
            puVar12 = &UNK_110600068;
            func_0x000107c613fc(&UNK_110600068,0x30,7);
            *(long *)(puVar12 + 0x10) = lVar1;
            *(undefined8 *)(puVar12 + 0x18) = uVar32;
            *(undefined8 *)(puVar12 + 0x20) = 0x1030345bc;
            *(undefined **)(puVar12 + 0x28) = puVar11;
            pcStack_88 = (code *)0x1030345f8;
            puStack_a8 = puVar9;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_103031634;
            puStack_90 = &UNK_110600080;
            ppuVar21 = &puStack_a8;
            puStack_80 = puVar12;
            func_0x000107c60bc4(ppuVar21);
            puVar12 = puStack_80;
            func_0x000107c61434(uVar32);
            func_0x000107c6157c(puVar11);
            func_0x000107c61574(puVar12);
            func_0x000107c432d8(lVar19);
            func_0x000107c61170(lVar18);
            func_0x000107c6142c(uVar32);
            func_0x000107c61574(puVar11);
            func_0x000107c60bd0(ppuVar21);
            func_0x000107c60bd0(ppuVar16);
            func_0x000107c615e8(lVar19);
            func_0x000107c61170(uVar20);
          }
          uVar33 = uVar33 + 1;
          puVar29 = puVar29 + 2;
        } while (uVar30 != uVar33);
      }
      uVar35 = uVar35 + 1;
      func_0x000107c61430(lVar31,2);
    } while (uVar35 != uVar27);
  }
  uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112f354a8);
  puVar11 = &UNK_1106000b8;
  func_0x000107c613fc(&UNK_1106000b8,0x30,7);
  uVar32 = uStack_170;
  *(undefined8 *)(puVar11 + 0x10) = uStack_178;
  *(undefined8 *)(puVar11 + 0x18) = uStack_170;
  *(undefined **)(puVar11 + 0x20) = puVar8;
  *(undefined **)(puVar11 + 0x28) = puVar10;
  pcStack_88 = (code *)0x103034604;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_1106000d0;
  ppuVar16 = &puStack_a8;
  puStack_80 = puVar11;
  func_0x000107c60bc4(ppuVar16);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(uVar32);
  func_0x000107c5f808(lVar25);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar20 = uVar6;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar23,&puStack_b0,uVar6,uVar20,lVar4,uVar32);
  func_0x000107c5ffb8(lVar25,puVar23,uVar26,ppuVar16);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar15);
  (**(code **)(lVar22 + 8))(puVar23,lVar4);
  (**(code **)(lVar24 + 8))(lVar25,lVar5);
  puVar11 = puStack_80;
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar11);
  return;
}



/* Entry: 103030988; end: 103030a17; -[_TtC40SCSpotlightInterstitialResponseProcessor39SCSpotlightInterstitialMockDataInjector injectMockInterstitialIntoStoriesBatchResponse:completion:] */

void FUN_103030988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105ffed8;
  func_0x000107c613fc(&UNK_1105ffed8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010302f9d0(param_3,FUN_1030345a8,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103030a18; end: 103030aef;  */

void FUN_103030a18(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c4b940(param_2);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0x21,0);
  uVar5 = *(ulong *)(param_3 + 0x10);
  func_0x000107c61174(param_1);
  uVar3 = uVar5;
  func_0x000107c61558();
  *(ulong *)(param_3 + 0x10) = uVar5;
  if ((uVar3 & 1) == 0) {
    FUN_103031ccc();
    *(ulong *)(param_3 + 0x10) = uVar5;
  }
  if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103030aec);
    (*pcVar2)();
  }
  if (param_4 < *(ulong *)(uVar5 + 0x10)) {
    lVar1 = uVar5 + param_4 * 8;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(ulong *)(param_3 + 0x10) = uVar5;
    func_0x000107c614a8(auStack_58);
    func_0x000107c61170(uVar4);
    func_0x000107c5d278(param_2);
    func_0x000107c60f3c(param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103030af0);
  (*pcVar2)();
}



/* Entry: 103030af0; end: 103030bf3;  */

void FUN_103030af0(undefined8 param_1,undefined8 param_2,long param_3,ulong *param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  func_0x000107c4b940(param_2);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0x21,0);
  pcVar2 = (code *)auStack_88;
  FUN_103030bf4();
  uVar5 = *param_4;
  if (uVar5 != 0) {
    func_0x000107c61174(param_1);
    uVar3 = uVar5;
    func_0x000107c61558();
    *param_4 = uVar5;
    if ((uVar3 & 1) == 0) {
      FUN_103031ccc();
      *param_4 = uVar5;
    }
    if ((long)param_6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103030bf0);
      (*pcVar2)();
    }
    if (*(ulong *)(uVar5 + 0x10) <= param_6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103030bf4);
      (*pcVar2)();
    }
    lVar1 = uVar5 + param_6 * 8;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    func_0x000107c61170(uVar4);
  }
  (*pcVar2)(auStack_88,0);
  func_0x000107c614a8(auStack_68);
  func_0x000107c5d278(param_2);
  func_0x000107c60f3c(param_7);
  return;
}



/* Entry: 103030bf4; end: 103030c57;  */

code * FUN_103030bf4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x595c);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_103032174();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_103030c58;
}



/* Entry: 103030c58; end: 103030c87;  */

void FUN_103030c58(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103030c88; end: 10303103f;  */

void FUN_103030c88(code *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  lVar17 = *(long *)(param_3 + 0x10);
  uVar12 = *(ulong *)(lVar17 + 0x10);
  func_0x000107c61434(lVar17);
  uVar15 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (uVar12 != uVar15) {
    if (*(ulong *)(lVar17 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103031038);
      (*pcVar2)();
    }
    lVar3 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
    uVar15 = uVar15 + 1;
    if (lVar3 != 0) {
      func_0x000107c61174();
      puVar5 = puVar6;
      func_0x000107c61550();
      if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
         (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar4 = puVar6;
          }
          func_0x000107c60480(puVar4);
        }
        puVar5 = (undefined *)0x0;
        FUN_103031d54(0,puVar4 + 1,1,puVar6);
      }
      uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar10 = *(ulong *)(uVar9 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar10) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_103031d54(puVar6,uVar10 + 1,1,puVar5);
        uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar9 + 0x10) = uVar10 + 1;
      *(long *)(uVar9 + uVar10 * 8 + 0x20) = lVar3;
    }
  }
  func_0x000107c6142c(lVar17);
  func_0x000107c61428(param_4 + 0x10,auStack_90,0,0);
  lVar3 = *(long *)(param_4 + 0x10);
  func_0x0001000285a8(0x112f35578,&UNK_10db7da30);
  lVar17 = lVar3;
  func_0x000107c6048c();
  uVar15 = 1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uStack_98 = 0xffffffffffffffff;
  if ((*(byte *)(lVar3 + 0x20) & 0x3f) < 6) {
    uStack_98 = ~(-1L << (uVar15 & 0x3f));
  }
  uStack_98 = uStack_98 & *(ulong *)(lVar3 + 0x40);
  func_0x000107c61434(lVar3);
  lVar16 = 0;
  if (uStack_98 == 0) goto LAB_103030e64;
  do {
    uVar12 = (uStack_98 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_98 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
    uStack_98 = uStack_98 - 1 & uStack_98;
    while( true ) {
      uVar10 = LZCOUNT(uVar12);
      uVar9 = uVar10 | lVar16 << 6;
      lVar14 = *(long *)(*(long *)(lVar3 + 0x38) + uVar9 * 8);
      uVar13 = *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar9 * 8);
      uVar18 = *(ulong *)(lVar14 + 0x10);
      func_0x000107c61434(lVar14);
      uVar12 = 0;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while (uVar18 != uVar12) {
        if (*(ulong *)(lVar14 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103031034);
          (*pcVar2)();
        }
        lVar7 = *(long *)(lVar14 + uVar12 * 8 + 0x20);
        uVar12 = uVar12 + 1;
        if (lVar7 != 0) {
          func_0x000107c61174();
          puVar4 = puVar5;
          func_0x000107c61550();
          if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
             (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar5 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar5) {
                puVar8 = puVar5;
              }
              func_0x000107c60480(puVar8);
            }
            puVar4 = (undefined *)0x0;
            FUN_103031d54(0,puVar8 + 1,1,puVar5);
          }
          uVar11 = (ulong)puVar4 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar11 + 0x10);
          puVar5 = puVar4;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_103031d54(puVar5,uVar1 + 1,1,puVar4);
            uVar11 = (ulong)puVar5 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
          *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar7;
        }
      }
      func_0x000107c6142c(lVar14);
      uVar12 = (uVar10 & 0xffffffffffffffc0 | lVar16 << 6) >> 3;
      *(ulong *)(lVar17 + 0x40 + uVar12) =
           *(ulong *)(lVar17 + 0x40 + uVar12) | 1L << (uVar10 & 0x3f);
      *(undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 8) = uVar13;
      *(undefined **)(*(long *)(lVar17 + 0x38) + uVar9 * 8) = puVar5;
      if (SCARRY8(*(long *)(lVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103031040);
        (*pcVar2)();
      }
      *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
      if (uStack_98 != 0) break;
LAB_103030e64:
      do {
        lVar14 = lVar16 + 1;
        if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10303103c);
          (*pcVar2)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar14) {
          func_0x000107c6142c(lVar3);
          (*param_1)(puVar6,lVar17);
          func_0x000107c6142c(puVar6);
          func_0x000107c61574(lVar17);
          return;
        }
        uStack_98 = ((ulong *)(lVar3 + 0x40))[lVar14];
        lVar16 = lVar16 + 1;
      } while (uStack_98 == 0);
      uVar12 = (uStack_98 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_98 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uStack_98 = uStack_98 - 1 & uStack_98;
      lVar16 = lVar14;
    }
  } while( true );
}



/* Entry: 103031040; end: 10303109f; +[_TtC40SCSpotlightInterstitialResponseProcessor39SCSpotlightInterstitialMockDataInjector injectStoryCard:intoStoriesBatchResponse:] */

uint FUN_103031040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  func_0x000103034048(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (uint)uVar1 & 1;
}



/* Entry: 1030310a0; end: 1030310ff; +[_TtC40SCSpotlightInterstitialResponseProcessor39SCSpotlightInterstitialMockDataInjector injectStoryCard:intoStoriesResponse:] */

uint FUN_1030310a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  FUN_103033eb8(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (uint)uVar1 & 1;
}



/* Entry: 103031100; end: 10303115f; -[_TtC40SCSpotlightInterstitialResponseProcessor39SCSpotlightInterstitialMockDataInjector init] */

void FUN_103031100(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightInterstitialResponseProcessor.SCSpotlightInterstitialMockDataInjector"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10303112c);
  (*pcVar1)();
}



/* Entry: 103031160; end: 1030311b7; -[_TtC40SCSpotlightInterstitialResponseProcessor39SCSpotlightInterstitialMockDataInjector .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010303118c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103031190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103031160(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f354b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f354b8));
  return;
}



/* Entry: 1030311b8; end: 10303156f;  */

/* WARNING: Possible PIC construction at 0x0001030312ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030313f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103031414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030313f8) */
/* WARNING: Removing unreachable block (ram,0x0001030312b0) */
/* WARNING: Removing unreachable block (ram,0x00010303141c) */
/* WARNING: Removing unreachable block (ram,0x0001030312b4) */
/* WARNING: Removing unreachable block (ram,0x000103031548) */
/* WARNING: Removing unreachable block (ram,0x0001030312cc) */
/* WARNING: Removing unreachable block (ram,0x000103031418) */
/* WARNING: Removing unreachable block (ram,0x000103031524) */

void FUN_1030311b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c5fadc(param_1,param_2);
  func_0x00010846da84();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103031570; end: 1030315a7;  */

void FUN_103031570(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1030315a8; end: 103031633;  */

/* WARNING: Possible PIC construction at 0x0001030315fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103031600) */

void FUN_1030315a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long lVar1;
  
  if (param_3 != 0) {
    func_0x000107c61174();
    lVar1 = param_3;
    func_0x000107c44b58();
    if (((int)lVar1 != 0) && (param_4 == 0)) {
      func_0x000107c5bfb4(param_3);
      func_0x000107c61180();
      (*param_7)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    func_0x000107c61170(param_3);
  }
  (*param_7)(0);
  return;
}



/* Entry: 103031634; end: 1030316df;  */

void FUN_103031634(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x000107c5faec(param_2);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  uVar4 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,lVar5,param_3,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar5);
  return;
}



/* Entry: 1030316e0; end: 103031727;  */

void FUN_1030316e0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f35580;
  plVar5 = (long *)&UNK_10db7da38;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103034904(0,0x112d56e40,&PTR_PTR_1126b0ef0);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103031728; end: 10303179f;  */

void FUN_103031728(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103034904(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1030317a0; end: 1030318fb;  */

void FUN_1030317a0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112f35590,&UNK_10db7da50);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_10303187c;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_10303187c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1030318fc);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1030318d4;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1030318d4:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1030318fc; end: 103031ccb;  */

void FUN_1030318fc(long param_1,ulong param_2)

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
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112f35590;
  func_0x0001000285a8(0x112f35590,&UNK_10db7da50);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_103031b2c:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103031b5c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_103031b2c;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103031b60);
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
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 103031ccc; end: 103031d53;  */

void FUN_103031ccc(long param_1)

{
  FUN_103031e9c(0,*(undefined8 *)(param_1 + 0x10),0,param_1,0x112f35588,&UNK_10db7da48,0x112f354f8,
                &UNK_10db7da28);
  return;
}



/* Entry: 103031d54; end: 103031e9b;  */

ulong FUN_103031d54(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103031e9c);
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
  FUN_103031fcc(uVar2,uVar4,0x112d56e40,&PTR_PTR_1126b0ef0,0x112f35580,&UNK_10db7da38);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103031e98);
      (*pcVar1)();
    }
    FUN_10303205c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103031e9c; end: 103031fcb;  */

undefined *
FUN_103031e9c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103031fcc);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 3) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 8 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar6;
}



/* Entry: 103031fcc; end: 10303205b;  */

undefined *
FUN_103031fcc(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_103031728(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 10303205c; end: 103032173;  */

long FUN_10303205c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103032170);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103032174);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103034904(0,0x112d56e40,&PTR_PTR_1126b0ef0);
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
      FUN_103034904(0,0x112d56e40,&PTR_PTR_1126b0ef0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10303216c);
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



/* Entry: 103032174; end: 1030321fb;  */

code * FUN_103032174(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0x1192);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_103032468();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_103032238(lVar3,param_2,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_1030321fc;
}



/* Entry: 1030321fc; end: 103032237;  */

void FUN_1030321fc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 103032238; end: 10303235b;  */

undefined1  [16] FUN_103032238(long *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    uVar5 = param_2;
    func_0x000107c610a0();
  }
  else {
    uVar5 = 0;
    func_0x000107c61458();
  }
  *param_1 = (long)puVar3;
  puVar3[1] = param_2;
  puVar3[2] = unaff_x20;
  lVar9 = *unaff_x20;
  uVar4 = param_2;
  func_0x00010035a314();
  *(byte *)(puVar3 + 4) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10303231c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    param_3 = param_3 & 1;
    FUN_1030318fc(lVar1);
    func_0x00010035a314();
    uVar4 = param_2;
    if (((uint)uVar5 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030322fc);
      (*pcVar2)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1030317a0();
    puVar3[3] = uVar4;
    goto joined_r0x000103032330;
  }
  puVar3[3] = uVar4;
joined_r0x000103032330:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + uVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_10303235c;
  return auVar10;
}


