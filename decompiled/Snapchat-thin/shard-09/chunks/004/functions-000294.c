/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d5402c; end: 106d540ff; -[SCCommerceOperaScreenshopPlugin .cxx_destruct] */

void FUN_106d5402c(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x68,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106d54100; end: 106d542eb; -[SCCommerceOperaScreenshopPluginFactory initWithConfigProvider:featureSettingsService:notificationPool:userBlizzardLogger:grapheneRegistry:modelService:persistenceService:photoPermissionCoordinator:fetchLimit:] */

undefined1 *
FUN_106d54100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f69f8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d542ec; end: 106d54487; -[SCCommerceOperaScreenshopPluginFactory vendScreenshopOperaPlugin] */

void FUN_106d542ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1517e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126d2580;
    _objc_alloc(PTR_PTR_1126d2580);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_1 + 0x50);
    func_0x00010bf529e0();
    func_0x00010c011f80(puVar9,param_2,uVar2,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,lVar8 == 0);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x50),param_2,puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106d54488; end: 106d54533; -[SCCommerceOperaScreenshopPluginFactory screenshopPluginWillEnd:] */

void FUN_106d54488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106d54534;
  puStack_40 = &UNK_110978068;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x0001006372a4(uVar3,&puStack_58);
  uVar1 = uVar3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d54534; end: 106d5454f;  */

bool FUN_106d54534(long param_1,long param_2)

{
  if (param_2 != 0) {
    return *(long *)(param_1 + 0x20) != param_2;
  }
  return false;
}



/* Entry: 106d54550; end: 106d545df; -[SCCommerceOperaScreenshopPluginFactory .cxx_destruct] */

void FUN_106d54550(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 106d545e0; end: 106d54753; -[SCCommerceOperaShopScreenshopPlugin initWithUserBlizzardLogger:grapheneRegistry:delegate:] */

undefined1 *
FUN_106d545e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = &uStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126f6a00;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(long *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c0e9cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2330;
    puStack_60 = puVar3;
    func_0x00010bf17ae0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e85258;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_58 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  plVar8 = &lStack_a0;
  pcStack_78 = FUN_106d54754;
  lVar7 = lVar6 + 8;
  uStack_90 = param_4;
  lStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c22cbe0();
  _objc_release(lVar7);
  puStack_98 = PTR_PTR_1126f6a00;
  lStack_a0 = lVar6;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_dealloc_112525b20);
  return (undefined1 *)plVar8;
}



/* Entry: 106d54754; end: 106d547af; -[SCCommerceOperaShopScreenshopPlugin dealloc] */

