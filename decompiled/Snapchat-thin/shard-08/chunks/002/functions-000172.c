/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f07f0c; end: 105f07f17; -[UNISCMapMapStatusService .cxx_destruct] */

void FUN_105f07f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f07f18; end: 105f07f8b; -[UNISCMapMapStatusServiceExternal initWithUnifiedGrpcService:] */

undefined1 * FUN_105f07f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126edf10;
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



/* Entry: 105f07f8c; end: 105f0806f; -[UNISCMapMapStatusServiceExternal deleteUserTravelStatusesWithRequest:callOptionsBuilder:handler:] */

void FUN_105f07f8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126c5df8;
  _objc_opt_class(PTR_PTR_1126c5df8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e30f38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f08070; end: 105f0807b; -[UNISCMapMapStatusServiceExternal .cxx_destruct] */

void FUN_105f08070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f0807c; end: 105f080f7;  */

undefined * FUN_105f0807c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c23b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e30f58,
                        &UNK_10ddd1678,&UNK_10ddd16ac,4,FUN_105f080f8,0);
    do {
      if (puRam00000001136c23b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c23b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c23b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c23b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c23b0;
}



/* Entry: 105f080f8; end: 105f08103;  */

bool FUN_105f080f8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105f08104; end: 105f0816b; +[SCMapGetFriendsTravelStatusesRequest descriptor] */

void FUN_105f08104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c23b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaa900,
                        &PTR____CFConstantStringClassReference_110e30f78,&PTR_DAT_1131312c8,
                        &PTR_s_userId_113131380,3,0x18,0x1c);
    puRam00000001136c23b8 = puVar1;
  }
  return;
}



/* Entry: 105f0816c; end: 105f081d3; +[SCMapGetFriendsTravelStatusesResponse descriptor] */

void FUN_105f0816c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c23c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaa950,
                        &PTR____CFConstantStringClassReference_110e30f98,&PTR_DAT_1131312c8,
                        &PTR_DAT_1131312e0,1,0x10,0x1c);
    puRam00000001136c23c0 = puVar1;
  }
  return;
}



/* Entry: 105f081d4; end: 105f0823b; +[SCMapTravelStatus descriptor] */

void FUN_105f081d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c23c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaabf8,
                        &PTR____CFConstantStringClassReference_110e30fb8,&PTR_DAT_1131312c8,
                        &PTR_s_userId_113131500,7,0x38,0x1c);
    puRam00000001136c23c8 = puVar1;
  }
  return;
}



/* Entry: 105f0823c; end: 105f082bf; +[SCMapTravelStatus_RankingSignals descriptor] */

undefined * FUN_105f0823c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c23d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaac20,
                        &PTR____CFConstantStringClassReference_110e30fd8,&PTR_DAT_1131312c8,
                        &PTR_DAT_113131300,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136c23d0 = puVar1;
  }
  return puRam00000001136c23d0;
}



/* Entry: 105f082c0; end: 105f08327; +[SCMapGetFriendsVenueStatusesRequest descriptor] */

void FUN_105f082c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c23d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaa9f0,
                        &PTR____CFConstantStringClassReference_110e30ff8,&PTR_DAT_1131312c8,
                        &PTR_s_userId_113131340,2,0x18,0x1c);
    puRam00000001136c23d8 = puVar1;
  }
  return;
}



/* Entry: 105f08328; end: 105f0838f; +[SCMapGetFriendsVenueStatusesResponse descriptor] */

void FUN_105f08328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c23e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaaa40,
                        &PTR____CFConstantStringClassReference_110e31018,&PTR_DAT_1131312c8,
                        &PTR_DAT_113131320,1,0x10,0x1c);
    puRam00000001136c23e0 = puVar1;
  }
  return;
}



/* Entry: 105f08390; end: 105f083f7; +[SCMapVenueStatus descriptor] */

void FUN_105f08390(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c23e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaaa90,
                        &PTR____CFConstantStringClassReference_110e31038,&PTR_DAT_1131312c8,
                        &PTR_s_userId_113131460,5,0x30,0x1c);
    puRam00000001136c23e8 = puVar1;
  }
  return;
}



/* Entry: 105f083f8; end: 105f0845f; +[SCMapDeleteUserStatusesRequest descriptor] */

