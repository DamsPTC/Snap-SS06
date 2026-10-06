/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bdaf90; end: 107bdafdb;  */

void FUN_107bdaf90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_107bc7a5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3a460(param_1,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bdafdc; end: 107bdb003; -[SCDiscoverFeedEventsController pageSessionId] */

void FUN_107bdafdc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bdb004; end: 107bdb00b; -[SCDiscoverFeedEventsController itemSource] */

void FUN_107bdb004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_itemSource_1125fecd0);
  return;
}



/* Entry: 107bdb00c; end: 107bdb013; -[SCDiscoverFeedEventsController triggeringItemId] */

void FUN_107bdb00c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_triggeringItemId_11267cb38);
  return;
}



/* Entry: 107bdb014; end: 107bdb01b; -[SCDiscoverFeedEventsController notificationId] */

void FUN_107bdb014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dc150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_notificationId_112614a68);
  return;
}



/* Entry: 107bdb01c; end: 107bdb043; -[SCDiscoverFeedEventsController friendServerRankingId] */

void FUN_107bdb01c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bdb044; end: 107bdb04b; -[SCDiscoverFeedEventsController pageType] */

undefined8 FUN_107bdb044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107bdb04c; end: 107bdb073; -[SCDiscoverFeedEventsController feedType] */

void FUN_107bdb04c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bdb074; end: 107bdb09b; -[SCDiscoverFeedEventsController itemViewingSessionDataProvider] */

void FUN_107bdb074(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bdb09c; end: 107bdb43f; -[SCDiscoverFeedEventsController _initSession:] */

void FUN_107bdb09c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c071ae0(param_4,param_3,*(undefined8 *)(param_2 + 0x88));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_2 + 0x88);
    *(ulong *)(param_2 + 0x88) = param_4;
    _objc_release(uVar2);
    func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x90));
    puVar3 = PTR_PTR_1126c90c0;
    _objc_alloc();
    func_0x00010c11fb80(param_4);
    uVar2 = param_1;
    func_0x00010c11fb00(param_4);
    func_0x00010c02c240(param_1,uVar2,puVar3,param_3,0,0,*(undefined8 *)(param_2 + 8),1,
                        *(undefined8 *)(param_2 + 0x1a8));
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    *(undefined **)(param_2 + 0x98) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x98),param_3,param_2);
    puVar3 = PTR_PTR_1126c90c0;
    _objc_alloc();
    uVar4 = 0;
    func_0x00010c02c240(0,0);
    uVar2 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined **)(param_2 + 0xd8) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0xd8),param_3,param_2);
    puVar3 = PTR_PTR_1126c90c0;
    _objc_alloc();
    func_0x00010befe020(param_4);
    uVar2 = uVar4;
    func_0x00010befdfc0(param_4);
    func_0x00010c02c260(uVar4,uVar2,puVar3,param_3,0,0,*(undefined8 *)(param_2 + 8),
                        *(undefined8 *)(param_2 + 0x1a8));
    uVar2 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined **)(param_2 + 0xa0) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0xa0),param_3,param_2);
    puVar3 = PTR_PTR_1126c90c0;
    _objc_alloc();
    func_0x00010befdfa0(param_4);
    uVar2 = uVar4;
    func_0x00010befdfc0(param_4);
    func_0x00010c02c260(uVar4,uVar2,puVar3,param_3,0,0,*(undefined8 *)(param_2 + 8),
                        *(undefined8 *)(param_2 + 0x1a8));
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined **)(param_2 + 0xa8) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0xa8),param_3,param_2);
    puVar3 = PTR_PTR_1126c90c0;
    _objc_alloc();
    uVar4 = 0x3f000000;
    func_0x00010c02c260(0x3f000000,0);
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined **)(param_2 + 0xb0) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0xb0),param_3,param_2);
    puVar3 = PTR_PTR_1126c90c0;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_2 + 400);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d980();
    func_0x00010c02c260(0x3f000000,uVar4,puVar3,param_3,0,0,*(undefined8 *)(param_2 + 8),
                        *(undefined8 *)(param_2 + 0x1a8));
    uVar4 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined **)(param_2 + 0xb8) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0xb8),param_3,param_2);
    puVar3 = PTR_PTR_1126c90c0;
    _objc_alloc();
    func_0x00010c02c260(0x3c23d70a,0);
    uVar2 = *(undefined8 *)(param_2 + 0xc0);
    *(undefined **)(param_2 + 0xc0) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0xc0),param_3,param_2);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x90),param_3,*(undefined8 *)(param_2 + 0xc0));
    puVar3 = PTR_PTR_1126c90c0;
    _objc_alloc();
    func_0x00010c02c260(0,0);
    uVar2 = *(undefined8 *)(param_2 + 200);
    *(undefined **)(param_2 + 200) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 200),param_3,param_2);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x90),param_3,*(undefined8 *)(param_2 + 200));
    puVar3 = PTR_PTR_1126c90c0;
    _objc_alloc();
    func_0x00010c02c260(0,0);
    uVar2 = *(undefined8 *)(param_2 + 0xd0);
    *(undefined **)(param_2 + 0xd0) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0xd0),param_3,param_2);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x90),param_3,*(undefined8 *)(param_2 + 0x98));
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x90),param_3,*(undefined8 *)(param_2 + 0xd8));
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x90),param_3,*(undefined8 *)(param_2 + 0xa0));
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x90),param_3,*(undefined8 *)(param_2 + 0xa8));
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x90),param_3,*(undefined8 *)(param_2 + 0xb0));
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x90),param_3,*(undefined8 *)(param_2 + 0xb8));
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x90),param_3,*(undefined8 *)(param_2 + 0xe0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bdb440; end: 107bdb657; -[SCDiscoverFeedEventsController _finishSession:] */

void FUN_107bdb440(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  _objc_retain();
  _dispatch_group_create();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar6 = *(long *)(param_1 + 0x90);
  _objc_retain(lVar6);
  lVar4 = lVar6;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    lVar8 = *plStack_130;
    do {
      lVar5 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(undefined8 *)(lStack_138 + lVar5 * 8);
        _dispatch_group_enter(lVar2);
        puStack_168 = puVar1;
        uStack_160 = 0xc2000000;
        pcStack_158 = FUN_107bdb658;
        puStack_150 = &UNK_110842e18;
        _objc_retain(lVar2);
        lStack_148 = lVar2;
        func_0x00010bfb3380(uVar7);
        _objc_release(lStack_148);
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = lVar6;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar6);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x107bdb660;
  puStack_178 = &UNK_110849530;
  lStack_170 = param_3;
  _objc_retain(param_3);
  func_0x000100bc0718(lVar2,uVar7,&puStack_190);
  _objc_release(uVar7);
  _objc_release(lStack_170);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar2 + 0x20));
  return;
}



/* Entry: 107bdb658; end: 107bdb66b;  */

void FUN_107bdb658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107bdb66c; end: 107bdba7b; -[SCDiscoverFeedEventsController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107bdb66c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf51e00();
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126c12a8;
  func_0x00010bf04780(PTR_PTR_1126c12a8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar3 == 0) {
    uVar3 = param_4;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      puVar7 = auStack_110;
      _objc_copyWeak(puVar7,auStack_68);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(uVar1);
      func_0x00010c0f7fc0(uVar8);
      _objc_release(uVar1);
      _objc_release(param_4);
      uVar3 = param_3;
    }
    else {
      uVar3 = param_3;
      func_0x00010c0720c0();
      if (((uVar3 & 1) == 0) && (uVar3 = param_3, func_0x00010c0720c0(), (int)uVar3 == 0))
      goto LAB_107bdb9ec;
      uVar8 = *(undefined8 *)(param_1 + 8);
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_107bdbc24;
      puStack_f0 = &UNK_110850cf8;
      puVar7 = auStack_d0;
      _objc_copyWeak(puVar7,auStack_68);
      _objc_retain(param_3);
      uStack_e8 = param_3;
      _objc_retain(param_4);
      uStack_e0 = param_4;
      _objc_retain(uVar1);
      uStack_d8 = uVar1;
      func_0x00010c0f7fc0(uVar8);
      _objc_release(uStack_d8);
      _objc_release(uStack_e0);
      uVar3 = uStack_e8;
    }
  }
  else {
    uVar4 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c067fc0();
    _objc_release(uVar3);
    uVar5 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar3 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    uVar5 = uVar3;
    func_0x00010c067fc0();
    _objc_release(uVar3);
    if (uVar4 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_107bdba7c;
      puStack_80 = &UNK_110841fb0;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_4);
      uStack_78 = param_4;
      func_0x00010c0f7fc0(uVar8);
      _objc_release(uStack_78);
      _objc_destroyWeak(auStack_70);
    }
    if (uVar5 == 0) goto LAB_107bdb9ec;
    uVar8 = *(undefined8 *)(param_1 + 8);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x107bdbb50;
    puStack_b0 = &UNK_110841fb0;
    puVar7 = auStack_a0;
    _objc_copyWeak(puVar7,auStack_68);
    _objc_retain(param_4);
    uStack_a8 = param_4;
    func_0x00010c0f7fc0(uVar8);
    uVar3 = uStack_a8;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(puVar7);
LAB_107bdb9ec:
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bdba7c; end: 107bdbc23;  */

void FUN_107bdba7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbb00;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be52c60(lVar1,param_2,&PTR____CFConstantStringClassReference_110f41518,uVar5,puVar2);
  _objc_release(puVar2);
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f41518;
  uStack_58 = 0x107bdbb50;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = lVar3 + 0x28;
  puStack_80 = puVar2;
  lStack_70 = lVar1;
  uStack_68 = uVar5;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  uVar5 = *(undefined8 *)(lVar3 + 0x20);
  ppuStack_98 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbb18;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,&ppuStack_98,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be52c60(lVar4,param_2,&PTR____CFConstantStringClassReference_110f41518,uVar5,puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = lVar4 + 0x38;
  _objc_loadWeakRetained(lVar4);
  func_0x00010be2a080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107bdbc24; end: 107bdbc93;  */

void FUN_107bdbc24(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bdbc94; end: 107bdc18f; -[SCDiscoverFeedEventsController _logEventWithEventName:identifier:extraData:] */

void FUN_107bdbc94(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0d3c80();
  if (param_5 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    _objc_retain(param_5);
    puVar1 = param_5;
  }
  _objc_release(param_5);
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41418);
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41458);
    if ((int)uVar2 == 0) {
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f417b8);
      if ((int)uVar2 == 0) {
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f417d8);
        if ((int)uVar2 == 0) {
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41498);
          if ((int)uVar2 == 0) {
            uVar2 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f414b8);
            if ((int)uVar2 == 0) {
              uVar2 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f414f8);
              if ((int)uVar2 == 0) {
                uVar2 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41518
                                   );
                if ((int)uVar2 == 0) {
                  uVar2 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f41558);
                  if ((int)uVar2 == 0) {
                    uVar2 = param_3;
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110f415b8);
                    if ((int)uVar2 == 0) {
                      uVar2 = param_3;
                      func_0x00010c0720c0(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110f415f8);
                      if ((int)uVar2 == 0) {
                        uVar2 = param_3;
                        func_0x00010c0720c0(param_3,param_2,
                                            &PTR____CFConstantStringClassReference_110f41618);
                        if ((int)uVar2 == 0) {
                          uVar2 = param_3;
                          func_0x00010c0720c0(param_3,param_2,
                                              &PTR____CFConstantStringClassReference_110f41678);
                          if (((uVar2 & 1) == 0) &&
                             (uVar2 = param_3,
                             func_0x00010c0720c0(param_3,param_2,
                                                 &PTR____CFConstantStringClassReference_110eb3ad8),
                             (int)uVar2 == 0)) {
                            uVar2 = param_3;
                            func_0x00010c0720c0(param_3,param_2,
                                                &PTR____CFConstantStringClassReference_110f41598);
                            if ((int)uVar2 == 0) {
                              uVar2 = param_3;
                              func_0x00010c0720c0(param_3,param_2,
                                                  &PTR____CFConstantStringClassReference_110e6cf78);
                              if ((int)uVar2 == 0) {
                                uVar2 = param_3;
                                func_0x00010c0720c0(param_3,param_2,
                                                    &PTR____CFConstantStringClassReference_110f41438
                                                   );
                                if ((int)uVar2 == 0) {
                                  uVar2 = param_3;
                                  func_0x00010c0720c0(param_3,param_2,
                                                      &
                                                  PTR____CFConstantStringClassReference_110f41698);
                                  if ((int)uVar2 == 0) {
                                    uVar2 = param_3;
                                    func_0x00010c0720c0(param_3,param_2,
                                                        &
                                                  PTR____CFConstantStringClassReference_110f416b8);
                                    if ((int)uVar2 == 0) {
                                      uVar2 = param_3;
                                      func_0x00010c0720c0(param_3,param_2,
                                                          &
                                                  PTR____CFConstantStringClassReference_110f416d8);
                                      if ((int)uVar2 == 0) {
                                        uVar2 = param_3;
                                        func_0x00010c0720c0(param_3,param_2,
                                                            &
                                                  PTR____CFConstantStringClassReference_110f41718);
                                        if ((int)uVar2 == 0) {
                                          uVar2 = param_3;
                                          func_0x00010c0720c0(param_3,param_2,
                                                              &
                                                  PTR____CFConstantStringClassReference_110f416f8);
                                          if ((int)uVar2 == 0) {
                                            uVar2 = param_3;
                                            func_0x00010c0720c0(param_3,param_2,
                                                                &
                                                  PTR____CFConstantStringClassReference_110f417f8);
                                            if ((int)uVar2 == 0) {
                                              uVar2 = param_3;
                                              func_0x00010c0720c0(param_3,param_2,
                                                                  &
                                                  PTR____CFConstantStringClassReference_110f41818);
                                              if ((int)uVar2 == 0) {
                                                uVar2 = param_3;
                                                func_0x00010c0720c0(param_3,param_2,
                                                                    &
                                                  PTR____CFConstantStringClassReference_110f41758);
                                                if ((int)uVar2 == 0) {
                                                  uVar2 = param_3;
                                                  func_0x00010c0720c0(param_3,param_2,
                                                                      &
                                                  PTR____CFConstantStringClassReference_110eb64d8);
                                                  if (((uVar2 & 1) == 0) &&
                                                     (uVar2 = param_3,
                                                     func_0x00010c0720c0(param_3,param_2,
                                                                         &
                                                  PTR____CFConstantStringClassReference_110eb6558),
                                                  (int)uVar2 == 0)) {
                                                    uVar2 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f41478);
                                                  if ((int)uVar2 == 0) {
                                                    uVar2 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f414d8);
                                                  if ((int)uVar2 == 0) {
                                                    uVar2 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f41738);
                                                  if ((int)uVar2 == 0) {
                                                    uVar2 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f41778);
                                                  if ((int)uVar2 == 0) {
                                                    uVar2 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f41798);
                                                  if ((int)uVar2 != 0) {
                                                    func_0x00010be275e0(param_1,param_2,param_4,
                                                                        puVar1);
                                                  }
                                                  }
                                                  else {
                                                    func_0x00010be31120(param_1,param_2,param_4,
                                                                        puVar1);
                                                  }
                                                  }
                                                  else {
                                                    func_0x00010be275a0(param_1,param_2,param_4,
                                                                        puVar1);
                                                  }
                                                  }
                                                  else {
                                                    func_0x00010be2a180(param_1,param_2,param_4,
                                                                        puVar1);
                                                  }
                                                  }
                                                  else {
                                                    func_0x00010bf81e00(param_1,param_2,0,puVar1);
                                                  }
                                                  }
                                                  else {
                                                    func_0x00010be296c0(param_1,param_2,param_4,
                                                                        puVar1);
                                                  }
                                                }
                                                else {
                                                  func_0x00010be27780(param_1,param_2,param_4,puVar1
                                                                     );
                                                }
                                              }
                                              else {
                                                func_0x00010be29660(param_1,param_2,puVar1);
                                              }
                                            }
                                            else {
                                              func_0x00010be29680(param_1,param_2,puVar1);
                                            }
                                          }
                                          else {
                                            func_0x00010be2cec0(param_1,param_2,param_4,puVar1);
                                          }
                                        }
                                        else {
                                          func_0x00010be275c0(param_1,param_2,param_4,puVar1);
                                        }
                                      }
                                      else {
                                        func_0x00010be317c0(param_1,param_2,param_4,puVar1);
                                      }
                                    }
                                    else {
                                      func_0x00010be30b80(param_1,param_2,param_4,puVar1);
                                    }
                                  }
                                  else {
                                    func_0x00010be2d720(param_1,param_2,param_4,puVar1);
                                  }
                                }
                                else {
                                  func_0x00010be28780(param_1,param_2,param_4,puVar1);
                                }
                              }
                              else {
                                func_0x00010be2e320(param_1,param_2,param_4,puVar1);
                              }
                            }
                            else {
                              func_0x00010be33380(param_1,param_2,param_4,puVar1);
                            }
                          }
                          else {
                            func_0x00010be2f2c0(param_1,param_2,param_4,puVar1);
                          }
                        }
                        else {
                          func_0x00010be9f120(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110f41618,
                                              puVar1,1);
                        }
                      }
                      else {
                        func_0x00010be296a0(param_1,param_2,param_4,puVar1);
                      }
                    }
                    else {
                      func_0x00010be2ac00(param_1,param_2,param_4,puVar1);
                    }
                  }
                  else {
                    func_0x00010be53240(param_1,param_2,param_4,puVar1);
                  }
                }
                else {
                  func_0x00010be29640(param_1,param_2,param_4,puVar1);
                }
              }
              else {
                func_0x00010be2da80(param_1,param_2,param_4,puVar1);
              }
            }
            else {
              func_0x00010be2daa0(param_1,param_2,param_4,puVar1);
            }
          }
          else {
            func_0x00010be2ec80(param_1,param_2,param_4,puVar1);
          }
        }
        else {
          func_0x00010be2da40(param_1);
        }
      }
      else {
        func_0x00010be2da60(param_1,param_2,puVar1);
      }
    }
    else {
      func_0x00010be2d460(param_1,param_2,param_4,puVar1);
    }
  }
  else {
    func_0x00010bedafc0(param_1,param_2,param_4,puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bdc190; end: 107bdc40f; -[SCDiscoverFeedEventsController _handleFriendsFeedImpressionEvents:identifier:extraData:] */

void FUN_107bdc190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0d3c80();
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_5);
    _objc_release(lVar1);
  }
  else {
    func_0x00010c1d0640(param_5);
  }
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c0720c0();
    if (((int)uVar2 == 0) || (lVar1 = *(long *)(param_1 + 0x98), lVar1 == 0)) goto LAB_107bdc3e4;
    uVar5 = param_5;
    func_0x00010bf51e00(param_5);
    uVar6 = uVar5;
    FUN_107cb71b8();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010bf51e00(param_5);
    func_0x00010bfb3380(lVar1);
    _objc_release(uVar7);
  }
  else {
    uVar6 = param_5;
    func_0x00010bf51e00();
    uVar7 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar5 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c21e8;
    _objc_opt_class(PTR_PTR_1126c21e8);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar5 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar7;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = uVar5;
    func_0x00010c067fc0();
    if (uVar6 == 0x10d) {
      FUN_107c93108(*(undefined8 *)(param_1 + 0x1e8),
                    &PTR____CFConstantStringClassReference_110ddee38,1);
    }
    uVar6 = param_5;
    func_0x00010bf51e00(param_5);
    func_0x00010be52c60(param_1);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_107bdc3e4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bdc410; end: 107bdc413;  */

void FUN_107bdc410(void)

{
  return;
}



/* Entry: 107bdc414; end: 107bdfccb; -[SCDiscoverFeedEventsController _updateLoggerInfoWithIdentifier:data:] */

ulong FUN_107bdc414(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined **param_5
                   )

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long lVar22;
  long lVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint uVar33;
  long lVar34;
  undefined8 uVar35;
  undefined **ppuVar36;
  ulong uVar37;
  undefined **ppuVar38;
  undefined8 uVar39;
  undefined **ppuVar40;
  float fVar41;
  undefined **ppuStack_150;
  ulong uStack_110;
  ulong uStack_108;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar38 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f41a58,puVar3);
  if ((int)ppuVar38 != 0) {
    ppuVar40 = param_5;
    func_0x00010c0e00e0();
    fVar41 = SUB84(param_1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar8 = ppuVar40;
    _objc_opt_isKindOfClass(ppuVar40,puVar3);
    ppuVar38 = ppuVar40;
    if (((ulong)ppuVar8 & 1) == 0) {
      ppuVar38 = (undefined **)0x0;
    }
    _objc_retain(ppuVar38);
    _objc_release(ppuVar40);
    ppuVar8 = &PTR____CFConstantStringClassReference_110eb3858;
    if (ppuVar38 != (undefined **)0x0) {
      ppuVar8 = ppuVar40;
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar38 = param_5;
    func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f41af8,puVar3);
    if ((int)ppuVar38 == 0) {
      ppuVar38 = (undefined **)0x1;
    }
    else {
      ppuVar40 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar38 = ppuVar40;
      func_0x00010c067fc0();
      _objc_release(ppuVar40);
    }
    uVar39 = *(undefined8 *)(param_2 + 0xe8);
    ppuVar4 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    param_1 = (double)fVar41;
    ppuVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    ppuVar6 = ppuVar5;
    _objc_opt_isKindOfClass(ppuVar5,puVar3);
    ppuVar40 = ppuVar5;
    if (((ulong)ppuVar6 & 1) == 0) {
      ppuVar40 = (undefined **)0x0;
    }
    _objc_retain(ppuVar40);
    _objc_release(ppuVar5);
    func_0x00010c1522a0(uVar39);
    _objc_release(ppuVar40);
    _objc_release(ppuVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar40 = param_5;
    func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f41c38,puVar3);
    if ((int)ppuVar40 != 0) {
      ppuVar40 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed9ca0(param_2);
      _objc_release(ppuVar40);
    }
    if (ppuVar38 == (undefined **)0x1) {
      func_0x00010bed9c80(param_2);
    }
    _objc_release(ppuVar8);
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar38 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f41a78,puVar3);
  if ((int)ppuVar38 != 0) {
    ppuVar40 = param_5;
    func_0x00010c0e00e0();
    fVar41 = SUB84(param_1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar8 = ppuVar40;
    _objc_opt_isKindOfClass(ppuVar40,puVar3);
    ppuVar38 = ppuVar40;
    if (((ulong)ppuVar8 & 1) == 0) {
      ppuVar38 = (undefined **)0x0;
    }
    _objc_retain(ppuVar38);
    _objc_release(ppuVar40);
    ppuVar8 = &PTR____CFConstantStringClassReference_110eb3858;
    if (ppuVar38 != (undefined **)0x0) {
      ppuVar8 = ppuVar40;
    }
    uVar39 = *(undefined8 *)(param_2 + 0xe8);
    ppuVar40 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    param_1 = (double)fVar41;
    ppuVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    ppuVar6 = ppuVar5;
    _objc_opt_isKindOfClass(ppuVar5,puVar3);
    ppuVar38 = ppuVar5;
    if (((ulong)ppuVar6 & 1) == 0) {
      ppuVar38 = (undefined **)0x0;
    }
    _objc_retain(ppuVar38);
    _objc_release(ppuVar5);
    func_0x00010c151fa0(uVar39);
    _objc_release(ppuVar38);
    _objc_release(ppuVar4);
    _objc_release(ppuVar40);
    _objc_release(ppuVar8);
  }
  ppuVar40 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar8 = ppuVar40;
  _objc_opt_isKindOfClass(ppuVar40,puVar3);
  ppuVar38 = ppuVar40;
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar38 = (undefined **)0x0;
  }
  _objc_retain(ppuVar38);
  _objc_release(ppuVar40);
  ppuVar40 = ppuVar38;
  FUN_107bdfccc(ppuVar38,*(undefined8 *)(param_2 + 0x18));
  if ((int)ppuVar40 != 0) {
    ppuVar40 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(param_2 + 0x18);
    *(undefined ***)(param_2 + 0x18) = ppuVar40;
    _objc_release(uVar39);
    ppuVar8 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    ppuVar4 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar3);
    ppuVar40 = ppuVar8;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar40 = (undefined **)0x0;
    }
    _objc_retain(ppuVar40);
    _objc_release(ppuVar8);
    if (ppuVar40 == (undefined **)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(double *)(param_2 + 0x20) = param_1;
      _objc_release(puVar3);
    }
    else {
      func_0x00010c26f320(ppuVar8);
      *(double *)(param_2 + 0x20) = param_1;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar39 = *(undefined8 *)(param_2 + 0x70);
    *(undefined **)(param_2 + 0x70) = puVar3;
    _objc_release(uVar39);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar39 = *(undefined8 *)(param_2 + 0x160);
    *(undefined **)(param_2 + 0x160) = puVar3;
    _objc_release(uVar39);
    func_0x00010bf3b5a0(param_2);
    func_0x00010c138f80(*(undefined8 *)(param_2 + 0xd0));
    _objc_release(ppuVar40);
  }
  ppuVar40 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar40 == (undefined **)0x0) {
    ppuVar40 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar40 != (undefined **)0x0) {
      ppuVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar8);
      _objc_release(ppuVar40);
      if (((ulong)ppuVar4 & 1) == 0) {
        uVar39 = *(undefined8 *)(param_2 + 0x100);
        func_0x00010c25a160(uVar39);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_5);
        _objc_release(uVar39);
        ppuVar8 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126d50c0;
        _objc_opt_class(PTR_PTR_1126d50c0);
        ppuVar4 = ppuVar8;
        _objc_opt_isKindOfClass(ppuVar8,puVar3);
        ppuVar40 = ppuVar8;
        if (((ulong)ppuVar4 & 1) == 0) {
          ppuVar40 = (undefined **)0x0;
        }
        _objc_retain(ppuVar40);
        _objc_release(ppuVar8);
        func_0x00010bed6e00(param_2);
        goto LAB_107bdc8e0;
      }
    }
  }
  else {
LAB_107bdc8e0:
    _objc_release(ppuVar40);
  }
  puVar3 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  ppuVar40 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f423f8,puVar3);
  if ((int)ppuVar40 == 0) {
    ppuVar40 = (undefined **)0x0;
  }
  else {
    ppuVar8 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d50c0;
    _objc_opt_class(PTR_PTR_1126d50c0);
    ppuVar4 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar3);
    ppuVar40 = ppuVar8;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar40 = (undefined **)0x0;
    }
    _objc_retain(ppuVar40);
    _objc_release(ppuVar8);
  }
  ppuVar8 = ppuVar40;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar8;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  ppuVar6 = *(undefined ***)(param_2 + 0x100);
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar8;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar6);
  lVar34 = *(long *)(param_2 + 0x100);
  if ((((ppuVar4 == (undefined **)0x0) || (ppuVar5 == (undefined **)0x0)) ||
      (ppuVar40 == (undefined **)0x0)) || (lVar34 == 0)) {
    if ((ppuVar40 != (undefined **)0x0) && (lVar34 != 0)) {
      ppuVar8 = ppuVar40;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = *(undefined ***)(param_2 + 0x100);
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar7;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar8);
      _objc_retain(ppuVar6);
      if (ppuVar8 == ppuVar6) {
        uStack_108 = 0;
      }
      else {
        if (ppuVar6 == (undefined **)0x0) {
          uVar33 = 1;
        }
        else {
          ppuVar36 = ppuVar8;
          func_0x00010c071ae0();
          uVar33 = (uint)ppuVar36 ^ 1;
        }
        uStack_108 = (ulong)uVar33;
      }
      _objc_release(ppuVar6);
      _objc_release(ppuVar8);
      _objc_release(ppuVar6);
      goto LAB_107bdcc14;
    }
    if (ppuVar40 == (undefined **)0x0) {
      bVar1 = true;
      if (lVar34 != 0) {
        uStack_108 = 0;
        goto LAB_107bdcc40;
      }
    }
    else {
      func_0x00010bed6e00(param_2);
      uStack_108 = 0;
      bVar1 = false;
      if (*(long *)(param_2 + 0x100) != 0) goto LAB_107bdcc40;
    }
