/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102095ca0; end: 102095cd3;  */

void FUN_102095ca0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102095cd4; end: 102095d3b; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102095d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102095d20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102095d04) */
/* WARNING: Removing unreachable block (ram,0x000102095d24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102095cd4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e55a90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e55a98));
  return;
}



/* Entry: 102095d3c; end: 102095d5b;  */

void FUN_102095d3c(void)

{
  func_0x000107c61168(&PTR_PTR_11281c9d8);
  return;
}



/* Entry: 102095d5c; end: 102095da3; -[SCSCFriendsFeedHeaderScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102095d5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e55ae0;
  func_0x000107c61428(param_1 + _DAT_112e55ae0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102095da4; end: 102095dfb; -[SCSCFriendsFeedHeaderScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102095da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e55ae0;
  func_0x000107c61428(param_1 + _DAT_112e55ae0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102095dfc; end: 102095ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102095dfc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_102094d5c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e559e8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102095ed4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e559f0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e55ae8);
    *(long **)(unaff_x20 + _DAT_112e55ae8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102095ed4; end: 102095efb; -[SCSCFriendsFeedHeaderScopedServicesSaberEntryPoint begin] */

void FUN_102095ed4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102095dfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102095efc; end: 102096073;  */

/* WARNING: Possible PIC construction at 0x000102095f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102095ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102095f68) */
/* WARNING: Removing unreachable block (ram,0x000102096000) */
/* WARNING: Removing unreachable block (ram,0x000102096018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102095efc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e55ae8);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102096074; end: 10209607b;  */

void FUN_102096074(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10209607c; end: 1020960af; -[SCSCFriendsFeedHeaderScopedServicesSaberEntryPoint end] */

void FUN_10209607c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102095efc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1020960b0; end: 1020961cf;  */

void FUN_1020960b0(long param_1,long param_2,long param_3)

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
                        "FriendsFeedHeaderScopeGraphBridge/SCSCFriendsFeedHeaderScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020961d0);
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



/* Entry: 1020961d0; end: 10209627b; -[SCSCFriendsFeedHeaderScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1020961d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1020960b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10209627c; end: 1020962db; -[SCSCFriendsFeedHeaderScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209627c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e55ae0,0);
  *(undefined8 *)(param_1 + _DAT_112e55ae8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020962dc; end: 10209630f;  */

void FUN_1020962dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102096310; end: 102096347; -[SCSCFriendsFeedHeaderScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102096310(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e55ae0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e55ae8));
  return;
}



/* Entry: 102096348; end: 102096367;  */

void FUN_102096348(void)

{
  func_0x000107c61168(&PTR_PTR_11281cab0);
  return;
}



/* Entry: 102096368; end: 1020963b3;  */

void FUN_102096368(undefined8 param_1)

{
  func_0x0001000285a8(0x112e55b18,&UNK_10da58680);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1020963b4,param_1);
  return;
}



/* Entry: 1020963b4; end: 10209641b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020963b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102096600();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e55b20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10209641c; end: 102096467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209641c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e55b20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102096468; end: 10209659b; -[_TtC29SCFriendsFeedHeaderScopeProxy32SCFriendsFeedHeaderScopeServices buildWithViewContainer:uiContainer:delegate:feedInteractionEventObservable:shortcutEventObservable:preselectedShortcut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102096468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126a9e80;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c494ec(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_68[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10209659c; end: 1020965cf;  */

void FUN_10209659c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020965d0; end: 1020965ef;  */

undefined1  [16] FUN_1020965d0(void)

{
  return ZEXT816(0x1104c5e00);
}



/* Entry: 1020965f0; end: 1020965ff; -[_TtC29SCFriendsFeedHeaderScopeProxy32SCFriendsFeedHeaderScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020965f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e55b20));
  return;
}



/* Entry: 102096600; end: 10209661f;  */

void FUN_102096600(void)

{
  func_0x000107c61168(&PTR_PTR_11281cb70);
  return;
}



/* Entry: 102096620; end: 102096903;  */

void FUN_102096620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e55b68,&UNK_10da587a0);
  puVar1 = &UNK_1104c5ef8;
  func_0x000107c613fc(&UNK_1104c5ef8,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_4;
  *(undefined8 *)(puVar1 + 0x60) = param_15;
  *(undefined8 *)(puVar1 + 0x68) = param_11;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  *(undefined8 *)(puVar1 + 0x78) = param_13;
  *(undefined8 *)(puVar1 + 0x80) = param_14;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(0x102096788,puVar1);
  return;
}



/* Entry: 102096904; end: 102096913;  */

undefined1  [16] FUN_102096904(void)

{
  return ZEXT816(0x1104c5f20);
}



/* Entry: 102096914; end: 1020969a7;  */

void FUN_102096914(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020969a8; end: 102096aa3;  */

void FUN_1020969a8(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112e55b78,&UNK_10da587e8);
  puVar10 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  FUN_10209a74c(uVar11,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,puVar10,uVar16,uVar17,
                uVar14,uVar15,uVar12);
  func_0x000107c61574(puVar10);
  func_0x000100082720("GamesFriendsFeedPresenterEntryPointProvider",0x2b,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 102096aa4; end: 102096ac3;  */

void FUN_102096aa4(void)

{
  dRam0000000112e55c58 = *(double *)PTR__UIWindowLevelNormal_110345e88 + 1.0;
  return;
}



/* Entry: 102096ac4; end: 102096b37;  */

void FUN_102096ac4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = *unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102096b38,uVar1,uVar2);
  return;
}



/* Entry: 102096b38; end: 102096bff;  */

void FUN_102096b38(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = 0x102097b2c;
  func_0x00010488bc98(0x102097b2c,unaff_x22 + 0x10,PTR___sSbN_11034dd40);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  lVar3 = 0x112e55c40;
  func_0x0001000285a8(0x112e55c40,&UNK_10da588b8);
  lVar4 = 0x112e55c48;
  FUN_102097ae0(0x112e55c48,0x112e55c40,&UNK_10da588b8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102096c00;
  plVar2[0xe] = lVar4;
  plVar2[0xf] = unaff_x22 + 0x30;
  plVar2[0xd] = lVar3;
  plVar2[7] = unaff_x22 + 0x78;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488e060,0,0);
  return;
}



/* Entry: 102096c00; end: 102096c63;  */

void FUN_102096c00(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x68));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar4 + 0x60));
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_102096c64;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = (code *)0x102096c9c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 102096c64; end: 102096cdf;  */

void FUN_102096c64(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000102096c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 102096ce0; end: 102096d4b;  */

void FUN_102096ce0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102096d4c,uVar1,uVar2);
  return;
}



/* Entry: 102096d4c; end: 102096de3;  */

void FUN_102096d4c(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  FUN_102096f44();
  *(long *)(unaff_x22 + 0x30) = param_1;
  if (param_1 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102096ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  func_0x000107c5de64();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x38) = param_1;
  if (param_1 != 0) {
    plVar2 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102096de4;
    lVar4 = *(long *)(unaff_x22 + 0x10);
    plVar2[7] = param_1;
    plVar2[8] = lVar4;
    lVar3 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar3;
    func_0x000107c5fce8();
    plVar2[9] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar2[10] = lVar3;
    plVar2[0xb] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10209706c,lVar3,lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102096de4);
  (*pcVar1)();
}



/* Entry: 102096de4; end: 102096e37;  */

void FUN_102096de4(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined1 *)(lVar2 + 0x50) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102096e38,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
  return;
}



/* Entry: 102096e38; end: 102096ebf;  */

void FUN_102096e38(void)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x50);
  FUN_102097214();
  if (cVar1 == '\x01') {
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102096ec0;
    plVar5 = *(long **)(unaff_x22 + 0x10);
    plVar2[7] = (long)plVar5;
    plVar2[8] = *plVar5;
    lVar3 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar3;
    func_0x000107c5fce8();
    plVar2[9] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar2[10] = lVar3;
    plVar2[0xb] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102097328,lVar3,lVar4);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102096ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102096ec0; end: 102096f43;  */

void FUN_102096ec0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102096f04,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Entry: 102096f44; end: 102096fff;  */