void FUN_105f083f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c23f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaaae0,
                        &PTR____CFConstantStringClassReference_110e31058,&PTR_DAT_1131312c8,
                        &PTR_s_userId_1131313e0,4,0x20,0x1c);
    puRam00000001136c23f0 = puVar1;
  }
  return;
}



/* Entry: 105f08460; end: 105f084c7; +[SCMapDeleteUserStatusesResponse descriptor] */

void FUN_105f08460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c23f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaab30,
                        &PTR____CFConstantStringClassReference_110e31078,&PTR_DAT_1131312c8,0,0,4,
                        0x1c);
    puRam00000001136c23f8 = puVar1;
  }
  return;
}



/* Entry: 105f084c8; end: 105f0852f; +[SCMapDeleteUserTravelStatusesRequest descriptor] */

void FUN_105f084c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2400 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaab80,
                        &PTR____CFConstantStringClassReference_110e31098,&PTR_DAT_1131312c8,0,0,4,
                        0x1c);
    puRam00000001136c2400 = puVar1;
  }
  return;
}



/* Entry: 105f08530; end: 105f08613; +[SCMapDeleteUserTravelStatusesResponse descriptor] */

void FUN_105f08530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2408 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaabd0,
                        &PTR____CFConstantStringClassReference_110e310b8,&PTR_DAT_1131312c8,0,0,4,
                        0x1c);
    puRam00000001136c2408 = puVar1;
  }
  return;
}



/* Entry: 105f08614; end: 105f0861f;  */

bool FUN_105f08614(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105f08620; end: 105f08687; +[SCMTGetMapStoriesRequest descriptor] */

void FUN_105f08620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2418 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaacc0,
                        &PTR____CFConstantStringClassReference_110e310f8,
                        &PTR_s_snapchat_map_1131315e0,&PTR_DAT_113131618,3,0x20,0x1c);
    puRam00000001136c2418 = puVar1;
  }
  return;
}



/* Entry: 105f08688; end: 105f086ef; +[SCMTGetMapStoriesResponse descriptor] */

void FUN_105f08688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2420 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaad38,
                        &PTR____CFConstantStringClassReference_110e31118,
                        &PTR_s_snapchat_map_1131315e0,&PTR_DAT_1131315f8,1,0x10,0x1c);
    puRam00000001136c2420 = puVar1;
  }
  return;
}



/* Entry: 105f086f0; end: 105f08773; +[SCMTGetMapStoriesResponse_Story descriptor] */

undefined * FUN_105f086f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2428 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aaad60,
                        &PTR____CFConstantStringClassReference_110e31138,
                        &PTR_s_snapchat_map_1131315e0,&PTR_s_id_p_113131678,10,0x50,0x1c);
    func_0x00010c228780();
    puRam00000001136c2428 = puVar1;
  }
  return puRam00000001136c2428;
}



/* Entry: 105f08774; end: 105f08927; -[SCMapGroupFocusViewScope initWithDelegate:browsingContextClusterID:mapPersonIds:operaPresentingController:cameraRestorationBlock:groupName:groupSize:zoomLevel:source:shouldHideCloseButton:sourceSessionId:isInitialDestination:] */

undefined8 *
FUN_105f08774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_14);
  puStack_78 = PTR_PTR_1126edf18;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_7);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    puVar1[7] = param_10;
    puVar1[9] = param_1;
    puVar1[10] = param_11;
    *(undefined1 *)(puVar1 + 1) = param_12;
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_15;
  }
  _objc_release(param_14);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105f08928; end: 105f0893f; -[SCMapGroupFocusViewScope delegate] */

