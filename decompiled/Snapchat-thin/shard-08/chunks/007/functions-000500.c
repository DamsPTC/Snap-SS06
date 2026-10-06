/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065629a0; end: 1065629bf; +[SCCCreateGroupCardContext valdiMarshallableObjectDescriptor] */

void FUN_1065629a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11092ac28;
  param_1[1] = &PTR_s_SCBridgeObservable_11092acd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1065629c0; end: 1065629fb; -[SCCCreateGroupCardViewModel initWithIsGroupCreator:] */

void FUN_1065629c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f1b88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 1065629fc; end: 106562b33; +[SCCCreateGroupCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_1065629fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11092ace8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106562b34; end: 106562c27; -[SCChatLockedConversationAlertScope initWithCurrentUserSnapchatter:group:delegate:uiContainer:] */

undefined1 *
FUN_106562b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1b90;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
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



/* Entry: 106562c28; end: 106562c2f; -[SCChatLockedConversationAlertScope currentUserSnapchatter] */

undefined8 FUN_106562c28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106562c30; end: 106562c37; -[SCChatLockedConversationAlertScope group] */

undefined8 FUN_106562c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106562c38; end: 106562c4f; -[SCChatLockedConversationAlertScope delegate] */

void FUN_106562c38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106562c50; end: 106562c57; -[SCChatLockedConversationAlertScope uiContainer] */

undefined8 FUN_106562c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106562c58; end: 106562c9b; -[SCChatLockedConversationAlertScope .cxx_destruct] */

void FUN_106562c58(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106562c9c; end: 10656302f; -[SCChatLegalHoldBadgeView initWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106562c9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126f1b98;
  dVar17 = *(double *)PTR__CGRectZero_110347608;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(dVar17,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    func_0x00010c21e900(puVar1);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar16 = (long)_DAT_11274a6fc;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar15);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar16));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c165e00(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = -4.0;
    uVar13 = uVar11;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(puVar3);
    _objc_release(uVar4);
    func_0x00010c161020(puVar1);
    func_0x00010c1af000(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  puStack_108 = PTR_PTR_1126f1b98;
  puStack_110 = param_3;
  _objc_msgSendSuper2(&puStack_110,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar17 * 0.5);
  _objc_release(param_3);
  return param_3;
}



/* Entry: 106563030; end: 1065630af; -[SCChatLegalHoldBadgeView layoutSubviews] */

void FUN_106563030(double param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1b98;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(param_2);
  return;
}



/* Entry: 1065630b0; end: 1065630c3; -[SCChatLegalHoldBadgeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065630b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a6fc,0);
  return;
}



/* Entry: 1065630c4; end: 106563503; -[SCChatViewHeader initWithDelegate:headerDelegate:headerDataSource:headerStyle:parentView:uberAvatarScopeServices:uberAvatarScopeExposer:userTrackedLogger:composerRuntime:chatTooltipsService:useAsyncWaitUntilRenderCompleted:] */

undefined8 *
FUN_1065630c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_80 = PTR_PTR_1126f1ba0;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_13);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_13;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_4);
    _objc_retain(param_12);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_12;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 1,param_8);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(param_8);
    _CGRectGetWidth();
    uVar2 = param_1;
    func_0x00010be34f80(puVar1);
    func_0x00010c013de0(0,0,param_1,uVar2);
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    func_0x00010c16d4a0(puVar1[5]);
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained(puVar4);
    func_0x00010befbb60();
    _objc_release(puVar4);
    _objc_initWeak(auStack_90,puVar1);
    puVar5 = PTR_PTR_1126ae720;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106563504;
    puStack_a0 = &UNK_11092ad30;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x106563544;
    puStack_c8 = &UNK_110858d90;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar5;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x27];
    puVar1[0x27] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_11;
    _objc_release(uVar2);
    func_0x00010be39600(puVar1);
    func_0x00010be39d60(puVar1);
    func_0x00010be39480(puVar1);
    func_0x00010be394a0(puVar1);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106563504; end: 1065635c3;  */

void FUN_106563504(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065635c4; end: 106563823; -[SCChatViewHeader _initHeaderWithDelegate:headerStyle:] */

void FUN_1065635c4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  puVar1 = PTR_PTR_1126c31a0;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x28));
  _CGRectGetWidth();
  dVar6 = param_1;
  func_0x00010be34d40(param_2);
  dVar7 = dVar6;
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c014f40(0,0,param_1,dVar6,dVar7 + 2.0);
  uVar5 = *(undefined8 *)(param_2 + 0x170);
  *(undefined **)(param_2 + 0x170) = puVar1;
  _objc_release(uVar5);
  func_0x00010c16d4a0();
  if (param_5 == 3) {
    func_0x00010bcbeb30();
    uVar5 = *(undefined8 *)(param_2 + 0x170);
    func_0x00010bfe00a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(uVar5);
  }
  lVar2 = param_2 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf1fb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280(*(undefined8 *)(param_2 + 0x170));
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf1fc40();
  func_0x00010c173360(*(undefined8 *)(param_2 + 0x170));
  _objc_release(lVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dbb9d8;
  func_0x00010c160fc0(*(undefined8 *)(param_2 + 0x170));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb9d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_2 + 0x170));
  _objc_release(ppuVar4);
  func_0x00010c189840(*(undefined8 *)(param_2 + 0x170));
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x170));
  _objc_release(param_4);
  func_0x00010c184340(*(undefined8 *)(param_2 + 0x170));
  uVar5 = *(undefined8 *)(param_2 + 0x170);
  func_0x00010c140900(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x170);
  func_0x00010c08e4a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  uVar5 = *(undefined8 *)(param_2 + 0x118);
  *(undefined **)(param_2 + 0x118) = puVar1;
  _objc_release(uVar5);
  func_0x00010c1c8340(0,*(undefined8 *)(param_2 + 0x118));
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x118));
  func_0x00010bef9040(*(undefined8 *)(param_2 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x28),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_2 + 0x170));
  return;
}



/* Entry: 106563824; end: 106563fcb; -[SCChatViewHeader _createSubtext] */