undefined * FUN_102096f44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x20) == 0) {
    if (lRam0000000112e55c50 != -1) {
      func_0x000107c61568(0x112e55c50,FUN_102096aa4);
    }
    uVar3 = uRam0000000112e55c58;
    puVar2 = PTR_PTR_1126b1c10;
    func_0x000107c610f8();
    func_0x000107c495e0(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined **)(unaff_x20 + 0x20) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
    func_0x000107c3e2c0(puVar2);
    func_0x000107c61170(puVar2);
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 102097000; end: 10209706b;  */

void FUN_102097000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10209706c,uVar1,uVar2);
  return;
}



/* Entry: 10209706c; end: 102097137;  */

void FUN_10209706c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  undefined1 auVar5 [16];
  
  auVar5 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x38),
                    *(undefined1 (*) [16])(unaff_x22 + 0x38),8,1);
  *(long *)(unaff_x22 + 0x28) = auVar5._8_8_;
  *(long *)(unaff_x22 + 0x20) = auVar5._0_8_;
  uVar1 = 0x102097ad8;
  func_0x00010488bc98(0x102097ad8,unaff_x22 + 0x10,PTR___sSbN_11034dd40);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  lVar3 = 0x112e55c40;
  func_0x0001000285a8(0x112e55c40,&UNK_10da588b8);
  lVar4 = 0x112e55c48;
  FUN_102097ae0(0x112e55c48,0x112e55c40,&UNK_10da588b8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102097138;
  plVar2[0xe] = lVar4;
  plVar2[0xf] = unaff_x22 + 0x30;
  plVar2[0xd] = lVar3;
  plVar2[7] = unaff_x22 + 0x70;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488e060,0,0);
  return;
}



/* Entry: 102097138; end: 10209719f;  */

void FUN_102097138(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x68));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar4 + 0x60));
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_1020971a0;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = (code *)0x1020971d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1020971a0; end: 102097213;  */

void FUN_1020971a0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001020971d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 102097214; end: 1020972b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102097214(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112e5b980);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(auStack_58);
  func_0x000107c61574(uVar1);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c41864();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1020972b4; end: 102097327;  */

void FUN_1020972b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = *unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102097328,uVar1,uVar2);
  return;
}



/* Entry: 102097328; end: 1020973ef;  */

void FUN_102097328(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = 0x102097ac8;
  func_0x00010488bc98(0x102097ac8,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  lVar3 = 0x112e55c30;
  func_0x0001000285a8(0x112e55c30,&UNK_10db509e0);
  lVar4 = 0x112e55c38;
  FUN_102097ae0(0x112e55c38,0x112e55c30,&UNK_10db509e0);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1020973f0;
  plVar2[0xe] = lVar4;
  plVar2[0xf] = unaff_x22 + 0x30;
  plVar2[0xd] = lVar3;
  plVar2[7] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488e060,0,0);
  return;
}



/* Entry: 1020973f0; end: 102097457;  */

void FUN_1020973f0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x68));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar4 + 0x60));
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_102097458;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = (code *)0x102097488;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 102097458; end: 1020974c3;  */

void FUN_102097458(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000102097484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020974c4; end: 1020979ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020974c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_112fc8a28);
  func_0x000107c6157c(uVar2);
  func_0x0001000d224c(&uStack_50);
  func_0x000107c61574(uVar2);
  uVar2 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lStack_48 + 0x10))();
  func_0x000107c615e8(uStack_50);
  puVar1 = &UNK_1104c6098;
  func_0x000107c613fc(&UNK_1104c6098,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x00010075a04c(0,1,0x102097b34,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102097a00; end: 102097a4f;  */

void FUN_102097a00(undefined8 *param_1)

{
  undefined8 uStack_30;
  char cStack_28;
  
  cStack_28 = *(char *)(param_1 + 1);
  if (cStack_28 == '\x01') {
    uStack_30 = 0;
    cStack_28 = '\0';
  }
  else {
    uStack_30 = *param_1;
  }
  func_0x00010488e5d4(&uStack_30);
  return;
}



/* Entry: 102097a50; end: 102097aa3;  */

void FUN_102097a50(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102097aa4; end: 102097adf;  */

void FUN_102097aa4(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102097ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102097ae0; end: 102097b23;  */

void FUN_102097ae0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = &DAT_10dd3cdf8;
    func_0x000107c61520(&DAT_10dd3cdf8,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102097b24; end: 102097b3b;  */

void FUN_102097b24(undefined8 *param_1)

{
  undefined8 uStack_30;
  char cStack_28;
  
  cStack_28 = *(char *)(param_1 + 1);
  if (cStack_28 == '\x01') {
    uStack_30 = 0;
    cStack_28 = '\0';
  }
  else {
    uStack_30 = *param_1;
  }
  func_0x00010488e5d4(&uStack_30);
  return;
}



/* Entry: 102097b3c; end: 102097c6b;  */

void FUN_102097b3c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
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
  long lStack_48;
  
  uStack_68 = param_3[0xd];
  uStack_70 = param_3[0xc];
  uStack_58 = param_3[0xf];
  uStack_60 = param_3[0xe];
  uStack_50 = param_3[0x10];
  uStack_a8 = param_3[5];
  uStack_b0 = param_3[4];
  uStack_98 = param_3[7];
  lStack_a0 = param_3[6];
  uStack_88 = param_3[9];
  uStack_90 = param_3[8];
  uStack_78 = param_3[0xb];
  uStack_80 = param_3[10];
  uStack_c8 = param_3[1];
  uStack_d0 = *param_3;
  uStack_b8 = param_3[3];
  uStack_c0 = param_3[2];
  FUN_1020b2ea0(&uStack_d0);
  lVar1 = lStack_a0;
  lStack_48 = lStack_a0;
  if (lStack_a0 != 0) {
    puVar2 = &UNK_1104c61e0;
    func_0x000107c613fc(&UNK_1104c61e0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    puVar3 = &UNK_1104c6208;
    func_0x000107c613fc(&UNK_1104c6208,0x30,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(undefined **)(puVar3 + 0x20) = puVar2;
    *(undefined8 *)(puVar3 + 0x28) = param_5;
    FUN_1020989b0(&lStack_48,auStack_d8);
    FUN_1020989b0(&lStack_48,auStack_d8);
    func_0x000107c615f0(param_4);
    uVar4 = 0xd;
    func_0x0001001ca524(0xd,4,0x38,4,0,0,&UNK_10da58930,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
    func_0x000102098a00(&lStack_48);
  }
  return;
}



/* Entry: 102097c6c; end: 102097c87;  */

void FUN_102097c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102097c88,0,0);
  return;
}



/* Entry: 102097c88; end: 102097e0b;  */

void FUN_102097c88(void)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x90);
  if (lVar7 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102097e0c;
    func_0x000107c615f0(lVar7);
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    func_0x000107c4b1c0(lVar7);
    func_0x000107c61180();
    puVar2 = &UNK_1104c6230;
    func_0x000107c613fc(&UNK_1104c6230,0x18,7);
    puVar6 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x102098b8c;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_10134a1dc;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1104c6248;
    func_0x000107c60bc4(puVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    pcVar3 = "icon(for:repository:)";
    func_0x0001000c10c0("icon(for:repository:)");
    func_0x000107c61180();
    func_0x000107c5dc64(lVar7);
    func_0x000107c615e8(pcVar3);
    func_0x000107c60bd0(puVar6);
    func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102097ec4,uVar4,uVar5);
  return;
}



/* Entry: 102097e0c; end: 102097e4b;  */

void FUN_102097e0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102097e4c,0,0);
  return;
}



/* Entry: 102097e4c; end: 102097ec3;  */

void FUN_102097e4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x90));
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102097ec4,uVar1,uVar2);
  return;
}



/* Entry: 102097ec4; end: 102097f6b;  */

void FUN_102097ec4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x50,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1020b3370(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102097f3c,0,0);
  return;
}



