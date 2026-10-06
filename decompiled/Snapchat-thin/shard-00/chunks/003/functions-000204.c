/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10049a86c; end: 10049a873; -[SCChatSnapchattersDataCoordinator addDataUpdateListener:] */

void FUN_10049a86c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10049a874; end: 10049a8b3;  */

void FUN_10049a874(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3ae5c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10049a8b4; end: 10049a9a7; -[SCBitmojiFetchServicesEntryPoint _avatarProvider] */

void FUN_10049a8b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b8318;
  func_0x000107c610f4(PTR_PTR_1126b8318);
  uVar2 = param_1;
  FUN_10049a9a8(param_1);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3e980();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  FUN_10049a9a8(param_1);
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c3e97c();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c49298(puVar1,param_2,uVar4,uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10049a9a8; end: 10049a9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049a9a8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112722858);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10049a9cc; end: 10049a9d3; -[SCUserInfoServices bitmojiAvatarIdProvider] */

undefined8 FUN_10049a9cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10049a9d4; end: 10049aa13;  */

void FUN_10049a9d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3af18();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10049aa14; end: 10049ab3f; -[SCUserInfoServicesEntryPoint _bitmojiAvatarIdProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049aa14(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf530;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf530);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c4d73c(PTR_PTR_1126ae750);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112722ec4);
  func_0x000107c421ac(uVar3);
  func_0x000107c61180();
  func_0x000107c407c8(uVar5,param_2,1,ppuVar1,puVar2,uVar3,&PTR___NSConcreteGlobalBlock_110885488);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  func_0x000107c610f4(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  func_0x000107c61148(param_1);
  lVar4 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c46bcc(puVar2,param_2,lVar4,1,uVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10049ab40; end: 10049aba7; +[RTUSFilteringInComparison descriptor] */

void FUN_10049ab40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0e28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a960,
                        &PTR____CFConstantStringClassReference_110f3dcd8,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e508,3,0x18,0x1c);
    puRam00000001137f0e28 = puVar1;
  }
  return;
}



/* Entry: 10049aba8; end: 10049ad63; -[SCUserInfoDeltaSyncProviderFactory coreUserDataPropertyProviderWithInfoType:userDataId:initialUserInfo:mutatorUpdates:userInfoPropertyProcessor:] */

