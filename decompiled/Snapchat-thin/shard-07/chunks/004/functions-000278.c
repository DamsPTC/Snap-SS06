/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10550daf0; end: 10550db37; -[SCGroupsDataCreator nativeConversationManager] */

void FUN_10550daf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10550db38; end: 10550db53; -[SCGroupsDataCreator createLocalGroupWithSnapchatters:source:completion:callbackQueue:] */

void FUN_10550db38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdee510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createGroupWithName_snapchatter_1125592e0,
             &PTR____CFConstantStringClassReference_110daafd8,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10550db54; end: 10550dceb; -[SCGroupsDataCreator createGroupOnServerIfNecessary:source:completion:] */

void FUN_10550db54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_5);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_5 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10550dcec;
    puStack_60 = &UNK_110842508;
    _objc_retain(param_5);
    lStack_58 = param_5;
    _objc_retain(param_3);
    ppuVar1 = &puStack_78;
    _objc_retainBlock();
    puVar2 = PTR_PTR_1126ba320;
    _objc_alloc(PTR_PTR_1126ba320);
    puStack_a0 = puVar3;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x10550dd88;
    puStack_88 = &UNK_110893cd0;
    _objc_retain(ppuVar1);
    puStack_c8 = puVar3;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x10550dd98;
    puStack_b0 = &UNK_110852668;
    ppuStack_a8 = ppuVar1;
    ppuStack_80 = ppuVar1;
    _objc_retain(ppuVar1);
    func_0x00010c04f540(puVar2,param_2,&puStack_a0,&puStack_c8);
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf967c0(param_1,param_2,puVar3,puVar2);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(ppuStack_a8);
    _objc_release(ppuStack_80);
    _objc_release(ppuVar1);
    _objc_release(lStack_58);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10550dcec; end: 10550dd67;  */

void FUN_10550dcec(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10550dd68;
  puStack_38 = &UNK_11084a9b8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  uStack_28 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  return;
}



/* Entry: 10550dd68; end: 10550dda7;  */

void FUN_10550dd68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010550dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),0,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 10550dda8; end: 10550de63; -[SCGroupsDataCreator createGroupWithName:snapchatters:source:completion:] */

