/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ff84ac; end: 104ff8653; -[SCAuraServiceClient syncMyAstrologyWithRequest:completionQueue:completionHandler:] */

void FUN_104ff84ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x104ff8590;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff8654; end: 104ff871b;  */

void FUN_104ff8654(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104ff871c;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104ff871c; end: 104ff872f;  */

void FUN_104ff871c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ff872c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ff8730; end: 104ff88d7; -[SCAuraServiceClient syncFriendAstrologyWithRequest:completionQueue:completionHandler:] */

void FUN_104ff8730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x104ff8814;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff88d8; end: 104ff899f;  */

void FUN_104ff88d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104ff89a0;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104ff89a0; end: 104ff89b3;  */

void FUN_104ff89a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ff89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ff89b4; end: 104ff89e3; -[SCAuraServiceClient .cxx_destruct] */

void FUN_104ff89b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ff89e4; end: 104ff8a57; -[UNISCAuraPbAuraService initWithUnifiedGrpcService:] */

undefined1 * FUN_104ff89e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5920;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ff8a58; end: 104ff8b3b; -[UNISCAuraPbAuraService syncMyAstrologyWithRequest:callOptionsBuilder:handler:] */

void FUN_104ff8a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b3a88;
  _objc_opt_class(PTR_PTR_1126b3a88);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dc21d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ff8b3c; end: 104ff8c1f; -[UNISCAuraPbAuraService syncFriendAstrologyWithRequest:callOptionsBuilder:handler:] */

void FUN_104ff8b3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b3a90;
  _objc_opt_class(PTR_PTR_1126b3a90);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dc21f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ff8c20; end: 104ff8c2b; -[UNISCAuraPbAuraService .cxx_destruct] */

void FUN_104ff8c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ff8c2c; end: 104ff8d53; -[SCAuraOperaActionBarHostView initWithLeadingCtaIcon:trailingCtaIcon:context:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104ff8c2c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e5928;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_112719380) = param_3;
    *(undefined4 *)((long)puVar1 + (long)_DAT_112719384) = param_4;
    puVar2 = PTR_PTR_1126b3a98;
    _objc_alloc();
    puVar3 = PTR_PTR_1126b3aa0;
    _objc_alloc(PTR_PTR_1126b3aa0);
    func_0x00010c04ec00();
    func_0x00010c061d40();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112719388);
    *(undefined **)((long)puVar1 + (long)_DAT_112719388) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 104ff8d54; end: 104ff8d7f; -[SCAuraOperaActionBarHostView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ff8d54(long param_1)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112719388),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 104ff8d80; end: 104ff8d87; -[SCAuraOperaActionBarHostView isFixedDuringPageTransitions] */

undefined8 FUN_104ff8d80(void)

{
  return 0;
}



/* Entry: 104ff8d88; end: 104ff8e1b; -[SCAuraOperaActionBarHostView updateWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ff8d88(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b3aa0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_3;
  func_0x00010bf144e0(param_3);
  _objc_release(param_3);
  func_0x00010c04ec00(puVar1,param_2,lVar2 != 0,*(undefined4 *)(param_1 + _DAT_112719380),
                      *(undefined4 *)(param_1 + _DAT_112719384));
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112719388),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ff8e1c; end: 104ff8e2f; -[SCAuraOperaActionBarHostView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ff8e1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719388,0);
  return;
}



/* Entry: 104ff8e30; end: 104ff8e37; -[SCAuraOperaExportItemSource activityViewControllerPlaceholderItem:] */

void FUN_104ff8e30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be45c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__itemForActivityType__11256f0b0,0);
  return;
}



/* Entry: 104ff8e38; end: 104ff8e3f; -[SCAuraOperaExportItemSource activityViewController:itemForActivityType:] */

void FUN_104ff8e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be45c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__itemForActivityType__11256f0b0,param_4);
  return;
}



/* Entry: 104ff8e40; end: 104ff905f; -[SCAuraOperaExportItemSource _itemForActivityType:] */

