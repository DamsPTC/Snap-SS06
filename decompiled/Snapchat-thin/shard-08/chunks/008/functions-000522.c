/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065c94f0; end: 1065c968f;  */

void FUN_1065c94f0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065c9690; end: 1065c96db; -[SCCreativeKitWebModalViewController viewDidLoad] */

void FUN_1065c9690(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1f28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1c8b80(param_1);
  return;
}



/* Entry: 1065c96dc; end: 1065c9723; -[SCCreativeKitWebModalViewController viewWillAppear:] */

void FUN_1065c96dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1f28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010bdf0260(param_1);
  return;
}



/* Entry: 1065c9724; end: 1065c972f; -[SCCreativeKitWebModalViewController creativeKitWebModalDidFinish] */

void FUN_1065c9724(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1065c9730; end: 1065c9737; -[SCCreativeKitWebModalViewController pageViewName] */

undefined8 FUN_1065c9730(void)

{
  return 0x21;
}



/* Entry: 1065c9738; end: 1065c9817; -[SCCreativeKitWebModalViewController _createModalCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c9738(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cbe08;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274b428);
  func_0x00010bdc2b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009ca0();
  lVar5 = (long)_DAT_11274b458;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf32130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar5),PTR_s_cardWillInsert_1125aa1f0);
  return;
}



/* Entry: 1065c9818; end: 1065c981f; -[SCCreativeKitWebModalViewController numberOfSectionsInTableView:] */

undefined8 FUN_1065c9818(void)

{
  return 1;
}



/* Entry: 1065c9820; end: 1065c9827; -[SCCreativeKitWebModalViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_1065c9820(void)

{
  return 1;
}



/* Entry: 1065c9828; end: 1065c982f; -[SCCreativeKitWebModalViewController tableView:heightForHeaderInSection:] */

undefined8 FUN_1065c9828(void)

{
  return 0;
}



/* Entry: 1065c9830; end: 1065c989f; -[SCCreativeKitWebModalViewController tableView:viewForHeaderInSection:] */

void FUN_1065c9830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065c98a0; end: 1065c98a7; -[SCCreativeKitWebModalViewController tableView:heightForFooterInSection:] */

undefined8 FUN_1065c98a0(void)

{
  return 0;
}



/* Entry: 1065c98a8; end: 1065c9917; -[SCCreativeKitWebModalViewController tableView:viewForFooterInSection:] */

void FUN_1065c98a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065c9918; end: 1065c993b; -[SCCreativeKitWebModalViewController tableView:heightForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065c9918(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c106e40(*(undefined8 *)(param_3 + _DAT_11274b458));
  return param_2;
}



/* Entry: 1065c993c; end: 1065c996b; -[SCCreativeKitWebModalViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c993c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b458);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065c996c; end: 1065c997b; -[SCCreativeKitWebModalViewController tableView:willDisplayCell:forRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c996c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf320f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274b458),PTR_s_cardWillAppear_1125aa1e0);
  return;
}



/* Entry: 1065c997c; end: 1065c998b; -[SCCreativeKitWebModalViewController tableView:didEndDisplayingCell:forRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c997c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf31cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274b458),PTR_s_cardDidDisappear_1125aa0e0);
  return;
}



/* Entry: 1065c998c; end: 1065c9a7b; -[SCCreativeKitWebModalViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c998c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b448,0);
  _objc_storeStrong(param_1 + _DAT_11274b444,0);
  _objc_storeStrong(param_1 + _DAT_11274b440,0);
  _objc_storeStrong(param_1 + _DAT_11274b43c,0);
  _objc_storeStrong(param_1 + _DAT_11274b438,0);
  _objc_storeStrong(param_1 + _DAT_11274b434,0);
  _objc_storeStrong(param_1 + _DAT_11274b430,0);
  _objc_storeStrong(param_1 + _DAT_11274b42c,0);
  _objc_storeStrong(param_1 + _DAT_11274b45c,0);
  _objc_storeStrong(param_1 + _DAT_11274b458,0);
  _objc_storeStrong(param_1 + _DAT_11274b450,0);
  _objc_storeStrong(param_1 + _DAT_11274b44c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b428,0);
  return;
}



/* Entry: 1065c9a7c; end: 1065c9c9f; -[SCScanCardSnapKitDeepLinkActionHandler initWithNavigationDelegate:presentingViewController:businessProfilesPresenterScopeLauncher:conversationDestinationParser:legacySendToScopeLauncher:httpMetadataService:httpRequestModifier:urlPreviewProvider:simpleContentFetcher:imageSourceProvider:textSender:] */

undefined8 *
FUN_1065c9a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

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
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f1f30;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 1065c9ca0; end: 1065c9e5f; -[SCScanCardSnapKitDeepLinkActionHandler presentPublisherViewControllerWithDeepLinkURL:attachmentURLString:attachmentShareMetadata:publisherBusinessId:showId:] */

void FUN_1065c9ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_7 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_7);
    if ((int)puVar1 != 0) {
      puVar1 = PTR_PTR_1126b4158;
      _objc_alloc(PTR_PTR_1126b4158);
      lVar4 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar4);
      uVar2 = 0x1b;
      func_0x00010bc9107c(0x1b);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0;
      func_0x00010bb0584c(0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03c1a0(puVar1,param_2,param_6,param_7,param_1,lVar4,uVar2,uVar3,0);
      goto LAB_1065c9de8;
    }
  }
  puVar1 = PTR_PTR_1126b4158;
  _objc_alloc(PTR_PTR_1126b4158);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  uVar2 = 0x1b;
  func_0x00010bc9107c(0x1b);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x00010bb0584c(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c160(puVar1,param_2,param_6,param_1,lVar4,uVar2,uVar3,0);
LAB_1065c9de8:
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar4);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,param_1);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c9e60; end: 1065ca1ef; -[SCScanCardSnapKitDeepLinkActionHandler attachToSnapWithDeepLinkURL:attachmentURLString:attachmentShareMetadata:attributionName:completion:] */