void FUN_10550dda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdee500(param_1,param_2,param_3,param_4,param_5,param_6,uVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10550de64; end: 10550e08b; -[SCGroupsDataCreator exitCreationSessionWithGroupIds:] */

void FUN_10550de64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
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
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_f8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_130;
    do {
      lVar6 = 0;
      do {
        if (*plStack_130 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126b0cd8;
        func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,*(undefined8 *)(lStack_138 + lVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar3);
        _objc_release(puVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_f8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_10550e08c;
  puStack_150 = &UNK_110842e18;
  _objc_retain(param_3);
  puStack_190 = puVar3;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x10550e090;
  puStack_178 = &UNK_110855e40;
  lStack_170 = param_3;
  lStack_148 = param_3;
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar4,param_2,&puStack_168,&puStack_190);
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d000();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(lStack_170);
  _objc_release(lStack_148);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10550e08c; end: 10550e093;  */

void FUN_10550e08c(void)

{
  return;
}



/* Entry: 10550e094; end: 10550e0cf; -[SCGroupsDataCreator maxParticipantsAllowedInGroup] */

undefined8 FUN_10550e094(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x000108ef1f68(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 10550e0d0; end: 10550e10f; -[SCGroupsDataCreator maxParticipantsAllowedInCommunityGroup] */

undefined8 FUN_10550e0d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10550e110; end: 10550e33f; -[SCGroupsDataCreator _createGroupWithName:snapchatters:source:completion:callbackQueue:] */

void FUN_10550e110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ba320;
  _objc_alloc(PTR_PTR_1126ba320);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10550e340;
  puStack_98 = &UNK_110893d00;
  uStack_90 = param_1;
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_retain(param_7);
  uStack_88 = param_7;
  _objc_copyWeak(auStack_b8,auStack_78);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c04f540(puVar1);
  uVar2 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110893d80);
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf557e0();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10550e340; end: 10550e3eb;  */

void FUN_10550e340(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010be97cc0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10550e3ec; end: 10550e43f;  */

void FUN_10550e3ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c272380(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10550e440; end: 10550e4d3;  */

void FUN_10550e440(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10550e4d4;
  puStack_40 = &UNK_110849530;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010be97cc0(lVar1,param_2,&puStack_58,*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar1);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10550e4d4; end: 10550e4eb;  */

void FUN_10550e4d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010550e4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 10550e4ec; end: 10550e543;  */

void FUN_10550e4ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10550e544; end: 10550e5db; -[SCGroupsDataCreator _runBlock:onQueue:] */

void FUN_10550e544(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10550e5dc;
    puStack_30 = &UNK_110849530;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010007380c(param_4,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10550e5dc; end: 10550e5e7;  */

void FUN_10550e5dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010550e5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10550e5e8; end: 10550e62f; -[SCGroupsDataCreator .cxx_destruct] */

void FUN_10550e5e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10550e630; end: 10550e677; -[SCGroupsDataFetcher nativeConversationManager] */

void FUN_10550e630(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10550e678; end: 10550e69f;  */

void FUN_10550e678(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bd869d0(param_2,&PTR___NSConcreteGlobalBlock_110893dc0,
                      &PTR___NSConcreteGlobalBlock_110893de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10550e6a0; end: 10550e70f;  */

void FUN_10550e6a0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10550e710; end: 10550e84f; -[SCGroupsDataFetcher getGroupById:completion:callbackQueue:] */

void FUN_10550e710(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    func_0x00010c08fa60(param_3);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10550e850;
    puStack_58 = &UNK_11085c828;
    _objc_retain(param_5);
    uStack_50 = param_5;
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retainBlock();
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010bfce700();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 == 0) || (uVar3 = uVar2, func_0x00010c079960(), (uVar3 & 1) != 0)) {
      func_0x00010be11860(param_1);
    }
    else if (ppuVar1 != (undefined **)0x0) {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,uVar2);
    }
    _objc_release(uVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10550e850; end: 10550e8ef;  */

void FUN_10550e850(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10550e8f0;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = param_2;
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10550e8f0; end: 10550e8ff;  */

void FUN_10550e8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010550e8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10550e900; end: 10550ebe3; -[SCGroupsDataFetcher getGroupByIds:completion:callbackQueue:] */

void FUN_10550e900(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf00160();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = uVar3;
    _objc_retain();
    _dispatch_group_create();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_3);
    lVar5 = param_3;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar8 = *plStack_140;
      do {
        lVar9 = 0;
        do {
          if (*plStack_140 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          lVar10 = *(long *)(lStack_148 + lVar9 * 8);
          lVar6 = lVar10;
          func_0x00010c08fa60();
          if (lVar6 != 0) {
            lVar6 = lVar1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((lVar6 == 0) || (lVar7 = lVar6, func_0x00010c079960(), (int)lVar7 != 0)) {
              _dispatch_group_enter(uVar4);
              puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_180 = 0xc2000000;
              pcStack_178 = FUN_10550ebe4;
              puStack_170 = &UNK_110893e00;
              _objc_retain(puVar2);
              puStack_168 = puVar2;
              lStack_160 = lVar10;
              _objc_retain(uVar4);
              uStack_158 = uVar4;
              func_0x00010be11860(param_1);
              _objc_release(uStack_158);
              _objc_release(puStack_168);
            }
            _objc_release(lVar6);
          }
          lVar9 = lVar9 + 1;
        } while (lVar5 != lVar9);
        lVar5 = param_3;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(param_3);
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    pcStack_1b8 = FUN_10550ec14;
    puStack_1b0 = &UNK_1108465d0;
    _objc_retain(param_4);
    lStack_190 = param_4;
    _objc_retain(param_3);
    lStack_1a8 = param_3;
    puStack_1a0 = puVar2;
    lStack_198 = lVar1;
    _objc_retain(lVar1);
    _objc_retain(puVar2);
    param_2 = param_5;
    func_0x000100bc0718(uVar4,param_5,&puStack_1c8);
    _objc_release(lStack_198);
    _objc_release(puStack_1a0);
    _objc_release(lStack_1a8);
    _objc_release(lStack_190);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 10550ebe4; end: 10550ec13;  */

void FUN_10550ebe4(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,param_2,
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10550ec14; end: 10550ed4b;  */

void FUN_10550ec14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10550ecc4;
  puStack_48 = &UNK_110893e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x000100504554(uVar2,&puStack_60);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
  _objc_release(uVar2);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_40);
  return;
}



/* Entry: 10550ed4c; end: 10550ee23; -[SCGroupsDataFetcher fetchGroupFutureForId:callbackQueue:] */

void FUN_10550ed4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10550ee24;
  puStack_40 = &UNK_110893e60;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010bfc6120(param_1,param_2,param_3,&puStack_58,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10550ee24; end: 10550ee93;  */

void FUN_10550ee24(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,0,
                      &PTR____CFConstantStringClassReference_110de80d8,
                      &PTR____CFConstantStringClassReference_110de80f8,200);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10550ee94; end: 10550efc7; -[SCGroupsDataFetcher getGroupByParticipants:completion:callbackQueue:] */

void FUN_10550ee94(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10550efc8; end: 10550efff;  */

void FUN_10550efc8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1f7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10550f000; end: 10550f127; -[SCGroupsDataFetcher _getGroupByParticipants:completion:callbackQueue:] */

void FUN_10550f000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf00160();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  FUN_10550f128(uVar1,param_3,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10550f2fc;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x00010007380c(param_5,&puStack_70);
  _objc_release(param_5);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 10550f128; end: 10550f2fb;  */

void FUN_10550f128(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar9 = *(long *)(lVar7 * 8);
        lVar3 = lVar9;
        func_0x00010c0ecc20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x000108ef5198();
        _objc_release(lVar3);
        puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
        if ((int)lVar4 != 0) {
          if (lVar8 != 0) {
            lVar3 = lVar9;
            func_0x00010c0891c0(lVar9);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar8;
            func_0x00010c0891c0(lVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c070240();
            _objc_release(lVar4);
            _objc_release(lVar3);
            if ((int)puVar5 == 0) goto LAB_10550f274;
          }
          _objc_retain(lVar9);
          _objc_release(lVar8);
          lVar8 = lVar9;
        }
LAB_10550f274:
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010550f308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 10550f2fc; end: 10550f30b;  */

void FUN_10550f2fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010550f308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10550f30c; end: 10550f40f; -[SCGroupsDataFetcher getAllGroupsWithCompletion:callbackQueue:] */

void FUN_10550f30c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10550f410; end: 10550f443;  */

void FUN_10550f410(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1ce00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10550f444; end: 10550f52b; -[SCGroupsDataFetcher _getAllGroupsWithCompletion:callbackQueue:] */

void FUN_10550f444(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00160();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,uVar1);
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10550f52c;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    func_0x00010007380c(param_4,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10550f52c; end: 10550f53b;  */

void FUN_10550f52c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010550f538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10550f53c; end: 10550f63b; -[SCGroupsDataFetcher getAllGroupsByRecencyWithCompletion:callbackQueue:] */

void FUN_10550f53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10550f5d0;
  puStack_40 = &UNK_110865eb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfc2320(param_1,param_2,&puStack_58,param_4);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10550f63c; end: 10550f6c7; -[SCGroupsDataFetcher getGroupByParticipants:] */

void FUN_10550f63c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf00160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10550f128();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10550f6c8; end: 10550f70f; -[SCGroupsDataFetcher getAllGroups] */

void FUN_10550f6c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10550f710; end: 10550f717; -[SCGroupsDataFetcher getAllGroupsDict] */

void FUN_10550f710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_allGroups_11259da00);
  return;
}



/* Entry: 10550f718; end: 10550f787; -[SCGroupsDataFetcher getRecentGroups] */

void FUN_10550f718(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10550f788; end: 10550f7cb; -[SCGroupsDataFetcher getNewGroups] */

void FUN_10550f788(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfc9680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001006372a4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10550f7cc; end: 10550f86f;  */

bool FUN_10550f7cc(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar2 = param_3;
  dVar3 = param_1;
  func_0x00010bf5ab40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c26f320(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1 - dVar3 < 86400.0;
}



/* Entry: 10550f870; end: 10550f8fb; -[SCGroupsDataFetcher getGroupWithId:] */

void FUN_10550f870(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bfce700(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c079960(), (int)lVar2 != 0)) {
      func_0x00010be11860(param_1,param_2,param_3,0,0);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10550f8fc; end: 10550f9bb; -[SCGroupsDataFetcher getGroupsWithIds:] */

void FUN_10550f8fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf00160();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10550f9bc;
    puStack_40 = &UNK_110854720;
    uStack_38 = uVar1;
    _objc_retain();
    lVar2 = param_3;
    func_0x000100504554(param_3,&puStack_58);
    _objc_release(uStack_38);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10550f9bc; end: 10550f9c7;  */

void FUN_10550f9bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 10550f9c8; end: 10550fa3f; -[SCGroupsDataFetcher updatePartialGroupIfNeededForGroupId:] */

void FUN_10550f9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfce700(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c079960(), (int)lVar2 != 0)) {
    func_0x00010be11860(param_1,param_2,param_3,0,0);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10550fa40; end: 10550faa7; -[SCGroupsDataFetcher displayNameForGroupId:] */

void FUN_10550fa40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bf85ec0(param_1,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10550faa8; end: 10550fb37; -[SCGroupsDataFetcher displayNameForGroup:] */

void FUN_10550faa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x000108ef3728(param_3,*(undefined8 *)(param_1 + 0x38),uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10550fb38; end: 10550fba3; -[SCGroupsDataFetcher displayNameForGroupParticipant:] */

void FUN_10550fb38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf85f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10550fba4; end: 10550fe43; -[SCGroupsDataFetcher _fetchGroupFromNativeForGroupId:callstack:completion:] */

void FUN_10550fba4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  ppuVar3 = &puStack_e0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    func_0x00010bf529e0();
    uVar1 = param_4;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10550fe44;
    puStack_90 = &UNK_110893ed0;
    _objc_retain(param_5);
    lStack_88 = param_5;
    _objc_copyWeak(auStack_80,auStack_78);
    ppuVar2 = &puStack_a8;
    _objc_retainBlock(ppuVar2);
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10550fec0;
    puStack_c8 = &UNK_110875d70;
    _objc_retain(param_3);
    lStack_c0 = param_3;
    _objc_retain(uVar1);
    uStack_b8 = uVar1;
    _objc_retain(param_5);
    lStack_b0 = param_5;
    _objc_retainBlock();
    puVar4 = PTR_PTR_1126ba338;
    _objc_alloc(PTR_PTR_1126ba338);
    func_0x00010c04f540();
    puVar5 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      (**(code **)((long)ppuVar3 + 0x10))(ppuVar3,0);
    }
    else {
      func_0x00010c0d58a0();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        (**(code **)((long)ppuVar3 + 0x10))(ppuVar3,0);
      }
      else {
        func_0x00010bfa5f00(param_1);
      }
      _objc_release(param_1);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_release(lStack_b0);
    _objc_release(uStack_b8);
    _objc_release(lStack_c0);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_80);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_78);
    param_4 = uVar1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10550fe44; end: 10550febf;  */

void FUN_10550fe44(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf509a0();
  if (lVar1 == 1) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be29800();
    _objc_release(param_1);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10550fec0; end: 10550fed7;  */

void FUN_10550fec0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010550fed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 10550fed8; end: 10550ff6f; -[SCGroupsDataFetcher _handleFetchConversationSuccessWithConversation:completion:] */

void FUN_10550fed8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28f100(uVar3,param_2,param_3,uVar2,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10550ff70; end: 10550fff3; -[SCGroupsDataFetcher .cxx_destruct] */

void FUN_10550ff70(long param_1)

{
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



/* Entry: 10550fff4; end: 1055101b7; -[SCGroupsDataMutator initWithNativeSessionManager:groupsDataFetcher:selfUserId:configProvider:userTrackedLogger:messagingExperimentService:] */

undefined8 *
FUN_10550fff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e8cd0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1055101b8; end: 105510213;  */

void FUN_1055101b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c2900();
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105510214; end: 10551025b; -[SCGroupsDataMutator nativeConversationManager] */

void FUN_105510214(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10551025c; end: 1055104e7; -[SCGroupsDataMutator addToGroupWithId:snapchatters:phoneNumbers:source:completion:] */

void FUN_10551025c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110893f00);
  uVar3 = param_5;
  func_0x000100504554(param_5,&PTR___NSConcreteGlobalBlock_110893f40);
  puVar4 = PTR_PTR_1126ba348;
  _objc_alloc(PTR_PTR_1126ba348);
  func_0x00010c049600();
  _objc_initWeak(auStack_80,param_1);
  puVar5 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_88 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_7);
  func_0x00010c04f4c0(puVar5);
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a920();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055104e8; end: 10551058b;  */

void FUN_1055104e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10551058c; end: 10551064f;  */

void FUN_10551058c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be50100(lVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105510650;
    puStack_48 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = uVar3;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105510650; end: 105510673;  */

void FUN_105510650(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010551066c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105510674; end: 10551073f;  */

void FUN_105510674(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1055106ec;
    puStack_30 = &UNK_110849530;
    _objc_retain(lVar1);
    lStack_28 = lVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  return;
}



/* Entry: 105510740; end: 105510957; -[SCGroupsDataMutator grantGroupExemptBlockedUsersWithId:newBlockedParticipantExceptions:completion:callbackQueue:] */

void FUN_105510740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b0cd8;
  _objc_retain(param_4);
  func_0x00010bdc35c0(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf002e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010c0b8600(uVar3,param_2,&PTR___NSConcreteGlobalBlock_110893f80);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105510968;
  puStack_90 = &UNK_11084a9e8;
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_retain(param_6);
  uStack_88 = param_6;
  _objc_retain(param_3);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105510a18;
  puStack_c8 = &UNK_110875d70;
  uStack_c0 = param_6;
  uStack_b8 = param_3;
  uStack_b0 = param_5;
  uStack_80 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c04f4c0(puVar5,param_2,&puStack_a8,&puStack_e0);
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7200();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_78);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 105510958; end: 105510967;  */

void FUN_105510958(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0cd8,PTR_s_UUIDWithString__11254e710,param_2);
  return;
}



/* Entry: 105510968; end: 105510a07;  */

void FUN_105510968(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if ((lVar3 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105510a08;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lStack_38 = lVar3;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  return;
}



/* Entry: 105510a08; end: 105510a17;  */

void FUN_105510a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105510a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105510a18; end: 105510abb;  */

void FUN_105510a18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if ((lVar3 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105510abc;
    puStack_50 = &UNK_11085b7b0;
    uStack_38 = param_2;
    _objc_retain(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lStack_40 = lVar3;
    _objc_retain(uVar2);
    uStack_48 = uVar2;
    func_0x00010007380c(lVar1,&puStack_68);
    _objc_release(uStack_48);
    _objc_release(lStack_40);
  }
  return;
}



/* Entry: 105510abc; end: 105510acb;  */

void FUN_105510abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105510ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105510acc; end: 105510cdb; -[SCGroupsDataMutator grantGroupNonFriendUserParticipantExceptionsWithId:nonFriendUserIds:completion:callbackQueue:] */

void FUN_105510acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b0cd8;
  _objc_retain(param_4);
  func_0x00010bdc35c0(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf00560(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010c0b8600(uVar3,param_2,&PTR___NSConcreteGlobalBlock_110893fa0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105510cec;
  puStack_80 = &UNK_11084a9e8;
  _objc_retain(param_5);
  uStack_68 = param_5;
  _objc_retain(param_6);
  uStack_78 = param_6;
  _objc_retain(param_3);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105510da0;
  puStack_b8 = &UNK_110875d70;
  uStack_b0 = param_6;
  uStack_a8 = param_3;
  uStack_a0 = param_5;
  uStack_70 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c04f4c0(puVar5,param_2,&puStack_98,&puStack_d0);
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa080();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 105510cdc; end: 105510ceb;  */

void FUN_105510cdc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0cd8,PTR_s_UUIDWithString__11254e710,param_2);
  return;
}



/* Entry: 105510cec; end: 105510d8b;  */

void FUN_105510cec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if ((lVar3 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105510d8c;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lStack_38 = lVar3;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  return;
}



/* Entry: 105510d8c; end: 105510d9f;  */

void FUN_105510d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105510d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),1);
  return;
}



/* Entry: 105510da0; end: 105510e43;  */

void FUN_105510da0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if ((lVar3 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105510e44;
    puStack_50 = &UNK_11085b7b0;
    uStack_38 = param_2;
    _objc_retain(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lStack_40 = lVar3;
    _objc_retain(uVar2);
    uStack_48 = uVar2;
    func_0x00010007380c(lVar1,&puStack_68);
    _objc_release(uStack_48);
    _objc_release(lStack_40);
  }
  return;
}



/* Entry: 105510e44; end: 105510e57;  */

void FUN_105510e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105510e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105510e58; end: 105510fa7; -[SCGroupsDataMutator leaveGroupWithId:completion:] */

void FUN_105510e58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6120(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105510fa8; end: 105510ffb;  */

void FUN_105510fa8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be49dc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105510ffc; end: 105511297; -[SCGroupsDataMutator updateGroupNameWithId:groupName:completion:] */

void FUN_105510ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9c98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_5);
  _objc_retain(ppuVar1);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,ppuVar1,2,param_3);
  }
  else {
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284a60();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105511298; end: 1055113a3;  */

void FUN_105511298(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be5a220();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055112e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1055113a4; end: 10551143f;  */

void FUN_1055113a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 4) {
    lVar1 = param_1;
    func_0x00010551a878();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,lVar1,1,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010551143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))
            (lVar2,0,*(undefined8 *)(param_1 + 0x20),2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105511440; end: 10551164f; -[SCGroupsDataMutator updateGroupChatNotificationWithId:mentionNotificationOn:chatNotificationOn:muteAction:source:completion:] */

void FUN_105511440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  _objc_copyWeak(auStack_a0,auStack_80);
  _objc_retain(param_3);
  uStack_98 = param_6;
  uStack_90 = param_7;
  uStack_88 = param_4;
  uStack_87 = param_5;
  _objc_retain(param_8);
  _objc_retain(param_8);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar1);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284440();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_8);
  _objc_release(param_3);
  return;
}



/* Entry: 105511650; end: 105511717;  */

void FUN_105511650(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be519a0(lVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105511718;
    puStack_48 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = uVar3;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105511718; end: 10551173b;  */

void FUN_105511718(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105511734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10551173c; end: 1055117cf;  */

void FUN_10551173c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1055117d0;
  puStack_40 = &UNK_11085b7b0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_release(uStack_30);
  return;
}



/* Entry: 1055117d0; end: 105511843;  */

void FUN_1055117d0(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de8138;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110de8138,0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 105511844; end: 105511a27; -[SCGroupsDataMutator updateGroupCallingNotificationWithId:notificationOn:source:completion:] */

void FUN_105511844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_70 = param_4;
  _objc_retain(param_3);
  uStack_78 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar1);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2840c0();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105511a28; end: 105511af7;  */

void FUN_105511a28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be51020(lVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105511af8;
    puStack_48 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = uVar3;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105511af8; end: 105511b1b;  */

void FUN_105511af8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105511b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105511b1c; end: 105511baf;  */

void FUN_105511b1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105511bb0;
  puStack_40 = &UNK_11085b7b0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_release(uStack_30);
  return;
}



/* Entry: 105511bb0; end: 105511c23;  */

void FUN_105511bb0(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de8138;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110de8138,0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 105511c24; end: 105511e07; -[SCGroupsDataMutator updateTemporaryGroupChatNotificationWithId:muteDurationMinutes:source:completion:] */

void FUN_105511c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  uStack_78 = param_5;
  uStack_70 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar1);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ad60();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105511e08; end: 105511ecb;  */

void FUN_105511e08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be519c0(lVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105511ecc;
    puStack_48 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = uVar3;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105511ecc; end: 105511eef;  */

void FUN_105511ecc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105511ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105511ef0; end: 105511f83;  */

void FUN_105511ef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105511f84;
  puStack_40 = &UNK_11085b7b0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_release(uStack_30);
  return;
}



/* Entry: 105511f84; end: 105511ff7;  */

void FUN_105511f84(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de8138;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110de8138,0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 105511ff8; end: 1055121db; -[SCGroupsDataMutator updateTemporaryGroupCallingNotificationWithId:muteDurationMinutes:source:completion:] */

void FUN_105511ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_70 = param_4;
  _objc_retain(param_3);
  uStack_78 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar1);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ad40();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1055121dc; end: 1055122cb;  */

void FUN_1055121dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be51020(lVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1055122cc;
    puStack_48 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = uVar3;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}