void FUN_106563824(long param_1)

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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c160fc0();
  func_0x00010c219b60(puVar1);
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  uVar25 = *(undefined8 *)(param_1 + 0x120);
  *(undefined **)(param_1 + 0x120) = puVar2;
  _objc_release(uVar25);
  func_0x00010c1c8340(0,*(undefined8 *)(param_1 + 0x120));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x120));
  func_0x00010bef9040(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3);
  _objc_release(puVar2);
  func_0x00010c16e060(puVar3);
  func_0x00010c190b80(puVar3);
  func_0x00010c166c00(puVar3);
  func_0x00010c207380(0,puVar3);
  func_0x00010c219b60(puVar3);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  uVar25 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined **)(param_1 + 0xb8) = puVar2;
  _objc_release(uVar25);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c181f00(0x443b8000,*(undefined8 *)(param_1 + 0xb8));
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  uVar25 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar2;
  _objc_release(uVar25);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + 0xb0));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0xb0));
  _objc_release(puVar2);
  func_0x00010c165e00(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c181f00(0x443b8000,*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + 0xb0));
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  uVar25 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar2;
  _objc_release(uVar25);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + 0xc0));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + 0xc0));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0xc0));
  _objc_release(puVar2);
  func_0x00010c165e00(*(undefined8 *)(param_1 + 0xc0));
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0xc0));
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + 0xc0));
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  uVar25 = *(undefined8 *)(param_1 + 200);
  *(undefined **)(param_1 + 200) = puVar2;
  _objc_release(uVar25);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + 200));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 200));
  _objc_release(puVar2);
  func_0x00010c165e00(*(undefined8 *)(param_1 + 200));
  func_0x00010c212f20(*(undefined8 *)(param_1 + 200));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 200));
  func_0x00010c219b60(*(undefined8 *)(param_1 + 200));
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + 200));
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + 200));
  func_0x00010bef6d60(puVar3);
  func_0x00010bef6d60(puVar3);
  func_0x00010bef6d60(puVar3);
  func_0x00010bef6d60(puVar3);
  func_0x00010c1887e0(0x4010000000000000,puVar3);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x28));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
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
  _objc_release(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar12 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010bfe00a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010bfe00a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010bfe00a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(uVar20);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(uVar25);
  _objc_release(uVar19);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(uVar21);
  _objc_release(uVar18);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(uVar22);
  _objc_release(uVar17);
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
    ___stack_chk_fail();
    lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR_PTR_1126cb830;
    _objc_alloc();
    puVar2 = puVar3 + 0x20;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c00a2c0();
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(puVar3 + 0x28));
    puVar2 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(puVar3 + 0x170);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar3 + 0x28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar3 + 0x28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar3 + 0x28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar3 + 0x100);
    *(undefined **)(puVar3 + 0x100) = puVar11;
    _objc_release(uVar18);
    _objc_release(puVar10);
    _objc_release(uVar17);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar22);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar21);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar25);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
      ___stack_chk_fail();
      puVar4 = PTR_PTR_1126cb838;
      _objc_alloc(PTR_PTR_1126cb838);
      func_0x00010c04c1a0();
      _objc_initWeak(auStack_238,puVar2);
      puVar5 = PTR_PTR_1126cb840;
      _objc_alloc(PTR_PTR_1126cb840);
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_258 = 0xc2000000;
      pcStack_250 = FUN_106564550;
      puStack_248 = &UNK_1108434b0;
      _objc_copyWeak(auStack_240,auStack_238);
      func_0x00010c031760(puVar5);
      puVar1 = PTR_PTR_1126cb848;
      _objc_alloc();
      uVar25 = *(undefined8 *)(puVar2 + 0x130);
      func_0x00010c269d40(uVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061d40();
      _objc_release(uVar25);
      func_0x00010befbb60(*(undefined8 *)(puVar2 + 0x28));
      func_0x00010c219b60(puVar1);
      puVar6 = puVar2;
      func_0x00010be43140();
      puVar7 = puVar1;
      if ((int)puVar6 == 0) {
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = *(undefined8 *)(puVar2 + 0x28);
        func_0x00010c1408a0(uVar25);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar7;
        func_0x00010bf493c0(0xc020000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = *(undefined8 *)(puVar2 + 0x50);
        func_0x00010c1408a0(uVar25);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar7;
        func_0x00010bf493c0(0x4020000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar25);
      _objc_release(puVar7);
      puStack_298 = puVar3;
      uStack_290 = 0xc2000000;
      pcStack_288 = FUN_10656457c;
      puStack_280 = &UNK_110848ba8;
      _objc_retain(puVar1);
      puStack_278 = puVar1;
      puStack_270 = puVar2;
      _objc_retain(puVar6);
      ppuVar23 = &puStack_298;
      puStack_268 = puVar6;
      _objc_retainBlock();
      uVar21 = *(undefined8 *)(puVar2 + 0x140);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar21;
      func_0x00010bf1f3c0();
      _objc_release(uVar21);
      if ((int)uVar25 == 0) {
        puVar2 = puVar1;
        func_0x00010c295200(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a1560();
        _objc_release(puVar2);
        (*(code *)ppuVar23[2])(ppuVar23);
      }
      else {
        puVar2 = puVar1;
        func_0x00010c295200(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a15a0();
        _objc_release(puVar2);
      }
      _objc_retain(puVar1);
      _objc_release(ppuVar23);
      _objc_release(puStack_268);
      _objc_release(puStack_278);
      _objc_release(puVar1);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_240);
      _objc_destroyWeak(auStack_238);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106563fcc; end: 106564223; -[SCChatViewHeader _createBanner] */

void FUN_106563fcc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cb830;
  _objc_alloc();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c00a2c0();
  _objc_release(lVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x28));
  puVar3 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x100);
  *(undefined **)(param_1 + 0x100) = puVar15;
  _objc_release(uVar18);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126cb838;
    _objc_alloc(PTR_PTR_1126cb838);
    func_0x00010c04c1a0();
    _objc_initWeak(auStack_128,puVar3);
    puVar8 = PTR_PTR_1126cb840;
    _objc_alloc(PTR_PTR_1126cb840);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_106564550;
    puStack_138 = &UNK_1108434b0;
    _objc_copyWeak(auStack_130,auStack_128);
    func_0x00010c031760(puVar8);
    puVar1 = PTR_PTR_1126cb848;
    _objc_alloc();
    uVar4 = *(undefined8 *)(puVar3 + 0x130);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)(puVar3 + 0x28));
    func_0x00010c219b60(puVar1);
    puVar9 = puVar3;
    func_0x00010be43140();
    puVar11 = puVar1;
    if ((int)puVar9 == 0) {
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(puVar3 + 0x28);
      func_0x00010c1408a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar11;
      func_0x00010bf493c0(0xc020000000000000);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(puVar3 + 0x50);
      func_0x00010c1408a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar11;
      func_0x00010bf493c0(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
    _objc_release(puVar11);
    puStack_188 = puVar5;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_10656457c;
    puStack_170 = &UNK_110848ba8;
    _objc_retain(puVar1);
    puStack_168 = puVar1;
    puStack_160 = puVar3;
    _objc_retain(puVar9);
    ppuVar16 = &puStack_188;
    puStack_158 = puVar9;
    _objc_retainBlock();
    uVar7 = *(undefined8 *)(puVar3 + 0x140);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf1f3c0();
    _objc_release(uVar7);
    if ((int)uVar4 == 0) {
      puVar3 = puVar1;
      func_0x00010c295200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a1560();
      _objc_release(puVar3);
      (*(code *)ppuVar16[2])(ppuVar16);
    }
    else {
      puVar3 = puVar1;
      func_0x00010c295200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a15a0();
      _objc_release(puVar3);
    }
    _objc_retain(puVar1);
    _objc_release(ppuVar16);
    _objc_release(puStack_158);
    _objc_release(puStack_168);
    _objc_release(puVar1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_128);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106564224; end: 10656454f; -[SCChatViewHeader _createAddFriendButton] */

void FUN_106564224(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126cb838;
  _objc_alloc(PTR_PTR_1126cb838);
  func_0x00010c04c1a0();
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR_PTR_1126cb840;
  _objc_alloc(PTR_PTR_1126cb840);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106564550;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c031760(puVar2);
  puVar3 = PTR_PTR_1126cb848;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  _objc_release(uVar4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c219b60(puVar3);
  lVar5 = param_1;
  func_0x00010be43140();
  puVar6 = puVar3;
  if ((int)lVar5 == 0) {
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c1408a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c1408a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  _objc_release(puVar6);
  puStack_d8 = puVar10;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10656457c;
  puStack_c0 = &UNK_110848ba8;
  _objc_retain(puVar3);
  puStack_b8 = puVar3;
  lStack_b0 = param_1;
  _objc_retain(puVar7);
  ppuVar8 = &puStack_d8;
  puStack_a8 = puVar7;
  _objc_retainBlock();
  uVar9 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf1f3c0();
  _objc_release(uVar9);
  if ((int)uVar4 == 0) {
    puVar10 = puVar3;
    func_0x00010c295200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a1560();
    _objc_release(puVar10);
    (*(code *)ppuVar8[2])(ppuVar8);
  }
  else {
    puVar10 = puVar3;
    func_0x00010c295200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a15a0();
    _objc_release(puVar10);
  }
  _objc_retain(puVar3);
  _objc_release(ppuVar8);
  _objc_release(puStack_a8);
  _objc_release(puStack_b8);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106564550; end: 10656457b;  */

void FUN_106564550(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10656457c; end: 10656467b;  */

void FUN_10656457c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x178);
  func_0x00010bf348e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106564684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))();
  return;
}



/* Entry: 10656467c; end: 106564687;  */

void FUN_10656467c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106564684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106564688; end: 10656468f; -[SCChatViewHeader headerBottom] */

void FUN_106564688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bbeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_mas_bottom_11260c9c0)
  ;
  return;
}