LAB_107bdcd1c:
    if (*(long *)(param_2 + 0x108) != 0) {
      ppuVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar6 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(ppuVar8);
        if (ppuVar6 == (undefined **)0x0) {
          func_0x00010be53360(param_2);
          ppuVar8 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar8;
          func_0x00010c0b4ca0();
          *(undefined ***)(param_2 + 0x118) = ppuVar6;
          _objc_release(ppuVar8);
        }
      }
    }
    uStack_108 = 0;
  }
  else {
    ppuVar8 = ppuVar4;
    func_0x00010bf52680();
    ppuVar6 = ppuVar5;
    func_0x00010bf52680();
    if (ppuVar8 == ppuVar6) {
      ppuVar8 = ppuVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
      func_0x00010bfe5ec0(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar8;
      func_0x00010c0720c0();
      uStack_108 = (ulong)ppuVar6 & 0xffffffff ^ 1;
LAB_107bdcc14:
      _objc_release(ppuVar7);
      _objc_release(ppuVar8);
      func_0x00010bed6e00(param_2);
      if (*(long *)(param_2 + 0x100) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
LAB_107bdcc40:
        ppuVar8 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if ((bVar1) && (ppuVar8 != (undefined **)0x0)) {
          ppuVar6 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar7 = ppuVar6;
          _objc_opt_isKindOfClass(ppuVar6,puVar3);
          ppuVar8 = ppuVar6;
          if (((ulong)ppuVar7 & 1) == 0) {
            ppuVar8 = (undefined **)0x0;
          }
          _objc_retain(ppuVar8);
          _objc_release(ppuVar6);
          uVar39 = *(undefined8 *)(param_2 + 0x100);
          func_0x00010bfe5ec0(uVar39);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar8;
          func_0x00010c0720c0();
          _objc_release(uVar39);
          uVar33 = (uint)uStack_108 | (uint)ppuVar6 ^ 0xffffffff;
          _objc_release(ppuVar8);
          bVar1 = true;
          uStack_108 = 1;
          if ((uVar33 & 1) == 0) goto LAB_107bdcd1c;
          goto LAB_107bdcda0;
        }
      }
      if ((uStack_108 & 1) == 0) goto LAB_107bdcd1c;
      uStack_108 = 1;
    }
    else {
      func_0x00010bed6e00(param_2);
      bVar1 = false;
      uStack_108 = 1;
      if (*(long *)(param_2 + 0x100) != 0) goto LAB_107bdcc40;
    }
  }
LAB_107bdcda0:
  ppuVar8 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar8 != (undefined **)0x0) {
    func_0x00010be8aee0(param_2);
  }
  ppuVar8 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar8;
  func_0x00010c067fc0();
  _objc_release(ppuVar8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar8 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42538,puVar3);
  if ((int)ppuVar8 == 0) {
    uStack_110 = 0;
  }
  else {
    ppuVar8 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar8;
    func_0x00010bf1f3c0();
    uStack_110 = (ulong)ppuVar7 & 0xffffffff;
    _objc_release(ppuVar8);
    func_0x00010c1d0640(param_5);
  }
  func_0x00010be3cae0();
  func_0x00010be3cb20();
  ppuVar8 = *(undefined ***)(param_2 + 0x100);
  func_0x00010bf32a00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar8 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar8 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179bc0(*(undefined8 *)(param_2 + 0x100));
      _objc_release(ppuVar8);
      ppuVar8 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c223740(*(undefined8 *)(param_2 + 0x100));
      goto LAB_107bdcf0c;
    }
  }
  else {
LAB_107bdcf0c:
    _objc_release(ppuVar8);
  }
  ppuVar8 = *(undefined ***)(param_2 + 0x100);
  func_0x00010c089640();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar8 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar8 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b82e0(*(undefined8 *)(param_2 + 0x100));
      goto LAB_107bdcf74;
    }
  }
  else {
LAB_107bdcf74:
    _objc_release(ppuVar8);
  }
  if ((int)uStack_110 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar8 = param_5;
    func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f424d8,puVar3);
    if ((int)ppuVar8 != 0) {
      ppuVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar8;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar8);
      if ((int)ppuVar7 != 0) {
        if (*(long *)(param_2 + 0x110) != 0) {
          ppuVar8 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppuVar8 == (undefined **)0x0) {
            ppuVar8 = param_5;
            func_0x00010c0d3c80(param_5);
            func_0x00010be563c0(param_2);
            _objc_release(ppuVar8);
          }
        }
        uVar39 = *(undefined8 *)(param_2 + 0x110);
        *(undefined8 *)(param_2 + 0x110) = 0;
        _objc_release(uVar39);
        ppuVar8 = param_5;
        func_0x00010c0d3c80();
        if (ppuVar8 == (undefined **)0x0) {
          ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          _objc_retain();
          _objc_release(ppuVar7);
        }
        else {
          _objc_retain(ppuVar8);
          ppuVar7 = ppuVar8;
        }
        _objc_release(ppuVar8);
        func_0x00010c1d0640(ppuVar7);
        ppuVar8 = ppuVar7;
        FUN_107cb71b8(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar7);
        _objc_release(ppuVar8);
        func_0x00010be2ac00(param_2);
        _objc_release(ppuVar7);
      }
    }
  }
  else {
    if (!bVar1) {
      ppuVar8 = param_5;
      func_0x00010c0d3c80();
      if (ppuVar8 == (undefined **)0x0) {
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        _objc_retain();
        _objc_release(ppuVar7);
      }
      else {
        _objc_retain(ppuVar8);
        ppuVar7 = ppuVar8;
      }
      _objc_release(ppuVar8);
      ppuVar36 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar27 = ppuVar36;
      _objc_opt_isKindOfClass(ppuVar36,puVar3);
      ppuVar8 = ppuVar36;
      if (((ulong)ppuVar27 & 1) == 0) {
        ppuVar8 = (undefined **)0x0;
      }
      _objc_retain(ppuVar8);
      _objc_release(ppuVar36);
      func_0x00010be45fa0();
      puVar3 = PTR_PTR_1126c21e8;
      _objc_alloc();
      ppuVar27 = ppuVar40;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar7;
      FUN_107cb71b8();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar40;
      func_0x000108f52270(ppuVar40);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar14 = ppuVar12;
      _objc_opt_isKindOfClass(ppuVar12,puVar13);
      ppuVar36 = ppuVar12;
      if (((ulong)ppuVar14 & 1) == 0) {
        ppuVar36 = (undefined **)0x0;
      }
      _objc_retain(ppuVar36);
      _objc_release(ppuVar12);
      ppuVar14 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      ppuVar15 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar16 = ppuVar15;
      _objc_opt_isKindOfClass(ppuVar15,puVar13);
      ppuVar12 = ppuVar15;
      if (((ulong)ppuVar16 & 1) == 0) {
        ppuVar12 = (undefined **)0x0;
      }
      _objc_retain(ppuVar12);
      _objc_release(ppuVar15);
      func_0x00010c0741a0();
      func_0x00010c01b6a0(*(undefined8 *)PTR__CGRectNull_1103475e8,
                          *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8),
                          *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10),
                          *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18),
                          *(undefined8 *)(param_2 + 0x20));
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar7);
      _objc_release(puVar13);
      _objc_release(puVar3);
      _objc_release(ppuVar12);
      _objc_release(ppuVar14);
      _objc_release(ppuVar36);
      _objc_release(ppuVar11);
      _objc_release(puVar10);
      _objc_release(ppuVar9);
      _objc_release(ppuVar27);
      ppuVar36 = ppuVar7;
      FUN_107cb71b8(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar7);
      _objc_release(ppuVar36);
      func_0x00010be2ac00(param_2);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
    }
    if (*(long *)(param_2 + 0x110) != 0) {
      ppuVar8 = param_5;
      func_0x00010c0d3c80(param_5);
      func_0x00010be563c0(param_2);
      _objc_release(ppuVar8);
    }
    if (bVar1) {
      ppuVar7 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar36 = ppuVar7;
      _objc_opt_isKindOfClass(ppuVar7,puVar3);
      ppuVar8 = ppuVar7;
      if (((ulong)ppuVar36 & 1) == 0) {
        ppuVar8 = (undefined **)0x0;
      }
      _objc_retain(ppuVar8);
      _objc_release(ppuVar7);
      ppuVar7 = ppuVar8;
      func_0x00010c0720c0();
      _objc_release(ppuVar8);
      if ((int)ppuVar7 != 0) {
        puVar3 = PTR_PTR_1126d7128;
        _objc_alloc();
        ppuVar7 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar36 = ppuVar7;
        _objc_opt_isKindOfClass(ppuVar7,puVar10);
        ppuVar8 = ppuVar7;
        if (((ulong)ppuVar36 & 1) == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        _objc_retain(ppuVar8);
        _objc_release(ppuVar7);
        ppuVar7 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        ppuVar36 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        ppuVar27 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_5);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar9 = param_5;
        func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42298,puVar10);
        if ((int)ppuVar9 != 0) {
          ppuVar9 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(ppuVar9);
        }
        _objc_release(param_5);
        ppuVar11 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar10);
        ppuVar9 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar9 = (undefined **)0x0;
        }
        _objc_retain(ppuVar9);
        _objc_release(ppuVar11);
        func_0x00010c01ba60();
        uVar39 = *(undefined8 *)(param_2 + 0x110);
        *(undefined **)(param_2 + 0x110) = puVar3;
        _objc_release(uVar39);
        _objc_release(ppuVar9);
        _objc_release(ppuVar27);
        _objc_release(ppuVar36);
        _objc_release(ppuVar7);
        _objc_release(ppuVar8);
      }
    }
    else {
      ppuVar7 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar36 = ppuVar7;
      _objc_opt_isKindOfClass(ppuVar7,puVar3);
      ppuVar8 = ppuVar7;
      if (((ulong)ppuVar36 & 1) == 0) {
        ppuVar8 = (undefined **)0x0;
      }
      _objc_retain();
      _objc_release(ppuVar7);
      func_0x00010be45fa0();
      puVar3 = PTR_PTR_1126d7128;
      _objc_alloc();
      ppuVar36 = ppuVar40;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      ppuVar27 = ppuVar40;
      func_0x000108f52270(ppuVar40,puVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar39 = *(undefined8 *)(param_2 + 0x70);
      ppuVar9 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar11 = ppuVar9;
      _objc_opt_isKindOfClass(ppuVar9,puVar13);
      ppuVar7 = ppuVar9;
      if (((ulong)ppuVar11 & 1) == 0) {
        ppuVar7 = (undefined **)0x0;
      }
      _objc_retain();
      _objc_release(ppuVar9);
      func_0x000107bdfd38(uVar39,ppuVar7);
      ppuVar11 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar15 = ppuVar14;
      _objc_opt_isKindOfClass(ppuVar14,puVar13);
      ppuVar9 = ppuVar14;
      if (((ulong)ppuVar15 & 1) == 0) {
        ppuVar9 = (undefined **)0x0;
      }
      _objc_retain();
      _objc_release(ppuVar14);
      ppuVar15 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      ppuVar16 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar17 = ppuVar16;
      _objc_opt_isKindOfClass(ppuVar16,puVar13);
      ppuVar14 = ppuVar16;
      if (((ulong)ppuVar17 & 1) == 0) {
        ppuVar14 = (undefined **)0x0;
      }
      _objc_retain(ppuVar14);
      _objc_release(ppuVar16);
      func_0x00010c0741a0();
      func_0x00010c075d80();
      ppuVar16 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      ppuVar18 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar19 = param_5;
      func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42298,puVar13);
      if ((int)ppuVar19 != 0) {
        ppuVar19 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_release(ppuVar19);
      }
      _objc_release(param_5);
      ppuVar20 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar21 = ppuVar20;
      _objc_opt_isKindOfClass(ppuVar20,puVar13);
      ppuVar19 = ppuVar20;
      if (((ulong)ppuVar21 & 1) == 0) {
        ppuVar19 = (undefined **)0x0;
      }
      _objc_retain(ppuVar19);
      _objc_release(ppuVar20);
      func_0x00010c067ec0();
      func_0x00010c01ba60();
      uVar39 = *(undefined8 *)(param_2 + 0x110);
      *(undefined **)(param_2 + 0x110) = puVar3;
      _objc_release(uVar39);
      _objc_release(ppuVar19);
      _objc_release(ppuVar18);
      _objc_release(ppuVar17);
      _objc_release(ppuVar16);
      _objc_release(ppuVar14);
      _objc_release(ppuVar15);
      _objc_release(ppuVar9);
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
      _objc_release(ppuVar7);
      _objc_release(ppuVar27);
      _objc_release(puVar10);
      _objc_release(ppuVar36);
      _objc_release(ppuVar8);
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar8 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42518,puVar3);
  if ((int)ppuVar8 != 0) {
    ppuVar8 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar8;
    func_0x00010c0b4ca0();
    *(undefined ***)(param_2 + 0x118) = ppuVar7;
    _objc_release(ppuVar8);
  }
  uVar33 = (uint)uStack_108 ^ 1;
  if (*(long *)(param_2 + 0x118) != 7) {
    uVar33 = 1;
  }
  if (uVar33 == 0) {
    ppuVar8 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar8;
    func_0x00010bf1f3c0();
    if (((ulong)ppuVar7 & 1) == 0) {
      ppuVar7 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar36 = ppuVar7;
      func_0x00010c0b4ca0();
      if (ppuVar36 == (undefined **)0xc) {
        uVar39 = 0xc;
      }
      else {
        iVar2 = (int)*(undefined8 *)(param_2 + 0x100);
        func_0x00010c07f3a0();
        uVar39 = 0xc;
        if (iVar2 == 0) {
          uVar39 = 4;
        }
      }
      _objc_release(ppuVar7);
    }
    else {
      uVar39 = 0xc;
    }
    _objc_release(ppuVar8);
    *(undefined8 *)(param_2 + 0x118) = uVar39;
    *(undefined1 *)(param_2 + 0x138) = 1;
  }
  ppuVar8 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar8;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar8);
  if ((uStack_108 != 0) || (((int)ppuVar7 != 0 && (*(long *)(param_2 + 0x100) != 0)))) {
    func_0x00010be53240(param_2);
    lVar34 = param_2 + 0x170;
    _objc_loadWeakRetained();
    lVar22 = lVar34;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar40;
    func_0x00010c11fd40(ppuVar40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740();
    lVar23 = lVar22;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(lVar22);
    _objc_release(lVar34);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar23 != 0) {
      func_0x00010c24be00(lVar23);
      func_0x00010c0df6e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_5);
      _objc_release(puVar3);
      lVar34 = lVar23;
      func_0x00010c09ab40(lVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_5);
      _objc_release(lVar34);
      ppuVar36 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar27 = ppuVar36;
      _objc_opt_isKindOfClass(ppuVar36,puVar3);
      ppuVar8 = ppuVar36;
      if (((ulong)ppuVar27 & 1) == 0) {
        ppuVar8 = (undefined **)0x0;
      }
      _objc_retain(ppuVar8);
      _objc_release(ppuVar36);
      func_0x00010c259740(lVar23);
      func_0x00010be38d00(param_2);
      func_0x00010be57480(param_2);
      _objc_release(ppuVar8);
    }
    func_0x00010c1d0640(param_5);
    lVar34 = lVar23;
    func_0x00010c13bd00(lVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_5);
    _objc_release(lVar34);
    ppuVar8 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179bc0(*(undefined8 *)(param_2 + 0x100));
    _objc_release(ppuVar8);
    ppuVar8 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c223740(*(undefined8 *)(param_2 + 0x100));
    _objc_release(ppuVar8);
    if (((uStack_110 & 1) == 0) && (func_0x00010bdeede0(param_2), (int)ppuVar7 != 0)) {
      func_0x00010c1b49a0(*(undefined8 *)(param_2 + 0x100));
    }
    _objc_release(lVar23);
  }
  ppuVar7 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar36 = ppuVar7;
  _objc_opt_isKindOfClass(ppuVar7,puVar3);
  ppuVar8 = ppuVar7;
  if (((ulong)ppuVar36 & 1) == 0) {
    ppuVar8 = (undefined **)0x0;
  }
  _objc_retain();
  _objc_release(ppuVar7);
  if ((uStack_110 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar7 = param_5;
    func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42458,puVar3);
    if ((int)ppuVar7 != 0) {
      lVar34 = *(long *)(param_2 + 0x100);
      if (lVar34 == 0) {
        ppuVar7 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar7 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4fe0();
          _objc_release(ppuVar7);
        }
        ppuVar7 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar7 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4fe0();
          _objc_release(ppuVar7);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar7 = param_5;
        func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110eb5818,puVar3);
        if ((int)ppuVar7 != 0) {
          ppuVar7 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          _objc_release(ppuVar7);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar7 = param_5;
        func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f41e98,puVar3);
        if ((int)ppuVar7 != 0) {
          ppuVar7 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4fe0();
          _objc_release(ppuVar7);
        }
        ppuVar36 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar27 = ppuVar36;
        _objc_opt_isKindOfClass(ppuVar36,puVar3);
        ppuVar7 = ppuVar36;
        if (((ulong)ppuVar27 & 1) == 0) {
          ppuVar7 = (undefined **)0x0;
        }
        _objc_retain();
        _objc_release(ppuVar36);
        func_0x00010be45fa0();
        puVar3 = PTR_PTR_1126d7128;
        _objc_alloc();
        ppuVar27 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar40;
        func_0x000108f52270(ppuVar40,puVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar39 = *(undefined8 *)(param_2 + 0x70);
        ppuVar11 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar13);
        ppuVar36 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar36 = (undefined **)0x0;
        }
        _objc_retain();
        _objc_release(ppuVar11);
        func_0x000107bdfd38(uVar39,ppuVar36);
        ppuVar12 = param_5;
        FUN_107cb71b8();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar15 = ppuVar14;
        _objc_opt_isKindOfClass(ppuVar14,puVar13);
        ppuVar11 = ppuVar14;
        if (((ulong)ppuVar15 & 1) == 0) {
          ppuVar11 = (undefined **)0x0;
        }
        _objc_retain();
        _objc_release(ppuVar14);
        ppuVar15 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        ppuVar16 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar17 = ppuVar16;
        _objc_opt_isKindOfClass(ppuVar16,puVar13);
        ppuVar14 = ppuVar16;
        if (((ulong)ppuVar17 & 1) == 0) {
          ppuVar14 = (undefined **)0x0;
        }
        _objc_retain(ppuVar14);
        _objc_release(ppuVar16);
        func_0x00010c0741a0();
        func_0x00010c075d80();
        ppuVar16 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        ppuVar18 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_5);
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar19 = param_5;
        func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42298,puVar13);
        if ((int)ppuVar19 != 0) {
          ppuVar19 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(ppuVar19);
        }
        _objc_release(param_5);
        ppuVar20 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        ppuVar21 = ppuVar20;
        _objc_opt_isKindOfClass(ppuVar20,puVar13);
        ppuVar19 = ppuVar20;
        if (((ulong)ppuVar21 & 1) == 0) {
          ppuVar19 = (undefined **)0x0;
        }
        _objc_retain(ppuVar19);
        _objc_release(ppuVar20);
        ppuVar21 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar24 = ppuVar21;
        _objc_opt_isKindOfClass(ppuVar21,puVar13);
        ppuVar20 = ppuVar21;
        if (((ulong)ppuVar24 & 1) == 0) {
          ppuVar20 = (undefined **)0x0;
        }
        _objc_retain(ppuVar20);
        _objc_release(ppuVar21);
        ppuVar24 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        ppuVar25 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar26 = ppuVar25;
        _objc_opt_isKindOfClass(ppuVar25,puVar13);
        ppuVar21 = ppuVar25;
        if (((ulong)ppuVar26 & 1) == 0) {
          ppuVar21 = (undefined **)0x0;
        }
        _objc_retain(ppuVar21);
        _objc_release(ppuVar25);
        ppuVar25 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01ba60();
        uVar39 = *(undefined8 *)(param_2 + 0x100);
        *(undefined **)(param_2 + 0x100) = puVar3;
        _objc_release(uVar39);
        _objc_release(ppuVar25);
        _objc_release(ppuVar21);
        _objc_release(ppuVar24);
        _objc_release(ppuVar20);
        _objc_release(ppuVar19);
        _objc_release(ppuVar18);
        _objc_release(ppuVar17);
        _objc_release(ppuVar16);
        _objc_release(ppuVar14);
        _objc_release(ppuVar15);
        _objc_release(ppuVar11);
        _objc_release(ppuVar12);
        _objc_release(ppuVar36);
        _objc_release(ppuVar9);
        _objc_release(puVar10);
        _objc_release(ppuVar27);
        ppuVar36 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1833c0(*(undefined8 *)(param_2 + 0x100));
        _objc_release(ppuVar36);
        ppuVar36 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bbd60(*(undefined8 *)(param_2 + 0x100));
        _objc_release(ppuVar36);
        ppuVar36 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bb540(*(undefined8 *)(param_2 + 0x100));
        _objc_release(ppuVar36);
        ppuVar36 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e7380(*(undefined8 *)(param_2 + 0x100));
        _objc_release(ppuVar36);
        func_0x00010bed9fa0(param_2);
        _objc_release(ppuVar7);
        lVar34 = *(long *)(param_2 + 0x100);
      }
      func_0x00010bf4f080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar34 == 0) {
        ppuVar7 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1833c0(*(undefined8 *)(param_2 + 0x100));
        _objc_release(ppuVar7);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar36 = &PTR____CFConstantStringClassReference_110eb5818;
      ppuVar7 = param_5;
      func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110eb5818,puVar3);
      if ((int)ppuVar7 != 0) {
        ppuVar36 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x00010c1d5500(*(undefined8 *)(param_2 + 0x100));
        _objc_release(ppuVar36);
      }
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar7 = param_5;
      func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110e4a298,puVar3);
      if ((int)ppuVar7 == 0) {
        ppuStack_150 = (undefined **)0x0;
      }
      else {
        ppuStack_150 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
      }
      if (*(long *)(param_2 + 0x108) == 0) {
        ppuVar27 = *(undefined ***)(param_2 + 0x100);
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar27;
        func_0x00010c241660();
        _objc_retainAutoreleasedReturnValue();
        ppuVar36 = ppuVar7;
        func_0x00010bf529e0();
        if (ppuVar36 == (undefined **)0x0) {
          ppuVar9 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126d50c0;
          _objc_opt_class(PTR_PTR_1126d50c0);
          ppuVar11 = ppuVar9;
          _objc_opt_isKindOfClass(ppuVar9,puVar3);
          ppuVar36 = ppuVar9;
          if (((ulong)ppuVar11 & 1) == 0) {
            ppuVar36 = (undefined **)0x0;
          }
          _objc_retain(ppuVar36);
          _objc_release(ppuVar9);
          ppuVar9 = ppuVar36;
          func_0x00010c241660();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar9;
          func_0x00010bf529e0();
          _objc_release(ppuVar9);
          _objc_release(ppuVar36);
          _objc_release(ppuVar7);
          _objc_release(ppuVar27);
          if (ppuVar11 != (undefined **)0x0) {
            uVar39 = *(undefined8 *)(param_2 + 0x100);
            ppuVar27 = param_5;
            func_0x00010c0e00e0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c28a640(uVar39);
            goto LAB_107bde92c;
          }
        }
        else {
          _objc_release(ppuVar7);
LAB_107bde92c:
          _objc_release(ppuVar27);
        }
        ppuVar7 = ppuVar8;
        func_0x00010c08fa60();
        if (ppuVar7 != (undefined **)0x0) {
          uVar28 = *(ulong *)(param_2 + 0x100);
          func_0x00010c0ea7c0();
          _objc_retainAutoreleasedReturnValue();
          uVar37 = uVar28;
          func_0x00010c0720c0();
          _objc_release(uVar28);
          if ((uVar37 & 1) == 0) {
            func_0x00010c288240(*(undefined8 *)(param_2 + 0x100));
          }
        }
        puVar3 = PTR_PTR_1126d7128;
        _objc_alloc();
        uVar39 = *(undefined8 *)(param_2 + 0x100);
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar29 = *(undefined8 *)(param_2 + 0x100);
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c137c80();
        func_0x00010c084900();
        func_0x00010c084b00();
        ppuVar36 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ea860();
        ppuVar27 = param_5;
        FUN_107cb71b8();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar11 = ppuVar9;
        _objc_opt_isKindOfClass(ppuVar9,puVar10);
        ppuVar7 = ppuVar9;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar7 = (undefined **)0x0;
        }
        _objc_retain();
        _objc_release(ppuVar9);
        ppuVar9 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        uVar30 = *(undefined8 *)(param_2 + 0x100);
        func_0x00010c1554e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0741a0();
        func_0x00010c075d80();
        ppuVar11 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07f500();
        uVar31 = *(undefined8 *)(param_2 + 0x100);
        func_0x00010c09ab40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_5);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar12 = param_5;
        func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42298,puVar10);
        if ((int)ppuVar12 != 0) {
          ppuVar12 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(ppuVar12);
        }
        _objc_release(param_5);
        ppuVar14 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        ppuVar15 = ppuVar14;
        _objc_opt_isKindOfClass(ppuVar14,puVar10);
        ppuVar12 = ppuVar14;
        if (((ulong)ppuVar15 & 1) == 0) {
          ppuVar12 = (undefined **)0x0;
        }
        _objc_retain(ppuVar12);
        _objc_release(ppuVar14);
        ppuVar15 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar16 = ppuVar15;
        _objc_opt_isKindOfClass(ppuVar15,puVar10);
        ppuVar14 = ppuVar15;
        if (((ulong)ppuVar16 & 1) == 0) {
          ppuVar14 = (undefined **)0x0;
        }
        _objc_retain(ppuVar14);
        _objc_release(ppuVar15);
        uVar32 = *(undefined8 *)(param_2 + 0x100);
        func_0x00010c0ea7c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340();
        ppuVar16 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar17 = ppuVar16;
        _objc_opt_isKindOfClass(ppuVar16,puVar10);
        ppuVar15 = ppuVar16;
        if (((ulong)ppuVar17 & 1) == 0) {
          ppuVar15 = (undefined **)0x0;
        }
        _objc_retain(ppuVar15);
        _objc_release(ppuVar16);
        ppuVar17 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar18 = ppuVar17;
        _objc_opt_isKindOfClass(ppuVar17,puVar10);
        ppuVar16 = ppuVar17;
        if (((ulong)ppuVar18 & 1) == 0) {
          ppuVar16 = (undefined **)0x0;
        }
        _objc_retain(ppuVar16);
        _objc_release(ppuVar17);
        func_0x00010bf1f3c0();
        ppuVar17 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01ba60();
        uVar35 = *(undefined8 *)(param_2 + 0x108);
        *(undefined **)(param_2 + 0x108) = puVar3;
        _objc_release(uVar35);
        _objc_release(ppuVar17);
        _objc_release(ppuVar16);
        _objc_release(ppuVar15);
        _objc_release(uVar32);
        _objc_release(ppuVar14);
        _objc_release(ppuVar12);
        _objc_release(uVar31);
        _objc_release(ppuVar11);
        _objc_release(uVar30);
        _objc_release(ppuVar9);
        _objc_release(ppuVar7);
        _objc_release(ppuVar27);
        _objc_release(ppuVar36);
        _objc_release(uVar29);
        _objc_release(uVar39);
        ppuVar7 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1833c0(*(undefined8 *)(param_2 + 0x108));
        _objc_release(ppuVar7);
        ppuVar7 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bbd60(*(undefined8 *)(param_2 + 0x108));
        _objc_release(ppuVar7);
        ppuVar7 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e7380(*(undefined8 *)(param_2 + 0x108));
        _objc_release(ppuVar7);
        ppuVar36 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bb540(*(undefined8 *)(param_2 + 0x108));
        _objc_release(ppuVar36);
      }
      *(undefined8 *)(param_2 + 0x118) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 0x120) = 0xffffffffffffffff;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar7 = param_5;
      func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42638,puVar3);
      if ((int)ppuVar7 != 0) {
        ppuVar36 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar27 = ppuVar36;
        func_0x00010c0b4ca0();
        if (ppuVar27 != (undefined **)0x0) goto LAB_107bdef54;
LAB_107bdefc8:
        _objc_release(ppuVar36);
        goto LAB_107bdf024;
      }
