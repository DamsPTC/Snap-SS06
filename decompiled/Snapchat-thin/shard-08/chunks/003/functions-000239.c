/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060245d4; end: 1060245db; -[SCAddFriendsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1060245d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1060245dc; end: 1060245e7; -[SCAddFriendsSectionDataProvider containerCellViewModelsSubject] */

void FUN_1060245dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xb8,1);
  return;
}



/* Entry: 1060245e8; end: 1060246eb; -[SCAddFriendsSectionDataProvider .cxx_destruct] */

void FUN_1060245e8(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060246ec; end: 10602477b;  */

void FUN_1060246ec(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  
  uVar1 = 0x3fd1168720000000;
  func_0x00010b8169fc();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_10602477c;
  puStack_50 = &UNK_110908b58;
  uStack_40 = 0x4063400000000000;
  uStack_48 = uVar1;
  uStack_38 = param_1;
  uStack_37 = param_2;
  uStack_36 = param_3;
  _objc_retainBlock(&puStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602477c; end: 1060247cb;  */

void FUN_10602477c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x0001079eba68(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2,1,0x1e
                      ,param_3,param_4,param_5,*(undefined1 *)(param_1 + 0x30),0,0xd8,
                      *(undefined2 *)(param_1 + 0x31));
  return;
}



/* Entry: 1060247cc; end: 1060247e3;  */

void FUN_1060247cc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e38ed8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e38ed8,
                      &PTR____CFConstantStringClassReference_110e38ef8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1060247e4; end: 10602488f; -[SCAddFriendsSectionContentDataModel initWithSectionType:queryText:] */

undefined1 *
FUN_1060247e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef1e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106024890; end: 1060248b3; -[SCAddFriendsSectionContentDataModel copyWithZone:] */

undefined8 FUN_106024890(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1060248b4; end: 106024927; -[SCAddFriendsSectionContentDataModel hash] */

undefined8 * FUN_1060248b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1060249a8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1060249b4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1060249b4;
        }
        goto LAB_1060249a8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1060249b4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106024928; end: 1060249cf; -[SCAddFriendsSectionContentDataModel isEqual:] */

long FUN_106024928(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1060249a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1060249b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1060249b4;
        }
        goto LAB_1060249a8;
      }
    }
    lVar3 = 0;
  }
LAB_1060249b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1060249d0; end: 1060249d7; -[SCAddFriendsSectionContentDataModel sectionType] */

undefined8 FUN_1060249d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060249d8; end: 1060249df; -[SCAddFriendsSectionContentDataModel queryText] */

undefined8 FUN_1060249d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060249e0; end: 106024a0f; -[SCAddFriendsSectionContentDataModel .cxx_destruct] */

void FUN_1060249e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106024a10; end: 106024a2b; +[SCCMerlinSponsoredWelcomeCardActionHandler valdiMarshallableObjectDescriptor] */

void FUN_106024a10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110908b78;
  param_1[1] = &PTR_DAT_110908ba8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106024a2c; end: 106024a4f; +[SCCMerlinWelcomeCardActionHandler valdiMarshallableObjectDescriptor] */

void FUN_106024a2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110908be8;
  param_1[1] = &PTR_DAT_110908c78;
  param_1[2] = &PTR_s_ooobo_v_110908bb8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106024a50; end: 106024a83;  */

undefined8 FUN_106024a50(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) & 1,param_2[4]);
  return 0;
}



/* Entry: 106024a84; end: 106024aff;  */