/* Entry: 106564690; end: 106564697; -[SCChatViewHeader headerFrame] */

void FUN_106564690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_frame_1125cb3e0);
  return;
}



/* Entry: 106564698; end: 10656469f; -[SCChatViewHeader setHeaderFrame:] */

void FUN_106564698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1065646a0; end: 106564713; -[SCChatViewHeader gestureRecognizer:shouldReceiveTouch:] */

undefined8 FUN_1065646a0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == *(long *)(param_1 + 0x118)) && (func_0x00010beb5f00(), (param_1 & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106564714; end: 10656479b; -[SCChatViewHeader hideHeaderViewsOnStartEdit] */

void FUN_106564714(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x178),param_2,1);
  lVar1 = param_1;
  func_0x00010bf14600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010beed0c0();
  if (lVar1 == 1) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xe8),param_2,1);
    func_0x00010bee07e0(param_1);
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf21300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10656479c; end: 1065647fb; -[SCChatViewHeader showHeaderViewsOnEndEdit] */

void FUN_10656479c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x178),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x78));
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010beed0c0();
  if (lVar1 == 1) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bee07f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSpotlightHeaderButtonPane_112595ba0)
    ;
    return;
  }
  return;
}



/* Entry: 1065647fc; end: 106564803; -[SCChatViewHeader headerText] */

void FUN_1065647fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x170),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106564804; end: 106564c3f; -[SCChatViewHeader _initBackButton] */

void FUN_106564804(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  long lStack_c8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_98,param_1);
  lVar1 = param_1;
  func_0x00010be43140();
  lStack_c8 = param_1;
  if ((int)lVar1 == 0) {
    func_0x00010bfe7900();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe7920();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x178);
  *(undefined **)(param_1 + 0x178) = puVar2;
  _objc_release(uVar12);
  func_0x00010c16e480(*(undefined8 *)(param_1 + 0x178));
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + 0x178));
  func_0x00010c1aab40(*(undefined8 *)(param_1 + 0x178));
  uVar12 = *(undefined8 *)(param_1 + 0x178);
  dVar13 = 1.60807493534087e-314;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010c1d3960(uVar12);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x178));
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + 0x178));
  _objc_release(ppuVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x178));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x28));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd20a0(param_1);
  uVar12 = uVar4;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x178);
  uStack_90 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640(*(undefined8 *)(param_1 + 0x170));
  dVar14 = dVar13;
  func_0x00010c2744e0(*(undefined8 *)(param_1 + 0x170));
  uVar6 = uVar5;
  func_0x00010bf49420(dVar13 - dVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x178);
  uStack_88 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c274200(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2744e0(*(undefined8 *)(param_1 + 0x170));
  uVar10 = uVar7;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010be43140();
  uVar12 = *(undefined8 *)(param_1 + 0x178);
  if ((int)lVar1 == 0) {
    func_0x00010c08e400(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c08e400(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar12;
    func_0x00010bf493a0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
  }
  else {
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c1408a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar12;
    func_0x00010bf493a0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
  }
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_1 + 0x178);
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_opt_new(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010bef9040(uVar12);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_release(lStack_c8);
  puVar11 = auStack_98;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(puVar11);
  puVar11 = puVar11 + 0x20;
  _objc_loadWeakRetained(puVar11);
  func_0x00010be6bd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 106564c40; end: 106564c6b;  */

void FUN_106564c40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106564c6c; end: 106564c73; -[SCChatViewHeader _onTapBackButton] */

void FUN_106564c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c140990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x170),PTR_s_rightButtonPressed_11262dc80);
  return;
}



/* Entry: 106564c74; end: 106564ddf; -[SCChatViewHeader _backButtonCircleView] */

void FUN_106564c74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126cb670;
    func_0x00010c140940(PTR_PTR_1126cb670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar2);
    func_0x00010c066fe0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x178));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106564de0;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106564de0; end: 106564f0f;  */

void FUN_106564de0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xbff8000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106564f10; end: 1065650c3; -[SCChatViewHeader _initAvatarContainerWithHeaderDelegate:] */

void FUN_106564f10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0870;
  _objc_opt_new();
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar13);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x50),param_2,
                      &PTR____CFConstantStringClassReference_110de1898);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010bea2140(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x50),param_2,0);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR_PTR_1126c2ec0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004820(puVar1,param_2,puVar3,0x11,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar13 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf22ca0(uVar13,param_2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48)
                      ,puVar1,0,*(undefined8 *)(param_1 + 0x50),param_1);
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 0.8999999761581421;
  func_0x00010c16dc60(0x3fecccccc0000000);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar13;
  _objc_retain(uVar13);
  _objc_release(uVar15);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x68),param_2,*(undefined8 *)(param_1 + 0x58));
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(puVar1 + 0x70);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(puVar1 + 0x70));
  }
  lVar4 = *(long *)(puVar1 + 0x38);
  func_0x00010bf131c0();
  if (lVar4 - 1U < 2) {
    uVar13 = *(undefined8 *)(puVar1 + 0x50);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar1 + 0x170);
    func_0x00010bf1ff80(uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1 + 0x18;
    _objc_loadWeakRetained(puVar2);
    func_0x00010bf1fc40();
    dVar16 = -dVar16;
    uStack_e8 = uVar13;
    func_0x00010bf493c0(dVar16,uVar13,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    if (lVar4 != 3 && lVar4 != 0) {
      uStack_e8 = 0;
      goto LAB_1065651f0;
    }
    uVar13 = *(undefined8 *)(puVar1 + 0x50);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar1 + 0x28);
    func_0x00010c274200(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd1ce0(puVar1);
    uStack_e8 = uVar13;
    func_0x00010bf493c0(uVar13,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar15);
  _objc_release(uVar13);
LAB_1065651f0:
  puVar2 = puVar1;
  func_0x00010be43140();
  if ((int)puVar2 == 0) {
    lVar4 = *(long *)(puVar1 + 0x38);
    func_0x00010bf131c0();
    func_0x00010bdd20a0(puVar1);
    dVar17 = dVar16 + -4.0;
    if (lVar4 != 2) {
      dVar17 = dVar16;
    }
  }
  else {
    func_0x00010bdd1de0(puVar1);
    dVar17 = dVar16;
  }
  uVar5 = *(undefined8 *)(puVar1 + 0x50);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar1 + 0x28);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf493c0(dVar17,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + 0x50);
  uStack_e0 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar1 + 0x28);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar7;
  func_0x00010bf49500(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar1 + 0x50);
  uStack_d8 = uVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1ca0(puVar1);
  uVar10 = uVar9;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar1 + 0x50);
  uStack_d0 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1f20(puVar1);
  uVar12 = uVar11;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uStack_e8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_e0,5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar1 + 0x70);
  *(undefined **)(puVar1 + 0x70) = puVar2;
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar15);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(puVar1 + 0x70));
  _objc_release(uStack_e8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1065650c4; end: 106565407; -[SCChatViewHeader _setAvatarConstraints] */

void FUN_1065650c4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + 0x70);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_3,
                        *(undefined8 *)(param_2 + 0x70));
  }
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010bf131c0();
  if (lVar1 - 1U < 2) {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x170);
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf1fc40();
    param_1 = -param_1;
    uStack_a8 = uVar2;
    func_0x00010bf493c0(param_1,uVar2,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    if (lVar1 != 3 && lVar1 != 0) {
      uStack_a8 = 0;
      goto LAB_1065651f0;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c274200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd1ce0(param_2);
    uStack_a8 = uVar2;
    func_0x00010bf493c0(uVar2,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_1065651f0:
  lVar1 = param_2;
  func_0x00010be43140();
  if ((int)lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0x38);
    func_0x00010bf131c0();
    func_0x00010bdd20a0(param_2);
    dVar14 = param_1 + -4.0;
    if (lVar1 != 2) {
      dVar14 = param_1;
    }
  }
  else {
    func_0x00010bdd1de0(param_2);
    dVar14 = param_1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493c0(dVar14,uVar4,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uStack_a0 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf1ff80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf49500(uVar6,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  uStack_98 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1ca0(param_2);
  uVar9 = uVar8;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x50);
  uStack_90 = uVar9;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1f20(param_2);
  uVar11 = uVar10;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uStack_a8;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_a0,5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_2 + 0x70);
  *(undefined **)(param_2 + 0x70) = puVar12;
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_3,
                      *(undefined8 *)(param_2 + 0x70));
  _objc_release(uStack_a8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106565408; end: 10656540b; -[SCChatViewHeader didSetBackgroundImage] */

void FUN_106565408(void)

{
  return;
}



/* Entry: 10656540c; end: 10656540f; -[SCChatViewHeader didTapOnAvatarView] */

void FUN_10656540c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleLeftButtonPressed_112568638);
  return;
}



/* Entry: 106565410; end: 106565413; -[SCChatViewHeader didTapOnPublisherProfile] */

void FUN_106565410(void)

{
  return;
}



/* Entry: 106565414; end: 106565463; -[SCChatViewHeader didTapOnStory] */

void FUN_106565414(long param_1)

{
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf7ce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didTapOnAvatarView_1125bcd40);
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106565464; end: 10656546f; -[SCChatViewHeader viewDidFullyAppear] */

void FUN_106565464(long param_1)

{
  *(undefined1 *)(param_1 + 0x168) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010beb9b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showLocationContextTooltipIfNee_11258c068);
  return;
}