LAB_107bdef54:
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar27 = param_5;
      func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110e4a298,puVar3);
      if ((int)ppuVar27 == 0) {
LAB_107bdefe4:
        if (((ulong)ppuVar7 & 1) != 0) {
LAB_107bdf0ac:
          _objc_release(ppuVar36);
        }
      }
      else {
        ppuVar27 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        ppuVar9 = ppuVar27;
        func_0x00010c08fa60();
        if (ppuVar9 == (undefined **)0x0) {
          _objc_release(ppuVar27);
          _objc_release(ppuVar27);
          goto LAB_107bdefe4;
        }
        ppuVar9 = ppuVar27;
        func_0x00010bfda7c0();
        if (((ulong)ppuVar9 & 1) != 0) {
          _objc_release(ppuVar27);
          _objc_release(ppuVar27);
          if (((ulong)ppuVar7 & 1) != 0) goto LAB_107bdefc8;
LAB_107bdf024:
          if (ppuVar6 == (undefined **)0x0) {
            uVar39 = *(undefined8 *)(param_2 + 0x100);
            ppuVar7 = param_5;
            FUN_107cb71b8(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c68e0(uVar39);
            _objc_release(ppuVar7);
            uVar39 = *(undefined8 *)(param_2 + 0x100);
            ppuVar7 = param_5;
            func_0x00010c0e00e0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c29f460(uVar39);
            _objc_release(ppuVar7);
          }
          uVar39 = *(undefined8 *)(param_2 + 0x108);
          ppuVar36 = param_5;
          FUN_107cb71b8(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c68e0(uVar39);
          goto LAB_107bdf0ac;
        }
        ppuVar9 = ppuVar27;
        func_0x00010bfdcf80();
        _objc_release(ppuVar27);
        _objc_release(ppuVar27);
        if (((ulong)ppuVar7 & 1) != 0) {
          _objc_release(ppuVar36);
        }
        if (((ulong)ppuVar9 & 1) != 0) goto LAB_107bdf024;
      }
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
      ppuVar7 = param_5;
      func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42498,puVar3);
      if ((int)ppuVar7 != 0) {
        uVar39 = *(undefined8 *)(param_2 + 0x100);
        ppuVar7 = param_5;
        FUN_107cb71b8(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c251ea0(uVar39);
        _objc_release(ppuVar7);
        uVar39 = *(undefined8 *)(param_2 + 0x108);
        ppuVar7 = param_5;
        FUN_107cb71b8(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c251ea0(uVar39);
        _objc_release(ppuVar7);
      }
      _objc_release(ppuStack_150);
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar7 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f424b8,puVar3);
  if ((int)ppuVar7 != 0) {
    if (ppuVar6 == (undefined **)0x0) {
      uVar39 = *(undefined8 *)(param_2 + 0x100);
      ppuVar6 = param_5;
      FUN_107cb71b8(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c68e0(uVar39);
      _objc_release(ppuVar6);
      uVar39 = *(undefined8 *)(param_2 + 0x100);
      ppuVar6 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29f460(uVar39);
      _objc_release(ppuVar6);
    }
    uVar39 = *(undefined8 *)(param_2 + 0x108);
    ppuVar6 = param_5;
    FUN_107cb71b8(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c68e0(uVar39);
    _objc_release(ppuVar6);
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  ppuVar6 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42d18,puVar3);
  if ((int)ppuVar6 != 0) {
    ppuVar7 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar36 = ppuVar7;
    _objc_opt_isKindOfClass(ppuVar7,puVar3);
    ppuVar6 = ppuVar7;
    if (((ulong)ppuVar36 & 1) == 0) {
      ppuVar6 = (undefined **)0x0;
    }
    _objc_retain(ppuVar6);
    _objc_release(ppuVar7);
    if (ppuVar6 != (undefined **)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar36 = param_5;
      func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f41cb8,puVar3);
      if ((int)ppuVar36 != 0) {
        ppuVar36 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_d8 = &uStack_a8;
        uStack_a8 = 0;
        uStack_98 = 0x2020000000;
        uStack_90 = 0;
        puStack_d0 = &uStack_c8;
        uStack_c8 = 0;
        uStack_b8 = 0x2020000000;
        uStack_b0 = 0;
        puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f0 = 0xc2000000;
        pcStack_e8 = FUN_107bdfdd4;
        puStack_e0 = &UNK_1109ffe28;
        puStack_c0 = puStack_d0;
        puStack_a0 = puStack_d8;
        func_0x000100504554(ppuVar7,&puStack_f8);
        ppuVar27 = ppuVar7;
        func_0x00010bf529e0();
        if ((ppuVar36 != (undefined **)0x0) &&
           (ppuVar9 = ppuVar36, func_0x00010c0720c0(), (int)ppuVar9 != 0)) {
          uVar28 = *(ulong *)(param_2 + 0x68);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar37 = uVar28;
          func_0x00010c071b60();
          _objc_release(uVar28);
          if ((uVar37 & 1) == 0) {
            func_0x00010be387a0(param_2);
          }
        }
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x68));
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x80));
        _objc_release(puVar3);
        if (ppuVar27 != (undefined **)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x78));
          _objc_release(puVar3);
        }
        iVar2 = (int)*(undefined8 *)(param_2 + 0x60);
        func_0x00010bfd3b20();
        if (iVar2 != 0) {
          uVar39 = *(undefined8 *)(param_2 + 0x60);
          func_0x00010bfa4480(uVar39);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c155ca0();
          if (ppuVar27 != (undefined **)0x0) {
            func_0x00010c155cc0(uVar39);
          }
          _objc_release(uVar39);
        }
        _objc_release(ppuVar7);
        __Block_object_dispose(&uStack_c8,8);
        __Block_object_dispose(&uStack_a8,8);
        _objc_release(ppuVar36);
      }
    }
    _objc_release(ppuVar6);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar6 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f422f8,puVar3);
  if ((int)ppuVar6 != 0) {
    ppuVar6 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(param_2 + 0x40);
    *(undefined ***)(param_2 + 0x40) = ppuVar6;
    _objc_release(uVar39);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar6 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42318,puVar3);
  if ((int)ppuVar6 != 0) {
    ppuVar6 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(param_2 + 0x48);
    *(undefined ***)(param_2 + 0x48) = ppuVar6;
    _objc_release(uVar39);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar6 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f41c38,puVar3);
  if ((int)ppuVar6 != 0) {
    ppuVar6 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(param_2 + 0x58);
    *(undefined ***)(param_2 + 0x58) = ppuVar6;
    _objc_release(uVar39);
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  ppuVar6 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42d98,puVar3);
  if ((int)ppuVar6 != 0) {
    ppuVar6 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(param_2 + 0xf0);
    *(undefined ***)(param_2 + 0xf0) = ppuVar6;
    _objc_release(uVar39);
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  ppuVar6 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42db8,puVar3);
  if ((int)ppuVar6 != 0) {
    ppuVar6 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(param_2 + 0xf8);
    *(undefined ***)(param_2 + 0xf8) = ppuVar6;
    _objc_release(uVar39);
  }
  ppuVar7 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar36 = ppuVar7;
  _objc_opt_isKindOfClass(ppuVar7,puVar3);
  ppuVar6 = ppuVar7;
  if (((ulong)ppuVar36 & 1) == 0) {
    ppuVar6 = (undefined **)0x0;
  }
  _objc_retain(ppuVar6);
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar6;
  func_0x00010c08fa60();
  if (ppuVar7 != (undefined **)0x0) {
    func_0x00010c28b5a0(*(undefined8 *)(param_2 + 0x100));
  }
  ppuVar36 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar27 = ppuVar36;
  _objc_opt_isKindOfClass(ppuVar36,puVar3);
  ppuVar7 = ppuVar36;
  if (((ulong)ppuVar27 & 1) == 0) {
    ppuVar7 = (undefined **)0x0;
  }
  _objc_retain(ppuVar7);
  _objc_release(ppuVar36);
  ppuVar36 = ppuVar7;
  func_0x00010c08fa60();
  if (ppuVar36 != (undefined **)0x0) {
    func_0x00010c287fc0(*(undefined8 *)(param_2 + 0x100));
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  ppuVar36 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f43418,puVar3);
  if ((int)ppuVar36 != 0) {
    ppuVar27 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar9 = ppuVar27;
    _objc_opt_isKindOfClass(ppuVar27,puVar3);
    ppuVar36 = ppuVar27;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar36 = (undefined **)0x0;
    }
    _objc_retain(ppuVar36);
    _objc_release(ppuVar27);
    ppuVar9 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar11 = ppuVar9;
    _objc_opt_isKindOfClass(ppuVar9,puVar3);
    ppuVar27 = ppuVar9;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar27 = (undefined **)0x0;
    }
    _objc_retain(ppuVar27);
    _objc_release(ppuVar9);
    uVar29 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c25eb80();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar29;
    func_0x00010c0720c0();
    _objc_release(uVar29);
    if (((int)uVar39 != 0) &&
       (ppuVar9 = ppuVar36, func_0x00010bf529e0(), ppuVar9 != (undefined **)0x0)) {
      func_0x00010c2849c0(*(undefined8 *)(param_2 + 0x100));
    }
    _objc_release(ppuVar27);
    _objc_release(ppuVar36);
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar36 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42738,puVar3);
  if ((int)ppuVar36 != 0) {
    uVar39 = *(undefined8 *)(param_2 + 0x108);
    ppuVar27 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    ppuVar9 = ppuVar27;
    _objc_opt_isKindOfClass(ppuVar27,puVar3);
    ppuVar36 = ppuVar27;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar36 = (undefined **)0x0;
    }
    _objc_retain(ppuVar36);
    _objc_release(ppuVar27);
    func_0x00010c0c68e0(uVar39);
    _objc_release(ppuVar36);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar36 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f43258,puVar3);
  if ((int)ppuVar36 != 0) {
    ppuVar27 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar9 = ppuVar27;
    _objc_opt_isKindOfClass(ppuVar27,puVar3);
    ppuVar36 = ppuVar27;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar36 = (undefined **)0x0;
    }
    _objc_retain(ppuVar36);
    _objc_release(ppuVar27);
    func_0x00010bf1f3c0(ppuVar36);
    func_0x00010c1b4a20(*(undefined8 *)(param_2 + 0x100));
    _objc_release(ppuVar36);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar36 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f43238,puVar3);
  if ((int)ppuVar36 != 0) {
    ppuVar27 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar9 = ppuVar27;
    _objc_opt_isKindOfClass(ppuVar27,puVar3);
    ppuVar36 = ppuVar27;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar36 = (undefined **)0x0;
    }
    _objc_retain(ppuVar36);
    _objc_release(ppuVar27);
    func_0x00010c1be540(*(undefined8 *)(param_2 + 0x100));
    _objc_release(ppuVar36);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar36 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42578,puVar3);
  if ((int)ppuVar36 != 0) {
    ppuVar27 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar9 = ppuVar27;
    _objc_opt_isKindOfClass(ppuVar27,puVar3);
    ppuVar36 = ppuVar27;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar36 = (undefined **)0x0;
    }
    _objc_retain(ppuVar36);
    _objc_release(ppuVar27);
    uVar39 = *(undefined8 *)(param_2 + 0x128);
    *(undefined ***)(param_2 + 0x128) = ppuVar36;
    _objc_release(uVar39);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar36 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42598,puVar3);
  if ((int)ppuVar36 != 0) {
    ppuVar27 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar9 = ppuVar27;
    _objc_opt_isKindOfClass(ppuVar27,puVar3);
    ppuVar36 = ppuVar27;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar36 = (undefined **)0x0;
    }
    _objc_retain(ppuVar36);
    _objc_release(ppuVar27);
    uVar39 = *(undefined8 *)(param_2 + 0x130);
    *(undefined ***)(param_2 + 0x130) = ppuVar36;
    _objc_release(uVar39);
  }
  func_0x00010be38000(param_2);
  ppuVar36 = ppuVar8;
  func_0x00010c08fa60();
  if (ppuVar36 != (undefined **)0x0) {
    uVar29 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c0ea7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar29;
    func_0x00010c0720c0();
    if ((int)uVar39 == 0) {
      uVar28 = *(ulong *)(param_2 + 0x1a8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c22f8;
      func_0x00010bf71ba0(PTR_PTR_1126c22f8);
      _objc_retainAutoreleasedReturnValue();
      uVar37 = uVar28;
      func_0x00010bf1f320();
      if ((uVar37 & 1) == 0) {
        uVar30 = *(undefined8 *)(param_2 + 0x1a8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126c22f8;
        func_0x00010bf526c0(PTR_PTR_1126c22f8);
        _objc_retainAutoreleasedReturnValue();
        uVar39 = uVar30;
        func_0x00010bf1f320();
        if ((int)uVar39 == 0) {
          _objc_release(puVar10);
          _objc_release(uVar30);
          _objc_release(puVar3);
          _objc_release(uVar28);
          _objc_release(uVar29);
          goto LAB_107bdfc10;
        }
        lVar34 = *(long *)(param_2 + 0x100);
        func_0x00010c084c40();
        _objc_release(puVar10);
        _objc_release(uVar30);
        _objc_release(puVar3);
        _objc_release(uVar28);
        _objc_release(uVar29);
      }
      else {
        lVar34 = *(long *)(param_2 + 0x100);
        func_0x00010c084c40();
        _objc_release(puVar3);
        _objc_release(uVar28);
        _objc_release(uVar29);
      }
      if (lVar34 == 2) {
        func_0x00010c288240(*(undefined8 *)(param_2 + 0x100));
      }
    }
    else {
      _objc_release(uVar29);
    }
  }
LAB_107bdfc10:
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar8);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar40);
  _objc_release(ppuVar38);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_c8,8);
    uVar39 = 8;
    __Block_object_dispose(&uStack_a8,8);
    __Unwind_Resume();
    _objc_retain();
    _objc_retain(uVar39);
    uVar37 = param_4;
    func_0x00010c08fa60();
    if (uVar37 == 0) {
      uVar37 = 0;
    }
    else {
      uVar37 = param_4;
      func_0x00010c0720c0(param_4);
      uVar37 = (ulong)((uint)uVar37 ^ 1);
    }
    _objc_release(uVar39);
    _objc_release(param_4);
    return uVar37;
  }
  return param_4;
}