void FUN_10049aba8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_4);
  func_0x000107c407cc(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  lVar2 = param_4;
  func_0x000107c61170(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c60bd8(lVar2);
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(lVar2 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  return;
}



/* Entry: 10049ad64; end: 10049ad97;  */

void FUN_10049ad64(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  return;
}



/* Entry: 10049ad98; end: 10049ad9f; -[SCUserInfoServices bitmojiAvatarIdMutator] */

undefined8 FUN_10049ad98(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10049ada0; end: 10049ade7;  */

void FUN_10049ada0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3af14();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10049ade8; end: 10049ae4b; -[SCUserInfoServicesEntryPoint _bitmojiAvatarIdMutatorWithBitmojiAvatarIdProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049ade8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8928;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c49104();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10049ae4c; end: 10049aeef; -[SCUserBitmojiAvatarIdMutatorImpl initWithUpdatesPublisher:bitmojiAvatarIdProvider:] */

undefined1 *
FUN_10049ae4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8288;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10049aef0; end: 10049b07f; -[SCBitmojiAvatarProvider initWithUserInfoProvider:bitmojiAvatarIdMutator:] */

undefined8 *
FUN_10049aef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126e7ec0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c41050();
    func_0x000107c61180();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_58,puVar1);
    uVar2 = puVar1[1];
    func_0x000107c6111c(auStack_60,auStack_58);
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10049b080; end: 10049b08f; -[SCUserInfoExperimentConfiguredProvider updates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049b080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28d770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112723030),PTR_s_updates_112681000);
  return;
}



/* Entry: 10049b090; end: 10049b09f; -[SCUserInfoDeltaSyncRepository updates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049b090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112722e8c),PTR_s_target_112678178);
  return;
}



/* Entry: 10049b0a0; end: 10049b0df;  */

void FUN_10049b0a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3cd44();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10049b0e0; end: 10049b2cf; -[SCUserInfoDeltaSyncRepository _updatesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049b0e0(undefined1 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **unaff_x25;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1004e68cc;
  puStack_78 = &UNK_110854530;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar2 = *(long *)(param_1 + _DAT_112722e78);
  func_0x000107c4dfe8();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar2 == 0) {
    func_0x000107c61174(puVar1);
    param_1 = auStack_98;
    puStack_a0 = puVar1;
    func_0x000107c6111c(param_1,auStack_68);
    func_0x000107c41654(puVar4);
    func_0x000107c61180();
    unaff_x25 = &puStack_a0;
  }
  else {
    puVar3 = puVar1;
    func_0x000107c5c734(puVar1);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5bc40();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(lVar2);
  puVar3 = puVar4;
  func_0x000107c421ac(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (lVar2 == 0) {
    func_0x000107c61120(param_1);
    func_0x000107c61170(*unaff_x25);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10049b2d0; end: 10049b31b; +[SCObservable deferred:] */

void FUN_10049b2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2fd0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47b74();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10049b31c; end: 10049b3db; -[SCObservableDeferred initWithObservableBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10049b31c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270e588;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127967c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127967c4) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10049b3dc; end: 10049b53b; -[SCNativeMessagingServicesEntryPoint _userPropertyDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049b3dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + _DAT_1127255b0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4a54c();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if ((int)lVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_1127255ac;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c4e604();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    puVar5 = PTR_PTR_1126ba660;
    func_0x000107c610f4(PTR_PTR_1126ba660);
    param_1 = param_1 + _DAT_1127255b4;
    func_0x000107c61148(param_1);
    lVar1 = param_1;
    func_0x000107c42eac();
    func_0x000107c61180();
    func_0x000107c47e1c(puVar5,param_2,lVar4,lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10049b53c; end: 10049c023; +[SCNMessagingSession create:keyProvider:reEncryptionDelegate:sessionDelegate:conversationManagerDelegate:feedManagerDelegate:communityGroupsFeedManagerDelegate:uploadDelegate:initializeContextInfoDelegate:blizzardLoggerDelegate:queue:taskQueueListenerDelegate:storySendManagerDelegate:identityDelegate:duplex:contentDelegate:sendDelegate:groupsManagerDelegate:bulkCofConfigs:conversationAdsManagerDelegate:mediaFetcher:userPropertyDelegate:massSnapSendManagerDelegate:messageWindowManagerDelegate:mediaPrefetchDelegate:] */

void FUN_10049b53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,long param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  ulong param_21,undefined8 param_22,long param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,long param_27)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int extraout_w10;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  long lStack_2f0;
  undefined8 *puStack_2e8;
  long *plStack_2e0;
  long lStack_2d8;
  float fStack_2d0;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [168];
  undefined1 auStack_110 [16];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  float fStack_88;
  long *plStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_10049c024();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x00010049c02c();
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  FUN_10049c034(auStack_1b8,param_3);
  FUN_10049d14c(auStack_1c8,param_4);
  FUN_10049d328(auStack_1d8,param_5);
  FUN_10049d508(auStack_1e8,param_6);
  FUN_10049d6ec(auStack_1f8,param_7);
  FUN_10049d8d0(auStack_208,param_8);
  FUN_10049d8d0(auStack_218,param_9);
  FUN_10049dab8(auStack_228,param_10);
  FUN_10049dc98(auStack_238,param_11);
  FUN_10049de7c(auStack_248,param_12);
  FUN_10049e05c(auStack_258,param_13);
  FUN_10049c024();
  if (param_14 == 0) {
    uStack_260 = 0;
    uStack_268 = 0;
  }
  else {
    FUN_10049e288(&uStack_268,param_14);
  }
  FUN_10049e468();
  FUN_10049e470(auStack_278,param_15);
  FUN_10049e650(auStack_288,param_16);
  FUN_10049e82c(auStack_298,param_17);
  FUN_10049e924(auStack_2a8,param_18);
  FUN_10049eb04(auStack_2b8,param_19);
  FUN_10049ece4(auStack_2c8,param_20);
  FUN_10049c024();
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x5812000000;
  puStack_c0 = &UNK_10863d468;
  puStack_b8 = &UNK_10863d4d4;
  pcStack_b0 = "";
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  fStack_88 = 1.0;
  uVar4 = param_21;
  func_0x000107c40808(param_21);
  FUN_10049eec4(&uStack_a8,(long)((float)uVar4 / fStack_88));
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_10049f084;
  puStack_e8 = &UNK_110a5f090;
  puStack_e0 = &uStack_d8;
  func_0x000107c429c4(param_21);
  puVar9 = puStack_d0;
  puStack_2e8 = (undefined8 *)0x0;
  lStack_2f0 = 0;
  lStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  fStack_2d0 = *(float *)(puStack_d0 + 10);
  FUN_10049eec4(&lStack_2f0,puStack_d0[7]);
  puVar12 = puVar9 + 8;
LAB_10049b8a8:
  do {
    puVar11 = puStack_2e8;
    puVar12 = (undefined8 *)*puVar12;
    if (puVar12 == (undefined8 *)0x0) {
      func_0x00010049f348();
      FUN_10049f354(&uStack_a8);
      FUN_10049f3b0();
      FUN_10049f3b8(&uStack_d8,param_22);
      func_0x00010049c02c();
      if (param_23 == 0) {
        puStack_100 = (undefined *)0x0;
        uStack_f8 = 0;
      }
      else {
        func_0x000107c2bdec(&puStack_100,param_23);
      }
      func_0x00010049f594();
      FUN_10049f59c(&plStack_80,param_24);
      FUN_10049f654(auStack_300,param_25);
      FUN_10049f708(auStack_310,param_26);
      func_0x00010049c02c();
      if (param_27 == 0) {
        uStack_320 = 0;
        uStack_318 = 0;
      }
      else {
        FUN_10049f7c0(&uStack_320,param_27);
      }
      func_0x00010049f594();
      FUN_10049f9bc(auStack_110,auStack_1b8,auStack_1c8,auStack_1d8,auStack_1e8,auStack_1f8,
                    auStack_208,auStack_218,auStack_228,auStack_238,auStack_248,auStack_258,
                    &uStack_268,auStack_278,auStack_288,auStack_298,auStack_2a8,auStack_2b8,
                    auStack_2c8,&lStack_2f0,&uStack_d8,&puStack_100,&plStack_80,auStack_300,
                    auStack_310,&uStack_320);
      func_0x0001005f1e04(&uStack_320);
      FUN_100565a6c(auStack_310);
      func_0x0001005f1e28(auStack_300);
      func_0x0001005f1e4c(&plStack_80);
      FUN_1005f1e7c(&puStack_100);
      FUN_1005f1ea8(&uStack_d8);
      FUN_1005f1ecc();
      FUN_1005528f8(auStack_2c8);
      func_0x0001005f12f0(auStack_2b8);
      FUN_1005590d0(auStack_2a8);
      FUN_10048d450(auStack_298);
      func_0x000100558bdc(auStack_288);
      FUN_100566f00(auStack_278);
      func_0x0001005656d8(&uStack_268);
      FUN_100554470(auStack_258);
      func_0x0001005635d4(auStack_248);
      func_0x0001005f1314(auStack_238);
      func_0x000100568ba4(auStack_228);
      FUN_10054fff0(auStack_218);
      FUN_10054fff0(auStack_208);
      func_0x000100568bc8(auStack_1f8);
      FUN_1005f236c(auStack_1e8);
      func_0x0001005657d0(auStack_1d8);
      func_0x00010056251c(auStack_1c8);
      func_0x0001005f2390(auStack_1b8);
      puVar3 = auStack_110;
      FUN_1005f244c(puVar3);
      func_0x000107c61180();
      FUN_1005f25dc(auStack_110);
      func_0x000107c61170(param_27);
      func_0x000107c61170(param_26);
      func_0x000107c61170(param_25);
      func_0x000107c61170(param_24);
      func_0x000107c61170(param_23);
      func_0x000107c61170(param_22);
      FUN_10049f3b0();
      func_0x000107c61170(param_20);
      func_0x000107c61170(param_19);
      func_0x000107c61170(param_18);
      func_0x000107c61170(param_17);
      func_0x000107c61170(param_16);
      func_0x000107c61170(param_15);
      func_0x000107c61170(param_14);
      func_0x000107c61170(param_13);
      func_0x000107c61170(param_12);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_6);
      FUN_10049f2ec();
      FUN_10049e468();
      func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return;
    }
    iVar1 = *(int *)(puVar12 + 2);
    puVar10 = (undefined8 *)(long)iVar1;
    if (puStack_2e8 != (undefined8 *)0x0) {
      uVar4 = (long)puStack_2e8 - 1;
      if (((ulong)puStack_2e8 & uVar4) == 0) {
        puVar9 = (undefined8 *)(uVar4 & (ulong)puVar10);
      }
      else {
        puVar9 = puVar10;
        if (puStack_2e8 <= puVar10) {
          uVar2 = 0;
          if (puStack_2e8 != (undefined8 *)0x0) {
            uVar2 = (ulong)puVar10 / (ulong)puStack_2e8;
          }
          puVar9 = (undefined8 *)((long)puVar10 - uVar2 * (long)puStack_2e8);
        }
      }
      plVar6 = *(long **)(lStack_2f0 + (long)puVar9 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          while( true ) {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_10049b940;
            puVar8 = (undefined8 *)plVar6[1];
            if (puVar8 != puVar10) break;
            if (*(int *)(plVar6 + 2) == iVar1) goto LAB_10049b8a8;
          }
          if (((ulong)puStack_2e8 & uVar4) == 0) {
            puVar8 = (undefined8 *)((ulong)puVar8 & uVar4);
          }
          else if (puStack_2e8 <= puVar8) {
            uVar2 = 0;
            if (puStack_2e8 != (undefined8 *)0x0) {
              uVar2 = (ulong)puVar8 / (ulong)puStack_2e8;
            }
            puVar8 = (undefined8 *)((long)puVar8 - uVar2 * (long)puStack_2e8);
          }
        } while (puVar8 == puVar9);
      }
    }
LAB_10049b940:
    plVar6 = (long *)0x28;
    func_0x000107c60e20();
    uStack_70 = 1;
    *plVar6 = 0;
    plVar6[1] = (long)puVar10;
    *(int *)(plVar6 + 2) = iVar1;
    lVar5 = puVar12[4];
    lVar13 = puVar12[3];
    plVar6[4] = puVar12[4];
    plVar6[3] = lVar13;
    plStack_80 = plVar6;
    pplStack_78 = &plStack_2e0;
    if (lVar5 != 0) {
      do {
        FUN_10049f338();
      } while (extraout_w10 != 0);
    }
    if ((puVar11 == (undefined8 *)0x0) || (fStack_2d0 * (float)puVar11 < (float)(lStack_2d8 + 1))) {
      func_0x000107c31b94((long)puVar11 << 1);
      FUN_10049eec4(&lStack_2f0);
      puVar11 = puStack_2e8;
      if (((ulong)puStack_2e8 & (long)puStack_2e8 - 1U) == 0) {
        puVar9 = (undefined8 *)((long)puStack_2e8 - 1U & (ulong)puVar10);
      }
      else {
        puVar9 = puVar10;
        if (puStack_2e8 <= puVar10) {
          uVar4 = 0;
          if (puStack_2e8 != (undefined8 *)0x0) {
            uVar4 = (ulong)puVar10 / (ulong)puStack_2e8;
          }
          puVar9 = (undefined8 *)((long)puVar10 - uVar4 * (long)puStack_2e8);
        }
      }
    }
    plVar7 = *(long **)(lStack_2f0 + (long)puVar9 * 8);
    if (plVar7 == (long *)0x0) {
      *plVar6 = (long)plStack_2e0;
      *(long ***)(lStack_2f0 + (long)puVar9 * 8) = &plStack_2e0;
      plStack_2e0 = plVar6;
      if (*plVar6 != 0) {
        puVar10 = *(undefined8 **)(*plVar6 + 8);
        if (((ulong)puVar11 & (long)puVar11 - 1U) == 0) {
          puVar10 = (undefined8 *)((ulong)puVar10 & (long)puVar11 - 1U);
        }
        else if (puVar11 <= puVar10) {
          uVar4 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            uVar4 = (ulong)puVar10 / (ulong)puVar11;
          }
          puVar10 = (undefined8 *)((long)puVar10 - uVar4 * (long)puVar11);
        }
        *(long **)(lStack_2f0 + (long)puVar10 * 8) = plVar6;
      }
    }
    else {
      *plVar6 = *plVar7;
      *plVar7 = (long)plVar6;
    }
    plStack_80 = (long *)0x0;
    lStack_2d8 = lStack_2d8 + 1;
    FUN_10049f2f4(&plStack_80);
  } while( true );
}



/* Entry: 10049c024; end: 10049c033;  */

void FUN_10049c024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10049c034; end: 10049c26f;  */

void FUN_10049c034(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c41310(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(auStack_78);
  uVar2 = param_2;
  func_0x000107c5d984(param_2);
  func_0x000107c61180();
  FUN_10049c280(auStack_90);
  uVar3 = param_2;
  func_0x000107c5d8e8(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(auStack_a8);
  uVar4 = param_2;
  func_0x000107c413c4(param_2);
  uVar5 = param_2;
  func_0x000107c5d0d0(param_2);
  func_0x000107c61180();
  FUN_10049c31c(auStack_d8);
  uVar6 = param_2;
  func_0x000107c3fd18(param_2);
  func_0x000107c61180();
  FUN_10049ceec(auStack_f8);
  func_0x000107c4ab8c(param_2);
  func_0x000107c61180();
  uVar7 = param_2;
  FUN_10049cfa8();
  FUN_10049d00c(param_1,auStack_78,auStack_90,auStack_a8,uVar4,auStack_d8,auStack_f8,
                uVar7 & 0xffffffffff);
  func_0x000107c61170(param_2);
  FUN_10049d10c(auStack_f8);
  func_0x000107c61170(uVar6);
  func_0x00010049d12c(auStack_d8);
  func_0x000107c61170(uVar5);
  func_0x000107c60ca0(auStack_a8);
  func_0x000107c61170(uVar3);
  FUN_100100fec(auStack_90);
  func_0x000107c61170(uVar2);
  func_0x000107c60ca0(auStack_78);
  func_0x000107c61170(uVar1);
  FUN_10049cedc();
  return;
}



/* Entry: 10049c270; end: 10049c277; -[SCNMessagingSessionParameters databaseLocation] */

undefined8 FUN_10049c270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10049c278; end: 10049c27f; -[SCNMessagingSessionParameters userId] */

undefined8 FUN_10049c278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10049c280; end: 10049c2ef;  */

void FUN_10049c280(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c44fc8();
  func_0x000107c61180();
  FUN_10029a6ec(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  FUN_100100fec(&uStack_40);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10049c2f0; end: 10049c2f7; -[SCNMessagingUUID id] */

undefined8 FUN_10049c2f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10049c2f8; end: 10049c2ff; -[SCNMessagingSessionParameters userAgentPrefix] */

undefined8 FUN_10049c2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10049c300; end: 10049c307; -[SCNMessagingSessionParameters debug] */

undefined1 FUN_10049c300(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10049c308; end: 10049c31b; -[SCNMessagingSessionParameters tweaks] */

undefined8 FUN_10049c308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10049c31c; end: 10049c383;  */

void FUN_10049c31c(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_48 [40];
  
  func_0x00010049c310();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x28] = 0;
  }
  else {
    FUN_10049c384(auStack_48);
    FUN_10049cec0();
    func_0x00010049cddc(auStack_48);
  }
  FUN_10049cedc();
  return;
}



/* Entry: 10049c384; end: 10049c3df;  */

void FUN_10049c384(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  func_0x000107c5d0d0();
  func_0x000107c61180();
  FUN_10049c3e8(auStack_48);
  func_0x00010049ce50(param_1,auStack_48);
  func_0x00010049cddc(auStack_48);
  func_0x00010049c7cc();
  return;
}



/* Entry: 10049c3e0; end: 10049c3e7; -[SCNMessagingTweaks tweaks] */

undefined8 FUN_10049c3e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10049c3e8; end: 10049c4ef;  */

void FUN_10049c3e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x000107c61174();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  puStack_70 = &UNK_1086412b0;
  puStack_68 = &UNK_1086412bc;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0x3f800000;
  uVar1 = param_2;
  func_0x000107c40808(param_2);
  FUN_10049c4f0(&uStack_58,uVar1);
  func_0x000107c429c4(param_2);
  FUN_10049cac0(param_1,puStack_80 + 6);
  func_0x00010049cd98();
  func_0x00010049cddc(&uStack_58);
  func_0x00010049c7cc();
  return;
}



/* Entry: 10049c4f0; end: 10049c503;  */

void FUN_10049c4f0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = (ulong)((float)param_2 / *(float *)(param_1 + 4));
  if (uVar1 - 1 == 0) {
    uVar1 = 2;
  }
  else if ((uVar1 & uVar1 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar8 = param_1[1];
  if (uVar1 <= uVar8) {
    if (uVar1 < uVar8) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        func_0x000107c60c44();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      if (uVar1 < uVar8) goto LAB_10049c54c;
    }
    return;
  }
LAB_10049c54c:
  if (uVar1 == 0) {
    FUN_10049c6e8(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10049c5cc(plVar3);
    FUN_10049c6e8(param_1,plVar3);
    param_1[1] = uVar1;
    lVar2 = *param_1;
    for (uVar8 = 0; uVar1 != uVar8; uVar8 = uVar8 + 1) {
      *(undefined8 *)(lVar2 + uVar8 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = uVar1 - 1;
      uVar8 = 0;
      if (uVar1 != 0) {
        uVar8 = uVar6 / uVar1;
      }
      uVar7 = uVar6;
      if (uVar1 <= uVar6) {
        uVar7 = uVar6 - uVar8 * uVar1;
      }
      if ((uVar1 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar2 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar8 = plVar3[1];
        if ((uVar1 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
        }
        else if (uVar1 <= uVar8) {
          uVar6 = 0;
          if (uVar1 != 0) {
            uVar6 = uVar8 / uVar1;
          }
          uVar8 = uVar8 - uVar6 * uVar1;
        }
        if (uVar8 != uVar7) {
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar4;
            uVar7 = uVar8;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10049c504; end: 10049c5cb;  */

void FUN_10049c504(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        func_0x000107c60c44();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_10049c54c;
    }
    return;
  }
LAB_10049c54c:
  if (param_2 == 0) {
    FUN_10049c6e8(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_10049c5cc(plVar2);
    FUN_10049c6e8(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10049c5cc; end: 10049c5e7;  */

void FUN_10049c5cc(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      FUN_10049c6e8(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_10049c5cc(plVar3);
      FUN_10049c6e8(param_1,plVar3);
      param_1[1] = param_2;
      lVar1 = *param_1;
      for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
      }
      plVar3 = (long *)param_1[2];
      if (plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        uVar5 = param_2 - 1;
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar7 = uVar6;
        if (param_2 <= uVar6) {
          uVar7 = uVar6 - uVar2 * param_2;
        }
        if ((param_2 & uVar5) == 0) {
          uVar7 = uVar6 & uVar5;
        }
        *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
        while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if ((param_2 & uVar5) == 0) {
            uVar2 = uVar2 & uVar5;
          }
          else if (param_2 <= uVar2) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar2 / param_2;
            }
            uVar2 = uVar2 - uVar6 * param_2;
          }
          if (uVar2 != uVar7) {
            if (*(long *)(lVar1 + uVar2 * 8) == 0) {
              *(long **)(lVar1 + uVar2 * 8) = plVar4;
              uVar7 = uVar2;
            }
            else {
              *plVar4 = *plVar3;
              *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
              **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
              plVar3 = plVar4;
            }
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 10049c5e8; end: 10049c6e7;  */

void FUN_10049c5e8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10049c6e8(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10049c5cc(plVar3);
    FUN_10049c6e8(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10049c6e8; end: 10049c6ff;  */

void FUN_10049c6e8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10049c700; end: 10049c78b;  */

void FUN_10049c700(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c61174(param_3);
  uStack_34 = param_2;
  FUN_10049c78c();
  FUN_1000fbca4(auStack_50,param_3);
  func_0x00010049c7cc();
  func_0x00010049c97c(lVar1 + 0x30,&uStack_34,auStack_50);
  func_0x000107c60ca0(auStack_50);
  return;
}



/* Entry: 10049c78c; end: 10049c7c3;  */

undefined8 FUN_10049c78c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000107c49804(param_1);
  FUN_10049c7c4();
  return param_1;
}



/* Entry: 10049c7c4; end: 10049c7df;  */

void FUN_10049c7c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049c7e0; end: 10049c95b;  */

undefined1  [16] FUN_10049c7e0(float param_1,float param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar5;
  ulong uVar6;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar7;
  long *unaff_x21;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  undefined1 auStack_58 [24];
  
  iVar1 = *param_4;
  uVar7 = (ulong)iVar1;
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    func_0x00010049c7d4();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar4 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar8;
          if (unaff_x21 == (long *)0x0) goto LAB_10049c884;
          uVar6 = unaff_x21[1];
          plVar8 = unaff_x21;
          if (uVar6 != uVar7) break;
          if (*(int *)(unaff_x21 + 2) == iVar1) {
            uVar3 = 0;
            goto LAB_10049c944;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          func_0x000107c31bd4();
          uVar4 = extraout_x8_00;
          uVar6 = extraout_x9;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_10049c884:
  FUN_10049c994(auStack_58,param_3,uVar7);
  FUN_10049ca08();
  if ((uVar9 == 0) || (param_2 * (float)uVar9 < param_1)) {
    func_0x000107c31bcc();
    uVar2 = uVar9 == 3;
    func_0x000107c31bc8();
    FUN_10049c504(param_3);
    uVar9 = param_3[1];
    func_0x00010049c7d4();
    if ((bool)uVar2) {
      unaff_x23 = extraout_x8_01 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x00010049ca1c();
    if (extraout_x9_00 != 0) {
      uVar7 = *(ulong *)(extraout_x9_00 + 8);
      lVar5 = extraout_x8_02;
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        func_0x000107c31bd4();
        lVar5 = extraout_x8_03;
        uVar7 = extraout_x9_01;
      }
      *(long **)(lVar5 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00010049caac();
  }
  func_0x00010049ca3c();
  uVar3 = 1;
LAB_10049c944:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = unaff_x21;
  return auVar10;
}



/* Entry: 10049c95c; end: 10049c993;  */

void FUN_10049c95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10049c7e0(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10049c994; end: 10049ca07;  */

void FUN_10049c994(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *param_4;
  uVar2 = *param_5;
  puVar1[4] = param_5[1];
  puVar1[3] = uVar2;
  puVar1[5] = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  return;
}



/* Entry: 10049ca08; end: 10049ca6b;  */

float FUN_10049ca08(void)

{
  long unaff_x19;
  
  return (float)(*(long *)(unaff_x19 + 0x18) + 1);
}



/* Entry: 10049ca6c; end: 10049ca8f;  */

undefined8 FUN_10049ca6c(undefined8 param_1)

{
  func_0x00010049ca54(param_1,0);
  return param_1;
}



/* Entry: 10049ca90; end: 10049cabf;  */

void FUN_10049ca90(void)

{
  return;
}



/* Entry: 10049cac0; end: 10049cb17;  */

undefined8 * FUN_10049cac0(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10049c504(param_1,*(undefined8 *)(param_2 + 8));
  FUN_10049ccc8(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 10049cb18; end: 10049cc93;  */

undefined1  [16] FUN_10049cb18(float param_1,float param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar5;
  ulong uVar6;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar7;
  long *unaff_x21;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  undefined1 auStack_58 [24];
  
  iVar1 = *param_4;
  uVar7 = (ulong)iVar1;
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    func_0x00010049c7d4();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar4 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar8;
          if (unaff_x21 == (long *)0x0) goto LAB_10049cbbc;
          uVar6 = unaff_x21[1];
          plVar8 = unaff_x21;
          if (uVar6 != uVar7) break;
          if (*(int *)(unaff_x21 + 2) == iVar1) {
            uVar3 = 0;
            goto LAB_10049cc7c;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          func_0x000107c31bd4();
          uVar4 = extraout_x8_00;
          uVar6 = extraout_x9;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_10049cbbc:
  FUN_10049cd08(auStack_58,param_3,uVar7);
  FUN_10049ca08();
  if ((uVar9 == 0) || (param_2 * (float)uVar9 < param_1)) {
    func_0x000107c31bcc();
    uVar2 = uVar9 == 3;
    func_0x000107c31bc8();
    FUN_10049c504(param_3);
    uVar9 = param_3[1];
    func_0x00010049c7d4();
    if ((bool)uVar2) {
      unaff_x23 = extraout_x8_01 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x00010049ca1c();
    if (extraout_x9_00 != 0) {
      uVar7 = *(ulong *)(extraout_x9_00 + 8);
      lVar5 = extraout_x8_02;
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        func_0x000107c31bd4();
        lVar5 = extraout_x8_03;
        uVar7 = extraout_x9_01;
      }
      *(long **)(lVar5 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00010049caac();
  }
  func_0x00010049ca3c();
  uVar3 = 1;
LAB_10049cc7c:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = unaff_x21;
  return auVar10;
}



/* Entry: 10049cc94; end: 10049ccc7;  */

void FUN_10049cc94(undefined8 param_1,undefined8 param_2)

{
  FUN_10049cb18(param_1,param_2,param_2);
  return;
}



/* Entry: 10049ccc8; end: 10049cd07;  */

void FUN_10049ccc8(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x00010049ccb0(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10049cd08; end: 10049cd63;  */

void FUN_10049cd08(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10049cd64(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10049cd64; end: 10049cd8b;  */

undefined4 * FUN_10049cd64(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c60c94(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10049cd8c; end: 10049cda3;  */

void FUN_10049cd8c(void)

{
  return;
}



/* Entry: 10049cda4; end: 10049ce03;  */

void FUN_10049cda4(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    func_0x000107c60ca0(param_2 + 3);
    func_0x000107c60e14(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10049ce04; end: 10049ce23;  */

void FUN_10049ce04(void)

{
  return;
}



/* Entry: 10049ce24; end: 10049ce47;  */

undefined8 FUN_10049ce24(undefined8 param_1)

{
  func_0x00010049ce0c(param_1,0);
  return param_1;
}



/* Entry: 10049ce48; end: 10049cebf;  */

void FUN_10049ce48(void)

{
  return;
}



/* Entry: 10049cec0; end: 10049cedb;  */

void FUN_10049cec0(long param_1)

{
  func_0x00010049ce50();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10049cedc; end: 10049cee3;  */

void FUN_10049cedc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049cee4; end: 10049ceeb; -[SCNMessagingSessionParameters cofOverrides] */

undefined8 FUN_10049cee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10049ceec; end: 10049cf67;  */

void FUN_10049ceec(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010049c310();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 0;
  }
  else {
    func_0x000107c31304(&uStack_40);
    unaff_x20[1] = uStack_38;
    *unaff_x20 = uStack_40;
    unaff_x20[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 1;
    func_0x000107c286c0(&uStack_40);
  }
  FUN_10049cedc();
  return;
}



/* Entry: 10049cf68; end: 10049cf6f; -[SCNMessagingSessionParameters launchTrigger] */

undefined8 FUN_10049cf68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10049cf70; end: 10049cfa7;  */

undefined8 FUN_10049cf70(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000107c49820(param_1);
  FUN_10049cedc();
  return param_1;
}



/* Entry: 10049cfa8; end: 10049cfc7;  */

ulong FUN_10049cfa8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_10049cf70();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 10049cfc8; end: 10049cfdb;  */

void FUN_10049cfc8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x00010049ce50();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10049cfdc; end: 10049d00b;  */

undefined1 * FUN_10049cfdc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_10049cfc8();
  return param_1;
}



/* Entry: 10049d00c; end: 10049d0ab;  */

undefined8 *
FUN_10049d00c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[8] = param_4[2];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *(undefined1 *)(param_1 + 9) = param_5;
  FUN_10049cfdc(param_1 + 10,param_6);
  FUN_10049d0dc(param_1 + 0x10,param_7);
  param_1[0x14] = param_8;
  return param_1;
}



/* Entry: 10049d0ac; end: 10049d0c7;  */

void FUN_10049d0ac(long param_1)

{
  func_0x00010049ce50();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10049d0c8; end: 10049d0db;  */

void FUN_10049d0c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 10049d0dc; end: 10049d10b;  */

undefined1 * FUN_10049d0dc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10049d0c8();
  return param_1;
}



/* Entry: 10049d10c; end: 10049d14b;  */

void FUN_10049d10c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c286c0();
  }
  return;
}



/* Entry: 10049d14c; end: 10049d1f7;  */

void FUN_10049d14c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5fcf8;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049d1f8);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049d2f4(&uStack_50);
  }
  FUN_10049d320();
  return;
}



/* Entry: 10049d1f8; end: 10049d2eb;  */

void FUN_10049d1f8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5fd38;
  puVar4[3] = &PTR_DAT_110a5fde8;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  FUN_10049d2ec();
  puVar4[3] = &PTR_DAT_110a5fd88;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049d2f4(&uStack_50);
  return;
}



/* Entry: 10049d2ec; end: 10049d2f3;  */

void FUN_10049d2ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049d2f4; end: 10049d31f;  */

long FUN_10049d2f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049d320; end: 10049d327;  */

void FUN_10049d320(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049d328; end: 10049d3d7;  */

void FUN_10049d328(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5ebd0;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049d3d8);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049d4d4(&uStack_50);
  }
  FUN_10049d500();
  return;
}



/* Entry: 10049d3d8; end: 10049d4cb;  */

void FUN_10049d3d8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5ec10;
  puVar4[3] = &PTR_DAT_110a5ec98;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  FUN_10049d4cc();
  puVar4[3] = &PTR_DAT_110a5ec60;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049d4d4(&uStack_50);
  return;
}



/* Entry: 10049d4cc; end: 10049d4d3;  */

void FUN_10049d4cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049d4d4; end: 10049d4ff;  */

long FUN_10049d4d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049d500; end: 10049d507;  */

void FUN_10049d500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049d508; end: 10049d5b7;  */

void FUN_10049d508(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5f118;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049d5b8);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049d6b8(&uStack_50);
  }
  FUN_10049d6e4();
  return;
}



/* Entry: 10049d5b8; end: 10049d6b7;  */

void FUN_10049d5b8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5f158;
  puVar4[3] = &PTR_DAT_110a5f1e0;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5f1a8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049d6b8(&uStack_50);
  return;
}



/* Entry: 10049d6b8; end: 10049d6e3;  */

long FUN_10049d6b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049d6e4; end: 10049d6eb;  */

void FUN_10049d6e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049d6ec; end: 10049d79b;  */

void FUN_10049d6ec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5c230;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049d79c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049d89c(&uStack_50);
  }
  FUN_10049d8c8();
  return;
}



/* Entry: 10049d79c; end: 10049d893;  */

void FUN_10049d79c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5c270;
  puVar4[3] = &PTR_DAT_110a5c318;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  FUN_10049d894();
  puVar4[3] = &PTR_DAT_110a5c2c0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049d89c(&uStack_50);
  return;
}



/* Entry: 10049d894; end: 10049d89b;  */

void FUN_10049d894(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049d89c; end: 10049d8c7;  */

long FUN_10049d89c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049d8c8; end: 10049d8cf;  */

void FUN_10049d8c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049d8d0; end: 10049d97f;  */

void FUN_10049d8d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5c628;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049d980);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049da84(&uStack_50);
  }
  FUN_10049dab0();
  return;
}



/* Entry: 10049d980; end: 10049da83;  */

void FUN_10049d980(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5c668;
  puVar4[3] = &PTR_DAT_110a5c6e8;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5c6b8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049da84(&uStack_50);
  return;
}



/* Entry: 10049da84; end: 10049daaf;  */

long FUN_10049da84(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049dab0; end: 10049dab7;  */

void FUN_10049dab0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049dab8; end: 10049db63;  */

void FUN_10049dab8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5f878;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049db64);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049dc64(&uStack_50);
  }
  FUN_10049dc90();
  return;
}



/* Entry: 10049db64; end: 10049dc63;  */

void FUN_10049db64(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5f8b8;
  puVar4[3] = &PTR_DAT_110a5f948;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5f908;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049dc64(&uStack_50);
  return;
}