void FUN_1065c9e60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar7 = param_4;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  _objc_release(uVar6);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_1065ca1a8;
  uVar2 = param_5;
  func_0x00010bf05300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar7);
  uVar2 = param_5;
  func_0x00010c255240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uVar2 == 0) {
LAB_1065ca034:
    uVar2 = param_5;
    func_0x00010c0f1dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (uVar2 != 0) {
      uVar3 = param_5;
      func_0x00010c0f1dc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80();
      if (((ulong)puVar4 & 1) == 0) {
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      else {
        uVar5 = param_5;
        func_0x00010c263dc0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar5 & 1) == 0) {
          uVar7 = 0;
          func_0x0001000819a8(0,0);
          _objc_retainAutoreleasedReturnValue();
          puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_100 = 0xc2000000;
          pcStack_f8 = FUN_1065ca5a8;
          puStack_f0 = &UNK_110866740;
          _objc_retain(param_5);
          uStack_e8 = param_5;
          _objc_retain(param_4);
          uStack_e0 = param_4;
          lStack_d8 = param_1;
          _objc_retain(param_6);
          uStack_d0 = param_6;
          _objc_retain(param_3);
          uStack_c8 = param_3;
          _objc_retain(param_7);
          lStack_c0 = param_7;
          func_0x00010007380c(uVar7,&puStack_108);
          _objc_release(uVar7);
          _objc_release(lStack_c0);
          _objc_release(uStack_c8);
          _objc_release(uStack_d0);
          _objc_release(uStack_e0);
          uVar2 = uStack_e8;
          goto LAB_1065ca14c;
        }
      }
    }
    uVar2 = param_5;
    func_0x00010c11b1e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be62140(param_1);
    _objc_release(uVar2);
    (**(code **)(param_7 + 0x10))(param_7);
  }
  else {
    uVar3 = param_5;
    func_0x00010c255240(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    if (((ulong)puVar4 & 1) == 0) {
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_1065ca034;
    }
    uVar5 = param_5;
    func_0x00010c263dc0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) != 0) goto LAB_1065ca034;
    uVar7 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1065ca1f0;
    puStack_a0 = &UNK_110866740;
    _objc_retain(param_5);
    uStack_98 = param_5;
    _objc_retain(param_4);
    uStack_90 = param_4;
    lStack_88 = param_1;
    _objc_retain(param_6);
    uStack_80 = param_6;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_7);
    lStack_70 = param_7;
    func_0x00010007380c(uVar7,&puStack_b8);
    _objc_release(uVar7);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_90);
    uVar2 = uStack_98;
LAB_1065ca14c:
    _objc_release(uVar2);
  }
LAB_1065ca1a8:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ca1f0; end: 1065ca3c7;  */

void FUN_1065ca1f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar2 = PTR_PTR_1126b5858;
  _objc_alloc(PTR_PTR_1126b5858);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0ea80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x3fa644c1;
  func_0x00010b774c60(0x3fa644c1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3500(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x30));
  puVar1 = PTR_PTR_1126cbe10;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c255240(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar4);
  func_0x00010bfcab20(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  return;
}



/* Entry: 1065ca3c8; end: 1065ca4d7;  */

void FUN_1065ca3c8(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1065ca4d8;
  puStack_70 = &UNK_1108a0660;
  uStack_68 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ca4d8; end: 1065ca5a7;  */

void FUN_1065ca4d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x50) == '\x01') && (*(long *)(param_1 + 0x20) != 0)) {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11b1e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11b1e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be62140(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001065ca5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  return;
}



/* Entry: 1065ca5a8; end: 1065ca7ab;  */

void FUN_1065ca5a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar5 = &puStack_90;
  puVar1 = PTR_PTR_1126cbe18;
  func_0x00010c0cc460(PTR_PTR_1126cbe18,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5858;
  _objc_alloc(PTR_PTR_1126b5858);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0ea80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0xfffffffff0575f4d;
  func_0x00010b774c60(0xfffffffff0575f4d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3500(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x30));
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1065ca7ac;
  puStack_78 = &UNK_11092e608;
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar3;
  _objc_retain(uVar4);
  uStack_58 = uVar4;
  _objc_retainBlock(&puStack_90);
  puVar6 = PTR_PTR_1126cbe20;
  _objc_alloc();
  func_0x00010c02baa0();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x80);
  *(undefined **)(*(long *)(param_1 + 0x30) + 0x80) = puVar6;
  _objc_release(uVar3);
  func_0x00010bfc2b40(PTR_PTR_1126cbe10);
  _objc_release(ppuVar5);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1065ca7ac; end: 1065ca9bf;  */

void FUN_1065ca7ac(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x1065ca8f0;
  puStack_80 = &UNK_1108a0660;
  uStack_78 = param_3;
  uStack_48 = param_2;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar3;
  _objc_retain(uVar4);
  uStack_58 = uVar4;
  func_0x00010007380c(uVar2,&puStack_98);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ca9c0; end: 1065cabb7; -[SCScanCardSnapKitDeepLinkActionHandler sendToChatWithDeepLinkURL:attachmentURLString:attachmentShareMetadata:] */

void FUN_1065ca9c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar8 = param_4;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  _objc_release(uVar7);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar8 = param_5;
    func_0x00010bf05300();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126b5860;
    _objc_alloc(PTR_PTR_1126b5860);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057cc0(puVar2,param_2,puVar3,*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x68));
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b1a18;
    _objc_alloc(PTR_PTR_1126b1a18);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010c0f2220();
    func_0x00010c048720(puVar3,param_2,0x11,0xffffffffffffffff,lVar4);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b1a20;
    _objc_alloc(PTR_PTR_1126b1a20);
    func_0x00010c01d640();
    puVar6 = PTR_PTR_1126b1a28;
    _objc_alloc();
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038ea0(puVar6,param_2,lVar1);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar6;
    _objc_release(uVar8);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126b1a30;
    _objc_alloc(PTR_PTR_1126b1a30);
    func_0x00010bff5040();
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x18),param_2,puVar6,param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065cabb8; end: 1065cadb3; -[SCScanCardSnapKitDeepLinkActionHandler _sendMessageToRecipients:groups:additionalText:] */