/* Entry: 106565470; end: 106565477; -[SCChatViewHeader viewDidFullyDisappear] */

void FUN_106565470(long param_1)

{
  *(undefined2 *)(param_1 + 0x168) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bddf150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpLocationContextTooltipIf_1125555f0);
  return;
}



/* Entry: 106565478; end: 10656549f; -[SCChatViewHeader reloadHeader] */

void FUN_106565478(long param_1)

{
  func_0x00010c128b60(*(undefined8 *)(param_1 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010bedaa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLegalHoldBadge_112594440);
  return;
}



/* Entry: 1065654a0; end: 1065654f3; -[SCChatViewHeader _avatarIconViewTopOffset] */

double FUN_1065654a0(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010c2744e0(*(undefined8 *)(param_2 + 0x170));
  dVar1 = param_1 * 0.5;
  func_0x00010bfe0640(*(undefined8 *)(param_2 + 0x170));
  param_1 = param_1 * 0.5;
  dVar1 = dVar1 + param_1;
  func_0x00010bdd1ca0(param_2);
  return dVar1 - param_1 * 0.5;
}



/* Entry: 1065654f4; end: 1065654fb; -[SCChatViewHeader _updateLeftIconConfiguration:] */

void FUN_1065654f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_next__112614028);
  return;
}



/* Entry: 1065654fc; end: 106565577; -[SCChatViewHeader _updateViewOptions] */

void FUN_1065654fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf131c0();
  puVar2 = PTR_PTR_1126c2eb8;
  _objc_alloc(PTR_PTR_1126c2eb8);
  if (lVar1 == 2) {
    uVar3 = 0xc024000000000000;
    uVar4 = 0xc024000000000000;
    uVar5 = 0xc024000000000000;
    uVar6 = 0xc024000000000000;
  }
  else {
    uVar3 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  func_0x00010bff6400(uVar3,uVar4,uVar5,uVar6);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x48),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106565578; end: 10656559b; -[SCChatViewHeader _headerHeight] */

double FUN_106565578(double param_1)

{
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  return param_1 + 4.0;
}



/* Entry: 10656559c; end: 10656562b; -[SCChatViewHeader _height] */

double FUN_10656559c(double param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0xf8);
  func_0x00010c06f880();
  dVar6 = 0.0;
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0xf8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    dVar5 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0xf8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      dVar5 = param_1;
      _objc_release(uVar4);
      dVar6 = param_1;
    }
    param_1 = dVar5;
    _objc_release(uVar2);
  }
  func_0x00010be34d40(param_2);
  return dVar6 + param_1;
}



/* Entry: 10656562c; end: 10656566f; -[SCChatViewHeader _avatarPadding] */

undefined8 FUN_10656562c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  uVar2 = 0x4030000000000000;
  if (lVar1 != 0) {
    func_0x00010bf131c0();
    if (lVar1 - 1U < 3) {
      uVar2 = *(undefined8 *)(&UNK_10dddc9e8 + (lVar1 - 1U) * 8);
    }
  }
  return uVar2;
}



/* Entry: 106565670; end: 1065656af; -[SCChatViewHeader _avatarWidth] */

undefined8 FUN_106565670(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    func_0x00010bf131c0();
    if (lVar1 - 1U < 3) {
      return *(undefined8 *)(&UNK_10dddca00 + (lVar1 - 1U) * 8);
    }
  }
  return 0x4040000000000000;
}



/* Entry: 1065656b0; end: 1065656e7; -[SCChatViewHeader _avatarOccupiedWidth] */

double FUN_1065656b0(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010bdd1f20();
  dVar1 = param_1;
  func_0x00010bdd1de0(param_2);
  return param_1 + dVar1;
}



/* Entry: 1065656e8; end: 106565727; -[SCChatViewHeader _avatarHeight] */

undefined8 FUN_1065656e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    func_0x00010bf131c0();
    if (lVar1 - 1U < 3) {
      return *(undefined8 *)(&UNK_10dddca18 + (lVar1 - 1U) * 8);
    }
  }
  return 0x4040000000000000;
}



/* Entry: 106565728; end: 1065660ff; -[SCChatViewHeader didConversationViewModelChange:metricsTracker:] */

void FUN_106565728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  undefined8 uVar18;
  ulong uVar19;
  
  _objc_retain(param_7);
  bVar1 = *(byte *)(param_5 + 0x16a);
  lVar8 = param_7;
  func_0x00010c122da0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c102000();
  _objc_release(lVar8);
  lVar14 = *(long *)(param_5 + 0x38);
  lVar8 = param_7;
  func_0x00010bf37a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar14);
  _objc_retain(lVar8);
  if (lVar14 == lVar8) {
    _objc_release(lVar8);
    _objc_release(lVar14);
    _objc_release(lVar8);
LAB_106565804:
    if ((uint)lVar3 == (uint)bVar1) goto LAB_1065660d4;
  }
  else if (lVar8 == 0) {
    _objc_release(lVar14);
  }
  else {
    lVar4 = lVar14;
    func_0x00010c071ae0(lVar14,param_6,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar14);
    _objc_release(lVar8);
    if ((int)lVar4 != 0) goto LAB_106565804;
  }
  uVar5 = param_5;
  func_0x00010c279260();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(ulong *)(param_5 + 0x38);
  _objc_retain(uVar15);
  lVar8 = param_7;
  func_0x00010bf37a40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(param_5 + 0x38);
  *(long *)(param_5 + 0x38) = lVar3;
  _objc_release(uVar12);
  _objc_release(lVar8);
  lVar8 = param_7;
  func_0x00010c074920();
  *(char *)(param_5 + 0x90) = (char)lVar8;
  uVar16 = *(ulong *)(param_5 + 0x98);
  _objc_retain(uVar16);
  uVar19 = *(ulong *)(param_5 + 0xa0);
  _objc_retain(uVar19);
  if (*(char *)(param_5 + 0x90) == '\x01') {
    lVar8 = param_7;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_5 + 0xa0);
    *(long *)(param_5 + 0xa0) = lVar3;
    _objc_release(uVar12);
    _objc_release(lVar8);
    uVar12 = *(undefined8 *)(param_5 + 0x98);
    *(undefined8 *)(param_5 + 0x98) = 0;
  }
  else {
    lVar8 = param_7;
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_5 + 0x98);
    *(long *)(param_5 + 0x98) = lVar8;
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_5 + 0xa0);
    *(undefined8 *)(param_5 + 0xa0) = 0;
  }
  _objc_release(uVar12);
  uVar13 = *(ulong *)(param_5 + 0x98);
  _objc_retain(uVar16);
  _objc_retain(uVar13);
  if (uVar16 == uVar13) {
    _objc_release(uVar13);
    _objc_release(uVar16);
LAB_106565960:
    uVar13 = *(ulong *)(param_5 + 0xa0);
    _objc_retain(uVar19);
    _objc_retain(uVar13);
    if (uVar19 == uVar13) {
      _objc_release(uVar13);
      _objc_release(uVar19);
    }
    else {
      uVar7 = uVar19;
      if (uVar13 == 0) goto LAB_1065659ac;
      func_0x00010c071ae0(uVar19,param_6,uVar13);
      _objc_release(uVar13);
      _objc_release(uVar19);
      if ((uVar7 & 1) == 0) goto LAB_1065659b0;
    }
  }
  else {
    uVar7 = uVar16;
    if (uVar13 == 0) {
LAB_1065659ac:
      _objc_release(uVar7);
    }
    else {
      func_0x00010c071ae0(uVar16,param_6,uVar13);
      _objc_release(uVar13);
      _objc_release(uVar16);
      if ((int)uVar7 != 0) goto LAB_106565960;
    }
LAB_1065659b0:
    *(undefined1 *)(param_5 + 0x16b) = 0;
  }
  lVar8 = param_7;
  func_0x00010c122da0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c102000();
  *(bool *)(param_5 + 0x16a) = (int)lVar3 != 0;
  _objc_release(lVar8);
  uVar13 = uVar15;
  func_0x00010c27e4e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar13 == 0) goto LAB_106565acc;
  uVar7 = uVar15;
  func_0x00010c27e4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(ulong *)(param_5 + 0x38);
  func_0x00010c27e4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  if (uVar7 == uVar6) {
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar7);
LAB_106565aec:
    _objc_release(uVar13);
    if (uVar15 == 0) goto LAB_106565b14;