/* Entry: 107bdfccc; end: 107bdfdd3;  */

uint FUN_107bdfccc(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0720c0(param_1);
    uVar2 = (uint)lVar1 ^ 1;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107bdfdd4; end: 107bdfe57;  */

void FUN_107bdfdd4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0741a0();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  }
  uVar1 = param_2;
  func_0x00010c0de660();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(ulong *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + uVar1;
  uVar1 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bdfe58; end: 107bdff5f; -[SCDiscoverFeedEventsController _pushPageInfo:] */

void FUN_107bdfe58(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (0 < *(long *)(param_1 + 0x28)) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010be6f280(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
      _objc_release(lVar1);
    }
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  *(ulong *)(param_1 + 0x28) = uVar3;
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bdff60; end: 107be00c3; -[SCDiscoverFeedEventsController _popPageInfo] */

void FUN_107bdff60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar11 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    func_0x00010c0b4ca0();
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b4ca0();
    _objc_release(lVar3);
    _objc_release(lVar11);
    if (lVar2 == lVar4) {
      func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x38));
    }
  }
  uVar5 = *(ulong *)(param_1 + 0x38);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b4ca0();
  *(ulong *)(param_1 + 0x28) = uVar7;
  _objc_release(uVar6);
  uVar7 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar6 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(param_1 + 0x30) = uVar6;
  _objc_release(uVar10);
  lVar11 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar11 == 1) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  }
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107be00c4; end: 107be01df; -[SCDiscoverFeedEventsController _pageInfoFromData:] */

void FUN_107be00c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  _objc_release(uVar1);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010be6f280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107be01e0; end: 107be02f3; -[SCDiscoverFeedEventsController _pageInfoDictionaryWithPageType:pageTypeSpecific:] */

void FUN_107be01e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbb48;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010c1d0640(puVar3,param_2,param_4,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbb60)
    ;
  }
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  uVar4 = param_4;
  func_0x00010be6f2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84d80(param_4,param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107be02f4; end: 107be032f; -[SCDiscoverFeedEventsController _handlePageTypePushEventWithData:] */

void FUN_107be02f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be6f2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84d80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107be0330; end: 107be0333; -[SCDiscoverFeedEventsController _handlePageTypePopEventWithData] */

void FUN_107be0330(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be75950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__popPageInfo_11257aff0);
  return;
}



/* Entry: 107be0334; end: 107be06f7; -[SCDiscoverFeedEventsController _handleOpenEventWithIdentifier:data:] */

void FUN_107be0334(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_5);
  uVar5 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar9 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar1 = uVar5;
  if ((uVar9 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c08fa60();
  uVar9 = uVar1;
  if (uVar5 == 0) {
    uVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    if ((int)uVar4 != 0) {
      uVar9 = *(ulong *)(param_2 + 0x18);
      _objc_retain(uVar9);
      _objc_release(uVar1);
    }
  }
  uVar5 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar5 = *(ulong *)(param_2 + 0x60);
  func_0x00010bfd3b20();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(uVar5);
    lVar6 = param_2;
    func_0x00010beb2f60();
    if ((int)lVar6 != 0) {
      iVar2 = (int)*(undefined8 *)(param_2 + 0x60);
      func_0x00010bfde520();
      if (iVar2 != 0) {
        func_0x00010beefb80(*(undefined8 *)(param_2 + 0x60));
        goto LAB_107be06c8;
      }
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = param_5;
    func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110dcad78,puVar3);
    if ((int)uVar5 != 0) {
      uVar5 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c0b4ca0();
      *(ulong *)(param_2 + 0x28) = uVar4;
      _objc_release(uVar5);
    }
    uVar5 = uVar9;
    FUN_107bdfccc(uVar9,*(undefined8 *)(param_2 + 0x18));
    if ((int)uVar5 != 0) {
      _objc_retain(uVar9);
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      *(ulong *)(param_2 + 0x18) = uVar9;
      _objc_release(uVar7);
      uVar4 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
      uVar8 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar3);
      uVar5 = uVar4;
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar4);
      if (uVar5 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        *(undefined8 *)(param_2 + 0x20) = param_1;
        _objc_release(puVar3);
      }
      else {
        func_0x00010c26f320(uVar4);
        *(undefined8 *)(param_2 + 0x20) = param_1;
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar7 = *(undefined8 *)(param_2 + 0x70);
      *(undefined **)(param_2 + 0x70) = puVar3;
      _objc_release(uVar7);
      func_0x00010c138f80(*(undefined8 *)(param_2 + 0xd0));
      _objc_release(uVar5);
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = param_5;
    func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110eb3738,puVar3);
    if ((int)uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar8 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar3);
      uVar5 = uVar4;
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar4);
    }
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    *(ulong *)(param_2 + 0x30) = uVar5;
    _objc_release(uVar7);
    if (uVar1 != 0) {
      uVar5 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea3ee0(param_2);
      _objc_release(uVar5);
    }
    uVar5 = param_5;
    func_0x00010c0d3c80(param_5);
    func_0x00010be9f120(param_2);
    _objc_release(uVar5);
    func_0x00010bf817e0(*(undefined8 *)(param_2 + 0x150));
  }
LAB_107be06c8:
  _objc_release(uVar1);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107be06f8; end: 107be0723; -[SCDiscoverFeedEventsController _shouldDedupFPOWithSamePageSessionIdWithPageType:] */

byte FUN_107be06f8(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 == 0x13) && ((*(byte *)(param_1 + 0x1b1) & 1) != 0)) {
    return 1;
  }
  return param_3 == 0x5c & *(byte *)(param_1 + 0x1b0);
}



/* Entry: 107be0724; end: 107be0863; -[SCDiscoverFeedEventsController _handleRefreshEventWithIdentifier:data:] */

void FUN_107be0724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0d3c80(param_4);
  func_0x00010be9f120(param_1);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_4;
  FUN_107cb71b8(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010be2abe0(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107be0864; end: 107be088f;  */

void FUN_107be0864(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3b5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107be0890; end: 107be08a3; -[SCDiscoverFeedEventsController _handleFeedItemLongImpressionEventWithIdentifier:data:] */

void FUN_107be0890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendEventToLogger_data_addPageT_1125855f0,
             &PTR____CFConstantStringClassReference_110f415f8,param_4,1);
  return;
}



/* Entry: 107be08a4; end: 107be08b7; -[SCDiscoverFeedEventsController _handleDiscoverFeedItemImpressionEventWithIdentifier:data:] */

void FUN_107be08a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendEventToLogger_data_addPageT_1125855f0,
             &PTR____CFConstantStringClassReference_110f41438,param_4,1);
  return;
}



/* Entry: 107be08b8; end: 107be0bf3; -[SCDiscoverFeedEventsController _handlePageViewEventWithIdentifier:data:] */

void FUN_107be08b8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_4);
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar1);
  uVar3 = uVar8;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar8);
  uVar8 = uVar3;
  func_0x00010c08fa60();
  uVar2 = uVar3;
  if (uVar8 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010c08fa60();
    if (uVar2 == 0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x18);
      _objc_retain(uVar2);
    }
    _objc_release(uVar3);
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f418d8,puVar1);
  if ((int)uVar3 != 0) {
    uVar3 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = param_4;
    func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110dcad78,puVar1);
    if ((int)uVar8 != 0) {
      uVar8 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      _objc_release(uVar8);
    }
    lVar4 = param_1;
    func_0x00010beb2f60();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar5 = *(undefined **)(param_1 + 0x60);
    if ((int)lVar4 == 0) {
      func_0x00010bfa4480(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c29e2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(uVar3);
      func_0x00010c0df720(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar1);
      _objc_release(puVar6);
    }
    else {
      func_0x00010beed860();
      func_0x00010c0df720(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      puVar5 = puVar1;
    }
    _objc_release(puVar5);
    func_0x00010bdc6020(param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    uVar8 = param_4;
    func_0x00010bf51e00(param_4);
    func_0x00010bfa4460(uVar7);
    _objc_release(uVar8);
    func_0x00010be2abe0(param_1);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar8 = param_4;
    func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f432b8,puVar1);
    if ((int)uVar8 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar9 = param_4;
    func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f432d8,puVar1);
    if ((int)uVar9 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be53300(param_1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be0bf4; end: 107be0bf7;  */

void FUN_107be0bf4(void)

{
  return;
}



/* Entry: 107be0bf8; end: 107be0dc3; -[SCDiscoverFeedEventsController _handleFullscreenContentViewWithIdentifier:data:] */

void FUN_107be0bf8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    lVar5 = *(long *)(param_1 + 0x50);
    func_0x00010c08fa60();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar5 == 0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      func_0x00010c1d0640(param_4);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c1d0640(param_4);
    }
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      func_0x00010c1d0640(param_4);
    }
  }
  func_0x00010be9f120(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be0dc4; end: 107be0dd7; -[SCDiscoverFeedEventsController _handlePageUpdateEventWithIdentifier:data:] */

void FUN_107be0dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendEventToLogger_data_addPageT_1125855f0,
             &PTR____CFConstantStringClassReference_110f414f8,param_4,1);
  return;
}



/* Entry: 107be0dd8; end: 107be0e8b; -[SCDiscoverFeedEventsController _handleFeedViewDidPartiallyDisappearEventWithIdentifier:data:] */

void FUN_107be0dd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf51e00(uVar2);
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110f429b8);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 != 0) {
    uVar2 = param_4;
    FUN_107cb71b8(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3380(lVar3,param_2,uVar2,&PTR___NSConcreteGlobalBlock_1109ffe78,puVar1);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be0e8c; end: 107be0e8f;  */

void FUN_107be0e8c(void)

{
  return;
}



/* Entry: 107be0e90; end: 107be12f3; -[SCDiscoverFeedEventsController _logFeedPageView:pageSessionId:bounceRateDict:chatInteractionDict:] */

undefined **
FUN_107be0e90(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined **param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = *(undefined **)(param_1 + 0x60);
  func_0x00010bfa4480();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf3e120();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c0d3c80();
    if (puVar10 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
    }
    else {
      _objc_retain(puVar10);
      puVar3 = puVar10;
    }
    _objc_release(puVar10);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bfc5740(puVar1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(puVar2);
    puVar4 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_150,auStack_f0,0x10);
    if (puVar4 != (undefined *)0x0) {
      lVar18 = *plStack_140;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_140 != lVar18) {
            _objc_enumerationMutation(puVar2);
          }
          lVar15 = *(long *)(lStack_148 + (long)puVar16 * 8);
          lVar5 = 0x23;
          func_0x00010baf8a44();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar15 != lVar5) {
            puVar6 = puVar2;
            func_0x00010c0e00e0(puVar2,param_2,lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar10,param_2,puVar6,lVar15);
            _objc_release(puVar6);
          }
          puVar16 = puVar16 + 1;
        } while (puVar4 != puVar16);
        puVar4 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_150,auStack_f0,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    ppuStack_100 = &PTR____CFConstantStringClassReference_110eb3758;
    puVar4 = puVar10;
    func_0x00010bf51e00();
    puVar16 = puVar4;
    FUN_107cb7d34();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar16;
    if (puVar16 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f8 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f8,&ppuStack_100,1
                       );
    _objc_retainAutoreleasedReturnValue();
    if (puVar16 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar16);
    _objc_release(puVar4);
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f432d8;
    puVar4 = param_6;
    func_0x00010bf51e00();
    puVar16 = puVar4;
    FUN_107cb7d34();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar16;
    if (puVar16 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_108 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_108,&ppuStack_110,
                        1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar16 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar16);
    _objc_release(puVar4);
    func_0x00010bef7f60(puVar3,param_2,puVar7);
    func_0x00010bef7f60(puVar3,param_2,puVar8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar16 = puVar1;
    func_0x00010c0f1e60(puVar1);
    func_0x00010c0df780(puVar4,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110dcad78);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c0f1ea0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar16,&PTR____CFConstantStringClassReference_110eb3738);
      _objc_release(puVar16);
    }
    else {
      func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110eb3738);
    }
    _objc_release(puVar4);
    param_4 = &PTR____CFConstantStringClassReference_110f414b8;
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    func_0x00010be9f120(param_1,param_2,&PTR____CFConstantStringClassReference_110f414b8,puVar4,0);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_5;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  ppuVar9 = param_4;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar9;
  func_0x00010c08fa60();
  if (ppuVar17 == (undefined **)0x0) {
    ppuVar17 = (undefined **)0x0;
  }
  else {
    puVar10 = param_5[0x20];
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    _objc_release(puVar10);
    _objc_release(ppuVar9);
    if (puVar2 == (undefined *)0x0) {
      ppuVar17 = (undefined **)0x0;
      goto LAB_107be14d8;
    }
    ppuVar17 = param_4;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar17;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    ppuVar11 = (undefined **)param_5[0x20];
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar11;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar17;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    _objc_release(ppuVar11);
    if ((ppuVar9 == (undefined **)0x0) || (ppuVar12 == (undefined **)0x0)) {
      ppuVar11 = param_4;
      func_0x00010c0844e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = (undefined **)param_5[0x20];
      func_0x00010c25a160(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar13;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar11;
      func_0x00010c0720c0(ppuVar11,param_2,ppuVar14);
      _objc_release(ppuVar14);
LAB_107be14b0:
      _objc_release(ppuVar13);
      _objc_release(ppuVar11);
    }
    else {
      ppuVar17 = ppuVar9;
      func_0x00010bf52680();
      ppuVar11 = ppuVar12;
      func_0x00010bf52680();
      if (ppuVar17 == ppuVar11) {
        ppuVar11 = ppuVar9;
        func_0x00010bfe5ec0(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar12;
        func_0x00010bfe5ec0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar11;
        func_0x00010c0720c0(ppuVar11,param_2,ppuVar13);
        goto LAB_107be14b0;
      }
      ppuVar17 = (undefined **)0x0;
    }
    _objc_release(ppuVar12);
  }
  _objc_release(ppuVar9);
LAB_107be14d8:
  _objc_release(param_4);
  return ppuVar17;
}



/* Entry: 107be12f4; end: 107be14fb; -[SCDiscoverFeedEventsController _isSameStoryAsItemViewingSession:] */

long FUN_107be12f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x100);
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      lVar6 = 0;
      goto LAB_107be14d8;
    }
    lVar6 = param_3;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar2 = *(long *)(param_1 + 0x100);
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar2);
    if ((lVar1 == 0) || (lVar3 == 0)) {
      lVar2 = param_3;
      func_0x00010c0844e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x100);
      func_0x00010c25a160(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c0720c0(lVar2,param_2,lVar5);
      _objc_release(lVar5);
LAB_107be14b0:
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    else {
      lVar6 = lVar1;
      func_0x00010bf52680();
      lVar2 = lVar3;
      func_0x00010bf52680();
      if (lVar6 == lVar2) {
        lVar2 = lVar1;
        func_0x00010bfe5ec0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfe5ec0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010c0720c0(lVar2,param_2,lVar4);
        goto LAB_107be14b0;
      }
      lVar6 = 0;
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
LAB_107be14d8:
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 107be14fc; end: 107be250f; -[SCDiscoverFeedEventsController _handleFeedItemActionWithIdentifier:data:] */

void FUN_107be14fc(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar8 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f41c38,puVar12);
  if ((int)puVar8 != 0) {
    puVar12 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed9ca0(param_1);
    _objc_release(puVar12);
  }
  puVar12 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  puVar8 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f423f8,puVar12);
  if ((int)puVar8 == 0) {
    lVar3 = *(long *)(param_1 + 0x100);
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar10 = *(long *)(param_1 + 0x100);
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar10;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar12);
      }
      else {
        func_0x00010c1d0640(param_4);
      }
      _objc_release(lVar3);
      _objc_release(lVar10);
      lVar10 = *(long *)(param_1 + 0x100);
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar10;
      func_0x00010c0ed760();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar12);
      }
      else {
        func_0x00010c1d0640(param_4);
      }
      _objc_release(lVar3);
      _objc_release(lVar10);
      puVar5 = *(undefined **)(param_1 + 0x100);
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar5;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar12;
      func_0x00010c08fa60();
      _objc_release(puVar12);
      if (puVar8 != (undefined *)0x0) {
        puVar12 = puVar5;
        func_0x00010bf5b440(puVar5);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107be18f4;
      }
      goto LAB_107be1908;
    }
    func_0x00010be0dc60(param_1);
  }
  else {
    puVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar8);
    }
    else {
      func_0x00010c1d0640(param_4);
    }
    _objc_release(puVar12);
    puVar12 = puVar5;
    func_0x00010c0ed760();
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar8);
    }
    else {
      func_0x00010c1d0640(param_4);
    }
    _objc_release(puVar12);
    puVar12 = puVar5;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010c08fa60();
    _objc_release(puVar12);
    if (puVar8 != (undefined *)0x0) {
      puVar12 = puVar5;
      func_0x00010bf5b440(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar12);
    }
    lVar3 = *(long *)(param_1 + 0x108);
    func_0x00010c25eb80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 == 0) {
      func_0x00010c25b820(puVar5);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010c25eb80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107bc74c4();
      _objc_release(uVar4);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    }
    func_0x00010c0df780(puVar12);
    _objc_retainAutoreleasedReturnValue();
LAB_107be18f4:
    func_0x00010c1d0640(param_4);
    _objc_release(puVar12);
LAB_107be1908:
    puVar12 = puVar5;
    func_0x00010c1057a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar12);
    _objc_release(puVar5);
  }
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar8 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110e02998,puVar12);
  if ((int)puVar8 != 0) {
    puVar12 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = param_4;
    func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f41cb8,puVar8);
    if ((int)puVar5 == 0) {
      lVar3 = *(long *)(param_1 + 0x160);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        puVar8 = *(undefined **)(param_1 + 0x160);
        func_0x00010c0e00e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_4;
        goto LAB_107be1a04;
      }
      lVar3 = *(long *)(param_1 + 0x100);
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x100);
        func_0x00010c1554e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(uVar4);
        puVar8 = *(undefined **)(param_1 + 0x100);
        func_0x00010c1554e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107be19ac;
      }
    }
    else {
      puVar8 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
LAB_107be19ac:
      puVar5 = *(undefined **)(param_1 + 0x160);
LAB_107be1a04:
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar8);
    }
    _objc_release(puVar12);
  }
  puVar12 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar12 == (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + 0x100);
    func_0x00010c084900();
    if (lVar3 == -2) {
      puVar12 = (undefined *)0x0;
      goto LAB_107be1a4c;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c22f8;
    func_0x00010bf71300(PTR_PTR_1126c22f8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010bf1f320();
    _objc_release(puVar12);
    _objc_release(uVar9);
    if ((int)uVar4 != 0) {
      puVar12 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126d50c0;
      _objc_opt_class(PTR_PTR_1126d50c0);
      puVar5 = puVar12;
      _objc_opt_isKindOfClass(puVar12,puVar8);
      puVar8 = puVar12;
      if (((ulong)puVar5 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar12);
      if (puVar8 == (undefined *)0x0) {
        puVar12 = *(undefined **)(param_1 + 0x100);
        func_0x00010c25a160(puVar12);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar12);
      }
      _objc_release(puVar8);
      lVar3 = param_1;
      func_0x00010be43640();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar3 != 0) {
        func_0x00010c084900(*(undefined8 *)(param_1 + 0x100));
        func_0x00010c0df780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar8);
      }
      goto LAB_107be1a4c;
    }
  }
  else {
LAB_107be1a4c:
    _objc_release(puVar12);
  }
  puVar12 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  puVar8 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f423f8,puVar12);
  if ((int)puVar8 == 0) {
    lVar3 = *(long *)(param_1 + 0x100);
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x100);
      func_0x00010c25a160(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(uVar4);
      puVar12 = *(undefined **)(param_1 + 0x100);
      func_0x00010c25a160(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed6e00(param_1);
      goto LAB_107be1d2c;
    }
  }
  else {
    puVar12 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed6e00(param_1);
    puVar8 = puVar12;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010beedcc0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar6);
    }
    else {
      func_0x00010c1d0640(param_4);
    }
    _objc_release(puVar5);
    _objc_release(puVar8);
    lVar3 = param_1 + 0x170;
    _objc_loadWeakRetained();
    lVar10 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010c11fd40(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740();
    lVar7 = lVar10;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(lVar10);
    _objc_release(lVar3);
    if (lVar7 != 0) {
      puVar5 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar6 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar8);
      puVar8 = puVar5;
      if (((ulong)puVar6 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar5);
      func_0x00010c259740(lVar7);
      func_0x00010be38d00(param_1);
      _objc_release(puVar8);
      func_0x00010be57480(param_1);
    }
    _objc_release(lVar7);
LAB_107be1d2c:
    _objc_release(puVar12);
  }
  puVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  puVar5 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar12);
  puVar12 = puVar8;
  if (((ulong)puVar5 & 1) == 0) {
    puVar12 = (undefined *)0x0;
  }
  _objc_retain(puVar12);
  _objc_release(puVar8);
  if (puVar12 != (undefined *)0x0) {
    puVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar6 == (undefined *)0x0) {
      func_0x00010c0741a0(puVar8);
      func_0x00010c0df6e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar5);
    }
  }
  puVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = *(undefined **)(param_1 + 0x100);
    func_0x00010c27b860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c08fa60();
    if (puVar5 != (undefined *)0x0) {
      lVar3 = param_1;
      func_0x00010be43640();
      _objc_release(puVar8);
      if ((int)lVar3 == 0) goto LAB_107be1e08;
      puVar8 = *(undefined **)(param_1 + 0x100);
      func_0x00010c27b860(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
    }
  }
  _objc_release(puVar8);