void FUN_105f08928(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f08940; end: 105f08947; -[SCMapGroupFocusViewScope browsingContextClusterID] */

undefined8 FUN_105f08940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f08948; end: 105f0894f; -[SCMapGroupFocusViewScope mapPersonIds] */

undefined8 FUN_105f08948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f08950; end: 105f08957; -[SCMapGroupFocusViewScope cameraRestorationBlock] */

undefined8 FUN_105f08950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f08958; end: 105f0895f; -[SCMapGroupFocusViewScope groupName] */

undefined8 FUN_105f08958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f08960; end: 105f08967; -[SCMapGroupFocusViewScope groupSize] */

undefined8 FUN_105f08960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f08968; end: 105f0897f; -[SCMapGroupFocusViewScope operaPresentingController] */

void FUN_105f08968(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f08980; end: 105f08987; -[SCMapGroupFocusViewScope zoomLevel] */

undefined8 FUN_105f08980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105f08988; end: 105f0898f; -[SCMapGroupFocusViewScope source] */

undefined8 FUN_105f08988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f08990; end: 105f08997; -[SCMapGroupFocusViewScope shouldHideCloseButton] */

undefined1 FUN_105f08990(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f08998; end: 105f0899f; -[SCMapGroupFocusViewScope sourceSessionId] */

undefined8 FUN_105f08998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105f089a0; end: 105f089a7; -[SCMapGroupFocusViewScope isInitialDestination] */

undefined1 FUN_105f089a0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105f089a8; end: 105f08a0b; -[SCMapGroupFocusViewScope .cxx_destruct] */

void FUN_105f089a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 105f08a0c; end: 105f0927f;  */

void FUN_105f08a0c(undefined8 param_1)

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
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined **ppuVar42;
  undefined **ppuVar43;
  undefined **ppuVar44;
  undefined *puVar45;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  func_0x00010c21e900(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c182220();
  func_0x000105f0a978();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_10667e584();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000105f0a990();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  FUN_10667e584();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar6 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  func_0x00010c1d1360();
  _CGAffineTransformMakeScale(&uStack_108,0x3fe99999a0000000,0x3fe99999a0000000);
  uStack_138 = uStack_100;
  uStack_140 = uStack_108;
  uStack_128 = uStack_f0;
  uStack_130 = uStack_f8;
  uStack_118 = uStack_e0;
  uStack_120 = uStack_e8;
  puVar2 = puVar6;
  func_0x00010c219960();
  func_0x000105f0a9a8();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  puVar45 = puVar6;
  FUN_10667e584();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  puStack_c8 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  puStack_c0 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar5;
  puStack_b8 = puVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar5;
  puStack_b0 = puVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar5;
  puStack_a8 = puVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar7;
  puStack_a0 = puVar25;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar26;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar7;
  puStack_98 = puVar28;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar29;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar7;
  puStack_90 = puVar31;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar32;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar7;
  puStack_88 = puVar34;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar35;
  func_0x00010bf493c0(0xc03e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar3;
  puStack_80 = puVar37;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar40;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar41);
  _objc_release(puVar40);
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
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x105f092c8;
  puStack_150 = &UNK_11084e500;
  uStack_148 = param_1;
  _objc_retain(param_1);
  ppuVar42 = &puStack_168;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126aed70;
  ppuVar43 = ppuVar42;
  func_0x000105f0a9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = PTR_PTR_1126aed70;
  func_0x000105f0a9d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar43);
  func_0x000105f0a948();
  _objc_retainAutoreleasedReturnValue();
  ppuVar44 = ppuVar43;
  func_0x000105f0a960();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d8 = puVar2;
  puStack_d0 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefea0();
  _objc_release(puVar9);
  func_0x00010c1611e0(puVar10);
  func_0x00010c189400(puVar10);
  _objc_release(ppuVar44);
  _objc_release(ppuVar43);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(ppuVar42);
  _objc_release(uStack_148);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(puVar45);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105f09280; end: 105f09363;  */

void FUN_105f09280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f09364; end: 105f0937f;  */

void FUN_105f09364(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105f09378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105f09380; end: 105f0a7f3;  */

void FUN_105f09380(undefined8 param_1,undefined8 param_2)

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
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined *puVar68;
  undefined *puVar69;
  undefined *puVar70;
  undefined *puVar71;
  undefined *puVar72;
  undefined *puVar73;
  undefined *puVar74;
  undefined *puVar75;
  undefined *puVar76;
  undefined *puVar77;
  undefined *puVar78;
  undefined *puVar79;
  undefined *puVar80;
  undefined *puVar81;
  undefined *puVar82;
  undefined *puVar83;
  undefined *puVar84;
  undefined *puVar85;
  undefined *puVar86;
  undefined *puVar87;
  undefined *puVar88;
  undefined *puVar89;
  undefined *puVar90;
  undefined *puVar91;
  undefined *puVar92;
  undefined *puVar93;
  undefined *puVar94;
  undefined *puVar95;
  long lVar96;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lVar96 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  func_0x00010c21e900(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c182220();
  func_0x000105f0aa50();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_10667e584();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000105f0aa68();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  FUN_10667e584();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar6);
  _objc_release(puVar2);
  puVar2 = puVar6;
  func_0x00010c08c0e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar2);
  puVar2 = puVar6;
  func_0x00010c219b60();
  func_0x000105f0a9f0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  FUN_105f0a7f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar6;
  func_0x00010befbb60();
  func_0x000105f0aa08();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  FUN_105f0a7f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  FUN_105f0a8d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar6);
  puVar9 = puVar6;
  func_0x00010befbb60();
  func_0x000105f0aa20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  FUN_105f0a7f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  FUN_105f0a8d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar6);
  puVar11 = puVar6;
  func_0x00010befbb60();
  func_0x000105f0aa38();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  FUN_105f0a7f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  FUN_105f0a8d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar6);
  puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c266e60(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar13);
  _objc_release(puVar15);
  func_0x00010c219b60(puVar13);
  func_0x00010c182220(puVar13);
  func_0x00010befbb60(puVar6);
  func_0x00010befbb60(puVar6);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  puVar16 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar24;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar30;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar32;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar35;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar38;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar41 = puVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = puVar41;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar43 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = puVar43;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar46 = puVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar47 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar46;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar49;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar51 = puVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar52 = puVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar53 = puVar51;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar86 = puVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar87 = puVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar88 = puVar86;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar89 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar90 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar95 = puVar89;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar91 = puVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar92 = puVar91;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar93 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar94 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = puVar93;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar55 = puVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar56 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar57 = puVar55;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar58 = puVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar59 = puVar58;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar60 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar61 = puVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar62 = puVar60;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar63 = puVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar64 = puVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar65 = puVar63;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar66 = puVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar67 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar68 = puVar66;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar69 = puVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar70 = puVar69;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar71 = puVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar72 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar73 = puVar71;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar74 = puVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar75 = puVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar76 = puVar74;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar77 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar78 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar79 = puVar77;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar80 = puVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar81 = puVar80;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar82 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar83 = puVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar84 = puVar82;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar85 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000();
  _objc_release(puVar85);
  _objc_release(puVar84);
  _objc_release(puVar83);
  _objc_release(puVar82);
  _objc_release(puVar81);
  _objc_release(puVar80);
  _objc_release(puVar79);
  _objc_release(puVar78);
  _objc_release(puVar77);
  _objc_release(puVar76);
  _objc_release(puVar75);
  _objc_release(puVar74);
  _objc_release(puVar73);
  _objc_release(puVar72);
  _objc_release(puVar71);
  _objc_release(puVar70);
  _objc_release(puVar69);
  _objc_release(puVar68);
  _objc_release(puVar67);
  _objc_release(puVar66);
  _objc_release(puVar65);
  _objc_release(puVar64);
  _objc_release(puVar63);
  _objc_release(puVar62);
  _objc_release(puVar61);
  _objc_release(puVar60);
  _objc_release(puVar59);
  _objc_release(puVar58);
  _objc_release(puVar57);
  _objc_release(puVar56);
  _objc_release(puVar55);
  _objc_release(puVar54);
  _objc_release(puVar94);
  _objc_release(puVar93);
  _objc_release(puVar92);
  _objc_release(puVar91);
  _objc_release(puVar95);
  _objc_release(puVar90);
  _objc_release(puVar89);
  _objc_release(puVar88);
  _objc_release(puVar87);
  _objc_release(puVar86);
  _objc_release(puVar53);
  _objc_release(puVar52);
  _objc_release(puVar51);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
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
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar15 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar15;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar12;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar22;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar25;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar21;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar18;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar86 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar87 = puVar16;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar88 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar89 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar90 = puVar88;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar91 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar92 = puVar28;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar93 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar94 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar93;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar95 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar95);
  _objc_release(puVar29);
  _objc_release(puVar94);
  _objc_release(puVar93);
  _objc_release(puVar92);
  _objc_release(puVar91);
  _objc_release(puVar28);
  _objc_release(puVar90);
  _objc_release(puVar89);
  _objc_release(puVar88);
  _objc_release(puVar87);
  _objc_release(puVar86);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar20);
  _objc_release(puVar21);
  _objc_release(puVar23);
  _objc_release(puVar24);
  _objc_release(puVar25);
  _objc_release(puVar26);
  _objc_release(puVar27);
  _objc_release(puVar22);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release();
  puVar7 = PTR_PTR_1126aed70;
  func_0x000105f0a9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release();
  puVar8 = PTR_PTR_1126aed70;
  func_0x000105f0a9d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release();
  func_0x000105f0aa80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar15;
  func_0x000105f0aa98();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefe80();
  _objc_release(puVar9);
  func_0x00010c1611e0(puVar2);
  _objc_release(puVar10);
  _objc_release(puVar15);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar96) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_retain();
    _objc_alloc_init(puVar2);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar7);
    func_0x00010c212f20(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar2);
    _objc_release(puVar1);
    func_0x00010c219b60(puVar2);
    func_0x00010c1c83a0(0x3fe99999a0000000,puVar2);
    func_0x00010c165e20(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f0a7f4; end: 105f0a8cf;  */

void FUN_105f0a7f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain();
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c212f20(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c1c83a0(0x3fe99999a0000000,puVar1);
  func_0x00010c165e20(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f0a8d0; end: 105f0a947;  */

void FUN_105f0a8d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,0,0x3ff0000000000000);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f0a948; end: 105f0aaaf;  */

void FUN_105f0a948(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e31198;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e31198,
                      &PTR____CFConstantStringClassReference_110e311b8,0);
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



/* Entry: 105f0aab0; end: 105f0aad3; +[SCCFocusViewCardsActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105f0aab0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f6e98;
  param_1[1] = &PTR_DAT_1108f70a8;
  param_1[2] = &PTR_DAT_1108f6e20;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f0aad4; end: 105f0aafb;  */

undefined8 FUN_105f0aad4(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000105f0aef4();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x18));
  return 0;
}