/* Entry: 102097f6c; end: 10209811f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102097f6c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
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
  long lStack_58;
  
  lVar1 = _DAT_112e56640;
  uStack_78 = param_3[0xd];
  uStack_80 = param_3[0xc];
  uStack_68 = param_3[0xf];
  uStack_70 = param_3[0xe];
  uStack_98 = param_3[9];
  uStack_a0 = param_3[8];
  uStack_88 = param_3[0xb];
  uStack_90 = param_3[10];
  uStack_60 = param_3[0x10];
  uStack_b8 = param_3[5];
  uStack_c0 = param_3[4];
  uStack_a8 = param_3[7];
  lStack_b0 = param_3[6];
  uStack_d8 = param_3[1];
  uStack_e0 = *param_3;
  uStack_c8 = param_3[3];
  uStack_d0 = param_3[2];
  func_0x000107c61428(param_1 + _DAT_112e56640,auStack_f8,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_4;
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112e56648;
  func_0x000107c61428(param_1 + _DAT_112e56648,auStack_110,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_5;
  func_0x000107c61174(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  FUN_1020b8ef4(&uStack_e0);
  lVar1 = lStack_b0;
  lStack_58 = lStack_b0;
  if (lStack_b0 != 0) {
    puVar3 = &UNK_1104c6140;
    func_0x000107c613fc(&UNK_1104c6140,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    puVar4 = &UNK_1104c6168;
    func_0x000107c613fc(&UNK_1104c6168,0x30,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined8 *)(puVar4 + 0x18) = param_6;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    *(undefined8 *)(puVar4 + 0x28) = param_7;
    FUN_1020989b0(&lStack_58,auStack_118);
    FUN_1020989b0(&lStack_58,auStack_118);
    func_0x000107c615f0(param_6);
    uVar2 = 0xd;
    func_0x0001001ca524(0xd,4,0x38,4,0,0,&UNK_10da58918,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar2);
    func_0x000102098a00(&lStack_58);
  }
  return;
}



/* Entry: 102098120; end: 10209813b;  */

void FUN_102098120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10209813c,0,0);
  return;
}



/* Entry: 10209813c; end: 1020982bf;  */

void FUN_10209813c(void)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x90);
  if (lVar7 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1020982c0;
    func_0x000107c615f0(lVar7);
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    func_0x000107c4b1c0(lVar7);
    func_0x000107c61180();
    puVar2 = &UNK_1104c6190;
    func_0x000107c613fc(&UNK_1104c6190,0x18,7);
    puVar6 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar2 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_102098a48;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_10134a1dc;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1104c61a8;
    func_0x000107c60bc4(puVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    pcVar3 = "icon(for:repository:)";
    func_0x0001000c10c0("icon(for:repository:)");
    func_0x000107c61180();
    func_0x000107c5dc64(lVar7);
    func_0x000107c615e8(pcVar3);
    func_0x000107c60bd0(puVar6);
    func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102098378,uVar4,uVar5);
  return;
}



/* Entry: 1020982c0; end: 1020982ff;  */

void FUN_1020982c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102098300,0,0);
  return;
}



/* Entry: 102098300; end: 102098377;  */

void FUN_102098300(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x90));
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102098378,uVar1,uVar2);
  return;
}



/* Entry: 102098378; end: 1020983ef;  */

void FUN_102098378(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x50,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1020ba0e8(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102098b88,0,0);
  return;
}



/* Entry: 1020983f0; end: 10209846f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020983f0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112e56568;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  uStack_40 = param_3[4];
  func_0x000107c61428(param_1 + _DAT_112e56568,auStack_78,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61170(uVar2);
  FUN_1020b4584(&uStack_60);
  return;
}



/* Entry: 102098470; end: 102098527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102098470(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112e55c60;
  lVar2 = 0x112e55d50;
  func_0x0001000285a8(0x112e55d50,&UNK_10da588f8);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_112e55c68;
  lVar2 = 0x112e55d58;
  func_0x0001000285a8(0x112e55d58,&UNK_10da58900);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_112e55c70;
  lVar2 = 0x112e55d60;
  func_0x0001000285a8(0x112e55d60,&UNK_10da58908);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102098528; end: 10209852f;  */

void FUN_102098528(void)

{
  if (lRam0000000112e55ca0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6ae080);
  return;
}



/* Entry: 102098530; end: 102098567;  */

void FUN_102098530(undefined8 param_1)

{
  if (lRam0000000112e55ca0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6ae080);
  return;
}



/* Entry: 102098568; end: 10209864f;  */

void FUN_102098568(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar2 = 0x112e55cb0;
  lVar1 = 0x13f;
  FUN_102098650(0x13f,0x112e55cb0,FUN_1020b35c8,&UNK_1104c71f8);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112e55cb8;
    lVar1 = 0x13f;
    FUN_102098650(0x13f,0x112e55cb8,FUN_1020ba730,&UNK_1104c71f8);
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = 0x112e55cc0;
      lVar1 = 0x13f;
      FUN_102098650(0x13f,0x112e55cc0,FUN_1020b4a48,&UNK_1104c7290);
      if (uVar2 < 0x40) {
        lStack_28 = *(long *)(lVar1 + -8) + 0x40;
        func_0x000107c61630(param_1,0x100,3,&lStack_38,param_1 + 0x50);
      }
    }
  }
  return;
}



/* Entry: 102098650; end: 1020986ab;  */