void FUN_1065cabb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x000107e327dc(param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108605534();
  _objc_release(param_4);
  func_0x00010bf529e0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c246920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  _objc_retain(param_5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 1065cadb4; end: 1065cb04b; -[SCScanCardSnapKitDeepLinkActionHandler _sendMessageToSortedRecipients:additionalText:destinationInfo:] */

void FUN_1065cadb4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bdeaa60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1a40;
    _objc_opt_new(PTR_PTR_1126b1a40);
    func_0x00010c2b9b80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa660(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ac2e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ab400(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afd40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf37880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    func_0x00010c15d840(uVar4);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065cb04c; end: 1065cb08f;  */

void FUN_1065cb04c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065cb090; end: 1065cb117; -[SCScanCardSnapKitDeepLinkActionHandler _handleTextSendResult:conversationIds:] */

void FUN_1065cb090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1065cb118;
  puStack_38 = &UNK_110848c48;
  uStack_30 = param_4;
  uStack_28 = param_3;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_4);
  return;
}



/* Entry: 1065cb118; end: 1065cb1ef;  */

void FUN_1065cb118(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126afca8;
  if (*(long *)(param_1 + 0x28) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbbb98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc9278;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9278,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c440(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1065cb1f0; end: 1065cb21b; -[SCScanCardSnapKitDeepLinkActionHandler legacySendToScopeDidDismiss:selectedItems:] */

void FUN_1065cb1f0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf94c20(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065cb21c; end: 1065cb307; -[SCScanCardSnapKitDeepLinkActionHandler legacySendToScopeWillSend:sendToSelection:] */

void FUN_1065cb21c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065cb308; end: 1065cb33b;  */

void FUN_1065cb308(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065cb33c; end: 1065cb413; -[SCScanCardSnapKitDeepLinkActionHandler _didDetachUIWithSendToSelection:] */

void FUN_1065cb33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf94c40(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065cb414; end: 1065cb477;  */

void FUN_1065cb414(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  func_0x00010bdfd760(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar1);
  lVar2 = lVar1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf84b00();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065cb478; end: 1065cb4b3; -[SCScanCardSnapKitDeepLinkActionHandler _didEndFeatureWithSendToSelection:] */

void FUN_1065cb478(long param_1)

{
  func_0x00010be9f860();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065cb4b4; end: 1065cb58b; -[SCScanCardSnapKitDeepLinkActionHandler _sendMessageWithSendToSelection:] */

void FUN_1065cb4b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    lVar4 = lVar1;
    func_0x00010bf529e0();
    lVar5 = lVar2;
    func_0x00010bf529e0();
    if (lVar4 + lVar5 != 0) {
      func_0x00010be9f800(param_1,param_2,lVar1,lVar2,lVar3);
      goto LAB_1065cb564;
    }
  }
  func_0x00010be02cc0(param_1);
LAB_1065cb564:
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065cb58c; end: 1065cb5c3; -[SCScanCardSnapKitDeepLinkActionHandler _dismissMatchaSendTo] */

void FUN_1065cb58c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf94c20(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x30),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065cb5c4; end: 1065cb5cb; -[SCScanCardSnapKitDeepLinkActionHandler businessProfilesPresenterScopeWillDismiss:] */

void FUN_1065cb5c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 1065cb5cc; end: 1065cb63b; -[SCScanCardSnapKitDeepLinkActionHandler _createLoggingMetadataForScanSource:] */

void FUN_1065cb5cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b5870;
  _objc_alloc_init(PTR_PTR_1126b5870);
  func_0x00010c2049a0();
  uVar1 = 3;
  if (param_3 != 8) {
    uVar1 = 4;
  }
  func_0x00010c2049e0(puVar2,param_2,uVar1);
  func_0x00010c204c00(puVar2,param_2,1);
  func_0x00010c204980(puVar2,param_2,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065cb63c; end: 1065cb67f; -[SCScanCardSnapKitDeepLinkActionHandler _createAnalyticsCreativeKitForScanSource:] */

void FUN_1065cb63c(void)

{
  _objc_alloc(PTR_PTR_1126b5878);
  func_0x00010bff3420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065cb680; end: 1065cb8e7; -[SCScanCardSnapKitDeepLinkActionHandler _navigateToCameraWithSticker:attributionName:deepLinkURL:scanSource:publisherId:] */

void FUN_1065cb680(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdefb80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204b60();
  lVar2 = param_3;
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1b58c0(lVar1);
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x000108eca2ac(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b5868;
  _objc_alloc();
  func_0x00010bff4d40();
  _objc_release(param_7);
  _objc_release(param_4);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d100();
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x80,0);
  _objc_storeStrong(param_3 + 0x78,0);
  _objc_storeStrong(param_3 + 0x70,0);
  _objc_storeStrong(param_3 + 0x68,0);
  _objc_storeStrong(param_3 + 0x60,0);
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_destroyWeak(param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_3 + 8);
  return;
}



/* Entry: 1065cb8e8; end: 1065cb9ab; -[SCScanCardSnapKitDeepLinkActionHandler .cxx_destruct] */

void FUN_1065cb8e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1065cb9ac; end: 1065cba47; -[SCSnapKitCreativeKitWebAutogeneratedStickerView initWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1065cb9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1f38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274b4a0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c229680(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065cba48; end: 1065cbfab; -[SCSnapKitCreativeKitWebAutogeneratedStickerView setupStickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065cba48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined8 uVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  long lStack_420;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  long lStack_300;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c219b60(param_1,param_2,0);
  lVar2 = param_1;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = (long)_DAT_11274b4a4;
  uVar43 = *(undefined8 *)(param_1 + lVar46);
  *(long *)(param_1 + lVar46) = lVar2;
  _objc_release(uVar43);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar46));
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar45 = (long)_DAT_11274b4a8;
  uVar43 = *(undefined8 *)(param_1 + lVar45);
  *(undefined **)(param_1 + lVar45) = puVar1;
  _objc_release(uVar43);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar45),param_2,0);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar45),param_2,1);
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar45),param_2,2);
  func_0x00010c207380(0x402a000000000000,*(undefined8 *)(param_1 + lVar45));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar46),param_2,*(undefined8 *)(param_1 + lVar45));
  lVar44 = (long)_DAT_11274b4a0;
  lVar2 = *(long *)(param_1 + lVar44);
  func_0x00010c26dde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010befbf40(param_1);
  }
  lVar2 = *(long *)(param_1 + lVar44);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + lVar44);
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      func_0x00010befc060(param_1);
    }
  }
  lVar2 = *(long *)(param_1 + lVar44);
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + lVar44);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar44 != 0) {
      func_0x00010bef6f60(param_1);
    }
  }
  puStack_118 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar43 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_c0 = uVar43;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar2;
  func_0x00010bf493a0(uVar43,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar46);
  uStack_d0 = uVar43;
  uStack_b8 = uVar43;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_d8 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar2;
  func_0x00010bf493a0(uVar5,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_1 + lVar46);
  uStack_e8 = uVar5;
  uStack_b0 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_f0 = uVar43;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar2;
  func_0x00010bf493a0(uVar43,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar46);
  uStack_100 = uVar43;
  uStack_a8 = uVar43;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_108 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar2;
  func_0x00010bf493a0(uVar5,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_1 + lVar46);
  uStack_120 = uVar5;
  uStack_a0 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = uVar43;
  func_0x00010bf49420(0x4074400000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar45);
  uStack_130 = uVar43;
  uStack_98 = uVar43;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_1 + lVar46);
  uStack_138 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_140 = uVar43;
  func_0x00010bf493c0(0x4032000000000000,uVar5,param_2,uVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar45);
  uStack_148 = uVar5;
  uStack_90 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar46);
  uStack_150 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4032000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar45);
  uStack_88 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar8;
  func_0x00010bf493c0(0xc032000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar45);
  uStack_80 = uVar43;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bf493c0(0xc032000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_118,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar43);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uStack_150);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(uStack_130);
  _objc_release(uStack_128);
  _objc_release(uStack_120);
  _objc_release(lStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(lStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(lStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(lStack_c8);
  _objc_release(uStack_c0);
  lVar2 = param_1;
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1065cbfac;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_1b0 = puVar1;
  uStack_1a8 = uVar5;
  uStack_1a0 = uVar11;
  uStack_198 = uVar10;
  uStack_190 = uVar43;
  uStack_188 = uVar9;
  uStack_180 = uVar8;
  uStack_178 = uVar6;
  uStack_170 = uVar7;
  lStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar1 = puVar12;
  func_0x00010c08c0e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar1);
  puVar1 = puVar12;
  func_0x00010c08c0e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c098f40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar12,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  func_0x00010c219b60();
  uVar43 = *(undefined8 *)(lVar2 + _DAT_11274b4a0);
  func_0x00010c26dde0(uVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1,param_2,uVar43);
  _objc_release(uVar43);
  func_0x00010befbb60(puVar12,param_2,puVar1);
  lVar44 = (long)_DAT_11274b4a8;
  func_0x00010bef6d60(*(undefined8 *)(lVar2 + lVar44),param_2,puVar12);
  puStack_250 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  puStack_208 = puVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = puVar14;
  func_0x00010bf493a0(puVar13,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  puStack_218 = puVar13;
  puStack_200 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  puStack_220 = puVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_228 = puVar13;
  func_0x00010bf493a0(puVar14,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  puStack_230 = puVar14;
  puStack_1f8 = puVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  puStack_238 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_240 = puVar14;
  func_0x00010bf493a0(puVar13,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  puStack_248 = puVar13;
  puStack_1f0 = puVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  puStack_258 = puVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_260 = puVar13;
  func_0x00010bf493a0(puVar14,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  puStack_268 = puVar14;
  puStack_1e8 = puVar14;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_270 = puVar13;
  func_0x00010bf49420(0x4072000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  puStack_278 = puVar13;
  puStack_1e0 = puVar13;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  puStack_280 = puVar14;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_288 = puVar13;
  func_0x00010bf493e0(0x3fe5555555555555,puVar14,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  puStack_1d8 = puVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(lVar2 + lVar44);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493a0(puVar13,param_2,uVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  puStack_1d0 = puVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar44);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf493a0(puVar16,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1c8 = puVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_200,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_250,param_2,puVar18);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(uVar5);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar43);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puStack_288);
  _objc_release(puStack_280);
  _objc_release(puStack_278);
  _objc_release(puStack_270);
  _objc_release(puStack_268);
  _objc_release(puStack_260);
  _objc_release(puStack_258);
  _objc_release(puStack_248);
  _objc_release(puStack_240);
  _objc_release(puStack_238);
  _objc_release(puStack_230);
  _objc_release(puStack_228);
  _objc_release(puStack_220);
  _objc_release(puStack_218);
  _objc_release(puStack_210);
  _objc_release(puStack_208);
  _objc_release(puVar1);
  puVar19 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_298 = FUN_1065cc454;
  lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = PTR__OBJC_CLASS___UIView_1126aec20;
  uStack_2f0 = uVar5;
  puStack_2e8 = puVar16;
  uStack_2e0 = uVar43;
  puStack_2d8 = puVar13;
  puStack_2d0 = puVar14;
  puStack_2c8 = puVar18;
  puStack_2c0 = puVar15;
  puStack_2b8 = puVar17;
  puStack_2b0 = puVar1;
  puStack_2a8 = puVar12;
  ppuStack_2a0 = &puStack_160;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar12 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  uVar43 = *(undefined8 *)(puVar19 + _DAT_11274b4a0);
  func_0x00010c2711a0(uVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar12,param_2,uVar43);
  _objc_release(uVar43);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar12,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(puVar12,param_2,4);
  func_0x00010c1cfce0(puVar12,param_2,3);
  func_0x00010c23d620(puVar12);
  func_0x00010befbb60(puVar20,param_2,puVar12);
  lVar2 = (long)_DAT_11274b4a8;
  func_0x00010bef6d60(*(undefined8 *)(puVar19 + lVar2),param_2,puVar20);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = puVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493a0(puVar13,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  puStack_330 = puVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493a0(puVar16,param_2,puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar12;
  puStack_328 = puVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010bf493a0(puVar21,param_2,puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar12;
  puStack_320 = puVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar24;
  func_0x00010bf493a0(puVar24,param_2,puVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar20;
  puStack_318 = puVar26;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(puVar19 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar27;
  func_0x00010bf493a0(puVar27,param_2,uVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar20;
  puStack_310 = puVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar19 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar29;
  func_0x00010bf493a0(puVar29,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_308 = puVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_330,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar30);
  _objc_release(puVar30);
  _objc_release(puVar19);
  _objc_release(uVar5);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(uVar43);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_300) {
    return;
  }
  ___stack_chk_fail();
  lStack_420 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar7,uVar6,uVar8);
  func_0x00010c219b60();
  puVar13 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar1 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar1);
  puVar1 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
  _objc_release(puVar1);
  lVar2 = (long)_DAT_11274b4a0;
  uVar43 = *(undefined8 *)(puVar20 + lVar2);
  func_0x00010bfa0e80(uVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar13,param_2,uVar43);
  _objc_release(uVar43);
  puVar14 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar7,uVar6,uVar8);
  func_0x00010c219b60();
  uVar43 = *(undefined8 *)(puVar20 + lVar2);
  func_0x00010bf0e960(uVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar14,param_2,uVar43);
  _objc_release(uVar43);
  func_0x00010c21ad00(puVar14,param_2,0x15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar14,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar14,param_2,0);
  func_0x00010c23d620(puVar14);
  func_0x00010befbb60(puVar12,param_2,puVar13);
  func_0x00010befbb60(puVar12,param_2,puVar14);
  lVar2 = (long)_DAT_11274b4a8;
  func_0x00010bef6d60(*(undefined8 *)(puVar20 + lVar2),param_2,puVar12);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar15 = puVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493a0(puVar15,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar13;
  puStack_470 = puVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar18;
  func_0x00010bf493a0(puVar18,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar13;
  puStack_468 = puVar21;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar13;
  puStack_460 = puVar23;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar24;
  func_0x00010bf493a0(puVar24,param_2,puVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar13;
  puStack_458 = puVar26;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010bf493a0(puVar27,param_2,puVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar14;
  puStack_450 = puVar29;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar30;
  func_0x00010bf493a0(puVar30,param_2,puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar14;
  puStack_448 = puVar32;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar33;
  func_0x00010bf493c0(0x4020000000000000,puVar33,param_2,puVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar14;
  puStack_440 = puVar35;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar36;
  func_0x00010bf493a0(puVar36,param_2,puVar37);
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar12;
  puStack_438 = puVar38;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(puVar20 + lVar2);
  func_0x00010c08de00(uVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar39;
  func_0x00010bf493a0(puVar39,param_2,uVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar41 = puVar12;
  puStack_430 = puVar40;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar20 + lVar2);
  func_0x00010c2793a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar41;
  func_0x00010bf493a0(puVar41,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_428 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_470,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar42);
  _objc_release(puVar42);
  _objc_release(puVar20);
  _objc_release(uVar5);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(uVar43);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_420) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  puVar12 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4033000000000000);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065cbfac; end: 1065cc453; -[SCSnapKitCreativeKitWebAutogeneratedStickerView addThumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065cbfac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
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
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c098f40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  func_0x00010c219b60();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274b4a0);
  func_0x00010c26dde0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010befbb60(puVar1,param_2,puVar2);
  lVar35 = (long)_DAT_11274b4a8;
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar35),param_2,puVar1);
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_b8 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar5;
  func_0x00010bf493a0(puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_c8 = puVar4;
  puStack_b0 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_d0 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar4;
  func_0x00010bf493a0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_e0 = puVar5;
  puStack_a8 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_e8 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar5;
  func_0x00010bf493a0(puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_f8 = puVar4;
  puStack_a0 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_108 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar4;
  func_0x00010bf493a0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_118 = puVar5;
  puStack_98 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar4;
  func_0x00010bf49420(0x4072000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_128 = puVar4;
  puStack_90 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_130 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar4;
  func_0x00010bf493e0(0x3fe5555555555555,puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_88 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_80 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_100,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  _objc_release(puStack_118);
  _objc_release(puStack_110);
  _objc_release(puStack_108);
  _objc_release(puStack_f8);
  _objc_release(puStack_f0);
  _objc_release(puStack_e8);
  _objc_release(puStack_e0);
  _objc_release(puStack_d8);
  _objc_release(puStack_d0);
  _objc_release(puStack_c8);
  _objc_release(puStack_c0);
  _objc_release(puStack_b8);
  _objc_release(puVar2);
  puVar11 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1065cc454;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___UIView_1126aec20;
  uStack_1a0 = uVar8;
  puStack_198 = puVar7;
  uStack_190 = uVar3;
  puStack_188 = puVar4;
  puStack_180 = puVar5;
  puStack_178 = puVar10;
  puStack_170 = puVar6;
  puStack_168 = puVar9;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  uVar3 = *(undefined8 *)(puVar11 + _DAT_11274b4a0);
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(puVar2,param_2,4);
  func_0x00010c1cfce0(puVar2,param_2,3);
  func_0x00010c23d620(puVar2);
  func_0x00010befbb60(puVar12,param_2,puVar2);
  lVar35 = (long)_DAT_11274b4a8;
  func_0x00010bef6d60(*(undefined8 *)(puVar11 + lVar35),param_2,puVar12);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  puStack_1e0 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  puStack_1d8 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493a0(puVar13,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  puStack_1d0 = puVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493a0(puVar16,param_2,puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar12;
  puStack_1c8 = puVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar11 + lVar35);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf493a0(puVar19,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar12;
  puStack_1c0 = puVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar11 + lVar35);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar21;
  func_0x00010bf493a0(puVar21,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1b8 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1e0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar11);
  _objc_release(uVar8);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar3);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar36 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar37 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar38 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar36,uVar37,uVar38);
  func_0x00010c219b60();
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar1 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
  _objc_release(puVar1);
  lVar35 = (long)_DAT_11274b4a0;
  uVar3 = *(undefined8 *)(puVar12 + lVar35);
  func_0x00010bfa0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar4,param_2,uVar3);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar36,uVar37,uVar38);
  func_0x00010c219b60();
  uVar3 = *(undefined8 *)(puVar12 + lVar35);
  func_0x00010bf0e960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar5,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c21ad00(puVar5,param_2,0x15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar5,param_2,0);
  func_0x00010c23d620(puVar5);
  func_0x00010befbb60(puVar2,param_2,puVar4);
  func_0x00010befbb60(puVar2,param_2,puVar5);
  lVar35 = (long)_DAT_11274b4a8;
  func_0x00010bef6d60(*(undefined8 *)(puVar12 + lVar35),param_2,puVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  puStack_320 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  func_0x00010bf493a0(puVar10,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  puStack_318 = puVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  puStack_310 = puVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493a0(puVar16,param_2,puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar4;
  puStack_308 = puVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bf493a0(puVar19,param_2,puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar5;
  puStack_300 = puVar21;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010bf493a0(puVar22,param_2,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar5;
  puStack_2f8 = puVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010bf493c0(0x4020000000000000,puVar25,param_2,puVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar5;
  puStack_2f0 = puVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010bf493a0(puVar28,param_2,puVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar2;
  puStack_2e8 = puVar30;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar12 + lVar35);
  func_0x00010c08de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar31;
  func_0x00010bf493a0(puVar31,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar2;
  puStack_2e0 = puVar32;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar12 + lVar35);
  func_0x00010c2793a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar33;
  func_0x00010bf493a0(puVar33,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2d8 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_320,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar34);
  _objc_release(puVar34);
  _objc_release(puVar12);
  _objc_release(uVar8);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(uVar3);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4033000000000000);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065cc454; end: 1065cc82f; -[SCSnapKitCreativeKitWebAutogeneratedStickerView addTitleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065cc454(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274b4a0);
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c21ad00(puVar2,param_2,4);
  func_0x00010c1cfce0(puVar2,param_2,3);
  func_0x00010c23d620(puVar2);
  func_0x00010befbb60(puVar1,param_2,puVar2);
  lVar35 = (long)_DAT_11274b4a8;
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar35),param_2,puVar1);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  puStack_a0 = puVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  puStack_98 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0(puVar11,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  puStack_90 = puVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493a0(puVar14,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar1;
  puStack_88 = puVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf493a0(puVar17,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  puStack_80 = puVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bf493a0(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4,param_2,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(uVar3);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar20 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar36 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar37 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar38 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar20,uVar36,uVar37,uVar38);
  func_0x00010c219b60();
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar4 = puVar5;
  func_0x00010c08c0e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c08c0e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
  _objc_release(puVar4);
  lVar35 = (long)_DAT_11274b4a0;
  uVar3 = *(undefined8 *)(puVar1 + lVar35);
  func_0x00010bfa0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar5,param_2,uVar3);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar20,uVar36,uVar37,uVar38);
  func_0x00010c219b60();
  uVar3 = *(undefined8 *)(puVar1 + lVar35);
  func_0x00010bf0e960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar6,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c21ad00(puVar6,param_2,0x15);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar6,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1cfce0(puVar6,param_2,0);
  func_0x00010c23d620(puVar6);
  func_0x00010befbb60(puVar2,param_2,puVar5);
  func_0x00010befbb60(puVar2,param_2,puVar6);
  lVar35 = (long)_DAT_11274b4a8;
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar35),param_2,puVar2);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  puStack_1e0 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf493a0(puVar10,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  puStack_1d8 = puVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar5;
  puStack_1d0 = puVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493a0(puVar15,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar5;
  puStack_1c8 = puVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar18;
  func_0x00010bf493a0(puVar18,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar6;
  puStack_1c0 = puVar21;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010bf493a0(puVar22,param_2,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar6;
  puStack_1b8 = puVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010bf493c0(0x4020000000000000,puVar25,param_2,puVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar6;
  puStack_1b0 = puVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010bf493a0(puVar28,param_2,puVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar2;
  puStack_1a8 = puVar30;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar1 + lVar35);
  func_0x00010c08de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar31;
  func_0x00010bf493a0(puVar31,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar2;
  puStack_1a0 = puVar32;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar1 + lVar35);
  func_0x00010c2793a0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar33;
  func_0x00010bf493a0(puVar33,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_198 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1e0,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4,param_2,puVar34);
  _objc_release(puVar34);
  _objc_release(puVar1);
  _objc_release(uVar20);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(uVar3);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4033000000000000);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1065cc830; end: 1065cce47; -[SCSnapKitCreativeKitWebAutogeneratedStickerView addAttributionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065cc830(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar35 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar36 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar37 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar38 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar35,uVar36,uVar37,uVar38);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
  _objc_release(puVar3);
  lVar34 = (long)_DAT_11274b4a0;
  uVar4 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bfa0e80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar2,param_2,uVar4);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar35,uVar36,uVar37,uVar38);
  func_0x00010c219b60();
  uVar4 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf0e960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar5,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010c21ad00(puVar5,param_2,0x15);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1cfce0(puVar5,param_2,0);
  func_0x00010c23d620(puVar5);
  func_0x00010befbb60(puVar1,param_2,puVar2);
  func_0x00010befbb60(puVar1,param_2,puVar5);
  lVar34 = (long)_DAT_11274b4a8;
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar34),param_2,puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  puStack_e0 = puVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  puStack_d8 = puVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  puStack_d0 = puVar13;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493a0(puVar14,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar2;
  puStack_c8 = puVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf493a0(puVar17,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar5;
  puStack_c0 = puVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010bf493a0(puVar20,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar5;
  puStack_b8 = puVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010bf493c0(0x4020000000000000,puVar23,param_2,puVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar5;
  puStack_b0 = puVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar26;
  func_0x00010bf493a0(puVar26,param_2,puVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar1;
  puStack_a8 = puVar28;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  func_0x00010bf493a0(puVar29,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar1;
  puStack_a0 = puVar30;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c2793a0(uVar35);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar31;
  func_0x00010bf493a0(puVar31,param_2,uVar35);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar32;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3,param_2,puVar33);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(uVar35);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(uVar4);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4033000000000000);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065cce48; end: 1065ccee3; -[SCSnapKitCreativeKitWebAutogeneratedStickerView cardView] */

void FUN_1065cce48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4033000000000000);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065ccee4; end: 1065ccf33; -[SCSnapKitCreativeKitWebAutogeneratedStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065ccee4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b4a8,0);
  _objc_storeStrong(param_1 + _DAT_11274b4a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b4a0,0);
  return;
}



/* Entry: 1065ccf34; end: 1065cd0c3; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel initWithMetadata:imageSourceProvider:attachmentURLString:] */

undefined1 *
FUN_1065ccf34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1f40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0f1dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_3;
    func_0x00010bf0ea80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_3;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aebf0;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065cd0c4; end: 1065cd197; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel generateStickerImageWithCompletion:] */

void FUN_1065cd0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfa7980(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065cd198; end: 1065cd303;  */

void FUN_1065cd198(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(long *)(lVar1 + 0x38) = param_2;
    _objc_release(uVar2);
  }
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    *(long *)(lVar1 + 0x48) = param_3;
    _objc_release(uVar2);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1065cd288;
  puStack_48 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lStack_40 = lVar1;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1065cd304; end: 1065cd3d7; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel fetchImagesWithCompletion:] */

void FUN_1065cd304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfaad60(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065cd3d8; end: 1065cd48b;  */

void FUN_1065cd3d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010bfa6a60(lVar1);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1065cd48c; end: 1065cd49f;  */

void FUN_1065cd48c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001065cd49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 1065cd4a0; end: 1065cd5f7; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel fetchThumbnailImageWithCompletion:] */

void FUN_1065cd4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08a8;
  _objc_alloc(PTR_PTR_1126b08a8);
  puVar2 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003ac0(puVar1,param_2,puVar2,PTR____NSArray0__struct_11034ab48,0x5a0);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  func_0x00010bf55f20(uVar4,param_2,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1065cd5f8;
  puStack_50 = &UNK_11092e698;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bfa78e0(uVar3,param_2,&puStack_68,uVar4,PTR___dispatch_main_q_11034be20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1065cd5f8; end: 1065cd607;  */

void FUN_1065cd5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001065cd604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 1065cd608; end: 1065cd75f; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel fetchFaviconImageWithCompletion:] */

void FUN_1065cd608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08a8;
  _objc_alloc(PTR_PTR_1126b08a8);
  puVar2 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003ac0(puVar1,param_2,puVar2,PTR____NSArray0__struct_11034ab48,0x5a0);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  func_0x00010bf55f20(uVar4,param_2,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1065cd760;
  puStack_50 = &UNK_11092e698;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bfa78e0(uVar3,param_2,&puStack_68,uVar4,PTR___dispatch_main_q_11034be20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1065cd760; end: 1065cd76f;  */

void FUN_1065cd760(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001065cd76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 1065cd770; end: 1065cd83b; +[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel imageWithView:] */

void FUN_1065cd770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010bf20c00(param_7);
  func_0x00010c0469e0(param_3,param_4,puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1065cd83c;
  puStack_40 = &UNK_11086bc40;
  uStack_38 = param_7;
  _objc_retain(param_7);
  puVar2 = puVar1;
  func_0x00010bfe91c0(puVar1,param_6,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065cd83c; end: 1065cd867;  */

void FUN_1065cd83c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf20c00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,1);
  return;
}



/* Entry: 1065cd868; end: 1065cd86f; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel thumbnailImage] */

undefined8 FUN_1065cd868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1065cd870; end: 1065cd877; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel title] */

undefined8 FUN_1065cd870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1065cd878; end: 1065cd87f; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel faviconImage] */

undefined8 FUN_1065cd878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1065cd880; end: 1065cd887; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel attribution] */

undefined8 FUN_1065cd880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1065cd888; end: 1065cd88f; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel attachmentURLString] */

undefined8 FUN_1065cd888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1065cd890; end: 1065cd92b; -[SCSnapKitCreativeKitWebAutogeneratedStickerViewModel .cxx_destruct] */

void FUN_1065cd890(long param_1)

{
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



/* Entry: 1065cd92c; end: 1065cda7f; -[SCSnapKitCreativeKitWebDataLoader initWithSnapTokenProvider:safeBrowsingAPI:snapProProfilesProvider:httpMetadataService:httpRequestModifier:imageSourceProvider:] */

undefined1 *
FUN_1065cd92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f1f48;
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



/* Entry: 1065cda80; end: 1065cde8f; -[SCSnapKitCreativeKitWebDataLoader loadDataWithAttachmentURLString:completionBlock:] */

void FUN_1065cda80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined1 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_1065cde90;
  uStack_a8 = 0x1065cdea0;
  uStack_a0 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_1065cde90;
  uStack_d8 = 0x1065cdea0;
  uStack_d0 = 0;
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 999;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_1065cde90;
  uStack_148 = 0x1065cdea0;
  uStack_140 = 0;
  uStack_198 = 0;
  uStack_188 = 0x3032000000;
  pcStack_180 = FUN_1065cde90;
  uStack_178 = 0x1065cdea0;
  uStack_170 = 0;
  uStack_1c8 = 0;
  uStack_1b8 = 0x3032000000;
  pcStack_1b0 = FUN_1065cde90;
  uStack_1a8 = 0x1065cdea0;
  uStack_1a0 = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 0x3032000000;
  pcStack_1e0 = FUN_1065cde90;
  uStack_1d8 = 0x1065cdea0;
  uStack_1d0 = 0;
  puVar2 = auStack_200;
  puStack_1f0 = &uStack_1f8;
  puStack_1c0 = &uStack_1c8;
  puStack_190 = &uStack_198;
  puStack_f0 = &uStack_f8;
  puStack_c0 = &uStack_c8;
  _objc_initWeak(puVar2,param_1);
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_1065cdea8;
  puStack_248 = &UNK_11092e748;
  _objc_copyWeak(auStack_208,auStack_200);
  puStack_238 = &uStack_98;
  puStack_230 = &uStack_c8;
  puStack_228 = &uStack_f8;
  puStack_220 = &uStack_198;
  puStack_218 = &uStack_1c8;
  puStack_210 = &uStack_1f8;
  _objc_retain(puVar2);
  puStack_240 = puVar2;
  func_0x00010be13e20(param_1);
  _dispatch_group_enter(puVar2);
  puStack_2a8 = puVar1;
  uStack_2a0 = 0xc2000000;
  pcStack_298 = FUN_1065ce314;
  puStack_290 = &UNK_11092e778;
  _objc_copyWeak(auStack_268,auStack_200);
  puStack_280 = &uStack_118;
  puStack_278 = &uStack_138;
  puStack_270 = &uStack_168;
  _objc_retain(puVar2);
  puStack_288 = puVar2;
  func_0x00010bdde100(param_1);
  puStack_318 = puVar1;
  uStack_310 = 0xc2000000;
  pcStack_308 = FUN_1065ce3ac;
  puStack_300 = &UNK_11092e7a8;
  puStack_2f0 = &uStack_98;
  puStack_2e8 = &uStack_118;
  puStack_2e0 = &uStack_c8;
  puStack_2d8 = &uStack_138;
  puStack_2d0 = &uStack_f8;
  puStack_2c8 = &uStack_168;
  puStack_2c0 = &uStack_198;
  puStack_2b8 = &uStack_1c8;
  puStack_2b0 = &uStack_1f8;
  uStack_2f8 = param_4;
  _objc_retain(param_4);
  func_0x000100bc0718(puVar2,PTR___dispatch_main_q_11034be20,&puStack_318);
  _objc_release(uStack_2f8);
  _objc_release(puStack_288);
  _objc_destroyWeak(auStack_268);
  _objc_release(puStack_240);
  _objc_destroyWeak(auStack_208);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_200);
  __Block_object_dispose(&uStack_1f8,8);
  _objc_release(uStack_1d0);
  __Block_object_dispose(&uStack_1c8,8);
  _objc_release(uStack_1a0);
  __Block_object_dispose(&uStack_198,8);
  _objc_release(uStack_170);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_3);
  return;
}



/* Entry: 1065cde90; end: 1065cdea7;  */

void FUN_1065cde90(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065cdea8; end: 1065ce1c7;  */

void FUN_1065cdea8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)param_2;
    lVar14 = param_3;
    func_0x00010bf51e00();
    lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar10 = *(undefined8 *)(lVar12 + 0x28);
    *(long *)(lVar12 + 0x28) = lVar14;
    _objc_release(uVar10);
    lVar14 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_4);
    uVar10 = *(undefined8 *)(lVar14 + 0x28);
    *(undefined8 *)(lVar14 + 0x28) = param_4;
    _objc_release(uVar10);
    lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c11b1e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar14 != 0) {
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      func_0x00010c11b1e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80();
      _objc_release(uVar10);
      _objc_release(lVar14);
      if ((int)puVar2 != 0) {
        puVar2 = PTR_PTR_1126ae810;
        _objc_opt_new();
        uVar3 = *(undefined8 *)(lVar1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
        func_0x00010c11b1e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar3;
        func_0x00010c1176c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
        func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c0e0e60();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar13);
        _objc_retain(puVar2);
        uVar7 = uVar11;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(puVar6);
        _objc_release(uVar10);
        _objc_release(puVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        func_0x00010bef7e00(puVar2);
        _objc_release(uVar7);
        _objc_release(uVar13);
        _objc_release(puVar2);
        _objc_release(puVar2);
        goto LAB_1065ce174;
      }
    }
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bf0ea80();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar11 = *(undefined8 *)(lVar14 + 0x28);
    *(undefined8 *)(lVar14 + 0x28) = uVar10;
    _objc_release(uVar11);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
LAB_1065ce174:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar8);
  func_0x00010bf86d80(uVar10);
  func_0x00010c0c0800(uVar8);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 1065ce1c8; end: 1065ce267;  */

void FUN_1065ce1c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf86d80(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065ce268; end: 1065ce30f;  */

void FUN_1065ce268(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c236bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ce310; end: 1065ce313;  */

void FUN_1065ce310(void)

{
  return;
}



/* Entry: 1065ce314; end: 1065ce3ab;  */

void FUN_1065ce314(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_3;
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_4;
    _objc_release(uVar2);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065ce3ac; end: 1065ce43f;  */

void FUN_1065ce3ac(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
      bVar3 = *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
    }
    else {
      bVar3 = 0;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001065ce43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,bVar3 & 1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18),lVar2,
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28));
    return;
  }
  return;
}



/* Entry: 1065ce440; end: 1065ce587;  */

void FUN_1065ce440(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  return;
}



/* Entry: 1065ce588; end: 1065ce737; -[SCSnapKitCreativeKitWebDataLoader _fetchShareMetadataWithAttachmentURLString:completionBlock:] */

void FUN_1065ce588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___dispatch_main_q_11034be20;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1065ce738;
  puStack_78 = &UNK_1108daaf0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_copyWeak(auStack_98,auStack_58);
  _objc_retain(param_4);
  func_0x00010bfa48e0(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ce738; end: 1065ce7f7;  */

void FUN_1065ce738(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be13e40(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ce7f8; end: 1065cebb3; -[SCSnapKitCreativeKitWebDataLoader _fetchShareMetadataWithAttachmentURLString:snapAccessToken:completionBlock:] */

void FUN_1065ce7f8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_4;
  _objc_retain();
  func_0x000108ecf05c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0560();
  _objc_release();
  func_0x000108ed0900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    func_0x00010c1d0560(puVar3);
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar1;
  func_0x00010c128220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2a9900(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c2b7240();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  uVar14 = uVar13;
  func_0x00010bf225e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c25f600(uVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(uVar14);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2907f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_useQueryParameters__112681c20,*(undefined8 *)(uVar1 + 0x20));
  return;
}



/* Entry: 1065cebb4; end: 1065cebbf;  */

void FUN_1065cebb4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2907f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_useQueryParameters__112681c20,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1065cebc0; end: 1065cecbb;  */

void FUN_1065cebc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long in_x4;
  long in_x5;
  
  _objc_retain(in_x4);
  if ((in_x4 == 0) || (in_x5 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,in_x5);
  }
  else {
    puVar1 = PTR_PTR_1126cbe30;
    _objc_alloc(PTR_PTR_1126cbe30);
    func_0x00010c008360();
    _objc_retain(0);
    puVar2 = PTR_PTR_1126cbe18;
    func_0x00010c0cc460();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),puVar2 != (undefined *)0x0,puVar3,0);
    _objc_release(0);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(in_x4);
  return;
}



/* Entry: 1065cecbc; end: 1065cee4f; -[SCSnapKitCreativeKitWebDataLoader _checkSafeBrowsingWithAttachmentURLString:completionBlock:] */

void FUN_1065cecbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1065cee50;
  puStack_70 = &UNK_11092e7d8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf386c0(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065cee50; end: 1065cef07;  */

void FUN_1065cee50(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065cef08; end: 1065cef1f; -[SCSnapKitCreativeKitWebDataLoader getStickerMetadata:appStickerStyle:completion:] */

void FUN_1065cef08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cbe10,PTR_s_getStickerMetadata_appStickerSty_1125d0470,param_3,param_4,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_5);
  return;
}



/* Entry: 1065cef20; end: 1065cef3f; -[SCSnapKitCreativeKitWebDataLoader getAutogeneratedStickerFromMetadata:attachmentURLString:appStickerStyle:completion:] */

void FUN_1065cef20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cbe10,PTR_s_getAutogeneratedStickerFromMetad_1125ce470,param_3,
             *(undefined8 *)(param_1 + 0x30),param_4,param_5,param_6);
  return;
}



/* Entry: 1065cef40; end: 1065cf20b; +[SCSnapKitCreativeKitWebDataLoader getStickerMetadata:appStickerStyle:httpMetadataService:httpRequestModifier:completion:] */

void FUN_1065cef40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b7220;
    func_0x00010c135080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2af9a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e55318;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2a9900(puVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2bcaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c2b7240();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar10 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf225e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    uVar10 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1065cf210;
    puStack_88 = &UNK_1108b0af8;
    _objc_retain(param_7);
    uStack_78 = param_7;
    _objc_retain(param_4);
    uStack_80 = param_4;
    func_0x00010c25f600(uVar10,param_2,uVar11,puVar9,PTR___dispatch_main_q_11034be20,&puStack_a0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uStack_80);
    _objc_release(uStack_78);
    _objc_release(uVar11);
    _objc_release(puVar9);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1065cf20c; end: 1065cf20f;  */

void FUN_1065cf20c(void)

{
  return;
}



/* Entry: 1065cf210; end: 1065cf31b;  */

void FUN_1065cf210(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 == 0) || (param_6 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  uVar1 = param_5;
  func_0x00010c105b00();
  if ((uVar1 < 8) && ((1L << (uVar1 & 0x3f) & 0xe1U) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    puVar2 = PTR_PTR_1126c4968;
    _objc_alloc(PTR_PTR_1126c4968);
    func_0x00010bff37a0();
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065cf31c; end: 1065cf56b; +[SCSnapKitCreativeKitWebDataLoader getAutogeneratedStickerFromMetadata:imageSourceProvider:attachmentURLString:appStickerStyle:completion:] */

void FUN_1065cf31c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (((param_3 != 0) && (param_5 != 0)) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126cbe20;
    _objc_alloc(PTR_PTR_1126cbe20);
    func_0x00010c02baa0();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1065cf44c;
    puStack_58 = &UNK_110853880;
    _objc_retain(param_6);
    uStack_50 = param_6;
    _objc_retain(param_7);
    uStack_48 = param_7;
    func_0x00010bfc0340(puVar2,param_2,&puStack_70);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065cf56c; end: 1065cf623; +[SCSnapKitCreativeKitWebDataLoader getAutogeneratedStickerFromStickerViewModel:appStickerStyle:completion:] */

void FUN_1065cf56c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1065cf624;
    puStack_48 = &UNK_110853880;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_5);
    uStack_38 = param_5;
    func_0x00010bfc0340(param_3,param_2,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1065cf624; end: 1065cf743;  */

void FUN_1065cf624(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c4968;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  _UIImagePNGRepresentation(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff37a0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1065cf744; end: 1065cf7a3; -[SCSnapKitCreativeKitWebDataLoader .cxx_destruct] */

void FUN_1065cf744(long param_1)

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



/* Entry: 1065cf7a4; end: 1065cf7e3; -[SCCreativeKitParsedRequest init] */

void FUN_1065cf7a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f1f50;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 1;
  }
  return;
}



/* Entry: 1065cf7e4; end: 1065cf7eb; -[SCCreativeKitParsedRequest previewContent] */

undefined8 FUN_1065cf7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1065cf7ec; end: 1065cf7f3; -[SCCreativeKitParsedRequest setPreviewContent:] */

void FUN_1065cf7ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1065cf7f4; end: 1065cf7fb; -[SCCreativeKitParsedRequest cameraViewState] */

undefined8 FUN_1065cf7f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1065cf7fc; end: 1065cf82b; -[SCCreativeKitParsedRequest setCameraViewState:] */

void FUN_1065cf7fc(long param_1,undefined8 param_2,undefined8 param_3)

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


