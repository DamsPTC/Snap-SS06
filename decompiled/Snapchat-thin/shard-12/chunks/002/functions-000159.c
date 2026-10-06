/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ed0518; end: 108ed08a3;  */

void FUN_108ed0518(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dca398;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dca398,
                      &PTR____CFConstantStringClassReference_110f00958,0);
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



/* Entry: 108ed08a4; end: 108ed08f3;  */

void FUN_108ed08a4(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f00d18;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f00d18,param_2,
                      &PTR____CFConstantStringClassReference_110f00d18);
  ppuVar1 = param_1;
  if ((int)ppuVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f00d18;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ed08f4; end: 108ed092f;  */

undefined ** FUN_108ed08f4(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108ed0930; end: 108ed09a3; -[SCPreviewScopedUserTaggingFriendsProviderServices initWithUserTaggingFriendsProviderServices:] */

undefined1 * FUN_108ed0930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff108;
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



/* Entry: 108ed09a4; end: 108ed09ab; -[SCPreviewScopedUserTaggingFriendsProviderServices userTaggingFriendsProviderServices] */

undefined8 FUN_108ed09a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ed09ac; end: 108ed09b7; -[SCPreviewScopedUserTaggingFriendsProviderServices .cxx_destruct] */

void FUN_108ed09ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ed09b8; end: 108ed0a2b; -[SCSnapEditorPluginScopedUserTaggingFriendsProviderServices initWithUserTaggingFriendsProviderServices:] */

undefined1 * FUN_108ed09b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff110;
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



/* Entry: 108ed0a2c; end: 108ed0a33; -[SCSnapEditorPluginScopedUserTaggingFriendsProviderServices userTaggingFriendsProviderServices] */

undefined8 FUN_108ed0a2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ed0a34; end: 108ed0a3f; -[SCSnapEditorPluginScopedUserTaggingFriendsProviderServices .cxx_destruct] */

void FUN_108ed0a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ed0a40; end: 108ed0ab3; -[SCUserTaggingFriendsProviderServices initWithFriendsProvider:] */

undefined1 * FUN_108ed0a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff118;
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



/* Entry: 108ed0ab4; end: 108ed0abb; -[SCUserTaggingFriendsProviderServices friendsProvider] */

undefined8 FUN_108ed0ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ed0abc; end: 108ed0ac7; -[SCUserTaggingFriendsProviderServices .cxx_destruct] */

void FUN_108ed0abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ed0ac8; end: 108ed0b7b; -[SCTopic initWithTopicId:displayName:rank:] */

undefined1 *
FUN_108ed0ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff120;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ed0b7c; end: 108ed0ca7; -[SCTopic initWithTopicProto:] */

undefined8 FUN_108ed0b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bff6b20();
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126d2b90;
    _objc_alloc();
    func_0x00010c008360();
    if (puVar2 == (undefined *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010c275280(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_109189508();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c255120(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c054400(param_1,param_2,puVar4,puVar3,0);
      _objc_retain();
      _objc_release(puVar3);
      _objc_release(puVar4);
      uVar5 = param_1;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 108ed0ca8; end: 108ed0ccb; -[SCTopic copyWithZone:] */

undefined8 FUN_108ed0ca8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ed0ccc; end: 108ed0d43; -[SCTopic hash] */

ulong FUN_108ed0ccc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010c275280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  uVar3 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfde980();
  func_0x00010c11f520(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return uVar4 ^ uVar2 ^ param_1;
}



/* Entry: 108ed0d44; end: 108ed0f2b; -[SCTopic isEqual:] */

bool FUN_108ed0d44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar2 = true;
    goto LAB_108ed0f08;
  }
  puVar3 = PTR_PTR_1126d2ab8;
  _objc_opt_class(PTR_PTR_1126d2ab8);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = param_1;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar4);
    _objc_retain(uVar5);
    if (uVar4 == uVar5) {
      _objc_release(uVar5);
      _objc_release(uVar4);
LAB_108ed0e30:
      uVar6 = param_1;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar6);
      _objc_retain(uVar7);
      if (uVar6 == uVar7) {
        _objc_release(uVar7);
        _objc_release(uVar6);
LAB_108ed0eb8:
        func_0x00010c11f520(param_1);
        uVar8 = param_3;
        func_0x00010c11f520(param_3);
        bVar2 = param_1 == uVar8;
      }
      else {
        if (uVar7 == 0) {
          _objc_release();
        }
        else {
          uVar8 = uVar6;
          func_0x00010c071ae0();
          _objc_release(uVar7);
          _objc_release(uVar6);
          if ((int)uVar8 != 0) goto LAB_108ed0eb8;
        }
        bVar2 = false;
      }
      _objc_release(uVar7);
LAB_108ed0ee8:
      _objc_release(uVar6);
    }
    else {
      if (uVar5 == 0) {
        bVar2 = false;
        uVar6 = uVar4;
        goto LAB_108ed0ee8;
      }
      uVar6 = uVar4;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar6 != 0) goto LAB_108ed0e30;
      bVar2 = false;
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
LAB_108ed0f08:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 108ed0f2c; end: 108ed1027; -[SCTopic toProtoBase64] */

void FUN_108ed0f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d2b90;
  _objc_opt_new(PTR_PTR_1126d2b90);
  uVar2 = param_1;
  func_0x00010c275280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_109189420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2177e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ba20(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf15d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ed1028; end: 108ed102f; -[SCTopic topicId] */

undefined8 FUN_108ed1028(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ed1030; end: 108ed1037; -[SCTopic displayName] */

undefined8 FUN_108ed1030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ed1038; end: 108ed103f; -[SCTopic rank] */

undefined8 FUN_108ed1038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ed1040; end: 108ed106f; -[SCTopic .cxx_destruct] */

void FUN_108ed1040(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ed1070; end: 108ed10d7; +[VendingTopicSticker descriptor] */

void FUN_108ed1070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ece0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca510,
                        &PTR____CFConstantStringClassReference_110f00d38,&PTR_DAT_11329c550,
                        &PTR_s_id_p_11329c768,6,0x30,0x1c);
    puRam000000011372ece0 = puVar1;
  }
  return;
}



/* Entry: 108ed10d8; end: 108ed113f; +[CreateTopicStickerRequest descriptor] */

void FUN_108ed10d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ece8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca560,
                        &PTR____CFConstantStringClassReference_110f00d58,&PTR_DAT_11329c550,
                        &PTR_s_text_11329c568,1,0x10,0x1c);
    puRam000000011372ece8 = puVar1;
  }
  return;
}