void FUN_102098650(long param_1,long *param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    (*param_3)();
    func_0x000107c5ff94(param_1,lVar1,param_4);
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 1020986ac; end: 10209891b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020986ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar8 = *unaff_x20;
  lVar3 = 0x112e55d60;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_78 = param_4;
  func_0x0001000285a8(0x112e55d60,&UNK_10da58908);
  lStack_70 = *(long *)(lVar3 + -8);
  lStack_68 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_70 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar3 = 0x112e55d58;
  puStack_80 = auStack_a0 + -extraout_x8;
  func_0x0001000285a8(0x112e55d58,&UNK_10da58900);
  lVar7 = *(long *)(lVar3 + -8);
  lStack_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  lVar3 = 0x112e55d50;
  func_0x0001000285a8(0x112e55d50,&UNK_10da588f8);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_1104c60c8;
  func_0x000107c613fc(&UNK_1104c60c8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = uVar8;
  uVar5 = 0;
  FUN_1020b35c8(0);
  func_0x000107c615f0(param_1);
  func_0x000107c5ff90(lVar9 - extraout_x8_01,FUN_10209891c,puVar4,uVar5,&UNK_1104c71f8);
  (**(code **)(lVar6 + 0x20))((long)unaff_x20 + _DAT_112e55c60,lVar9 - extraout_x8_01,lVar3);
  puVar4 = &UNK_1104c60f0;
  func_0x000107c613fc(&UNK_1104c60f0,0x30,7);
  uVar1 = uStack_90;
  uVar5 = uStack_98;
  *(undefined8 *)(puVar4 + 0x10) = uStack_98;
  *(undefined8 *)(puVar4 + 0x18) = uStack_90;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  uVar8 = 0;
  FUN_1020ba730(0);
  func_0x000107c615f0(param_1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar1);
  func_0x000107c5ff90(lVar9,0x102098924,puVar4,uVar8,&UNK_1104c71f8);
  (**(code **)(lVar7 + 0x20))((long)unaff_x20 + _DAT_112e55c68,lVar9,lStack_88);
  puVar4 = &UNK_1104c6118;
  func_0x000107c613fc(&UNK_1104c6118,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uStack_78;
  uVar5 = 0;
  FUN_1020b4a48(0);
  puVar2 = puStack_80;
  func_0x000107c5ff90(puStack_80,0x102098930,puVar4,uVar5,&UNK_1104c7290);
  (**(code **)(lStack_70 + 0x20))((long)unaff_x20 + _DAT_112e55c70,puVar2,lStack_68);
  return;
}



/* Entry: 10209891c; end: 102098937;  */

void FUN_10209891c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
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
  long lStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = param_3[0xd];
  uStack_70 = param_3[0xc];
  uStack_58 = param_3[0xf];
  uStack_60 = param_3[0xe];
  uStack_50 = param_3[0x10];
  uStack_a8 = param_3[5];
  uStack_b0 = param_3[4];
  uStack_98 = param_3[7];
  lStack_a0 = param_3[6];
  uStack_88 = param_3[9];
  uStack_90 = param_3[8];
  uStack_78 = param_3[0xb];
  uStack_80 = param_3[10];
  uStack_c8 = param_3[1];
  uStack_d0 = *param_3;
  uStack_b8 = param_3[3];
  uStack_c0 = param_3[2];
  FUN_1020b2ea0(&uStack_d0);
  lVar2 = lStack_a0;
  lStack_48 = lStack_a0;
  if (lStack_a0 != 0) {
    puVar3 = &UNK_1104c61e0;
    func_0x000107c613fc(&UNK_1104c61e0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    puVar4 = &UNK_1104c6208;
    func_0x000107c613fc(&UNK_1104c6208,0x30,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(undefined8 *)(puVar4 + 0x18) = uVar5;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    *(undefined8 *)(puVar4 + 0x28) = uVar1;
    FUN_1020989b0(&lStack_48,auStack_d8);
    FUN_1020989b0(&lStack_48,auStack_d8);
    func_0x000107c615f0(uVar5);
    uVar5 = 0xd;
    func_0x0001001ca524(0xd,4,0x38,4,0,0,&UNK_10da58930,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar5);
    func_0x000102098a00(&lStack_48);
  }
  return;
}



/* Entry: 102098938; end: 1020989af;  */

void FUN_102098938(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102098b90;
  plVar5[0x12] = lVar3;
  plVar5[0x13] = lVar2;
  plVar5[0x11] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10209813c,0,0,lVar2,uVar4);
  return;
}



/* Entry: 1020989b0; end: 102098a47;  */

undefined8 FUN_1020989b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e55d68;
  func_0x0001000285a8(0x112e55d68,&UNK_10da58920);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102098a48; end: 102098a67;  */

void FUN_102098a48(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102098a68; end: 102098a9b;  */

void FUN_102098a68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102098a9c; end: 102098b13;  */

void FUN_102098a9c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102098b14;
  plVar5[0x12] = lVar3;
  plVar5[0x13] = lVar2;
  plVar5[0x11] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102097c88,0,0,lVar2,uVar4);
  return;
}



/* Entry: 102098b14; end: 102098b4f;  */

void FUN_102098b14(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102098b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102098b50; end: 102098b7f;  */

void FUN_102098b50(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102098b80; end: 102098ba7;  */

void FUN_102098b80(long param_1,long param_2)

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



/* Entry: 102098ba8; end: 102098c53;  */

void FUN_102098ba8(void)

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



/* Entry: 102098c54; end: 102098f4b;  */

void FUN_102098c54(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 *unaff_x20;
  long lVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar17 = *unaff_x20;
  lVar12 = unaff_x20[7];
  if (lVar12 != 0) {
    lVar13 = unaff_x20[8];
    lVar1 = lVar12;
    func_0x000107c614f0(lVar12);
    pcVar14 = *(code **)(lVar13 + 8);
    func_0x000107c615f0(lVar12);
    (*pcVar14)(lVar1,lVar13);
    func_0x000107c615e8(lVar12);
  }
  uVar2 = unaff_x20[2];
  lVar12 = unaff_x20[3];
  func_0x000107c614f0(uVar2);
  pcVar15 = *(code **)(lVar12 + 0x10);
  (*pcVar15)(apuStack_88);
  lVar1 = lStack_68;
  uVar3 = uStack_70;
  func_0x0001000a8868(apuStack_88,uStack_70);
  (**(code **)(lVar1 + 0x18))(uVar3,lVar1);
  uVar4 = 0x112e55e30;
  func_0x0001000285a8(0x112e55e30,&UNK_10da58a30);
  pcVar14 = FUN_102098f4c;
  func_0x0001000bfde0(FUN_102098f4c,0,uVar4);
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(apuStack_88);
  puVar5 = &UNK_1104c6310;
  func_0x000107c613fc(&UNK_1104c6310,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar17;
  pcVar6 = FUN_102099238;
  func_0x00010487de38(FUN_102099238,puVar5);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(puVar5);
  apuStack_88[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar7 = apuStack_88;
  func_0x0001006c71a4(ppuVar7);
  func_0x000107c61574(pcVar6);
  (*pcVar15)(apuStack_88,uVar2,lVar12);
  func_0x0001000a8868(apuStack_88,uStack_70);
  uVar4 = uStack_70;
  (**(code **)(lStack_68 + 0x10))(uStack_70,lStack_68);
  puVar5 = &UNK_1104c6338;
  func_0x000107c613fc(&UNK_1104c6338,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar17;
  uVar17 = 0x102099244;
  func_0x0001000bfde0(0x102099244,puVar5,&UNK_1104c62f0);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar5);
  func_0x0001000834e4(apuStack_88);
  apuStack_88[0] = (undefined *)((ulong)apuStack_88[0] & 0xffffffffffffff00);
  ppuVar8 = apuStack_88;
  func_0x0001006c71a4(ppuVar8);
  func_0x000107c61574(uVar17);
  ppuVar9 = ppuVar8;
  func_0x0001006c733c(ppuVar8);
  plVar16 = (long *)unaff_x20[4];
  plVar10 = plVar16;
  func_0x000107c615f0();
  func_0x000100471e0c();
  func_0x000107c61574(ppuVar9);
  func_0x000107c615e8(plVar16);
  puVar5 = &UNK_1104c6360;
  func_0x000107c613fc(&UNK_1104c6360,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar11 = &UNK_1104c6388;
  func_0x000107c613fc(&UNK_1104c6388,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x102099264;
  *(undefined **)(puVar11 + 0x18) = puVar5;
  pcVar14 = FUN_10209926c;
  puVar5 = puVar11;
  (**(code **)(*plVar10 + 0x60))();
  func_0x000107c61574(plVar10);
  func_0x000107c61574(puVar11);
  uVar17 = unaff_x20[7];
  unaff_x20[7] = pcVar14;
  unaff_x20[8] = puVar5;
  func_0x000107c615e8(uVar17);
  (**(code **)(lVar12 + 0x18))(uVar2,lVar12);
  func_0x000107c61574(ppuVar7);
  func_0x000107c61574(ppuVar8);
  return;
}



/* Entry: 102098f4c; end: 102098f73;  */

void FUN_102098f4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_102099d7c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102098f74; end: 10209900f;  */

void FUN_102098f74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lVar1 = param_3 + 0x28;
    func_0x000107c61618();
    func_0x000107c61574(param_3);
    if (lVar1 != 0) {
      uVar2 = 0;
      FUN_10209df04(0);
      FUN_10209dbc4(param_1,param_2,uVar2,&PTR_DAT_1104c64d8);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102099010; end: 10209906b;  */

void FUN_102099010(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_102099214(unaff_x20 + 0x28);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10209906c; end: 1020991d3;  */

int FUN_10209906c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1020990e8;
        goto LAB_1020990cc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1020990cc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1020990e8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1020991d4; end: 102099213;  */

void FUN_1020991d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e55e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da58a04;
  func_0x000107c61520(&UNK_10da58a04,&UNK_1104c62f0);
  puRam0000000112e55e28 = puVar1;
  return;
}



/* Entry: 102099214; end: 102099237;  */

undefined8 FUN_102099214(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102099238; end: 10209926b;  */

undefined8 FUN_102099238(long *param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_218 [136];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  
  lVar8 = *param_1;
  lVar11 = *param_2;
  lVar12 = *(long *)(lVar8 + 0x10);
  if (lVar12 == *(long *)(lVar11 + 0x10)) {
    if (lVar12 != 0) {
      lVar18 = 0;
      do {
        puVar1 = (ulong *)(lVar8 + 0x20 + lVar18 * 0x28);
        uVar17 = *puVar1;
        uVar3 = puVar1[1];
        uVar13 = puVar1[2];
        uVar4 = puVar1[3];
        uVar16 = puVar1[4];
        puVar1 = (ulong *)(lVar11 + 0x20 + lVar18 * 0x28);
        uVar5 = puVar1[1];
        uVar2 = puVar1[2];
        uVar6 = puVar1[3];
        uVar15 = puVar1[4];
        if ((((uVar17 != *puVar1 || uVar3 != uVar5) &&
             (func_0x000107c605b8(uVar17,uVar3,*puVar1,uVar5,0), (uVar17 & 1) == 0)) ||
            ((uVar13 != uVar2 || uVar4 != uVar6 &&
             (func_0x000107c605b8(uVar13,uVar4,uVar2,uVar6,0), (uVar13 & 1) == 0)))) ||
           (uVar17 = *(ulong *)(uVar16 + 0x10), uVar17 != *(ulong *)(uVar15 + 0x10)))
        goto LAB_102099540;
        if (uVar17 != 0 && uVar16 != uVar15) {
          func_0x000107c61434(uVar3);
          func_0x000107c61434(uVar4);
          func_0x000107c61434(uVar16);
          func_0x000107c61434(uVar5);
          func_0x000107c61434(uVar6);
          func_0x000107c61434(uVar15);
          uVar13 = 0;
          lVar14 = 0x20;
          do {
            if (*(ulong *)(uVar16 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x102099568);
              (*pcVar7)();
            }
            puVar9 = (undefined8 *)(uVar16 + lVar14);
            uStack_178 = puVar9[3];
            uStack_180 = puVar9[2];
            uStack_168 = puVar9[5];
            uStack_170 = puVar9[4];
            uStack_158 = puVar9[7];
            uStack_160 = puVar9[6];
            uStack_148 = puVar9[9];
            uStack_150 = puVar9[8];
            uStack_138 = puVar9[0xb];
            uStack_140 = puVar9[10];
            uStack_128 = puVar9[0xd];
            uStack_130 = puVar9[0xc];
            uStack_118 = puVar9[0xf];
            uStack_120 = puVar9[0xe];
            uStack_110 = puVar9[0x10];
            uStack_188 = puVar9[1];
            uStack_190 = *puVar9;
            if (*(ulong *)(uVar15 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10209956c);
              (*pcVar7)();
            }
            puVar9 = (undefined8 *)(uVar15 + lVar14);
            uStack_f8 = puVar9[1];
            uStack_100 = *puVar9;
            uStack_e8 = puVar9[3];
            uStack_f0 = puVar9[2];
            uStack_d8 = puVar9[5];
            uStack_e0 = puVar9[4];
            uStack_c8 = puVar9[7];
            uStack_d0 = puVar9[6];
            uStack_b8 = puVar9[9];
            uStack_c0 = puVar9[8];
            uStack_a8 = puVar9[0xb];
            uStack_b0 = puVar9[10];
            uStack_98 = puVar9[0xd];
            uStack_a0 = puVar9[0xc];
            uStack_88 = puVar9[0xf];
            uStack_90 = puVar9[0xe];
            uStack_80 = puVar9[0x10];
            FUN_10209956c(&uStack_190,auStack_218);
            FUN_10209956c(&uStack_100,auStack_218);
            puVar9 = &uStack_190;
            FUN_1020b4d68(puVar9,&uStack_100);
            func_0x0001020995a8(&uStack_100);
            func_0x0001020995a8(&uStack_190);
            if (((ulong)puVar9 & 1) == 0) {
              func_0x000107c6142c(uVar16);
              func_0x000107c6142c(uVar4);
              func_0x000107c6142c(uVar3);
              func_0x000107c6142c(uVar15);
              func_0x000107c6142c(uVar6);
              func_0x000107c6142c(uVar5);
              goto LAB_102099540;
            }
            uVar13 = uVar13 + 1;
            lVar14 = lVar14 + 0x88;
          } while (uVar17 != uVar13);
          func_0x000107c6142c(uVar16);
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(uVar3);
          func_0x000107c6142c(uVar15);
          func_0x000107c6142c(uVar6);
          func_0x000107c6142c(uVar5);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar12);
    }
    uVar10 = 1;
  }
  else {
LAB_102099540:
    uVar10 = 0;
  }
  return uVar10;
}



/* Entry: 10209926c; end: 102099297;  */

void FUN_10209926c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 102099298; end: 10209956b;  */

undefined8 FUN_102099298(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_218 [136];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == *(long *)(param_2 + 0x10)) {
    if (lVar10 != 0) {
      lVar16 = 0;
      do {
        puVar1 = (ulong *)(param_1 + 0x20 + lVar16 * 0x28);
        uVar15 = *puVar1;
        uVar3 = puVar1[1];
        uVar11 = puVar1[2];
        uVar4 = puVar1[3];
        uVar14 = puVar1[4];
        puVar1 = (ulong *)(param_2 + 0x20 + lVar16 * 0x28);
        uVar5 = puVar1[1];
        uVar2 = puVar1[2];
        uVar6 = puVar1[3];
        uVar13 = puVar1[4];
        if ((((uVar15 != *puVar1 || uVar3 != uVar5) &&
             (func_0x000107c605b8(uVar15,uVar3,*puVar1,uVar5,0), (uVar15 & 1) == 0)) ||
            ((uVar11 != uVar2 || uVar4 != uVar6 &&
             (func_0x000107c605b8(uVar11,uVar4,uVar2,uVar6,0), (uVar11 & 1) == 0)))) ||
           (uVar15 = *(ulong *)(uVar14 + 0x10), uVar15 != *(ulong *)(uVar13 + 0x10)))
        goto LAB_102099540;
        if (uVar15 != 0 && uVar14 != uVar13) {
          func_0x000107c61434(uVar3);
          func_0x000107c61434(uVar4);
          func_0x000107c61434(uVar14);
          func_0x000107c61434(uVar5);
          func_0x000107c61434(uVar6);
          func_0x000107c61434(uVar13);
          uVar11 = 0;
          lVar12 = 0x20;
          do {
            if (*(ulong *)(uVar14 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x102099568);
              (*pcVar7)();
            }
            puVar8 = (undefined8 *)(uVar14 + lVar12);
            uStack_178 = puVar8[3];
            uStack_180 = puVar8[2];
            uStack_168 = puVar8[5];
            uStack_170 = puVar8[4];
            uStack_158 = puVar8[7];
            uStack_160 = puVar8[6];
            uStack_148 = puVar8[9];
            uStack_150 = puVar8[8];
            uStack_138 = puVar8[0xb];
            uStack_140 = puVar8[10];
            uStack_128 = puVar8[0xd];
            uStack_130 = puVar8[0xc];
            uStack_118 = puVar8[0xf];
            uStack_120 = puVar8[0xe];
            uStack_110 = puVar8[0x10];
            uStack_188 = puVar8[1];
            uStack_190 = *puVar8;
            if (*(ulong *)(uVar13 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10209956c);
              (*pcVar7)();
            }
            puVar8 = (undefined8 *)(uVar13 + lVar12);
            uStack_f8 = puVar8[1];
            uStack_100 = *puVar8;
            uStack_e8 = puVar8[3];
            uStack_f0 = puVar8[2];
            uStack_d8 = puVar8[5];
            uStack_e0 = puVar8[4];
            uStack_c8 = puVar8[7];
            uStack_d0 = puVar8[6];
            uStack_b8 = puVar8[9];
            uStack_c0 = puVar8[8];
            uStack_a8 = puVar8[0xb];
            uStack_b0 = puVar8[10];
            uStack_98 = puVar8[0xd];
            uStack_a0 = puVar8[0xc];
            uStack_88 = puVar8[0xf];
            uStack_90 = puVar8[0xe];
            uStack_80 = puVar8[0x10];
            FUN_10209956c(&uStack_190,auStack_218);
            FUN_10209956c(&uStack_100,auStack_218);
            puVar8 = &uStack_190;
            FUN_1020b4d68(puVar8,&uStack_100);
            func_0x0001020995a8(&uStack_100);
            func_0x0001020995a8(&uStack_190);
            if (((ulong)puVar8 & 1) == 0) {
              func_0x000107c6142c(uVar14);
              func_0x000107c6142c(uVar4);
              func_0x000107c6142c(uVar3);
              func_0x000107c6142c(uVar13);
              func_0x000107c6142c(uVar6);
              func_0x000107c6142c(uVar5);
              goto LAB_102099540;
            }
            uVar11 = uVar11 + 1;
            lVar12 = lVar12 + 0x88;
          } while (uVar15 != uVar11);
          func_0x000107c6142c(uVar14);
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(uVar3);
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(uVar6);
          func_0x000107c6142c(uVar5);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != lVar10);
    }
    uVar9 = 1;
  }
  else {
LAB_102099540:
    uVar9 = 0;
  }
  return uVar9;
}



/* Entry: 10209956c; end: 1020995db;  */

undefined8 FUN_10209956c(undefined8 param_1,undefined8 param_2)

{
  FUN_1020b6664(param_2,param_1);
  return param_2;
}



/* Entry: 1020995dc; end: 102099613;  */

void FUN_1020995dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102099614; end: 10209984f;  */

void FUN_102099614(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    puVar18 = (undefined8 *)(param_1 + 0x50);
    do {
      uVar2 = puVar18[-1];
      uVar19 = *puVar18;
      uVar3 = puVar18[-3];
      uVar7 = puVar18[-2];
      uVar4 = puVar18[-5];
      uVar8 = puVar18[-4];
      uVar20 = puVar18[-6];
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar19);
      if (uVar4 == 0) {
        return;
      }
      lVar15 = *param_3;
      uVar10 = uVar20;
      uVar11 = uVar4;
      func_0x000100029284();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar11 & 1;
      lVar21 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10209983c);
        (*pcVar9)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar21) {
        FUN_1020a6e94(lVar21,param_2 & 1);
        uVar10 = uVar20;
        uVar14 = uVar4;
        func_0x000100029284();
        if (((uint)uVar11 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x102099850);
          (*pcVar9)();
        }
      }
      else if ((param_2 & 1) == 0) {
        FUN_1020a63f4();
      }
      lVar21 = *param_3;
      if ((uVar11 & 1) == 0) {
        lVar12 = lVar21 + (uVar10 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar10 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar21 + 0x30) + uVar10 * 0x10);
        *puVar1 = uVar20;
        puVar1[1] = uVar4;
        puVar13 = (undefined8 *)(*(long *)(lVar21 + 0x38) + uVar10 * 0x28);
        *puVar13 = uVar8;
        puVar13[1] = uVar3;
        puVar13[2] = uVar7;
        puVar13[3] = uVar2;
        puVar13[4] = uVar19;
        if (SCARRY8(*(long *)(lVar21 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x102099840);
          (*pcVar9)();
        }
        *(long *)(lVar21 + 0x10) = *(long *)(lVar21 + 0x10) + 1;
      }
      else {
        puVar13 = (undefined8 *)(*(long *)(lVar21 + 0x38) + uVar10 * 0x28);
        uVar7 = *puVar13;
        uVar5 = puVar13[1];
        uVar8 = puVar13[2];
        uVar6 = puVar13[3];
        uVar17 = puVar13[4];
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar6);
        func_0x000107c61434(uVar17);
        func_0x000107c6142c(uVar19);
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar4);
        puVar13 = (undefined8 *)(*(long *)(lVar21 + 0x38) + uVar10 * 0x28);
        uVar19 = puVar13[1];
        uVar2 = puVar13[3];
        uVar3 = puVar13[4];
        *puVar13 = uVar7;
        puVar13[1] = uVar5;
        puVar13[2] = uVar8;
        puVar13[3] = uVar6;
        puVar13[4] = uVar17;
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(uVar19);
      }
      puVar18 = puVar18 + 7;
      param_2 = 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



/* Entry: 102099850; end: 10209994b;  */

void FUN_102099850(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c3e62c();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c439bc();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c49820();
      func_0x000107c61170(lVar3);
      if (0 < lVar4) {
        if (lVar4 == 1) {
          func_0x0001020bacec();
        }
        else {
          func_0x0001020bac20();
          lVar5 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          func_0x000107c613fc();
          puVar1 = PTR___sSiN_11034deb0;
          *(undefined8 *)(lVar5 + 0x18) = 2;
          *(undefined8 *)(lVar5 + 0x10) = 1;
          puVar2 = PTR___sSis7CVarArgsWP_11034df08;
          *(undefined **)(lVar5 + 0x38) = puVar1;
          *(undefined **)(lVar5 + 0x40) = puVar2;
          *(long *)(lVar5 + 0x20) = lVar4;
          func_0x000107c5fb00(lVar3,param_2,lVar5);
          func_0x000107c6142c(param_2);
        }
      }
    }
  }
  return;
}



/* Entry: 10209994c; end: 102099b6f;  */

undefined * FUN_10209994c(long param_1)

{
  bool bVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined2 uStack_60;
  undefined1 auStack_5e [14];
  
  lVar7 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar6 - extraout_x12;
  lVar7 = param_1;
  func_0x000107c5d2ac();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar5 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar5 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
  }
  func_0x000107c44fb4();
  func_0x000107c61180();
  bVar1 = param_1 == 0;
  if (bVar1) {
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar6);
    func_0x000107c61170(param_1);
    param_1 = 0;
    func_0x000107c5ede0();
  }
  lVar8 = *(long *)(param_1 + -8);
  (**(code **)(lVar8 + 0x38))(puVar6,bVar1,1,param_1);
  func_0x0001001021cc(puVar6,lVar4);
  func_0x000107c5ede0(0);
  lVar2 = 1;
  lVar7 = lVar4;
  (**(code **)(lVar8 + 0x30))(lVar4,1,param_1);
  if ((int)lVar7 == 1) {
    func_0x0001000293e4(lVar4);
    lVar7 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar8 + 8))(lVar4,param_1);
  }
  if (puVar3 == (undefined *)0x0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c5fadc(lVar5,puVar3);
    func_0x000107c6142c(puVar3);
  }
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c5fadc(lVar7,lVar2);
    func_0x000107c6142c(lVar2);
  }
  puVar3 = PTR_PTR_1126b5928;
  func_0x000107c610f8(PTR_PTR_1126b5928);
  *(undefined1 *)(lVar4 + -0xe) = 0;
  *(undefined2 *)(lVar4 + -0x10) = 0;
  func_0x000107c472e8();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar7);
  return puVar3;
}