LAB_107be1e08:
  puVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c0b4ca0();
    iVar1 = (int)puVar5;
    _objc_release(puVar8);
    iVar2 = iVar1;
    func_0x000107cb6ffc();
    if (iVar2 == 0) {
      puVar8 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010c0b4ca0();
      iVar2 = (int)puVar5;
      FUN_107cb7274();
      _objc_release(puVar8);
      if (iVar2 != 0) {
        func_0x00010be53360(param_1);
        puVar8 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar8;
        func_0x00010c0b4ca0();
        FUN_107bc7628();
        *(undefined **)(param_1 + 0x118) = puVar5;
        _objc_release(puVar8);
      }
    }
    else {
      iVar2 = iVar1;
      FUN_107cb70e4();
      if (iVar2 != 0) {
        func_0x00010be53240(param_1);
      }
      func_0x00010bdeede0(param_1);
    }
    FUN_107cb7600();
    if (iVar1 != 0) {
      puVar8 = param_4;
      FUN_107cb71b8(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2abe0(param_1);
      _objc_release(puVar8);
    }
  }
  lVar3 = *(long *)(param_1 + 0x108);
  if (lVar3 != 0) {
    func_0x00010c25eb80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar8);
    }
    else {
      func_0x00010c1d0640(param_4);
    }
    _objc_release(lVar3);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c25eb80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c25a160(uVar9);
    _objc_retainAutoreleasedReturnValue();
    FUN_107cb745c(uVar4,uVar9);
    func_0x00010c0df780(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar8);
    _objc_release(uVar9);
    _objc_release(uVar4);
  }
  lVar3 = param_1;
  func_0x00010beb2580();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110eb6298,puVar8);
  if ((int)puVar5 != 0) {
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = param_4;
    func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f41cb8,puVar8);
    if (((uint)puVar5 & (uint)lVar3) == 1) {
      puVar8 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x160);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_4;
      FUN_107be2510();
      if ((((ulong)puVar6 & 1) != 0) ||
         (puVar6 = puVar5, func_0x00010c0720c0(), ((ulong)puVar6 & 1) == 0)) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        FUN_107bc7108(uVar4);
        func_0x00010c0df780(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(puVar8);
    }
  }
  lVar10 = *(long *)(param_1 + 0x50);
  func_0x00010c08fa60();
  if (lVar10 != 0) {
    func_0x00010c1d0640(param_4);
  }
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110e02998,puVar8);
  if (((uint)puVar5 & (uint)lVar3) == 1) {
    puVar5 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x160);
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    FUN_107bc7108();
    func_0x00010c0df780(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(puVar5);
  }
  puVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  puVar6 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar8);
  puVar8 = puVar5;
  if (((ulong)puVar6 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar6 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110daf5b8,puVar5);
  if ((int)puVar6 != 0) {
    puVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4ca0();
    _objc_release(puVar5);
    if (((puVar6 < (undefined *)0x11) && ((1L << ((ulong)puVar6 & 0x3f) & 0x18102U) != 0)) ||
       (puVar6 == (undefined *)0x88)) {
      puVar5 = puVar8;
      func_0x00010c275280();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010c08fa60();
      _objc_release(puVar5);
      if (puVar11 != (undefined *)0x0) {
        puVar5 = puVar8;
        func_0x00010c275280(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar5;
        FUN_107cb7e00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar11);
        _objc_release(puVar5);
        func_0x00010c1d0640(param_4);
      }
      if (puVar6 == (undefined *)0x88) {
        func_0x00010c1d0640(param_4);
      }
    }
  }
  FUN_107bc78e0(param_4);
  func_0x00010bea6700(param_1);
  puVar5 = param_4;
  func_0x00010c0d3c80(param_4);
  func_0x00010be9f120(param_1);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar12);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107be2510; end: 107be260b;  */

ulong FUN_107be2510(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  func_0x000107cb6e48(param_1,&PTR____CFConstantStringClassReference_110f42258,puVar1);
  if ((int)uVar3 != 0) {
    uVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_107be25ec;
    }
  }
  _objc_retain(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  func_0x000107cb6e48(param_1,&PTR____CFConstantStringClassReference_110f42298,puVar1);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
  }
  _objc_release(param_1);
LAB_107be25ec:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107be260c; end: 107be2cdf; -[SCDiscoverFeedEventsController _handleImpressionEventWithIdentifier:data:] */

ulong FUN_107be260c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined1 uStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  uVar3 = param_8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar18 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar18 = 0;
  }
  _objc_retain(uVar18);
  _objc_release(uVar3);
  uVar5 = param_8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  if (uVar3 == 0) {
    uStack_128 = 0;
  }
  else {
    func_0x00010bf1f3c0();
    uStack_128 = (undefined1)uVar5;
  }
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uVar20 = 0xc2000000;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_107be2ce0;
  puStack_138 = &UNK_1109ffe98;
  ppuVar15 = &puStack_150;
  uVar5 = uVar18;
  lStack_130 = param_5;
  func_0x0001006372a4();
  uVar6 = uVar18;
  func_0x00010bf529e0();
  if ((uVar6 == 0) || (uVar6 = uVar5, func_0x00010bf529e0(), uVar6 != 0)) {
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    uVar21 = uVar20;
    uVar22 = param_2;
    _objc_release(uVar6);
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1060();
    _objc_release(uVar6);
    uVar7 = uVar5;
    func_0x0001006372a4(uVar5,&PTR___NSConcreteGlobalBlock_1109ffee8);
    ppuVar15 = &PTR___NSConcreteGlobalBlock_1109fff08;
    uVar8 = uVar5;
    func_0x0001006372a4();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retain(uVar5);
    uVar6 = uVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (uVar6 != 0) {
      uVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(uVar5);
        }
        lVar19 = *(long *)(uVar16 * 8);
        lVar11 = lVar19;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar11 != 0) {
          lVar11 = lVar19;
          FUN_107bc7c14(lVar19);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010bfeaa00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(lVar12);
          func_0x00010c07b4a0();
          lVar12 = lVar11;
          func_0x00010bfeaa00(lVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar10;
          if ((int)lVar19 == 0) {
            puVar1 = puVar9;
          }
          func_0x00010c1d0640(puVar1);
          _objc_release(lVar12);
          _objc_release(lVar11);
        }
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
      uVar6 = uVar5;
      func_0x00010bf52a60();
    }
    _objc_release(uVar5);
    uVar17 = *(undefined8 *)(param_5 + 0x98);
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d0a0(uVar20,param_2,param_3,param_4,uVar21,uVar22,uVar17);
    _objc_release(uVar6);
    uVar17 = *(undefined8 *)(param_5 + 0xd8);
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d0a0(uVar20,param_2,param_3,param_4,uVar21,uVar22,uVar17);
    _objc_release(uVar6);
    uVar17 = *(undefined8 *)(param_5 + 0xd0);
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d0a0(uVar20,param_2,param_3,param_4,uVar21,uVar22,uVar17);
    _objc_release(uVar6);
    uVar17 = *(undefined8 *)(param_5 + 0xa0);
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d0a0(uVar20,param_2,param_3,param_4,uVar21,uVar22,uVar17);
    _objc_release(uVar6);
    uVar17 = *(undefined8 *)(param_5 + 0xa8);
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d0a0(uVar20,param_2,param_3,param_4,uVar21,uVar22,uVar17);
    _objc_release(uVar6);
    uVar17 = *(undefined8 *)(param_5 + 0xb0);
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d0a0(uVar20,param_2,param_3,param_4,uVar21,uVar22,uVar17);
    _objc_release(uVar6);
    uVar17 = *(undefined8 *)(param_5 + 0xb8);
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d0a0(uVar20,param_2,param_3,param_4,uVar21,uVar22,uVar17);
    _objc_release(uVar6);
    uVar17 = *(undefined8 *)(param_5 + 0xc0);
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d0a0(uVar20,param_2,param_3,param_4,uVar21,uVar22,uVar17);
    _objc_release(uVar6);
    uVar17 = *(undefined8 *)(param_5 + 200);
    uVar6 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d0a0(uVar20,param_2,param_3,param_4,uVar21,uVar22,uVar17);
    _objc_release(uVar6);
    param_5 = param_5 + 0x178;
    _objc_loadWeakRetained(param_5);
    func_0x00010c286740();
    _objc_release(param_5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return param_8;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar15);
  if (*(char *)(param_8 + 0x28) == '\x01') {
    ppuVar13 = ppuVar15;
    func_0x00010c0f1ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar13;
    func_0x00010c0720c0();
    if (((ulong)ppuVar14 & 1) == 0) {
      ppuVar14 = ppuVar15;
      func_0x00010c0f1ea0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar14 == (undefined **)0x0) {
        uVar18 = (ulong)(*(long *)(*(long *)(param_8 + 0x20) + 0x30) == 0);
      }
      else {
        uVar18 = 0;
      }
      _objc_release();
    }
    else {
      uVar18 = 1;
    }
    _objc_release(ppuVar13);
  }
  else {
    uVar18 = 1;
  }
  _objc_release(ppuVar15);
  return uVar18;
}



/* Entry: 107be2ce0; end: 107be2d93;  */

bool FUN_107be2ce0(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar2 = param_2;
    func_0x00010c0f1ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_2;
      func_0x00010c0f1ea0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        bVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30) == 0;
      }
      else {
        bVar1 = false;
      }
      _objc_release();
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar2);
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107be2d94; end: 107be2d9b;  */

void FUN_107be2d94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isProminent_1125fc738);
  return;
}



/* Entry: 107be2d9c; end: 107be2db7;  */

uint FUN_107be2d9c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c07b4a0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 107be2db8; end: 107be324b; -[SCDiscoverFeedEventsController _handleImpressionEndEventWithDate:extraData:completion:] */

void FUN_107be2db8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
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
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = param_4;
  _objc_retain();
  _dispatch_group_create();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf51e00(uVar4);
  func_0x00010c1d0640(puVar3);
  _objc_release(uVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(long *)(param_1 + 0x98) != 0) {
    _dispatch_group_enter(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107be324c;
    puStack_78 = &UNK_110842e18;
    _objc_retain(uVar2);
    puVar5 = puVar3;
    uStack_70 = uVar2;
    func_0x00010bf51e00(puVar3);
    func_0x00010bfb3380(uVar4);
    _objc_release(puVar5);
    _objc_release(uStack_70);
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    _dispatch_group_enter(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x107be3254;
    puStack_a0 = &UNK_110842e18;
    _objc_retain(uVar2);
    puVar5 = puVar3;
    uStack_98 = uVar2;
    func_0x00010bf51e00(puVar3);
    func_0x00010bfb3380(uVar4);
    _objc_release(puVar5);
    _objc_release(uStack_98);
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    _dispatch_group_enter(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x107be325c;
    puStack_c8 = &UNK_110842e18;
    _objc_retain(uVar2);
    puVar5 = puVar3;
    uStack_c0 = uVar2;
    func_0x00010bf51e00(puVar3);
    func_0x00010bfb3380(uVar4);
    _objc_release(puVar5);
    _objc_release(uStack_c0);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    _dispatch_group_enter(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x107be3264;
    puStack_f0 = &UNK_110842e18;
    _objc_retain(uVar2);
    puVar5 = puVar3;
    uStack_e8 = uVar2;
    func_0x00010bf51e00(puVar3);
    func_0x00010bfb3380(uVar4);
    _objc_release(puVar5);
    _objc_release(uStack_e8);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    _dispatch_group_enter(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x107be326c;
    puStack_118 = &UNK_110842e18;
    _objc_retain(uVar2);
    puVar5 = puVar3;
    uStack_110 = uVar2;
    func_0x00010bf51e00(puVar3);
    func_0x00010bfb3380(uVar4);
    _objc_release(puVar5);
    _objc_release(uStack_110);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    _dispatch_group_enter(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x107be3274;
    puStack_140 = &UNK_110842e18;
    _objc_retain(uVar2);
    puVar5 = puVar3;
    uStack_138 = uVar2;
    func_0x00010bf51e00(puVar3);
    func_0x00010bfb3380(uVar4);
    _objc_release(puVar5);
    _objc_release(uStack_138);
  }
  if (*(long *)(param_1 + 200) != 0) {
    _dispatch_group_enter(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 200);
    puStack_180 = puVar1;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x107be327c;
    puStack_168 = &UNK_110842e18;
    _objc_retain(uVar2);
    puVar5 = puVar3;
    uStack_160 = uVar2;
    func_0x00010bf51e00(puVar3);
    func_0x00010bfb3380(uVar4);
    _objc_release(puVar5);
    _objc_release(uStack_160);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    _dispatch_group_enter(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    puStack_1a8 = puVar1;
    uStack_1a0 = 0xc2000000;
    uStack_198 = 0x107be3284;
    puStack_190 = &UNK_110842e18;
    _objc_retain(uVar2);
    puVar5 = puVar3;
    uStack_188 = uVar2;
    func_0x00010bf51e00(puVar3);
    func_0x00010bfb3380(uVar4);
    _objc_release(puVar5);
    _objc_release(uStack_188);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc2000000;
  uStack_1c0 = 0x107be328c;
  puStack_1b8 = &UNK_110849530;
  uStack_1b0 = param_5;
  _objc_retain(param_5);
  func_0x000100bc0718(uVar2,uVar4,&puStack_1d0);
  _objc_release(uVar4);
  _objc_release(uStack_1b0);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107be324c; end: 107be329f;  */

void FUN_107be324c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107be32a0; end: 107be3947; -[SCDiscoverFeedEventsController _handleRerankingUpdateWithIdentifier:data:] */

void FUN_107be32a0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42998,puVar1);
  if ((int)puVar2 != 0) {
    puVar1 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar3 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar2);
      puVar2 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010bf1f3c0();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 != (undefined *)0x0) {
          puVar3 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
          puVar4 = puVar3;
          _objc_opt_isKindOfClass(puVar3,puVar2);
          puVar2 = puVar3;
          if (((ulong)puVar4 & 1) == 0) {
            puVar2 = (undefined *)0x0;
          }
          _objc_retain(puVar2);
          _objc_release(puVar3);
          if (puVar2 != (undefined *)0x0) {
            func_0x00010bf51e00(puVar3);
            func_0x00010c1d0640(puVar1);
            _objc_release(puVar3);
          }
          _objc_release(puVar2);
        }
        puVar2 = param_4;
        FUN_107cb71b8(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf51e00(puVar1);
        func_0x00010be2abe0(param_1);
        _objc_release(puVar3);
        _objc_release(puVar2);
        func_0x00010be38780(param_1);
        goto LAB_107be38e8;
      }
    }
  }
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar3 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42838,puVar2);
  if ((int)puVar3 != 0) {
    puVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c2098;
      _objc_opt_class(PTR_PTR_1126c2098);
      puVar5 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar4);
      _objc_release(puVar3);
      if (((ulong)puVar5 & 1) != 0) {
        func_0x00010c1d6880(*(undefined8 *)(param_1 + 0x150));
      }
    }
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar3 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110e5f218,puVar2);
  if ((int)puVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x150);
    puVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd40(uVar6);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar3 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f41df8,puVar2);
  if ((int)puVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x150);
    puVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a93c0(uVar6);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar3 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f428b8,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar3 = param_4;
    func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110eb3b38,puVar2);
    if ((int)puVar3 != 0) goto LAB_107be3564;
  }
  else {
LAB_107be3564:
    uVar6 = *(undefined8 *)(param_1 + 0x150);
    puVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ce00(uVar6);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar3 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42938,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar3 = param_4;
    func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110eb3af8,puVar2);
    if ((int)puVar3 != 0) goto LAB_107be35dc;
  }
  else {
LAB_107be35dc:
    uVar6 = *(undefined8 *)(param_1 + 0x150);
    puVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c960(uVar6);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar3 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42958,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar3 = param_4;
    func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110eb3b18,puVar2);
    if ((int)puVar3 != 0) goto LAB_107be3650;
  }
  else {
LAB_107be3650:
    uVar6 = *(undefined8 *)(param_1 + 0x150);
    puVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c9a0(uVar6);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar3 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42898,puVar2);
  if ((int)puVar3 != 0) {
    puVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c2098;
      _objc_opt_class(PTR_PTR_1126c2098);
      puVar5 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar4);
      _objc_release(puVar3);
      if (((ulong)puVar5 & 1) != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x150);
        puVar3 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        func_0x00010c1e7180(uVar6);
        _objc_release(puVar3);
        _objc_initWeak(auStack_68,param_1);
        puVar3 = param_4;
        FUN_107cb71b8(param_4);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_70,auStack_68);
        func_0x00010be2abe0(param_1);
        _objc_release(puVar3);
        func_0x00010be387a0(param_1);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
    }
    _objc_release(puVar2);
  }
LAB_107be38e8:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107be3948; end: 107be3973;  */

void FUN_107be3948(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3b5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107be3974; end: 107be3a8b; -[SCDiscoverFeedEventsController _handleContentCommentsActionEventWithIdentifier:data:] */

void FUN_107be3974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c25a160(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c084c40();
    func_0x00010c0df780(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4,param_2,puVar4,&PTR____CFConstantStringClassReference_110ea1ad8);
    _objc_release(puVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c25a160(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c084ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4,param_2,uVar3,&PTR____CFConstantStringClassReference_110ea1af8);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010be9f120(param_1,param_2,&PTR____CFConstantStringClassReference_110f41718,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be3a8c; end: 107be3a9f; -[SCDiscoverFeedEventsController _handleContentCommentLongImpressionEventWithIdentifier:data:] */

void FUN_107be3a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendEventToLogger_data_addPageT_1125855f0,
             &PTR____CFConstantStringClassReference_110f41738,param_4,1);
  return;
}



/* Entry: 107be3aa0; end: 107be3ab3; -[SCDiscoverFeedEventsController _handleStoryFeedTileViewEventWithIdentifier:data:] */

void FUN_107be3aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendEventToLogger_data_addPageT_1125855f0,
             &PTR____CFConstantStringClassReference_110f41778,param_4,1);
  return;
}



/* Entry: 107be3ab4; end: 107be3ac7; -[SCDiscoverFeedEventsController _handleContentCommentsSnapReplyActionEventWithIdentifier:data:] */

void FUN_107be3ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendEventToLogger_data_addPageT_1125855f0,
             &PTR____CFConstantStringClassReference_110f41798,param_4,1);
  return;
}



/* Entry: 107be3ac8; end: 107be3adb; -[SCDiscoverFeedEventsController _handleContentTooltipImpressionEventWithIdentifier:data:] */

void FUN_107be3ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendEventToLogger_data_addPageT_1125855f0,
             &PTR____CFConstantStringClassReference_110f41758,param_4,1);
  return;
}



/* Entry: 107be3adc; end: 107be3ae3; -[SCDiscoverFeedEventsController _handleSpotlightPlaybackStartEventWithIdentifier:data:] */

void FUN_107be3adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdeedf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createItemViewingSessionWithDat_112559518,param_4);
  return;
}



/* Entry: 107be3ae4; end: 107be3aeb; -[SCDiscoverFeedEventsController _handleNonFeedEntryPointPlaybackStartEventWithIdentifier:data:] */

void FUN_107be3ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdeedf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createItemViewingSessionWithDat_112559518,param_4);
  return;
}



/* Entry: 107be3aec; end: 107be3af3; -[SCDiscoverFeedEventsController _handleSuperFeedPlaybackStartEventWithIdentifier:data:] */

void FUN_107be3aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdeedf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createItemViewingSessionWithDat_112559518,param_4);
  return;
}



/* Entry: 107be3af4; end: 107be3c43; -[SCDiscoverFeedEventsController _handleOperaSessionEventWithIdentifier:data:] */

void FUN_107be3af4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(ulong *)(param_1 + 0x50) = uVar1;
  _objc_release(uVar5);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_opt_class(PTR_PTR_1126ae6b8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x1c8);
  *(ulong *)(param_1 + 0x1c8) = uVar1;
  _objc_release(uVar5);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_opt_class(PTR_PTR_1126ae6b8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x1d0);
  *(ulong *)(param_1 + 0x1d0) = uVar1;
  _objc_release(uVar5);
  func_0x00010bec7f60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeToOperaPageVisibilityE_11258f990);
  return;
}



/* Entry: 107be3c44; end: 107be3c83; -[SCDiscoverFeedEventsController _handleFeedItemAnimationStarted:] */