/* Entry: 108ed1140; end: 108ed11a7; +[CreateTopicStickerResponse descriptor] */

void FUN_108ed1140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ecf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca5b0,
                        &PTR____CFConstantStringClassReference_110f00d78,&PTR_DAT_11329c550,
                        &PTR_DAT_11329c588,1,0x10,0x1c);
    puRam000000011372ecf0 = puVar1;
  }
  return;
}



/* Entry: 108ed11a8; end: 108ed120f; +[GetTopicStickersRequest descriptor] */

void FUN_108ed11a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ecf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca600,
                        &PTR____CFConstantStringClassReference_110f00d98,&PTR_DAT_11329c550,
                        &PTR_DAT_11329c628,2,0x10,0x1c);
    puRam000000011372ecf8 = puVar1;
  }
  return;
}



/* Entry: 108ed1210; end: 108ed1277; +[GetTopicStickersResponse descriptor] */

void FUN_108ed1210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca650,
                        &PTR____CFConstantStringClassReference_110f00db8,&PTR_DAT_11329c550,
                        &PTR_DAT_11329c5a8,1,0x10,0x1c);
    puRam000000011372ed00 = puVar1;
  }
  return;
}



/* Entry: 108ed1278; end: 108ed12df; +[DeleteTopicStickerRequest descriptor] */

void FUN_108ed1278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca6a0,
                        &PTR____CFConstantStringClassReference_110f00dd8,&PTR_DAT_11329c550,
                        &PTR_DAT_11329c5c8,1,0x10,0x1c);
    puRam000000011372ed08 = puVar1;
  }
  return;
}



/* Entry: 108ed12e0; end: 108ed1347; +[DeleteTopicStickerResponse descriptor] */

void FUN_108ed12e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca6f0,
                        &PTR____CFConstantStringClassReference_110f00df8,&PTR_DAT_11329c550,0,0,4,
                        0x1c);
    puRam000000011372ed10 = puVar1;
  }
  return;
}



/* Entry: 108ed1348; end: 108ed13af; +[PublishTopicStickerRequest descriptor] */

void FUN_108ed1348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca740,
                        &PTR____CFConstantStringClassReference_110f00e18,&PTR_DAT_11329c550,
                        &PTR_s_id_p_11329c6a8,3,0x20,0x1c);
    puRam000000011372ed18 = puVar1;
  }
  return;
}



/* Entry: 108ed13b0; end: 108ed1417; +[PublishTopicStickerResponse descriptor] */

void FUN_108ed13b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca790,
                        &PTR____CFConstantStringClassReference_110f00e38,&PTR_DAT_11329c550,0,0,4,
                        0x1c);
    puRam000000011372ed20 = puVar1;
  }
  return;
}



/* Entry: 108ed1418; end: 108ed147f; +[CreatePublishedTopicStickerRequest descriptor] */

void FUN_108ed1418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca7e0,
                        &PTR____CFConstantStringClassReference_110f00e58,&PTR_DAT_11329c550,
                        &PTR_s_id_p_11329c708,3,0x18,0x1c);
    puRam000000011372ed28 = puVar1;
  }
  return;
}



/* Entry: 108ed1480; end: 108ed14e7; +[CreatePublishedTopicStickerResponse descriptor] */

void FUN_108ed1480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca830,
                        &PTR____CFConstantStringClassReference_110f00e78,&PTR_DAT_11329c550,
                        &PTR_DAT_11329c5e8,1,0x10,0x1c);
    puRam000000011372ed30 = puVar1;
  }
  return;
}



/* Entry: 108ed14e8; end: 108ed154f; +[UnpublishTopicStickerRequest descriptor] */

void FUN_108ed14e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca880,
                        &PTR____CFConstantStringClassReference_110f00e98,&PTR_DAT_11329c550,
                        &PTR_s_id_p_11329c608,1,0x10,0x1c);
    puRam000000011372ed38 = puVar1;
  }
  return;
}



/* Entry: 108ed1550; end: 108ed15b7; +[UnpublishTopicStickerResponse descriptor] */

void FUN_108ed1550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca8d0,
                        &PTR____CFConstantStringClassReference_110f00eb8,&PTR_DAT_11329c550,0,0,4,
                        0x1c);
    puRam000000011372ed40 = puVar1;
  }
  return;
}



/* Entry: 108ed15b8; end: 108ed1643; +[QueryTopicStickersRequest descriptor] */

undefined * FUN_108ed15b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca920,
                        &PTR____CFConstantStringClassReference_110f00ed8,&PTR_DAT_11329c550,
                        &PTR_s_cursor_11329c828,6,0x30,0x1c);
    func_0x00010c229040();
    puRam000000011372ed48 = puVar1;
  }
  return puRam000000011372ed48;
}