LAB_106565af8:
    uVar13 = uVar15;
    func_0x00010bf131c0();
    uVar7 = *(ulong *)(param_5 + 0x38);
    func_0x00010bf131c0();
    if (uVar13 != uVar7) goto LAB_106565b14;
  }
  else {
    if (uVar6 == 0) {
      _objc_release();
      _objc_release(uVar7);
      _objc_release(uVar13);
LAB_106565acc:
      uVar13 = *(ulong *)(param_5 + 0x38);
      func_0x00010c27e4e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beda980(param_5,param_6,uVar13);
      goto LAB_106565aec;
    }
    uVar10 = uVar7;
    func_0x00010c071ae0(uVar7,param_6,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar13);
    if ((uVar10 & 1) == 0) goto LAB_106565acc;
    if (uVar15 != 0) goto LAB_106565af8;
LAB_106565b14:
    func_0x00010bea2140(param_5);
    func_0x00010bee3d00(param_5);
  }
  uVar7 = *(ulong *)(param_5 + 0x38);
  func_0x00010bf15ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar15;
  func_0x00010bf15ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar7);
  _objc_retain(uVar13);
  if (uVar7 == uVar13) {
    _objc_release(uVar13);
    _objc_release(uVar7);
    _objc_release(uVar13);
  }
  else {
    if (uVar13 == 0) {
      _objc_release();
      if (uVar7 != 0) goto LAB_106565b98;
LAB_106565bfc:
      func_0x00010be353c0(param_5);
    }
    else {
      uVar6 = uVar7;
      func_0x00010c071ae0(uVar7,param_6,uVar13);
      _objc_release(uVar13);
      _objc_release(uVar7);
      _objc_release(uVar13);
      if ((uVar6 & 1) != 0) goto LAB_106565c44;
      if (uVar7 == 0) goto LAB_106565bfc;
LAB_106565b98:
      uVar12 = *(undefined8 *)(param_5 + 0xf8);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x28));
      _CGRectGetWidth();
      func_0x00010c222760(uVar12,param_6,uVar7);
      _objc_release(uVar12);
      func_0x00010beb7ea0(param_5);
    }
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x28));
    uVar12 = param_1;
    func_0x00010be34f80(param_5);
    func_0x00010bc850d8(param_1,param_2,param_3,param_4,uVar12);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + 0x28));
  }
LAB_106565c44:
  lVar8 = *(long *)(param_5 + 0x38);
  func_0x00010beed0c0();
  if (lVar8 < 2) {
    if (lVar8 == 0) {
LAB_106565cc8:
      uVar12 = *(undefined8 *)(param_5 + 0x138);
      func_0x00010bfe6360(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = 1;
      func_0x00010c1a7f60();
    }
    else {
      if (lVar8 != 1) goto LAB_106565cfc;
      uVar12 = *(undefined8 *)(param_5 + 0x138);
      func_0x00010bfe6360(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      uVar18 = 0;
    }
LAB_106565ce8:
    _objc_release(uVar12);
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + 0xe8),param_6,uVar18);
  }
  else {
    if (lVar8 == 3) goto LAB_106565cc8;
    if (lVar8 == 2) {
      func_0x00010bed2b80(param_5,param_6,uVar15);
      uVar12 = *(undefined8 *)(param_5 + 0x138);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      uVar18 = 1;
      goto LAB_106565ce8;
    }
  }
LAB_106565cfc:
  func_0x00010bee07e0(param_5);
  uVar6 = *(ulong *)(param_5 + 0x38);
  func_0x00010c260ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar15;
  func_0x00010c260ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  _objc_retain(uVar13);
  if (uVar6 == uVar13) {
    _objc_release(uVar13);
    _objc_release(uVar6);
LAB_106565d88:
    uVar10 = *(ulong *)(param_5 + 0x38);
    func_0x00010bf03860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar15;
    func_0x00010bf03860();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar10);
    _objc_retain(uVar11);
    if (uVar10 == uVar11) {
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar13);
      _objc_release(uVar6);
    }
    else {
      if (uVar11 == 0) {
        _objc_release();
        goto LAB_106565e54;
      }
      uVar9 = uVar10;
      func_0x00010c071ae0(uVar10,param_6,uVar11);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar13);
      _objc_release(uVar6);
      if ((uVar9 & 1) == 0) goto LAB_106565e6c;
    }
    bVar17 = false;
    uVar13 = 0;
  }
  else {
    uVar10 = uVar6;
    if (uVar13 == 0) {
LAB_106565e54:
      _objc_release(uVar10);
    }
    else {
      func_0x00010c071ae0(uVar6,param_6,uVar13);
      _objc_release(uVar13);
      _objc_release(uVar6);
      if ((int)uVar10 != 0) goto LAB_106565d88;
    }
    _objc_release(uVar13);
    _objc_release(uVar6);
LAB_106565e6c:
    uVar13 = param_5;
    func_0x00010bea8240();
    _objc_retainAutoreleasedReturnValue();
    bVar17 = true;
  }
  uVar10 = *(ulong *)(param_5 + 0x38);
  func_0x00010beed0c0();
  uVar6 = uVar15;
  func_0x00010beed0c0();
  if ((bVar17) || (uVar10 != uVar6)) {
LAB_106566058:
    func_0x00010c128d20(param_5);
    uVar12 = *(undefined8 *)(param_5 + 0xa8);
    func_0x00010bfe6360(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar12);
    func_0x00010c08cdc0(*(undefined8 *)(param_5 + 0x28));
    if (uVar13 != 0) {
      (**(code **)(uVar13 + 0x10))(uVar13);
    }
    func_0x00010beb9b00(param_5);
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_5 + 0x38);
    func_0x00010c238020();
    uVar6 = uVar15;
    func_0x00010c238020();
    if (iVar2 != (int)uVar6) goto LAB_106566058;
    uVar10 = *(ulong *)(param_5 + 0x38);
    func_0x00010bf131c0();
    uVar6 = uVar15;
    func_0x00010bf131c0();
    if (uVar10 != uVar6) goto LAB_106566058;
    iVar2 = (int)*(undefined8 *)(param_5 + 0x38);
    func_0x00010bf01080();
    uVar6 = uVar15;
    func_0x00010bf01080();
    if (iVar2 != (int)uVar6) goto LAB_106566058;
    uVar10 = *(ulong *)(param_5 + 0x38);
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar15;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar10);
    _objc_retain(uVar6);
    if (uVar10 != uVar6) {
      uVar11 = uVar10;
      if (uVar6 == 0) {
LAB_106566040:
        _objc_release(uVar11);
      }
      else {
        func_0x00010c071ae0(uVar10,param_6,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar10);
        if ((int)uVar11 != 0) goto LAB_106565f84;
      }
      _objc_release(uVar6);
      _objc_release(uVar10);
      goto LAB_106566058;
    }
    _objc_release(uVar6);
    _objc_release(uVar10);