void FUN_106d54754(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c22cbe0();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126f6a00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106d547b0; end: 106d547b3; -[SCCommerceOperaShopScreenshopPlugin setPlaylistItemController:] */

void FUN_106d547b0(void)

{
  return;
}



/* Entry: 106d547b4; end: 106d5480f; -[SCCommerceOperaShopScreenshopPlugin addEventListenersWithEventAnnouncing:] */

void FUN_106d547b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bef99a0(param_3,param_2,param_1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d54810; end: 106d54817; -[SCCommerceOperaShopScreenshopPlugin playlistDataSource] */

undefined8 FUN_106d54810(void)

{
  return 0;
}



/* Entry: 106d54818; end: 106d54823; -[SCCommerceOperaShopScreenshopPlugin type] */

undefined ** FUN_106d54818(void)

{
  return &PTR____CFConstantStringClassReference_110e85158;
}



/* Entry: 106d54824; end: 106d54933; -[SCCommerceOperaShopScreenshopPlugin operaViewDidSendEvent:page:params:] */

void FUN_106d54824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bf17ae0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e85258);
      if ((int)uVar2 != 0) {
        func_0x00010be30060(param_1,param_2,param_4,param_5);
      }
    }
    else {
      func_0x00010be09d40(param_1);
    }
  }
  else {
    func_0x00010bdd3ba0(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d54934; end: 106d549bb; -[SCCommerceOperaShopScreenshopPlugin _beginSessionIfNeeded] */

void FUN_106d54934(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be34700();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b0308;
  _objc_alloc();
  func_0x00010c04a840();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logEntry__112572418,&PTR____CFConstantStringClassReference_110e85018);
  return;
}



/* Entry: 106d549bc; end: 106d549ef; -[SCCommerceOperaShopScreenshopPlugin _endSessionIfNeeded] */

void FUN_106d549bc(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22cbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d549f0; end: 106d54a33; -[SCCommerceOperaShopScreenshopPlugin _hasSession] */

bool FUN_106d549f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf42660(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 106d54a34; end: 106d54a37; -[SCCommerceOperaShopScreenshopPlugin _logEntry:] */

void FUN_106d54a34(void)

{
  return;
}



/* Entry: 106d54a38; end: 106d54a3b; -[SCCommerceOperaShopScreenshopPlugin _logWarning:] */

void FUN_106d54a38(void)

{
  return;
}



/* Entry: 106d54a3c; end: 106d54c47; -[SCCommerceOperaShopScreenshopPlugin _handleShopScreenshopButtonTapped:params:] */

ulong FUN_106d54a3c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110ebe778);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  uVar9 = param_4;
  if ((uVar2 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(param_4);
  if (uVar9 == 0) goto LAB_106d54c04;
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010bf42660();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126b07e0;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef440();
    _objc_release(puVar4);
    func_0x00010c207140(puVar1);
    puVar4 = puVar1;
    func_0x00010bf682c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    if (puVar7 == (undefined *)0x0) {
LAB_106d54bdc:
      _objc_release(puVar6);
    }
    else {
      puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf2cf00();
      _objc_release(puVar7);
      _objc_release(puVar6);
      if ((int)puVar8 != 0) {
        puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e9b80();
        goto LAB_106d54bdc;
      }
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(lVar3);
LAB_106d54c04:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return uVar9;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar9 + 0x38);
}



/* Entry: 106d54c48; end: 106d54c4f; -[SCCommerceOperaShopScreenshopPlugin session] */

undefined8 FUN_106d54c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d54c50; end: 106d54cb7; -[SCCommerceOperaShopScreenshopPlugin .cxx_destruct] */

void FUN_106d54c50(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106d54cb8; end: 106d54d77; -[SCCommerceOperaShopScreenshopPluginFactory initWithUserBlizzardLogger:grapheneRegistry:] */

undefined1 *
FUN_106d54cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6a08;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d54d78; end: 106d54e0b; -[SCCommerceOperaShopScreenshopPluginFactory vendShopScreenshopOperaPlugin] */

void FUN_106d54d78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d2588;
  _objc_alloc(PTR_PTR_1126d2588);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a9a0(puVar1,param_2,uVar2,uVar3,param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d54e0c; end: 106d54eb7; -[SCCommerceOperaShopScreenshopPluginFactory shopScreenshopPluginWillEnd:] */

void FUN_106d54e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106d54eb8;
  puStack_40 = &UNK_110978068;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x0001006372a4(uVar3,&puStack_58);
  uVar1 = uVar3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d54eb8; end: 106d54ed3;  */

bool FUN_106d54eb8(long param_1,long param_2)

{
  if (param_2 != 0) {
    return *(long *)(param_1 + 0x20) != param_2;
  }
  return false;
}



/* Entry: 106d54ed4; end: 106d54f0f; -[SCCommerceOperaShopScreenshopPluginFactory .cxx_destruct] */

void FUN_106d54ed4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d54f10; end: 106d5514f; -[SCCommerceShowcaseLayerViewControllerFactory initWithCommerceConfigProvider:legacyShowcaseFetcher:showcaseFetcher:userBlizzardLogger:grapheneRegistry:imageSourceProvider:imageFetchingService:pixelMetricsLogger:webBrowsingScopeExposer:adConfigProvider:] */

undefined8 *
FUN_106d54f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f6a10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
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
  }
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



/* Entry: 106d55150; end: 106d55233; -[SCCommerceShowcaseLayerViewControllerFactory vendShowcaseOperaLayerController:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:showcaseInteractionHistoryTracker:] */

void FUN_106d55150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2590;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffff40();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d55234; end: 106d552c3; -[SCCommerceShowcaseLayerViewControllerFactory .cxx_destruct] */

void FUN_106d55234(long param_1)

{
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



/* Entry: 106d552c4; end: 106d5556f; -[SCOperaShowcaseLayerViewController initWithCommerceConfigProvider:legacyShowcaseFetcher:showcaseFetcher:userBlizzardLogger:grapheneRegistry:imageSourceProvider:imageFetchingService:pixelMetricsLogger:webBrowsingScopeExposer:showcaseInteractionHistoryTracker:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:adConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106d552c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f6a18;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithConfiguration_layerViewC_1125de030,param_13,param_14,
                      param_15,param_16);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275d454;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d458;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d45c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d460;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d464;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d468;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d46c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d470;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d474;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d478;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d47c;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
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



/* Entry: 106d55570; end: 106d555fb; -[SCOperaShowcaseLayerViewController loadView] */

void FUN_106d55570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf99b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be89fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar2,param_2,param_1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d555fc; end: 106d55727; -[SCOperaShowcaseLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d555fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6a18;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010bece120(param_1);
  lVar1 = *(long *)(param_1 + _DAT_11275d480);
  func_0x00010c274520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + _DAT_11275d484) = 1;
  }
  else {
    func_0x00010be17a20(param_1);
  }
  lVar1 = *(long *)(param_1 + _DAT_11275d488);
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf289a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bf289a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c236500(*(undefined8 *)(param_1 + _DAT_11275d48c));
  }
  *(undefined1 *)(param_1 + _DAT_11275d490) = 0;
  _objc_release(lVar1);
  return;
}



/* Entry: 106d55728; end: 106d5576f; -[SCOperaShowcaseLayerViewController viewDidFullyDisappear] */

void FUN_106d55728(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6a18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidFullyDisappear_112684ca8);
  func_0x00010bece140(param_1);
  return;
}



/* Entry: 106d55770; end: 106d55807; -[SCOperaShowcaseLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d55770(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_11275d488);
  if (lVar2 != 0) {
    func_0x00010c084640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca1a8;
    func_0x00010c089020(PTR_PTR_1126ca1a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d55808; end: 106d55857; -[SCOperaShowcaseLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d55808(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010c071ae0(param_3,param_2,param_4);
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275d488);
  *(undefined8 *)(param_1 + _DAT_11275d488) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beafc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupShowcaseVC_1125898a8);
  return;
}



/* Entry: 106d55858; end: 106d55923; -[SCOperaShowcaseLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d55858(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c23aea0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c23aea0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275d488);
    *(long *)(param_1 + _DAT_11275d488) = lVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    func_0x00010beafc00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d55924; end: 106d55a27; -[SCOperaShowcaseLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d55924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf96940(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_11275d478);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010bece140(param_1);
    }
  }
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf96a00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_11275d478);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010c1399e0(*(undefined8 *)(param_1 + _DAT_11275d494));
      func_0x00010bece120(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d55a28; end: 106d55a83; -[SCOperaShowcaseLayerViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d55a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e857d8);
  if (((int)param_3 != 0) && (*(char *)(param_1 + _DAT_11275d484) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010be17a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__firePixelEvent_112563828);
    return;
  }
  return;
}



/* Entry: 106d55a84; end: 106d55acb; -[SCOperaShowcaseLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106d55a84(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11275d48c);
  func_0x00010c06e380();
  if ((uVar2 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_11275d490) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}



/* Entry: 106d55acc; end: 106d55bbf; -[SCOperaShowcaseLayerViewController showcaseDidTapCloseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d55acc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + _DAT_11275d490) = 1;
  puVar1 = PTR_PTR_1126b6008;
  func_0x00010c27c320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c27c080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf04440(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  func_0x00010c1163a0(*(undefined8 *)(puVar2 + _DAT_11275d494));
  _objc_initWeak(auStack_98,puVar2);
  puVar1 = puVar3;
  func_0x00010beee880(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106d55d00;
  puStack_a8 = &UNK_1108e5200;
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_copyWeak(auStack_c8,auStack_98);
  func_0x00010c0beea0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar3);
  return;
}



/* Entry: 106d55bc0; end: 106d55cff; -[SCOperaShowcaseLayerViewController productCellTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d55bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010c1163a0(*(undefined8 *)(param_1 + _DAT_11275d494));
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010beee880(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106d55d00;
  puStack_58 = &UNK_1108e5200;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0beea0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106d55d00; end: 106d55d47;  */

void FUN_106d55d00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d55d48; end: 106d55daf;  */

void FUN_106d55d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d0a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d55db0; end: 106d55db3; -[SCOperaShowcaseLayerViewController ctaButtonTappedWithDeeplink:fallbackWebURL:] */

void FUN_106d55db0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openDeeplink_fallbackURL__112578dc8);
  return;
}