/* Entry: 108ed1644; end: 108ed1727; +[QueryTopicStickersResponse descriptor] */

void FUN_108ed1644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca970,
                        &PTR____CFConstantStringClassReference_110f00ef8,&PTR_DAT_11329c550,
                        &PTR_DAT_11329c668,2,0x18,0x1c);
    puRam000000011372ed50 = puVar1;
  }
  return;
}



/* Entry: 108ed1728; end: 108ed1733;  */

bool FUN_108ed1728(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108ed1734; end: 108ed17af;  */

undefined * FUN_108ed1734(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372ed60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f00f38,
                        &UNK_10dfa4214,&UNK_10dfa4250,3,FUN_108ed17b0,0);
    do {
      if (puRam000000011372ed60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372ed60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372ed60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372ed60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372ed60;
}



/* Entry: 108ed17b0; end: 108ed17bb;  */

bool FUN_108ed17b0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108ed17bc; end: 108ed1847; +[TopicStickerStatus descriptor] */

undefined * FUN_108ed17bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcaa60,
                        &PTR____CFConstantStringClassReference_110f00f58,&PTR_DAT_11329c8f0,
                        &PTR_DAT_11329c968,4,0x28,0x1c);
    func_0x00010c229040();
    puRam000000011372ed68 = puVar1;
  }
  return puRam000000011372ed68;
}



/* Entry: 108ed1848; end: 108ed18c3; +[TopicStickerStatus_StatusUnavailable descriptor] */

undefined * FUN_108ed1848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcaab0,
                        &PTR____CFConstantStringClassReference_110f00f78,&PTR_DAT_11329c8f0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam000000011372ed70 = puVar1;
  }
  return puRam000000011372ed70;
}



/* Entry: 108ed18c4; end: 108ed193f; +[TopicStickerStatus_StatusAvailable descriptor] */

undefined * FUN_108ed18c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcab00,
                        &PTR____CFConstantStringClassReference_110f00f98,&PTR_DAT_11329c8f0,
                        &PTR_DAT_11329c908,1,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372ed78 = puVar1;
  }
  return puRam000000011372ed78;
}



/* Entry: 108ed1940; end: 108ed19bb; +[TopicStickerStatus_StatusDeleted descriptor] */

undefined * FUN_108ed1940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcab50,
                        &PTR____CFConstantStringClassReference_110f00fb8,&PTR_DAT_11329c8f0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam000000011372ed80 = puVar1;
  }
  return puRam000000011372ed80;
}



/* Entry: 108ed19bc; end: 108ed1a37; +[TopicStickerStatus_StatusScheduled descriptor] */

undefined * FUN_108ed19bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcaba0,
                        &PTR____CFConstantStringClassReference_110f00fd8,&PTR_DAT_11329c8f0,
                        &PTR_DAT_11329c928,2,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372ed88 = puVar1;
  }
  return puRam000000011372ed88;
}



/* Entry: 108ed1a38; end: 108ed1a9f; +[TopicStickerId descriptor] */

void FUN_108ed1a38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ed90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcac40,
                        &PTR____CFConstantStringClassReference_110f00ff8,&PTR_DAT_11329c9e8,
                        &PTR_s_uuid_11329ca00,1,0x10,0x1c);
    puRam000000011372ed90 = puVar1;
  }
  return;
}



/* Entry: 108ed1aa0; end: 108ed1b13; -[SCRemixPreviewServices initWithRemixSettingsService:] */

undefined1 * FUN_108ed1aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff128;
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



/* Entry: 108ed1b14; end: 108ed1b1b; -[SCRemixPreviewServices remixSettingsService] */

undefined8 FUN_108ed1b14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ed1b1c; end: 108ed1b27; -[SCRemixPreviewServices .cxx_destruct] */

void FUN_108ed1b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ed1b28; end: 108ed1c7f; +[SCRemixExplanationLabel labelInBounds:] */

void FUN_108ed1b28(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc0f8;
  _objc_alloc(PTR_PTR_1126dc0f8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = puVar1;
  func_0x0001090229ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_6,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_6,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_6,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_6,0);
  func_0x00010c213040(puVar1,param_6,1);
  dVar3 = 186.0;
  uVar4 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x4067400000000000,0x7fefffffffffffff,puVar1);
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  func_0x00010c19f0e0(param_1 + dVar3 * -0.5,0x4050400000000000,dVar3,uVar4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ed1c80; end: 108ed1c87; -[SCFontServices fontLoader] */

undefined8 FUN_108ed1c80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ed1c88; end: 108ed1c93; -[SCFontServices .cxx_destruct] */

void FUN_108ed1c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ed1c94; end: 108ed1d0f;  */

undefined * FUN_108ed1c94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372ed98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f01038,
                        &UNK_10dfa4268,&UNK_10dfa4294,2,FUN_108ed1d10,0);
    do {
      if (puRam000000011372ed98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372ed98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372ed98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372ed98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372ed98;
}



/* Entry: 108ed1d10; end: 108ed1d1b;  */

bool FUN_108ed1d10(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108ed1d1c; end: 108ed1d97;  */

undefined * FUN_108ed1d1c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372eda0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f01058,
                        &UNK_10dfa429c,&UNK_10dfa430c,3,FUN_108ed1d98,0);
    do {
      if (puRam000000011372eda0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372eda0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372eda0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372eda0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372eda0;
}



/* Entry: 108ed1d98; end: 108ed1da3;  */

bool FUN_108ed1d98(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108ed1da4; end: 108ed1e33;  */

undefined * FUN_108ed1da4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372eda8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f01078,
                        &UNK_10dfa4318,&UNK_10dfa439c,4,FUN_108ed1e34,0,&UNK_10dfa43ac);
    do {
      if (puRam000000011372eda8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372eda8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372eda8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372eda8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372eda8;
}



/* Entry: 108ed1e34; end: 108ed1e3f;  */

bool FUN_108ed1e34(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108ed1e40; end: 108ed1ea7; +[SCGIGroupMetadata descriptor] */

void FUN_108ed1e40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372edb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcadd0,
                        &PTR____CFConstantStringClassReference_110ed1fb8,&PTR_DAT_11329ca28,
                        &PTR_DAT_11329cbc0,7,0x40,0x1c);
    puRam000000011372edb0 = puVar1;
  }
  return;
}



/* Entry: 108ed1ea8; end: 108ed1f0f; +[SCGIGroupStickerMemoriesModel descriptor] */

void FUN_108ed1ea8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372edb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcae20,
                        &PTR____CFConstantStringClassReference_110f01098,&PTR_DAT_11329ca28,
                        &PTR_s_title_11329caa0,3,0x20,0x1c);
    puRam000000011372edb8 = puVar1;
  }
  return;
}