LAB_106565f84:
    uVar11 = param_5;
    func_0x00010c279260();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar5);
    _objc_retain(uVar11);
    if (uVar5 == uVar11) {
      _objc_release(uVar11);
      _objc_release(uVar5);
      _objc_release(uVar11);
      _objc_release(uVar6);
      _objc_release(uVar10);
    }
    else {
      if (uVar11 == 0) {
        _objc_release(0);
        _objc_release(uVar5);
        uVar11 = 0;
        goto LAB_106566040;
      }
      uVar9 = uVar5;
      func_0x00010c071ae0(uVar5,param_6,uVar11);
      _objc_release(uVar11);
      _objc_release(uVar5);
      _objc_release(uVar11);
      _objc_release(uVar6);
      _objc_release(uVar10);
      if ((uVar9 & 1) == 0) goto LAB_106566058;
    }
  }
  _objc_release(uVar13);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar5);
LAB_1065660d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106566100; end: 10656617b; -[SCChatViewHeader _updateAddFriendButtonStatusIfNecessaryFromPrevious:] */

void FUN_106566100(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010beed0c0();
  if (lVar2 == 2) {
    lVar2 = param_3;
    func_0x00010bfda160();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010bfda160();
    if ((int)lVar2 == iVar1) goto LAB_106566168;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010bfda160();
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  func_0x00010bea1aa0(param_1,param_2,uVar3);
LAB_106566168:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656617c; end: 106566213; -[SCChatViewHeader heightForHeaderTextView:bottomInset:] */

double FUN_10656617c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  func_0x00010bfe0640(param_4);
  dVar4 = dVar3;
  func_0x00010c2744e0(param_4);
  _objc_release(param_4);
  lVar1 = *(long *)(param_2 + 0xb0);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  dVar5 = (dVar3 - dVar4) - param_1;
  if (lVar2 != 0) {
    dVar5 = (dVar3 - dVar4) * 0.5;
  }
  return dVar5;
}



/* Entry: 106566214; end: 10656627f; -[SCChatViewHeader backgroundColorForHeader] */

void FUN_106566214(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0x148) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)(param_1 + 0x18);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010bf13da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106566280; end: 1065662ff; -[SCChatViewHeader titleForHeader:] */

void FUN_106566280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c271340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106566300; end: 106566407; -[SCChatViewHeader trailingAccessoriesForHeaderTitle] */

void FUN_106566300(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x16a) == '\x01') {
    puVar2 = puVar1;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c101f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      func_0x00010befa120(puVar1,param_2,puVar3);
    }
    _objc_release(puVar3);
  }
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x00010c279400();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c279400(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8220(puVar2,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (puVar2 != (undefined *)0x0) {
      func_0x00010befa120(puVar1,param_2,puVar2);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106566408; end: 10656649b; -[SCChatViewHeader _legalHoldBadgeViewIfNeeded] */

void FUN_106566408(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c238020();
  if (iVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x108);
    if (lVar5 == 0) {
      puVar2 = PTR_PTR_1126cb850;
      _objc_alloc();
      puVar3 = puVar2;
      func_0x00010656aaec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0511e0(puVar2,param_2,puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x108);
      *(undefined **)(param_1 + 0x108) = puVar2;
      _objc_release(uVar4);
      _objc_release(puVar3);
      lVar5 = *(long *)(param_1 + 0x108);
    }
    _objc_retain(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10656649c; end: 10656670b; -[SCChatViewHeader _updateLegalHoldBadge] */

double FUN_10656649c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  func_0x00010be4a2c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    if (*(long *)(param_2 + 0x108) != 0) {
      func_0x00010c12c960();
      uVar4 = *(undefined8 *)(param_2 + 0x108);
      *(undefined8 *)(param_2 + 0x108) = 0;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 0x110);
      *(undefined8 *)(param_2 + 0x110) = 0;
      _objc_release(uVar4);
    }
  }
  else {
    lVar3 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_2 + 0x28);
    _objc_release();
    if (lVar3 != lVar7) {
      func_0x00010c219b60(lVar2,param_3,0);
      func_0x00010befbb60(*(undefined8 *)(param_2 + 0x28),param_3,lVar2);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar3 = lVar2;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x178);
      func_0x00010bf348e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010bf493a0(lVar3,param_3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = lVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_70,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_3,puVar5);
      _objc_release(puVar5);
      _objc_release(lVar7);
      _objc_release(uVar4);
      _objc_release(lVar3);
    }
    func_0x00010bdc3fa0(param_2);
    dVar8 = 0.0;
    if (0.0 < param_1) {
      func_0x00010bdc3fa0(param_2);
      dVar8 = param_1 + 0.0;
    }
    func_0x00010c162480(*(undefined8 *)(param_2 + 0x110),param_3,0);
    lVar3 = param_2;
    func_0x00010be43140();
    lVar7 = lVar2;
    if ((int)lVar3 == 0) {
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c1408a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      param_1 = -(dVar8 + 8.0);
    }
    else {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      func_0x00010c1408a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be97c20(param_2);
      param_1 = dVar8 + param_1;
    }
    lVar3 = lVar7;
    func_0x00010bf493c0(param_1,lVar7,param_3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x110);
    *(long *)(param_2 + 0x110) = lVar3;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(lVar7);
    func_0x00010c162480(*(undefined8 *)(param_2 + 0x110),param_3,1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010be4a2c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    dVar8 = 0.0;
  }
  else {
    dVar8 = *(double *)PTR__UILayoutFittingCompressedSize_110345d28;
    func_0x00010c267040(dVar8,*(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8),
                        lVar2);
    dVar8 = dVar8 + 6.0;
  }
  _objc_release(lVar2);
  return dVar8;
}



/* Entry: 10656670c; end: 10656676f; -[SCChatViewHeader _legalHoldBadgeReservedWidth] */

double FUN_10656670c(long param_1)

{
  double dVar1;
  
  func_0x00010be4a2c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = *(double *)PTR__UILayoutFittingCompressedSize_110345d28;
    func_0x00010c267040(dVar1,*(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8),
                        param_1);
    dVar1 = dVar1 + 6.0;
  }
  _objc_release(param_1);
  return dVar1;
}



/* Entry: 106566770; end: 106566a37; -[SCChatViewHeader placeholderAttributedString:] */