void FUN_106024a84(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106024d60;
  puStack_30 = &UNK_110845510;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000106024dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106024b00; end: 106024b0b; +[SCCMerlinBioPage componentPath] */

undefined ** FUN_106024b00(void)

{
  return &PTR____CFConstantStringClassReference_110e38f18;
}



/* Entry: 106024b0c; end: 106024b2b; -[SCCMerlinBioPage initWithViewModel:componentContext:runtime:] */

void FUN_106024b0c(void)

{
  FUN_106024d94(PTR_PTR_1126ef1f0);
  return;
}



/* Entry: 106024b2c; end: 106024b5f; -[SCCMerlinBioPage setViewModel:] */

void FUN_106024b2c(void)

{
  func_0x000106024da8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106024db8();
  func_0x000106024dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106024b60; end: 106024b97; -[SCCMerlinBioPage viewModel] */

void FUN_106024b60(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106024dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106024b98; end: 106024ba3; +[SCCMerlinFriendProfileCard componentPath] */

undefined ** FUN_106024b98(void)

{
  return &PTR____CFConstantStringClassReference_110e38f38;
}



/* Entry: 106024ba4; end: 106024bc3; -[SCCMerlinFriendProfileCard initWithViewModel:componentContext:runtime:] */

void FUN_106024ba4(void)

{
  FUN_106024d94(PTR_PTR_1126ef1f8);
  return;
}



/* Entry: 106024bc4; end: 106024bf7; -[SCCMerlinFriendProfileCard setViewModel:] */

void FUN_106024bc4(void)

{
  func_0x000106024da8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106024db8();
  func_0x000106024dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106024bf8; end: 106024c2f; -[SCCMerlinFriendProfileCard viewModel] */

void FUN_106024bf8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106024dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106024c30; end: 106024c3b; +[SCCMerlinSponsoredWelcomeCard componentPath] */

undefined ** FUN_106024c30(void)

{
  return &PTR____CFConstantStringClassReference_110e38f58;
}



/* Entry: 106024c3c; end: 106024c5b; -[SCCMerlinSponsoredWelcomeCard initWithViewModel:componentContext:runtime:] */

void FUN_106024c3c(void)

{
  FUN_106024d94(PTR_PTR_1126ef200);
  return;
}



/* Entry: 106024c5c; end: 106024c8f; -[SCCMerlinSponsoredWelcomeCard setViewModel:] */

void FUN_106024c5c(void)

{
  func_0x000106024da8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106024db8();
  func_0x000106024dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106024c90; end: 106024cc7; -[SCCMerlinSponsoredWelcomeCard viewModel] */

void FUN_106024c90(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106024dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106024cc8; end: 106024cd3; +[SCCMerlinWelcomeCard componentPath] */

undefined ** FUN_106024cc8(void)

{
  return &PTR____CFConstantStringClassReference_110e38f78;
}



/* Entry: 106024cd4; end: 106024cf3; -[SCCMerlinWelcomeCard initWithViewModel:componentContext:runtime:] */

void FUN_106024cd4(void)

{
  FUN_106024d94(PTR_PTR_1126ef208);
  return;
}



/* Entry: 106024cf4; end: 106024d27; -[SCCMerlinWelcomeCard setViewModel:] */

void FUN_106024cf4(void)

{
  func_0x000106024da8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106024db8();
  func_0x000106024dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106024d28; end: 106024d5f; -[SCCMerlinWelcomeCard viewModel] */

void FUN_106024d28(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106024dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106024d60; end: 106024d93;  */

void FUN_106024d60(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106024d94; end: 106024dfb;  */

void FUN_106024d94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 106024dfc; end: 106024e07; +[SCCTalkCallingProfileSection componentPath] */

undefined ** FUN_106024dfc(void)

{
  return &PTR____CFConstantStringClassReference_110e38f98;
}



/* Entry: 106024e08; end: 106024e3b; -[SCCTalkCallingProfileSection initWithViewModel:componentContext:runtime:] */

void FUN_106024e08(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef210;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106024e3c; end: 106024e8b; -[SCCTalkCallingProfileSection setViewModel:] */

void FUN_106024e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106024e8c; end: 106024ecf; -[SCCTalkCallingProfileSection viewModel] */

void FUN_106024e8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106024ed0; end: 106024f33; -[SCCTalkCallingProfileSectionContext initWithOnTap:] */

undefined8 * FUN_106024ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1126ef218;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106024f34; end: 106024f4b; +[SCCTalkCallingProfileSectionContext valdiMarshallableObjectDescriptor] */

void FUN_106024f34(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onTap_110908c88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106024f4c; end: 106024fef; -[SCCreatorsProfileActionHandler initWithUserSession:profileOnboardingScopeExposer:] */

undefined1 *
FUN_106024f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106024ff0; end: 106025233; -[SCCreatorsProfileActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_106024ff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010c201d40(PTR_PTR_1126c7288);
      _objc_copyWeak(auStack_78,param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(uVar5);
      puVar3 = PTR_PTR_1126aeaf8;
      _objc_alloc();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106025234;
      puStack_88 = &UNK_110849680;
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_copyWeak(auStack_a8,auStack_78);
      func_0x00010c0311a0();
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar3;
      _objc_release(uVar4);
      puVar3 = PTR_PTR_1126b1098;
      _objc_alloc(PTR_PTR_1126b1098);
      func_0x00010c058a20();
      func_0x00010bf9d620(uVar5);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106025234; end: 1060252e7;  */

void FUN_106025234(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1c8b80(param_2);
  func_0x00010c1c8c00(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060252e8; end: 106025307;  */

void FUN_1060252e8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106025308; end: 10602531f; -[SCCreatorsProfileActionHandler presentingViewController] */

void FUN_106025308(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106025320; end: 10602532b; -[SCCreatorsProfileActionHandler setPresentingViewController:] */

void FUN_106025320(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10602532c; end: 10602536f; -[SCCreatorsProfileActionHandler .cxx_destruct] */

void FUN_10602532c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106025370; end: 10602565f; -[SCCreatorsProfileEligibilityHandler initWithUserSession:storiesServices:storyPrivacySettingManager:ourStoriesAttributionManager:snapProServices:] */

undefined8 *
FUN_106025370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ef228;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uVar3 = puVar1[6];
    func_0x00010c1176a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0b7fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[9];
    puVar1[9] = puVar5;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    func_0x00010bee3680(puVar1);
    _objc_initWeak(auStack_78,puVar1);
    uVar6 = puVar1[6];
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0b7fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar7 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[8];
    puVar1[8] = uVar7;
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106025660; end: 1060256bf;  */

void FUN_106025660(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1c1b80(param_1);
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060256c0; end: 1060256fb; -[SCCreatorsProfileEligibilityHandler setManagedProfiles:] */

void FUN_1060256c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060256fc; end: 106025743; -[SCCreatorsProfileEligibilityHandler dealloc] */

void FUN_1060256fc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x40));
  puStack_28 = PTR_PTR_1126ef228;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106025744; end: 1060257a3; -[SCCreatorsProfileEligibilityHandler isEligible] */

undefined8 FUN_106025744(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2932e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2c720();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1060257a4; end: 1060257d3; -[SCCreatorsProfileEligibilityHandler setOnEligibilityUpdated:] */

void FUN_1060257a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060257d4; end: 1060257f7; -[SCCreatorsProfileEligibilityHandler hasManagedProfile] */

bool FUN_1060257d4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010bf529e0();
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}



/* Entry: 1060257f8; end: 10602594f; -[SCCreatorsProfileEligibilityHandler _updateViewCountForStorySnaps] */

void FUN_1060257f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e43098;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_48;
  _objc_copyWeak(auStack_50,puVar5);
  func_0x00010c25b360(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  puVar4 = auStack_48;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bee36a0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106025950; end: 106025997;  */

void FUN_106025950(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee36a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106025998; end: 106025ae7; -[SCCreatorsProfileEligibilityHandler _updateViewCountForStorySnaps:] */

long FUN_106025998(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e43098);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar1 = *(long *)(lStack_118 + lVar8 * 8);
        func_0x00010c24b240();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c29c5c0();
        _objc_release(lVar1);
        if (100 < lVar2) {
          *(undefined1 *)(param_1 + 0x10) = 1;
          if (*(long *)(param_1 + 0x38) != 0) {
            (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
          }
          goto LAB_106025aa8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar6 != 0);
  }
LAB_106025aa8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
      uVar3 = *(ulong *)(param_3 + 0x30);
      func_0x00010c103c00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c07a6a0();
      if ((uVar5 & 1) == 0) {
        lVar7 = *(long *)(param_3 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar7;
        func_0x00010c25aac0();
        if (lVar6 == 0) {
          lVar6 = 1;
        }
        else {
          lVar8 = *(long *)(param_3 + 0x18);
          func_0x00010c269d40(lVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar8;
          func_0x00010c079660();
          _objc_release(lVar8);
        }
        _objc_release(lVar7);
      }
      else {
        lVar6 = 1;
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    else {
      lVar6 = 1;
    }
    return lVar6;
  }
  return param_3;
}



/* Entry: 106025ae8; end: 106025bbb; -[SCCreatorsProfileEligibilityHandler _userThresholdMet] */

undefined8 FUN_106025ae8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    func_0x00010c103c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07a6a0();
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c25aac0();
      if (lVar5 == 0) {
        uVar7 = 1;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c079660();
        _objc_release(uVar6);
      }
      _objc_release(lVar4);
    }
    else {
      uVar7 = 1;
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 106025bbc; end: 106025c2f; -[SCCreatorsProfileEligibilityHandler .cxx_destruct] */

void FUN_106025bbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106025c30; end: 106025d83; -[SCCreatorsProfileSectionBuilder initWithUserSession:storiesServices:snapProServices:ourStoriesServices:storiesPreferencesServices:profileOnboardingScopeExposer:] */

undefined1 *
FUN_106025c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ef230;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106025d84; end: 106025e7f; -[SCCreatorsProfileSectionBuilder makeSectionProvider] */

void FUN_106025d84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106025e80;
  puStack_50 = &UNK_110908ce8;
  uStack_48 = param_1;
  _objc_retain();
  func_0x00010bf11fe0(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar2;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x106025e88;
  puStack_78 = &UNK_1108533c0;
  puVar2 = PTR_PTR_1126ae720;
  uStack_70 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afda8;
  _objc_alloc(PTR_PTR_1126afda8);
  func_0x00010c032260();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106025e80; end: 106025e8f;  */

void FUN_106025e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf2f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__createSection_11255a570);
  return;
}



/* Entry: 106025e90; end: 106025fd7; -[SCCreatorsProfileSectionBuilder _createSection] */

void FUN_106025e90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126c7290;
  _objc_alloc(PTR_PTR_1126c7290);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25aae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ee220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e900(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c7288;
  _objc_alloc(PTR_PTR_1126c7288);
  func_0x00010c00f220();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e38fb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e38fb8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar7 = PTR_PTR_1126c7298;
  _objc_alloc(PTR_PTR_1126c7298);
  func_0x00010c01a1e0();
  puVar8 = PTR_PTR_1126c72a0;
  _objc_alloc(PTR_PTR_1126c72a0);
  func_0x00010c04f8a0();
  func_0x00010c1f9240();
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106025fd8; end: 10602600b; -[SCCreatorsProfileSectionBuilder _createActionHandler] */

void FUN_106025fd8(void)

{
  _objc_alloc(PTR_PTR_1126c72a8);
  func_0x00010c05e2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602600c; end: 10602606b; -[SCCreatorsProfileSectionBuilder .cxx_destruct] */

void FUN_10602600c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10602606c; end: 1060260f7; -[SCCreatorsProfileSection initWithSupplementaryViewProvider:eligibilityHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10602606c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef238;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithSupplementaryViewProvide_1125f1810,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273d190;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1060260f8; end: 10602614f; -[SCCreatorsProfileSection sectionInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060260f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273d190);
  func_0x00010bfd8d20();
  uVar2 = 0xc038000000000000;
  if (iVar1 == 0) {
    uVar2 = 0xc028000000000000;
  }
  uVar3 = 0x4038000000000000;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  func_0x00010c297340(uVar2,0,uVar3,0,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106026150; end: 106026157; -[SCCreatorsProfileSection minimumSectionInteritemSpacing] */

undefined8 FUN_106026150(void)

{
  return 0;
}



/* Entry: 106026158; end: 10602615f; -[SCCreatorsProfileSection minimumSectionLineSpacing] */

undefined8 FUN_106026158(void)

{
  return 0;
}



/* Entry: 106026160; end: 1060261e3; -[SCCreatorsProfileSection sectionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106026160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f12238;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_11273d190,0);
  return;
}



/* Entry: 1060261e4; end: 1060261f7; -[SCCreatorsProfileSection .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060261e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d190,0);
  return;
}



/* Entry: 1060261f8; end: 106026203; +[SCCreatorsProfileSectionDataProvider announcerIdentifier] */

undefined ** FUN_1060261f8(void)

{
  return &PTR____CFConstantStringClassReference_110db66d8;
}



/* Entry: 106026204; end: 10602620b; -[SCCreatorsProfileSectionDataProvider addListener:] */

void FUN_106026204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10602620c; end: 106026213; -[SCCreatorsProfileSectionDataProvider removeListener:] */

void FUN_10602620c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106026214; end: 106026287; -[SCCreatorsProfileSectionDataProvider initWithEligibilityHandler:] */

undefined1 * FUN_106026214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef240;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106026288; end: 106026293; +[SCCreatorsProfileSectionDataProvider setShowNewBadge:] */

void FUN_106026288(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam000000011313a470 = param_3;
  return;
}



/* Entry: 106026294; end: 10602633b; -[SCCreatorsProfileSectionDataProvider setUp] */

void FUN_106026294(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1d2240(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10602633c; end: 106026367;  */

void FUN_10602633c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e3de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106026368; end: 1060263bf; -[SCCreatorsProfileSectionDataProvider onEligibilityUpdatedHelper] */

void FUN_106026368(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1060263c0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 1060263c0; end: 1060263f7;  */

void FUN_1060263c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060263f8; end: 106026443; -[SCCreatorsProfileSectionDataProvider setSectionDataModel:] */

void FUN_1060263f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106026444; end: 106026463; -[SCCreatorsProfileSectionDataProvider numberOfItemsInSection:] */

ulong FUN_106026444(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = 0;
  if (uVar1 != 0) {
    func_0x00010c071340();
    uVar2 = uVar1 & 0xffffffff;
  }
  return uVar2;
}



/* Entry: 106026464; end: 10602646b; -[SCCreatorsProfileSectionDataProvider dataLoadingStatus] */

undefined8 FUN_106026464(void)

{
  return 2;
}



/* Entry: 10602646c; end: 106026567; -[SCCreatorsProfileSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10602646c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126c72b0;
  _objc_alloc(PTR_PTR_1126c72b0);
  func_0x00010c04f2c0();
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  puStack_40 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106026568;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e38fd8;
    puVar1 = PTR_PTR_1126c72b8;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      _objc_loadWeakRetained(puVar2 + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106026568; end: 1060265e7; -[SCCreatorsProfileSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_106026568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e38fd8;
  puVar1 = PTR_PTR_1126c72b8;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060265e8; end: 1060265ff; -[SCCreatorsProfileSectionDataProvider dataProviderDelegate] */

void FUN_1060265e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106026600; end: 10602660b; -[SCCreatorsProfileSectionDataProvider setDataProviderDelegate:] */

void FUN_106026600(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10602660c; end: 106026613; -[SCCreatorsProfileSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10602660c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106026614; end: 106026643; -[SCCreatorsProfileSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106026614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106026644; end: 10602664b; -[SCCreatorsProfileSectionDataProvider sectionDataModel] */

undefined8 FUN_106026644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10602664c; end: 10602669b; -[SCCreatorsProfileSectionDataProvider .cxx_destruct] */

void FUN_10602664c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10602669c; end: 106026727; -[SCCreatorsSupplementaryViewProvider initWithHeaderViewModel:eligibilityHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10602669c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef248;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithSectionHeaderViewModel__1125ee610,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273d1a8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106026728; end: 10602674b; -[SCCreatorsSupplementaryViewProvider sectionHeaderDisplayStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106026728(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273d1a8);
  func_0x00010bfd8d20(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10602674c; end: 10602675f; -[SCCreatorsSupplementaryViewProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10602674c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d1a8,0);
  return;
}



/* Entry: 106026760; end: 1060269d3; -[SCCreatorsProfileCollectionViewCell initWithFrame:] */

undefined1 * FUN_106026760(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ef250;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c20eaa0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    FUN_106026d60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161a60();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213780();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(0,0,0x4046000000000000,0x4046000000000000);
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar6);
    _objc_release(puVar7);
    func_0x00010c19f0e0(0x4024000000000000,0x4024000000000000,0x4038000000000000,0x4038000000000000,
                        puVar6);
    func_0x00010befbb60(puVar5);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060269d4; end: 1060269db; -[SCCreatorsProfileCollectionViewCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_1060269d4(void)

{
  return 0;
}



/* Entry: 1060269dc; end: 106026b77; -[SCCreatorsProfileCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060269dc(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11273d1ac;
  ppuVar4 = *(undefined ***)(param_1 + lVar5);
  _objc_retain(ppuVar4);
  _objc_retain(param_3);
  if (ppuVar4 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == (undefined **)0x0) {
      _objc_release(ppuVar4);
    }
    else {
      ppuVar1 = ppuVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(ppuVar4);
      if (((ulong)ppuVar1 & 1) != 0) goto LAB_106026b60;
    }
    puVar2 = PTR_PTR_1126c72b0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    ppuVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    ppuVar4 = param_3;
    if (((ulong)ppuVar1 & 1) == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    _objc_retain(ppuVar4);
    _objc_release(param_3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined ***)(param_1 + lVar5) = param_3;
    _objc_release(uVar3);
    ppuVar1 = ppuVar4;
    func_0x00010c2610e0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c5c0();
    _objc_release(lVar5);
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar4;
    func_0x00010c233d00();
    _objc_release(ppuVar4);
    if ((int)ppuVar1 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db6758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6758,0);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16ed60();
    _objc_release(param_1);
    if ((int)ppuVar1 == 0) goto LAB_106026b60;
  }
  _objc_release(ppuVar4);
LAB_106026b60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106026b78; end: 106026bf7; +[SCCreatorsProfileCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_106026b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c72b0;
  _objc_opt_class(PTR_PTR_1126c72b0);
  lVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  bVar1 = ((uint)(param_4 != 0) & (uint)lVar3) == 0;
  if (bVar1) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  uVar4 = 0x4052800000000000;
  if (bVar1) {
    uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 106026bf8; end: 106026cbf; -[SCCreatorsProfileCollectionViewCell _handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106026bf8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c72b0;
  uVar4 = *(ulong *)(param_1 + _DAT_11273d1ac);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273d1b0);
    func_0x00010beeecc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf51e00();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