void FUN_104ff8e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104ff9060;
  uStack_40 = 0x104ff9070;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    func_0x00010c0bee00(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    func_0x00010c0bee00(*(undefined8 *)(param_1 + 0x18));
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_58[5];
    puStack_58[5] = puVar1;
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ff9060; end: 104ff9077;  */

void FUN_104ff9060(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104ff9078; end: 104ff91df;  */

void FUN_104ff9078(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000105005eac();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ff91e0; end: 104ff927b; -[SCAuraOperaExportItemSource activityViewControllerLinkMetadata:] */

void FUN_104ff91e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___LPLinkMetadata_1126b3aa8;
  _objc_opt_new(PTR__OBJC_CLASS___LPLinkMetadata_1126b3aa8);
  puVar2 = PTR__OBJC_CLASS___NSItemProvider_1126b3ab0;
  _objc_alloc(PTR__OBJC_CLASS___NSItemProvider_1126b3ab0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _UIImagePNGRepresentation(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fd40(puVar2,param_2,uVar3,&PTR____CFConstantStringClassReference_110db8f18);
  func_0x00010c1a97a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  func_0x00010c216240(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ff927c; end: 104ff9283; -[SCAuraOperaExportItemSource linkMetadataIcon] */

undefined8 FUN_104ff927c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104ff9284; end: 104ff92b3; -[SCAuraOperaExportItemSource setLinkMetadataIcon:] */

void FUN_104ff9284(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ff92b4; end: 104ff92bb; -[SCAuraOperaExportItemSource linkMetadataTitle] */

undefined8 FUN_104ff92b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104ff92bc; end: 104ff92eb; -[SCAuraOperaExportItemSource setLinkMetadataTitle:] */

void FUN_104ff92bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ff92ec; end: 104ff92f3; -[SCAuraOperaExportItemSource metadata] */

undefined8 FUN_104ff92ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104ff92f4; end: 104ff9323; -[SCAuraOperaExportItemSource setMetadata:] */

void FUN_104ff92f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ff9324; end: 104ff935f; -[SCAuraOperaExportItemSource .cxx_destruct] */

void FUN_104ff9324(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ff9360; end: 104ff950f; -[SCAuraOperaExportViewControllerPresenter presentWithPresentingViewController:image:title:metadata:] */

undefined *
FUN_104ff9360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b3ab8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c1bde00();
  func_0x00010c1bde20(puVar1);
  _objc_release(param_5);
  func_0x00010c1c73c0(puVar1);
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126aeb08;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar1;
  uStack_50 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0f80();
  _objc_release(puVar3);
  uStack_70 = *(undefined8 *)PTR__UIActivityTypeAssignToContact_110345988;
  uStack_68 = *(undefined8 *)PTR__UIActivityTypeAddToReadingList_110345978;
  uStack_60 = *(undefined8 *)PTR__UIActivityTypeSaveToCameraRoll_1103459f0;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c197fe0(puVar2);
  _objc_release(puVar3);
  uVar8 = 1;
  uVar9 = 0;
  puVar7 = puVar2;
  func_0x00010c10eda0(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_c0;
  ppuStack_b0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_78 = FUN_104ff9510;
  puStack_a8 = puVar3;
  puStack_a0 = puVar2;
  uStack_98 = param_4;
  puStack_90 = puVar1;
  uStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  puStack_b8 = PTR_PTR_1126e5930;
  puStack_c0 = puVar4;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    _objc_retain(puVar7);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar7;
    _objc_release(uVar6);
    _objc_retain(uVar8);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined8 *)((long)ppuVar5 + 0x10) = uVar8;
    _objc_release(uVar6);
    _objc_retain(uVar9);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined8 *)((long)ppuVar5 + 0x18) = uVar9;
    _objc_release(uVar6);
    _objc_retain(uVar10);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x20);
    *(undefined8 *)((long)ppuVar5 + 0x20) = uVar10;
    _objc_release(uVar6);
  }
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  return (undefined *)ppuVar5;
}



/* Entry: 104ff9510; end: 104ff960b; -[SCAuraOperaIntroCardPlugin initWithMetadata:birthInfoDataManager:myBitmojiAvatarIdProvider:valdiRuntimeProvider:] */

undefined1 *
FUN_104ff9510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5930;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ff960c; end: 104ff964b; -[SCAuraOperaIntroCardPlugin setOperaControlling:] */

void FUN_104ff960c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c27f040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x28,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ff964c; end: 104ff964f; -[SCAuraOperaIntroCardPlugin setPlaylistItemController:] */

void FUN_104ff964c(void)

{
  return;
}



/* Entry: 104ff9650; end: 104ff96e3; -[SCAuraOperaIntroCardPlugin registeredEventsForOperaSession] */

void FUN_104ff9650(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar4 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf0bf60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  _objc_retain(uVar5);
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010bf0bf60(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)ppuVar4;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    _objc_initWeak(auStack_88,puVar1);
    uVar6 = *(undefined8 *)(puVar1 + 8);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104ff985c;
    puStack_98 = &UNK_1108434b0;
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010c0bee00(uVar6);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(in_x4);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 104ff96e4; end: 104ff985b; -[SCAuraOperaIntroCardPlugin operaViewDidSendEvent:page:params:] */

void FUN_104ff96e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf0bf60(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104ff985c;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c0bee00(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff985c; end: 104ff9887;  */

void FUN_104ff985c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ca60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ff9888; end: 104ff988b;  */

void FUN_104ff9888(void)

{
  return;
}



/* Entry: 104ff988c; end: 104ff98d3;  */

void FUN_104ff988c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7abe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ff98d4; end: 104ff9a03; -[SCAuraOperaIntroCardPlugin _presentMyPersonalityProfileIntroCard] */

void FUN_104ff98d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d45e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    FUN_1050003a8(lVar2);
    puVar3 = PTR_PTR_1126b3a18;
    _objc_alloc(PTR_PTR_1126b3a18);
    func_0x00010c063720();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16da00(puVar3,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126b3ac0;
    _objc_alloc(PTR_PTR_1126b3ac0);
    func_0x00010c061f00();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ff9a04; end: 104ff9c0f; -[SCAuraOperaIntroCardPlugin _presentCompatiblityProfileIntroCard:] */

void FUN_104ff9a04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d45e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010901d430();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010901ccf8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      FUN_1050003a8(lVar2);
      FUN_105000384(lVar3);
      lVar1 = param_3;
      func_0x00010901d7c4(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010901e6c8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar5 = PTR_PTR_1126b3a30;
      _objc_alloc(PTR_PTR_1126b3a30);
      func_0x00010c015580();
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ca960(puVar5,param_2,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      lVar1 = param_3;
      func_0x00010bf1bae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19fa20(puVar5,param_2,lVar8);
      _objc_release(lVar8);
      _objc_release(lVar1);
      puVar9 = PTR_PTR_1126b3ac0;
      _objc_alloc(PTR_PTR_1126b3ac0);
      func_0x00010c061f00();
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c27f020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10eda0();
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(puVar9);
      _objc_release(puVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ff9c10; end: 104ff9c5f; -[SCAuraOperaIntroCardPlugin .cxx_destruct] */

void FUN_104ff9c10(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ff9c60; end: 104ff9d8b; -[SCAuraOperaLoggingPlugin initWithAuraLogger:auraProfile:] */

undefined1 *
FUN_104ff9c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5938;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104ff9d8c; end: 104ff9d97; -[SCAuraOperaLoggingPlugin setPlaylistItemController:] */

void FUN_104ff9d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104ff9d98; end: 104ff9e5f; -[SCAuraOperaLoggingPlugin registeredEventsForOperaSession] */

void FUN_104ff9d98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 in_x4;
  undefined8 uVar10;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar8 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dc27f8;
  puVar2 = PTR_PTR_1126b2330;
  puStack_50 = puVar1;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 3;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  _objc_retain(uVar9);
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)ppuVar8;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar4 == 0) {
    puVar4 = (undefined1 *)ppuVar8;
    func_0x00010c0720c0();
    if ((int)puVar4 == 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)ppuVar8;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar4 == 0) goto LAB_104ffa160;
      func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
      uVar7 = *(undefined8 *)(puVar1 + 0x68);
    }
    else {
      uVar7 = *(undefined8 *)(puVar1 + 0x68);
    }
    func_0x00010c0f7fc0(uVar7);
  }
  else {
    func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
    uVar7 = uVar9;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1 + 8;
    _objc_loadWeakRetained();
    puVar3 = puVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar1 + 8;
    _objc_loadWeakRetained();
    puVar5 = puVar2;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b3ac8;
    _objc_retain(puVar5);
    _objc_opt_class(puVar2);
    puVar6 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar2);
    puVar2 = puVar5;
    if (((ulong)puVar6 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar5);
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x2020000000;
    uStack_d0 = 0;
    puVar6 = puVar2;
    func_0x00010c23f240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf340();
    _objc_release(puVar6);
    uVar10 = *(undefined8 *)(puVar1 + 0x68);
    _objc_retain(uVar7);
    func_0x00010c0f7fc0(uVar10);
    _objc_release(uVar7);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar7);
  }
LAB_104ffa160:
  _objc_release(in_x4);
  _objc_release(uVar9);
  _objc_release(ppuVar8);
  return;
}



/* Entry: 104ff9e60; end: 104ffa1b3; -[SCAuraOperaLoggingPlugin operaViewDidSendEvent:page:params:] */

void FUN_104ff9e60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar7 == 0) {
    uVar7 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar7 == 0) {
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)uVar7 == 0) goto LAB_104ffa160;
      func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
      uVar7 = *(undefined8 *)(param_1 + 0x68);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x68);
    }
    func_0x00010c0f7fc0(uVar7);
  }
  else {
    func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
    uVar7 = param_4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126b3ac8;
    _objc_retain(uVar5);
    _objc_opt_class(puVar1);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar1);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    uVar6 = uVar4;
    func_0x00010c23f240(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf340();
    _objc_release(uVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar7);
    func_0x00010c0f7fc0(uVar8);
    _objc_release(uVar7);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(uVar7);
  }
LAB_104ffa160:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ffa1b4; end: 104ffa1cf;  */

void FUN_104ffa1b4(void)

{
  return;
}



/* Entry: 104ffa1d0; end: 104ffa2b7;  */

void FUN_104ffa1d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x11) =
       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b4ca0();
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = uVar2;
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(lVar3 + 0x50);
  if (*(long *)(lVar3 + 0x50) <= *(long *)(lVar3 + 0x48)) {
    lVar1 = *(long *)(lVar3 + 0x48);
  }
  *(long *)(lVar3 + 0x50) = lVar1;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
  *(long *)(*(long *)(param_1 + 0x20) + 0x20) = *(long *)(*(long *)(param_1 + 0x20) + 0x20) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ffa2b8; end: 104ffa2cb;  */