void FUN_107be3c44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be83140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c0acf80(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107be3c84; end: 107be3d9f; -[SCDiscoverFeedEventsController _promotedStoryWithEventData:] */

void FUN_107be3c84(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f423f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    lVar6 = 0;
  }
  else {
    param_1 = param_1 + 0x170;
    _objc_loadWeakRetained();
    lVar6 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11fd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740();
    lVar4 = lVar6;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar6);
    _objc_release(param_1);
    lVar5 = lVar4;
    func_0x00010c25b720();
    lVar6 = lVar4;
    if (lVar5 != 5) {
      lVar6 = 0;
    }
    _objc_retain(lVar6);
    _objc_release(lVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 107be3da0; end: 107be3e73; -[SCDiscoverFeedEventsController _handleFeedItemAnimationCompleted:] */

void FUN_107be3da0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be83140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010bf1f3c0(uVar1);
    _objc_release(uVar1);
    func_0x00010c0acf60(*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107be3e74; end: 107be541f; -[SCDiscoverFeedEventsController cheetahLoggingLongImpressionHelper:didReachThresholdForItems:date:extraData:] */

void FUN_107be3e74(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined *param_6)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puVar24;
  double dVar25;
  double dVar26;
  long lStack_190;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    puVar3 = param_6;
    func_0x00010c0d3c80();
  }
  func_0x00010c1d0640();
  lVar21 = param_1 + 0x170;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar22;
  func_0x00010c1559e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c25c6c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c1d0640(puVar3);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar22);
  _objc_release(lVar21);
  dVar26 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(param_4);
  puVar16 = &uStack_150;
  puVar20 = auStack_110;
  lStack_190 = param_4;
  func_0x00010bf52a60();
  if (lStack_190 != 0) {
    lVar21 = *plStack_140;
    do {
      lVar22 = 0;
      do {
        dVar25 = dVar26;
        if (*plStack_140 != lVar21) {
          _objc_enumerationMutation(param_4);
          dVar25 = dVar26;
        }
        puVar24 = *(undefined **)(lStack_148 + lVar22 * 8);
        puVar6 = puVar24;
        func_0x00010c0b4c20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0d3c80();
        puVar8 = puVar6;
        func_0x00010c25a160(puVar6);
        _objc_retainAutoreleasedReturnValue();
        FUN_107cb76d4(puVar7,puVar8);
        _objc_release(puVar8);
        puVar8 = puVar6;
        func_0x00010c0f1c40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar8);
        puVar8 = puVar6;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c11fd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c259740();
        _objc_release(puVar9);
        _objc_release(puVar8);
        lVar4 = param_1 + 0x170;
        _objc_loadWeakRetained();
        lVar5 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar5;
        func_0x00010c25bac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar4);
        puVar8 = puVar6;
        func_0x00010c155f60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar9);
        }
        else {
          func_0x00010c1d0640(puVar7);
        }
        _objc_release(puVar8);
        puVar8 = puVar6;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c25b820();
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar9 != (undefined *)0xffffffffffffffff) {
          puVar9 = puVar6;
          func_0x00010c25a160(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25b820();
          func_0x00010c0df780(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar8);
          _objc_release(puVar9);
        }
        puVar8 = puVar6;
        func_0x00010c25a160(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed6e00(param_1);
        _objc_release(puVar8);
        puVar9 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar9 != (undefined *)0x0) {
          puVar9 = param_6;
          func_0x00010c0e00e0(param_6);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar6;
          func_0x00010c155f60(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x000107bdfd38(puVar9,puVar11);
          func_0x00010c0df840(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar8);
          _objc_release(puVar11);
          _objc_release(puVar9);
        }
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c084900(puVar6);
        func_0x00010c0df780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar24;
        func_0x00010c24e820(puVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(puVar8);
        dVar26 = dVar25;
        _objc_release(puVar9);
        _objc_release(puVar8);
        puVar8 = puVar24;
        func_0x00010c24e820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined *)0x0) {
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          dVar26 = dVar25;
          func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar8);
        }
        puVar8 = puVar6;
        func_0x00010c25a160(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c1057a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar9);
        _objc_release(puVar8);
        cVar1 = *(char *)(param_1 + 0x1b2);
        puVar8 = puVar6;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        if (cVar1 == '\x01') {
          if (puVar9 == (undefined *)0x0) {
            puVar9 = puVar6;
            func_0x00010c25a160();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar9;
            func_0x00010c11fd40();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar11;
            func_0x00010bf454e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar11);
            _objc_release(puVar9);
            _objc_release(puVar8);
            if (puVar12 == (undefined *)0x0) goto LAB_107be4750;
          }
          else {
            _objc_release(puVar9);
            _objc_release(puVar8);
          }
          puVar9 = puVar6;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar9;
          func_0x00010c11fd40();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar12;
          func_0x000108f51f98();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar9);
          puVar9 = puVar8;
          func_0x00010c08fa60();
          if (puVar9 == (undefined *)0x0) {
            puVar9 = puVar6;
            func_0x00010c25a160(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar9;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            _objc_release(puVar11);
            _objc_release(puVar9);
          }
          else {
            func_0x00010c1d0640(puVar7);
          }
LAB_107be4748:
          _objc_release(puVar8);
        }
        else {
          _objc_release(puVar9);
          _objc_release(puVar8);
          if (puVar9 != (undefined *)0x0) {
            puVar8 = puVar6;
            func_0x00010c25a160(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            _objc_release(puVar9);
            _objc_release(puVar8);
            puVar8 = puVar6;
            func_0x00010c25a160();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c0ed760();
            _objc_retainAutoreleasedReturnValue();
            if (puVar9 == (undefined *)0x0) {
              puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
              func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar7);
              _objc_release(puVar11);
            }
            else {
              func_0x00010c1d0640(puVar7);
            }
            _objc_release(puVar9);
            goto LAB_107be4748;
          }
        }
LAB_107be4750:
        func_0x00010bedaac0(param_1);
        lVar4 = lVar10;
        FUN_107cb6930();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        if (lVar5 != 0) {
          func_0x00010c1d0640(puVar7);
        }
        puVar8 = puVar6;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c275280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        if ((puVar9 != (undefined *)0x0) &&
           (puVar8 = puVar9, func_0x00010c08fa60(), puVar8 != (undefined *)0x0)) {
          puVar8 = puVar9;
          FUN_107cb7e00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar8);
          func_0x00010c1d0640(puVar7);
        }
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c247520(puVar6);
        func_0x00010c0df780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar8);
        puVar8 = puVar24;
        func_0x00010c24e820();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar11);
        }
        else {
          func_0x00010c1d0640(puVar7);
        }
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27bc40(puVar24);
        func_0x00010c0df780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0f7ca0(puVar24);
        func_0x00010c0df720(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010bfb68e0(puVar24);
        func_0x00010c2971a0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar8);
        puVar8 = puVar6;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar8;
        func_0x00010c11fd40();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bfea7a0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar12 == (undefined *)0x0) {
          puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar13);
        }
        else {
          func_0x00010c1d0640(puVar7);
        }
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar8);
        puVar8 = puVar6;
        func_0x00010c27c440();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar11);
        }
        else {
          func_0x00010c1d0640(puVar7);
        }
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfd4e60(puVar6);
        func_0x00010c0df6e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfdb180(puVar6);
        func_0x00010c0df6e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0f1e60(puVar6);
        func_0x00010c0df780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar8);
        puVar8 = puVar6;
        func_0x00010c0f1ea0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar11);
        }
        else {
          func_0x00010c1d0640(puVar7);
        }
        _objc_release(puVar8);
        puVar8 = puVar6;
        func_0x00010bf32a00();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar11);
        }
        else {
          func_0x00010c1d0640(puVar7);
        }
        _objc_release(puVar8);
        puVar8 = puVar6;
        func_0x00010c26e980();
        if ((int)puVar8 != 0) {
          puVar8 = puVar24;
          func_0x00010bf119c0(puVar24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2992c0();
          _objc_release(puVar8);
          func_0x00010c1d0640(puVar7);
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar8);
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar8);
        }
        puVar8 = puVar6;
        func_0x00010c247520();
        if ((puVar8 == (undefined *)0x0) ||
           (puVar8 = puVar6, func_0x00010c247520(), puVar8 == (undefined *)0x4)) {
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c27c460(puVar24);
          func_0x00010c0df780(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar8);
        }
        puVar8 = puVar6;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar8;
        func_0x00010bf5b440();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c08fa60();
        _objc_release(puVar11);
        _objc_release(puVar8);
        if (puVar12 != (undefined *)0x0) {
          puVar8 = puVar6;
          func_0x00010c25a160(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar8;
          func_0x00010bf5b440();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar11);
          _objc_release(puVar8);
        }
        puVar8 = puVar6;
        func_0x00010c155f60();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar8;
        func_0x000108f54160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar8 = puVar6;
        func_0x00010c155f60();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar8;
        func_0x00010c0720c0();
        _objc_release(puVar8);
        puVar8 = puVar11;
        if ((int)puVar12 != 0) {
          puVar12 = puVar6;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar12;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_release(puVar12);
          func_0x00010c1d0640(puVar7);
        }
        if ((param_3 == *(long *)(param_1 + 0x98)) || (param_3 == *(long *)(param_1 + 0xd8))) {
          func_0x00010c11fb80(*(undefined8 *)(param_1 + 0x88));
          uVar2 = 0;
          if (param_3 != *(long *)(param_1 + 0xd8)) {
            uVar2 = SUB84(dVar26,0);
          }
          dVar26 = (double)(ulong)uVar2;
          puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar24);
          puVar24 = puVar7;
          func_0x00010c0d3c80(puVar7);
          func_0x00010be9f120(param_1);
          _objc_release(puVar24);
          puVar24 = puVar6;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar24;
          func_0x00010c084c40();
          _objc_release(puVar24);
          if (puVar11 == (undefined *)0x13) goto LAB_107be528c;
          puVar24 = PTR_PTR_1126c90d0;
          _objc_alloc(PTR_PTR_1126c90d0);
          puVar11 = puVar6;
          func_0x00010c25a160(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c11fd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe69c0();
          func_0x00010c04d540(puVar24);
          _objc_release(puVar12);
          _objc_release(puVar11);
          lVar5 = param_1 + 0x178;
          _objc_loadWeakRetained(lVar5);
          puVar11 = puVar6;
          func_0x00010c25a160(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c11fd40();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar6;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c241660();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010bf529e0();
          _objc_release(puVar14);
          _objc_release(puVar13);
          if ((int)puVar15 == 0) {
            puVar13 = puVar6;
            func_0x00010c25a160(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2768e0();
            _objc_release(puVar13);
          }
          puVar13 = puVar6;
          func_0x00010c25a160(puVar6);
          _objc_retainAutoreleasedReturnValue();
          FUN_107cb8018();
          _objc_release(puVar13);
          if (dVar26 <= 0.0) {
            dVar26 = 0.0;
          }
          puVar13 = puVar6;
          func_0x00010c26dda0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c287720(dVar25,dVar26,lVar5);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(lVar5);
          puVar11 = puVar6;
          func_0x00010c25a160(puVar6);
          _objc_retainAutoreleasedReturnValue();
          FUN_107cb8018();
          _objc_release(puVar11);
LAB_107be5280:
          _objc_release(puVar24);
          dVar26 = dVar25;
        }
        else {
          if ((param_3 == *(long *)(param_1 + 0xa0)) || (param_3 == *(long *)(param_1 + 0xa8))) {
            puVar24 = puVar7;
            func_0x00010bf51e00(puVar7);
            func_0x00010bfc79e0(param_3);
            func_0x00010c259740(lVar10);
            func_0x00010be38d00(param_1);
            func_0x00010be574c0(param_1);
            dVar25 = dVar26;
            goto LAB_107be5280;
          }
          if (param_3 == *(long *)(param_1 + 0xb0)) {
            puVar24 = puVar7;
            func_0x00010bf51e00(puVar7);
            func_0x00010bec1360(param_1);
            dVar25 = dVar26;
            goto LAB_107be5280;
          }
          if (param_3 == *(long *)(param_1 + 0xb8)) {
            puVar24 = puVar7;
            func_0x00010bf51e00(puVar7);
            func_0x00010be09c40(param_1);
            dVar25 = dVar26;
            goto LAB_107be5280;
          }
          if (param_3 == *(long *)(param_1 + 0xc0)) {
            uVar23 = *(undefined8 *)(param_1 + 0x10);
            puVar24 = puVar7;
            func_0x00010bf51e00(puVar7);
            func_0x00010c0ad0a0(uVar23);
            dVar25 = dVar26;
            goto LAB_107be5280;
          }
          if (param_3 == *(long *)(param_1 + 200)) {
            uVar23 = *(undefined8 *)(param_1 + 0x10);
            puVar11 = puVar7;
            func_0x00010bf51e00(puVar7);
            func_0x00010c0ad080(uVar23);
            _objc_release(puVar11);
            puVar11 = puVar6;
            func_0x00010c26e980();
            if ((int)puVar11 != 0) {
              func_0x00010bf119c0(puVar24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c138240();
              dVar25 = dVar26;
              goto LAB_107be5280;
            }
          }
          else if (param_3 == *(long *)(param_1 + 0xd0)) {
            puVar24 = puVar7;
            func_0x00010c0d3c80(puVar7);
            func_0x00010be9f120(param_1);
            _objc_release(puVar24);
            puVar24 = puVar6;
            func_0x00010c25a160();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar24;
            func_0x00010c084c40();
            _objc_release(puVar24);
            if (puVar11 != (undefined *)0x13) {
              puVar24 = PTR_PTR_1126c90d0;
              _objc_alloc(PTR_PTR_1126c90d0);
              puVar11 = puVar6;
              func_0x00010c25a160(puVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar11;
              func_0x00010c11fd40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe69c0();
              func_0x00010c04d540(puVar24);
              _objc_release(puVar12);
              _objc_release(puVar11);
              lVar5 = param_1 + 0x178;
              _objc_loadWeakRetained(lVar5);
              puVar11 = puVar6;
              func_0x00010c25a160(puVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar11;
              func_0x00010c11fd40();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar6;
              func_0x00010c25a160(puVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar13;
              func_0x00010c241660();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf529e0();
              _objc_release(puVar14);
              _objc_release(puVar13);
              func_0x00010c289e40(lVar5);
              _objc_release(puVar12);
              _objc_release(puVar11);
              _objc_release(lVar5);
              dVar25 = dVar26;
              goto LAB_107be5280;
            }
          }
        }
LAB_107be528c:
        _objc_release(puVar8);
        _objc_release(puVar9);
        _objc_release(lVar4);
        _objc_release(lVar10);
        _objc_release(puVar7);
        _objc_release(puVar6);
        lVar22 = lVar22 + 1;
      } while (lStack_190 != lVar22);
      puVar16 = &uStack_150;
      puVar20 = auStack_110;
      lStack_190 = param_4;
      func_0x00010bf52a60();
    } while (lStack_190 != 0);
  }
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar20);
  if (puVar16 != (undefined8 *)0x0) {
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010afef86c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    puVar16 = puVar17;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c08fa60();
    _objc_release(puVar18);
    _objc_release(puVar16);
    if (puVar19 != (undefined8 *)0x0) {
      puVar16 = puVar17;
      func_0x00010c094fa0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar18);
      _objc_release(puVar16);
    }
    _objc_release(puVar17);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar20);
  return;
}



/* Entry: 107be5420; end: 107be551f; -[SCDiscoverFeedEventsController _updateLensDataForDiscoverStory:data:] */