/* Entry: 102099b70; end: 102099d7b;  */

/* WARNING: Possible PIC construction at 0x000102099d54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102099d58) */

void FUN_102099b70(long *param_1,long param_2,long param_3,long param_4)

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
  long lStack_68;
  
  lVar7 = param_2;
  lVar1 = param_3;
  func_0x000107c5d2ac();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar8 = 0;
    lVar7 = -0x2000000000000000;
    lVar2 = lVar1;
  }
  else {
    lVar8 = lVar7;
    func_0x000107c5faec();
    lVar2 = lVar1;
    func_0x000107c61170(lVar7);
    lVar7 = lVar1;
  }
  lVar1 = param_2;
  func_0x000107c4b2c0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar6 = 0;
    lStack_68 = -0x2000000000000000;
    lVar4 = lVar2;
  }
  else {
    lVar6 = lVar1;
    func_0x000107c5faec();
    lVar4 = lVar2;
    func_0x000107c61170(lVar1);
    lStack_68 = lVar2;
  }
  lVar1 = param_2;
  FUN_102099850();
  lVar2 = param_2;
  lVar11 = lVar4;
  FUN_10209994c();
  lVar9 = param_2;
  func_0x000107c4c010();
  func_0x000107c61180();
  lVar5 = lVar11;
  if (lVar9 != 0) {
    lVar10 = lVar9;
    func_0x000107c4f8c4();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    lVar5 = lVar11;
    if (lVar10 != 0) {
      lVar9 = lVar10;
      func_0x000107c5faec();
      lVar5 = lVar11;
      func_0x000107c61170(lVar10);
      goto LAB_102099c80;
    }
  }
  lVar9 = 0;
  lVar11 = 0;