void FUN_104ffa2b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be07830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(double *)(param_1 + 0x28) - *(double *)(*(long *)(param_1 + 0x20) + 0x40),
             *(long *)(param_1 + 0x20),PTR_s__emitAuraOperaSnapView__11255f7a8);
  return;
}



/* Entry: 104ffa2cc; end: 104ffa33b; -[SCAuraOperaLoggingPlugin teardown] */

void FUN_104ffa2cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104ffa33c;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x68),param_3,&puStack_50);
  return;
}



/* Entry: 104ffa33c; end: 104ffa34f;  */

void FUN_104ffa33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be07810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(double *)(param_1 + 0x28) - *(double *)(*(long *)(param_1 + 0x20) + 0x38),
             *(long *)(param_1 + 0x20),PTR_s__emitAuraOperaSession__11255f7a0);
  return;
}



/* Entry: 104ffa350; end: 104ffa3a3; -[SCAuraOperaLoggingPlugin _emitAuraOperaSnapView:] */

void FUN_104ffa350(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ffa3a4; end: 104ffa45b; -[SCAuraOperaLoggingPlugin _emitAuraOperaSession:] */

void FUN_104ffa3a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf529e0(uVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf529e0(uVar5);
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c245680(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf529e0();
  func_0x00010c0ab940(param_1,uVar3,param_3,uVar1,uVar4,uVar2,uVar5,uVar8,uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104ffa45c; end: 104ffa4b7; -[SCAuraOperaLoggingPlugin .cxx_destruct] */

void FUN_104ffa45c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104ffa4b8; end: 104ffa887; -[SCAuraOperaPlayer initWithUserSession:birthInfoDataManager:myDisplayNameProvider:myBitmojiAvatarIdProvider:myBitmojiSelfieIdProvider:auraLogger:valdiRuntimeProvider:sharingViewControllerPresenter:exportViewControllerPresenter:snapSaver:conversationIdResolver:conversationManager:presentingViewController:sourceView:composerServices:operaSessionScopeExposer:operaSessionScopeServices:configProvider:] */

undefined8 *
FUN_104ffa4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126e5940;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_15);
    _objc_storeWeak(puVar1 + 0xe,param_16);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104ffa888; end: 104ffa8f3; -[SCAuraOperaPlayer dealloc] */

void FUN_104ffa888(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x90));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puStack_28 = PTR_PTR_1126e5940;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104ffa8f4; end: 104ffacd7; -[SCAuraOperaPlayer presentAuraProfile:metadata:delegate:] */

void FUN_104ffa8f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(lVar7);
  lVar7 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar1 == 0) {
    func_0x00010bf7d880(param_5);
  }
  else {
    _objc_storeWeak(param_1 + 0x78,param_5);
    _objc_release(param_5);
    puVar2 = PTR_PTR_1126b3ad0;
    _objc_alloc();
    func_0x00010bff5760();
    puVar3 = PTR_PTR_1126b3ad8;
    _objc_alloc();
    func_0x00010c05de00();
    puVar4 = PTR_PTR_1126b3ae0;
    _objc_alloc();
    func_0x00010c045cc0();
    puVar5 = PTR_PTR_1126b3ae8;
    _objc_alloc();
    func_0x00010c02ba60();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_5 = puVar6;
    func_0x00010c0d3c80();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2400;
    _objc_alloc(PTR_PTR_1126b2400);
    func_0x00010c018aa0(0);
    lVar7 = *(long *)(param_1 + 0x90);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      _objc_release();
    }
    lVar7 = *(long *)(param_1 + 0x90);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x90));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126b23f0;
    _objc_alloc(PTR_PTR_1126b23f0);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011ae0(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b23f8;
    _objc_alloc(PTR_PTR_1126b23f8);
    lVar7 = param_3;
    func_0x00010c245680(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c245680(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0087a0(puVar4);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(lVar7);
    uVar10 = *(undefined8 *)(param_1 + 0x98);
    lVar7 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar7);
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf23920(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar7);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x90));
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  param_3 = param_3 + 0x78;
  _objc_loadWeakRetained(param_3);
  func_0x00010c2a5a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ffacd8; end: 104ffad03; -[SCAuraOperaPlayer operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_104ffacd8(long param_1)

{
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a5a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ffad04; end: 104ffad07; -[SCAuraOperaPlayer operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_104ffad04(void)

{
  return;
}



/* Entry: 104ffad08; end: 104ffad33; -[SCAuraOperaPlayer operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_104ffad08(long param_1)

{
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a59c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ffad34; end: 104ffad5f; -[SCAuraOperaPlayer operaPresenterDidCancelDismissing:] */

void FUN_104ffad34(long param_1)

{
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ffad60; end: 104ffad63; -[SCAuraOperaPlayer operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_104ffad60(void)

{
  return;
}



/* Entry: 104ffad64; end: 104ffad67; -[SCAuraOperaPlayer operaPresenterDidFailToPresent:] */

void FUN_104ffad64(void)

{
  return;
}



/* Entry: 104ffad68; end: 104ffad6b; -[SCAuraOperaPlayer operaPresenterDidFinishDismissing:] */

void FUN_104ffad68(void)

{
  return;
}



/* Entry: 104ffad6c; end: 104ffadd7; -[SCAuraOperaPlayer operaPresenterDidTearDown:] */

void FUN_104ffad6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf7d880();
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x78,0);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x90));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ffadd8; end: 104ffaddb; -[SCAuraOperaPlayer operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_104ffadd8(void)

{
  return;
}



/* Entry: 104ffaddc; end: 104ffaddf; -[SCAuraOperaPlayer operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_104ffaddc(void)

{
  return;
}



/* Entry: 104ffade0; end: 104ffaecf; -[SCAuraOperaPlayer .cxx_destruct] */

void FUN_104ffade0(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 104ffaed0; end: 104ffb06f; -[SCAuraOperaPlaylistDataSource initWithUserSession:myDisplayNameProvider:myBitmojiSelfieIdProvider:myBitmojiAvatarIdProvider:profile:metadata:composerServices:] */

undefined1 *
FUN_104ffaed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5948;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ffb070; end: 104ffb187; -[SCAuraOperaPlaylistDataSource canResolvePlaylistItemGroupDataModel:] */

undefined1 FUN_104ffb070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010c23f240(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf340();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104ffb188; end: 104ffb26b;  */

void FUN_104ffb188(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ffb26c; end: 104ffb323; -[SCAuraOperaPlaylistDataSource playlistItemGroupModelForDataModel:] */

void FUN_104ffb26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,param_3,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b23e8;
  _objc_alloc(PTR_PTR_1126b23e8);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01ade0(puVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110dc1f38,1,1,1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ffb324; end: 104ffb437; -[SCAuraOperaPlaylistDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_104ffb324(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b23d8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0558c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc1f38,lVar3,0);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c13a9c0(param_3,param_2,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010be36bc0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104ffb438; end: 104ffb48b; -[SCAuraOperaPlaylistDataSource dataModelFor:] */

void FUN_104ffb438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ffb48c; end: 104ffb4df; -[SCAuraOperaPlaylistDataSource dataModelForGroup:] */

void FUN_104ffb48c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ffb4e0; end: 104ffbd57; -[SCAuraOperaPlaylistDataSource pageDataForDataModel:completion:] */

void FUN_104ffb4e0(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b3ac8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2368;
  _objc_opt_new();
  uVar3 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2b53a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_104ffbd58;
  uStack_118 = 0x104ffbd68;
  uStack_110 = 0;
  uVar3 = uVar1;
  puStack_130 = &uStack_138;
  func_0x00010c23f240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_104ffbd70;
  puStack_150 = &UNK_1108620e8;
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x104ffbdb4;
  puStack_180 = &UNK_110862118;
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  uStack_1b8 = 0x104ffbdf8;
  puStack_1b0 = &UNK_110862148;
  lStack_1a8 = param_1;
  puStack_1a0 = &uStack_138;
  lStack_178 = param_1;
  puStack_170 = &uStack_138;
  lStack_148 = param_1;
  puStack_140 = &uStack_138;
  func_0x00010c0bf340();
  _objc_release(uVar3);
  if (puStack_130[5] != 0) {
    puVar5 = PTR_PTR_1126b2dd8;
    _objc_alloc();
    puVar6 = puVar5;
    func_0x000105005c6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260();
    puVar7 = PTR_PTR_1126b2dd8;
    puStack_a0 = puVar5;
    _objc_alloc();
    puVar8 = puVar7;
    func_0x000105005c84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260();
    puVar9 = PTR_PTR_1126b2dd8;
    puStack_98 = puVar7;
    _objc_alloc();
    puVar10 = puVar9;
    func_0x000105005c9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260();
    puVar11 = PTR_PTR_1126b2dd8;
    puStack_90 = puVar9;
    _objc_alloc();
    puVar12 = puVar11;
    func_0x000105005cb4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar6);
    puStack_218 = &uStack_1e8;
    uStack_1e8 = 0;
    uStack_1d8 = 0x2020000000;
    uStack_1d0 = 0;
    puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_104ffbe3c;
    puStack_1f8 = &UNK_110847658;
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_230 = 0xc2000000;
    uStack_228 = 0x104ffbe54;
    puStack_220 = &UNK_11085ba00;
    puStack_1f0 = puStack_218;
    puStack_1e0 = puStack_218;
    func_0x00010c0bee00(*(undefined8 *)(param_1 + 0x30));
    puVar5 = puVar13;
    if (*(char *)(puStack_1e0 + 3) == '\x01') {
      puVar6 = PTR_PTR_1126b2dd8;
      _objc_alloc();
      puVar7 = puVar6;
      func_0x000105005ccc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056260();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar7);
    }
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f0dc78;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f0de58;
    puStack_d0 = PTR____kCFBooleanTrue_11034ab68;
    puStack_c8 = PTR____kCFBooleanTrue_11034ab68;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f0ddf8;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f0bcf8;
    puStack_b8 = PTR____kCFBooleanTrue_11034ab68;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0dd98;
    puStack_b0 = PTR____kCFBooleanTrue_11034ab68;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_c0 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b3af0;
    _objc_alloc(PTR_PTR_1126b3af0);
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c245680(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c245680(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0();
    func_0x00010c054900(puVar6);
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar6);
    _objc_release(uVar15);
    _objc_release(uVar14);
    func_0x00010c1d0640(puVar2);
    puVar6 = PTR_PTR_1126b3af8;
    _objc_alloc();
    func_0x00010c048b80();
    puVar7 = PTR_PTR_1126b3b00;
    puStack_108 = puVar6;
    _objc_opt_class();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_100 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar6);
    puStack_260 = &uStack_268;
    uStack_268 = 0;
    uStack_258 = 0x3032000000;
    pcStack_250 = FUN_104ffbd58;
    uStack_248 = 0x104ffbd68;
    uStack_240 = 0;
    puStack_290 = &uStack_298;
    uStack_298 = 0;
    uStack_288 = 0x3032000000;
    pcStack_280 = FUN_104ffbd58;
    uStack_278 = 0x104ffbd68;
    uStack_270 = 0;
    uVar3 = uVar1;
    func_0x00010c23f240(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf340();
    _objc_release(uVar3);
    lVar16 = puStack_260[5];
    func_0x00010c08fa60();
    if (lVar16 != 0) {
      func_0x00010c1d0640(puVar2);
    }
    lVar16 = puStack_290[5];
    func_0x00010c08fa60();
    if (lVar16 != 0) {
      func_0x00010c1d0640(puVar2);
    }
    puVar6 = PTR_PTR_1126b23e0;
    _objc_alloc(PTR_PTR_1126b23e0);
    puVar7 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c033240(puVar6);
    (**(code **)(param_4 + 0x10))(param_4,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar7);
    __Block_object_dispose(&uStack_298,8);
    _objc_release(uStack_270);
    __Block_object_dispose(&uStack_268,8);
    _objc_release(uStack_240);
    __Block_object_dispose(&uStack_1e8,8);
    _objc_release(puVar5);
  }
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = 8;
  __Block_object_dispose(&uStack_138);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(lVar16 + 0x28) = 0;
  return;
}



/* Entry: 104ffbd58; end: 104ffbd6f;  */

void FUN_104ffbd58(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104ffbd70; end: 104ffbe3b;  */

void FUN_104ffbd70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd6e60(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ffbe3c; end: 104ffbe67;  */

void FUN_104ffbe3c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104ffbe68; end: 104ffbff3;  */

void FUN_104ffbe68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf393c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010bf39380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ffbff4; end: 104ffc1f3; -[SCAuraOperaPlaylistDataSource _buildViewModelForPersonalitySnap:] */

void FUN_104ffbff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b3b08;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0449a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104ffc0dc;
  puStack_48 = &UNK_110841f80;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104ffc1f4;
  puStack_70 = &UNK_110862228;
  puStack_68 = puVar1;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  func_0x00010c0bee00(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_60,&puStack_88,
                      &PTR___NSConcreteGlobalBlock_110862258);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ffc1f4; end: 104ffc31b;  */

void FUN_104ffc1f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126b3b10;
    _objc_alloc(PTR_PTR_1126b3b10);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6140(puVar3);
    func_0x00010c171180(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1bae0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbc60();
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ffc31c; end: 104ffc31f;  */

void FUN_104ffc31c(void)

{
  return;
}



/* Entry: 104ffc320; end: 104ffc3ef; -[SCAuraOperaPlaylistDataSource _buildViewModelForCompatibilitySnap:] */

void FUN_104ffc320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b3b18;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0449a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ffc3f8;
  puStack_48 = &UNK_1108622b8;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  func_0x00010c0bee00(*(undefined8 *)(param_1 + 0x30),param_2,&PTR___NSConcreteGlobalBlock_110862278
                      ,&PTR___NSConcreteGlobalBlock_110862298,&puStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ffc3f0; end: 104ffc3f7;  */

void FUN_104ffc3f0(void)

{
  return;
}



/* Entry: 104ffc3f8; end: 104ffc61b;  */

void FUN_104ffc3f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126b3b10;
    _objc_alloc(PTR_PTR_1126b3b10);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6140(puVar3);
    func_0x00010c1caa40(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0d4600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbc60();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  lVar1 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar7;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126b3b10;
    _objc_alloc(PTR_PTR_1126b3b10);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6140(puVar3);
    func_0x00010c19fa80(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfb7ce0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbc60();
    _objc_release(uVar4);
    _objc_release(lVar8);
    _objc_release(lVar1);
  }
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ffc61c; end: 104ffc7ff; -[SCAuraOperaPlaylistDataSource _buildViewModelForSummarySnap:] */

void FUN_104ffc61c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b3b20;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c044b20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104ffc724;
  puStack_48 = &UNK_110841f80;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104ffc794;
  puStack_70 = &UNK_110862228;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104ffc800;
  puStack_a0 = &UNK_1108622b8;
  lStack_98 = param_1;
  puStack_90 = puVar1;
  puStack_68 = puVar1;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  func_0x00010c0bee00(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_60,&puStack_88,&puStack_b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ffc800; end: 104ffc8d7;  */

void FUN_104ffc800(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1caa20(*(undefined8 *)(param_1 + 0x28));
  }
  lVar1 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c19fa60(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ffc8d8; end: 104ffc8db; -[SCAuraOperaPlaylistDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_104ffc8d8(void)

{
  return;
}



/* Entry: 104ffc8dc; end: 104ffc8df; -[SCAuraOperaPlaylistDataSource removeMediaForItem:] */

void FUN_104ffc8dc(void)

{
  return;
}



/* Entry: 104ffc8e0; end: 104ffc8e7; -[SCAuraOperaPlaylistDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_104ffc8e0(void)

{
  return 0;
}



/* Entry: 104ffc8e8; end: 104ffc95f; -[SCAuraOperaPlaylistDataSource .cxx_destruct] */

void FUN_104ffc8e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 104ffc960; end: 104ffca8b; -[SCAuraOperaPlaylistFeaturePlugin initWithUserSession:myDisplayNameProvider:myBitmojiSelfieIdProvider:myBitmojiAvatarIdProvider:profile:metadata:composerServices:] */

undefined8 *
FUN_104ffc960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5950;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b3b28;
    _objc_alloc();
    func_0x00010c05de00();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104ffca8c; end: 104ffca97; -[SCAuraOperaPlaylistFeaturePlugin setPlaylistItemController:] */

void FUN_104ffca8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104ffca98; end: 104ffcabf; -[SCAuraOperaPlaylistFeaturePlugin playlistDataSource] */

void FUN_104ffca98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ffcac0; end: 104ffcac3; -[SCAuraOperaPlaylistFeaturePlugin addEventListenersWithEventAnnouncing:] */

void FUN_104ffcac0(void)

{
  return;
}



/* Entry: 104ffcac4; end: 104ffcacf; -[SCAuraOperaPlaylistFeaturePlugin type] */

undefined ** FUN_104ffcac4(void)

{
  return &PTR____CFConstantStringClassReference_110dc1f38;
}



/* Entry: 104ffcad0; end: 104ffcc8f; -[SCAuraOperaPlaylistFeaturePlugin updateOperaConfiguration:] */

void FUN_104ffcad0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar2 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5ea0(puVar2,param_6,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4880(puVar2,param_6,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9060(puVar2,param_6,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c2ac520(puVar2,param_6,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5480(puVar2,param_6,0xac);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b69c0(puVar2,param_6,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar4 = param_1;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar5 = dVar4;
  func_0x000100594f4c();
  dVar6 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  uVar1 = 2;
  if (dVar6 / ((param_1 - dVar5) - dVar4) < 0.5625) {
    uVar1 = 1;
  }
  func_0x00010c2b48a0(puVar2,param_6,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104ffcc90; end: 104ffccbb; -[SCAuraOperaPlaylistFeaturePlugin .cxx_destruct] */

void FUN_104ffcc90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104ffccbc; end: 104ffcdcb;  */

void FUN_104ffccbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104ffcdcc;
  uStack_30 = 0x104ffcddc;
  uStack_28 = 0;
  func_0x00010c0bee00(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ffcdcc; end: 104ffcde3;  */

void FUN_104ffcdcc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