/* Entry: 108ed1f10; end: 108ed1f77; +[SCGIGroupInvitePersonInfo descriptor] */

void FUN_108ed1f10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372edc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcae70,
                        &PTR____CFConstantStringClassReference_110f010b8,&PTR_DAT_11329ca28,
                        &PTR_s_userId_11329cb00,6,0x38,0x1c);
    puRam000000011372edc0 = puVar1;
  }
  return;
}



/* Entry: 108ed1f78; end: 108ed2003; +[SCGIGroupInvite descriptor] */

undefined * FUN_108ed1f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372edc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcaec0,
                        &PTR____CFConstantStringClassReference_110f010d8,&PTR_DAT_11329ca28,
                        &PTR_s_id_p_11329cdc0,10,0x50,0x1c);
    func_0x00010c229040();
    puRam000000011372edc8 = puVar1;
  }
  return puRam000000011372edc8;
}



/* Entry: 108ed2004; end: 108ed206b; +[SCGIGroupInviteBasicInfo descriptor] */

void FUN_108ed2004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372edd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcaf10,
                        &PTR____CFConstantStringClassReference_110f010f8,&PTR_DAT_11329ca28,
                        &PTR_s_text_11329ca40,1,0x10,0x1c);
    puRam000000011372edd0 = puVar1;
  }
  return;
}



/* Entry: 108ed206c; end: 108ed20d3; +[SCGIGroupInviteEventInfo descriptor] */

void FUN_108ed206c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372edd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcaf88,
                        &PTR____CFConstantStringClassReference_110f01118,&PTR_DAT_11329ca28,
                        &PTR_DAT_11329cca0,9,0x50,0x1c);
    puRam000000011372edd8 = puVar1;
  }
  return;
}



/* Entry: 108ed20d4; end: 108ed2157; +[SCGIGroupInviteEventInfo_JoinedPerson descriptor] */

undefined * FUN_108ed20d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ede0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcafb0,
                        &PTR____CFConstantStringClassReference_110f01138,&PTR_DAT_11329ca28,
                        &PTR_DAT_11329ca60,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372ede0 = puVar1;
  }
  return puRam000000011372ede0;
}



/* Entry: 108ed2158; end: 108ed21cb; -[SCPreviewTooltipsServices initWithPreviewTooltipsProvider:] */

undefined1 * FUN_108ed2158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff138;
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



/* Entry: 108ed21cc; end: 108ed21d3; -[SCPreviewTooltipsServices tooltipsProvider] */

undefined8 FUN_108ed21cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ed21d4; end: 108ed21df; -[SCPreviewTooltipsServices .cxx_destruct] */

void FUN_108ed21d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ed21e0; end: 108ed229f; -[SCPreviewNGSActionButton initWithFrame:style:] */

undefined1 *
FUN_108ed21e0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             )

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ff140;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 <= param_4) {
      param_4 = param_3;
    }
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_4 * 0.5);
    _objc_release(puVar2);
    func_0x00010c20eaa0(puVar1);
    func_0x00010c1c3c80(0x3ff0ccccc0000000,puVar1);
    func_0x00010c21d680(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108ed22a0; end: 108ed2337; -[SCPreviewNGSActionButton configureLabelWithText:] */

void FUN_108ed22a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff140;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_configureLabelWithText__1125af608);
  uVar1 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fe8000000000000);
  _objc_release(uVar1);
  func_0x00010bddfe40(param_1);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 108ed2338; end: 108ed236f; -[SCPreviewNGSActionButton pointInside:withEvent:] */