void FUN_106566770(ulong param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beb5f00();
  if (((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010be3fda0(), (uVar1 & 1) != 0)) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained();
    if ((uVar2 & 1) == 0) {
      lVar4 = lVar3;
      func_0x00010c26b940();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf414e0(0x3fe6666666666666);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    else {
      lVar5 = lVar3;
      func_0x00010c26b960();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    _objc_release(uVar1);
    uVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    if ((uVar2 & 1) == 0) {
      func_0x00010bfb3e00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfb3e20();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    _objc_release(uVar1);
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    if ((uVar2 & 1) == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110dc6cb8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc6cb8,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar7 = (undefined **)(param_1 + 0x18);
      _objc_loadWeakRetained(ppuVar7);
      ppuVar8 = ppuVar7;
      func_0x00010c0fd0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
    }
    _objc_release(uVar1);
    puVar10 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar9 = lVar3;
    func_0x00010bfe5600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e420(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar3);
    puVar13 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010c04e840();
    puVar11 = puVar10;
    func_0x00010bf069e0();
    _objc_release(puVar10);
    _objc_release(ppuVar8);
    _objc_release(puVar6);
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    param_3 = param_3 + 0x18;
    _objc_loadWeakRetained(param_3);
    puVar13 = param_3;
    func_0x00010bfb3e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106566a38; end: 106566a9b; -[SCChatViewHeader fontForHeader:] */

void FUN_106566a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfb3e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106566a9c; end: 106566aff; -[SCChatViewHeader textColorForHeader:] */

void FUN_106566a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c26b940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106566b00; end: 106566b47; -[SCChatViewHeader imageForLeftButtonInState:] */

void FUN_106566b00(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe7900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106566b48; end: 106566bb3; -[SCChatViewHeader imageForRightButtonInState:] */

void FUN_106566b48(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe7920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106566bb4; end: 106566bfb; -[SCChatViewHeader imageForXButtonInState:] */

void FUN_106566bb4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe79e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106566bfc; end: 106566bff; -[SCChatViewHeader shouldEnableTextField:] */

void FUN_106566bfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb5f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldShowEditableHeader_11258b168);
  return;
}



/* Entry: 106566c00; end: 106566c1f; -[SCChatViewHeader returnKeyTypeForHeaderTextField:] */

undefined8 FUN_106566c00(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010beb5f00();
  uVar1 = 9;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106566c20; end: 106566c73; -[SCChatViewHeader tintColorForHeader:] */

void FUN_106566c20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb5f00();
  if ((int)lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c270f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106566c74; end: 106566c77; -[SCChatViewHeader shouldEnableXButtonForTextField:] */

void FUN_106566c74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb5f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldShowEditableHeader_11258b168);
  return;
}



/* Entry: 106566c78; end: 106566cc7; -[SCChatViewHeader isValidValueForHeaderTextField:value:] */

long FUN_106566c78(void)

{
  long in_x3;
  long lVar1;
  
  _objc_retain(in_x3);
  lVar1 = in_x3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = in_x3;
    func_0x000108ef36d0(in_x3);
  }
  _objc_release(in_x3);
  return lVar1;
}



/* Entry: 106566cc8; end: 106566dcb; -[SCChatViewHeader additionalXOffsetForHeader] */

double FUN_106566cc8(double param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = param_2;
  func_0x00010be43140();
  if ((int)lVar1 == 0) {
    func_0x00010bdd1dc0(param_2);
    dVar5 = 22.0;
    dVar6 = 4.0;
  }
  else {
    func_0x00010bdfab00(param_2);
    dVar5 = -4.0;
    dVar6 = 0.0;
  }
  dVar6 = param_1 * 0.5 + dVar6;
  dVar5 = dVar6 + dVar5;
  uVar2 = param_2 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c075360();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar1 = param_2;
    func_0x00010be43140();
    func_0x00010bdc3fa0(param_2);
    dVar4 = dVar6;
    func_0x00010be1a580(param_2);
    dVar4 = (dVar6 + dVar4) * 0.5;
    dVar6 = dVar5 + dVar4;
    dVar5 = dVar5 - dVar4;
    if ((int)lVar1 != 0) {
      dVar5 = dVar6;
    }
  }
  lVar1 = param_2;
  func_0x00010be43140();
  func_0x00010be4a2a0(param_2);
  dVar7 = dVar6 * 0.5;
  func_0x00010becc5c0(param_2);
  dVar4 = dVar5 + dVar7 + dVar6 * 0.5;
  if ((int)lVar1 == 0) {
    dVar4 = (dVar5 - dVar7) - dVar6 * 0.5;
  }
  return dVar4;
}



/* Entry: 106566dcc; end: 106566e5b; -[SCChatViewHeader headerContentViewAdditionalHorizontalPadding] */

double FUN_106566dcc(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = param_2;
  func_0x00010be43140();
  if ((int)uVar1 == 0) {
    func_0x00010bdd1dc0(param_2);
    param_1 = param_1 + 0.0;
    dVar2 = -44.0;
  }
  else {
    func_0x00010bdfab00(param_2);
    dVar2 = 0.0;
  }
  dVar2 = param_1 + dVar2;
  func_0x00010bdc3fa0(param_2);
  dVar2 = dVar2 + param_1;
  func_0x00010be1a580(param_2);
  dVar2 = dVar2 + param_1;
  dVar3 = dVar2 + 8.0;
  func_0x00010be4a2a0(param_2);
  dVar3 = dVar2 + dVar3;
  func_0x00010becc5c0(param_2);
  return dVar2 + dVar3;
}



/* Entry: 106566e5c; end: 106566e7f; -[SCChatViewHeader _gapBetweenTitleAndCallButtons] */

undefined8 FUN_106566e5c(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010beb5f00();
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 0x4020000000000000;
  }
  return uVar1;
}



/* Entry: 106566e80; end: 106566f8f; -[SCChatViewHeader _accessoryButtonWidth] */

double FUN_106566e80(double param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x138);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x138);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x138);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a5040();
      _objc_release(uVar4);
      return param_1;
    }
  }
  uVar3 = *(ulong *)(param_2 + 0xe8);
  if (uVar3 == 0) {
    uVar2 = *(ulong *)(param_2 + 0xf0);
    if (uVar2 == 0) {
      return 0.0;
    }
    func_0x00010c074c20();
  }
  else {
    func_0x00010c074c20();
    uVar2 = *(ulong *)(param_2 + 0xf0);
    if (uVar2 == 0) {
      if ((uVar3 & 1) != 0) {
        return 0.0;
      }
      dVar5 = *(double *)(param_2 + 0x80);
      goto LAB_106566f48;
    }
    func_0x00010c074c20();
    if ((uVar3 & 1) == 0) {
      dVar5 = *(double *)(param_2 + 0x80) + 0.0;
      if ((uVar2 & 1) != 0) {
        return dVar5;
      }
      dVar6 = *(double *)(param_2 + 0x88);
      dVar5 = dVar5 + dVar6;
      func_0x00010bebed80(param_2);
      return dVar5 - dVar6;
    }
  }
  if ((uVar2 & 1) != 0) {
    return 0.0;
  }
  dVar5 = *(double *)(param_2 + 0x88);
LAB_106566f48:
  return dVar5 + 0.0;
}



/* Entry: 106566f90; end: 106567003; -[SCChatViewHeader _rtlAccessoryClusterLeadingPadding] */

undefined8 FUN_106566f90(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x138);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      return 0x4020000000000000;
    }
  }
  lVar4 = *(long *)(param_1 + 0xe8);
  if ((lVar4 != 0) && (func_0x00010c074c20(), (int)lVar4 == 0)) {
    return 0x4024000000000000;
  }
  return 0x4020000000000000;
}



/* Entry: 106567004; end: 10656704f; -[SCChatViewHeader _deltaBetweenAvatarAndOriginalLeftButton] */

double FUN_106567004(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010bdd1de0();
  dVar1 = param_1;
  func_0x00010bdd1f20(param_2);
  return param_1 + dVar1 + 10.0 + -44.0;
}



/* Entry: 106567050; end: 1065670a3; -[SCChatViewHeader setHeaderContentAlpha:] */

/* WARNING: Possible PIC construction at 0x000106567080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106567084) */

void FUN_106567050(undefined8 param_1,long param_2)

{
  func_0x00010bfe00a0(*(undefined8 *)(param_2 + 0x170));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1);
  return;
}



/* Entry: 1065670a4; end: 1065670ab; -[SCChatViewHeader setHeaderAlpha:] */

void FUN_1065670a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1065670ac; end: 106567113; -[SCChatViewHeader setButtonsAlpha:] */

void FUN_1065670ac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1677c0(*(undefined8 *)(param_2 + 0x178));
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + 0xe8));
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + 0xf0));
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106567114; end: 10656717b; -[SCChatViewHeader displayWithVerticalTranslationUp:] */