LAB_102099c80:
  func_0x000107c4c010();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar10 = 0;
    lVar5 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c4f8c8();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar3 == 0) {
      lVar10 = 0;
      lVar5 = 0;
    }
    else {
      lVar10 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
  }
  *param_1 = lVar8;
  param_1[1] = lVar7;
  param_1[2] = lVar6;
  param_1[3] = lStack_68;
  param_1[4] = lVar1;
  param_1[5] = lVar4;
  param_1[6] = lVar2;
  *(undefined2 *)(param_1 + 7) = 0x100;
  param_1[8] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[9] = lVar8;
  param_1[10] = lVar7;
  param_1[0xb] = lVar9;
  param_1[0xc] = lVar11;
  param_1[0xd] = lVar10;
  param_1[0xe] = lVar5;
  param_1[0xf] = param_3;
  param_1[0x10] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 102099d7c; end: 10209a69f;  */

/* WARNING: Removing unreachable block (ram,0x00010209a694) */

char * FUN_102099d7c(long param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  code *pcVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  char *pcVar21;
  char *pcVar22;
  uint uVar23;
  undefined *puVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  char *pcVar28;
  long lVar29;
  undefined8 *puVar30;
  char *pcVar31;
  undefined *puVar32;
  undefined8 uVar33;
  ulong uVar34;
  undefined *puVar35;
  char *pcStack_150;
  ulong uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long alStack_110 [2];
  undefined *puStack_100;
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
  
  lVar29 = *(long *)(param_1 + 0x10);
  if (lVar29 == 0) {
    puVar35 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar24 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    pcVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar35 == (undefined *)0x0) goto LAB_102099e9c;
  }
  else {
    puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001020a5760(0,lVar29,0);
    puVar30 = (undefined8 *)(param_1 + 0x40);
    puVar10 = puStack_100;
    do {
      uVar3 = puVar30[-4];
      uVar18 = puVar30[-3];
      uVar4 = puVar30[-2];
      uVar6 = puVar30[-1];
      uVar33 = *puVar30;
      uVar34 = *(ulong *)(puVar10 + 0x10);
      uVar27 = *(ulong *)(puVar10 + 0x18);
      puVar35 = (undefined *)(uVar34 + 1);
      puStack_100 = puVar10;
      func_0x000107c61438(uVar18,2);
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar33);
      if (uVar27 >> 1 <= uVar34) {
        func_0x0001020a5760(1 < uVar27,puVar35,1);
        puVar10 = puStack_100;
      }
      puVar30 = puVar30 + 5;
      *(undefined **)(puVar10 + 0x10) = puVar35;
      *(undefined8 *)(puVar10 + uVar34 * 0x38 + 0x20) = uVar3;
      *(undefined8 *)(puVar10 + uVar34 * 0x38 + 0x28) = uVar18;
      *(undefined8 *)(puVar10 + uVar34 * 0x38 + 0x30) = uVar3;
      *(undefined8 *)(puVar10 + uVar34 * 0x38 + 0x38) = uVar18;
      *(undefined8 *)(puVar10 + uVar34 * 0x38 + 0x40) = uVar4;
      *(undefined8 *)(puVar10 + uVar34 * 0x38 + 0x48) = uVar6;
      *(undefined8 *)(puVar10 + uVar34 * 0x38 + 0x50) = uVar33;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  pcVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112e55e38,&UNK_10da58e10);
  func_0x000107c60498();
  puVar24 = puVar35;