/* Entry: 106d55db4; end: 106d55db7; -[SCOperaShowcaseLayerViewController bannerTappedWithDeeplink:fallbackWebURL:] */

void FUN_106d55db4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openDeeplink_fallbackURL__112578dc8);
  return;
}



/* Entry: 106d55db8; end: 106d55e6f; -[SCOperaShowcaseLayerViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d55db8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11275d478;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_11275d494;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = (long)_DAT_11275d498;
    func_0x00010c26f380();
    func_0x00010c23b180(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0;
    _objc_release(uVar3);
    func_0x00010bf33040(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106d55e70; end: 106d55fcf; -[SCOperaShowcaseLayerViewController _openDeeplink:fallbackURL:] */

void FUN_106d55e70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010be6d840(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c28f620();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010c068f20(uVar1);
    _objc_release(uVar1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d55fd0; end: 106d5600b;  */

void FUN_106d55fd0(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d5600c; end: 106d56227; -[SCOperaShowcaseLayerViewController _openURLInWebview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5600c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar7 = (long)_DAT_11275d478;
    lVar1 = *(long *)(param_1 + lVar7);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      _objc_initWeak(auStack_58,param_1);
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc();
      func_0x00010c038f40();
      uVar6 = *(undefined8 *)(param_1 + _DAT_11275d49c);
      *(undefined **)(param_1 + _DAT_11275d49c) = puVar2;
      _objc_release(uVar6);
      puVar2 = PTR_PTR_1126ae560;
      _objc_opt_new(PTR_PTR_1126ae560);
      puVar3 = puVar2;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      func_0x00010c297260(puVar3);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ae630;
      func_0x00010bfe6000(PTR_PTR_1126ae630);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2b9b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ae638;
      _objc_opt_new(PTR_PTR_1126ae638);
      puVar5 = puVar3;
      func_0x00010bf22ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7));
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d56228; end: 106d56287;  */

void FUN_106d56228(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be33500();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d56288; end: 106d562d7; -[SCOperaShowcaseLayerViewController _handleWebBrowserOpen:url:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d56288(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c09c520(param_3,param_2,param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d498);
  *(undefined **)(param_1 + _DAT_11275d498) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d562d8; end: 106d56a6b; -[SCOperaShowcaseLayerViewController _setupShowcaseVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d562d8(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = (long)_DAT_11275d48c;
  lVar1 = *(long *)(param_1 + lStack_a0);
  if (lVar1 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
  }
  puVar16 = *(undefined **)(param_1 + _DAT_11275d488);
  if (puVar16 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar16);
  }
  puVar2 = puVar16;
  func_0x00010c116260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar4 = puVar16;
    func_0x00010c116280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126b0840;
    if (puVar4 == (undefined *)0x0) {
      lVar1 = (long)_DAT_11275d480;
      goto LAB_106d564c0;
    }
    puVar4 = puVar16;
    func_0x00010c116280(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef26e0(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b07b0;
    _objc_alloc();
    func_0x00010c046680();
    lVar1 = (long)_DAT_11275d480;
    uVar14 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = puVar4;
    _objc_release(uVar14);
  }
  else {
    puVar4 = PTR_PTR_1126b07b0;
    _objc_alloc();
    uVar14 = *(undefined8 *)(param_1 + _DAT_11275d458);
    uVar15 = *(undefined8 *)(param_1 + _DAT_11275d454);
    puVar2 = puVar16;
    func_0x00010c116260(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar16;
    func_0x00010bef2c00(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c022480(puVar4,param_2,uVar14,uVar15,puVar2,puVar3);
    lVar1 = (long)_DAT_11275d480;
    uVar14 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = puVar4;
    _objc_release(uVar14);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_106d564c0:
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar1),param_2,param_1);
  param_1[_DAT_11275d484] = 0;
  puVar2 = PTR_PTR_1126b0308;
  _objc_alloc();
  func_0x00010c04a840();
  lVar17 = (long)_DAT_11275d4a0;
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar2;
  _objc_release(uVar14);
  puVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c116260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c240(*(undefined8 *)(param_1 + lVar17),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b04d0;
  _objc_alloc(PTR_PTR_1126b04d0);
  puVar4 = puVar16;
  func_0x00010bef2c00(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1780(puVar2,param_2,puVar4,0,0,0,0xffffffffffffffff);
  func_0x00010c163bc0(*(undefined8 *)(param_1 + lVar17),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = PTR_PTR_1126d2598;
  _objc_alloc();
  func_0x00010c046700();
  lVar1 = (long)_DAT_11275d494;
  uVar14 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = puVar2;
  _objc_release(uVar14);
  puVar2 = PTR_PTR_1126b0560;
  _objc_alloc();
  lVar18 = (long)_DAT_11275d454;
  func_0x00010c0085e0();
  puVar4 = PTR_PTR_1126b07b8;
  puStack_98 = puVar2;
  _objc_alloc();
  puVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar16;
  puStack_a8 = puVar16;
  func_0x00010c22cb40(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22cb20(puVar16);
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = *(undefined8 *)(param_1 + lVar18);
  uStack_110 = *(undefined8 *)(param_1 + _DAT_11275d468);
  uStack_108 = *(undefined8 *)(param_1 + _DAT_11275d46c);
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_130 = 1;
  func_0x00010c00d4a0(puVar4,param_2,puVar5,puVar6,puVar16,param_1,*(undefined8 *)(param_1 + lVar1),
                      *(undefined8 *)(param_1 + lVar17));
  lVar1 = lStack_a0;
  uVar14 = *(undefined8 *)(param_1 + lStack_a0);
  *(undefined **)(param_1 + lStack_a0) = puVar4;
  _objc_release(uVar14);
  _objc_release(puVar16);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c222920(*(undefined8 *)(param_1 + lVar1),param_2,puStack_98);
  uVar14 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c29bf00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar14);
  puVar16 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c29bf00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar16,param_2,uVar14);
  _objc_release(uVar14);
  _objc_release(puVar16);
  uVar14 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_1;
  uStack_c0 = uVar14;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar16;
  func_0x00010bf493a0(uVar14,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  uStack_d0 = uVar14;
  uStack_90 = uVar14;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_1;
  uStack_e8 = uVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar16;
  func_0x00010bf493a0(uVar15,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar1);
  uStack_f8 = uVar15;
  uStack_88 = uVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = uVar7;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar16;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar1);
  uStack_80 = uVar14;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar8;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(puVar2);
  _objc_release(puVar16);
  _objc_release(uVar7);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(puStack_f0);
  _objc_release(puStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(puStack_c8);
  _objc_release(puStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b0);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puStack_98);
  _objc_release(puStack_a8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106d56a6c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = PTR_PTR_1126b2330;
  puStack_160 = param_1;
  uStack_158 = uVar15;
  puStack_150 = puVar3;
  uStack_148 = uVar9;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_178 = puVar16;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_170 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_178,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(puVar16 + _DAT_11275d470);
  puVar2 = puVar16;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c116260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar16;
  func_0x00010c08c0e0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar16;
  func_0x00010c08c0e0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c0fcb00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar16 + _DAT_11275d480);
  func_0x00010c274520(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3180(uVar15,param_2,puVar3,puVar10,puVar13,uVar14);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar16[_DAT_11275d484] = 0;
  return;
}



/* Entry: 106d56a6c; end: 106d56b27; -[SCOperaShowcaseLayerViewController _registeredEventsForOperaSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d56a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_48 = puVar1;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
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
  uVar12 = *(undefined8 *)(puVar1 + _DAT_11275d470);
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c116260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0fcb00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar1 + _DAT_11275d480);
  func_0x00010c274520(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3180(uVar12,param_2,puVar4,puVar7,puVar10,uVar11);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1[_DAT_11275d484] = 0;
  return;
}



/* Entry: 106d56b28; end: 106d56ca7; -[SCOperaShowcaseLayerViewController _firePixelEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d56b28(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(param_1 + _DAT_11275d470);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c116260();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0fcb00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11275d480);
  func_0x00010c274520(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3180(uVar11,param_2,lVar3,lVar6,lVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + _DAT_11275d484) = 0;
  return;
}



/* Entry: 106d56ca8; end: 106d56d53; -[SCOperaShowcaseLayerViewController _trackShowcaseAppeared] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d56ca8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_11275d478);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_11275d498;
    lVar4 = *(long *)(param_1 + lVar1);
    _objc_release();
    if (lVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      *(undefined **)(param_1 + lVar1) = puVar2;
      _objc_release(uVar3);
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275d4a4);
  *(undefined **)(param_1 + _DAT_11275d4a4) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c23b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d494),PTR_s_showcasePresented_11266c658);
  return;
}



/* Entry: 106d56d54; end: 106d56e3b; -[SCOperaShowcaseLayerViewController _trackShowcaseDisappeared] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d56d54(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_11275d478);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = (long)_DAT_11275d494;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = (long)_DAT_11275d498;
    func_0x00010c26f380();
    func_0x00010c23b180(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0;
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11275d4a4;
  func_0x00010c26f380();
  func_0x00010c23b0a0(uVar3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c23afb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_showcaseDismissed_11266c610);
  return;
}



/* Entry: 106d56e3c; end: 106d56f8b; -[SCOperaShowcaseLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d56e3c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d47c,0);
  _objc_storeStrong(param_1 + _DAT_11275d49c,0);
  _objc_storeStrong(param_1 + _DAT_11275d474,0);
  _objc_storeStrong(param_1 + _DAT_11275d478,0);
  _objc_storeStrong(param_1 + _DAT_11275d470,0);
  _objc_storeStrong(param_1 + _DAT_11275d46c,0);
  _objc_storeStrong(param_1 + _DAT_11275d468,0);
  _objc_storeStrong(param_1 + _DAT_11275d464,0);
  _objc_storeStrong(param_1 + _DAT_11275d460,0);
  _objc_storeStrong(param_1 + _DAT_11275d45c,0);
  _objc_storeStrong(param_1 + _DAT_11275d458,0);
  _objc_storeStrong(param_1 + _DAT_11275d454,0);
  _objc_storeStrong(param_1 + _DAT_11275d488,0);
  _objc_storeStrong(param_1 + _DAT_11275d4a0,0);
  _objc_storeStrong(param_1 + _DAT_11275d480,0);
  _objc_storeStrong(param_1 + _DAT_11275d494,0);
  _objc_storeStrong(param_1 + _DAT_11275d4a4,0);
  _objc_storeStrong(param_1 + _DAT_11275d498,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d48c,0);
  return;
}



/* Entry: 106d56f8c; end: 106d5701b;  */

void FUN_106d56f8c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e85178;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e85178,
                      &PTR____CFConstantStringClassReference_110e85198,0);
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



/* Entry: 106d5701c; end: 106d57067; +[SCOperaShowcaseLayer layerWithPage:] */

void FUN_106d5701c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca3f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d57068; end: 106d570f7; -[SCOperaShowcaseLayer initWithPage:] */

undefined1 * FUN_106d57068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126f6a20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d570f8; end: 106d570ff; -[SCOperaShowcaseLayer type] */

undefined8 FUN_106d570f8(void)

{
  return 0x19;
}



/* Entry: 106d57100; end: 106d571df; -[SCOperaShowcaseLayer isEqual:] */

undefined * FUN_106d57100(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126ca3f0;
  _objc_opt_class();
  if (puVar3 == puVar1) {
    if (param_1 == param_3) {
      puVar3 = (undefined *)0x1;
    }
    else {
      puVar2 = *(undefined **)(param_1 + 8);
      puVar1 = param_3;
      func_0x00010c0cfdc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar2);
      _objc_retain(puVar1);
      if (puVar2 == puVar1) {
        puVar3 = (undefined *)0x1;
      }
      else if (puVar1 == (undefined *)0x0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = puVar2;
        func_0x00010c071ae0(puVar2,param_2,puVar1);
      }
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106d571e0; end: 106d571e7; -[SCOperaShowcaseLayer model] */

undefined8 FUN_106d571e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d571e8; end: 106d571f3; -[SCOperaShowcaseLayer .cxx_destruct] */

void FUN_106d571e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d571f4; end: 106d5728b; -[SCCommerceDeepLink initPDPDeepLinkWithSource:productId:storeId:] */

long FUN_106d571f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be3ae80(param_1,param_2,param_3);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = 1;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_5;
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106d5728c; end: 106d57323; -[SCCommerceDeepLink initStoreDeepLinkWithSource:storeId:categoryId:] */

long FUN_106d5728c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be3ae80(param_1,param_2,param_3);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = 2;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_5;
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106d57324; end: 106d57393; -[SCCommerceDeepLink initScreenshopDeepLinkWithSource:assetIds:] */

long FUN_106d57324(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010be3ae80(param_1,param_2,param_3);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = 3;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_4;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106d57394; end: 106d57403; -[SCCommerceDeepLink initTopicDeepLinkWithSource:topic:] */

long FUN_106d57394(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010be3ae80(param_1,param_2,param_3);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = 4;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_4;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106d57404; end: 106d574cb; -[SCCommerceDeepLink initTryStickerDeepLinkWithSource:productId:storeId:imageUrl:] */

long FUN_106d57404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be3ae80(param_1,param_2,param_3);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = 5;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_6;
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106d574cc; end: 106d57513; -[SCCommerceDeepLink _initWithSource:] */

void FUN_106d574cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6a28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 106d57514; end: 106d579ef; -[SCCommerceDeepLink deepLinkURLWithSourceApplication:internal:] */

void FUN_106d57514(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined *)0x0;
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 < 3) {
    if (lVar5 == 1) {
      lVar5 = *(long *)(param_1 + 0x18);
      func_0x00010c08fa60();
      if (lVar5 == 0) {
LAB_106d577ec:
        puVar6 = (undefined *)0x0;
        goto LAB_106d579c0;
      }
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010c08fa60();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    }
    else {
      if (lVar5 != 2) goto LAB_106d579c0;
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010c08fa60();
      if (lVar5 == 0) goto LAB_106d577ec;
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x28);
      func_0x00010c08fa60();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    }
joined_r0x000106d577c4:
    puVar2 = puVar6;
    PTR__OBJC_CLASS___NSString_1126ae4d0 = puVar3;
    if (lVar5 != 0) {
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
LAB_106d5787c:
      _objc_release(puVar6);
    }
  }
  else {
    if (lVar5 == 3) {
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x00010bf529e0();
      puVar6 = (undefined *)0x0;
      if ((param_4 == 0) || (lVar5 == 0)) goto LAB_106d579c0;
      puVar2 = *(undefined **)(param_1 + 0x30);
      func_0x000100504554(puVar2,&PTR___NSConcreteGlobalBlock_1109780d0);
      puVar3 = puVar2;
      func_0x00010bf529e0();
      puVar6 = puVar2;
      if ((undefined *)0x2d < puVar3) {
        puVar6 = *(undefined **)(param_1 + 0x30);
        func_0x00010bf529e0(puVar6);
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar3 = puVar6;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      goto LAB_106d5787c;
    }
    if (lVar5 == 4) {
      lVar5 = *(long *)(param_1 + 0x48);
      func_0x00010c08fa60();
      if (lVar5 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (lVar5 != 5) goto LAB_106d579c0;
    lVar5 = *(long *)(param_1 + 0x18);
    func_0x00010c08fa60();
    puVar2 = puVar6;
    if (lVar5 != 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010c08fa60();
      if (lVar5 != 0) {
        lVar5 = *(long *)(param_1 + 0x50);
        func_0x00010c08fa60();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        goto joined_r0x000106d577c4;
      }
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x000100c6f294();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x00010c08fa60();
    puVar6 = puVar3;
    if (lVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    lVar5 = *(long *)(param_1 + 0x40);
    func_0x00010c08fa60();
    puVar3 = puVar6;
    if (lVar5 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    puVar6 = PTR_PTR_1126b1068;
    _objc_alloc(PTR_PTR_1126b1068);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057c40(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
LAB_106d579c0:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106d579f0; end: 106d57a63;  */

void FUN_106d579f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_2);
  func_0x00010bf01c80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c25cda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d57a64; end: 106d58343; +[SCCommerceDeepLink commerceDeepLinkFromDeepLinkURL:] */

undefined * FUN_106d57a64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lStack_168;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e85358);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c25cfc0(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e853d8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010c25cfc0(uVar9,param_2,puVar3,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(puVar3);
  uVar2 = uVar1;
  func_0x00010bf44740(uVar1,param_2,&PTR____CFConstantStringClassReference_110dbff78);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c071ae0();
  _objc_release(uVar9);
  if ((uVar4 & 1) == 0) {
    uVar9 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010c071ae0();
    _objc_release(uVar9);
    if ((uVar4 & 1) == 0) {
      uVar9 = uVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010c071ae0();
      _objc_release(uVar9);
      if ((uVar4 & 1) == 0) {
        uVar9 = uVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar9;
        func_0x00010c071ae0();
        _objc_release(uVar9);
        if ((uVar4 & 1) == 0) {
          uVar9 = uVar2;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar9;
          func_0x00010c071ae0();
          _objc_release(uVar9);
          uVar9 = 5;
          if ((int)uVar4 == 0) {
            uVar9 = 0;
          }
        }
        else {
          uVar9 = 4;
        }
      }
      else {
        uVar9 = 3;
      }
    }
    else {
      uVar9 = 2;
    }
  }
  else {
    uVar9 = 1;
  }
  puVar3 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  uVar4 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44760(puVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar13 = puVar3;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar13;
  func_0x00010bf52a60();
  lVar21 = 0;
  lVar18 = 0;
  lVar11 = 0;
  if (puStack_138 == (undefined *)0x0) {
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_168 = 0;
    lStack_160 = 0;
    lVar17 = 0;
    lVar15 = 0;
  }
  else {
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_168 = 0;
    lStack_160 = 0;
    lVar17 = 0;
    lVar15 = 0;
    lVar10 = *plStack_120;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar13);
        }
        lVar20 = *(long *)(lStack_128 + (long)puVar14 * 8);
        lVar6 = lVar20;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c071ae0(lVar6,param_2,&PTR____CFConstantStringClassReference_110dae8d8);
        lVar8 = lVar17;
        lVar12 = lVar11;
        lVar19 = lVar18;
        if (((int)lVar7 == 0) || (lVar7 = lVar20, func_0x00010c08fa60(), lVar7 == 0)) {
          lVar7 = lVar6;
          func_0x00010c071ae0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e02998);
          lVar16 = lVar15;
          if (((int)lVar7 != 0) && (lVar7 = lVar20, func_0x00010c08fa60(), lVar7 != 0)) {
LAB_106d57e34:
            _objc_retain(lVar20);
            lVar17 = lVar21;
            lVar21 = lVar20;
            goto LAB_106d5800c;
          }
          lVar7 = lVar6;
          func_0x00010c071ae0(lVar6,param_2,&PTR____CFConstantStringClassReference_110db1b78);
          if (((int)lVar7 != 0) && (lVar7 = lVar20, func_0x00010c08fa60(), lVar7 != 0)) {
            _objc_retain(lVar20);
            lVar19 = lVar20;
            lVar17 = lVar18;
            goto LAB_106d5800c;
          }
          lVar7 = lVar6;
          func_0x00010c071ae0(lVar6,param_2,&PTR____CFConstantStringClassReference_110dcef58);
          if (((int)lVar7 != 0) && (lVar7 = lVar20, func_0x00010c08fa60(), lVar7 != 0)) {
            _objc_retain(lVar20);
            lVar12 = lVar20;
            lVar17 = lVar11;
            goto LAB_106d5800c;
          }
          lVar7 = lVar6;
          func_0x00010c071ae0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e852d8);
          if (((int)lVar7 != 0) && (lVar7 = lVar20, func_0x00010c08fa60(), lVar7 != 0)) {
            lVar17 = lVar20;
            func_0x00010c25cf40();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar17;
            func_0x00010bf44740();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lStack_148);
            lStack_148 = lVar11;
            goto LAB_106d5800c;
          }
          lVar7 = lVar6;
          func_0x00010c071ae0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e852f8);
          if (((int)lVar7 != 0) && (lVar7 = lVar20, func_0x00010c08fa60(), lVar7 != 0)) {
            _objc_retain(lVar20);
            lVar17 = lStack_150;
            lStack_150 = lVar20;
            goto LAB_106d5800c;
          }
          lVar7 = lVar6;
          func_0x00010c071ae0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e85318);
          if (((int)lVar7 != 0) && (lVar7 = lVar20, func_0x00010c08fa60(), lVar7 != 0)) {
            _objc_retain(lVar20);
            lVar17 = lStack_160;
            lStack_160 = lVar20;
            goto LAB_106d5800c;
          }
          lVar7 = lVar6;
          func_0x00010c071ae0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e85338);
          if (((int)lVar7 != 0) && (lVar7 = lVar20, func_0x00010c08fa60(), lVar7 != 0)) {
            _objc_retain(lVar20);
            lVar17 = lStack_168;
            lStack_168 = lVar20;
            goto LAB_106d5800c;
          }
          lVar7 = lVar6;
          func_0x00010c071ae0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e158d8);
          if (((int)lVar7 != 0) && (lVar7 = lVar20, func_0x00010c08fa60(), lVar7 != 0)) {
            lVar8 = lVar20;
            func_0x00010c25cf40();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106d5800c;
          }
          lVar7 = lVar6;
          func_0x00010c071ae0(lVar6,param_2,&PTR____CFConstantStringClassReference_110db1b58);
          if (((int)lVar7 != 0) && (lVar7 = lVar20, func_0x00010c08fa60(), lVar7 != 0))
          goto LAB_106d57e34;
        }
        else {
          _objc_retain(lVar20);
          lVar16 = lVar20;
          lVar17 = lVar15;
LAB_106d5800c:
          _objc_release(lVar17);
          lVar11 = lVar12;
          lVar15 = lVar16;
          lVar17 = lVar8;
          lVar18 = lVar19;
        }
        _objc_release(lVar20);
        _objc_release(lVar6);
        puVar14 = puVar14 + 1;
      } while (puStack_138 != puVar14);
      puStack_138 = puVar13;
      func_0x00010bf52a60(puVar13,param_2,&uStack_130,auStack_f0,0x10);
    } while (puStack_138 != (undefined *)0x0);
  }
  _objc_release(puVar13);
  puVar13 = (undefined *)0x0;
  if (uVar9 < 3) {
    if (uVar9 == 1) {
      lVar10 = lVar21;
      func_0x00010c08fa60();
      if (lVar10 == 0) {
LAB_106d581f4:
        puVar13 = (undefined *)0x0;
        goto LAB_106d5829c;
      }
      puVar14 = PTR_PTR_1126b07e0;
      _objc_alloc();
      lVar10 = lVar15;
      func_0x00010bc92e28(lVar15);
      func_0x00010bfef100(puVar14,param_2,lVar10,lVar21,lVar18);
    }
    else {
      if (uVar9 != 2) goto LAB_106d5829c;
      lVar10 = lVar18;
      func_0x00010c08fa60();
      if (lVar10 == 0) goto LAB_106d581f4;
      puVar14 = PTR_PTR_1126b07e0;
      _objc_alloc();
      lVar10 = lVar15;
      func_0x00010bc92e28(lVar15);
      func_0x00010bfef680(puVar14,param_2,lVar10,lVar18,lVar11);
    }
  }
  else if (uVar9 == 3) {
    lVar10 = lStack_148;
    func_0x00010bf529e0();
    if (lVar10 == 0) goto LAB_106d581f4;
    puVar14 = PTR_PTR_1126b07e0;
    _objc_alloc();
    lVar10 = lVar15;
    func_0x00010bc92e28(lVar15);
    func_0x00010bfef440(puVar14,param_2,lVar10,lStack_148);
  }
  else {
    if (uVar9 == 4) {
      lVar10 = lStack_168;
      func_0x00010c08fa60();
      if (lVar10 == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR_PTR_1126b07e0;
        _objc_alloc();
        lVar10 = lVar15;
        func_0x00010bc92e28(lVar15);
        func_0x00010bfef7e0(puVar13,param_2,lVar10,lStack_168);
      }
    }
    else if (uVar9 != 5) goto LAB_106d5829c;
    lVar10 = lVar21;
    func_0x00010c08fa60();
    puVar14 = puVar13;
    if (((lVar10 != 0) && (lVar10 = lVar18, func_0x00010c08fa60(), lVar10 != 0)) &&
       (lVar10 = lVar17, func_0x00010c08fa60(), lVar10 != 0)) {
      puVar14 = PTR_PTR_1126b07e0;
      _objc_alloc();
      lVar10 = lVar15;
      func_0x00010bc92e28(lVar15);
      func_0x00010bfef860(puVar14,param_2,lVar10,lVar21,lVar18,lVar17);
      _objc_release(puVar13);
    }
  }
  puVar13 = puVar14;
  if (puVar14 != (undefined *)0x0) {
    func_0x00010c206ea0(puVar14,param_2,lStack_150);
    func_0x00010c207140(puVar14,param_2,lStack_160);
    func_0x00010c217740(puVar14,param_2,lStack_168);
  }
LAB_106d5829c:
  _objc_release(lVar17);
  _objc_release(lStack_168);
  _objc_release(lStack_160);
  _objc_release(lStack_150);
  _objc_release(lStack_148);
  _objc_release(lVar11);
  _objc_release(lVar18);
  _objc_release(lVar21);
  _objc_release(lVar15);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return *(undefined **)(param_3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return puVar13;
}



/* Entry: 106d58344; end: 106d5834b; -[SCCommerceDeepLink type] */

undefined8 FUN_106d58344(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d5834c; end: 106d58353; -[SCCommerceDeepLink source] */

undefined8 FUN_106d5834c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d58354; end: 106d5835b; -[SCCommerceDeepLink productId] */

undefined8 FUN_106d58354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d5835c; end: 106d58363; -[SCCommerceDeepLink storeId] */

undefined8 FUN_106d5835c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d58364; end: 106d5836b; -[SCCommerceDeepLink categoryId] */

undefined8 FUN_106d58364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d5836c; end: 106d58373; -[SCCommerceDeepLink assetIds] */

undefined8 FUN_106d5836c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d58374; end: 106d5837b; -[SCCommerceDeepLink sourceId] */

undefined8 FUN_106d58374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d5837c; end: 106d583ab; -[SCCommerceDeepLink setSourceId:] */

void FUN_106d5837c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d583ac; end: 106d583b3; -[SCCommerceDeepLink sourceSessionId] */

undefined8 FUN_106d583ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d583b4; end: 106d583e3; -[SCCommerceDeepLink setSourceSessionId:] */

void FUN_106d583b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d583e4; end: 106d583eb; -[SCCommerceDeepLink topic] */

undefined8 FUN_106d583e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106d583ec; end: 106d5841b; -[SCCommerceDeepLink setTopic:] */

void FUN_106d583ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d5841c; end: 106d58423; -[SCCommerceDeepLink imageUrl] */

undefined8 FUN_106d5841c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106d58424; end: 106d58453; -[SCCommerceDeepLink setImageUrl:] */

void FUN_106d58424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d58454; end: 106d584cb; -[SCCommerceDeepLink .cxx_destruct] */

void FUN_106d58454(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106d584cc; end: 106d58547; -[SCCommerceDeepLinkEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d584cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110978110);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d25a8;
  _objc_alloc(PTR_PTR_1126d25a8);
  func_0x00010bffff80();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11275d4d4),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d58548; end: 106d58563;  */

void FUN_106d58548(void)

{
  _objc_opt_new(PTR_PTR_1126d25a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d58564; end: 106d5859f; -[SCCommerceDeepLinkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d58564(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d4d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275d4d8);
  return;
}



/* Entry: 106d585a0; end: 106d58617;  */

void FUN_106d585a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1068;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bdc2b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c057c40(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d58618; end: 106d5865f; -[SCCommerceDeepLinkParser productIdFromDeepLink:] */

void FUN_106d58618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106d585a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d58660; end: 106d586a7; -[SCCommerceDeepLinkParser storeIdFromDeepLink:] */

void FUN_106d58660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106d585a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d586a8; end: 106d586e7; -[SCCommerceDeepLinkParser isValidCommerceDeeplink:] */

undefined8 FUN_106d586a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106d585a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c082c60();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106d586e8; end: 106d58727; -[SCCommerceDeepLinkParser commerceDeeplinkType:] */

undefined8 FUN_106d586e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106d585a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf423e0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106d58728; end: 106d5893f; -[SCCommerceDeepLinkProcessingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d58728(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126d25b0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275d4dc;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11275d4e0;
  lVar5 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf422e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c151580();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c2754a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf36100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11275d4ec;
    _objc_loadWeakRetained(lVar14);
  }
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar13 = lVar15;
  func_0x00010c22d1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e7e0(puVar1,param_2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11275d4e4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d58940; end: 106d5899b; -[SCCommerceDeepLinkProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d58940(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275d4ec);
  _objc_destroyWeak(param_1 + _DAT_11275d4e0);
  _objc_destroyWeak(param_1 + _DAT_11275d4dc);
  _objc_destroyWeak(param_1 + _DAT_11275d4e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275d4e4);
  return;
}



/* Entry: 106d5899c; end: 106d58b0f; -[SCCommerceDeepLinkProcessor initWithNavigationDelegate:productCatalogFeatureLauncher:screenshopComposerFeatureLauncher:topicPageFeatureLauncher:chatCameraFeatureLauncher:chatCameraScopeServices:legacyShoppingFeatureLauncher:] */

undefined1 *
FUN_106d5899c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f6a30;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
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



/* Entry: 106d58b10; end: 106d58b23; -[SCCommerceDeepLinkProcessor identifier] */

void FUN_106d58b10(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}