void FUN_108ed2338(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108ed2370; end: 108ed24b3; -[SCPreviewNGSActionButton setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed2370(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(undefined **)(param_1 + _DAT_11277d4f0) = param_3;
  lVar1 = param_1;
  func_0x00010be40f40();
  if ((int)lVar1 == 0) {
    puVar2 = param_3;
    FUN_108ed24b4(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(puVar2);
    if (param_3 == (undefined *)0x1) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3ff0000000000000,0x3fc999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70)
      ;
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retainAutorelease(puVar2);
    func_0x00010bdc0fe0();
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(lVar1);
    _objc_release(puVar2);
    uVar3 = 0;
    if (param_3 != (undefined *)0x0) {
      uVar3 = 0x3fe0000000000000;
    }
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddfe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearBackground_112555930);
  return;
}



/* Entry: 108ed24b4; end: 108ed250b;  */

void FUN_108ed24b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 1) {
    uVar2 = 0x3fd3333333333333;
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) goto LAB_108ed2504;
    uVar2 = 0x3fc999999999999a;
    uVar1 = 0x3ff0000000000000;
  }
  func_0x00010bf41680(uVar1,uVar2,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
LAB_108ed2504:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ed250c; end: 108ed25bf; -[SCPreviewNGSActionButton setEnabled:] */

void FUN_108ed250c(undefined *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff140;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_setEnabled__112642f38);
  puVar1 = param_1;
  func_0x00010c071800();
  if ((param_3 != (uint)puVar1) &&
     (puVar1 = param_1, func_0x00010be40f40(), ((ulong)puVar1 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3ff0000000000000,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70)
      ;
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_1;
      func_0x00010c25dfa0(param_1);
      FUN_108ed24b4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c16e440(param_1);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108ed25c0; end: 108ed26cf; -[SCPreviewNGSActionButton layoutSubviews] */

void FUN_108ed25c0(undefined8 param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff140;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfe9100(param_1);
  uVar1 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  dVar2 = 0.0;
  func_0x00010c19f0e0(0,0,0x4038000000000000,0x4038000000000000);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_1);
  _CGRectGetMidX();
  dVar3 = dVar2;
  func_0x00010bf20c00(param_1);
  _CGRectGetMidY();
  uVar1 = param_1;
  func_0x00010be40f40();
  dVar4 = dVar3 + -5.0;
  if ((int)uVar1 == 0) {
    dVar4 = dVar3;
  }
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar2,dVar4);
  _objc_release(param_1);
  return;
}



/* Entry: 108ed26d0; end: 108ed273f; -[SCPreviewNGSActionButton _isHintLabelVisible] */

uint FUN_108ed26d0(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = param_1;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c087500(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c074c20();
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 108ed2740; end: 108ed27a7; -[SCPreviewNGSActionButton _clearBackground] */

void FUN_108ed2740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ed27a8; end: 108ed27b7; -[SCPreviewNGSActionButton style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed27a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d4f0);
}



/* Entry: 108ed27b8; end: 108ed29e7; -[SCPreviewNGSActionButtonV2 initWithFrame:style:layoutStyle:image:title:useTallerButtons:useLighterColorButtons:actionBarUnifiedStyleEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ed27b8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             )

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  byte in_w6;
  undefined1 in_w7;
  long lVar4;
  undefined8 uVar5;
  byte in_stack_00000000;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  puStack_88 = PTR_PTR_1126ff148;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(byte *)((long)puVar1 + (long)_DAT_11277d4f8) = in_w6;
    uVar5 = 0x4028000000000000;
    if ((in_w6 & (in_stack_00000000 ^ 1)) == 0) {
      uVar5 = 0x4018000000000000;
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277d4fc) = uVar5;
    if (param_3 <= param_4) {
      param_4 = param_3;
    }
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_4 * 0.5);
    _objc_release(puVar2);
    func_0x00010c1b9c80(puVar1);
    func_0x00010c20eaa0(puVar1);
    func_0x00010c1c3c80(0x3ff0ccccc0000000,puVar1);
    func_0x00010c21d680(puVar1);
    func_0x00010c219b60(puVar1);
    *(byte *)((long)puVar1 + (long)_DAT_11277d500) = in_stack_00000000;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d504) = in_w7;
    lVar4 = (long)_DAT_11277d508;
    _objc_retain(in_x4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = in_x4;
    _objc_release(uVar5);
    lVar4 = (long)_DAT_11277d50c;
    _objc_retain(in_x5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = in_x5;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d510);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d510) = puVar3;
    _objc_release(uVar5);
    func_0x00010bef9680(puVar1);
    puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d514);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d514) = puVar3;
    _objc_release(uVar5);
    func_0x00010bef9680(puVar1);
    func_0x00010c200260(puVar1);
    func_0x00010beb14e0(puVar1);
    func_0x00010beabac0(puVar1);
  }
  _objc_release(in_x5);
  _objc_release(in_x4);
  return (undefined1 *)puVar1;
}



/* Entry: 108ed29e8; end: 108ed2b53; -[SCPreviewNGSActionButtonV2 setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed29e8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(long *)(param_1 + _DAT_11277d518) = param_3;
  if (*(long *)(param_1 + _DAT_11277d51c) != 0) {
    puVar1 = param_1;
    func_0x00010bdd21c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(puVar1);
    if (param_3 == 1) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bf414e0(0x3fc999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else if (param_3 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retainAutorelease(puVar1);
    func_0x00010bdc0fe0();
    puVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar3 = 0;
    if (param_3 != 0) {
      uVar3 = 0x3fe0000000000000;
    }
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddfe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearBackground_112555930);
  return;
}



/* Entry: 108ed2b54; end: 108ed2bff; -[SCPreviewNGSActionButtonV2 setEnabled:] */

void FUN_108ed2b54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff148;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setEnabled__112642f38);
  uVar1 = param_1;
  func_0x00010bdd21c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010bf414e0(0x3fb999999999999a,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c16e440(param_1);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 108ed2c00; end: 108ed2c7b; -[SCPreviewNGSActionButtonV2 layoutSubviews] */

void FUN_108ed2c00(undefined8 param_1)

{
  double in_d3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff148;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(param_1);
  return;
}



/* Entry: 108ed2c7c; end: 108ed2cab; -[SCPreviewNGSActionButtonV2 _textColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed2c7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd5;
  if (*(long *)(param_1 + _DAT_11277d518) != 1) {
    uVar1 = 0xffffffff800000bb;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color_withThemedColor__11266c8e8,uVar1,
             0xc6);
  return;
}



/* Entry: 108ed2cac; end: 108ed2d43; -[SCPreviewNGSActionButtonV2 _backgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed2cac(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + (long)_DAT_11277d518) == 1) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fd3333333333333);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    func_0x00010bdd7280();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,param_1 | 0xffffffff80000000,
                        0x2a);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ed2d44; end: 108ed2d7b; -[SCPreviewNGSActionButtonV2 _buttonColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed2d44(long param_1)

{
  undefined8 uVar1;
  
  if (2 < lRam00000001138466f0) {
    return 0x2a;
  }
  uVar1 = 0x5f;
  if (*(char *)(param_1 + _DAT_11277d504) == '\0') {
    uVar1 = 0x6b;
  }
  return uVar1;
}



/* Entry: 108ed2d7c; end: 108ed2ddf; -[SCPreviewNGSActionButtonV2 _setupViews] */

/* WARNING: Possible PIC construction at 0x000108ed2db0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ed2db4) */
/* WARNING: Removing unreachable block (ram,0x00010bea9540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed2d7c(long param_1)

{
  func_0x00010beabb20();
  if (*(ulong *)(param_1 + _DAT_11277d51c) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00010bead1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupImageView_112588e10);
    return;
  }
  return;
}



/* Entry: 108ed2de0; end: 108ed2e8b; -[SCPreviewNGSActionButtonV2 _setupContainer] */

/* WARNING: Possible PIC construction at 0x000108ed2e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ed2e3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed2de0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c22e860();
  if ((int)lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar3 = (long)_DAT_11277d520;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
    return;
  }
  return;
}



/* Entry: 108ed2e8c; end: 108ed2f93; -[SCPreviewNGSActionButtonV2 _setupImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed2e8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11277d528;
  if (*(long *)(param_1 + lVar6) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277d508);
  func_0x00010bfe9720(uVar4,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar6),param_2,uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  lVar2 = param_1;
  func_0x00010becb3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar5,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar6),param_2,1);
  lVar2 = param_1;
  func_0x00010c22e860();
  lVar3 = param_1;
  if ((int)lVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_11277d524);
  }
  func_0x00010befbb60(lVar3,param_2,*(undefined8 *)(param_1 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108ed2f94; end: 108ed30bf; -[SCPreviewNGSActionButtonV2 _setUpLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed2f94(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277d52c;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c165e20(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1c83a0(0x3fe8000000000000,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010becb3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c22e860();
  lVar3 = param_1;
  if ((int)lVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_11277d520);
  }
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar3,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 108ed30c0; end: 108ed44ff; -[SCPreviewNGSActionButtonV2 _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed30c0(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined *puVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  undefined *puVar52;
  long lVar53;
  long lVar54;
  undefined8 uVar55;
  double dVar56;
  undefined8 uVar57;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  
  puVar52 = (undefined *)0x0;
  lVar46 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar47 = *(long *)(param_1 + _DAT_11277d51c);
  lStack_288 = param_1;
  lStack_290 = param_1;
  lStack_248 = param_1;
  if (lVar47 < 3) {
    if (lVar47 == 0) {
      lStack_278 = param_1;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lStack_288 = lStack_278;
      func_0x00010bf49420(0x404e000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar47 = (long)_DAT_11277d528;
      lStack_270 = *(long *)(param_1 + lVar47);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lStack_280 = param_1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lStack_290 = lStack_270;
      func_0x00010bf493c0(*(undefined8 *)(param_1 + _DAT_11277d4fc));
      _objc_retainAutoreleasedReturnValue();
      lStack_298 = *(long *)(param_1 + lVar47);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lStack_2a0 = param_1;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lStack_248 = lStack_298;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_250 = *(long *)(param_1 + lVar47);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lStack_258 = lStack_250;
      func_0x00010bf49420(0x4038000000000000);
      _objc_retainAutoreleasedReturnValue();
      lStack_260 = *(long *)(param_1 + lVar47);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uStack_2a8 = *(undefined8 *)(param_1 + lVar47);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lStack_2b0 = lStack_260;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar50 = (long)_DAT_11277d52c;
      uStack_268 = *(undefined8 *)(param_1 + lVar50);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uStack_2b8 = *(undefined8 *)(param_1 + lVar47);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uStack_2c0 = uStack_268;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_2c8 = *(undefined8 *)(param_1 + lVar50);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar47 = param_1;
      func_0x00010c08e400(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar57 = uStack_2c8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar50);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar48 = param_1;
      func_0x00010c1408a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar50);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar52 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar6);
      _objc_release(lVar48);
      _objc_release(uVar5);
      _objc_release(uVar57);
      _objc_release(lVar47);
    }
    else {
      if (lVar47 == 1) {
        lVar48 = (long)_DAT_11277d528;
        lStack_278 = *(long *)(param_1 + lVar48);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar47 = (long)_DAT_11277d4fc;
        lStack_270 = lStack_278;
        func_0x00010bf493c0(*(undefined8 *)(param_1 + lVar47));
        _objc_retainAutoreleasedReturnValue();
        lStack_280 = *(long *)(param_1 + lVar48);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lStack_298 = lStack_280;
        func_0x00010bf493c0(-*(double *)(param_1 + lVar47));
        _objc_retainAutoreleasedReturnValue();
        lStack_2a0 = *(long *)(param_1 + lVar48);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        lStack_248 = lStack_2a0;
        func_0x00010bf49420(0x4038000000000000);
        _objc_retainAutoreleasedReturnValue();
        lStack_250 = *(long *)(param_1 + lVar48);
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        lStack_258 = *(long *)(param_1 + lVar48);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        lStack_260 = lStack_250;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_2a8 = *(undefined8 *)(param_1 + lVar48);
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        lStack_2b0 = param_1;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_268 = uStack_2a8;
        func_0x00010bf493c0(0xc02c000000000000);
        _objc_retainAutoreleasedReturnValue();
        uStack_2b8 = *(undefined8 *)(param_1 + lVar48);
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lVar50 = (long)_DAT_11277d52c;
        uStack_2c0 = *(undefined8 *)(param_1 + lVar50);
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_2c8 = uStack_2b8;
        func_0x00010bf493c0(0x4020000000000000);
        _objc_retainAutoreleasedReturnValue();
        uStack_2d0 = *(undefined8 *)(param_1 + lVar50);
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lVar47 = param_1;
        func_0x00010c08e400(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar57 = uStack_2d0;
        func_0x00010bf493c0(0x402c000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + lVar50);
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar48 = *(long *)(param_1 + lVar48);
        func_0x00010bf348e0(lVar48);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + lVar50);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010bf494e0(0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar50);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf49580(0x4044000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (lVar47 != 2) goto LAB_108ed44a8;
        lVar47 = (long)_DAT_11277d528;
        lStack_278 = *(long *)(param_1 + lVar47);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar48 = (long)_DAT_11277d4fc;
        lStack_270 = lStack_278;
        func_0x00010bf493c0(*(undefined8 *)(param_1 + lVar48));
        _objc_retainAutoreleasedReturnValue();
        lStack_280 = *(long *)(param_1 + lVar47);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lStack_298 = lStack_280;
        func_0x00010bf493c0(-*(double *)(param_1 + lVar48));
        _objc_retainAutoreleasedReturnValue();
        lStack_2a0 = *(long *)(param_1 + lVar47);
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lStack_250 = lStack_2a0;
        func_0x00010bf493c0(0x402c000000000000);
        _objc_retainAutoreleasedReturnValue();
        lStack_258 = *(long *)(param_1 + lVar47);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        lStack_260 = lStack_258;
        func_0x00010bf49420(0x4038000000000000);
        _objc_retainAutoreleasedReturnValue();
        uStack_2a8 = *(undefined8 *)(param_1 + lVar47);
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        lStack_2b0 = *(long *)(param_1 + lVar47);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uStack_268 = uStack_2a8;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        lVar50 = (long)_DAT_11277d52c;
        uStack_2b8 = *(undefined8 *)(param_1 + lVar50);
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        uStack_2c0 = *(undefined8 *)(param_1 + lVar47);
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_2c8 = uStack_2b8;
        func_0x00010bf493c0(0x4020000000000000);
        _objc_retainAutoreleasedReturnValue();
        uStack_2d0 = *(undefined8 *)(param_1 + lVar50);
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar47 = *(long *)(param_1 + lVar47);
        func_0x00010bf348e0(lVar47);
        _objc_retainAutoreleasedReturnValue();
        uVar57 = uStack_2d0;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + lVar50);
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        lVar48 = param_1;
        func_0x00010c1408a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010bf493c0(0xc02c000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + lVar50);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010bf494e0(0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar50);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf49580(0x4044000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar52 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(lVar48);
      _objc_release(uVar2);
      _objc_release(uVar57);
      _objc_release(lVar47);
LAB_108ed441c:
      _objc_release(uStack_2d0);
    }
    _objc_release(uStack_2c8);
    _objc_release(uStack_2c0);
    _objc_release(uStack_2b8);
  }
  else {
    if (lVar47 - 4U < 2) {
      if (*(char *)(param_1 + _DAT_11277d500) == '\x01') {
        bVar1 = *(char *)(param_1 + _DAT_11277d4f8) == '\0';
        dVar56 = -5.0;
        if (bVar1) {
          dVar56 = 0.0;
        }
        uVar57 = 0x4041000000000000;
        if (bVar1) {
          uVar57 = 0x4038000000000000;
        }
      }
      else {
        dVar56 = 0.0;
        uVar57 = 0x4038000000000000;
      }
      lVar50 = (long)_DAT_11277d510;
      lStack_278 = *(long *)(param_1 + lVar50);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lVar48 = (long)_DAT_11277d514;
      lStack_288 = *(long *)(param_1 + lVar48);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lStack_270 = lStack_278;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_280 = *(long *)(param_1 + lVar50);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lStack_298 = lStack_280;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_2a0 = *(long *)(param_1 + lVar48);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_250 = lStack_2a0;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_258 = *(long *)(param_1 + lVar50);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lStack_260 = lStack_258;
      func_0x00010bf49580(0x404e000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar49 = (long)_DAT_11277d520;
      uStack_2a8 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lStack_2b0 = *(long *)(param_1 + lVar50);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_268 = uStack_2a8;
      func_0x00010bf49460();
      _objc_retainAutoreleasedReturnValue();
      uStack_2b8 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_2c0 = *(undefined8 *)(param_1 + lVar48);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uStack_2c8 = uStack_2b8;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
      lVar51 = (long)_DAT_11277d524;
      uStack_2d0 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar48 = param_1;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      lVar50 = lVar48;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar53 = (long)_DAT_11277d4fc;
      uVar6 = uStack_2d0;
      func_0x00010bf493c0(*(undefined8 *)(param_1 + lVar53));
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010bf493c0(-*(double *)(param_1 + lVar53));
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar53 = param_1;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar53;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar11;
      func_0x00010bf49420(uVar57);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar57 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar54 = (long)_DAT_11277d52c;
      uVar14 = *(undefined8 *)(param_1 + lVar54);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar55 = 0xc000000000000000;
      if (lVar47 != 5) {
        uVar55 = 0x4020000000000000;
      }
      uVar16 = uVar14;
      func_0x00010bf493c0(uVar55);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_1 + lVar54);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar55 = uVar17;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar47 = param_1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = param_1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar21;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = param_1;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uVar24;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar27;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar30 = *(undefined8 *)(param_1 + lVar54);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = uVar30;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar49 = (long)_DAT_11277d528;
      uVar33 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar34 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar35 = uVar33;
      func_0x00010bf493c0(-dVar56);
      _objc_retainAutoreleasedReturnValue();
      uVar36 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar37 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010bf1ff80(uVar37);
      _objc_retainAutoreleasedReturnValue();
      uVar38 = uVar36;
      func_0x00010bf493c0(dVar56);
      _objc_retainAutoreleasedReturnValue();
      uVar39 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar40 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c08e400(uVar40);
      _objc_retainAutoreleasedReturnValue();
      uVar41 = uVar39;
      func_0x00010bf493c0(-dVar56);
      _objc_retainAutoreleasedReturnValue();
      uVar42 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar43 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c1408a0(uVar43);
      _objc_retainAutoreleasedReturnValue();
      uVar44 = uVar42;
      func_0x00010bf493c0(dVar56);
      _objc_retainAutoreleasedReturnValue();
      puVar52 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar44);
      _objc_release(uVar43);
      _objc_release(uVar42);
      _objc_release(uVar41);
      _objc_release(uVar40);
      _objc_release(uVar39);
      _objc_release(uVar38);
      _objc_release(uVar37);
      _objc_release(uVar36);
      _objc_release(uVar35);
      _objc_release(uVar34);
      _objc_release(uVar33);
      _objc_release(uVar32);
      _objc_release(uVar31);
      _objc_release(uVar30);
      _objc_release(uVar29);
      _objc_release(uVar28);
      _objc_release(uVar27);
      _objc_release(uVar26);
      _objc_release(lVar25);
      _objc_release(uVar24);
      _objc_release(uVar23);
      _objc_release(lVar22);
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(lVar47);
      _objc_release(uVar19);
      _objc_release(uVar55);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar57);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar2);
      _objc_release(uVar11);
      _objc_release(uVar5);
      _objc_release(lVar10);
      _objc_release(lVar53);
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(lVar50);
      _objc_release(lVar48);
      goto LAB_108ed441c;
    }
    if (lVar47 != 3) goto LAB_108ed44a8;
    lVar47 = (long)_DAT_11277d528;
    lStack_278 = *(long *)(param_1 + lVar47);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_270 = lStack_278;
    func_0x00010bf493c0(*(undefined8 *)(param_1 + _DAT_11277d4fc));
    _objc_retainAutoreleasedReturnValue();
    lStack_280 = *(long *)(param_1 + lVar47);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_298 = lStack_280;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2a0 = *(long *)(param_1 + lVar47);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_250 = lStack_2a0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = *(long *)(param_1 + lVar47);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lStack_260 = lStack_258;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_2a8 = *(undefined8 *)(param_1 + lVar47);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lStack_2b0 = *(long *)(param_1 + lVar47);
    func_0x00010c2a5060(lStack_2b0);
    _objc_retainAutoreleasedReturnValue();
    uStack_268 = uStack_2a8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar52 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uStack_268);
  _objc_release(lStack_2b0);
  _objc_release(uStack_2a8);
  _objc_release(lStack_260);
  _objc_release(lStack_258);
  _objc_release(lStack_250);
  _objc_release(lStack_248);
  _objc_release(lStack_2a0);
  _objc_release(lStack_298);
  _objc_release(lStack_290);
  _objc_release(lStack_280);
  _objc_release(lStack_270);
  _objc_release(lStack_288);
  _objc_release(lStack_278);
LAB_108ed44a8:
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar52);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar46) {
    ___stack_chk_fail();
    puVar45 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar52);
    _objc_release(puVar45);
    func_0x00010c08c0e0(puVar52);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar52);
    return;
  }
  return;
}



/* Entry: 108ed4500; end: 108ed456b; -[SCPreviewNGSActionButtonV2 _clearBackground] */

void FUN_108ed4500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ed456c; end: 108ed457b; -[SCPreviewNGSActionButtonV2 style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed456c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d518);
}



/* Entry: 108ed457c; end: 108ed458b; -[SCPreviewNGSActionButtonV2 layoutStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed457c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d51c);
}



/* Entry: 108ed458c; end: 108ed459b; -[SCPreviewNGSActionButtonV2 setLayoutStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed458c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277d51c) = param_3;
  return;
}



/* Entry: 108ed459c; end: 108ed45ab; -[SCPreviewNGSActionButtonV2 titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed459c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d52c);
}



/* Entry: 108ed45ac; end: 108ed45eb; -[SCPreviewNGSActionButtonV2 setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed45ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d52c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ed45ec; end: 108ed45fb; -[SCPreviewNGSActionButtonV2 iconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed45ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d528);
}



/* Entry: 108ed45fc; end: 108ed463b; -[SCPreviewNGSActionButtonV2 setIconImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed45fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d528;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ed463c; end: 108ed464b; -[SCPreviewNGSActionButtonV2 containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed463c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d520);
}



/* Entry: 108ed464c; end: 108ed468b; -[SCPreviewNGSActionButtonV2 setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed464c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d520;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