LAB_102099e9c:
  puStack_100 = puVar24;
  FUN_102099614(puVar10,1,&puStack_100);
  func_0x000107c6142c(puVar10);
  puVar35 = puStack_100;
  lVar29 = 0;
  do {
    if (*(long *)(puVar35 + 0x10) != 0) {
      lVar5 = *(long *)(lVar29 * 0x18 + 0x112e55e68);
      pcVar7 = (&PTR_s_icon_for_repository___112e55e70)[lVar29 * 3];
      puVar24 = *(undefined **)(lVar29 * 0x18 + 0x112e55e78);
      func_0x000107c61438(pcVar7,2);
      func_0x000107c6157c(puVar35);
      lVar25 = lVar5;
      pcVar12 = pcVar7;
      func_0x000100029284();
      if (((ulong)pcVar12 & 1) == 0) {
        func_0x000107c61574(puVar35);
        func_0x000107c61430(pcVar7,2);
      }
      else {
        lVar25 = *(long *)(puVar35 + 0x38) + lVar25 * 0x28;
        uVar3 = *(undefined8 *)(lVar25 + 0x10);
        uVar4 = *(undefined8 *)(lVar25 + 0x18);
        uVar34 = *(ulong *)(lVar25 + 0x20);
        func_0x000107c61434(uVar4);
        func_0x000107c61434(uVar34);
        func_0x000107c61574(puVar35);
        func_0x000107c6142c(pcVar7);
        if (uVar34 >> 0x3e == 0) {
          uVar27 = *(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar27 = uVar34 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar34) {
            uVar27 = uVar34;
          }
          func_0x000107c60480();
        }
        uStack_148 = uVar34 & 0xffffffffffffff8;
        pcStack_150 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar26 = 0;
        while (uVar27 != uVar26) {
          if ((uVar34 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uStack_148 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a670);
              (*pcVar8)();
            }
            uVar9 = *(ulong *)(uVar34 + uVar26 * 8 + 0x20);
            func_0x000107c61174(uVar9);
          }
          else {
            uVar9 = uVar26;
            func_0x0001020a4b50(uVar26,uVar34);
          }
          uVar1 = uVar26 + 1;
          if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a66c);
            (*pcVar8)();
          }
          alStack_110[0] = 0;
          puVar10 = &UNK_1104c63e8;
          func_0x000107c613fc(&UNK_1104c63e8,0x18,7);
          *(long **)(puVar10 + 0x10) = alStack_110;
          puVar16 = &UNK_1104c6410;
          func_0x000107c613fc(&UNK_1104c6410,0x20,7);
          *(code **)(puVar16 + 0x10) = FUN_10209a6a0;
          *(undefined **)(puVar16 + 0x18) = puVar10;
          uStack_120 = 0x10209a6cc;
          puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_138 = 0x42000000;
          pcStack_130 = FUN_1020995dc;
          puStack_128 = &UNK_1104c6428;
          ppuVar11 = &puStack_140;
          puStack_118 = puVar16;
          func_0x000107c60bc4(ppuVar11);
          puVar20 = puStack_118;
          func_0x000107c6157c(puVar16);
          func_0x000107c61574(puVar20);
          func_0x000107c4c684(uVar9);
          func_0x000107c61170(uVar9);
          func_0x000107c60bd0(ppuVar11);
          lVar25 = alStack_110[0];
          func_0x000107c61574(puVar10);
          pcVar12 = "";
          param_4 = (char *)0x67;
          puVar10 = puVar16;
          func_0x000107c61544(puVar16,"",0x79,0x67,0xd,1);
          func_0x000107c61574(puVar16);
          if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a674);
            (*pcVar8)();
          }
          uVar26 = uVar26 + 1;
          if (lVar25 != 0) {
            pcVar13 = pcStack_150;
            func_0x000107c61550();
            if ((((int)pcVar13 == 0) || ((long)pcStack_150 < 0)) ||
               (pcVar13 = pcStack_150, ((ulong)pcStack_150 >> 0x3e & 1) != 0)) {
              if ((ulong)pcStack_150 >> 0x3e == 0) {
                pcVar12 = *(char **)(((ulong)pcStack_150 & 0xffffffffffffff8) + 0x10);
              }
              else {
                pcVar12 = (char *)((ulong)pcStack_150 & 0xffffffffffffff8);
                if ((char *)0x7fffffffffffffff < pcStack_150) {
                  pcVar12 = pcStack_150;
                }
                func_0x000107c60480();
              }
              pcVar12 = pcVar12 + 1;
              pcVar13 = (char *)0x0;
              FUN_1020a5124(0,pcVar12,1);
              param_4 = pcStack_150;
            }
            uVar9 = (ulong)pcVar13 & 0xffffffffffffff8;
            uVar26 = *(ulong *)(uVar9 + 0x10);
            pcVar28 = (char *)(uVar26 + 1);
            pcStack_150 = pcVar13;
            if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar26) {
              pcStack_150 = (char *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
              pcVar12 = pcVar28;
              FUN_1020a5124(pcStack_150,pcVar28,1);
              uVar9 = (ulong)pcStack_150 & 0xffffffffffffff8;
              param_4 = pcVar13;
            }
            *(char **)(uVar9 + 0x10) = pcVar28;
            *(long *)(uVar9 + uVar26 * 8 + 0x20) = lVar25;
            uVar26 = uVar1;
          }
        }
        if ((ulong)pcStack_150 >> 0x3e == 0) {
          pcVar13 = *(char **)(((ulong)pcStack_150 & 0xffffffffffffff8) + 0x10);
        }
        else {
          pcVar13 = (char *)((ulong)pcStack_150 & 0xffffffffffffff8);
          if ((char *)0x7fffffffffffffff < pcStack_150) {
            pcVar13 = pcStack_150;
          }
          func_0x000107c60480();
        }
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (pcVar13 != (char *)0x0) {
          pcVar28 = (char *)0x0;
          do {
            while( true ) {
              if (((ulong)pcStack_150 & 0xc000000000000001) == 0) {
                if (*(char **)(((ulong)pcStack_150 & 0xffffffffffffff8) + 0x10) <= pcVar28) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a67c);
                  (*pcVar8)();
                }
                pcVar14 = *(char **)(pcStack_150 + (long)pcVar28 * 8 + 0x20);
                func_0x000107c61174();
                pcVar22 = pcVar12;
              }
              else {
                pcVar14 = pcVar28;
                pcVar22 = pcStack_150;
                func_0x0001020a4b3c();
              }
              pcVar2 = pcVar28 + 1;
              if (SCARRY8((long)pcVar28,1)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a678);
                (*pcVar8)();
              }
              pcVar31 = pcVar14;
              func_0x000107c5d2ac();
              func_0x000107c61180();
              if (pcVar31 == (char *)0x0) {
                pcVar31 = (char *)0xe000000000000000;
                uVar27 = 0;
                pcVar12 = pcVar22;
              }
              else {
                pcVar15 = pcVar31;
                func_0x000107c5faec();
                pcVar12 = pcVar22;
                func_0x000107c61170(pcVar31);
                uVar27 = (ulong)pcVar15 & 0xffffffffffff;
                pcVar31 = pcVar22;
              }
              func_0x000107c6142c(pcVar31);
              if (((ulong)pcVar31 & 0x2000000000000000) != 0) {
                uVar27 = (ulong)pcVar31 >> 0x38 & 0xf;
              }
              if (uVar27 == 0) break;
              puVar16 = puVar10;
              func_0x000107c61558();
              puStack_140 = puVar10;
              if (((ulong)puVar16 & 1) == 0) {
                pcVar12 = (char *)(*(long *)(puVar10 + 0x10) + 1);
                func_0x0001020a5744(0,pcVar12,1);
              }
              uVar27 = *(ulong *)(puStack_140 + 0x10);
              pcVar28 = (char *)(uVar27 + 1);
              if (*(ulong *)(puStack_140 + 0x18) >> 1 <= uVar27) {
                pcVar12 = pcVar28;
                func_0x0001020a5744(1 < *(ulong *)(puStack_140 + 0x18),pcVar28,1);
              }
              *(char **)(puStack_140 + 0x10) = pcVar28;
              *(char **)(puStack_140 + uVar27 * 8 + 0x20) = pcVar14;
              pcVar28 = pcVar2;
              puVar10 = puStack_140;
              if (pcVar2 == pcVar13) goto LAB_10209a304;
            }
            func_0x000107c61170(pcVar14);
            pcVar28 = pcVar28 + 1;
          } while (pcVar2 != pcVar13);
        }