/* Entry: 105f0aafc; end: 105f0ab4b;  */

void FUN_105f0aafc(void)

{
  func_0x000105f0aee4();
  func_0x000105f0aed4();
  func_0x000105f0ae98(FUN_105f0adcc);
  func_0x000105f0aeec();
  func_0x000105f0aec0();
  func_0x000105f0aecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f0ab4c; end: 105f0ab77;  */

undefined8 FUN_105f0ab4c(void)

{
  code *extraout_x8;
  
  func_0x000105f0aef4();
  (*extraout_x8)();
  return 0;
}



/* Entry: 105f0ab78; end: 105f0abc7;  */

void FUN_105f0ab78(void)

{
  func_0x000105f0aee4();
  func_0x000105f0aed4();
  func_0x000105f0ae98(0x105f0ae00);
  func_0x000105f0aeec();
  func_0x000105f0aec0();
  func_0x000105f0aecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f0abc8; end: 105f0abeb;  */

undefined8 FUN_105f0abc8(void)

{
  code *extraout_x8;
  
  func_0x000105f0aef4();
  (*extraout_x8)();
  return 0;
}



/* Entry: 105f0abec; end: 105f0ac3b;  */

void FUN_105f0abec(void)

{
  func_0x000105f0aee4();
  func_0x000105f0aed4();
  func_0x000105f0ae98(0x105f0ae34);
  func_0x000105f0aeec();
  func_0x000105f0aec0();
  func_0x000105f0aecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f0ac3c; end: 105f0ac63;  */

undefined8 FUN_105f0ac3c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],*param_2,param_2[1]);
  return 0;
}