void FUN_107be5420(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  if (param_3 != 0) {
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010afef86c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar2 = lVar1;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = lVar1;
      func_0x00010c094fa0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4,param_2,lVar3,&PTR____CFConstantStringClassReference_110db19f8);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be5520; end: 107be557b; -[SCDiscoverFeedEventsController discoverFeedRerankingManager:finishedRerankingWithData:] */

void FUN_107be5520(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    func_0x00010c0d3c80(param_4);
    func_0x00010be9f120(param_1,param_2,&PTR____CFConstantStringClassReference_110f41658,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 107be557c; end: 107be55cf; -[SCDiscoverFeedEventsController discoverFeedScrollTracker:didEndScrollingWithData:] */

void FUN_107be557c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0d3c80(param_4);
  func_0x00010be0dc60(param_1,param_2,param_4);
  func_0x00010be9f120(param_1,param_2,&PTR____CFConstantStringClassReference_110f41478,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be55d0; end: 107be5863; -[SCDiscoverFeedEventsController _addBaseDataToMutableDict:addPageTypeParams:] */

void FUN_107be55d0(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    FUN_107cb7eb0();
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf51e00(uVar3);
    FUN_107cb7eb0();
    _objc_release(uVar3);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010bf51e00();
  if (lVar4 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    FUN_107cb7eb0();
    _objc_release(puVar2);
  }
  else {
    FUN_107cb7eb0(lVar4,&PTR____CFConstantStringClassReference_110e5f1f8,param_3);
  }
  _objc_release(lVar4);
  func_0x000108f13a58();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar8 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar7);
  uVar1 = uVar6;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  func_0x000107bdfd38(uVar3,uVar1);
  _objc_release(uVar1);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb7eb0();
  _objc_release(puVar2);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar8 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if (uVar1 != 0) {
    uVar8 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar8 == 0) {
      FUN_107bc7108(uVar6);
      func_0x00010c0df780(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar2);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107be5864; end: 107be595f; -[SCDiscoverFeedEventsController _addCameosDataToMutableDict:] */

void FUN_107be5864(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  func_0x00010c1d0640(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 0x100);
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c06dc60();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c06dc60();
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) goto LAB_107be5940;
  }
  else {
    _objc_release(uVar4);
  }
  func_0x00010c1d0640(param_3);
LAB_107be5940:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107be5960; end: 107be5ba7; -[SCDiscoverFeedEventsController _updateFriendDataIfNecessary:] */

void FUN_107be5960(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  if ((int)uVar1 != 0) {
    func_0x00010c1d0640(param_3);
    if (*(long *)(param_1 + 0x40) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(param_3);
    }
    if (*(long *)(param_1 + 0x48) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(param_3);
    }
    uVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c067ec0();
    if ((int)uVar1 == 1) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c067ec0();
      _objc_release(uVar1);
      _objc_release(uVar4);
      if ((int)uVar3 != 0xf) goto LAB_107be5b90;
    }
    uVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(param_3);
    if (uVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(param_3);
    }
    func_0x00010be8c740(param_1);
    _objc_release(uVar4);
  }
LAB_107be5b90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107be5ba8; end: 107be5e0f; -[SCDiscoverFeedEventsController _sendEventToLogger:data:addPageTypeParams:] */

void FUN_107be5ba8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bdc6020(param_1);
  func_0x00010bdc62a0(param_1);
  func_0x00010bed81c0(param_1);
  func_0x00010bed8740(param_1);
  func_0x00010bed81a0(param_1);
  puVar1 = param_4;
  func_0x00010bf51e00();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = puVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
      puVar7 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar6);
      _objc_release(puVar5);
      if (((ulong)puVar7 & 1) == 0) {
        puVar5 = puVar1;
        func_0x00010c0e00e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar5);
      }
      puVar10 = puVar10 + 1;
    } while (puVar4 != puVar10);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  lVar8 = param_1;
  puVar1 = param_4;
  func_0x00010beb45c0();
  if ((int)lVar8 != 0) {
    puVar1 = puVar4;
    func_0x00010c0a5a00(*(undefined8 *)(param_1 + 0xe0));
  }
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  func_0x00010bea6700(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107be5e10; end: 107be5e4b; -[SCDiscoverFeedEventsController _updateFinalLoggingDestinationForEvent:data:] */

void FUN_107be5e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bea6700(param_1,param_2,param_4,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be5e4c; end: 107be5f17; -[SCDiscoverFeedEventsController _setPossibleLoggingDestinationsForDict:destinations:] */

void FUN_107be5e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f42cf8,puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107be5f18; end: 107be5fdf; -[SCDiscoverFeedEventsController _removeLoggingDestination:dict:] */

void FUN_107be5f18(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = in_x3;
  func_0x000107cb6e48(in_x3,&PTR____CFConstantStringClassReference_110f42cf8,puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = in_x3;
    func_0x00010c0e00e0(in_x3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(in_x3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 107be5fe0; end: 107be6077; -[SCDiscoverFeedEventsController _shouldLogEvent:withData:] */

bool FUN_107be5fe0(void)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long in_x3;
  
  _objc_retain(in_x3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  lVar3 = in_x3;
  func_0x000107cb6e48(in_x3,&PTR____CFConstantStringClassReference_110f42cf8,puVar2);
  if ((int)lVar3 == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = in_x3;
    func_0x00010c0e00e0(in_x3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    bVar1 = lVar4 != 0;
    _objc_release(lVar3);
  }
  _objc_release(in_x3);
  return bVar1;
}



/* Entry: 107be6078; end: 107be610f; -[SCDiscoverFeedEventsController _updateFinalLoggingValues:] */

void FUN_107be6078(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bef7f60(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107be6110; end: 107be7703; -[SCDiscoverFeedEventsController _logFeedItemViewingSessionWithIdentifier:data:] */

void FUN_107be6110(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  uint uVar21;
  undefined8 uVar22;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_2 + 0x100) == 0) {
    if (*(long *)(param_2 + 0x110) == 0) {
LAB_107be61d4:
      func_0x00010be8aee0(param_2);
      if (*(long *)(param_2 + 0x100) == 0) goto LAB_107be7534;
      goto LAB_107be61e8;
    }
    puVar10 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar10;
    func_0x00010bf1f3c0();
    _objc_release(puVar10);
    if ((int)puVar20 == 0) goto LAB_107be61d4;
    lVar2 = *(long *)(param_2 + 0x110);
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar10 = param_5;
      func_0x00010c0d3c80();
      if (puVar10 == (undefined *)0x0) {
        puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      }
      else {
        _objc_retain(puVar10);
        puVar20 = puVar10;
      }
      _objc_release(puVar10);
      uVar18 = *(undefined8 *)(param_2 + 0x110);
      func_0x00010c25a160(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(uVar18);
      func_0x00010c1d0640(puVar20);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c084b00(*(undefined8 *)(param_2 + 0x110));
      func_0x00010c0df780(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
      lVar2 = *(long *)(param_2 + 0x110);
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar20);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c1d0640(puVar20);
      }
      _objc_release(lVar2);
      lVar2 = *(long *)(param_2 + 0x110);
      func_0x00010c084b00();
      if (lVar2 == 6) {
        func_0x00010c1d0640(puVar20);
LAB_107be76b8:
        func_0x00010c1d0640(puVar20);
      }
      else {
        lVar2 = *(long *)(param_2 + 0x110);
        func_0x00010c084b00();
        if (lVar2 == 4) goto LAB_107be76b8;
        iVar1 = (int)*(undefined8 *)(param_2 + 0x110);
        func_0x00010c082280();
        if (iVar1 != 0) goto LAB_107be76b8;
      }
      puVar10 = puVar20;
      func_0x00010c0d3c80(puVar20);
      func_0x00010be29640(param_2);
      _objc_release(puVar10);
      _objc_release(puVar20);
    }
    puVar20 = *(undefined **)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0x110) = 0;
  }
  else {
LAB_107be61e8:
    puVar20 = param_5;
    func_0x00010c0d3c80();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c084b00(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c082280(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    lVar2 = *(long *)(param_2 + 0x100);
    func_0x00010c084b00();
    if (lVar2 == 6) {
      func_0x00010c1d0640(puVar20);
LAB_107be62c8:
      func_0x00010c1d0640(puVar20);
    }
    else {
      lVar2 = *(long *)(param_2 + 0x100);
      func_0x00010c084b00();
      if (lVar2 == 4) goto LAB_107be62c8;
      iVar1 = (int)*(undefined8 *)(param_2 + 0x100);
      func_0x00010c082280();
      if (iVar1 != 0) goto LAB_107be62c8;
    }
    lVar3 = *(long *)(param_2 + 0x100);
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c29f3c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
    }
    else {
      func_0x00010c1d0640(puVar20);
    }
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar3);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c084900(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    uVar18 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010bf32a00(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(uVar18);
    uVar18 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c29fa40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(uVar18);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c137c80(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df840(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    iVar1 = (int)*(undefined8 *)(param_2 + 0x100);
    func_0x00010c07f3a0();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (iVar1 == 0) {
      func_0x00010c084c40(*(undefined8 *)(param_2 + 0x100));
      func_0x00010c0df780(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
    }
    else {
      func_0x00010c1d0640(puVar20);
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07f3a0(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    lVar2 = *(long *)(param_2 + 0x100);
    func_0x00010c1554e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
    }
    else {
      func_0x00010c1d0640(puVar20);
    }
    _objc_release(lVar2);
    uVar18 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c25a160(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed6e00(param_2);
    _objc_release(uVar18);
    if (*(long *)(param_2 + 0x108) != 0) {
      func_0x00010be53360(param_2);
    }
    func_0x00010c1d0640(puVar20);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf97160(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf972a0(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0ea860(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    uVar18 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c29e1e0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(uVar18);
    uVar18 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c089640(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(uVar18);
    uVar4 = *(ulong *)(param_2 + 0x100);
    func_0x00010c07f3a0();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((uVar4 & 1) == 0) {
      func_0x00010c0c71a0(*(undefined8 *)(param_2 + 0x100));
    }
    else {
      func_0x00010c277000();
    }
    func_0x00010c0df720(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    uVar5 = *(undefined8 *)(param_2 + 0x1a8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c22f8;
    func_0x00010bf526c0(PTR_PTR_1126c22f8);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar5;
    func_0x00010bf1f320();
    _objc_release(puVar10);
    _objc_release(uVar5);
    if ((int)uVar18 == 0) {
      func_0x00010c12d3e0(puVar20);
    }
    else {
      uVar4 = *(ulong *)(param_2 + 0x100);
      func_0x00010c07f3a0();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((uVar4 & 1) == 0) {
        func_0x00010bf526a0(*(undefined8 *)(param_2 + 0x100));
      }
      else {
        func_0x00010c277000();
      }
      func_0x00010c0df720(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c277000(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df720(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25b820(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df560(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df840(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df3c0(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df840(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfcb540(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df720(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0c2f20(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    lVar2 = *(long *)(param_2 + 0x100);
    func_0x00010bfac960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
    }
    else {
      func_0x00010c1d0640(puVar20);
    }
    _objc_release(lVar2);
    lVar2 = *(long *)(param_2 + 0x100);
    func_0x00010c27c440();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
    }
    else {
      func_0x00010c1d0640(puVar20);
    }
    _objc_release(lVar2);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c27c460(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    lVar2 = param_2;
    func_0x00010beb2580();
    lVar3 = *(long *)(param_2 + 0x100);
    func_0x00010c27c440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if ((lVar6 != 0) && ((int)lVar2 != 0)) {
      uVar18 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c27c440(uVar18);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_2 + 0x160);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_2 + 0x100);
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c08fa60();
      if (((lVar2 != 0) && (lVar2 = lVar3, func_0x00010c08fa60(), lVar2 != 0)) &&
         ((lVar2 = lVar3, func_0x00010c0720c0(), (int)lVar2 == 0 ||
          (puVar10 = puVar20, FUN_107be2510(), (int)puVar10 != 0)))) {
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        FUN_107bc7108(lVar6);
        func_0x00010c0df780(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar20);
        _objc_release(puVar10);
      }
      _objc_release(lVar3);
      _objc_release(lVar6);
      _objc_release(uVar18);
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0741a0(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c075d80(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar18 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c25a160(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084740();
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    _objc_release(uVar18);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar7 = param_5;
    func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110ea1f58,puVar10);
    if ((int)puVar7 != 0) {
      puVar10 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar7 = param_5;
    func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110eb5938,puVar10);
    if ((int)puVar7 != 0) {
      puVar10 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
    }
    lVar2 = *(long *)(param_2 + 0x50);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c1d0640(puVar20);
    }
    lVar3 = *(long *)(param_2 + 0x100);
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar3);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c25a160(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar5;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(uVar18);
      _objc_release(uVar5);
    }
    lVar6 = *(long *)(param_2 + 0x100);
    func_0x00010c0ea7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    if (lVar2 != 0) {
      uVar18 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c0ea7c0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(uVar18);
    }
    iVar1 = (int)*(undefined8 *)(param_2 + 0x100);
    func_0x00010c2b4e00();
    if (iVar1 != 0) {
      func_0x00010c1d0640(puVar20);
    }
    lVar2 = *(long *)(param_2 + 0x100);
    func_0x00010c09ab40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar18 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c09ab40(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(uVar18);
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07f500(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    lVar2 = *(long *)(param_2 + 0x100);
    func_0x00010c0dc140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
    }
    else {
      func_0x00010c1d0640(puVar20);
    }
    _objc_release(lVar2);
    lVar6 = *(long *)(param_2 + 0x100);
    func_0x00010bf4e960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010bf4e960(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar5;
      func_0x00010bf51e00();
      func_0x00010c1d0640(puVar20);
      _objc_release(uVar18);
      _objc_release(uVar5);
    }
    lVar6 = *(long *)(param_2 + 0x100);
    func_0x00010c262180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    if (lVar2 != 0) {
      uVar18 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c262180(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(uVar18);
    }
    lVar6 = *(long *)(param_2 + 0x100);
    func_0x00010c27b860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    if (lVar2 != 0) {
      uVar18 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c27b860(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(uVar18);
    }
    func_0x00010bdc7160(param_2);
    func_0x00010bedab80(param_2);
    lVar2 = *(long *)(param_2 + 0x108);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_2 + 0x100);
    }
    func_0x00010bf4f080();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar10);
    }
    else {
      func_0x00010c1d0640(puVar20);
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c082280(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar20);
    _objc_release(puVar10);
    lVar3 = *(long *)(param_2 + 0x100);
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if ((lVar6 != 0) && (lVar3 = lVar6, func_0x00010c08fa60(), lVar3 != 0)) {
      lVar3 = lVar6;
      FUN_107cb7e00(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(lVar3);
      func_0x00010c1d0640(puVar20);
    }
    lVar8 = *(long *)(param_2 + 0x1e0);
    func_0x00010bf49900();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010c1d0640(puVar20);
    }
    puVar10 = puVar20;
    func_0x00010c0d3c80(puVar20);
    func_0x00010be9f120(param_2);
    _objc_release(puVar10);
    uVar9 = *(ulong *)(param_2 + 0x100);
    func_0x00010c1554e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010c0720c0();
    _objc_release(uVar9);
    if ((uVar4 & 1) == 0) {
      puVar10 = *(undefined **)(param_2 + 0x100);
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar10;
      func_0x000108f54160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      uVar5 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)uVar18 != 0) {
        func_0x00010bfa4340(*(undefined8 *)(param_2 + 0x100));
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = puVar10;
      }
      lVar3 = param_2 + 0x178;
      _objc_loadWeakRetained();
      uVar5 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(param_2 + 0x20);
      uVar11 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0df420();
      uVar19 = *(undefined8 *)(param_2 + 0x100);
      uVar18 = uVar19;
      func_0x00010c0c2f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befda60();
      uVar21 = (int)uVar19 + 1;
      uVar4 = *(ulong *)(param_2 + 0x100);
      func_0x00010c0df3c0();
      if ((uVar21 != 0) && ((int)uVar4 != 0)) {
        uVar21 = NEON_fminnm(((float)uVar21 / (float)(uVar4 & 0xffffffff)) * 100.0,0x42c80000);
        param_1 = (ulong)uVar21;
      }
      uVar12 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar12;
      func_0x00010c241660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c0c71a0(*(undefined8 *)(param_2 + 0x100));
      uVar4 = param_1;
      func_0x00010bfcb540(*(undefined8 *)(param_2 + 0x100));
      func_0x00010bf972a0();
      puVar10 = puVar20;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c277000(*(undefined8 *)(param_2 + 0x100));
      func_0x00010bf97160();
      func_0x000107bc76a0();
      puVar13 = puVar20;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x000107bc76c0();
      puVar14 = puVar20;
      FUN_107cb71b8();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      FUN_107be7704();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c2f20();
      func_0x00010c28a6a0(uVar22,param_1,uVar4,lVar3);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar10);
      _objc_release(uVar19);
      _objc_release(uVar12);
      _objc_release(uVar18);
      _objc_release(uVar11);
      _objc_release(uVar5);
      _objc_release(lVar3);
      func_0x00010bfcb540(*(undefined8 *)(param_2 + 0x100));
      _objc_release(puVar7);
    }
    lVar3 = *(long *)(param_2 + 0x100);
    func_0x00010bfeb4a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      uVar18 = *(undefined8 *)(param_2 + 0x1f8);
      lVar17 = lVar3;
      func_0x00010bf67b20(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar18);
      _objc_release(lVar17);
    }
    func_0x00010be944e0(param_2);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar2);
  }
  _objc_release(puVar20);
LAB_107be7534:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be7704; end: 107be779f;  */

void FUN_107be7704(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  func_0x000108f54160(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_107cb7fc4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c067fc0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107be77a0; end: 107be7a1b; -[SCDiscoverFeedEventsController _updateLenseData:withSessionData:] */

void FUN_107be77a0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = param_5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(param_4);
    }
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(param_4);
    }
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0922a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(param_4);
    }
    _objc_release(uVar1);
    uVar3 = param_5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c08fa60();
    if ((uVar3 != 0) && (lVar5 = *(long *)(param_2 + 0x200), lVar5 != 0)) {
      uVar3 = param_5;
      func_0x00010c25a160(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fe9a0(lVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (0.0 < param_1) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar2);
      }
    }
    _objc_release(uVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be7a1c; end: 107be8d7f; -[SCDiscoverFeedEventsController _logFeedSubitemViewingSessionWithData:] */

void FUN_107be7a1c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  _objc_retain(param_4);
  lVar3 = *(long *)(param_2 + 0x108);
  if (lVar3 == 0) {
    func_0x00010be8aee0(param_2);
    lVar3 = *(long *)(param_2 + 0x108);
  }
  func_0x00010c0f12c0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becda60(param_2);
  _objc_release(lVar3);
  func_0x00010c06c840();
  func_0x00010c06c840();
  bVar1 = *(byte *)(param_2 + 0x1b7);
  lVar3 = *(long *)(param_2 + 0x108);
  func_0x00010bef3080();
  uVar14 = *(undefined8 *)(param_2 + 0x100);
  uVar4 = param_4;
  FUN_107cb71b8(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  if ((lVar3 != 0 & bVar1) == 0) {
    uVar13 = param_1;
  }
  if ((lVar3 == 0) || (uVar15 = 0, (*(byte *)(param_2 + 0x1b7) & 1) == 0)) {
    uVar15 = param_1;
  }
  func_0x00010c25e5a0(uVar13,uVar15,uVar14);
  _objc_release(uVar4);
  uVar13 = *(undefined8 *)(param_2 + 0x108);
  uVar4 = param_4;
  FUN_107cb71b8(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25e5a0(param_1,param_1,uVar13);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c0d3c80();
  uVar13 = *(undefined8 *)(param_2 + 0x100);
  func_0x00010c25a160(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed6e00(param_2);
  _objc_release(uVar13);
  lVar3 = *(long *)(param_2 + 0x108);
  func_0x00010bef3080();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 == 0) {
    uVar14 = *(undefined8 *)(param_2 + 0x108);
    func_0x00010c0f12c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar14;
    func_0x00010bfda7c0();
    if ((int)uVar13 == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x108);
      func_0x00010c0f12c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdcf80();
      _objc_release(uVar13);
      _objc_release(uVar14);
    }
    else {
      _objc_release(uVar14);
    }
    func_0x00010c1d0640(uVar4);
  }
  else {
    func_0x00010bef3080();
    func_0x00010c0df780(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c084b00(*(undefined8 *)(param_2 + 0x108));
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf97160(*(undefined8 *)(param_2 + 0x108));
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf972a0(*(undefined8 *)(param_2 + 0x108));
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0ea860(*(undefined8 *)(param_2 + 0x108));
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar5);
  uVar13 = *(undefined8 *)(param_2 + 0x108);
  func_0x00010c29e1e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(uVar13);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c71a0(*(undefined8 *)(param_2 + 0x108));
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar5);
  uVar14 = *(undefined8 *)(param_2 + 0x1a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c22f8;
  func_0x00010bf526c0(PTR_PTR_1126c22f8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010bf1f320();
  _objc_release(puVar5);
  _objc_release(uVar14);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar13 == 0) {
    func_0x00010c12d3e0(uVar4);
  }
  else {
    func_0x00010bf526a0(*(undefined8 *)(param_2 + 0x108));
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c277000(*(undefined8 *)(param_2 + 0x108));
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar5);
  lVar6 = *(long *)(param_2 + 0x1e0);
  func_0x00010bf49a60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010c1d0640(uVar4);
  }
  func_0x00010c1d0640(uVar4);
  func_0x00010c1d0640(uVar4);
  lVar3 = *(long *)(param_2 + 0x108);
  func_0x00010c25eb80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c1d0640(uVar4);
  }
  _objc_release(lVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar13 = *(undefined8 *)(param_2 + 0x108);
  func_0x00010c25eb80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + 0x100);
  func_0x00010c25a160(uVar14);
  _objc_retainAutoreleasedReturnValue();
  FUN_107bc7360(uVar13,uVar14);
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar14);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x108);
  func_0x00010c25eb80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + 0x100);
  func_0x00010c25a160(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107bc74c4(uVar13,uVar14);
  _objc_release(uVar14);
  _objc_release(uVar13);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar5);
  func_0x00010c28a680(*(undefined8 *)(param_2 + 0x100));
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar13 = *(undefined8 *)(param_2 + 0x108);
  func_0x00010c25eb80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + 0x100);
  func_0x00010c25a160(uVar14);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb745c(uVar13,uVar14);
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar13);
  func_0x00010c1d0640(uVar4);
  func_0x00010c1d0640(uVar4);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar13 = *(undefined8 *)(param_2 + 0x100);
  func_0x00010c25a160(uVar13);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb7584();
  func_0x00010c0df780(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar7);
  _objc_release(uVar13);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfcb540(*(undefined8 *)(param_2 + 0x108));
  func_0x00010c0df720(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar7);
  lVar8 = *(long *)(param_2 + 0x100);
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c275280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if ((lVar3 != 0) && (lVar8 = lVar3, func_0x00010c08fa60(), lVar8 != 0)) {
    lVar8 = lVar3;
    FUN_107cb7e00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(lVar8);
    func_0x00010c1d0640(uVar4);
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c084900(*(undefined8 *)(param_2 + 0x100));
  func_0x00010c0df780(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c137c80(*(undefined8 *)(param_2 + 0x100));
  func_0x00010c0df840(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar7);
  iVar2 = (int)*(undefined8 *)(param_2 + 0x100);
  func_0x00010c07f3a0();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar2 == 0) {
    func_0x00010c084c40(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df780(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1d0640(uVar4);
  }
  lVar8 = *(long *)(param_2 + 0x108);
  func_0x00010c27c440();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1d0640(uVar4);
  }
  _objc_release(lVar8);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c27c460(*(undefined8 *)(param_2 + 0x100));
  func_0x00010c0df780(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar7);
  lVar8 = *(long *)(param_2 + 0x108);
  func_0x00010c080300();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1d0640(uVar4);
  }
  _objc_release(lVar8);
  uVar14 = *(undefined8 *)(param_2 + 0x108);
  func_0x00010c080300();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010bf1f3c0();
  _objc_release(uVar14);
  if ((int)uVar13 != 0) {
    uVar12 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar12 == 0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(puVar7);
    }
    else {
      func_0x00010c1d0640(uVar4);
    }
    _objc_release(uVar12);
    uVar12 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar12;
    func_0x00010bf1f3c0();
    _objc_release(uVar12);
    if ((uVar9 & 1) != 0) goto LAB_107be84a4;
  }
  func_0x00010c12d3e0(uVar4);
LAB_107be84a4:
  lVar8 = param_2;
  func_0x00010beb2580();
  lVar10 = *(long *)(param_2 + 0x108);
  func_0x00010c27c440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08fa60();
  _objc_release(lVar10);
  if ((lVar11 != 0) && ((int)lVar8 != 0)) {
    uVar13 = *(undefined8 *)(param_2 + 0x108);
    func_0x00010c27c440(uVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_2 + 0x160);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_2 + 0x108);
    func_0x00010c1554e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar11;
    func_0x00010c08fa60();
    if (((lVar8 != 0) && (lVar8 = lVar10, func_0x00010c08fa60(), lVar8 != 0)) &&
       ((lVar8 = lVar10, func_0x00010c0720c0(), (int)lVar8 == 0 ||
        (uVar12 = uVar4, FUN_107be2510(), (int)uVar12 != 0)))) {
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      FUN_107bc7108(lVar11);
      func_0x00010c0df780(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(puVar7);
    }
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(uVar13);
  }
  lVar10 = *(long *)(param_2 + 0x100);
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010c29f3c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1d0640(uVar4);
  }
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar10);
  lVar8 = *(long *)(param_2 + 0x108);
  func_0x00010c1554e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1d0640(uVar4);
  }
  _objc_release(lVar8);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0741a0(*(undefined8 *)(param_2 + 0x108));
  func_0x00010c0df6e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c075d80(*(undefined8 *)(param_2 + 0x100));
  func_0x00010c0df6e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar13 = *(undefined8 *)(param_2 + 0x100);
  func_0x00010c25a160(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084740();
  func_0x00010c0df780(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar7);
  _objc_release(uVar13);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar12 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110ea1f58,puVar7);
  if ((int)uVar12 != 0) {
    uVar12 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar12);
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar12 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110eb5938,puVar7);
  if ((int)uVar12 != 0) {
    uVar12 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar12);
  }
  lVar8 = *(long *)(param_2 + 0x50);
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    func_0x00010c1d0640(uVar4);
  }
  lVar11 = *(long *)(param_2 + 0x100);
  func_0x00010c0ea7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010c08fa60();
  _objc_release(lVar11);
  if (lVar8 != 0) {
    uVar13 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c0ea7c0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar13);
  }
  iVar2 = (int)*(undefined8 *)(param_2 + 0x100);
  func_0x00010c2b4e00();
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x108);
    func_0x00010bef3080();
    if (lVar8 == 0) {
      func_0x00010c1d0640(uVar4);
    }
  }
  lVar8 = *(long *)(param_2 + 0x100);
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    lVar10 = *(long *)(param_2 + 0x100);
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar8;
    func_0x00010c08fa60();
    _objc_release(lVar8);
    if (lVar11 != 0) {
      lVar8 = lVar10;
      func_0x00010bf5b440(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(lVar8);
    }
    lVar8 = lVar10;
    func_0x00010c1057a0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(lVar8);
    _objc_release(lVar10);
  }
  uVar12 = *(ulong *)(param_2 + 0x100);
  func_0x00010c07f3a0();
  if ((uVar12 & 1) == 0) {
    lVar8 = *(long *)(param_2 + 0x100);
    func_0x00010c09ab40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 != 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x100);
      func_0x00010c09ab40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(uVar13);
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07f500(*(undefined8 *)(param_2 + 0x100));
    func_0x00010c0df6e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar7);
  }
  lVar8 = *(long *)(param_2 + 0x108);
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1d0640(uVar4);
  }
  _objc_release(lVar8);
  lVar8 = *(long *)(param_2 + 0x108);
  func_0x00010bfac960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1d0640(uVar4);
  }
  _objc_release(lVar8);
  lVar11 = *(long *)(param_2 + 0x100);
  func_0x00010bf4e960();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010bf529e0();
  _objc_release(lVar11);
  if (lVar8 != 0) {
    uVar14 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010bf4e960(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar14;
    func_0x00010bf51e00();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar13);
    _objc_release(uVar14);
  }
  lVar11 = *(long *)(param_2 + 0x100);
  func_0x00010c262180();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010c08fa60();
  _objc_release(lVar11);
  if (lVar8 != 0) {
    uVar13 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c262180(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar13);
  }
  lVar11 = *(long *)(param_2 + 0x100);
  func_0x00010c27b860();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010c08fa60();
  _objc_release(lVar11);
  if (lVar8 != 0) {
    uVar13 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c27b860(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar13);
  }
  func_0x00010bdc7160(param_2);
  func_0x00010bedab80(param_2);
  lVar8 = *(long *)(param_2 + 0x108);
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_2 + 0x100);
  }
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_release(lVar8);
  if (lVar8 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1d0640(uVar4);
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c082280(*(undefined8 *)(param_2 + 0x100));
  func_0x00010c0df6e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar7);
  uVar12 = uVar4;
  func_0x00010c0d3c80(uVar4);
  func_0x00010be9f120(param_2);
  _objc_release(uVar12);
  uVar12 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar12 != 0) {
    uVar14 = *(undefined8 *)(param_2 + 0x100);
    _objc_retain(uVar14);
    uVar13 = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_2 + 0x140) = uVar14;
    _objc_release(uVar13);
    uVar14 = *(undefined8 *)(param_2 + 0x108);
    _objc_retain(uVar14);
    uVar13 = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_2 + 0x148) = uVar14;
    _objc_release(uVar13);
  }
  uVar13 = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_2 + 0x108) = 0;
  _objc_release(uVar13);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be8d80; end: 107be905f; -[SCDiscoverFeedEventsController _handleViewingSessionUpdateWithIdentifier:data:] */

void FUN_107be8d80(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42c38,puVar1);
  if ((int)uVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x100);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289f40(uVar6);
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42c58,puVar1);
  if ((int)uVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x100);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289f40(uVar6);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x168);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42c78,puVar1);
  if ((int)uVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x168);
    *(undefined **)(param_1 + 0x168) = puVar1;
    _objc_release(uVar6);
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42418,puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c2140;
    uVar6 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c25a160(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c2b9440(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x100);
    puVar3 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a640(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42e98,puVar1);
  if ((int)uVar2 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar1);
    uVar2 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010c08fa60();
    if (uVar4 != 0) {
      func_0x00010c288240(*(undefined8 *)(param_1 + 0x100));
    }
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    func_0x00010c0bb940(*(undefined8 *)(param_1 + 0x100));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107be9060; end: 107be90a3; -[SCDiscoverFeedEventsController _resetViewingSessionInfo] */

void FUN_107be9060(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + 0x138) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x118) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x120) = 0xffffffffffffffff;
  }
  return;
}



/* Entry: 107be90a4; end: 107be9b57; -[SCDiscoverFeedEventsController _createItemViewingSessionWithData:] */