LAB_10209a304:
        func_0x000107c6142c(pcStack_150);
        if ((long)puVar24 < 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a684);
          (*pcVar8)();
        }
        uVar23 = (uint)((ulong)puVar10 >> 0x3e) & 1;
        if ((long)puVar10 < 0) {
          uVar23 = 1;
        }
        if (uVar23 == 0) {
          puVar17 = *(undefined **)(puVar10 + 0x10);
          puVar16 = puVar17;
          if (puVar24 <= puVar17) {
            puVar16 = puVar24;
          }
          puVar20 = (undefined *)0x0;
          if (puVar24 != (undefined *)0x0) {
            puVar20 = puVar16;
          }
          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if ((long)puVar17 < (long)puVar20) {
LAB_10209a684:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a688);
            (*pcVar8)();
          }
        }
        else {
          puVar20 = puVar10;
          func_0x000107c60480();
          puVar17 = puVar10;
          func_0x000107c60480();
          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if ((long)puVar17 < 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a694);
            (*pcVar8)();
          }
          puVar17 = puVar20;
          if ((long)puVar24 <= (long)puVar20) {
            puVar17 = puVar24;
          }
          puVar32 = puVar24;
          if (-1 < (long)puVar20) {
            puVar32 = puVar17;
          }
          puVar20 = (undefined *)0x0;
          if (puVar24 != (undefined *)0x0) {
            puVar20 = puVar32;
          }
          puVar24 = puVar10;
          func_0x000107c60480();
          if ((long)puVar24 < (long)puVar20) goto LAB_10209a684;
        }
        if ((((ulong)puVar10 & 0xc000000000000001) == 0) || (puVar20 == (undefined *)0x0)) {
          func_0x000107c61434(puVar10);
        }
        else {
          uVar18 = 0;
          FUN_10209a708(0);
          func_0x000107c61434(puVar10);
          puVar24 = (undefined *)0x0;
          do {
            puVar17 = puVar24 + 1;
            func_0x000107c60318(puVar24,puVar10,uVar18);
            puVar24 = puVar17;
          } while (puVar20 != puVar17);
        }
        func_0x000107c61574(puVar10);
        if (uVar23 == 0) {
          puVar32 = (undefined *)0x0;
          puVar24 = puVar10 + 0x20;
          puVar17 = puVar20;
        }
        else {
          puVar19 = (undefined *)0x0;
          puVar32 = puVar10;
          func_0x000107c60484(0);
          pcVar12 = param_4;
          func_0x000107c61574(puVar10);
          puVar17 = (undefined *)((ulong)param_4 >> 1);
          param_4 = pcVar12;
          puVar24 = puVar20;
          puVar10 = puVar19;
        }
        uVar27 = (long)puVar17 - (long)puVar32;
        if (SBORROW8((long)puVar17,(long)puVar32)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a68c);
          (*pcVar8)();
        }
        if (uVar27 == 0) {
          func_0x000107c615e8(puVar10);
        }
        else {
          puStack_140 = puVar16;
          func_0x0001020a5720(0,uVar27 & ((long)uVar27 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a690);
            (*pcVar8)();
          }
          if ((long)puVar17 <= (long)puVar32) {
            puVar17 = puVar32;
          }
          lVar25 = (long)puVar17 - (long)puVar32;
          puVar30 = (undefined8 *)(puVar24 + (long)puVar32 * 8);
          do {
            puVar24 = puStack_140;
            if (lVar25 == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10209a680);
              (*pcVar8)();
            }
            uVar18 = *puVar30;
            func_0x000107c61174(uVar18);
            FUN_102099b70(&puStack_100);
            func_0x000107c61170(uVar18);
            uVar26 = *(ulong *)(puVar24 + 0x10);
            puStack_140 = puVar24;
            if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar26) {
              func_0x0001020a5720(1 < *(ulong *)(puVar24 + 0x18),uVar26 + 1,1);
            }
            puVar16 = puStack_140;
            *(ulong *)(puStack_140 + 0x10) = uVar26 + 1;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x28) = uStack_f8;
            *(undefined **)(puStack_140 + uVar26 * 0x88 + 0x20) = puStack_100;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x58) = uStack_c8;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x50) = uStack_d0;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x68) = uStack_b8;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x60) = uStack_c0;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x38) = uStack_e8;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x30) = uStack_f0;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x48) = uStack_d8;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x40) = uStack_e0;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0xa0) = uStack_80;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x88) = uStack_98;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x80) = uStack_a0;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x98) = uStack_88;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x90) = uStack_90;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x78) = uStack_a8;
            *(undefined8 *)(puStack_140 + uVar26 * 0x88 + 0x70) = uStack_b0;
            lVar25 = lVar25 + -1;
            puVar30 = puVar30 + 1;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
          func_0x000107c615e8(puVar10);
        }
        lVar25 = *(long *)(puVar16 + 0x10);
        func_0x000107c6142c(uVar34);
        if (lVar25 == 0) {
          func_0x000107c6142c(pcVar7);
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(puVar16);
        }
        else {
          pcVar12 = pcVar21;
          func_0x000107c61558();
          pcVar13 = pcVar21;
          if (((ulong)pcVar12 & 1) == 0) {
            pcVar13 = (char *)0x0;
            FUN_1020a5100(0,*(long *)(pcVar21 + 0x10) + 1,1);
            param_4 = pcVar21;
          }
          uVar34 = *(ulong *)(pcVar13 + 0x10);
          pcVar21 = pcVar13;
          if (*(ulong *)(pcVar13 + 0x18) >> 1 <= uVar34) {
            pcVar21 = (char *)(ulong)(1 < *(ulong *)(pcVar13 + 0x18));
            FUN_1020a5100(pcVar21,uVar34 + 1,1);
            param_4 = pcVar13;
          }
          *(ulong *)(pcVar21 + 0x10) = uVar34 + 1;
          *(long *)(pcVar21 + uVar34 * 0x28 + 0x20) = lVar5;
          *(char **)(pcVar21 + uVar34 * 0x28 + 0x28) = pcVar7;
          *(undefined8 *)(pcVar21 + uVar34 * 0x28 + 0x30) = uVar3;
          *(undefined8 *)(pcVar21 + uVar34 * 0x28 + 0x38) = uVar4;
          *(undefined **)(pcVar21 + uVar34 * 0x28 + 0x40) = puVar16;
        }
      }
    }
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      func_0x000107c61574(puVar35);
      return pcVar21;
    }
  } while( true );
}