void FUN_106567114(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x28));
  func_0x00010bc8525c();
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + 0x28));
  func_0x00010be34f80(param_2);
  dVar2 = 0.0;
  if (0.0 <= param_1 / dVar1) {
    dVar2 = param_1 / dVar1;
  }
  func_0x00010bed2fe0(dVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bed3950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__updateBackButtonCircleWithVerti_1125927f8);
  return;
}



/* Entry: 10656717c; end: 106567233; -[SCChatViewHeader _updateAlphaWithProgress:] */

void FUN_10656717c(double param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1 = 1.0 - param_1;
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + 0x50));
  uVar1 = *(undefined8 *)(param_2 + 0x170);
  func_0x00010bfe00a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + 0xe8));
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + 0xf0));
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106567234; end: 10656730f; -[SCChatViewHeader _updateBackButtonCircleWithVerticalTranslationUp:] */

void FUN_106567234(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = param_1;
  func_0x00010be34f80();
  if (param_1 <= 0.0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    func_0x00010c0bc060(*(undefined8 *)(param_2 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(((param_1 / dVar2) * 14.0 + 21.0) * 0.5);
    _objc_release(uVar1);
    func_0x00010c1677c0(param_1 / dVar2,*(undefined8 *)(param_2 + 0x10));
    uVar1 = *(undefined8 *)(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,param_1 <= 0.0);
  return;
}



/* Entry: 106567310; end: 10656742f;  */

void FUN_106567310(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_106567430();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_106567430();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106567430; end: 10656746b;  */

void FUN_106567430(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10656746c; end: 1065676af; -[SCChatViewHeader _setSubtext] */

void FUN_10656746c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined **ppuVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf03860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c260d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    bVar7 = 1;
  }
  else {
    bVar7 = *(byte *)(param_1 + 0x16b) ^ 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010bf03860();
  _objc_retainAutoreleasedReturnValue();
  bVar7 = lVar2 != 0 & bVar7;
  _objc_release();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (bVar7 == 1) {
    func_0x00010bf03860();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar4 != 0) {
      *(undefined1 *)(param_1 + 0x16b) = 1;
    }
  }
  else {
    func_0x00010c260ce0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2559c0(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010bea8260(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x3ff0000000000000;
  func_0x00010c1677c0();
  _objc_release(uVar4);
  if (bVar7 == 0) {
    ppuVar8 = (undefined **)0x0;
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x00010bf03860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf03b00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar1 = 0x3ff8000000000000;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf03860(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bf03b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar4);
      _objc_release(uVar6);
    }
    _objc_release(lVar2);
    _objc_release(lVar5);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1065676b0;
    puStack_70 = &UNK_110846540;
    _objc_copyWeak(auStack_68,auStack_58);
    ppuVar8 = &puStack_88;
    uStack_60 = uVar1;
    _objc_retainBlock(ppuVar8);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 1065676b0; end: 1065677a3;  */

void FUN_1065676b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1065677a4;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010be0e0e0(uVar2,lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1065677a4; end: 10656782f;  */

void FUN_1065677a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c260ce0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea8260(param_1,param_2,uVar1,0);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106567830; end: 106567b57; -[SCChatViewHeader _setSubtext:isAnimated:] */

void FUN_106567830(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010bf57500(*(undefined8 *)(param_1 + 0xa8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined **)(param_1 + 0xe0) = param_3;
  _objc_release(uVar1);
  puVar2 = param_3;
  func_0x00010c260ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + 0xb0),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c1550c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0xc0),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c0e6f20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar2;
  _objc_release(uVar1);
  puVar2 = param_3;
  func_0x00010bf627e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0xb0),param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c213180(*(undefined8 *)(param_1 + 0xb0),param_2,puVar2);
  }
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010bf627e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0xc0),param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c213180(*(undefined8 *)(param_1 + 0xc0),param_2,puVar2);
  }
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c290b40(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 200),param_2,(uint)puVar2 ^ 1);
  puVar2 = param_3;
  func_0x00010bf627e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 200),param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c213180(*(undefined8 *)(param_1 + 200),param_2,puVar2);
  }
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c260d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0xb8),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
  }
  else {
    puVar3 = param_3;
    func_0x00010c260d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0xb8),param_2,puVar3);
    _objc_release(puVar3);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
  }
  func_0x00010c1a7f60(uVar1,param_2,puVar2 == (undefined *)0x0);
  puVar2 = param_3;
  func_0x00010bf62800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    if (*(char *)(param_1 + 0x148) == '\x01') {
      uVar1 = 0xcd;
    }
    else {
      uVar1 = 0xce;
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_3;
    func_0x00010bf62800(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216160(*(undefined8 *)(param_1 + 0xb8),param_2,puVar2);
  _objc_release(puVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar2 = param_3;
  func_0x00010c260d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdf4a0(param_1,param_2,puVar2,param_4);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106567b58; end: 106567cdb; -[SCChatViewHeader _fadeSubtextViewOutAndInWithDelay:onFadeOut:onFadeIn:] */

void FUN_106567b58(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_2);
  puVar1 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106567cdc;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c142dc0(0x3fd99999a0000000,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined **)(param_2 + 0xd8) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106567cdc; end: 106567d2f;  */

void FUN_106567cdc(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3f947ae147ae147b);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106567d30; end: 106567e87;  */

void FUN_106567d30(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  if (param_2 == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(uVar2);
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
      }
      puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
      _objc_copyWeak(auStack_58,param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      func_0x00010c142dc0(0x3fd99999a0000000,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(lVar1 + 0xd8);
      *(undefined **)(lVar1 + 0xd8) = puVar3;
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 106567e88; end: 106567ed7;  */

void FUN_106567e88(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106567ed8; end: 106567eef;  */

void FUN_106567ed8(long param_1,long param_2)

{
  if ((param_2 == 0) && (*(long *)(param_1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000106567eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106567ef0; end: 106567f07; +[SCChatViewHeader rightButtonCircleBorderColor] */

void FUN_106567ef0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fed3d3d40000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithWhite_alpha__1125adf48);
  return;
}



/* Entry: 106567f08; end: 106567f6f; -[SCChatViewHeader _getSubtextColorWithDefault:] */

void FUN_106567f08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  _objc_retain(param_3);
  func_0x00010bf627e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106567f70; end: 106567fb7; -[SCChatViewHeader _isRTL] */

bool FUN_106567f70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x1;
}



/* Entry: 106567fb8; end: 106567ff7; -[SCChatViewHeader _isEditing] */

undefined8 FUN_106567fb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010bfe00a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073040();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106567ff8; end: 1065681ab; -[SCChatViewHeader backgroundTintView] */

void FUN_106567ff8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar4 = *(long *)(param_2 + 0x78);
  if (lVar4 == 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x170));
    _CGRectGetMaxY();
    lVar4 = param_2 + 8;
    dVar5 = param_1;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf20c00();
    _CGRectGetWidth();
    lVar1 = param_2 + 8;
    dVar6 = dVar5;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar7 = dVar6;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x170));
    _CGRectGetMaxY();
    _objc_release(lVar1);
    _objc_release(lVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(0,param_1,dVar5,dVar6 - dVar7);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    *(undefined **)(param_2 + 0x78) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + 0x78),param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c1c8340(0);
    func_0x00010bef9040(*(undefined8 *)(param_2 + 0x78),param_3,puVar2);
    lVar4 = param_2 + 8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010befbb60();
    _objc_release(lVar4);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1065681ac;
    puStack_60 = &UNK_1108471b0;
    lStack_58 = param_2;
    func_0x00010c0bbfc0(*(undefined8 *)(param_2 + 0x78),param_3,&puStack_78);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar4 = *(long *)(param_2 + 0x78);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1065681ac; end: 106568307;  */

void FUN_1065681ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar6);
  (**(code **)(lVar5 + 0x10))(lVar5,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar6 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar1 = lVar6;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdf0c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}