void FUN_107be90a4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  
  _objc_retain(param_3);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x1e0));
  puVar1 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  uVar25 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f423f8,puVar1);
  if ((int)uVar25 == 0) {
    uVar25 = 0;
  }
  else {
    uVar23 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d50c0;
    _objc_opt_class(PTR_PTR_1126d50c0);
    uVar24 = uVar23;
    _objc_opt_isKindOfClass(uVar23,puVar1);
    uVar25 = uVar23;
    if ((uVar24 & 1) == 0) {
      uVar25 = 0;
    }
    _objc_retain(uVar25);
    _objc_release(uVar23);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar23 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110eb58f8,puVar1);
  if ((int)uVar23 == 0) {
    uVar23 = 0xffffffffffffffff;
  }
  else {
    uVar24 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar24;
    func_0x00010c0b4ca0();
    _objc_release(uVar24);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar24 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110eb5918,puVar1);
  if ((int)uVar24 == 0) {
    uVar24 = 0xffffffffffffffff;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar2;
    func_0x00010c0b4ca0();
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110eb5818,puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(uVar2);
  }
  if (*(char *)(param_1 + 0x138) == '\x01') {
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = param_3;
    func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f42518,puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar2 = param_3;
      func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110daf5b8,puVar1);
      if ((int)uVar2 != 0) {
        uVar23 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar23;
        func_0x00010c0b4ca0();
        _objc_release(uVar23);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar23 = param_3;
        func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110eb58f8,puVar1);
        if ((int)uVar23 == 0) {
          FUN_107bc7628();
        }
        else {
          uVar23 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar23;
          func_0x00010c0b4ca0();
          _objc_release(uVar23);
        }
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar23 = param_3;
        func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110eb5918,puVar1);
        if ((int)uVar23 != 0) {
          uVar23 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = uVar23;
          func_0x00010c0b4ca0();
          _objc_release(uVar23);
        }
        *(ulong *)(param_1 + 0x118) = uVar2;
        *(ulong *)(param_1 + 0x120) = uVar24;
        goto LAB_107be939c;
      }
    }
    else {
      uVar24 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar24;
      func_0x00010c0b4ca0();
      _objc_release(uVar24);
    }
    *(ulong *)(param_1 + 0x118) = uVar23;
  }
LAB_107be939c:
  uVar24 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = uVar24;
  _objc_opt_isKindOfClass(uVar24,puVar1);
  uVar23 = uVar24;
  if ((uVar2 & 1) == 0) {
    uVar23 = 0;
  }
  _objc_retain();
  _objc_release(uVar24);
  uVar24 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar24 != 0) {
    uVar24 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(uVar24);
  }
  FUN_107be2510(param_3);
  uVar24 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar24);
  lVar3 = param_1;
  func_0x00010be45fa0();
  if (lVar3 == -2) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar24 = param_3;
    func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110e72518,puVar1);
    if ((int)uVar24 != 0) {
      uVar24 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(uVar24);
    }
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    func_0x00010c067fc0();
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    _objc_release(uVar4);
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    func_0x00010c067fc0();
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = 0;
    _objc_release(uVar4);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar24 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar24 = 0;
  }
  _objc_retain();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126d7128;
  _objc_alloc();
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar25;
  func_0x000108f52270();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar8 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar10 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar9);
  uVar2 = uVar8;
  if ((uVar10 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar8);
  func_0x000107bdfd38(uVar4,uVar2);
  _objc_release(uVar2);
  uVar8 = param_3;
  FUN_107cb71b8();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar11 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar9);
  uVar2 = uVar10;
  if ((uVar11 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain();
  _objc_release(uVar10);
  uVar11 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar12 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar13 = uVar12;
  _objc_opt_isKindOfClass(uVar12,puVar9);
  uVar10 = uVar12;
  if ((uVar13 & 1) == 0) {
    uVar10 = 0;
  }
  _objc_retain();
  _objc_release(uVar12);
  func_0x00010c0741a0();
  func_0x00010c075d80();
  uVar12 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar14 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar15 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f42298,puVar9);
  if ((int)uVar15 != 0) {
    uVar15 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar15);
  }
  _objc_release(param_3);
  uVar16 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar17 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar9);
  uVar15 = uVar16;
  if ((uVar17 & 1) == 0) {
    uVar15 = 0;
  }
  _objc_retain();
  _objc_release(uVar16);
  uVar17 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar18 = uVar17;
  _objc_opt_isKindOfClass(uVar17,puVar9);
  uVar16 = uVar17;
  if ((uVar18 & 1) == 0) {
    uVar16 = 0;
  }
  _objc_retain(uVar16);
  _objc_release(uVar17);
  uVar18 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  uVar19 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar20 = uVar19;
  _objc_opt_isKindOfClass(uVar19,puVar9);
  uVar17 = uVar19;
  if ((uVar20 & 1) == 0) {
    uVar17 = 0;
  }
  _objc_retain(uVar17);
  _objc_release(uVar19);
  uVar20 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126d7130;
  _objc_opt_class(PTR_PTR_1126d7130);
  uVar22 = uVar21;
  _objc_opt_isKindOfClass(uVar21,puVar9);
  uVar19 = uVar21;
  if ((uVar22 & 1) == 0) {
    uVar19 = 0;
  }
  _objc_retain(uVar19);
  _objc_release(uVar21);
  func_0x00010c01ba60();
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar24);
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  *(undefined **)(param_1 + 0x100) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(uVar18);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  uVar24 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(*(undefined8 *)(param_1 + 0x100));
  _objc_release(uVar24);
  uVar24 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(*(undefined8 *)(param_1 + 0x100));
  _objc_release(uVar24);
  uVar24 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7380(*(undefined8 *)(param_1 + 0x100));
  _objc_release(uVar24);
  uVar24 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb540(*(undefined8 *)(param_1 + 0x100));
  _objc_release(uVar24);
  func_0x00010bed9fa0(param_1);
  _objc_release(uVar23);
  _objc_release(uVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107be9b58; end: 107be9cff; -[SCDiscoverFeedEventsController _extractSectionInformation:] */

void FUN_107be9b58(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x100);
  func_0x00010bfa4340();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar1 == 0) {
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bfa4340(*(undefined8 *)(param_1 + 0x100));
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar2);
  puVar2 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar4);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar4 = param_3;
    func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f41cb8,puVar3);
    if ((int)puVar4 == 0) goto LAB_107be9ca8;
    puVar3 = puVar2;
    func_0x000108f54160();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) goto LAB_107be9ca8;
  }
  func_0x00010c1d0640(param_3);
  _objc_release(puVar3);
LAB_107be9ca8:
  puVar3 = puVar2;
  FUN_107be7704(puVar2,*(undefined8 *)(param_1 + 0xf0));
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    FUN_107cb7eb0(puVar3,&PTR____CFConstantStringClassReference_110f41c98,param_3);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107be9d00; end: 107beaa5b; -[SCDiscoverFeedEventsController _updateDictWithStoryLoggingInfo:data:] */

void FUN_107be9d00(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be0dc60(param_1);
  uVar3 = param_4;
  FUN_107be2510();
  lVar4 = param_3;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar4 = param_3;
    func_0x00010bfa4340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(lVar4);
  }
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar7 = uVar1;
  func_0x00010c067ec0();
  uVar2 = (int)uVar7 - 0xf0;
  if (uVar2 < 0x18 && (1 << (ulong)(uVar2 & 0x1f) & 0x840001U) != 0) {
LAB_107be9e20:
    lVar4 = param_3;
    func_0x00010c11fd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740();
    func_0x00010be38d00();
    _objc_release(lVar4);
LAB_107be9e64:
    if ((int)uVar3 == 0) goto LAB_107be9e7c;
  }
  else {
    if (uVar1 != 0) {
      lVar4 = param_1 + 0x170;
      _objc_loadWeakRetained();
      lVar9 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0(uVar5);
      lVar10 = lVar9;
      func_0x00010c1559e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar9);
      _objc_release(lVar4);
      if (lVar10 != 0) goto LAB_107be9e20;
    }
    lVar4 = param_3;
    func_0x00010c084900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_3;
      func_0x00010c084900(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(lVar4);
      goto LAB_107be9e64;
    }
    if ((int)uVar3 == 0) goto LAB_107be9e7c;
    lVar4 = param_3;
    func_0x00010c11fd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084920();
    _objc_release(lVar4);
  }
  func_0x00010c1d0640(param_4);
LAB_107be9e7c:
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb7eb0();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar12 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar8);
  uVar3 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  func_0x000107bdfd38(uVar12,uVar3);
  _objc_release(uVar3);
  func_0x00010c0df840(puVar6);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb7eb0();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c084c40(param_3);
  func_0x00010c0df780(puVar6);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb7eb0();
  _objc_release(puVar6);
  lVar4 = param_3;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c1d0640(param_4);
  }
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c0ed760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c1d0640(param_4);
  }
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c084ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar4 = param_3;
    func_0x00010c084ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar6);
    }
    else {
      func_0x00010c1d0640(param_4);
    }
    _objc_release(lVar4);
  }
  lVar4 = param_3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar4 = param_3;
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(lVar4);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c084740(param_3);
  func_0x00010c0df780(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c075d80(param_3);
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar6);
  lVar4 = param_3;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c1d0640(param_4);
  }
  _objc_release(lVar9);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010bfe48a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c1d0640(param_4);
  }
  _objc_release(lVar9);
  _objc_release(lVar4);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_3;
  func_0x00010c11fd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b500();
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar6);
  _objc_release(lVar4);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_3;
  func_0x00010c11fd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0724e0();
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar6);
  _objc_release(lVar4);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_3;
  func_0x00010c11fd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f620();
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar6);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c26ebe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c1d0640(param_4);
  }
  _objc_release(lVar9);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c1d0640(param_4);
  }
  _objc_release(lVar9);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar4 != 0) {
    lVar4 = param_3;
    func_0x00010c11fd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080120();
    func_0x00010c0df6e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar6);
    _objc_release(lVar4);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_3;
  func_0x00010c11fd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077320();
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar6);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010beedcc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c1d0640(param_4);
  }
  _objc_release(lVar9);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar9 != 0) {
    lVar4 = param_3;
    func_0x00010bf5b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(lVar4);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c079c60(param_3);
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar6);
  lVar4 = param_3;
  func_0x00010c140ee0();
  if (((lVar4 != 0) && (lVar4 = param_3, func_0x00010c140ee0(), lVar4 != 0)) &&
     (lVar4 = param_3, func_0x00010c140ee0(), puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570,
     lVar4 != -1)) {
    func_0x00010c140ee0(param_3);
    func_0x00010c0df780(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar6);
  }
  lVar4 = param_3;
  func_0x00010c1057a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c105680();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)lVar4 != 0) {
    func_0x00010c105680(param_3);
    func_0x00010c0df6e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar6);
  }
  lVar4 = param_3;
  func_0x00010c1344e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar9 != 0) {
    lVar4 = param_3;
    func_0x00010c1344e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(lVar4);
  }
  param_1 = param_1 + 0x170;
  _objc_loadWeakRetained();
  lVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010c11fd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259740();
  lVar10 = lVar4;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(param_1);
  lVar4 = lVar10;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c154260();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  _objc_release(lVar4);
  if (lVar11 != 0) {
    lVar4 = lVar10;
    func_0x00010c25a160(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x00010c154260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(lVar9);
    _objc_release(lVar4);
  }
  lVar4 = lVar10;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c153ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar9 != 0) {
    lVar4 = lVar10;
    func_0x00010c25a160(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x00010c153ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(lVar9);
    _objc_release(lVar4);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_3;
  func_0x00010c11fd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125a80();
  func_0x00010c0df780(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar6);
  _objc_release(lVar4);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26eba0(param_3);
  func_0x00010c0df780(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar6);
  _objc_release(lVar10);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107beaa5c; end: 107beaafb; -[SCDiscoverFeedEventsController _indexOfStoryWithDedupeFp:feedType:] */

long FUN_107beaa5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    param_1 = param_1 + 0x170;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c2827c0(param_4);
    _objc_release(param_4);
    lVar3 = lVar1;
    func_0x00010bfecbc0(lVar1,param_2,param_3,lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    return lVar3;
  }
  return 0x7fffffffffffffff;
}



/* Entry: 107beaafc; end: 107beab0b; -[SCDiscoverFeedEventsController _logPromotedStoriesFeedItemActionIfNecessary:itemPos:] */

void FUN_107beaafc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ad0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logPromotedStoryOpened_pageSessi_112608e40,
             param_3,*(undefined8 *)(param_1 + 0x18),param_4);
  return;
}



/* Entry: 107beab0c; end: 107beabb7; -[SCDiscoverFeedEventsController _logPromotedStoriesImpressionIfNecessary:data:minimumVisibleFraction:itemPos:] */

void FUN_107beab0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)*(undefined8 *)(param_3 + 0x198);
  uVar3 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x000108f54a98();
  uVar1 = 2;
  if (iVar2 == 0) {
    uVar1 = 3;
  }
  FUN_107c79b74(uVar1,*(undefined8 *)(param_3 + 0x198),*(undefined8 *)(param_3 + 0x1a8));
  func_0x00010c0ad220(param_1,uVar3,param_2,*(undefined8 *)(param_3 + 0x10));
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107beabb8; end: 107beabbf; -[SCDiscoverFeedEventsController _startPromotedStoryViewThroughImpressionIfNecessary:data:] */

void FUN_107beabb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_startPromotedStoryViewThroughImp_112671a40);
  return;
}



/* Entry: 107beabc0; end: 107beabc7; -[SCDiscoverFeedEventsController _endPromotedStoryViewThroughImpressionIfNecessary:data:] */

void FUN_107beabc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_endPromotedStoryViewThroughImpre_1125c2e08);
  return;
}



/* Entry: 107beabc8; end: 107beac7f; -[SCDiscoverFeedEventsController _userDidTakeScreenshot] */

void FUN_107beabc8(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107beac80;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107beac80; end: 107beacab;  */

void FUN_107beac80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee6b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107beacac; end: 107beb0c7; -[SCDiscoverFeedEventsController _userDidTakeScreenshotCorrectQueue] */

void FUN_107beacac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfd3b20(uVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lVar3 = *(long *)(param_1 + 0x108);
    if (lVar3 == 0) {
      lVar3 = param_1 + 0x170;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c1559e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c25c6c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar8);
      }
      else {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    else {
      func_0x00010c25eb80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar8);
      }
      else {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(lVar3);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar1 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010c25eb80(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x100);
      func_0x00010c25a160(uVar7);
      _objc_retainAutoreleasedReturnValue();
      FUN_107cb745c(uVar1,uVar7);
      func_0x00010c0df780(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(uVar1);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c084900(*(undefined8 *)(param_1 + 0x100));
      func_0x00010c0df780(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar8);
      lVar3 = *(long *)(param_1 + 0x100);
      func_0x00010c25a160(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed6e00(param_1);
    }
    _objc_release(lVar3);
    puVar9 = *(undefined **)(param_1 + 0x108);
    func_0x00010bfac960();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar10 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar8);
    puVar8 = puVar9;
    if (((ulong)puVar10 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar9);
    puVar10 = puVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar9 = puVar10;
    _objc_opt_isKindOfClass(puVar10,puVar8);
    puVar8 = puVar10;
    if (((ulong)puVar9 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar10);
    if (puVar8 == (undefined *)0x0) {
      puVar9 = *(undefined **)(param_1 + 0x100);
      func_0x00010bfac960();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar10 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar8);
      puVar8 = puVar9;
      if (((ulong)puVar10 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar9);
      puVar10 = puVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar9 = puVar10;
      _objc_opt_isKindOfClass(puVar10,puVar8);
      puVar8 = puVar10;
      if (((ulong)puVar9 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar10);
      if (puVar8 == (undefined *)0x0) {
        puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar10);
    func_0x00010bdc6020(param_1);
    func_0x00010c1d0640(puVar2);
    puVar8 = puVar2;
    func_0x00010c0d3c80(puVar2);
    func_0x00010be9f120(param_1);
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107beb0c8; end: 107beb19f; -[SCDiscoverFeedEventsController _reloadViewingSessionsWithData:] */

void FUN_107beb0c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  uVar2 = param_3;
  FUN_107cb71b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138080(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  uVar2 = param_3;
  FUN_107cb71b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c138080(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107beb1a0; end: 107beb43f; -[SCDiscoverFeedEventsController _logNavigatePastUpNext:identifier:] */

void FUN_107beb1a0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1d0640(param_3);
  lVar1 = *(long *)(param_1 + 0x110);
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(param_3);
  }
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x110);
  func_0x00010c1554e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(param_3);
  }
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = param_3;
    func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f42258,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_release(param_3);
    }
    else {
      uVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar4 & 1) != 0) goto LAB_107beb3cc;
    }
    _objc_retain(param_3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = param_3;
    func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f42298,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_release(param_3);
    }
    else {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(param_3);
    }
  }
LAB_107beb3cc:
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010c0d3c80(param_3);
  func_0x00010be29640(param_1);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107beb440; end: 107beb48b; -[SCDiscoverFeedEventsController _applicationWillResignActive] */

void FUN_107beb440(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3380(uVar2,param_2,puVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107beb48c; end: 107beb587; -[SCDiscoverFeedEventsController _updateItemViewingSessionWithSubscribeSubitemsToSkip] */

void FUN_107beb48c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar10 = *(long *)(param_1 + 0x168);
  _objc_retain(lVar10);
  puVar9 = auStack_c8;
  lVar2 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_110,puVar9,0x10);
  if (lVar2 != 0) {
    lVar11 = *plStack_100;
    do {
      lVar12 = 0;
      do {
        if (*plStack_100 != lVar11) {
          _objc_enumerationMutation(lVar10);
        }
        uVar3 = *(ulong *)(param_1 + 0x100);
        func_0x00010c289f40(uVar3,param_2,*(undefined8 *)(lStack_108 + lVar12 * 8));
        if ((uVar3 & 1) != 0) goto LAB_107beb54c;
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar9 = auStack_c8;
      lVar2 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_110,puVar9,0x10);
    } while (lVar2 != 0);
  }
LAB_107beb54c:
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126b2930;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(puVar9);
  func_0x00010bf70ea0(puVar4);
  func_0x00010c0df780(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar9,param_2,puVar5,&PTR____CFConstantStringClassReference_110f42b98);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar6 = puVar9;
  func_0x00010c0e00e0(puVar9,param_2,&PTR____CFConstantStringClassReference_110f41e98);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0b4fe0();
  uVar1 = 0x16;
  if (puVar7 != (undefined1 *)0x1) {
    uVar1 = 0x2a;
  }
  func_0x00010c0df780(puVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar9,param_2,puVar5,&PTR____CFConstantStringClassReference_110eb5238);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar5 = PTR_PTR_1126c4600;
  _objc_alloc_init(PTR_PTR_1126c4600);
  puVar4 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010bf5e460();
  func_0x00010c180de0(puVar5,param_2,puVar8);
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar9,param_2,puVar5,&PTR____CFConstantStringClassReference_110f42cb8);
  func_0x00010be9f120(lVar10,param_2,&PTR____CFConstantStringClassReference_110e6cf78,puVar9,1);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107beb588; end: 107beb6eb; -[SCDiscoverFeedEventsController _handlePlaybackStallCountWithIdentifier:data:] */

void FUN_107beb588(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126b2930;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010bf70ea0(puVar2);
  func_0x00010c0df780(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4,param_2,puVar3,&PTR____CFConstantStringClassReference_110f42b98);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f41e98);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b4fe0();
  uVar1 = 0x16;
  if (lVar5 != 1) {
    uVar1 = 0x2a;
  }
  func_0x00010c0df780(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4,param_2,puVar3,&PTR____CFConstantStringClassReference_110eb5238);
  _objc_release(puVar3);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126c4600;
  _objc_alloc_init(PTR_PTR_1126c4600);
  puVar2 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf5e460();
  func_0x00010c180de0(puVar3,param_2,puVar6);
  _objc_release(puVar2);
  func_0x00010c1d0640(param_4,param_2,puVar3,&PTR____CFConstantStringClassReference_110f42cb8);
  func_0x00010be9f120(param_1,param_2,&PTR____CFConstantStringClassReference_110e6cf78,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107beb6ec; end: 107beb9bb; -[SCDiscoverFeedEventsController _setFeedPageViewWithOpenTimestamp:sections:pageType:pageTypeSpecific:pageSessionId:] */

void FUN_107beb6ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [128];
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar10 = param_1;
  func_0x00010be9d080(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  lStack_208 = lVar10;
  func_0x00010bf51e00();
  lStack_200 = param_6;
  lStack_1f8 = param_3;
  func_0x00010bf561c0(uVar11,param_2,param_3,lVar10,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    param_3 = *plStack_1a0;
    do {
      param_6 = 0;
      do {
        if (*plStack_1a0 != param_3) {
          _objc_enumerationMutation(lVar1);
        }
        uVar13 = *(undefined8 *)(lStack_1a8 + param_6 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c0e00e0(uVar3,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        param_4 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010c0e00e0(param_4,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_4;
        func_0x00010c2827c0();
        func_0x00010c155ca0(uVar11,param_2,uVar13,uVar3,uVar4);
        _objc_release(param_4);
        _objc_release(uVar3);
        param_6 = param_6 + 1;
      } while (lVar2 != param_6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_1b0,auStack_f0,0x10);
      lVar10 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_1f0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    param_3 = *plStack_1e0;
    do {
      param_6 = 0;
      do {
        if (*plStack_1e0 != param_3) {
          _objc_enumerationMutation(lVar1);
        }
        param_4 = *(undefined8 *)(lStack_1e8 + param_6 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c0e00e0(uVar3,param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c067fc0();
        func_0x00010c155cc0(uVar11,param_2,param_4,uVar4);
        _objc_release(uVar3);
        param_6 = param_6 + 1;
      } while (lVar2 != param_6);
      puVar8 = &uStack_1f0;
      lVar2 = lVar1;
      func_0x00010bf52a60();
      lVar10 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(uVar11);
  _objc_release(lStack_208);
  _objc_release(param_7);
  _objc_release(lStack_200);
  _objc_release(lStack_1f8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_107beb9bc;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_260 = lVar10;
  lStack_258 = lVar1;
  uStack_250 = uVar11;
  uStack_248 = param_4;
  lStack_240 = param_1;
  uStack_238 = param_7;
  lStack_230 = param_6;
  lStack_228 = param_3;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(puVar8);
  puVar6 = puVar8;
  func_0x00010bf52a60(puVar8,param_2,&uStack_330,auStack_2e8,0x10);
  if (puVar6 != (undefined8 *)0x0) {
    lVar10 = *plStack_320;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_320 != lVar10) {
          _objc_enumerationMutation(puVar8);
        }
        uVar9 = *(ulong *)(lStack_328 + (long)puVar12 * 8);
        uVar7 = uVar9;
        func_0x00010c0720c0(uVar9,param_2,&PTR____CFConstantStringClassReference_110f4b1d8);
        if ((uVar7 & 1) == 0) {
          func_0x00010befa120(puVar5,param_2,uVar9);
        }
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar6 != puVar12);
      puVar6 = puVar8;
      func_0x00010bf52a60(puVar8,param_2,&uStack_330,auStack_2e8,0x10);
    } while (puVar6 != (undefined8 *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  puVar8 = puVar8 + 0x2f;
  _objc_loadWeakRetained(puVar8);
  func_0x00010bf3be00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 107beb9bc; end: 107bebafb; -[SCDiscoverFeedEventsController _sectionTypesToSCAFeedPageSectionString:] */

void FUN_107beb9bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(ulong *)(lStack_118 + lVar6 * 8);
        uVar3 = uVar4;
        func_0x00010c0720c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f4b1d8);
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar1,param_2,uVar4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  param_3 = param_3 + 0x178;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf3be00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