/* Entry: 105f0ac64; end: 105f0acb3;  */

void FUN_105f0ac64(void)

{
  func_0x000105f0aee4();
  func_0x000105f0aed4();
  func_0x000105f0ae98(0x105f0ae68);
  func_0x000105f0aeec();
  func_0x000105f0aec0();
  func_0x000105f0aecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f0acb4; end: 105f0accf; +[SCFriendSectionActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105f0acb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f70d0;
  param_1[1] = &PTR_DAT_1108f71a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f0acd0; end: 105f0aceb; +[SCGroupSectionActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105f0acd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f71b8;
  param_1[1] = &PTR_DAT_1108f72c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f0acec; end: 105f0acff; +[SCNavigationActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105f0acec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f72d0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f0ad00; end: 105f0ad0b; +[SCCMapFriendFocusViewView componentPath] */

undefined ** FUN_105f0ad00(void)

{
  return &PTR____CFConstantStringClassReference_110e31398;
}



/* Entry: 105f0ad0c; end: 105f0ad3f; -[SCCMapFriendFocusViewView initWithViewModel:componentContext:runtime:] */

void FUN_105f0ad0c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edf20;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f0ad40; end: 105f0ad8b; -[SCCMapFriendFocusViewView setViewModel:] */

void FUN_105f0ad40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000105f0aecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0ad8c; end: 105f0adcb; -[SCCMapFriendFocusViewView viewModel] */

void FUN_105f0ad8c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f0aecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f0adcc; end: 105f0ae97;  */

void FUN_105f0adcc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105f0ae98; end: 105f0af03;  */

void FUN_105f0ae98(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 105f0af04; end: 105f0af0b; -[SCCMapFriendFocusViewConversationStatusColor__Enum init] */

void FUN_105f0af04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 105f0af0c; end: 105f0af13; -[SCCMapFriendFocusViewFocusCardType__Enum init] */

void FUN_105f0af0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105f0af14; end: 105f0af1b; -[SCCMapFriendFocusViewFriendLocationSharingStatus__Enum init] */

void FUN_105f0af14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105f0af1c; end: 105f0af23; -[SCCMapFriendFocusViewNowPlayingTreatment__Enum init] */

void FUN_105f0af1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105f0af24; end: 105f0af8b; -[SCCMapFriendFocusViewContext initWithNetworkingClient:] */

void FUN_105f0af24(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f0b4a8(PTR_PTR_1126edf28);
  func_0x000105f0b4d0(auStack_20);
  return;
}



/* Entry: 105f0af8c; end: 105f0afaf; +[SCCMapFriendFocusViewContext valdiMarshallableObjectDescriptor] */

void FUN_105f0af8c(undefined8 *param_1)

{
  *param_1 = &PTR_s_networkingClient_1108f7390;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_1108f7618;
  param_1[2] = &PTR_s_od_v_1108f7360;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0afb0; end: 105f0afd3;  */

undefined8 FUN_105f0afb0(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 105f0afd4; end: 105f0b053;  */

void FUN_105f0afd4(undefined8 param_1)

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
  pcStack_38 = FUN_105f0b46c;
  puStack_30 = &UNK_110853170;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105f0b054; end: 105f0b077; -[SCCMapFriendFocusViewConversationStatus init] */

void FUN_105f0b054(void)

{
  func_0x000105f0b4d8(PTR_PTR_1126edf30);
  return;
}



/* Entry: 105f0b078; end: 105f0b08b; +[SCCMapFriendFocusViewConversationStatus valdiMarshallableObjectDescriptor] */

void FUN_105f0b078(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f7698;
  param_1[1] = &PTR_DAT_1108f77b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b08c; end: 105f0b0c7; -[SCCMapFriendFocusViewExternalMetricEvent initWithCardId:] */

void FUN_105f0b08c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f0b4a8(PTR_PTR_1126edf38);
  func_0x000105f0b4d0(auStack_20);
  return;
}



/* Entry: 105f0b0c8; end: 105f0b0db; +[SCCMapFriendFocusViewExternalMetricEvent valdiMarshallableObjectDescriptor] */

void FUN_105f0b0c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f77c8;
  param_1[1] = &PTR_DAT_1108f7870;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b0dc; end: 105f0b11f; -[SCCMapFriendFocusViewFriendCardData initWithFriendId:hasUnreadChat:lastSeen:isSeenJustNow:shouldShowShareLocationButton:] */

void FUN_105f0b0dc(void)

{
  func_0x000105f0b4a8(PTR_PTR_1126edf40);
  func_0x000105f0b4c0();
  return;
}



/* Entry: 105f0b120; end: 105f0b133; +[SCCMapFriendFocusViewFriendCardData valdiMarshallableObjectDescriptor] */

void FUN_105f0b120(undefined8 *param_1)

{
  *param_1 = &PTR_s_friendId_1108f7880;
  param_1[1] = &PTR_DAT_1108f79b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b134; end: 105f0b18f; -[SCCMapFriendFocusViewFriendSectionDataModel initWithDisplayName:lastSeen:userId:isSelf:isBirthday:shouldShowShareLocationButton:isSeenJustNow:hasUnreadChat:] */

void FUN_105f0b134(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edf48;
  uStack_20 = param_1;
  func_0x000105f0b4d0(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105f0b190; end: 105f0b1a3; +[SCCMapFriendFocusViewFriendSectionDataModel valdiMarshallableObjectDescriptor] */

void FUN_105f0b190(undefined8 *param_1)

{
  *param_1 = &PTR_s_displayName_1108f79d0;
  param_1[1] = &PTR_DAT_1108f7b50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b1a4; end: 105f0b1cf; -[SCCMapFriendFocusViewGroupSectionDataModel initWithFriendDataModels:] */

void FUN_105f0b1a4(void)

{
  func_0x000105f0b4a8(PTR_PTR_1126edf50);
  func_0x000105f0b4c0();
  return;
}



/* Entry: 105f0b1d0; end: 105f0b1e3; +[SCCMapFriendFocusViewGroupSectionDataModel valdiMarshallableObjectDescriptor] */

void FUN_105f0b1d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f7b68;
  param_1[1] = &PTR_DAT_1108f7bc8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b1e4; end: 105f0b2ab; -[SCCMapFriendFocusViewMetricsData initWithMapSessionId:mapViewportSessionIdObservable:openSource:getCurrentZoomLevel:externalMetricEventObservable:] */

undefined8 *
FUN_105f0b1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_58 = PTR_PTR_1126edf58;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000105f0b4d0(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105f0b2ac; end: 105f0b2bf; +[SCCMapFriendFocusViewMetricsData valdiMarshallableObjectDescriptor] */

void FUN_105f0b2ac(undefined8 *param_1)

{
  *param_1 = &PTR_s_mapSessionId_1108f7bd8;
  param_1[1] = &PTR_s_SCBridgeObservable_1108f7c80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b2c0; end: 105f0b2f3; -[SCCMapFriendFocusViewNavigationDataModel initWithWalkingTime:drivingTime:] */

void FUN_105f0b2c0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f0b4a8(PTR_PTR_1126edf60);
  func_0x000105f0b4d0(auStack_20);
  return;
}



/* Entry: 105f0b2f4; end: 105f0b307; +[SCCMapFriendFocusViewNavigationDataModel valdiMarshallableObjectDescriptor] */

void FUN_105f0b2f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f7c98;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b308; end: 105f0b347; -[SCCMapFriendFocusViewRankedFriendsData initWithType:isCluster:isSelfInCluster:isSelected:identifier:friendIds:] */

void FUN_105f0b308(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f0b4a8(PTR_PTR_1126edf68);
  func_0x000105f0b4d0(auStack_20);
  return;
}



/* Entry: 105f0b348; end: 105f0b35b; +[SCCMapFriendFocusViewRankedFriendsData valdiMarshallableObjectDescriptor] */

void FUN_105f0b348(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f7d40;
  param_1[1] = &PTR_DAT_1108f7e30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b35c; end: 105f0b38f; -[SCCMapFriendFocusViewReactionsMetricsData initWithReactionIndex:reactionName:isBitmojiReaction:] */

void FUN_105f0b35c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f0b4a8(PTR_PTR_1126edf70);
  func_0x000105f0b4d0(auStack_20);
  return;
}



/* Entry: 105f0b390; end: 105f0b3a3; +[SCCMapFriendFocusViewReactionsMetricsData valdiMarshallableObjectDescriptor] */

void FUN_105f0b390(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f7e40;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b3a4; end: 105f0b3df; -[SCCMapFriendFocusViewUpsellPetConfig initWithVersion:pets:] */

void FUN_105f0b3a4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edf78;
  uStack_20 = param_1;
  func_0x000105f0b4d0(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105f0b3e0; end: 105f0b3f3; +[SCCMapFriendFocusViewUpsellPetConfig valdiMarshallableObjectDescriptor] */

void FUN_105f0b3e0(undefined8 *param_1)

{
  *param_1 = &PTR_s_version_1108f7ea0;
  param_1[1] = &PTR_DAT_1108f7ee8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b3f4; end: 105f0b41f; -[SCCMapFriendFocusViewUpsellPetData initWithIdentifier:name:imageUrl:latitude:longitude:] */

void FUN_105f0b3f4(void)

{
  func_0x000105f0b4a8(PTR_PTR_1126edf80);
  func_0x000105f0b4c0();
  return;
}



/* Entry: 105f0b420; end: 105f0b433; +[SCCMapFriendFocusViewUpsellPetData valdiMarshallableObjectDescriptor] */

void FUN_105f0b420(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_identifier_1108f7ef8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b434; end: 105f0b457; -[SCFocusViewActionHandlers init] */

void FUN_105f0b434(void)

{
  func_0x000105f0b4d8(PTR_PTR_1126edf88);
  return;
}



/* Entry: 105f0b458; end: 105f0b46b; +[SCFocusViewActionHandlers valdiMarshallableObjectDescriptor] */

void FUN_105f0b458(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f7f88;
  param_1[1] = &PTR_DAT_1108f8000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b46c; end: 105f0b497;  */

void FUN_105f0b46c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105f0b498; end: 105f0b4f3;  */

void FUN_105f0b498(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0b4f4; end: 105f0b67f;  */

void FUN_105f0b4f4(double param_1,double param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c5e00;
  _objc_alloc_init(PTR_PTR_1126c5e00);
  func_0x00010bf51c80(param_3);
  func_0x00010c1b9120((float)param_1,puVar1);
  func_0x00010bf51c80(param_3);
  dVar3 = (double)(ulong)(uint)(float)param_2;
  func_0x00010c1be5e0(puVar1);
  func_0x00010bfe4080(param_3);
  dVar3 = (double)(ulong)(uint)(float)dVar3;
  func_0x00010c1a90c0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar3 = dVar3 * 1000.0;
  func_0x00010c215dc0(puVar1);
  _objc_release(puVar2);
  func_0x00010c298e00(param_3);
  if (0.0 <= dVar3) {
    func_0x00010bf01f00(param_3);
    dVar3 = (double)(ulong)(uint)(float)dVar3;
    func_0x00010c167920(puVar1);
    func_0x00010c298e00(param_3);
    dVar3 = (double)(ulong)(uint)(float)dVar3;
    func_0x00010c220fe0(puVar1);
  }
  func_0x00010bf537c0(param_3);
  if (0.0 <= dVar3) {
    func_0x00010bf537c0(param_3);
    dVar3 = (double)(ulong)(uint)(float)dVar3;
    puVar2 = puVar1;
    func_0x00010c0d1200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7b60();
    _objc_release(puVar2);
  }
  func_0x00010c249ca0(param_3);
  if (0.0 <= dVar3) {
    func_0x00010c249ca0(param_3);
    puVar2 = puVar1;
    func_0x00010c0d1200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207c40((float)dVar3);
    _objc_release(puVar2);
  }
  func_0x00010c1b2d00(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f0b680; end: 105f0b6db;  */

bool FUN_105f0b680(double param_1,undefined8 param_2)

{
  bool bVar1;
  
  _objc_retain();
  func_0x00010bfe4080(param_2);
  if (0.0 <= param_1) {
    func_0x00010bfe4080(param_2);
    bVar1 = param_1 < 70.0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 105f0b6dc; end: 105f0b7cf;  */

void FUN_105f0b6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105f0b7d0; end: 105f0b8df;  */

void FUN_105f0b7d0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c2940a0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c294060(*(undefined8 *)(param_1 + 0x28));
  }
  func_0x00010c1a7c20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c154dc0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1b3180(*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126b6728;
  func_0x00010bf60d80(PTR_PTR_1126b6728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225980(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105f0b8e0;
  puStack_40 = &UNK_11084a9e8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_28 = uVar4;
  _objc_retain(uVar3);
  uStack_30 = uVar3;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(uStack_38);
  return;
}



/* Entry: 105f0b8e0; end: 105f0ba9b;  */

void FUN_105f0b8e0(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06d140();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16faa0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16faa0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17500();
  _objc_release(puVar1);
  if (0.0 <= param_1) {
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17500();
    func_0x00010c16f9e0(*(undefined8 *)(param_2 + 0x20));
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf176e0();
  _objc_release(puVar1);
  if (((ulong)puVar3 & 0xfffffffffffffffe) == 2) {
    func_0x00010c18cca0(*(undefined8 *)(param_2 + 0x20),param_3,1);
  }
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16faa0();
    _objc_release(puVar1);
  }
  lVar5 = *(long *)(param_2 + 0x30);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105f0ba9c;
    puStack_60 = &UNK_110849530;
    _objc_retain(lVar5);
    lStack_58 = lVar5;
    func_0x00010c0f7fc0(uVar4,param_3,&puStack_78);
    _objc_release(lStack_58);
  }
  return;
}



/* Entry: 105f0ba9c; end: 105f0bae7;  */

void FUN_105f0ba9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105f0baa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}


